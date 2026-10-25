// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141f4e6f0 FindProperty body=209 status=ok
// SIG undefined FindProperty(void)

longlong FTrackInstancePropertyBindings::FindProperty
                   (longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_141594550(param_3,&local_18,&DAT_144f1823c,1);
  if ((int)local_10 < 1) {
    FWeakObjectPtr::operator=(param_1,0);
    *(undefined8 *)(param_1 + 8) = 0;
    plVar1 = local_18;
    for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
  }
  else {
    FUN_141f4e9c0(param_1,param_2,*(undefined8 *)(param_2 + 0x10),&local_18,0);
    plVar1 = local_18;
    for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return param_1;
}



// FUNCTION 141f4e7d0 FUN_141f4e7d0 body=496 status=ok
// SIG undefined FUN_141f4e7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141f4e7d0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 local_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iStack_68 = -1;
  iVar7 = (int)param_3[1];
  iVar6 = iVar7 + -1;
  iVar2 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = -1;
    iVar2 = -1;
  }
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  local_60 = param_2;
  if (0 < iVar6) {
    pwVar5 = (wchar_t *)*param_3;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    if (pwVar5[(longlong)iVar2 + -1] == L']') {
      pwVar3 = pwVar5 + iVar7;
      do {
        if (pwVar3 == pwVar5) goto LAB_141f4e850;
        pwVar3 = pwVar3 + -1;
      } while (*pwVar3 != L'[');
      iVar2 = (int)((longlong)pwVar3 - (longlong)pwVar5 >> 1);
      if (iVar2 != -1) {
        iVar6 = iVar2 + 1;
        pwVar3 = L"";
        if (iVar7 != 0) {
          pwVar3 = pwVar5;
        }
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        iVar7 = iVar6;
        if (iVar2 == 0) {
          iVar7 = 0;
        }
        pwVar5 = local_58;
        local_78 = iVar6;
        local_50 = iVar7;
        if ((0 < iVar7) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), iVar7 = local_50,
           pwVar5 = local_58, 0 < local_50)) {
          wcsncpy(local_58,pwVar3,(longlong)iVar2);
          pwVar5[iVar2] = L'\0';
          iVar6 = local_78;
        }
        pwVar3 = L"";
        if (iVar7 != 0) {
          pwVar3 = pwVar5;
        }
        local_70 = FUN_1408e1350(local_60,pwVar3);
        iVar7 = (int)param_3[1] + -1;
        if ((int)param_3[1] == 0) {
          iVar7 = 0;
        }
        if ((iVar7 - iVar2) - 3U < 10) {
          _guard_xfg_dispatch_icall_nop
                    (&local_58,(void *)(*param_3 + (longlong)iVar6 * 2),
                     (longlong)((iVar7 - iVar2) + -2) * 2);
          iStack_68 = _wtoi((wchar_t *)&local_58);
        }
        *(undefined4 *)param_1 = (undefined4)local_70;
        *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
        *(int *)(param_1 + 1) = iStack_68;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_64;
        if (pwVar5 == (wchar_t *)0x0) {
          return param_1;
        }
        FMemory::Free(pwVar5);
        return param_1;
      }
    }
  }
LAB_141f4e850:
  if (iVar7 == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  uVar1 = FUN_1408e1350(param_2,puVar4);
  *param_1 = uVar1;
  param_1[1] = CONCAT44(uStack_64,iStack_68);
  return param_1;
}



// FUNCTION 141f4e9c0 FUN_141f4e9c0 body=640 status=ok
// SIG undefined FUN_141f4e9c0(void)

undefined4 *
FUN_141f4e9c0(undefined4 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  short *psVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  int local_30;
  
  puVar5 = (undefined8 *)((longlong)param_5 * 0x10 + *param_4);
  if (*(int *)(puVar5 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*puVar5;
  }
  lVar4 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar6[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_50 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar6,(longlong)(int)uVar7 * 2);
  }
  FUN_141f4e7d0(&local_38,param_3,&local_58);
  if (local_58 != 0) {
    FMemory::Free();
  }
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  if (local_30 == -1) {
    if (local_38 != 0) {
      lVar4 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_38 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_38 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = param_2;
      if (bVar2) {
        FWeakObjectPtr::operator=(&local_48,local_38);
        param_5 = param_5 + 1;
        if ((param_5 < 0) || ((int)param_4[1] <= param_5)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_40 = param_2;
          FUN_141f4e9c0(param_1,*(int *)(local_38 + 0x44) + param_2,*(undefined8 *)(local_38 + 0x70)
                        ,param_4,param_5);
          return param_1;
        }
      }
      else {
        FWeakObjectPtr::operator=(&local_48,local_38);
      }
    }
  }
  else {
    plVar9 = (longlong *)(*(int *)(local_38 + 0x44) + param_2);
    lVar8 = *(longlong *)(local_38 + 0x70);
    iVar1 = *(int *)(lVar8 + 0x34);
    if ((local_30 < 0) || ((int)plVar9[1] <= local_30)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (lVar8 != 0) {
        lVar3 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          param_5 = param_5 + 1;
          if ((param_5 < 0) || ((int)param_4[1] <= param_5)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if ((int)plVar9[1] != 0) {
              lVar4 = (longlong)(iVar1 * local_30) + *plVar9;
            }
            FUN_141f4e9c0(param_1,lVar4,*(undefined8 *)(lVar8 + 0x70),param_4,param_5);
            return param_1;
          }
        }
      }
      FWeakObjectPtr::operator=(&local_48,*(undefined8 *)(local_38 + 0x70));
      if ((int)plVar9[1] != 0) {
        lVar4 = (longlong)(iVar1 * local_30) + *plVar9;
      }
    }
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  *(longlong *)(param_1 + 2) = lVar4;
  return param_1;
}



// FUNCTION 141f4ec40 FindRange body=372 status=ok
// SIG undefined FindRange(void)

void MovieScene::FindRange
               (longlong *param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = 0;
  lVar2 = *param_1;
  uVar15 = (longlong)(int)uVar1;
  if (uVar1 != 0) {
    do {
      uVar16 = uVar15 >> 1;
      if (*(int *)(lVar2 + (uVar16 + uVar5) * 4) < param_2) {
        uVar5 = (ulonglong)((uint)uVar15 & 1) + uVar16 + uVar5;
      }
      uVar15 = uVar16;
    } while (uVar16 != 0);
  }
  iVar13 = (int)uVar5;
  uVar8 = iVar13 - 1;
  uVar15 = uVar5 & 0xffffffff;
  if (param_4 < 1) {
    *param_5 = iVar13;
    *param_6 = iVar13;
    return;
  }
  lVar12 = (longlong)(int)uVar8;
  uVar16 = uVar5 & 0xffffffff;
  uVar10 = (longlong)iVar13;
  do {
    iVar13 = (int)uVar5;
    iVar14 = (int)uVar16;
    uVar17 = (uint)uVar15;
    if ((int)uVar17 < (int)uVar1) {
      iVar6 = *(int *)(lVar2 + uVar10 * 4) - param_2;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (param_3 < iVar6) goto LAB_141f4eccf;
      bVar3 = true;
    }
    else {
LAB_141f4eccf:
      bVar3 = false;
    }
    if ((int)uVar8 < 0) {
LAB_141f4ece9:
      bVar4 = false;
    }
    else {
      iVar6 = *(int *)(lVar2 + lVar12 * 4) - param_2;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (param_3 < iVar6) goto LAB_141f4ece9;
      bVar4 = true;
    }
    if (bVar3) {
      if (bVar4) {
        iVar13 = param_2 - *(int *)(lVar2 + uVar10 * 4);
        if (iVar13 < 0) {
          iVar13 = -iVar13;
        }
        iVar14 = param_2 - *(int *)(lVar2 + lVar12 * 4);
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        uVar7 = uVar17 + 1;
        if (iVar14 <= iVar13) {
          uVar7 = uVar17;
        }
        uVar5 = uVar5 & 0xffffffff;
        if (iVar14 <= iVar13) {
          uVar5 = (ulonglong)uVar8;
        }
        uVar15 = (ulonglong)uVar7;
        uVar9 = (ulonglong)(uVar17 + 1);
        uVar11 = uVar10 + 1;
        if (iVar14 <= iVar13) {
          uVar9 = uVar16;
          uVar11 = uVar10;
          lVar12 = lVar12 + -1;
          uVar8 = uVar8 - 1;
        }
      }
      else {
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar9 = uVar15;
        uVar11 = uVar10 + 1;
        lVar12 = -1;
        uVar8 = 0xffffffff;
      }
    }
    else {
      if (!bVar4) break;
      uVar5 = (ulonglong)uVar8;
      uVar15 = (ulonglong)uVar1;
      uVar9 = uVar16;
      uVar11 = (longlong)(int)uVar1;
      lVar12 = lVar12 + -1;
      uVar8 = uVar8 - 1;
    }
    iVar14 = (int)uVar9;
    iVar13 = (int)uVar5;
    uVar16 = uVar9;
    uVar10 = uVar11;
  } while (iVar14 - iVar13 < param_4);
  *param_5 = iVar13;
  *param_6 = iVar14;
  return;
}



// FUNCTION 141f4edc0 FindSectionAtTime body=126 status=ok
// SIG undefined FindSectionAtTime(void)

longlong MovieSceneHelpers::FindSectionAtTime(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    local_res8[0] = param_2;
    do {
      lVar1 = *(longlong *)(lVar4 + *param_1);
      cVar2 = TRange<FFrameNumber>::Contains(lVar1 + 0x90,local_res8);
      if ((cVar2 != '\0') && ((*(byte *)(lVar1 + 0xb0) & 1) != 0)) {
        return lVar1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 141f4ee40 FindSequence body=148 status=ok
// SIG undefined FindSequence(void)

undefined8 FMovieSceneEvaluationState::FindSequence(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar2 = param_1 + 0xd8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0xa0));
        if (*piVar5 == *param_2) {
          if (iVar1 != -1) goto LAB_141f4eeb8;
          break;
        }
        iVar1 = piVar5[0x2e];
      } while (iVar1 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_141f4eeb8:
  piVar3 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar4 = FWeakObjectPtr::Get(piVar3);
  return uVar4;
}



// FUNCTION 141f4eee0 FindSpawnable body=128 status=ok
// SIG undefined FindSpawnable(void)

longlong UMovieScene::FindSpawnable(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar3 = (longlong)*(int *)(param_1 + 0x58) * 0x90 + lVar1;
  if (lVar1 != lVar3) {
    piVar2 = (int *)(lVar1 + 0x48);
    do {
      if (((piVar2[-2] == *param_2 && piVar2[-1] == param_2[1]) && piVar2[1] == param_2[3]) &&
          *piVar2 == param_2[2]) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x90;
      piVar2 = piVar2 + 0x24;
    } while (lVar1 != lVar3);
  }
  return 0;
}



// FUNCTION 141f4ef60 FindSpawnedObject body=398 status=ok
// SIG undefined FindSpawnedObject(void)

undefined8 FMovieSceneSpawnRegister::FindSpawnedObject(longlong param_1,int *param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint local_18;
  
  local_28 = *param_2;
  iStack_24 = param_2[1];
  iStack_20 = param_2[2];
  iStack_1c = param_2[3];
  uVar6 = *param_3;
  local_18 = uVar6;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(&local_28,0x10,0);
    uVar8 = iVar1 - uVar6 ^ uVar6 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 0x10;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 10;
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar2 = param_1 + 0x50;
    }
    iVar1 = *(int *)(lVar2 + (((longlong)(int)((uVar6 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf))
                             & (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x18));
        if ((((piVar5[1] == iStack_24 && piVar5[2] == iStack_20) && piVar5[3] == iStack_1c) &&
             *piVar5 == local_28) && (piVar5[4] == local_18)) {
          if (iVar1 != -1) goto LAB_141f4f0b7;
          break;
        }
        iVar1 = piVar5[0xc];
      } while (iVar1 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_141f4f0b7:
  piVar4 = piVar5 + 5;
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  uVar3 = FWeakObjectPtr::Get(piVar4 + 4);
  return uVar3;
}



// FUNCTION 141f4f0f0 FUN_141f4f0f0 body=532 status=ok
// SIG undefined FUN_141f4f0f0(void)

undefined8 * FUN_141f4f0f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puVar12;
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
  
  plVar1 = (longlong *)(param_1 + 0x18);
  uStack_94 = 1;
  uVar3 = *(uint *)(param_1 + 0x40);
  puVar2 = (uint *)(param_1 + 0x28);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar5) goto LAB_141f4f1bc;
      uVar4 = puVar12[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141f4f1bc:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x40);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar8 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141f4f282;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141f4f282:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    puVar10 = (undefined8 *)((longlong)(int)uStack_5c * 0x38 + *plVar1);
    lVar9 = FWeakObjectPtr::Get((longlong)puVar10 + 0x24);
    if (lVar9 == param_3) {
      uVar6 = puVar10[1];
      *param_2 = *puVar10;
      param_2[1] = uVar6;
      return param_2;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141f4f310 FindSubData body=128 status=ok
// SIG undefined FindSubData(void)

int * FMovieSceneSequenceHierarchy::FindSubData(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      while (piVar4 = (int *)((longlong)iVar1 * 0xb8 + *param_1), *piVar4 != *param_2) {
        iVar1 = piVar4[0x2c];
        if (iVar1 == -1) {
          return (int *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_141f4f384;
    }
  }
  piVar4 = (int *)0x0;
LAB_141f4f384:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}



// FUNCTION 141f4f390 FindTrack body=265 status=ok
// SIG undefined FindTrack(void)

int * FMovieSceneEvaluationTemplate::FindTrack(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x108 + *param_1);
        if (*piVar4 == param_2) {
          if (iVar1 != -1) goto LAB_141f4f3f6;
          break;
        }
        iVar1 = piVar4[0x40];
      } while (iVar1 != -1);
    }
  }
  piVar4 = piVar5;
LAB_141f4f3f6:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = piVar5;
  }
  if (piVar3 != (int *)0x0) {
    return piVar3;
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar2 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar2 = param_1 + 0x11;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[0x13] - 1U & (longlong)param_2) * 4)
    ;
    if (iVar1 != -1) {
      while (piVar4 = (int *)((longlong)iVar1 * 0x108 + param_1[10]), *piVar4 != param_2) {
        iVar1 = piVar4[0x40];
        if (iVar1 == -1) {
          return (int *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_141f4f488;
    }
  }
  piVar4 = piVar5;
LAB_141f4f488:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = piVar5;
  }
  return piVar3;
}



// FUNCTION 141f4f4a0 FUN_141f4f4a0 body=180 status=ok
// SIG undefined FUN_141f4f4a0(void)

void FUN_141f4f4a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  Swap<FMovieSceneEvaluationMetaData>(param_1 + 0xf0,param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xfc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x100,0);
  }
  FUN_141f42940(param_1,param_2,0);
  uVar1 = DAT_1464d3e28;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::Reset
            (param_1 + 0x30);
  return;
}



// FUNCTION 141f4f560 FUN_141f4f560 body=442 status=ok
// SIG undefined FUN_141f4f560(void)

void FUN_141f4f560(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  char local_res8 [4];
  int local_resc;
  
  cVar3 = *(char *)(param_2 + 0x90);
  cVar6 = *(char *)(param_2 + 0x98);
  iVar1 = *(int *)(param_2 + 0x9c);
  plVar2 = (longlong *)*param_1;
  plVar5 = plVar2;
  do {
    if (plVar5 == plVar2 + (int)param_1[1]) {
LAB_141f4f6eb:
      local_res8[0] = '\0';
      AlgoImpl::
      IntroSortInternal<UMovieSceneSection_*,FIdentityFunctor,TDereferenceWrapper<UMovieSceneSection_*,<lambda_61750566fbb28c98eaf6df15c9240c34>_>_>
                (*param_1,(longlong)(int)param_1[1],0,local_res8);
      return;
    }
    if (*plVar5 == param_2) {
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
      if (iVar4 == -1) goto LAB_141f4f6eb;
      if ((iVar4 < 1) || ((int)param_1[1] <= iVar4 + -1)) {
LAB_141f4f600:
        if (param_3 != '\0') goto LAB_141f4f6eb;
      }
      else {
        if (param_3 != '\0') {
          local_res8[0] = cVar6;
          local_resc = iVar1;
          FUN_141f653b0(plVar2[(longlong)iVar4 + -1],local_res8);
          goto LAB_141f4f600;
        }
        if (cVar3 == '\0') {
          local_res8[0] = '\x01';
        }
        else {
          local_res8[0] = '\0';
          if (cVar3 != '\x01') {
            local_res8[0] = cVar3;
          }
        }
        local_resc = *(int *)(param_2 + 0x94);
        FUN_141f653b0(plVar2[(longlong)iVar4 + -1],local_res8);
      }
      if ((-1 < iVar4 + 1) && (iVar4 + 1 < (int)param_1[1])) {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
        }
        else if (cVar6 == '\x01') {
          cVar6 = '\0';
        }
        plVar2 = *(longlong **)(*param_1 + 8 + (longlong)iVar4 * 8);
        if ((*(uint *)(plVar2 + 0x16) >> 1 & 1) == 0) {
          (**(code **)(*plVar2 + 0x70))(plVar2,1);
          cVar3 = (char)plVar2[0x13];
          if (((cVar3 == '\x02') || (cVar6 == '\x02')) ||
             (iVar4 = *(int *)((longlong)plVar2 + 0x9c), iVar1 <= iVar4)) {
            *(char *)(plVar2 + 0x12) = cVar6;
            *(int *)((longlong)plVar2 + 0x94) = iVar1;
          }
          else if (cVar3 == '\0') {
            *(undefined1 *)(plVar2 + 0x12) = 1;
            *(int *)((longlong)plVar2 + 0x94) = iVar4;
          }
          else {
            if (cVar3 == '\x01') {
              cVar3 = '\0';
            }
            *(char *)(plVar2 + 0x12) = cVar3;
            *(int *)((longlong)plVar2 + 0x94) = iVar4;
          }
        }
      }
      goto LAB_141f4f6eb;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 141f4f720 FromFloatRange body=137 status=ok
// SIG undefined FromFloatRange(void)

undefined1 * FMovieSceneFrameRange::FromFloatRange(undefined1 *param_1,char *param_2)

{
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  FUN_141f52860(&local_res10);
  *param_1 = 2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*param_2 != '\x02') {
    UpgradeLegacyMovieSceneTime(local_res8,0,local_res10,(double)*(float *)(param_2 + 4));
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = local_res8[0];
  }
  if (param_2[8] != '\x02') {
    UpgradeLegacyMovieSceneTime(local_res8,0,local_res10,(double)*(float *)(param_2 + 0xc));
    param_1[8] = 1;
    *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  }
  return param_1;
}



// FUNCTION 141f4f7b0 FUN_141f4f7b0 body=1291 status=ok
// SIG undefined FUN_141f4f7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f4f7b0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  void *_Dst;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  uint local_188 [2];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined1 local_160;
  undefined4 local_15c;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined4 local_118;
  longlong local_110;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined **local_e8;
  longlong local_e0;
  uint local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_110 = param_4;
  local_f8[0] = param_2;
  lVar5 = FUN_141f53550();
  if ((lVar5 != param_1) && (lVar5 = *(longlong *)(param_1 + 0x108), lVar5 != 0)) {
    UMovieSceneSubSection::GetSequenceID(param_1,local_188);
    uVar3 = local_188[0];
    puVar16 = (uint *)*param_3;
    uVar17 = 0;
    uVar10 = puVar16[10];
    uVar9 = DAT_146ac9ac0;
    uVar11 = local_188[0];
    if (uVar10 != 0) {
      puVar8 = *(uint **)(puVar16 + 8);
      if (*(uint **)(puVar16 + 8) == (uint *)0x0) {
        puVar8 = puVar16;
      }
      uVar15 = (longlong)(int)uVar10 & 0x3fffffffffffffff;
      if (puVar8 + (int)uVar10 < puVar8) {
        uVar15 = uVar17;
      }
      uVar12 = uVar17;
      puVar16 = puVar8;
      if (uVar15 != 0) {
        do {
          uVar10 = *puVar16;
          if (uVar9 != 0) {
            uVar9 = uVar9 - uVar10 ^ uVar10 >> 0xd;
            uVar13 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
            uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 0xd;
            uVar9 = (uVar9 - uVar13) - uVar10 ^ uVar10 >> 0xc;
            uVar13 = (uVar13 - uVar9) - uVar10 ^ uVar9 << 0x10;
            uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 5;
            uVar9 = (uVar9 - uVar13) - uVar10 ^ uVar10 >> 3;
            uVar13 = (uVar13 - uVar9) - uVar10 ^ uVar9 << 10;
            uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 0xf;
          }
          uVar9 = uVar10;
          puVar16 = puVar16 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
      if (uVar15 != 0) {
        do {
          uVar11 = *puVar8;
          if (local_188[0] != 0) {
            uVar10 = local_188[0] - uVar11 ^ uVar11 >> 0xd;
            uVar14 = (-0x61c88647 - uVar10) - uVar11 ^ uVar10 << 8;
            uVar11 = (uVar11 - uVar14) - uVar10 ^ uVar14 >> 0xd;
            uVar13 = (uVar10 - uVar14) - uVar11 ^ uVar11 >> 0xc;
            uVar14 = (uVar14 - uVar13) - uVar11 ^ uVar13 << 0x10;
            uVar10 = (uVar11 - uVar14) - uVar13 ^ uVar14 >> 5;
            uVar11 = (uVar13 - uVar14) - uVar10 ^ uVar10 >> 3;
            uVar13 = (uVar14 - uVar11) - uVar10 ^ uVar11 << 10;
            uVar11 = (uVar10 - uVar13) - uVar11 ^ uVar13 >> 0xf;
          }
          puVar8 = puVar8 + 1;
          uVar17 = uVar17 + 1;
          local_188[0] = uVar11;
        } while (uVar17 != uVar15);
      }
    }
    local_e8 = &PTR_FUN_144f1c840;
    local_108[0] = (undefined1)param_3[5];
    local_e0 = local_110 + 0x70;
    local_104 = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_100 = (undefined1)param_3[6];
    local_fc = *(undefined4 *)((longlong)param_3 + 0x34);
    local_188[0] = 0xffffffff;
    local_188[1] = 0;
    local_d8 = uVar11;
    FMovieSceneEvaluationTree::AddTimeRange(local_e0,local_108,&local_e8,0xffffffff);
    FMovieSceneRootOverridePath::Push(*param_3,uVar3);
    local_198 = param_3[1];
    local_60 = 0;
    lVar6 = FUN_141f52f50(uVar11,uVar9,param_1,local_f8[0]);
    local_180 = *param_3;
    local_15c = *(undefined4 *)((longlong)param_3 + 0x24);
    puVar1 = (undefined8 *)(lVar6 + 0x18);
    local_124 = *puVar1;
    local_158[0] = (undefined1)param_3[5];
    local_154 = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_150 = (undefined1)param_3[6];
    local_14c = *(undefined4 *)((longlong)param_3 + 0x34);
    local_148 = (undefined1)param_3[7];
    local_144 = *(undefined4 *)((longlong)param_3 + 0x3c);
    local_140 = (undefined1)param_3[8];
    local_13c = *(undefined4 *)((longlong)param_3 + 0x44);
    local_138 = (undefined1)param_3[9];
    local_134 = *(undefined4 *)((longlong)param_3 + 0x4c);
    local_178 = param_3[1];
    local_130 = (undefined1)param_3[10];
    local_170 = param_3[2];
    local_12c = *(undefined4 *)((longlong)param_3 + 0x54);
    local_168[0] = (undefined1)param_3[3];
    local_128 = (undefined1)param_3[0xb];
    local_164 = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_11c = *(undefined4 *)(lVar6 + 0x20);
    local_160 = (undefined1)param_3[4];
    local_118 = *(undefined4 *)(lVar6 + 0x60);
    puVar7 = (undefined1 *)operator*(local_108,local_168,puVar1);
    local_148 = *puVar7;
    local_144 = *(undefined4 *)(puVar7 + 4);
    local_140 = puVar7[8];
    local_13c = *(undefined4 *)(puVar7 + 0xc);
    puVar7 = (undefined1 *)operator*(local_f8,local_158,puVar1);
    local_88 = *puVar7;
    local_80 = puVar7[8];
    local_84 = *(undefined4 *)(puVar7 + 4);
    local_7c = *(undefined4 *)(puVar7 + 0xc);
    local_d0 = local_180;
    local_c8 = local_178;
    local_c0 = local_170;
    local_b8 = local_168[0];
    local_b4 = local_164;
    local_b0 = local_160;
    local_ac = local_15c;
    local_a8 = local_158[0];
    local_a4 = local_154;
    local_a0 = local_150;
    local_9c = local_14c;
    local_98 = local_148;
    local_94 = local_144;
    local_90 = local_140;
    local_8c = local_13c;
    local_78 = local_128;
    local_6c = local_11c;
    local_68 = local_118;
    local_74 = local_124;
    local_60 = 1;
    FUN_141f503d0(lVar5,&local_d0,local_110);
    pvVar2 = (void *)*param_3;
    iVar4 = *(int *)((longlong)pvVar2 + 0x28);
    if (iVar4 + -1 != 0) {
      _Dst = *(void **)((longlong)pvVar2 + 0x20);
      if (*(void **)((longlong)pvVar2 + 0x20) == (void *)0x0) {
        _Dst = pvVar2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)((longlong)_Dst + 4),(longlong)(iVar4 + -1) << 2);
      iVar4 = *(int *)((longlong)pvVar2 + 0x28);
    }
    *(int *)((longlong)pvVar2 + 0x28) = iVar4 + -1;
  }
  return;
}



// FUNCTION 141f4fcc0 FUN_141f4fcc0 body=1802 status=ok
// SIG undefined FUN_141f4fcc0(void)

void FUN_141f4fcc0(longlong param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  char cVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  bool bVar26;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  char local_178 [4];
  int local_174;
  char local_170 [4];
  int local_16c;
  int local_168;
  int iStack_164;
  char acStack_160 [4];
  int local_15c;
  undefined1 local_158 [16];
  char *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  int *local_118;
  char *local_110;
  char local_108 [4];
  uint local_104;
  char local_100;
  undefined3 uStack_ff;
  uint uStack_fc;
  uint local_e8;
  undefined4 uStack_e4;
  int *local_d8;
  int local_d0;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined **local_88;
  int *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_res18 = param_3;
  FMovieSceneSequenceTransform::Inverse((longlong)param_3 + 0x5c,local_158);
  puVar4 = (uint *)*param_3;
  pcVar24 = (char *)0x0;
  uVar11 = puVar4[10];
  iVar17 = 0;
  uVar14 = DAT_146ac9ac0;
  if (uVar11 != 0) {
    puVar21 = *(uint **)(puVar4 + 8);
    if (*(uint **)(puVar4 + 8) == (uint *)0x0) {
      puVar21 = puVar4;
    }
    pcVar23 = (char *)((longlong)(int)uVar11 & 0x3fffffffffffffff);
    if (puVar21 + (int)uVar11 < puVar21) {
      pcVar23 = pcVar24;
    }
    pcVar22 = pcVar24;
    if (pcVar23 != (char *)0x0) {
      do {
        uVar11 = *puVar21;
        if (uVar14 != 0) {
          uVar14 = uVar14 - uVar11 ^ uVar11 >> 0xd;
          uVar19 = (-0x61c88647 - uVar14) - uVar11 ^ uVar14 << 8;
          uVar15 = (uVar11 - uVar19) - uVar14 ^ uVar19 >> 0xd;
          uVar11 = (uVar14 - uVar19) - uVar15 ^ uVar15 >> 0xc;
          uVar19 = (uVar19 - uVar11) - uVar15 ^ uVar11 << 0x10;
          uVar14 = (uVar15 - uVar19) - uVar11 ^ uVar19 >> 5;
          uVar11 = (uVar11 - uVar19) - uVar14 ^ uVar14 >> 3;
          uVar15 = (uVar19 - uVar11) - uVar14 ^ uVar11 << 10;
          uVar11 = (uVar14 - uVar15) - uVar11 ^ uVar15 >> 0xf;
        }
        uVar14 = uVar11;
        puVar21 = puVar21 + 1;
        pcVar22 = pcVar22 + 1;
      } while (pcVar22 != pcVar23);
    }
  }
  local_178[0] = *(char *)(param_3 + 7);
  local_174 = *(int *)((longlong)param_3 + 0x3c);
  local_170[0] = *(char *)(param_3 + 8);
  local_16c = *(int *)((longlong)param_3 + 0x44);
  FUN_141f539a0(param_1,&local_d8,local_178);
  iVar6 = 0;
  iVar5 = 0;
  if (local_d0 != 0) {
    local_148 = (char *)0x0;
    local_118 = local_d8;
    local_110 = (char *)((ulonglong)((longlong)(local_d8 + local_d0) + (3 - (longlong)local_d8)) >>
                        2);
    if (local_d8 + local_d0 < local_d8) {
      local_110 = pcVar24;
    }
    if (local_110 != (char *)0x0) {
      pcVar23 = (char *)(param_3 + 5);
      local_e8 = uVar14;
      uStack_e4 = param_2;
      do {
        local_a8 = *local_118;
        pcVar25 = (char *)((longlong)
                           *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_a8 * 4) * 0x58 +
                          *(longlong *)(param_1 + 0x28));
        uStack_b0 = CONCAT44(param_2,uVar14);
        plVar8 = (longlong *)FUN_141f52cc0();
        puVar9 = (undefined2 *)
                 (**(code **)(*plVar8 + 0x48))(plVar8,local_res8,*(undefined8 *)(param_1 + 0xe8));
        local_b8 = param_1;
        local_c8 = *puVar9;
        uStack_c4 = *(undefined4 *)(local_res18 + 0xd);
        uStack_c0 = (uint)*(ushort *)(param_1 + 0x10);
        pcVar22 = *(char **)(pcVar25 + 0x48);
        if (*(char **)(pcVar25 + 0x48) == (char *)0x0) {
          pcVar22 = pcVar25 + 0x18;
        }
        pcVar1 = pcVar22 + (longlong)*(int *)(pcVar25 + 0x50) * 0xc;
        for (; pcVar13 = pcVar24, pcVar22 != pcVar1; pcVar22 = pcVar22 + 0xc) {
          local_168 = (int)*(undefined8 *)pcVar22;
          iStack_164 = (int)((ulonglong)*(undefined8 *)pcVar22 >> 0x20);
          if ((-1 < local_168) && (local_168 < *(int *)(param_1 + 0xa8))) {
            puVar20 = (undefined8 *)((longlong)local_168 * 0x38 + *(longlong *)(param_1 + 0xa0));
            bVar2 = *(byte *)((longlong)local_168 * 0x38 + 0x30 + *(longlong *)(param_1 + 0xa0));
            if ((bVar2 & 1) != 0) {
              if ((bVar2 & 2) == 0) {
                puVar20 = (undefined8 *)*puVar20;
              }
              pcVar13 = pcVar22;
              if ((*(byte *)(puVar20 + 1) & 4) != 0) break;
            }
          }
        }
        cVar10 = *pcVar25;
        uVar3 = *(undefined4 *)(pcVar25 + 4);
        uStack_bc = CONCAT31(uStack_bc._1_3_,pcVar13 != (char *)0x0);
        if (cVar10 == '\x02') {
          cVar10 = '\x02';
          iVar17 = iVar6;
        }
        else {
          if (cVar10 != '\x01') {
            uStack_134 = 0;
            local_138 = uVar3;
            piVar7 = (int *)operator*(local_98,uVar3,local_158);
          }
          else {
            uStack_13c = 0;
            local_140 = uVar3;
            piVar7 = (int *)operator*(local_a0,uVar3,local_158);
          }
          cVar10 = cVar10 == '\x01';
          iVar17 = *piVar7;
        }
        cVar18 = pcVar25[8];
        uVar3 = *(undefined4 *)(pcVar25 + 0xc);
        if (cVar18 == '\x02') {
          local_170[0] = '\x02';
          local_16c = iVar5;
        }
        else {
          if (cVar18 != '\x01') {
            uStack_124 = 0;
            local_128 = uVar3;
            piVar7 = (int *)operator*(&local_e8,uVar3,local_158);
          }
          else {
            uStack_12c = 0;
            local_130 = uVar3;
            piVar7 = (int *)operator*(local_90,uVar3,local_158);
          }
          local_170[0] = cVar18 == '\x01';
          local_16c = *piVar7;
        }
        cVar18 = *pcVar23;
        local_174 = iVar17;
        local_178[0] = cVar10;
        if ((((cVar18 == '\x02') || (*(char *)(param_3 + 6) == '\x02')) ||
            ((*(int *)((longlong)param_3 + 0x2c) <= *(int *)((longlong)param_3 + 0x34) &&
             ((*(int *)((longlong)param_3 + 0x2c) != *(int *)((longlong)param_3 + 0x34) ||
              ((cVar18 != '\0' && (*(char *)(param_3 + 6) != '\0')))))))) &&
           (((cVar10 == '\x02' || (local_170[0] == '\x02')) ||
            ((iVar17 <= local_16c &&
             ((iVar17 != local_16c || ((cVar10 != '\0' && (local_170[0] != '\0')))))))))) {
          pcVar22 = (char *)(param_3 + 6);
          if (*(char *)(param_3 + 6) == '\x02') {
            pcVar25 = local_170;
          }
          else {
            pcVar25 = pcVar22;
            if ((local_170[0] != '\x02') && (local_16c <= *(int *)((longlong)param_3 + 0x34))) {
              if (local_16c < *(int *)((longlong)param_3 + 0x34)) {
                pcVar25 = local_170;
              }
              else {
                pcVar25 = local_170;
                if (*(char *)(param_3 + 6) == '\0') {
                  pcVar25 = pcVar22;
                }
              }
            }
          }
          if (cVar18 == '\x02') {
LAB_141f502ca:
            pcVar22 = local_178;
            cVar18 = cVar10;
          }
          else {
            pcVar22 = pcVar23;
            if ((cVar10 != '\x02') && (*(int *)((longlong)param_3 + 0x2c) <= iVar17)) {
              if ((*(int *)((longlong)param_3 + 0x2c) < iVar17) || (cVar18 != '\0'))
              goto LAB_141f502ca;
              cVar18 = '\0';
            }
          }
          uVar11 = *(uint *)(pcVar22 + 4);
          cVar10 = *pcVar25;
          uVar15 = *(uint *)(pcVar25 + 4);
          if (((cVar18 == '\x02') || (cVar10 == '\x02')) ||
             (((int)uVar11 <= (int)uVar15 &&
              ((uVar11 != uVar15 || ((cVar18 != '\0' && (cVar10 != '\0')))))))) {
            local_78 = CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
            uStack_70 = CONCAT44(uStack_bc,uStack_c0);
            local_80 = param_4 + 4;
            local_88 = &PTR_FUN_144f1c850;
            local_58 = CONCAT44(uStack_a4,local_a8);
            local_120 = 0xffffffff;
            uStack_11c = 0;
            local_68 = (undefined4)local_b8;
            uStack_64 = local_b8._4_4_;
            uStack_60 = (undefined4)uStack_b0;
            uStack_5c = uStack_b0._4_4_;
            _local_100 = CONCAT31(uStack_ff,cVar10);
            local_108[0] = cVar18;
            local_104 = uVar11;
            uStack_fc = uVar15;
            FMovieSceneEvaluationTree::AddTimeRange(local_80,local_108,&local_88,0xffffffff);
          }
        }
        local_118 = local_118 + 1;
        local_148 = local_148 + 1;
      } while (local_148 != local_110);
    }
    goto LAB_141f50384;
  }
  local_res18 = (undefined8 *)CONCAT71(local_res18._1_7_,*(undefined1 *)(param_3 + 7));
  local_res18 = (undefined8 *)
                CONCAT44(*(undefined4 *)((longlong)param_3 + 0x3c),(undefined4)local_res18);
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (local_108,param_1 + 0x40,&local_res18);
  if (local_108[0] == '\x02') {
    cVar10 = '\x02';
    iVar16 = iVar17;
  }
  else {
    bVar26 = local_108[0] != '\x01';
    local_res18 = (undefined8 *)(ulonglong)local_104;
    if (bVar26) {
      piVar7 = (int *)operator*(&local_110,local_res18,local_158);
    }
    else {
      piVar7 = (int *)operator*(local_res8,local_res18,local_158);
    }
    cVar10 = !bVar26;
    iVar16 = *piVar7;
  }
  cVar18 = (char)_local_100;
  if (cVar18 == '\x02') {
    local_170[0] = '\x02';
    local_16c = iVar5;
  }
  else {
    local_res18 = (undefined8 *)(ulonglong)uStack_fc;
    if (cVar18 != '\x01') {
      piVar7 = (int *)operator*(&local_148,local_res18,local_158);
    }
    else {
      piVar7 = (int *)operator*(&local_res18,local_res18,local_158);
    }
    local_170[0] = cVar18 == '\x01';
    local_16c = *piVar7;
  }
  local_178[0] = cVar10;
  local_174 = iVar16;
  FGatherParameters::ClampRoot(param_3,&local_168,local_178);
  if ((((char)local_168 == '\x02') || (acStack_160[0] == '\x02')) ||
     ((iStack_164 <= local_15c &&
      ((iStack_164 != local_15c || (((char)local_168 != '\0' && (acStack_160[0] != '\0')))))))) {
    cVar10 = (char)*param_4;
    if ((cVar10 == '\x02') || ((char)param_4[2] == '\x02')) {
LAB_141f4ff85:
      piVar7 = param_4 + 2;
      piVar12 = piVar7;
      if (acStack_160[0] != '\x02') {
        if ((char)*piVar7 == '\x02') {
          piVar12 = (int *)acStack_160;
        }
        else if (local_15c < param_4[3]) {
          piVar12 = (int *)acStack_160;
        }
        else if ((local_15c <= param_4[3]) && (piVar12 = (int *)acStack_160, acStack_160[0] != '\0')
                ) {
          piVar12 = piVar7;
        }
      }
      piVar7 = param_4;
      if ((char)local_168 != '\x02') {
        if (cVar10 == '\x02') {
          piVar7 = &local_168;
          cVar10 = (char)local_168;
        }
        else if (param_4[1] < iStack_164) {
          piVar7 = &local_168;
          cVar10 = (char)local_168;
        }
        else if ((param_4[1] <= iStack_164) && ((char)local_168 == '\0')) {
          cVar10 = '\0';
          piVar7 = &local_168;
        }
      }
      iVar6 = piVar7[1];
      cVar18 = (char)*piVar12;
      iVar17 = piVar12[1];
    }
    else {
      if (param_4[3] < param_4[1]) goto LAB_141f4ff46;
      if (param_4[1] != param_4[3]) goto LAB_141f4ff85;
      if (cVar10 == '\0') goto LAB_141f4ff46;
      if ((char)param_4[2] != '\0') goto LAB_141f4ff85;
      cVar10 = '\0';
      cVar18 = '\0';
    }
  }
  else {
LAB_141f4ff46:
    cVar10 = '\0';
    cVar18 = '\0';
    iVar6 = iVar5;
  }
  *(char *)param_4 = cVar10;
  param_4[1] = iVar6;
  *(char *)(param_4 + 2) = cVar18;
  param_4[3] = iVar17;
LAB_141f50384:
  if (local_d8 != (int *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}



// FUNCTION 141f503d0 FUN_141f503d0 body=3546 status=ok
// SIG undefined FUN_141f503d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f503d0(longlong param_1,undefined8 *param_2,char *param_3)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  int *piVar16;
  undefined1 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  char *pcVar26;
  uint *puVar27;
  uint *puVar28;
  char cVar29;
  uint uVar30;
  undefined8 *puVar31;
  char cVar32;
  uint uVar33;
  longlong lVar34;
  int iVar35;
  bool bVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auStack_2b8 [32];
  byte local_298;
  char local_297;
  int local_290;
  float fStack_28c;
  int local_288;
  int local_284;
  char local_280 [4];
  int local_27c;
  char local_278 [4];
  int local_274;
  char *local_270;
  uint local_268;
  uint uStack_264;
  uint *puStack_260;
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  uint local_248;
  float fStack_244;
  float local_240;
  undefined8 local_23c;
  undefined8 *local_230;
  int local_228 [3];
  undefined4 uStack_21c;
  undefined8 local_218;
  char local_210 [4];
  int local_20c;
  char cStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  uint local_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  uint *puStack_1d0;
  uint *puStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint *local_1b0;
  undefined8 uStack_1a8;
  uint *local_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined8 local_190;
  char local_188 [4];
  int local_184;
  char local_180;
  int local_17c;
  longlong local_178;
  undefined4 local_170;
  float *local_168;
  uint *local_160;
  char *local_158;
  longlong local_150;
  undefined4 uStack_148;
  longlong local_140;
  undefined4 local_138;
  longlong local_130;
  undefined4 uStack_128;
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [24];
  undefined **local_e8;
  longlong local_e0;
  uint *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0;
  int local_bc;
  char local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_270 = param_3;
  local_230 = param_2;
  puVar11 = (uint *)(**(code **)(*(longlong *)param_2[2] + 8))((longlong *)param_2[2],param_1);
  uVar33 = 0;
  if (((puVar11[0x5f] != *(uint *)(param_1 + 0x34) || puVar11[0x5e] != *(uint *)(param_1 + 0x30)) ||
      puVar11[0x5d] != *(uint *)(param_1 + 0x2c)) || puVar11[0x5c] != *(uint *)(param_1 + 0x28)) {
    local_e8 = &PTR_AddOwnedTrack_144f1b078;
    local_d0 = 0;
    local_c8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xffffffff;
    local_9c = 0;
    local_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    local_e0 = param_1;
    local_d8 = puVar11;
    FUN_141f512b0(&local_e8);
    local_88 = 0;
    if (CONCAT44(uStack_8c,local_90) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_d0);
  }
  puVar7 = local_230;
  uVar10 = puVar11[10];
  puVar1 = puVar11 + 4;
  uStack_264 = 1;
  local_268 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  if (uVar10 != 0) {
    puVar28 = *(uint **)(puVar11 + 8);
    if (*(uint **)(puVar11 + 8) == (uint *)0x0) {
      puVar28 = puVar1;
    }
    uVar21 = *puVar28;
    uStack_250 = uVar33;
    local_268 = uVar33;
    while (uVar21 == 0) {
      lVar24 = (longlong)(int)local_268;
      uStack_250 = uStack_250 + 0x20;
      uVar21 = local_268 + 1;
      bVar36 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_268;
      local_268 = uVar21;
      if (bVar36) goto LAB_141f505a1;
      uVar21 = puVar28[lVar24 + 1];
    }
    uStack_264 = -uVar21 & uVar21;
    iVar8 = 0x1f;
    if (uStack_264 != 0) {
      for (; uStack_264 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_264 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_254 = (uStack_250 - iVar8) + 0x1f;
    if ((int)uVar10 < (int)uStack_254) {
LAB_141f505a1:
      uStack_254 = uVar10;
    }
  }
  uVar21 = puVar11[10];
  uStack_198 = 0xffffffff;
  uStack_194 = uStack_254;
  uStack_1b8 = CONCAT44(uStack_24c,uStack_250);
  puStack_1d0 = (uint *)CONCAT44(uStack_264,local_268);
  local_258 = -1 << ((byte)uVar21 & 0x1f);
  uVar30 = uVar21 & 0xffffffe0;
  puStack_260 = puVar1;
  uStack_254 = uVar21;
  local_1d8 = puVar11;
  puStack_1c8 = puVar1;
  local_1b0 = puVar11;
  uStack_1a8 = puStack_1d0;
  local_1a0 = puVar1;
  local_190 = uStack_1b8;
  uStack_1c0 = uStack_198;
  uStack_1bc = uStack_194;
  if (uVar21 != uVar10) {
    puVar28 = *(uint **)(puVar11 + 8);
    if (*(uint **)(puVar11 + 8) == (uint *)0x0) {
      puVar28 = puVar1;
    }
    uVar22 = puVar28[(int)uVar21 >> 5] & local_258;
    iVar8 = (int)uVar21 >> 5;
    while (uVar22 == 0) {
      uVar30 = uVar30 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
      goto LAB_141f50674;
      uVar22 = puVar28[(longlong)iVar8 + 1];
      local_258 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar22 = -uVar22 & uVar22;
    iVar8 = 0x1f;
    if (uVar22 != 0) {
      for (; uVar22 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar22 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_254 = (uVar30 - iVar8) + 0x1f;
    uVar21 = uStack_254;
    if ((int)uVar10 < (int)uStack_254) {
LAB_141f50674:
      uStack_254 = uVar10;
      uVar21 = uVar10;
    }
  }
  while (((uStack_194 != uVar21 || (local_1a0 != puVar1)) || (local_1b0 != puVar11))) {
    bVar3 = *(byte *)(puVar7 + 0xb);
    puVar25 = (undefined4 *)((longlong)(int)uStack_194 * 0x108 + *(longlong *)local_1b0);
    if (((bVar3 == 0) || (((bVar3 & 1) != 0 && ((*(byte *)(puVar25 + 0x3e) & 1) != 0)))) ||
       (((bVar3 & 2) != 0 && (((uint)puVar25[0x3e] >> 1 & 1) != 0)))) {
      FUN_141f4fcc0(puVar25 + 2,*puVar25,puVar7,param_3);
    }
    uStack_198 = uStack_198 & ~uStack_1a8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a8);
  }
  bVar3 = *(byte *)(puVar7 + 7);
  if (((bVar3 == 2) || (*(char *)(puVar7 + 8) == '\x02')) ||
     ((*(int *)((longlong)puVar7 + 0x3c) <= *(int *)((longlong)puVar7 + 0x44) &&
      ((*(int *)((longlong)puVar7 + 0x3c) != *(int *)((longlong)puVar7 + 0x44) ||
       ((bVar3 != 0 && (*(char *)(puVar7 + 8) != '\0')))))))) {
    local_298 = *(byte *)(puVar7 + 9);
    uVar33 = (uint)local_298;
    if ((local_298 == 2) || (*(char *)(puVar7 + 10) == '\x02')) {
      local_9c = *(int *)((longlong)puVar7 + 0x4c);
    }
    else {
      local_9c = *(int *)((longlong)puVar7 + 0x4c);
      if ((*(int *)((longlong)puVar7 + 0x54) < local_9c) ||
         ((local_9c == *(int *)((longlong)puVar7 + 0x54) &&
          ((local_298 == 0 || (*(char *)(puVar7 + 10) == '\0')))))) {
        uVar33 = 0;
        fStack_28c = 0.0;
        local_297 = '\0';
        local_298 = 0;
        local_284 = 0;
        goto LAB_141f5080a;
      }
    }
    pcVar12 = (char *)(puVar7 + 10);
    if (*(char *)(puVar7 + 8) != '\x02') {
      if (*pcVar12 != '\x02') {
        if ((*(int *)((longlong)puVar7 + 0x54) <= *(int *)((longlong)puVar7 + 0x44)) &&
           ((*(int *)((longlong)puVar7 + 0x54) < *(int *)((longlong)puVar7 + 0x44) ||
            (*(char *)(puVar7 + 8) != '\0')))) goto LAB_141f507ad;
      }
      pcVar12 = (char *)(puVar7 + 8);
    }
LAB_141f507ad:
    if (bVar3 == 2) {
LAB_141f507fb:
      puVar31 = puVar7 + 9;
    }
    else if (local_298 == 2) {
      puVar31 = puVar7 + 7;
      uVar33 = (uint)bVar3;
      local_298 = bVar3;
    }
    else {
      local_9c = *(int *)((longlong)puVar7 + 0x4c);
      if (local_9c < *(int *)((longlong)puVar7 + 0x3c)) {
        puVar31 = puVar7 + 7;
        uVar33 = (uint)bVar3;
        local_298 = bVar3;
      }
      else {
        if ((*(int *)((longlong)puVar7 + 0x3c) < local_9c) || (bVar3 != 0)) goto LAB_141f507fb;
        uVar33 = 0;
        puVar31 = puVar7 + 7;
        local_298 = 0;
      }
    }
    fStack_28c = *(float *)((longlong)puVar31 + 4);
    local_297 = *pcVar12;
    local_284 = *(int *)(pcVar12 + 4);
  }
  else {
    local_9c = *(int *)((longlong)puVar7 + 0x4c);
    fStack_28c = 0.0;
    local_297 = '\0';
    local_298 = 0;
    local_284 = 0;
  }
LAB_141f5080a:
  pcVar12 = (char *)(puVar7 + 5);
  local_e8 = (undefined **)*puVar7;
  local_e0 = puVar7[1];
  local_d8 = (uint *)puVar7[2];
  local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(puVar7 + 3));
  local_d0 = CONCAT44(*(undefined4 *)((longlong)puVar7 + 0x1c),(undefined4)local_d0);
  local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)(puVar7 + 4));
  local_c8 = CONCAT44(*(undefined4 *)((longlong)puVar7 + 0x24),(undefined4)local_c8);
  local_c0 = *pcVar12;
  local_bc = *(int *)((longlong)puVar7 + 0x2c);
  local_b8 = *(char *)(puVar7 + 6);
  local_b4 = *(int *)((longlong)puVar7 + 0x34);
  local_b0 = CONCAT71(local_b0._1_7_,*(undefined1 *)(puVar7 + 7));
  local_b0 = CONCAT44(*(undefined4 *)((longlong)puVar7 + 0x3c),(undefined4)local_b0);
  local_a8 = CONCAT71(local_a8._1_7_,*(undefined1 *)(puVar7 + 8));
  local_a8 = CONCAT44(*(undefined4 *)((longlong)puVar7 + 0x44),(undefined4)local_a8);
  local_a0 = CONCAT31(local_a0._1_3_,*(undefined1 *)(puVar7 + 9));
  local_98 = *(undefined1 *)(puVar7 + 10);
  local_94 = *(undefined4 *)((longlong)puVar7 + 0x54);
  local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(puVar7 + 0xb));
  local_84 = *(undefined4 *)((longlong)puVar7 + 100);
  local_80 = *(undefined4 *)(puVar7 + 0xd);
  local_160 = puVar11 + 0xa4;
  uStack_8c = (undefined4)*(undefined8 *)((longlong)puVar7 + 0x5c);
  local_88 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar7 + 0x5c) >> 0x20);
  local_290 = CONCAT31(local_290._1_3_,(char)uVar33);
  local_288 = (int)fStack_28c;
  local_168 = (float *)((longlong)puVar7 + 0x5c);
  local_158 = pcVar12;
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            (local_210,local_160,&local_290);
  iVar35 = iStack_204;
  iVar8 = local_20c;
  cVar29 = local_210[0];
  cVar32 = cStack_208;
  uVar13 = FMovieSceneSequenceTransform::Inverse((float *)((longlong)puVar7 + 0x5c),&local_240);
  if (cVar29 == '\x02') {
    iVar8 = 0;
  }
  else {
    local_290 = iVar8;
    fStack_28c = 0.0;
    if (cVar29 == '\x01') {
      piVar16 = (int *)operator*(&local_1d8,iVar8,uVar13);
    }
    else {
      piVar16 = (int *)operator*(&local_218,iVar8,uVar13);
      cVar29 = '\0';
    }
    iVar8 = *piVar16;
  }
  if (cVar32 == '\x02') {
    local_274 = 0;
  }
  else {
    local_290 = iVar35;
    fStack_28c = 0.0;
    if (cVar32 == '\x01') {
      piVar16 = (int *)operator*(local_228 + 2,iVar35,uVar13);
    }
    else {
      piVar16 = (int *)operator*(local_228,iVar35,uVar13);
      cVar32 = '\0';
    }
    local_274 = *piVar16;
  }
  local_280[0] = cVar29;
  local_27c = iVar8;
  local_278[0] = cVar32;
  pcVar14 = (char *)FGatherParameters::ClampRoot(local_230,&local_178,local_280);
  cVar29 = *local_270;
  if (((cVar29 == '\x02') || (local_270[8] == '\x02')) ||
     ((*(int *)(local_270 + 4) <= *(int *)(local_270 + 0xc) &&
      ((*(int *)(local_270 + 4) != *(int *)(local_270 + 0xc) ||
       ((cVar29 != '\0' && (local_270[8] != '\0')))))))) {
    cVar32 = *pcVar14;
    if ((cVar32 != '\x02') && (pcVar14[8] != '\x02')) {
      if (*(int *)(pcVar14 + 0xc) < *(int *)(pcVar14 + 4)) goto LAB_141f50a3f;
      if (*(int *)(pcVar14 + 4) == *(int *)(pcVar14 + 0xc)) {
        if (cVar32 == '\0') goto LAB_141f50a3f;
        if (pcVar14[8] == '\0') {
          cVar20 = '\0';
          uVar9 = 0;
          cVar29 = '\0';
          uVar23 = 0;
          goto LAB_141f50aec;
        }
      }
    }
    pcVar15 = local_270 + 8;
    pcVar2 = pcVar14 + 8;
    pcVar26 = pcVar2;
    if ((local_270[8] != '\x02') && (pcVar26 = pcVar15, *pcVar2 != '\x02')) {
      if ((*(int *)(pcVar14 + 0xc) <= *(int *)(local_270 + 0xc)) &&
         ((pcVar26 = pcVar2, *(int *)(local_270 + 0xc) <= *(int *)(pcVar14 + 0xc) &&
          (local_270[8] == '\0')))) {
        pcVar26 = pcVar15;
      }
    }
    pcVar15 = pcVar14;
    cVar20 = cVar32;
    if ((cVar29 != '\x02') && (pcVar15 = local_270, cVar20 = cVar29, cVar32 != '\x02')) {
      if ((*(int *)(local_270 + 4) <= *(int *)(pcVar14 + 4)) &&
         ((pcVar15 = pcVar14, cVar20 = cVar32, *(int *)(pcVar14 + 4) <= *(int *)(local_270 + 4) &&
          (cVar29 == '\0')))) {
        pcVar15 = local_270;
        cVar20 = '\0';
      }
    }
    cVar29 = *pcVar26;
    uVar23 = *(undefined4 *)(pcVar26 + 4);
    uVar9 = *(undefined4 *)(pcVar15 + 4);
  }
  else {
LAB_141f50a3f:
    cVar20 = '\0';
    uVar9 = 0;
    cVar29 = '\0';
    uVar23 = 0;
  }
LAB_141f50aec:
  *local_270 = cVar20;
  *(undefined4 *)(local_270 + 4) = uVar9;
  local_270[8] = cVar29;
  *(undefined4 *)(local_270 + 0xc) = uVar23;
  do {
    iVar8 = iStack_204;
    if ((((iStack_200 == -1) && (iStack_1fc != 0)) ||
        (((cVar29 = (char)_cStack_208, local_210[0] != '\x02' && (cVar29 != '\x02')) &&
         ((iStack_204 < local_20c ||
          ((local_20c == iStack_204 && ((local_210[0] == '\0' || (cVar29 == '\0')))))))))) ||
       (((cVar32 = (char)uVar33, cVar32 != '\x02' && (local_297 != '\x02')) &&
        ((local_284 < local_288 ||
         ((local_288 == local_284 && ((cVar32 == '\0' || (local_297 == '\0')))))))))) {
      return;
    }
    if ((cVar29 == '\x02') || (cVar32 == '\x02')) {
      bVar36 = true;
    }
    else {
      bVar36 = false;
    }
    if ((local_210[0] == '\x02') || (local_297 == '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    bVar5 = true;
    if (!bVar36) {
      if ((cVar29 == '\x01') && (cVar32 == '\x01')) {
        bVar36 = true;
      }
      else {
        bVar36 = false;
      }
      bVar5 = local_288 < iStack_204;
      if (bVar36) {
        bVar5 = local_288 <= iStack_204;
      }
    }
    bVar36 = true;
    if (!bVar6) {
      if ((local_210[0] == '\x01') && (local_297 == '\x01')) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      bVar36 = local_20c < local_284;
      if (bVar6) {
        bVar36 = local_20c <= local_284;
      }
    }
    if (!bVar5) {
      return;
    }
    if (!bVar36) {
      return;
    }
    local_1d8._4_4_ = (float)((ulonglong)*(undefined8 *)(local_168 + 1) >> 0x20);
    uVar10 = (uint)*(undefined8 *)(local_168 + 1);
    if (local_1d8._4_4_ == 0.0) {
      local_1f0 = -uVar10;
      uStack_1ec = 0;
      puVar11 = (uint *)(ulonglong)local_1f0;
    }
    else {
      local_248 = ~uVar10;
      fStack_244 = 1.0 - local_1d8._4_4_;
      if (0.0 <= fStack_244) {
        if (0.99999994 <= fStack_244) {
          fStack_244 = 0.99999994;
        }
        else {
        }
      }
      else {
        fStack_244 = 0.0;
      }
      puVar11 = (uint *)CONCAT44(fStack_244,local_248);
    }
    local_1d8 = puVar11;
    puVar11 = local_1d8;
    local_1d8._4_4_ = (float)((ulonglong)puVar11 >> 0x20);
    dVar4 = ((double)local_1d8._4_4_ + (double)(int)puVar11) / (double)*local_168;
    lVar24 = (longlong)dVar4;
    dVar37 = dVar4;
    if ((lVar24 != -0x8000000000000000) && ((double)lVar24 != dVar4)) {
      auVar38._8_8_ = dVar4;
      auVar38._0_8_ = dVar4;
      uVar10 = movmskpd((int)puVar11,auVar38);
      dVar37 = (double)(longlong)(lVar24 - (ulonglong)(uVar10 & 1));
    }
    dVar4 = dVar4 - dVar37;
    local_290 = (int)dVar37;
    if (0.0 <= dVar4) {
      dVar37 = 0.9999999403953552;
      if (dVar4 <= 0.9999999403953552) {
        dVar37 = dVar4;
      }
    }
    else {
      dVar37 = 0.0;
    }
    fStack_28c = (float)dVar37;
    if (0.0 <= fStack_28c) {
      if (0.99999994 <= fStack_28c) {
        fStack_28c = 0.99999994;
      }
    }
    else {
      fStack_28c = 0.0;
    }
    local_23c = CONCAT44(fStack_28c,local_290);
    local_240 = 1.0 / *local_168;
    local_1d8 = puVar11;
    if (local_210[0] == '\x02') {
      iVar35 = 0;
      cVar32 = '\x02';
    }
    else {
      bVar36 = local_210[0] != '\x01';
      if (bVar36) {
        local_1e0 = local_20c;
        uStack_1dc = 0;
        piVar16 = (int *)operator*(local_110,local_20c,&local_240);
      }
      else {
        local_1e8 = local_20c;
        uStack_1e4 = 0;
        piVar16 = (int *)operator*(local_118,local_20c,&local_240);
      }
      cVar32 = !bVar36;
      iVar35 = *piVar16;
    }
    if (cVar29 == '\x02') {
      local_274 = 0;
    }
    else {
      if (cVar29 == '\x01') {
        local_228[0] = iVar8;
        local_228[1] = 0;
        piVar16 = (int *)operator*(local_108,iVar8,&local_240);
      }
      else {
        local_228[2] = iVar8;
        uStack_21c = 0;
        piVar16 = (int *)operator*(local_120,iVar8,&local_240);
        cVar29 = '\0';
      }
      local_274 = *piVar16;
    }
    cVar20 = *pcVar12;
    local_27c = iVar35;
    local_278[0] = cVar29;
    local_280[0] = cVar32;
    if ((((cVar20 == '\x02') || (pcVar12[8] == '\x02')) ||
        ((*(int *)(pcVar12 + 4) <= *(int *)(pcVar12 + 0xc) &&
         ((*(int *)(pcVar12 + 4) != *(int *)(pcVar12 + 0xc) ||
          ((cVar20 != '\0' && (pcVar12[8] != '\0')))))))) &&
       (((cVar32 == '\x02' || (cVar29 == '\x02')) ||
        ((iVar35 <= local_274 && ((iVar35 != local_274 || ((cVar32 != '\0' && (cVar29 != '\0')))))))
        ))) {
      pcVar14 = pcVar12 + 8;
      if (pcVar12[8] == '\x02') {
        pcVar15 = local_278;
      }
      else {
        pcVar15 = pcVar14;
        if ((cVar29 != '\x02') && (local_274 <= *(int *)(pcVar12 + 0xc))) {
          if (local_274 < *(int *)(pcVar12 + 0xc)) {
            pcVar15 = local_278;
          }
          else {
            pcVar15 = local_278;
            if (pcVar12[8] == '\0') {
              pcVar15 = pcVar14;
            }
          }
        }
      }
      if (cVar20 == '\x02') {
LAB_141f50eea:
        pcVar14 = local_280;
        cVar20 = cVar32;
      }
      else {
        pcVar14 = pcVar12;
        if ((cVar32 != '\x02') && (*(int *)(pcVar12 + 4) <= iVar35)) {
          if ((*(int *)(pcVar12 + 4) < iVar35) || (cVar20 != '\0')) goto LAB_141f50eea;
          cVar20 = '\0';
        }
      }
      iVar8 = *(int *)(pcVar14 + 4);
      cVar29 = *pcVar15;
      iVar35 = *(int *)(pcVar15 + 4);
      if (((cVar20 == '\x02') || (cVar29 == '\x02')) ||
         ((iVar8 <= iVar35 && ((iVar8 != iVar35 || ((cVar20 != '\0' && (cVar29 != '\0')))))))) {
        local_188[0] = cVar20;
        local_184 = iVar8;
        local_180 = cVar29;
        local_17c = iVar35;
        local_c0 = cVar20;
        local_bc = iVar8;
        local_b8 = cVar29;
        local_b4 = iVar35;
        puVar17 = (undefined1 *)operator*(local_100,local_188,&uStack_8c);
        local_a0 = CONCAT31(local_a0._1_3_,*puVar17);
        local_9c = *(int *)(puVar17 + 4);
        local_98 = puVar17[8];
        local_94 = *(undefined4 *)(puVar17 + 0xc);
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>::
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>
                  (&local_1d8,local_160,CONCAT44(iStack_1fc,iStack_200));
        local_218 = 0xffffffffffffffff;
        local_1b0 = local_1d8;
        uStack_1a8 = puStack_1d0;
        local_1a0 = puStack_1c8;
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>::
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSectionData>
                  (&local_268,local_1d8,0xffffffffffffffff);
        puVar1 = local_1b0;
        uVar33 = local_258;
        puVar11 = puStack_260;
        puVar28 = uStack_1a8;
        uVar10 = (uint)local_1a0;
LAB_141f50fd6:
        if (((puVar1 != (uint *)CONCAT44(uStack_264,local_268)) || (puVar28 != puVar11)) ||
           (uVar10 != uVar33)) {
          uVar21 = puVar28[7];
          if (uVar21 == 0xffffffff) {
            local_140 = 0;
            plVar19 = &local_140;
            local_138 = 0;
          }
          else {
            uStack_148 = *(undefined4 *)
                          (*(longlong *)(puVar1 + 0x10) + 4 + (longlong)(int)uVar21 * 0xc);
            plVar19 = &local_150;
            local_150 = (longlong)
                        *(int *)(*(longlong *)(puVar1 + 0x10) + (longlong)(int)uVar21 * 0xc) * 0x1c
                        + *(longlong *)(puVar1 + 0x14);
          }
          lVar34 = (longlong)(int)uVar10 * 0x1c + *plVar19;
          lVar24 = FWeakObjectPtr::Get(lVar34);
          if (lVar24 != 0) {
            uVar13 = UMovieSceneSubTrack::GetPrivateStaticClass();
            lVar18 = UObjectBaseUtility::GetTypedOuter(lVar24,uVar13);
            bVar3 = *(byte *)(local_230 + 0xb);
            if (((bVar3 == 0) ||
                ((((bVar3 & 1) != 0 && (lVar18 != 0)) && ((*(byte *)(lVar18 + 0x50) & 4) != 0)))) ||
               ((((bVar3 & 2) != 0 && (lVar18 != 0)) && ((*(byte *)(lVar18 + 0x50) & 8) != 0)))) {
              local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(lVar34 + 0x18));
              FUN_141f4f7b0(lVar24,lVar34 + 8,&local_e8,local_270);
            }
          }
          puVar27 = puVar28;
          uVar10 = uVar10 + 1;
          do {
            uVar21 = puVar27[7];
            if (uVar21 == 0xffffffff) {
              local_178 = 0;
              plVar19 = &local_178;
              local_170 = 0;
            }
            else {
              uStack_128 = *(undefined4 *)
                            (*(longlong *)(puVar1 + 0x10) + 4 + (longlong)(int)uVar21 * 0xc);
              plVar19 = &local_130;
              local_130 = (longlong)
                          *(int *)(*(longlong *)(puVar1 + 0x10) + (longlong)(int)uVar21 * 0xc) *
                          0x1c + *(longlong *)(puVar1 + 0x14);
            }
            local_1d8 = (uint *)*plVar19;
            puStack_1d0 = (uint *)plVar19[1];
            if ((-1 < (int)uVar10) &&
               (puStack_1d0._0_4_ = (int)(uint *)plVar19[1], bVar36 = (int)uVar10 < (int)puStack_1d0
               , puVar28 = puVar27, bVar36)) break;
            if ((puVar27[4] != 0xffffffff) || (puVar28 = (uint *)0x0, puVar27[5] == 0)) {
              iVar8 = (int)*(longlong *)(puVar27 + 4);
              puVar28 = puVar1;
              if (iVar8 != -1) {
                puVar28 = (uint *)(((longlong)
                                    *(int *)(*(longlong *)(puVar1 + 8) + (longlong)iVar8 * 0xc) +
                                   (longlong)(int)((ulonglong)*(longlong *)(puVar27 + 4) >> 0x20)) *
                                   0x20 + *(longlong *)(puVar1 + 0xc));
              }
            }
            puVar27 = puVar28;
            uVar10 = 0;
          } while (puVar28 != (uint *)0x0);
          goto LAB_141f50fd6;
        }
        uVar33 = (uint)local_298;
        pcVar12 = local_158;
      }
    }
    FMovieSceneEvaluationTreeRangeIterator::operator++(local_210);
  } while( true );
}



// FUNCTION 141f511b0 GatherSweptSegments body=249 status=ok
// SIG undefined GatherSweptSegments(void)

void `anonymous_namespace'::GatherSweptSegments
               (undefined1 *param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  
  lVar1 = *param_3;
  uVar5 = (ulonglong)param_2;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 0) break;
    local_28[0] = *param_1;
    local_24 = *(undefined4 *)(param_1 + 4);
    local_20 = param_1[8];
    local_1c = *(undefined4 *)(param_1 + 0xc);
    cVar3 = IntersectSegmentRanges((longlong)param_2 * 0x58 + lVar1,local_28,param_4);
  } while (cVar3 != '\0');
  local_28[0] = *param_1;
  local_24 = *(undefined4 *)(param_1 + 4);
  local_20 = param_1[8];
  local_1c = *(undefined4 *)(param_1 + 0xc);
  IntersectSegmentRanges(uVar5 * 0x58 + lVar1,local_28,param_4);
  lVar2 = param_3[1];
  do {
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    if ((int)lVar2 <= (int)uVar4) {
      return;
    }
    local_28[0] = *param_1;
    local_24 = *(undefined4 *)(param_1 + 4);
    local_20 = param_1[8];
    local_1c = *(undefined4 *)(param_1 + 0xc);
    cVar3 = IntersectSegmentRanges((longlong)(int)uVar4 * 0x58 + lVar1,local_28,param_4);
  } while (cVar3 != '\0');
  return;
}



// FUNCTION 141f512b0 FUN_141f512b0 body=490 status=ok
// SIG undefined FUN_141f512b0(void)

void FUN_141f512b0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_38;
  undefined8 local_30;
  
  FMovieSceneEvaluationTemplate::ResetFieldData(*(undefined8 *)(param_1 + 0x10));
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar3 = *(int *)(param_1 + 0x40) + 0x1f;
  _Dst = *(void **)(param_1 + 0x38);
  if (*(void **)(param_1 + 0x38) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x28);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x60)) {
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x60);
    uVar9 = uVar11;
    do {
      uVar5 = (longlong)*(int *)(param_1 + 0x60) - 1U & uVar9;
      lVar4 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar4 = param_1 + 0x50;
      }
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar4 + uVar5 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x298))();
  if (*(longlong *)(lVar4 + 0x90) != 0) {
    local_38 = 0;
    local_30 = 0;
    FUN_141f5d460(param_1,*(longlong *)(lVar4 + 0x90),&local_38);
  }
  puVar6 = *(undefined8 **)(lVar4 + 0x80);
  puVar7 = puVar6 + *(int *)(lVar4 + 0x88);
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    local_38 = 0;
    local_30 = 0;
    FUN_141f5d460(param_1,*puVar6,&local_38);
  }
  lVar8 = *(longlong *)(lVar4 + 0x70);
  lVar4 = (longlong)*(int *)(lVar4 + 0x78) * 0x30 + lVar8;
  for (; lVar8 != lVar4; lVar8 = lVar8 + 0x30) {
    puVar7 = *(undefined8 **)(lVar8 + 0x20);
    uVar9 = (longlong)*(int *)(lVar8 + 0x28) & 0x1fffffffffffffff;
    if (puVar7 + *(int *)(lVar8 + 0x28) < puVar7) {
      uVar9 = uVar11;
    }
    uVar10 = uVar11;
    if (uVar9 != 0) {
      do {
        FUN_141f5d460(param_1,*puVar7,lVar8);
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 != uVar9);
    }
  }
  FUN_141f60270(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
  *(undefined8 *)(lVar4 + 0x170) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
  *(undefined8 *)(lVar4 + 0x178) = uVar2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x180);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 141f514a0 GenerateHash body=290 status=ok
// SIG undefined GenerateHash(void)

ulonglong FMovieSceneAnimTypeID::GenerateHash(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (int)((ulonglong)param_1 >> 0x20) - param_2 ^ param_2 >> 0xd;
  uVar2 = (int)param_1 - param_2 ^ param_2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - param_2 ^ uVar4 << 8;
  uVar1 = (param_2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar5 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 3;
  uVar4 = (uVar3 - uVar5) - uVar1 ^ uVar5 << 10;
  uVar6 = (-0x61c88647 - uVar2) - param_2 ^ uVar2 << 8;
  uVar3 = (param_2 - uVar6) - uVar2 ^ uVar6 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar3 >> 0xc;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar3 >> 3;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 10;
  return ((ulonglong)((uVar1 - uVar4) - uVar5) << 0xf ^ (ulonglong)uVar4 & 0xffffffffffff8000) <<
         0x11 | (ulonglong)((uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xf);
}



// FUNCTION 141f515d0 FUN_141f515d0 body=29 status=ok
// SIG undefined FUN_141f515d0(void)

undefined8 FUN_141f515d0(undefined8 param_1,undefined8 param_2)

{
  FUN_141f39a10(param_2,param_1);
  return param_2;
}



// FUNCTION 141f51600 GenerateTemplate body=277 status=ok
// SIG undefined GenerateTemplate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UMovieSceneTrack::GenerateTemplate(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_30;
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_110 = *param_2;
  uStack_10c = param_2[1];
  uStack_108 = param_2[2];
  uStack_104 = param_2[3];
  local_20 = local_20 | 3;
  local_118 = 0xffffffffffffffff;
  local_f8 = 0;
  local_100 = 1000;
  local_c0 = 0xffffffffffffffff;
  local_f0 = 0;
  local_30 = local_30 & 0xfe | 2;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_28 = 0;
  local_fe = 0;
  local_d0 = 2;
  local_c8 = 2;
  local_b8 = 0xffffffffffffffff;
  cVar1 = FUN_141f44b50(param_1,&local_110,param_2);
  if (cVar1 == '\0') {
    (**(code **)**(undefined8 **)(param_2 + 6))(*(undefined8 **)(param_2 + 6),&local_110,param_1);
  }
  FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack(&local_110);
  return;
}



// FUNCTION 141f51720 GenerateTrackTemplate body=297 status=ok
// SIG undefined GenerateTrackTemplate(void)

undefined4 * UMovieSceneTrack::GenerateTrackTemplate(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined **local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined ***local_20;
  
  *(undefined2 *)(param_2 + 4) = 1000;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0x10) = 2;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 2;
  param_2[0x13] = 0;
  *(undefined8 *)(param_2 + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) & 0xfe;
  *(byte *)(param_2 + 0x38) = *(byte *)(param_2 + 0x38) | 2;
  local_res10[0] = &PTR_StartProfileThreadUsage_144f1c7c8;
  local_20 = local_res10;
  *(undefined8 *)(param_2 + 0x3a) = 0;
  param_2[0x3c] = param_2[0x3c] | 3;
  uVar1 = UMovieSceneSequence::GetPrivateStaticClass();
  lVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  if (lVar2 != 0) {
    uVar1 = UMovieSceneSequence::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
    local_28 = *(undefined1 *)(lVar2 + 0x340);
  }
  FUN_141f44b50(param_1,param_2,&local_38);
  return param_2;
}



// FUNCTION 141f51850 FUN_141f51850 body=193 status=ok
// SIG undefined FUN_141f51850(void)

longlong * FUN_141f51850(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = (longlong *)param_1[1];
  plVar6 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar2[1];
    bVar7 = iVar3 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar3 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (plVar2 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        plVar5 = plVar2;
        if ((*param_1 != 0) &&
           (lVar4 = FMovieSceneChannelProxy::FindEntry(*param_1,param_1[2]), lVar4 != 0)) {
          iVar3 = (int)param_1[3];
          plVar6 = (longlong *)0x0;
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar4 + 0x10))) {
            plVar6 = *(longlong **)(*(longlong *)(lVar4 + 8) + (longlong)iVar3 * 8);
          }
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
  }
  return plVar6;
}



// FUNCTION 141f51920 GetAccumulator body=291 status=ok
// SIG undefined GetAccumulator(void)

longlong * FMovieSceneInterrogationData::GetAccumulator(longlong param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  pplVar1 = (longlong **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *pplVar1;
  }
  plStack_10 = (longlong *)
               SharedPointerInternals::
               NewIntrusiveReferenceController<FMovieSceneBlendingAccumulator>();
  local_18 = plStack_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  local_28 = local_18;
  plStack_20 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_10 + 1) = (int)plStack_10[1] + 1;
    UNLOCK();
  }
  if (pplVar1 != &local_28) {
    *pplVar1 = local_18;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&plStack_20);
  }
  plVar6 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar6 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_10 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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
  return *pplVar1;
}



// FUNCTION 141f51a50 GetAnimTypeID body=313 status=ok
// SIG undefined GetAnimTypeID(void)

undefined8 *
TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID
          (int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  do {
    LOCK();
    iVar6 = *param_1;
    *param_1 = 1;
    UNLOCK();
  } while (iVar6 != 0);
  puVar1 = *(undefined8 **)(param_1 + 6);
  iVar6 = param_1[8];
  puVar7 = puVar1;
  do {
    if (puVar7 == puVar1 + (longlong)iVar6 * 2) {
LAB_141f51add:
      iVar6 = param_1[8];
      param_1[8] = iVar6 + 1;
      if (param_1[9] < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 6,iVar6);
      }
      FString::FString((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 6),param_3);
      uVar3 = FMovieSceneAnimTypeID::GenerateHash(param_1,param_1[4]);
      iVar6 = param_1[4];
      param_1[4] = iVar6 + 1;
      if (param_1[5] < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar6);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar6 * 8) = uVar3;
      LOCK();
      *param_1 = 0;
      UNLOCK();
      *param_2 = uVar3;
      return param_2;
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    if (*(int *)(puVar7 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar7;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar2 == 0) {
      iVar6 = (int)((longlong)puVar7 - (longlong)puVar1 >> 4);
      if (iVar6 != -1) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar6 * 8);
        LOCK();
        *param_1 = 0;
        UNLOCK();
        *param_2 = uVar3;
        return param_2;
      }
      goto LAB_141f51add;
    }
    puVar7 = puVar7 + 2;
  } while( true );
}



// FUNCTION 141f51b90 GetAutoSizeRange body=559 status=ok
// SIG undefined GetAutoSizeRange(void)

char * UMovieSceneSection::GetAutoSizeRange(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  char local_58 [4];
  int local_54;
  char local_50 [4];
  int local_4c;
  undefined1 local_48 [16];
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    iVar10 = 0;
    cVar6 = '\0';
    cVar9 = '\0';
    local_58[0] = '\0';
    local_54 = 0;
    local_50[0] = '\0';
    local_4c = 0;
    uVar11 = (ulonglong)(*(longlong *)(lVar3 + 0x28) != 0) - 1 & lVar3 + 0x10U |
             *(ulonglong *)(lVar3 + 0x28);
    uVar2 = uVar11 + (longlong)*(int *)(lVar3 + 0x30) * 0x18;
    iVar8 = iVar10;
    if (uVar11 != uVar2) {
      do {
        uVar14 = 0;
        puVar13 = *(undefined8 **)(uVar11 + 8);
        uVar12 = (longlong)*(int *)(uVar11 + 0x10) & 0x1fffffffffffffff;
        if (puVar13 + *(int *)(uVar11 + 0x10) < puVar13) {
          uVar12 = uVar14;
        }
        if (uVar12 != 0) {
          do {
            pcVar4 = (char *)(**(code **)(*(longlong *)*puVar13 + 0x38))
                                       ((longlong *)*puVar13,local_48);
            if (((cVar6 == '\x02') || (cVar9 == '\x02')) ||
               ((iVar8 <= iVar10 && ((iVar8 != iVar10 || ((cVar6 != '\0' && (cVar9 != '\0')))))))) {
              cVar7 = *pcVar4;
              if (((cVar7 == '\x02') || (pcVar4[8] == '\x02')) ||
                 ((*(int *)(pcVar4 + 4) <= *(int *)(pcVar4 + 0xc) &&
                  ((*(int *)(pcVar4 + 4) != *(int *)(pcVar4 + 0xc) ||
                   ((cVar7 != '\0' && (pcVar4[8] != '\0')))))))) {
                pcVar1 = pcVar4 + 8;
                if (cVar9 == '\x02') {
                  pcVar5 = local_50;
                }
                else {
                  pcVar5 = pcVar1;
                  if (*pcVar1 != '\x02') {
                    if (*(int *)(pcVar4 + 0xc) < iVar10) {
                      pcVar5 = local_50;
                    }
                    else if ((*(int *)(pcVar4 + 0xc) <= iVar10) &&
                            (pcVar5 = local_50, cVar9 != '\x01')) {
                      pcVar5 = pcVar1;
                    }
                  }
                }
                if (cVar6 == '\x02') {
                  pcVar4 = local_58;
                  cVar7 = cVar6;
                }
                else if (cVar7 != '\x02') {
                  if (iVar8 < *(int *)(pcVar4 + 4)) {
                    pcVar4 = local_58;
                    cVar7 = cVar6;
                  }
                  else if ((iVar8 <= *(int *)(pcVar4 + 4)) && (cVar6 == '\x01')) {
                    pcVar4 = local_58;
                    cVar7 = cVar6;
                  }
                }
                cVar9 = *pcVar5;
                iVar10 = *(int *)(pcVar5 + 4);
                goto LAB_141f51d1d;
              }
            }
            else {
              cVar7 = *pcVar4;
              cVar9 = pcVar4[8];
              iVar10 = *(int *)(pcVar4 + 0xc);
LAB_141f51d1d:
              iVar8 = *(int *)(pcVar4 + 4);
              cVar6 = cVar7;
            }
            puVar13 = puVar13 + 1;
            uVar14 = uVar14 + 1;
            local_58[0] = cVar6;
            local_54 = iVar8;
            local_50[0] = cVar9;
            local_4c = iVar10;
          } while (uVar14 != uVar12);
        }
        uVar11 = uVar11 + 0x18;
      } while (uVar11 != uVar2);
      if (((cVar6 == '\x02') || (cVar9 == '\x02')) ||
         ((iVar8 <= iVar10 && ((iVar8 != iVar10 || ((cVar6 != '\0' && (cVar9 != '\0')))))))) {
        *param_2 = cVar6;
        *(int *)(param_2 + 4) = iVar8;
        param_2[8] = cVar9;
        *(int *)(param_2 + 0xc) = iVar10;
        param_2[0x10] = '\x01';
        return param_2;
      }
    }
  }
  param_2[0x10] = '\0';
  return param_2;
}



// FUNCTION 141f51dc0 FUN_141f51dc0 body=390 status=ok
// SIG undefined FUN_141f51dc0(void)

undefined1 * FUN_141f51dc0(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_res8;
  float fStackX_c;
  int local_res18;
  float fStackX_1c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x298))();
    if (lVar3 != 0) {
      uVar4 = FUN_141f5a3a0(param_1,local_38);
      FMovieSceneSequenceTransform::Inverse(uVar4,local_48);
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x298))();
      fStackX_c = 0.0;
      lVar5 = 0;
      if (*(char *)(lVar3 + 0xa8) == '\0') {
        lVar5 = 4;
      }
      local_res8 = *(int *)((longlong)&DAT_144f1bc88 + lVar5) + *(int *)(lVar3 + 0xac);
      operator*(&local_res8,local_res8,local_48);
      fStackX_1c = 0.0;
      uVar1 = 0;
      if (*(char *)(lVar3 + 0xb0) == '\x01') {
        uVar1 = 4;
      }
      local_res18 = *(int *)((longlong)&DAT_144f1bc90 + (ulonglong)uVar1) + *(int *)(lVar3 + 0xb4);
      operator*(&local_res18,local_res18,local_48);
      if (0.5 <= fStackX_c) {
        local_res8 = local_res8 + 1;
      }
      if (0.5 <= fStackX_1c) {
        local_res18 = local_res18 + 1;
      }
      iVar2 = *(int *)(param_1 + 0x94);
      if (*(char *)(param_1 + 0x90) != '\x01') {
        iVar2 = iVar2 + 1;
      }
      *param_2 = 1;
      *(int *)(param_2 + 4) = iVar2;
      param_2[8] = 0;
      *(int *)(param_2 + 0xc) = (local_res18 - local_res8) + iVar2;
      param_2[0x10] = 1;
      return param_2;
    }
  }
  UMovieSceneSection::GetAutoSizeRange(param_1,param_2);
  return param_2;
}



// FUNCTION 141f51f50 GetBoundObjects body=318 status=ok
// SIG undefined GetBoundObjects(void)

longlong *
UMovieSceneSequencePlayer::GetBoundObjects(longlong param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_res8;
  int local_resc;
  int *local_28;
  int local_20;
  
  piVar5 = (int *)0x0;
  iVar6 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x110) == 0) {
      lVar2 = param_1 + 0x108;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)*param_3) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0xd0));
        if (*piVar4 == *param_3) {
          if (iVar1 != -1) goto LAB_141f51fe7;
          break;
        }
        iVar1 = piVar4[0x2e];
      } while (iVar1 != -1);
    }
  }
  piVar4 = piVar5;
LAB_141f51fe7:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = piVar5;
  }
  if (piVar3 != (int *)0x0) {
    FMovieSceneObjectCache::FindBoundObjects(piVar3,&local_28,param_3 + 2,param_1 + 0x28);
    piVar5 = local_28;
    iVar6 = local_20;
  }
  piVar4 = piVar5 + (longlong)iVar6 * 2;
  for (; piVar5 != piVar4; piVar5 = piVar5 + 2) {
    local_res8 = *piVar5;
    local_resc = piVar5[1];
    lVar2 = FWeakObjectPtr::Get(&local_res8);
    if (lVar2 != 0) {
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar2;
    }
  }
  return param_2;
}



// FUNCTION 141f52090 GetCurrentTime body=47 status=ok
// SIG undefined GetCurrentTime(void)

undefined8 FMovieSceneTimeController_AudioClock::GetCurrentTime(void)

{
  longlong lVar1;
  
  if (DAT_146b17150 != 0) {
    lVar1 = FUN_142875430();
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x360);
    }
  }
  return 0;
}



// FUNCTION 141f520c0 GetCurrentTime body=46 status=ok
// SIG undefined GetCurrentTime(void)

double FMovieSceneTimeController_PlatformClock::GetCurrentTime(void)

{
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  return (double)local_res10[0].QuadPart * DAT_1468b02f8 + 16777216.0;
}



// FUNCTION 141f520f0 FUN_141f520f0 body=25 status=ok
// SIG undefined FUN_141f520f0(void)

undefined8 * FUN_141f520f0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x774);
  param_2[1] = *(undefined8 *)(param_1 + 0x760);
  return param_2;
}



// FUNCTION 141f52110 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f34640(param_2);
  return param_2;
}



// FUNCTION 141f52130 FUN_141f52130 body=42 status=ok
// SIG undefined FUN_141f52130(void)

ulonglong * FUN_141f52130(longlong param_1,ulonglong *param_2)

{
  *param_2 = (ulonglong)*(uint *)(param_1 + 0x3e4);
  param_2[1] = *(ulonglong *)(param_1 + 0x760);
  return param_2;
}



// FUNCTION 141f52160 FUN_141f52160 body=7 status=ok
// SIG undefined FUN_141f52160(void)

undefined4 FUN_141f52160(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3e4);
}



// FUNCTION 141f52170 GetHandle body=64 status=ok
// SIG undefined GetHandle(void)

undefined4 * FMovieSceneChannelData::GetHandle(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)
             FKeyHandleLookupTable::FindOrAddKeyHandle(*(longlong *)(param_1 + 8),local_res8);
    *param_2 = *puVar1;
    return param_2;
  }
  puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res10);
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 141f521b0 FUN_141f521b0 body=19 status=ok
// SIG undefined FUN_141f521b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141f521b0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int aiStackX_10 [6];
  undefined1 auStack_48 [32];
  int iStack_28;
  undefined1 auStack_24 [4];
  int *piStack_20;
  int *piStack_18;
  ulonglong uStack_10;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    return -1;
  }
  uStack_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(puVar1 + 3) != *(int *)((longlong)puVar1 + 0x44)) {
    puVar3 = (undefined8 *)puVar1[10];
    if ((undefined8 *)puVar1[10] == (undefined8 *)0x0) {
      puVar3 = puVar1 + 9;
    }
    iVar2 = *(int *)((longlong)puVar3 +
                    ((longlong)*(int *)(puVar1 + 0xb) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar2 * 0x10 + puVar1[2]);
        if (*piVar6 == param_2) {
          if (iVar2 != -1) goto LAB_1423d1d92;
          break;
        }
        iVar2 = piVar6[2];
      } while (iVar2 != -1);
    }
  }
  piVar6 = (int *)0x0;
LAB_1423d1d92:
  piVar4 = piVar6 + 1;
  if (piVar6 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    if ((iVar2 < 0) || (iVar5 = *(int *)(puVar1 + 1), iVar5 <= iVar2)) {
      piVar6 = (int *)*puVar1;
      iVar5 = *(int *)(puVar1 + 1);
    }
    else {
      piVar6 = (int *)*puVar1;
      if (((char)piVar6[(longlong)iVar2 * 2 + 1] == '\x01') &&
         (piVar6[(longlong)iVar2 * 2] == param_2)) {
        return iVar2;
      }
    }
    for (piVar4 = piVar6; piVar4 != piVar6 + (longlong)iVar5 * 2; piVar4 = piVar4 + 2) {
      if (((char)piVar4[1] != '\0') && (*piVar4 == param_2)) {
        iStack_28 = (int)((longlong)piVar4 - (longlong)piVar6 >> 3);
        goto LAB_1423d1e0e;
      }
    }
    iStack_28 = -1;
LAB_1423d1e0e:
    if (iStack_28 != -1) {
      piStack_20 = aiStackX_10;
      piStack_18 = &iStack_28;
      aiStackX_10[0] = param_2;
      TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
                (puVar1 + 2,auStack_24,&piStack_20,0);
      return iStack_28;
    }
  }
  return -1;
}



// FUNCTION 141f521d0 GetInitialValue body=240 status=ok
// SIG undefined GetInitialValue(void)

int TMovieSceneInitialValueStore<int>::GetInitialValue(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 local_res8;
  
  local_res8._4_4_ = 0;
  iVar6 = -1;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar6 = (int)local_res8;
  }
  uVar5 = local_res8;
  plVar3 = (longlong *)*param_1;
  piVar7 = (int *)plVar3[3];
  piVar1 = piVar7 + (longlong)(int)plVar3[4] * 3;
  while( true ) {
    if (piVar7 == piVar1) {
      iVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar4 = *param_1;
        iVar2 = *(int *)(lVar4 + 0x20);
        *(int *)(lVar4 + 0x20) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x24) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar4 + 0x18,iVar2);
        }
        lVar4 = *(longlong *)(lVar4 + 0x18);
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = uVar5;
        *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = iVar6;
      }
      return iVar6;
    }
    if ((*piVar7 == iVar6) && (piVar7[1] == local_res8._4_4_)) break;
    piVar7 = piVar7 + 3;
  }
  return piVar7[2];
}



// FUNCTION 141f522c0 FUN_141f522c0 body=136 status=ok
// SIG undefined FUN_141f522c0(void)

undefined8 * FUN_141f522c0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aca240) {
    _Init_thread_header(&DAT_146aca240);
    if (DAT_146aca240 == -1) {
      DAT_146aca1d8 = DAT_146aca1d8 + 1;
      DAT_146aca238 = FMovieSceneAnimTypeID::GenerateHash(&DAT_146aca1d8,DAT_146aca1d8 & 0xffffffff)
      ;
      _Init_thread_footer(&DAT_146aca240);
    }
  }
  *param_1 = DAT_146aca238;
  return param_1;
}



// FUNCTION 141f52350 GetKeyTimes body=150 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneBoolChannel::GetKeyTimes(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = (undefined4 *)*param_3;
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar4 = *param_2 - (longlong)puVar2;
    uVar3 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      if ((param_1 + 0x30 != 0) &&
         (iVar1 = FKeyHandleLookupTable::GetIndex
                            (param_1 + 0x30,*(undefined4 *)(lVar4 + (longlong)puVar2)), iVar1 != -1)
         ) {
        *puVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 141f523f0 GetKeyTimes body=150 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneByteChannel::GetKeyTimes(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = (undefined4 *)*param_3;
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar4 = *param_2 - (longlong)puVar2;
    uVar3 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      if ((param_1 + 0x38 != 0) &&
         (iVar1 = FKeyHandleLookupTable::GetIndex
                            (param_1 + 0x38,*(undefined4 *)(lVar4 + (longlong)puVar2)), iVar1 != -1)
         ) {
        *puVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 141f52490 GetKeyTimes body=125 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneChannelData::GetKeyTimes(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    lVar4 = 0;
    lVar1 = *param_2;
    do {
      if ((param_1[1] != 0) &&
         (iVar3 = FKeyHandleLookupTable::GetIndex(param_1[1],*(undefined4 *)(lVar1 + lVar4 * 4)),
         iVar3 != -1)) {
        *(undefined4 *)(*param_3 + lVar4 * 4) =
             *(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar3 * 4);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)lVar2);
  }
  return;
}



// FUNCTION 141f52510 GetKeyTimes body=150 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneFloatChannel::GetKeyTimes(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  puVar2 = (undefined4 *)*param_3;
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar4 = *param_2 - (longlong)puVar2;
    uVar3 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      if ((param_1 + 0x38 != 0) &&
         (iVar1 = FKeyHandleLookupTable::GetIndex
                            (param_1 + 0x38,*(undefined4 *)(lVar4 + (longlong)puVar2)), iVar1 != -1)
         ) {
        *puVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 141f525b0 GetKeys body=46 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneBoolChannel::GetKeys(longlong param_1)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = param_1 + 8;
  local_20 = param_1 + 0x30;
  local_18 = param_1 + 0x20;
  FMovieSceneChannelData::GetKeys(&local_28);
  return;
}



// FUNCTION 141f525e0 GetKeys body=46 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneByteChannel::GetKeys(longlong param_1)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = param_1 + 8;
  local_20 = param_1 + 0x38;
  local_18 = param_1 + 0x20;
  FMovieSceneChannelData::GetKeys(&local_28);
  return;
}



// FUNCTION 141f52610 GetKeys body=443 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneChannelData::GetKeys
               (longlong *param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  plVar2 = (longlong *)*param_1;
  iVar8 = (int)plVar2[1];
  if (iVar8 != 0) {
    uVar9 = 0;
    if (*param_2 == '\x02') {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar9;
      if (iVar8 != 0) {
        uVar7 = (longlong)iVar8;
        do {
          uVar6 = uVar7 >> 1;
          if (*(int *)(*plVar2 + (uVar6 + uVar11) * 4) < *(int *)(param_2 + 4)) {
            uVar11 = (ulonglong)((uint)uVar7 & 1) + uVar6 + uVar11;
          }
          uVar7 = uVar6;
        } while (uVar6 != 0);
      }
    }
    if (param_2[8] == '\x02') {
      uVar9 = (ulonglong)*(uint *)(plVar2 + 1);
    }
    else if ((longlong)(int)plVar2[1] != 0) {
      uVar7 = (longlong)(int)plVar2[1];
      do {
        uVar6 = uVar7 >> 1;
        if (*(int *)(*plVar2 + (uVar6 + uVar9) * 4) <= *(int *)(param_2 + 0xc)) {
          uVar9 = (ulonglong)((uint)uVar7 & 1) + uVar6 + uVar9;
        }
        uVar7 = uVar6;
      } while (uVar6 != 0);
    }
    uVar10 = (uint)uVar11;
    iVar8 = (int)uVar9 - uVar10;
    if (0 < iVar8) {
      if (param_3 != (longlong *)0x0) {
        iVar5 = *(int *)((longlong)param_3 + 0xc);
        iVar12 = (int)param_3[1];
        if (iVar5 < iVar12 + iVar8) {
          TArray<float,FDefaultAllocator>::ResizeTo(param_3);
          iVar5 = *(int *)((longlong)param_3 + 0xc);
          iVar12 = (int)param_3[1];
        }
        lVar3 = *(longlong *)*param_1;
        *(int *)(param_3 + 1) = iVar12 + iVar8;
        if (iVar5 < iVar12 + iVar8) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar12);
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_3 + (longlong)iVar12 * 4),
                   (void *)((longlong)(int)uVar10 * 4 + lVar3),(longlong)iVar8 << 2);
      }
      if (param_4 != (longlong *)0x0) {
        if (*(int *)((longlong)param_4 + 0xc) < (int)param_4[1] + iVar8) {
          TArray<float,FDefaultAllocator>::ResizeTo(param_4);
        }
        while ((int)uVar10 < (int)uVar9) {
          if (param_1[1] == 0) {
            puVar4 = (undefined4 *)FKeyHandle::FKeyHandle(local_38);
          }
          else {
            puVar4 = (undefined4 *)
                     FKeyHandleLookupTable::FindOrAddKeyHandle
                               (param_1[1],local_res8,uVar11 & 0xffffffff);
          }
          iVar8 = (int)param_4[1];
          uVar1 = *puVar4;
          *(int *)(param_4 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          *(undefined4 *)(*param_4 + (longlong)iVar8 * 4) = uVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 141f527d0 GetKeys body=46 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneFloatChannel::GetKeys(longlong param_1)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_28 = param_1 + 0x10;
  local_20 = param_1 + 0x38;
  local_18 = param_1 + 0x20;
  FMovieSceneChannelData::GetKeys(&local_28);
  return;
}



// FUNCTION 141f52800 GetLastValidTime body=92 status=ok
// SIG undefined GetLastValidTime(void)

ulonglong * UMovieSceneSequencePlayer::GetLastValidTime(longlong param_1,ulonglong *param_2)

{
  if (*(int *)(param_1 + 0x3e4) < 1) {
    *param_2 = (ulonglong)*(uint *)(param_1 + 0x3e0);
    return param_2;
  }
  *param_2 = CONCAT44(0x3f7fffff,*(int *)(param_1 + 0x3e0) + -1 + *(int *)(param_1 + 0x3e4));
  return param_2;
}



// FUNCTION 141f52860 FUN_141f52860 body=509 status=ok
// SIG undefined FUN_141f52860(void)

undefined8 * FUN_141f52860(undefined8 *param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  if ((DAT_146aca2dc <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38)) || (_Init_thread_header(&DAT_146aca2dc), DAT_146aca2dc != -1)) {
    *param_1 = DAT_1464d3f10;
    return param_1;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = DAT_1468b1f88;
  plVar5 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = (longlong)&DAT_1464d3f10;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = (longlong)FCachedLegacyConversionFrameRate::OnChanged;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x40))(plVar4,local_res8,&local_28);
  DAT_1464d3f18 = *puVar3;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_141f529df;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_141f529df:
  local_28 = (longlong *)0x0;
  local_20 = *(int *)(DAT_146ac9b38 + 1);
  lVar2 = (longlong)local_20;
  _Src = (void *)*DAT_146ac9b38;
  if (local_20 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    plVar5 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  plVar4 = (longlong *)&DAT_143f3eda8;
  if (local_20 != 0) {
    plVar4 = plVar5;
  }
  TryParseString(&DAT_1464d3f10,plVar4);
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  atexit(`GetLegacyConversionFrameRate'::`2'::_dynamic_atexit_destructor_for__CachedRate__);
  _Init_thread_footer(&DAT_146aca2dc);
  *param_1 = DAT_1464d3f10;
  return param_1;
}



// FUNCTION 141f52a60 FUN_141f52a60 body=98 status=ok
// SIG undefined FUN_141f52a60(void)

void FUN_141f52a60(void)

{
  return;
}



// FUNCTION 141f52ad0 FUN_141f52ad0 body=54 status=ok
// SIG undefined FUN_141f52ad0(void)

bool FUN_141f52ad0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x3b0) + 0x298))();
  if (lVar1 != 0) {
    return *(char *)(param_1 + 0x78c) == '\0';
  }
  return true;
}



// FUNCTION 141f52b10 FUN_141f52b10 body=100 status=ok
// SIG undefined FUN_141f52b10(void)

ulonglong FUN_141f52b10(longlong *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0x2f0))();
  plVar4 = (longlong *)*puVar2;
  uVar7 = (longlong)(int)puVar2[1] & 0x1fffffffffffffff;
  if (plVar4 + (int)puVar2[1] < plVar4) {
    uVar7 = uVar5;
  }
  uVar6 = uVar5;
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar4;
      plVar4 = plVar4 + 1;
      uVar3 = *(uint *)(lVar1 + 0xa8);
      if ((int)*(uint *)(lVar1 + 0xa8) <= (int)(uint)uVar5) {
        uVar3 = (uint)uVar5;
      }
      uVar6 = uVar6 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar6 != uVar7);
  }
  return uVar5;
}



// FUNCTION 141f52b80 FUN_141f52b80 body=221 status=ok
// SIG undefined FUN_141f52b80(void)

char * FUN_141f52b80(char *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char local_res8 [4];
  int local_resc;
  
  param_1[8] = '\0';
  puVar1 = (ulonglong *)(**(code **)(*param_2 + 0x2f0))(param_2);
  uVar5 = 0;
  plVar6 = (longlong *)*puVar1;
  uVar4 = (longlong)(int)puVar1[1] & 0x1fffffffffffffff;
  if (plVar6 + (int)puVar1[1] < plVar6) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      local_res8[0] = *(char *)(*plVar6 + 0x98);
      local_resc = *(int *)(*plVar6 + 0x9c);
      if (local_res8[0] != '\x02') {
        pcVar2 = local_res8;
        if (param_1[8] != '\0') {
          pcVar2 = param_1;
        }
        pcVar3 = pcVar2;
        if ((*pcVar2 != '\x02') && (*(int *)(pcVar2 + 4) <= local_resc)) {
          if (*(int *)(pcVar2 + 4) < local_resc) {
            pcVar3 = local_res8;
          }
          else {
            pcVar3 = local_res8;
            if (*pcVar2 == '\x01') {
              pcVar3 = pcVar2;
            }
          }
        }
        if (pcVar3 != param_1) {
          if (param_1[8] != '\0') {
            param_1[8] = '\0';
          }
          *param_1 = *pcVar3;
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pcVar3 + 4);
          param_1[8] = '\x01';
        }
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  return param_1;
}



// FUNCTION 141f52c60 GetMovieScene body=85 status=ok
// SIG undefined GetMovieScene(void)

undefined8 UMovieSceneSequence::GetMovieScene(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",100,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::GetMovieScene()");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",100,
             L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::GetMovieScene()");
  return 0;
}



// FUNCTION 141f52cc0 FUN_141f52cc0 body=598 status=ok
// SIG undefined FUN_141f52cc0(void)

ulonglong FUN_141f52cc0(void)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  ulonglong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aca230) && (_Init_thread_header(&DAT_146aca230), DAT_146aca230 == -1))
  {
    atexit((_func_5014 *)&LAB_143ea2bc0);
    _Init_thread_footer(&DAT_146aca230);
  }
  plVar10 = DAT_146aca228;
  uVar12 = 0;
  local_40 = DAT_146aca228;
  if (DAT_146aca228 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)DAT_146aca228[1];
    bVar13 = iVar7 == 0;
    if (bVar13) {
      *(int *)(DAT_146aca228 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar13) {
      plVar1 = plVar10 + 1;
      LOCK();
      bVar13 = iVar7 == (int)*plVar1;
      if (bVar13) {
        *(int *)plVar1 = iVar7 + 1;
      }
      UNLOCK();
      if (bVar13) {
        local_48 = DAT_146aca220;
        if (DAT_146aca220 == 0) goto LAB_141f52d3b;
        goto LAB_141f52e70;
      }
      plVar1 = plVar10 + 1;
      LOCK();
      iVar7 = (int)*plVar1;
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)plVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
    local_40 = (longlong *)0x0;
  }
LAB_141f52d3b:
  puVar8 = (undefined8 *)FName::FName(local_res10,"MovieScene",1);
  uVar5 = *puVar8;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FUN_141690010(uVar9,uVar5);
  puVar11 = (ulonglong *)(**(code **)(*plVar10 + 0x50))(plVar10,local_28);
  if (puVar11 != &DAT_146aca220) {
    DAT_146aca220 = *puVar11;
    *puVar11 = 0;
    plVar10 = DAT_146aca228;
    DAT_146aca228 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    iVar7 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar7 == 1) && (local_20 != (longlong *)0x0)) {
      (**(code **)(*local_20 + 8))(local_20,1);
    }
  }
  plVar10 = DAT_146aca228;
  local_30 = DAT_146aca228;
  local_48 = uVar12;
  if (DAT_146aca228 != (longlong *)0x0) {
    LOCK();
    uVar4 = *(uint *)(DAT_146aca228 + 1);
    bVar13 = uVar4 == 0;
    if (bVar13) {
      *(uint *)(DAT_146aca228 + 1) = 0;
    }
    else {
      uVar12 = (ulonglong)uVar4;
    }
    UNLOCK();
    while (!bVar13) {
      iVar7 = (int)uVar12;
      plVar1 = plVar10 + 1;
      LOCK();
      bVar13 = iVar7 == (int)*plVar1;
      if (bVar13) {
        *(int *)plVar1 = iVar7 + 1;
      }
      UNLOCK();
      local_48 = DAT_146aca220;
      if (bVar13) goto LAB_141f52e1f;
      uVar12 = 0;
      puVar3 = (uint *)(plVar10 + 1);
      LOCK();
      uVar4 = *puVar3;
      bVar13 = uVar4 == 0;
      if (bVar13) {
        *puVar3 = 0;
      }
      else {
        uVar12 = (ulonglong)uVar4;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
    local_48 = 0;
  }
LAB_141f52e1f:
  local_38 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_30);
  plVar10 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
LAB_141f52e70:
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return local_48;
}



// FUNCTION 141f52f50 FUN_141f52f50 body=1056 status=ok
// SIG undefined FUN_141f52f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_141f52f50(int param_1,int param_2,longlong *param_3,undefined4 *param_4,longlong *param_5)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *******pppppppuVar9;
  char cVar10;
  int *piVar11;
  int *piVar12;
  char cVar13;
  int iVar14;
  int *piVar15;
  int local_res8 [2];
  int local_res10 [6];
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  char acStack_110 [4];
  int iStack_10c;
  int local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int local_f4;
  undefined1 local_f0 [8];
  longlong local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  char local_c0;
  int local_bc;
  char local_b8 [4];
  int local_b4;
  int local_90;
  undefined8 ******local_88 [2];
  byte local_78;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  piVar15 = (int *)0x0;
  iVar14 = 0;
  if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
    plVar8 = (longlong *)param_5[8];
    if ((longlong *)param_5[8] == (longlong *)0x0) {
      plVar8 = param_5 + 7;
    }
    iVar3 = *(int *)((longlong)plVar8 + ((longlong)(int)param_5[9] - 1U & (longlong)param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar3 * 0xb8 + *param_5);
        if (*piVar11 == param_1) {
          if (iVar3 != -1) goto LAB_141f52fe7;
          break;
        }
        iVar3 = piVar11[0x2c];
      } while (iVar3 != -1);
    }
  }
  piVar11 = piVar15;
LAB_141f52fe7:
  piVar12 = piVar11 + 2;
  if (piVar11 == (int *)0x0) {
    piVar12 = piVar15;
  }
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  if (((piVar12 != (int *)0x0) &&
      (((*(int *)((longlong)param_3 + 0x34) == piVar12[0x25] && (int)param_3[6] == piVar12[0x24]) &&
       *(int *)((longlong)param_3 + 0x2c) == piVar12[0x23]) && (int)param_3[5] == piVar12[0x22])) &&
     (pfVar4 = (float *)FUN_141f5a3a0(param_3,&local_128), (float)piVar12[0x26] == *pfVar4)) {
    uVar1 = *(ulonglong *)(pfVar4 + 1);
    local_128 = uVar1;
    if ((int)uVar1 == (int)*(undefined8 *)(piVar12 + 0x27)) {
      local_128._4_4_ = (float)(uVar1 >> 0x20);
      local_118._4_4_ = (float)((ulonglong)*(undefined8 *)(piVar12 + 0x27) >> 0x20);
      bVar2 = local_128._4_4_ == local_118._4_4_;
      if (bVar2) {
        return piVar12;
      }
    }
  }
  local_118 = local_res8;
  acStack_110[0] = '\x01';
  acStack_110[1] = '\0';
  acStack_110[2] = '\0';
  acStack_110[3] = '\0';
  FMovieSceneSequenceHierarchy::Remove(param_5,&local_118);
  local_104 = *param_4;
  uStack_100 = param_4[1];
  uStack_fc = param_4[2];
  uStack_f8 = param_4[3];
  local_108 = local_res8[0];
  local_f4 = param_2;
  (**(code **)(*param_3 + 0x2e8))(param_3,local_f0,&local_108);
  if ((param_2 == DAT_146ac9ac0) ||
     (lVar5 = FMovieSceneSequenceHierarchy::FindSubData(param_5,local_res10), lVar5 == 0))
  goto LAB_141f53295;
  cVar13 = *(char *)(lVar5 + 0x30);
  if (cVar13 == '\x02') {
    cVar13 = '\x02';
  }
  else {
    local_128 = (ulonglong)*(uint *)(lVar5 + 0x34);
    if (cVar13 != '\x01') {
      piVar11 = (int *)operator*(&local_128,local_128,&local_d8);
    }
    else {
      piVar11 = (int *)operator*(&local_118,local_128,&local_d8);
    }
    cVar13 = cVar13 == '\x01';
    iVar14 = *piVar11;
  }
  cVar10 = *(char *)(lVar5 + 0x38);
  iVar3 = 0;
  if (cVar10 == '\x02') {
    cVar10 = '\x02';
    iStack_10c = iVar3;
  }
  else {
    local_128 = (ulonglong)*(uint *)(lVar5 + 0x3c);
    if (cVar10 != '\x01') {
      piVar11 = (int *)operator*(&local_128);
    }
    else {
      piVar11 = (int *)operator*(&local_118);
    }
    cVar10 = cVar10 == '\x01';
    iStack_10c = *piVar11;
  }
  local_118 = (int *)CONCAT71(local_118._1_7_,cVar13);
  local_118 = (int *)CONCAT44(iVar14,(undefined4)local_118);
  acStack_110[0] = cVar10;
  if (((cVar13 == '\x02') || (cVar10 == '\x02')) ||
     ((iVar14 <= iStack_10c && ((iVar14 != iStack_10c || ((cVar13 != '\0' && (cVar10 != '\0'))))))))
  {
    if ((local_c0 == '\x02') || (local_b8[0] == '\x02')) {
LAB_141f531f3:
      if (cVar10 == '\x02') {
        pcVar6 = local_b8;
      }
      else if (local_b8[0] == '\x02') {
        pcVar6 = acStack_110;
      }
      else if (iStack_10c < local_b4) {
        pcVar6 = acStack_110;
      }
      else if (local_b4 < iStack_10c) {
        pcVar6 = local_b8;
      }
      else {
        pcVar6 = acStack_110;
        if (cVar10 != '\0') {
          pcVar6 = local_b8;
        }
      }
      cVar10 = local_c0;
      iVar3 = local_bc;
      if ((((cVar13 != '\x02') && (cVar10 = cVar13, iVar3 = iVar14, local_c0 != '\x02')) &&
          (iVar14 <= local_bc)) &&
         ((cVar10 = local_c0, iVar3 = local_bc, local_bc <= iVar14 && (cVar13 == '\0')))) {
        cVar10 = '\0';
        iVar3 = iVar14;
      }
      local_b8[0] = *pcVar6;
      local_b4 = *(int *)(pcVar6 + 4);
    }
    else {
      if (local_b4 < local_bc) goto LAB_141f531ab;
      if (local_bc != local_b4) goto LAB_141f531f3;
      if (local_c0 == '\0') goto LAB_141f531ab;
      if (local_b8[0] != '\0') goto LAB_141f531f3;
      cVar10 = '\0';
      local_b8[0] = '\0';
      local_b4 = iVar3;
    }
  }
  else {
LAB_141f531ab:
    cVar10 = '\0';
    local_b8[0] = '\0';
    local_b4 = iVar3;
  }
  local_c0 = cVar10;
  local_bc = iVar3;
  puVar7 = (undefined8 *)operator*(&local_118,&local_d8,lVar5 + 0x18);
  local_d8 = *puVar7;
  local_d0 = *(undefined4 *)(puVar7 + 1);
  local_90 = local_90 + *(int *)(lVar5 + 0x60);
LAB_141f53295:
  FMovieSceneSequenceHierarchy::Add(param_5,local_f0,local_res8,local_res10);
  if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
    plVar8 = (longlong *)param_5[8];
    if ((longlong *)param_5[8] == (longlong *)0x0) {
      plVar8 = param_5 + 7;
    }
    iVar14 = *(int *)((longlong)plVar8 +
                     ((longlong)(int)param_5[9] - 1U & (longlong)local_res8[0]) * 4);
    if (iVar14 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar14 * 0xb8 + *param_5);
        if (*piVar11 == local_res8[0]) {
          if (iVar14 != -1) goto LAB_141f53307;
          break;
        }
        iVar14 = piVar11[0x2c];
      } while (iVar14 != -1);
    }
  }
  piVar11 = piVar15;
LAB_141f53307:
  piVar12 = piVar11 + 2;
  if (piVar11 == (int *)0x0) {
    piVar12 = piVar15;
  }
  if ((local_78 & 1) != 0) {
    pppppppuVar9 = local_88;
    if ((local_78 & 2) == 0) {
      pppppppuVar9 = (undefined8 *******)local_88[0];
    }
    local_78 = local_78 & 0xfe;
    (*(code *)**pppppppuVar9)(pppppppuVar9,0);
    if ((local_78 & 2) == 0) {
      FMemory::Free(local_88[0]);
    }
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return piVar12;
}



// FUNCTION 141f53370 GetParentObject body=85 status=ok
// SIG undefined GetParentObject(void)

undefined8 UMovieSceneSequence::GetParentObject(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x6c
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::GetParentObject()");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x6c
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::GetParentObject()");
  return 0;
}



// FUNCTION 141f533d0 FUN_141f533d0 body=9 status=ok
// SIG undefined FUN_141f533d0(void)

undefined4 FUN_141f533d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x404);
}



// FUNCTION 141f533e0 FUN_141f533e0 body=8 status=ok
// SIG undefined FUN_141f533e0(void)

undefined1 FUN_141f533e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3a0);
}



// FUNCTION 141f533f0 GetProperty body=290 status=ok
// SIG undefined GetProperty(void)

longlong FTrackInstancePropertyBindings::GetProperty(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10 = 0xffffffff;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    local_res10 = CONCAT44(uStackX_c,local_res8);
  }
  TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
  ::FindId(param_1,&local_res8,&local_res10);
  if ((local_res8 == -1) || (lVar2 = (longlong)local_res8 * 0x30 + *param_1, lVar2 == 0)) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_18,0);
    FWeakObjectPtr::operator=(&local_10,0);
  }
  else {
    local_28 = *(undefined4 *)(lVar2 + 8);
    local_24 = *(undefined4 *)(lVar2 + 0xc);
    local_20 = *(longlong *)(lVar2 + 0x10);
    local_18 = *(undefined4 *)(lVar2 + 0x18);
    local_14 = *(undefined4 *)(lVar2 + 0x1c);
    local_10 = *(undefined4 *)(lVar2 + 0x20);
    local_c = *(undefined4 *)(lVar2 + 0x24);
  }
  lVar2 = FWeakObjectPtr::Get(&local_28);
  if (((lVar2 == 0) || (local_20 == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)) {
    lVar1 = FindProperty(local_38,param_2,param_1 + 10);
    lVar2 = FWeakObjectPtr::Get(lVar1);
    if (((lVar2 == 0) || (*(longlong *)(lVar1 + 8) == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)
       ) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



// FUNCTION 141f53520 GetPropertyTypeID body=34 status=ok
// SIG undefined GetPropertyTypeID(void)

undefined8
FMovieScenePropertySectionTemplate::GetPropertyTypeID(longlong param_1,undefined8 param_2)

{
  TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID(&DAT_146ac9b00,param_2,param_1 + 0x28);
  return param_2;
}



// FUNCTION 141f53550 FUN_141f53550 body=154 status=ok
// SIG undefined FUN_141f53550(void)

undefined8 FUN_141f53550(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar3 = FWeakObjectPtr::IsValid(&DAT_1464d3e30);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&DAT_1464d3e30);
    plVar1 = *(longlong **)(lVar4 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = UMovieSceneTrack::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = FWeakObjectPtr::Get(&DAT_1464d3e30);
        cVar3 = (**(code **)(*plVar1 + 0x300))(plVar1,uVar5);
        if (cVar3 != '\0') {
          uVar5 = FWeakObjectPtr::Get(&DAT_1464d3e30);
          return uVar5;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141f53600 FUN_141f53600 body=437 status=ok
// SIG undefined FUN_141f53600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141f53600(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_c8 [32];
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte local_68;
  undefined **local_60;
  undefined8 **local_58;
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
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x288))(param_1,&local_a8);
  if ((local_68 & 1) == 0) {
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3;
    *param_2 = &PTR_FUN_144f1bbe8;
    if ((local_68 & 1) == 0) {
      return param_2;
    }
    pppuVar4 = &local_a8;
    if ((local_68 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_a8;
    }
    local_68 = local_68 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
  }
  else {
    local_68 = local_68 & 0xfe;
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfc;
    local_18 = (local_68 ^ local_18) & 2 ^ local_18 | 1;
    local_58 = local_a8;
    uStack_50 = uStack_a0;
    local_48 = local_98;
    uStack_40 = uStack_90;
    local_38 = local_88;
    uStack_34 = uStack_84;
    uStack_30 = uStack_80;
    uStack_2c = uStack_7c;
    local_28 = local_78;
    uStack_24 = uStack_74;
    uStack_20 = uStack_70;
    uStack_1c = uStack_6c;
    puVar3 = (undefined8 *)FMemory::Malloc(0x50);
    bVar2 = local_18;
    *param_2 = puVar3;
    bVar1 = *(byte *)(param_2 + 2);
    *(byte *)(param_2 + 2) = bVar1 | 1;
    if ((bVar1 & 2) != 0) {
      puVar3 = param_2;
    }
    *puVar3 = &PTR__scalar_deleting_destructor__144f1c7a0;
    bVar1 = *(byte *)(puVar3 + 9);
    *(byte *)(puVar3 + 9) = bVar1 & 0xfe | 2;
    if ((local_18 & 1) != 0) {
      *(byte *)(puVar3 + 9) = bVar1 & 0xfe | 3;
      local_18 = local_18 & 0xfe;
      *(byte *)(puVar3 + 9) = *(byte *)(puVar3 + 9) & 0xfd;
      *(byte *)(puVar3 + 9) = *(byte *)(puVar3 + 9) | bVar2 & 2;
      puVar3[1] = local_58;
      puVar3[2] = uStack_50;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      *(undefined4 *)(puVar3 + 5) = local_38;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_34;
      *(undefined4 *)(puVar3 + 6) = uStack_30;
      *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_2c;
      puVar3[7] = CONCAT44(uStack_24,local_28);
      puVar3[8] = CONCAT44(uStack_1c,uStack_20);
    }
    local_60 = &PTR__scalar_deleting_destructor__144f1c7a0;
    if ((local_18 & 1) != 0) {
      pppuVar4 = &local_58;
      if ((local_18 & 2) == 0) {
        pppuVar4 = (undefined8 ***)local_58;
      }
      local_18 = local_18 & 0xfe;
      (*(code *)**pppuVar4)(pppuVar4,0);
      if ((local_18 & 2) == 0) {
        FMemory::Free(local_58);
      }
    }
    local_60 = &PTR_FUN_1440780a8;
    if ((local_68 & 1) == 0) {
      return param_2;
    }
    pppuVar4 = &local_a8;
    if ((local_68 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_a8;
    }
    local_68 = local_68 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
  }
  if ((local_68 & 2) == 0) {
    FMemory::Free(local_a8);
  }
  return param_2;
}



// FUNCTION 141f537e0 GetSegmentFromIterator body=204 status=ok
// SIG undefined GetSegmentFromIterator(void)

int * FMovieSceneEvaluationTrack::GetSegmentFromIterator
                (longlong param_1,int *param_2,undefined1 *param_3)

{
  int local_res18 [2];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28[0] = *param_3;
  local_24 = *(undefined4 *)(param_3 + 4);
  local_20 = param_3[8];
  local_1c = *(undefined4 *)(param_3 + 0xc);
  FindFirstSegment(param_1,local_res18,local_28);
  local_28[0] = *param_3;
  local_24 = *(undefined4 *)(param_3 + 4);
  local_20 = param_3[8];
  local_1c = *(undefined4 *)(param_3 + 0xc);
  if (local_res18[0] == -1) {
    local_18 = *(undefined8 *)(param_3 + 0x10);
    local_10 = *(undefined8 *)(param_3 + 0x18);
    FUN_141f44f70(param_1,param_2,local_28);
  }
  else {
    TRange<FFrameNumber>::Contains
              ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_res18[0] * 4) *
               0x58 + *(longlong *)(param_1 + 0x28),local_28);
    *param_2 = local_res18[0];
  }
  return param_2;
}



// FUNCTION 141f538b0 FUN_141f538b0 body=239 status=ok
// SIG undefined FUN_141f538b0(void)

int FUN_141f538b0(undefined8 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  char local_res8 [4];
  int local_resc;
  char local_res18 [4];
  int local_res1c;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    pcVar6 = (char *)*param_1;
    lVar7 = 0;
    pcVar2 = pcVar6 + 8;
    do {
      cVar1 = *pcVar6;
      local_resc = param_2;
      pcVar5 = pcVar6;
      cVar4 = cVar1;
      if ((cVar1 != '\x02') && (param_2 <= *(int *)(pcVar2 + -4))) {
        if ((param_2 < *(int *)(pcVar2 + -4)) || (cVar1 != '\x01')) {
          pcVar5 = local_res8;
        }
        cVar4 = '\x01';
      }
      if ((cVar4 != cVar1) || ((cVar4 != '\x02' && (*(int *)(pcVar5 + 4) != *(int *)(pcVar2 + -4))))
         ) goto LAB_141f5396c;
      cVar1 = *pcVar2;
      local_res18[0] = '\x01';
      local_res1c = param_2;
      if (cVar1 == '\x02') {
        return iVar3;
      }
      pcVar5 = pcVar2;
      if (param_2 < *(int *)(pcVar2 + 4)) {
LAB_141f53963:
        if (*(int *)(pcVar5 + 4) == *(int *)(pcVar2 + 4)) {
          return iVar3;
        }
      }
      else if (*(int *)(pcVar2 + 4) < param_2) {
        if (cVar1 == '\x01') {
          pcVar5 = local_res18;
          goto LAB_141f53963;
        }
      }
      else if (cVar1 == '\x01') goto LAB_141f53963;
LAB_141f5396c:
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + 1;
      pcVar6 = pcVar6 + 0x10;
      pcVar2 = pcVar2 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 1));
  }
  return -1;
}



// FUNCTION 141f539a0 FUN_141f539a0 body=423 status=ok
// SIG undefined FUN_141f539a0(void)

longlong * FUN_141f539a0(longlong param_1,longlong *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  int local_res10 [4];
  undefined1 local_res20 [8];
  char local_98 [4];
  undefined4 local_94;
  char local_90 [4];
  undefined4 local_8c;
  char local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined4 local_7c;
  char local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  char local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar3 = TRange<FFrameNumber>::IsEmpty(param_3);
  if (cVar3 != '\0') {
    return param_2;
  }
  do {
    local_90[0] = *param_3;
    local_8c = *(undefined4 *)(param_3 + 4);
    local_88 = param_3[8];
    local_84 = *(undefined4 *)(param_3 + 0xc);
    FMovieSceneEvaluationTrack::FindFirstSegment(param_1,local_res10,local_90);
    if (local_res10[0] == -1) {
      local_94 = *(undefined4 *)(param_3 + 4);
      local_98[0] = *param_3;
      FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
                (local_80,param_1 + 0x40,local_98);
      uVar6 = local_74;
      cVar3 = local_78;
      local_60[0] = local_80[0];
      local_5c = local_7c;
      local_50 = local_70;
      local_48 = local_68;
      local_58 = local_78;
      local_54 = local_74;
      piVar4 = (int *)FUN_141f44f70(param_1,local_res20,local_60);
      local_res10[0] = *piVar4;
      if (local_res10[0] != -1) goto LAB_141f53a9f;
      if (cVar3 == '\x02') {
        return param_2;
      }
      if (cVar3 != '\0') goto LAB_141f53af1;
      cVar3 = '\x01';
    }
    else {
LAB_141f53a9f:
      iVar2 = local_res10[0];
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(int *)(*param_2 + (longlong)iVar1 * 4) = iVar2;
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) * 0x58;
      cVar3 = *(char *)(lVar5 + 8 + *(longlong *)(param_1 + 0x28));
      if (cVar3 == '\x02') {
        return param_2;
      }
      uVar6 = *(undefined4 *)(lVar5 + 0xc + *(longlong *)(param_1 + 0x28));
      if (cVar3 == '\0') {
        cVar3 = '\x01';
      }
      else {
LAB_141f53af1:
        if (cVar3 == '\x01') {
          cVar3 = '\0';
        }
      }
    }
    *param_3 = cVar3;
    *(undefined4 *)(param_3 + 4) = uVar6;
    cVar3 = TRange<FFrameNumber>::IsEmpty(param_3);
    if (cVar3 != '\0') {
      return param_2;
    }
  } while( true );
}



// FUNCTION 141f53b50 FUN_141f53b50 body=61 status=ok
// SIG undefined FUN_141f53b50(void)

void FUN_141f53b50(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  if (*param_2 == DAT_146ac9ac0) {
    FWeakObjectPtr::Get();
    return;
  }
  lVar1 = FMovieSceneSequenceHierarchy::FindSubData(*(longlong *)(param_1 + 8) + 0xd0);
  if (lVar1 != 0) {
    FMovieSceneSubSequenceData::GetSequence(lVar1);
    return;
  }
  return;
}



// FUNCTION 141f53b90 GetSequence body=130 status=ok
// SIG undefined GetSequence(void)

longlong FMovieSceneSubSequenceData::GetSequence(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x80);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = FUN_141796df0(param_1);
  if (lVar2 != 0) {
    lVar3 = UMovieSceneSequence::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141f53bf9;
  }
  lVar2 = 0;
LAB_141f53bf9:
  FWeakObjectPtr::operator=(param_1 + 0x80,lVar2);
  return lVar2;
}



// FUNCTION 141f53c20 GetSequence body=40 status=ok
// SIG undefined GetSequence(void)

undefined8 UMovieSceneSubSection::GetSequence(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141f53550();
  if (lVar1 == param_1) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x108);
}



// FUNCTION 141f53c50 GetSequenceID body=387 status=ok
// SIG undefined GetSequenceID(void)

undefined4 * UMovieSceneSubSection::GetSequenceID(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  
  uVar4 = UMovieScene::GetPrivateStaticClass();
  uVar4 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  UObjectBaseUtility::GetPathName(param_1,&local_38,uVar4);
  iVar8 = local_30;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar7 = (longlong)local_30;
    local_30 = (4 - (uint)(local_30 != 0)) + local_30;
    if (local_2c < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar8);
    }
    puVar1 = (undefined4 *)(local_38 + (lVar7 - (ulonglong)(iVar8 != 0)));
    *puVar1 = 0x2f0020;
    *(undefined2 *)(puVar1 + 1) = 0x20;
    *(undefined2 *)((longlong)puVar1 + 6) = 0;
    puVar5 = (undefined8 *)
             UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x108),local_28,0);
    iVar2 = local_30;
    _Src = (void *)*puVar5;
    iVar8 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      lVar7 = (longlong)local_30;
      local_30 = (uint)(local_30 == 0) + iVar8 + local_30;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
      }
      puVar6 = local_38 + (lVar7 - (ulonglong)(iVar2 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar6,_Src,(longlong)iVar8 * 2);
      puVar6[iVar8] = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  puVar6 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar6 = local_38;
  }
  uVar3 = FUN_140438070(puVar6);
  *param_2 = uVar3;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141f53de0 FUN_141f53de0 body=163 status=ok
// SIG undefined FUN_141f53de0(void)

ulonglong FUN_141f53de0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar2 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
      if ((float)uVar3 != 10000.0) {
        return uVar3;
      }
      return (ulonglong)*(uint *)(param_1 + 10);
    }
  }
  else {
    USoundCue::GetPrivateStaticClass();
  }
  return 0;
}



// FUNCTION 141f53e90 FUN_141f53e90 body=20 status=ok
// SIG undefined FUN_141f53e90(void)

longlong FUN_141f53e90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x790);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x2e0;
  }
  return lVar1;
}



// FUNCTION 141f53eb0 GetTrackSegmentBlender body=108 status=ok
// SIG undefined GetTrackSegmentBlender(void)

undefined8 * UTestMovieSceneTrack::GetTrackSegmentBlender(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  bVar3 = ((byte)*(undefined4 *)(param_1 + 0x50) & 3) == 3;
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x18);
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 2) & 2) != 0) {
    puVar2 = param_2;
  }
  *(bool *)((longlong)puVar2 + 9) = bVar3;
  *(bool *)((longlong)puVar2 + 0x11) = bVar3;
  *(undefined1 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_FUN_144f1c828;
  *(undefined1 *)(puVar2 + 2) = uVar1;
  return param_2;
}



// FUNCTION 141f53f20 FUN_141f53f20 body=493 status=ok
// SIG undefined FUN_141f53f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141f53f20(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined2 local_b0;
  undefined8 **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte local_68;
  undefined8 **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x290))(param_1,&local_60);
  if ((local_20 & 1) == 0) {
    if (((byte)(int)param_1[10] & 3) != 3) {
      *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 2;
      return param_2;
    }
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe | 3;
    *(undefined2 *)(param_2 + 1) = 0x100;
    *param_2 = &PTR_FUN_144f1bbf8;
    if ((local_20 & 1) == 0) {
      return param_2;
    }
    pppuVar4 = &local_60;
    if ((local_20 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_60;
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
  }
  else {
    *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfc;
    local_20 = local_20 & 0xfe;
    local_b0 = 0;
    local_68 = (local_20 ^ local_68) & 2 ^ local_68 | 1;
    local_a8 = local_60;
    uStack_a0 = uStack_58;
    local_98 = local_50;
    uStack_90 = uStack_48;
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    local_78 = local_30;
    uStack_74 = uStack_2c;
    uStack_70 = uStack_28;
    uStack_6c = uStack_24;
    puVar3 = (undefined8 *)FMemory::Malloc(0x58);
    bVar2 = local_68;
    *param_2 = puVar3;
    bVar1 = *(byte *)(param_2 + 2);
    *(byte *)(param_2 + 2) = bVar1 | 1;
    if ((bVar1 & 2) != 0) {
      puVar3 = param_2;
    }
    *puVar3 = &PTR_FUN_144f1aef8;
    *(undefined1 *)(puVar3 + 1) = (undefined1)local_b0;
    *(undefined1 *)((longlong)puVar3 + 9) = local_b0._1_1_;
    *puVar3 = &PTR__scalar_deleting_destructor__144f1c7b0;
    bVar1 = *(byte *)(puVar3 + 10);
    *(byte *)(puVar3 + 10) = bVar1 & 0xfe | 2;
    if ((local_68 & 1) != 0) {
      *(byte *)(puVar3 + 10) = bVar1 & 0xfe | 3;
      local_68 = local_68 & 0xfe;
      *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xfd;
      *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | bVar2 & 2;
      puVar3[2] = local_a8;
      puVar3[3] = uStack_a0;
      puVar3[4] = local_98;
      puVar3[5] = uStack_90;
      *(undefined4 *)(puVar3 + 6) = local_88;
      *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_84;
      *(undefined4 *)(puVar3 + 7) = uStack_80;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_7c;
      puVar3[8] = CONCAT44(uStack_74,local_78);
      puVar3[9] = CONCAT44(uStack_6c,uStack_70);
    }
    local_b8 = &PTR__scalar_deleting_destructor__144f1c7b0;
    if ((local_68 & 1) != 0) {
      pppuVar4 = &local_a8;
      if ((local_68 & 2) == 0) {
        pppuVar4 = (undefined8 ***)local_a8;
      }
      local_68 = local_68 & 0xfe;
      (*(code *)**pppuVar4)(pppuVar4,0);
      if ((local_68 & 2) == 0) {
        FMemory::Free(local_a8);
      }
    }
    local_b8 = &PTR_FUN_144f1aef8;
    if ((local_20 & 1) == 0) {
      return param_2;
    }
    pppuVar4 = &local_60;
    if ((local_20 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_60;
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
  }
  if ((local_20 & 2) == 0) {
    FMemory::Free(local_60);
  }
  return param_2;
}



// FUNCTION 141f54110 GetTypeHash body=149 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  iVar1 = FCrc::MemCrc_DEPRECATED(param_1,0x10);
  uVar5 = iVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  return (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}



// FUNCTION 141f541b0 GetUnifiedKeyTime body=22 status=ok
// SIG undefined GetUnifiedKeyTime(void)

undefined4 * FMovieSceneKeyStructHelper::GetUnifiedKeyTime(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



// FUNCTION 141f541d0 GoToEndAndStop body=95 status=ok
// SIG undefined GoToEndAndStop(void)

void UMovieSceneSequencePlayer::GoToEndAndStop(longlong param_1)

{
  undefined4 uVar1;
  undefined4 local_res8;
  
  if (*(int *)(param_1 + 0x3e4) < 1) {
    local_res8 = *(int *)(param_1 + 0x3e0);
    uVar1 = 0;
  }
  else {
    local_res8 = *(int *)(param_1 + 0x3e4) + -1 + *(int *)(param_1 + 0x3e0);
    uVar1 = 0x3f7fffff;
  }
  FUN_141f58740(param_1,CONCAT44(uVar1,local_res8));
  FUN_141f66f00(param_1);
  return;
}



// FUNCTION 141f54230 ImportTextItem body=1161 status=ok
// SIG undefined ImportTextItem(void)

undefined8 FMovieSceneFrameRange::ImportTextItem(undefined1 *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str;
  undefined2 *puVar4;
  undefined2 *puVar5;
  wchar_t *_Str_00;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  lVar3 = UPropertyHelpers::ReadToken(*param_2,&local_28,1);
  if (lVar3 != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_141594550(&local_28,&local_48,&DAT_144f182d4,0);
    iVar2 = (int)local_40;
    plVar6 = local_48;
    if ((int)local_40 == 4) {
      local_38 = (undefined2 *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      puVar1 = local_38;
      FGenericPlatformString::Convert<char,wchar_t>(local_38,5,&DAT_144f19528,5,0x3f);
      _Str_00 = L"";
      puVar5 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar5 = puVar1;
      }
      if ((int)local_48[1] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*local_48;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      if (iVar2 == 0) {
        *param_1 = 2;
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        local_38 = (undefined2 *)0x0;
        local_30 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        puVar1 = local_38;
        FGenericPlatformString::Convert<char,wchar_t>(local_38,10,"Inclusive",10,0x3f);
        puVar5 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          puVar5 = puVar1;
        }
        if ((int)local_48[1] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*local_48;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (puVar1 != (undefined2 *)0x0) {
          FMemory::Free(puVar1);
        }
        if (iVar2 == 0) {
          if ((int)local_48[3] == 0) {
            iVar2 = _wtoi(L"");
            *param_1 = 1;
          }
          else {
            iVar2 = _wtoi((wchar_t *)local_48[2]);
            *param_1 = 1;
          }
        }
        else {
          local_38 = (undefined2 *)0x0;
          local_30 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          puVar1 = local_38;
          FGenericPlatformString::Convert<char,wchar_t>(local_38,10,"Exclusive",10,0x3f);
          puVar5 = &DAT_143f3eda8;
          if ((int)local_30 != 0) {
            puVar5 = puVar1;
          }
          if ((int)local_48[1] == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)*local_48;
          }
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
          if (puVar1 != (undefined2 *)0x0) {
            FMemory::Free(puVar1);
          }
          if (iVar2 != 0) goto LAB_141f5446a;
          if ((int)local_48[3] == 0) {
            _Str = L"";
          }
          else {
            _Str = (wchar_t *)local_48[2];
          }
          iVar2 = _wtoi(_Str);
          *param_1 = 0;
        }
        *(int *)(param_1 + 4) = iVar2;
      }
LAB_141f5446a:
      local_38 = (undefined2 *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      puVar1 = local_38;
      FGenericPlatformString::Convert<char,wchar_t>(local_38,5,&DAT_144f195d8,5,0x3f);
      puVar5 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar5 = puVar1;
      }
      if ((int)local_48[5] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)local_48[4];
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      if (iVar2 == 0) {
        param_1[8] = 2;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        local_38 = (undefined2 *)0x0;
        local_30 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        puVar1 = local_38;
        FGenericPlatformString::Convert<char,wchar_t>(local_38,10,"Inclusive",10,0x3f);
        puVar5 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          puVar5 = puVar1;
        }
        if ((int)local_48[5] == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)local_48[4];
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (puVar1 != (undefined2 *)0x0) {
          FMemory::Free(puVar1);
        }
        if (iVar2 == 0) {
          if ((int)local_48[7] != 0) {
            _Str_00 = (wchar_t *)local_48[6];
          }
          iVar2 = _wtoi(_Str_00);
          param_1[8] = 1;
        }
        else {
          local_38 = (undefined2 *)0x0;
          local_30 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          puVar1 = local_38;
          FGenericPlatformString::Convert<char,wchar_t>(local_38,10,"Exclusive",10,0x3f);
          puVar5 = &DAT_143f3eda8;
          if ((int)local_30 != 0) {
            puVar5 = puVar1;
          }
          if ((int)local_48[5] == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = (undefined2 *)local_48[4];
          }
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
          if (puVar1 != (undefined2 *)0x0) {
            FMemory::Free(puVar1);
          }
          if (iVar2 != 0) goto LAB_141f54611;
          if ((int)local_48[7] != 0) {
            _Str_00 = (wchar_t *)local_48[6];
          }
          iVar2 = _wtoi(_Str_00);
          param_1[8] = 0;
        }
        *(int *)(param_1 + 0xc) = iVar2;
      }
LAB_141f54611:
      plVar6 = local_48;
      for (iVar2 = (int)local_40; iVar2 != 0; iVar2 = iVar2 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      uVar7 = 1;
      goto LAB_141f5468c;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  uVar7 = 0;
LAB_141f5468c:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 141f546c0 FUN_141f546c0 body=653 status=ok
// SIG undefined FUN_141f546c0(void)

void FUN_141f546c0(longlong *param_1,ulonglong *param_2,int param_3,int param_4,char param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(int *)((longlong)param_1 + 0x94) = param_3;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(int *)((longlong)param_1 + 0x9c) = param_3 + param_4;
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  plVar7 = (longlong *)*param_2;
  uVar9 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_2[1] < plVar7) {
    uVar9 = uVar8;
  }
  if (uVar9 != 0) {
    iVar4 = *(int *)((longlong)param_1 + 0xac);
    do {
      lVar1 = *plVar7;
      plVar7 = plVar7 + 1;
      iVar3 = *(int *)(lVar1 + 0xac) + 1;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      uVar8 = uVar8 + 1;
      *(int *)((longlong)param_1 + 0xac) = iVar4;
    } while (uVar8 != uVar9);
  }
  lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0,0);
  if (param_5 == '\0') {
    while (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x98) == '\x02') {
        *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
        break;
      }
      iVar4 = *(int *)(lVar1 + 0x9c) - param_3;
      if ((*(uint *)(param_1 + 0x16) >> 1 & 1) == 0) {
        (**(code **)(*param_1 + 0x70))(param_1,1);
        if ((char)param_1[0x12] != '\x02') {
          *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + iVar4;
        }
        if ((char)param_1[0x13] != '\x02') {
          *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + iVar4;
        }
        lVar1 = param_1[0x1a];
        if (lVar1 != 0) {
          uVar8 = (ulonglong)(*(longlong *)(lVar1 + 0x28) != 0) - 1 & lVar1 + 0x10U |
                  *(ulonglong *)(lVar1 + 0x28);
          uVar9 = uVar8 + (longlong)*(int *)(lVar1 + 0x30) * 0x18;
          if (uVar8 != uVar9) {
            do {
              puVar6 = *(undefined8 **)(uVar8 + 8);
              uVar10 = (longlong)*(int *)(uVar8 + 0x10) & 0x1fffffffffffffff;
              if (puVar6 + *(int *)(uVar8 + 0x10) < puVar6) {
                uVar10 = 0;
              }
              uVar5 = 0;
              if (uVar10 != 0) {
                do {
                  (**(code **)(*(longlong *)*puVar6 + 0x50))((longlong *)*puVar6,iVar4);
                  uVar5 = uVar5 + 1;
                  puVar6 = puVar6 + 1;
                } while (uVar5 != uVar10);
              }
              uVar8 = uVar8 + 0x18;
            } while (uVar8 != uVar9);
          }
        }
      }
      lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0,0);
    }
  }
  else {
    while (lVar1 != 0) {
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
      lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0,0);
    }
  }
  uVar2 = UMovieSceneTrack::GetPrivateStaticClass();
  lVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar2);
  if (lVar1 == 0) {
    return;
  }
  FUN_141f67d20(lVar1);
  return;
}



// FUNCTION 141f54950 FUN_141f54950 body=364 status=ok
// SIG undefined FUN_141f54950(void)

void FUN_141f54950(longlong *param_1,ulonglong *param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(int *)((longlong)param_1 + 0x94) = param_3;
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(int *)((longlong)param_1 + 0x9c) = param_3 + param_4;
  *(int *)(param_1 + 0x15) = param_5;
  if (param_5 == -1) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0,0);
    while (lVar1 != 0) {
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
      lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0,0);
    }
  }
  plVar7 = (longlong *)*param_2;
  uVar8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_2[1] < plVar7) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    iVar4 = *(int *)((longlong)param_1 + 0xac);
    uVar9 = uVar6;
    do {
      lVar1 = *plVar7;
      plVar7 = plVar7 + 1;
      iVar3 = *(int *)(lVar1 + 0xac) + 1;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      uVar9 = uVar9 + 1;
      *(int *)((longlong)param_1 + 0xac) = iVar4;
    } while (uVar9 != uVar8);
  }
  lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0,0);
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)*param_2;
    uVar8 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
    if (puVar5 + (int)param_2[1] < puVar5) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        plVar7 = (longlong *)*puVar5;
        if (((plVar7 != (longlong *)0x0) && (plVar7 != param_1)) &&
           ((int)param_1[0x15] <= (int)plVar7[0x15])) {
          *(int *)(plVar7 + 0x15) = (int)plVar7[0x15] + 1;
        }
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
  }
  uVar2 = UMovieSceneTrack::GetPrivateStaticClass();
  lVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar2);
  if (lVar1 != 0) {
    FUN_141f67d20(lVar1);
  }
  return;
}



// FUNCTION 141f54ac0 Initialize body=23 status=ok
// SIG undefined Initialize(void)

void FMovieSceneAnimTypeID::Initialize(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = GenerateHash();
  *param_1 = uVar1;
  return;
}



// FUNCTION 141f54ae0 Initialize body=453 status=ok
// SIG undefined Initialize(void)

void FMovieSceneEvaluationTrack::Initialize
               (longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5,
               undefined8 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 local_68 [80];
  
  if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
    plVar7 = (longlong *)(param_1 + 0xb0);
    bVar5 = *(byte *)(param_1 + 0xe0) & 2;
    plVar8 = plVar7;
    if (bVar5 == 0) {
      plVar8 = (longlong *)*plVar7;
    }
    if ((*(byte *)(plVar8 + 1) & 4) != 0) {
      if (bVar5 == 0) {
        plVar7 = (longlong *)*plVar7;
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,param_1,param_2,param_3,param_4,param_5,param_6);
      return;
    }
  }
  lVar6 = FMovieSceneContext::FMovieSceneContext(local_68,param_4);
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 4) * 0x58;
  piVar9 = *(int **)(lVar4 + 0x48 + lVar11);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)(lVar4 + 0x18 + lVar11);
  }
  piVar1 = piVar9 + (longlong)*(int *)(lVar4 + 0x50 + lVar11) * 3;
  for (; piVar9 != piVar1; piVar9 = piVar9 + 3) {
    iVar3 = *piVar9;
    plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0xa0));
    if ((*(byte *)(plVar8 + 6) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    if ((*(byte *)(plVar8 + 1) & 4) != 0) {
      uVar2 = *(undefined8 *)(param_5 + 0x18);
      *(undefined8 *)(param_5 + 0x24) = uVar2;
      *(int *)(param_5 + 0x2c) = iVar3;
      *(int *)(lVar6 + 0x24) = piVar9[1];
      bVar5 = *(byte *)(piVar9 + 2) & 1;
      bVar10 = *(byte *)(piVar9 + 2) >> 1 & 1;
      if (*(int *)(lVar6 + 0x20) == 0) {
        bVar5 = bVar5 << 2 | *(byte *)(lVar6 + 0x40) & 0xf3 | bVar10 << 3;
      }
      else {
        bVar5 = bVar10 << 2 | *(byte *)(lVar6 + 0x40) & 0xf3 | bVar5 << 3;
      }
      *(byte *)(lVar6 + 0x40) = bVar5;
      (**(code **)(*plVar8 + 0x28))(uVar2,param_3,lVar6,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 141f54cb0 FUN_141f54cb0 body=388 status=ok
// SIG undefined FUN_141f54cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f54cb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_1e8 [64];
  undefined1 local_1a8 [16];
  undefined1 local_198 [64];
  longlong local_158;
  undefined4 local_150;
  undefined1 local_148 [288];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != param_2) {
    TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::Reset(param_3 + 8);
    TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::Reset(param_3 + 0x58);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x8c)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((*(int *)(param_1 + 0x9c) < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x90,0);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if ((*(int *)(param_1 + 0xfc) < 0) && (*(int *)(param_1 + 0xfc) != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x100,0);
    }
    uVar2 = FMovieSceneExecutionTokens::FMovieSceneExecutionTokens(local_1a8);
    FMovieSceneExecutionTokens::operator=(param_1 + 0x1a0,uVar2);
    FMovieSceneBlendingAccumulator::~FMovieSceneBlendingAccumulator(local_148);
    local_150 = 0;
    if (local_158 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_198);
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::
    ~TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>(local_1a8);
    TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::Reset
              (param_1 + 0x30);
  }
  FWeakObjectPtr::operator=(param_1,param_2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x160) + 8))
                    (*(longlong **)(param_1 + 0x160),param_2);
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 141f54e40 FUN_141f54e40 body=317 status=ok
// SIG undefined FUN_141f54e40(void)

void FUN_141f54e40(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  longlong local_28;
  longlong *local_20;
  
  local_res20 = param_4;
  lVar4 = operator_new(0x78);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_141f39ea0(lVar4,param_2,param_3,&local_res20,&stack0x00000028);
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_144f1c8f0;
    plVar5[2] = lVar4;
  }
  local_28 = lVar4;
  local_20 = plVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_28,lVar4,lVar4);
  if ((longlong *)(param_1 + 8) != &local_28) {
    *(longlong *)(param_1 + 8) = lVar4;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_20);
    plVar5 = local_20;
  }
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
  puVar6 = (undefined8 *)
           TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID(&DAT_146ac9b00,local_res8,param_3)
  ;
  *(undefined8 *)(param_1 + 0x18) = *puVar6;
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f54f80 FUN_141f54f80 body=2080 status=ok
// SIG undefined FUN_141f54f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f5574d) */

void FUN_141f54f80(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong **pplVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  char cVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  uint local_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_1 + 0x3d8) = param_2;
  puVar2 = (undefined8 *)(param_1 + 0x430);
  *(undefined4 *)(param_1 + 0x400) = *param_3;
  *(undefined4 *)(param_1 + 0x404) = param_3[1];
  *(undefined1 *)(param_1 + 0x408) = *(undefined1 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x40c) = param_3[3];
  *(undefined1 *)(param_1 + 0x410) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 0x411) = *(undefined1 *)((longlong)param_3 + 0x11);
  *(undefined1 *)(param_1 + 0x412) = *(undefined1 *)((longlong)param_3 + 0x12);
  *(undefined1 *)(param_1 + 0x413) = *(undefined1 *)((longlong)param_3 + 0x13);
  *(undefined1 *)(param_1 + 0x414) = *(undefined1 *)(param_3 + 5);
  *(undefined1 *)(param_1 + 0x415) = *(undefined1 *)((longlong)param_3 + 0x15);
  *(undefined1 *)(param_1 + 0x416) = *(undefined1 *)((longlong)param_3 + 0x16);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_3 + 10);
  plVar17 = *(longlong **)(param_3 + 0xe);
  uVar5 = *(undefined8 *)(param_3 + 0xc);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  local_128 = uVar5;
  plStack_120 = plVar17;
  if (&local_128 != puVar2) {
    local_128 = *puVar2;
    plStack_120 = *(longlong **)(param_1 + 0x438);
    *puVar2 = uVar5;
    *(longlong **)(param_1 + 0x438) = plVar17;
    local_60 = uVar5;
    plStack_58 = plVar17;
  }
  plVar17 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_120 + 1;
    lVar12 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar14 = (int *)((longlong)plVar17 + 0xc);
      iVar10 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_120 + 8))(plStack_120,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(param_3 + 0x10);
  lVar12 = *(longlong *)(param_1 + 0x28);
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x2e8))();
  (**(code **)(lVar12 + 0xa0))((longlong *)(param_1 + 0x28),uVar8);
  cVar18 = '\0';
  lVar12 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x298))();
  local_88 = lVar12;
  if (lVar12 != 0) {
    uVar5 = *(undefined8 *)(lVar12 + 0xb8);
    uVar6 = *(undefined8 *)(lVar12 + 0xc0);
    uVar8 = *(undefined1 *)(lVar12 + 200);
    *(undefined1 *)(param_1 + 0x7b4) = *(undefined1 *)(lVar12 + 0xca);
    FUN_141f65f50(param_1 + 0x760,uVar6,uVar5,uVar8);
    local_b0 = *(int *)(lVar12 + 0xb4);
    lVar13 = 0;
    uStack_b4 = 0;
    if (*(char *)(lVar12 + 0xb0) == '\x01') {
      lVar13 = 4;
    }
    iVar10 = *(int *)((longlong)&DAT_144f1bc90 + lVar13);
    lVar12 = 0;
    if (*(char *)(local_88 + 0xa8) == '\0') {
      lVar12 = 4;
    }
    local_b8 = *(int *)((longlong)&DAT_144f1bc88 + lVar12) + *(int *)(local_88 + 0xac);
    piVar14 = (int *)ConvertFrameTime(local_70,local_b8,uVar5,uVar6);
    uStack_ac = 0;
    iVar4 = *piVar14;
    local_b0 = iVar10 + local_b0;
    piVar14 = (int *)ConvertFrameTime(local_68,local_b0,uVar5,uVar6);
    FUN_141f65450(param_1,iVar4,*piVar14 - iVar4);
    dVar23 = ((double)*(float *)(param_1 + 0x40c) * (double)(int)uVar6) /
             (double)(int)((ulonglong)uVar6 >> 0x20);
    lVar12 = (longlong)dVar23;
    dVar20 = dVar23;
    if ((lVar12 != -0x8000000000000000) && ((double)lVar12 != dVar23)) {
      auVar21._8_8_ = dVar23;
      auVar21._0_8_ = dVar23;
      uVar9 = movmskpd(0,auVar21);
      dVar20 = (double)(longlong)(lVar12 - (ulonglong)(uVar9 & 1));
    }
    dVar23 = dVar23 - dVar20;
    uVar9 = (uint)dVar20;
    dVar20 = dVar23;
    if ((0.0 < dVar23) && (dVar20 = 0.9999999403953552, dVar23 <= 0.9999999403953552)) {
      dVar20 = dVar23;
    }
    fVar19 = (float)dVar20;
    if (0.0 <= fVar19) {
      if (0.99999994 <= fVar19) {
        fVar19 = 0.99999994;
      }
      local_138 = CONCAT44(fVar19,uVar9);
    }
    else {
      local_138 = (ulonglong)uVar9;
    }
    if (*(char *)(param_1 + 0x408) == '\0') {
      local_98 = *(int *)(param_1 + 0x3e4) - 1;
      uStack_94 = 0;
      local_a0 = 0;
      uVar15 = 0;
      if ((-1 < (int)uVar9) && ((uVar9 != 0 || (0.0 <= local_138._4_4_)))) {
        if (((int)uVar9 < (int)local_98) || ((uVar9 == local_98 && (local_138._4_4_ < 0.0)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        uVar15 = (ulonglong)local_98;
        if (bVar7) {
          uVar15 = local_138;
        }
      }
    }
    else {
      iVar10 = rand();
      local_a8 = iVar10 % *(int *)(param_1 + 0x3e4);
      uStack_a4 = 0;
      uVar15 = (ulonglong)local_a8;
    }
    local_90 = *(int *)(param_1 + 0x3e0);
    uStack_8c = 0;
    local_130._4_4_ = (float)(uVar15 >> 0x20);
    local_130._4_4_ = local_130._4_4_ + 0.0;
    uVar9 = ((int)ROUND((local_130._4_4_ + local_130._4_4_) - 0.5) >> 1) + (int)uVar15 + local_90;
    iVar10 = (int)local_130._4_4_;
    fVar19 = local_130._4_4_;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != local_130._4_4_)) {
      auVar22._4_4_ = local_130._4_4_;
      auVar22._0_4_ = local_130._4_4_;
      auVar22._8_8_ = 0;
      uVar11 = movmskps((int)uVar15,auVar22);
      fVar19 = (float)(int)(iVar10 - (uVar11 & 1));
    }
    local_130._4_4_ = local_130._4_4_ - fVar19;
    if (0.0 <= local_130._4_4_) {
      if (0.99999994 <= local_130._4_4_) {
        local_130._4_4_ = 0.99999994;
      }
      local_138 = CONCAT44(local_130._4_4_,uVar9);
    }
    else {
      local_138 = (ulonglong)uVar9;
    }
    *(ulonglong *)(param_1 + 0x774) = local_138;
    if (*(char *)(param_1 + 0x784) != '\0') {
      *(undefined1 *)(param_1 + 0x784) = 0;
    }
    if (*(char *)(param_1 + 0x7b0) != '\0') {
      *(undefined1 *)(param_1 + 0x7b0) = 0;
    }
    cVar18 = *(char *)(local_88 + 0xc9);
    local_130 = uVar15;
  }
  plVar17 = (longlong *)0x0;
  pplVar3 = (longlong **)(param_1 + 0x430);
  if (*pplVar3 == (longlong *)0x0) {
    if (cVar18 == '\x01') {
      plStack_c0 = (longlong *)FUN_141f36e90();
      local_c8 = plStack_c0 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
      local_d8 = local_c8;
      plStack_d0 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      if (pplVar3 != &local_d8) {
        *pplVar3 = local_c8;
        local_d8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x438,&plStack_d0);
      }
      plVar17 = plStack_d0;
      plVar16 = plStack_c0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_d0 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        plVar16 = plStack_c0;
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar14 = (int *)((longlong)plVar17 + 0xc);
          iVar10 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          plVar16 = plStack_c0;
          if (iVar10 == 1) {
            (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
            plVar16 = plStack_c0;
          }
        }
      }
    }
    else if (cVar18 == '\x02') {
      plStack_e0 = (longlong *)FUN_141f36e20();
      local_e8 = plStack_e0 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_e8,local_e8,local_e8);
      local_f8 = local_e8;
      plStack_f0 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
        UNLOCK();
      }
      if (pplVar3 != &local_f8) {
        *pplVar3 = local_e8;
        local_f8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x438,&plStack_f0);
      }
      plVar17 = plStack_f0;
      plVar16 = plStack_e0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_f0 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        plVar16 = plStack_e0;
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar14 = (int *)((longlong)plVar17 + 0xc);
          iVar10 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          plVar16 = plStack_e0;
          if (iVar10 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
            plVar16 = plStack_e0;
          }
        }
      }
    }
    else {
      plVar16 = (longlong *)operator_new(0x38);
      if (plVar16 != (longlong *)0x0) {
        *(undefined4 *)(plVar16 + 1) = 1;
        *plVar16 = (longlong)&PTR_FUN_144f1c8b0;
        *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
        *(undefined1 *)(plVar16 + 5) = 0;
        plVar16[2] = (longlong)&PTR__scalar_deleting_destructor__144f1a958;
        plVar16[6] = 0;
        plVar17 = plVar16;
      }
      local_108 = plVar17 + 2;
      plStack_100 = plVar17;
      SharedPointerInternals::EnableSharedFromThis(&local_108,local_108,local_108);
      local_118 = local_108;
      plStack_110 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      if (pplVar3 != &local_118) {
        *pplVar3 = local_108;
        local_118 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x438,&plStack_110);
      }
      plVar17 = plStack_110;
      plVar16 = plStack_100;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar14 = (int *)((longlong)plVar17 + 0xc);
          iVar10 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          plVar16 = plStack_100;
          if (iVar10 == 1) {
            (**(code **)(*plStack_110 + 8))(plStack_110,1);
            plVar16 = plStack_100;
          }
        }
      }
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar14 = (int *)((longlong)plVar16 + 0xc);
        iVar10 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
  local_80 = *(longlong *)(param_1 + 0x774);
  plVar17 = *pplVar3;
  lStack_78 = *(longlong *)(param_1 + 0x760);
  if ((char)plVar17[3] != '\0') {
    (**(code **)(*plVar17 + 0x18))(plVar17,&local_80);
    if ((char)plVar17[3] != '\0') {
      *(undefined1 *)(plVar17 + 3) = 0;
    }
    if (&local_80 != plVar17 + 1) {
      plVar17[1] = local_80;
      plVar17[2] = lStack_78;
      *(undefined1 *)(plVar17 + 3) = 1;
    }
    (**(code **)(*plVar17 + 0x10))(plVar17,&local_80);
  }
  FUN_141f54cb0(param_1 + 0x448,*(undefined8 *)(param_1 + 0x3d8),param_1 + 0x28);
  FUN_141f66f00(param_1);
  return;
}



// FUNCTION 141f557a0 InitializeModule body=110 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FMovieSceneModule>::InitializeModule(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)operator_new(0x78);
  if (_Dst != (undefined8 *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x78);
    _Dst[2] = 0;
    *_Dst = &PTR_FUN_144f1a538;
    _Dst[3] = 0;
    _Dst[4] = 0;
    _Dst[5] = 0;
    _Dst[6] = 0;
    _Dst[9] = 0;
    _Dst[10] = 0;
    *(undefined4 *)((longlong)_Dst + 0x5c) = 0;
    *(undefined4 *)(_Dst + 0xb) = 0xffffffff;
    _Dst[0xd] = 0;
    *(undefined4 *)(_Dst + 0xe) = 0;
    return _Dst;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f55810 Insert body=126 status=ok
// SIG undefined Insert(void)

int TArray<FFrameNumber,FDefaultAllocator>::Insert
              (longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 4);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar1 - param_3) << 2);
  *(undefined4 *)((longlong)param_3 * 4 + *param_1) = *param_2;
  return param_3;
}



// FUNCTION 141f55890 Insert body=181 status=ok
// SIG undefined Insert(void)

int TArray<FMovieSceneFloatValue,FDefaultAllocator>::Insert
              (longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x1c;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + lVar3 + 0x1c),(void *)(*param_1 + lVar3),
             (longlong)(iVar1 - param_3) * 0x1c);
  lVar2 = *param_1;
  *(undefined4 *)(lVar3 + lVar2) = *param_2;
  *(undefined1 *)(lVar3 + 4 + lVar2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(lVar3 + 5 + lVar2) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined4 *)(lVar3 + 8 + lVar2) = param_2[2];
  *(undefined4 *)(lVar3 + 0xc + lVar2) = param_2[3];
  *(undefined1 *)(lVar3 + 0x10 + lVar2) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0x14 + lVar2) = param_2[5];
  *(undefined4 *)(lVar3 + 0x18 + lVar2) = param_2[6];
  return param_3;
}



// FUNCTION 141f55950 Insert body=441 status=ok
// SIG undefined Insert(void)

void TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Insert
               (longlong *param_1,int param_2,int param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar5 = (longlong)param_2;
  lVar3 = *param_1;
  iVar9 = *(int *)(lVar3 + 8 + lVar5 * 0xc);
  piVar2 = (int *)(lVar3 + lVar5 * 0xc);
  iVar4 = *(int *)(lVar3 + 4 + lVar5 * 0xc);
  if (iVar9 < iVar4 + 1) {
    plVar1 = param_1 + 2;
    iVar4 = 2;
    if (1 < iVar9 * 2) {
      iVar4 = iVar9 * 2;
    }
    piVar2[2] = iVar4;
    iVar10 = (int)param_1[3];
    iVar9 = (int)param_1[3];
    iVar4 = iVar10 + iVar4;
    if (iVar9 < iVar4) {
      *(int *)(param_1 + 3) = iVar4;
      iVar8 = iVar4 - iVar9;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar1,iVar9);
      }
      puVar7 = (undefined1 *)((longlong)iVar9 * 0x20 + *plVar1);
      if (iVar8 != 0) {
        puVar6 = puVar7 + 0x14;
        do {
          *puVar7 = 0;
          puVar7 = puVar7 + 0x20;
          *(undefined4 *)(puVar6 + -0x10) = 0;
          puVar6[-0xc] = 0;
          *(undefined4 *)(puVar6 + -8) = 0;
          *(undefined8 *)(puVar6 + -4) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 4) = 0xffffffffffffffff;
          puVar6 = puVar6 + 0x20;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else if ((iVar4 < iVar9) && (iVar4 != iVar9)) {
      *(int *)(param_1 + 3) = iVar4;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar10 * 0x20 + *plVar1),
               (void *)((longlong)*piVar2 * 0x20 + *plVar1),(longlong)piVar2[1] << 5);
    *piVar2 = iVar10;
    iVar9 = piVar2[2];
    iVar4 = piVar2[1];
  }
  else {
    iVar10 = *piVar2;
  }
  iVar8 = 0;
  if ((-1 < param_3) && (iVar8 = iVar9 + -1, param_3 < iVar9 + -1)) {
    iVar8 = param_3;
  }
  if (iVar8 <= iVar4 + -1) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(iVar10 + iVar8 + 1) * 0x20 + param_1[2]),
               (void *)((longlong)(iVar10 + iVar8) * 0x20 + param_1[2]),
               (longlong)(iVar4 - iVar8) << 5);
    iVar4 = piVar2[1];
    iVar10 = *piVar2;
  }
  piVar2[1] = iVar4 + 1;
  puVar7 = (undefined1 *)((longlong)(iVar10 + iVar8) * 0x20 + param_1[2]);
  *puVar7 = *param_4;
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_4 + 4);
  puVar7[8] = param_4[8];
  *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(param_4 + 0x10);
  *(undefined4 *)(puVar7 + 0x18) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
  return;
}



// FUNCTION 141f55b10 FUN_141f55b10 body=1139 status=ok
// SIG undefined FUN_141f55b10(void)

ulonglong FUN_141f55b10(longlong *param_1,int param_2,char *param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar18;
  char local_res8;
  int local_resc;
  char local_48 [4];
  int local_44;
  char local_40 [4];
  int local_3c;
  
  iVar11 = (int)param_1[1];
  uVar3 = 0;
  uVar9 = 0;
  lVar12 = *param_1;
  uVar16 = 0;
  uVar14 = (longlong)iVar11;
  if (iVar11 != 0) {
    do {
      uVar15 = uVar14 >> 1;
      pcVar5 = (char *)((uVar15 + uVar3) * 0x10 + lVar12);
      cVar4 = *pcVar5;
      iVar13 = *(int *)(pcVar5 + 4);
      if ((cVar4 == '\x02') ||
         ((((iVar17 = param_2, iVar13 < param_2 && (iVar17 = iVar13, cVar4 != '\x01')) ||
           (iVar17 != param_2)) || ((cVar4 == '\x01' && (param_2 == iVar13)))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        uVar3 = uVar15 + uVar3 + (ulonglong)((uint)uVar14 & 1);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
  }
  iVar13 = (int)uVar3;
  if ((iVar13 < 0) || (iVar11 <= iVar13)) {
    local_resc = 0;
    local_res8 = '\x02';
  }
  else {
    cVar4 = *(char *)(lVar12 + (longlong)iVar13 * 0x10);
    local_resc = *(int *)(lVar12 + 4 + (longlong)iVar13 * 0x10);
    if (cVar4 == '\0') {
      local_res8 = '\x01';
    }
    else {
      local_res8 = '\0';
      if (cVar4 != '\x01') {
        local_res8 = cVar4;
      }
    }
  }
  iVar17 = iVar13 + -1;
  if ((iVar17 < 0) || (iVar11 <= iVar17)) {
    local_44 = 0;
    local_48[0] = '\x02';
  }
  else {
    local_48[0] = *(char *)((longlong)iVar13 * 0x10 + -8 + lVar12);
    local_44 = *(int *)((longlong)iVar13 * 0x10 + -4 + lVar12);
    if (local_48[0] == '\0') {
      local_48[0] = '\x01';
    }
    else if (local_48[0] == '\x01') {
      local_48[0] = '\0';
    }
  }
  cVar4 = *param_3;
  local_40[0] = local_res8;
  local_3c = local_resc;
  if (((cVar4 == '\x02') || (param_3[8] == '\x02')) ||
     ((*(int *)(param_3 + 4) <= *(int *)(param_3 + 0xc) &&
      ((*(int *)(param_3 + 4) != *(int *)(param_3 + 0xc) ||
       ((cVar4 != '\0' && (param_3[8] != '\0')))))))) {
    if ((local_48[0] == '\x02') || (local_res8 == '\x02')) {
LAB_141f55c9d:
      pcVar5 = param_3 + 8;
      if ((param_3[8] == '\x02') ||
         (((local_res8 != '\x02' && (local_resc <= *(int *)(param_3 + 0xc))) &&
          ((local_resc < *(int *)(param_3 + 0xc) || (param_3[8] != '\0')))))) {
        pcVar5 = local_40;
      }
      if (cVar4 == '\x02') {
LAB_141f55cf4:
        pcVar6 = local_48;
        cVar4 = local_48[0];
      }
      else {
        pcVar6 = param_3;
        if ((local_48[0] != '\x02') && (*(int *)(param_3 + 4) <= local_44)) {
          if ((*(int *)(param_3 + 4) < local_44) || (cVar4 != '\0')) goto LAB_141f55cf4;
          cVar4 = '\0';
        }
      }
      uVar16 = *(undefined4 *)(pcVar6 + 4);
      cVar2 = *pcVar5;
      uVar9 = *(undefined4 *)(pcVar5 + 4);
    }
    else {
      if (local_resc < local_44) goto LAB_141f55c5c;
      if (local_44 != local_resc) goto LAB_141f55c9d;
      if (local_48[0] == '\0') goto LAB_141f55c5c;
      if (local_res8 != '\0') goto LAB_141f55c9d;
      cVar4 = '\0';
      uVar16 = 0;
      cVar2 = '\0';
      uVar9 = 0;
    }
  }
  else {
LAB_141f55c5c:
    cVar4 = '\0';
    cVar2 = '\0';
  }
  *param_3 = cVar4;
  *(undefined4 *)(param_3 + 4) = uVar16;
  param_3[8] = cVar2;
  *(undefined4 *)(param_3 + 0xc) = uVar9;
  if ((-1 < iVar13) && (iVar13 < (int)param_1[1])) {
    pcVar5 = (char *)((longlong)iVar13 * 0x10 + *param_1);
    cVar4 = TRange<FFrameNumber>::Overlaps(pcVar5,param_3);
    if (cVar4 != '\0') {
      cVar4 = *pcVar5;
      uVar9 = *(undefined4 *)(pcVar5 + 4);
      if (cVar4 == '\0') {
        cVar4 = '\x01';
      }
      else if (cVar4 == '\x01') {
        cVar4 = '\0';
      }
      param_3[8] = cVar4;
      *(undefined4 *)(param_3 + 0xc) = uVar9;
    }
  }
  if ((-1 < iVar17) && (iVar17 < (int)param_1[1])) {
    lVar12 = (longlong)iVar17 * 0x10 + *param_1;
    cVar4 = TRange<FFrameNumber>::Overlaps(lVar12,param_3);
    if (cVar4 != '\0') {
      cVar4 = *(char *)(lVar12 + 8);
      uVar16 = *(undefined4 *)(lVar12 + 0xc);
      if (cVar4 == '\0') {
        cVar4 = '\x01';
      }
      else if (cVar4 == '\x01') {
        cVar4 = '\0';
      }
      *param_3 = cVar4;
      *(undefined4 *)(param_3 + 4) = uVar16;
      param_3[8] = param_3[8];
      *(undefined4 *)(param_3 + 0xc) = uVar9;
    }
  }
  cVar4 = *param_3;
  if ((((cVar4 == '\x02') || (param_3[8] == '\x02')) ||
      ((*(int *)(param_3 + 4) <= *(int *)(param_3 + 0xc) &&
       ((*(int *)(param_3 + 4) != *(int *)(param_3 + 0xc) ||
        ((cVar4 != '\0' && (param_3[8] != '\0')))))))) &&
     ((iVar13 < 0 ||
      (((int)param_1[1] <= iVar13 ||
       (cVar2 = TRange<FFrameNumber>::Overlaps((longlong)iVar13 * 0x10 + *param_1,param_3),
       cVar2 == '\0')))))) {
    if ((iVar17 < 0) || (iVar11 = (int)param_1[1], iVar11 <= iVar17)) {
      iVar11 = (int)param_1[1];
    }
    else {
      cVar2 = TRange<FFrameNumber>::Overlaps((longlong)iVar17 * 0x10 + *param_1,param_3);
      if (cVar2 != '\0') goto LAB_141f55e11;
    }
    cVar2 = param_3[8];
    uVar16 = *(undefined4 *)(param_3 + 4);
    uVar9 = *(undefined4 *)(param_3 + 0xc);
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar11);
    }
    lVar18 = (longlong)iVar13;
    lVar10 = lVar18 * 0x10;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + lVar10 + 0x10),(void *)(*param_1 + lVar10),
               (longlong)(iVar11 - iVar13) << 4);
    lVar12 = *param_1;
    *(char *)(lVar10 + lVar12) = cVar4;
    *(undefined4 *)(lVar10 + 4 + lVar12) = uVar16;
    *(char *)(lVar10 + 8 + lVar12) = cVar2;
    *(undefined4 *)(lVar10 + 0xc + lVar12) = uVar9;
    iVar11 = (int)param_1[5];
    *(int *)(param_1 + 5) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 4,iVar11);
    }
    pvVar7 = (void *)(param_1[4] + lVar18 * 0x70);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar7 + 0x70),pvVar7,(longlong)(iVar11 - iVar13) * 0x70);
    FMovieSceneEvaluationMetaData::FMovieSceneEvaluationMetaData(param_1[4] + lVar18 * 0x70,param_5)
    ;
    iVar11 = (int)param_1[3];
    *(int *)(param_1 + 3) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 2,iVar11);
    }
    pvVar7 = (void *)(param_1[2] + lVar18 * 0x20);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar7 + 0x20),pvVar7,(longlong)(iVar11 - iVar13) << 5);
    puVar8 = (undefined8 *)(param_1[2] + lVar18 * 0x20);
    *puVar8 = 0;
    *puVar8 = *param_4;
    *param_4 = 0;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar3 = uVar3 & 0xffffffff;
    param_4[1] = 0;
    puVar8[2] = 0;
    puVar8[2] = param_4[2];
    param_4[2] = 0;
    *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_4 + 3);
    *(undefined4 *)((longlong)puVar8 + 0x1c) = *(undefined4 *)((longlong)param_4 + 0x1c);
    param_4[3] = 0;
  }
  else {
LAB_141f55e11:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 141f55f90 InsertEmptySpace body=43 status=ok
// SIG undefined InsertEmptySpace(void)

undefined8
FEvaluateNearestSegmentBlender::InsertEmptySpace
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  MovieSceneSegmentCompiler::EvaluateNearestSegment(param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 141f55fd0 InsertEmptySpace body=251 status=ok
// SIG undefined InsertEmptySpace(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong `UTestMovieSceneTrack::GetTrackSegmentBlender'::`2'::FSegmentBlender::InsertEmptySpace
                   (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0 [72];
  longlong local_88;
  char local_78;
  undefined1 local_70 [72];
  longlong local_28;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  bVar2 = *(char *)(param_1 + 0x11) == '\0';
  local_d8 = 0;
  if (bVar2) {
    local_78 = '\0';
    puVar1 = local_d0;
  }
  else {
    puVar1 = (undefined1 *)
             MovieSceneSegmentCompiler::EvaluateNearestSegment(local_70,param_3,param_4,param_5);
  }
  *(undefined1 *)(param_2 + 0x58) = 0;
  if (puVar1[0x58] != '\0') {
    FMovieSceneSegment::FMovieSceneSegment(param_2,puVar1);
    *(undefined1 *)(param_2 + 0x58) = 1;
  }
  if ((bVar2) && (local_78 != '\0')) {
    local_78 = '\0';
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_18 != '\0')) {
    local_18 = 0;
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 141f560d0 InsertNewChild body=704 status=ok
// SIG undefined InsertNewChild(void)

void FMovieSceneEvaluationTree::InsertNewChild
               (longlong param_1,undefined1 *param_2,longlong *param_3,int param_4,
               undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 local_res10;
  ulonglong local_78;
  undefined4 uStack_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar13 = (int)param_5;
  iVar5 = (int)((ulonglong)param_5 >> 0x20);
  lVar15 = param_1;
  if (iVar13 != -1) {
    lVar15 = ((longlong)*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 0xc) +
             (longlong)iVar5) * 0x20 + *(longlong *)(param_1 + 0x30);
  }
  uVar2 = *(uint *)(lVar15 + 0x18);
  uVar16 = (ulonglong)(int)uVar2;
  plVar1 = (longlong *)(param_1 + 0x20);
  if (uVar2 == 0xffffffff) {
    iVar3 = *(int *)(param_1 + 0x28);
    uVar16 = (ulonglong)iVar3;
    local_78 = (ulonglong)*(uint *)(param_1 + 0x38);
    *(int *)(param_1 + 0x28) = iVar3 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    lVar15 = *plVar1;
    *(ulonglong *)(lVar15 + uVar16 * 0xc) = local_78;
    *(undefined4 *)(lVar15 + 8 + uVar16 * 0xc) = 1;
    iVar4 = *(int *)(param_1 + 0x38);
    iVar6 = *(int *)(param_1 + 0x38) + 1;
    if (iVar4 < iVar6) {
      *(int *)(param_1 + 0x38) = iVar6;
      iVar12 = iVar6 - iVar4;
      if (*(int *)(param_1 + 0x3c) < iVar6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x30,iVar4);
      }
      puVar9 = (undefined1 *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x30));
      if (iVar12 != 0) {
        puVar7 = puVar9 + 0x14;
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 0x20;
          *(undefined4 *)(puVar7 + -0x10) = 0;
          puVar7[-0xc] = 0;
          *(undefined4 *)(puVar7 + -8) = 0;
          *(undefined8 *)(puVar7 + -4) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 4) = 0xffffffffffffffff;
          puVar7 = puVar7 + 0x20;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
    else if ((iVar6 < iVar4) && (iVar6 != iVar4)) {
      *(int *)(param_1 + 0x38) = iVar6;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x30);
    }
    if (iVar13 != -1) {
      param_1 = ((longlong)*(int *)(*plVar1 + (longlong)iVar13 * 0xc) + (longlong)iVar5) * 0x20 +
                *(longlong *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x18) = iVar3;
  }
  else {
    iVar5 = *(int *)(*plVar1 + 4 + uVar16 * 0xc);
    if (param_4 < iVar5) {
      local_res10 = (ulonglong)uVar2;
      piVar14 = (int *)(*(longlong *)(param_1 + 0x30) + 0x18 +
                       ((longlong)*(int *)(*plVar1 + uVar16 * 0xc) + (longlong)param_4) * 0x20);
      iVar13 = param_4;
      do {
        iVar3 = *piVar14;
        iVar13 = iVar13 + 1;
        local_res10 = CONCAT44(iVar13,(undefined4)local_res10);
        if (iVar3 == -1) {
          local_68 = 0;
          puVar8 = &local_68;
          local_60 = 0;
        }
        else {
          local_78 = (longlong)*(int *)(*plVar1 + (longlong)iVar3 * 0xc) * 0x20 +
                     *(longlong *)(param_1 + 0x30);
          uStack_70 = *(undefined4 *)(*plVar1 + (longlong)iVar3 * 0xc + 4);
          puVar8 = &local_78;
        }
        uVar10 = *puVar8;
        uVar11 = (longlong)(int)puVar8[1] * 0x20 + uVar10;
        for (; uVar10 != uVar11; uVar10 = uVar10 + 0x20) {
          *(ulonglong *)(uVar10 + 0x10) = local_res10;
        }
        piVar14 = piVar14 + 8;
      } while (iVar13 < iVar5);
    }
  }
  local_58[0] = *param_2;
  local_54 = *(undefined4 *)(param_2 + 4);
  local_50 = param_2[8];
  local_4c = *(undefined4 *)(param_2 + 0xc);
  local_48 = param_5;
  local_40 = 0xffffffffffffffff;
  (**(code **)(*param_3 + 8))(param_3,local_58);
  TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Insert
            (plVar1,uVar16 & 0xffffffff,param_4,local_58);
  return;
}



// FUNCTION 141f56390 Interrogate body=323 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<int>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)FUN_141f34500(param_4,param_5);
  if (plVar3 != (longlong *)0x0) {
    local_78 = 0;
    puVar5 = *(ulonglong **)(param_1 + 0x10);
    uVar7 = 0;
    local_90 = 0;
    local_80 = 0;
    local_68 = 0;
    local_50 = 0;
    uVar6 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x18) < puVar5) {
      uVar6 = uVar7;
    }
    local_a8 = plVar3;
    local_a0 = param_1;
    local_98 = param_2;
    if (uVar6 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar5;
        local_b8 = &local_a8;
        puVar4 = puVar5;
        if ((puVar1[1] & 2) == 0) {
          puVar4 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar4 + 8))
                  ((longlong *)*puVar4,local_88,*(undefined4 *)((longlong)puVar1 + 0x24),
                   (char)puVar1[5]);
        puVar5 = puVar5 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar6);
    }
    uVar2 = MovieScene::TMaskedBlendable<double,1>::Resolve<int>(local_88,&local_a8);
    local_b8 = (longlong **)param_6;
    (**(code **)(*plVar3 + 0x18))(plVar3,param_3,uVar2,param_1);
  }
  return;
}



// FUNCTION 141f564e0 Interrogate body=1842 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneBlendingAccumulator::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  int iStack_120;
  uint uStack_11c;
  uint *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [4];
  uint *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_b8 = (longlong *)(param_1 + 0xa0);
  plVar16 = (longlong *)*local_b8;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = (uint *)0x0;
  plVar12 = plVar16 + (longlong)*(int *)(param_1 + 0xa8) * 9;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_c0 = param_4;
  local_c8 = param_3;
  local_d0 = param_2;
  for (; plVar16 != plVar12; plVar16 = plVar16 + 9) {
    plVar11 = plVar16;
    if ((*(byte *)(plVar16 + 8) & 2) == 0) {
      plVar11 = (longlong *)*plVar16;
    }
    (**(code **)(*plVar11 + 8))(plVar11,&local_a8);
  }
  local_100 = (longlong *)(param_1 + 0x50);
  uStack_144 = 1;
  uVar2 = *(uint *)(param_1 + 0x78);
  puVar18 = (uint *)(param_1 + 0x60);
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar2 != 0) {
    puVar19 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar19 = puVar18;
    }
    uVar3 = *puVar19;
    while (uVar3 == 0) {
      lVar15 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar10 = local_148 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar10;
      if (bVar4) goto LAB_141f56642;
      uVar3 = puVar19[lVar15 + 1];
    }
    uStack_144 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_134 = (iStack_130 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_134) {
LAB_141f56642:
      uStack_134 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x78);
  uStack_110 = 0xffffffff;
  uStack_10c = uStack_134;
  local_108 = CONCAT44(uStack_12c,iStack_130);
  uStack_f0 = CONCAT44(uStack_144,local_148);
  local_138 = -1 << ((byte)uVar3 & 0x1f);
  uVar17 = uVar3 & 0xffffffe0;
  iStack_120 = local_148;
  uStack_11c = uStack_144;
  uStack_134 = uVar3;
  if (uVar3 != uVar2) {
    puVar19 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar19 = puVar18;
    }
    uVar14 = puVar19[(int)uVar3 >> 5] & local_138;
    iVar10 = (int)uVar3 >> 5;
    while (uVar14 == 0) {
      uVar17 = uVar17 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_141f56715;
      uVar14 = puVar19[(longlong)iVar10 + 1];
      local_138 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar10 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_134 = (uVar17 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_134) {
LAB_141f56715:
      uStack_134 = uVar2;
    }
  }
  uVar2 = uStack_134;
  puStack_140 = puVar18;
  local_118 = puVar18;
  local_f8 = local_100;
  puStack_e8 = puVar18;
  uStack_d8 = local_108;
  local_128 = local_100;
  uStack_e0 = uStack_110;
  uStack_dc = uStack_10c;
  while (((uVar7 = local_c0, uVar6 = local_c8, uVar5 = local_d0, uStack_10c != uVar2 ||
          (local_118 != puVar18)) || (local_128 != (longlong *)(param_1 + 0x50)))) {
    plVar16 = *(longlong **)(*local_128 + 0x18 + (longlong)(int)uStack_10c * 0x30);
    plVar12 = plVar16 + (longlong)*(int *)(*local_128 + 0x20 + (longlong)(int)uStack_10c * 0x30) * 9
    ;
    for (; plVar16 != plVar12; plVar16 = plVar16 + 9) {
      plVar11 = plVar16;
      if ((*(byte *)(plVar16 + 8) & 2) == 0) {
        plVar11 = (longlong *)*plVar16;
      }
      (**(code **)(*plVar11 + 8))(plVar11,&local_a8);
    }
    uStack_110 = uStack_110 & ~uStack_11c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
  }
  iVar10 = (int)local_80;
  puStack_140 = local_98;
  local_148 = 0;
  uStack_144 = 1;
  uStack_134 = 0;
  iStack_130 = 0;
  if ((int)local_80 != 0) {
    puVar18 = local_98;
    if (local_88 != (uint *)0x0) {
      puVar18 = local_88;
    }
    uVar2 = *puVar18;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar2 == 0) {
      iStack_130 = iStack_130 + 0x20;
      if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_148) {
        uStack_134 = (int)local_80;
        local_148 = local_148 + 1;
        goto LAB_141f5686b;
      }
      uVar2 = puVar18[(longlong)local_148 + 1];
      local_148 = local_148 + 1;
    }
    uStack_144 = -uVar2 & uVar2;
    iVar8 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_134 = (iStack_130 - iVar8) + 0x1f;
    if ((int)local_80 < (int)uStack_134) {
      uStack_134 = (int)local_80;
    }
  }
LAB_141f5686b:
  uStack_110 = 0xffffffff;
  uStack_10c = uStack_134;
  local_108 = CONCAT44(uStack_12c,iStack_130);
  uStack_f0 = CONCAT44(uStack_144,local_148);
  local_f8 = &local_a8;
  uStack_134 = (int)local_80;
  local_138 = -1 << ((byte)local_80 & 0x1f);
  iStack_120 = local_148;
  uStack_11c = uStack_144;
  local_118 = puStack_140;
  puStack_e8 = puStack_140;
  uStack_d8 = local_108;
  uStack_e0 = uStack_110;
  uStack_dc = uStack_10c;
  local_128 = local_f8;
  while (((uStack_10c != iVar10 || (local_118 != local_98)) || (local_128 != &local_a8))) {
    puVar9 = (undefined8 *)((longlong)(int)uStack_10c * 0x38 + *local_128);
    plVar12 = puVar9 + 1;
    if ((*(byte *)(puVar9 + 5) & 2) == 0) {
      plVar12 = (longlong *)*plVar12;
    }
    local_158 = *puVar9;
    local_150 = uVar5;
    (**(code **)(*plVar12 + 0x10))(plVar12,uVar7,uVar6,param_1);
    uStack_110 = uStack_110 & ~uStack_11c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
  }
  FMovieSceneAccumulatedBlendState::Reset(local_b8);
  uVar2 = *(uint *)(local_100 + 5);
  puVar18 = (uint *)(local_100 + 2);
  uStack_144 = 1;
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar2 != 0) {
    puVar19 = (uint *)local_100[4];
    if ((uint *)local_100[4] == (uint *)0x0) {
      puVar19 = puVar18;
    }
    uVar3 = *puVar19;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar3 == 0) {
      lVar15 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar10 = local_148 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar10;
      if (bVar4) goto LAB_141f569f2;
      uVar3 = puVar19[lVar15 + 1];
    }
    uStack_144 = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_134 = (iStack_130 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_134) {
LAB_141f569f2:
      uStack_134 = uVar2;
    }
  }
  uVar3 = *(uint *)(local_100 + 5);
  uStack_110 = 0xffffffff;
  uStack_10c = uStack_134;
  local_108 = CONCAT44(uStack_12c,iStack_130);
  local_f8 = local_100;
  plVar12 = local_f8;
  uStack_f0 = CONCAT44(uStack_144,local_148);
  local_138 = -1 << ((byte)uVar3 & 0x1f);
  uVar17 = uVar3 & 0xffffffe0;
  local_f8._0_4_ = SUB84(local_100,0);
  local_f8._4_4_ = (undefined4)((ulonglong)local_100 >> 0x20);
  local_128._0_4_ = (undefined4)local_f8;
  local_128._4_4_ = local_f8._4_4_;
  iStack_120 = local_148;
  uStack_11c = uStack_144;
  puStack_140 = puVar18;
  uStack_134 = uVar3;
  local_118 = puVar18;
  local_f8 = plVar12;
  puStack_e8 = puVar18;
  uStack_d8 = local_108;
  uStack_e0 = uStack_110;
  uStack_dc = uStack_10c;
  if (uVar3 != uVar2) {
    puVar19 = (uint *)local_100[4];
    if ((uint *)local_100[4] == (uint *)0x0) {
      puVar19 = puVar18;
    }
    uVar14 = puVar19[(int)uVar3 >> 5] & local_138;
    iVar10 = (int)uVar3 >> 5;
    while (uVar14 == 0) {
      uVar17 = uVar17 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_141f56ac4;
      uVar14 = puVar19[(longlong)iVar10 + 1];
      local_138 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar10 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_134 = (uVar17 - iVar10) + 0x1f;
    uVar3 = uStack_134;
    if ((int)uVar2 < (int)uStack_134) {
LAB_141f56ac4:
      uStack_134 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_10c == uVar3) && (local_118 == puVar18)) &&
       ((longlong *)CONCAT44(local_128._4_4_,(undefined4)local_128) == local_100)) break;
    lVar15 = (longlong)(int)uStack_10c * 0x30 +
             *(longlong *)CONCAT44(local_128._4_4_,(undefined4)local_128);
    iVar10 = *(int *)(lVar15 + 0x24);
    puVar9 = *(undefined8 **)(lVar15 + 0x18);
    iVar8 = *(int *)(lVar15 + 0x20);
    if (iVar10 < 0) {
      if (iVar8 != 0) {
        do {
          bVar1 = *(byte *)(puVar9 + 8);
          if ((bVar1 & 1) != 0) {
            puVar13 = puVar9;
            if ((bVar1 & 2) == 0) {
              puVar13 = (undefined8 *)*puVar9;
            }
            *(byte *)(puVar9 + 8) = bVar1 & 0xfe;
            (**(code **)*puVar13)(puVar13,0);
            if ((*(byte *)(puVar9 + 8) & 2) == 0) {
              FMemory::Free(*puVar9);
            }
          }
          puVar9 = puVar9 + 9;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar10 = *(int *)(lVar15 + 0x24);
      }
      *(undefined4 *)(lVar15 + 0x20) = 0;
      if (iVar10 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                  (lVar15 + 0x18,0);
      }
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        bVar1 = *(byte *)(puVar9 + 8);
        if ((bVar1 & 1) != 0) {
          puVar13 = puVar9;
          if ((bVar1 & 2) == 0) {
            puVar13 = (undefined8 *)*puVar9;
          }
          *(byte *)(puVar9 + 8) = bVar1 & 0xfe;
          (**(code **)*puVar13)(puVar13,0);
          if ((*(byte *)(puVar9 + 8) & 2) == 0) {
            FMemory::Free(*puVar9);
          }
        }
        puVar9 = puVar9 + 9;
      }
      *(undefined4 *)(lVar15 + 0x20) = 0;
    }
    uStack_110 = uStack_110 & ~uStack_11c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_a8,0);
  if (local_88 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f56c20 FUN_141f56c20 body=1108 status=ok
// SIG undefined FUN_141f56c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f56c20(longlong param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int local_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined8 local_90;
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
    plVar9 = (longlong *)(param_1 + 0xb0);
    if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
      plVar9 = (longlong *)*plVar9;
    }
    cVar6 = (**(code **)(*plVar9 + 0x38))();
    if (cVar6 != '\0') {
      return;
    }
  }
  iVar12 = *(int *)(param_2 + 0x24);
  if (iVar12 == -0x80000000) {
    lVar13 = 0x10;
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar13 = 4;
    }
    iVar12 = (int)*(undefined8 *)(param_2 + lVar13);
  }
  local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
  local_118 = (longlong *)CONCAT44(iVar12,(int)local_118);
  uStack_110 = CONCAT71(uStack_110._1_7_,1);
  uStack_110 = CONCAT44(iVar12,(undefined4)uStack_110);
  FMovieSceneEvaluationTrack::FindFirstSegment(param_1,&local_128,&local_118);
  if ((int)local_128 == -1) {
    local_128 = CONCAT71(local_128._1_7_,1);
    local_128 = CONCAT44(iVar12,(int)local_128);
    FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
              (&local_e8,param_1 + 0x40,&local_128);
    local_118 = (longlong *)CONCAT71(local_118._1_7_,(undefined1)local_e8);
    local_118 = (longlong *)CONCAT44(uStack_e4,(int)local_118);
    uStack_110 = CONCAT71(uStack_110._1_7_,(undefined1)uStack_e0);
    uStack_110 = CONCAT44(uStack_e0._4_4_,(undefined4)uStack_110);
    local_108 = (uint *)CONCAT44(iStack_d4,local_d8);
    uStack_100 = CONCAT44(uStack_cc,iStack_d0);
    FUN_141f44f70(param_1,&local_128,&local_118);
    if ((int)local_128 == -1) {
      return;
    }
  }
  plVar9 = (longlong *)CONCAT44(local_c8._4_4_,(undefined4)local_c8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    lVar13 = *(longlong *)(param_1 + 0x28);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)local_128 * 4) * 0x58
    ;
    piVar11 = *(int **)(lVar14 + 0x48 + lVar13);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)(lVar13 + 0x18 + lVar14);
    }
    piVar1 = piVar11 + (longlong)*(int *)(lVar14 + 0x50 + lVar13) * 3;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 3) {
      plVar9 = (longlong *)((longlong)*piVar11 * 0x38 + *(longlong *)(param_1 + 0xa0));
      if ((*(byte *)(plVar9 + 6) & 2) == 0) {
        plVar9 = (longlong *)*plVar9;
      }
      (**(code **)(*plVar9 + 0x48))(plVar9,param_2,param_3,param_4);
      plVar9 = (longlong *)CONCAT44(local_c8._4_4_,(undefined4)local_c8);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = 0xffffffff;
    uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(param_1 + 0x30));
    local_118._0_4_ = (int)uVar3;
    local_118._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_e8 = (int)local_118;
    uStack_e4 = local_118._4_4_;
    uStack_e0 = (uint *)CONCAT44(uStack_110._4_4_,*(undefined4 *)(param_1 + 0x30));
    local_98 = 0;
    local_90 = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if ((-1 < (int)local_128) && ((int)local_128 < *(int *)(param_1 + 0x20))) {
      uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)local_128 * 4);
    }
    local_118._1_7_ = (undefined7)((ulonglong)uVar3 >> 8);
    local_118 = (longlong *)CONCAT71(local_118._1_7_,2);
    local_118 = (longlong *)((ulonglong)local_118 & 0xffffffff);
    uStack_110 = CONCAT71(uStack_110._1_7_,2);
    uVar5 = uStack_110;
    uStack_110 = uStack_110 & 0xffffffff;
    if (*param_2 != '\x02') {
      uVar4 = *(ulonglong *)(param_2 + 4);
      local_128._4_4_ = (float)(uVar4 >> 0x20);
      if ((local_128._4_4_ != 0.0) || (uVar8 = uVar4, *param_2 == '\0')) {
        uVar8 = (ulonglong)((int)uVar4 + 1);
      }
      local_118 = (longlong *)CONCAT71(local_118._1_7_,1);
      local_118 = (longlong *)CONCAT44((int)uVar8,(int)local_118);
      local_128 = uVar4;
    }
    if (param_2[0xc] != '\x02') {
      uStack_110._0_4_ = (undefined4)uVar5;
      uStack_110 = CONCAT44((int)*(undefined8 *)(param_2 + 0x10),(undefined4)uStack_110);
      uStack_110 = CONCAT71(uStack_110._1_7_,param_2[0xc] != '\0');
    }
    `anonymous_namespace'::GatherSweptSegments(&local_118,uVar10,&local_e8,&local_98);
    iVar12 = (int)local_70;
    local_108 = local_88;
    local_e8 = 0;
    uStack_e4 = 1;
    iStack_d4 = 0;
    iStack_d0 = 0;
    if ((int)local_70 != 0) {
      puVar15 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar2 = *puVar15;
      iStack_d0 = 0;
      local_e8 = 0;
      while (uVar2 == 0) {
        iStack_d0 = iStack_d0 + 0x20;
        if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_e8) {
          iStack_d4 = (int)local_70;
          local_e8 = local_e8 + 1;
          goto LAB_141f56f36;
        }
        uVar2 = puVar15[(longlong)local_e8 + 1];
        local_e8 = local_e8 + 1;
      }
      uStack_e4 = -uVar2 & uVar2;
      iVar7 = 0x1f;
      if (uStack_e4 != 0) {
        for (; uStack_e4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_e4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_d4 = (iStack_d0 - iVar7) + 0x1f;
      if ((int)local_70 < iStack_d4) {
        iStack_d4 = (int)local_70;
      }
    }
LAB_141f56f36:
    uStack_100 = CONCAT44(iStack_d4,0xffffffff);
    uStack_f8 = CONCAT44(uStack_cc,iStack_d0);
    local_118 = &local_98;
    uStack_110 = CONCAT44(uStack_e4,local_e8);
    local_d8 = -1 << ((byte)local_70 & 0x1f);
    iStack_d4 = (int)local_70;
    iStack_c0 = local_e8;
    uStack_bc = uStack_e4;
    uStack_e0 = local_108;
    local_b8 = local_108;
    uStack_b0 = uStack_100;
    local_a8 = uStack_f8;
    local_c8 = local_118;
    while( true ) {
      if (((uStack_b0._4_4_ == iVar12) && (local_b8 == local_88)) && (local_c8 == &local_98)) break;
      piVar11 = (int *)((longlong)uStack_b0._4_4_ * 0x1c + *local_c8);
      plVar9 = (longlong *)((longlong)*piVar11 * 0x38 + *(longlong *)(param_1 + 0xa0));
      if ((*(byte *)(plVar9 + 6) & 2) == 0) {
        plVar9 = (longlong *)*plVar9;
      }
      local_118 = (longlong *)CONCAT71(local_118._1_7_,(char)piVar11[1]);
      local_118 = (longlong *)CONCAT44(piVar11[2],(int)local_118);
      uStack_110 = CONCAT71(uStack_110._1_7_,(char)piVar11[3]);
      uStack_110 = CONCAT44(piVar11[4],(undefined4)uStack_110);
      local_138 = param_4;
      (**(code **)(*plVar9 + 0x40))(plVar9,param_2,&local_118,param_3);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    plVar9 = local_c8;
  }
  if (*(longlong *)(param_3 + 0x10) != 0) {
    local_c8 = plVar9;
    FMovieSceneBlendingAccumulator::Interrogate
              (*(longlong *)(param_3 + 0x10),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 141f57080 IntersectSegmentRanges body=842 status=ok
// SIG undefined IntersectSegmentRanges(void)

undefined8
`anonymous_namespace'::IntersectSegmentRanges(char *param_1,char *param_2,longlong *param_3)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  char cVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  int *piVar15;
  undefined1 local_res8 [8];
  int local_48;
  int local_44;
  char local_40 [4];
  int local_3c;
  int *local_38;
  char *local_30;
  
  cVar3 = *param_1;
  if ((((cVar3 == '\x02') || (param_1[8] == '\x02')) ||
      ((*(int *)(param_1 + 4) <= *(int *)(param_1 + 0xc) &&
       ((*(int *)(param_1 + 4) != *(int *)(param_1 + 0xc) ||
        ((cVar3 != '\0' && (param_1[8] != '\0')))))))) &&
     (((cVar13 = *param_2, cVar13 == '\x02' || (param_2[8] == '\x02')) ||
      ((*(int *)(param_2 + 4) <= *(int *)(param_2 + 0xc) &&
       ((*(int *)(param_2 + 4) != *(int *)(param_2 + 0xc) ||
        ((cVar13 != '\0' && (param_2[8] != '\0')))))))))) {
    pcVar9 = param_1 + 8;
    pcVar1 = param_2 + 8;
    pcVar4 = pcVar1;
    if ((param_1[8] != '\x02') && (pcVar4 = pcVar9, *pcVar1 != '\x02')) {
      if (((*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xc)) &&
          (pcVar4 = pcVar1, *(int *)(param_1 + 0xc) <= *(int *)(param_2 + 0xc))) &&
         (param_1[8] == '\0')) {
        pcVar4 = pcVar9;
      }
    }
    pcVar9 = param_2;
    local_48._0_1_ = cVar13;
    if ((cVar3 != '\x02') && (pcVar9 = param_1, local_48._0_1_ = cVar3, cVar13 != '\x02')) {
      if ((*(int *)(param_1 + 4) <= *(int *)(param_2 + 4)) &&
         ((pcVar9 = param_2, local_48._0_1_ = cVar13, *(int *)(param_2 + 4) <= *(int *)(param_1 + 4)
          && (cVar3 == '\0')))) {
        pcVar9 = param_1;
        local_48._0_1_ = '\0';
      }
    }
    local_40[0] = *pcVar4;
    local_44 = *(int *)(pcVar9 + 4);
    local_3c = *(int *)(pcVar4 + 4);
    if ((((char)local_48 == '\x02') || (local_40[0] == '\x02')) ||
       ((local_44 <= local_3c &&
        ((local_44 != local_3c || (((char)local_48 != '\0' && (local_40[0] != '\0')))))))) {
      piVar15 = *(int **)(param_1 + 0x48);
      if (*(int **)(param_1 + 0x48) == (int *)0x0) {
        piVar15 = (int *)(param_1 + 0x18);
      }
      piVar2 = piVar15 + (longlong)*(int *)(param_1 + 0x50) * 3;
      do {
        if (piVar15 == piVar2) {
          return 1;
        }
        if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
          plVar5 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar5 = param_3 + 7;
          }
          iVar12 = *(int *)((longlong)plVar5 +
                           ((longlong)(int)param_3[9] - 1U & (longlong)*piVar15) * 4);
          if (iVar12 != -1) {
            do {
              piVar7 = (int *)((longlong)iVar12 * 0x1c + *param_3);
              if (*piVar7 == *piVar15) {
                if (iVar12 != -1) goto LAB_141f57241;
                break;
              }
              iVar12 = piVar7[5];
            } while (iVar12 != -1);
          }
        }
        piVar7 = (int *)0x0;
LAB_141f57241:
        piVar6 = piVar7 + 1;
        if (piVar7 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        if (piVar6 == (int *)0x0) {
          local_30 = (char *)&local_48;
          local_38 = piVar15;
          FUN_141f32160(param_3,local_res8,&local_38,0);
        }
        else {
          cVar3 = (char)*piVar6;
          cVar13 = (char)local_48;
          if (cVar3 == '\x02') {
LAB_141f572b8:
            if (((char)local_48 == '\x02') ||
               ((local_40[0] == '\x02' ||
                ((local_44 <= local_3c &&
                 ((local_44 != local_3c || (((char)local_48 != '\0' && (local_40[0] != '\0')))))))))
               ) {
              piVar10 = piVar7 + 3;
              if (piVar7 == (int *)0x0) {
                piVar10 = (int *)&DAT_00000008;
              }
              piVar7 = piVar10;
              if ((char)*piVar10 != '\x02') {
                if (local_40[0] == '\x02') {
                  piVar7 = (int *)local_40;
                }
                else if (((piVar10[1] <= local_3c) &&
                         (piVar7 = (int *)local_40, local_3c <= piVar10[1])) &&
                        ((char)*piVar10 == '\x01')) {
                  piVar7 = piVar10;
                }
              }
              piVar8 = piVar6;
              if (cVar3 == '\x02') {
                cVar13 = '\x02';
              }
              else if ((char)local_48 == '\x02') {
LAB_141f57342:
                piVar8 = &local_48;
                cVar13 = (char)local_48;
              }
              else {
                cVar13 = cVar3;
                if (local_44 <= piVar6[1]) {
                  if ((local_44 < piVar6[1]) || (cVar3 != '\x01')) goto LAB_141f57342;
                  cVar13 = '\x01';
                }
              }
              iVar12 = piVar8[1];
              cVar11 = (char)*piVar7;
              iVar14 = piVar7[1];
            }
            else {
              piVar10 = piVar7 + 3;
              if (piVar7 == (int *)0x0) {
                piVar10 = (int *)&DAT_00000008;
              }
              cVar11 = (char)*piVar10;
              iVar12 = piVar6[1];
              iVar14 = piVar10[1];
              cVar13 = (char)*piVar6;
            }
          }
          else {
            piVar10 = piVar6 + 2;
            if (((char)piVar6[2] == '\x02') ||
               ((cVar11 = local_40[0], iVar12 = local_44, iVar14 = local_3c, piVar6[1] <= piVar6[3]
                && ((piVar6[1] != piVar6[3] || ((cVar3 != '\0' && ((char)piVar6[2] != '\0'))))))))
            goto LAB_141f572b8;
          }
          *(char *)piVar6 = cVar13;
          piVar6[1] = iVar12;
          *(char *)piVar10 = cVar11;
          piVar10[1] = iVar14;
        }
        piVar15 = piVar15 + 3;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 141f573d0 Invalidate body=212 status=ok
// SIG undefined Invalidate(void)

void FMovieSceneEvaluationField::Invalidate(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  char local_18 [4];
  int local_14;
  char local_10;
  int local_c;
  
  local_28[0] = *param_2;
  local_24 = *(undefined4 *)(param_2 + 4);
  local_20 = param_2[8];
  local_1c = *(undefined4 *)(param_2 + 0xc);
  FUN_141f5a590(param_1,local_18,local_28);
  if (((local_18[0] == '\x02') || (local_10 == '\x02')) ||
     ((local_14 <= local_c &&
      ((local_14 != local_c || ((local_18[0] != '\0' && (local_10 != '\0')))))))) {
    iVar3 = local_c - local_14;
    if (iVar3 != 0) {
      iVar1 = (int)param_1[1];
      iVar2 = (iVar1 - local_14) - iVar3;
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_14 * 0x10 + *param_1),
                   (void *)((longlong)(local_14 + iVar3) * 0x10 + *param_1),(longlong)iVar2 << 4);
        iVar1 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar1 - iVar3;
    }
    TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::RemoveAtImpl(param_1 + 2,local_14,iVar3,0)
    ;
    TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 4,local_14,iVar3,0);
  }
  return;
}



// FUNCTION 141f574b0 Invalidate body=156 status=ok
// SIG undefined Invalidate(void)

void FMovieSceneEvaluationState::Invalidate(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar2 = param_1 + 0xd8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)*param_3) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0xa0));
        if (*piVar4 == *param_3) {
          if (iVar1 != -1) goto LAB_141f57529;
          break;
        }
        iVar1 = piVar4[0x2e];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_141f57529:
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    FMovieSceneObjectCache::Invalidate(piVar3);
  }
  return;
}



// FUNCTION 141f57550 Invalidate body=233 status=ok
// SIG undefined Invalidate(void)

undefined1 * FMovieSceneObjectCache::Invalidate(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x10,local_res8,param_2);
  puVar4 = (undefined1 *)0x0;
  puVar1 = puVar4;
  if (local_res8[0] != -1) {
    puVar1 = (undefined1 *)((longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x10));
  }
  puVar2 = puVar1 + 0x10;
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = puVar4;
  }
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x60,local_res8,param_2);
    puVar1 = puVar4;
    if (local_res8[0] != -1) {
      puVar1 = (undefined1 *)((longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0x60));
    }
    puVar2 = puVar1 + 0x10;
    if (puVar1 == (undefined1 *)0x0) {
      puVar2 = puVar4;
    }
    if (puVar2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)-*(longlong *)(puVar2 + 0x40);
      uVar3 = (ulonglong)(*(longlong *)(puVar2 + 0x40) != 0) - 1 & (ulonglong)puVar2 |
              *(ulonglong *)(puVar2 + 0x40);
      uVar5 = (longlong)*(int *)(puVar2 + 0x48) * 0x10 + uVar3;
      for (; uVar3 != uVar5; uVar3 = uVar3 + 0x10) {
        puVar1 = (undefined1 *)Invalidate(param_1,uVar3);
      }
    }
  }
  return puVar1;
}



// FUNCTION 141f57640 InvalidateExpiredObjects body=510 status=ok
// SIG undefined InvalidateExpiredObjects(void)

void FMovieSceneEvaluationState::InvalidateExpiredObjects(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0xa0);
  uVar3 = *(uint *)(param_1 + 200);
  puVar1 = (uint *)(param_1 + 0xb0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar4 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_141f5770d;
      uVar4 = puVar10[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141f5770d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 200);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_141f577d3;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141f577d3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_141f57840((longlong)(int)uStack_4c * 0xc0 + *plVar2 + 8);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141f57840 FUN_141f57840 body=678 status=ok
// SIG undefined FUN_141f57840(void)

void FUN_141f57840(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 local_98;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar7 = (longlong *)(param_1 + 0x10);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uVar3 = *(uint *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x20);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = (int)local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar11;
      if (bVar5) goto LAB_141f57910;
      uVar4 = puVar13[lVar8 + 1];
    }
    local_98._4_4_ = -uVar4 & uVar4;
    iVar11 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (iStack_80 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141f57910:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar4 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar12 = uVar4 & 0xffffffe0;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  puStack_90 = puVar2;
  uStack_84 = uVar4;
  local_68 = puVar2;
  local_50 = plVar7;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  local_78 = plVar7;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar9 = puVar13[(int)uVar4 >> 5] & local_88;
    iVar11 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_141f579d4;
      uVar9 = puVar13[(longlong)iVar11 + 1];
      local_88 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar11 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar12 - iVar11) + 0x1f;
    uVar4 = uStack_84;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141f579d4:
      uStack_84 = uVar3;
      uVar4 = uVar3;
    }
  }
  do {
    if (((uStack_5c == uVar4) && (local_68 == puVar2)) && (local_78 == plVar7)) {
      plVar7 = (longlong *)FWeakObjectPtr::Get();
      if (plVar7 != (longlong *)0x0) {
        local_98 = 0;
        puStack_90 = (uint *)0x0;
        (**(code **)(*plVar7 + 0x290))(plVar7,param_1,&local_98);
        lVar10 = (longlong)(int)puStack_90 * 0x10 + local_98;
        for (lVar8 = local_98; lVar8 != lVar10; lVar8 = lVar8 + 0x10) {
          FMovieSceneObjectCache::Invalidate(param_1,lVar8);
        }
        if (local_98 != 0) {
          FMemory::Free(local_98);
        }
      }
      return;
    }
    lVar8 = (longlong)(int)uStack_5c * 0x38 + *local_78;
    if (*(char *)(lVar8 + 0x10) != '\0') {
      lVar10 = *(longlong *)(lVar8 + 0x20);
      if (*(longlong *)(lVar8 + 0x20) == 0) {
        lVar10 = lVar8 + 0x18;
      }
      lVar1 = lVar10 + (longlong)*(int *)(lVar8 + 0x28) * 8;
      for (; lVar10 != lVar1; lVar10 = lVar10 + 8) {
        lVar6 = FWeakObjectPtr::Get(lVar10);
        if (lVar6 == 0) {
          FMovieSceneObjectCache::Invalidate(param_1,lVar8);
          break;
        }
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 141f57af0 Inverse body=303 status=ok
// SIG undefined Inverse(void)

float * FMovieSceneSequenceTransform::Inverse(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined8 local_res8;
  
  local_res8._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  local_res8._0_4_ = (int)*(undefined8 *)(param_1 + 1);
  if (local_res8._4_4_ == 0.0) {
    local_res8._0_4_ = -(int)local_res8;
    local_res8._4_4_ = 0.0;
  }
  else {
    local_res8._0_4_ = -1 - (int)local_res8;
    fVar7 = 1.0 - local_res8._4_4_;
    if (0.0 <= fVar7) {
      local_res8._4_4_ = 0.99999994;
      if (fVar7 <= 0.99999994) {
        local_res8._4_4_ = fVar7;
      }
    }
    else {
      local_res8._4_4_ = 0.0;
    }
  }
  fVar7 = *param_1;
  dVar8 = ((double)(int)local_res8 + (double)local_res8._4_4_) / (double)fVar7;
  lVar5 = (longlong)dVar8;
  dVar2 = dVar8;
  if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar8)) {
    auVar1._8_4_ = SUB84(dVar8,0);
    auVar1._0_8_ = dVar8;
    auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    uVar4 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar5 - (ulonglong)(uVar4 & 1));
  }
  dVar8 = dVar8 - dVar2;
  dVar3 = 0.0;
  if ((0.0 <= dVar8) && (dVar3 = 0.9999999403953552, dVar8 <= 0.9999999403953552)) {
    dVar3 = dVar8;
  }
  fVar6 = (float)dVar3;
  if (0.0 <= fVar6) {
    if (0.99999994 <= fVar6) {
      fVar6 = 0.99999994;
    }
    local_res8 = CONCAT44(fVar6,(int)dVar2);
  }
  else {
    local_res8 = (ulonglong)(uint)(int)dVar2;
  }
  *(ulonglong *)(param_2 + 1) = local_res8;
  *param_2 = 1.0 / fVar7;
  return param_2;
}



// FUNCTION 141f57c20 IsDirty body=1649 status=ok
// SIG undefined IsDirty(void)

undefined1
FMovieSceneEvaluationMetaData::IsDirty
          (longlong param_1,longlong *param_2,longlong *param_3,char *param_4,longlong param_5)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  char cVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8;
  char local_128 [4];
  int local_124;
  char local_120 [4];
  int local_11c;
  char local_118 [4];
  int local_114;
  char local_110;
  int local_10c;
  longlong *local_108;
  char local_100 [4];
  int local_fc;
  char local_f8 [4];
  int local_f4;
  int local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  char local_d0 [4];
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  int *local_b8;
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [12];
  undefined1 local_54 [28];
  
  uStack_ec = 1;
  local_res8 = 0;
  local_b0 = (longlong *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x48);
  puStack_e8 = (uint *)(param_1 + 0x30);
  local_108 = local_b0;
  local_f0 = 0;
  local_e0 = 0xffffffff;
  uStack_dc = 0;
  iStack_d8 = 0;
  if (uVar2 != 0) {
    puVar19 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar19 = puStack_e8;
    }
    uVar20 = *puVar19;
    iStack_d8 = 0;
    iVar15 = 0;
    while (uVar20 == 0) {
      iStack_d8 = iStack_d8 + 0x20;
      local_f0 = iVar15 + 1;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar15)
      goto LAB_141f57cff;
      uVar20 = puVar19[(longlong)iVar15 + 1];
      local_e0 = 0xffffffff;
      iVar15 = iVar15 + 1;
    }
    uStack_ec = -uVar20 & uVar20;
    iVar4 = 0x1f;
    if (uStack_ec != 0) {
      for (; uStack_ec >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_ec == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_dc = (iStack_d8 - iVar4) + 0x1f;
    local_f0 = iVar15;
    if ((int)uVar2 < (int)uStack_dc) {
LAB_141f57cff:
      uStack_dc = uVar2;
    }
  }
  local_e0 = 0xffffffff;
  uVar20 = *(uint *)(param_1 + 0x48);
  local_88 = local_b0;
  uStack_80 = CONCAT44(uStack_ec,local_f0);
  puStack_78 = puStack_e8;
  uVar10 = uVar20 & 0xffffffe0;
  uStack_70 = CONCAT44(uStack_dc,0xffffffff);
  uStack_68 = CONCAT44(uStack_d4,iStack_d8);
  local_90 = CONCAT44(uStack_d4,iStack_d8);
  iStack_a8 = local_f0;
  uStack_a4 = uStack_ec;
  local_a0 = puStack_e8;
  uStack_98 = CONCAT44(uStack_dc,0xffffffff);
  if (uVar20 != uVar2) {
    puVar19 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar19 = puStack_e8;
    }
    uVar12 = puVar19[(int)uVar20 >> 5] & -1 << ((byte)uVar20 & 0x1f);
    iVar15 = (int)uVar20 >> 5;
    while (uVar12 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar15)
      goto LAB_141f57db6;
      uVar12 = puVar19[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar15 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uVar20 = (uVar10 - iVar15) + 0x1f;
    if ((int)uVar2 < (int)uVar20) {
LAB_141f57db6:
      uVar20 = uVar2;
    }
  }
  do {
    if (((uStack_98._4_4_ == uVar20) && (local_a0 == puStack_e8)) && (local_b0 == local_108)) {
      return local_res8;
    }
    piVar17 = (int *)((longlong)(int)uStack_98._4_4_ * 0x10 + *local_b0);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      iVar15 = *piVar17;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_2[9] - 1U & (longlong)iVar15) * 4);
      if (iVar4 != -1) {
        do {
          piVar11 = (int *)((longlong)iVar4 * 0xb8 + *param_2);
          if (*piVar11 == iVar15) {
            if (iVar4 != -1) goto LAB_141f57e5c;
            break;
          }
          iVar4 = piVar11[0x2c];
        } while (iVar4 != -1);
      }
    }
    piVar11 = (int *)0x0;
LAB_141f57e5c:
    piVar6 = (int *)0x0;
    piVar16 = piVar11 + 2;
    if (piVar11 == (int *)0x0) {
      piVar16 = piVar6;
    }
    if (piVar16 != (int *)0x0) {
      piVar6 = (int *)FMovieSceneSubSequenceData::GetSequence(piVar16);
    }
    local_b8 = piVar6;
    if (piVar6 == (int *)0x0) {
LAB_141f57ee8:
      local_res8 = 1;
      if (param_4 != (char *)0x0) {
        if (piVar16 == (int *)0x0) {
          local_d0[0] = '\x02';
          local_cc = 0;
          pcVar9 = local_d0;
          local_c4 = 0;
          cVar3 = '\x02';
          local_c8 = 2;
        }
        else {
          local_128[0] = (char)piVar16[0x10];
          piVar17 = piVar16 + 0x10;
          if (((local_128[0] == '\x02') || ((char)piVar16[0x12] == '\x02')) ||
             ((piVar16[0x11] <= piVar16[0x13] &&
              ((piVar16[0x11] != piVar16[0x13] ||
               ((local_128[0] != '\0' && ((char)piVar16[0x12] != '\0')))))))) {
            cVar3 = (char)piVar16[0xc];
            if (((cVar3 == '\x02') || ((char)piVar16[0xe] == '\x02')) ||
               ((piVar16[0xd] <= piVar16[0xf] &&
                ((piVar16[0xd] != piVar16[0xf] || ((cVar3 != '\0' && ((char)piVar16[0xe] != '\0'))))
                )))) {
              piVar11 = piVar16 + 0x12;
              piVar6 = piVar16 + 0xe;
              piVar13 = piVar11;
              if (((char)piVar16[0x12] != '\x02') && (piVar13 = piVar6, (char)*piVar6 != '\x02')) {
                piVar13 = piVar11;
                if (((piVar16[0x13] <= piVar16[0xf]) &&
                    (piVar13 = piVar6, piVar16[0xf] <= piVar16[0x13])) &&
                   ((char)piVar16[0x12] == '\x01')) {
                  piVar13 = piVar11;
                }
              }
              if (local_128[0] != '\x02') {
                if (cVar3 != '\x02') {
                  if ((piVar16[0x11] < piVar16[0xd]) ||
                     ((piVar16[0x11] <= piVar16[0xd] && (local_128[0] == '\x01'))))
                  goto LAB_141f57fd5;
                }
                piVar17 = piVar16 + 0xc;
                local_128[0] = cVar3;
              }
LAB_141f57fd5:
              local_114 = piVar17[1];
              local_10c = piVar13[1];
              local_110 = (char)*piVar13;
            }
            else {
              local_114 = piVar16[0x11];
              local_110 = (char)piVar16[0x12];
              local_10c = piVar16[0x13];
            }
          }
          else {
            local_128[0] = (char)piVar16[0xc];
            local_114 = piVar16[0xd];
            local_110 = (char)piVar16[0xe];
            local_10c = piVar16[0xf];
          }
          piVar17 = piVar16 + 0x14;
          local_124 = local_114;
          local_120[0] = local_110;
          local_11c = local_10c;
          if (((local_128[0] == '\x02') || (local_110 == '\x02')) ||
             ((local_114 <= local_10c &&
              ((local_114 != local_10c || ((local_128[0] != '\0' && (local_110 != '\0')))))))) {
            cVar3 = (char)*piVar17;
            if (((cVar3 == '\x02') || ((char)piVar16[0x16] == '\x02')) ||
               ((local_118[0] = local_128[0], piVar16[0x15] <= piVar16[0x17] &&
                ((piVar16[0x15] != piVar16[0x17] ||
                 ((cVar3 != '\0' && ((char)piVar16[0x16] != '\0')))))))) {
              piVar11 = piVar16 + 0x16;
              if (local_110 == '\x02') {
                piVar6 = (int *)local_120;
              }
              else {
                piVar6 = piVar11;
                if ((char)*piVar11 != '\x02') {
                  if (piVar16[0x17] < local_10c) {
                    piVar6 = (int *)local_120;
                  }
                  else if ((piVar16[0x17] <= local_10c) &&
                          (piVar6 = (int *)local_120, local_110 != '\x01')) {
                    piVar6 = piVar11;
                  }
                }
              }
              if (local_128[0] == '\x02') {
                piVar17 = (int *)local_128;
                cVar3 = local_128[0];
              }
              else if (cVar3 != '\x02') {
                if (local_114 < piVar16[0x15]) {
                  piVar17 = (int *)local_128;
                  cVar3 = local_128[0];
                }
                else if ((local_114 <= piVar16[0x15]) && (local_128[0] == '\x01')) {
                  piVar17 = (int *)local_128;
                  cVar3 = local_128[0];
                }
              }
              local_118[0] = cVar3;
              local_114 = piVar17[1];
              local_110 = (char)*piVar6;
              local_10c = piVar6[1];
            }
          }
          else {
            local_118[0] = (char)*piVar17;
            local_114 = piVar16[0x15];
            local_110 = (char)piVar16[0x16];
            local_10c = piVar16[0x17];
          }
          uVar8 = FMovieSceneSequenceTransform::Inverse(piVar16 + 6,local_60);
          pcVar9 = (char *)operator*(local_54,local_118,uVar8);
          cVar3 = *pcVar9;
        }
        cVar18 = pcVar9[8];
        iVar15 = *(int *)(pcVar9 + 4);
        iVar4 = *(int *)(pcVar9 + 0xc);
        cVar1 = *param_4;
        local_100[0] = cVar3;
        local_fc = iVar15;
        local_f8[0] = cVar18;
        local_f4 = iVar4;
        if (((cVar1 == '\x02') || (param_4[8] == '\x02')) ||
           ((*(int *)(param_4 + 4) <= *(int *)(param_4 + 0xc) &&
            ((*(int *)(param_4 + 4) != *(int *)(param_4 + 0xc) ||
             ((cVar1 != '\0' && (param_4[8] != '\0')))))))) {
          pcVar9 = param_4 + 8;
          if (((cVar3 == '\x02') || (cVar18 == '\x02')) ||
             ((iVar15 <= iVar4 && ((iVar15 != iVar4 || ((cVar3 != '\0' && (cVar18 != '\0')))))))) {
            pcVar14 = pcVar9;
            if (*pcVar9 != '\x02') {
              if (cVar18 == '\x02') {
                pcVar14 = local_f8;
              }
              else if (((*(int *)(param_4 + 0xc) <= iVar4) &&
                       (pcVar14 = local_f8, iVar4 <= *(int *)(param_4 + 0xc))) &&
                      (*pcVar9 == '\x01')) {
                pcVar14 = pcVar9;
              }
            }
            pcVar9 = param_4;
            if ((cVar1 != '\x02') &&
               ((cVar3 == '\x02' ||
                ((iVar15 <= *(int *)(param_4 + 4) &&
                 ((iVar15 < *(int *)(param_4 + 4) || (cVar1 != '\x01')))))))) {
              pcVar9 = local_100;
              cVar1 = cVar3;
            }
            cVar3 = cVar1;
            cVar18 = *pcVar14;
            iVar4 = *(int *)(pcVar14 + 4);
            iVar15 = *(int *)(pcVar9 + 4);
          }
          else {
            iVar15 = *(int *)(param_4 + 4);
            cVar18 = *pcVar9;
            iVar4 = *(int *)(param_4 + 0xc);
            cVar3 = cVar1;
          }
        }
        *param_4 = cVar3;
        *(int *)(param_4 + 4) = iVar15;
        param_4[8] = cVar18;
        *(int *)(param_4 + 0xc) = iVar4;
      }
    }
    else {
      lVar7 = (**(code **)(*param_3 + 8))(param_3,piVar6);
      if ((*(int *)(lVar7 + 0x180) != piVar17[1]) ||
         (((*(int *)(lVar7 + 0x17c) != piVar6[0xd] || *(int *)(lVar7 + 0x178) != piVar6[0xc]) ||
          *(int *)(lVar7 + 0x174) != piVar6[0xb]) || *(int *)(lVar7 + 0x170) != piVar6[10])) {
        if (param_5 != 0) {
          FUN_14058cbf0(param_5,local_c0,&local_b8,0);
        }
        goto LAB_141f57ee8;
      }
    }
    uStack_98 = CONCAT44(uStack_98._4_4_,(uint)uStack_98 & ~uStack_a4);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
  } while( true );
}



// FUNCTION 141f582a0 IsEmpty body=42 status=ok
// SIG undefined IsEmpty(void)

ulonglong TRange<FFrameNumber>::IsEmpty(char *param_1)

{
  ulonglong in_RAX;
  
  if (*param_1 != '\x02') {
    in_RAX = 0;
    if ((param_1[8] != '\x02') &&
       ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 4) ||
        ((*(int *)(param_1 + 4) == *(int *)(param_1 + 0xc) &&
         ((*param_1 == '\0' || (param_1[8] == '\0')))))))) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141f582d0 IsEmpty body=101 status=ok
// SIG undefined IsEmpty(void)

ulonglong TRange<FFrameTime>::IsEmpty(char *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  int iVar2;
  float fStackX_c;
  float fStackX_14;
  
  if ((*param_1 != '\x02') && (param_1[0xc] != '\x02')) {
    in_RAX = *(ulonglong *)(param_1 + 0x10);
    iVar1 = (int)in_RAX;
    iVar2 = (int)*(undefined8 *)(param_1 + 4);
    if ((iVar2 <= iVar1) &&
       ((fStackX_14 = (float)(in_RAX >> 0x20),
        fStackX_c = (float)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20), iVar2 != iVar1 ||
        (fStackX_c <= fStackX_14)))) {
      if ((iVar2 != iVar1) ||
         ((fStackX_c != fStackX_14 || ((*param_1 != '\0' && (param_1[0xc] != '\0'))))))
      goto LAB_141f58332;
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_141f58332:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141f58340 IsPaused body=11 status=ok
// SIG undefined IsPaused(void)

bool UMovieSceneSequencePlayer::IsPaused(longlong param_1)

{
  return *(char *)(param_1 + 0x3c8) == '\x06';
}



// FUNCTION 141f58350 IsPlaying body=11 status=ok
// SIG undefined IsPlaying(void)

bool UMovieSceneSequencePlayer::IsPlaying(longlong param_1)

{
  return *(char *)(param_1 + 0x3c8) == '\x01';
}



// FUNCTION 141f58360 FUN_141f58360 body=10 status=ok
// SIG undefined FUN_141f58360(void)

byte FUN_141f58360(longlong param_1)

{
  return *(byte *)(param_1 + 0x3cc) & 1;
}



// FUNCTION 141f58370 Iter body=821 status=ok
// SIG undefined Iter(void)

void FMovieSceneEvaluationTreeRangeIterator::Iter(char *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char local_res8 [4];
  int local_resc;
  char local_res18 [4];
  int local_res1c;
  undefined8 local_res20;
  
  iVar2 = local_resc;
  iVar11 = local_resc;
  iVar10 = local_resc;
  while( true ) {
    if ((*(int *)(param_1 + 0x10) == -1) && (*(int *)(param_1 + 0x14) != 0)) {
      return;
    }
    pcVar6 = *(char **)(param_1 + 0x18);
    iVar7 = (int)*(undefined8 *)(param_1 + 0x10);
    if (iVar7 != -1) {
      pcVar6 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar6 + 0x20) + (longlong)iVar7 * 0xc) +
                        (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) * 0x20
                       + *(longlong *)(pcVar6 + 0x30));
    }
    iVar7 = *(int *)(param_1 + 4);
    iVar8 = *(int *)(param_1 + 0xc);
    iVar1 = iVar7;
    if (param_2 != '\0') {
      local_resc = iVar8;
      iVar1 = iVar11;
    }
    iVar11 = iVar1;
    cVar9 = *param_1;
    if (param_2 == '\0') {
      iVar10 = *(int *)(pcVar6 + 4);
      iVar1 = iVar11;
    }
    else {
      iVar2 = *(int *)(pcVar6 + 0xc);
      iVar1 = local_resc;
      cVar9 = param_1[8];
    }
    cVar12 = pcVar6[8];
    if (param_2 == '\0') {
      cVar12 = *pcVar6;
    }
    if (cVar12 != cVar9) break;
    if (cVar12 != '\x02') {
      iVar4 = iVar2;
      if (param_2 == '\0') {
        iVar4 = iVar10;
      }
      if (iVar4 != iVar1) break;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pcVar6 + 0x10);
  }
  if (((*param_1 == '\x02') || (param_1[8] == '\x02')) ||
     ((iVar7 <= iVar8 && ((iVar7 != iVar8 || ((*param_1 != '\0' && (param_1[8] != '\0')))))))) {
    if (param_2 == '\0') {
      iVar8 = iVar7;
    }
    if (cVar9 == '\0') {
      cVar9 = '\x01';
    }
    else if (cVar9 == '\x01') {
      cVar9 = '\0';
    }
  }
  else {
    cVar9 = '\x02';
    iVar8 = 0;
  }
  local_res8[0] = cVar9;
  local_resc = iVar8;
  local_res18[0] = cVar9;
  local_res1c = iVar8;
  FindNextChild(param_1,&local_res20,*(undefined8 *)(param_1 + 0x10),local_res8,param_2);
  while( true ) {
    iVar2 = (int)local_res20;
    iVar10 = (int)((ulonglong)local_res20 >> 0x20);
    if ((iVar2 == -1) && (iVar10 != 0)) break;
    pcVar6 = *(char **)(param_1 + 0x18);
    pcVar5 = pcVar6;
    if (iVar2 != -1) {
      pcVar5 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar6 + 0x20) + (longlong)iVar2 * 0xc) +
                        (longlong)iVar10) * 0x20 + *(longlong *)(pcVar6 + 0x30));
    }
    if (param_2 == '\0') {
      if (pcVar5[8] != cVar9) goto LAB_141f5856a;
      if (pcVar5[8] != '\x02') {
        iVar11 = *(int *)(pcVar5 + 0xc);
        goto LAB_141f58535;
      }
    }
    else {
      if (*pcVar5 != cVar9) goto LAB_141f5856a;
      if (*pcVar5 != '\x02') {
        iVar11 = *(int *)(pcVar5 + 4);
LAB_141f58535:
        if (iVar11 != iVar8) goto LAB_141f5856a;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = local_res20;
    local_res8[0] = cVar9;
    local_resc = iVar8;
    puVar3 = (undefined8 *)FindNextChild(param_1,&local_res20,local_res20,local_res8,param_2);
    local_res20 = *puVar3;
  }
  pcVar6 = *(char **)(param_1 + 0x18);
LAB_141f5856a:
  iVar11 = (int)*(undefined8 *)(param_1 + 0x10);
  pcVar5 = pcVar6;
  if (iVar11 != -1) {
    pcVar5 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar6 + 0x20) + (longlong)iVar11 * 0xc) +
                      (longlong)(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20)) * 0x20 +
                     *(longlong *)(pcVar6 + 0x30));
  }
  local_res8[0] = pcVar5[8];
  if (param_2 == '\0') {
    local_res8[0] = *pcVar5;
  }
  local_resc = *(undefined4 *)(pcVar5 + 0xc);
  if (param_2 == '\0') {
    local_resc = *(undefined4 *)(pcVar5 + 4);
  }
  if (iVar2 == -1) {
    if (iVar10 != 0) goto LAB_141f58654;
  }
  else {
    pcVar6 = (char *)(((longlong)*(int *)(*(longlong *)(pcVar6 + 0x20) + (longlong)iVar2 * 0xc) +
                      (longlong)iVar10) * 0x20 + *(longlong *)(pcVar6 + 0x30));
  }
  local_resc = *(int *)(pcVar6 + 0xc);
  cVar12 = pcVar6[8];
  if (param_2 != '\0') {
    cVar12 = *pcVar6;
    local_resc = *(int *)(pcVar6 + 4);
  }
  if ((cVar12 != cVar9) || ((cVar12 != '\x02' && (local_resc != iVar8)))) {
    local_res8[0] = *pcVar6;
    if (param_2 == '\0') {
      local_res8[0] = pcVar6[8];
    }
    if (local_res8[0] == '\0') {
      local_res8[0] = '\x01';
    }
    else if (local_res8[0] == '\x01') {
      local_res8[0] = '\0';
    }
  }
LAB_141f58654:
  pcVar5 = local_res18;
  pcVar6 = local_res8;
  if (param_2 == '\0') {
    pcVar5 = local_res8;
    pcVar6 = local_res18;
  }
  *param_1 = *pcVar5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pcVar5 + 4);
  param_1[8] = *pcVar6;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(pcVar6 + 4);
  return;
}



// FUNCTION 141f586b0 IterateBoundObjects body=138 status=ok
// SIG undefined IterateBoundObjects(void)

longlong * FMovieSceneObjectCache::IterateBoundObjects(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int local_res8 [2];
  
  TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x10),local_res8);
  pcVar1 = (char *)0x0;
  if (local_res8[0] != -1) {
    pcVar1 = (char *)((longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x10));
  }
  pcVar2 = pcVar1 + 0x10;
  if (pcVar1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    pcVar1 = *(char **)(pcVar2 + 0x10);
    if (*(char **)(pcVar2 + 0x10) == (char *)0x0) {
      pcVar1 = pcVar2 + 8;
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pcVar2 + 0x18);
    *param_2 = (longlong)pcVar1;
    return param_2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141f58740 FUN_141f58740 body=139 status=ok
// SIG undefined FUN_141f58740(void)

/* WARNING: Removing unreachable block (ram,0x000141f587a7) */

void FUN_141f58740(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_141f68430(param_1,param_2,1);
  local_18 = *(longlong *)(param_1 + 0x774);
  uStack_10 = *(undefined8 *)(param_1 + 0x760);
  plVar1 = *(longlong **)(param_1 + 0x430);
  if ((char)plVar1[3] != '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
    if ((char)plVar1[3] != '\0') {
      *(undefined1 *)(plVar1 + 3) = 0;
    }
    if (&local_18 != plVar1 + 1) {
      *(undefined4 *)(plVar1 + 1) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_18._4_4_;
      *(undefined4 *)(plVar1 + 2) = (undefined4)uStack_10;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_10._4_4_;
      *(undefined1 *)(plVar1 + 3) = 1;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
  }
  return;
}



// FUNCTION 141f587d0 FUN_141f587d0 body=194 status=ok
// SIG undefined FUN_141f587d0(void)

void FUN_141f587d0(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  dVar6 = ((double)(int)*(undefined8 *)(param_1 + 0x760) * (double)param_2) /
          (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  lVar4 = (longlong)dVar6;
  dVar2 = dVar6;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar6)) {
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar6;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  dVar6 = dVar6 - dVar2;
  dVar7 = dVar6;
  if ((0.0 < dVar6) && (dVar7 = 0.9999999403953552, dVar6 <= 0.9999999403953552)) {
    dVar7 = dVar6;
  }
  fVar8 = (float)dVar7;
  if (0.0 <= fVar8) {
    fVar5 = 0.99999994;
    if (fVar8 <= 0.99999994) {
      fVar5 = fVar8;
    }
    FUN_141f58740(param_1,CONCAT44(fVar5,(int)dVar2));
    return;
  }
  FUN_141f58740(param_1,(int)dVar2);
  return;
}



// FUNCTION 141f588a0 LocateBoundObjects body=671 status=ok
// SIG undefined LocateBoundObjects(void)

undefined4
UMovieSceneBindingOverrides::LocateBoundObjects
          (longlong param_1,int *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_res8 [2];
  int local_48;
  int iStack_44;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 0x20);
    local_res8[0] = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
        Emplace<FGuid_const_&,int_const_&>
                  (param_1 + 0x20,*(longlong *)(param_1 + 8) + ((longlong)local_res8[0] * 9 + 2) * 4
                   ,local_res8);
        local_res8[0] = local_res8[0] + 1;
      } while (local_res8[0] < *(int *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar8 = 1;
  local_48 = -1;
  iStack_44 = -1;
  TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54),0);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar3 = FCrc::MemCrc_DEPRECATED(param_2,0x10,0);
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar4 = param_1 + 0x58;
    }
    iStack_44 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)iVar3) * 4);
    local_48 = iStack_44;
    if (iStack_44 != -1) {
      do {
        piVar7 = (int *)((longlong)local_48 * 0x1c + *plVar1);
        iStack_44 = piVar7[5];
        if (((piVar7[1] == param_2[1] && piVar7[2] == param_2[2]) && piVar7[3] == param_2[3]) &&
            *piVar7 == *param_2) break;
        local_48 = iStack_44;
      } while (iStack_44 != -1);
    }
  }
  if (local_48 == -1) {
    uVar8 = 1;
  }
  else {
    do {
      lVar6 = (longlong)*(int *)((longlong)local_48 * 0x1c + 0x10 + *plVar1);
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(int *)(lVar4 + lVar6 * 0x24) == param_3) {
        lVar5 = FWeakObjectPtr::Get();
        uVar2 = 0;
        if (*(char *)(lVar4 + lVar6 * 0x24 + 0x20) == '\0') {
          uVar2 = uVar8;
        }
        uVar8 = uVar2;
        if (lVar5 != 0) {
          iVar3 = *(int *)(param_4 + 0x10);
          *(int *)(param_4 + 0x10) = iVar3 + 1;
          if (*(int *)(param_4 + 0x14) < iVar3 + 1) {
            FUN_1407eebb0(param_4,iVar3);
          }
          lVar4 = *(longlong *)(param_4 + 8);
          if (*(longlong *)(param_4 + 8) == 0) {
            lVar4 = param_4;
          }
          *(longlong *)(lVar4 + (longlong)iVar3 * 8) = lVar5;
        }
      }
      if (iStack_44 == -1) {
        return uVar8;
      }
      lVar4 = *plVar1;
      local_48 = iStack_44;
      do {
        lVar6 = (longlong)local_48 * 0x1c;
        iStack_44 = *(int *)(lVar6 + 0x14 + lVar4);
        if (((*(int *)(lVar6 + 4 + lVar4) == param_2[1] && *(int *)(lVar6 + 8 + lVar4) == param_2[2]
             ) && *(int *)(lVar6 + 0xc + lVar4) == param_2[3]) &&
            *(int *)(lVar6 + lVar4) == *param_2) break;
        local_48 = iStack_44;
      } while (iStack_44 != -1);
    } while (local_48 != -1);
  }
  return uVar8;
}



// FUNCTION 141f58b40 LocateBoundObjects body=83 status=ok
// SIG undefined LocateBoundObjects(void)

void UMovieSceneSequence::LocateBoundObjects(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x3b
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::LocateBoundObjects");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSequence.h",0x3b
             ,L"Pure virtual not implemented (%s)",L"UMovieSceneSequence::LocateBoundObjects");
  return;
}



// FUNCTION 141f58ba0 FUN_141f58ba0 body=361 status=ok
// SIG undefined FUN_141f58ba0(void)

undefined8 *
FUN_141f58ba0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = (longlong *)param_1[1];
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
          plVar5 = (longlong *)*param_1;
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
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
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
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
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
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
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          plVar6 = plVar2;
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
  *param_2 = plVar5;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
  }
  param_2[2] = param_3;
  *(undefined4 *)(param_2 + 3) = param_4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return param_2;
}



// FUNCTION 141f58d10 FUN_141f58d10 body=351 status=ok
// SIG undefined FUN_141f58d10(void)

void FUN_141f58d10(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 local_28 [16];
  
  do {
    puVar8 = (undefined4 *)FGuid::NewGuid(local_28);
    bVar5 = false;
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *(undefined4 *)(param_1 + 0x28) = *puVar8;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar9 = *(int *)(param_1 + 0x4c);
    iVar7 = *(int *)(param_1 + 0x40) + -1;
    lVar10 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar12 = lVar10 << 4;
      do {
        if (((*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x38)) == 0) ||
            (plVar1 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x38)),
            plVar1 == (longlong *)0x0)) || (cVar6 = (**(code **)(*plVar1 + 0x40))(), cVar6 == '\0'))
        {
          bVar5 = true;
        }
        lVar12 = lVar12 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar9 = *(int *)(param_1 + 0x4c);
    }
    *(int *)(param_1 + 0x4c) = iVar9 + -1;
    if ((bVar5) && (iVar9 + -1 < 1)) {
      iVar9 = *(int *)(param_1 + 0x40);
      iVar11 = 0;
      iVar7 = iVar9;
      if (0 < iVar9) {
        lVar10 = 0;
        do {
          if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x38)) == 0) ||
              (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x38)),
              plVar1 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar1 + 0x10))(), cVar6 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1 + 0x38,iVar11,1,1);
          }
          else {
            iVar11 = iVar11 + 1;
            lVar10 = lVar10 + 0x10;
          }
          iVar7 = *(int *)(param_1 + 0x40);
        } while (iVar11 < iVar7);
      }
      iVar11 = iVar7 * 2;
      if (iVar11 < 3) {
        iVar11 = 2;
      }
      *(int *)(param_1 + 0x48) = iVar11;
      if ((iVar11 < iVar9) && (*(int *)(param_1 + 0x44) != iVar7)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x38);
      }
    }
    do {
      param_1 = *(longlong *)(param_1 + 0x20);
      if (param_1 == 0) {
        return;
      }
      lVar10 = UMovieSceneSignedObject::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    } while (!bVar5);
  } while( true );
}



// FUNCTION 141f58e70 MarkSpawnableTemplate body=154 status=ok
// SIG undefined MarkSpawnableTemplate(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMovieSceneSpawnable::MarkSpawnableTemplate(undefined8 param_1)

{
  BOOL BVar1;
  undefined1 local_res8 [32];
  undefined *local_18;
  undefined *local_10;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464d3ea8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464d3ea8);
  }
  DAT_1464d3ed8 = 1;
  _DAT_1464d3ed0 = param_1;
  if (DAT_1464d3e60 == DAT_1464d3e8c) {
    FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1464d3e50);
  }
  local_18 = &DAT_1464d3ed0;
  local_10 = &DAT_1464d3ed8;
  FUN_141f32430(&DAT_1464d3e58,local_res8,&local_18,0);
                    /* WARNING: Could not recover jumptable at 0x000141f58f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464d3ea8);
  return;
}



// FUNCTION 141f58f10 Modify body=61 status=ok
// SIG undefined Modify(void)

undefined1 UMovieSceneSignedObject::Modify(undefined8 param_1,char param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14175d020();
  if (param_2 != '\0') {
    FUN_141f58d10(param_1);
  }
  return uVar1;
}



// FUNCTION 141f58f50 MoveKeyInternal body=301 status=ok
// SIG undefined MoveKeyInternal(void)

int FMovieSceneChannelData::MoveKeyInternal(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  plVar1 = (longlong *)*param_1;
  lVar6 = 0;
  iVar4 = (int)plVar1[1];
  uVar5 = (ulonglong)iVar4;
  lVar2 = *plVar1;
  if (iVar4 != 0) {
    do {
      uVar7 = uVar5 >> 1;
      if (*(int *)(lVar2 + (uVar7 + lVar6) * 4) < param_3) {
        lVar6 = (ulonglong)((uint)uVar5 & 1) + uVar7 + lVar6;
      }
      uVar5 = uVar7;
    } while (uVar7 != 0);
  }
  iVar3 = (int)lVar6;
  if ((param_2 <= iVar3) && (iVar3 <= param_2 + 1)) {
    *(int *)(lVar2 + (longlong)param_2 * 4) = param_3;
    return param_2;
  }
  iVar8 = iVar3 + -1;
  if (iVar3 <= param_2) {
    iVar8 = iVar3;
  }
  iVar3 = (iVar4 - param_2) + -1;
  if (iVar3 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(lVar2 + (longlong)param_2 * 4),(void *)(lVar2 + (longlong)(param_2 + 1) * 4)
               ,(longlong)iVar3 << 2);
    iVar4 = (int)plVar1[1];
  }
  *(int *)(plVar1 + 1) = iVar4 + -1;
  plVar1 = (longlong *)*param_1;
  iVar4 = (int)plVar1[1];
  *(int *)(plVar1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)plVar1 + 0xc) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  _Src = (void *)(*plVar1 + (longlong)iVar8 * 4);
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 4),_Src,(longlong)(iVar4 - iVar8) << 2);
  *(int *)((longlong)iVar8 * 4 + *plVar1) = param_3;
  if (param_1[1] != 0) {
    FKeyHandleLookupTable::MoveHandle(param_1[1],param_2,iVar8);
  }
  return iVar8;
}



// FUNCTION 141f59080 MultiChannelFromData body=101 status=ok
// SIG undefined MultiChannelFromData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void MovieScene::MultiChannelFromData(int param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  int *piVar3;
  longlong lVar4;
  int local_28 [2];
  double local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  piVar3 = local_28;
  local_10 = DAT_1468387a8 ^ (ulonglong)local_28;
  lVar4 = 1;
  local_28[0] = param_1;
  uStack_18 = 1;
  pdVar2 = &local_20;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    *pdVar2 = (double)iVar1;
    lVar4 = lVar4 + -1;
    pdVar2 = pdVar2 + 1;
  } while (lVar4 != 0);
  *param_2 = local_20;
  param_2[1] = (double)CONCAT44(uStack_14,uStack_18);
  return;
}



// FUNCTION 141f590f0 Num body=26 status=ok
// SIG undefined Num(void)

char FMovieSceneBlendTypeField::Num(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  return (bVar1 >> 2 & 1) + (bVar1 >> 1 & 1) + (bVar1 & 1);
}



// FUNCTION 141f59130 Offset body=31 status=ok
// SIG undefined Offset(void)

void FMovieSceneChannelData::Offset(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)*param_1;
  piVar1 = piVar2 + *(int *)((undefined8 *)*param_1 + 1);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    *piVar2 = *piVar2 + param_2;
  }
  return;
}



// FUNCTION 141f59170 OnChanged body=148 status=ok
// SIG undefined OnChanged(void)

void FCachedLegacyConversionFrameRate::OnChanged(undefined8 param_1)

{
  void *_Src;
  undefined2 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined2 *local_18;
  int local_10;
  
  puVar2 = (undefined2 *)0x0;
  local_18 = (undefined2 *)0x0;
  local_10 = *(int *)(DAT_146ac9b38 + 1);
  lVar3 = (longlong)local_10;
  _Src = (void *)*DAT_146ac9b38;
  if (local_10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    puVar2 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 * 2);
  }
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = puVar2;
  }
  TryParseString(param_1,puVar1);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 141f59210 OnPreAnimated body=1222 status=ok
// SIG undefined OnPreAnimated(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f5945f) */
/* WARNING: Removing unreachable block (ram,0x000141f59467) */
/* WARNING: Removing unreachable block (ram,0x000141f5946d) */
/* WARNING: Removing unreachable block (ram,0x000141f59480) */

void TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::OnPreAnimated
               (int *param_1,char param_2,longlong param_3,undefined8 *param_4,longlong *param_5,
               undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte bVar8;
  int *piVar9;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  byte local_c8;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  byte local_a0;
  undefined4 local_98 [2];
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108 = param_6;
  if (param_2 != '\0') {
    uVar2 = *param_4;
    iStack_f8 = *(int *)(param_4 + 1);
    if (param_2 == '\x02') {
      piVar9 = *(int **)(param_1 + 0x30);
      if (*(int **)(param_1 + 0x30) == (int *)0x0) {
        piVar9 = param_1;
      }
      piVar6 = piVar9 + (longlong)param_1[0x32] * 6;
      if (piVar9 != piVar6) {
        local_100._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        local_100._0_4_ = (int)uVar2;
        do {
          if ((((*(longlong *)(piVar9 + 4) == param_3) && (piVar9[1] == local_100._4_4_)) &&
              (*piVar9 == (int)local_100)) && (piVar9[2] == iStack_f8)) {
            return;
          }
          piVar9 = piVar9 + 6;
        } while (piVar9 != piVar6);
      }
    }
    plVar1 = (longlong *)(param_1 + 0x34);
    plVar5 = *(longlong **)(param_1 + 0x44);
    if (*(longlong **)(param_1 + 0x44) == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    for (plVar4 = plVar5; local_118 = param_4, local_100 = uVar2, local_f0 = param_3,
        plVar4 != plVar5 + param_1[0x46]; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_3) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar5 >> 3);
        if (iVar3 != -1) {
          if (param_2 != '\x02') {
            return;
          }
          piVar9 = (int *)((longlong)iVar3 * 0x58 + *(longlong *)(param_1 + 0x48));
          if (*piVar9 == 0) {
            (**(code **)(*param_5 + 0x10))(param_5,&local_e8);
            if ((local_c8 & 1) == 0) {
              return;
            }
            bVar8 = *(byte *)(piVar9 + 0x14);
            if ((bVar8 & 1) != 0) {
              piVar6 = piVar9 + 0xc;
              if ((bVar8 & 2) == 0) {
                piVar6 = *(int **)(piVar9 + 0xc);
              }
              *(byte *)(piVar9 + 0x14) = bVar8 & 0xfe;
              (*(code *)**(undefined8 **)piVar6)(piVar6,0);
              if ((*(byte *)(piVar9 + 0x14) & 2) == 0) {
                FMemory::Free(*(undefined8 *)(piVar9 + 0xc));
              }
            }
            if ((local_c8 & 1) != 0) {
              *(byte *)(piVar9 + 0x14) =
                   (*(byte *)(piVar9 + 0x14) ^ local_c8 & 0xfe) & 2 ^ *(byte *)(piVar9 + 0x14) | 1;
              piVar9[0xc] = local_e8;
              piVar9[0xd] = iStack_e4;
              piVar9[0xe] = iStack_e0;
              piVar9[0xf] = iStack_dc;
              piVar9[0x10] = local_d8;
              piVar9[0x11] = iStack_d4;
              piVar9[0x12] = iStack_d0;
              piVar9[0x13] = iStack_cc;
            }
          }
          local_118 = (undefined8 *)*param_4;
          local_110 = *(undefined4 *)(param_4 + 1);
          *piVar9 = *piVar9 + 1;
          MovieSceneImpl::EntityHasAnimated(&local_118,local_108,local_128);
          goto LAB_141f5965b;
        }
        break;
      }
    }
    (**(code **)(*param_5 + 0x10))(param_5,&local_e8);
    if ((local_c8 & 1) != 0) {
      iVar3 = param_1[0x46];
      param_1[0x46] = iVar3 + 1;
      if (param_1[0x47] < iVar3 + 1) {
        TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                  (plVar1,iVar3);
      }
      plVar5 = *(longlong **)(param_1 + 0x44);
      if (*(longlong **)(param_1 + 0x44) == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      plVar5[iVar3] = param_3;
      local_a0 = local_a0 & 0xfe | 2;
      if ((local_c8 & 1) != 0) {
        local_c8 = local_c8 & 0xfe;
        local_a0 = local_a0 ^ (local_a0 ^ local_c8) & 2 | 1;
        local_c0 = local_e8;
        iStack_bc = iStack_e4;
        iStack_b8 = iStack_e0;
        iStack_b4 = iStack_dc;
        local_b0 = local_d8;
        iStack_ac = iStack_d4;
        iStack_a8 = iStack_d0;
        iStack_a4 = iStack_cc;
      }
      bVar8 = local_70 & 0xfe;
      local_98[0] = 0;
      local_70 = bVar8 | 2;
      if ((local_a0 & 1) != 0) {
        local_a0 = local_a0 & 0xfe;
        local_70 = (bVar8 ^ local_a0) & 2 ^ bVar8 | 1;
        local_90 = local_c0;
        iStack_8c = iStack_bc;
        iStack_88 = iStack_b8;
        iStack_84 = iStack_b4;
        local_80 = local_b0;
        iStack_7c = iStack_ac;
        iStack_78 = iStack_a8;
        iStack_74 = iStack_a4;
      }
      plVar1 = (longlong *)(param_1 + 0x48);
      iVar3 = param_1[0x4a];
      local_48 = local_48 & 0xfe | 2;
      param_1[0x4a] = iVar3 + 1;
      if (param_1[0x4b] < iVar3 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar7 = (undefined4 *)((longlong)iVar3 * 0x58 + *plVar1);
      *puVar7 = local_98[0];
      bVar8 = *(byte *)(puVar7 + 10);
      *(byte *)(puVar7 + 10) = bVar8 & 0xfe | 2;
      if ((local_70 & 1) != 0) {
        *(byte *)(puVar7 + 10) = bVar8 & 0xfe | 3;
        *(byte *)(puVar7 + 10) = *(byte *)(puVar7 + 10) & 0xfd;
        *(byte *)(puVar7 + 10) = *(byte *)(puVar7 + 10) | local_70 & 2;
        puVar7[2] = local_90;
        puVar7[3] = iStack_8c;
        puVar7[4] = iStack_88;
        puVar7[5] = iStack_84;
        *(ulonglong *)(puVar7 + 6) = CONCAT44(iStack_7c,local_80);
        *(ulonglong *)(puVar7 + 8) = CONCAT44(iStack_74,iStack_78);
        local_70 = local_70 & 0xfe;
      }
      bVar8 = *(byte *)(puVar7 + 0x14);
      *(byte *)(puVar7 + 0x14) = bVar8 & 0xfe | 2;
      if ((local_48 & 1) != 0) {
        *(byte *)(puVar7 + 0x14) = bVar8 & 0xfe | 3;
        *(byte *)(puVar7 + 0x14) = *(byte *)(puVar7 + 0x14) & 0xfd;
        *(byte *)(puVar7 + 0x14) = *(byte *)(puVar7 + 0x14) | local_48 & 2;
        puVar7[0xc] = local_68;
        puVar7[0xd] = uStack_64;
        puVar7[0xe] = uStack_60;
        puVar7[0xf] = uStack_5c;
        *(undefined8 *)(puVar7 + 0x10) = local_58;
        *(undefined8 *)(puVar7 + 0x12) = uStack_50;
        local_48 = local_48 & 0xfe;
      }
      TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
      ~TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>(local_98);
      if ((local_a0 & 1) != 0) {
        piVar9 = &local_c0;
        if ((local_a0 & 2) == 0) {
          piVar9 = (int *)CONCAT44(iStack_bc,local_c0);
        }
        local_a0 = local_a0 & 0xfe;
        (*(code *)**(undefined8 **)piVar9)(piVar9,0);
        if ((local_a0 & 2) == 0) {
          FMemory::Free(CONCAT44(iStack_bc,local_c0));
        }
      }
      if (param_2 == '\x02') {
        piVar9 = (int *)((longlong)param_1[0x4a] * 0x58 + -0x58 + *plVar1);
        *piVar9 = *piVar9 + 1;
        local_110 = *(undefined4 *)(local_118 + 1);
        local_118 = (undefined8 *)*local_118;
        MovieSceneImpl::EntityHasAnimated(&local_118,local_108,local_128);
      }
      (**(code **)(*param_5 + 8))(param_5);
      if ((local_c8 & 1) != 0) {
        piVar9 = &local_e8;
        if ((local_c8 & 2) == 0) {
          piVar9 = (int *)CONCAT44(iStack_e4,local_e8);
        }
        local_c8 = local_c8 & 0xfe;
        (*(code *)**(undefined8 **)piVar9)(piVar9,0);
        if ((local_c8 & 2) == 0) {
          FMemory::Free(CONCAT44(iStack_e4,local_e8));
        }
      }
      if (param_2 == '\x02') {
LAB_141f5965b:
        iVar3 = param_1[0x32];
        param_1[0x32] = iVar3 + 1;
        if (param_1[0x33] < iVar3 + 1) {
          TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1,iVar3);
        }
        piVar9 = *(int **)(param_1 + 0x30);
        if (*(int **)(param_1 + 0x30) == (int *)0x0) {
          piVar9 = param_1;
        }
        *(undefined8 *)(piVar9 + (longlong)iVar3 * 6) = local_100;
        *(ulonglong *)(piVar9 + (longlong)iVar3 * 6 + 2) = CONCAT44(uStack_f4,iStack_f8);
        *(longlong *)(piVar9 + (longlong)iVar3 * 6 + 4) = local_f0;
      }
    }
  }
  return;
}



// FUNCTION 141f596e0 OnPreAnimated body=1257 status=ok
// SIG undefined OnPreAnimated(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f5994a) */
/* WARNING: Removing unreachable block (ram,0x000141f59952) */
/* WARNING: Removing unreachable block (ram,0x000141f59958) */
/* WARNING: Removing unreachable block (ram,0x000141f5996b) */

void TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>::OnPreAnimated
               (int *param_1,char param_2,longlong param_3,undefined8 *param_4,longlong *param_5,
               undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  byte local_c8;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  byte local_a0;
  undefined4 local_98 [2];
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108 = param_6;
  local_118 = param_5;
  if (param_2 != '\0') {
    uVar2 = *param_4;
    iStack_f8 = *(int *)(param_4 + 1);
    if (param_2 == '\x02') {
      piVar9 = *(int **)(param_1 + 0x30);
      if (*(int **)(param_1 + 0x30) == (int *)0x0) {
        piVar9 = param_1;
      }
      piVar4 = piVar9 + (longlong)param_1[0x32] * 6;
      if (piVar9 != piVar4) {
        local_100._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        local_100._0_4_ = (int)uVar2;
        do {
          if ((((*(longlong *)(piVar9 + 4) == param_3) && (piVar9[1] == local_100._4_4_)) &&
              (*piVar9 == (int)local_100)) && (piVar9[2] == iStack_f8)) {
            return;
          }
          piVar9 = piVar9 + 6;
        } while (piVar9 != piVar4);
      }
    }
    local_128 = param_4;
    local_100 = uVar2;
    local_f0 = param_3;
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x4c);
    plVar1 = (longlong *)(param_1 + 0x34);
    plVar3 = *(longlong **)(param_1 + 0x44);
    if (*(longlong **)(param_1 + 0x44) == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    for (plVar8 = plVar3; plVar8 != plVar3 + param_1[0x46]; plVar8 = plVar8 + 1) {
      if (*plVar8 == param_3) {
        iVar7 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
        if (iVar7 != -1) {
          if (param_2 != '\x02') {
            return;
          }
          piVar9 = (int *)((longlong)iVar7 * 0x58 + *(longlong *)(param_1 + 0x48));
          if (*piVar9 == 0) {
            (**(code **)(*param_5 + 0x10))(param_5,&local_e8,uVar2);
            if ((local_c8 & 1) == 0) {
              return;
            }
            bVar6 = *(byte *)(piVar9 + 0x14);
            if ((bVar6 & 1) != 0) {
              piVar4 = piVar9 + 0xc;
              if ((bVar6 & 2) == 0) {
                piVar4 = *(int **)(piVar9 + 0xc);
              }
              *(byte *)(piVar9 + 0x14) = bVar6 & 0xfe;
              (*(code *)**(undefined8 **)piVar4)(piVar4,0);
              if ((*(byte *)(piVar9 + 0x14) & 2) == 0) {
                FMemory::Free(*(undefined8 *)(piVar9 + 0xc));
              }
            }
            if ((local_c8 & 1) != 0) {
              *(byte *)(piVar9 + 0x14) =
                   (local_c8 & 0xfe ^ *(byte *)(piVar9 + 0x14)) & 2 ^ *(byte *)(piVar9 + 0x14) | 1;
              piVar9[0xc] = local_e8;
              piVar9[0xd] = iStack_e4;
              piVar9[0xe] = iStack_e0;
              piVar9[0xf] = iStack_dc;
              piVar9[0x10] = local_d8;
              piVar9[0x11] = iStack_d4;
              piVar9[0x12] = iStack_d0;
              piVar9[0x13] = iStack_cc;
            }
          }
          *piVar9 = *piVar9 + 1;
          local_118 = (longlong *)*local_128;
          local_110 = *(undefined4 *)(local_128 + 1);
          MovieSceneImpl::EntityHasAnimated(&local_118,local_108,uVar2);
          goto LAB_141f59b48;
        }
        break;
      }
    }
    (**(code **)(*param_5 + 0x10))(param_5,&local_e8,uVar2);
    if ((local_c8 & 1) != 0) {
      iVar7 = param_1[0x46];
      param_1[0x46] = iVar7 + 1;
      if (param_1[0x47] < iVar7 + 1) {
        TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                  (plVar1,iVar7);
      }
      plVar3 = *(longlong **)(param_1 + 0x44);
      if (*(longlong **)(param_1 + 0x44) == (longlong *)0x0) {
        plVar3 = plVar1;
      }
      plVar3[iVar7] = param_3;
      local_a0 = local_a0 & 0xfe | 2;
      if ((local_c8 & 1) != 0) {
        local_c8 = local_c8 & 0xfe;
        local_a0 = local_a0 ^ (local_a0 ^ local_c8) & 2 | 1;
        local_c0 = local_e8;
        iStack_bc = iStack_e4;
        iStack_b8 = iStack_e0;
        iStack_b4 = iStack_dc;
        local_b0 = local_d8;
        iStack_ac = iStack_d4;
        iStack_a8 = iStack_d0;
        iStack_a4 = iStack_cc;
      }
      bVar6 = local_70 & 0xfe;
      local_98[0] = 0;
      local_70 = bVar6 | 2;
      if ((local_a0 & 1) != 0) {
        local_a0 = local_a0 & 0xfe;
        local_70 = (bVar6 ^ local_a0) & 2 ^ bVar6 | 1;
        local_90 = local_c0;
        iStack_8c = iStack_bc;
        iStack_88 = iStack_b8;
        iStack_84 = iStack_b4;
        local_80 = local_b0;
        iStack_7c = iStack_ac;
        iStack_78 = iStack_a8;
        iStack_74 = iStack_a4;
      }
      plVar1 = (longlong *)(param_1 + 0x48);
      iVar7 = param_1[0x4a];
      local_48 = local_48 & 0xfe | 2;
      param_1[0x4a] = iVar7 + 1;
      if (param_1[0x4b] < iVar7 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
      }
      puVar5 = (undefined4 *)((longlong)iVar7 * 0x58 + *plVar1);
      *puVar5 = local_98[0];
      bVar6 = *(byte *)(puVar5 + 10);
      *(byte *)(puVar5 + 10) = bVar6 & 0xfe | 2;
      if ((local_70 & 1) != 0) {
        *(byte *)(puVar5 + 10) = bVar6 & 0xfe | 3;
        *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xfd;
        *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) | local_70 & 2;
        puVar5[2] = local_90;
        puVar5[3] = iStack_8c;
        puVar5[4] = iStack_88;
        puVar5[5] = iStack_84;
        *(ulonglong *)(puVar5 + 6) = CONCAT44(iStack_7c,local_80);
        *(ulonglong *)(puVar5 + 8) = CONCAT44(iStack_74,iStack_78);
        local_70 = local_70 & 0xfe;
      }
      bVar6 = *(byte *)(puVar5 + 0x14);
      *(byte *)(puVar5 + 0x14) = bVar6 & 0xfe | 2;
      if ((local_48 & 1) != 0) {
        *(byte *)(puVar5 + 0x14) = bVar6 & 0xfe | 3;
        *(byte *)(puVar5 + 0x14) = *(byte *)(puVar5 + 0x14) & 0xfd;
        *(byte *)(puVar5 + 0x14) = *(byte *)(puVar5 + 0x14) | local_48 & 2;
        puVar5[0xc] = local_68;
        puVar5[0xd] = uStack_64;
        puVar5[0xe] = uStack_60;
        puVar5[0xf] = uStack_5c;
        *(undefined8 *)(puVar5 + 0x10) = local_58;
        *(undefined8 *)(puVar5 + 0x12) = uStack_50;
        local_48 = local_48 & 0xfe;
      }
      TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
      ~TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>(local_98);
      if ((local_a0 & 1) != 0) {
        piVar9 = &local_c0;
        if ((local_a0 & 2) == 0) {
          piVar9 = (int *)CONCAT44(iStack_bc,local_c0);
        }
        local_a0 = local_a0 & 0xfe;
        (*(code *)**(undefined8 **)piVar9)(piVar9,0);
        if ((local_a0 & 2) == 0) {
          FMemory::Free(CONCAT44(iStack_bc,local_c0));
        }
      }
      if (param_2 == '\x02') {
        piVar9 = (int *)((longlong)param_1[0x4a] * 0x58 + -0x58 + *plVar1);
        *piVar9 = *piVar9 + 1;
        local_120 = *(undefined4 *)(local_128 + 1);
        local_128 = (undefined8 *)*local_128;
        MovieSceneImpl::EntityHasAnimated(&local_128,local_108,uVar2);
      }
      (**(code **)(*local_118 + 8))(local_118,uVar2);
      if ((local_c8 & 1) != 0) {
        piVar9 = &local_e8;
        if ((local_c8 & 2) == 0) {
          piVar9 = (int *)CONCAT44(iStack_e4,local_e8);
        }
        local_c8 = local_c8 & 0xfe;
        (*(code *)**(undefined8 **)piVar9)(piVar9,0);
        if ((local_c8 & 2) == 0) {
          FMemory::Free(CONCAT44(iStack_e4,local_e8));
        }
      }
      if (param_2 == '\x02') {
LAB_141f59b48:
        iVar7 = param_1[0x32];
        param_1[0x32] = iVar7 + 1;
        if (param_1[0x33] < iVar7 + 1) {
          TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1,iVar7);
        }
        piVar9 = *(int **)(param_1 + 0x30);
        if (*(int **)(param_1 + 0x30) == (int *)0x0) {
          piVar9 = param_1;
        }
        *(undefined8 *)(piVar9 + (longlong)iVar7 * 6) = local_100;
        *(ulonglong *)(piVar9 + (longlong)iVar7 * 6 + 2) = CONCAT44(uStack_f4,iStack_f8);
        *(longlong *)(piVar9 + (longlong)iVar7 * 6 + 4) = local_f0;
      }
    }
  }
  return;
}



// FUNCTION 141f59bd0 OnRequestCurrentTime body=548 status=ok
// SIG undefined OnRequestCurrentTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong *
FMovieSceneTimeController_ExternalClock::OnRequestCurrentTime
          (longlong *param_1,ulonglong *param_2,ulonglong *param_3,float param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((char)param_1[3] == '\0') {
    *param_2 = *param_3;
  }
  else {
    local_68 = param_1[1];
    lStack_60 = param_1[2];
    dVar10 = (double)param_1[5];
    dVar8 = (double)(**(code **)(*param_1 + 0x28))();
    pdVar1 = (double *)(param_1 + 7);
    param_1[4] = (longlong)((dVar8 - *pdVar1) * ((double)param_4 - 1.0) + (double)param_1[4]);
    if ((double *)&local_70 != pdVar1) {
      *pdVar1 = dVar8;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    dVar2 = (double)param_1[4];
    ConvertFrameTime(&local_70,local_68,lStack_60,param_3[1]);
    dVar8 = ((double)(int)param_3[1] * ((dVar8 - dVar10) + dVar2)) /
            (double)(int)(param_3[1] >> 0x20);
    lVar6 = (longlong)dVar8;
    dVar10 = dVar8;
    if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar8)) {
      auVar11._8_8_ = dVar8;
      auVar11._0_8_ = dVar8;
      uVar3 = movmskpd(0,auVar11);
      dVar10 = (double)(longlong)(lVar6 - (ulonglong)(uVar3 & 1));
    }
    dVar8 = dVar8 - dVar10;
    dVar2 = dVar8;
    if ((0.0 < dVar8) && (dVar2 = 0.9999999403953552, dVar8 <= 0.9999999403953552)) {
      dVar2 = dVar8;
    }
    fVar7 = (float)dVar2;
    if (0.0 <= fVar7) {
      if (0.99999994 <= fVar7) {
        fVar7 = 0.99999994;
      }
    }
    else {
      fVar7 = 0.0;
    }
    fVar7 = fVar7 + local_70._4_4_;
    uVar3 = ((int)ROUND((fVar7 + fVar7) - 0.5) >> 1) + (int)dVar10 + SUB84(local_70,0);
    iVar5 = (int)fVar7;
    fVar9 = fVar7;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar7)) {
      auVar12._4_4_ = fVar7;
      auVar12._0_4_ = fVar7;
      auVar12._8_8_ = 0;
      uVar4 = movmskps(SUB84(local_70,0),auVar12);
      fVar9 = (float)(int)(iVar5 - (uVar4 & 1));
    }
    fVar7 = fVar7 - fVar9;
    if (0.0 <= fVar7) {
      if (0.99999994 <= fVar7) {
        fVar7 = 0.99999994;
      }
      local_78 = CONCAT44(fVar7,uVar3);
      *param_2 = local_78;
    }
    else {
      local_78 = (ulonglong)uVar3;
      *param_2 = local_78;
    }
  }
  return param_2;
}



// FUNCTION 141f59e00 OnRequestCurrentTime body=427 status=ok
// SIG undefined OnRequestCurrentTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FMovieSceneTimeController_Tick::OnRequestCurrentTime
                (longlong param_1,int *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined8 *)param_2 = *param_3;
  }
  else {
    ConvertFrameTime(local_20,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     param_3[1]);
    dVar10 = ((double)(int)param_3[1] * *(double *)(param_1 + 0x20)) /
             (double)(int)((ulonglong)param_3[1] >> 0x20);
    lVar4 = (longlong)dVar10;
    dVar7 = dVar10;
    if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar10)) {
      auVar8._8_8_ = dVar10;
      auVar8._0_8_ = dVar10;
      uVar2 = movmskpd(0,auVar8);
      dVar7 = (double)(longlong)(lVar4 - (ulonglong)(uVar2 & 1));
    }
    dVar10 = dVar10 - dVar7;
    dVar1 = dVar10;
    if ((0.0 < dVar10) && (dVar1 = 0.9999999403953552, dVar10 <= 0.9999999403953552)) {
      dVar1 = dVar10;
    }
    fVar5 = (float)dVar1;
    if (0.0 <= fVar5) {
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
    }
    else {
      fVar5 = 0.0;
    }
    fVar5 = fVar5 + fStack_1c;
    iVar3 = (int)fVar5;
    *param_2 = ((int)ROUND((fVar5 + fVar5) - 0.5) >> 1) + (int)_local_20 + (int)dVar7;
    fVar6 = fVar5;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar5)) {
      auVar9._4_4_ = fVar5;
      auVar9._0_4_ = fVar5;
      auVar9._8_8_ = 0;
      uVar2 = movmskps((int)_local_20,auVar9);
      fVar6 = (float)(int)(iVar3 - (uVar2 & 1));
    }
    fVar5 = fVar5 - fVar6;
    param_2[1] = (int)fVar5;
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 0.99999994 <= fVar5)) {
      fVar6 = 0.99999994;
    }
    param_2[1] = (int)fVar6;
  }
  return param_2;
}



// FUNCTION 141f59fb0 OnStartPlaying body=78 status=ok
// SIG undefined OnStartPlaying(void)

void FMovieSceneTimeController_ExternalClock::OnStartPlaying(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res8 [4];
  
  lVar2 = (**(code **)(*param_1 + 0x28))();
  plVar1 = param_1 + 7;
  if (local_res8 != plVar1) {
    *plVar1 = lVar2;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if (plVar1 != param_1 + 5) {
    if ((char)param_1[6] != '\0') {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if ((char)param_1[8] != '\0') {
      param_1[5] = *plVar1;
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



// FUNCTION 141f5a000 OnStartPlaying body=9 status=ok
// SIG undefined OnStartPlaying(void)

void FMovieSceneTimeController_Tick::OnStartPlaying(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 141f5a070 FUN_141f5a070 body=791 status=ok
// SIG undefined FUN_141f5a070(void)

void FUN_141f5a070(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  float local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  float local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_98 = param_1 + 0x38;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (1 < (int)*(uint *)(param_1 + 0x18)) {
    if (*(char *)(param_2 + 2) == '\x02') {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if ((longlong)*(int *)(param_1 + 0x18) != 0) {
        uVar10 = (longlong)*(int *)(param_1 + 0x18);
        do {
          uVar15 = uVar10 >> 1;
          if (*(int *)(*plVar1 + (uVar15 + uVar14) * 4) < (int)param_2[3]) {
            uVar14 = (ulonglong)((uint)uVar10 & 1) + uVar15 + uVar14;
          }
          uVar10 = uVar15;
        } while (uVar15 != 0);
      }
    }
    uVar10 = 0;
    if (*(char *)(param_2 + 4) == '\x02') {
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x18);
    }
    else if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      uVar15 = (longlong)*(int *)(param_1 + 0x18);
      do {
        uVar16 = uVar15 >> 1;
        if (*(int *)(*plVar1 + (uVar16 + uVar10) * 4) <= (int)param_2[5]) {
          uVar10 = (ulonglong)((uint)uVar15 & 1) + uVar16 + uVar10;
        }
        uVar15 = uVar16;
      } while (uVar16 != 0);
    }
    lVar12 = (longlong)(int)uVar14;
    local_a0 = plVar1;
    local_90 = plVar2;
    if (lVar12 < (int)uVar10) {
      uStackX_24 = 0;
      lVar11 = lVar12 * 0x1c;
      iVar5 = (int)uVar14;
      do {
        iVar17 = iVar5 + 1;
        lVar4 = *plVar2;
        local_80 = *(undefined4 *)(lVar4 + 8 + lVar11);
        uVar8 = *(undefined4 *)(*plVar1 + lVar12 * 4);
        local_84 = *(undefined1 *)(lVar4 + 4 + lVar11);
        local_7c = *(undefined4 *)(lVar4 + 0xc + lVar11);
        fVar3 = *(float *)(lVar4 + lVar11);
        local_83 = *(undefined1 *)(lVar4 + 5 + lVar11);
        local_78 = *(undefined1 *)(lVar4 + 0x10 + lVar11);
        local_74 = *(undefined4 *)(lVar4 + 0x14 + lVar11);
        local_70 = *(undefined4 *)(lVar4 + 0x18 + lVar11);
        iVar9 = *(int *)(param_1 + 0x18);
        iVar13 = (int)uVar14;
        iVar7 = (iVar9 - iVar13) + -1;
        local_88 = fVar3;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar13 * 4),
                     (void *)(*plVar1 + (longlong)iVar17 * 4),(longlong)iVar7 << 2);
          iVar9 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar9 + -1;
        iVar9 = *(int *)(param_1 + 0x28);
        iVar7 = (iVar9 - iVar13) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar13 * 0x1c + *plVar2),
                     (void *)((longlong)iVar17 * 0x1c + *plVar2),(longlong)iVar7 * 0x1c);
          iVar9 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar9 + -1;
        if (local_98 != 0) {
          FKeyHandleLookupTable::DeallocateHandle(local_98,uVar14 & 0xffffffff);
        }
        local_res18[0] = 0.0;
        local_res20 = uVar8;
        cVar6 = FMovieSceneFloatChannel::Evaluate(param_1,CONCAT44(uStackX_24,uVar8),local_res18);
        if ((cVar6 == '\0') ||
           (*param_2 <= ABS(local_res18[0] - fVar3) && ABS(local_res18[0] - fVar3) != *param_2)) {
          uVar8 = FMovieSceneChannelData::AddKeyInternal(&local_a0,uVar8);
          TArray<FMovieSceneFloatValue,FDefaultAllocator>::Insert(plVar2,&local_88,uVar8);
        }
        else {
          iVar13 = iVar13 + -1;
          lVar12 = lVar12 + -1;
          lVar11 = lVar11 + -0x1c;
          iVar17 = iVar5;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x1c;
        iVar5 = iVar17;
      } while (lVar12 < (int)uVar10);
    }
    if (*(char *)(param_2 + 1) != '\0') {
      FMovieSceneFloatChannel::AutoSetTangents(param_1,0);
    }
  }
  return;
}



// FUNCTION 141f5a3a0 FUN_141f5a3a0 body=493 status=ok
// SIG undefined FUN_141f5a3a0(void)

undefined8 * FUN_141f5a3a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong local_res8;
  float local_48 [4];
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_2c;
  undefined1 local_24 [12];
  
  lVar7 = FUN_141f53550();
  if ((lVar7 == param_1) || (*(longlong **)(param_1 + 0x108) == (longlong *)0x0)) {
    *param_2 = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x298))();
  iVar1 = *(int *)(param_1 + 0x94);
  if ((lVar7 != 0) && (*(char *)(param_1 + 0x90) != '\x02')) {
    uVar9 = *(undefined8 *)(lVar7 + 0xb8);
    lVar11 = 0;
    if (*(char *)(lVar7 + 0xa8) == '\0') {
      lVar11 = 4;
    }
    iVar2 = *(int *)((longlong)&DAT_144f1bc88 + lVar11);
    iVar3 = *(int *)(lVar7 + 0xac);
    lVar7 = 0;
    iVar4 = *(int *)(param_1 + 0xe0);
    if (*(char *)(param_1 + 0x90) == '\0') {
      lVar7 = 4;
    }
    iVar5 = *(int *)((longlong)&DAT_144f1bc88 + lVar7);
    uVar8 = UMovieScene::GetPrivateStaticClass();
    lVar7 = UObjectBaseUtility::GetTypedOuter(param_1,uVar8);
    iVar13 = (int)uVar9;
    iVar12 = (int)*(undefined8 *)(lVar7 + 0xb8);
    iVar6 = (int)((ulonglong)uVar9 >> 0x20);
    iVar10 = (int)((ulonglong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20);
    if ((iVar12 == iVar13) && (iVar10 == iVar6)) {
      local_48[0] = 1.0;
    }
    else {
      local_48[0] = (float)(iVar10 * iVar13) / (float)(iVar6 * iVar12);
    }
    local_30 = 0x3f800000;
    local_res8 = (ulonglong)(uint)-(iVar5 + iVar1);
    local_2c = local_res8;
    local_48[0] = local_48[0] * *(float *)(param_1 + 0xe4);
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    local_res8 = (ulonglong)(uint)(iVar2 + iVar3 + iVar4);
    local_48[3] = 1.0;
    local_38 = local_res8;
    uVar9 = operator*(local_24,local_48 + 3,local_48);
    operator*(param_2,uVar9,&local_30);
    return param_2;
  }
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 141f5a590 FUN_141f5a590 body=477 status=ok
// SIG undefined FUN_141f5a590(void)

undefined1 * FUN_141f5a590(undefined8 *param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int local_2c;
  
  iVar10 = 0;
  local_2c = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    pcVar9 = (char *)*param_1;
    do {
      cVar1 = *pcVar9;
      if ((((cVar1 == '\x02') || (pcVar9[8] == '\x02')) ||
          ((*(int *)(pcVar9 + 4) <= *(int *)(pcVar9 + 0xc) &&
           ((*(int *)(pcVar9 + 4) != *(int *)(pcVar9 + 0xc) ||
            ((cVar1 != '\0' && (pcVar9[8] != '\0')))))))) &&
         (((cVar2 = *param_3, cVar2 == '\x02' || (param_3[8] == '\x02')) ||
          ((*(int *)(param_3 + 4) <= *(int *)(param_3 + 0xc) &&
           ((*(int *)(param_3 + 4) != *(int *)(param_3 + 0xc) ||
            ((cVar2 != '\0' && (param_3[8] != '\0')))))))))) {
        if ((pcVar9[8] == '\x02') || (cVar2 == '\x02')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((cVar1 == '\x02') || (param_3[8] == '\x02')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        bVar3 = true;
        if (!bVar4) {
          if ((pcVar9[8] == '\x01') && (cVar2 == '\x01')) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          bVar3 = *(int *)(param_3 + 4) < *(int *)(pcVar9 + 0xc);
          if (bVar4) {
            bVar3 = *(int *)(param_3 + 4) <= *(int *)(pcVar9 + 0xc);
          }
        }
        bVar4 = true;
        if (!bVar5) {
          if ((cVar1 == '\x01') && (param_3[8] == '\x01')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          bVar4 = *(int *)(pcVar9 + 4) < *(int *)(param_3 + 0xc);
          if (bVar5) {
            bVar4 = *(int *)(pcVar9 + 4) <= *(int *)(param_3 + 0xc);
          }
        }
        if ((!bVar3) || (!bVar4)) goto LAB_141f5a6e9;
        iVar6 = iVar8;
        if (local_2c != 0) {
          iVar6 = iVar10;
        }
        iVar10 = iVar6;
        local_2c = local_2c + 1;
      }
      else {
LAB_141f5a6e9:
        if (local_2c != 0) goto LAB_141f5a702;
      }
      iVar8 = iVar8 + 1;
      pcVar9 = pcVar9 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 1));
    if (local_2c != 0) {
LAB_141f5a702:
      local_2c = local_2c + iVar10;
      uVar7 = 1;
      goto LAB_141f5a72a;
    }
  }
  iVar10 = 0;
  uVar7 = 0;
  local_2c = 0;
LAB_141f5a72a:
  *param_2 = uVar7;
  *(int *)(param_2 + 4) = iVar10;
  param_2[8] = 0;
  *(int *)(param_2 + 0xc) = local_2c;
  return param_2;
}



// FUNCTION 141f5a770 Overlaps body=296 status=ok
// SIG undefined Overlaps(void)

ulonglong TRange<FFrameNumber>::Overlaps(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulonglong in_RAX;
  uint7 uVar6;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    in_RAX = 0;
    if ((param_1[8] != '\x02') &&
       ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 4) ||
        ((*(int *)(param_1 + 4) == *(int *)(param_1 + 0xc) &&
         ((cVar1 == '\0' || (param_1[8] == '\0')))))))) goto LAB_141f5a891;
  }
  cVar2 = *param_2;
  if (cVar2 != '\x02') {
    in_RAX = 0;
    if ((param_2[8] != '\x02') &&
       ((*(int *)(param_2 + 0xc) < *(int *)(param_2 + 4) ||
        ((*(int *)(param_2 + 4) == *(int *)(param_2 + 0xc) &&
         ((cVar2 == '\0' || (param_2[8] == '\0')))))))) goto LAB_141f5a891;
  }
  uVar6 = (uint7)(in_RAX >> 8);
  if ((param_1[8] == '\x02') || (cVar2 == '\x02')) {
    in_RAX = CONCAT71(uVar6,1);
  }
  else {
    in_RAX = (ulonglong)uVar6 << 8;
  }
  if ((cVar1 == '\x02') || (param_2[8] == '\x02')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar4 = true;
  bVar3 = true;
  if ((char)in_RAX == '\0') {
    if ((param_1[8] != '\x01') || (cVar2 != '\x01')) {
      bVar4 = false;
    }
    in_RAX = 0;
    bVar3 = *(int *)(param_2 + 4) < *(int *)(param_1 + 0xc);
    if (bVar4) {
      bVar3 = *(int *)(param_2 + 4) <= *(int *)(param_1 + 0xc);
    }
  }
  bVar4 = true;
  if (!bVar5) {
    if ((cVar1 == '\x01') && (param_2[8] == '\x01')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    in_RAX = 0;
    bVar4 = *(int *)(param_1 + 4) < *(int *)(param_2 + 0xc);
    if (bVar5) {
      bVar4 = *(int *)(param_1 + 4) <= *(int *)(param_2 + 0xc);
    }
  }
  if ((bVar3) && (bVar4)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_141f5a891:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141f5a8a0 OverlapsWithSections body=423 status=ok
// SIG undefined OverlapsWithSections(void)

longlong UMovieSceneSection::OverlapsWithSections(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong *plVar14;
  
  plVar14 = (longlong *)*param_2;
  cVar2 = *(char *)(param_1 + 0x90);
  iVar6 = *(int *)(param_1 + 0x94);
  plVar1 = plVar14 + (int)param_2[1];
  cVar3 = *(char *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0x9c);
  do {
    if (plVar14 == plVar1) {
      return 0;
    }
    lVar10 = *plVar14;
    if ((param_1 != lVar10) && (*(int *)(lVar10 + 0xa8) == *(int *)(param_1 + 0xa8) + param_3)) {
      cVar4 = *(char *)(lVar10 + 0x90);
      iVar8 = *(int *)(lVar10 + 0x94);
      cVar5 = *(char *)(lVar10 + 0x98);
      iVar9 = *(int *)(lVar10 + 0x9c);
      if ((((cVar2 == '\x02') || (cVar3 == '\x02')) ||
          ((iVar6 <= iVar7 && ((iVar6 != iVar7 || ((cVar2 != '\0' && (cVar3 != '\0')))))))) &&
         (((cVar4 == '\x02' || (cVar5 == '\x02')) ||
          ((iVar8 <= iVar9 && ((iVar8 != iVar9 || ((cVar4 != '\0' && (cVar5 != '\0')))))))))) {
        if ((cVar3 == '\x02') || (cVar4 == '\x02')) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((cVar2 == '\x02') || (cVar5 == '\x02')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        bVar11 = true;
        if (!bVar12) {
          if ((cVar3 == '\x01') && (cVar4 == '\x01')) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
          bVar11 = iVar8 < iVar7;
          if (bVar12) {
            bVar11 = iVar8 <= iVar7;
          }
        }
        bVar12 = true;
        if (!bVar13) {
          if ((cVar2 == '\x01') && (cVar5 == '\x01')) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          bVar12 = iVar6 < iVar9;
          if (bVar13) {
            bVar12 = iVar6 <= iVar9;
          }
        }
        if ((bVar11) && (bVar12)) {
          return lVar10;
        }
      }
    }
    plVar14 = plVar14 + 1;
  } while( true );
}



// FUNCTION 141f5aa50 FUN_141f5aa50 body=414 status=ok
// SIG undefined FUN_141f5aa50(void)

void FUN_141f5aa50(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 local_res8;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    if ((*(byte *)(param_1 + 0x3d0) & 1) == 0) {
      local_70 = *(undefined8 *)(param_1 + 0x774);
      plVar2 = *(longlong **)(param_1 + 0x430);
      local_68 = *(undefined8 *)(param_1 + 0x760);
      *(undefined1 *)(param_1 + 0x3c8) = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_70);
      if ((char)plVar2[3] != '\0') {
        *(undefined1 *)(plVar2 + 3) = 0;
      }
      *(byte *)(param_1 + 0x3d0) = *(byte *)(param_1 + 0x3d0) | 1;
      ConvertFrameTime(&local_res8,*(undefined8 *)(param_1 + 0x774),*(undefined8 *)(param_1 + 0x760)
                       ,*(undefined8 *)(param_1 + 0x768));
      local_a0 = *(undefined8 *)(param_1 + 0x768);
      local_78 = local_78 & 0xc0;
      local_28 = 0;
      uStack_2c = 0;
      local_90 = 0x3f800000;
      local_b4 = local_res8;
      local_a8 = local_res8;
      local_98 = 0;
      local_84 = 0;
      local_7c = 0;
      local_b8[0] = 1;
      local_ac = 1;
      local_94 = 0x80000000;
      local_88 = 0;
      local_80 = 0x80000000;
      FUN_141f4a590(param_1 + 0x448,local_b8,param_1 + 0x28,DAT_146ac9ac0);
      *(byte *)(param_1 + 0x3d0) = *(byte *)(param_1 + 0x3d0) & 0xfe;
      FUN_141f421d0(param_1);
      FWeakObjectPtr::Get(param_1 + 0x448);
      if (0 < *(int *)(param_1 + 0x3b0)) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x3a8,0);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3f8);
      iVar3 = iVar1 + 1;
      *(int *)(param_1 + 0x3f8) = iVar3;
      if (*(int *)(param_1 + 0x3fc) < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x3f0);
      }
      puVar4 = (undefined1 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x3f0));
      *puVar4 = 1;
      *(undefined8 *)(puVar4 + 8) = 0;
    }
  }
  return;
}



// FUNCTION 141f5abf0 FUN_141f5abf0 body=12 status=ok
// SIG undefined FUN_141f5abf0(void)

void FUN_141f5abf0(longlong param_1)

{
  *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x3cc) & 0xfffffffe;
  FUN_141f5ac00();
  return;
}



// FUNCTION 141f5ac00 FUN_141f5ac00 body=616 status=ok
// SIG undefined FUN_141f5ac00(void)

void FUN_141f5ac00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined1 local_30 [40];
  
  if ((char)param_1[0x79] == '\x01') {
    return;
  }
  if (param_1[0x7b] == 0) {
    return;
  }
  cVar3 = (**(code **)(*param_1 + 0x280))();
  if (cVar3 == '\0') {
    return;
  }
  lVar2 = param_1[0x79];
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x89);
  if ((lVar4 == 0) || (param_1[0x8a] == 0)) {
    FUN_141f54cb0(param_1 + 0x89,param_1[0x7b],param_1 + 5);
  }
  if (((char)param_1[0x82] != '\0') &&
     (*(undefined1 *)((longlong)param_1 + 0x305) = 1, *(char *)((longlong)param_1 + 0x304) == '\0'))
  {
    *(undefined1 *)((longlong)param_1 + 0x304) = 1;
  }
  *(undefined1 *)(param_1 + 0x79) = 1;
  local_48 = *(double *)((longlong)param_1 + 0x774);
  plVar5 = (longlong *)param_1[0x86];
  lStack_40 = param_1[0xec];
  if (&local_48 != plVar5 + 1) {
    if ((char)plVar5[3] != '\0') {
      *(undefined1 *)(plVar5 + 3) = 0;
    }
    plVar5[1] = (longlong)local_48;
    plVar5[2] = lStack_40;
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_48);
  (**(code **)(*param_1 + 0x288))(param_1);
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x89);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x298))(plVar5);
  }
  if ((char)param_1[0xee] == '\0') {
    if (((char)lVar2 != '\x06') || ((char)param_1[0xfd] == '\0')) {
      fVar7 = (float)(**(code **)(*DAT_146b17150 + 0x2c0))();
      if (&local_48 != param_1 + 0xfc) {
        param_1[0xfc] = (longlong)(double)fVar7;
        *(undefined1 *)(param_1 + 0xfd) = 1;
      }
    }
    (**(code **)(*DAT_146b17150 + 0x2c8))
              (DAT_146b17150,
               1.0 / ((float)(int)((ulonglong)param_1[0xec] >> 0x20) / (float)(int)param_1[0xec]));
  }
  if (*(char *)((longlong)param_1 + 0x784) != '\0') {
    local_48 = *(double *)((longlong)param_1 + 0x774);
    local_38 = *(undefined8 *)((longlong)param_1 + 0x77c);
    if ((int)local_38 == SUB84(local_48,0)) {
      local_38._4_4_ = (float)((ulonglong)local_38 >> 0x20);
      local_48._4_4_ = (float)((ulonglong)local_48 >> 0x20);
      bVar1 = local_38._4_4_ == local_48._4_4_;
      if (bVar1) goto LAB_141f5ae19;
    }
  }
  uVar6 = FUN_141f5ae90(param_1 + 0xec,local_30,*(undefined8 *)((longlong)param_1 + 0x774));
  FUN_141f68240(param_1,uVar6,1);
LAB_141f5ae19:
  if ((*(byte *)((longlong)param_1 + 0x3cc) & 1) == 0) {
    if (0 < (int)param_1[0x70]) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x6f,0);
      return;
    }
  }
  else if (0 < (int)param_1[0x72]) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x71,0);
    return;
  }
  return;
}



// FUNCTION 141f5ae70 FUN_141f5ae70 body=11 status=ok
// SIG undefined FUN_141f5ae70(void)

void FUN_141f5ae70(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x400) = param_2;
  FUN_141f5ac00();
  return;
}



// FUNCTION 141f5ae80 PlayReverse body=12 status=ok
// SIG undefined PlayReverse(void)

void UMovieSceneSequencePlayer::PlayReverse(longlong param_1)

{
  *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x3cc) | 1;
  FUN_141f5ac00();
  return;
}



// FUNCTION 141f5ae90 FUN_141f5ae90 body=536 status=ok
// SIG undefined FUN_141f5ae90(void)

undefined1 * FUN_141f5ae90(undefined8 *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  ulonglong local_res8;
  float fStackX_14;
  undefined8 local_res18;
  undefined8 local_78 [8];
  
  local_res18 = param_3;
  if ((*(char *)(param_1 + 2) == '\0') && (*(char *)((longlong)param_1 + 0x54) == '\0')) {
    local_res18 = param_3 & 0xffffffff;
  }
  uVar2 = local_res18;
  lVar5 = 0x1c;
  if (*(char *)((longlong)param_1 + 0x24) == '\0') {
    lVar5 = 0x14;
  }
  ConvertFrameTime(&local_res18,*(undefined8 *)(lVar5 + (longlong)param_1),*param_1,param_1[1]);
  ConvertFrameTime(&local_res8,uVar2,*param_1,param_1[1]);
  uVar7 = local_res18;
  iVar3 = (int)local_res18;
  iVar4 = (int)local_res8;
  local_res18._4_4_ = (float)(local_res8 >> 0x20);
  fStackX_14 = (float)(uVar7 >> 0x20);
  if ((iVar4 == iVar3) && (local_res18._4_4_ == fStackX_14)) {
    bVar11 = true;
    uVar9 = local_res8;
  }
  else {
    if ((iVar3 <= iVar4) && ((iVar4 != iVar3 || (fStackX_14 <= local_res18._4_4_)))) {
      bVar10 = *(char *)((longlong)param_1 + 0x24) == '\0';
      bVar11 = true;
      goto LAB_141f5af87;
    }
    bVar11 = *(char *)((longlong)param_1 + 0x24) == '\0';
    uVar9 = uVar7;
  }
  bVar10 = true;
  uVar7 = local_res8;
  local_res8 = uVar9;
LAB_141f5af87:
  uVar8 = 0;
  local_res18._4_4_ = local_res18._4_4_ - fStackX_14;
  iVar6 = (int)ROUND((local_res18._4_4_ + local_res18._4_4_) - 0.5) >> 1;
  iVar4 = (iVar6 - iVar3) + iVar4;
  local_res18._4_4_ = local_res18._4_4_ - (float)iVar6;
  if (0.0 <= local_res18._4_4_) {
    if (0.99999994 <= local_res18._4_4_) {
      local_res18._4_4_ = 0.99999994;
    }
  }
  else {
    local_res18._4_4_ = 0.0;
  }
  if ((iVar4 < 1) && ((iVar4 != 0 || (local_res18._4_4_ < 0.0)))) {
    uVar8 = 1;
  }
  puVar1 = param_1 + 5;
  if (local_78 != puVar1) {
    *(bool *)puVar1 = bVar10;
    *(ulonglong *)((longlong)param_1 + 0x2c) = uVar7;
    *(bool *)((longlong)param_1 + 0x34) = bVar11;
    param_1[7] = local_res8;
    param_1[8] = param_1[1];
    *(undefined4 *)(param_1 + 9) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(ulonglong *)((longlong)param_1 + 0x14) = uVar2;
  if (&local_res18 != (ulonglong *)((longlong)param_1 + 0x1c)) {
    *(ulonglong *)((longlong)param_1 + 0x1c) = uVar2;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  }
  *param_2 = *(undefined1 *)puVar1;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)((longlong)param_1 + 0x2c);
  param_2[0xc] = *(undefined1 *)((longlong)param_1 + 0x34);
  *(undefined8 *)(param_2 + 0x10) = param_1[7];
  *(undefined8 *)(param_2 + 0x18) = param_1[8];
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 9);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x4c);
  return param_2;
}



// FUNCTION 141f5b0b0 FUN_141f5b0b0 body=136 status=ok
// SIG undefined FUN_141f5b0b0(void)

/* WARNING: Removing unreachable block (ram,0x000141f5b114) */

void FUN_141f5b0b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_141f68430(param_1,param_2,0);
  local_18 = *(longlong *)(param_1 + 0x774);
  uStack_10 = *(undefined8 *)(param_1 + 0x760);
  plVar1 = *(longlong **)(param_1 + 0x430);
  if ((char)plVar1[3] != '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
    if ((char)plVar1[3] != '\0') {
      *(undefined1 *)(plVar1 + 3) = 0;
    }
    if (&local_18 != plVar1 + 1) {
      *(undefined4 *)(plVar1 + 1) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_18._4_4_;
      *(undefined4 *)(plVar1 + 2) = (undefined4)uStack_10;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_10._4_4_;
      *(undefined1 *)(plVar1 + 3) = 1;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
  }
  return;
}



// FUNCTION 141f5b140 FUN_141f5b140 body=194 status=ok
// SIG undefined FUN_141f5b140(void)

void FUN_141f5b140(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  dVar6 = ((double)(int)*(undefined8 *)(param_1 + 0x760) * (double)param_2) /
          (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  lVar4 = (longlong)dVar6;
  dVar2 = dVar6;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar6)) {
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar6;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  dVar6 = dVar6 - dVar2;
  dVar7 = dVar6;
  if ((0.0 < dVar6) && (dVar7 = 0.9999999403953552, dVar6 <= 0.9999999403953552)) {
    dVar7 = dVar6;
  }
  fVar8 = (float)dVar7;
  if (0.0 <= fVar8) {
    fVar5 = 0.99999994;
    if (fVar8 <= 0.99999994) {
      fVar5 = fVar8;
    }
    FUN_141f5b0b0(param_1,CONCAT44(fVar5,(int)dVar2));
    return;
  }
  FUN_141f5b0b0(param_1,(int)dVar2);
  return;
}



// FUNCTION 141f5b210 PopulateEvaluationGroup body=348 status=ok
// SIG undefined PopulateEvaluationGroup(void)

void FMovieSceneCompiler::PopulateEvaluationGroup(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar9 = *param_2;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  lVar1 = lVar9 + (longlong)(int)param_2[1] * 0x28;
  if (lVar9 != lVar1) {
    puVar8 = (undefined8 *)(lVar9 + 0x18);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(puVar8[-1] + 0xe8);
      if (lVar4 != lVar7) {
        AddPtrsToGroup(param_1 + 0x10,&local_48,&local_38);
      }
      uVar5 = local_40;
      if (*(char *)((longlong)puVar8 + -0xc) != '\0') {
        lVar7 = (longlong)(int)local_40;
        iVar6 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar6);
        if (local_40._4_4_ < iVar6) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_48,uVar5 & 0xffffffff);
        }
        puVar2 = (undefined8 *)(local_48 + lVar7 * 0xc);
        *puVar2 = *puVar8;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
      }
      uVar5 = local_30;
      lVar7 = (longlong)(int)local_30;
      iVar6 = (int)local_30 + 1;
      local_30 = CONCAT44(local_30._4_4_,iVar6);
      if (local_30._4_4_ < iVar6) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_38,uVar5 & 0xffffffff);
      }
      lVar9 = lVar9 + 0x28;
      puVar3 = (undefined8 *)(local_38 + lVar7 * 0xc);
      *puVar3 = *puVar8;
      puVar2 = puVar8 + 1;
      puVar8 = puVar8 + 5;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar2;
      lVar7 = lVar4;
    } while (lVar9 != lVar1);
  }
  AddPtrsToGroup(param_1 + 0x10,&local_48,&local_38);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141f5b370 PopulateMetaData body=1622 status=ok
// SIG undefined PopulateMetaData(void)

void FMovieSceneCompiler::PopulateMetaData
               (ulonglong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
               undefined8 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int *piVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  int *piVar20;
  ulonglong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  int iStack_88;
  longlong *local_80;
  longlong **local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0x7fffffff < *(uint *)(param_1 + 0x3c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4c)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  plVar11 = (longlong *)*param_4;
  iVar12 = (int)param_4[1];
  plVar18 = plVar11 + (longlong)iVar12 * 5;
  local_80 = plVar18;
  if (plVar11 != plVar18) {
    plVar19 = plVar11 + 3;
    uVar17 = param_1;
    do {
      param_1 = uVar17;
      if (*(char *)((longlong)plVar19 + -0xc) != '\0') {
        lVar15 = *plVar19;
        plVar1 = (longlong *)(uVar17 + 0x40);
        iVar12 = *(int *)(uVar17 + 0x48);
        lVar6 = plVar19[1];
        uStack_c0 = 0xffffffff;
        *(int *)(uVar17 + 0x48) = iVar12 + 1;
        local_c8 = lVar15;
        iStack_bc = iVar8;
        local_a0 = lVar15;
        if (*(int *)(uVar17 + 0x4c) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar12);
          plVar18 = local_80;
        }
        puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar12 * 0x10);
        *puVar3 = (undefined4)local_c8;
        puVar3[1] = local_c8._4_4_;
        puVar3[2] = uStack_c0;
        puVar3[3] = iStack_bc;
        uVar16 = *(longlong *)(plVar19[-1] + 0x28) +
                 (longlong)*(int *)(*(longlong *)(plVar19[-1] + 0x18) + (longlong)(int)lVar6 * 4) *
                 0x58 + 0x18;
        plVar14 = (longlong *)
                  ((ulonglong)(*(longlong *)(uVar16 + 0x30) != 0) - 1 & uVar16 |
                  *(ulonglong *)(uVar16 + 0x30));
        plVar4 = (longlong *)((longlong)plVar14 + (longlong)*(int *)(uVar16 + 0x38) * 0xc);
        param_1 = local_res8;
        for (; iVar8 = iVar8 + 1, local_res8 = param_1, plVar14 != plVar4;
            plVar14 = (longlong *)((longlong)plVar14 + 0xc)) {
          iStack_88 = (int)plVar14[1];
          local_90 = *plVar14;
          iVar12 = *(int *)(uVar17 + 0x48);
          uStack_b0 = (undefined4)local_90;
          local_70._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
          local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0xffffffff);
          *(int *)(uVar17 + 0x48) = iVar12 + 1;
          local_b8 = lVar15;
          iStack_ac = iVar8;
          if (*(int *)(uVar17 + 0x4c) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar12);
          }
          puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar12 * 0x10);
          *puVar3 = (undefined4)local_b8;
          puVar3[1] = local_b8._4_4_;
          puVar3[2] = uStack_b0;
          puVar3[3] = iStack_ac;
          plVar18 = local_80;
          param_1 = local_res8;
        }
      }
      plVar11 = plVar11 + 5;
      plVar19 = plVar19 + 5;
      uVar17 = param_1;
    } while (plVar11 != plVar18);
    plVar11 = (longlong *)*local_res20;
    iVar12 = (int)local_res20[1];
  }
  plVar18 = plVar11 + (longlong)iVar12 * 5;
  local_res20 = plVar18;
  if (plVar11 != plVar18) {
    plVar19 = plVar11 + 3;
    do {
      if (*(char *)((longlong)plVar19 + -0xc) == '\0') {
        lVar15 = *plVar19;
        plVar1 = (longlong *)(param_1 + 0x40);
        iVar12 = *(int *)(param_1 + 0x48);
        lVar6 = plVar19[1];
        uStack_b0 = 0xffffffff;
        *(int *)(param_1 + 0x48) = iVar12 + 1;
        local_b8 = lVar15;
        iStack_ac = iVar8;
        local_90 = lVar15;
        if (*(int *)(param_1 + 0x4c) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar12);
          plVar18 = local_res20;
        }
        puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar12 * 0x10);
        *puVar3 = (undefined4)local_b8;
        puVar3[1] = local_b8._4_4_;
        puVar3[2] = uStack_b0;
        puVar3[3] = iStack_ac;
        uVar17 = *(longlong *)(plVar19[-1] + 0x28) +
                 (longlong)*(int *)(*(longlong *)(plVar19[-1] + 0x18) + (longlong)(int)lVar6 * 4) *
                 0x58 + 0x18;
        plVar14 = (longlong *)
                  ((ulonglong)(*(longlong *)(uVar17 + 0x30) != 0) - 1 & uVar17 |
                  *(ulonglong *)(uVar17 + 0x30));
        plVar4 = (longlong *)((longlong)plVar14 + (longlong)*(int *)(uVar17 + 0x38) * 0xc);
        for (; iVar8 = iVar8 + 1, plVar14 != plVar4; plVar14 = (longlong *)((longlong)plVar14 + 0xc)
            ) {
          local_98 = (undefined4)plVar14[1];
          local_a0 = *plVar14;
          iVar12 = *(int *)(param_1 + 0x48);
          uStack_c0 = (undefined4)local_a0;
          local_70._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
          local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0xffffffff);
          *(int *)(param_1 + 0x48) = iVar12 + 1;
          local_c8 = lVar15;
          iStack_bc = iVar8;
          if (*(int *)(param_1 + 0x4c) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar12);
          }
          puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar12 * 0x10);
          *puVar3 = (undefined4)local_c8;
          puVar3[1] = local_c8._4_4_;
          puVar3[2] = uStack_c0;
          puVar3[3] = iStack_bc;
          plVar18 = local_res20;
        }
      }
      plVar11 = plVar11 + 5;
      plVar19 = plVar19 + 5;
      param_1 = local_res8;
    } while (plVar11 != plVar18);
  }
  uVar17 = local_res8;
  AlgoImpl::
  IntroSortInternal<FMovieSceneOrderedEvaluationKey,FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*,TLess<void>_>
            (*(undefined8 *)(local_res8 + 0x40),(longlong)*(int *)(local_res8 + 0x48),0,
             local_res8 & 0xff);
  plVar18 = (longlong *)(uVar17 + 0x30);
  *(undefined4 *)(uVar17 + 0x38) = 0;
  if (0x7fffffff < *(uint *)(uVar17 + 0x3c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar18,0);
  }
  iVar8 = *(int *)(uVar17 + 0x38);
  *(int *)(uVar17 + 0x38) = iVar8 + 1;
  if (*(int *)(uVar17 + 0x3c) < iVar8 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar18,iVar8);
  }
  *(undefined4 *)(*plVar18 + (longlong)iVar8 * 4) = DAT_146ac9ac0;
  local_res20 = (longlong *)0xffffffffffffffff;
  plVar11 = (longlong *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  local_b8 = *plVar11;
  uStack_b0 = (undefined4)plVar11[1];
  iStack_ac = *(undefined4 *)((longlong)plVar11 + 0xc);
  local_a8 = plVar11[2];
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>::
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSequenceID>
            (&local_68,*plVar11,0xffffffffffffffff);
  lVar6 = local_b8;
  lVar15 = CONCAT44(iStack_ac,uStack_b0);
  iVar8 = (int)local_a8;
  do {
    piVar20 = (int *)0x0;
    if (((lVar6 == local_68) && (lVar15 == local_60)) && (iVar8 == local_58)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      AlgoImpl::
      IntroSortInternal<FMovieSceneSequenceID,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<FMovieSceneSequenceID>_>_>
                (*plVar18,(longlong)*(int *)(uVar17 + 0x38),local_res8 & 0xff,&local_res8);
      return;
    }
    iVar12 = *(int *)(lVar15 + 0x1c);
    if (iVar12 == -1) {
      local_c8 = 0;
      plVar11 = &local_c8;
      uStack_c0 = 0;
    }
    else {
      uStack_b0 = *(undefined4 *)(*(longlong *)(lVar6 + 0x40) + 4 + (longlong)iVar12 * 0xc);
      local_b8 = *(longlong *)(lVar6 + 0x50) +
                 (longlong)*(int *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar12 * 0xc) * 4;
      plVar11 = &local_b8;
    }
    iVar12 = *(int *)(*plVar11 + (longlong)iVar8 * 4);
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar12);
    if ((int)local_res10[1] != *(int *)((longlong)local_res10 + 0x34)) {
      plVar11 = (longlong *)local_res10[8];
      if ((longlong *)local_res10[8] == (longlong *)0x0) {
        plVar11 = local_res10 + 7;
      }
      iVar7 = *(int *)((longlong)plVar11 +
                      ((longlong)(int)local_res10[9] - 1U & (longlong)iVar12) * 4);
      if (iVar7 != -1) {
        do {
          piVar13 = (int *)((longlong)iVar7 * 0xb8 + *local_res10);
          if (*piVar13 == iVar12) {
            if ((iVar7 != -1) && (piVar13 != (int *)0x0)) {
              piVar20 = piVar13 + 2;
            }
            break;
          }
          iVar7 = piVar13[0x2c];
        } while (iVar7 != -1);
      }
    }
    lVar9 = FWeakObjectPtr::Get(piVar20 + 0x20);
    if (lVar9 == 0) {
      lVar9 = FUN_141796df0(piVar20);
      if (lVar9 == 0) {
LAB_141f5b85e:
        lVar9 = 0;
      }
      else {
        lVar10 = UMovieSceneSequence::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_141f5b85e;
      }
      FWeakObjectPtr::operator=(piVar20 + 0x20,lVar9);
      if (lVar9 != 0) goto LAB_141f5b879;
      param_5._0_4_ = 0;
    }
    else {
LAB_141f5b879:
      lVar9 = (**(code **)(*local_res18 + 8))(local_res18,lVar9);
      param_5._0_4_ = *(undefined4 *)(lVar9 + 0x180);
    }
    iVar12 = *(int *)(uVar17 + 0x38);
    *(int *)(uVar17 + 0x38) = iVar12 + 1;
    if (*(int *)(uVar17 + 0x3c) < iVar12 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar18,iVar12);
    }
    *(undefined4 *)(*plVar18 + (longlong)iVar12 * 4) = local_res20._0_4_;
    local_78 = &local_res20;
    local_70 = &param_5;
    TSet<TTuple<FKeyHandle,int>,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FKeyHandle_const_&,int_const_&>_>
              (local_res8 + 0x50,&local_80,&local_78,0);
    iVar8 = iVar8 + 1;
    do {
      if (*(int *)(lVar15 + 0x1c) == -1) {
        local_a0 = 0;
        plVar11 = &local_a0;
        local_98 = 0;
      }
      else {
        piVar20 = (int *)(*(longlong *)(lVar6 + 0x40) + (longlong)*(int *)(lVar15 + 0x1c) * 0xc);
        iStack_88 = piVar20[1];
        plVar11 = &local_90;
        local_90 = *(longlong *)(lVar6 + 0x50) + (longlong)*piVar20 * 4;
      }
      if ((iVar8 < 0) || ((int)plVar11[1] <= iVar8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) break;
      if ((*(int *)(lVar15 + 0x10) != -1) || (bVar5 = false, *(int *)(lVar15 + 0x14) == 0)) {
        bVar5 = true;
      }
      if (bVar5) {
        puVar2 = (undefined8 *)(lVar15 + 0x10);
        iVar8 = (int)*puVar2;
        lVar15 = lVar6;
        if (iVar8 != -1) {
          lVar15 = ((longlong)*(int *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar8 * 0xc) +
                   (longlong)(int)((ulonglong)*puVar2 >> 0x20)) * 0x20 + *(longlong *)(lVar6 + 0x30)
          ;
        }
      }
      else {
        lVar15 = 0;
      }
      iVar8 = 0;
    } while (lVar15 != 0);
  } while( true );
}



// FUNCTION 141f5b9d0 FUN_141f5b9d0 body=365 status=ok
// SIG undefined FUN_141f5b9d0(void)

void FUN_141f5b9d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x20) + 8);
  if ((uVar5 & 0x30) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar5 & 0x69;
  }
  UMovieSceneSignedObject::PostInitProperties(param_1);
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (pplVar3 = (longlong **)(param_1 + 0xd0), *pplVar3 == (longlong *)0x0)) {
    plVar7 = (longlong *)operator_new(0x48);
    plVar8 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144f1c890;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[7] = 0;
      plVar7[8] = 0;
      plVar8 = plVar7;
    }
    plVar7 = plVar8 + 2;
    local_18 = plVar7;
    local_10 = plVar8;
    TSharedRef<FStringTable,1>::Init<FStringTable>(&local_18,plVar7);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_28 = plVar7;
    local_20 = plVar8;
    if (pplVar3 != &local_28) {
      *pplVar3 = plVar7;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_20);
    }
    plVar7 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141f5bb40 PostInitProperties body=124 status=ok
// SIG undefined PostInitProperties(void)

void UMovieSceneSignedObject::PostInitProperties(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_18 [16];
  
  FUN_1417931d0();
  if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
    plVar2 = (longlong *)GetPrivateStaticClass();
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar4 = plVar2[0x1f];
    }
    if (((*(int *)(param_1 + 0x34) == *(int *)(lVar4 + 0x34) &&
         *(int *)(param_1 + 0x30) == *(int *)(lVar4 + 0x30)) &&
        *(int *)(param_1 + 0x2c) == *(int *)(lVar4 + 0x2c)) &&
        *(int *)(param_1 + 0x28) == *(int *)(lVar4 + 0x28)) {
      puVar3 = (undefined8 *)FGuid::NewGuid(local_18);
      uVar1 = puVar3[1];
      *(undefined8 *)(param_1 + 0x28) = *puVar3;
      *(undefined8 *)(param_1 + 0x30) = uVar1;
    }
  }
  return;
}



// FUNCTION 141f5bbe0 PostLoad body=397 status=ok
// SIG undefined PostLoad(void)

void UMovieScene::PostLoad(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(lVar9 + lVar8) == 0) {
        iVar7 = *(int *)(param_1 + 0x88);
        iVar4 = (iVar7 - iVar10) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar8 + (longlong)iVar10 * 8),
                     (void *)(lVar8 + (longlong)(iVar10 + 1) * 8),(longlong)iVar4 << 3);
          iVar7 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x80);
      }
      else {
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 8;
      }
    } while (iVar10 < *(int *)(param_1 + 0x88));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar9 = 0x28;
    do {
      lVar8 = *(longlong *)(param_1 + 0x70);
      iVar7 = 0;
      if (0 < *(int *)(lVar9 + lVar8)) {
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar9 + -8 + lVar8);
          piVar2 = (int *)(lVar9 + lVar8);
          if (*(longlong *)((longlong)plVar3 + lVar6) == 0) {
            for (plVar5 = plVar3; plVar5 != plVar3 + *piVar2; plVar5 = plVar5 + 1) {
              if (*plVar5 == 0) {
                iVar4 = (int)((longlong)plVar5 - (longlong)plVar3 >> 3);
                if (iVar4 != -1) {
                  ::_guard_xfg_dispatch_icall_nop
                            (plVar3 + iVar4,plVar3 + iVar4 + 1,
                             (longlong)((*piVar2 - iVar4) + -1) << 3);
                  *piVar2 = *piVar2 + -1;
                }
                break;
              }
            }
          }
          else {
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 8;
          }
          lVar8 = *(longlong *)(param_1 + 0x70);
        } while (iVar7 < *(int *)(lVar9 + lVar8));
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x30;
    } while (iVar10 < *(int *)(param_1 + 0x78));
  }
  UpgradeTimeRanges(param_1);
  lVar9 = *(longlong *)(param_1 + 0x50);
  lVar8 = (longlong)*(int *)(param_1 + 0x58) * 0x90 + lVar9;
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0x90) {
    if (*(longlong *)(lVar9 + 0x60) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar9 + 0x60) + 8);
      *puVar1 = *puVar1 & 0xffffffdf;
      FMovieSceneSpawnable::MarkSpawnableTemplate();
    }
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 141f5bd70 PostLoad body=304 status=ok
// SIG undefined PostLoad(void)

void UMovieSceneSubSection::PostLoad(longlong *param_1)

{
  float fVar1;
  undefined4 local_28 [2];
  undefined8 local_20 [3];
  
  FUN_141f52860(local_20);
  fVar1 = *(float *)(param_1 + 0x1f);
  if ((fVar1 != DAT_1464d3e2c) || (fVar1 = *(float *)((longlong)param_1 + 0xec), fVar1 != 0.0)) {
    UpgradeLegacyMovieSceneTime(local_28,param_1,local_20[0],(double)fVar1);
    *(undefined4 *)(param_1 + 0x1c) = local_28[0];
  }
  if (*(float *)((longlong)param_1 + 0xfc) != DAT_1464d3e2c) {
    *(float *)((longlong)param_1 + 0xe4) = *(float *)((longlong)param_1 + 0xfc);
  }
  fVar1 = *(float *)(param_1 + 0x20);
  if (fVar1 == DAT_1464d3e2c) {
    fVar1 = *(float *)(param_1 + 0x1e);
  }
  else {
    *(float *)(param_1 + 0x1e) = fVar1;
  }
  if (0.0 < fVar1) {
    UpgradeLegacyMovieSceneTime(local_28,param_1,local_20[0],(double)fVar1);
    if ((*(uint *)(param_1 + 0x16) >> 1 & 1) == 0) {
      (**(code **)(*param_1 + 0x70))(param_1,1);
      *(undefined4 *)(param_1 + 0x14) = local_28[0];
    }
  }
  if (0.0 < *(float *)((longlong)param_1 + 0xf4)) {
    UpgradeLegacyMovieSceneTime
              (local_28,param_1,local_20[0],(double)*(float *)((longlong)param_1 + 0xf4));
    if ((*(uint *)(param_1 + 0x16) >> 1 & 1) == 0) {
      (**(code **)(*param_1 + 0x70))(param_1,1);
      *(undefined4 *)(param_1 + 0x14) = local_28[0];
    }
  }
  UObject::PostLoad(param_1);
  return;
}



// FUNCTION 141f5bea0 PostLoad body=68 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UMovieSceneTrack::PostLoad(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UObject::PostLoad();
  local_18 = _DAT_1464d3e38;
  uStack_14 = uRam00000001464d3e3c;
  uStack_10 = uRam00000001464d3e40;
  uStack_c = uRam00000001464d3e44;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (iVar2 < 1) {
    uVar1 = *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = (uVar1 >> 3 ^ uVar1) & 2 ^ uVar1;
  }
  return;
}



// FUNCTION 141f5bef0 PostSerialize body=676 status=ok
// SIG undefined PostSerialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneEvaluationTemplate::PostSerialize(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 auStack_3a8 [32];
  int local_388;
  uint uStack_384;
  uint *puStack_380;
  uint local_378;
  uint uStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  int iStack_360;
  uint uStack_35c;
  uint *local_358;
  uint uStack_350;
  uint uStack_34c;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  uint *puStack_330;
  uint uStack_328;
  uint uStack_324;
  undefined8 uStack_320;
  undefined1 local_318 [752];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar1 = (uint *)(param_1 + 2);
    uVar2 = *(uint *)(param_1 + 5);
    local_388 = 0;
    uStack_384 = 1;
    uStack_374 = 0;
    iStack_370 = 0;
    if (uVar2 != 0) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      uVar3 = *puVar10;
      iStack_370 = 0;
      local_388 = 0;
      while (uVar3 == 0) {
        lVar8 = (longlong)local_388;
        iStack_370 = iStack_370 + 0x20;
        iVar6 = local_388 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_388;
        local_388 = iVar6;
        if (bVar4) goto LAB_141f5bfe4;
        uVar3 = puVar10[lVar8 + 1];
      }
      uStack_384 = -uVar3 & uVar3;
      iVar6 = 0x1f;
      if (uStack_384 != 0) {
        for (; uStack_384 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_384 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_374 = (iStack_370 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_374) {
LAB_141f5bfe4:
        uStack_374 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 5);
    uStack_350 = 0xffffffff;
    uStack_34c = uStack_374;
    local_348 = CONCAT44(uStack_36c,iStack_370);
    uStack_338 = CONCAT44(uStack_384,local_388);
    local_378 = -1 << ((byte)uVar3 & 0x1f);
    uVar9 = uVar3 & 0xffffffe0;
    local_340._0_4_ = SUB84(param_1,0);
    local_340._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_368 = (undefined4)local_340;
    uStack_364 = local_340._4_4_;
    iStack_360 = local_388;
    uStack_35c = uStack_384;
    puStack_380 = puVar1;
    uStack_374 = uVar3;
    local_358 = puVar1;
    local_340 = param_1;
    puStack_330 = puVar1;
    uStack_320 = local_348;
    uStack_328 = uStack_350;
    uStack_324 = uStack_34c;
    if (uVar3 != uVar2) {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      uVar7 = puVar10[(int)uVar3 >> 5] & local_378;
      iVar6 = (int)uVar3 >> 5;
      while (uVar7 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141f5c0c5;
        uVar7 = puVar10[(longlong)iVar6 + 1];
        local_378 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_374 = (uVar9 - iVar6) + 0x1f;
      uVar3 = uStack_374;
      if ((int)uVar2 < (int)uStack_374) {
LAB_141f5c0c5:
        uStack_374 = uVar2;
        uVar3 = uVar2;
      }
    }
    while( true ) {
      if (((uStack_34c == uVar3) && (local_358 == puVar1)) &&
         ((longlong *)CONCAT44(uStack_364,local_368) == param_1)) {
        return;
      }
      if ((*(uint *)(param_1 + 0x31) == 0xffffffff) ||
         (*(uint *)(param_1 + 0x31) <
          *(uint *)((longlong)(int)uStack_34c * 0x108 + *(longlong *)CONCAT44(uStack_364,local_368))
         )) break;
      uStack_350 = uStack_350 & ~uStack_35c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_360);
    }
    ::_guard_xfg_dispatch_icall_nop(local_318,0,0x2f0);
    uVar5 = FMovieSceneEvaluationTemplate(local_318);
    operator=(param_1,uVar5);
    ~FMovieSceneEvaluationTemplate(local_318);
  }
  return;
}



// FUNCTION 141f5c1a0 PostSerialize body=880 status=ok
// SIG undefined PostSerialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneEvaluationTrack::PostSerialize(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  int local_48 [2];
  int *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_50 = param_1;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar16 = 0;
    local_40 = (int *)0x0;
    local_38 = 0;
    uVar12 = uVar16;
    if (0 < *(int *)(param_1 + 0xa8)) {
      do {
        plVar7 = (longlong *)(uVar16 + *(longlong *)(param_1 + 0xa0));
        bVar13 = *(byte *)(uVar16 + 0x30 + *(longlong *)(param_1 + 0xa0));
        if ((bVar13 & 1) == 0) {
LAB_141f5c231:
          uVar1 = local_38;
          lVar4 = (longlong)(int)local_38;
          iVar3 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,iVar3);
          if (local_38._4_4_ < iVar3) {
            TArray<int,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                      (local_48,uVar1 & 0xffffffff);
          }
          piVar8 = local_48;
          if (local_40 != (int *)0x0) {
            piVar8 = local_40;
          }
          piVar8[lVar4] = (int)uVar12;
        }
        else {
          if ((bVar13 & 2) == 0) {
            plVar7 = (longlong *)*plVar7;
          }
          lVar4 = (**(code **)(*plVar7 + 0x20))();
          lVar5 = FMovieSceneEvalTemplate::StaticStruct();
          if (lVar4 == lVar5) goto LAB_141f5c231;
        }
        uVar17 = (int)uVar12 + 1;
        uVar16 = uVar16 + 0x38;
        uVar12 = (ulonglong)uVar17;
      } while ((int)uVar17 < *(int *)(param_1 + 0xa8));
      uVar12 = local_38 & 0xffffffff;
      if ((int)local_38 != 0) {
        local_60 = *(longlong *)(param_1 + 0x28);
        lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x58 + local_60;
        local_58 = lVar4;
        if (local_60 != lVar4) {
          piVar8 = (int *)(local_60 + 0x18);
          do {
            lVar5 = 0;
            lVar19 = (longlong)piVar8[0xe];
            if (piVar8[0xe] != 0) {
              iVar3 = 0;
              piVar9 = local_48;
              if (local_40 != (int *)0x0) {
                piVar9 = local_40;
              }
              iVar14 = 0;
              piVar10 = piVar9 + (int)uVar12;
              if (piVar9 != piVar10) {
                piVar6 = *(int **)(piVar8 + 0xc);
                if (*(int **)(piVar8 + 0xc) == (int *)0x0) {
                  piVar6 = piVar8;
                }
                do {
                  if (*piVar9 == *piVar6) {
                    bVar13 = 0;
                    goto LAB_141f5c330;
                  }
                  piVar9 = piVar9 + 1;
                } while (piVar9 != piVar10);
              }
              bVar13 = 1;
LAB_141f5c330:
              do {
                iVar15 = iVar14 + 1;
                lVar5 = lVar5 + 1;
                if (lVar5 < lVar19) {
                  piVar9 = local_48;
                  if (local_40 != (int *)0x0) {
                    piVar9 = local_40;
                  }
                  lVar4 = lVar5 * 0xc;
                  do {
                    if (piVar9 != piVar9 + (int)local_38) {
                      piVar10 = *(int **)(piVar8 + 0xc);
                      if (*(int **)(piVar8 + 0xc) == (int *)0x0) {
                        piVar10 = piVar8;
                      }
                      piVar6 = piVar9;
                      do {
                        if (*piVar6 == *(int *)((longlong)piVar10 + lVar4)) {
                          bVar2 = 0;
                          goto LAB_141f5c3a4;
                        }
                        piVar6 = piVar6 + 1;
                      } while (piVar6 != piVar9 + (int)local_38);
                    }
                    bVar2 = 1;
LAB_141f5c3a4:
                    if (bVar13 != bVar2) break;
                    iVar15 = iVar15 + 1;
                    lVar5 = lVar5 + 1;
                    lVar4 = lVar4 + 0xc;
                  } while (lVar5 < lVar19);
                }
                local_68 = iVar14;
                if (bVar13 != 0) {
                  if (iVar3 != iVar14) {
                    piVar9 = *(int **)(piVar8 + 0xc);
                    if (*(int **)(piVar8 + 0xc) == (int *)0x0) {
                      piVar9 = piVar8;
                    }
                    ::_guard_xfg_dispatch_icall_nop
                              (piVar9 + (longlong)iVar3 * 3,piVar9 + (longlong)iVar14 * 3,
                               (longlong)(iVar15 - iVar14) * 0xc);
                  }
                  iVar3 = iVar3 + (iVar15 - iVar14);
                }
                bVar13 = bVar13 ^ 1;
                iVar14 = iVar15;
              } while (lVar5 < lVar19);
              piVar8[0xe] = iVar3;
              uVar12 = local_38 & 0xffffffff;
              lVar4 = local_58;
            }
            local_60 = local_60 + 0x58;
            piVar8 = piVar8 + 0x16;
            param_1 = local_50;
          } while (local_60 != lVar4);
        }
      }
      if (local_40 != (int *)0x0) {
        FMemory::Free();
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xa0);
  plVar18 = plVar7 + (longlong)*(int *)(param_1 + 0xa8) * 7;
  for (; plVar7 != plVar18; plVar7 = plVar7 + 7) {
    if ((*(byte *)(plVar7 + 6) & 1) != 0) {
      plVar11 = plVar7;
      if ((*(byte *)(plVar7 + 6) & 2) == 0) {
        plVar11 = (longlong *)*plVar7;
      }
      (**(code **)(*plVar11 + 8))();
    }
  }
  if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
    plVar7 = (longlong *)(param_1 + 0xb0);
    if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    (**(code **)(*plVar7 + 8))();
  }
  return;
}



// FUNCTION 141f5c510 FUN_141f5c510 body=3920 status=ok
// SIG undefined FUN_141f5c510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f5c510(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *****ppppplVar14;
  longlong lVar15;
  void *_Src;
  undefined1 *puVar16;
  uint *puVar17;
  uint *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 auStack_468 [32];
  undefined1 local_448;
  char local_438;
  longlong *local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  ulonglong uStack_410;
  int local_408;
  uint uStack_404;
  uint *puStack_400;
  int local_3f8;
  int iStack_3f4;
  int iStack_3f0;
  undefined4 uStack_3ec;
  int local_3e8 [2];
  longlong local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  uint local_398;
  undefined4 uStack_394;
  undefined8 local_390;
  uint uStack_388;
  int iStack_384;
  ulonglong local_380;
  int iStack_378;
  int iStack_374;
  undefined8 local_370;
  undefined4 uStack_368;
  int iStack_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  uint *local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 local_328 [4];
  undefined4 local_324;
  undefined1 local_320;
  undefined4 local_31c;
  undefined8 local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  uint *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  uint *local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint *local_278;
  longlong local_270;
  undefined4 uStack_268;
  longlong local_260;
  undefined4 local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  undefined4 uStack_238;
  longlong local_230;
  undefined4 local_228;
  longlong local_220;
  undefined4 uStack_218;
  longlong local_210;
  undefined4 local_208;
  longlong local_200;
  undefined4 uStack_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  longlong ****local_1e0 [2];
  byte local_1d0;
  longlong ****local_1c8 [2];
  byte local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  uint local_198 [4];
  uint *local_188;
  undefined8 local_180;
  undefined4 local_178;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined1 local_158 [64];
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f0 [48];
  undefined1 *local_c0;
  int local_b8;
  int local_b4;
  undefined1 local_a8 [24];
  longlong local_90 [6];
  longlong *local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  local_3e0 = param_1;
  local_360 = param_3;
  (**(code **)(*param_2 + 0x280))(param_2,local_1c8);
  (**(code **)(*param_2 + 0x278))(param_2,local_1e0);
  if (((local_1b8 & 1) == 0) && ((local_1d0 & 1) == 0)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  uVar23 = 0;
  local_430 = (longlong *)0xffffffffffffffff;
  local_318 = 0xffffffffffffffff;
  local_328[0] = 2;
  local_324 = 0;
  local_320 = 2;
  local_31c = 0;
  local_310 = 0xffffffffffffffff;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_438 = cVar8;
  local_430 = (longlong *)(**(code **)(*param_2 + 0x2f0))(param_2);
  uVar25 = uVar23;
  if (0 < (int)local_430[1]) {
    do {
      lVar15 = *(longlong *)(uVar23 + *local_430);
      iVar24 = (int)uVar25;
      if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0xb0) & 1) != 0)) {
        if ((((*(char *)(lVar15 + 0x90) == '\x02') || (*(char *)(lVar15 + 0x98) == '\x02')) ||
            ((*(int *)(lVar15 + 0x94) <= *(int *)(lVar15 + 0x9c) &&
             ((*(int *)(lVar15 + 0x94) != *(int *)(lVar15 + 0x9c) ||
              ((*(char *)(lVar15 + 0x90) != '\0' && (*(char *)(lVar15 + 0x98) != '\0')))))))) &&
           (FUN_14161cb00(param_1 + 0x18,local_3e8,lVar15 + 0x28,0), cVar8 != '\0')) {
          cVar8 = *(char *)(lVar15 + 0x90);
          cVar3 = *(char *)(lVar15 + 0x98);
          iVar9 = *(int *)(lVar15 + 0x94);
          iVar10 = *(int *)(lVar15 + 0x9c);
          local_3b8 = &PTR_FUN_144f1c870;
          local_3b0 = local_328;
          uStack_394 = 0;
          local_418 = (uint *)CONCAT44(0x80000000,iVar24);
          uStack_410 = uStack_410 & 0xffffffffffffff00;
          local_398 = 0xffffffff;
          local_3a0 = (int)uStack_410;
          local_3a8 = local_418;
          local_370 = CONCAT71(local_370._1_7_,cVar8);
          local_370 = CONCAT44(iVar9,(undefined4)local_370);
          uStack_368 = CONCAT31(uStack_368._1_3_,cVar3);
          iStack_364 = iVar10;
          FMovieSceneEvaluationTree::AddTimeRange(local_328,&local_370,&local_3b8);
          if ((cVar8 != '\x02') && (0 < *(int *)(lVar15 + 0xa0))) {
            local_3c0 = CONCAT31(local_3c0._1_3_,1);
            local_3c8 = (uint *)CONCAT44(0x80000000,iVar24);
            local_3b8 = &PTR_FUN_144f1c870;
            local_3b0 = local_328;
            local_3a0 = local_3c0;
            local_3d8 = 0xffffffff;
            local_3a8 = local_3c8;
            local_390 = CONCAT71(local_390._1_7_,1);
            local_390 = CONCAT44(iVar9 - *(int *)(lVar15 + 0xa0),(undefined4)local_390);
            uStack_388 = uStack_388 & 0xffffff00;
            iStack_384 = iVar9;
            FMovieSceneEvaluationTree::AddTimeRange(local_328,&local_390,&local_3b8);
          }
          param_1 = local_3e0;
          if ((cVar3 != '\x02') && (0 < *(int *)(lVar15 + 0xa4))) {
            local_420 = CONCAT31(local_420._1_3_,2);
            local_3b8 = &PTR_FUN_144f1c870;
            local_3b0 = local_328;
            iStack_374 = *(int *)(lVar15 + 0xa4) + iVar10;
            local_3a0 = local_420;
            local_428 = (uint *)CONCAT44(0x80000000,iVar24);
            local_3d0 = 0xffffffff;
            local_3a8 = local_428;
            local_380 = CONCAT44(iVar10,(int)local_380) & 0xffffffffffffff00;
            iStack_378 = CONCAT31(iStack_378._1_3_,1);
            FMovieSceneEvaluationTree::AddTimeRange(local_328,&local_380,&local_3b8);
            param_1 = local_3e0;
          }
        }
      }
      uVar25 = (ulonglong)(iVar24 + 1U);
      uVar23 = uVar23 + 8;
      cVar8 = local_438;
    } while ((int)(iVar24 + 1U) < (int)local_430[1]);
  }
  plVar12 = local_430;
  if (local_438 != '\0') {
    local_50 = '\0';
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = (uint *)0x0;
    local_180 = 0;
    local_174 = 0;
    local_168 = (undefined1 *)0x0;
    local_160 = 0;
    local_178 = 0xffffffff;
    FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
              (&local_3b8,local_328);
    while( true ) {
      uVar7 = local_360;
      lVar15 = local_3e0;
      if (((int)local_3a8 == -1) && (local_3a8._4_4_ != 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) break;
      TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
      TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>(&local_358);
      plVar20 = local_358;
      if (uStack_350 != 0) {
        iVar24 = *(int *)(uStack_350 + 0x1c);
        if (iVar24 == -1) {
          local_250 = 0;
          plVar11 = &local_250;
          local_248 = 0;
        }
        else {
          uStack_368 = *(undefined4 *)(local_358[8] + (longlong)iVar24 * 0xc + 4);
          plVar11 = &local_370;
          local_370 = local_358[10] +
                      (longlong)*(int *)(local_358[8] + (longlong)iVar24 * 0xc) * 0xc;
        }
        local_418 = (uint *)*plVar11;
        uStack_410 = plVar11[1];
        if ((-1 < (int)local_348) && ((int)local_348 < (int)plVar11[1])) {
          local_118 = (undefined1 *)0x0;
          local_110 = 0;
          if ((local_1d0 & 1) == 0) {
            local_3d8 = 0xffffffffffffffff;
            local_288 = (undefined4)local_358;
            uStack_284 = local_358._4_4_;
            uStack_280 = (undefined4)uStack_350;
            uStack_27c = uStack_350._4_4_;
            local_278 = local_348;
            TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
            TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>(&local_408,local_358);
            iVar24 = local_3f8;
            puVar17 = puStack_400;
            puVar5 = (uint *)CONCAT44(uStack_284,local_288);
            puVar22 = (uint *)CONCAT44(uStack_404,local_408);
            puVar18 = (uint *)CONCAT44(uStack_27c,uStack_280);
            iVar9 = (int)local_278;
LAB_141f5ce90:
            uVar25 = local_110;
            if (((puVar5 != puVar22) || (puVar18 != puVar17)) || (iVar9 != iVar24)) {
              uVar4 = puVar18[7];
              if (uVar4 == 0xffffffff) {
                local_1f0 = 0;
                plVar20 = &local_1f0;
                local_1e8 = 0;
              }
              else {
                uStack_1f8 = *(undefined4 *)
                              (*(longlong *)(puVar5 + 0x10) + (longlong)(int)uVar4 * 0xc + 4);
                plVar20 = &local_200;
                local_200 = *(longlong *)(puVar5 + 0x14) +
                            (longlong)
                            *(int *)(*(longlong *)(puVar5 + 0x10) + (longlong)(int)uVar4 * 0xc) *
                            0xc;
              }
              uStack_388 = *(uint *)(*plVar20 + (longlong)iVar9 * 0xc);
              lVar15 = (longlong)(int)local_110;
              local_390 = *(undefined8 *)(*plVar12 + (longlong)(int)uStack_388 * 8);
              iStack_384 = CONCAT31(iStack_384._1_3_,
                                    *(undefined1 *)(*plVar20 + (longlong)iVar9 * 0xc + 8));
              iVar10 = (int)local_110 + 1;
              local_110 = CONCAT44(local_110._4_4_,iVar10);
              if (local_110._4_4_ < iVar10) {
                TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_158,uVar25 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_118 != (undefined1 *)0x0) {
                puVar19 = local_118;
              }
              *(undefined8 *)(puVar19 + lVar15 * 0x10) = local_390;
              *(ulonglong *)((longlong)(puVar19 + lVar15 * 0x10) + 8) =
                   CONCAT44(iStack_384,uStack_388);
              iVar9 = iVar9 + 1;
              do {
                uVar4 = puVar18[7];
                if (uVar4 == 0xffffffff) {
                  local_260 = 0;
                  plVar20 = &local_260;
                  local_258 = 0;
                }
                else {
                  uStack_268 = *(undefined4 *)
                                (*(longlong *)(puVar5 + 0x10) + (longlong)(int)uVar4 * 0xc + 4);
                  plVar20 = &local_270;
                  local_270 = *(longlong *)(puVar5 + 0x14) +
                              (longlong)
                              *(int *)(*(longlong *)(puVar5 + 0x10) + (longlong)(int)uVar4 * 0xc) *
                              0xc;
                }
                local_418 = (uint *)*plVar20;
                uStack_410 = plVar20[1];
                plVar12 = local_430;
                if ((-1 < iVar9) && (iVar9 < (int)plVar20[1])) break;
                if ((puVar18[4] == 0xffffffff) && (puVar18[5] != 0)) {
                  puVar18 = (uint *)0x0;
                }
                else {
                  puVar1 = puVar18 + 4;
                  iVar9 = (int)*(undefined8 *)puVar1;
                  puVar18 = puVar5;
                  if (iVar9 != -1) {
                    puVar18 = (uint *)(((longlong)
                                        *(int *)(*(longlong *)(puVar5 + 8) + (longlong)iVar9 * 0xc)
                                       + (longlong)(int)((ulonglong)*(undefined8 *)puVar1 >> 0x20))
                                       * 0x20 + *(longlong *)(puVar5 + 0xc));
                  }
                }
                iVar9 = 0;
              } while (puVar18 != (uint *)0x0);
              goto LAB_141f5ce90;
            }
          }
          else {
            TSet<TTuple<int,FSegmentBlendData>,TDefaultMapHashableKeyFuncs<int,FSegmentBlendData,0>,FDefaultSetAllocator>
            ::Reset(&local_1a8);
            local_3d0 = 0xffffffffffffffff;
            local_2a0 = (undefined4)local_358;
            uStack_29c = local_358._4_4_;
            uStack_298 = (undefined4)uStack_350;
            uStack_294 = uStack_350._4_4_;
            local_290 = local_348;
            TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
            TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>
                      (&local_408,plVar20,0xffffffffffffffff);
            iVar24 = local_3f8;
            puVar5 = puStack_400;
            puVar22 = (uint *)CONCAT44(uStack_29c,local_2a0);
            puVar18 = (uint *)CONCAT44(uStack_294,uStack_298);
            iVar9 = (int)local_290;
LAB_141f5c9b0:
            if (((puVar22 != (uint *)CONCAT44(uStack_404,local_408)) || (puVar18 != puVar5)) ||
               (iVar9 != iVar24)) {
              uVar4 = puVar18[7];
              if (uVar4 == 0xffffffff) {
                local_230 = 0;
                plVar20 = &local_230;
                local_228 = 0;
              }
              else {
                uStack_238 = *(undefined4 *)
                              (*(longlong *)(puVar22 + 0x10) + (longlong)(int)uVar4 * 0xc + 4);
                plVar20 = &local_240;
                local_240 = *(longlong *)(puVar22 + 0x14) +
                            (longlong)
                            *(int *)(*(longlong *)(puVar22 + 0x10) + (longlong)(int)uVar4 * 0xc) *
                            0xc;
              }
              iStack_378 = *(int *)(*plVar20 + (longlong)iVar9 * 0xc);
              local_380 = *(ulonglong *)(*plVar12 + (longlong)iStack_378 * 8);
              iStack_374 = CONCAT31(iStack_374._1_3_,
                                    *(undefined1 *)(*plVar20 + (longlong)iVar9 * 0xc + 8));
              local_398 = *(uint *)(local_380 + 0xa8);
              if ((int)local_1a0 != local_174) {
                puVar19 = local_170;
                if (local_168 != (undefined1 *)0x0) {
                  puVar19 = local_168;
                }
                iVar10 = *(int *)(puVar19 + (longlong)(int)(local_160 - 1U & local_398) * 4);
                while (iVar10 != -1) {
                  lVar15 = (longlong)iVar10 * 0x60;
                  if (*(uint *)(local_1a8 + lVar15) == local_398) {
                    if ((iVar10 != -1) && (lVar15 = local_1a8 + lVar15, lVar15 != 0))
                    goto LAB_141f5cb01;
                    break;
                  }
                  iVar10 = *(int *)(local_1a8 + lVar15 + 0x58);
                }
              }
              local_418 = &local_398;
              FUN_141f31090(&local_1a8,local_3e8,&local_418,0);
              lVar15 = (longlong)local_3e8[0] * 0x60 + local_1a8;
LAB_141f5cb01:
              iVar10 = *(int *)(lVar15 + 0x50);
              *(int *)(lVar15 + 0x50) = iVar10 + 1;
              if (*(int *)(lVar15 + 0x54) < iVar10 + 1) {
                TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (lVar15 + 8,iVar10);
              }
              lVar13 = *(longlong *)(lVar15 + 0x48);
              if (*(longlong *)(lVar15 + 0x48) == 0) {
                lVar13 = lVar15 + 8;
              }
              puVar2 = (ulonglong *)(lVar13 + (longlong)iVar10 * 0x10);
              *puVar2 = local_380;
              puVar2[1] = CONCAT44(iStack_374,iStack_378);
              puVar17 = puVar18;
              iVar9 = iVar9 + 1;
              do {
                uVar4 = puVar17[7];
                if (uVar4 == 0xffffffff) {
                  local_210 = 0;
                  plVar12 = &local_210;
                  local_208 = 0;
                }
                else {
                  uStack_218 = *(undefined4 *)
                                (*(longlong *)(puVar22 + 0x10) + (longlong)(int)uVar4 * 0xc + 4);
                  plVar12 = &local_220;
                  local_220 = *(longlong *)(puVar22 + 0x14) +
                              (longlong)
                              *(int *)(*(longlong *)(puVar22 + 0x10) + (longlong)(int)uVar4 * 0xc) *
                              0xc;
                }
                local_418 = (uint *)*plVar12;
                uStack_410 = plVar12[1];
                plVar12 = local_430;
                if ((-1 < iVar9) && (puVar18 = puVar17, iVar9 < (int)uStack_410)) break;
                if ((puVar17[4] != 0xffffffff) || (puVar18 = (uint *)0x0, puVar17[5] == 0)) {
                  iVar9 = (int)*(undefined8 *)(puVar17 + 4);
                  puVar18 = puVar22;
                  if (iVar9 != -1) {
                    puVar18 = (uint *)(((longlong)
                                        *(int *)(*(longlong *)(puVar22 + 8) + (longlong)iVar9 * 0xc)
                                       + (longlong)
                                         (int)((ulonglong)*(undefined8 *)(puVar17 + 4) >> 0x20)) *
                                       0x20 + *(longlong *)(puVar22 + 0xc));
                  }
                }
                puVar17 = puVar18;
                iVar9 = 0;
              } while (puVar18 != (uint *)0x0);
              goto LAB_141f5c9b0;
            }
            iVar24 = (int)local_180;
            puStack_400 = local_198;
            local_408 = 0;
            uStack_404 = 1;
            iStack_3f4 = 0;
            iStack_3f0 = 0;
            if ((int)local_180 != 0) {
              puVar22 = local_198;
              if (local_188 != (uint *)0x0) {
                puVar22 = local_188;
              }
              uVar4 = *puVar22;
              while (uVar4 == 0) {
                iStack_3f0 = iStack_3f0 + 0x20;
                if ((int)((int)local_180 + -1 + ((int)local_180 + -1 >> 0x1f & 0x1fU)) >> 5 <=
                    local_408) {
                  iStack_3f4 = (int)local_180;
                  local_408 = local_408 + 1;
                  goto LAB_141f5ccdd;
                }
                uVar4 = puVar22[(longlong)local_408 + 1];
                local_408 = local_408 + 1;
              }
              uStack_404 = -uVar4 & uVar4;
              iVar9 = 0x1f;
              if (uStack_404 != 0) {
                for (; uStack_404 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uStack_404 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              iStack_3f4 = (iStack_3f0 - iVar9) + 0x1f;
              if ((int)local_180 < iStack_3f4) {
                iStack_3f4 = (int)local_180;
              }
            }
LAB_141f5ccdd:
            uStack_340 = CONCAT44(iStack_3f4,0xffffffff);
            local_2c8 = &local_1a8;
            local_358 = local_2c8;
            uStack_338 = CONCAT44(uStack_3ec,iStack_3f0);
            iStack_3f4 = (int)local_180;
            uStack_350 = CONCAT44(uStack_404,local_408);
            local_348 = puStack_400;
            local_3f8 = -1 << ((byte)local_180 & 0x1f);
            iStack_2c0 = local_408;
            uStack_2bc = uStack_404;
            local_2b8 = puStack_400;
            uStack_2b0 = uStack_340;
            local_2a8 = CONCAT44(uStack_3ec,iStack_3f0);
            while( true ) {
              if (((uStack_2b0._4_4_ == iVar24) && (local_2b8 == local_198)) &&
                 (local_2c8 == &local_1a8)) break;
              lVar15 = (longlong)uStack_2b0._4_4_ * 0x60 + *local_2c8;
              ppppplVar14 = local_1e0;
              if ((local_1d0 & 2) == 0) {
                ppppplVar14 = (longlong *****)local_1e0[0];
              }
              (*(code *)(*ppppplVar14)[1])(ppppplVar14,(void *)(lVar15 + 8));
              iVar9 = *(int *)(lVar15 + 0x50);
              if (iVar9 != 0) {
                if (local_110._4_4_ < (int)local_110 + iVar9) {
                  FUN_141f620a0(local_158);
                }
                _Src = *(void **)(lVar15 + 0x48);
                if (*(void **)(lVar15 + 0x48) == (void *)0x0) {
                  _Src = (void *)(lVar15 + 8);
                }
                puVar19 = local_158;
                if (local_118 != (undefined1 *)0x0) {
                  puVar19 = local_118;
                }
                _guard_xfg_dispatch_icall_nop
                          (puVar19 + (longlong)(int)local_110 * 0x10,_Src,(longlong)iVar9 << 4);
                local_110 = CONCAT44(local_110._4_4_,(int)local_110 + iVar9);
              }
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0 & ~uStack_2bc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_2c0);
            }
          }
          if ((local_1b8 & 1) != 0) {
            ppppplVar14 = local_1c8;
            if ((local_1b8 & 2) == 0) {
              ppppplVar14 = (longlong *****)local_1c8[0];
            }
            (*(code *)(*ppppplVar14)[2])(ppppplVar14,local_158);
          }
          local_108 = (undefined1)local_3b8;
          local_104 = local_3b8._4_4_;
          local_100 = (undefined1)local_3b0;
          local_fc = local_3b0._4_4_;
          local_f8 = 0xffffffff;
          local_f4 = 0;
          puVar19 = local_158;
          if (local_118 != (undefined1 *)0x0) {
            puVar19 = local_118;
          }
          local_c0 = (undefined1 *)0x0;
          puVar21 = puVar19 + (longlong)(int)local_110 * 0x10;
          local_b8 = 0;
          local_b4 = 0;
          iVar24 = local_b8;
          for (; puVar19 != puVar21; puVar19 = puVar19 + 0x10) {
            local_420._1_3_ = (undefined3)((uint)local_420 >> 8);
            local_420 = CONCAT31(local_420._1_3_,puVar19[0xc]);
            local_428 = (uint *)CONCAT44(0x80000000,*(undefined4 *)(puVar19 + 8));
            local_b8 = iVar24 + 1;
            if (local_b4 < iVar24 + 1) {
              TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_f0,iVar24);
            }
            puVar16 = local_f0;
            if (local_c0 != (undefined1 *)0x0) {
              puVar16 = local_c0;
            }
            *(uint **)(puVar16 + (longlong)iVar24 * 0xc) = local_428;
            *(undefined4 *)(puVar16 + (longlong)iVar24 * 0xc + 8) = local_420;
            iVar24 = local_b8;
          }
          local_b8 = iVar24;
          if (local_50 == '\0') {
LAB_141f5d243:
            FMovieSceneSegment::FMovieSceneSegment(local_a8);
            local_50 = '\x01';
          }
          else {
            cVar8 = FUN_141f44070(local_a8);
            plVar12 = local_430;
            if (cVar8 == '\0') {
              plVar20 = local_90;
              if (local_60 != (longlong *)0x0) {
                plVar20 = local_60;
              }
              plVar11 = (longlong *)((longlong)plVar20 + (longlong)local_58 * 0xc);
              for (; plVar20 != plVar11; plVar20 = (longlong *)((longlong)plVar20 + 0xc)) {
                local_3c0 = (undefined4)plVar20[1];
                local_3c8 = (uint *)*plVar20;
                local_448 = (undefined1)local_3c0;
                FMovieSceneEvaluationTemplate::AddSubSectionRange
                          (*(undefined8 *)(local_3e0 + 0x10),
                           *(undefined8 *)(*plVar12 + (longlong)(int)local_3c8 * 8),local_360,
                           local_a8);
              }
              if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
                FMemory::Free(local_60);
              }
              goto LAB_141f5d243;
            }
          }
          if (local_c0 != (undefined1 *)0x0) {
            FMemory::Free();
          }
          if (local_118 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
      }
      FMovieSceneEvaluationTreeRangeIterator::operator++(&local_3b8);
      plVar12 = local_430;
    }
    if (local_50 != '\0') {
      plVar20 = local_90;
      if (local_60 != (longlong *)0x0) {
        plVar20 = local_60;
      }
      plVar11 = (longlong *)((longlong)plVar20 + (longlong)local_58 * 0xc);
      for (; plVar20 != plVar11; plVar20 = (longlong *)((longlong)plVar20 + 0xc)) {
        local_420 = (undefined4)plVar20[1];
        local_428 = (uint *)*plVar20;
        local_448 = (undefined1)local_420;
        FMovieSceneEvaluationTemplate::AddSubSectionRange
                  (*(undefined8 *)(lVar15 + 0x10),
                   *(undefined8 *)(*plVar12 + (longlong)(int)local_428 * 8),uVar7,local_a8);
      }
    }
    local_160 = 0;
    if (local_168 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,FSegmentBlendData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1a8);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      FMemory::Free();
    }
  }
  if (local_2d8 != 0) {
    FMemory::Free();
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  if (local_2f8 != 0) {
    FMemory::Free();
  }
  if (local_308 != 0) {
    FMemory::Free();
  }
  if ((local_1d0 & 1) != 0) {
    ppppplVar14 = local_1e0;
    if ((local_1d0 & 2) == 0) {
      ppppplVar14 = (longlong *****)local_1e0[0];
    }
    local_1d0 = local_1d0 & 0xfe;
    (*(code *)**ppppplVar14)(ppppplVar14,0);
    if ((local_1d0 & 2) == 0) {
      FMemory::Free(local_1e0[0]);
    }
  }
  if ((local_1b8 & 1) != 0) {
    ppppplVar14 = local_1c8;
    if ((local_1b8 & 2) == 0) {
      ppppplVar14 = (longlong *****)local_1c8[0];
    }
    local_1b8 = local_1b8 & 0xfe;
    (*(code *)**ppppplVar14)(ppppplVar14,0);
    if ((local_1b8 & 2) == 0) {
      FMemory::Free(local_1c8[0]);
    }
  }
  return;
}



// FUNCTION 141f5d460 FUN_141f5d460 body=397 status=ok
// SIG undefined FUN_141f5d460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f5d460(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  longlong local_58;
  undefined8 **local_48 [2];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  (**(code **)(*param_2 + 0x280))(param_2,local_48);
  lVar3 = UMovieSceneSubTrack::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_141f5c510(param_1,param_2,param_3);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 400,local_78,param_2 + 5);
    if (((local_78[0] == -1) ||
        (lVar3 = (longlong)local_78[0] * 0x1c + *(longlong *)(lVar3 + 400), lVar3 == 0)) ||
       (iVar1 = *(int *)(lVar3 + 0x10), iVar1 == -1)) {
      local_70 = *param_3;
      uStack_6c = param_3[1];
      uStack_68 = param_3[2];
      uStack_64 = param_3[3];
      local_60 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x340);
      local_58 = param_1;
      (**(code **)(*param_2 + 0x298))(param_2,&local_70);
    }
    else {
      FUN_14161cb00(param_1 + 0x18,local_78,param_2 + 5,0);
      FUN_141f47e50(*(undefined8 *)(param_1 + 0x10),iVar1,0);
    }
  }
  if ((local_38 & 1) != 0) {
    pppuVar4 = local_48;
    if ((local_38 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    local_38 = local_38 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_38 & 2) == 0) {
      FMemory::Free(local_48[0]);
    }
  }
  return;
}



// FUNCTION 141f5d5f0 Push body=118 status=ok
// SIG undefined Push(void)

void FMovieSceneRootOverridePath::Push(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[10];
  param_1[10] = iVar1 + 1;
  if ((int)param_1[0xb] < iVar1 + 1) {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    puVar2 = param_1;
  }
  ::_guard_xfg_dispatch_icall_nop(puVar2 + 1,puVar2,(longlong)iVar1 << 2);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    puVar2 = param_1;
  }
  *puVar2 = param_2;
  return;
}



// FUNCTION 141f5d670 FUN_141f5d670 body=933 status=ok
// SIG undefined FUN_141f5d670(void)

void FUN_141f5d670(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  uint *puVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  undefined8 *local_res10;
  uint local_res18 [2];
  longlong local_res20;
  uint *local_88;
  int local_80;
  int local_7c;
  undefined8 **local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  uint *local_58;
  
  *(undefined4 *)(param_1 + 0x10) = param_3;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  local_res10 = param_2;
  local_res20 = param_4;
  FUN_141f422d0(param_4 + 8,param_1 + 0x10,*param_2);
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::Reset
            (param_1 + 0x30);
  local_80 = *(int *)(param_1 + 0x88);
  lVar13 = (longlong)local_80;
  puVar18 = (uint *)0x0;
  _Src = *(void **)(param_1 + 0x80);
  local_88 = (uint *)0x0;
  if (local_80 == 0) {
    local_7c = 0;
    iVar12 = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
    puVar18 = local_88;
    _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar13 << 2);
    iVar12 = local_80;
  }
  iVar14 = 0;
  iVar19 = iVar14;
  while (-1 < iVar14) {
    if (((*(int *)(param_1 + 0xf8) <= iVar14) || (iVar19 < 0)) ||
       (*(int *)(param_1 + 0x88) <= iVar19)) goto LAB_141f5d795;
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar14 * 4);
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar19 * 4);
    if (uVar10 == uVar9) {
      iVar14 = iVar14 + 1;
      iVar19 = iVar19 + 1;
    }
    else if (uVar9 < uVar10) {
      iVar19 = iVar19 + 1;
    }
    else {
      local_80 = iVar12 + 1;
      if (local_7c < local_80) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,iVar12);
        puVar18 = local_88;
      }
      puVar18[iVar12] = uVar10;
      iVar14 = iVar14 + 1;
      iVar12 = local_80;
    }
  }
LAB_141f5d7db:
  puVar6 = local_res10;
  puVar1 = puVar18 + iVar12;
  puVar11 = puVar18;
  puVar7 = local_58;
  do {
    if (puVar18 == puVar1) {
      if (puVar11 != (uint *)0x0) {
        local_58 = puVar7;
        FMemory::Free(puVar11);
      }
      return;
    }
    lVar13 = puVar6[1];
    local_res18[0] = *puVar18;
    if (*(int *)(lVar13 + 0xd8) != *(int *)(lVar13 + 0x104)) {
      lVar8 = *(longlong *)(lVar13 + 0x110);
      if (*(longlong *)(lVar13 + 0x110) == 0) {
        lVar8 = lVar13 + 0x108;
      }
      uVar10 = *(uint *)(lVar8 + ((longlong)*(int *)(lVar13 + 0x118) - 1U &
                                 (longlong)(int)local_res18[0]) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar11 = (uint *)((longlong)(int)uVar10 * 0xb8 + *(longlong *)(lVar13 + 0xd0));
          if (*puVar11 == local_res18[0]) {
            if (uVar10 != 0xffffffff) goto LAB_141f5d876;
            break;
          }
          uVar10 = puVar11[0x2c];
        } while (uVar10 != 0xffffffff);
      }
    }
    puVar11 = (uint *)0x0;
LAB_141f5d876:
    local_58 = puVar11 + 2;
    if (puVar11 == (uint *)0x0) {
      local_58 = (uint *)0x0;
    }
    if (local_58 != (uint *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x160);
      local_68 = 0;
      uStack_60 = 0;
      local_68 = FMovieSceneSubSequenceData::GetSequence();
      if (local_68 != 0) {
        uStack_60 = (**(code **)(*plVar2 + 8))(plVar2,local_68);
      }
      iVar12 = *(int *)(param_1 + 0x198);
      uVar16 = 0;
      if (iVar12 != 0) {
        puVar11 = *(uint **)(param_1 + 400);
        if (*(uint **)(param_1 + 400) == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 0x170);
        }
        uVar17 = (longlong)iVar12 & 0x3fffffffffffffff;
        if (puVar11 + iVar12 < puVar11) {
          uVar17 = uVar16;
        }
        if (uVar17 != 0) {
          do {
            uVar10 = *puVar11;
            if (local_res18[0] != 0) {
              uVar9 = local_res18[0] - uVar10 ^ uVar10 >> 0xd;
              uVar15 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
              uVar10 = (uVar10 - uVar15) - uVar9 ^ uVar15 >> 0xd;
              uVar9 = (uVar9 - uVar15) - uVar10 ^ uVar10 >> 0xc;
              uVar15 = (uVar15 - uVar9) - uVar10 ^ uVar9 << 0x10;
              uVar10 = (uVar10 - uVar15) - uVar9 ^ uVar15 >> 5;
              uVar9 = (uVar9 - uVar15) - uVar10 ^ uVar10 >> 3;
              uVar15 = (uVar15 - uVar9) - uVar10 ^ uVar9 << 10;
              uVar10 = (uVar10 - uVar15) - uVar9 ^ uVar15 >> 0xf;
            }
            local_res18[0] = uVar10;
            puVar11 = puVar11 + 1;
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar17);
        }
      }
      local_78 = &local_res10;
      local_70 = &local_68;
      local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,local_res18[0]);
      FUN_141f336a0(param_1 + 0x30,&local_res20,&local_78,0);
      puVar7 = local_58;
      if (local_68 != 0) {
        FUN_141f422d0(param_4 + 8,local_res18);
        puVar7 = local_58;
      }
    }
    local_58 = puVar7;
    puVar18 = puVar18 + 1;
    puVar11 = local_88;
    puVar7 = local_58;
  } while( true );
LAB_141f5d795:
  for (; (-1 < iVar14 && (iVar14 < *(int *)(param_1 + 0xf8))); iVar14 = iVar14 + 1) {
    lVar13 = *(longlong *)(param_1 + 0xf0);
    local_80 = iVar12 + 1;
    if (local_7c < local_80) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,iVar12);
      puVar18 = local_88;
    }
    puVar18[iVar12] = *(uint *)(lVar13 + (longlong)iVar14 * 4);
    iVar12 = local_80;
  }
  goto LAB_141f5d7db;
}



// FUNCTION 141f5da20 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141f5db5f;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_141f5db5f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x38 + *param_1);
        uVar8 = (puVar12[3] ^ puVar12[2] ^ puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0xd] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0xc] = *(uint *)((longlong)plVar6 +
                                ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 141f5dc40 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141f5dd7f;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_141f5dd7f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x68 + *param_1);
        uVar8 = (puVar12[3] ^ puVar12[2] ^ puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x19] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x18] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 141f5de60 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneBlendingActuatorID,TInlineValue<IBlendableTokenStack,32,8>,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141f5df9f;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_141f5df9f:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x38 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x34) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 6) =
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



// FUNCTION 141f5e080 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
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
  ulonglong uVar11;
  uint *puVar12;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141f5e1bf;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_141f5e1bf:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x48);
        uVar8 = (~puVar12[1] ^ puVar12[2] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x11] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x10] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 141f5e2a0 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneSequenceID,FMovieSceneObjectCache>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneObjectCache,0>,FDefaultSetAllocator>
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
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141f5e3df;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_141f5e3df:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0xc0 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x2f] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x2e] =
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



// FUNCTION 141f5e4c0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141f5e5ff;
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
LAB_141f5e5ff:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0xb8 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x2d] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x2c] =
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



// FUNCTION 141f5e6d0 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
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
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141f5e7ff;
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
LAB_141f5e7ff:
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
        lVar6 = (longlong)iStack_2c * 0x38 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x34) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x30) =
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



// FUNCTION 141f5e8e0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141f5ea1f;
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
LAB_141f5ea1f:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x108 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x41] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x40] =
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



// FUNCTION 141f5eaf0 Rehash body=648 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_141f5ec2f;
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
LAB_141f5ec2f:
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
        piVar16 = (int *)((longlong)iStack_1c * 0x30 + *param_1);
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
        piVar16[0xb] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar16[10] = *(int *)((longlong)plVar7 +
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



// FUNCTION 141f5ed80 Remove body=363 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar7 + ((longlong)iVar6 & uVar9) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar5 = *param_1;
  while( true ) {
    lVar8 = (longlong)iVar6;
    piVar2 = (int *)(lVar5 + lVar8 * 0x28);
    if (((*(int *)(lVar5 + 4 + lVar8 * 0x28) == param_2[1] &&
         *(int *)(lVar5 + 8 + lVar8 * 0x28) == param_2[2]) && piVar2[3] == param_2[3]) &&
        *piVar2 == *param_2) break;
    iVar6 = piVar2[8];
    if (iVar6 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = (longlong)*(int *)(lVar5 + 0x24 + lVar8 * 0x28) & uVar9;
    puVar3 = (undefined4 *)((longlong)plVar7 + uVar9 * 4);
    iVar4 = *(int *)((longlong)plVar7 + uVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar6) {
        *puVar3 = *(undefined4 *)(lVar5 + lVar8 * 0x28 + 0x20);
        break;
      }
      lVar1 = (longlong)iVar4 * 5 + 4;
      puVar3 = (undefined4 *)(lVar5 + lVar1 * 8);
      iVar4 = *(int *)(lVar5 + lVar1 * 8);
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar6,1);
  return 1;
}



// FUNCTION 141f5eef0 Remove body=340 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar3 = *(uint *)((longlong)plVar7 +
                   ((longlong)(int)(*param_2 ^ param_2[1] ^ param_2[2] ^ param_2[3]) & uVar6) * 4);
  if (uVar3 != 0xffffffff) {
    lVar2 = *param_1;
    do {
      puVar4 = (uint *)((longlong)(int)uVar3 * 0x68 + lVar2);
      if (((puVar4[1] == param_2[1] && puVar4[2] == param_2[2]) && puVar4[3] == param_2[3]) &&
          *puVar4 == *param_2) {
        lVar5 = (longlong)(int)uVar3 * 0x68;
        uVar6 = (longlong)*(int *)(lVar5 + 100 + lVar2) & uVar6;
        puVar4 = (uint *)((longlong)plVar7 + uVar6 * 4);
        uVar1 = *(uint *)((longlong)plVar7 + uVar6 * 4);
        goto joined_r0x000141f5efe5;
      }
      uVar3 = puVar4[0x18];
    } while (uVar3 != 0xffffffff);
  }
  return 0;
joined_r0x000141f5efe5:
  if (uVar1 == 0xffffffff) {
LAB_141f5f010:
    if (*(longlong *)(lVar5 + 0x50 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,uVar3,1);
    return 1;
  }
  if (uVar1 == uVar3) {
    *puVar4 = *(uint *)(lVar5 + lVar2 + 0x60);
    goto LAB_141f5f010;
  }
  puVar4 = (uint *)(lVar2 + 0x60 + (longlong)(int)uVar1 * 0x68);
  uVar1 = *puVar4;
  goto joined_r0x000141f5efe5;
}



// FUNCTION 141f5f050 Remove body=289 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar6 = *(int *)((longlong)plVar8 +
                  ((longlong)(int)(~param_2[1] ^ *param_2 ^ param_2[2]) & uVar7) * 4);
  if (iVar6 != -1) {
    lVar5 = *param_1;
    do {
      lVar3 = (longlong)iVar6 * 0x48;
      if (((*(uint *)(lVar3 + 4 + lVar5) == param_2[1]) && (*(uint *)(lVar3 + lVar5) == *param_2))
         && (*(uint *)(lVar3 + 8 + lVar5) == param_2[2])) {
        uVar7 = (longlong)*(int *)(lVar3 + 0x44 + lVar5) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar8 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar8 + uVar7 * 4);
        goto joined_r0x000141f5f116;
      }
      iVar6 = *(int *)(lVar3 + 0x40 + lVar5);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141f5f116:
  if (iVar4 == -1) {
LAB_141f5f140:
    if (*(longlong *)(lVar3 + 0x30 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar4 == iVar6) {
    *puVar2 = *(undefined4 *)(lVar3 + 0x40 + lVar5);
    goto LAB_141f5f140;
  }
  lVar1 = (longlong)iVar4 * 9 + 8;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x000141f5f116;
}



// FUNCTION 141f5f180 Remove body=293 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar6 = *(int *)((longlong)plVar8 +
                  ((longlong)(int)(~param_2[1] ^ *param_2 ^ param_2[2]) & uVar7) * 4);
  if (iVar6 != -1) {
    lVar2 = *param_1;
    do {
      lVar4 = (longlong)iVar6 * 0x20;
      if (((*(uint *)(lVar4 + 4 + lVar2) == param_2[1]) && (*(uint *)(lVar4 + lVar2) == *param_2))
         && (*(uint *)(lVar4 + 8 + lVar2) == param_2[2])) {
        uVar7 = (longlong)*(int *)(lVar4 + 0x1c + lVar2) & uVar7;
        piVar5 = (int *)((longlong)plVar8 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar8 + uVar7 * 4);
        goto joined_r0x000141f5f23a;
      }
      iVar6 = *(int *)(lVar4 + 0x18 + lVar2);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141f5f23a:
  if (iVar1 == -1) {
LAB_141f5f261:
    puVar3 = *(undefined8 **)(lVar4 + 0x10 + *param_1);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar1 == iVar6) {
    *piVar5 = *(int *)(lVar4 + 0x18 + lVar2);
    goto LAB_141f5f261;
  }
  piVar5 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar5;
  goto joined_r0x000141f5f23a;
}



// FUNCTION 141f5f2b0 Remove body=259 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar7 + ((longlong)*param_2 & uVar8) * 4);
  if (iVar5 != -1) {
    lVar1 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0xb8;
      if (*(int *)(lVar3 + lVar1) == *param_2) {
        lVar6 = (longlong)iVar5 * 0xb8;
        lVar3 = lVar6 + lVar1;
        uVar8 = (longlong)*(int *)(lVar3 + 0xb4) & uVar8;
        piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
        if (iVar2 != -1) goto LAB_141f5f350;
        goto LAB_141f5f380;
      }
      iVar5 = *(int *)(lVar3 + 0xb0 + lVar1);
    } while (iVar5 != -1);
  }
  return 0;
  while( true ) {
    piVar4 = (int *)((longlong)iVar2 * 0xb8 + 0xb0 + lVar1);
    iVar2 = *piVar4;
    if (iVar2 == -1) break;
LAB_141f5f350:
    if (iVar2 == iVar5) {
      *piVar4 = *(int *)(lVar3 + 0xb0);
      break;
    }
  }
LAB_141f5f380:
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FMovieSceneSequenceID,FMovieSceneSubSequenceData>
            (*param_1 + lVar6);
  TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar5,1);
  return 1;
}



// FUNCTION 141f5f3c0 Remove body=409 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar5 = ::GetTypeHash(param_2);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    uVar10 = (longlong)(int)param_1[9] - 1;
    iVar5 = *(int *)((longlong)plVar8 + ((longlong)iVar5 & uVar10) * 4);
    if (iVar5 != -1) {
      lVar3 = *param_1;
      while ((lVar9 = (longlong)iVar5 * 0x38,
             ((*(int *)(lVar9 + 4 + lVar3) != param_2[1] ||
              *(int *)(lVar9 + 8 + lVar3) != param_2[2]) ||
             *(int *)(lVar9 + 0xc + lVar3) != param_2[3]) || *param_2 != *(int *)(lVar9 + lVar3) ||
             (*(int *)(lVar9 + 0x10 + lVar3) != param_2[4]))) {
        iVar5 = *(int *)(lVar9 + 0x30 + lVar3);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (longlong)*(int *)(lVar9 + 0x34 + lVar3) & uVar10;
        piVar7 = (int *)((longlong)plVar8 + uVar10 * 4);
        iVar2 = *(int *)((longlong)plVar8 + uVar10 * 4);
        while (iVar2 != -1) {
          if (iVar2 == iVar5) {
            *piVar7 = *(int *)(lVar9 + 0x30 + lVar3);
            break;
          }
          piVar7 = (int *)((longlong)iVar2 * 0x38 + 0x30 + lVar3);
          iVar2 = *piVar7;
        }
      }
      bVar4 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar5;
      }
      lVar3 = *param_1;
      uVar6 = 0xffffffff;
      *(undefined4 *)(lVar3 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar6 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar3 + 4 + lVar9) = uVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar8 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141f5f560 Remove body=230 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar8 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x38 + 0x34 + lVar3));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar9 = *(int *)((longlong)param_2 * 0x38 + 0x30 + lVar3);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x30 + (longlong)iVar2 * 0x38);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = param_2;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)((longlong)param_2 * 0x38 + *param_1);
  *puVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 141f5f650 Remove body=263 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar7 + ((longlong)*param_2 & uVar8) * 4);
  if (iVar5 != -1) {
    lVar1 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x108;
      if (*(int *)(lVar3 + lVar1) == *param_2) {
        lVar6 = (longlong)iVar5 * 0x108;
        lVar3 = lVar6 + lVar1;
        uVar8 = (longlong)*(int *)(lVar3 + 0x104) & uVar8;
        piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
        if (iVar2 != -1) goto LAB_141f5f6f0;
        goto LAB_141f5f720;
      }
      iVar5 = *(int *)(lVar3 + 0x100 + lVar1);
    } while (iVar5 != -1);
  }
  return 0;
  while( true ) {
    piVar4 = (int *)((longlong)iVar2 * 0x108 + 0x100 + lVar1);
    iVar2 = *piVar4;
    if (iVar2 == -1) break;
LAB_141f5f6f0:
    if (iVar2 == iVar5) {
      *piVar4 = *(int *)(lVar3 + 0x100);
      break;
    }
  }
LAB_141f5f720:
  FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack(*param_1 + 8 + lVar6);
  TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar5,1);
  return 1;
}



// FUNCTION 141f5f760 Remove body=956 status=ok
// SIG undefined Remove(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneSequenceHierarchy::Remove(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  longlong local_d0;
  int *local_c8;
  int *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_50 = *(int *)(param_2 + 1);
  lVar6 = (longlong)local_50;
  _Src = (void *)*param_2;
  local_58 = (undefined1 *)0x0;
  local_4c = 0;
  local_a8 = param_1;
  if (0 < local_50) {
    TArray<float,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_98,0);
  }
  puVar5 = local_98;
  if (local_58 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((ulonglong)puVar5 | (ulonglong)local_58),_Src,lVar6 << 2)
  ;
  iVar1 = local_50;
  do {
    if (iVar1 == 0) {
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar6 = (longlong)iVar1;
    local_d0 = 0;
    local_d4 = iVar1;
    local_b0 = lVar6;
    if (0 < iVar1) {
      plVar9 = (longlong *)(param_1 + 0x50);
      local_b8 = plVar9;
      do {
        lVar15 = local_d0;
        puVar5 = local_98;
        if (local_58 != (undefined1 *)0x0) {
          puVar5 = local_58;
        }
        iVar1 = *(int *)(puVar5 + local_d0 * 4);
        local_d8 = iVar1;
        TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
        ::Remove(param_1,&local_d8);
        if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
          plVar2 = (longlong *)plVar9[8];
          if ((longlong *)plVar9[8] == (longlong *)0x0) {
            plVar2 = plVar9 + 7;
          }
          iVar7 = *(int *)((longlong)plVar2 + ((longlong)(int)plVar9[9] - 1U & (longlong)iVar1) * 4)
          ;
          if (iVar7 != -1) {
            do {
              lVar3 = *plVar9 + (longlong)iVar7 * 0x28;
              if (*(int *)(*plVar9 + (longlong)iVar7 * 0x28) == iVar1) {
                if (iVar7 != -1) goto LAB_141f5f8b8;
                break;
              }
              iVar7 = *(int *)(lVar3 + 0x20);
            } while (iVar7 != -1);
          }
        }
        lVar3 = 0;
LAB_141f5f8b8:
        piVar8 = (int *)0x0;
        local_c0 = (int *)(lVar3 + 8);
        if (lVar3 == 0) {
          local_c0 = piVar8;
        }
        if (local_c0 != (int *)0x0) {
          if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
            plVar2 = (longlong *)plVar9[8];
            if ((longlong *)plVar9[8] == (longlong *)0x0) {
              plVar2 = plVar9 + 7;
            }
            iVar7 = *(int *)((longlong)plVar2 +
                            ((longlong)(int)plVar9[9] - 1U & (longlong)*local_c0) * 4);
            if (iVar7 != -1) {
              do {
                piVar10 = (int *)(*plVar9 + (longlong)iVar7 * 0x28);
                if (*(int *)(*plVar9 + (longlong)iVar7 * 0x28) == *local_c0) {
                  if (iVar7 != -1) goto LAB_141f5f933;
                  break;
                }
                iVar7 = piVar10[8];
              } while (iVar7 != -1);
            }
          }
          piVar10 = piVar8;
LAB_141f5f933:
          piVar11 = piVar10 + 2;
          if (piVar10 == (int *)0x0) {
            piVar11 = piVar8;
          }
          local_c8 = piVar11;
          if ((piVar11 != (int *)0x0) && (lVar3 = (longlong)piVar11[4], piVar11[4] != 0)) {
            bVar16 = **(int **)(piVar11 + 2) != iVar1;
            piVar10 = piVar8;
            piVar13 = piVar8;
            do {
              iVar7 = (int)piVar8;
              piVar10 = (int *)((longlong)piVar10 + 1);
              piVar8 = (int *)(ulonglong)(iVar7 + 1);
              if ((longlong)piVar10 < lVar3) {
                piVar4 = (int *)(*(longlong *)(piVar11 + 2) + (longlong)piVar10 * 4);
                do {
                  if (bVar16 != (*piVar4 != iVar1)) break;
                  piVar8 = (int *)(ulonglong)((int)piVar8 + 1);
                  piVar10 = (int *)((longlong)piVar10 + 1);
                  piVar4 = piVar4 + 1;
                } while ((longlong)piVar10 < lVar3);
              }
              iVar14 = (int)piVar8 - iVar7;
              if (bVar16 != false) {
                iVar12 = (int)piVar13;
                if (iVar12 != iVar7) {
                  ::_guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(piVar11 + 2) + (longlong)iVar12 * 4),
                             (void *)(*(longlong *)(piVar11 + 2) + (longlong)iVar7 * 4),
                             (longlong)iVar14 << 2);
                  piVar11 = local_c8;
                }
                piVar13 = (int *)(ulonglong)(uint)(iVar12 + iVar14);
              }
              bVar16 = (bool)(bVar16 ^ 1);
            } while ((longlong)piVar10 < lVar3);
            piVar11[4] = (int)piVar13;
            plVar9 = local_b8;
            param_1 = local_a8;
            lVar15 = local_d0;
            lVar6 = local_b0;
          }
          piVar8 = local_c0;
          iVar1 = local_c0[4];
          if (iVar1 != 0) {
            if (local_4c < local_50 + iVar1) {
              TArray<FMovieSceneSequenceID,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo
                        (local_98);
            }
            puVar5 = local_98;
            if (local_58 != (undefined1 *)0x0) {
              puVar5 = local_58;
            }
            ::_guard_xfg_dispatch_icall_nop
                      (puVar5 + (longlong)local_50 * 4,*(void **)(piVar8 + 2),(longlong)iVar1 << 2);
            local_50 = local_50 + iVar1;
          }
          TSet<TTuple<FPrimitiveComponentId,FAttachmentGroupSceneInfo>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>,FDefaultSetAllocator>
          ::Remove(plVar9,&local_d8);
        }
        local_d0 = lVar15 + 1;
        iVar1 = local_50;
      } while (local_d0 < lVar6);
    }
    iVar7 = local_d4;
    if (local_d4 != 0) {
      if (iVar1 - local_d4 != 0) {
        puVar5 = local_98;
        if (local_58 != (undefined1 *)0x0) {
          puVar5 = local_58;
        }
        ::_guard_xfg_dispatch_icall_nop(puVar5,puVar5 + lVar6 * 4,(longlong)(iVar1 - local_d4) << 2)
        ;
        iVar1 = local_50;
      }
      local_50 = iVar1 - iVar7;
      FUN_141f61f90(local_98);
      iVar1 = local_50;
    }
  } while( true );
}



// FUNCTION 141f5fb20 RemoveAnnotation body=154 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparse<FIsSpawnable,1>::RemoveAnnotation(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141f5fbb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 141f5fbc0 RemoveAtImpl body=271 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,FDefaultAllocator>
     ::RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  if (param_3 != 0) {
    pbVar4 = (byte *)(*param_1 + 0x28 + (longlong)param_2 * 0x58);
    iVar5 = param_3;
    do {
      bVar1 = pbVar4[0x28];
      if ((bVar1 & 1) != 0) {
        pbVar3 = pbVar4 + 8;
        if ((bVar1 & 2) == 0) {
          pbVar3 = *(byte **)(pbVar4 + 8);
        }
        pbVar4[0x28] = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar3)(pbVar3,0);
        if ((pbVar4[0x28] & 2) == 0) {
          FMemory::Free(*(undefined8 *)(pbVar4 + 8));
        }
      }
      bVar1 = *pbVar4;
      if ((bVar1 & 1) != 0) {
        pbVar3 = pbVar4 + -0x20;
        if ((bVar1 & 2) == 0) {
          pbVar3 = *(byte **)(pbVar4 + -0x20);
        }
        *pbVar4 = bVar1 & 0xfe;
        (*(code *)**(undefined8 **)pbVar3)();
        if ((*pbVar4 & 2) == 0) {
          FMemory::Free(*(undefined8 *)(pbVar4 + -0x20));
        }
      }
      pbVar4 = pbVar4 + 0x58;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar2 = (iVar5 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + *param_1),(longlong)iVar2 * 0x58);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141f5fcd0 RemoveAtImpl body=198 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x20);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar1 << 5);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141f5fda0 RemoveAtImpl body=250 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FMovieSceneEvaluationMetaData,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + (longlong)param_2 * 0x70);
    plVar2 = plVar4 + 0xc;
    iVar3 = param_3;
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -8);
      if (plVar2[-10] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xe;
      plVar2 = plVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x70),
                 (void *)((longlong)(param_2 + param_3) * 0x70 + *param_1),(longlong)iVar1 * 0x70);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141f5fea0 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x108;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x108 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x108;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141f5ff60 RemoveBinding body=475 status=ok
// SIG undefined RemoveBinding(void)

void UMovieSceneBindingOverrides::RemoveBinding(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  byte bVar18;
  ulonglong local_res20;
  int local_50;
  int iStack_4c;
  
  iVar2 = *(int *)(param_1 + 0x38);
  lVar14 = (longlong)iVar2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  iVar5 = *param_2;
  iVar6 = param_2[2];
  iVar7 = param_2[3];
  if (iVar2 != 0) {
    piVar3 = *(int **)(param_1 + 0x30);
    uVar12 = 0;
    local_res20 = 0;
    cVar8 = FUN_14058c1e0(piVar3 + 6,param_3);
    iStack_4c = (int)((ulonglong)uVar1 >> 0x20);
    local_50 = (int)uVar1;
    uVar15 = uVar12;
    uVar17 = uVar12;
    if (((cVar8 == '\0') ||
        (((piVar3[3] != iVar7 || piVar3[4] != local_50) || piVar3[5] != iStack_4c) ||
         piVar3[2] != iVar6)) || (iVar5 != *piVar3)) {
      bVar18 = 1;
    }
    else {
      bVar18 = 0;
    }
    do {
      iVar11 = (int)uVar12;
      uVar15 = uVar15 + 1;
      uVar12 = (ulonglong)(iVar11 + 1);
      if ((longlong)uVar15 < lVar14) {
        lVar13 = uVar15 * 0x24;
        do {
          lVar4 = *(longlong *)(param_1 + 0x30);
          cVar8 = FUN_14058c1e0(lVar4 + 0x18 + lVar13,param_3);
          if (((cVar8 == '\0') ||
              (((*(int *)(lVar13 + 0xc + lVar4) != iVar7 ||
                *(int *)(lVar13 + 0x10 + lVar4) != local_50) ||
               *(int *)(lVar13 + 0x14 + lVar4) != iStack_4c) ||
               iVar6 != *(int *)(lVar13 + 8 + lVar4))) || (iVar5 != *(int *)(lVar13 + lVar4))) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          uVar17 = local_res20;
          if (bVar18 != bVar9) break;
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 0x24;
        } while ((longlong)uVar15 < lVar14);
      }
      iVar10 = (int)uVar12 - iVar11;
      if (bVar18 != 0) {
        iVar16 = (int)uVar17;
        if (iVar16 != iVar11) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar16 * 0x24),
                     (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar11 * 0x24),
                     (longlong)iVar10 * 0x24);
        }
        uVar17 = (ulonglong)(uint)(iVar16 + iVar10);
        local_res20 = uVar17;
      }
      bVar18 = bVar18 ^ 1;
    } while ((longlong)uVar15 < lVar14);
    *(int *)(param_1 + 0x38) = (int)uVar17;
    if (iVar2 != (int)uVar17) {
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  return;
}



// FUNCTION 141f60140 FUN_141f60140 body=300 status=ok
// SIG undefined FUN_141f60140(void)

void FUN_141f60140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0xc);
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 3;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0xc),
                     (longlong)iVar11 * 0xc);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141f60270 FUN_141f60270 body=1386 status=ok
// SIG undefined FUN_141f60270(void)

void FUN_141f60270(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 local_res18 [8];
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uVar16 = 0;
  uStack_a4 = 1;
  plVar1 = (longlong *)(param_1 + 400);
  local_b8 = (undefined4 *)0x0;
  uVar2 = *(uint *)(param_1 + 0x1b8);
  puVar15 = (uint *)(param_1 + 0x1a0);
  local_ac = 0;
  local_a8 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar2 != 0) {
    puVar21 = *(uint **)(param_1 + 0x1b0);
    if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
      puVar21 = puVar15;
    }
    uVar12 = *puVar21;
    uVar10 = uVar16;
    uVar19 = uVar16;
    while (uVar12 == 0) {
      iVar7 = (int)uVar19;
      uStack_90 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_90;
      local_a8 = iVar7 + 1;
      uVar19 = (ulonglong)local_a8;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141f6035d;
      uVar12 = puVar21[(longlong)iVar7 + 1];
    }
    uStack_a4 = -uVar12 & uVar12;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (uStack_90 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_141f6035d:
      uStack_94 = uVar2;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x1b8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar20 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  uVar10 = uVar16;
  uVar19 = uVar16;
  puStack_a0 = puVar15;
  local_88 = plVar1;
  local_50 = puVar15;
  local_40 = uStack_68;
  local_60 = plVar1;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar12 = uStack_74;
  if (uStack_74 != uVar2) {
    puVar21 = *(uint **)(param_1 + 0x1b0);
    if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
      puVar21 = puVar15;
    }
    uVar12 = puVar21[(int)uStack_74 >> 5] & uStack_78;
    iVar7 = (int)uStack_74 >> 5;
    while (uVar12 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141f60436;
      uVar12 = puVar21[(longlong)iVar7 + 1];
      uStack_78 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar7 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar20 - iVar7) + 0x1f;
    uVar12 = uStack_74;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141f60436:
      uStack_74 = uVar2;
      uVar12 = uVar2;
    }
  }
  while( true ) {
    iVar7 = (int)uVar16;
    if (((uStack_44 == uVar12) && (local_50 == puVar15)) && (local_60 == plVar1)) break;
    puVar18 = (undefined4 *)((longlong)(int)uStack_44 * 0x1c + *local_60);
    piVar8 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                              (param_2,local_res18,puVar18);
    if (*piVar8 == -1) {
      local_b0 = iVar7 + 1;
      if ((int)uVar10 < (int)local_b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,uVar16);
        uVar10 = (ulonglong)local_ac;
        uVar19 = (ulonglong)local_b8;
      }
      uVar16 = (ulonglong)local_b0;
      uVar4 = puVar18[1];
      uVar5 = puVar18[2];
      uVar6 = puVar18[3];
      puVar17 = (undefined4 *)(uVar19 + (longlong)iVar7 * 0x10);
      *puVar17 = *puVar18;
      puVar17[1] = uVar4;
      puVar17[2] = uVar5;
      puVar17[3] = uVar6;
      puVar15 = puStack_a0;
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  puVar18 = (undefined4 *)0x0;
  for (uVar16 = uVar19; uVar16 != (longlong)iVar7 * 0x10 + uVar19; uVar16 = uVar16 + 0x10) {
    FMovieSceneEvaluationTemplate::RemoveTrack(param_1,uVar16);
  }
  if (uVar19 != 0) {
    FMemory::Free(uVar19);
  }
  local_b8 = (undefined4 *)0x0;
  plVar1 = (longlong *)(param_1 + 0x1e0);
  local_ac = 0;
  uVar2 = *(uint *)(param_1 + 0x208);
  puStack_a0 = (uint *)(param_1 + 0x1f0);
  local_a8 = 0;
  uVar12 = 0;
  uStack_a4 = 1;
  uVar20 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar2 != 0) {
    puVar15 = *(uint **)(param_1 + 0x200);
    if (*(uint **)(param_1 + 0x200) == (uint *)0x0) {
      puVar15 = puStack_a0;
    }
    uVar9 = *puVar15;
    uStack_90 = 0;
    while (uVar9 == 0) {
      lVar14 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      uVar9 = local_a8 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8 = uVar9;
      if (bVar3) goto LAB_141f605ce;
      uVar9 = puVar15[lVar14 + 1];
    }
    uStack_a4 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_94 = (uStack_90 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_141f605ce:
      uStack_94 = uVar2;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x208);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar9 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_88 = plVar1;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar1;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar13 = uStack_74;
  if (uStack_74 != uVar2) {
    puVar15 = *(uint **)(param_1 + 0x200);
    if (*(uint **)(param_1 + 0x200) == (uint *)0x0) {
      puVar15 = puStack_a0;
    }
    uVar13 = puVar15[(int)uStack_74 >> 5] & uStack_78;
    iVar7 = (int)uStack_74 >> 5;
    while (uVar13 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141f60695;
      uVar13 = puVar15[(longlong)iVar7 + 1];
      uStack_78 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar7 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar9 - iVar7) + 0x1f;
    uVar13 = uStack_74;
    if ((int)uVar2 < (int)uStack_74) {
LAB_141f60695:
      uStack_74 = uVar2;
      uVar13 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_44 == uVar13) && (local_50 == (uint *)(param_1 + 0x1f0))) && (local_60 == plVar1))
    break;
    puVar17 = (undefined4 *)(*local_60 + (longlong)(int)uStack_44 * 0x28);
    piVar8 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                              (param_2,local_res18,puVar17);
    if (*piVar8 == -1) {
      local_b0 = uVar12 + 1;
      if ((int)uVar20 < (int)local_b0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_b8,uVar12);
        puVar18 = local_b8;
        uVar20 = local_ac;
      }
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      puVar11 = puVar18 + (longlong)(int)uVar12 * 8;
      *puVar11 = *puVar17;
      puVar11[1] = uVar4;
      puVar11[2] = uVar5;
      puVar11[3] = uVar6;
      *(undefined1 *)(puVar11 + 4) = *(undefined1 *)(puVar17 + 4);
      puVar11[5] = puVar17[5];
      *(undefined1 *)(puVar11 + 6) = *(undefined1 *)(puVar17 + 6);
      puVar11[7] = puVar17[7];
      uVar12 = local_b0;
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (puVar18 != puVar18 + (longlong)(int)uVar12 * 8) {
    puVar17 = puVar18 + 5;
    do {
      TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
      ::Remove(plVar1,puVar17 + -5);
      local_b8 = (undefined4 *)CONCAT71(local_b8._1_7_,*(undefined1 *)(puVar17 + -1));
      local_b8 = (undefined4 *)CONCAT44(*puVar17,(undefined4)local_b8);
      local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)(puVar17 + 1));
      local_ac = puVar17[2];
      FMovieSceneEvaluationField::Invalidate(param_1 + 0xa0,&local_b8);
      puVar11 = puVar17 + 3;
      puVar17 = puVar17 + 8;
    } while (puVar11 != puVar18 + (longlong)(int)uVar12 * 8);
  }
  if (puVar18 != (undefined4 *)0x0) {
    FMemory::Free(puVar18);
  }
  return;
}



// FUNCTION 141f607e0 RemoveTrack body=553 status=ok
// SIG undefined RemoveTrack(void)

void FMovieSceneEvaluationTemplate::RemoveTrack(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int local_res8 [2];
  int local_res18 [2];
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 uStack_90;
  int *local_88;
  int *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  
  TSet<TTuple<FGuid,unsigned_char>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_char,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x32,local_res18,param_2);
  if ((local_res18[0] == -1) ||
     (lVar3 = (longlong)local_res18[0] * 0x1c + param_1[0x32], lVar3 == 0)) {
    local_res8[0] = -1;
  }
  else {
    local_res8[0] = *(int *)(lVar3 + 0x10);
  }
  if (local_res8[0] != -1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)local_res8[0]) * 4);
      if (iVar2 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar2 * 0x108 + *param_1);
          if (*piVar6 == local_res8[0]) {
            if (iVar2 != -1) goto LAB_141f608b7;
            break;
          }
          iVar2 = piVar6[0x40];
        } while (iVar2 != -1);
      }
    }
    piVar6 = (int *)0x0;
LAB_141f608b7:
    piVar7 = piVar6 + 2;
    if (piVar6 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
                (local_50,piVar7 + 0x10);
      while( true ) {
        if ((local_40 == -1) && (iStack_3c != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>::
        TMovieSceneEvaluationTreeDataIterator<FSectionEvaluationData>(&local_68,piVar7 + 0x10);
        if (local_60 != 0) {
          iVar2 = *(int *)(local_60 + 0x1c);
          if (iVar2 == -1) {
            local_88 = (int *)0x0;
            ppiVar5 = &local_88;
            local_80 = (int *)((ulonglong)local_80 & 0xffffffff00000000);
          }
          else {
            uStack_90 = *(undefined4 *)(*(longlong *)(local_68 + 0x40) + (longlong)iVar2 * 0xc + 4);
            ppiVar5 = &local_98;
            local_98 = (int *)(*(longlong *)(local_68 + 0x50) +
                              (longlong)
                              *(int *)(*(longlong *)(local_68 + 0x40) + (longlong)iVar2 * 0xc) * 0xc
                              );
          }
          local_78 = *(undefined4 *)ppiVar5;
          uStack_74 = *(undefined4 *)((longlong)ppiVar5 + 4);
          iStack_70 = *(int *)(ppiVar5 + 1);
          uStack_6c = *(undefined4 *)((longlong)ppiVar5 + 0xc);
          if ((-1 < local_58) && (local_58 < iStack_70)) {
            local_a8[0] = local_50[0];
            local_a4 = local_4c;
            local_a0 = local_48;
            local_9c = local_44;
            FMovieSceneEvaluationField::Invalidate(param_1 + 0x14,local_a8);
          }
        }
        FMovieSceneEvaluationTreeRangeIterator::operator++(local_50);
      }
      local_88 = local_res8;
      local_80 = piVar7;
      FUN_141f33f80(param_1 + 10,local_res18,&local_88,0);
    }
    TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
    ::Remove(param_1,local_res8);
    TSet<TTuple<FGuid,unsigned_int>,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x32,param_2);
  }
  return;
}



// FUNCTION 141f60a10 Reserve body=145 status=ok
// SIG undefined Reserve(void)

undefined8 *
TInlineValue<FMovieSceneEvalTemplate,48,8>::Reserve(undefined8 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if ((bVar1 & 1) != 0) {
    puVar4 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar4 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 6) = bVar1 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    bVar1 = *(byte *)(param_1 + 6);
    if ((bVar1 & 2) == 0) {
      FMemory::Free();
      bVar1 = *(byte *)(param_1 + 6);
    }
  }
  if ((param_2 < 0x31) && (param_3 < 9)) {
    bVar3 = 2;
  }
  else {
    bVar3 = 0;
  }
  bVar1 = bVar1 & 0xfd | bVar3;
  *(byte *)(param_1 + 6) = bVar1;
  if (bVar3 == 0) {
    uVar2 = FMemory::Malloc(param_2,param_3);
    *param_1 = uVar2;
    bVar1 = *(byte *)(param_1 + 6);
  }
  *(byte *)(param_1 + 6) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 141f60ab0 Reserve body=145 status=ok
// SIG undefined Reserve(void)

undefined8 *
TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
          (undefined8 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 1) != 0) {
    puVar4 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar4 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    bVar1 = *(byte *)(param_1 + 2);
    if ((bVar1 & 2) == 0) {
      FMemory::Free();
      bVar1 = *(byte *)(param_1 + 2);
    }
  }
  if ((param_2 < 0x11) && (param_3 < 9)) {
    bVar3 = 2;
  }
  else {
    bVar3 = 0;
  }
  bVar1 = bVar1 & 0xfd | bVar3;
  *(byte *)(param_1 + 2) = bVar1;
  if (bVar3 == 0) {
    uVar2 = FMemory::Malloc(param_2,param_3);
    *param_1 = uVar2;
    bVar1 = *(byte *)(param_1 + 2);
  }
  *(byte *)(param_1 + 2) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 141f60b50 Reset body=329 status=ok
// SIG undefined Reset(void)

void TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,FDefaultAllocator>
     ::Reset(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  if (iVar2 < param_2) {
    if (iVar5 != 0) {
      pbVar4 = (byte *)(*param_1 + 0x28);
      do {
        bVar1 = pbVar4[0x28];
        if ((bVar1 & 1) != 0) {
          pbVar3 = pbVar4 + 8;
          if ((bVar1 & 2) == 0) {
            pbVar3 = *(byte **)(pbVar4 + 8);
          }
          pbVar4[0x28] = bVar1 & 0xfe;
          (*(code *)**(undefined8 **)pbVar3)(pbVar3,0);
          if ((pbVar4[0x28] & 2) == 0) {
            FMemory::Free(*(undefined8 *)(pbVar4 + 8));
          }
        }
        bVar1 = *pbVar4;
        if ((bVar1 & 1) != 0) {
          pbVar3 = pbVar4 + -0x20;
          if ((bVar1 & 2) == 0) {
            pbVar3 = *(byte **)(pbVar4 + -0x20);
          }
          *pbVar4 = bVar1 & 0xfe;
          (*(code *)**(undefined8 **)pbVar3)();
          if ((*pbVar4 & 2) == 0) {
            FMemory::Free(*(undefined8 *)(pbVar4 + -0x20));
          }
        }
        pbVar4 = pbVar4 + 0x58;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar2 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar2 != param_2) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar5 != 0) {
      pbVar4 = (byte *)(*param_1 + 0x28);
      do {
        bVar1 = pbVar4[0x28];
        if ((bVar1 & 1) != 0) {
          pbVar3 = pbVar4 + 8;
          if ((bVar1 & 2) == 0) {
            pbVar3 = *(byte **)(pbVar4 + 8);
          }
          pbVar4[0x28] = bVar1 & 0xfe;
          (*(code *)**(undefined8 **)pbVar3)(pbVar3,0);
          if ((pbVar4[0x28] & 2) == 0) {
            FMemory::Free(*(undefined8 *)(pbVar4 + 8));
          }
        }
        bVar1 = *pbVar4;
        if ((bVar1 & 1) != 0) {
          pbVar3 = pbVar4 + -0x20;
          if ((bVar1 & 2) == 0) {
            pbVar3 = *(byte **)(pbVar4 + -0x20);
          }
          *pbVar4 = bVar1 & 0xfe;
          (*(code *)**(undefined8 **)pbVar3)();
          if ((*pbVar4 & 2) == 0) {
            FMemory::Free(*(undefined8 *)(pbVar4 + -0x20));
          }
        }
        pbVar4 = pbVar4 + 0x58;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 141f60ca0 Reset body=288 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<int,FSegmentBlendData>,TDefaultMapHashableKeyFuncs<int,FSegmentBlendData,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
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
      if (*(longlong *)((longlong)local_1c * 0x60 + *local_38 + 0x48) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141f60dc0 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>,FMovieSceneObjectCache::TFastGuidKeyFuncs<FMovieSceneObjectCache::FBoundObjects>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
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
      if (*(longlong *)((longlong)local_1c * 0x38 + *local_38 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141f60ed0 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FGuid,TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FMovieSceneObjectCache::TFastGuidKeyFuncs<TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>_>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
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
      if (*(longlong *)((longlong)local_1c * 0x68 + *local_38 + 0x50) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141f60fe0 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
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
      if (*(longlong *)(*local_38 + 0x30 + (longlong)local_1c * 0x48) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
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
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141f610f0 Reset body=288 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar1 = *(undefined8 **)((longlong)local_1c * 0x20 + *local_38 + 0x10);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
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
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar4 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar3 + uVar4 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f61210 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>,FDefaultSetAllocator>::
     Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 141f612c0 Reset body=310 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSharedDataId,TInlineValue<IMovieSceneSharedExecutionToken,32,8>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  void *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar6 = (longlong)local_1c * 0x38 + *local_38;
      bVar1 = *(byte *)(lVar6 + 0x28);
      if ((bVar1 & 1) != 0) {
        puVar4 = (undefined8 *)(lVar6 + 8);
        if ((bVar1 & 2) == 0) {
          puVar4 = *(undefined8 **)(lVar6 + 8);
        }
        *(byte *)(lVar6 + 0x28) = bVar1 & 0xfe;
        (**(code **)*puVar4)(puVar4,0);
        if ((*(byte *)(lVar6 + 0x28) & 2) == 0) {
          FMemory::Free(*(undefined8 *)(lVar6 + 8));
        }
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar6 + uVar3 * 4) = 0xffffffff;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 141f61400 Reset body=310 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar3 = (longlong)local_1c * 0x148 + *local_38;
      TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>::
      ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>
                (lVar3 + 0x128);
      if (*(longlong *)(lVar3 + 0x118) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar3 + 200) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<328,8>_>,FDefaultAllocator>::ResizeTo
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
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 141f61540 Reset body=288 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_38;
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar1 = *(undefined8 **)(*local_38 + 0x18 + (longlong)local_1c * 0x28);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar4 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar3 + uVar4 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141f61660 Reset body=208 status=ok
// SIG undefined Reset(void)

void FMovieSceneAccumulatedBlendState::Reset(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar4 = (undefined8 *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (-1 < iVar2) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      bVar1 = *(byte *)(puVar4 + 8);
      if ((bVar1 & 1) != 0) {
        puVar3 = puVar4;
        if ((bVar1 & 2) == 0) {
          puVar3 = (undefined8 *)*puVar4;
        }
        *(byte *)(puVar4 + 8) = bVar1 & 0xfe;
        (**(code **)*puVar3)(puVar3,0);
        if ((*(byte *)(puVar4 + 8) & 2) == 0) {
          FMemory::Free(*puVar4);
        }
      }
      puVar4 = puVar4 + 9;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  if (iVar5 != 0) {
    do {
      bVar1 = *(byte *)(puVar4 + 8);
      if ((bVar1 & 1) != 0) {
        puVar3 = puVar4;
        if ((bVar1 & 2) == 0) {
          puVar3 = (undefined8 *)*puVar4;
        }
        *(byte *)(puVar4 + 8) = bVar1 & 0xfe;
        (**(code **)*puVar3)(puVar3,0);
        if ((*(byte *)(puVar4 + 8) & 2) == 0) {
          FMemory::Free(*puVar4);
        }
      }
      puVar4 = puVar4 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar2 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  return;
}



// FUNCTION 141f61730 Reset body=82 status=ok
// SIG undefined Reset(void)

void FMovieSceneBoolChannel::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 141f61790 Reset body=82 status=ok
// SIG undefined Reset(void)

void FMovieSceneByteChannel::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 141f617f0 Reset body=82 status=ok
// SIG undefined Reset(void)

void FMovieSceneFloatChannel::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x20,0);
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



// FUNCTION 141f61850 Reset body=82 status=ok
// SIG undefined Reset(void)

void FMovieSceneIntegerChannel::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 141f618b0 Reset body=25 status=ok
// SIG undefined Reset(void)

void FMovieScenePlaybackPosition::Reset(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x14) = param_2;
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 141f618d0 ResetBinding body=56 status=ok
// SIG undefined ResetBinding(void)

void UMovieSceneBindingOverrides::ResetBinding(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  iVar1 = FUN_141f376c0(param_1 + 0x30,&local_28);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



// FUNCTION 141f61910 ResetBindings body=58 status=ok
// SIG undefined ResetBindings(void)

void UMovieSceneBindingOverrides::ResetBindings(longlong param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x3c)) {
      TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
    }
    TSet<TTuple<FGuid,int>,TDefaultMapHashableKeyFuncs<FGuid,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 141f61950 ResetFieldData body=287 status=ok
// SIG undefined ResetFieldData(void)

void FMovieSceneEvaluationTemplate::ResetFieldData(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x248) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 600) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x25c)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x250,0);
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  if ((*(int *)(param_1 + 0x26c) < 0) && (*(int *)(param_1 + 0x26c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x260,0);
  }
  *(undefined4 *)(param_1 + 0x278) = 0;
  if ((*(int *)(param_1 + 0x27c) < 0) && (*(int *)(param_1 + 0x27c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x270,0);
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  if ((*(int *)(param_1 + 0x28c) < 0) && (*(int *)(param_1 + 0x28c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x280,0);
  }
  *(undefined8 *)(param_1 + 0x2a8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((*(int *)(param_1 + 700) < 0) && (*(int *)(param_1 + 700) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2b0,0);
  }
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if ((*(int *)(param_1 + 0x2cc) < 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2c0,0);
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if ((*(int *)(param_1 + 0x2dc) < 0) && (*(int *)(param_1 + 0x2dc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2d0,0);
  }
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if ((*(int *)(param_1 + 0x2ec) < 0) && (*(int *)(param_1 + 0x2ec) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2e0,0);
  }
  return;
}



// FUNCTION 141f61a70 FUN_141f61a70 body=149 status=ok
// SIG undefined FUN_141f61a70(void)

void FUN_141f61a70(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x40);
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
        *(void **)((longlong)param_1 + 0x40) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 141f61b10 ResizeAllocation body=151 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<4,FDefaultAllocator>::ForElementType<FSectionEvaluationData>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
  if (param_3 < 5) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0xc);
    pvVar1 = *(void **)((longlong)param_1 + 0x30);
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
        *(void **)((longlong)param_1 + 0x30) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0xc);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
  return;
}



// FUNCTION 141f61bb0 ResizeForCopy body=129 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar2 = 4;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<FSectionEvaluationData>::ResizeAllocation
              (param_1,0,iVar2,0xc);
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  return;
}



// FUNCTION 141f61c40 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  if (uVar1 < 3) {
    uVar2 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 4,0);
    uVar2 = (uint)(uVar3 >> 2);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 8);
  if (uVar2 < 3) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 2);
    pvVar4 = *(void **)((longlong)param_1 + 8);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 2,0);
        *(void **)((longlong)param_1 + 8) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 2);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 2;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar5;
  return;
}



// FUNCTION 141f61d30 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<ATTLCharacterEditScene::MenuEditRef,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x108,0);
  iVar4 = (int)(uVar3 / 0x108);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x108,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141f61dc0 ResizeGrow body=123 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x4c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 << 4,0);
    uVar2 = uVar3 >> 4 & 0xffffffff;
    if ((int)(uVar3 >> 4) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = (int)uVar2;
  FUN_141f61a70(param_1,param_2,uVar2,0x10);
  return;
}



// FUNCTION 141f61e40 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar3 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x3c) != 0) || (4 < uVar1)) {
      uVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(uVar3 * 0xc,0);
    uVar3 = uVar2 / 0xc & 0xffffffff;
    if ((int)(uVar2 / 0xc) < (int)uVar1) {
      uVar3 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x3c) = (int)uVar3;
  TInlineAllocator<4,FDefaultAllocator>::ForElementType<FSectionEvaluationData>::ResizeAllocation
            (param_1,param_2,uVar3,0xc);
  return;
}



// FUNCTION 141f61ed0 ResizeShrink body=178 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0xcc);
  if (uVar2 < 9) {
    uVar2 = 8;
    goto LAB_141f61f55;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x18)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x18,0);
        uVar3 = *(uint *)(param_1 + 0xcc);
        uVar2 = (uint)(uVar1 / 0x18);
      }
      goto LAB_141f61f55;
    }
    if (uVar2 == 0) goto LAB_141f61f55;
  }
  uVar2 = uVar3;
LAB_141f61f55:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xcc) = uVar2;
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<FObjectInitializer::FOverrides::FOverride>
    ::ResizeAllocation(param_1,*(undefined4 *)(param_1 + 200),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 141f61f90 FUN_141f61f90 body=144 status=ok
// SIG undefined FUN_141f61f90(void)

void FUN_141f61f90(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x4c);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_141f61ff9;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 2)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 2,0);
        uVar3 = *(uint *)(param_1 + 0x4c);
        uVar2 = (uint)(uVar1 >> 2);
      }
      goto LAB_141f61ff9;
    }
    if (uVar2 == 0) goto LAB_141f61ff9;
  }
  uVar2 = uVar3;
LAB_141f61ff9:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x4c) = uVar2;
    FUN_140717b50(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 141f62020 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<328,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x148,0);
    iVar3 = (int)(uVar1 / 0x148);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x148,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141f620a0 FUN_141f620a0 body=101 status=ok
// SIG undefined FUN_141f620a0(void)

void FUN_141f620a0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar1;
    FUN_141f61a70(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,0x10);
  }
  return;
}



// FUNCTION 141f62110 FUN_141f62110 body=101 status=ok
// SIG undefined FUN_141f62110(void)

void FUN_141f62110(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar1;
    FUN_1406f49a0(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,4);
  }
  return;
}



// FUNCTION 141f62180 FUN_141f62180 body=94 status=ok
// SIG undefined FUN_141f62180(void)

void FUN_141f62180(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0x3f8) != 0) && (*(longlong *)(param_1 + 0x400) != 0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x400) + 0x10))(), cVar1 == '\0')) {
    return;
  }
  (**(code **)(*param_4 + 0x288))(param_4,param_2,param_5,param_6);
  return;
}



// FUNCTION 141f621e0 ResolveLocalToRoot body=535 status=ok
// SIG undefined ResolveLocalToRoot(void)

uint * FMovieSceneObjectBindingID::ResolveLocalToRoot
                 (uint *param_1,uint *param_2,int param_3,longlong *param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  
  uVar9 = *param_1;
  if (((char)param_1[1] == '\0') && (param_3 != DAT_146ac9ac0)) {
    piVar11 = (int *)0x0;
    do {
      if ((int)param_4[0xb] != *(int *)((longlong)param_4 + 0x84)) {
        plVar3 = (longlong *)param_4[0x12];
        if ((longlong *)param_4[0x12] == (longlong *)0x0) {
          plVar3 = param_4 + 0x11;
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        ((longlong)(int)param_4[0x13] - 1U & (longlong)param_3) * 4);
        if (iVar2 != -1) {
          do {
            piVar5 = (int *)(param_4[10] + (longlong)iVar2 * 0x28);
            if (*(int *)(param_4[10] + (longlong)iVar2 * 0x28) == param_3) {
              if (iVar2 != -1) goto LAB_141f62293;
              break;
            }
            iVar2 = piVar5[8];
          } while (iVar2 != -1);
        }
      }
      piVar5 = piVar11;
LAB_141f62293:
      piVar6 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar6 = piVar11;
      }
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar3 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar3 = param_4 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_4[9] - 1U & (longlong)param_3) * 4
                        );
        if (iVar2 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar2 * 0xb8 + *param_4);
            if (*piVar5 == param_3) {
              if (iVar2 != -1) goto LAB_141f62307;
              break;
            }
            iVar2 = piVar5[0x2c];
          } while (iVar2 != -1);
        }
      }
      piVar5 = piVar11;
LAB_141f62307:
      piVar4 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar4 = piVar11;
      }
      if ((piVar6 == (int *)0x0) || (piVar4 == (int *)0x0)) break;
      uVar8 = piVar4[0xb];
      if (uVar9 != 0) {
        uVar9 = uVar9 - uVar8 ^ uVar8 >> 0xd;
        uVar7 = (-0x61c88647 - uVar9) - uVar8 ^ uVar9 << 8;
        uVar10 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xd;
        uVar9 = (uVar9 - uVar7) - uVar10 ^ uVar10 >> 0xc;
        uVar8 = (uVar7 - uVar9) - uVar10 ^ uVar9 << 0x10;
        uVar7 = (uVar10 - uVar8) - uVar9 ^ uVar8 >> 5;
        uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar7 >> 3;
        uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 << 10;
        uVar8 = (uVar7 - uVar8) - uVar9 ^ uVar8 >> 0xf;
      }
      uVar9 = uVar8;
      param_3 = *piVar6;
    } while (param_3 != DAT_146ac9ac0);
  }
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined1 *)(param_2 + 1) = 1;
  *param_2 = uVar9;
  return param_2;
}



// FUNCTION 141f62400 Restore body=241 status=ok
// SIG undefined Restore(void)

void TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>::Restore
               (longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x130);
  iVar7 = *(int *)(param_1 + 0x128) + -1;
  lVar5 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar6 = lVar5 * 0x58;
    do {
      lVar4 = *(longlong *)(param_1 + 0x120) + lVar6;
      if (lVar2 != 0) {
        if ((*(byte *)(lVar4 + 0x50) & 1) == 0) {
          bVar1 = *(byte *)(lVar4 + 0x28);
          plVar3 = (longlong *)(lVar4 + 8);
        }
        else {
          bVar1 = *(byte *)(lVar4 + 0x50);
          plVar3 = (longlong *)(lVar4 + 0x30);
        }
        if ((bVar1 & 2) == 0) {
          plVar3 = (longlong *)*plVar3;
        }
        (**(code **)(*plVar3 + 8))(plVar3,lVar2,param_2);
      }
      lVar6 = lVar6 + -0x58;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xcc)) {
    TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((*(int *)(param_1 + 0x11c) < 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (param_1 + 0xd0,0);
  }
  TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,FDefaultAllocator>
  ::Reset(param_1 + 0x120,0);
  return;
}



// FUNCTION 141f62500 RestoreEntity body=997 status=ok
// SIG undefined RestoreEntity(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::RestoreEntity
          (longlong param_1,undefined8 param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong local_98;
  longlong local_90 [8];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar12 = *(int *)(param_1 + 200) + -1;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_c8 = 1;
  local_c0 = param_4;
  local_b8 = param_2;
  if (-1 < iVar12) {
    lVar11 = (longlong)iVar12 * 0x18;
    lVar14 = (longlong)*(int *)(param_1 + 200) * 0x18;
    lVar13 = lVar11;
    do {
      lVar15 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar15 = param_1;
      }
      piVar1 = (int *)(lVar15 + lVar11);
      local_a8 = *piVar1;
      iStack_a4 = piVar1[1];
      iStack_a0 = piVar1[2];
      iStack_9c = piVar1[3];
      lVar15 = *(longlong *)(lVar15 + 0x10 + lVar11);
      local_98 = lVar15;
      if (((iStack_a4 == param_3[1]) && (local_a8 == *param_3)) && (iStack_a0 == param_3[2])) {
        if ((*(char *)(param_4 + 2) == '\0') ||
           (local_b0 = lVar15, cVar5 = (*(code *)*param_4)(param_4[1],&local_b0), cVar5 != '\0')) {
          uVar4 = local_48;
          lVar10 = (longlong)(int)local_48;
          iVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          if (local_48._4_4_ < iVar6) {
            TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                      (local_90,uVar4 & 0xffffffff);
          }
          plVar7 = local_90;
          if (local_50 != (longlong *)0x0) {
            plVar7 = local_50;
          }
          plVar7[lVar10] = lVar15;
          iVar6 = *(int *)(param_1 + 200);
          iVar9 = (iVar6 - iVar12) + -1;
          if (iVar9 != 0) {
            lVar15 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar15 = param_1;
            }
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar15 + lVar13),(void *)(lVar14 + lVar15),(longlong)iVar9 * 0x18);
            iVar6 = *(int *)(param_1 + 200);
          }
          *(int *)(param_1 + 200) = iVar6 + -1;
          TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::
          ResizeShrink(param_1);
          param_4 = local_c0;
        }
        else {
          local_c8 = 0;
          param_4 = local_c0;
        }
      }
      lVar14 = lVar14 + -0x18;
      lVar13 = lVar13 + -0x18;
      lVar11 = lVar11 + -0x18;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  iVar12 = *(int *)(param_1 + 0x118) + -1;
  if (-1 < iVar12) {
    lVar15 = (longlong)iVar12 * 0x58;
    lVar13 = (longlong)iVar12 * 8;
    lVar14 = (longlong)*(int *)(param_1 + 0x118) << 3;
    lVar11 = lVar13;
    do {
      lVar10 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar10 = param_1 + 0xd0;
      }
      plVar7 = local_90;
      if (local_50 != (longlong *)0x0) {
        plVar7 = local_50;
      }
      plVar2 = plVar7 + (int)local_48;
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        if (*plVar7 == *(longlong *)(lVar10 + lVar13)) {
          piVar1 = (int *)(lVar15 + *(longlong *)(param_1 + 0x120));
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            lVar10 = *(longlong *)(param_1 + 0x120) + lVar15;
            if ((*(byte *)(lVar10 + 0x50) & 1) == 0) {
              bVar3 = *(byte *)(lVar10 + 0x28);
              plVar7 = (longlong *)(lVar10 + 8);
            }
            else {
              bVar3 = *(byte *)(lVar10 + 0x50);
              plVar7 = (longlong *)(lVar10 + 0x30);
            }
            if ((bVar3 & 2) == 0) {
              plVar7 = (longlong *)*plVar7;
            }
            (**(code **)(*plVar7 + 8))(plVar7,local_b8);
            if ((*(byte *)(lVar10 + 0x50) & 1) == 0) {
              iVar6 = *(int *)(param_1 + 0x118);
              iVar9 = (iVar6 - iVar12) + -1;
              if (iVar9 != 0) {
                lVar10 = *(longlong *)(param_1 + 0x110);
                if (*(longlong *)(param_1 + 0x110) == 0) {
                  lVar10 = param_1 + 0xd0;
                }
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)(lVar10 + lVar11),(void *)(lVar14 + lVar10),(longlong)iVar9 << 3)
                ;
                iVar6 = *(int *)(param_1 + 0x118);
              }
              *(int *)(param_1 + 0x118) = iVar6 + -1;
              TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,FDefaultAllocator>
              ::RemoveAtImpl(param_1 + 0x120,iVar12,1);
            }
            else {
              puVar8 = (undefined8 *)(lVar10 + 0x30);
              if ((*(byte *)(lVar10 + 0x50) & 2) == 0) {
                puVar8 = *(undefined8 **)(lVar10 + 0x30);
              }
              *(byte *)(lVar10 + 0x50) = *(byte *)(lVar10 + 0x50) & 0xfe;
              (**(code **)*puVar8)(puVar8,0);
              if ((*(byte *)(lVar10 + 0x50) & 2) == 0) {
                FMemory::Free(*(undefined8 *)(lVar10 + 0x30));
              }
            }
          }
          break;
        }
      }
      lVar14 = lVar14 + -8;
      lVar11 = lVar11 + -8;
      lVar13 = lVar13 + -8;
      lVar15 = lVar15 + -0x58;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  if (*(char *)(local_c0 + 2) != '\0') {
    *(undefined1 *)(local_c0 + 2) = 0;
  }
  return local_c8;
}



// FUNCTION 141f628f0 RestoreEntity body=1034 status=ok
// SIG undefined RestoreEntity(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>::RestoreEntity
          (longlong param_1,undefined8 param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong local_98;
  longlong local_90 [8];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar11 = *(int *)(param_1 + 200) + -1;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_c8 = 1;
  local_b8 = param_4;
  local_b0 = param_2;
  if (-1 < iVar11) {
    lVar12 = (longlong)iVar11 * 0x18;
    lVar15 = (longlong)*(int *)(param_1 + 200) * 0x18;
    lVar13 = lVar12;
    do {
      lVar14 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar14 = param_1;
      }
      piVar1 = (int *)(lVar14 + lVar13);
      local_a8 = *piVar1;
      iStack_a4 = piVar1[1];
      iStack_a0 = piVar1[2];
      iStack_9c = piVar1[3];
      lVar14 = *(longlong *)(lVar14 + 0x10 + lVar13);
      local_98 = lVar14;
      if (((iStack_a4 == param_3[1]) && (local_a8 == *param_3)) && (iStack_a0 == param_3[2])) {
        if ((*(char *)(param_4 + 2) == '\0') ||
           (local_c0 = lVar14, cVar5 = (*(code *)*param_4)(param_4[1],&local_c0), cVar5 != '\0')) {
          uVar4 = local_48;
          lVar16 = (longlong)(int)local_48;
          iVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          if (local_48._4_4_ < iVar6) {
            TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                      (local_90,uVar4 & 0xffffffff);
          }
          plVar8 = local_90;
          if (local_50 != (longlong *)0x0) {
            plVar8 = local_50;
          }
          plVar8[lVar16] = lVar14;
          iVar6 = *(int *)(param_1 + 200);
          iVar10 = (iVar6 - iVar11) + -1;
          if (iVar10 != 0) {
            lVar14 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar14 = param_1;
            }
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar14 + lVar12),(void *)(lVar15 + lVar14),(longlong)iVar10 * 0x18);
            iVar6 = *(int *)(param_1 + 200);
          }
          *(int *)(param_1 + 200) = iVar6 + -1;
          TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::
          ResizeShrink(param_1);
          param_4 = local_b8;
        }
        else {
          local_c8 = 0;
          param_4 = local_b8;
        }
      }
      lVar15 = lVar15 + -0x18;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + -0x18;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  lVar13 = FWeakObjectPtr::Get(param_1 + 0x130);
  iVar11 = *(int *)(param_1 + 0x118) + -1;
  local_c0 = lVar13;
  if (-1 < iVar11) {
    lVar14 = (longlong)iVar11 * 0x58;
    lVar12 = (longlong)iVar11 * 8;
    lVar16 = (longlong)*(int *)(param_1 + 0x118) << 3;
    lVar15 = lVar12;
    do {
      lVar7 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar7 = param_1 + 0xd0;
      }
      plVar8 = local_90;
      if (local_50 != (longlong *)0x0) {
        plVar8 = local_50;
      }
      plVar2 = plVar8 + (int)local_48;
      for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
        if (*plVar8 == *(longlong *)(lVar7 + lVar12)) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x120) + lVar14);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            lVar7 = lVar14 + *(longlong *)(param_1 + 0x120);
            if (lVar13 != 0) {
              if ((*(byte *)(lVar7 + 0x50) & 1) == 0) {
                bVar3 = *(byte *)(lVar7 + 0x28);
                plVar8 = (longlong *)(lVar7 + 8);
              }
              else {
                bVar3 = *(byte *)(lVar7 + 0x50);
                plVar8 = (longlong *)(lVar7 + 0x30);
              }
              if ((bVar3 & 2) == 0) {
                plVar8 = (longlong *)*plVar8;
              }
              (**(code **)(*plVar8 + 8))(plVar8,lVar13,local_b0);
            }
            if ((*(byte *)(lVar7 + 0x50) & 1) == 0) {
              iVar6 = *(int *)(param_1 + 0x118);
              iVar10 = (iVar6 - iVar11) + -1;
              if (iVar10 != 0) {
                lVar13 = *(longlong *)(param_1 + 0x110);
                if (*(longlong *)(param_1 + 0x110) == 0) {
                  lVar13 = param_1 + 0xd0;
                }
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)(lVar13 + lVar15),(void *)(lVar16 + lVar13),(longlong)iVar10 << 3
                          );
                iVar6 = *(int *)(param_1 + 0x118);
              }
              *(int *)(param_1 + 0x118) = iVar6 + -1;
              TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,FDefaultAllocator>
              ::RemoveAtImpl(param_1 + 0x120,iVar11,1);
              lVar13 = local_c0;
            }
            else {
              puVar9 = (undefined8 *)(lVar7 + 0x30);
              if ((*(byte *)(lVar7 + 0x50) & 2) == 0) {
                puVar9 = *(undefined8 **)(lVar7 + 0x30);
              }
              *(byte *)(lVar7 + 0x50) = *(byte *)(lVar7 + 0x50) & 0xfe;
              (**(code **)*puVar9)(puVar9,0);
              lVar13 = local_c0;
              if ((*(byte *)(lVar7 + 0x50) & 2) == 0) {
                FMemory::Free(*(undefined8 *)(lVar7 + 0x30));
                lVar13 = local_c0;
              }
            }
          }
          break;
        }
      }
      lVar16 = lVar16 + -8;
      lVar15 = lVar15 + -8;
      lVar12 = lVar12 + -8;
      lVar14 = lVar14 + -0x58;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  if (*(char *)(local_b8 + 2) != '\0') {
    *(undefined1 *)(local_b8 + 2) = 0;
  }
  return local_c8;
}



// FUNCTION 141f62d00 RestorePreAnimatedState body=704 status=ok
// SIG undefined RestorePreAnimatedState(void)

void FMovieScenePreAnimatedState::RestorePreAnimatedState(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uVar3 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar10 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar10;
      if (bVar5) goto LAB_141f62dce;
      uVar4 = puVar13[lVar6 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar10 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_74 = (iStack_70 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141f62dce:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 5);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = param_1;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_141f62e94;
      uVar8 = puVar13[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_74 = (uVar12 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_141f62e94:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>::Restore
              ((longlong)(int)uStack_4c * 0x148 + *param_1 + 8,param_2);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  iVar10 = (int)param_1[0x2f] + -1;
  lVar6 = (longlong)iVar10;
  if (-1 < iVar10) {
    lVar9 = lVar6 * 0x58;
    do {
      lVar7 = param_1[0x2e] + lVar9;
      if ((*(byte *)(lVar7 + 0x50) & 1) == 0) {
        bVar2 = *(byte *)(lVar7 + 0x28);
        plVar11 = (longlong *)(lVar7 + 8);
      }
      else {
        bVar2 = *(byte *)(lVar7 + 0x50);
        plVar11 = (longlong *)(lVar7 + 0x30);
      }
      if ((bVar2 & 2) == 0) {
        plVar11 = (longlong *)*plVar11;
      }
      (**(code **)(*plVar11 + 8))(plVar11,param_2);
      lVar9 = lVar9 + -0x58;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x11c)) {
    TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (param_1 + 10,0);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((*(int *)((longlong)param_1 + 0x16c) < 0) && (*(int *)((longlong)param_1 + 0x16c) != 0)) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (param_1 + 0x24,0);
  }
  TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>,FDefaultAllocator>
  ::Reset(param_1 + 0x2e,0);
  TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
  ::Reset(param_1);
  TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x31);
  return;
}



// FUNCTION 141f62fc0 FUN_141f62fc0 body=546 status=ok
// SIG undefined FUN_141f62fc0(void)

void FUN_141f62fc0(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int local_res8 [2];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  
  plVar1 = param_1 + 0x31;
  local_70 = plVar1;
  TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  uVar9 = 0;
  uVar6 = uVar9;
  if (local_res8[0] != -1) {
    uVar6 = *plVar1 + (longlong)local_res8[0] * 0x48;
  }
  uVar8 = uVar6 + 0x10;
  if (uVar6 == 0) {
    uVar8 = uVar9;
  }
  if (uVar8 == 0) {
    if (*(char *)(param_4 + 4) == '\0') {
      return;
    }
    *(undefined1 *)(param_4 + 4) = 0;
    return;
  }
  bVar3 = true;
  puVar10 = (undefined8 *)
            ((ulonglong)(*(longlong *)(uVar8 + 0x20) != 0) - 1 & uVar8 |
            *(ulonglong *)(uVar8 + 0x20));
  uVar6 = (longlong)*(int *)(uVar8 + 0x28) & 0x1fffffffffffffff;
  if (puVar10 + *(int *)(uVar8 + 0x28) < puVar10) {
    uVar6 = uVar9;
  }
  if (uVar6 != 0) {
    do {
      local_78 = *puVar10;
      if (((int)local_78 == -1) && ((int)((ulonglong)local_78 >> 0x20) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_38 = *(char *)(param_4 + 4) != '\0';
        local_68 = *param_3;
        local_60 = *(undefined4 *)(param_3 + 1);
        if ((bool)local_38) {
          local_48 = *param_4;
          uStack_44 = param_4[1];
          uStack_40 = param_4[2];
          uStack_3c = param_4[3];
        }
        cVar4 = TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
                RestoreEntity(param_1 + 10,param_2,&local_68);
LAB_141f63185:
        if ((cVar4 == '\0') || (!bVar3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
        ::FindId(param_1,local_res8,&local_78);
        if (local_res8[0] == -1) {
          lVar5 = 0;
        }
        else {
          lVar5 = (longlong)local_res8[0] * 0x148 + *param_1;
        }
        lVar7 = lVar5 + 8;
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        if (lVar7 != 0) {
          local_38 = *(char *)(param_4 + 4) != '\0';
          local_58 = *param_3;
          local_50 = *(undefined4 *)(param_3 + 1);
          if ((bool)local_38) {
            local_48 = *param_4;
            uStack_44 = param_4[1];
            uStack_40 = param_4[2];
            uStack_3c = param_4[3];
          }
          cVar4 = TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>::
                  RestoreEntity(lVar7,param_2,&local_58);
          goto LAB_141f63185;
        }
      }
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar6);
    if (!bVar3) goto LAB_141f631b4;
  }
  TSet<TTuple<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TArray<FObjectKey,TInlineAllocator<4,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
  ::Remove(local_70,param_3);
LAB_141f631b4:
  if (*(char *)(param_4 + 4) != '\0') {
    *(undefined1 *)(param_4 + 4) = 0;
  }
  return;
}



// FUNCTION 141f631f0 FUN_141f631f0 body=154 status=ok
// SIG undefined FUN_141f631f0(void)

void FUN_141f631f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar2[1];
        if (bVar6) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0xffffffff);
        }
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  return;
}



// FUNCTION 141f63290 FUN_141f63290 body=205 status=ok
// SIG undefined FUN_141f63290(void)

void FUN_141f63290(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_res20;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar2[1];
        if (bVar6) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 8);
        if (plVar3 != (longlong *)0x0) {
          if (param_2 == 0) {
            local_res20 = 0xffffffff;
          }
          else {
            FWeakObjectPtr::operator=(&local_res20);
          }
          (**(code **)(*plVar3 + 0x10))(plVar3,local_res20);
        }
        LOCK();
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  return;
}



// FUNCTION 141f63360 FUN_141f63360 body=155 status=ok
// SIG undefined FUN_141f63360(void)

longlong FUN_141f63360(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_1 + 0x168) != 0)) {
      return *(longlong *)(param_1 + 0x168);
    }
    lVar2 = FUN_1429ff160();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 141f63400 FUN_141f63400 body=147 status=ok
// SIG undefined FUN_141f63400(void)

void FUN_141f63400(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(longlong *)(param_1 + 0x3d8) != 0) &&
     ((lVar2 = FWeakObjectPtr::Get(param_1 + 0x448), lVar2 == 0 ||
      (*(longlong *)(param_1 + 0x450) == 0)))) {
    FUN_141f54cb0(param_1 + 0x448,*(undefined8 *)(param_1 + 0x3d8),param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x3c8) = 3;
  local_18 = *(undefined8 *)(param_1 + 0x774);
  local_10 = *(undefined8 *)(param_1 + 0x760);
  plVar1 = *(longlong **)(param_1 + 0x430);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
  if ((char)plVar1[3] != '\0') {
    *(undefined1 *)(plVar1 + 3) = 0;
  }
  return;
}



// FUNCTION 141f634a0 FUN_141f634a0 body=139 status=ok
// SIG undefined FUN_141f634a0(void)

/* WARNING: Removing unreachable block (ram,0x000141f63507) */

void FUN_141f634a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_141f68430(param_1,param_2,2);
  local_18 = *(longlong *)(param_1 + 0x774);
  uStack_10 = *(undefined8 *)(param_1 + 0x760);
  plVar1 = *(longlong **)(param_1 + 0x430);
  if ((char)plVar1[3] != '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_18);
    if ((char)plVar1[3] != '\0') {
      *(undefined1 *)(plVar1 + 3) = 0;
    }
    if (&local_18 != plVar1 + 1) {
      *(undefined4 *)(plVar1 + 1) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_18._4_4_;
      *(undefined4 *)(plVar1 + 2) = (undefined4)uStack_10;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_10._4_4_;
      *(undefined1 *)(plVar1 + 3) = 1;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
  }
  return;
}



// FUNCTION 141f63530 FUN_141f63530 body=194 status=ok
// SIG undefined FUN_141f63530(void)

void FUN_141f63530(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  dVar6 = ((double)(int)*(undefined8 *)(param_1 + 0x760) * (double)param_2) /
          (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  lVar4 = (longlong)dVar6;
  dVar2 = dVar6;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar6)) {
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar6;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar4 - (ulonglong)(uVar3 & 1));
  }
  dVar6 = dVar6 - dVar2;
  dVar7 = dVar6;
  if ((0.0 < dVar6) && (dVar7 = 0.9999999403953552, dVar6 <= 0.9999999403953552)) {
    dVar7 = dVar6;
  }
  fVar8 = (float)dVar7;
  if (0.0 <= fVar8) {
    fVar5 = 0.99999994;
    if (fVar8 <= 0.99999994) {
      fVar5 = fVar8;
    }
    FUN_141f634a0(param_1,CONCAT44(fVar5,(int)dVar2));
    return;
  }
  FUN_141f634a0(param_1,(int)dVar2);
  return;
}



// FUNCTION 141f63610 FUN_141f63610 body=25 status=ok
// SIG undefined FUN_141f63610(void)

undefined8 FUN_141f63610(undefined8 param_1,undefined8 param_2)

{
  FUN_141f3dd00(param_2,param_1);
  return 1;
}



// FUNCTION 141f63630 SerializeInlineValue<FMovieSceneSequenceInstanceData,16> body=8 status=ok
// SIG undefined SerializeInlineValue<FMovieSceneSequenceInstanceData,16>(void)

void SerializeInlineValue<FMovieSceneSequenceInstanceData,16>(undefined8 param_1,undefined8 param_2)

{
  SerializeInlineValue<FMovieSceneSequenceInstanceData,16>(param_1,param_2,1);
  return;
}



// FUNCTION 141f63640 FUN_141f63640 body=67 status=ok
// SIG undefined FUN_141f63640(void)

void FUN_141f63640(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_1464d3e38);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00f8);
  FUN_141763960(param_1,param_2);
  return;
}



// FUNCTION 141f63690 Serialize body=428 status=ok
// SIG undefined Serialize(void)

/* WARNING: Removing unreachable block (ram,0x000141f63804) */

void UMovieSceneFolder::Serialize(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x50);
    for (iVar3 = *(int *)(param_1 + 0x58); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x50,0);
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar6 = (longlong)*(int *)(param_1 + 0x68) * 0x10 + lVar4;
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0x10) {
      FUN_141682af0(lVar4,&local_28,0);
      iVar3 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar3 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x50,iVar3);
      }
      puVar2 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x50));
      *puVar2 = 0;
      *puVar2 = local_28;
      local_28 = 0;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      uStack_20 = 0;
    }
    FUN_141763960(param_1,param_2);
  }
  else {
    FUN_141763960();
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x60,0);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar6 = (longlong)*(int *)(param_1 + 0x58) * 0x10 + lVar4;
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0x10) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_141678c50(lVar4,&local_28);
      iVar3 = *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x68) = iVar3 + 1;
      if (*(int *)(param_1 + 0x6c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar3);
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x10);
      *puVar1 = (undefined4)local_28;
      puVar1[1] = local_28._4_4_;
      puVar1[2] = (undefined4)uStack_20;
      puVar1[3] = uStack_20._4_4_;
    }
  }
  return;
}



// FUNCTION 141f63840 Serialize body=400 status=ok
// SIG undefined Serialize(void)

void UMovieSceneSection::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined4 local_res18 [2];
  int local_res20 [2];
  int local_18;
  int iStack_14;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00f8);
  iVar6 = FArchive::CustomVer(param_2,&DAT_1464b00f8);
  if (iVar6 < 7) {
    FUN_141f52860(&local_18);
    uVar5 = CONCAT44(iStack_14,local_18);
    if (((*(byte *)(param_1 + 0xc4) & 1) == 0) || (*(char *)(param_1 + 200) == '\0')) {
      UpgradeLegacyMovieSceneTime(local_res18,param_1,uVar5,(double)*(float *)(param_1 + 0xb4));
      UpgradeLegacyMovieSceneTime(local_res20,param_1,uVar5,(double)*(float *)(param_1 + 0xb8));
      *(undefined1 *)(param_1 + 0x90) = 1;
      *(undefined4 *)(param_1 + 0x94) = local_res18[0];
      local_res20[0] = local_res20[0] + 1;
      uVar8 = 0;
    }
    else {
      local_res20[0] = 0;
      *(undefined1 *)(param_1 + 0x90) = 2;
      *(undefined4 *)(param_1 + 0x94) = 0;
      uVar8 = 2;
    }
    *(undefined1 *)(param_1 + 0x98) = uVar8;
    *(int *)(param_1 + 0x9c) = local_res20[0];
    dVar3 = ((double)*(float *)(param_1 + 0xbc) * (double)local_18) / (double)iStack_14;
    lVar9 = (longlong)dVar3;
    if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != dVar3)) {
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = dVar3;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uVar7 = movmskpd(local_res20[0],auVar1);
      dVar3 = (double)(longlong)(lVar9 - (ulonglong)(uVar7 & 1));
    }
    *(int *)(param_1 + 0xa0) = (int)dVar3;
    dVar4 = ((double)*(float *)(param_1 + 0xc0) * (double)local_18) / (double)iStack_14;
    lVar9 = (longlong)dVar4;
    if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != dVar4)) {
      auVar2._8_4_ = SUB84(dVar4,0);
      auVar2._0_8_ = dVar4;
      auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uVar7 = movmskpd((int)dVar3,auVar2);
      dVar4 = (double)(longlong)(lVar9 - (ulonglong)(uVar7 & 1));
    }
    *(int *)(param_1 + 0xa4) = (int)dVar4;
  }
  return;
}



// FUNCTION 141f639d0 FUN_141f639d0 body=67 status=ok
// SIG undefined FUN_141f639d0(void)

void FUN_141f639d0(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_1464d3e38);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  FUN_141763960(param_1,param_2);
  return;
}



// FUNCTION 141f63a20 FUN_141f63a20 body=1257 status=ok
// SIG undefined FUN_141f63a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141f63a20(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  void *_Src;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_120;
  int iStack_11c;
  longlong local_118;
  int local_110 [2];
  undefined8 local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  undefined1 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aca1e8) && (_Init_thread_header(&DAT_146aca1e8), DAT_146aca1e8 == -1))
  {
    FName::FName(&DAT_146aca1e0,"IntegralCurve",1);
    _Init_thread_footer(&DAT_146aca1e8);
  }
  local_118 = 10;
  if ((*param_2 == 10) && (param_2[3] == DAT_146aca1e0)) {
    local_e0 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xffffffff;
    local_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    local_e8 = &PTR__scalar_deleting_destructor__144f1a640;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0x7fffffff;
    local_7c = 0;
    uVar5 = FIntegralCurve::StaticStruct();
    FUN_141725e50(uVar5,param_3,&local_e8,0);
    if (local_80 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 0x19) = 1;
      *(bool *)(param_1 + 0x18) = local_80 != 0;
    }
    iVar3 = FUN_141a555c0(&local_e8);
    plVar1 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x14) < iVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,iVar3);
    }
    iVar3 = FUN_141a555c0(&local_e8);
    plVar11 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar11,iVar3);
    }
    FUN_141f52860(&local_120);
    FIntegralCurve::GetKeyIterator(&local_e8,&local_100);
    uVar5 = _local_120;
    local_108 = 0xfffffffffffffffe;
    lVar8 = -4;
    local_f0 = -2;
    for (; (lVar9 = local_f0, local_118 = lVar8, -1 < local_f8 && (local_f8 < (int)local_100[1]));
        local_f8 = local_f8 + 1) {
      auVar16._0_8_ = (double)*(float *)(*local_100 + (longlong)local_f8 * 8);
      _local_120 = uVar5;
      dVar13 = (double)FFrameRate::MaxSeconds(&local_120);
      dVar14 = (double)FFrameRate::MaxSeconds(&local_120);
      dVar15 = -dVar14;
      if ((-dVar14 <= auVar16._0_8_) && (dVar15 = dVar13, auVar16._0_8_ <= dVar13)) {
        dVar15 = auVar16._0_8_;
      }
      bVar12 = *(int *)(*local_100 + 4 + (longlong)local_f8 * 8) != 0;
      auVar16._0_8_ = ((double)local_120 * dVar15) / (double)iStack_11c;
      lVar7 = (longlong)auVar16._0_8_;
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar16._0_8_)) {
        auVar16._8_8_ = auVar16._0_8_;
        uVar4 = movmskpd((int)local_100,auVar16);
        auVar16._0_8_ = (double)(longlong)(lVar7 - (ulonglong)(uVar4 & 1));
      }
      iVar3 = (int)auVar16._0_8_;
      local_128 = bVar12;
      local_110[0] = iVar3;
      if (lVar9 == -2 || lVar9 + 2 < 0) {
        iVar10 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar10 + 1;
        if (*(int *)(param_1 + 0x14) < iVar10 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
        }
        *(int *)(*plVar1 + (longlong)iVar10 * 4) = iVar3;
LAB_141f63def:
        iVar3 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
        }
        *(bool *)((longlong)iVar3 + *plVar11) = bVar12;
      }
      else {
        lVar7 = *plVar1;
        if (*(int *)(lVar7 + lVar8) <= iVar3) {
          iVar10 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar10 + 1;
          if (*(int *)(param_1 + 0x14) < iVar10 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
            lVar7 = *plVar1;
          }
          *(int *)(lVar7 + (longlong)iVar10 * 4) = iVar3;
          goto LAB_141f63def;
        }
        iVar10 = (int)local_108;
        if (-1 < lVar9) {
          piVar6 = (int *)(local_118 + -4 + lVar7);
          lVar8 = lVar9;
          do {
            if (*piVar6 <= iVar3) {
              TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar1,local_110,iVar10 + 1);
              iVar2 = *(int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x28) = iVar2 + 1;
              if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar11,iVar2);
              }
              _Src = (void *)((longlong)(iVar10 + 1) + *plVar11);
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)_Src + 1),_Src,(longlong)(iVar2 - (iVar10 + 1)));
              *(undefined1 *)(lVar8 + 1 + *plVar11) = local_128;
              lVar9 = local_f0;
              break;
            }
            iVar10 = iVar10 + -1;
            piVar6 = piVar6 + -1;
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
        if (iVar10 < 0) {
          iVar10 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar10 + 1;
          if (*(int *)(param_1 + 0x14) < iVar10 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
          }
          _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 4),(void *)*plVar1,(longlong)iVar10 << 2)
          ;
          *(int *)*plVar1 = iVar3;
          iVar3 = *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x28) = iVar3 + 1;
          if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar11,iVar3);
          }
          _guard_xfg_dispatch_icall_nop((void *)(*plVar11 + 1),(void *)*plVar11,(longlong)iVar3);
          *(undefined1 *)*plVar11 = local_128;
        }
      }
      local_f0 = lVar9 + 1;
      local_108 = CONCAT44(local_108._4_4_,(int)local_108 + 1);
      lVar8 = local_118 + 4;
    }
    local_e8 = &PTR__scalar_deleting_destructor__144f1a640;
    if (local_90 != 0) {
      FMemory::Free();
    }
    local_e8 = &PTR__scalar_deleting_destructor__14413eb30;
    local_98 = 0;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e0);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 141f63f10 FUN_141f63f10 body=1247 status=ok
// SIG undefined FUN_141f63f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141f63f10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  void *_Src;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_120;
  int iStack_11c;
  longlong local_118;
  int local_110 [2];
  undefined8 local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  undefined1 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aca1f8) && (_Init_thread_header(&DAT_146aca1f8), DAT_146aca1f8 == -1))
  {
    FName::FName(&DAT_146aca1f0,"IntegralCurve",1);
    _Init_thread_footer(&DAT_146aca1f8);
  }
  local_118 = 10;
  if ((*param_2 == 10) && (param_2[3] == DAT_146aca1f0)) {
    local_e0 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xffffffff;
    local_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    local_e8 = &PTR__scalar_deleting_destructor__144f1a640;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0x7fffffff;
    local_7c = 0;
    uVar6 = FIntegralCurve::StaticStruct();
    FUN_141725e50(uVar6,param_3,&local_e8,0);
    if (local_80 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 0x18) = (undefined1)local_80;
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    iVar4 = FUN_141a555c0(&local_e8);
    plVar1 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x14) < iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,iVar4);
    }
    iVar4 = FUN_141a555c0(&local_e8);
    plVar12 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar12,iVar4);
    }
    FUN_141f52860(&local_120);
    FIntegralCurve::GetKeyIterator(&local_e8,&local_100);
    uVar6 = _local_120;
    local_108 = 0xfffffffffffffffe;
    lVar9 = -4;
    local_f0 = -2;
    for (; (lVar10 = local_f0, local_118 = lVar9, -1 < local_f8 && (local_f8 < (int)local_100[1]));
        local_f8 = local_f8 + 1) {
      auVar16._0_8_ = (double)*(float *)(*local_100 + (longlong)local_f8 * 8);
      _local_120 = uVar6;
      dVar13 = (double)FFrameRate::MaxSeconds(&local_120);
      dVar14 = (double)FFrameRate::MaxSeconds(&local_120);
      dVar15 = -dVar14;
      if ((-dVar14 <= auVar16._0_8_) && (dVar15 = dVar13, auVar16._0_8_ <= dVar13)) {
        dVar15 = auVar16._0_8_;
      }
      uVar2 = *(undefined1 *)(*local_100 + 4 + (longlong)local_f8 * 8);
      auVar16._0_8_ = ((double)local_120 * dVar15) / (double)iStack_11c;
      lVar8 = (longlong)auVar16._0_8_;
      if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != auVar16._0_8_)) {
        auVar16._8_8_ = auVar16._0_8_;
        uVar5 = movmskpd((int)local_100,auVar16);
        auVar16._0_8_ = (double)(longlong)(lVar8 - (ulonglong)(uVar5 & 1));
      }
      iVar4 = (int)auVar16._0_8_;
      local_128 = uVar2;
      local_110[0] = iVar4;
      if (lVar10 == -2 || lVar10 + 2 < 0) {
        iVar11 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar11 + 1;
        if (*(int *)(param_1 + 0x14) < iVar11 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
        }
        *(int *)(*plVar1 + (longlong)iVar11 * 4) = iVar4;
LAB_141f642d5:
        iVar4 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar12,iVar4);
        }
        *(undefined1 *)((longlong)iVar4 + *plVar12) = uVar2;
      }
      else {
        lVar8 = *plVar1;
        if (*(int *)(lVar8 + lVar9) <= iVar4) {
          iVar11 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar11 + 1;
          if (*(int *)(param_1 + 0x14) < iVar11 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
            lVar8 = *plVar1;
          }
          *(int *)(lVar8 + (longlong)iVar11 * 4) = iVar4;
          goto LAB_141f642d5;
        }
        iVar11 = (int)local_108;
        if (-1 < lVar10) {
          piVar7 = (int *)(local_118 + -4 + lVar8);
          lVar9 = lVar10;
          do {
            if (*piVar7 <= iVar4) {
              TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar1,local_110,iVar11 + 1);
              iVar3 = *(int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x28) = iVar3 + 1;
              if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar12,iVar3);
              }
              _Src = (void *)((longlong)(iVar11 + 1) + *plVar12);
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)_Src + 1),_Src,(longlong)(iVar3 - (iVar11 + 1)));
              *(undefined1 *)(lVar9 + 1 + *plVar12) = local_128;
              lVar10 = local_f0;
              break;
            }
            iVar11 = iVar11 + -1;
            piVar7 = piVar7 + -1;
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
        }
        if (iVar11 < 0) {
          iVar11 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar11 + 1;
          if (*(int *)(param_1 + 0x14) < iVar11 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
          }
          _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 4),(void *)*plVar1,(longlong)iVar11 << 2)
          ;
          *(int *)*plVar1 = iVar4;
          iVar4 = *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar12,iVar4);
          }
          _guard_xfg_dispatch_icall_nop((void *)(*plVar12 + 1),(void *)*plVar12,(longlong)iVar4);
          *(undefined1 *)*plVar12 = local_128;
        }
      }
      local_f0 = lVar10 + 1;
      local_108 = CONCAT44(local_108._4_4_,(int)local_108 + 1);
      lVar9 = local_118 + 4;
    }
    local_e8 = &PTR__scalar_deleting_destructor__144f1a640;
    if (local_90 != 0) {
      FMemory::Free();
    }
    local_e8 = &PTR__scalar_deleting_destructor__14413eb30;
    local_98 = 0;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e0);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 141f643f0 FUN_141f643f0 body=1305 status=ok
// SIG undefined FUN_141f643f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141f643f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined8 local_160;
  int local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_13b;
  float local_138;
  float local_134;
  undefined1 local_130;
  undefined8 local_12c;
  longlong *local_120;
  int local_118;
  undefined **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aca208) && (_Init_thread_header(&DAT_146aca208), DAT_146aca208 == -1))
  {
    FName::FName(&DAT_146aca200,"RichCurve",1);
    _Init_thread_footer(&DAT_146aca208);
  }
  local_160 = 10;
  if ((*param_2 == 10) && (param_2[3] == DAT_146aca200)) {
    local_100 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0xffffffff;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_108 = &PTR_FUN_14413ebc8;
    local_b0 = 0x404;
    local_ac = 3.4028235e+38;
    local_a8 = 0;
    local_a0 = 0;
    uVar9 = FRichCurve::StaticStruct();
    FUN_141725e50(uVar9,param_3,&local_108,0);
    if (local_ac != 3.4028235e+38) {
      *(float *)(param_1 + 0x30) = local_ac;
      *(undefined1 *)(param_1 + 0x34) = 1;
    }
    *(undefined1 *)(param_1 + 8) = (undefined1)local_b0;
    *(undefined1 *)(param_1 + 9) = local_b0._1_1_;
    iVar6 = UVariantSet::GetNumVariants(&local_108);
    plVar1 = (longlong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) < iVar6) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,iVar6);
    }
    iVar6 = UVariantSet::GetNumVariants(&local_108);
    plVar15 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x2c) < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (plVar15,iVar6);
    }
    FUN_141f52860(&local_160);
    uVar9 = local_160;
    fVar4 = (float)local_160._4_4_ / (float)(int)local_160;
    FRichCurve::GetKeyIterator(&local_108,&local_120);
    lVar14 = -2;
    local_148 = 0xfffffffffffffffe;
    local_160 = -4;
    while( true ) {
      if ((local_118 < 0) || ((int)local_120[1] <= local_118)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      lVar11 = *local_120;
      lVar13 = (longlong)local_118 * 0x1c;
      auVar19._0_8_ = (double)*(float *)(lVar13 + 4 + lVar11);
      local_150 = uVar9;
      dVar16 = (double)FFrameRate::MaxSeconds(&local_150);
      dVar17 = (double)FFrameRate::MaxSeconds(&local_150);
      dVar18 = -dVar17;
      if ((-dVar17 <= auVar19._0_8_) && (dVar18 = dVar16, auVar19._0_8_ <= dVar16)) {
        dVar18 = auVar19._0_8_;
      }
      local_168 = *(undefined1 *)(lVar13 + 1 + lVar11);
      fVar20 = fVar4 * *(float *)(lVar13 + 0xc + lVar11);
      uVar3 = *(undefined1 *)(lVar13 + lVar11);
      fVar21 = fVar4 * *(float *)(lVar13 + 0x14 + lVar11);
      uVar2 = *(undefined4 *)(lVar13 + 8 + lVar11);
      local_130 = 0;
      local_12c = 0;
      auVar19._0_8_ = ((double)(int)local_150 * dVar18) / (double)local_150._4_4_;
      lVar11 = (longlong)auVar19._0_8_;
      if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != auVar19._0_8_)) {
        auVar19._8_8_ = auVar19._0_8_;
        uVar7 = movmskpd(0,auVar19);
        auVar19._0_8_ = (double)(longlong)(lVar11 - (ulonglong)(uVar7 & 1));
      }
      iVar6 = (int)auVar19._0_8_;
      local_158[0] = iVar6;
      local_140 = uVar2;
      local_13c = uVar3;
      local_13b = local_168;
      local_138 = fVar20;
      local_134 = fVar21;
      if (lVar14 == -2 || lVar14 + 2 < 0) {
        iVar8 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar8 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
        }
        *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar6;
        iVar6 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(plVar15,iVar6);
        }
        puVar12 = (undefined4 *)((longlong)iVar6 * 0x1c + *plVar15);
        *puVar12 = uVar2;
        *(undefined1 *)(puVar12 + 1) = uVar3;
        *(undefined1 *)((longlong)puVar12 + 5) = local_168;
        puVar12[2] = fVar20;
        puVar12[3] = fVar21;
        *(undefined1 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar12 + 5) = 0;
      }
      else {
        lVar11 = *plVar1;
        if (iVar6 < *(int *)(lVar11 + local_160)) {
          iVar8 = (int)local_148;
          if (-1 < lVar14) {
            piVar10 = (int *)(local_160 + -4 + lVar11);
            lVar11 = lVar14;
            do {
              if (*piVar10 <= iVar6) {
                TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar1,local_158,iVar8 + 1);
                TArray<FMovieSceneFloatValue,FDefaultAllocator>::Insert
                          (plVar15,&local_140,iVar8 + 1);
                break;
              }
              iVar8 = iVar8 + -1;
              piVar10 = piVar10 + -1;
              lVar11 = lVar11 + -1;
            } while (-1 < lVar11);
          }
          if (iVar8 < 0) {
            TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar1,local_158,0);
            TArray<FMovieSceneFloatValue,FDefaultAllocator>::Insert(plVar15,&local_140);
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar8 + 1;
          if (*(int *)(param_1 + 0x1c) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            lVar11 = *plVar1;
          }
          *(int *)(lVar11 + (longlong)iVar8 * 4) = iVar6;
          iVar6 = *(int *)(param_1 + 0x28);
          iVar8 = iVar6 + 1;
          *(int *)(param_1 + 0x28) = iVar8;
          if (*(int *)(param_1 + 0x2c) < iVar8) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
            ResizeGrow(plVar15);
          }
          puVar12 = (undefined4 *)((longlong)iVar6 * 0x1c + *plVar15);
          *puVar12 = uVar2;
          *(undefined1 *)(puVar12 + 1) = uVar3;
          *(undefined1 *)((longlong)puVar12 + 5) = local_168;
          puVar12[2] = fVar20;
          puVar12[3] = fVar21;
          *(undefined1 *)(puVar12 + 4) = 0;
          *(undefined8 *)(puVar12 + 5) = 0;
        }
      }
      lVar14 = lVar14 + 1;
      local_148 = CONCAT44(local_148._4_4_,(int)local_148 + 1);
      local_160 = local_160 + 4;
      local_118 = local_118 + 1;
    }
    FRichCurve::~FRichCurve(&local_108);
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 141f64910 FUN_141f64910 body=364 status=ok
// SIG undefined FUN_141f64910(void)

ulonglong FUN_141f64910(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_res10;
  char local_28 [4];
  float local_24;
  char local_20;
  float local_1c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aca2d8) {
    _Init_thread_header(&DAT_146aca2d8);
    if (DAT_146aca2d8 == -1) {
      FName::FName(&DAT_146aca2d0,"FloatRange",1);
      _Init_thread_footer(&DAT_146aca2d8);
    }
  }
  local_res10 = 10;
  uVar4 = 0;
  if ((*param_2 == 10) && (uVar4 = DAT_146aca2d0, param_2[3] == DAT_146aca2d0)) {
    uVar2 = FUN_14171a3f0();
    local_28[0] = '\x02';
    local_24 = 0.0;
    local_20 = '\x02';
    local_1c = 0.0;
    FUN_141725e50(uVar2,param_3,local_28,0);
    uVar3 = FUN_141f52860(&local_res10);
    uVar2 = local_res10;
    uVar6 = 2;
    uVar8 = 0;
    if (local_28[0] != '\x02') {
      uVar3 = UpgradeLegacyMovieSceneTime(&local_res10,0,local_res10,(double)local_24);
      uVar6 = 1;
      uVar8 = (undefined4)local_res10;
    }
    uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
    uVar1 = 2;
    uVar7 = 0;
    if (local_20 != '\x02') {
      uVar2 = UpgradeLegacyMovieSceneTime(&local_res10,0,uVar2,(double)local_1c);
      uVar5 = (undefined7)((ulonglong)uVar2 >> 8);
      uVar1 = 1;
      uVar7 = (undefined4)local_res10;
    }
    *param_1 = uVar6;
    *(undefined4 *)(param_1 + 4) = uVar8;
    param_1[8] = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    return CONCAT71(uVar5,1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141f64a80 FUN_141f64a80 body=1251 status=ok
// SIG undefined FUN_141f64a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141f64a80(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *_Src;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_148 [32];
  int local_128;
  int iStack_124;
  longlong local_120;
  undefined4 local_118;
  int local_110 [2];
  undefined8 local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  undefined1 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aca218) && (_Init_thread_header(&DAT_146aca218), DAT_146aca218 == -1))
  {
    FName::FName(&DAT_146aca210,"IntegralCurve",1);
    _Init_thread_footer(&DAT_146aca218);
  }
  local_120 = 10;
  if ((*param_2 == 10) && (param_2[3] == DAT_146aca210)) {
    local_e0 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xffffffff;
    local_ac = 0;
    local_a0 = 0;
    local_98 = 0;
    local_e8 = &PTR__scalar_deleting_destructor__144f1a640;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0x7fffffff;
    local_7c = 0;
    uVar6 = FIntegralCurve::StaticStruct();
    FUN_141725e50(uVar6,param_3,&local_e8,0);
    if (local_80 != 0x7fffffff) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *(int *)(param_1 + 0x18) = local_80;
    }
    iVar4 = FUN_141a555c0(&local_e8);
    plVar1 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x14) < iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,iVar4);
    }
    iVar4 = FUN_141a555c0(&local_e8);
    plVar9 = (longlong *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x2c) < iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar9,iVar4);
    }
    FUN_141f52860(&local_128);
    FIntegralCurve::GetKeyIterator(&local_e8,&local_100);
    uVar6 = _local_128;
    local_108 = 0xfffffffffffffffe;
    lVar12 = -4;
    local_f0 = -2;
    for (; (lVar10 = local_f0, local_120 = lVar12, -1 < local_f8 && (local_f8 < (int)local_100[1]));
        local_f8 = local_f8 + 1) {
      auVar16._0_8_ = (double)*(float *)(*local_100 + (longlong)local_f8 * 8);
      _local_128 = uVar6;
      dVar13 = (double)FFrameRate::MaxSeconds(&local_128);
      dVar14 = (double)FFrameRate::MaxSeconds(&local_128);
      dVar15 = -dVar14;
      if ((-dVar14 <= auVar16._0_8_) && (dVar15 = dVar13, auVar16._0_8_ <= dVar13)) {
        dVar15 = auVar16._0_8_;
      }
      uVar2 = *(undefined4 *)(*local_100 + 4 + (longlong)local_f8 * 8);
      auVar16._0_8_ = ((double)local_128 * dVar15) / (double)iStack_124;
      lVar8 = (longlong)auVar16._0_8_;
      if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != auVar16._0_8_)) {
        auVar16._8_8_ = auVar16._0_8_;
        uVar5 = movmskpd((int)local_100,auVar16);
        auVar16._0_8_ = (double)(longlong)(lVar8 - (ulonglong)(uVar5 & 1));
      }
      iVar4 = (int)auVar16._0_8_;
      local_118 = uVar2;
      local_110[0] = iVar4;
      if (lVar10 == -2 || lVar10 + 2 < 0) {
        iVar11 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar11 + 1;
        if (*(int *)(param_1 + 0x14) < iVar11 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
        }
        *(int *)(*plVar1 + (longlong)iVar11 * 4) = iVar4;
LAB_141f64e4c:
        iVar4 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
        }
        *(undefined4 *)(*plVar9 + (longlong)iVar4 * 4) = uVar2;
      }
      else {
        lVar8 = *plVar1;
        if (*(int *)(lVar8 + lVar12) <= iVar4) {
          iVar11 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar11 + 1;
          if (*(int *)(param_1 + 0x14) < iVar11 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
            lVar8 = *plVar1;
          }
          *(int *)(lVar8 + (longlong)iVar11 * 4) = iVar4;
          goto LAB_141f64e4c;
        }
        iVar11 = (int)local_108;
        if (-1 < lVar10) {
          piVar7 = (int *)(local_120 + -4 + lVar8);
          lVar12 = lVar10;
          do {
            if (*piVar7 <= iVar4) {
              TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar1,local_110,iVar11 + 1);
              iVar3 = *(int *)(param_1 + 0x28);
              *(int *)(param_1 + 0x28) = iVar3 + 1;
              if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar3);
              }
              _Src = (void *)(*plVar9 + (longlong)(iVar11 + 1) * 4);
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar3 - (iVar11 + 1)) << 2);
              *(undefined4 *)(*plVar9 + 4 + lVar12 * 4) = local_118;
              lVar10 = local_f0;
              break;
            }
            iVar11 = iVar11 + -1;
            piVar7 = piVar7 + -1;
            lVar12 = lVar12 + -1;
          } while (-1 < lVar12);
        }
        if (iVar11 < 0) {
          iVar11 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar11 + 1;
          if (*(int *)(param_1 + 0x14) < iVar11 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar11);
          }
          _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 4),(void *)*plVar1,(longlong)iVar11 << 2)
          ;
          *(int *)*plVar1 = iVar4;
          iVar4 = *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
          }
          _guard_xfg_dispatch_icall_nop((void *)(*plVar9 + 4),(void *)*plVar9,(longlong)iVar4 << 2);
          *(undefined4 *)*plVar9 = local_118;
        }
      }
      local_f0 = lVar10 + 1;
      local_108 = CONCAT44(local_108._4_4_,(int)local_108 + 1);
      lVar12 = local_120 + 4;
    }
    local_e8 = &PTR__scalar_deleting_destructor__144f1a640;
    if (local_90 != 0) {
      FMemory::Free();
    }
    local_e8 = &PTR__scalar_deleting_destructor__14413eb30;
    local_98 = 0;
    if (local_a0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e0);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 141f64f70 FUN_141f64f70 body=304 status=ok
// SIG undefined FUN_141f64f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141f64f70(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_998 [32];
  ulonglong local_978 [2];
  undefined1 local_968 [256];
  longlong local_868;
  undefined1 *local_860;
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_998;
  local_978[0] = 10;
  iVar4 = 0;
  if (*param_2 == 10) {
    bVar5 = false;
    pbVar2 = (byte *)FName::GetComparisonNameEntry(param_2 + 3);
    if (pbVar2 != (byte *)0x0) {
      local_978[0] = local_978[0] & 0xffffffff00000000;
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,"LevelSequencePlaybackSettings")
      ;
      cVar1 = FName::SplitNameWithCheck(local_860,local_848,0x400,local_978);
      if (cVar1 != '\0') {
        local_860 = local_848;
        iVar4 = (int)local_978[0] + 1;
      }
      if (iVar4 == *(int *)((longlong)param_2 + 0x1c)) {
        if ((*pbVar2 & 1) == 0) {
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(local_860,pbVar2 + 0x10);
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
        }
        bVar5 = iVar4 == 0;
      }
      if (local_868 != 0) {
        FMemory::Free();
      }
      if (bVar5) {
        uVar3 = FUN_141f75c30();
        FUN_141725e50(uVar3,param_3,param_1,0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141f650a0 Set body=386 status=ok
// SIG undefined Set(void)

void FMovieSceneRootOverridePath::Set(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    FUN_141f62110(param_1,0);
  }
  if (param_2 != DAT_146ac9ac0) {
    do {
      if ((int)param_3[0xb] != *(int *)((longlong)param_3 + 0x84)) {
        plVar2 = (longlong *)param_3[0x12];
        if ((longlong *)param_3[0x12] == (longlong *)0x0) {
          plVar2 = param_3 + 0x11;
        }
        iVar1 = *(int *)((longlong)plVar2 +
                        ((longlong)(int)param_3[0x13] - 1U & (longlong)param_2) * 4);
        if (iVar1 != -1) {
          do {
            piVar3 = (int *)(param_3[10] + (longlong)iVar1 * 0x28);
            if (*(int *)(param_3[10] + (longlong)iVar1 * 0x28) == param_2) {
              if (iVar1 != -1) goto LAB_141f65143;
              break;
            }
            iVar1 = piVar3[8];
          } while (iVar1 != -1);
        }
      }
      piVar3 = piVar7;
LAB_141f65143:
      piVar6 = piVar3 + 2;
      if (piVar3 == (int *)0x0) {
        piVar6 = piVar7;
      }
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar2 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar2 = param_3 + 7;
        }
        iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_3[9] - 1U & (longlong)param_2) * 4
                        );
        if (iVar1 != -1) {
          do {
            piVar3 = (int *)((longlong)iVar1 * 0xb8 + *param_3);
            if (*piVar3 == param_2) {
              if (iVar1 != -1) goto LAB_141f651b6;
              break;
            }
            iVar1 = piVar3[0x2c];
          } while (iVar1 != -1);
        }
      }
      piVar3 = piVar7;
LAB_141f651b6:
      piVar5 = piVar3 + 2;
      if (piVar3 == (int *)0x0) {
        piVar5 = piVar7;
      }
      if (piVar6 == (int *)0x0) {
        return;
      }
      if (piVar5 == (int *)0x0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
        TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1,iVar1);
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar4 = param_1;
      }
      *(int *)(lVar4 + (longlong)iVar1 * 4) = piVar5[0xb];
      param_2 = *piVar6;
    } while (param_2 != DAT_146ac9ac0);
  }
  return;
}



// FUNCTION 141f65230 SetBinding body=371 status=ok
// SIG undefined SetBinding(void)

void UMovieSceneBindingOverrides::SetBinding
               (longlong param_1,undefined4 *param_2,ulonglong *param_3,byte param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  iVar3 = FUN_141f376c0(param_1 + 0x30,&local_68);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  uVar5 = 0;
  plVar4 = (longlong *)*param_3;
  uVar6 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_3[1] < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        local_res8[0] = *(undefined4 *)(param_1 + 0x38);
        TMapBase<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,1>_>::
        Emplace<FGuid_const_&,int_const_&>(param_1 + 0x48,param_2 + 2,local_res8);
        local_68 = *param_2;
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        local_58 = *(undefined8 *)(param_2 + 4);
        uStack_64 = CONCAT31(uStack_64._1_3_,*(undefined1 *)(param_2 + 1));
        local_50 = 0xffffffff;
        local_4c = 0;
        local_48 = 1;
        FWeakObjectPtr::operator=(&local_50,lVar2);
        iVar3 = *(int *)(param_1 + 0x38);
        local_48 = param_4 ^ 1;
        *(int *)(param_1 + 0x38) = iVar3 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x30,iVar3);
        }
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 0x24);
        *puVar1 = local_68;
        puVar1[1] = uStack_64;
        puVar1[2] = uStack_60;
        puVar1[3] = uStack_5c;
        *(undefined8 *)(puVar1 + 4) = local_58;
        puVar1[6] = local_50;
        puVar1[7] = local_4c;
        *(byte *)(puVar1 + 8) = local_48;
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 141f653b0 FUN_141f653b0 body=158 status=ok
// SIG undefined FUN_141f653b0(void)

void FUN_141f653b0(longlong *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(uint *)(param_1 + 0x16) >> 1 & 1) == 0) {
    (**(code **)(*param_1 + 0x70))(param_1,1);
    cVar2 = (char)param_1[0x12];
    if (((cVar2 != '\x02') && (*param_2 != '\x02')) &&
       (iVar1 = *(int *)((longlong)param_1 + 0x94), *(int *)(param_2 + 4) < iVar1)) {
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x13) = 1;
        *(int *)((longlong)param_1 + 0x9c) = iVar1;
        return;
      }
      if (cVar2 == '\x01') {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0x13) = cVar2;
      *(int *)((longlong)param_1 + 0x9c) = iVar1;
      return;
    }
    *(char *)(param_1 + 0x13) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 4);
  }
  return;
}



// FUNCTION 141f65450 FUN_141f65450 body=383 status=ok
// SIG undefined FUN_141f65450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141f6559c) */

void FUN_141f65450(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  *(uint *)(param_1 + 0x3e0) = param_2;
  iVar6 = 0;
  if (-1 < param_3) {
    iVar6 = param_3;
  }
  *(int *)(param_1 + 0x3e4) = iVar6;
  if (iVar6 < 1) {
    local_28 = (ulonglong)param_2;
  }
  else {
    local_28 = CONCAT44(0x3f7fffff,iVar6 + -1 + param_2);
  }
  uVar3 = local_28;
  uVar5 = (uint)*(undefined8 *)(param_1 + 0x774);
  if (((int)uVar5 < (int)param_2) ||
     ((local_28._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x774) >> 0x20),
      fVar4 = local_28._4_4_, uVar5 == param_2 && (local_28._4_4_ < 0.0)))) {
    local_28 = (ulonglong)param_2;
    *(ulonglong *)(param_1 + 0x774) = local_28;
  }
  else {
    local_28 = uVar3;
    if (((int)uVar5 <= (int)(uint)uVar3) &&
       ((uVar5 != (uint)uVar3 ||
        (local_28._4_4_ = SUB84(uVar3,4), bVar2 = fVar4 <= local_28._4_4_, bVar2))))
    goto LAB_141f65548;
    *(ulonglong *)(param_1 + 0x774) = uVar3;
  }
  if (*(char *)(param_1 + 0x784) != '\0') {
    *(undefined1 *)(param_1 + 0x784) = 0;
  }
  if (*(char *)(param_1 + 0x7b0) != '\0') {
    *(undefined1 *)(param_1 + 0x7b0) = 0;
  }
LAB_141f65548:
  plVar1 = *(longlong **)(param_1 + 0x430);
  if (plVar1 != (longlong *)0x0) {
    local_20 = *(longlong *)(param_1 + 0x774);
    uStack_18 = *(undefined8 *)(param_1 + 0x760);
    if ((char)plVar1[3] != '\0') {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_20);
      if ((char)plVar1[3] != '\0') {
        *(undefined1 *)(plVar1 + 3) = 0;
      }
      if (&local_20 != plVar1 + 1) {
        *(undefined4 *)(plVar1 + 1) = (undefined4)local_20;
        *(undefined4 *)((longlong)plVar1 + 0xc) = local_20._4_4_;
        *(undefined4 *)(plVar1 + 2) = (undefined4)uStack_18;
        *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_18._4_4_;
        *(undefined1 *)(plVar1 + 3) = 1;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
    }
  }
  return;
}



// FUNCTION 141f655d0 FUN_141f655d0 body=216 status=ok
// SIG undefined FUN_141f655d0(void)

void FUN_141f655d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  if (*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x298))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x760);
  local_res8 = *(undefined4 *)(param_1 + 0x3e0);
  uStackX_c = 0;
  puVar3 = (undefined4 *)ConvertFrameTime(&local_res8,local_res8,uVar1,param_2);
  local_res8 = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(param_1 + 0x3e0) = *puVar3;
  uStackX_c = 0;
  piVar4 = (int *)ConvertFrameTime(&local_res8,local_res8,uVar1,param_2);
  iVar2 = *piVar4;
  if (0.5 < (float)piVar4[1] || (float)piVar4[1] == 0.5) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 0x3e4) = iVar2;
  FUN_141f65f50(param_1 + 0x760,param_2,*(undefined8 *)(param_1 + 0x768),
                *(undefined1 *)(param_1 + 0x770));
  return;
}



// FUNCTION 141f656b0 SetKeyTime body=88 status=ok
// SIG undefined SetKeyTime(void)

void FMovieSceneChannel::SetKeyTime(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined4 *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  undefined8 uStack_10;
  
  local_18 = local_res18;
  local_28 = local_res10;
  uStack_10 = CONCAT44(uStack_1c,1);
  uStack_20 = 1;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x18))(local_28._0_4_,&local_28,&local_18);
  return;
}



// FUNCTION 141f65710 SetKeyTimes body=340 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneBoolChannel::SetKeyTimes(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  local_48 = param_1 + 8;
  puVar9 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x30;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar10 = *param_2 - (longlong)puVar9;
    uVar11 = (ulonglong)*(uint *)(param_2 + 1);
    local_40 = lVar1;
    local_38 = plVar2;
    do {
      if (lVar1 != 0) {
        iVar5 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)((longlong)puVar9 + lVar10));
        if (iVar5 != -1) {
          iVar6 = FMovieSceneChannelData::MoveKeyInternal(&local_48,iVar5,*puVar9);
          if (iVar6 != iVar5) {
            lVar4 = *plVar2;
            iVar8 = *(int *)(param_1 + 0x28);
            uVar3 = *(undefined1 *)(lVar4 + iVar5);
            iVar7 = (iVar8 - iVar5) + -1;
            if (iVar7 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(iVar5 + lVar4),(void *)((iVar5 + 1) + lVar4),(longlong)iVar7);
              iVar8 = *(int *)(param_1 + 0x28);
            }
            *(int *)(param_1 + 0x28) = iVar8;
            if (*(int *)(param_1 + 0x2c) < iVar8) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar8 + -1);
            }
            _Src = (void *)(*plVar2 + (longlong)iVar6);
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 1),_Src,(longlong)((iVar8 + -1) - iVar6));
            *(undefined1 *)((longlong)iVar6 + *plVar2) = uVar3;
          }
        }
      }
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 141f65870 SetKeyTimes body=340 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneByteChannel::SetKeyTimes(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  local_48 = param_1 + 8;
  puVar9 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x38;
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar10 = *param_2 - (longlong)puVar9;
    uVar11 = (ulonglong)*(uint *)(param_2 + 1);
    local_40 = lVar1;
    local_38 = plVar2;
    do {
      if (lVar1 != 0) {
        iVar5 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)((longlong)puVar9 + lVar10));
        if (iVar5 != -1) {
          iVar6 = FMovieSceneChannelData::MoveKeyInternal(&local_48,iVar5,*puVar9);
          if (iVar6 != iVar5) {
            lVar4 = *plVar2;
            iVar8 = *(int *)(param_1 + 0x28);
            uVar3 = *(undefined1 *)(lVar4 + iVar5);
            iVar7 = (iVar8 - iVar5) + -1;
            if (iVar7 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(iVar5 + lVar4),(void *)((iVar5 + 1) + lVar4),(longlong)iVar7);
              iVar8 = *(int *)(param_1 + 0x28);
            }
            *(int *)(param_1 + 0x28) = iVar8;
            if (*(int *)(param_1 + 0x2c) < iVar8) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar8 + -1);
            }
            _Src = (void *)(*plVar2 + (longlong)iVar6);
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)_Src + 1),_Src,(longlong)((iVar8 + -1) - iVar6));
            *(undefined1 *)((longlong)iVar6 + *plVar2) = uVar3;
          }
        }
      }
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 141f659d0 SetKeyTimes body=402 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneFloatChannel::SetKeyTimes(longlong param_1,undefined5 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  local_68 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = *(uint *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_1 + 0x10;
  puVar10 = (undefined4 *)*param_3;
  lVar1 = param_1 + 0x38;
  uStack_64 = (undefined1)uVar4;
  uStack_63 = (undefined1)((uint)uVar4 >> 8);
  uStack_62 = (undefined2)((uint)uVar4 >> 0x10);
  plVar2 = (longlong *)(param_1 + 0x20);
  if (0 < (int)uStack_60) {
    lVar12 = CONCAT26(uStack_62,CONCAT15(uStack_63,*param_2)) - (longlong)puVar10;
    uVar9 = (ulonglong)uStack_60;
    local_40 = lVar1;
    local_38 = plVar2;
    do {
      if (lVar1 != 0) {
        iVar5 = FKeyHandleLookupTable::GetIndex(lVar1,*(undefined4 *)(lVar12 + (longlong)puVar10));
        if ((iVar5 != -1) &&
           (iVar6 = FMovieSceneChannelData::MoveKeyInternal(&local_48,iVar5,*puVar10),
           iVar6 != iVar5)) {
          lVar3 = *plVar2;
          lVar11 = (longlong)iVar5 * 0x1c;
          uStack_64 = *(undefined1 *)(lVar3 + 4 + lVar11);
          local_58 = *(undefined1 *)(lVar3 + 0x10 + lVar11);
          local_68 = *(undefined4 *)(lVar3 + lVar11);
          uStack_5c = *(undefined4 *)(lVar3 + 0xc + lVar11);
          uStack_63 = *(undefined1 *)(lVar3 + 5 + lVar11);
          uStack_60 = *(uint *)(lVar3 + 8 + lVar11);
          iVar7 = *(int *)(param_1 + 0x28);
          local_54 = *(undefined4 *)(lVar3 + 0x14 + lVar11);
          local_50 = *(undefined4 *)(lVar3 + 0x18 + lVar11);
          iVar8 = (iVar7 - iVar5) + -1;
          if (iVar8 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar11 + lVar3),(void *)((longlong)(iVar5 + 1) * 0x1c + lVar3),
                       (longlong)iVar8 * 0x1c);
            iVar7 = *(int *)(param_1 + 0x28);
          }
          *(int *)(param_1 + 0x28) = iVar7 + -1;
          TArray<FMovieSceneFloatValue,FDefaultAllocator>::Insert(plVar2,&local_68,iVar6);
        }
      }
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


