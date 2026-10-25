// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1427fce60 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FSceneViewport::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FSlateSceneViewport",0x28);
  return param_2;
}



// FUNCTION 1427fcea0 FUN_1427fcea0 body=217 status=ok
// SIG undefined FUN_1427fcea0(void)

float FUN_1427fcea0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined8 local_res8;
  
  if (((*(int *)(param_1 + 0x398) != 0) && (*(longlong **)(param_1 + 0x390) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x390) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x398) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x390);
    }
    uVar3 = (**(code **)(*plVar4 + 0x38))();
    *(undefined8 *)(param_1 + 0x380) = uVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (lVar1 == 0) {
    return 1.0;
  }
  plVar4 = (longlong *)UUserInterfaceSettings::GetPrivateStaticClass();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      return 1.0;
    }
  }
  (**(code **)(*(longlong *)(lVar1 + 0x158) + 0x10))((longlong *)(lVar1 + 0x158),&local_res8);
  fVar6 = (float)UUserInterfaceSettings::GetDPIScaleBasedOnSize(lVar5,local_res8);
  return fVar6 / *(float *)(lVar1 + 0x280);
}



// FUNCTION 1427fcf80 GetHashSuffix body=652 status=ok
// SIG undefined GetHashSuffix(void)

void FPlatformAudioCookOverrides::GetHashSuffix(undefined1 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  float fVar11;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  if (param_1 != (undefined1 *)0x0) {
    FString::AppendInt(param_2,(int)ROUND((*(float *)(param_1 + 0x58) * 100.0 +
                                          *(float *)(param_1 + 0x58) * 100.0) - 0.5) >> 1);
    FString::AppendInt(param_2,*param_1);
    uStack_a4 = 1;
    plVar1 = (longlong *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 0x30);
    puVar2 = (uint *)(param_1 + 0x18);
    local_a8 = 0;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar3 != 0) {
      puVar10 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar10 = puVar2;
      }
      uVar4 = *puVar10;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar4 == 0) {
        lVar8 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar6 = local_a8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar6;
        if (bVar5) goto LAB_1427fd09c;
        uVar4 = puVar10[lVar8 + 1];
      }
      uStack_a4 = -uVar4 & uVar4;
      iVar6 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_94 = (iStack_90 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_1427fd09c:
        uStack_94 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x30);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_94;
    local_68 = CONCAT44(uStack_8c,iStack_90);
    uStack_58 = CONCAT44(uStack_a4,local_a8);
    uVar9 = uVar4 & 0xffffffe0;
    iStack_80 = local_a8;
    uStack_7c = uStack_a4;
    local_78 = puVar2;
    local_60 = plVar1;
    puStack_50 = puVar2;
    uStack_40 = local_68;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    uStack_94 = uVar4;
    if (uVar4 != uVar3) {
      puVar10 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar10 = puVar2;
      }
      uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar6 = (int)uVar4 >> 5;
      while (uVar7 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1427fd161;
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
      uStack_94 = (uVar9 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_94) {
LAB_1427fd161:
        uStack_94 = uVar3;
      }
    }
    while ((uStack_6c != uStack_94 || (local_78 != puVar2))) {
      fVar11 = *(float *)(*plVar1 + 4 + (longlong)(int)uStack_6c * 0x10) * 0.001;
      FString::AppendInt(param_2,(int)ROUND((fVar11 + fVar11) - 0.5) >> 1);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    }
  }
  return;
}



// FUNCTION 1427fd210 GetMaturityTypeForChild body=196 status=ok
// SIG undefined GetMaturityTypeForChild(void)

ulonglong GetMaturityTypeForChild(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = USoundNodeWavePlayer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar5 = uVar4;
  uVar6 = uVar4;
  if ((bVar1) && (*(longlong *)(param_1 + 0x60) != 0)) {
    return (ulonglong)(((int)*(char *)(*(longlong *)(param_1 + 0x60) + 0xb3) >> 7) + 2);
  }
  do {
    if (*(int *)(param_1 + 0x30) <= (int)uVar5) {
      return uVar4;
    }
    uVar3 = GetMaturityTypeForChild(*(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x28)));
    uVar4 = uVar3 & 0xffffffff;
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar6 = uVar6 + 8;
  } while ((int)uVar3 == 0);
  return uVar3;
}



// FUNCTION 1427fd2e0 FUN_1427fd2e0 body=57 status=ok
// SIG undefined FUN_1427fd2e0(void)

undefined4 FUN_1427fd2e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return *(undefined4 *)(lVar2 + 200);
}



// FUNCTION 1427fd320 GetMaxDistance body=55 status=ok
// SIG undefined GetMaxDistance(void)

undefined4 USoundBase::GetMaxDistance(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar1 = FBaseAttenuationSettings::GetMaxDimension(*(longlong *)(param_1 + 0x60) + 0x28);
    return uVar1;
  }
  return 0x4a000000;
}



// FUNCTION 1427fd360 GetDuration body=149 status=ok
// SIG undefined GetDuration(void)

float USoundNode::GetDuration(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  float fVar6;
  
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x28);
  fVar2 = 0.0;
  uVar5 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x30) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 == 0) {
    fVar2 = 0.0;
  }
  else {
    do {
      plVar1 = (longlong *)*plVar4;
      fVar6 = fVar2;
      if (plVar1 != (longlong *)0x0) {
        FUN_1417510e0(plVar1);
        fVar6 = (float)(**(code **)(*plVar1 + 0x280))(plVar1);
        if (fVar6 <= fVar2) {
          fVar6 = fVar2;
        }
      }
      fVar2 = fVar6;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return fVar2;
}



// FUNCTION 1427fd4e0 FUN_1427fd4e0 body=287 status=ok
// SIG undefined FUN_1427fd4e0(void)

ulonglong FUN_1427fd4e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                       longlong param_9)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar5 = FUN_14281e460(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if ((char)uVar5 != '\0') {
    lVar8 = *(longlong *)(param_9 + 0x78);
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x10) + (longlong)param_2 * 8);
    lVar6 = lVar8;
    if (lVar8 == 0) {
      lVar6 = param_9;
    }
    if (*(char *)(lVar6 + 0x66) == '\0') {
      uVar7 = *(undefined8 *)(lVar2 + 0xee0);
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0xee8);
    }
    *(undefined8 *)(param_9 + 0xa0) = uVar7;
    if (lVar8 == 0) {
      lVar8 = param_9;
    }
    *(longlong *)(lVar8 + 0x18) = param_1;
    lVar8 = *(longlong *)(param_9 + 0x78);
    if (*(longlong *)(param_9 + 0x78) == 0) {
      lVar8 = param_9;
    }
    uVar3 = 0;
    *(undefined1 *)(lVar8 + 0x68) = 1;
    uVar4 = uVar3;
    if (*(float *)(param_1 + 0x3fc) <= 0.0 && *(float *)(param_1 + 0x3fc) != 0.0) {
      uVar4 = 8;
    }
    if (*(float *)(param_1 + 0x3f8) <= 0.0 && *(float *)(param_1 + 0x3f8) != 0.0) {
      uVar3 = 8;
    }
    uVar1 = *(uint *)(param_9 + 0x8c);
    *(uint *)(param_9 + 0x8c) = uVar4 ^ uVar3 ^ uVar1;
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1427fd600 FUN_1427fd600 body=177 status=ok
// SIG undefined FUN_1427fd600(void)

void FUN_1427fd600(longlong param_1,int *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 != '\0') {
    *param_2 = *(int *)(param_1 + 0x268);
    param_2[1] = *(int *)(param_1 + 0x26c);
    return;
  }
  fVar4 = 1.0 / *(float *)(param_1 + 0x278);
  fVar1 = *(float *)(param_1 + 0x290);
  fVar2 = *(float *)(param_1 + 0x298);
  fVar3 = *(float *)(param_1 + 0x2a0);
  fVar5 = (float)*(int *)(param_1 + 0x268) * fVar4;
  fVar4 = (float)*(int *)(param_1 + 0x26c) * fVar4;
  *param_2 = (int)(fVar4 * *(float *)(param_1 + 0x294) + fVar5 * *(float *)(param_1 + 0x28c) +
                  *(float *)(param_1 + 0x29c));
  param_2[1] = (int)(fVar4 * fVar2 + fVar5 * fVar1 + fVar3);
  return;
}



// FUNCTION 1427fd6e0 FUN_1427fd6e0 body=128 status=ok
// SIG undefined FUN_1427fd6e0(void)

int FUN_1427fd6e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x28));
      if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x2d0))
                          (plVar1,param_2 << ((byte)iVar3 & 0x3f) ^ (ulonglong)plVar1,param_3);
        iVar4 = iVar4 + iVar2;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  return iVar4;
}



// FUNCTION 1427fd760 GetNumSounds body=296 status=ok
// SIG undefined GetNumSounds(void)

undefined4
USoundNodeDistanceCrossFade::GetNumSounds(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong local_res10;
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong *local_28;
  int *local_20;
  
  if (*(int *)(param_3 + 0x4c0) != *(int *)(param_3 + 0x4ec)) {
    lVar3 = *(longlong *)(param_3 + 0x4f8);
    if (*(longlong *)(param_3 + 0x4f8) == 0) {
      lVar3 = param_3 + 0x4f0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                             (longlong)*(int *)(param_3 + 0x500) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_3 + 0x4b8);
      do {
        piVar5 = (int *)(lVar3 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_1427fd7e3;
          break;
        }
        iVar2 = piVar5[4];
      } while (iVar2 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_1427fd7e3:
  piVar4 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    plVar1 = (longlong *)(param_3 + 0x508);
    iVar2 = *(int *)(param_3 + 0x510);
    *(int *)(param_3 + 0x510) = iVar2 + 8;
    local_res10 = param_2;
    if (*(int *)(param_3 + 0x514) < iVar2 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)((longlong)iVar2 + *plVar1) = 0;
    local_28 = &local_res10;
    local_20 = local_res18;
    local_res18[0] = iVar2;
    FUN_141f0b300((longlong *)(param_3 + 0x4b8),local_res20,&local_28,0);
    *(undefined4 *)((longlong)local_res18[0] + *plVar1) = 1;
  }
  else {
    local_res18[0] = *piVar4;
  }
  return *(undefined4 *)((longlong)(local_res18[0] + 4) + *(longlong *)(param_3 + 0x508));
}



// FUNCTION 1427fd8b0 FUN_1427fd8b0 body=417 status=ok
// SIG undefined FUN_1427fd8b0(void)

undefined8 FUN_1427fd8b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  int local_res8 [2];
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong *local_38;
  int *local_30;
  
  if (*(int *)(param_3 + 0x4c0) != *(int *)(param_3 + 0x4ec)) {
    lVar3 = *(longlong *)(param_3 + 0x4f8);
    if (*(longlong *)(param_3 + 0x4f8) == 0) {
      lVar3 = param_3 + 0x4f0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                             (longlong)*(int *)(param_3 + 0x500) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_3 + 0x4b8);
      do {
        piVar7 = (int *)(lVar3 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x18) == param_2) {
          if (iVar2 != -1) goto LAB_1427fd943;
          break;
        }
        iVar2 = piVar7[4];
      } while (iVar2 != -1);
    }
  }
  piVar7 = (int *)0x0;
LAB_1427fd943:
  plVar1 = (longlong *)(param_3 + 0x508);
  piVar4 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  local_res10 = param_2;
  if (piVar4 == (int *)0x0) {
    iVar2 = *(int *)(param_3 + 0x510);
    *(int *)(param_3 + 0x510) = iVar2 + 8;
    if (*(int *)(param_3 + 0x514) < iVar2 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)((longlong)iVar2 + *plVar1) = 0;
    local_38 = &local_res10;
    local_30 = local_res8;
    local_res8[0] = iVar2;
    FUN_141f0b300((longlong *)(param_3 + 0x4b8),local_res18,&local_38,0);
    piVar7 = (int *)((longlong)local_res8[0] + *plVar1);
    *piVar7 = 1;
    lVar3 = *plVar1;
  }
  else {
    local_res8[0] = *piVar4;
    lVar3 = *plVar1;
    piVar7 = (int *)(lVar3 + local_res8[0]);
  }
  local_res8[0] = local_res8[0] + 4;
  lVar6 = (longlong)local_res8[0];
  if (*piVar7 != 0) {
    iVar2 = USoundNodeRandom::ChooseNodeIndex(param_1,param_3);
    *(int *)(lVar6 + lVar3) = iVar2;
    *piVar7 = 0;
  }
  iVar2 = *(int *)(lVar6 + lVar3);
  if ((iVar2 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8),
     plVar1 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar1 + 0x2d0))
                      (plVar1,local_res10 << ((byte)iVar2 & 0x3f) ^ (ulonglong)plVar1,param_3);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1427fda60 GetNumSoundsActive body=13 status=ok
// SIG undefined GetNumSoundsActive(void)

int USoundWave::GetNumSoundsActive(longlong param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0xbc) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  return iVar1;
}



// FUNCTION 1427fda80 FUN_1427fda80 body=266 status=ok
// SIG undefined FUN_1427fda80(void)

undefined * FUN_1427fda80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined *puVar7;
  int local_res8 [2];
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x40),local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x40), lVar5 == 0)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar5 + 8);
    plVar6 = *(longlong **)(lVar5 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      puVar7 = (undefined *)(*(longlong *)(lVar4 + 0x10) + 0x4c);
      goto LAB_1427fdb02;
    }
  }
  puVar7 = &DAT_146b15f80;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b15fb8) {
    _Init_thread_header(&DAT_146b15fb8);
    if (DAT_146b15fb8 == -1) {
      FGeometry::FGeometry(&DAT_146b15f80);
      _Init_thread_footer(&DAT_146b15fb8);
    }
  }
LAB_1427fdb02:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return puVar7;
  }
  return puVar7;
}



// FUNCTION 1427fdbb0 FUN_1427fdbb0 body=108 status=ok
// SIG undefined FUN_1427fdbb0(void)

undefined8 * FUN_1427fdbb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b15f48) {
    _Init_thread_header(&DAT_146b15f48);
    if (DAT_146b15f48 == -1) {
      atexit((_func_5014 *)&LAB_143ebac80);
      _Init_thread_footer(&DAT_146b15f48);
      return &DAT_146b15f38;
    }
  }
  return &DAT_146b15f38;
}



// FUNCTION 1427fdc20 GetReferencerName body=75 status=ok
// SIG undefined GetReferencerName(void)

undefined8 * FDeferredCleanupSlateBrush::GetReferencerName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (*param_2,0x1b,"FDeferredCleanupSlateBrush",0x1b,0x3f);
  return param_2;
}



// FUNCTION 1427fdc90 FUN_1427fdc90 body=35 status=ok
// SIG undefined FUN_1427fdc90(void)

longlong FUN_1427fdc90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = IsInRenderingThread();
  lVar2 = param_1 + 0x350;
  if (cVar1 == '\0') {
    lVar2 = param_1 + 8;
  }
  return lVar2;
}



// FUNCTION 1427fdcc0 FUN_1427fdcc0 body=47 status=ok
// SIG undefined FUN_1427fdcc0(void)

undefined8 * FUN_1427fdcc0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)((longlong)param_1 + 0x314);
  if (*piVar1 == 0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_res8);
  }
  *param_2 = *(undefined8 *)piVar1;
  return param_2;
}



// FUNCTION 1427fdd40 FUN_1427fdd40 body=230 status=ok
// SIG undefined FUN_1427fdd40(void)

void FUN_1427fdd40(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res18 [8];
  
  FUN_141758340();
  if ((DAT_146b17150 != 0) && (plVar3 = (longlong *)FUN_142875430(), plVar3 != (longlong *)0x0)) {
    plVar7 = plVar3;
    cVar1 = (**(code **)(*plVar3 + 0x80))(plVar3,param_1);
    if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0xb1) != '\x03')) {
      if ((*(char *)((longlong)param_1 + 0xb1) == '\x04') && (param_1[0x25] != 0)) {
        *(longlong *)(param_2 + 8) =
             *(longlong *)(param_2 + 8) + (longlong)*(int *)((longlong)param_1 + 0xe4) * 0x4000;
      }
      if ((*(byte *)((longlong)param_1 + 0xb3) & 2) != 0) {
        return;
      }
      pwVar4 = AK::MemoryMgr::GetPoolName((long)plVar7);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x78))(plVar3,local_res18,param_1);
      lVar6 = (**(code **)(*param_1 + 0x330))(param_1,*puVar5,pwVar4);
      iVar2 = 0;
      if (lVar6 != 0) {
        iVar2 = FUntypedBulkData::GetBulkDataSize(lVar6);
      }
    }
    else {
      iVar2 = (int)param_1[0x1d];
    }
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar2;
  }
  return;
}



// FUNCTION 1427fde30 FUN_1427fde30 body=164 status=ok
// SIG undefined FUN_1427fde30(void)

ulonglong FUN_1427fde30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_18;
  ulonglong local_10;
  
  uVar4 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_1422bb980(param_1,*(undefined8 *)(param_1 + 0xb0),&local_18);
  uVar8 = local_10 & 0xffffffff;
  lVar3 = local_18;
  uVar6 = uVar4;
  uVar7 = uVar4;
  if (0 < (int)local_10) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(uVar7 + lVar3) + 0x60);
      if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2);
        uVar8 = local_10 & 0xffffffff;
        uVar4 = (ulonglong)(uint)((int)uVar4 + iVar2);
        lVar3 = local_18;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while ((int)uVar5 < (int)uVar8);
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return uVar4;
}



// FUNCTION 1427fdee0 FUN_1427fdee0 body=74 status=ok
// SIG undefined FUN_1427fdee0(void)

void FUN_1427fdee0(longlong *param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  longlong lVar2;
  
  pwVar1 = AK::MemoryMgr::GetPoolName((long)param_1);
  lVar2 = (**(code **)(*param_1 + 0x330))(param_1,param_2,pwVar1);
  if (lVar2 != 0) {
    FUntypedBulkData::GetBulkDataSize(lVar2);
    return;
  }
  return;
}



// FUNCTION 1427fdf30 GetRunningPlatform body=36 status=ok
// SIG undefined GetRunningPlatform(void)

void USoundWave::GetRunningPlatform(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)GetTargetPlatformManager();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427fdf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1427fdf60 GetSampleRateForCurrentPlatform body=155 status=ok
// SIG undefined GetSampleRateForCurrentPlatform(void)

void USoundWave::GetSampleRateForCurrentPlatform(longlong param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  if ((bVar1 & 0x20) != 0) {
    return;
  }
  if ((bVar1 & 0x40) != 0) {
    *(byte *)(param_1 + 0xb4) = bVar1 | 0x20;
    *(float *)(param_1 + 0xc0) = (float)*(int *)(param_1 + 0xec);
    return;
  }
  fVar2 = (float)FGenericPlatformMisc::GetDeviceTemperatureLevel(*(undefined1 *)(param_1 + 0xb0),0);
  *(float *)(param_1 + 0xc0) = fVar2;
  if ((fVar2 < 0.0) || ((float)*(int *)(param_1 + 0xec) < fVar2)) {
    *(float *)(param_1 + 0xc0) = (float)*(int *)(param_1 + 0xec);
  }
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 0x20;
  return;
}



// FUNCTION 1427fe000 FUN_1427fe000 body=245 status=ok
// SIG undefined FUN_1427fe000(void)

ulonglong FUN_1427fe000(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,undefined1 param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar5 = FUN_14281ec00(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((char)uVar5 != '\0') {
    lVar8 = *(longlong *)(param_5 + 0x78);
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x10) + (longlong)param_2 * 8);
    lVar6 = lVar8;
    if (lVar8 == 0) {
      lVar6 = param_5;
    }
    if (*(char *)(lVar6 + 0x66) == '\0') {
      uVar7 = *(undefined8 *)(lVar2 + 0xee0);
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0xee8);
    }
    *(undefined8 *)(param_5 + 0xa0) = uVar7;
    if (lVar8 == 0) {
      lVar8 = param_5;
    }
    *(longlong *)(lVar8 + 0x18) = param_1;
    lVar8 = *(longlong *)(param_5 + 0x78);
    if (*(longlong *)(param_5 + 0x78) == 0) {
      lVar8 = param_5;
    }
    uVar3 = 0;
    *(undefined1 *)(lVar8 + 0x68) = 1;
    uVar4 = uVar3;
    if (*(float *)(param_1 + 0x3fc) <= 0.0 && *(float *)(param_1 + 0x3fc) != 0.0) {
      uVar4 = 8;
    }
    if (*(float *)(param_1 + 0x3f8) <= 0.0 && *(float *)(param_1 + 0x3f8) != 0.0) {
      uVar3 = 8;
    }
    uVar1 = *(uint *)(param_5 + 0x8c);
    *(uint *)(param_5 + 0x8c) = uVar4 ^ uVar3 ^ uVar1;
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1427fe100 FUN_1427fe100 body=31 status=ok
// SIG undefined FUN_1427fe100(void)

undefined8 FUN_1427fe100(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x150) + 0x20))();
  return param_2;
}



// FUNCTION 1427fe1b0 GetSoundConcurrencySettingsToApply body=26 status=ok
// SIG undefined GetSoundConcurrencySettingsToApply(void)

longlong USoundBase::GetSoundConcurrencySettingsToApply(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    return param_1 + 0x40;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return *(longlong *)(param_1 + 0x38) + 0x28;
  }
  return 0;
}



// FUNCTION 1427fe1d0 GetSoundDuration body=92 status=ok
// SIG undefined GetSoundDuration(void)

undefined4 FSlateSoundDevice::GetSoundDuration(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14183bf40(param_2);
  if (lVar2 != 0) {
    lVar3 = USoundBase::GetPrivateStaticClass();
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
      return *(undefined4 *)(lVar2 + 0x50);
    }
  }
  return 0;
}



// FUNCTION 1427fe230 GetSoundGroup body=606 status=ok
// SIG undefined GetSoundGroup(void)

int * USoundGroups::GetSoundGroup(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  uint *local_58;
  undefined1 *local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  uint local_30;
  undefined4 local_2c;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  piVar8 = (int *)0x0;
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) {
    if (0 < *(int *)(param_1 + 0x30)) {
      local_58 = local_res8;
      piVar6 = piVar8;
      piVar3 = piVar8;
      do {
        local_res8[0] = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)piVar6);
        local_50 = (undefined1 *)((longlong)(int)piVar3 * 0x20 + *(longlong *)(param_1 + 0x28));
        TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_const_&>_>
                  (plVar1,local_res18,&local_58,0);
        uVar7 = (int)piVar3 + 1;
        piVar3 = (int *)(ulonglong)uVar7;
        piVar6 = piVar6 + 8;
      } while ((int)uVar7 < *(int *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      piVar6 = *(int **)(param_1 + 0x78);
      if (*(int **)(param_1 + 0x78) == (int *)0x0) {
        piVar6 = (int *)(param_1 + 0x70);
      }
      iVar2 = *piVar6;
      if (iVar2 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar2 * 0x30 + *plVar1);
          if (*piVar6 == 0) {
            if (iVar2 != -1) goto LAB_1427fe325;
            break;
          }
          iVar2 = piVar6[10];
        } while (iVar2 != -1);
      }
    }
    piVar6 = piVar8;
LAB_1427fe325:
    piVar3 = piVar6 + 2;
    if (piVar6 == (int *)0x0) {
      piVar3 = piVar8;
    }
    if (piVar3 == (int *)0x0) {
      local_30 = local_30 & 0xfffffffe;
      local_58 = local_res8;
      local_50 = local_48;
      local_res8[0] = 0;
      local_2c = 0;
      local_48[0] = 0;
      local_40 = 0;
      local_38 = 0;
      TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_&&>_>
                (plVar1,local_res18,&local_58,0);
      if (local_40 != 0) {
        FMemory::Free();
      }
    }
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar4 = param_1 + 0x70;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x80) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar2 * 0x30 + *plVar1);
        if (*piVar6 == param_2) {
          if (iVar2 != -1) goto LAB_1427fe3f5;
          break;
        }
        iVar2 = piVar6[10];
      } while (iVar2 != -1);
    }
  }
  piVar6 = piVar8;
LAB_1427fe3f5:
  piVar3 = piVar6 + 2;
  if (piVar6 == (int *)0x0) {
    piVar3 = piVar8;
  }
  if (piVar3 != (int *)0x0) {
    return piVar3;
  }
  uVar5 = UEnum::GetPrivateStaticClass();
  StaticFindObjectChecked(uVar5,0,L"/Script/Engine.ESoundGroup",0);
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    piVar6 = *(int **)(param_1 + 0x78);
    if (*(int **)(param_1 + 0x78) == (int *)0x0) {
      piVar6 = (int *)(param_1 + 0x70);
    }
    iVar2 = *piVar6;
    if (iVar2 != -1) {
      while (piVar6 = (int *)((longlong)iVar2 * 0x30 + *plVar1), *piVar6 != 0) {
        iVar2 = piVar6[10];
        if (iVar2 == -1) {
          return (int *)&DAT_00000008;
        }
      }
      if (iVar2 != -1) goto LAB_1427fe482;
    }
  }
  piVar6 = piVar8;
LAB_1427fe482:
  return piVar6 + 2;
}



// FUNCTION 1427fe490 GetSoundSourceBusSends body=29 status=ok
// SIG undefined GetSoundSourceBusSends(void)

void USoundBase::GetSoundSourceBusSends(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = 0x98;
  if (param_2 != '\0') {
    lVar1 = 0x88;
  }
  FUN_1408e22e0(param_3,param_1 + lVar1);
  return;
}



// FUNCTION 1427fe4b0 GetSoundSubmixSends body=15 status=ok
// SIG undefined GetSoundSubmixSends(void)

void USoundBase::GetSoundSubmixSends(longlong param_1,undefined8 param_2)

{
  FUN_1408e22e0(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1427fe4c0 FUN_1427fe4c0 body=9 status=ok
// SIG undefined FUN_1427fe4c0(void)

undefined4 FUN_1427fe4c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x368);
}



// FUNCTION 1427fe4e0 GetSupportedClass body=85 status=ok
// SIG undefined GetSupportedClass(void)

undefined8 USoundEffectPreset::GetSupportedClass(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x17,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::GetSupportedClass");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x17,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::GetSupportedClass");
  return 0;
}



// FUNCTION 1427fe550 GetValue body=171 status=ok
// SIG undefined GetValue(void)

float FModulatorContinuousParams::GetValue(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar5 = 0.0;
  cVar3 = FActiveSound::GetFloatParameter(param_2,*param_1,local_res8);
  if (cVar3 == '\0') {
    local_res8[0] = *(float *)(param_1 + 1);
  }
  if (*(char *)((longlong)param_1 + 0x1c) != '\x02') {
    if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
      local_res8[0] = ABS(local_res8[0]);
    }
    fVar1 = *(float *)(param_1 + 2);
    fVar2 = *(float *)((longlong)param_1 + 0xc);
    if (fVar2 < fVar1) {
      fVar5 = (*(float *)(param_1 + 3) - *(float *)((longlong)param_1 + 0x14)) / (fVar1 - fVar2);
    }
    fVar4 = fVar2;
    if ((fVar2 <= local_res8[0]) && (fVar4 = fVar1, local_res8[0] <= fVar1)) {
      fVar4 = local_res8[0];
    }
    return (fVar4 - fVar2) * fVar5 + *(float *)((longlong)param_1 + 0x14);
  }
  return local_res8[0];
}



// FUNCTION 1427fe600 FUN_1427fe600 body=23 status=ok
// SIG undefined FUN_1427fe600(void)

undefined8 FUN_1427fe600(undefined8 param_1,undefined8 param_2)

{
  FUN_1428201a0();
  return param_2;
}



// FUNCTION 1427fe620 GetViewportRenderTargetTexture body=72 status=ok
// SIG undefined GetViewportRenderTargetTexture(void)

undefined8 FSceneViewport::GetViewportRenderTargetTexture(longlong param_1)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x200);
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)*(int *)(param_1 + 0x20c) * 8)
    ;
  }
  return 0;
}



// FUNCTION 1427fe6e0 FUN_1427fe6e0 body=257 status=ok
// SIG undefined FUN_1427fe6e0(void)

ulonglong FUN_1427fe6e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                       undefined1 param_5,undefined1 param_6,longlong param_7)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar5 = FUN_142820660(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((char)uVar5 != '\0') {
    lVar8 = *(longlong *)(param_7 + 0x78);
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x10) + (longlong)param_2 * 8);
    lVar6 = lVar8;
    if (lVar8 == 0) {
      lVar6 = param_7;
    }
    if (*(char *)(lVar6 + 0x66) == '\0') {
      uVar7 = *(undefined8 *)(lVar2 + 0xee0);
    }
    else {
      uVar7 = *(undefined8 *)(lVar2 + 0xee8);
    }
    *(undefined8 *)(param_7 + 0xa0) = uVar7;
    if (lVar8 == 0) {
      lVar8 = param_7;
    }
    *(longlong *)(lVar8 + 0x18) = param_1;
    lVar8 = *(longlong *)(param_7 + 0x78);
    if (*(longlong *)(param_7 + 0x78) == 0) {
      lVar8 = param_7;
    }
    uVar3 = 0;
    *(undefined1 *)(lVar8 + 0x68) = 1;
    uVar4 = uVar3;
    if (*(float *)(param_1 + 0x3fc) <= 0.0 && *(float *)(param_1 + 0x3fc) != 0.0) {
      uVar4 = 8;
    }
    if (*(float *)(param_1 + 0x3f8) <= 0.0 && *(float *)(param_1 + 0x3f8) != 0.0) {
      uVar3 = 8;
    }
    uVar1 = *(uint *)(param_7 + 0x8c);
    *(uint *)(param_7 + 0x8c) = uVar4 ^ uVar3 ^ uVar1;
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1427fe7f0 Gust body=985 status=ok
// SIG undefined Gust(void)

void FSpeedTreeWind::Gust(float *param_1,double param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  
  if (((*(double *)(param_1 + 0x15c) <= param_2 && param_2 != *(double *)(param_1 + 0x15c)) ||
      ((param_2 < *(double *)(param_1 + 0x162) &&
       (*(double *)(param_1 + 0x15a) <= param_2 && param_2 != *(double *)(param_1 + 0x15a))))) &&
     (dVar4 = *(double *)(param_1 + 0x154), iVar2 = rand(),
     (double)((float)iVar2 * 3.051851e-05 * (float)dVar4) <
     (double)param_1[0x146] * *(double *)(param_1 + 0x154) * 0.009999999776482582)) {
    fVar5 = param_1[0x148];
    fVar7 = param_1[0x147];
    *(double *)(param_1 + 0x160) = (double)param_1[0x157];
    *(double *)(param_1 + 0x15e) = param_2;
    iVar2 = rand();
    dVar4 = (double)((float)iVar2 * 3.051851e-05 * (fVar5 - fVar7) + fVar7);
    *(double *)(param_1 + 0x158) = dVar4;
    dVar6 = (double)(1.0 - param_1[0x14d]);
    if (dVar6 < dVar4) {
      *(double *)(param_1 + 0x158) = dVar6;
      dVar4 = dVar6;
    }
    fVar5 = *param_1 * 0.5;
    fVar5 = (float)ABS(dVar4 - (double)param_1[0x14d]) * (*param_1 - fVar5) + fVar5;
    fVar7 = fVar5 + fVar5;
    if (dVar4 <= (double)param_1[0x157]) {
      iVar2 = rand();
      fVar3 = ((float)iVar2 * 3.051851e-05 * (fVar7 - fVar5) + fVar5) * param_1[0x14c];
    }
    else {
      iVar2 = rand();
      fVar3 = ((float)iVar2 * 3.051851e-05 * (fVar7 - fVar5) + fVar5) * param_1[0x14b];
    }
    *(double *)(param_1 + 0x15a) = (double)fVar3 + param_2;
    fVar3 = param_1[0x14a];
    fVar1 = param_1[0x149];
    iVar2 = rand();
    *(double *)(param_1 + 0x162) =
         (double)((float)iVar2 * 3.051851e-05 * (fVar3 - fVar1) + fVar1) +
         *(double *)(param_1 + 0x15a);
    iVar2 = rand();
    *(double *)(param_1 + 0x15c) =
         (double)(((float)iVar2 * 3.051851e-05 * (fVar5 * 3.0 - fVar7) + fVar7) * param_1[0x14c]) +
         *(double *)(param_1 + 0x162);
  }
  if (*(double *)(param_1 + 0x15a) <= param_2) {
    dVar4 = *(double *)(param_1 + 0x162);
    if (((dVar4 < param_2) && (dVar6 = *(double *)(param_1 + 0x15c), 0.0 < dVar6)) &&
       (dVar4 < dVar6)) {
      fVar7 = (float)((param_2 - dVar4) / (dVar6 - dVar4));
      fVar5 = ::_guard_xfg_dispatch_icall_nop(6.0 - fVar7 * 12.0);
      fVar5 = 1.0 / (fVar5 + 1.0);
      param_1[0x157] = (1.0 - ((fVar7 - fVar5) * 0.5 + fVar5)) * (float)*(double *)(param_1 + 0x158)
      ;
    }
  }
  else {
    dVar4 = *(double *)(param_1 + 0x160);
    dVar6 = *(double *)(param_1 + 0x158);
    fVar5 = ::_guard_xfg_dispatch_icall_nop
                      (6.0 - (float)((param_2 - *(double *)(param_1 + 0x15e)) /
                                    (*(double *)(param_1 + 0x15a) - *(double *)(param_1 + 0x15e))) *
                             12.0);
    param_1[0x157] = ((float)dVar6 - (float)dVar4) / (fVar5 + 1.0) + (float)dVar4;
  }
  fVar5 = param_1[0x157];
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_1[0x157] = fVar5;
  return;
}



// FUNCTION 1427febd0 HandleConcurrencyEvaluation body=1040 status=ok
// SIG undefined HandleConcurrencyEvaluation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FSoundConcurrencyManager::HandleConcurrencyEvaluation(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  int local_c0 [2];
  int local_b8 [2];
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  int *local_a0;
  int *local_98;
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
  lVar2 = FUN_142233c00(param_2);
  local_a8 = *(int *)(param_2 + 0x28);
  local_c0[0] = FUN_142233be0(param_2);
  if (local_c0[0] == -1) {
    return 0;
  }
  plVar8 = (longlong *)0x0;
  local_b0 = 0;
  if (((*(byte *)(lVar2 + 4) & 1) == 0) || (local_a8 == 0)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar2 = param_1 + 0x40;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)local_c0[0]) * 4
                      );
      if (iVar1 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
          if ((int)*plVar6 == local_c0[0]) {
            if (iVar1 != -1) goto LAB_1427feee2;
            break;
          }
          iVar1 = (int)plVar6[1];
        } while (iVar1 != -1);
      }
    }
    plVar6 = plVar8;
LAB_1427feee2:
    plVar4 = (longlong *)((longlong)plVar6 + 4);
    if (plVar6 == (longlong *)0x0) {
      plVar4 = plVar8;
    }
    if (plVar4 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
        lVar2 = *(longlong *)(param_1 + 0x188);
        if (*(longlong *)(param_1 + 0x188) == 0) {
          lVar2 = param_1 + 0x180;
        }
        iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)(int)*plVar4) *
                                 4);
        if (iVar1 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x148));
            if ((int)*plVar6 == (int)*plVar4) {
              if (iVar1 != -1) goto LAB_1427fef65;
              break;
            }
            iVar1 = (int)plVar6[5];
          } while (iVar1 != -1);
        }
      }
      plVar6 = plVar8;
LAB_1427fef65:
      plVar4 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar4 = plVar8;
      }
      uVar3 = FUN_14280ef70(param_1,param_2,plVar4);
      return uVar3;
    }
    local_c8[0] = MakeNewConcurrencyGroupAndSound(param_1,&local_b0,param_2);
    piVar7 = &local_a4;
    plVar6 = (longlong *)(param_1 + 8);
    local_98 = local_c8;
  }
  else {
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar2 = param_1 + 0x90;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)local_a8) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x58));
          if ((int)*plVar4 == local_a8) {
            if (iVar1 != -1) goto LAB_1427fecb5;
            break;
          }
          iVar1 = (int)plVar4[0xb];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar8;
LAB_1427fecb5:
    plVar6 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = plVar8;
    }
    if (plVar6 == (longlong *)0x0) {
      local_c8[0] = MakeNewConcurrencyGroupAndSound(param_1,&local_b0,param_2);
      local_b8[0] = local_c0[0];
      local_a0 = local_b8;
      local_88 = 0;
      local_98 = local_c8;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_141e56730(&local_88,&local_a4,&local_a0,0);
      local_a0 = &local_a8;
      local_98 = (int *)&local_88;
      FUN_1427ec700(param_1 + 0x58,&local_a4,&local_a0,0);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return local_b0;
    }
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar4 = (longlong *)plVar6[8];
      if ((longlong *)plVar6[8] == (longlong *)0x0) {
        plVar4 = plVar6 + 7;
      }
      iVar1 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)plVar6[9] - 1U & (longlong)local_c0[0]) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *plVar6);
          if ((int)*plVar4 == local_c0[0]) {
            if (iVar1 != -1) goto LAB_1427fed21;
            break;
          }
          iVar1 = (int)plVar4[1];
        } while (iVar1 != -1);
      }
    }
    plVar4 = plVar8;
LAB_1427fed21:
    plVar5 = (longlong *)((longlong)plVar4 + 4);
    if (plVar4 == (longlong *)0x0) {
      plVar5 = plVar8;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
        lVar2 = *(longlong *)(param_1 + 0x188);
        if (*(longlong *)(param_1 + 0x188) == 0) {
          lVar2 = param_1 + 0x180;
        }
        iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)(int)*plVar5) *
                                 4);
        if (iVar1 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x148));
            if ((int)*plVar6 == (int)*plVar5) {
              if (iVar1 != -1) goto LAB_1427feda5;
              break;
            }
            iVar1 = (int)plVar6[5];
          } while (iVar1 != -1);
        }
      }
      plVar6 = plVar8;
LAB_1427feda5:
      plVar4 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar4 = plVar8;
      }
      uVar3 = FUN_14280ef70(param_1,param_2,plVar4);
      return uVar3;
    }
    local_b8[0] = MakeNewConcurrencyGroupAndSound(param_1,&local_b0,param_2);
    piVar7 = local_c8;
    local_98 = local_b8;
  }
  local_a0 = local_c0;
  FUN_141e56730(plVar6,piVar7,&local_a0,0);
  return local_b0;
}



// FUNCTION 1427fefe0 HandleConcurrencyEvaluationOverride body=1038 status=ok
// SIG undefined HandleConcurrencyEvaluationOverride(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FSoundConcurrencyManager::HandleConcurrencyEvaluationOverride(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [2];
  int local_c0 [2];
  int local_b8 [2];
  undefined8 local_b0;
  undefined1 local_a8 [8];
  int *local_a0;
  int *local_98;
  int local_90 [2];
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
  lVar2 = FUN_142233c00(param_2);
  plVar6 = (longlong *)0x0;
  local_90[0] = *(int *)(param_2 + 0x28);
  local_b0 = 0;
  local_c0[0] = *(int *)(*(longlong *)(param_2 + 0x10) + 0xc);
  if (((*(byte *)(lVar2 + 4) & 1) == 0) || (local_90[0] == 0)) {
    if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
      lVar2 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar2 = param_1 + 0x130;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)local_c0[0]) *
                               4);
      if (iVar1 != -1) {
        do {
          plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xf8));
          if ((int)*plVar3 == local_c0[0]) {
            if (iVar1 != -1) goto LAB_1427ff311;
            break;
          }
          iVar1 = (int)plVar3[1];
        } while (iVar1 != -1);
      }
    }
    plVar3 = plVar6;
LAB_1427ff311:
    plVar5 = (longlong *)((longlong)plVar3 + 4);
    if (plVar3 == (longlong *)0x0) {
      plVar5 = plVar6;
    }
    if (plVar5 == (longlong *)0x0) {
      local_c8[0] = MakeNewConcurrencyGroupAndSound(param_1,&local_b0,param_2);
      local_a0 = local_c0;
      local_98 = local_c8;
      FUN_141e56730((longlong *)(param_1 + 0xf8),local_a8,&local_a0,0);
    }
    else {
      if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
        lVar2 = *(longlong *)(param_1 + 0x188);
        if (*(longlong *)(param_1 + 0x188) == 0) {
          lVar2 = param_1 + 0x180;
        }
        iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)(int)*plVar5) *
                                 4);
        if (iVar1 != -1) {
          do {
            plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x148));
            if ((int)*plVar3 == (int)*plVar5) {
              if (iVar1 != -1) goto LAB_1427ff395;
              break;
            }
            iVar1 = (int)plVar3[5];
          } while (iVar1 != -1);
        }
      }
      plVar3 = plVar6;
LAB_1427ff395:
      plVar5 = plVar3 + 1;
      if (plVar3 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      local_b0 = FUN_14280ef70(param_1,param_2,plVar5);
    }
  }
  else {
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar2 = param_1 + 0xe0;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)local_90[0]) * 4
                      );
      if (iVar1 != -1) {
        do {
          plVar3 = (longlong *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0xa8));
          if ((int)*plVar3 == local_90[0]) {
            if (iVar1 != -1) goto LAB_1427ff0a5;
            break;
          }
          iVar1 = (int)plVar3[0xb];
        } while (iVar1 != -1);
      }
    }
    plVar3 = plVar6;
LAB_1427ff0a5:
    plVar5 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar5 = plVar6;
    }
    if (plVar5 == (longlong *)0x0) {
      local_c8[0] = MakeNewConcurrencyGroupAndSound(param_1,&local_b0,param_2);
      local_b8[0] = local_c0[0];
      local_a0 = local_b8;
      local_88 = 0;
      local_98 = local_c8;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_141e56730(&local_88,local_a8,&local_a0,0);
      local_a0 = local_90;
      local_98 = (int *)&local_88;
      FUN_1427ec700((longlong *)(param_1 + 0xa8),local_a8,&local_a0,0);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
    }
    else {
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        plVar3 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar3 = plVar5 + 7;
        }
        iVar1 = *(int *)((longlong)plVar3 +
                        ((longlong)(int)plVar5[9] - 1U & (longlong)local_c0[0]) * 4);
        if (iVar1 != -1) {
          do {
            plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *plVar5);
            if ((int)*plVar3 == local_c0[0]) {
              if (iVar1 != -1) goto LAB_1427ff111;
              break;
            }
            iVar1 = (int)plVar3[1];
          } while (iVar1 != -1);
        }
      }
      plVar3 = plVar6;
LAB_1427ff111:
      plVar4 = (longlong *)((longlong)plVar3 + 4);
      if (plVar3 == (longlong *)0x0) {
        plVar4 = plVar6;
      }
      if (plVar4 == (longlong *)0x0) {
        local_b8[0] = MakeNewConcurrencyGroupAndSound(param_1,&local_b0,param_2);
        local_a0 = local_c0;
        local_98 = local_b8;
        FUN_141e56730(plVar5,local_c8,&local_a0,0);
      }
      else {
        if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
          lVar2 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar2 = param_1 + 0x180;
          }
          iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)(int)*plVar4)
                                   * 4);
          if (iVar1 != -1) {
            do {
              plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x148));
              if ((int)*plVar3 == (int)*plVar4) {
                if (iVar1 != -1) goto LAB_1427ff195;
                break;
              }
              iVar1 = (int)plVar3[5];
            } while (iVar1 != -1);
          }
        }
        plVar3 = plVar6;
LAB_1427ff195:
        plVar5 = plVar3 + 1;
        if (plVar3 == (longlong *)0x0) {
          plVar5 = plVar6;
        }
        local_b0 = FUN_14280ef70(param_1,param_2,plVar5);
      }
    }
  }
  return local_b0;
}



// FUNCTION 1427ff3f0 FUN_1427ff3f0 body=230 status=ok
// SIG undefined FUN_1427ff3f0(void)

ulonglong FUN_1427ff3f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  undefined8 local_18;
  longlong local_10;
  
  plVar7 = *(longlong **)(param_1 + -0x100);
  if (plVar7 != (longlong *)0x0) {
    local_18 = *param_3;
    local_10 = param_3[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + -0x100);
    }
    bVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,param_2,&local_18);
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    return (ulonglong)bVar5;
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar4 - 1;
    in_RAX = (ulonglong)uVar6;
    if (uVar6 == 0) {
      in_RAX = (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1427ff4e0 FUN_1427ff4e0 body=389 status=ok
// SIG undefined FUN_1427ff4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1427ff4e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  short *psVar7;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined2 *local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  lVar5 = param_1;
  local_res10 = param_2;
  uVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
  pwVar2 = AK::MemoryMgr::GetPoolName((long)lVar5);
  if (pwVar2 != (wchar_t *)0x0) {
    if (((int)local_res10 != DAT_146b15fc8) || (local_res10._4_4_ != DAT_146b15fcc)) {
      puVar3 = (undefined8 *)FName::ToString(&local_res10,local_28);
      if (*(int *)(puVar3 + 1) == 0) {
        psVar7 = &DAT_143f3eda8;
      }
      else {
        psVar7 = (short *)*puVar3;
      }
      local_38 = (undefined2 *)0x0;
      local_30 = 0;
      if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (psVar7[lVar5] != 0);
        uVar4 = (int)lVar5 + 1;
        local_30 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,psVar7,(longlong)(int)uVar4 * 2);
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      FPlatformAudioCookOverrides::GetHashSuffix(pwVar2,&local_38);
      puVar6 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar6 = local_38;
      }
      FName::FName(&local_res20,puVar6,1);
      DAT_146b15fc0 = local_res20;
      _DAT_146b15fc8 = local_res10;
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    uVar1 = FFormatContainer::Contains(param_1 + 0x1c0,DAT_146b15fc0);
    return uVar1;
  }
  uVar1 = FFormatContainer::Contains(param_1 + 0x1c0,local_res10);
  return uVar1;
}



// FUNCTION 1427ff670 HasConcatenatorNode body=10 status=ok
// SIG undefined HasConcatenatorNode(void)

byte USoundBase::HasConcatenatorNode(longlong param_1)

{
  return *(byte *)(param_1 + 0x30) >> 5 & 1;
}



// FUNCTION 1427ff680 FUN_1427ff680 body=74 status=ok
// SIG undefined FUN_1427ff680(void)

ulonglong FUN_1427ff680(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar3 + *(int *)(param_1 + 0x30);
  while( true ) {
    if (plVar3 == plVar1) {
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) break;
    plVar3 = plVar3 + 1;
  }
  FUN_1417510e0(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001427ff6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
  return uVar4;
}



// FUNCTION 1427ff6d0 FUN_1427ff6d0 body=10 status=ok
// SIG undefined FUN_1427ff6d0(void)

byte FUN_1427ff6d0(longlong param_1)

{
  return *(byte *)(param_1 + 0x30) >> 4 & 1;
}



// FUNCTION 1427ff6e0 FUN_1427ff6e0 body=74 status=ok
// SIG undefined FUN_1427ff6e0(void)

ulonglong FUN_1427ff6e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar3 + *(int *)(param_1 + 0x30);
  while( true ) {
    if (plVar3 == plVar1) {
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) break;
    plVar3 = plVar3 + 1;
  }
  FUN_1417510e0(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001427ff723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2);
  return uVar4;
}



// FUNCTION 1427ff730 FUN_1427ff730 body=248 status=ok
// SIG undefined FUN_1427ff730(void)

bool FUN_1427ff730(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar1 = DAT_1469f4590;
  plVar5 = *(longlong **)(param_1 + 0x2d8);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar5[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar5 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar5[1];
      if (bVar8) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x2d0);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar5 = (longlong *)(**(code **)(*plVar1 + 0x130))(plVar1,local_18,0);
  plVar5 = (longlong *)*plVar5;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return plVar5 == plVar7;
}



// FUNCTION 1427ff830 FUN_1427ff830 body=226 status=ok
// SIG undefined FUN_1427ff830(void)

undefined1 FUN_1427ff830(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  if ((*(longlong *)(param_1 + 0x2d0) == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
LAB_1427ff8bb:
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2d8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_1427ff8bb;
    plVar2 = *(longlong **)(param_1 + 0x2d8);
    plVar6 = plVar2;
    plVar9 = plVar8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar8, plVar9 = (longlong *)0x0, !bVar10) {
        LOCK();
        bVar10 = iVar5 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar6 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = *(longlong **)(param_1 + 0x2d0);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar8 = (longlong *)0x1;
    cVar4 = FUN_141846080(plVar9);
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_1427ff8c3;
    }
  }
  uVar7 = 0;
LAB_1427ff8c3:
  if ((plVar8 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return uVar7;
}



// FUNCTION 1427ff920 IncrementNumSounds body=8 status=ok
// SIG undefined IncrementNumSounds(void)

void USoundWave::IncrementNumSounds(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  UNLOCK();
  return;
}



// FUNCTION 1427ff930 Init body=83 status=ok
// SIG undefined Init(void)

void USoundEffectPreset::Init(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x1b,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::Init");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound/SoundEffectPreset.h",
             0x1b,L"Pure virtual not implemented (%s)",L"USoundEffectPreset::Init");
  return;
}



// FUNCTION 1427ff990 InitAudioResource body=72 status=ok
// SIG undefined InitAudioResource(void)

void USoundWave::InitAudioResource(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    iVar1 = FUntypedBulkData::GetBulkDataSize(param_2);
    *(int *)(param_1 + 0x1dc) = iVar1;
    if (0 < iVar1) {
      FUntypedBulkData::GetCopy(param_2,param_1 + 0x138,1);
    }
  }
  return;
}



// FUNCTION 1427ff9e0 FUN_1427ff9e0 body=119 status=ok
// SIG undefined FUN_1427ff9e0(void)

bool FUN_1427ff9e0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  
  if ((*(int *)((longlong)param_1 + 0x1dc) == 0) && ((*(byte *)((longlong)param_1 + 0xb3) & 2) == 0)
     ) {
    pwVar2 = AK::MemoryMgr::GetPoolName((long)param_1);
    lVar3 = (**(code **)(*param_1 + 0x330))(param_1,param_2,pwVar2);
    if (lVar3 != 0) {
      uVar1 = FUntypedBulkData::GetBulkDataSize(lVar3);
      *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar1;
      FUntypedBulkData::GetCopy(lVar3,param_1 + 0x27,1);
    }
  }
  return 0 < *(int *)((longlong)param_1 + 0x1dc);
}



// FUNCTION 1427ffa60 FUN_1427ffa60 body=938 status=ok
// SIG undefined FUN_1427ffa60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427ffa60(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [112];
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar13 = (**(code **)(*param_2 + 0x1b8))(param_2);
  puVar12 = (undefined4 *)(param_3 + 0x1c0);
  if (param_3 == 0) {
    puVar12 = &DAT_1464c9c14;
  }
  plVar8 = (longlong *)operator_new(0x1c0);
  plVar11 = (longlong *)0x0;
  plStack_f0 = plVar11;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_1451b9860;
    local_128 = *puVar12;
    local_120 = 0;
    local_118 = uVar13;
    FUN_142899f20(plVar8 + 2,*(undefined8 *)(param_1 + 0x28),0,param_3);
    plStack_f0 = plVar8;
  }
  local_f8 = plStack_f0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
  local_108 = local_f8;
  plStack_100 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  pplVar1 = (longlong **)(param_1 + 8);
  if (pplVar1 != &local_108) {
    *pplVar1 = local_f8;
    local_108 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&plStack_100);
  }
  plVar8 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_100 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  plVar8 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_f0 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(undefined4 *)(*pplVar1 + 0xf) = 2;
  if (*pplVar1 == (longlong *)0x0) {
    return;
  }
  plVar8 = plVar11;
  if ((((DAT_146b17150 == 0) || (cVar6 = FUN_142881000(DAT_146b17150,0), cVar6 == '\0')) ||
      (DAT_146b17150 == 0)) ||
     ((*(longlong **)(DAT_146b17150 + 0xab8) == (longlong *)0x0 ||
      (plVar8 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))(),
      plVar8 == (longlong *)0x0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b15f58) && (_Init_thread_header(&DAT_146b15f58), DAT_146b15f58 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.DebugCanvasInLayer");
    plVar10 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146b15f50 = plVar10;
    _Init_thread_footer(&DAT_146b15f58);
  }
  plVar10 = DAT_146b15f50;
  if ((bVar4) && (DAT_146b15f50 != (longlong *)0x0)) {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') &&
       ((DAT_1468c21ae != '\0' && (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)))) {
      plVar11 = (longlong *)&DAT_00000004;
    }
    if (*(int *)((longlong)plVar11 + (longlong)plVar10) != 0) {
      cVar6 = '\x01';
      goto LAB_1427ffcca;
    }
  }
  cVar6 = '\0';
LAB_1427ffcca:
  *(char *)((longlong)*pplVar1 + 0x95) = cVar6;
  if ((((cVar6 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(char *)(param_1 + 0x3c) != '\0')) && (plVar8 != (longlong *)0x0)) {
    local_e8[0] = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (local_e8[0] != 0) {
      LOCK();
      *(int *)(local_e8[0] + 8) = *(int *)(local_e8[0] + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,local_d8,local_e8);
    if (*(int *)(param_1 + 0x38) == -1) {
      uVar13 = (**(code **)(*plVar8 + 8))(plVar8,local_d8);
      *(undefined4 *)(param_1 + 0x38) = uVar13;
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8,*(int *)(param_1 + 0x38),local_d8);
    }
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_60);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_68);
  }
  if ((*(int *)(param_1 + 0x38) != -1) && ((cVar6 == '\0' || (*(char *)(param_1 + 0x3c) == '\0'))))
  {
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  return;
}



// FUNCTION 1427ffe10 FUN_1427ffe10 body=3226 status=ok
// SIG undefined FUN_1427ffe10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427ffe10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 local_290;
  undefined8 *local_288;
  undefined8 **local_280;
  undefined4 local_278;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 *local_240;
  longlong *local_238;
  longlong local_230 [7];
  longlong local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [352];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    FUN_1428789d0(param_1 + 0x48,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  }
  iVar17 = 0;
  *(undefined8 *)(param_1 + 0x304) = 0;
  lVar15 = *(undefined8 *)(DAT_1469f4590 + 0x18);
  local_268 = *(undefined4 *)(param_1 + 0xb8);
  local_264 = *(undefined4 *)(param_1 + 0xbc);
  local_230[6] = lVar15;
  if ((*(char *)(param_1 + 0x2e3) == '\0') && (*(char *)(param_1 + 0x2e4) == '\0')) {
    if (*(int *)(param_1 + 0x318) == 0) {
      iVar17 = *(int *)(param_1 + 0x318);
      *(int *)(param_1 + 0x318) = iVar17 + 1;
      if (*(int *)(param_1 + 0x31c) < iVar17 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x310,iVar17);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar17 * 8) = 0;
      iVar17 = *(int *)(param_1 + 0x328);
      *(int *)(param_1 + 0x328) = iVar17 + 1;
      if (*(int *)(param_1 + 0x32c) < iVar17 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 800,iVar17);
      }
      local_230[1] = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 800) + (longlong)iVar17 * 8) = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230 + 1);
      iVar17 = *(int *)(param_1 + 0x338);
      *(int *)(param_1 + 0x338) = iVar17 + 1;
      if (*(int *)(param_1 + 0x33c) < iVar17 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x330,iVar17);
      }
      local_230[2] = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar17 * 8) = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230 + 2);
    }
    *(undefined4 *)(param_1 + 0x350) = 1;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -8,0);
    *(undefined8 *)(param_1 + 0x354) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x350) = 1;
    cVar5 = (**(code **)(*(longlong *)(param_1 + -0x10) + 0x188))(param_1 + -0x10);
    if ((cVar5 == '\0') ||
       ((*(longlong **)(DAT_146b17150 + 0xab8) == (longlong *)0x0 ||
        (cVar5 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 8))(), cVar5 == '\0')))) {
      local_238 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x78))();
      local_238 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + -0x10,&local_268,&local_264);
        uVar6 = (**(code **)(*plVar8 + 0x28))(plVar8);
        *(undefined4 *)(param_1 + 0x350) = uVar6;
      }
    }
    iVar16 = *(int *)(param_1 + 0x318);
    if (0 < iVar16) {
      lVar15 = 0;
      do {
        puVar10 = (undefined8 *)0x0;
        if (*(longlong *)(lVar15 + *(longlong *)(param_1 + 0x310)) == 0) {
          puVar9 = (undefined8 *)operator_new(0x48);
          puVar11 = puVar10;
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = 0;
            *(undefined4 *)(puVar9 + 3) = 4;
            puVar9[4] = 0;
            puVar9[5] = 0;
            *(undefined1 *)(puVar9 + 7) = 0;
            *puVar9 = &PTR_FUN_145001480;
            puVar9[2] = &PTR_LAB_1450014a0;
            local_230[3] = 0;
            puVar9[8] = 0;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230 + 3);
            puVar11 = puVar9;
          }
          *(undefined8 **)(lVar15 + *(longlong *)(param_1 + 0x310)) = puVar11;
        }
        puVar11 = *(undefined8 **)(lVar15 + *(longlong *)(param_1 + 800));
        *(undefined8 *)(lVar15 + *(longlong *)(param_1 + 800)) = 0;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar11 + 1);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            if ((*(char *)(puVar11 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar11 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar11 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                puVar9 = puVar10;
                if (uVar7 != 0) {
                  puVar9 = (undefined8 *)
                           ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18);
                }
                puVar9[1] = puVar11;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar11)(puVar11);
            }
          }
        }
        puVar11 = *(undefined8 **)(lVar15 + *(longlong *)(param_1 + 0x330));
        *(undefined8 *)(lVar15 + *(longlong *)(param_1 + 0x330)) = 0;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar11 + 1);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            if ((*(char *)(puVar11 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar11 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar11 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar7 != 0) {
                  puVar10 = (undefined8 *)
                            ((&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18);
                }
                puVar10[1] = puVar11;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar11)(puVar11);
            }
          }
        }
        iVar16 = *(int *)(param_1 + 0x318);
        iVar17 = iVar17 + 1;
        lVar15 = lVar15 + 8;
      } while (iVar17 < iVar16);
    }
    iVar17 = *(int *)(param_1 + 0x350);
    if (iVar16 < iVar17) {
      do {
        puVar10 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)operator_new(0x48);
        if (puVar11 != (undefined8 *)0x0) {
          puVar11[1] = 0;
          *(undefined4 *)(puVar11 + 3) = 4;
          puVar11[4] = 0;
          puVar11[5] = 0;
          *(undefined1 *)(puVar11 + 7) = 0;
          *puVar11 = &PTR_FUN_145001480;
          puVar11[2] = &PTR_LAB_1450014a0;
          local_230[4] = 0;
          puVar11[8] = 0;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230 + 4);
          puVar10 = puVar11;
        }
        iVar17 = *(int *)(param_1 + 0x318);
        *(int *)(param_1 + 0x318) = iVar17 + 1;
        if (*(int *)(param_1 + 0x31c) < iVar17 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x310,iVar17);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x310) + (longlong)iVar17 * 8) = puVar10;
        iVar17 = *(int *)(param_1 + 0x328);
        *(int *)(param_1 + 0x328) = iVar17 + 1;
        if (*(int *)(param_1 + 0x32c) < iVar17 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 800,iVar17);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 800) + (longlong)iVar17 * 8) = 0;
        iVar17 = *(int *)(param_1 + 0x338);
        *(int *)(param_1 + 0x338) = iVar17 + 1;
        if (*(int *)(param_1 + 0x33c) < iVar17 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x330,iVar17);
        }
        iVar16 = iVar16 + 1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar17 * 8) = 0;
      } while (iVar16 < *(int *)(param_1 + 0x350));
    }
    else if (iVar17 < iVar16) {
      plVar8 = (longlong *)(param_1 + 0x310);
      iVar16 = *(int *)(param_1 + 0x318);
      if (iVar16 < iVar17) {
        *(int *)(param_1 + 0x318) = iVar17;
        if (*(int *)(param_1 + 0x31c) < iVar17) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar8 + (longlong)iVar16 * 8),0,(longlong)(iVar17 - iVar16) << 3);
      }
      else if ((iVar17 < iVar16) && (iVar17 != iVar16)) {
        *(int *)(param_1 + 0x318) = iVar17;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
      }
      iVar17 = *(int *)(param_1 + 0x350);
      plVar8 = (longlong *)(param_1 + 800);
      iVar16 = *(int *)(param_1 + 0x328);
      if (iVar16 < iVar17) {
        *(int *)(param_1 + 0x328) = iVar17;
        if (*(int *)(param_1 + 0x32c) < iVar17) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar16);
        }
        if (iVar17 - iVar16 != 0) {
          puVar10 = (undefined8 *)(*plVar8 + (longlong)iVar16 * 8);
          for (uVar13 = (ulonglong)(uint)(iVar17 - iVar16); uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        }
      }
      else if (iVar17 < iVar16) {
        TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                  (plVar8,iVar17,iVar16 - iVar17,1);
      }
      iVar17 = *(int *)(param_1 + 0x350);
      plVar8 = (longlong *)(param_1 + 0x330);
      iVar16 = *(int *)(param_1 + 0x338);
      if (iVar16 < iVar17) {
        *(int *)(param_1 + 0x338) = iVar17;
        if (*(int *)(param_1 + 0x33c) < iVar17) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar16);
        }
        if (iVar17 - iVar16 != 0) {
          puVar10 = (undefined8 *)(*plVar8 + (longlong)iVar16 * 8);
          for (uVar13 = (ulonglong)(uint)(iVar17 - iVar16); uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        }
      }
      else if (iVar17 < iVar16) {
        TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                  (plVar8,iVar17,iVar16 - iVar17,1);
      }
    }
    lVar15 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b15f78) &&
       (_Init_thread_header(&DAT_146b15f78), DAT_146b15f78 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DefaultBackBufferPixelFormat")
      ;
      if (plVar8 != (longlong *)0x0) {
        lVar15 = (**(code **)(*plVar8 + 0x38))(plVar8);
      }
      DAT_146b15f70 = lVar15;
      _Init_thread_footer(&DAT_146b15f78);
    }
    uVar6 = EDefaultBackBufferPixelFormat::FromInt(*(undefined4 *)(DAT_146b15f70 + 4));
    local_260 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar6);
    iVar17 = *(int *)(param_1 + 0x350);
    iVar16 = 0;
    local_1d8 = (undefined8 *)0x0;
    uStack_1d0 = 0;
    local_1c8 = 1;
    local_1b4 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_248 = 0;
    local_250 = (undefined8 *)0x0;
    local_1c4 = _DAT_1468b5d78;
    uStack_1bc = uRam00000001468b5d80;
    if (0 < iVar17) {
      lVar15 = 0;
      do {
        lVar12 = 0;
        uVar14 = (undefined1)local_260;
        if (local_238 == (longlong *)0x0) {
LAB_142800500:
          local_280 = &local_1d8;
          local_288 = (undefined8 *)CONCAT44(local_288._4_4_,9);
          local_290 = 1;
          local_298 = 1;
          local_2a0 = CONCAT31(local_2a0._1_3_,uVar14);
          local_2a8 = local_264;
          (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,&local_240,&DAT_146ab6e78,local_268);
          puVar10 = local_250;
          local_250 = local_240;
          local_240 = (undefined8 *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar10 + 1);
            iVar17 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              if ((*(char *)(puVar10 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
                LOCK();
                bVar18 = *(int *)((longlong)puVar10 + 0xc) == 0;
                if (bVar18) {
                  *(int *)((longlong)puVar10 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar18) {
                  uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar7 != 0) {
                    lVar12 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar12 + 8) = puVar10;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar10)(puVar10,1);
              }
            }
          }
          TRefCountPtr<FRHIIndexBuffer>::operator=(&local_248,local_250);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_240);
        }
        else {
          local_280 = &local_250;
          local_278 = 1;
          local_288 = &local_248;
          local_290 = 1;
          local_298 = 0;
          local_2a0 = 1;
          local_2a8 = CONCAT31(local_2a8._1_3_,uVar14);
          cVar5 = (**(code **)(*local_238 + 0x30))(local_238,iVar16,local_268,local_264);
          if (cVar5 == '\0') goto LAB_142800500;
        }
        TRefCountPtr<FRHIIndexBuffer>::operator=
                  (*(longlong *)(param_1 + 800) + (longlong)iVar16 * 8,local_248);
        TRefCountPtr<FRHIIndexBuffer>::operator=
                  (*(longlong *)(param_1 + 0x330) + (longlong)iVar16 * 8,local_250);
        uVar4 = local_264;
        uVar6 = local_268;
        lVar12 = *(longlong *)(param_1 + 0x310);
        if (*(longlong *)(lVar12 + lVar15) != 0) {
          local_230[0] = **(longlong **)(param_1 + 0x330);
          if (local_230[0] != 0) {
            LOCK();
            *(int *)(local_230[0] + 8) = *(int *)(local_230[0] + 8) + 1;
            UNLOCK();
            lVar12 = *(longlong *)(param_1 + 0x310);
          }
          lVar12 = *(longlong *)(lVar12 + lVar15);
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar12 + 8,local_230[0]);
          *(undefined4 *)(lVar12 + 0x40) = uVar6;
          *(undefined4 *)(lVar12 + 0x44) = uVar4;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230);
        }
        iVar17 = *(int *)(param_1 + 0x350);
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 8;
      } while (iVar16 < iVar17);
    }
    if (iVar17 < *(int *)(param_1 + 0x318)) {
      lVar15 = (longlong)iVar17 * 8;
      do {
        lVar12 = *(longlong *)(lVar15 + *(longlong *)(param_1 + 0x310));
        if (lVar12 != 0) {
          local_230[5] = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(lVar12 + 8,0);
          *(undefined8 *)(lVar12 + 0x40) = 0;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_230 + 5);
        }
        puVar10 = *(undefined8 **)(lVar15 + *(longlong *)(param_1 + 800));
        *(undefined8 *)(lVar15 + *(longlong *)(param_1 + 800)) = 0;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar10 + 1);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            if ((*(char *)(puVar10 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar10 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar12 = 0;
                if (uVar7 != 0) {
                  lVar12 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar12 + 8) = puVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar10)(puVar10);
            }
          }
        }
        puVar10 = *(undefined8 **)(lVar15 + *(longlong *)(param_1 + 0x330));
        *(undefined8 *)(lVar15 + *(longlong *)(param_1 + 0x330)) = 0;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar10 + 1);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            if ((*(char *)(puVar10 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar18 = *(int *)((longlong)puVar10 + 0xc) == 0;
              if (bVar18) {
                *(int *)((longlong)puVar10 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar18) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar12 = 0;
                if (uVar7 != 0) {
                  lVar12 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar12 + 8) = puVar10;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar10)(puVar10);
            }
          }
        }
        iVar17 = iVar17 + 1;
        lVar15 = lVar15 + 8;
      } while (iVar17 < *(int *)(param_1 + 0x318));
    }
    *(undefined4 *)(param_1 + 0x354) = 0;
    *(int *)(param_1 + 0x358) = (int)(1 % (longlong)*(int *)(param_1 + 0x318));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -8,**(undefined8 **)(param_1 + 0x330));
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_250);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_248);
    lVar15 = local_230[6];
  }
  plVar8 = *(longlong **)(param_1 + 0x2c8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar17 = (int)plVar8[1];
    bVar18 = iVar17 == 0;
    if (bVar18) {
      *(int *)(plVar8 + 1) = 0;
      iVar17 = 0;
    }
    UNLOCK();
    while (!bVar18) {
      LOCK();
      bVar18 = iVar17 == (int)plVar8[1];
      if (bVar18) {
        *(int *)(plVar8 + 1) = iVar17 + 1;
      }
      UNLOCK();
      if (bVar18) {
        if (plVar8 == (longlong *)0x0) {
          return;
        }
        lVar12 = *(longlong *)(param_1 + 0x2c0);
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar8 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        if (lVar12 != 0) {
          FWidgetPath::FWidgetPath(local_198);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_1f8 = lVar12;
          local_1f0 = plVar8;
          FUN_14189a110(DAT_1469f4590,&local_1e8,&local_1f8,local_198);
          LOCK();
          plVar1 = plVar8 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar17 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          FUN_142812de0(param_1 + -0x18,lVar15,local_1e8);
          if ((*(char *)(param_1 + 0x2e3) != '\0') || (*(char *)(param_1 + 0x2e4) != '\0')) {
            *(undefined4 *)(param_1 + 0x304) = local_268;
            *(undefined4 *)(param_1 + 0x308) = local_264;
          }
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1e0 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_1e0)(local_1e0);
              LOCK();
              piVar2 = (int *)((longlong)local_1e0 + 0xc);
              iVar17 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                (**(code **)(*local_1e0 + 8))(local_1e0,1);
              }
            }
          }
          FUN_140458830(local_198);
        }
        LOCK();
        plVar1 = plVar8 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 != 1) {
          return;
        }
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 != 1) {
          return;
        }
        (**(code **)(*plVar8 + 8))(plVar8,1);
        return;
      }
      LOCK();
      iVar17 = (int)plVar8[1];
      bVar18 = iVar17 == 0;
      if (bVar18) {
        *(int *)(plVar8 + 1) = 0;
        iVar17 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142800ab0 FUN_142800ab0 body=613 status=ok
// SIG undefined FUN_142800ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142800ab0(longlong param_1)

{
  longlong lVar1;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  void *_Src;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint *local_b0;
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  uint local_88 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((*(int *)(param_1 + 0x30) != 0) && (local_b8 = *(int *)(param_1 + 0x34), local_b8 != 0)) &&
     ((*(longlong *)(param_1 + 0x40) != 0 || (*(char *)(param_1 + 0x54) != '\0')))) {
    local_50 = L"FSlateTexture2DRHIRef";
    local_90 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = 0;
    local_98 = *(undefined4 *)(param_1 + 0x38);
    local_a0 = 1;
    local_68 = 1;
    local_64 = _DAT_1468b5d78;
    uStack_60 = uRam00000001468b5d7c;
    uStack_5c = uRam00000001468b5d80;
    uStack_58 = uRam00000001468b5d84;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_a8 = 1;
    local_b0 = (uint *)CONCAT71(local_b0._1_7_,*(undefined1 *)(param_1 + 0x50));
    (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_88,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -0x18,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
    if ((*(longlong *)(param_1 + 0x40) != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 8))) {
      local_b0 = local_88;
      local_a0 = CONCAT31(local_a0._1_3_,1);
      local_a8 = local_a8 & 0xffffff00;
      local_b8 = 1;
      _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                               (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + -0x18),0);
      _Src = (void *)**(undefined8 **)(param_1 + 0x40);
      uVar2 = (&DAT_1464ca1c4)[(longlong)*(int *)(param_1 + 0x50) * 10] * *(int *)(param_1 + 0x30);
      if (local_88[0] == uVar2) {
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(*(int *)(param_1 + 0x34) * uVar2));
      }
      else if (*(int *)(param_1 + 0x34) != 0) {
        do {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar2);
          _Src = (void *)((longlong)_Src + (ulonglong)uVar2);
          _Dst = (void *)((longlong)_Dst + (ulonglong)local_88[0]);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x34));
      }
      local_b0 = (uint *)CONCAT71(local_b0._1_7_,1);
      local_b8 = local_b8 & 0xffffff00;
      (**(code **)(*DAT_146ab6358 + 0x588))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + -0x18),0);
      lVar1 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar1 + 8) = 0;
      if (*(int *)(lVar1 + 0xc) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar1,0);
      }
    }
  }
  return;
}



// FUNCTION 142800d30 FUN_142800d30 body=1116 status=ok
// SIG undefined FUN_142800d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142800d30(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  void *_Dst;
  longlong lVar13;
  int iVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 auStack_118 [32];
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_e0 [24];
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [16];
  undefined1 *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar11 = (undefined1 *)0x0;
  lVar13 = *(longlong *)(*(longlong *)*param_1 + (longlong)*(int *)(param_1 + 1) * 8);
  local_f0 = lVar13 + 0x118;
  local_e8 = lVar13 + 0x30;
  if (param_2 != 0) {
    iVar2 = *(int *)(lVar13 + 0x228);
    puVar12 = param_1 + 0xf0;
    iVar14 = *(int *)(param_1 + 0xf3);
    if (iVar14 < iVar2) {
      *(int *)(param_1 + 0xf3) = iVar2;
      local_f8 = iVar2 - iVar14;
      if (*(int *)((longlong)param_1 + 0x79c) < iVar2) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(puVar12);
      }
      puVar7 = (undefined8 *)param_1[0xf2];
      if ((undefined8 *)param_1[0xf2] == (undefined8 *)0x0) {
        puVar7 = puVar12;
      }
      _guard_xfg_dispatch_icall_nop(puVar7 + iVar14,0,(longlong)local_f8 << 3);
    }
    else if ((iVar2 < iVar14) && (iVar2 != iVar14)) {
      *(int *)(param_1 + 0xf3) = iVar2;
      FUN_142437d80(puVar12);
    }
    puVar10 = puVar11;
    puVar15 = puVar11;
    if (0 < iVar2) {
      do {
        iVar14 = (int)puVar10;
        if ((iVar14 < 0) || (*(int *)(param_2 + 0x28) <= iVar14)) {
LAB_142800e5c:
          lVar16 = *(longlong *)(lVar13 + 0x220);
          if (*(longlong *)(lVar13 + 0x220) == 0) {
            lVar16 = lVar13 + 0x170;
          }
          puVar7 = (undefined8 *)param_1[0xf2];
          if ((undefined8 *)param_1[0xf2] == (undefined8 *)0x0) {
            puVar7 = puVar12;
          }
          puVar7[(longlong)puVar15] = lVar16 + (longlong)iVar14 * 0x58;
        }
        else {
          lVar16 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar16 = param_2 + 0x10;
          }
          lVar16 = *(longlong *)(lVar16 + (longlong)puVar15 * 8);
          if ((lVar16 == 0) || (*(int *)(lVar16 + 0x54) != *(int *)(lVar13 + 0x16c)))
          goto LAB_142800e5c;
          puVar7 = (undefined8 *)param_1[0xf2];
          if ((undefined8 *)param_1[0xf2] == (undefined8 *)0x0) {
            puVar7 = puVar12;
          }
          puVar7[(longlong)puVar15] = lVar16;
        }
        puVar15 = puVar15 + 1;
        puVar10 = (undefined1 *)(ulonglong)(iVar14 + 1);
      } while ((longlong)puVar15 < (longlong)iVar2);
    }
  }
  local_78 = *(int *)(param_1 + 0xf3);
  lVar13 = (longlong)local_78;
  puVar12 = (undefined8 *)param_1[0xf2];
  local_80 = (undefined1 *)0x0;
  if (local_78 == 0) {
    local_74 = 0;
  }
  else {
    TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
    ResizeForCopy(local_90,local_78,0);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = param_1 + 0xf0;
    }
    puVar10 = local_90;
    if (local_80 != (undefined1 *)0x0) {
      puVar10 = local_80;
    }
    _guard_xfg_dispatch_icall_nop(puVar10,puVar12,lVar13 << 3);
  }
  iVar2 = local_78;
  puVar10 = local_80;
  local_c0 = local_f0;
  local_b8 = local_e8;
  local_a0 = (undefined1 *)0x0;
  local_c8 = param_1 + 2;
  local_98 = local_78;
  if (local_78 == 0) {
    local_94 = 0;
  }
  else {
    TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
    ResizeForCopy(local_b0,local_78,0);
    puVar15 = local_90;
    if (puVar10 != (undefined1 *)0x0) {
      puVar15 = puVar11;
    }
    puVar11 = local_b0;
    if (local_a0 != (undefined1 *)0x0) {
      puVar11 = local_a0;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar11,(void *)((ulonglong)puVar15 | (ulonglong)puVar10),(longlong)iVar2 << 3);
  }
  if ((DAT_146ac3ac6 == '\0') || (cVar5 = IsInRenderingThread(), cVar5 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      puVar11 = local_a0;
      lVar13 = (longlong)local_98;
      local_70 = local_c8;
      local_68 = local_c0;
      local_60 = local_b8;
      local_48 = (undefined1 *)0x0;
      local_40 = local_98;
      if (local_98 == 0) {
        local_3c = 0;
      }
      else {
        TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
        ResizeForCopy(local_58,local_98,0);
        puVar10 = local_b0;
        if (puVar11 != (undefined1 *)0x0) {
          puVar10 = puVar11;
        }
        puVar11 = local_58;
        if (local_48 != (undefined1 *)0x0) {
          puVar11 = local_48;
        }
        _guard_xfg_dispatch_icall_nop(puVar11,puVar10,lVar13 << 3);
      }
      uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_1427f2a60(&local_70,uVar8);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      plVar9 = (longlong *)FUN_1427f9170(local_e0,0,0xff);
      puVar11 = local_a0;
      lVar13 = *plVar9;
      *(undefined8 **)(lVar13 + 0x10) = local_c8;
      *(longlong *)(lVar13 + 0x18) = local_c0;
      *(longlong *)(lVar13 + 0x20) = local_b8;
      *(undefined8 *)(lVar13 + 0x38) = 0;
      lVar16 = (longlong)local_98;
      *(int *)(lVar13 + 0x40) = local_98;
      if (local_98 == 0) {
        *(undefined4 *)(lVar13 + 0x44) = 0;
      }
      else {
        TArray<FRHIUnorderedAccessView_*,TInlineAllocator<2,TSizedDefaultAllocator<32>_>_>::
        ResizeForCopy((void *)(lVar13 + 0x28),local_98,0);
        puVar10 = local_b0;
        if (puVar11 != (undefined1 *)0x0) {
          puVar10 = puVar11;
        }
        _Dst = *(void **)(lVar13 + 0x38);
        if (*(void **)(lVar13 + 0x38) == (void *)0x0) {
          _Dst = (void *)(lVar13 + 0x28);
        }
        _guard_xfg_dispatch_icall_nop(_Dst,puVar10,lVar16 << 3);
      }
      lVar13 = *plVar9;
      lVar4 = plVar9[2];
      lVar16 = plVar9[1];
      lVar3 = *(longlong *)(lVar13 + 0x50);
      piVar1 = (int *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_f0 = lVar3;
      FUN_1408cb090(lVar13,lVar16,(int)lVar4,1);
      if (lVar3 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(local_f0);
        }
      }
    }
  }
  else {
    uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_1427f2a60(&local_c8,uVar8);
  }
  if (local_a0 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0xf4) = 1;
  if (local_80 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142801190 FUN_142801190 body=105 status=ok
// SIG undefined FUN_142801190(void)

void FUN_142801190(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      lVar1 = 0;
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_2 + 0x860))) {
        lVar1 = (longlong)iVar2 * 0x38 + *(longlong *)(param_2 + 0x858);
      }
      FUN_142800d30((longlong)iVar2 * 0x7a8 + *(longlong *)(param_1 + 0xe0),lVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xe8));
  }
  return;
}



// FUNCTION 142801200 Initialize body=328 status=ok
// SIG undefined Initialize(void)

void USoundGroups::Initialize(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint *local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  uint local_20;
  undefined4 local_1c;
  
  piVar5 = (int *)0x0;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_48 = local_res8;
    piVar3 = piVar5;
    piVar2 = piVar5;
    do {
      local_res8[0] = (uint)*(byte *)((longlong)piVar3 + *(longlong *)(param_1 + 0x28));
      local_40 = (undefined1 *)((longlong)(int)piVar2 * 0x20 + *(longlong *)(param_1 + 0x28));
      TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_const_&>_>
                (param_1 + 0x38,local_res10,&local_48,0);
      uVar4 = (int)piVar2 + 1;
      piVar2 = (int *)(ulonglong)uVar4;
      piVar3 = piVar3 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    piVar3 = *(int **)(param_1 + 0x78);
    if (*(int **)(param_1 + 0x78) == (int *)0x0) {
      piVar3 = (int *)(param_1 + 0x70);
    }
    iVar1 = *piVar3;
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x38));
        if (*piVar3 == 0) {
          if (iVar1 != -1) goto LAB_1428012d5;
          break;
        }
        iVar1 = piVar3[10];
      } while (iVar1 != -1);
    }
  }
  piVar3 = piVar5;
LAB_1428012d5:
  piVar2 = piVar3 + 2;
  if (piVar3 == (int *)0x0) {
    piVar2 = piVar5;
  }
  if (piVar2 == (int *)0x0) {
    local_20 = local_20 & 0xfffffffe;
    local_48 = local_res8;
    local_40 = local_38;
    local_res8[0] = 0;
    local_1c = 0;
    local_38[0] = 0;
    local_30 = 0;
    local_28 = 0;
    TSet<TTuple<enum_ESoundGroup,FSoundGroup>,TDefaultMapHashableKeyFuncs<enum_ESoundGroup,FSoundGroup,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_ESoundGroup_&&,FSoundGroup_&&>_>
              (param_1 + 0x38,local_res10,&local_48,0);
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142801350 InsertChildNode body=129 status=ok
// SIG undefined InsertChildNode(void)

void USoundNode::InsertChildNode(longlong *param_1,int param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (**(code **)(*param_1 + 0x2c0))();
  if ((int)param_1[6] < iVar1) {
    iVar1 = (int)param_1[6];
    *(int *)(param_1 + 6) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar1);
    }
    _Src = (void *)(param_1[5] + (longlong)param_2 * 8);
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar1 - param_2) << 3);
    *(undefined8 *)((longlong)param_2 * 8 + param_1[5]) = 0;
  }
  return;
}



// FUNCTION 1428013e0 InsertChildNode body=116 status=ok
// SIG undefined InsertChildNode(void)

void USoundNodeConcatenator::InsertChildNode(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  
  USoundNode::InsertChildNode(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  _Src = (void *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar1 - param_2) << 2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4) = 0x3f800000;
  return;
}



// FUNCTION 142801460 InsertChildNode body=151 status=ok
// SIG undefined InsertChildNode(void)

void USoundNodeDistanceCrossFade::InsertChildNode(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  USoundNode::InsertChildNode(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x38,iVar1);
  }
  _Src = (void *)(*(longlong *)(param_1 + 0x38) + lVar3 * 0x14);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x14),_Src,(longlong)(iVar1 - param_2) * 0x14);
  lVar2 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(lVar2 + lVar3 * 0x14) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x14) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x14) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar3 * 0x14) = 0x3f800000;
  return;
}



// FUNCTION 142801500 InsertChildNode body=189 status=ok
// SIG undefined InsertChildNode(void)

void USoundNodeGroupControl::InsertChildNode(longlong param_1,int param_2)

{
  int iVar1;
  void *_Src;
  
  FixGroupSizesArray();
  if (param_2 < *(int *)(param_1 + 0x40)) {
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
    }
    _Src = (void *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4);
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar1 - param_2) << 2);
    *(undefined4 *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 0x38)) = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 4) = 1;
  }
  USoundNode::InsertChildNode(param_1,param_2);
  return;
}



// FUNCTION 1428015c0 InsertChildNode body=198 status=ok
// SIG undefined InsertChildNode(void)

void USoundNodeRandom::InsertChildNode(longlong param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  FixWeightsArray();
  FixHasBeenUsedArray(param_1);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  pvVar2 = (void *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)pvVar2 + 4),pvVar2,(longlong)(iVar1 - param_2) << 2);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4) = 0x3f800000;
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  pvVar2 = (void *)(*(longlong *)(param_1 + 0x58) + lVar3);
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar2 + 1),pvVar2,(longlong)(iVar1 - param_2))
  ;
  *(undefined1 *)(lVar3 + *(longlong *)(param_1 + 0x58)) = 0;
  USoundNode::InsertChildNode(param_1,param_2);
  return;
}



// FUNCTION 142801690 InvalidateCompressedData body=46 status=ok
// SIG undefined InvalidateCompressedData(void)

void USoundWave::InvalidateCompressedData(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  
  puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0x1b0) = *puVar4;
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  FFormatContainer::FlushData(param_1 + 0x1c0);
  return;
}



// FUNCTION 1428016f0 IsActive body=13 status=ok
// SIG undefined IsActive(void)

undefined8 FSoundEffectBase::IsActive(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 100) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar2 >> 8),uVar1 != 0);
}



// FUNCTION 142801730 FUN_142801730 body=454 status=ok
// SIG undefined FUN_142801730(void)

undefined1 FUN_142801730(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 0x2d0) != 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
    local_38 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2d8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 0x2d8);
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar7 = local_38, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              local_38 = *(longlong **)(param_1 + 0x2d0);
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_30 = plVar7;
      FUN_141899f20(DAT_1469f4590,&local_28,&local_38);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        LOCK();
        plVar2 = plVar7 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (local_28 != 0) {
        puVar6 = (undefined8 *)FUN_14183ac60(local_28,local_18);
        uVar4 = (**(code **)(*(longlong *)*puVar6 + 200))();
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_10 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar1 = (int *)((longlong)local_10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142801910 IsLooping body=28 status=ok
// SIG undefined IsLooping(void)

bool USoundBase::IsLooping(longlong *param_1)

{
  float extraout_XMM0_Da;
  
  (**(code **)(*param_1 + 0x2a0))();
  return 10000.0 <= extraout_XMM0_Da;
}



// FUNCTION 142801930 IsParentPreset body=8 status=ok
// SIG undefined IsParentPreset(void)

bool FSoundEffectBase::IsParentPreset(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x58) == param_2;
}



// FUNCTION 142801950 FUN_142801950 body=188 status=ok
// SIG undefined FUN_142801950(void)

ulonglong FUN_142801950(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = IStreamingManager::Get();
  plVar3 = (longlong *)UNiagaraSystem::GetEffectType(uVar2);
  uVar4 = (**(code **)(*plVar3 + 0xb0))(plVar3,param_1);
  if (((char)uVar4 == '\0') && (*(char *)(param_1 + 0xb5) == '\0')) {
    *(undefined1 *)(param_1 + 0xb5) = 1;
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_1427f6320;
    uVar4 = FUN_1422f8a30(local_58,local_res8);
  }
  if (*(char *)(param_1 + 0xb5) == '\x02') {
    uVar4 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0xbc);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0xbc) = 0;
    }
    else {
      uVar4 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142801a20 FUN_142801a20 body=216 status=ok
// SIG undefined FUN_142801a20(void)

ulonglong FUN_142801a20(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong in_RAX;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  if ((*(longlong *)(param_1 + 0x2d0) != 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
    plVar8 = (longlong *)0x0;
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x2d8) + 8);
    LOCK();
    uVar3 = *puVar1;
    if (uVar3 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar3;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      plVar5 = *(longlong **)(param_1 + 0x2d8);
      plVar9 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar8, !bVar10) {
          LOCK();
          bVar10 = iVar7 == (int)plVar5[1];
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar9 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              plVar8 = *(longlong **)(param_1 + 0x2d0);
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(plVar5 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
      bVar4 = *(byte *)((longlong)plVar8 + 0x35c);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      return (ulonglong)bVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142801b00 IsStreaming body=12 status=ok
// SIG undefined IsStreaming(void)

byte USoundWave::IsStreaming(longlong param_1)

{
  return *(byte *)(param_1 + 0xb3) >> 1 & 1;
}



// FUNCTION 142801b10 IsVirtualizeWhenSilent body=10 status=ok
// SIG undefined IsVirtualizeWhenSilent(void)

byte USoundBase::IsVirtualizeWhenSilent(longlong param_1)

{
  return *(byte *)(param_1 + 0x30) >> 6 & 1;
}



// FUNCTION 142801b20 FUN_142801b20 body=74 status=ok
// SIG undefined FUN_142801b20(void)

ulonglong FUN_142801b20(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar3 + *(int *)(param_1 + 0x30);
  while( true ) {
    if (plVar3 == plVar1) {
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) break;
    plVar3 = plVar3 + 1;
  }
  FUN_1417510e0(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000142801b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2);
  return uVar4;
}



// FUNCTION 142801b90 FUN_142801b90 body=404 status=ok
// SIG undefined FUN_142801b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142801b90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  undefined1 local_170 [352];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FWidgetPath::FWidgetPath(local_170);
  plVar2 = *(longlong **)(param_1 + 0x2e0);
  local_190 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar6 = iVar4 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = local_190, !bVar6) {
      LOCK();
      bVar6 = iVar4 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar6) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          local_190 = *(longlong **)(param_1 + 0x2d8);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar2 = plVar5 + 1;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  local_188 = plVar5;
  FUN_14189a110(DAT_1469f4590,&local_180,&local_190,local_170);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    LOCK();
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (local_180 == 0) {
    bVar6 = false;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(local_180 + 0x498) + 0x68))();
    bVar6 = iVar4 == 0;
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_178 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  FUN_140458830(local_170);
  return bVar6;
}



// FUNCTION 142801d30 FUN_142801d30 body=243 status=ok
// SIG undefined FUN_142801d30(void)

undefined1 FUN_142801d30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
    lVar3 = *param_2;
    lVar6 = *(longlong *)(param_1 + 600);
    if (*(longlong *)(param_1 + 600) == 0) {
      lVar6 = param_1 + 0x250;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                             (longlong)*(int *)(param_1 + 0x260) - 1U) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x218);
      do {
        lVar7 = (longlong)iVar5;
        if (*(longlong *)(lVar6 + lVar7 * 0x28) == lVar3) {
          if ((iVar5 != -1) && (lVar6 = lVar6 + lVar7 * 0x28, lVar6 != 0)) {
            uVar8 = *(undefined1 *)(lVar6 + 0x18);
            goto LAB_142801dab;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar5 != -1);
    }
  }
  uVar8 = 0;
LAB_142801dab:
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
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
    return uVar8;
  }
  return uVar8;
}



// FUNCTION 142801e30 FUN_142801e30 body=681 status=ok
// SIG undefined FUN_142801e30(void)

void FUN_142801e30(longlong param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  int local_20;
  
  cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  if (cVar3 == '\0') {
    plVar9 = (longlong *)FUN_1405ec200(param_1 + 0x38);
    plVar12 = (longlong *)0x0;
    if (plVar9 == (longlong *)0x0) {
LAB_142802068:
      plVar9 = plVar12;
    }
    else {
      lVar10 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142802068;
    }
    *(longlong **)(param_1 + 0x60) = plVar9;
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    if (param_2 != '\0') {
      iVar1 = *(int *)((longlong)plVar9 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar11 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar11;
        plVar12 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18);
      }
      *(uint *)(plVar12 + 1) = *(uint *)(plVar12 + 1) | 0x40000000;
      plVar9 = *(longlong **)(param_1 + 0x60);
    }
    lVar10 = *plVar9;
    uVar8 = 0;
    goto LAB_1428020c0;
  }
  lVar5 = FWeakObjectPtr::Get();
  lVar10 = 0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x40)) && (*(longlong *)(param_1 + 0x48) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 0x38,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x40) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x38);
      if (lVar5 != 0) goto LAB_142801ece;
    }
LAB_142801f04:
    lVar5 = lVar10;
  }
  else {
LAB_142801ece:
    lVar6 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142801f04;
  }
  *(longlong *)(param_1 + 0x60) = lVar5;
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 10 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    FSoftObjectPath::GetLongPackageName(param_1 + 0x48,&local_28);
    if (1 < local_20) {
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
      local_38 = 0;
      local_30 = 0;
      puVar7 = (undefined8 *)operator_new(0x28,&local_38);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_1451b9870;
        FWeakObjectPtr::operator=(puVar7 + 1,param_1);
        puVar7[2] = FUN_142806590;
        *(char *)(puVar7 + 3) = param_2;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[4] = uVar8;
        *puVar7 = &PTR_FUN_1451b98b8;
      }
      FUN_1416fec20(&local_28,&local_38,0,0,0xffffffff);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else if (param_2 != '\0') {
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar11;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
    }
    *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | 0x40000000;
  }
  plVar9 = *(longlong **)(param_1 + 0x60);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  lVar10 = *plVar9;
  uVar8 = 1;
LAB_1428020c0:
  (**(code **)(lVar10 + 0x38))(plVar9,param_1,uVar8);
  return;
}



// FUNCTION 1428020e0 FUN_1428020e0 body=260 status=ok
// SIG undefined FUN_1428020e0(void)

void FUN_1428020e0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == '\0') {
    FUN_140806740(param_1 + 0x160);
    return;
  }
  local_18 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x2d8);
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar6 = iVar4 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = local_18, !bVar6) {
      LOCK();
      bVar6 = iVar4 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar6) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          local_18 = *(longlong **)(param_1 + 0x2d0);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_10 = plVar5;
  FUN_142710cc0(param_1 + 0x160,&local_18);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 1428021f0 MakeNewConcurrencyGroupAndSound body=268 status=ok
// SIG undefined MakeNewConcurrencyGroupAndSound(void)

int FSoundConcurrencyManager::MakeNewConcurrencyGroupAndSound
              (undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  lVar3 = operator_new(0x540);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = FActiveSound::FActiveSound(lVar3,param_3);
  }
  *(undefined8 *)(lVar4 + 0x40) = *param_1;
  *param_2 = lVar4;
  FUN_142233c00(param_3);
  lVar3 = *param_2;
  local_24 = DAT_146534e70;
  DAT_146534e70 = DAT_146534e70 + 1;
  local_38 = 0;
  local_30 = 0;
  puVar5 = (undefined4 *)FUN_142233c00(lVar3);
  uVar1 = local_30;
  lVar4 = (longlong)(int)local_30;
  local_28 = *puVar5;
  local_20 = (uint)*(byte *)(puVar5 + 2);
  iVar2 = (int)local_30 + 1;
  local_1c = 0;
  local_30 = CONCAT44(local_30._4_4_,iVar2);
  if (local_30._4_4_ < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar1 & 0xffffffff);
  }
  *(longlong *)(local_38 + lVar4 * 8) = lVar3;
  *(int *)(lVar3 + 0x48) = local_24;
  local_res8[0] = local_24;
  local_48 = local_res8;
  local_40 = &local_38;
  FUN_1427ebe80(param_1 + 0x29,local_res10,&local_48,0);
  iVar2 = local_24;
  if (local_38 != 0) {
    FMemory::Free();
  }
  return iVar2;
}



// FUNCTION 142802300 Normalize body=122 status=ok
// SIG undefined Normalize(void)

void FSpeedTreeWind::Normalize(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + param_2[2] * param_2[2]);
  if (fVar3 != 0.0) {
    fVar3 = 1.0 / fVar3;
    *param_2 = fVar3 * fVar2;
    param_2[1] = fVar3 * fVar1;
    param_2[2] = fVar3 * param_2[2];
    return;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}



// FUNCTION 142802390 NotifyWaveInstanceFinished body=472 status=ok
// SIG undefined NotifyWaveInstanceFinished(void)

undefined8 USoundNodeConcatenator::NotifyWaveInstanceFinished(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  int local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  longlong *local_48;
  int *local_40;
  
  lVar3 = *(longlong *)(param_2 + 0x60);
  local_res18[0] = FNotifyBufferFinishedHooks::GetHashForNode(param_2 + 0x50,param_1);
  if (*(int *)(lVar3 + 0x4c0) != *(int *)(lVar3 + 0x4ec)) {
    lVar5 = *(longlong *)(lVar3 + 0x4f8);
    if (*(longlong *)(lVar3 + 0x4f8) == 0) {
      lVar5 = lVar3 + 0x4f0;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)
                              ((int)((ulonglong)local_res18[0] >> 0x20) * 0x17 + (int)local_res18[0]
                              ) & (longlong)*(int *)(lVar3 + 0x500) - 1U) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(lVar3 + 0x4b8);
      do {
        piVar8 = (int *)(lVar5 + (longlong)iVar4 * 0x18);
        if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x18) == local_res18[0]) {
          if (iVar4 != -1) goto LAB_142802443;
          break;
        }
        iVar4 = piVar8[4];
      } while (iVar4 != -1);
    }
  }
  piVar8 = (int *)0x0;
LAB_142802443:
  piVar6 = piVar8 + 2;
  if (piVar8 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 == (int *)0x0) {
    plVar1 = (longlong *)(lVar3 + 0x508);
    iVar4 = *(int *)(lVar3 + 0x510);
    *(int *)(lVar3 + 0x510) = iVar4 + 0x10;
    if (*(int *)(lVar3 + 0x514) < iVar4 + 0x10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    lVar5 = *plVar1;
    *(undefined8 *)(iVar4 + lVar5) = 0;
    ((undefined8 *)(iVar4 + lVar5))[1] = 0;
    local_48 = local_res18;
    local_40 = local_res8;
    local_res8[0] = iVar4;
    FUN_141f0b300((longlong *)(lVar3 + 0x4b8),local_res10,&local_48,0);
    *(undefined4 *)((longlong)local_res8[0] + *plVar1) = 1;
  }
  else {
    local_res8[0] = *piVar6;
  }
  piVar8 = (int *)((longlong)(local_res8[0] + 4) + *(longlong *)(lVar3 + 0x508));
  iVar2 = piVar8[1];
  iVar4 = *piVar8;
  piVar8[1] = iVar2 + 1;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
  if ((iVar4 < (int)*(uint *)(param_1 + 0x30)) && (iVar2 + 1 == piVar8[2])) {
    iVar4 = iVar4 + 1;
    *piVar8 = iVar4;
    if (iVar4 < *(int *)(param_1 + 0x30)) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8) != 0) break;
        iVar4 = iVar4 + 1;
        *piVar8 = iVar4;
      } while (iVar4 < *(int *)(param_1 + 0x30));
    }
    piVar8[1] = 0;
    *(uint *)(param_2 + 0xa4) = *(uint *)(param_2 + 0xa4) & 0xfffffff3;
    iVar4 = *piVar8;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
  }
  return CONCAT71((int7)(uVar7 >> 8),iVar4 < (int)uVar7);
}



// FUNCTION 142802570 NotifyWaveInstanceFinished body=652 status=ok
// SIG undefined NotifyWaveInstanceFinished(void)

ulonglong USoundNodeGroupControl::NotifyWaveInstanceFinished(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int iVar14;
  longlong lVar15;
  uint local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  longlong *local_48;
  uint *local_40;
  
  lVar15 = *(longlong *)(param_2 + 0x60);
  local_res20 = FNotifyBufferFinishedHooks::GetHashForNode(param_2 + 0x50,param_1);
  puVar11 = (uint *)0x0;
  uVar5 = 0;
  if (*(int *)(lVar15 + 0x4c0) != *(int *)(lVar15 + 0x4ec)) {
    lVar12 = *(longlong *)(lVar15 + 0x4f8);
    if (*(longlong *)(lVar15 + 0x4f8) == 0) {
      lVar12 = lVar15 + 0x4f0;
    }
    uVar4 = *(uint *)(lVar12 + ((longlong)
                                ((int)((ulonglong)local_res20 >> 0x20) * 0x17 + (int)local_res20) &
                               (longlong)*(int *)(lVar15 + 0x500) - 1U) * 4);
    if (uVar4 != 0xffffffff) {
      lVar12 = *(longlong *)(lVar15 + 0x4b8);
      do {
        puVar8 = (uint *)(lVar12 + (longlong)(int)uVar4 * 0x18);
        if (*(longlong *)(lVar12 + (longlong)(int)uVar4 * 0x18) == local_res20) {
          if (uVar4 != 0xffffffff) goto LAB_142802613;
          break;
        }
        uVar4 = puVar8[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar8 = puVar11;
LAB_142802613:
  puVar6 = puVar8 + 2;
  if (puVar8 == (uint *)0x0) {
    puVar6 = puVar11;
  }
  if (puVar6 == (uint *)0x0) {
    plVar1 = (longlong *)(lVar15 + 0x508);
    uVar4 = *(uint *)(lVar15 + 0x510);
    *(uint *)(lVar15 + 0x510) = uVar4 + 8;
    if (*(int *)(lVar15 + 0x514) < (int)(uVar4 + 8)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,uVar4);
    }
    *(undefined8 *)((longlong)(int)uVar4 + *plVar1) = 0;
    local_48 = &local_res20;
    local_40 = local_res10;
    local_res10[0] = uVar4;
    FUN_141f0b300((longlong *)(lVar15 + 0x4b8),local_res18,&local_48,0);
    *(undefined4 *)((longlong)(int)local_res10[0] + *plVar1) = 1;
  }
  else {
    local_res10[0] = *puVar6;
  }
  local_res10[0] = local_res10[0] + 4;
  lVar12 = (longlong)(int)local_res10[0];
  lVar15 = *(longlong *)(lVar15 + 0x508);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146534e20,local_res18,param_1);
  uVar7 = (ulonglong)local_res18[0];
  puVar8 = puVar11;
  if (local_res18[0] != -1) {
    puVar8 = (uint *)(uVar7 * 0x20 + DAT_146534e20);
  }
  puVar6 = puVar8 + 2;
  if (puVar8 == (uint *)0x0) {
    puVar6 = puVar11;
  }
  if (puVar6 != (uint *)0x0) {
    lVar2 = *(longlong *)puVar6;
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    puVar13 = (ulonglong *)((longlong)*(int *)(lVar12 + lVar15) * 0x50 + lVar2);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(puVar13,local_res10,uVar3);
    if (local_res10[0] == 0xffffffff) {
      uVar7 = 0xffffffffffffffff;
      puVar8 = puVar11;
    }
    else {
      uVar7 = *puVar13;
      puVar8 = (uint *)(uVar7 + (longlong)(int)local_res10[0] * 0x18);
    }
    puVar9 = puVar8 + 2;
    if (puVar8 == (uint *)0x0) {
      puVar9 = puVar11;
    }
    if (puVar9 != (uint *)0x0) {
      if ((int)*puVar9 < 2) {
        if ((int)puVar13[1] - *(int *)((longlong)puVar13 + 0x34) < 2) {
          lVar15 = (longlong)(int)puVar6[2];
          iVar14 = 0;
          puVar6 = puVar11;
          puVar8 = puVar11;
          if (1 < lVar15) {
            lVar12 = (lVar15 - 2U >> 1) + 1;
            puVar8 = (uint *)(lVar12 * 2);
            piVar10 = (int *)(lVar2 + 8);
            do {
              uVar5 = (int)puVar11 + (*piVar10 - piVar10[0xb]);
              puVar11 = (uint *)(ulonglong)uVar5;
              puVar6 = (uint *)(ulonglong)(uint)((int)puVar6 + (piVar10[0x14] - piVar10[0x1f]));
              lVar12 = lVar12 + -1;
              piVar10 = piVar10 + 0x28;
            } while (lVar12 != 0);
          }
          if ((longlong)puVar8 < lVar15) {
            iVar14 = *(int *)(lVar2 + 8 + (longlong)puVar8 * 0x50) -
                     *(int *)(lVar2 + 0x34 + (longlong)puVar8 * 0x50);
          }
          if (uVar5 + (int)puVar6 + iVar14 == 1) {
            uVar7 = TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>,0>,FDefaultSetAllocator>
                    ::Remove(&DAT_146534e20,param_1);
            goto LAB_1428027eb;
          }
        }
        uVar7 = TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
                ::Remove(puVar13,uVar3);
      }
      else {
        uVar5 = *puVar9 - 1;
        uVar7 = (ulonglong)uVar5;
        *puVar9 = uVar5;
      }
    }
  }
LAB_1428027eb:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 142802800 NotifyWaveInstanceFinished body=412 status=ok
// SIG undefined NotifyWaveInstanceFinished(void)

undefined8 USoundNodeLooping::NotifyWaveInstanceFinished(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_38;
  uint *local_30;
  
  lVar2 = *(longlong *)(param_2 + 0x60);
  local_res20 = FNotifyBufferFinishedHooks::GetHashForNode(param_2 + 0x50,param_1);
  if (*(int *)(lVar2 + 0x4c0) != *(int *)(lVar2 + 0x4ec)) {
    lVar4 = *(longlong *)(lVar2 + 0x4f8);
    if (*(longlong *)(lVar2 + 0x4f8) == 0) {
      lVar4 = lVar2 + 0x4f0;
    }
    uVar3 = *(uint *)(lVar4 + ((longlong)
                               ((int)((ulonglong)local_res20 >> 0x20) * 0x17 + (int)local_res20) &
                              (longlong)*(int *)(lVar2 + 0x500) - 1U) * 4);
    if (uVar3 != 0xffffffff) {
      lVar4 = *(longlong *)(lVar2 + 0x4b8);
      do {
        puVar6 = (uint *)(lVar4 + (longlong)(int)uVar3 * 0x18);
        if (*(longlong *)(lVar4 + (longlong)(int)uVar3 * 0x18) == local_res20) {
          if (uVar3 != 0xffffffff) goto LAB_1428028a3;
          break;
        }
        uVar3 = puVar6[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  puVar6 = (uint *)0x0;
LAB_1428028a3:
  plVar1 = (longlong *)(lVar2 + 0x508);
  puVar5 = puVar6 + 2;
  if (puVar6 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  if (puVar5 == (uint *)0x0) {
    uVar3 = *(uint *)(lVar2 + 0x510);
    *(uint *)(lVar2 + 0x510) = uVar3 + 8;
    if (*(int *)(lVar2 + 0x514) < (int)(uVar3 + 8)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,uVar3);
    }
    *(undefined8 *)((longlong)(int)uVar3 + *plVar1) = 0;
    local_38 = &local_res20;
    local_30 = local_res10;
    local_res10[0] = uVar3;
    FUN_141f0b300((longlong *)(lVar2 + 0x4b8),local_res18,&local_38,0);
    piVar7 = (int *)((longlong)(int)local_res10[0] + *plVar1);
    *piVar7 = 1;
    lVar4 = *(longlong *)(lVar2 + 0x508);
  }
  else {
    local_res10[0] = *puVar5;
    lVar4 = *plVar1;
    piVar7 = (int *)(lVar4 + (int)local_res10[0]);
  }
  local_res10[0] = local_res10[0] + 4;
  piVar8 = (int *)((int)local_res10[0] + lVar4);
  if (*piVar7 == 0) {
    if (((*(byte *)(param_1 + 0x3c) & 1) == 0) &&
       (*piVar8 = *piVar8 + 1, *(int *)(param_1 + 0x38) <= *piVar8)) {
      return 0;
    }
    ResetChildren(param_1,local_res20,lVar2);
    *(uint *)(param_2 + 0xa4) = *(uint *)(param_2 + 0xa4) & 0xfffffff3;
    return 1;
  }
  return 0;
}



// FUNCTION 1428029a0 FUN_1428029a0 body=1117 status=ok
// SIG undefined FUN_1428029a0(void)

undefined8 FUN_1428029a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  undefined1 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined1 *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  char local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined8 local_1b0;
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
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  uint local_124;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8;
  undefined8 local_f0;
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
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  
  local_1e4 = local_1e4 & 0xffffff00;
  local_298[0] = 1;
  local_290 = 0;
  local_288 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_298);
  FUN_140438c20(local_298);
  local_2f8 = *(longlong *)(param_4 + 0x18);
  local_2f0 = *(undefined8 *)(param_4 + 0x20);
  local_2e8 = *(longlong **)(param_4 + 0x28);
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
    UNLOCK();
  }
  cVar7 = FKey::IsValid(&local_2f8);
  if (cVar7 == '\0') {
    local_64 = local_64 & 0xffffff00;
    local_118[0] = 0;
    local_110 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0x20702;
    FUN_140439160(param_1 + 0x10,local_118);
    FUN_140438c20(local_118);
  }
  else {
    local_2e0 = &local_2f8;
    local_res8[0] = 1;
    local_2d8 = local_res8;
    FUN_1427ecc40(param_1 + 200,local_res10,&local_2e0,0);
    if (*(longlong *)(param_1 + -0x100) != 0) {
      if (((*(int *)(param_1 + -0x30) != 0) && (*(longlong **)(param_1 + -0x38) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x38) + 0x18))(), cVar7 != '\0')) {
        plVar10 = *(longlong **)(param_4 + 0x28);
        uVar2 = *(undefined4 *)(param_4 + 0x38);
        local_2d0 = *(undefined8 *)(param_4 + 0x18);
        local_2c8 = *(undefined8 *)(param_4 + 0x20);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        uVar4 = *(undefined4 *)(param_4 + 0xc);
        plVar9 = (longlong *)0x0;
        if (*(int *)(param_1 + -0x30) != 0) {
          plVar9 = *(longlong **)(param_1 + -0x38);
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_2c0 = plVar10;
        cVar7 = (**(code **)(*plVar9 + 0x38))(plVar9,uVar4,&local_2d0,uVar2);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar10 + 1;
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        if (cVar7 != '\0') goto LAB_142802d97;
      }
      dVar6 = DAT_1464a97d0;
      uVar11 = *(uint *)(param_4 + 0x38);
      if (local_2f8 == DAT_1469ea420) {
        uVar11 = uVar11 ^ 0x80000000;
      }
      local_2b8 = local_2f8;
      local_2b0 = local_2f0;
      plVar10 = (longlong *)(param_1 + -0x150);
      if (param_1 == 0x158) {
        plVar10 = (longlong *)0x0;
      }
      local_2a8 = local_2e8;
      if (local_2e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
        UNLOCK();
      }
      uVar2 = *(undefined4 *)(param_4 + 0xc);
      lVar5 = **(longlong **)(param_1 + -0x100);
      uVar8 = FKey::IsGamepadKey(&local_2f8);
      cVar7 = (**(code **)(lVar5 + 0x48))
                        (*(undefined8 *)(param_1 + -0x100),plVar10,uVar2,&local_2b8,uVar11,
                         (float)dVar6,1,uVar8);
      if (cVar7 == '\0') {
        local_124 = local_124 & 0xffffff00;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_158 = 0;
        local_150 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0x20702;
        local_1d8[0] = cVar7;
        FUN_140439160(param_1 + 0x10,local_1d8);
        FUN_140438c20(local_1d8);
      }
    }
  }
LAB_142802d97:
  FUN_140438260(param_2,param_1 + 0x10);
  plVar10 = local_2e8;
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2e8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_2e8)(local_2e8);
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
  return param_2;
}



// FUNCTION 142802e00 FUN_142802e00 body=686 status=ok
// SIG undefined FUN_142802e00(void)

char * FUN_142802e00(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_88 [16];
  char local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    *param_2 = '\x01';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    return param_2;
  }
  iVar5 = 1;
  if (*(longlong *)(param_1 + -0x100) != 0) {
    plVar8 = (longlong *)(param_1 + -0x150);
    piVar7 = (int *)(**(code **)(*plVar8 + 0x20))(plVar8,local_88);
    if ((*piVar7 != DAT_1468b5ca0) || (iVar5 = 1, piVar7[1] != DAT_1468b5ca4)) {
      lVar1 = **(longlong **)(param_1 + -0x100);
      uVar3 = (**(code **)(*plVar8 + 200))(plVar8);
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if (param_1 == 0x158) {
        plVar8 = (longlong *)0x0;
      }
      iVar5 = (**(code **)(lVar1 + 0xa0))(*(undefined8 *)(param_1 + -0x100),plVar8,uVar4,uVar3);
    }
  }
  if ((((DAT_146b17150 != 0) && (lVar1 = *(longlong *)(DAT_146b17150 + 0x7b0), lVar1 != 0)) &&
      (iVar5 != 0)) && (plVar8 = *(longlong **)(lVar1 + 200), plVar8 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar8[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar8 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)plVar8[1];
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar8 != (longlong *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0xc0);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x90))(plVar2,local_78,param_3,param_4);
            if (local_78[0] != '\0') {
              *param_2 = local_78[0];
              *(undefined8 *)(param_2 + 8) = local_70;
              *(undefined8 *)(param_2 + 0x10) = local_68;
              *(undefined8 *)(param_2 + 0x18) = local_60;
              *(undefined8 *)(param_2 + 0x20) = local_58;
              *(undefined8 *)(param_2 + 0x28) = local_50;
              *(undefined8 *)(param_2 + 0x30) = local_48;
              *(undefined4 *)(param_2 + 0x38) = local_40;
              local_68 = 0;
              local_70 = 0;
              local_58 = 0;
              local_60 = 0;
              local_48 = 0;
              local_50 = 0;
              FCursorReply::~FCursorReply(local_78);
              LOCK();
              plVar2 = plVar8 + 1;
              lVar1 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar1 != 1) {
                return param_2;
              }
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar7 = (int *)((longlong)plVar8 + 0xc);
              iVar5 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar5 != 1) {
                return param_2;
              }
              (**(code **)(*plVar8 + 8))(plVar8,1);
              return param_2;
            }
            FCursorReply::~FCursorReply(local_78);
          }
          LOCK();
          plVar2 = plVar8 + 1;
          lVar1 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar7 = (int *)((longlong)plVar8 + 0xc);
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar8 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  *param_2 = '\x01';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  *(int *)(param_2 + 0x38) = iVar5;
  return param_2;
}



// FUNCTION 1428030b0 FUN_1428030b0 body=1102 status=ok
// SIG undefined FUN_1428030b0(void)

void FUN_1428030b0(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res10 [8];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  
  if (((*(longlong **)(param_1 + -0x100) == (longlong *)0x0) ||
      (lVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x30))(), lVar5 == 0)) ||
     (lVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x30))(),
     *(longlong *)(lVar5 + 0x1b8) == 0)) {
    (**(code **)(**(longlong **)(DAT_1469f4590 + 0x18) + 0x168))
              (*(longlong **)(DAT_1469f4590 + 0x18),0);
  }
  else {
    plVar1 = *(longlong **)(DAT_1469f4590 + 0x18);
    lVar5 = *plVar1;
    lVar6 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x30))();
    (**(code **)(lVar5 + 0x168))(plVar1,*(undefined8 *)(lVar6 + 0x1b8));
  }
  if (*(char *)(param_1 + 0x1a6) == '\0') {
    fVar13 = param_2[2] * *param_2;
    fVar14 = param_2[2] * param_2[1];
    iVar10 = (int)ROUND(fVar13 + fVar13 + 0.5) >> 1;
    iVar11 = (int)ROUND(fVar14 + fVar14 + 0.5) >> 1;
    piVar7 = (int *)(**(code **)(*(longlong *)(param_1 + -0x150) + 0x20))
                              ((longlong *)(param_1 + -0x150),local_res10);
    if ((*piVar7 != iVar10) || (piVar7[1] != iVar11)) {
      plVar1 = *(longlong **)(param_1 + 0x188);
      local_78 = (longlong *)0x0;
      plVar8 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar1[1];
        bVar12 = iVar3 == 0;
        if (bVar12) {
          *(int *)(plVar1 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (local_78 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar12) {
          LOCK();
          bVar12 = iVar3 == (int)plVar1[1];
          if (bVar12) {
            *(int *)(plVar1 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar12) {
            plVar8 = plVar1;
            if (plVar1 != (longlong *)0x0) {
              local_78 = *(longlong **)(param_1 + 0x180);
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar1[1];
          bVar12 = iVar3 == 0;
          if (bVar12) {
            *(int *)(plVar1 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      plVar1 = plVar8 + 1;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
      }
      local_70 = plVar8;
      FUN_141899f20(DAT_1469f4590,&local_88);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar7 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        LOCK();
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar7 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if ((local_88 != 0) && (*(float *)(local_88 + 0x380) == 0.0)) {
        plVar1 = *(longlong **)(param_1 + 0x188);
        plVar8 = (longlong *)0x0;
        plVar9 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar1[1];
          bVar12 = iVar3 == 0;
          if (bVar12) {
            *(int *)(plVar1 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar12) {
            LOCK();
            bVar12 = iVar3 == (int)plVar1[1];
            if (bVar12) {
              *(int *)(plVar1 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar9 = plVar1;
              if (plVar1 != (longlong *)0x0) {
                plVar8 = *(longlong **)(param_1 + 0x180);
              }
              break;
            }
            LOCK();
            iVar3 = (int)plVar1[1];
            bVar12 = iVar3 == 0;
            if (bVar12) {
              *(int *)(plVar1 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        lVar5 = plVar8[0x6b];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar7 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        if ((char)lVar5 != '\0') {
          fVar13 = param_2[3];
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          *(int *)(param_1 + -0x90) = (int)(longlong)fVar13;
          fVar13 = param_2[4];
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          *(int *)(param_1 + -0x8c) = (int)(longlong)fVar13;
        }
        uVar4 = (**(code **)(**(longlong **)(local_88 + 0x498) + 0x68))();
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        (**(code **)(*(longlong *)(param_1 + -0x158) + 0x20))
                  ((longlong *)(param_1 + -0x158),iVar10,iVar11,uVar4);
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
          piVar7 = (int *)((longlong)local_80 + 0xc);
          iVar11 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  fVar13 = param_2[3];
  fVar14 = param_2[2] * *param_2;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar15 = param_2[2] * param_2[1];
  fVar16 = param_2[4];
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  local_98 = (int)ROUND(fVar13 + fVar13 + 0.5) >> 1;
  local_94 = (int)ROUND(fVar16 + fVar16 + 0.5) >> 1;
  local_90 = (int)ROUND(fVar14 + fVar14 + fVar13 + fVar13 + 0.5) >> 1;
  local_8c = (int)ROUND(fVar15 + fVar15 + fVar16 + fVar16 + 0.5) >> 1;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x170) + 8) != 0) &&
     (cVar2 = FCanvas::HasBatchesToRender(), cVar2 != '\0')) {
    FUN_1427f5f10(*(undefined8 *)(param_1 + 0x170),&local_98);
    local_68 = *(undefined8 *)(param_1 + 0x170);
    local_60 = *(longlong *)(param_1 + 0x178);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_141849a90(param_4,0xffffffff,&local_68);
  }
  return;
}



// FUNCTION 142803510 FUN_142803510 body=370 status=ok
// SIG undefined FUN_142803510(void)

void FUN_142803510(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong **local_res18;
  longlong *local_38;
  longlong *local_30;
  undefined1 *local_28;
  longlong ***ppplStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined1 *)(param_1 + 0x1b9) = 0;
    TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::Empty
              (param_1 + 200,0);
    plVar2 = *(longlong **)(param_1 + -0x100);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      plVar5 = (longlong *)(param_1 + -0x150);
      if (param_1 == 0x158) {
        plVar5 = plVar6;
      }
      (**(code **)(*plVar2 + 0xb8))(plVar2,plVar5);
      plVar2 = *(longlong **)(param_1 + 0x188);
      plVar5 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = plVar6, !bVar7) {
          LOCK();
          bVar7 = iVar4 == (int)plVar2[1];
          if (bVar7) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar7) {
            plVar5 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_1 + 0x180);
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
      local_38 = plVar6;
      local_30 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar5 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      if (local_38 != (longlong *)0x0) {
        local_res18 = &local_38;
        ppplStack_20 = &local_res18;
        local_28 = &LAB_1427f6310;
        local_18 = 0x427f6310;
        uStack_14 = 1;
        uStack_10 = ppplStack_20;
        FUN_14189a880(DAT_1469f4590,&local_18,0);
      }
      plVar2 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
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
  return;
}



// FUNCTION 142803690 FUN_142803690 body=1164 status=ok
// SIG undefined FUN_142803690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142803690(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_348 [32];
  byte local_328 [4];
  byte local_324;
  byte local_323;
  byte local_322;
  byte local_321;
  byte local_320;
  byte local_31f;
  byte local_31e;
  byte local_31d;
  undefined1 local_31c [4];
  undefined8 local_318;
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  undefined1 local_300 [4];
  undefined1 local_2fc [4];
  undefined1 local_2f8 [4];
  undefined1 local_2f4 [4];
  undefined8 *local_2f0;
  byte *local_2e8;
  undefined8 *local_2e0;
  byte *local_2d8;
  undefined8 *local_2d0;
  byte *local_2c8;
  undefined8 *local_2c0;
  byte *local_2b8;
  undefined8 *local_2b0;
  byte *local_2a8;
  undefined8 *local_2a0;
  byte *local_298;
  undefined8 *local_290;
  byte *local_288;
  undefined8 *local_280;
  byte *local_278;
  longlong *local_270;
  longlong *local_268;
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  uint local_1a4;
  undefined1 local_198 [352];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_1a4 = local_1a4 & 0xffffff00;
  plVar9 = (longlong *)0x0;
  local_250 = 0;
  local_248 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_258[0] = 1;
  local_1a8 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_258);
  FUN_140438c20(local_258);
  if (*(int *)(param_3 + 4) == 0) {
    plVar3 = *(longlong **)(param_1 + -0x100);
    if (plVar3 != (longlong *)0x0) {
      plVar7 = (longlong *)(param_1 + -0x150);
      if (param_1 == 0x158) {
        plVar7 = plVar9;
      }
      (**(code **)(*plVar3 + 0xc0))(plVar3,plVar7);
    }
    FSlateApplication::GetModifierKeys(DAT_1469f4590,local_328);
    lVar2 = param_1 + 200;
    local_324 = local_328[0] >> 4 & 1;
    local_2f0 = &DAT_1469ea0f0;
    local_2e8 = &local_324;
    FUN_1427ecc40(lVar2,local_310,&local_2f0,0);
    local_323 = local_328[0] >> 5 & 1;
    local_2e0 = &DAT_1469ea108;
    local_2d8 = &local_323;
    FUN_1427ecc40(lVar2,local_30c,&local_2e0,0);
    local_322 = local_328[0] >> 2 & 1;
    local_2d0 = &DAT_1469ea0c0;
    local_2c8 = &local_322;
    FUN_1427ecc40(lVar2,local_308,&local_2d0,0);
    local_321 = local_328[0] >> 3 & 1;
    local_2c0 = &DAT_1469ea0d8;
    local_2b8 = &local_321;
    FUN_1427ecc40(lVar2,local_304,&local_2c0,0);
    local_320 = local_328[0] & 1;
    local_2b0 = &DAT_1469ea090;
    local_2a8 = &local_320;
    FUN_1427ecc40(lVar2,local_300,&local_2b0,0);
    local_31f = local_328[0] >> 1 & 1;
    local_2a0 = &DAT_1469ea0a8;
    local_298 = &local_31f;
    FUN_1427ecc40(lVar2,local_2fc,&local_2a0,0);
    local_31e = local_328[0] >> 6 & 1;
    local_290 = &DAT_1469ea120;
    local_288 = &local_31e;
    FUN_1427ecc40(lVar2,local_2f8,&local_290,0);
    local_31d = local_328[0] >> 7;
    local_280 = &DAT_1469ea138;
    local_278 = &local_31d;
    FUN_1427ecc40(lVar2,local_2f4,&local_280,0);
    plVar3 = DAT_1469f4590;
    cVar4 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
    if ((cVar4 == '\x01') ||
       (cVar4 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))(), cVar4 == '\x02')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    cVar4 = (**(code **)(*plVar3 + 8))(plVar3);
    if (((cVar4 != '\0') &&
        (cVar4 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x170))(), cVar4 == '\0')) &&
       (bVar10)) {
      plVar7 = *(longlong **)(param_1 + 0x188);
      plVar8 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar7[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar7 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar9, !bVar10) {
          LOCK();
          bVar10 = iVar5 == (int)plVar7[1];
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              plVar9 = *(longlong **)(param_1 + 0x180);
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              plVar8 = plVar7 + 1;
              lVar2 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              plVar8 = plVar7;
              if ((int)lVar2 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(plVar7 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      FWidgetPath::FWidgetPath(local_198);
      local_31c[0] = DAT_1464b9ee8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_270 = plVar9;
      local_268 = plVar8;
      FUN_14189ada0(plVar3,&local_270,local_198,local_31c);
      puVar6 = (undefined8 *)
               (**(code **)(*(longlong *)(param_1 + -0x150) + 0x20))
                         ((longlong *)(param_1 + -0x150),local_260);
      local_318._4_4_ = (int)((ulonglong)*puVar6 >> 0x20);
      local_318 = CONCAT44(local_318._4_4_ / 2,(int)*puVar6 / 2);
      FUN_1427f3df0(param_1 + -0x158,param_2,local_318);
      FUN_140458830(local_198);
      if (plVar8 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar9 = plVar8 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 != 1) {
        return param_2;
      }
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 != 1) {
        return param_2;
      }
      (**(code **)(*plVar8 + 8))(plVar8,1);
      return param_2;
    }
  }
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142803b20 FUN_142803b20 body=477 status=ok
// SIG undefined FUN_142803b20(void)

undefined8 FUN_142803b20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
  local_34 = local_34 & 0xffffff00;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_e8[0] = 1;
  local_38 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_e8);
  FUN_140438c20(local_e8);
  if (*(longlong *)(param_1 + -0x100) != 0) {
    plVar4 = (longlong *)(param_1 + -0x150);
    piVar2 = (int *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    if ((*piVar2 != DAT_1468b5ca0) || (piVar2[1] != DAT_1468b5ca4)) {
      if ((*(int *)(param_1 + -0x40) != 0) &&
         ((*(longlong **)(param_1 + -0x48) != (longlong *)0x0 &&
          (cVar1 = (**(code **)(**(longlong **)(param_1 + -0x48) + 0x18))(), cVar1 != '\0')))) {
        plVar3 = (longlong *)0x0;
        if (*(int *)(param_1 + -0x40) != 0) {
          plVar3 = *(longlong **)(param_1 + -0x48);
        }
        cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined2 *)(param_4 + 0x18),1);
        if (cVar1 != '\0') goto LAB_142803cd6;
      }
      if (param_1 == 0x158) {
        plVar4 = (longlong *)0x0;
      }
      cVar1 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x50))
                        (*(longlong **)(param_1 + -0x100),plVar4,*(undefined4 *)(param_4 + 0xc),
                         *(undefined2 *)(param_4 + 0x18));
      if (cVar1 == '\0') {
        local_34 = local_34 & 0xffffff00;
        local_e8[0] = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_68 = 0;
        local_60 = 0;
        local_38 = 0x20702;
        FUN_140439160(param_1 + 0x10,local_e8);
        FUN_140438c20(local_e8);
      }
    }
  }
LAB_142803cd6:
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142803d00 FUN_142803d00 body=1125 status=ok
// SIG undefined FUN_142803d00(void)

undefined8 FUN_142803d00(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 *local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined1 local_288 [16];
  undefined1 local_278 [8];
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  char local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  local_1c4 = local_1c4 & 0xffffff00;
  local_278[0] = 1;
  local_270 = 0;
  local_268 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_278);
  FUN_140438c20(local_278);
  local_2e0 = *(undefined8 *)(param_4 + 0x18);
  local_2d8 = *(undefined8 *)(param_4 + 0x20);
  local_2d0 = *(longlong **)(param_4 + 0x28);
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
    UNLOCK();
  }
  cVar5 = FKey::IsValid(&local_2e0);
  if (cVar5 == '\0') {
    local_44 = local_44 & 0xffffff00;
    local_f8[0] = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x20702;
    FUN_140439160(param_1 + 0x10,local_f8);
    FUN_140438c20(local_f8);
  }
  else {
    local_2c8 = &local_2e0;
    local_res8[0] = 1;
    local_2c0 = local_res8;
    FUN_1427ecc40(param_1 + 200,local_res10,&local_2c8,0);
    if (*(longlong *)(param_1 + -0x100) != 0) {
      plVar9 = (longlong *)(param_1 + -0x150);
      piVar7 = (int *)(**(code **)(*plVar9 + 0x20))(plVar9,local_288);
      if ((*piVar7 != DAT_1468b5ca0) || (piVar7[1] != DAT_1468b5ca4)) {
        if ((*(int *)(param_1 + -0x50) != 0) &&
           ((*(longlong **)(param_1 + -0x58) != (longlong *)0x0 &&
            (cVar5 = (**(code **)(**(longlong **)(param_1 + -0x58) + 0x18))(), plVar1 = local_2d0,
            cVar5 != '\0')))) {
          cVar5 = *(char *)(param_4 + 10);
          if (local_2d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
            UNLOCK();
          }
          plVar8 = (longlong *)0x0;
          if (*(int *)(param_1 + -0x50) != 0) {
            plVar8 = *(longlong **)(param_1 + -0x58);
          }
          local_2b8 = local_2e0;
          local_2b0 = local_2d8;
          local_2a8 = local_2d0;
          if (local_2d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
            UNLOCK();
          }
          cVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,0,&local_2b8,-(cVar5 != '\0') & 2);
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar1 + 1;
            lVar4 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar7 = (int *)((longlong)plVar1 + 0xc);
              iVar2 = *piVar7;
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar1 + 8))(plVar1);
              }
            }
          }
          if (cVar5 != '\0') goto LAB_142804107;
        }
        cVar5 = *(char *)(param_4 + 10);
        local_2a0 = local_2e0;
        if (param_1 == 0x158) {
          plVar9 = (longlong *)0x0;
        }
        local_298 = local_2d8;
        local_290 = local_2d0;
        if (local_2d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
          UNLOCK();
        }
        uVar3 = *(undefined4 *)(param_4 + 0xc);
        lVar4 = **(longlong **)(param_1 + -0x100);
        uVar6 = FKey::IsGamepadKey();
        cVar5 = (**(code **)(lVar4 + 0x40))
                          (*(undefined8 *)(param_1 + -0x100),plVar9,uVar3,&local_2a0,
                           -(cVar5 != '\0') & 2,0x3f800000,uVar6);
        if (cVar5 == '\0') {
          local_104 = local_104 & 0xffffff00;
          local_188 = 0;
          uStack_180 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_198 = 0;
          local_190 = 0;
          local_138 = 0;
          local_130 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0x20702;
          local_1b8[0] = cVar5;
          FUN_140439160(param_1 + 0x10,local_1b8);
          FUN_140438c20(local_1b8);
        }
      }
    }
  }
LAB_142804107:
  FUN_140438260(param_2,param_1 + 0x10);
  plVar9 = local_2d0;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2d0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142804170 FUN_142804170 body=1067 status=ok
// SIG undefined FUN_142804170(void)

undefined8 FUN_142804170(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int *piVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 *local_2c0;
  undefined1 *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  char local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  char local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  local_1c4 = local_1c4 & 0xffffff00;
  local_278[0] = 1;
  local_270 = 0;
  local_268 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_278);
  FUN_140438c20(local_278);
  local_2d8 = *(undefined8 *)(param_4 + 0x18);
  local_2d0 = *(undefined8 *)(param_4 + 0x20);
  local_2c8 = *(longlong **)(param_4 + 0x28);
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
    UNLOCK();
  }
  cVar5 = FKey::IsValid(&local_2d8);
  if (cVar5 == '\0') {
    local_44 = local_44 & 0xffffff00;
    local_f8[0] = '\0';
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_48 = 0x20702;
    FUN_140439160(param_1 + 0x10,local_f8);
    pcVar9 = local_f8;
  }
  else {
    local_2c0 = &local_2d8;
    local_res8[0] = 0;
    local_2b8 = local_res8;
    FUN_1427ecc40(param_1 + 200,local_res10,&local_2c0,0);
    if (*(longlong *)(param_1 + -0x100) == 0) goto LAB_14280452c;
    plVar10 = (longlong *)(param_1 + -0x150);
    piVar7 = (int *)(**(code **)(*plVar10 + 0x20))(plVar10,local_280);
    if ((*piVar7 == DAT_1468b5ca0) && (piVar7[1] == DAT_1468b5ca4)) goto LAB_14280452c;
    if ((*(int *)(param_1 + -0x50) != 0) &&
       ((*(longlong **)(param_1 + -0x58) != (longlong *)0x0 &&
        (cVar5 = (**(code **)(**(longlong **)(param_1 + -0x58) + 0x18))(), plVar1 = local_2c8,
        cVar5 != '\0')))) {
      if (local_2c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
        UNLOCK();
      }
      plVar8 = (longlong *)0x0;
      if (*(int *)(param_1 + -0x50) != 0) {
        plVar8 = *(longlong **)(param_1 + -0x58);
      }
      local_2b0 = local_2d8;
      local_2a8 = local_2d0;
      local_2a0 = local_2c8;
      if (local_2c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
        UNLOCK();
      }
      cVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,0,&local_2b0,1);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar1 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar7 = (int *)((longlong)plVar1 + 0xc);
          iVar2 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1);
          }
        }
      }
      if (cVar5 != '\0') goto LAB_14280452c;
    }
    local_298 = local_2d8;
    if (param_1 == 0x158) {
      plVar10 = (longlong *)0x0;
    }
    local_290 = local_2d0;
    local_288 = local_2c8;
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)(param_4 + 0xc);
    lVar4 = **(longlong **)(param_1 + -0x100);
    uVar6 = FKey::IsGamepadKey(&local_2d8);
    cVar5 = (**(code **)(lVar4 + 0x40))
                      (*(undefined8 *)(param_1 + -0x100),plVar10,uVar3,&local_298,1,0x3f800000,uVar6
                      );
    if (cVar5 != '\0') goto LAB_14280452c;
    local_104 = local_104 & 0xffffff00;
    local_188 = 0;
    uStack_180 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_198 = 0;
    local_190 = 0;
    local_138 = 0;
    local_130 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0x20702;
    local_1b8[0] = cVar5;
    FUN_140439160(param_1 + 0x10,local_1b8);
    pcVar9 = local_1b8;
  }
  FUN_140438c20(pcVar9);
LAB_14280452c:
  FUN_140438260(param_2,param_1 + 0x10);
  plVar10 = local_2c8;
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2c8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar7 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1428045a0 FUN_1428045a0 body=155 status=ok
// SIG undefined FUN_1428045a0(void)

longlong FUN_1428045a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + -0x100) != 0) {
    plVar2 = (longlong *)(param_1 + -0x150);
    piVar1 = (int *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    if ((*piVar1 != DAT_1468b5ca0) || (piVar1[1] != DAT_1468b5ca4)) {
      if (param_1 == 0x158) {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(**(longlong **)(param_1 + -0x100) + 0xa8))
                (*(longlong **)(param_1 + -0x100),param_2,plVar2,param_3);
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 0x10) = 0;
  return param_2;
}



// FUNCTION 142804640 FUN_142804640 body=410 status=ok
// SIG undefined FUN_142804640(void)

undefined8 FUN_142804640(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
  local_34 = local_34 & 0xffffff00;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_e8[0] = 1;
  local_38 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_e8);
  FUN_140438c20(local_e8);
  plVar1 = *(longlong **)(param_1 + -0x100);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = param_1 + -0x150;
    if (param_1 == 0x158) {
      lVar3 = 0;
    }
    cVar2 = (**(code **)(*plVar1 + 0x68))
                      (plVar1,lVar3,*(undefined4 *)(param_4 + 0xc),param_4 + 0x18,param_4 + 0x24,
                       param_4 + 0x30,param_4 + 0x3c);
    if (cVar2 == '\0') {
      local_34 = local_34 & 0xffffff00;
      local_e8[0] = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_68 = 0;
      local_60 = 0;
      local_38 = 0x20702;
      FUN_140439160(param_1 + 0x10,local_e8);
      FUN_140438c20(local_e8);
    }
  }
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 1428047e0 FUN_1428047e0 body=894 status=ok
// SIG undefined FUN_1428047e0(void)

undefined8 FUN_1428047e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res20 [8];
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198;
  undefined8 local_190;
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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  uint local_104;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  local_104 = local_104 & 0xffffff00;
  local_1b8[0] = 1;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0x20702;
  local_res10 = param_2;
  FUN_140439160(param_1 + 0x10,local_1b8);
  FUN_140438c20(local_1b8);
  local_218 = *(undefined8 *)(param_4 + 0x38);
  local_210 = *(undefined8 *)(param_4 + 0x40);
  local_208 = *(longlong **)(param_4 + 0x48);
  local_res8[0] = 1;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
  }
  local_200 = &local_218;
  local_1f8 = local_res8;
  FUN_1427ec140(param_1 + 200,local_res20,&local_200,0);
  plVar8 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_208 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar6 = (int *)((longlong)plVar8 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_142811890(param_1 + -0x158,param_3,param_4);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) != 0) {
    plVar8 = (longlong *)(param_1 + -0x150);
    piVar6 = (int *)(**(code **)(*plVar8 + 0x20))(plVar8,local_1c0);
    if ((*piVar6 != DAT_1468b5ca0) || (piVar6[1] != DAT_1468b5ca4)) {
      if ((*(int *)(param_1 + -0x50) != 0) &&
         ((*(longlong **)(param_1 + -0x58) != (longlong *)0x0 &&
          (cVar5 = (**(code **)(**(longlong **)(param_1 + -0x58) + 0x18))(), cVar5 != '\0')))) {
        plVar3 = *(longlong **)(param_4 + 0x48);
        local_1f0 = *(undefined8 *)(param_4 + 0x38);
        local_1e8 = *(undefined8 *)(param_4 + 0x40);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        uVar2 = *(undefined4 *)(param_4 + 0xc);
        if (*(int *)(param_1 + -0x50) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_1 + -0x58);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_1e0 = plVar3;
        cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,uVar2,&local_1f0,3);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar3 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar6 = (int *)((longlong)plVar3 + 0xc);
            iVar1 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (cVar5 != '\0') goto LAB_142804b35;
      }
      local_1d8 = *(undefined8 *)(param_4 + 0x38);
      local_1d0 = *(undefined8 *)(param_4 + 0x40);
      if (param_1 == 0x158) {
        plVar8 = (longlong *)0x0;
      }
      local_1c8 = *(longlong *)(param_4 + 0x48);
      if (local_1c8 != 0) {
        LOCK();
        *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
        UNLOCK();
      }
      cVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x40))
                        (*(longlong **)(param_1 + -0x100),plVar8,*(undefined4 *)(param_4 + 0xc),
                         &local_1d8,3,0x3f800000,0);
      if (cVar5 == '\0') {
        local_44 = local_44 & 0xffffff00;
        local_f8[0] = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_78 = 0;
        local_70 = 0;
        local_48 = 0x20702;
        FUN_140439160(param_1 + 0x10,local_f8);
        FUN_140438c20(local_f8);
      }
    }
  }
LAB_142804b35:
  FUN_140438260(local_res10,param_1 + 0x10);
  return local_res10;
}



// FUNCTION 142804b60 FUN_142804b60 body=1537 status=ok
// SIG undefined FUN_142804b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142804b60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  float *pfVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  longlong *plVar14;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  undefined4 local_330;
  undefined1 local_328;
  undefined1 local_318;
  char local_317;
  undefined4 local_314;
  int local_310;
  int iStack_30c;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 *local_2e8;
  undefined1 *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined8 local_1b0;
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
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  uint local_124;
  undefined1 local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  bVar13 = false;
  local_314 = 0;
  local_308 = param_2;
  if (*(char *)(param_1 + 0x248) == '\0') {
    pfVar8 = (float *)(**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,local_2a8);
    fVar1 = pfVar8[1];
    *(int *)(param_1 + 0x240) = (int)ROUND(*pfVar8 + *pfVar8 + 0.5) >> 1;
    *(int *)(param_1 + 0x244) = (int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
    *(undefined1 *)(param_1 + 0x248) = 1;
  }
  local_298[0] = 1;
  local_290 = 0;
  local_288 = 0;
  local_1e4 = local_1e4 & 0xffffff40 | 0x40;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0x20702;
  FUN_140459130(param_1 + 0x10,local_298);
  FUN_140438c20(local_298);
  local_300 = *(undefined8 *)(param_4 + 0x38);
  local_2f8 = *(undefined8 *)(param_4 + 0x40);
  local_2f0 = *(longlong **)(param_4 + 0x48);
  local_318 = 1;
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
    UNLOCK();
  }
  local_2e8 = &local_300;
  local_2e0 = &local_318;
  FUN_1427ec140(param_1 + 200,&local_310,&local_2e8,0);
  plVar14 = local_2f0;
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_2f0 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar9 = (int *)((longlong)plVar14 + 0xc);
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_142811aa0(param_1 + -0x158,param_4);
  FUN_142811890(param_1 + -0x158,param_3,param_4);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) == 0) goto LAB_14280511f;
  plVar14 = (longlong *)(param_1 + -0x150);
  piVar9 = (int *)(**(code **)(*plVar14 + 0x20))(plVar14,local_2a0);
  if ((*piVar9 == DAT_1468b5ca0) && (piVar9[1] == DAT_1468b5ca4)) goto LAB_14280511f;
  cVar7 = (**(code **)(*plVar14 + 0x60))(plVar14);
  if (cVar7 == '\0') {
    FSlateApplication::GetModifierKeys(DAT_1469f4590,&local_314);
    FUN_1427f5830(param_1 + -0x158,&local_314);
  }
  cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
  if (cVar7 == '\x03') {
    plVar12 = (longlong *)CONCAT44(iStack_30c,local_310);
LAB_142804e01:
    bVar4 = true;
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
    if (cVar7 == '\x04') {
      plVar12 = *(longlong **)(param_4 + 0x48);
      lVar6 = *(longlong *)(param_4 + 0x38);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      bVar13 = true;
      if (lVar6 == DAT_1469e9880) goto LAB_142804e01;
      bVar4 = false;
    }
    else {
      plVar12 = (longlong *)CONCAT44(iStack_30c,local_310);
      bVar4 = false;
    }
  }
  if ((bVar13) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar9 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  cVar7 = (**(code **)(*plVar14 + 0x58))(plVar14);
  if ((cVar7 == '\0') &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))(), cVar7 != '\x02')) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  local_317 = (**(code **)(*DAT_1469f4590 + 0x90))();
  if ((bVar4) || (bVar13)) {
    if ((*(int *)(param_1 + -0x50) != 0) &&
       ((*(longlong **)(param_1 + -0x58) != (longlong *)0x0 &&
        (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x58) + 0x18))(), cVar7 != '\0')))) {
      plVar12 = *(longlong **)(param_4 + 0x48);
      local_2d8 = *(undefined8 *)(param_4 + 0x38);
      local_2d0 = *(undefined8 *)(param_4 + 0x40);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      uVar3 = *(undefined4 *)(param_4 + 0xc);
      if (*(int *)(param_1 + -0x50) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + -0x58);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_2c8 = plVar12;
      cVar7 = (**(code **)(*plVar11 + 0x38))(plVar11,uVar3,&local_2d8,0);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar12 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar9 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (cVar7 != '\0') goto LAB_142805055;
    }
    local_2c0 = *(undefined8 *)(param_4 + 0x38);
    local_2b8 = *(undefined8 *)(param_4 + 0x40);
    if (param_1 == 0x158) {
      plVar14 = (longlong *)0x0;
    }
    local_2b0 = *(longlong *)(param_4 + 0x48);
    if (local_2b0 != 0) {
      LOCK();
      *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
      UNLOCK();
    }
    local_328 = 0;
    local_330 = 0x3f800000;
    local_338 = 0;
    cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x40))
                      (*(longlong **)(param_1 + -0x100),plVar14,*(undefined4 *)(param_4 + 0xc),
                       &local_2c0);
    if (cVar7 == '\0') {
      local_124 = local_124 & 0xffffff00;
      local_1d8[0] = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_158 = 0;
      local_150 = 0;
      local_128 = 0x20702;
      FUN_140439160(param_1 + 0x10,local_1d8);
      FUN_140438c20(local_1d8);
    }
  }
LAB_142805055:
  if ((local_317 == '\0') && (cVar7 = (**(code **)(*DAT_1469f4590 + 0x90))(), cVar7 != '\0')) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
  if ((cVar7 == '\x01') ||
     (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))(), cVar7 == '\x02')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  cVar7 = (**(code **)(*DAT_1469f4590 + 8))();
  if ((((cVar7 != '\0') &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x170))(), cVar7 == '\0')) &&
      (!bVar13)) && ((bVar5 || (bVar4)))) {
    local_310 = (int)*(float *)(param_4 + 0x18);
    iStack_30c = (int)*(float *)(param_4 + 0x1c);
    uVar10 = FUN_1427f3df0(param_1 + -0x158,local_118,CONCAT44(iStack_30c,local_310));
    FUN_140439160(param_1 + 0x10,uVar10);
    FUN_140438c20(local_118);
  }
LAB_14280511f:
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 0x40;
  FUN_140438260(local_308,param_1 + 0x10);
  return local_308;
}



// FUNCTION 142805170 FUN_142805170 body=1587 status=ok
// SIG undefined FUN_142805170(void)

longlong * FUN_142805170(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint local_res8 [2];
  longlong *local_res10;
  undefined8 local_res18;
  char local_res20;
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 *local_278;
  uint *local_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
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
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  
  plVar13 = (longlong *)0x0;
  local_res8[0] = 0;
  plVar12 = (longlong *)(param_1 + -0x150);
  plVar14 = plVar12;
  if (param_1 == 0x158) {
    plVar14 = plVar13;
  }
  lVar2 = **(longlong **)(param_1 + -0x100);
  local_res10 = param_2;
  local_res18 = param_3;
  uVar7 = (**(code **)(*plVar12 + 200))(plVar12);
  uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  (**(code **)(lVar2 + 0xa0))(*(undefined8 *)(param_1 + -0x100),plVar14,uVar8,uVar7);
  local_268 = DAT_1469e9880;
  local_260 = DAT_1469e9888;
  local_258 = DAT_1469e9890;
  if (DAT_1469e9890 != 0) {
    LOCK();
    *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_140472340(param_4,&local_268);
  if (cVar5 == '\0') {
    local_250 = DAT_1469e9868;
    local_248 = DAT_1469e9870;
    local_240 = DAT_1469e9878;
    if (DAT_1469e9878 != 0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
      UNLOCK();
    }
    cVar5 = FUN_140472340(param_4,&local_250);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x248) = 0;
    }
  }
  local_114 = local_114 & 0xffffff00;
  local_1c8[0] = 1;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_1c8);
  FUN_140438c20(local_1c8);
  local_290 = *(undefined8 *)(param_4 + 0x38);
  local_288 = *(undefined8 *)(param_4 + 0x40);
  local_280 = *(longlong **)(param_4 + 0x48);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_280 + 1) = (int)local_280[1] + 1;
    UNLOCK();
  }
  local_278 = &local_290;
  local_270 = local_res8;
  FUN_1427ec140(param_1 + 200,local_298,&local_278,0);
  plVar11 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_280 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar10 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  FUN_142811aa0(param_1 + -0x158,param_4);
  uVar4 = local_res18;
  FUN_142811890(param_1 + -0x158,local_res18,param_4);
  FGeometry::operator=(param_1 + 0x120,uVar4);
  cVar5 = '\x01';
  if ((*(longlong *)(param_1 + -0x100) != 0) &&
     ((piVar10 = (int *)(**(code **)(*plVar12 + 0x20))(plVar12,local_1d8), *piVar10 != DAT_1468b5ca0
      || (piVar10[1] != DAT_1468b5ca4)))) {
    if ((*(int *)(param_1 + -0x50) == 0) ||
       ((*(longlong **)(param_1 + -0x58) == (longlong *)0x0 ||
        (cVar5 = (**(code **)(**(longlong **)(param_1 + -0x58) + 0x18))(), cVar5 == '\0')))) {
LAB_1428054ad:
      local_220 = *(undefined8 *)(param_4 + 0x38);
      local_218 = *(undefined8 *)(param_4 + 0x40);
      local_210 = *(longlong *)(param_4 + 0x48);
      if (local_210 != 0) {
        LOCK();
        *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
        UNLOCK();
      }
      cVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x40))
                        (*(longlong **)(param_1 + -0x100),plVar14,*(undefined4 *)(param_4 + 0xc),
                         &local_220,1,0x3f800000,0);
      if (cVar5 == '\0') {
        local_54 = local_54 & 0xffffff00;
        local_108[0] = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_88 = 0;
        local_80 = 0;
        local_58 = 0x20702;
        FUN_140439160(param_1 + 0x10,local_108);
        FUN_140438c20(local_108);
      }
    }
    else {
      plVar12 = *(longlong **)(param_4 + 0x48);
      local_238 = *(undefined8 *)(param_4 + 0x38);
      local_230 = *(undefined8 *)(param_4 + 0x40);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      uVar7 = *(undefined4 *)(param_4 + 0xc);
      plVar11 = plVar13;
      if (*(int *)(param_1 + -0x50) != 0) {
        plVar11 = *(longlong **)(param_1 + -0x58);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_228 = plVar12;
      cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,uVar7,&local_238,1);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar12 + 1;
        lVar2 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar10 = (int *)((longlong)plVar12 + 0xc);
          iVar9 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      if (cVar5 == '\0') goto LAB_1428054ad;
    }
    plVar12 = *(longlong **)(param_1 + -0x100);
    lVar2 = *plVar12;
    uVar7 = (**(code **)(*(longlong *)(param_1 + -0x150) + 200))();
    uVar8 = (**(code **)(*(longlong *)(param_1 + -0x150) + 0xc0))(param_1 + -0x150);
    iVar9 = (**(code **)(lVar2 + 0xa0))(plVar12,plVar14,uVar8,uVar7);
    local_res20 = iVar9 != 0;
    plVar12 = local_res10;
    if ((iVar9 == 0) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))(), plVar12 = local_res10,
       cVar5 != '\x03')) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
      if (cVar5 == '\x04') {
        plVar12 = *(longlong **)(param_4 + 0x48);
        lVar2 = *(longlong *)(param_4 + 0x38);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        plVar13 = (longlong *)0x1;
        if (lVar2 == DAT_1469e9880) goto LAB_142805658;
        bVar3 = false;
      }
      else {
        bVar3 = false;
        plVar12 = local_res10;
      }
    }
    else {
LAB_142805658:
      bVar3 = true;
    }
    if ((plVar13 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
      LOCK();
      plVar14 = plVar12 + 1;
      lVar2 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar10 = (int *)((longlong)plVar12 + 0xc);
        iVar9 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    cVar5 = local_res20;
    if (!bVar3) goto LAB_142805778;
  }
  local_208 = DAT_1469e9880;
  local_200 = DAT_1469e9888;
  local_1f8 = DAT_1469e9890;
  if (DAT_1469e9890 != 0) {
    LOCK();
    *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_140472340(param_4,&local_208);
  if (cVar6 == '\0') {
    local_1f0 = DAT_1469e9868;
    local_1e8 = DAT_1469e9870;
    local_1e0 = DAT_1469e9878;
    if (DAT_1469e9878 != 0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_140472340(param_4,&local_1f0);
    if (cVar6 == '\0') {
      if (*(char *)(param_1 + 0x1b9) != '\0') {
        *(undefined1 *)(param_1 + 0x1b9) = 0;
        FReply::SetMousePos(param_1 + 0x10,param_1 + 0x1bc);
        *(undefined8 *)(param_1 + 0x1bc) = 0xffffffffffffffff;
      }
      FUN_1406a1ac0(param_1 + 0x10);
      if ((cVar5 != '\0') &&
         (cVar5 = (**(code **)(**(longlong **)(param_1 + -0x100) + 400))(), cVar5 == '\0')) {
        FUN_140806740(param_1 + 0x10);
      }
    }
  }
LAB_142805778:
  FUN_140438260(local_res10,param_1 + 0x10);
  return local_res10;
}



// FUNCTION 1428057b0 FUN_1428057b0 body=145 status=ok
// SIG undefined FUN_1428057b0(void)

void FUN_1428057b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  FUN_142811890(param_1 + -0x158);
  plVar1 = *(longlong **)(param_1 + -0x100);
  plVar5 = (longlong *)(param_1 + -0x150);
  lVar2 = *plVar1;
  uVar3 = (**(code **)(*plVar5 + 200))(plVar5);
  uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if (param_1 + -0x158 == 0) {
    plVar5 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014280583e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x80))(plVar1,plVar5,uVar4,uVar3);
  return;
}



// FUNCTION 142805850 FUN_142805850 body=72 status=ok
// SIG undefined FUN_142805850(void)

void FUN_142805850(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + -0x100);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = param_1 + -0x150;
    if (param_1 == 0x158) {
      lVar2 = 0;
    }
    (**(code **)(*plVar1 + 0x88))(plVar1,lVar2);
    *(undefined8 *)(param_1 + 0x118) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 1428058a0 FUN_1428058a0 body=1002 status=ok
// SIG undefined FUN_1428058a0(void)

undefined8 FUN_1428058a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  uint uStackX_c;
  float local_res10;
  float local_res14;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  
  local_44 = local_44 & 0xffffff00;
  plVar12 = (longlong *)0x0;
  local_f8[0] = 1;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_f8);
  FUN_140438c20(local_f8);
  FUN_142811890(param_1 + -0x158,param_3);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) {
LAB_1428059dc:
    plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar11 = plVar12;
  }
  else {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x188) + 8);
    LOCK();
    iVar5 = *piVar8;
    if (iVar5 == 0) {
      *piVar8 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_1428059dc;
    plVar11 = *(longlong **)(param_1 + 0x188);
    plVar10 = plVar12;
    plVar9 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(plVar11 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar10 = (longlong *)0x0, plVar9 = plVar12, !bVar13) {
        LOCK();
        bVar13 = iVar5 == (int)plVar11[1];
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar13) {
          plVar9 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            plVar10 = *(longlong **)(param_1 + 0x180);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar13 = iVar5 == 0;
        if (bVar13) {
          *(int *)(plVar11 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    cVar4 = FUN_141846080(plVar10);
    plVar11 = (longlong *)0x1;
    if (cVar4 != '\0') {
      plVar12 = (longlong *)0x1;
    }
  }
  if ((plVar11 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar8 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  bVar13 = false;
  if ((char)plVar12 != '\0') {
    *(undefined1 *)(param_1 + 0x228) = 1;
  }
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) {
LAB_142805aa6:
    plVar12 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_142805aaa:
    bVar14 = false;
  }
  else {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x188) + 8);
    LOCK();
    iVar5 = *piVar8;
    if (iVar5 == 0) {
      *piVar8 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_142805aa6;
    plVar9 = *(longlong **)(param_1 + 0x188);
    bVar13 = true;
    plVar11 = (longlong *)0x0;
    plVar12 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(plVar9 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar11 = (longlong *)0x0, plVar12 = (longlong *)0x0, !bVar14) {
        LOCK();
        bVar14 = iVar5 == (int)plVar9[1];
        if (bVar14) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar14) {
          plVar12 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            plVar11 = *(longlong **)(param_1 + 0x180);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar14 = iVar5 == 0;
        if (bVar14) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    cVar4 = FUN_141846080(plVar11);
    if (cVar4 == '\0') goto LAB_142805aaa;
    bVar14 = true;
  }
  if ((bVar13) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar12 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar8 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (*(longlong *)(param_1 + -0x100) == 0) goto LAB_142805c60;
  plVar12 = (longlong *)(param_1 + -0x150);
  piVar8 = (int *)(**(code **)(*plVar12 + 0x20))(plVar12,local_108);
  if ((*piVar8 == DAT_1468b5ca0) && (piVar8[1] == DAT_1468b5ca4)) goto LAB_142805c60;
  if ((*(int *)(param_1 + -0x60) == 0) ||
     ((*(longlong **)(param_1 + -0x68) == (longlong *)0x0 ||
      (cVar4 = (**(code **)(**(longlong **)(param_1 + -0x68) + 0x18))(), cVar4 == '\0')))) {
LAB_142805b56:
    lVar3 = **(longlong **)(param_1 + -0x100);
    uVar6 = (**(code **)(*plVar12 + 200))(plVar12);
    if (bVar14) {
      uVar7 = (**(code **)(*plVar12 + 0xc0))();
      if (param_1 == 0x158) {
        plVar12 = (longlong *)0x0;
      }
      (**(code **)(lVar3 + 0x98))(*(undefined8 *)(param_1 + -0x100),plVar12,uVar7,uVar6);
      fVar1 = *(float *)(param_4 + 0x2c);
      fVar2 = *(float *)(param_4 + 0x28);
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 1;
      *(int *)(param_1 + 0x198) = (int)((float)*(int *)(param_1 + 0x198) + fVar2);
      *(int *)(param_1 + 0x19c) = (int)((float)*(int *)(param_1 + 0x19c) - fVar1);
    }
    else {
      uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if (param_1 == 0x158) {
        plVar12 = (longlong *)0x0;
      }
      (**(code **)(lVar3 + 0x90))(*(undefined8 *)(param_1 + -0x100),plVar12,uVar7,uVar6);
    }
  }
  else {
    if (*(int *)(param_1 + -0x60) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + -0x68);
    }
    cVar4 = (**(code **)(*plVar9 + 0x38))();
    if (cVar4 == '\0') goto LAB_142805b56;
  }
  if (*(char *)(param_1 + 0x1b9) != '\0') {
    local_res10 = (float)*(int *)(param_1 + 0x1bc);
    local_res14 = (float)*(int *)(param_1 + 0x1c0);
    FSlateApplication::SetCursorPos((int)DAT_1469f4590,(int)&local_res10);
  }
LAB_142805c60:
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142805c90 FUN_142805c90 body=958 status=ok
// SIG undefined FUN_142805c90(void)

undefined8 FUN_142805c90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint in_stack_fffffffffffffe58;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  
  local_54 = local_54 & 0xffffff00;
  plVar10 = (longlong *)0x0;
  local_108[0] = 1;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_108);
  FUN_140438c20(local_108);
  FUN_142811890(param_1 + -0x158,param_3,param_4);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) == 0) goto LAB_142806027;
  plVar11 = (longlong *)(param_1 + -0x150);
  piVar8 = (int *)(**(code **)(*plVar11 + 0x20))(plVar11,local_118);
  if ((*piVar8 == DAT_1468b5ca0) && (piVar8[1] == DAT_1468b5ca4)) goto LAB_142806027;
  puVar9 = &DAT_1469e9820;
  if (*(float *)(param_4 + 100) < 0.0) {
    puVar9 = &DAT_1469e9838;
  }
  plVar3 = (longlong *)puVar9[2];
  local_160 = *puVar9;
  uVar4 = puVar9[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + -0x50) != 0) {
    plVar10 = *(longlong **)(param_1 + -0x58);
  }
  if ((plVar10 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar10 + 0x18))(), cVar7 == '\0')) {
LAB_142805eb6:
    plVar10 = plVar3 + 1;
    local_178 = local_160;
    if (param_1 == 0x158) {
      plVar11 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar10 = (int)*plVar10 + 1;
      UNLOCK();
    }
    in_stack_fffffffffffffe58 = in_stack_fffffffffffffe58 & 0xffffff00;
    local_170 = uVar4;
    local_168 = plVar3;
    (**(code **)(**(longlong **)(param_1 + -0x100) + 0x40))
              (*(longlong **)(param_1 + -0x100),plVar11,*(undefined4 *)(param_4 + 0xc),&local_178,0,
               0x3f800000,in_stack_fffffffffffffe58);
    local_148 = local_160;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar10 = (int)*plVar10 + 1;
      UNLOCK();
    }
    local_140 = uVar4;
    local_138 = plVar3;
    (**(code **)(**(longlong **)(param_1 + -0x100) + 0x40))
              (*(longlong **)(param_1 + -0x100),plVar11,*(undefined4 *)(param_4 + 0xc),&local_148,1,
               0x3f800000,in_stack_fffffffffffffe58 & 0xffffff00);
    dVar6 = DAT_1464a97d0;
    uVar2 = *(undefined4 *)(param_4 + 100);
    local_130 = DAT_1469e9850;
    local_128 = DAT_1469e9858;
    local_120 = DAT_1469e9860;
    if (DAT_1469e9860 != 0) {
      LOCK();
      *(int *)(DAT_1469e9860 + 8) = *(int *)(DAT_1469e9860 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(**(longlong **)(param_1 + -0x100) + 0x48))
              (*(longlong **)(param_1 + -0x100),plVar11,*(undefined4 *)(param_4 + 0xc),&local_130,
               uVar2,(float)dVar6,1,0);
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(param_4 + 0xc);
    if (*(int *)(param_1 + -0x50) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + -0x58);
    }
    local_190 = local_160;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_188 = uVar4;
    local_180 = plVar3;
    cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar2,&local_190,0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar3 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar8 = (int *)((longlong)plVar3 + 0xc);
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (cVar7 == '\0') goto LAB_142805eb6;
  }
  plVar10 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar8 = (int *)((longlong)plVar3 + 0xc);
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_142806027:
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142806060 OnPostEngineInit body=345 status=ok
// SIG undefined OnPostEngineInit(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void USoundCue::OnPostEngineInit(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  iVar5 = 0;
  lVar7 = *(longlong *)(param_1 + 0x378);
  iVar3 = DAT_1464af048;
  if (0 < DAT_1464af048) {
    lVar8 = 0;
    do {
      plVar6 = (longlong *)(DAT_1464af040 + lVar8);
      if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar3 = DAT_1464af048, *plVar2 == lVar7)) {
        if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar7 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar7;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
          iVar3 = DAT_1464af048;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar5 < iVar3);
  }
  if (DAT_1464af054 < 1) {
    iVar4 = 0;
    iVar5 = iVar3;
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        if (((*(int *)(lVar7 + 8 + DAT_1464af040) == 0) ||
            (*(longlong **)(lVar7 + DAT_1464af040) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(lVar7 + DAT_1464af040) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af040,iVar4,1,1);
        }
        else {
          iVar4 = iVar4 + 1;
          lVar7 = lVar7 + 0x10;
        }
        iVar5 = DAT_1464af048;
      } while (iVar4 < DAT_1464af048);
    }
    _DAT_1464af050 = iVar5 * 2;
    if (_DAT_1464af050 < 3) {
      _DAT_1464af050 = 2;
    }
    if ((_DAT_1464af050 < iVar3) && (DAT_1464af04c != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af040);
    }
  }
  *(undefined8 *)(param_1 + 0x378) = 0;
  FUN_1427fa520(param_1,1);
  return;
}



// FUNCTION 1428061c0 FUN_1428061c0 body=461 status=ok
// SIG undefined FUN_1428061c0(void)

void FUN_1428061c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  if ((((*(char *)(param_1 + 0x2fb) == '\0') && (*(char *)(param_1 + 0x2fc) == '\0')) &&
      (*(longlong *)(param_1 + 0xc0) == 0)) &&
     ((*(longlong *)(param_1 + 0x2d8) != 0 && (*(longlong *)(param_1 + 0x2e0) != 0)))) {
    local_38 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2e0) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 0x2e0);
      plVar3 = *(longlong **)(DAT_1469f4590 + 0x18);
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar7 = local_38, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              local_38 = *(longlong **)(param_1 + 0x2d8);
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_30 = plVar7;
      FUN_141899f20(DAT_1469f4590,&local_28,&local_38);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        LOCK();
        plVar2 = plVar7 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if ((local_28 != 0) &&
         (puVar6 = (undefined8 *)(**(code **)(*plVar3 + 0xb8))(plVar3), puVar6 != (undefined8 *)0x0)
         ) {
        TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(param_1 + 0xc0),*puVar6);
      }
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
    }
  }
  return;
}



// FUNCTION 1428063a0 FUN_1428063a0 body=67 status=ok
// SIG undefined FUN_1428063a0(void)

undefined1 * FUN_1428063a0(longlong param_1,undefined1 *param_2)

{
  if (*(longlong **)(param_1 + -0x100) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + -0x100) + 0x1a0))();
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0x100;
  return param_2;
}



// FUNCTION 1428063f0 FUN_1428063f0 body=52 status=ok
// SIG undefined FUN_1428063f0(void)

longlong FUN_1428063f0(longlong param_1,longlong param_2)

{
  if (*(longlong **)(param_1 + -0x100) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + -0x100) + 0xb0))();
    return param_2;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 142806430 FUN_142806430 body=346 status=ok
// SIG undefined FUN_142806430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142806430(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(longlong **)(param_1 + -0x100) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0xe0))();
    if (cVar3 == '\0') {
      local_e8[0] = 1;
      local_34 = local_34 & 0xffffff00;
      puVar4 = local_e8;
      local_e0 = 0;
      local_d8 = 0;
      bVar1 = false;
      bVar2 = true;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0x20702;
      goto LAB_142806542;
    }
  }
  local_1a8[0] = 0;
  local_f4 = local_f4 & 0xffffff00;
  puVar4 = local_1a8;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  bVar2 = false;
  local_180 = 0;
  local_128 = 0;
  local_120 = 0;
  bVar1 = true;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0x20702;
LAB_142806542:
  FReply::FReply(param_2,puVar4);
  if (bVar1) {
    FUN_140438c20(local_1a8);
  }
  if (bVar2) {
    FUN_140438c20(local_e8);
  }
  return param_2;
}



// FUNCTION 142806590 FUN_142806590 body=335 status=ok
// SIG undefined FUN_142806590(void)

void FUN_142806590(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  
  if (param_4 != 1) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffe;
    return;
  }
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
  plVar7 = (longlong *)0x0;
  if (plVar4 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x40)) && (*(longlong *)(param_1 + 0x48) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 0x38,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x40) = DAT_1464b56f4;
      }
      plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
      if (plVar4 != (longlong *)0x0) goto LAB_142806626;
    }
  }
  else {
LAB_142806626:
    lVar5 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14280665f;
  }
  plVar4 = plVar7;
LAB_14280665f:
  *(longlong **)(param_1 + 0x60) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    if (param_5 != '\0') {
      iVar1 = *(int *)((longlong)plVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        plVar7 = (longlong *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                 (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18);
      }
      *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) | 0x40000000;
      plVar4 = *(longlong **)(param_1 + 0x60);
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1,0);
  }
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfffffffe;
  return;
}



// FUNCTION 1428066e0 FUN_1428066e0 body=1027 status=ok
// SIG undefined FUN_1428066e0(void)

undefined8 FUN_1428066e0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float local_res10;
  float local_res14;
  undefined8 in_stack_fffffffffffffda8;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1e8;
  undefined8 local_1e0;
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
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  uint local_154;
  char local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_128;
  undefined8 local_120;
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
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint local_94;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
  local_154 = local_154 & 0xffffff00;
  local_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_208[0] = 1;
  local_158 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_208);
  FUN_140438c20(local_208);
  *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + -1;
  if (*(int *)(param_1 + 0x21c) < 1) {
    *(undefined8 *)(param_1 + 0x118) = 0xffffffffffffffff;
  }
  else {
    FUN_142811890(param_1 + -0x158,param_3,param_4);
  }
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) != 0) {
    if (((*(int *)(param_1 + -0x20) != 0) && (*(longlong **)(param_1 + -0x28) != (longlong *)0x0))
       && (cVar8 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x18))(), cVar8 != '\0')) {
      plVar6 = *(longlong **)(param_4 + 0x48);
      local_228 = *(undefined8 *)(param_4 + 0x38);
      local_220 = *(undefined8 *)(param_4 + 0x40);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      uVar14 = *(undefined4 *)(param_4 + 0xc);
      uVar13 = *(undefined8 *)(param_1 + 0x118);
      if (*(int *)(param_1 + -0x20) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + -0x28);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_218 = plVar6;
      cVar8 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar14,&local_228,1,uVar13);
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar6 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
      if (cVar8 != '\0') goto LAB_142806ac1;
    }
    uVar3 = *(undefined4 *)(param_4 + 0x54);
    uVar4 = *(undefined4 *)(param_4 + 0x50);
    uVar5 = *(undefined4 *)(param_4 + 0xc);
    fVar12 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                   *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
    local_res10 = (*(float *)(param_3 + 0x28) * fVar12 *
                   (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) -
                  *(float *)(param_3 + 0x24) * fVar12 *
                  (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30))) *
                  *(float *)(param_3 + 8);
    local_res14 = (*(float *)(param_3 + 0x1c) * fVar12 *
                   (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) -
                  (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
                  *(float *)(param_3 + 0x20) * fVar12) * *(float *)(param_3 + 8);
    lVar7 = **(longlong **)(param_1 + -0x100);
    puVar9 = (undefined8 *)FDateTime::Now(local_210);
    lVar11 = param_1 + -0x150;
    if (param_1 == 0x158) {
      lVar11 = 0;
    }
    cVar8 = (**(code **)(lVar7 + 0x58))
                      (*(undefined8 *)(param_1 + -0x100),lVar11,uVar5,uVar4,CONCAT44(uVar14,3),
                       &local_res10,0,*puVar9,uVar3);
    if (cVar8 == '\0') {
      local_94 = local_94 & 0xffffff00;
      local_118 = 0;
      uStack_110 = 0;
      local_140 = 0;
      local_138 = 0;
      local_128 = 0;
      local_120 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0x20702;
      local_148[0] = cVar8;
      FUN_140439160(param_1 + 0x10,local_148);
      FUN_140438c20(local_148);
    }
    cVar8 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
    if (cVar8 == '\x03') {
      FUN_1406a1ac0(param_1 + 0x10);
    }
  }
LAB_142806ac1:
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142806af0 FUN_142806af0 body=655 status=ok
// SIG undefined FUN_142806af0(void)

undefined8 FUN_142806af0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  
  local_f4 = local_f4 & 0xffffff00;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_1a8[0] = 1;
  local_f8 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_1a8);
  FUN_140438c20(local_1a8);
  FUN_142811890(param_1 + -0x158,param_3,param_4);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x188);
    local_1b8 = (longlong *)0x0;
    plVar7 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (local_1b8 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
        LOCK();
        bVar8 = iVar5 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar8) {
          plVar7 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            local_1b8 = *(longlong **)(param_1 + 0x180);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_1b0 = plVar7;
    FSlateApplication::SetKeyboardFocus(DAT_1469f4590,&local_1b8,2);
    plVar3 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b0)(local_1b0);
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
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
    lVar6 = param_1 + -0x150;
    if (param_1 == 0x158) {
      lVar6 = 0;
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x60))
                      (*(longlong **)(param_1 + -0x100),lVar6,*(undefined1 *)(param_4 + 0x5d),
                       param_4 + 0x60,*(undefined1 *)(param_4 + 0x68));
    if (cVar4 == '\0') {
      local_34 = local_34 & 0xffffff00;
      local_e8[0] = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_68 = 0;
      local_60 = 0;
      local_38 = 0x20702;
      FUN_140439160(param_1 + 0x10,local_e8);
      FUN_140438c20(local_e8);
    }
  }
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142806d80 FUN_142806d80 body=990 status=ok
// SIG undefined FUN_142806d80(void)

undefined8 FUN_142806d80(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float local_res14;
  undefined8 in_stack_fffffffffffffd98;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  uint local_164;
  char local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_138;
  undefined8 local_130;
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
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  uint local_a4;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  local_164 = local_164 & 0xffffff00;
  plVar11 = (longlong *)0x0;
  local_210 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_218[0] = 1;
  local_168 = 0x20702;
  FUN_140439160(param_1 + 0x10,local_218);
  FUN_140438c20(local_218);
  FUN_142811890(param_1 + -0x158,param_3,param_4);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) != 0) {
    if (((*(int *)(param_1 + -0x20) != 0) && (*(longlong **)(param_1 + -0x28) != (longlong *)0x0))
       && (cVar9 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x18))(), cVar9 != '\0')) {
      plVar7 = *(longlong **)(param_4 + 0x48);
      local_238 = *(undefined8 *)(param_4 + 0x38);
      local_230 = *(undefined8 *)(param_4 + 0x40);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      uVar16 = *(undefined4 *)(param_4 + 0xc);
      uVar15 = *(undefined8 *)(param_1 + 0x118);
      if (*(int *)(param_1 + -0x20) != 0) {
        plVar11 = *(longlong **)(param_1 + -0x28);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_228 = plVar7;
      cVar9 = (**(code **)(*plVar11 + 0x38))(plVar11,uVar16,&local_238,0,uVar15);
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar7 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (cVar9 != '\0') goto LAB_14280713c;
    }
    uVar4 = *(undefined4 *)(param_4 + 0x54);
    uVar5 = *(undefined4 *)(param_4 + 0x50);
    uVar3 = *(undefined4 *)(param_4 + 0x58);
    fVar13 = *(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
             *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_4 + 0xc);
    fVar14 = 1.0 / fVar13;
    local_res10 = (*(float *)(param_3 + 0x28) * fVar14 *
                   (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) -
                  *(float *)(param_3 + 0x24) * fVar14 *
                  (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30))) *
                  *(float *)(param_3 + 8);
    local_res14 = ((*(float *)(param_4 + 0x1c) / fVar13 - fVar14 * *(float *)(param_3 + 0x30)) *
                   *(float *)(param_3 + 0x1c) -
                  *(float *)(param_3 + 0x20) * fVar14 *
                  (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c))) *
                  *(float *)(param_3 + 8);
    lVar8 = **(longlong **)(param_1 + -0x100);
    puVar10 = (undefined8 *)FDateTime::Now(local_220);
    lVar12 = param_1 + -0x150;
    if (param_1 == 0x158) {
      lVar12 = 0;
    }
    cVar9 = (**(code **)(lVar8 + 0x58))
                      (*(undefined8 *)(param_1 + -0x100),lVar12,uVar6,uVar5,CONCAT44(uVar16,1),
                       &local_res10,uVar3,*puVar10,uVar4);
    if (cVar9 == '\0') {
      local_a4 = local_a4 & 0xffffff00;
      local_128 = 0;
      uStack_120 = 0;
      local_150 = 0;
      local_148 = 0;
      local_138 = 0;
      local_130 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0x20702;
      local_158[0] = cVar9;
      FUN_140439160(param_1 + 0x10,local_158);
      FUN_140438c20(local_158);
    }
  }
LAB_14280713c:
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142807160 FUN_142807160 body=1181 status=ok
// SIG undefined FUN_142807160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142807160(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_388 [32];
  ulonglong local_368;
  float *local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_338;
  float local_330;
  float local_32c;
  undefined8 local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  uint local_254;
  undefined1 local_248 [8];
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  uint local_194;
  undefined1 local_188 [192];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  plVar12 = (longlong *)0x0;
  local_308[0] = 1;
  local_300 = 0;
  local_254 = local_254 & 0xffffff40 | 0x40;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0x20702;
  local_338 = param_3;
  FUN_140459130(param_1 + 0x10,local_308);
  FUN_140438c20(local_308);
  *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
  FUN_142811890(param_1 + -0x158,param_3,param_4);
  FGeometry::operator=(param_1 + 0x120,param_3);
  if (*(longlong *)(param_1 + -0x100) != 0) {
    if (((*(int *)(param_1 + -0x20) != 0) && (*(longlong **)(param_1 + -0x28) != (longlong *)0x0))
       && (cVar9 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x18))(), cVar9 != '\0')) {
      plVar7 = *(longlong **)(param_4 + 0x48);
      local_328 = *(undefined8 *)(param_4 + 0x38);
      local_320 = *(undefined8 *)(param_4 + 0x40);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      uVar3 = *(undefined4 *)(param_4 + 0xc);
      local_368 = *(ulonglong *)(param_1 + 0x118);
      if (*(int *)(param_1 + -0x20) != 0) {
        plVar12 = *(longlong **)(param_1 + -0x28);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_318 = plVar7;
      cVar9 = (**(code **)(*plVar12 + 0x38))(plVar12,uVar3,&local_328,0);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar7 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        param_3 = local_338;
        if ((int)lVar14 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          param_3 = local_338;
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            param_3 = local_338;
          }
        }
      }
      if (cVar9 != '\0') goto LAB_1428075cc;
    }
    uVar4 = *(undefined4 *)(param_4 + 0x54);
    fVar15 = *(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
             *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24);
    fVar16 = 1.0 / fVar15;
    uVar3 = *(undefined4 *)(param_4 + 0x58);
    local_330 = ((*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
                 *(float *)(param_3 + 0x28) * fVar16 -
                (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) *
                *(float *)(param_3 + 0x24) * fVar16) * *(float *)(param_3 + 8);
    local_32c = ((*(float *)(param_4 + 0x1c) / fVar15 - fVar16 * *(float *)(param_3 + 0x30)) *
                 *(float *)(param_3 + 0x1c) -
                (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) *
                *(float *)(param_3 + 0x20) * fVar16) * *(float *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_4 + 0x50);
    uVar6 = *(undefined4 *)(param_4 + 0xc);
    lVar8 = **(longlong **)(param_1 + -0x100);
    puVar10 = (undefined8 *)FDateTime::Now(local_310);
    lVar14 = param_1 + -0x150;
    local_350 = *puVar10;
    if (param_1 == 0x158) {
      lVar14 = 0;
    }
    local_360 = &local_330;
    local_368 = local_368 & 0xffffffff00000000;
    local_358 = uVar3;
    local_348 = uVar4;
    cVar9 = (**(code **)(lVar8 + 0x58))(*(undefined8 *)(param_1 + -0x100),lVar14,uVar6,uVar5);
    if (cVar9 == '\0') {
      local_194 = local_194 & 0xffffff00;
      local_248[0] = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_240 = 0;
      local_238 = 0;
      local_228 = 0;
      local_220 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_198 = 0x20702;
      FUN_140439160(param_1 + 0x10,local_248);
      puVar13 = local_248;
    }
    else {
      cVar9 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
      if (cVar9 != '\x03') goto LAB_1428075cc;
      local_338 = CONCAT44((int)ROUND(local_32c * 2.0 + 0.5) >> 1,
                           (int)ROUND(local_330 * 2.0 + 0.5) >> 1);
      uVar11 = FUN_1427f3df0(param_1 + -0x158,local_188,local_338);
      FUN_140439160(param_1 + 0x10,uVar11);
      puVar13 = local_188;
    }
    FUN_140438c20(puVar13);
  }
LAB_1428075cc:
  FUN_140438260(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142807600 FUN_142807600 body=38 status=ok
// SIG undefined FUN_142807600(void)

void FUN_142807600(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong local_res8 [4];
  
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  local_res8[0] = param_3;
  FUN_14288e230(param_1 + 8,local_res8);
  return;
}



// FUNCTION 142807630 FUN_142807630 body=351 status=ok
// SIG undefined FUN_142807630(void)

undefined1 * FUN_142807630(longlong param_1,undefined1 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  
  plVar1 = *(longlong **)(param_1 + -0x100);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = param_1 + -0x150;
    if (param_1 + -0x158 == 0) {
      lVar5 = 0;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,lVar5);
    cVar3 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))();
    if ((cVar3 == '\x01') ||
       (cVar3 = (**(code **)(**(longlong **)(param_1 + -0x100) + 0x178))(), cVar3 == '\x02')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((*param_3 == 0) && ((*(char *)(param_1 + 0x1a1) != '\0' || (bVar2)))) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)(param_1 + -0x150) + 0x20))(param_1 + -0x150,local_res20);
      local_res8._4_4_ = (int)((ulonglong)*puVar4 >> 0x20);
      local_res8 = CONCAT44(local_res8._4_4_ / 2,(int)*puVar4 / 2);
      FUN_1427f3df0(param_1 + -0x158,param_2,local_res8);
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1428077d0 FUN_1428077d0 body=132 status=ok
// SIG undefined FUN_1428077d0(void)

void FUN_1428077d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + -0x150);
  if (*(char *)(param_1 + 0x1a1) == '\0') {
    cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4);
    uVar3 = 0;
    if (cVar2 == '\0') goto LAB_142807804;
  }
  uVar3 = 1;
LAB_142807804:
  *(undefined1 *)(param_1 + 0x1a1) = uVar3;
  TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::Empty
            (param_1 + 200,0);
  plVar1 = *(longlong **)(param_1 + -0x100);
  if (plVar1 != (longlong *)0x0) {
    if (param_1 == 0x158) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0xd8))(plVar1,plVar4,param_2);
  }
  return;
}



// FUNCTION 142807860 FUN_142807860 body=263 status=ok
// SIG undefined FUN_142807860(void)

undefined8 FUN_142807860(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    local_18 = DAT_1469eb218;
    plStack_10 = DAT_1469eb220;
    if (DAT_1469eb220 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
      UNLOCK();
    }
    plVar7 = &local_18;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_20 = (longlong *)param_2[1];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    plVar7 = &local_28;
    bVar6 = true;
    bVar5 = false;
    local_28 = lVar4;
  }
  FUN_1419a0ce0(*(undefined8 *)(param_1 + 0x3c0),plVar7);
  plVar7 = plStack_10;
  if (bVar5) {
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
  plVar7 = local_20;
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
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
  return 1;
}



// FUNCTION 142807970 OnWindowBackBufferResourceDestroyed body=203 status=ok
// SIG undefined OnWindowBackBufferResourceDestroyed(void)

void FSceneViewport::OnWindowBackBufferResourceDestroyed(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  if (*(undefined8 **)(param_1 + 0xc0) == puVar3) {
    TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(param_1 + 0xc0),0);
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          return;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142807a60 FUN_142807a60 body=2781 status=ok
// SIG undefined FUN_142807a60(void)

void FUN_142807a60(undefined2 *param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5,longlong *param_6)

{
  int *piVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  void *pvVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  float *pfVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined2 *puVar21;
  int iVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined2 *local_res8;
  longlong local_res10;
  undefined2 *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  longlong **local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined2 *local_50;
  undefined4 local_48;
  
  local_res8 = param_1;
  local_res10 = param_2;
  plVar9 = (longlong *)FActiveSound::FindWaveInstance(param_4,param_3);
  plVar11 = (longlong *)0x0;
  uVar15 = 0;
  if (plVar9 == (longlong *)0x0) {
    if ((*(byte *)((longlong)param_4 + 0x99) & 1) == 0) {
      FActiveSound::ApplyRadioFilter(param_4,param_5);
    }
    local_80 = param_3;
    lVar10 = operator_new(0x1a8);
    if (lVar10 != 0) {
      plVar11 = (longlong *)FWaveInstance::FWaveInstance(lVar10,param_4);
    }
    plVar11[0x33] = local_80;
    local_90 = &local_80;
    local_88 = &local_98;
    local_98 = plVar11;
    TSet<TTuple<unsigned___int64,FWaveInstance_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FWaveInstance_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,FWaveInstance_*_const_&>_>
              (param_4 + 0x11a,&local_a8,&local_90,0);
    plVar9 = local_98;
    if (((*(byte *)((longlong)param_4 + 0x99) & 4) != 0) && (0 < *(int *)(param_1 + 0x7c))) {
      local_6c = param_4[1];
      local_50 = param_1 + 0x78;
      local_60 = param_4[0x43];
      local_5c = *(undefined4 *)(param_1 + 0x28);
      local_78 = *(undefined8 *)(param_4 + 6);
      local_70 = *param_4;
      local_68 = local_98;
      local_48 = param_4[0x2c];
      local_58 = local_58 ^ (*(byte *)(param_1 + 0x5a) ^ local_58) & 3;
      FUN_142858ae0(&local_78);
      plVar9 = local_98;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0xb3) & 1) != 0) ||
     ((*(byte *)((longlong)param_5 + 0x19c) & 4) != 0)) {
    *(uint *)((longlong)plVar9 + 0xa4) = *(uint *)((longlong)plVar9 + 0xa4) & 0xfffffff7;
  }
  uVar14 = *(uint *)((longlong)plVar9 + 0xa4);
  if ((uVar14 & 8) != 0) {
    return;
  }
  *(float *)(plVar9 + 0xd) = *(float *)(param_1 + 0x6e) * *(float *)((longlong)param_5 + 0x5c);
  *(undefined4 *)(plVar9 + 0xe) = *(undefined4 *)((longlong)param_5 + 100);
  *(int *)((longlong)plVar9 + 0x6c) = (int)param_5[0xc];
  *(int *)((longlong)plVar9 + 0x74) = (int)param_5[0xd];
  *(float *)(plVar9 + 0x1c) = *(float *)(param_1 + 0x70) * *(float *)((longlong)param_5 + 0x7c);
  uVar14 = (*(int *)((longlong)param_5 + 0x19c) << 3 ^ uVar14) & 0x40 ^ uVar14;
  *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
  uVar14 = uVar14 ^ (*(int *)((longlong)param_5 + 0x19c) << 3 ^ uVar14) & 0x80;
  *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
  *(int *)((longlong)plVar9 + 0xcc) = (int)param_5[0x31];
  *(undefined4 *)(plVar9 + 0x1a) = *(undefined4 *)((longlong)param_5 + 0x194);
  *(undefined4 *)(plVar9 + 0x1b) = *(undefined4 *)((longlong)param_5 + 0x18c);
  *(int *)((longlong)plVar9 + 0xdc) = (int)param_5[0x32];
  *(int *)((longlong)plVar9 + 0xd4) = (int)param_5[0x33];
  uVar14 = (*(byte *)((longlong)param_4 + 0x99) ^ uVar14) & 2 ^ uVar14;
  *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
  *(int *)(plVar9 + 0x14) = (int)param_5[0x10];
  *(undefined1 *)(plVar9 + 0x34) = *(undefined1 *)(param_4 + 0x27);
  *(undefined4 *)(plVar9 + 0x1e) = *(undefined4 *)((longlong)param_5 + 0x84);
  *(int *)((longlong)plVar9 + 0xf4) = (int)param_5[0x2c];
  *(int *)(plVar9 + 0x1f) = (int)param_5[0x11];
  *(undefined4 *)((longlong)plVar9 + 0xfc) = *(undefined4 *)((longlong)param_5 + 0x8c);
  *(int *)(plVar9 + 0x20) = (int)param_5[0x12];
  if (*(int *)(param_1 + 0x72) < 3) {
    plVar9[9] = param_5[0x30];
  }
  plVar9[1] = param_5[2];
  if (param_5[2] == 0) {
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    *(undefined4 *)(plVar9 + 0x13) = 0;
    uVar14 = ((uint)*(byte *)((longlong)param_4 + 0x99) << 2 ^ uVar14) & 0x100 ^ uVar14;
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
    uVar14 = uVar14 ^ ((uint)*(byte *)((longlong)param_4 + 0x9a) << 9 ^ uVar14) & 0x200;
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
    uVar14 = uVar14 ^ ((uint)*(byte *)((longlong)param_4 + 0x9a) << 9 ^ uVar14) & 0x400;
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
    uVar14 = uVar14 ^ ((uint)*(byte *)((longlong)param_4 + 0x9a) << 9 ^ uVar14) & 0x800;
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14;
    *(uint *)((longlong)plVar9 + 0xa4) =
         ((uint)*(byte *)((longlong)param_4 + 0x9a) << 9 ^ uVar14) & 0x1000 ^ uVar14;
    if (*(char *)((longlong)param_4 + 0x99) < '\0') goto LAB_14280801f;
LAB_142807eb9:
    uVar24 = (undefined4)param_5[0xf];
  }
  else {
    pfVar12 = (float *)FAudioDevice::GetSoundClassCurrentProperties(param_2);
    fVar25 = *(float *)(plVar9 + 0xe);
    fVar2 = *pfVar12;
    *(float *)(plVar9 + 0xe) = fVar25 * fVar2;
    *(float *)(plVar9 + 0x1c) = pfVar12[1] * *(float *)(plVar9 + 0x1c);
    *(float *)(plVar9 + 0x11) = pfVar12[4];
    fVar23 = pfVar12[5] * *(float *)((longlong)param_5 + 100);
    *(float *)((longlong)plVar9 + 0x8c) = fVar23;
    fVar26 = pfVar12[6] * *(float *)((longlong)param_5 + 100);
    *(float *)(plVar9 + 0x12) = fVar26;
    *(float *)((longlong)plVar9 + 0x94) = pfVar12[2];
    *(float *)(plVar9 + 0x13) = pfVar12[3];
    if (((*(byte *)((longlong)param_4 + 0x9a) & 1) != 0) || (((uint)pfVar12[7] & 4) != 0)) {
      uVar15 = 0x200;
    }
    uVar14 = *(uint *)((longlong)plVar9 + 0xa4);
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14 & 0xfffffdff | uVar15;
    uVar20 = 0;
    if (((*(byte *)((longlong)param_4 + 0x9a) & 2) != 0) ||
       (uVar17 = uVar20, ((uint)pfVar12[7] & 8) != 0)) {
      uVar17 = 0x400;
    }
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14 & 0xfffff9ff | uVar15 | uVar17;
    if (((*(byte *)((longlong)param_4 + 0x9a) & 8) != 0) ||
       (uVar18 = uVar20, ((uint)pfVar12[9] & 1) != 0)) {
      uVar18 = 0x1000;
    }
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14 & 0xffffe9ff | uVar15 | uVar17 | uVar18;
    if (((*(byte *)((longlong)param_4 + 0x99) & 0x40) != 0) ||
       (uVar19 = uVar20, ((uint)pfVar12[7] & 1) != 0)) {
      uVar19 = 0x100;
    }
    *(uint *)((longlong)plVar9 + 0xa4) = uVar14 & 0xffffe8ff | uVar15 | uVar17 | uVar18 | uVar19;
    if (((*(byte *)((longlong)param_4 + 0x9a) & 4) != 0) || (((uint)pfVar12[7] & 0x10) != 0)) {
      uVar20 = 0x800;
    }
    *(uint *)((longlong)plVar9 + 0xa4) =
         uVar14 & 0xffffe0ff | uVar15 | uVar17 | uVar18 | uVar19 | uVar20;
    if ((((uint)pfVar12[7] & 0x10) != 0) && ((*(byte *)((longlong)param_4 + 0x9a) & 4) == 0)) {
      *(undefined1 *)((longlong)plVar9 + 0x104) = 2;
      *(float *)(plVar9 + 0x32) = pfVar12[8];
    }
    *(uint *)(plVar9 + 0x19) = (uint)*(byte *)(pfVar12 + 10);
    if (((uint)pfVar12[9] & 2) != 0) {
      *(float *)(plVar9 + 0xe) = fVar25 * fVar2 * *(float *)((longlong)param_5 + 0x74);
      *(float *)((longlong)plVar9 + 0x8c) = fVar23 * *(float *)((longlong)param_5 + 0x74);
      *(float *)(plVar9 + 0x12) = fVar26 * *(float *)((longlong)param_5 + 0x74);
    }
    if ((-1 < *(char *)((longlong)param_4 + 0x99)) && (((uint)pfVar12[7] & 2) == 0))
    goto LAB_142807eb9;
LAB_14280801f:
    uVar24 = 0x7f7fffff;
  }
  *(undefined4 *)((longlong)plVar9 + 0x84) = uVar24;
  plVar11 = plVar9 + 10;
  auVar3 = *(undefined1 (*) [16])(param_5 + 6);
  local_b0 = auVar3._8_4_;
  uVar15 = *(uint *)((longlong)plVar9 + 0xa4) & 0xffffffef | 4;
  *(uint *)((longlong)plVar9 + 0xa4) = uVar15;
  *(longlong *)((longlong)plVar9 + 0xe4) = auVar3._0_8_;
  *(int *)((longlong)plVar9 + 0xec) = local_b0;
  *(uint *)((longlong)plVar9 + 0xa4) =
       (*(int *)((longlong)param_5 + 0x19c) << 4 ^ uVar15) & 0x20 ^ uVar15;
  *(undefined4 *)(plVar9 + 0x15) = *(undefined4 *)((longlong)param_5 + 0x164);
  *plVar9 = (longlong)param_1;
  if (plVar11 != param_5) {
    iVar4 = (int)param_5[1];
    pvVar5 = (void *)*param_5;
    *(int *)(plVar9 + 0xb) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)plVar9 + 0x5c) == 0)) {
      *(undefined4 *)((longlong)plVar9 + 0x5c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar11,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*plVar11,pvVar5,(longlong)iVar4 << 4);
    }
  }
  uVar24 = 0;
  if (((*(byte *)((longlong)param_1 + 0xb3) & 1) != 0) ||
     ((*(byte *)((longlong)param_5 + 0x19c) & 4) != 0)) {
    uVar24 = 2;
  }
  *(undefined4 *)((longlong)plVar9 + 0x9c) = uVar24;
  uVar15 = (*(int *)((longlong)param_5 + 0x19c) << 8 ^ *(uint *)((longlong)plVar9 + 0xa4)) & 0x2000
           ^ *(uint *)((longlong)plVar9 + 0xa4);
  *(uint *)((longlong)plVar9 + 0xa4) = uVar15;
  if ((((uVar15 & 0x20) != 0) && ((*(byte *)((longlong)param_5 + 0x19c) & 0x40) != 0)) &&
     (*(int *)(param_1 + 0x72) == 2)) {
    fVar25 = (float)FWaveInstance::GetVolume(plVar9);
    *(float *)(plVar9 + 0xd) = fVar25 * 0.5;
  }
  plVar11 = plVar9 + 0x2f;
  *(char *)((longlong)plVar9 + 0x104) = (char)param_5[0x1a];
  *(undefined4 *)(plVar9 + 0x32) = *(undefined4 *)((longlong)param_5 + 0xe4);
  *(char *)(plVar9 + 0x2e) = (char)param_5[0x28];
  *(undefined1 *)((longlong)plVar9 + 0x171) = *(undefined1 *)((longlong)param_5 + 0x141);
  *(undefined4 *)((longlong)plVar9 + 0x174) = *(undefined4 *)((longlong)param_5 + 0x144);
  if (plVar11 != param_5 + 0x29) {
    iVar4 = (int)param_5[0x2a];
    pvVar5 = (void *)param_5[0x29];
    *(int *)(plVar9 + 0x30) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)plVar9 + 0x184) == 0)) {
      *(undefined4 *)((longlong)plVar9 + 0x184) = 0;
    }
    else {
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(plVar11,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*plVar11,pvVar5,(longlong)iVar4 * 0x1c);
    }
  }
  plVar9[0x31] = param_5[0x2b];
  plVar9[0x21] = *(longlong *)((longlong)param_5 + 0xd4);
  plVar9[0x22] = *(longlong *)((longlong)param_5 + 0xdc);
  *(undefined4 *)((longlong)plVar9 + 0x7c) = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(int *)(plVar9 + 0x10) = (int)param_5[0xe];
  plVar9[2] = param_5[0x13];
  FUN_1408e22e0(plVar9 + 3,param_5 + 0x14);
  if ((*(byte *)(plVar9[0xc] + 0x9a) & 0x10) == 0) {
    *(uint *)((longlong)plVar9 + 0xa4) =
         *(uint *)((longlong)plVar9 + 0xa4) ^
         (*(uint *)((longlong)plVar9 + 0xa4) ^ *(uint *)((longlong)param_5 + 0x19c)) & 1;
  }
  piVar13 = (int *)((longlong)plVar9 + 0x34);
  puVar16 = (undefined2 *)((longlong)param_5 - (longlong)plVar9);
  lVar10 = 2;
  local_b8 = puVar16;
  do {
    piVar1 = piVar13 + -3;
    if (piVar1 != (int *)((longlong)(piVar13 + 0x1f) + (longlong)puVar16)) {
      iVar4 = *(int *)((longlong)(piVar13 + 0x21) + (longlong)puVar16);
      local_a8 = *(void **)((longlong)(piVar13 + 0x1f) + (longlong)puVar16);
      piVar13[-1] = iVar4;
      if ((iVar4 == 0) && (*piVar13 == 0)) {
        *piVar13 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(piVar1,iVar4);
        _guard_xfg_dispatch_icall_nop(*(void **)piVar1,local_a8,(longlong)iVar4 << 4);
        puVar16 = local_b8;
      }
    }
    lVar7 = local_res10;
    piVar13 = piVar13 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  cVar8 = FAudioDevice::IsHRTFEnabledForAll(local_res10);
  puVar16 = local_res8;
  if ((cVar8 == '\0') || (uVar24 = 1, *(int *)((longlong)param_5 + 0x164) != 0)) {
    uVar24 = *(undefined4 *)((longlong)param_5 + 0x164);
  }
  *(undefined4 *)(plVar9 + 0x15) = uVar24;
  plVar9[0x16] = param_5[0x2d];
  plVar9[0x17] = param_5[0x2e];
  plVar9[0x18] = param_5[0x2f];
  *(uint *)((longlong)plVar9 + 0xa4) =
       *(uint *)((longlong)plVar9 + 0xa4) ^
       ((uint)*(byte *)(local_res8 + 0x5a) << 0xc ^ *(uint *)((longlong)plVar9 + 0xa4)) & 0x8000;
  if (((*(byte *)((longlong)param_4 + 0x99) & 4) == 0) ||
     (((*(byte *)((longlong)param_4 + 0x99) & 8) == 0 && (*(int *)(local_res8 + 0x7c) < 1)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  fVar25 = (float)FWaveInstance::GetVolumeWithDistanceAttenuation(plVar9);
  if ((0.0001 < fVar25) ||
     ((((*(byte *)(puVar16 + 0x5a) & 4) != 0 || (bVar6)) && ((*(byte *)(lVar7 + 0x368) & 4) != 0))))
  {
    iVar4 = (int)param_6[1];
    *(int *)(param_6 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_6 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_6,iVar4);
    }
    *(longlong **)(*param_6 + (longlong)iVar4 * 8) = plVar9;
  }
  else if (*(int *)((longlong)plVar9 + 0x9c) != 2) goto LAB_142808339;
  *(byte *)(param_4 + 0x26) = *(byte *)(param_4 + 0x26) & 0xdf;
LAB_142808339:
  if (((2 < *(int *)(puVar16 + 0x72)) && ((*(uint *)((longlong)plVar9 + 0xa4) & 0x20) != 0)) &&
     ((*(uint *)((longlong)plVar9 + 0xa4) >> 0xe & 1) == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b15fe0) &&
       (_Init_thread_header(&DAT_146b15fe0), DAT_146b15fe0 == -1)) {
      atexit(FUN_143ebaca0);
      _Init_thread_footer(&DAT_146b15fe0);
    }
    piVar13 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                               (&DAT_146534e80,&local_res8,puVar16);
    if (*piVar13 == -1) {
      local_res8 = *(undefined2 **)(puVar16 + 0xc);
      FName::ToString(&local_res8,&local_b8);
      puVar21 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar21 = local_b8;
      }
      FString::PrintfImpl(&local_a8,
                          L"Spatialisation on sounds with channels greater than 2 is not supported. SoundWave: %s"
                          ,puVar21);
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (*(undefined2 **)(param_4 + 4) != puVar16) {
        local_res8 = *(undefined2 **)(*(undefined2 **)(param_4 + 4) + 0xc);
        FName::ToString(&local_res8,&local_90);
        plVar11 = (longlong *)&DAT_143f3eda8;
        if ((int)local_88 != 0) {
          plVar11 = local_90;
        }
        FString::PrintfImpl(&local_b8,L" SoundCue: %s",plVar11);
        iVar4 = local_a0;
        puVar21 = local_b8;
        if (local_b0 == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = local_b0 + -1;
        }
        if (iVar22 != 0) {
          lVar10 = (longlong)local_a0;
          local_a0 = (uint)(local_a0 == 0) + iVar22 + local_a0;
          if (local_9c < local_a0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar4);
          }
          pvVar5 = (void *)((longlong)local_a8 + (lVar10 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar5,puVar21,(longlong)iVar22 * 2);
          *(undefined2 *)((longlong)pvVar5 + (longlong)iVar22 * 2) = 0;
        }
        if (local_b8 != (undefined2 *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_90 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      local_b8 = puVar16;
      FUN_14058c900(&DAT_146534e80,&local_res8,&local_b8,0);
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    *(uint *)((longlong)plVar9 + 0xa4) = *(uint *)((longlong)plVar9 + 0xa4) | 0x4000;
  }
  return;
}



// FUNCTION 142808540 FUN_142808540 body=172 status=ok
// SIG undefined FUN_142808540(void)

void FUN_142808540(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < (int)param_1[6]) {
    lVar4 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar2 <= iVar3) {
        return;
      }
      plVar1 = *(longlong **)(lVar4 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,param_3 << ((byte)iVar3 & 0x3f) ^ (ulonglong)plVar1,param_4,
                   param_5,param_6);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 1428085f0 FUN_1428085f0 body=381 status=ok
// SIG undefined FUN_1428085f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428085f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [20];
  longlong local_148;
  longlong local_128 [2];
  undefined1 local_118 [24];
  undefined1 local_100 [180];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar4 = (longlong *)0x0;
  plVar6 = plVar4;
  if ((*(byte *)(param_4 + 0x98) & 2) != 0) {
    if ((*(byte *)(param_1 + 0x5d) & 1) == 0) {
      plVar6 = (longlong *)0x0;
      if (param_1[7] != 0) {
        plVar6 = (longlong *)(param_1[7] + 0x28);
      }
    }
    else {
      plVar6 = param_1 + 8;
    }
  }
  FSoundParseParameters::FSoundParseParameters(local_1e8,param_5);
  if (plVar6 == (longlong *)0x0) {
    local_4c = local_4c & 0xfffffffd;
  }
  else {
    FActiveSound::ApplyAttenuation(param_4,local_1e8,*(undefined8 *)(param_2 + 0x128),plVar6);
  }
  plVar6 = plVar4;
  if (0 < (int)param_1[6]) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar2 <= (int)plVar4) break;
      plVar1 = *(longlong **)((longlong)plVar6 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_1f0 = param_6;
        local_1f8 = local_1e8;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,param_3 << ((byte)plVar4 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      uVar3 = (int)plVar4 + 1;
      plVar4 = (longlong *)(ulonglong)uVar3;
      plVar6 = plVar6 + 1;
    } while ((int)uVar3 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_100);
  lVar5 = 2;
  puVar7 = local_118;
  do {
    plVar6 = (longlong *)(puVar7 + -0x10);
    puVar7 = puVar7 + -0x10;
    lVar5 = lVar5 + -1;
    if (*plVar6 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142808770 FUN_142808770 body=159 status=ok
// SIG undefined FUN_142808770(void)

void FUN_142808770(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  uVar3 = 2;
  cVar2 = FActiveSound::GetBoolParameter(param_4,*(undefined8 *)(param_1 + 0x38),local_res8);
  if (cVar2 != '\0') {
    uVar3 = (uint)(local_res8[0] == '\0');
  }
  if (((int)uVar3 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar3 * 8),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x2b0))
              (plVar1,param_2,param_3 << (sbyte)uVar3 ^ (ulonglong)plVar1,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 142808810 FUN_142808810 body=1119 status=ok
// SIG undefined FUN_142808810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142808810(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong local_250;
  int local_248;
  undefined4 local_244;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  int *local_220;
  undefined8 local_218;
  longlong *local_210;
  int *local_208;
  longlong local_1f8 [12];
  float local_194;
  longlong local_158;
  longlong local_138 [2];
  undefined1 local_128 [24];
  undefined1 local_110 [184];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  plVar1 = (longlong *)(param_4 + 0x4b8);
  local_218 = param_5;
  local_240 = param_6;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar13 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar13 = param_4 + 0x4f0;
    }
    iVar3 = *(int *)(lVar13 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                              (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        piVar7 = (int *)(*plVar1 + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x18) == param_3) {
          if (iVar3 != -1) goto LAB_1428088e3;
          break;
        }
        iVar3 = piVar7[4];
      } while (iVar3 != -1);
    }
  }
  piVar7 = (int *)0x0;
LAB_1428088e3:
  plVar2 = (longlong *)(param_4 + 0x508);
  piVar6 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  local_238 = param_3;
  local_230 = param_4;
  local_210 = param_2;
  if (piVar6 == (int *)0x0) {
    iVar3 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar3 + 0x10;
    if (*(int *)(param_4 + 0x514) < iVar3 + 0x10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
    }
    lVar13 = *plVar2;
    *(undefined8 *)(iVar3 + lVar13) = 0;
    ((undefined8 *)(iVar3 + lVar13))[1] = 0;
    local_228 = &local_238;
    local_220 = &local_248;
    local_248 = iVar3;
    FUN_141f0b300(plVar1,&local_244,&local_228,0);
    piVar7 = (int *)((longlong)local_248 + *(longlong *)(param_4 + 0x508));
    *piVar7 = 1;
    lVar13 = *(longlong *)(param_4 + 0x508);
  }
  else {
    local_248 = *piVar6;
    lVar13 = *plVar2;
    piVar7 = (int *)(lVar13 + local_248);
  }
  local_248 = local_248 + 4;
  lVar5 = (longlong)local_248;
  if (*piVar7 != 0) {
    *(undefined8 *)(lVar5 + lVar13) = 0;
    *piVar7 = 0;
  }
  *(undefined4 *)(lVar5 + 8 + lVar13) = 0;
  local_228 = *(longlong **)(lVar5 + lVar13);
  local_244 = 0;
  if (*(int *)(param_1 + 0x30) <= (int)(uint)local_228) {
    return;
  }
  lVar13 = 2;
  uVar11 = (uint)local_228;
  do {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar11 * 8);
    if (plVar2 != (longlong *)0x0) {
      FSoundParseParameters::FSoundParseParameters(local_1f8,local_218);
      FNotifyBufferFinishedHooks::AddNotify(local_1f8,param_1,local_238);
      local_194 = local_194 * *(float *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar11 * 4);
      iVar3 = *(int *)(param_6 + 8);
      uVar12 = local_238 << ((byte)uVar11 & 0x3f) ^ (ulonglong)plVar2;
      local_250 = local_240;
      local_258 = local_1f8;
      (**(code **)(*plVar2 + 0x2b0))(plVar2,local_210,uVar12,local_230);
      if (iVar3 < *(int *)(local_240 + 8)) {
        if (*(int *)(param_4 + 0x4c0) == *(int *)(param_4 + 0x4ec)) goto LAB_142808b40;
        lVar5 = *(longlong *)(param_4 + 0x4f8);
        if (*(longlong *)(param_4 + 0x4f8) == 0) {
          lVar5 = param_4 + 0x4f0;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)
                                  ((int)((ulonglong)local_238 >> 0x20) * 0x17 + (int)local_238) &
                                 (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
        if (iVar3 == -1) goto LAB_142808b40;
        break;
      }
      FRichCurve::~FRichCurve(local_110);
      lVar5 = 2;
      puVar10 = local_128;
      do {
        plVar2 = (longlong *)(puVar10 + -0x10);
        puVar10 = puVar10 + -0x10;
        lVar5 = lVar5 + -1;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
      } while (lVar5 != 0);
      if (local_158 != 0) {
        FMemory::Free();
      }
      param_6 = local_240;
      if (local_1f8[0] != 0) {
        FMemory::Free();
        param_6 = local_240;
      }
    }
    uVar11 = uVar11 + 1;
    local_228 = (longlong *)(ulonglong)uVar11;
    if (*(int *)(param_1 + 0x30) <= (int)uVar11) {
      return;
    }
  } while( true );
  while (iVar3 = piVar7[4], iVar3 != -1) {
    piVar7 = (int *)(*plVar1 + (longlong)iVar3 * 0x18);
    if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x18) == local_238) {
      if (iVar3 != -1) goto LAB_142808b43;
      break;
    }
  }
LAB_142808b40:
  piVar7 = (int *)0x0;
LAB_142808b43:
  piVar6 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 == (int *)0x0) {
    plVar8 = (longlong *)(local_230 + 0x508);
    iVar3 = *(int *)(local_230 + 0x510);
    *(int *)(local_230 + 0x510) = iVar3 + 0x10;
    if (*(int *)(local_230 + 0x514) < iVar3 + 0x10) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
    }
    lVar5 = *plVar8;
    *(undefined8 *)(iVar3 + lVar5) = 0;
    ((undefined8 *)(iVar3 + lVar5))[1] = 0;
    local_210 = &local_238;
    local_208 = &local_248;
    local_248 = iVar3;
    FUN_141f0b300(plVar1,&local_240,&local_210,0);
    *(undefined4 *)((longlong)local_248 + *plVar8) = 1;
    iVar3 = local_248;
  }
  else {
    iVar3 = *piVar6;
  }
  puVar9 = (ulonglong *)((longlong)(iVar3 + 4) + *(longlong *)(local_230 + 0x508));
  *puVar9 = (ulonglong)local_228;
  *(undefined4 *)(puVar9 + 1) = local_244;
  uVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2,uVar12,local_230);
  *(undefined4 *)(puVar9 + 1) = uVar4;
  FRichCurve::~FRichCurve(local_110);
  puVar10 = local_128;
  do {
    plVar1 = (longlong *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    lVar13 = lVar13 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar13 != 0);
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_1f8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142808c70 FUN_142808c70 body=792 status=ok
// SIG undefined FUN_142808c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142808c70(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined8 local_240;
  int local_238 [2];
  longlong local_230;
  undefined1 local_228 [8];
  undefined8 local_220;
  longlong *local_218;
  int *local_210;
  longlong local_208 [16];
  float local_188;
  longlong local_168;
  longlong local_148 [2];
  undefined1 local_138 [24];
  undefined1 local_120 [184];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_220 = param_6;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar6 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar6 = param_4 + 0x4f0;
    }
    iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar2 != -1) {
      lVar6 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar4 = (int *)(lVar6 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar6 + (longlong)iVar2 * 0x18) == param_3) {
          if (iVar2 != -1) goto LAB_142808d43;
          break;
        }
        iVar2 = piVar4[4];
      } while (iVar2 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_142808d43:
  plVar1 = (longlong *)(param_4 + 0x508);
  piVar3 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  local_230 = param_3;
  if (piVar3 == (int *)0x0) {
    iVar2 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar2 + 0xc;
    if (*(int *)(param_4 + 0x514) < iVar2 + 0xc) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar6 = *plVar1;
    *(undefined8 *)(iVar2 + lVar6) = 0;
    *(undefined4 *)((undefined8 *)(iVar2 + lVar6) + 1) = 0;
    local_218 = &local_230;
    local_210 = local_238;
    local_238[0] = iVar2;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),local_228,&local_218,0);
    piVar4 = (int *)((longlong)local_238[0] + *(longlong *)(param_4 + 0x508));
    *piVar4 = 1;
    lVar6 = *(longlong *)(param_4 + 0x508);
  }
  else {
    local_238[0] = *piVar3;
    lVar6 = *plVar1;
    piVar4 = (int *)(lVar6 + local_238[0]);
  }
  local_238[0] = local_238[0] + 4;
  pfVar5 = (float *)(local_238[0] + lVar6);
  local_240 = local_220;
  if (*piVar4 != 0) {
    *piVar4 = 0;
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar8 = (float)FGenericPlatformMath::SRand();
    fVar9 = fVar8 * (*(float *)(param_1 + 0x38) - fVar9) + fVar9;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if ((0.0 < fVar9) && (fVar9 < *(float *)(param_5 + 0x80) || fVar9 == *(float *)(param_5 + 0x80))
       ) {
      pfVar5[1] = fVar9;
      *pfVar5 = -1.0;
      FSoundParseParameters::FSoundParseParameters(local_208,param_5);
      local_248 = local_208;
      local_188 = local_188 - pfVar5[1];
      FUN_142808540(param_1,param_2,local_230,param_4);
      FUN_1427f0c50(local_208);
      return;
    }
    pfVar5[1] = 0.0;
    *pfVar5 = (fVar9 + *(float *)(param_4 + 0xa8)) - *(float *)(param_5 + 0x80);
  }
  if (*pfVar5 <= *(float *)(param_4 + 0xa8)) {
    FSoundParseParameters::FSoundParseParameters(local_208,param_5);
    local_248 = local_208;
    local_188 = local_188 - pfVar5[1];
    FUN_142808540(param_1,param_2,local_230,param_4);
    FRichCurve::~FRichCurve(local_120);
    lVar6 = 2;
    puVar7 = local_138;
    do {
      plVar1 = (longlong *)(puVar7 + -0x10);
      puVar7 = puVar7 + -0x10;
      lVar6 = lVar6 + -1;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
    } while (lVar6 != 0);
    if (local_168 != 0) {
      FMemory::Free();
    }
    if (local_208[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    *(byte *)(param_4 + 0x98) = *(byte *)(param_4 + 0x98) & 0xdf;
  }
  return;
}



// FUNCTION 142808f90 FUN_142808f90 body=341 status=ok
// SIG undefined FUN_142808f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142808f90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [20];
  longlong local_148;
  longlong local_128 [2];
  undefined1 local_118 [24];
  undefined1 local_100 [180];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (plVar1 = (longlong *)
               UDialogueWave::GetWaveFromContext(*(longlong *)(param_1 + 0x38),param_1 + 0x40),
     plVar1 != (longlong *)0x0)) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      local_1f0 = param_6;
      local_1f8 = (longlong *)param_5;
      (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,param_3,param_4);
    }
    else {
      FSoundParseParameters::FSoundParseParameters(local_1e8,param_5);
      local_1f8 = local_1e8;
      local_4c = local_4c | 4;
      local_1f0 = param_6;
      (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,param_3,param_4);
      FRichCurve::~FRichCurve(local_100);
      lVar2 = 2;
      puVar3 = local_118;
      do {
        plVar1 = (longlong *)(puVar3 + -0x10);
        puVar3 = puVar3 + -0x10;
        lVar2 = lVar2 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar2 != 0);
      if (local_148 != 0) {
        FMemory::Free();
      }
      if (local_1e8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1428090f0 FUN_1428090f0 body=1203 status=ok
// SIG undefined FUN_1428090f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428090f0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  longlong *local_2b0;
  int local_2a8 [2];
  undefined8 local_2a0;
  longlong local_298;
  longlong local_290;
  longlong *local_288;
  int *local_280;
  longlong local_278 [11];
  float local_21c;
  longlong local_1d8;
  longlong local_1b8 [2];
  undefined1 local_1a8 [24];
  undefined1 local_190 [184];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  uVar12 = 0;
  local_288 = param_6;
  uVar11 = 0;
  local_298 = param_5;
  local_2a0 = param_2;
  local_290 = param_3;
  FSoundParseParameters::FSoundParseParameters(local_278,param_5);
  uVar14 = uVar12;
  uVar16 = uVar12;
  uVar17 = uVar12;
  if (0 < (int)param_1[6]) {
    do {
      if (*(longlong *)(uVar14 + param_1[5]) != 0) {
        lVar10 = param_1[7];
        fVar19 = *(float *)(uVar12 + lVar10);
        fVar1 = *(float *)(uVar12 + 4 + lVar10);
        fVar2 = *(float *)(uVar12 + 8 + lVar10);
        fVar3 = *(float *)(uVar12 + 0xc + lVar10);
        fVar18 = (float)(**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_4,param_5);
        cVar6 = (**(code **)(*param_1 + 0x2f8))(param_1,param_4);
        if (cVar6 == '\0') {
          fVar19 = *(float *)(uVar12 + 0x10 + param_1[7]);
        }
        else if ((fVar18 < fVar19) || (fVar1 < fVar18)) {
          if ((fVar18 < fVar2) || (fVar3 < fVar18)) {
            if ((fVar18 < fVar1) || (fVar2 < fVar18)) goto LAB_1428092c7;
            fVar19 = *(float *)(uVar12 + 0x10 + param_1[7]);
          }
          else if (fVar3 <= 0.0) {
LAB_1428092c7:
            fVar19 = 0.0;
          }
          else {
            fVar19 = (1.0 - (fVar18 - fVar2) / (fVar3 - fVar2)) *
                     *(float *)(uVar12 + 0x10 + param_1[7]);
          }
        }
        else if (fVar1 <= 0.0) {
          fVar19 = 1.0;
        }
        else {
          fVar19 = ((fVar18 - fVar19) / (fVar1 - fVar19)) * *(float *)(uVar12 + 0x10 + param_1[7]);
        }
        local_21c = fVar19 * *(float *)(param_5 + 0x5c);
        bVar4 = *(byte *)(param_4 + 0x98);
        local_2b0 = local_288;
        uVar15 = (uint)uVar17 + 1;
        if (fVar19 <= 0.0) {
          uVar15 = (uint)uVar17;
        }
        uVar17 = (ulonglong)uVar15;
        local_2b8 = local_278;
        local_2a8[0] = (int)local_288[1];
        plVar5 = *(longlong **)(uVar14 + param_1[5]);
        (**(code **)(*plVar5 + 0x2b0))
                  (plVar5,local_2a0,local_290 << ((byte)uVar16 & 0x3f) ^ (ulonglong)plVar5,param_4);
        param_5 = local_298;
        param_2 = local_2a0;
        if (((((bVar4 & 0x20) != 0) && (fVar19 <= 0.0)) && (local_2a8[0] == (int)local_288[1])) &&
           (fVar19 = (float)(**(code **)(**(longlong **)(param_4 + 0x10) + 0x2a0))(),
           param_5 = local_298, param_2 = local_2a0, fVar19 < 10000.0)) {
          *(byte *)(param_4 + 0x98) = *(byte *)(param_4 + 0x98) | 0x20;
        }
      }
      uVar11 = (undefined4)uVar17;
      uVar15 = (int)uVar16 + 1;
      uVar12 = uVar12 + 0x14;
      uVar14 = uVar14 + 8;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_1[6]);
  }
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar10 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar10 = param_4 + 0x4f0;
    }
    iVar7 = *(int *)(lVar10 + ((longlong)
                               ((int)((ulonglong)local_290 >> 0x20) * 0x17 + (int)local_290) &
                              (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar7 != -1) {
      lVar10 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar9 = (int *)(lVar10 + (longlong)iVar7 * 0x18);
        if (*(longlong *)(lVar10 + (longlong)iVar7 * 0x18) == local_290) {
          if (iVar7 != -1) goto LAB_142809473;
          break;
        }
        iVar7 = piVar9[4];
      } while (iVar7 != -1);
    }
  }
  piVar9 = (int *)0x0;
LAB_142809473:
  piVar8 = piVar9 + 2;
  if (piVar9 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  if (piVar8 == (int *)0x0) {
    plVar5 = (longlong *)(param_4 + 0x508);
    iVar7 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar7 + 8;
    if (*(int *)(param_4 + 0x514) < iVar7 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar5,iVar7);
    }
    *(undefined8 *)((longlong)iVar7 + *plVar5) = 0;
    local_288 = &local_290;
    local_280 = local_2a8;
    local_2a8[0] = iVar7;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),&local_2a0,&local_288,0);
    *(undefined4 *)((longlong)local_2a8[0] + *plVar5) = 1;
    iVar7 = local_2a8[0];
  }
  else {
    iVar7 = *piVar8;
  }
  *(undefined4 *)((longlong)(iVar7 + 4) + *(longlong *)(param_4 + 0x508)) = uVar11;
  FRichCurve::~FRichCurve(local_190);
  puVar13 = local_1a8;
  lVar10 = 2;
  do {
    plVar5 = (longlong *)(puVar13 + -0x10);
    puVar13 = puVar13 + -0x10;
    lVar10 = lVar10 + -1;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar10 != 0);
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (local_278[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428095b0 FUN_1428095b0 body=803 status=ok
// SIG undefined FUN_1428095b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428095b0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230;
  longlong local_218 [15];
  float local_19c;
  longlong local_178;
  longlong local_158 [2];
  undefined1 local_148 [24];
  undefined1 local_130 [184];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  FSoundParseParameters::FSoundParseParameters(local_218,param_5);
  local_230 = *(float *)(param_5 + 0x58);
  uVar1 = *(undefined8 *)(param_5 + 0x50);
  lVar5 = *(longlong *)(param_2 + 0x128);
  fVar14 = *(float *)(lVar5 + 0x10) - *(float *)(param_5 + 0x30);
  fVar10 = *(float *)(lVar5 + 0x14) - *(float *)(param_5 + 0x34);
  fVar12 = *(float *)(lVar5 + 0x18) - *(float *)(param_5 + 0x38);
  fVar7 = fVar10 * fVar10 + fVar14 * fVar14 + fVar12 * fVar12;
  fVar11 = fVar10;
  fVar13 = fVar12;
  fVar8 = fVar14;
  if ((fVar7 != 1.0) &&
     (fVar11 = DAT_1468b5d94, fVar13 = DAT_1468b5d98, fVar8 = DAT_1468b5d90, 1e-08 <= fVar7)) {
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar11 = fVar10 * fVar8;
    fVar13 = fVar12 * fVar8;
    fVar8 = fVar14 * fVar8;
  }
  local_238._0_4_ = (float)uVar1;
  iVar4 = 0;
  local_238._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_19c = local_19c *
              ((*(float *)(param_1 + 7) /
                (1.0 - ((local_238._4_4_ * fVar11 + (float)local_238 * fVar8 + fVar13 * local_230) -
                       (fVar11 * *(float *)(lVar5 + 0x34) + fVar8 * *(float *)(lVar5 + 0x30) +
                       fVar13 * *(float *)(lVar5 + 0x38))) * 3.030303e-05) - *(float *)(param_1 + 7)
               ) + 1.0);
  local_238 = uVar1;
  if (0 < (int)param_1[6]) {
    lVar5 = 0;
    do {
      iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar3 <= iVar4) break;
      plVar2 = *(longlong **)(lVar5 + param_1[5]);
      if (plVar2 != (longlong *)0x0) {
        local_240 = param_6;
        local_248 = local_218;
        (**(code **)(*plVar2 + 0x2b0))
                  (plVar2,param_2,param_3 << ((byte)iVar4 & 0x3f) ^ (ulonglong)plVar2,param_4);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_130);
  puVar6 = local_148;
  lVar5 = 2;
  do {
    plVar2 = (longlong *)(puVar6 + -0x10);
    puVar6 = puVar6 + -0x10;
    lVar5 = lVar5 + -1;
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428098e0 FUN_1428098e0 body=1087 status=ok
// SIG undefined FUN_1428098e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428098e0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  undefined1 *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 local_260;
  int local_258 [2];
  longlong local_250;
  longlong local_248;
  undefined1 local_240 [8];
  undefined8 local_238;
  longlong *local_230;
  int *local_228;
  longlong local_218 [11];
  float local_1bc;
  float local_19c;
  longlong local_178;
  longlong local_158 [2];
  undefined1 local_148 [24];
  undefined1 local_130 [184];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  piVar8 = (int *)0x0;
  local_238 = param_6;
  local_250 = param_5;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar6 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar6 = param_4 + 0x4f0;
    }
    iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar2 != -1) {
      lVar6 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar11 = (int *)(lVar6 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar6 + (longlong)iVar2 * 0x18) == param_3) {
          if (iVar2 != -1) goto LAB_1428099b3;
          break;
        }
        iVar2 = piVar11[4];
      } while (iVar2 != -1);
    }
  }
  piVar11 = piVar8;
LAB_1428099b3:
  plVar1 = (longlong *)(param_4 + 0x508);
  piVar3 = piVar11 + 2;
  if (piVar11 == (int *)0x0) {
    piVar3 = piVar8;
  }
  local_248 = param_3;
  if (piVar3 == (int *)0x0) {
    iVar2 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar2 + 0x14;
    if (*(int *)(param_4 + 0x514) < iVar2 + 0x14) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 + *plVar1);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    local_230 = &local_248;
    local_228 = local_258;
    local_258[0] = iVar2;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),local_240,&local_230,0);
    piVar11 = (int *)((longlong)local_258[0] + *(longlong *)(param_4 + 0x508));
    *piVar11 = 1;
    lVar6 = *(longlong *)(param_4 + 0x508);
  }
  else {
    local_258[0] = *piVar3;
    lVar6 = *plVar1;
    piVar11 = (int *)(lVar6 + local_258[0]);
  }
  local_258[0] = local_258[0] + 4;
  pfVar7 = (float *)(local_258[0] + lVar6);
  if (*piVar11 != 0) {
    *pfVar7 = *(float *)(param_4 + 0xa8) - *(float *)(local_250 + 0x80);
    fVar14 = *(float *)((longlong)param_1 + 0x15c);
    fVar12 = (float)FGenericPlatformMath::SRand();
    pfVar7[1] = fVar12 * (*(float *)(param_1 + 0x2b) - fVar14) + fVar14;
    fVar14 = *(float *)((longlong)param_1 + 0x154);
    fVar12 = (float)FGenericPlatformMath::SRand();
    pfVar7[2] = fVar12 * (*(float *)(param_1 + 0x2a) - fVar14) + fVar14;
    pfVar7[3] = -NAN;
    *piVar11 = 0;
  }
  fVar14 = *(float *)(param_4 + 0xa8) - *pfVar7;
  if (((*(byte *)(param_1 + 9) & 2) != 0) &&
     (*(float *)((longlong)param_1 + 0x3c) <= fVar14 &&
      fVar14 != *(float *)((longlong)param_1 + 0x3c))) {
    fVar12 = (float)(**(code **)(*param_1 + 0x290))(param_1);
    if (fVar12 < fVar14) {
      return;
    }
    fVar14 = (float)(int)((float)(int)(fVar14 - *(float *)(param_1 + 7)) /
                         (*(float *)((longlong)param_1 + 0x3c) - *(float *)(param_1 + 7)));
    if ((((fVar14 != *(float *)((longlong)param_1 + 0x44)) || ((*(byte *)(param_1 + 9) & 1) != 0))
        || (*(float *)((longlong)param_1 + 0x44) == 0.0)) && (fVar14 != pfVar7[3])) {
      fVar12 = *(float *)((longlong)param_1 + 0x15c);
      fVar13 = (float)FGenericPlatformMath::SRand();
      pfVar7[1] = fVar13 * (*(float *)(param_1 + 0x2b) - fVar12) + fVar12;
      fVar12 = *(float *)((longlong)param_1 + 0x154);
      fVar13 = (float)FGenericPlatformMath::SRand();
      pfVar7[2] = fVar13 * (*(float *)(param_1 + 0x2a) - fVar12) + fVar12;
      pfVar7[3] = fVar14;
    }
  }
  FSoundParseParameters::FSoundParseParameters(local_218,local_250);
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xc);
  fVar14 = (float)FRichCurve::Eval(uVar5);
  local_1bc = local_1bc * fVar14 * pfVar7[1];
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1b);
  fVar14 = (float)FRichCurve::Eval(uVar5);
  uVar5 = local_238;
  lVar6 = local_248;
  local_19c = local_19c * fVar14 * pfVar7[2];
  piVar11 = piVar8;
  if (0 < (int)param_1[6]) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar2 <= (int)piVar11) break;
      plVar1 = *(longlong **)((longlong)piVar8 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_260 = uVar5;
        local_268 = local_218;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,lVar6 << ((byte)piVar11 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      uVar9 = (int)piVar11 + 1;
      piVar8 = piVar8 + 2;
      piVar11 = (int *)(ulonglong)uVar9;
    } while ((int)uVar9 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_130);
  lVar6 = 2;
  puVar10 = local_148;
  do {
    plVar1 = (longlong *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    lVar6 = lVar6 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142809d20 FUN_142809d20 body=1455 status=ok
// SIG undefined FUN_142809d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142809d20(undefined8 ******param_1,undefined8 ******param_2,undefined8 *****param_3,
                  undefined8 ******param_4,undefined8 ******param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 ******ppppppuVar2;
  int iVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *****pppppuVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *****pppppuVar9;
  undefined8 ***pppuVar10;
  uint *puVar11;
  longlong lVar12;
  undefined8 ****ppppuVar13;
  undefined8 *****pppppuVar14;
  int *piVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong local_250;
  int local_248;
  int local_244;
  undefined8 ******local_240;
  undefined8 ****local_238;
  int local_230 [2];
  undefined8 ******local_228;
  undefined8 *****local_220;
  undefined8 ******local_218;
  int *local_210;
  int local_208;
  int local_204;
  longlong local_200;
  longlong local_1f8 [20];
  longlong local_158;
  longlong local_138 [2];
  undefined1 local_128 [24];
  undefined1 local_110 [184];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  ppppppuVar2 = param_4 + 0x97;
  local_240 = param_5;
  pppppuVar14 = (undefined8 *****)0x0;
  local_200 = param_6;
  local_204 = *(int *)(param_6 + 8);
  if (*(int *)(param_4 + 0x98) != *(int *)((longlong)param_4 + 0x4ec)) {
    ppppppuVar4 = (undefined8 ******)param_4[0x9f];
    if ((undefined8 ******)param_4[0x9f] == (undefined8 ******)0x0) {
      ppppppuVar4 = param_4 + 0x9e;
    }
    iVar3 = *(int *)((longlong)ppppppuVar4 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                    (longlong)*(int *)(param_4 + 0xa0) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        pppppuVar9 = *ppppppuVar2 + (longlong)iVar3 * 3;
        if ((undefined8 *****)(*ppppppuVar2)[(longlong)iVar3 * 3] == param_3) {
          if (iVar3 != -1) goto LAB_142809e03;
          break;
        }
        iVar3 = *(int *)(pppppuVar9 + 2);
      } while (iVar3 != -1);
    }
  }
  pppppuVar9 = pppppuVar14;
LAB_142809e03:
  ppppppuVar4 = param_4 + 0xa1;
  pppppuVar6 = pppppuVar9 + 1;
  if (pppppuVar9 == (undefined8 *****)0x0) {
    pppppuVar6 = pppppuVar14;
  }
  local_238 = param_3;
  local_228 = param_2;
  local_220 = param_4;
  if (pppppuVar6 == (undefined8 *****)0x0) {
    iVar3 = *(int *)(param_4 + 0xa2);
    *(int *)(param_4 + 0xa2) = iVar3 + 8;
    if (*(int *)((longlong)param_4 + 0x514) < iVar3 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(ppppppuVar4,iVar3);
    }
    *(undefined8 *)((longlong)iVar3 + (longlong)*ppppppuVar4) = 0;
    local_218 = (undefined8 ******)&local_238;
    local_210 = &local_244;
    local_244 = iVar3;
    FUN_141f0b300(ppppppuVar2,&local_248,&local_218,0);
    piVar15 = (int *)((longlong)local_244 + (longlong)param_4[0xa1]);
    *piVar15 = 1;
    pppppuVar9 = param_4[0xa1];
  }
  else {
    local_244 = *(int *)pppppuVar6;
    pppppuVar9 = *ppppppuVar4;
    piVar15 = (int *)((longlong)pppppuVar9 + (longlong)local_244);
  }
  local_244 = local_244 + 4;
  puVar11 = (uint *)((longlong)local_244 + (longlong)pppppuVar9);
  local_248 = *piVar15;
  if (local_248 != 0) {
    *puVar11 = 0;
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146534e20,&local_208,param_1);
    if (local_208 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)local_208 * 0x20 + DAT_146534e20;
    }
    pppppuVar9 = (undefined8 *****)0x0;
    pppppuVar14 = (undefined8 *****)(lVar8 + 8);
    if (lVar8 == 0) {
      pppppuVar14 = pppppuVar9;
    }
    if ((pppppuVar14 != (undefined8 *****)0x0) && (0 < *(int *)(param_1 + 8))) {
      do {
        lVar8 = (longlong)(int)pppppuVar9;
        if (*(int *)(*pppppuVar14 + lVar8 * 10 + 1) -
            *(int *)((longlong)*pppppuVar14 + lVar8 * 0x50 + 0x34) <
            *(int *)((longlong)param_1[7] + lVar8 * 4)) break;
        uVar17 = (int)pppppuVar9 + 1;
        pppppuVar9 = (undefined8 *****)(ulonglong)uVar17;
        *puVar11 = uVar17;
      } while ((int)uVar17 < *(int *)(param_1 + 8));
    }
    *piVar15 = 0;
  }
  lVar8 = (longlong)(int)*puVar11;
  if (((int)*puVar11 < *(int *)(param_1 + 6)) && (param_1[5][lVar8] != (undefined8 ****)0x0)) {
    FSoundParseParameters::FSoundParseParameters(local_1f8,local_240);
    FNotifyBufferFinishedHooks::AddNotify(local_1f8,param_1,local_238);
    ppppuVar13 = param_1[5][(int)*puVar11];
    local_250 = local_200;
    local_258 = local_1f8;
    (*(code *)(*ppppuVar13)[0x56])
              (ppppuVar13,local_228,
               (longlong)local_238 << ((byte)*puVar11 & 0x3f) ^ (ulonglong)ppppuVar13,local_220);
    FRichCurve::~FRichCurve(local_110);
    lVar12 = 2;
    puVar16 = local_128;
    do {
      plVar1 = (longlong *)(puVar16 + -0x10);
      puVar16 = puVar16 + -0x10;
      lVar12 = lVar12 + -1;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
    } while (lVar12 != 0);
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (local_1f8[0] != 0) {
      FMemory::Free();
    }
  }
  local_230[0] = *(int *)(local_200 + 8) - local_204;
  if (local_248 == 0) {
    if (0 < local_230[0]) {
      if (pppppuVar14 == (undefined8 *****)0x0) {
        local_240 = &local_228;
        local_228 = param_1;
        FUN_1427ebbd0(&DAT_146534e20,&local_248,&local_240,0);
        pppppuVar14 = (undefined8 *****)(DAT_146534e20 + 8 + (longlong)local_248 * 0x20);
        TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>
        ::SetNum(pppppuVar14,*(int *)(param_1 + 8) + 1,1);
      }
      local_240 = (undefined8 ******)local_220;
      ppppuVar13 = *pppppuVar14 + lVar8 * 10;
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(ppppuVar13,&local_248,local_220);
      if ((local_248 == -1) ||
         (pppuVar10 = *ppppuVar13 + (longlong)local_248 * 3, pppuVar10 == (undefined8 ***)0x0)) {
        local_228 = &local_240;
        TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(ppppuVar13,&local_248,&local_228,0);
        pppuVar10 = *ppppuVar13 + (longlong)local_248 * 3;
      }
      *(int *)(pppuVar10 + 1) = local_230[0];
    }
  }
  else {
    if (*(int *)(param_4 + 0x98) != *(int *)((longlong)param_4 + 0x4ec)) {
      ppppppuVar5 = (undefined8 ******)param_4[0x9f];
      if ((undefined8 ******)param_4[0x9f] == (undefined8 ******)0x0) {
        ppppppuVar5 = param_4 + 0x9e;
      }
      iVar3 = *(int *)((longlong)ppppppuVar5 +
                      ((longlong)((int)((ulonglong)local_238 >> 0x20) * 0x17 + (int)local_238) &
                      (longlong)*(int *)(param_4 + 0xa0) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          pppppuVar9 = *ppppppuVar2 + (longlong)iVar3 * 3;
          if ((*ppppppuVar2)[(longlong)iVar3 * 3] == local_238) {
            if (iVar3 != -1) goto LAB_14280a0a3;
            break;
          }
          iVar3 = *(int *)(pppppuVar9 + 2);
        } while (iVar3 != -1);
      }
    }
    pppppuVar9 = (undefined8 *****)0x0;
LAB_14280a0a3:
    pppppuVar6 = pppppuVar9 + 1;
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pppppuVar6 = (undefined8 *****)0x0;
    }
    if (pppppuVar6 == (undefined8 *****)0x0) {
      iVar3 = *(int *)(param_4 + 0xa2);
      *(int *)(param_4 + 0xa2) = iVar3 + 8;
      if (*(int *)((longlong)param_4 + 0x514) < iVar3 + 8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(ppppppuVar4,iVar3);
      }
      *(undefined8 *)((longlong)iVar3 + (longlong)*ppppppuVar4) = 0;
      local_218 = (undefined8 ******)&local_238;
      local_210 = &local_244;
      local_244 = iVar3;
      FUN_141f0b300(ppppppuVar2,&local_248,&local_218,0);
      puVar7 = (undefined4 *)((longlong)local_244 + (longlong)local_220[0xa1]);
      *puVar7 = 1;
    }
    else {
      puVar7 = (undefined4 *)((longlong)*(int *)pppppuVar6 + (longlong)*ppppppuVar4);
    }
    pppppuVar9 = local_220;
    if (local_230[0] == 0) {
      *puVar7 = 1;
    }
    else {
      if (pppppuVar14 == (undefined8 *****)0x0) {
        local_240 = &local_228;
        local_228 = param_1;
        FUN_1427ebbd0(&DAT_146534e20,&local_248,&local_240,0);
        pppppuVar14 = (undefined8 *****)(DAT_146534e20 + 8 + (longlong)local_248 * 0x20);
        TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>
        ::SetNum(pppppuVar14,*(int *)(param_1 + 8) + 1,1);
      }
      local_218 = &local_240;
      local_240 = (undefined8 ******)pppppuVar9;
      local_210 = local_230;
      TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                (*pppppuVar14 + lVar8 * 10,&local_248,&local_218,0);
    }
  }
  return;
}



// FUNCTION 14280a2d0 FUN_14280a2d0 body=687 status=ok
// SIG undefined FUN_14280a2d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280a2d0(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int *piVar8;
  undefined1 auStack_258 [32];
  longlong *local_238;
  undefined8 local_230;
  int local_228 [2];
  longlong local_220;
  undefined1 local_218 [8];
  undefined8 local_210;
  longlong *local_208;
  int *local_200;
  longlong local_1f8 [20];
  longlong local_158;
  longlong local_138 [2];
  undefined1 local_128 [24];
  undefined1 local_110 [184];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  piVar5 = (int *)0x0;
  local_210 = param_5;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar6 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar6 = param_4 + 0x4f0;
    }
    iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar2 != -1) {
      lVar6 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar3 = (int *)(lVar6 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar6 + (longlong)iVar2 * 0x18) == param_3) {
          if (iVar2 != -1) goto LAB_14280a393;
          break;
        }
        iVar2 = piVar3[4];
      } while (iVar2 != -1);
    }
  }
  piVar3 = piVar5;
LAB_14280a393:
  plVar1 = (longlong *)(param_4 + 0x508);
  piVar8 = piVar3 + 2;
  if (piVar3 == (int *)0x0) {
    piVar8 = piVar5;
  }
  local_220 = param_3;
  if (piVar8 == (int *)0x0) {
    iVar2 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar2 + 8;
    if (*(int *)(param_4 + 0x514) < iVar2 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)((longlong)iVar2 + *plVar1) = 0;
    local_208 = &local_220;
    local_200 = local_228;
    local_228[0] = iVar2;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),local_218,&local_208,0);
    piVar3 = (int *)((longlong)local_228[0] + *(longlong *)(param_4 + 0x508));
    *piVar3 = 1;
    lVar6 = *(longlong *)(param_4 + 0x508);
  }
  else {
    local_228[0] = *piVar8;
    lVar6 = *plVar1;
    piVar3 = (int *)(lVar6 + local_228[0]);
  }
  local_228[0] = local_228[0] + 4;
  piVar8 = (int *)(local_228[0] + lVar6);
  if (*piVar3 != 0) {
    *piVar8 = 0;
    *piVar3 = 0;
  }
  FSoundParseParameters::FSoundParseParameters(local_1f8,local_210);
  FNotifyBufferFinishedHooks::AddNotify(local_1f8,param_1,local_220);
  lVar6 = local_220;
  piVar3 = piVar5;
  if (0 < (int)param_1[6]) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar2 <= (int)piVar5) break;
      plVar1 = *(longlong **)((longlong)piVar3 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_230 = param_6;
        local_238 = local_1f8;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,lVar6 << ((byte)piVar5 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      uVar4 = (int)piVar5 + 1;
      piVar5 = (int *)(ulonglong)uVar4;
      piVar3 = piVar3 + 2;
    } while ((int)uVar4 < (int)param_1[6]);
  }
  if (((*(byte *)(param_4 + 0x98) & 0x20) != 0) &&
     (((*(byte *)((longlong)param_1 + 0x3c) & 1) != 0 || (*piVar8 < (int)param_1[7])))) {
    USoundNodeLooping::ResetChildren(param_1,local_220,param_4,piVar8);
    *(byte *)(param_4 + 0x98) = *(byte *)(param_4 + 0x98) & 0xdf;
  }
  FRichCurve::~FRichCurve(local_110);
  lVar6 = 2;
  puVar7 = local_128;
  do {
    plVar1 = (longlong *)(puVar7 + -0x10);
    puVar7 = puVar7 + -0x10;
    lVar6 = lVar6 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_1f8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14280a580 FUN_14280a580 body=764 status=ok
// SIG undefined FUN_14280a580(void)

void FUN_14280a580(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res18;
  longlong local_res20;
  int local_78 [2];
  int *local_70;
  int *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  plVar7 = (longlong *)0x0;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar3 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar3 = param_4 + 0x4f0;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_4 + 0x4b8);
      do {
        plVar5 = (longlong *)(lVar3 + (longlong)iVar1 * 0x18);
        if (*(longlong *)(lVar3 + (longlong)iVar1 * 0x18) == param_3) {
          if (iVar1 != -1) goto LAB_14280a633;
          break;
        }
        iVar1 = (int)plVar5[2];
      } while (iVar1 != -1);
    }
  }
  plVar5 = plVar7;
LAB_14280a633:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar7;
  }
  plVar5 = (longlong *)(param_4 + 0x508);
  local_res18 = param_3;
  local_res20 = param_4;
  if (plVar4 == (longlong *)0x0) {
    iVar1 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar1 + 8;
    if (*(int *)(param_4 + 0x514) < iVar1 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(undefined8 *)((longlong)iVar1 + *plVar5) = 0;
    local_58 = &local_res18;
    local_50 = local_78;
    local_78[0] = iVar1;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),&local_70,&local_58,0);
    piVar6 = (int *)((longlong)local_78[0] + *plVar5);
    *piVar6 = 1;
    lVar3 = *plVar5;
  }
  else {
    local_78[0] = (int)*plVar4;
    lVar3 = *plVar5;
    piVar6 = (int *)(lVar3 + local_78[0]);
  }
  local_78[0] = local_78[0] + 4;
  piVar11 = (int *)(local_78[0] + lVar3);
  local_70 = piVar11;
  if (*piVar6 == 0) goto LAB_14280a80d;
  *piVar6 = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  iVar1 = 0;
  plVar5 = plVar7;
  if (*(int *)(param_1 + 0x30) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_68,*(int *)(param_1 + 0x30));
    iVar1 = *(int *)(param_1 + 0x30);
    plVar5 = (longlong *)(local_60 & 0xffffffff);
  }
  piVar6 = local_68;
  iVar8 = (int)plVar5;
  local_58 = (longlong *)0x0;
  local_50 = (int *)0x0;
  plVar4 = plVar7;
  iVar2 = 0;
  if (iVar1 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_58,iVar1);
    uVar10 = (ulonglong)local_50 & 0xffffffff;
    plVar12 = plVar7;
    plVar4 = local_58;
    iVar2 = (uint)local_50;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        iVar1 = (int)plVar7;
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)plVar12) != 0) {
          iVar2 = GetMaturityTypeForChild();
          if (iVar2 == 1) {
            iVar2 = (int)plVar5;
            uVar9 = iVar2 + 1;
            local_60 = CONCAT44(local_60._4_4_,uVar9);
            if (local_60._4_4_ < (int)uVar9) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_68,plVar5);
              piVar6 = local_68;
              uVar9 = (uint)local_60;
            }
            plVar5 = (longlong *)(ulonglong)uVar9;
            piVar6[iVar2] = iVar1;
          }
          else if (iVar2 == 2) {
            iVar2 = (int)uVar10;
            uVar9 = iVar2 + 1;
            local_50 = (int *)CONCAT44(local_50._4_4_,uVar9);
            if (local_50._4_4_ < (int)uVar9) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,uVar10);
              plVar4 = local_58;
              uVar9 = (uint)local_50;
            }
            uVar10 = (ulonglong)uVar9;
            *(int *)((longlong)plVar4 + (longlong)iVar2 * 4) = iVar1;
          }
        }
        iVar2 = (int)uVar10;
        iVar8 = (int)plVar5;
        plVar7 = (longlong *)(ulonglong)(iVar1 + 1U);
        piVar11 = local_70;
        plVar12 = plVar12 + 1;
      } while ((int)(iVar1 + 1U) < *(int *)(param_1 + 0x30));
    }
  }
  *piVar11 = -1;
  if (((*(byte *)(DAT_146b17150 + 0x8c4) & 1) == 0) || (iVar8 < 1)) {
    if (0 < iVar2) {
      iVar1 = (int)*plVar4;
      goto LAB_14280a7e7;
    }
  }
  else {
    iVar1 = *piVar6;
LAB_14280a7e7:
    *piVar11 = iVar1;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  param_4 = local_res20;
  if (piVar6 != (int *)0x0) {
    FMemory::Free(piVar6);
    param_4 = local_res20;
  }
LAB_14280a80d:
  iVar1 = *piVar11;
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x30))) &&
     (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8),
     plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x2b0))
              (plVar7,param_2,local_res18 << ((byte)iVar1 & 0x3f) ^ (ulonglong)plVar7,param_4,
               param_5,param_6);
  }
  return;
}



// FUNCTION 14280a880 FUN_14280a880 body=419 status=ok
// SIG undefined FUN_14280a880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280a880(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_1f8 [11];
  float local_19c;
  longlong local_158;
  longlong local_138 [2];
  undefined1 local_128 [24];
  undefined1 local_110 [184];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_208 = param_6;
  FSoundParseParameters::FSoundParseParameters(local_1f8,param_5);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x28)) != 0) {
        local_19c = *(float *)(*(longlong *)(param_1 + 0x38) + lVar3) * *(float *)(param_5 + 0x5c);
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x28));
        local_210 = local_208;
        local_218 = local_1f8;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,param_3 << ((byte)iVar2 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 4;
      lVar4 = lVar4 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  FRichCurve::~FRichCurve(local_110);
  puVar5 = local_128;
  lVar3 = 2;
  do {
    plVar1 = (longlong *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x10;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (local_1f8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14280aa30 FUN_14280aa30 body=803 status=ok
// SIG undefined FUN_14280aa30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280aa30(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 *puVar10;
  int *piVar11;
  float fVar12;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined8 local_240;
  int local_238 [2];
  longlong local_230;
  undefined1 local_228 [8];
  undefined8 local_220;
  longlong *local_218;
  int *local_210;
  longlong local_208 [11];
  float local_1ac;
  float local_18c;
  longlong local_168;
  longlong local_148 [2];
  undefined1 local_138 [24];
  undefined1 local_120 [184];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  piVar7 = (int *)0x0;
  local_220 = param_5;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar8 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar8 = param_4 + 0x4f0;
    }
    iVar4 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar4 != -1) {
      lVar8 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar11 = (int *)(lVar8 + (longlong)iVar4 * 0x18);
        if (*(longlong *)(lVar8 + (longlong)iVar4 * 0x18) == param_3) {
          if (iVar4 != -1) goto LAB_14280ab03;
          break;
        }
        iVar4 = piVar11[4];
      } while (iVar4 != -1);
    }
  }
  piVar11 = piVar7;
LAB_14280ab03:
  plVar1 = (longlong *)(param_4 + 0x508);
  piVar5 = piVar11 + 2;
  if (piVar11 == (int *)0x0) {
    piVar5 = piVar7;
  }
  local_230 = param_3;
  if (piVar5 == (int *)0x0) {
    iVar4 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar4 + 0xc;
    if (*(int *)(param_4 + 0x514) < iVar4 + 0xc) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    lVar8 = *plVar1;
    *(undefined8 *)(iVar4 + lVar8) = 0;
    *(undefined4 *)((undefined8 *)(iVar4 + lVar8) + 1) = 0;
    local_218 = &local_230;
    local_210 = local_238;
    local_238[0] = iVar4;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),local_228,&local_218,0);
    piVar11 = (int *)((longlong)local_238[0] + *(longlong *)(param_4 + 0x508));
    *piVar11 = 1;
    lVar8 = *(longlong *)(param_4 + 0x508);
  }
  else {
    local_238[0] = *piVar5;
    lVar8 = *plVar1;
    piVar11 = (int *)(lVar8 + local_238[0]);
  }
  uVar3 = local_220;
  local_238[0] = local_238[0] + 4;
  pfVar9 = (float *)(local_238[0] + lVar8);
  if (*piVar11 != 0) {
    fVar2 = *(float *)((longlong)param_1 + 0x44);
    fVar12 = (float)FGenericPlatformMath::SRand();
    *pfVar9 = fVar12 * (*(float *)(param_1 + 8) - fVar2) + fVar2;
    fVar2 = *(float *)((longlong)param_1 + 0x3c);
    fVar12 = (float)FGenericPlatformMath::SRand();
    pfVar9[1] = fVar12 * (*(float *)(param_1 + 7) - fVar2) + fVar2;
    *piVar11 = 0;
  }
  FSoundParseParameters::FSoundParseParameters(local_208,uVar3);
  lVar8 = local_230;
  local_1ac = local_1ac * *pfVar9;
  local_18c = local_18c * pfVar9[1];
  piVar11 = piVar7;
  if (0 < (int)param_1[6]) {
    do {
      iVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar4 <= (int)piVar7) break;
      plVar1 = *(longlong **)((longlong)piVar11 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_240 = param_6;
        local_248 = local_208;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,lVar8 << ((byte)piVar7 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      uVar6 = (int)piVar7 + 1;
      piVar7 = (int *)(ulonglong)uVar6;
      piVar11 = piVar11 + 2;
    } while ((int)uVar6 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_120);
  puVar10 = local_138;
  lVar8 = 2;
  do {
    plVar1 = (longlong *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    lVar8 = lVar8 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14280ad60 FUN_14280ad60 body=435 status=ok
// SIG undefined FUN_14280ad60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280ad60(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [11];
  float local_18c;
  float local_16c;
  longlong local_148;
  longlong local_128 [2];
  undefined1 local_118 [24];
  undefined1 local_100 [184];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FSoundParseParameters::FSoundParseParameters(local_1e8,param_5);
  fVar6 = (float)FModulatorContinuousParams::GetValue(param_1 + 0xb,param_4);
  local_18c = local_18c * fVar6;
  fVar6 = (float)FModulatorContinuousParams::GetValue(param_1 + 7,param_4);
  iVar3 = 0;
  local_16c = local_16c * fVar6;
  if (0 < (int)param_1[6]) {
    lVar4 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar2 <= iVar3) break;
      plVar1 = *(longlong **)(lVar4 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_1f0 = param_6;
        local_1f8 = local_1e8;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,param_3 << ((byte)iVar3 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_100);
  puVar5 = local_118;
  lVar4 = 2;
  do {
    plVar1 = (longlong *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x10;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14280af20 FUN_14280af20 body=947 status=ok
// SIG undefined FUN_14280af20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280af20(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_278 [32];
  longlong *local_258;
  undefined8 local_250;
  int local_248 [2];
  longlong local_240;
  undefined1 local_238 [8];
  undefined8 local_230;
  undefined8 local_228;
  longlong *local_220;
  int *local_218;
  longlong local_208 [11];
  float local_1ac;
  float local_18c;
  longlong local_168;
  longlong local_148 [2];
  undefined1 local_138 [24];
  undefined1 local_120 [184];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  piVar7 = (int *)0x0;
  local_230 = param_5;
  local_228 = param_6;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar8 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar8 = param_4 + 0x4f0;
    }
    iVar3 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar3 != -1) {
      lVar8 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar11 = (int *)(lVar8 + (longlong)iVar3 * 0x18);
        if (*(longlong *)(lVar8 + (longlong)iVar3 * 0x18) == param_3) {
          if (iVar3 != -1) goto LAB_14280b003;
          break;
        }
        iVar3 = piVar11[4];
      } while (iVar3 != -1);
    }
  }
  piVar11 = piVar7;
LAB_14280b003:
  plVar1 = (longlong *)(param_4 + 0x508);
  piVar4 = piVar11 + 2;
  if (piVar11 == (int *)0x0) {
    piVar4 = piVar7;
  }
  local_240 = param_3;
  if (piVar4 == (int *)0x0) {
    iVar3 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar3 + 0x14;
    if (*(int *)(param_4 + 0x514) < iVar3 + 0x14) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar5 = (undefined8 *)((longlong)iVar3 + *plVar1);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    local_220 = &local_240;
    local_218 = local_248;
    local_248[0] = iVar3;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),local_238,&local_220,0);
    piVar11 = (int *)((longlong)local_248[0] + *(longlong *)(param_4 + 0x508));
    *piVar11 = 1;
    lVar8 = *(longlong *)(param_4 + 0x508);
  }
  else {
    local_248[0] = *piVar4;
    lVar8 = *plVar1;
    piVar11 = (int *)(lVar8 + local_248[0]);
  }
  local_248[0] = local_248[0] + 4;
  pfVar9 = (float *)(local_248[0] + lVar8);
  if (*piVar11 != 0) {
    fVar13 = *(float *)(param_1 + 8);
    fVar12 = (float)FGenericPlatformMath::SRand();
    *pfVar9 = fVar12 * (*(float *)((longlong)param_1 + 0x3c) - fVar13) + fVar13;
    fVar13 = *(float *)(param_1 + 9);
    fVar12 = (float)FGenericPlatformMath::SRand();
    pfVar9[1] = fVar12 * (*(float *)((longlong)param_1 + 0x44) - fVar13) + fVar13;
    fVar13 = *(float *)(param_1 + 10);
    fVar12 = (float)FGenericPlatformMath::SRand();
    pfVar9[2] = fVar12 * (*(float *)((longlong)param_1 + 0x4c) - fVar13) + fVar13;
    fVar13 = *(float *)(param_1 + 0xb);
    fVar12 = (float)FGenericPlatformMath::SRand();
    pfVar9[3] = fVar12 * (*(float *)((longlong)param_1 + 0x54) - fVar13) + fVar13;
    *piVar11 = 0;
  }
  FSoundParseParameters::FSoundParseParameters(local_208,local_230);
  fVar13 = _guard_xfg_dispatch_icall_nop
                     (*(float *)(param_4 + 0xa8) * pfVar9[1] * 3.1415927 + pfVar9[2]);
  uVar2 = local_228;
  lVar8 = local_240;
  fVar13 = fVar13 * *pfVar9 + pfVar9[3];
  if ((*(uint *)(param_1 + 7) & 1) != 0) {
    local_1ac = local_1ac * fVar13;
  }
  if ((*(uint *)(param_1 + 7) & 2) != 0) {
    local_18c = local_18c * fVar13;
  }
  piVar11 = piVar7;
  if (0 < (int)param_1[6]) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar3 <= (int)piVar7) break;
      plVar1 = *(longlong **)((longlong)piVar11 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_250 = uVar2;
        local_258 = local_208;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,lVar8 << ((byte)piVar7 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      uVar6 = (int)piVar7 + 1;
      piVar7 = (int *)(ulonglong)uVar6;
      piVar11 = piVar11 + 2;
    } while ((int)uVar6 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_120);
  puVar10 = local_138;
  lVar8 = 2;
  do {
    plVar1 = (longlong *)(puVar10 + -0x10);
    puVar10 = puVar10 + -0x10;
    lVar8 = lVar8 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14280b320 FUN_14280b320 body=562 status=ok
// SIG undefined FUN_14280b320(void)

void FUN_14280b320(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int local_res8 [4];
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong *local_48;
  int *local_40;
  
  piVar4 = (int *)0x0;
  if (*(int *)(param_4 + 0x4c0) != *(int *)(param_4 + 0x4ec)) {
    lVar3 = *(longlong *)(param_4 + 0x4f8);
    if (*(longlong *)(param_4 + 0x4f8) == 0) {
      lVar3 = param_4 + 0x4f0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3) &
                             (longlong)*(int *)(param_4 + 0x500) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_4 + 0x4b8);
      do {
        piVar7 = (int *)(lVar3 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x18) == param_3) {
          if (iVar2 != -1) goto LAB_14280b3c3;
          break;
        }
        iVar2 = piVar7[4];
      } while (iVar2 != -1);
    }
  }
  piVar7 = piVar4;
LAB_14280b3c3:
  plVar1 = (longlong *)(param_4 + 0x508);
  piVar5 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar5 = piVar4;
  }
  local_res18 = param_3;
  if (piVar5 == (int *)0x0) {
    iVar2 = *(int *)(param_4 + 0x510);
    *(int *)(param_4 + 0x510) = iVar2 + 8;
    if (*(int *)(param_4 + 0x514) < iVar2 + 8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined8 *)((longlong)iVar2 + *plVar1) = 0;
    local_48 = &local_res18;
    local_40 = local_res8;
    local_res8[0] = iVar2;
    FUN_141f0b300((longlong *)(param_4 + 0x4b8),local_res20,&local_48,0);
    piVar7 = (int *)((longlong)local_res8[0] + *plVar1);
    *piVar7 = 1;
    lVar3 = *plVar1;
  }
  else {
    lVar3 = *plVar1;
    local_res8[0] = *piVar5;
    piVar7 = (int *)(lVar3 + local_res8[0]);
  }
  local_res8[0] = local_res8[0] + 4;
  piVar5 = (int *)(local_res8[0] + lVar3);
  if (*piVar7 != 0) {
    iVar2 = USoundNodeRandom::ChooseNodeIndex(param_1,param_4);
    *piVar5 = iVar2;
    *piVar7 = 0;
  }
  if ((((*(byte *)(param_1 + 0x50) & 1) != 0) && (iVar2 = *(int *)(param_1 + 0x60), 0 < iVar2)) &&
     (iVar2 <= *(int *)(param_1 + 0x68))) {
    piVar7 = piVar4;
    if (0 < iVar2) {
      do {
        if (*piVar5 < iVar2) {
          *(undefined1 *)((longlong)piVar4 + *(longlong *)(param_1 + 0x58)) = 0;
          iVar2 = *(int *)(param_1 + 0x60);
        }
        uVar6 = (int)piVar7 + 1;
        piVar4 = (int *)((longlong)piVar4 + 1);
        piVar7 = (int *)(ulonglong)uVar6;
      } while ((int)uVar6 < iVar2);
    }
    *(undefined1 *)((longlong)*piVar5 + *(longlong *)(param_1 + 0x58)) = 1;
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  iVar2 = *piVar5;
  if ((iVar2 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x2b0))
              (plVar1,param_2,local_res18 << ((byte)iVar2 & 0x3f) ^ (ulonglong)plVar1,param_4,
               param_5,param_6);
  }
  return;
}



// FUNCTION 14280b560 FUN_14280b560 body=387 status=ok
// SIG undefined FUN_14280b560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280b560(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [2];
  longlong local_1d8;
  longlong local_148;
  longlong local_128 [2];
  undefined1 local_118 [24];
  undefined1 local_100 [184];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FSoundParseParameters::FSoundParseParameters(local_1e8,param_5);
  if (param_1[7] != 0) {
    local_1d8 = param_1[7];
  }
  iVar3 = 0;
  if (0 < (int)param_1[6]) {
    lVar4 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
      if (iVar2 <= iVar3) break;
      plVar1 = *(longlong **)(lVar4 + param_1[5]);
      if (plVar1 != (longlong *)0x0) {
        local_1f0 = param_6;
        local_1f8 = local_1e8;
        (**(code **)(*plVar1 + 0x2b0))
                  (plVar1,param_2,param_3 << ((byte)iVar3 & 0x3f) ^ (ulonglong)plVar1,param_4);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_1[6]);
  }
  FRichCurve::~FRichCurve(local_100);
  puVar5 = local_118;
  lVar4 = 2;
  do {
    plVar1 = (longlong *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x10;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14280b6f0 FUN_14280b6f0 body=177 status=ok
// SIG undefined FUN_14280b6f0(void)

void FUN_14280b6f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  cVar2 = FActiveSound::GetIntParameter(param_4,*(undefined8 *)(param_1 + 0x38),local_res8);
  if (cVar2 != '\0') {
    local_res8[0] = local_res8[0] + 1;
  }
  if (((local_res8[0] < 0) || (*(int *)(param_1 + 0x30) <= local_res8[0])) &&
     (local_res8[0] = 0, *(int *)(param_1 + 0x30) < 1)) {
    return;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))
              (plVar1,param_2,param_3 << ((byte)local_res8[0] & 0x3f) ^ (ulonglong)plVar1,param_4,
               param_5,param_6);
  }
  return;
}



// FUNCTION 14280b7b0 FUN_14280b7b0 body=144 status=ok
// SIG undefined FUN_14280b7b0(void)

void FUN_14280b7b0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *local_res8;
  
  local_res8 = (longlong *)0x0;
  FActiveSound::GetWaveParameter(param_4,*(undefined8 *)(param_1 + 0x38),&local_res8);
  if (local_res8 == (longlong *)0x0) {
    FUN_142808540(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (**(code **)(*local_res8 + 0x2d0))(local_res8,param_2,(ulonglong)local_res8 ^ param_3);
  }
  return;
}



// FUNCTION 14280b840 FUN_14280b840 body=280 status=ok
// SIG undefined FUN_14280b840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280b840(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [412];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    if (lVar3 != 0) {
      bVar2 = *(byte *)(lVar3 + 0xb3);
      *(byte *)(lVar3 + 0xb3) = bVar2 & 0xfe;
      if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
        local_1f0 = param_6;
        local_1f8 = (undefined1 *)param_5;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2d0))
                  (*(longlong **)(param_1 + 0x60),param_2);
      }
      else {
        FSoundParseParameters::FSoundParseParameters(local_1e8);
        local_1f8 = local_1e8;
        local_4c = local_4c | 4;
        local_1f0 = param_6;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2d0))
                  (*(longlong **)(param_1 + 0x60),param_2,param_3,param_4);
        FUN_1427f0c50(local_1e8);
      }
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x60) + 0xb3);
      *pbVar1 = *pbVar1 ^ (*(byte *)(*(longlong *)(param_1 + 0x60) + 0xb3) ^ bVar2) & 1;
    }
  }
  else {
    *(byte *)(param_4 + 0x98) = *(byte *)(param_4 + 0x98) & 0xdf;
  }
  return;
}



// FUNCTION 14280b960 FUN_14280b960 body=283 status=ok
// SIG undefined FUN_14280b960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280b960(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_578 [32];
  undefined1 local_558 [154];
  byte local_4be;
  undefined1 local_4bc;
  undefined4 local_448;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  if ((((DAT_146b17150 != 0) && (lVar2 = FUN_14183bf40(param_2), lVar2 != 0)) &&
      (lVar2 = FUN_142874180(DAT_146b17150), lVar2 != 0)) &&
     (lVar3 = FUN_14183bf40(param_2), lVar3 != 0)) {
    lVar4 = USoundBase::GetPrivateStaticClass();
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
      FUN_14221fee0(local_558);
      FUN_14223f150(local_558,lVar3);
      local_448 = *(undefined4 *)(lVar3 + 0x5c);
      local_4be = local_4be | 1;
      local_4bc = param_3;
      FUN_1422c0900(lVar2,local_558);
      FActiveSound::~FActiveSound(local_558);
    }
  }
  return;
}



// FUNCTION 14280bab0 FUN_14280bab0 body=465 status=ok
// SIG undefined FUN_14280bab0(void)

void FUN_14280bab0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_38 [2];
  longlong local_28;
  longlong local_20 [3];
  
  FUN_1417931d0();
  puVar5 = &DAT_143f3eda8;
  if (DAT_146b15e60 == 0) {
    plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
    local_28 = *(longlong *)(lVar4 + 0x38);
    FString::FString(local_20,lVar4 + 0x40);
    if (local_28 != 0) {
      puVar2 = (undefined8 *)FSoftObjectPath::ToString(&local_28,local_38);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar2;
      }
      uVar3 = USoundClass::GetPrivateStaticClass();
      DAT_146b15e60 = FUN_141799c90(uVar3,0,puVar6,0,0,0,1);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_20[0] != 0) {
      FMemory::Free();
    }
  }
  *(longlong *)(param_1 + 0x28) = DAT_146b15e60;
  if (DAT_146b15e68 == 0) {
    plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
    local_28 = *(longlong *)(lVar4 + 0x68);
    FString::FString(local_20,lVar4 + 0x70);
    if (local_28 != 0) {
      puVar2 = (undefined8 *)FSoftObjectPath::ToString(&local_28,local_38);
      if (*(int *)(puVar2 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar2;
      }
      uVar3 = USoundConcurrency::GetPrivateStaticClass();
      DAT_146b15e68 = FUN_141799c90(uVar3,0,puVar5,0,0,0,1);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_20[0] != 0) {
      FMemory::Free();
    }
  }
  *(longlong *)(param_1 + 0x38) = DAT_146b15e68;
  return;
}



// FUNCTION 14280bc90 PostInitProperties body=124 status=ok
// SIG undefined PostInitProperties(void)

void USoundNodeEnveloper::PostInitProperties(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
    FRichCurve::AddKey(param_1 + 0x60,local_res10,0,0x3f800000,0,*puVar1);
    puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
    FRichCurve::AddKey(param_1 + 0xd8,local_res10,0,0x3f800000,0,*puVar1);
  }
  return;
}



// FUNCTION 14280bd10 PostInitProperties body=74 status=ok
// SIG undefined PostInitProperties(void)

void USoundWave::PostInitProperties(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 local_18 [16];
  
  FUN_14280bab0();
  cVar5 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar5 == '\0') {
    puVar1 = (undefined4 *)FGuid::NewGuid(local_18);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)(param_1 + 0x1b0) = *puVar1;
    *(undefined4 *)(param_1 + 0x1b4) = uVar2;
    *(undefined4 *)(param_1 + 0x1b8) = uVar3;
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
    FFormatContainer::FlushData(param_1 + 0x1c0);
    return;
  }
  return;
}



// FUNCTION 14280bd60 PostLoad body=269 status=ok
// SIG undefined PostLoad(void)

void USoundClass::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  UObject::PostLoad();
  iVar5 = *(int *)(param_1 + 0x60) + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5 * 8;
    lVar7 = (longlong)*(int *)(param_1 + 0x60) << 3;
    lVar8 = lVar6;
    do {
      if ((*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x58)) != 0) &&
         (iVar3 = UObjectBaseUtility::GetLinkerUE4Version(), iVar3 < 0x107)) {
        lVar1 = *(longlong *)(param_1 + 0x58);
        lVar2 = *(longlong *)(*(longlong *)(lVar6 + lVar1) + 0x78);
        if (lVar2 == 0) {
          *(longlong *)(*(longlong *)(lVar6 + lVar1) + 0x78) = param_1;
        }
        else if (lVar2 != param_1) {
          iVar3 = *(int *)(param_1 + 0x60);
          iVar4 = (iVar3 - iVar5) + -1;
          if (iVar4 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar8 + lVar1),(void *)(lVar7 + lVar1),(longlong)iVar4 << 3);
            iVar3 = *(int *)(param_1 + 0x60);
          }
          *(int *)(param_1 + 0x60) = iVar3 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x58);
        }
      }
      lVar7 = lVar7 + -8;
      lVar8 = lVar8 + -8;
      lVar6 = lVar6 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if ((DAT_146b17150 != 0) && (lVar6 = FUN_1428742d0(), lVar6 != 0)) {
    FUN_1422f77f0(lVar6,param_1);
    return;
  }
  return;
}



// FUNCTION 14280be70 FUN_14280be70 body=338 status=ok
// SIG undefined FUN_14280be70(void)

void FUN_14280be70(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  
  UObject::PostLoad();
  lVar5 = DAT_146b17150;
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x228) != 0)) {
    lVar3 = FUN_142948d60();
    for (lVar1 = *(longlong *)(lVar5 + 0x228); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (*(longlong *)(lVar5 + 0x228) != 0) {
          FUN_1427fa520(param_1,0);
          FUN_1427f6220(param_1);
          return;
        }
        break;
      }
    }
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)USoundCue::OnPostEngineInit;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
  }
  uVar7 = 0;
  if (plVar4 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af040,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
    iVar2 = DAT_1464af048;
    lVar5 = (longlong)DAT_1464af048;
    uVar7 = *puVar6;
    DAT_1464af048 = DAT_1464af048 + 1;
    if (DAT_1464af04c < DAT_1464af048) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af040,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + DAT_1464af040);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x378) = uVar7;
  FUN_1427f6220(param_1);
  return;
}



// FUNCTION 14280bfd0 FUN_14280bfd0 body=392 status=ok
// SIG undefined FUN_14280bfd0(void)

void FUN_14280bfd0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  UObject::PostLoad();
  if (DAT_146b17150 != 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar7 = iVar8 >> 0x1f & 0xffff;
      uVar3 = iVar8 + uVar7;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar9 = 0;
    }
    if (((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) && (1 < *(int *)(param_1 + 0x30))) {
      FUN_1417510e0(*(undefined8 *)(param_1 + 0x20));
      iVar8 = *(int *)(param_1 + 0x30) + -1;
      if (-1 < iVar8) {
        lVar9 = (longlong)iVar8 * 8;
        lVar11 = (longlong)*(int *)(param_1 + 0x30) << 3;
        lVar10 = lVar9;
        do {
          lVar1 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x28));
          if (lVar1 != 0) {
            lVar5 = USoundNodeWavePlayer::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (((bVar2) && (*(longlong *)(lVar1 + 0x60) != 0)) &&
               (*(byte *)(*(longlong *)(lVar1 + 0x60) + 0xb3) >> 7 !=
                ((byte)*(undefined4 *)(DAT_146b17150 + 0x8c4) & 1))) {
              iVar4 = *(int *)(param_1 + 0x30);
              iVar6 = (iVar4 - iVar8) + -1;
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar9 + *(longlong *)(param_1 + 0x28)),
                           (void *)(lVar11 + *(longlong *)(param_1 + 0x28)),(longlong)iVar6 << 3);
                iVar4 = *(int *)(param_1 + 0x30);
              }
              *(int *)(param_1 + 0x30) = iVar4 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
            }
          }
          lVar11 = lVar11 + -8;
          lVar9 = lVar9 + -8;
          lVar10 = lVar10 + -8;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
  }
  return;
}



// FUNCTION 14280c160 FUN_14280c160 body=132 status=ok
// SIG undefined FUN_14280c160(void)

void FUN_14280c160(longlong *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = param_1;
  UObject::PostLoad();
  if ((*(byte *)((longlong)param_1 + 0x4c) & 3) == 0) {
    pwVar3 = AK::MemoryMgr::GetPoolName((long)plVar4);
    iVar5 = (int)pwVar3;
    iVar2 = (int)param_1[9];
    if (0 < iVar2) {
      if (iVar5 < 1) goto LAB_14280c1cf;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (0 < iVar5) {
      iVar2 = (int)param_1[6];
      iVar1 = iVar2;
      while (iVar5 < iVar1) {
        iVar2 = iVar2 + -1;
        (**(code **)(*param_1 + 0x2e8))(param_1,iVar2);
        iVar1 = (int)param_1[6];
      }
    }
  }
LAB_14280c1cf:
  USoundNodeRandom::FixWeightsArray(param_1);
  USoundNodeRandom::FixHasBeenUsedArray(param_1);
  return;
}



// FUNCTION 14280c1f0 FUN_14280c1f0 body=161 status=ok
// SIG undefined FUN_14280c1f0(void)

void FUN_14280c1f0(longlong *param_1)

{
  undefined4 uVar1;
  
  FUN_14280c2e0();
  *(byte *)((longlong)param_1 + 0xb3) = *(byte *)((longlong)param_1 + 0xb3) | 0x10;
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(byte *)((longlong)param_1 + 0xb3) = *(byte *)((longlong)param_1 + 0xb3) & 0xfe;
  *(byte *)((longlong)param_1 + 0xb3) =
       *(byte *)((longlong)param_1 + 0xb3) | *(float *)((longlong)param_1 + 0x204) == 0.0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfb;
  *(byte *)((longlong)param_1 + 0xb4) =
       *(byte *)((longlong)param_1 + 0xb4) | ~((char)param_1[0x41] << 2) & 4U;
  if (DAT_146b17150 != 0) {
    FUN_1428742d0();
  }
  if ((char)param_1[0x40] == '\0') {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 1;
  }
  else if ((char)param_1[0x40] == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 2;
    return;
  }
  return;
}



// FUNCTION 14280c2a0 PostLoad body=58 status=ok
// SIG undefined PostLoad(void)

void USoundSubmix::PostLoad(undefined8 param_1)

{
  longlong lVar1;
  
  UObject::PostLoad();
  if (DAT_146b17150 != 0) {
    lVar1 = FUN_1428742d0();
    if (lVar1 != 0) {
      FUN_1422f7870(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14280c2e0 FUN_14280c2e0 body=425 status=ok
// SIG undefined FUN_14280c2e0(void)

void FUN_14280c2e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 local_res10 [8];
  
  UObject::PostLoad();
  lVar6 = UObjectBaseUtility::GetOutermost(param_1);
  if ((*(uint *)(lVar6 + 0x50) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xbf;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | (*(byte *)((longlong)param_1 + 0xb4) & 4) << 4
    ;
    lVar6 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      plVar7 = (longlong *)GetTargetPlatformManager();
      if (plVar7 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x78))(plVar7);
        iVar10 = 0;
        if (0 < (int)plVar7[1]) {
          lVar6 = 0;
          do {
            lVar1 = *param_1;
            plVar2 = *(longlong **)(lVar6 + *plVar7);
            lVar3 = *plVar2;
            puVar8 = (undefined8 *)(**(code **)(lVar3 + 0xf8))(plVar2,local_res10,param_1);
            uVar9 = (**(code **)(lVar3 + 0x100))(plVar2);
            (**(code **)(lVar1 + 0x328))(param_1,*puVar8,uVar9);
            iVar10 = iVar10 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar10 < (int)plVar7[1]);
        }
      }
      cVar5 = UObjectBaseUtility::IsTemplate(param_1,0x10);
      if ((cVar5 == '\0') && (DAT_146b17150 != 0)) {
        plVar7 = (longlong *)FUN_142875430();
        if (plVar7 == (longlong *)0x0) {
          FUntypedBulkData::RemoveBulkData(param_1 + 0x28);
        }
        else {
          (**(code **)(*plVar7 + 0x30))(plVar7,param_1,0,1,0);
        }
      }
      if ((*(byte *)((longlong)param_1 + 0xb3) & 2) != 0) {
        uVar9 = IStreamingManager::Get();
        plVar7 = (longlong *)UNiagaraSystem::GetEffectType(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00014280c47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x98))(plVar7,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14280c490 FUN_14280c490 body=802 status=ok
// SIG undefined FUN_14280c490(void)

void FUN_14280c490(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  uint uStackX_c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  plVar10 = (longlong *)0x0;
  plVar8 = *(longlong **)(param_1 + 0x58);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(param_1 + 0x2f0));
  if ((*(longlong *)(param_1 + 0x2d8) == 0) || (*(longlong *)(param_1 + 0x2e0) == 0)) {
LAB_14280c54c:
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2e0) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_14280c54c;
    plVar2 = *(longlong **)(param_1 + 0x2e0);
    plVar9 = plVar10;
    plVar8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (plVar9 = (longlong *)0x0, plVar8 = plVar10, !bVar11) {
        LOCK();
        bVar11 = iVar6 == (int)plVar2[1];
        if (bVar11) {
          *(int *)(plVar2 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar11) {
          plVar8 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = *(longlong **)(param_1 + 0x2d8);
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    plVar10 = (longlong *)0x1;
    cVar3 = FUN_141846080(plVar9);
    if (cVar3 != '\0') {
      bVar11 = true;
      goto LAB_14280c557;
    }
  }
  bVar11 = false;
LAB_14280c557:
  if ((plVar10 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  iVar6 = *(int *)(param_1 + 0x2e8);
  if ((0 < iVar6) || (0 < *(int *)(param_1 + 0x2ec))) {
    local_58 = DAT_1469e97f0;
    local_50 = DAT_1469e97f8;
    local_48 = DAT_1469e9800;
    fVar12 = (float)DAT_1464a97d0;
    if (DAT_1469e9800 != 0) {
      LOCK();
      *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
      UNLOCK();
      iVar6 = *(int *)(param_1 + 0x2e8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))
              (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_58,
               (float)*(int *)(param_1 + 0x2f0),fVar12,iVar6,0);
    local_40 = DAT_1469e9808;
    local_38 = DAT_1469e9810;
    local_30 = DAT_1469e9818;
    if (DAT_1469e9818 != 0) {
      LOCK();
      *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))
              (*(longlong **)(param_1 + 0x58),param_1 + 8,0,&local_40,
               (float)*(int *)(param_1 + 0x2f4),fVar12,*(undefined4 *)(param_1 + 0x2ec),0);
  }
  if ((*(char *)(param_1 + 0x311) != '\0') &&
     (((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x178))(), cVar3 == '\0' ||
       ((byte)(cVar3 - 3U) < 2)) && (!bVar11)))) {
    lVar7 = **(longlong **)(param_1 + 0x58);
    uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 200))(param_1 + 8);
    uVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0xc0))(param_1 + 8);
    iVar6 = (**(code **)(lVar7 + 0xa0))(*(undefined8 *)(param_1 + 0x58),param_1 + 8,uVar5,uVar4);
    bVar11 = iVar6 != 0;
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
    if ((((lVar7 != 0) && (cVar3 = UWorld::IsGameWorld(lVar7), cVar3 != '\0')) &&
        (*(longlong *)(lVar7 + 400) != 0)) &&
       ((plVar8 = (longlong *)FUN_14244f490(*(longlong *)(lVar7 + 400),0), plVar8 == (longlong *)0x0
        || (cVar3 = (**(code **)(*plVar8 + 0xe28))(plVar8), cVar3 == '\0')))) {
      bVar11 = false;
    }
    if (bVar11) {
      *(undefined1 *)(param_1 + 0x311) = 0;
      FReply::SetMousePos(param_1 + 0x168,param_1 + 0x314);
      *(undefined8 *)(param_1 + 0x314) = 0xffffffffffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = DAT_1468b5ca0;
  *(undefined4 *)(param_1 + 0x2f4) = DAT_1468b5ca4;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  return;
}



// FUNCTION 14280c7c0 ProcessAudio body=130 status=ok
// SIG undefined ProcessAudio(void)

void FSoundEffectSubmix::ProcessAudio(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  
  LOCK();
  *(undefined4 *)(param_1 + 0xc) = 1;
  UNLOCK();
  *param_2 = 0;
  FSoundEffectBase::PumpPendingMessages();
  LOCK();
  bVar1 = (int)param_1[9] == 0;
  if (bVar1) {
    *(int *)(param_1 + 9) = 0;
  }
  UNLOCK();
  if ((!bVar1) && (param_1[10] != 0)) {
    (**(code **)(*param_1 + 8))(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 9) = 0;
    UNLOCK();
  }
  LOCK();
  bVar1 = *(int *)((longlong)param_1 + 100) == 0;
  if (bVar1) {
    *(int *)((longlong)param_1 + 100) = 0;
  }
  UNLOCK();
  if (bVar1) {
    *param_3 = param_2[4];
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 14280c850 PumpPendingMessages body=526 status=ok
// SIG undefined PumpPendingMessages(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSoundEffectBase::PumpPendingMessages(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_14280c8a0:
  do {
    lVar1 = **(longlong **)(param_1 + 0x78);
    if (lVar1 == 0) {
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar2 = ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,lVar1 + 0x10);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar2,local_88,0x50);
    if (*(int *)(lVar2 + 0x40) != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x30);
      if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
        plVar4 = (longlong *)(lVar2 + 0x10);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      FMemory::Free();
    }
    lVar2 = *(longlong *)(param_1 + 0x78);
    *(longlong *)(param_1 + 0x78) = lVar1;
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
    FGenericPlatformMemory::MemswapGreaterThan8(local_128,lVar1 + 0x10,0x50);
    if (local_e8 != 0) {
      plVar4 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar4 = local_f8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x50) != 0) {
        plVar4 = *(longlong **)(lVar2 + 0x40);
        if (*(longlong **)(lVar2 + 0x40) == (longlong *)0x0) {
          plVar4 = (longlong *)(lVar2 + 0x20);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar2);
    }
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*local_88[0])(uVar3);
        goto LAB_14280c8a0;
      }
    }
    (*local_88[0])(0);
  } while( true );
}



// FUNCTION 14280ca60 FUN_14280ca60 body=287 status=ok
// SIG undefined FUN_14280ca60(void)

undefined8 * FUN_14280ca60(longlong *param_1,void *param_2,int param_3)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x318))();
  iVar3 = 4;
  if ((int)puVar1 == 2) {
    iVar3 = 2;
  }
  *(int *)(param_1 + 0x49) = iVar3;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_3 / (longlong)iVar3 & 0xffffffff);
    if (param_3 % iVar3 == 0) {
      local_28 = (void *)0x0;
      local_1c = 0;
      local_20 = param_3;
      if (0 < param_3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28);
      }
      iVar3 = local_20;
      _Src = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,param_2,(longlong)param_3);
      puVar2 = (undefined8 *)operator_new(0x18);
      puVar1 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(int *)(puVar2 + 2) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar2 + 1,iVar3,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar2[1],_Src,(longlong)iVar3);
        }
        puVar1 = (undefined8 *)param_1[0x40];
        param_1[0x40] = (longlong)puVar2;
        *puVar1 = puVar2;
      }
      LOCK();
      *(int *)(param_1 + 0x42) = (int)param_1[0x42] + param_3;
      UNLOCK();
      if (local_28 != (void *)0x0) {
        puVar1 = (undefined8 *)FMemory::Free();
      }
    }
  }
  return puVar1;
}



// FUNCTION 14280cb80 FUN_14280cb80 body=72 status=ok
// SIG undefined FUN_14280cb80(void)

void FUN_14280cb80(longlong param_1,longlong *param_2)

{
  longlong local_res8 [4];
  
  *(longlong **)(param_1 + 0x58) = param_2;
  local_res8[0] = param_1;
  if ((char)param_2[7] == '\0') {
    *(undefined1 *)(param_2 + 7) = 1;
    (**(code **)(*param_2 + 0x2a0))(param_2);
    (**(code **)(*param_2 + 0x2a8))(param_2);
  }
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 5,local_res8);
  return;
}



// FUNCTION 14280cbd0 FUN_14280cbd0 body=169 status=ok
// SIG undefined FUN_14280cbd0(void)

void FUN_14280cbd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FViewport::ReleaseDynamicRHI();
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,0);
  FUN_14280cca0(*(undefined8 *)(param_1 + 0x2b0));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x318)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x310));
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x10))(lVar1 + 0x10);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x318));
  }
  lVar3 = *(longlong *)(param_1 + 0x348);
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014280cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))(lVar3 + 0x10);
  return;
}



// FUNCTION 14280cca0 FUN_14280cca0 body=493 status=ok
// SIG undefined FUN_14280cca0(void)

void FUN_14280cca0(longlong param_1)

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
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    plVar9 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))();
    }
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    FUN_141ee24f0(0);
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
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_1451b2858;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  FUN_141ee24f0(0);
  return;
}



// FUNCTION 14280ce90 FUN_14280ce90 body=113 status=ok
// SIG undefined FUN_14280ce90(void)

void FUN_14280ce90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xe0);
      FUN_141edf360(lVar1 + 0x10 + lVar2);
      *(undefined1 *)(lVar1 + 0x7a0 + lVar2) = 0;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x7a8;
    } while (iVar3 < *(int *)(param_1 + 0xe8));
  }
  return;
}



// FUNCTION 14280cf10 Remove body=276 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x60;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x60;
        uVar7 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x00014280cfac;
      }
      iVar5 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x00014280cfac:
  if (iVar1 == -1) {
LAB_14280cfd3:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_14280cfd3;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x00014280cfac;
}



// FUNCTION 14280d030 Remove body=250 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,FConcurrencyGroup>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencyGroup,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar4 = (longlong)iVar5;
      if (*(int *)(lVar2 + lVar4 * 0x30) == param_2) {
        uVar7 = (longlong)*(int *)(lVar2 + 0x2c + lVar4 * 0x30) & uVar7;
        piVar3 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x00014280d0c5;
      }
      iVar5 = *(int *)(lVar2 + 0x28 + lVar4 * 0x30);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x00014280d0c5:
  if (iVar1 == -1) {
LAB_14280d0f0:
    if (*(longlong *)(*param_1 + 8 + lVar4 * 0x30) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar3 = *(int *)(lVar2 + lVar4 * 0x30 + 0x28);
    goto LAB_14280d0f0;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x30 + 0x28 + lVar2);
  iVar1 = *piVar3;
  goto joined_r0x00014280d0c5;
}



// FUNCTION 14280d130 Remove body=380 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<USoundNodeGroupControl_*,TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x20;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x20;
        uVar6 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x00014280d247;
      }
      iVar8 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x00014280d247:
  if (iVar1 == -1) {
LAB_14280d270:
    TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
    ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(*param_1 + 8 + lVar3);
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_14280d270;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x00014280d247;
}



// FUNCTION 14280d2b0 RemoveActiveSound body=887 status=ok
// SIG undefined RemoveActiveSound(void)

void FSoundConcurrencyManager::RemoveActiveSound(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  
  iVar8 = *(int *)(param_2 + 0x48);
  if (iVar8 != 0) {
    plVar5 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
      lVar3 = *(longlong *)(param_1 + 0x188);
      if (*(longlong *)(param_1 + 0x188) == 0) {
        lVar3 = param_1 + 0x180;
      }
      iVar7 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 400) - 1U & (longlong)iVar8) * 4);
      if (iVar7 != -1) {
        do {
          plVar2 = (longlong *)((longlong)iVar7 * 0x30 + *(longlong *)(param_1 + 0x148));
          if ((int)*plVar2 == iVar8) {
            if (iVar7 != -1) goto LAB_14280d345;
            break;
          }
          iVar7 = (int)plVar2[5];
        } while (iVar7 != -1);
      }
    }
    plVar2 = plVar5;
LAB_14280d345:
    plVar10 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar10 = plVar5;
    }
    lVar3 = (longlong)(int)plVar10[1];
    iVar8 = 0;
    if ((int)plVar10[1] != 0) {
      bVar13 = *(longlong *)*plVar10 != param_2;
      plVar2 = plVar5;
      plVar12 = plVar5;
      do {
        iVar8 = (int)plVar2;
        plVar5 = (longlong *)((longlong)plVar5 + 1);
        plVar2 = (longlong *)(ulonglong)(iVar8 + 1);
        if ((longlong)plVar5 < lVar3) {
          plVar4 = (longlong *)(*plVar10 + (longlong)plVar5 * 8);
          do {
            if (bVar13 != (*plVar4 != param_2)) break;
            plVar2 = (longlong *)(ulonglong)((int)plVar2 + 1);
            plVar5 = (longlong *)((longlong)plVar5 + 1);
            plVar4 = plVar4 + 1;
          } while ((longlong)plVar5 < lVar3);
        }
        iVar7 = (int)plVar2 - iVar8;
        if (bVar13 != false) {
          iVar11 = (int)plVar12;
          if (iVar11 != iVar8) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar10 + (longlong)iVar11 * 8),
                       (void *)(*plVar10 + (longlong)iVar8 * 8),(longlong)iVar7 << 3);
          }
          plVar12 = (longlong *)(ulonglong)(uint)(iVar11 + iVar7);
        }
        bVar13 = (bool)(bVar13 ^ 1);
      } while ((longlong)plVar5 < lVar3);
      iVar8 = (int)plVar12;
      *(int *)(plVar10 + 1) = iVar8;
    }
    if (iVar8 == 0) {
      TSet<TTuple<unsigned_int,FConcurrencyGroup>,TDefaultMapHashableKeyFuncs<unsigned_int,FConcurrencyGroup,0>,FDefaultSetAllocator>
      ::Remove((longlong *)(param_1 + 0x148),*(undefined4 *)(param_2 + 0x48));
      iVar7 = FUN_142233be0(param_2);
      iVar8 = *(int *)(param_2 + 0x28);
      lVar3 = FUN_142233c00(param_2);
      if (lVar3 != 0) {
        if (iVar7 == 0) {
          iVar7 = *(int *)(*(longlong *)(param_2 + 0x10) + 0xc);
          if (((*(byte *)(lVar3 + 4) & 1) != 0) && (iVar8 != 0)) {
            if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
              lVar3 = *(longlong *)(param_1 + 0xe8);
              if (*(longlong *)(param_1 + 0xe8) == 0) {
                lVar3 = param_1 + 0xe0;
              }
              iVar11 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)iVar8)
                                        * 4);
              if (iVar11 != -1) {
                do {
                  piVar6 = (int *)((longlong)iVar11 * 0x60 + *(longlong *)(param_1 + 0xa8));
                  if (*piVar6 == iVar8) {
                    if (iVar11 != -1) goto LAB_14280d4e4;
                    break;
                  }
                  iVar11 = piVar6[0x16];
                } while (iVar11 != -1);
              }
            }
            piVar6 = (int *)0x0;
LAB_14280d4e4:
            piVar9 = piVar6 + 2;
            if (piVar6 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove(piVar9,iVar7);
            piVar9 = piVar6 + 0xf;
            piVar1 = piVar6 + 4;
            if (piVar6 == (int *)0x0) {
              piVar9 = (int *)&DAT_00000034;
              piVar1 = (int *)&DAT_00000008;
            }
            if (*piVar1 != *piVar9) {
              return;
            }
            TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
            ::Remove((longlong *)(param_1 + 0xa8),iVar8);
            return;
          }
          param_1 = param_1 + 0xf8;
        }
        else {
          if (iVar7 == -1) {
            return;
          }
          if (((*(byte *)(lVar3 + 4) & 1) != 0) && (iVar8 != 0)) {
            if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
              lVar3 = *(longlong *)(param_1 + 0x98);
              if (*(longlong *)(param_1 + 0x98) == 0) {
                lVar3 = param_1 + 0x90;
              }
              iVar11 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)iVar8)
                                        * 4);
              if (iVar11 != -1) {
                do {
                  piVar6 = (int *)((longlong)iVar11 * 0x60 + *(longlong *)(param_1 + 0x58));
                  if (*piVar6 == iVar8) {
                    if (iVar11 != -1) goto LAB_14280d5c4;
                    break;
                  }
                  iVar11 = piVar6[0x16];
                } while (iVar11 != -1);
              }
            }
            piVar6 = (int *)0x0;
LAB_14280d5c4:
            piVar9 = piVar6 + 2;
            if (piVar6 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove(piVar9,iVar7);
            piVar9 = piVar6 + 0xf;
            piVar1 = piVar6 + 4;
            if (piVar6 == (int *)0x0) {
              piVar9 = (int *)&DAT_00000034;
              piVar1 = (int *)&DAT_00000008;
            }
            if (*piVar1 != *piVar9) {
              return;
            }
            TSet<TTuple<unsigned_int,FOwnerConcurrencyMapEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FOwnerConcurrencyMapEntry,0>,FDefaultSetAllocator>
            ::Remove((longlong *)(param_1 + 0x58),iVar8);
            return;
          }
          param_1 = param_1 + 8;
        }
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Remove(param_1,iVar7);
      }
    }
  }
  return;
}



// FUNCTION 14280d630 RemoveAtImpl body=220 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>
     ::RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + (longlong)param_2 * 0x50;
    iVar3 = param_3;
    do {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2);
      lVar2 = lVar2 + 0x50;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x50),
                 (void *)((longlong)(param_2 + param_3) * 0x50 + *param_1),(longlong)iVar1 * 0x50);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14280d710 RemoveAudioResource body=47 status=ok
// SIG undefined RemoveAudioResource(void)

void USoundWave::RemoveAudioResource(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return;
}



// FUNCTION 14280d740 RemoveChildNode body=101 status=ok
// SIG undefined RemoveChildNode(void)

void USoundNode::RemoveChildNode(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (iVar1 < (int)param_1[6]) {
    iVar1 = (int)param_1[6];
    iVar2 = (iVar1 - param_2) + -1;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(param_1[5] + (longlong)param_2 * 8),
                 (void *)(param_1[5] + (longlong)(param_2 + 1) * 8),(longlong)iVar2 << 3);
      iVar1 = (int)param_1[6];
    }
    *(int *)(param_1 + 6) = iVar1 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
  }
  return;
}



// FUNCTION 14280d7b0 FUN_14280d7b0 body=170 status=ok
// SIG undefined FUN_14280d7b0(void)

void FUN_14280d7b0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (iVar1 < (int)param_1[6]) {
    iVar1 = (int)param_1[6];
    iVar2 = (iVar1 - param_2) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[5] + (longlong)param_2 * 8),
                 (void *)(param_1[5] + (longlong)(param_2 + 1) * 8),(longlong)iVar2 << 3);
      iVar1 = (int)param_1[6];
    }
    *(int *)(param_1 + 6) = iVar1 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
  }
  iVar1 = (int)param_1[8];
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[7] + (longlong)param_2 * 4),
               (void *)(param_1[7] + (longlong)(param_2 + 1) * 4),(longlong)iVar2 << 2);
    iVar1 = (int)param_1[8];
  }
  *(int *)(param_1 + 8) = iVar1 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 7);
  return;
}



// FUNCTION 14280d860 FUN_14280d860 body=181 status=ok
// SIG undefined FUN_14280d860(void)

void FUN_14280d860(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c8))();
  if (iVar1 < (int)param_1[6]) {
    iVar1 = (int)param_1[6];
    iVar2 = (iVar1 - param_2) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[5] + (longlong)param_2 * 8),
                 (void *)(param_1[5] + (longlong)(param_2 + 1) * 8),(longlong)iVar2 << 3);
      iVar1 = (int)param_1[6];
    }
    *(int *)(param_1 + 6) = iVar1 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
  }
  iVar1 = (int)param_1[8];
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[7] + (longlong)param_2 * 0x14),
               (void *)(param_1[7] + (longlong)(param_2 + 1) * 0x14),(longlong)iVar2 * 0x14);
    iVar1 = (int)param_1[8];
  }
  *(int *)(param_1 + 8) = iVar1 + -1;
  TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 7);
  return;
}



// FUNCTION 14280d920 FUN_14280d920 body=219 status=ok
// SIG undefined FUN_14280d920(void)

void FUN_14280d920(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  USoundNodeGroupControl::FixGroupSizesArray();
  iVar2 = (int)param_1[8];
  if (iVar2 < 1) goto LAB_14280d9a3;
  if (param_2 == iVar2) {
    iVar1 = (iVar2 - (param_2 + -1)) + -1;
    if (iVar1 != 0) {
      _Src = (void *)(param_1[7] + lVar3 * 4);
      _Dst = (void *)(param_1[7] + (longlong)(param_2 + -1) * 4);
LAB_14280d983:
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 2);
      iVar2 = (int)param_1[8];
    }
  }
  else {
    iVar1 = (iVar2 - param_2) + -1;
    if (iVar1 != 0) {
      _Dst = (void *)(param_1[7] + lVar3 * 4);
      _Src = (void *)(param_1[7] + (longlong)(param_2 + 1) * 4);
      goto LAB_14280d983;
    }
  }
  *(int *)(param_1 + 8) = iVar2 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 7);
LAB_14280d9a3:
  iVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (iVar2 < (int)param_1[6]) {
    iVar2 = (int)param_1[6];
    iVar1 = (iVar2 - param_2) + -1;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[5] + lVar3 * 8),(void *)(param_1[5] + (longlong)(param_2 + 1) * 8)
                 ,(longlong)iVar1 << 3);
      iVar2 = (int)param_1[6];
    }
    *(int *)(param_1 + 6) = iVar2 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
  }
  return;
}



// FUNCTION 14280da00 FUN_14280da00 body=251 status=ok
// SIG undefined FUN_14280da00(void)

void FUN_14280da00(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_2;
  USoundNodeRandom::FixWeightsArray();
  USoundNodeRandom::FixHasBeenUsedArray(param_1);
  iVar1 = (int)param_1[8];
  lVar4 = (longlong)(param_2 + 1);
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[7] + lVar3 * 4),(void *)(param_1[7] + lVar4 * 4),
               (longlong)iVar2 << 2);
    iVar1 = (int)param_1[8];
  }
  *(int *)(param_1 + 8) = iVar1 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 7);
  iVar1 = (int)param_1[0xc];
  iVar2 = (iVar1 - param_2) + -1;
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[0xb] + lVar3),(void *)(param_1[0xb] + lVar4),(longlong)iVar2);
    iVar1 = (int)param_1[0xc];
  }
  *(int *)(param_1 + 0xc) = iVar1 + -1;
  TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 0xb);
  iVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (iVar1 < (int)param_1[6]) {
    iVar1 = (int)param_1[6];
    iVar2 = (iVar1 - param_2) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[5] + lVar3 * 8),(void *)(param_1[5] + lVar4 * 8),
                 (longlong)iVar2 << 3);
      iVar1 = (int)param_1[6];
    }
    *(int *)(param_1 + 6) = iVar1 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
  }
  return;
}



// FUNCTION 14280db00 FUN_14280db00 body=597 status=ok
// SIG undefined FUN_14280db00(void)

void FUN_14280db00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  undefined8 *local_68;
  uint local_60;
  uint local_5c;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  puVar13 = (undefined8 *)0x0;
  plVar1 = (longlong *)(param_1 + 0x330);
  local_68 = (undefined8 *)0x0;
  iVar10 = *(int *)(param_1 + 0x358);
  puStack_48 = (uint *)(param_1 + 0x340);
  iVar12 = 0;
  local_5c = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar10 != 0) {
    puVar11 = *(uint **)(param_1 + 0x350);
    if (*(uint **)(param_1 + 0x350) == (uint *)0x0) {
      puVar11 = puStack_48;
    }
    uVar3 = *puVar11;
    puVar8 = puVar13;
    puVar9 = puVar13;
    while (uVar3 == 0) {
      iVar6 = (int)puVar9;
      uStack_90 = (int)puVar8 + 0x20;
      puVar8 = (undefined8 *)(ulonglong)uStack_90;
      local_a8 = iVar6 + 1;
      puVar9 = (undefined8 *)(ulonglong)local_a8;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14280dbed;
      uVar3 = puVar11[(longlong)iVar6 + 1];
    }
    uStack_a4 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
    if (iVar10 < local_98._4_4_) {
LAB_14280dbed:
      local_98._4_4_ = iVar10;
    }
  }
  auStack_40._4_4_ = local_98._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_90;
  auStack_40._12_4_ = iStack_8c;
  uStack_50 = local_a8;
  uStack_4c = uStack_a4;
  local_70 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_30;
  local_88._0_8_ = auStack_40._8_8_;
  local_88._12_4_ = local_30._4_4_;
  bVar5 = local_98._4_4_ < *(int *)(param_1 + 0x358);
  puVar8 = puVar13;
  puVar9 = puVar13;
  puVar14 = puVar13;
  local_78 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_98 = puStack_48;
  if (bVar5) {
    do {
      plVar7 = (longlong *)*param_2;
      lVar4 = *(longlong *)((longlong)iStack_8c * 0x20 + *plVar1);
      plVar2 = plVar7 + (int)param_2[1];
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        if (*plVar7 == lVar4) goto LAB_14280dca9;
      }
      iVar10 = (int)puVar8;
      local_60 = iVar10 + 1;
      if ((int)puVar9 < (int)local_60) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,puVar8);
        puVar9 = (undefined8 *)(ulonglong)local_5c;
        puVar14 = local_68;
      }
      puVar8 = (undefined8 *)(ulonglong)local_60;
      puVar14[iVar10] = lVar4;
LAB_14280dca9:
      iVar12 = (int)puVar8;
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  puVar8 = (undefined8 *)((ulonglong)((longlong)(puVar14 + iVar12) + (7 - (longlong)puVar14)) >> 3);
  if (puVar14 + iVar12 < puVar14) {
    puVar8 = puVar13;
  }
  puVar9 = puVar14;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      FUN_14280dd60(param_1,*puVar9);
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
      puVar9 = puVar9 + 1;
    } while (puVar13 != puVar8);
  }
  if (puVar14 != (undefined8 *)0x0) {
    FMemory::Free(puVar14);
  }
  return;
}



// FUNCTION 14280dd60 FUN_14280dd60 body=341 status=ok
// SIG undefined FUN_14280dd60(void)

void FUN_14280dd60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res8 [2];
  undefined8 local_38;
  longlong *local_30;
  
  plVar4 = (longlong *)(param_1 + 0x330);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_res8,param_2);
  if ((local_res8[0] == -1) || (lVar7 = (longlong)local_res8[0] * 0x20 + *plVar4, lVar7 == 0)) {
    lVar9 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar9 = *(longlong *)(lVar7 + 8);
    plVar8 = *(longlong **)(lVar7 + 0x10);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  local_38 = *(undefined8 *)(lVar9 + 0x10);
  plVar6 = *(longlong **)(lVar9 + 0x18);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_30 = plVar6;
  FUN_14199eb10(*(undefined8 *)(param_1 + 0x3b0),&local_38);
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  TSet<TTuple<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>_>,TDefaultMapHashableKeyFuncs<USoundSubmix_*,TSharedPtr<Audio::FMixerSubmix,1>,0>,FDefaultSetAllocator>
  ::Remove(plVar4,param_2);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
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
  return;
}



// FUNCTION 14280dec0 FUN_14280dec0 body=259 status=ok
// SIG undefined FUN_14280dec0(void)

void FUN_14280dec0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  undefined8 local_18;
  longlong local_10;
  
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x40),local_res8,param_2);
  plVar4 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x40));
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar3 = *plVar5;
    plVar4 = (longlong *)plVar5[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_18 = *param_3;
    local_10 = param_3[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1418560f0(*(undefined8 *)(lVar3 + 0x10),&local_18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 14280dfd0 FUN_14280dfd0 body=183 status=ok
// SIG undefined FUN_14280dfd0(void)

void FUN_14280dfd0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_146b17150 != 0) {
    local_18 = 0;
    local_10 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    uVar3 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"TOGGLE_FULLSCREEN",0x24);
    lVar2 = DAT_146b17150;
    iVar1 = *(int *)(DAT_146b17150 + 0x7c0);
    *(int *)(DAT_146b17150 + 0x7c0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x7c4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x7b8,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x7b8));
    *puVar4 = uVar3;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_10._4_4_;
  }
  return;
}



// FUNCTION 14280e0a0 ResetChildren body=716 status=ok
// SIG undefined ResetChildren(void)

void USoundNodeLooping::ResetChildren(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int local_res8;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar13 = 0;
  iVar8 = 0;
  iVar9 = 0;
  iVar12 = 0;
  local_58 = 0;
  local_4c = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar10 = 0;
    do {
      uVar2 = *(ulonglong *)(lVar10 + *(longlong *)(param_1 + 0x28));
      if (uVar2 != 0) {
        uVar5 = param_2 << ((byte)iVar8 & 0x3f) ^ uVar2;
        local_50 = iVar9 + 1;
        if (iVar12 < local_50) {
          TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
          ResizeGrow(&local_58,iVar9);
          lVar13 = local_58;
          iVar12 = local_4c;
        }
        local_68._0_4_ = (undefined4)uVar2;
        local_68._4_4_ = (undefined4)(uVar2 >> 0x20);
        uStack_60 = (undefined4)uVar5;
        uStack_5c = (undefined4)(uVar5 >> 0x20);
        puVar1 = (undefined4 *)(lVar13 + (longlong)iVar9 * 0x10);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = uStack_60;
        puVar1[3] = uStack_5c;
        iVar9 = local_50;
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x30));
  }
  local_res8 = 0;
  if (0 < iVar9) {
    local_68 = 0;
    do {
      lVar10 = *(longlong *)(local_68 + 8 + lVar13);
      lVar3 = *(longlong *)(local_68 + lVar13);
      if (*(int *)(param_3 + 0x4c0) != *(int *)(param_3 + 0x4ec)) {
        lVar11 = *(longlong *)(param_3 + 0x4f8);
        if (*(longlong *)(param_3 + 0x4f8) == 0) {
          lVar11 = param_3 + 0x4f0;
        }
        iVar8 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar10 >> 0x20) * 0x17 + (int)lVar10)
                                  & (longlong)*(int *)(param_3 + 0x500) - 1U) * 4);
        if (iVar8 != -1) {
          lVar11 = *(longlong *)(param_3 + 0x4b8);
          do {
            lVar7 = (longlong)iVar8;
            if (*(longlong *)(lVar11 + lVar7 * 0x18) == lVar10) {
              if (((iVar8 != -1) && (lVar11 = lVar11 + lVar7 * 0x18, lVar11 != 0)) &&
                 (piVar6 = (int *)(lVar11 + 8), piVar6 != (int *)0x0)) {
                *(undefined1 *)((longlong)*piVar6 + *(longlong *)(param_3 + 0x508)) = 1;
              }
              break;
            }
            iVar8 = *(int *)(lVar11 + 0x10 + lVar7 * 0x18);
          } while (iVar8 != -1);
        }
      }
      if (*(int *)(lVar3 + 0x30) == 0) {
        lVar11 = USoundNodeWavePlayer::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (lVar10 = FActiveSound::FindWaveInstance(param_3,lVar10), lVar10 != 0)) {
          *(uint *)(lVar10 + 0xa4) = *(uint *)(lVar10 + 0xa4) & 0xfffffff3 | 0x10;
        }
      }
      else {
        iVar8 = 0;
        if (0 < *(int *)(lVar3 + 0x30)) {
          lVar11 = 0;
          do {
            uVar2 = *(ulonglong *)(lVar11 + *(longlong *)(lVar3 + 0x28));
            if (uVar2 != 0) {
              uStack_40 = lVar10 << ((byte)iVar8 & 0x3f) ^ uVar2;
              local_50 = iVar9 + 1;
              local_48 = uVar2;
              if (iVar12 < local_50) {
                TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>
                ::ResizeGrow(&local_58,iVar9);
                lVar13 = local_58;
                iVar12 = local_4c;
              }
              puVar1 = (undefined4 *)(lVar13 + (longlong)iVar9 * 0x10);
              *puVar1 = (undefined4)local_48;
              puVar1[1] = local_48._4_4_;
              puVar1[2] = (undefined4)uStack_40;
              puVar1[3] = uStack_40._4_4_;
              iVar9 = local_50;
            }
            iVar8 = iVar8 + 1;
            lVar11 = lVar11 + 8;
          } while (iVar8 < *(int *)(lVar3 + 0x30));
        }
      }
      local_res8 = local_res8 + 1;
      local_68 = local_68 + 0x10;
    } while (local_res8 < iVar9);
  }
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  return;
}



// FUNCTION 14280e370 Resize body=16 status=ok
// SIG undefined Resize(void)

void FSlateTexture2DRHIRef::Resize(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  FRenderResource::UpdateRHI(param_1 + 0x20);
  return;
}



// FUNCTION 14280e380 FUN_14280e380 body=1854 status=ok
// SIG undefined FUN_14280e380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280e380(longlong *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_368 [32];
  float local_348;
  float fStack_344;
  longlong local_338;
  longlong *plStack_330;
  int local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  longlong local_2d0 [3];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  longlong *local_290;
  longlong *local_288;
  longlong local_278;
  longlong *plStack_270;
  int local_268;
  int local_264;
  longlong local_260;
  undefined8 local_258;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_208;
  float fStack_204;
  undefined1 local_1f8 [352];
  ulonglong local_98;
  
  if (param_2 == 0) {
    return;
  }
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  if (param_3 == 0) {
    return;
  }
  FWidgetPath::FWidgetPath(local_1f8);
  plVar7 = (longlong *)param_1[0x5c];
  local_290 = (longlong *)0x0;
  plVar12 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar13 = iVar4 == 0;
    if (bVar13) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (local_290 = (longlong *)0x0, plVar12 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar4 == (int)plVar7[1];
      if (bVar13) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar12 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          local_290 = (longlong *)param_1[0x5b];
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_288 = plVar12;
  FUN_14189a110(DAT_1469f4590,&local_338,&local_290,local_1f8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar12 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar8 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar7 = plVar12 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar8 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_338 == 0) goto LAB_14280ea4a;
  iVar4 = FUN_142452330(param_4);
  FUN_14183b310(local_338,&local_318);
  SWindow::GetClientSizeInScreen(local_338,&local_320);
  iVar5 = (**(code **)(**(longlong **)(local_338 + 0x498) + 0x68))();
  local_328 = iVar5;
  if (iVar4 != iVar5) {
    FUN_14185bc30(local_338,iVar4);
    *(int *)((longlong)param_1 + 0xdc) = iVar4;
  }
  local_2e0 = local_318;
  fVar18 = (float)param_2;
  bVar13 = false;
  local_2dc = local_314;
  fVar17 = (float)param_3;
  local_2d8 = local_318 + fVar18;
  local_2d4 = local_314 + fVar17;
  local_348 = fVar18;
  fStack_344 = fVar17;
  FSlateApplication::GetWorkArea(DAT_1469f4590,&local_2f0,&local_2e0);
  if (iVar4 == 2) {
    if (((iVar5 != 2) || (fVar18 != local_320)) ||
       (fVar16 = local_208, fVar15 = fStack_204, fVar17 != local_31c)) {
      fVar16 = local_2f0;
      if (fVar18 < local_2e8 - local_2f0) {
        fVar16 = ((local_2e8 - local_2f0) - fVar18) * 0.5;
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar16 = fVar16 + local_2f0;
      }
      local_310 = fVar16;
      local_30c = local_2ec;
      local_208 = fVar16;
      fStack_204 = local_2ec;
      if (fVar17 < local_2e4 - local_2ec) {
        fVar15 = ((local_2e4 - local_2ec) - fVar17) * 0.5;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        local_2ec = fVar15 + local_2ec;
        local_30c = local_2ec;
        fStack_204 = local_2ec;
      }
      goto LAB_14280e78e;
    }
  }
  else {
    local_260 = 0;
    local_258 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    (**(code **)(*DAT_1469f4590 + 0x188))(DAT_1469f4590,&local_268);
    if ((int)local_258 < 1) {
      local_208 = 0.0;
      fStack_204 = 0.0;
      if (iVar4 == 1) goto LAB_14280e76f;
    }
    else {
      local_300 = *(undefined8 *)(local_260 + 0x38);
      uStack_2f8 = *(undefined8 *)(local_260 + 0x40);
      if (1 < (int)local_258) {
        uVar11 = (ulonglong)((int)local_258 - 1);
        piVar8 = (int *)(local_260 + 0xbc);
        do {
          if ((local_2f0 == (float)piVar8[-1]) && (local_2ec == (float)*piVar8)) {
            local_300 = *(undefined8 *)(piVar8 + -5);
            uStack_2f8 = *(undefined8 *)(piVar8 + -3);
          }
          piVar8 = piVar8 + 0x1c;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_2a0 = (float)(int)local_300;
      local_264 = (int)((ulonglong)local_300 >> 0x20);
      local_29c = (float)local_264;
      local_208 = local_2a0;
      fStack_204 = local_29c;
      if (iVar4 == 1) {
        local_268 = (int)uStack_2f8 - (int)local_300;
        local_264 = (int)((ulonglong)uStack_2f8 >> 0x20) - local_264;
LAB_14280e76f:
        fVar17 = (float)local_264;
        fVar18 = (float)local_268;
        local_348 = fVar18;
        fStack_344 = fVar17;
      }
    }
    fVar15 = fStack_204;
    fVar16 = local_208;
    FUN_141189610(&local_260);
    local_2ec = fVar15;
LAB_14280e78e:
    bVar13 = true;
    fVar15 = local_2ec;
  }
  local_2d0[0] = 0;
  local_2d0[1] = 0;
  local_2d0[2] = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  if ((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) &&
     (lVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar6 != 0)) {
    plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7,local_2d0);
    if (cVar3 != '\0') {
      if ((0 < (int)local_2b8) || (0 < local_2b8._4_4_)) {
        bVar13 = true;
        fVar16 = (float)(int)local_2b8;
        fVar15 = (float)local_2b8._4_4_;
        fVar18 = (float)(int)uStack_2b0;
        fVar17 = (float)uStack_2b0._4_4_;
        local_348 = fVar18;
        fStack_344 = fVar17;
        local_298 = fVar16;
        local_294 = fVar15;
        local_208 = fVar16;
        fStack_204 = fVar15;
      }
    }
  }
  iVar5 = local_328;
  if ((fVar18 == local_320) && (fVar17 == local_31c)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar13) || (((bVar13 && (fVar16 == local_318)) && (fVar15 == local_314)))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  bVar14 = iVar4 != local_328;
  if (((bVar1) || (bVar13)) || (bVar14)) {
    if ((*(uint *)((longlong)param_1 + 0x21c) >> 4 & 1) != 0) {
      (**(code **)(param_1[1] + 0x78))(param_1 + 1,0);
    }
    if (bVar14) {
LAB_14280e910:
      SWindow::ReshapeWindow
                (local_338,CONCAT44(fStack_204,local_208),CONCAT44(fStack_344,local_348));
    }
    else if (bVar1) {
      if (bVar13) goto LAB_14280e910;
      FUN_141857b30(local_338,CONCAT44(fStack_344,local_348));
    }
    else {
      SWindow::MoveWindowTo(local_338,CONCAT44(fStack_204,local_208));
    }
  }
  SWindow::GetWindowSizeFromClientSize
            (local_338,&local_308,
             CONCAT44((float)*(uint *)((longlong)param_1 + 0xd4),(float)*(uint *)(param_1 + 0x1a)));
  pfVar9 = (float *)(local_338 + 0x380);
  if (*pfVar9 == 0.0) {
    pfVar9 = (float *)(local_338 + 0x378);
  }
  local_300 = *(undefined8 *)pfVar9;
  uVar2 = local_300;
  fVar17 = (float)((ulonglong)local_300 >> 0x20);
  if ((((float)local_300 != local_308) || (fVar17 != local_304)) || (iVar4 != iVar5)) {
    lVar6 = (longlong)(float)local_300;
    local_300 = uVar2;
    (**(code **)(*param_1 + 0x20))(param_1,lVar6,(longlong)fVar17,iVar4);
    uVar2 = local_300;
  }
  local_300 = uVar2;
  pfVar10 = &local_348;
  pfVar9 = &local_320;
  if (-1 < *(char *)(local_338 + 0x351)) {
    pfVar10 = (float *)&local_300;
    pfVar9 = &local_308;
  }
  fVar17 = *pfVar10;
  fVar18 = pfVar10[1];
  if ((fVar17 != *pfVar9) || (fVar18 != pfVar9[1])) {
    plVar7 = *(longlong **)(DAT_1469eaf38 + 0x18);
    local_278 = local_338;
    plStack_270 = plStack_330;
    if (plStack_330 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_330 + 1) = (int)plStack_330[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_278,(longlong)fVar17,(longlong)fVar18);
  }
  UCanvas::UpdateAllCanvasSafeZoneData();
  if (local_2d0[0] != 0) {
    FMemory::Free();
  }
LAB_14280ea4a:
  if (plStack_330 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_330 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_330)(plStack_330);
      LOCK();
      piVar8 = (int *)((longlong)plStack_330 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_330 + 8))(plStack_330,1);
      }
    }
  }
  FUN_140458830(local_1f8);
  return;
}



// FUNCTION 14280eac0 FUN_14280eac0 body=138 status=ok
// SIG undefined FUN_14280eac0(void)

void FUN_14280eac0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x7a8,0);
  iVar4 = (int)(uVar3 / 0x7a8);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x7a8,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14280eb50 FUN_14280eb50 body=569 status=ok
// SIG undefined FUN_14280eb50(void)

void FUN_14280eb50(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + -0x10);
  iVar5 = (*(code *)**(undefined8 **)(param_1 + -0x10))(plVar1);
  if ((iVar5 != param_2) || (iVar5 = (**(code **)(*plVar1 + 8))(plVar1), iVar5 != param_3)) {
    cVar4 = IsInRenderingThread();
    if (cVar4 != '\0') {
      *(int *)(param_1 + 0x40) = param_2;
      *(int *)(param_1 + 0x44) = param_3;
      FRenderResource::UpdateRHI(param_1 + 0x10);
      return;
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_30);
      *(int *)(param_1 + 0x40) = param_2;
      *(int *)(param_1 + 0x44) = param_3;
      FRenderResource::UpdateRHI(param_1 + 0x10);
      QueryPerformanceCounter(&local_38);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_38.s.LowPart - local_30._0_4_);
      return;
    }
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
        lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
        plVar8[1] = lVar9;
        if (lVar9 == 0) {
          puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar10;
          lVar9 = 0x1f;
          do {
            puVar3 = puVar10 + 0x20;
            *puVar10 = puVar3;
            lVar9 = lVar9 + -1;
            puVar10 = puVar3;
          } while (lVar9 != 0);
          *puVar3 = 0;
        }
        plVar11 = (longlong *)plVar8[1];
        iVar5 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar5 = 0x20;
        plVar8[1] = (longlong)plVar11;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar5 = (int)plVar8[2];
    }
    plVar8[1] = *plVar11;
    *(int *)(plVar8 + 2) = iVar5 + -1;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    local_28 = 0;
    local_20 = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_1451b4080;
    *(undefined1 *)(plVar11 + 4) = 0;
    plVar11[5] = 0;
    plVar11[2] = (longlong)plVar1;
    plVar11[3] = CONCAT44(param_3,param_2);
    lVar9 = plVar11[5];
    piVar2 = (int *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_1409421c0(plVar11,0,0xff,1);
    if (lVar9 != 0) {
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FGraphEvent::Recycle(lVar9);
      }
    }
  }
  return;
}



// FUNCTION 14280ed90 FUN_14280ed90 body=474 status=ok
// SIG undefined FUN_14280ed90(void)

void FUN_14280ed90(longlong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  longlong *plVar5;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lpCriticalSection =
         (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(DAT_1469eaf38 + 0x18) + 0x160))();
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar5 = (longlong *)0x0;
    *(undefined1 *)(param_1 + 0x2fd) = 1;
    (**(code **)(*(longlong *)(param_1 + 8) + 0x198))(param_1 + 8,0,param_2,param_3,param_4,0);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_142880d70(param_1 + 8);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
      if (lVar4 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b15f68) &&
           (_Init_thread_header(&DAT_146b15f68), DAT_146b15f68 == -1)) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          DAT_146b15f60 =
               (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"gbx.RenderCore.AllowRedrawOnResize");
          _Init_thread_footer(&DAT_146b15f68);
        }
        if ((DAT_146b15f60 == (longlong *)0x0) ||
           (iVar3 = (**(code **)(*DAT_146b15f60 + 0x68))(), 0 < iVar3)) {
          FUN_14286d940(param_1 + 8,1);
        }
      }
    }
    if (((*(int *)(param_1 + 0x308) != 0) && (*(longlong **)(param_1 + 0x300) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x308) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x300);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,CONCAT44((float)param_3,(float)param_2));
    }
    *(undefined1 *)(param_1 + 0x2fd) = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 14280ef70 FUN_14280ef70 body=1035 status=ok
// SIG undefined FUN_14280ef70(void)

ulonglong FUN_14280ef70(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  piVar6 = (int *)FUN_142233c00(param_2);
  uVar3 = (uint)param_3[1];
  uVar11 = 0;
  lVar8 = *param_1;
  uVar13 = uVar11;
  if (((int)uVar3 < *piVar6) || (cVar2 = (char)piVar6[2], uVar13 = 0, cVar2 == '\x05')) {
LAB_14280f253:
    lVar8 = operator_new(0x540);
    uVar9 = uVar11;
    if (lVar8 != 0) {
      uVar9 = FActiveSound::FActiveSound(lVar8,param_2);
    }
    *(longlong *)(uVar9 + 0x40) = *param_1;
    if ((float)piVar6[3] <= 1.0 && (float)piVar6[3] != 1.0) {
      iVar5 = *(int *)((longlong)param_3 + 0x1c);
      plVar12 = (longlong *)*param_3;
      uVar10 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
      if (plVar12 + (int)param_3[1] < plVar12) {
        uVar10 = uVar11;
      }
      if (uVar10 != 0) {
        do {
          lVar8 = *plVar12;
          fVar14 = _guard_xfg_dispatch_icall_nop
                             ((float)piVar6[3],(float)((iVar5 + 1) - *(int *)(lVar8 + 0x4c)));
          uVar11 = uVar11 + 1;
          *(float *)(lVar8 + 0x104) = fVar14;
          plVar12 = plVar12 + 1;
        } while (uVar11 != uVar10);
      }
    }
    iVar5 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar5);
    }
    *(ulonglong *)(*param_3 + (longlong)iVar5 * 8) = uVar9;
    *(undefined4 *)(uVar9 + 0x48) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined4 *)(uVar9 + 0x4c) = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(int *)((longlong)param_3 + 0x1c) = *(int *)((longlong)param_3 + 0x1c) + 1;
    if (uVar13 != 0) {
      FSoundConcurrencyManager::RemoveActiveSound(param_1,uVar13);
      FAudioDevice::AddSoundToStop(*param_1,uVar13);
    }
  }
  else {
    switch(cVar2) {
    case '\x01':
      if (0 < (int)uVar3) {
        puVar7 = (ulonglong *)*param_3;
        uVar9 = (ulonglong)uVar3;
        uVar13 = uVar11;
        do {
          if ((uVar13 == 0) || (*(float *)(uVar13 + 0xa8) < *(float *)(*puVar7 + 0xa8))) {
            uVar13 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
LAB_14280f237:
        if (uVar13 != 0) goto LAB_14280f253;
      }
      break;
    case '\x02':
    case '\x03':
      iVar5 = FUN_14222b3c0(param_2,lVar8 + 0x128);
      puVar7 = (ulonglong *)*param_3;
      pfVar1 = (float *)((longlong)iVar5 * 0xb0 + 0x10 + *(longlong *)(lVar8 + 0x128));
      fVar14 = *(float *)(param_2 + 0x140) - *pfVar1;
      fVar17 = *(float *)(param_2 + 0x144) - pfVar1[1];
      fVar15 = *(float *)(param_2 + 0x148) - pfVar1[2];
      uVar9 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
      if (puVar7 + (int)param_3[1] < puVar7) {
        uVar9 = uVar11;
      }
      fVar14 = fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15;
      uVar10 = uVar11;
      uVar13 = uVar11;
      if (uVar9 != 0) {
        do {
          uVar4 = *puVar7;
          iVar5 = FUN_14222b3c0(uVar4,lVar8 + 0x128);
          pfVar1 = (float *)((longlong)iVar5 * 0xb0 + 0x10 + *(longlong *)(lVar8 + 0x128));
          fVar15 = *(float *)(uVar4 + 0x140) - *pfVar1;
          fVar16 = *(float *)(uVar4 + 0x144) - pfVar1[1];
          fVar17 = *(float *)(uVar4 + 0x148) - pfVar1[2];
          fVar15 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
          if ((fVar14 < fVar15) ||
             ((((char)piVar6[2] == '\x03' && (fVar15 == fVar14)) &&
              ((uVar13 == 0 || (*(float *)(uVar13 + 0xa8) < *(float *)(uVar4 + 0xa8))))))) {
            uVar13 = uVar4;
            fVar14 = fVar15;
          }
          puVar7 = puVar7 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
        goto LAB_14280f237;
      }
      break;
    case '\x04':
    case '\x06':
      puVar7 = (ulonglong *)*param_3;
      uVar9 = (longlong)(int)uVar3 & 0x1fffffffffffffff;
      if (puVar7 + (int)uVar3 < puVar7) {
        uVar9 = uVar11;
      }
      uVar10 = uVar11;
      uVar13 = uVar11;
      if (uVar9 != 0) {
        do {
          uVar4 = *puVar7;
          if (uVar13 == 0) {
LAB_14280f1f3:
            uVar13 = uVar4;
          }
          else {
            fVar14 = *(float *)(uVar4 + 0x114) * *(float *)(uVar4 + 0x110);
            fVar15 = *(float *)(uVar13 + 0x114) * *(float *)(uVar13 + 0x110);
            if ((fVar14 < fVar15) ||
               ((fVar14 == fVar15 && (*(float *)(uVar13 + 0xa8) < *(float *)(uVar4 + 0xa8)))))
            goto LAB_14280f1f3;
          }
          puVar7 = puVar7 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
        if (uVar13 != 0) {
          fVar14 = *(float *)(uVar13 + 0x114) * *(float *)(uVar13 + 0x110);
          fVar15 = *(float *)(param_2 + 0x114) * *(float *)(param_2 + 0x110);
          if ((fVar14 <= fVar15) && ((cVar2 != '\x06' || (fVar14 != fVar15)))) goto LAB_14280f237;
        }
      }
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      UAudioComponent::PlaybackCompleted(*(longlong *)(param_2 + 0x18),1);
    }
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 14280f3a0 FUN_14280f3a0 body=114 status=ok
// SIG undefined FUN_14280f3a0(void)

void FUN_14280f3a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x58))(0,&local_18,0,0,0,0);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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



// FUNCTION 14280f420 FUN_14280f420 body=268 status=ok
// SIG undefined FUN_14280f420(void)

void FUN_14280f420(undefined4 *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res20);
  uVar2 = 0x40;
  if (param_4 != 0) {
    uVar2 = 0x400;
  }
  FUntypedBulkData::SetBulkDataFlags(param_1 + 2,uVar2);
  FUN_1417225e0(param_1 + 2,param_2,param_3,param_4);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 1,4);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return;
}



// FUNCTION 14280f530 Serialize body=164 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USoundClass::Serialize(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_141763960();
  if (*(int *)(param_2 + 0x40) < 0x107) {
    local_38 = 0xffffffff;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    ::operator<<(param_2,&local_68);
    local_20 = 0;
    if (local_28 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_68);
  }
  return;
}



// FUNCTION 14280f5e0 FUN_14280f5e0 body=121 status=ok
// SIG undefined FUN_14280f5e0(void)

void FUN_14280f5e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 local_res10 [24];
  
  if (((*(byte *)(param_2 + 0x28) & 2) != 0) || (*(longlong *)(param_2 + 0x70) != 0)) {
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x290))();
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    FUN_1427f6220(param_1);
  }
  FUN_141763960(param_1,param_2);
  if (0x1e4 < *(int *)(param_2 + 0x40)) {
    FUN_14242a0d0(local_res10,param_2,0,0xd6);
  }
  return;
}



// FUNCTION 14280f660 Serialize body=51 status=ok
// SIG undefined Serialize(void)

void USoundNode::Serialize(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  FUN_141763960();
  if (0x1e4 < *(int *)(param_2 + 0x40)) {
    FUN_14242a0d0(local_res10,param_2,0,0xd6);
  }
  return;
}



// FUNCTION 14280f6a0 Serialize body=330 status=ok
// SIG undefined Serialize(void)

void USoundNodeEnveloper::Serialize(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  FUN_141763960();
  if (0x1e4 < *(int *)(param_2 + 0x40)) {
    FUN_14242a0d0(local_res10,param_2,0,0xd6);
  }
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 299)) {
    uVar4 = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FRichCurve::Reset(param_1 + 0x60);
      lVar2 = *(longlong *)(param_1 + 0x50);
      uVar3 = uVar4;
      uVar6 = uVar4;
      if (0 < *(int *)(lVar2 + 0x40)) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x38);
          puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res10);
          FRichCurve::AddKey(param_1 + 0x60,local_res18,*(undefined4 *)(lVar2 + uVar3),
                             *(undefined4 *)(lVar2 + 4 + uVar3),0,*puVar1);
          lVar2 = *(longlong *)(param_1 + 0x50);
          uVar5 = (int)uVar6 + 1;
          uVar3 = uVar3 + 0x14;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(lVar2 + 0x40));
      }
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FRichCurve::Reset(param_1 + 0xd8);
      lVar2 = *(longlong *)(param_1 + 0x58);
      uVar3 = uVar4;
      if (0 < *(int *)(lVar2 + 0x40)) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x38);
          puVar1 = (undefined4 *)FKeyHandle::FKeyHandle(local_res10);
          FRichCurve::AddKey(param_1 + 0xd8,local_res18,*(undefined4 *)(lVar2 + uVar4),
                             *(undefined4 *)(lVar2 + 4 + uVar4),0,*puVar1);
          lVar2 = *(longlong *)(param_1 + 0x58);
          uVar4 = uVar4 + 0x14;
          uVar5 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(lVar2 + 0x40));
      }
    }
  }
  return;
}



// FUNCTION 14280f7f0 FUN_14280f7f0 body=155 status=ok
// SIG undefined FUN_14280f7f0(void)

void FUN_14280f7f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [3];
  
  FUN_141763960();
  if (0x1e4 < (int)param_2[8]) {
    FUN_14242a0d0(local_res10,param_2,0,0xd6);
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0088);
  if (0x16 < iVar2) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_2 + 5) & 2) == 0) {
        return;
      }
      cVar1 = FUN_142810a20(param_1);
      if (cVar1 == '\0') {
        local_res10[0] = 0;
      }
      else {
        local_res10[0] = *(undefined8 *)(param_1 + 0x60);
      }
      puVar3 = local_res10;
    }
    else {
      puVar3 = (undefined8 *)(param_1 + 0x60);
    }
    (**(code **)(*param_2 + 0x30))(param_2,puVar3);
  }
  return;
}



// FUNCTION 14280f890 FUN_14280f890 body=1167 status=ok
// SIG undefined FUN_14280f890(void)

void FUN_14280f890(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  short *psVar12;
  float fVar13;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_78;
  undefined8 local_70;
  undefined2 *local_68;
  ulonglong local_60;
  longlong local_58 [2];
  longlong *local_48;
  longlong **local_40;
  
  FUN_141763960();
  local_res8[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res8);
  if ((local_res8[0] == '\0') && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_68,0);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar7;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xd9,
               L"This platform requires cooked packages, and audio data was not cooked into %s.",
               puVar8);
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar7 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_68,0);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar7;
    }
    FDebug::AssertFailed
              (&DAT_1451af21b,"Unknown",0xd9,
               L"This platform requires cooked packages, and audio data was not cooked into %s.",
               puVar8);
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) && (0x187 < (int)param_2[8])) &&
     (iVar6 = FArchive::CustomVer(param_2,&DAT_1464b0088), iVar6 < 0xc)) {
    local_res10 = 0;
    (**(code **)(*param_2 + 0x40))(param_2,&local_res10);
  }
  bVar4 = *(byte *)(param_2 + 5);
  if (((bVar4 & 2) != 0) || (param_2[0xe] != 0)) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xbf;
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | (*(byte *)((longlong)param_1 + 0xb4) & 4) << 4
    ;
    bVar4 = *(byte *)(param_2 + 5);
  }
  bVar2 = true;
  if (((bVar4 & 1) == 0) &&
     (plVar1 = (longlong *)param_2[0xe], bVar2 = false, plVar1 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1,0);
    bVar2 = false;
    if (cVar5 != '\0') {
      bVar2 = true;
    }
  }
  if (local_res8[0] == '\0') {
    FUN_1417225e0(param_1 + 0x28,param_2,param_1,0xffffffffffffffff);
  }
  else if (((*(byte *)((longlong)param_1 + 0xb3) & 2) == 0) || (!bVar2)) {
    plVar1 = (longlong *)param_2[0xe];
    if (plVar1 == (longlong *)0x0) {
      FUN_141722260(param_1 + 0x38,param_2,param_1,0,1,0);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      cVar5 = (**(code **)(*plVar1 + 0x88))(plVar1);
      if (cVar5 == '\0') {
        (**(code **)(*plVar1 + 0xf8))(plVar1,&local_res10,param_1);
        lVar9 = (**(code **)(*plVar1 + 0x100))(plVar1);
        (**(code **)(*param_1 + 0x330))(param_1,local_res10,lVar9);
        uVar3 = local_70;
        if (lVar9 == 0) {
          lVar9 = (longlong)(int)local_70;
          iVar6 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar6);
          if (local_70._4_4_ < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_78,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar9 * 8) = local_res10;
        }
        else {
          puVar7 = (undefined8 *)FName::ToString(&local_res10,local_58);
          if (*(int *)(puVar7 + 1) == 0) {
            psVar12 = &DAT_143f3eda8;
          }
          else {
            psVar12 = (short *)*puVar7;
          }
          local_68 = (undefined2 *)0x0;
          local_60 = 0;
          if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (psVar12[lVar11] != 0);
            uVar10 = (int)lVar11 + 1;
            local_60 = (ulonglong)uVar10;
            if (0 < (int)uVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
            }
            FGenericPlatformString::Memcpy(local_68,psVar12,(longlong)(int)uVar10 * 2);
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          FPlatformAudioCookOverrides::GetHashSuffix(lVar9,&local_68);
          puVar8 = &DAT_143f3eda8;
          if ((int)local_60 != 0) {
            puVar8 = local_68;
          }
          FName::FName(&local_res18,puVar8,1);
          uVar3 = local_70;
          lVar9 = (longlong)(int)local_70;
          iVar6 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar6);
          if (local_70._4_4_ < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_78,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar9 * 8) = local_res18;
          if (local_68 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
      FUN_141722260(param_1 + 0x38,param_2,param_1,&local_78,1,0);
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_58,param_2);
  local_48 = local_58;
  local_40 = &local_48;
  FUN_141661f40(&local_48,param_1 + 0x36);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_58);
  if ((*(byte *)((longlong)param_1 + 0xb3) & 2) != 0) {
    if ((local_res8[0] != '\0') && (bVar2)) {
      FUN_1422d78e0(param_1,param_2);
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      bVar4 = *(byte *)((longlong)param_1 + 0xb4);
      if ((bVar4 & 0x20) == 0) {
        if ((bVar4 & 0x40) == 0) {
          fVar13 = (float)FGenericPlatformMisc::GetDeviceTemperatureLevel((char)param_1[0x16],0);
          *(float *)(param_1 + 0x18) = fVar13;
          if ((fVar13 < 0.0) || ((float)*(int *)((longlong)param_1 + 0xec) < fVar13)) {
            fVar13 = (float)*(int *)((longlong)param_1 + 0xec);
            *(float *)(param_1 + 0x18) = fVar13;
          }
          *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 0x20;
        }
        else {
          fVar13 = (float)*(int *)((longlong)param_1 + 0xec);
          *(byte *)((longlong)param_1 + 0xb4) = bVar4 | 0x20;
          *(float *)(param_1 + 0x18) = fVar13;
        }
      }
      else {
        fVar13 = *(float *)(param_1 + 0x18);
      }
      *(int *)((longlong)param_1 + 0xec) = (int)fVar13;
    }
  }
  return;
}



// FUNCTION 14280fd30 SetDirection body=363 status=ok
// SIG undefined SetDirection(void)

void FSpeedTreeWind::SetDirection(longlong param_1,float *param_2)

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
  
  fVar1 = *(float *)(param_1 + 0x538);
  fVar9 = *param_2;
  if (((fVar9 != fVar1) || (*(float *)(param_1 + 0x53c) != param_2[1])) ||
     (*(float *)(param_1 + 0x540) != param_2[2])) {
    fVar2 = *(float *)(param_1 + 0x53c);
    *(float *)(param_1 + 0x5ac) = fVar9;
    fVar3 = *(float *)(param_1 + 0x540);
    fVar4 = param_2[1];
    *(float *)(param_1 + 0x5b0) = fVar4;
    fVar5 = param_2[2];
    *(float *)(param_1 + 0x5b4) = fVar5;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    fVar8 = *param_2;
    *(float *)(param_1 + 0x5d8) = fVar1;
    *(float *)(param_1 + 0x5dc) = fVar2;
    *(float *)(param_1 + 0x5e0) = fVar3;
    *(float *)(param_1 + 0x5b8) = (fVar1 + fVar9) * 0.5;
    fVar9 = *(float *)(param_1 + 4) * 0.5;
    *(float *)(param_1 + 0x5bc) = (fVar4 + fVar2) * 0.5;
    *(float *)(param_1 + 0x5c0) = (fVar5 + fVar3) * 0.5;
    *(double *)(param_1 + 0x5c8) = *(double *)(param_1 + 0x548);
    *(double *)(param_1 + 0x5d0) =
         (double)((*(float *)(param_1 + 4) - fVar9) *
                  (0.5 - (fVar1 * fVar8 + fVar2 * fVar6 + fVar3 * fVar7) * 0.5) + fVar9) +
         *(double *)(param_1 + 0x548);
    Normalize();
  }
  return;
}



// FUNCTION 14280fea0 SetEnabled body=7 status=ok
// SIG undefined SetEnabled(void)

uint FSoundEffectBase::SetEnabled(longlong param_1,byte param_2)

{
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = (uint)param_2;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14280feb0 FUN_14280feb0 body=249 status=ok
// SIG undefined FUN_14280feb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14280feb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar3 = (undefined8 *)(param_1 + 0x268);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar6 = *puVar3;
    plVar5 = *(longlong **)(param_1 + 0x270);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x26c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x270) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x274) = uStack_30._4_4_;
    local_38 = uVar6;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 14280ffb0 SetGustMax body=9 status=ok
// SIG undefined SetGustMax(void)

void FSpeedTreeWind::SetGustMax(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x520) = param_2;
  return;
}



// FUNCTION 14280ffc0 SetGustMin body=9 status=ok
// SIG undefined SetGustMin(void)

void FSpeedTreeWind::SetGustMin(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x51c) = param_2;
  return;
}



// FUNCTION 14280ffd0 FUN_14280ffd0 body=156 status=ok
// SIG undefined FUN_14280ffd0(void)

void FUN_14280ffd0(longlong param_1,int param_2,int param_3)

{
  float local_res8;
  float local_resc;
  
  local_res8 = (float)param_3 * *(float *)(param_1 + 0x294) +
               (float)param_2 * *(float *)(param_1 + 0x28c) + *(float *)(param_1 + 0x29c);
  local_resc = (float)param_3 * *(float *)(param_1 + 0x298) +
               (float)param_2 * *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x2a0);
  FSlateApplication::SetCursorPos((int)DAT_1469f4590,(int)&local_res8);
  *(int *)(param_1 + 0x268) = param_2;
  *(int *)(param_1 + 0x26c) = param_3;
  return;
}



// FUNCTION 142810070 FUN_142810070 body=164 status=ok
// SIG undefined FUN_142810070(void)

void FUN_142810070(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28 [2];
  undefined8 local_18 [2];
  
  param_1 = param_1 + (ulonglong)param_2 * 0x28;
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 8) = 3;
  if (((local_28 != plVar1) && (*(int *)(param_1 + 0x28) != 0)) &&
     (plVar4 = (longlong *)*plVar1, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*plVar1 != 0) {
      lVar5 = FMemory::Realloc(*plVar1,0,0);
      *plVar1 = lVar5;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((undefined8 *)(param_1 + 0x10) != local_18) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar1 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 142810120 SetNum body=167 status=ok
// SIG undefined SetNum(void)

void TArray<TMap<FActiveSound_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FActiveSound_*,int,0>_>,FDefaultAllocator>
     ::SetNum(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  iVar4 = (int)param_2;
  if (iVar1 < iVar4) {
    iVar5 = iVar4 - iVar1;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow();
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x50 + *param_1);
    if (iVar5 != 0) {
      lVar2 = (longlong)puVar3 + 0x2c;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 10;
        *(undefined8 *)(lVar2 + -0x24) = 0;
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0;
        *(undefined4 *)(lVar2 + 4) = 0xffffffff;
        *(undefined4 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x14) = 0;
        *(undefined4 *)(lVar2 + 0x1c) = 0;
        lVar2 = lVar2 + 0x50;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (iVar4 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar4,param_3);
    return;
  }
  return;
}



// FUNCTION 1428101f0 SetPreset body=13 status=ok
// SIG undefined SetPreset(void)

undefined4 FSoundEffectBase::SetPreset(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = param_2;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 142810200 FUN_142810200 body=178 status=ok
// SIG undefined FUN_142810200(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142810200(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res8 [2];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x358,*param_2);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    local_res8[0] = *(longlong *)(param_1 + 0x358);
    uVar1 = *(undefined4 *)(lVar3 + 100);
    uVar2 = *(undefined4 *)(lVar3 + 0x60);
    if (local_res8[0] != 0) {
      LOCK();
      *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
      UNLOCK();
    }
    lVar3 = *(longlong *)(param_1 + 0x360);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 8,local_res8[0]);
    *(undefined4 *)(lVar3 + 0x40) = uVar2;
    *(undefined4 *)(lVar3 + 0x44) = uVar1;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x360);
  local_res8[1] = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 8,0);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8 + 1);
  return;
}



// FUNCTION 1428102e0 SetStrength body=103 status=ok
// SIG undefined SetStrength(void)

void FSpeedTreeWind::SetStrength(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[0x14d];
  if (param_2 != fVar1) {
    *(double *)(param_1 + 0x166) = *(double *)(param_1 + 0x152);
    fVar2 = *param_1 * 0.5;
    param_1[0x16a] = fVar1;
    param_1[0x164] = param_2;
    *(double *)(param_1 + 0x168) =
         (double)(ABS(param_2 - fVar1) * (*param_1 - fVar2) + fVar2) + *(double *)(param_1 + 0x152);
  }
  return;
}



// FUNCTION 142810350 SetTextureData body=351 status=ok
// SIG undefined SetTextureData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FSlateTexture2DRHIRef::SetTextureData
               (longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)param_2[1];
  local_68 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(local_68 + 0x10);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(local_68 + 0x14);
  plVar1 = (longlong *)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uStack_60 = plVar4;
  if (&local_68 != plVar1) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._0_4_ = SUB84(plVar4,0);
    uStack_60._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
    lVar6 = *plVar1;
    plVar5 = *(longlong **)(param_1 + 0x68);
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = (undefined4)uStack_60;
    uStack_4c = uStack_60._4_4_;
    *(undefined4 *)plVar1 = (undefined4)local_68;
    *(undefined4 *)(param_1 + 100) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0x6c) = uStack_60._4_4_;
    local_68 = lVar6;
    uStack_60 = plVar5;
  }
  plVar1 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_60 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
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
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined4 *)(param_1 + 0x58) = param_4;
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



// FUNCTION 1428104b0 FUN_1428104b0 body=307 status=ok
// SIG undefined FUN_1428104b0(void)

char FUN_1428104b0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == '\0') {
    FUN_141805170(param_1 + 0x160,2,1);
    return '\0';
  }
  local_18 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x2d8);
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar6 = iVar4 == 0;
    if (bVar6) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = local_18, !bVar6) {
      LOCK();
      bVar6 = iVar4 == (int)plVar2[1];
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar6) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          local_18 = *(longlong **)(param_1 + 0x2d0);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_10 = plVar5;
  FUN_14185b9a0(param_1 + 0x160,&local_18,2,1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1428105f0 SetWindowButtonsVisibility body=68 status=ok
// SIG undefined SetWindowButtonsVisibility(void)

void SWindowTitleBarArea::SetWindowButtonsVisibility(longlong param_1,char param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  local_28 = DAT_1464b9ee9;
  if (param_2 != '\0') {
    local_28 = DAT_1464b9ee8;
  }
  local_20 = 0;
  local_18 = 0;
  local_27 = 1;
  SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x2c0),&local_28);
  return;
}



// FUNCTION 142810640 FUN_142810640 body=601 status=ok
// SIG undefined FUN_142810640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142810640(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,char param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  if (local_98 == 0) {
    param_2 = (longlong *)(param_1 + 0x138);
    local_98 = *param_2;
  }
  plVar2 = (longlong *)(param_1 + 0x120);
  uStack_90 = (longlong *)param_2[1];
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
    UNLOCK();
  }
  if (&local_98 != plVar2) {
    local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    lVar5 = *plVar2;
    plVar4 = *(longlong **)(param_1 + 0x128);
    local_50 = (undefined4)local_98;
    uStack_4c = local_98._4_4_;
    uStack_48 = (undefined4)uStack_90;
    uStack_44 = uStack_90._4_4_;
    *(undefined4 *)plVar2 = (undefined4)local_98;
    *(undefined4 *)(param_1 + 0x124) = local_98._4_4_;
    *(undefined4 *)(param_1 + 0x128) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 300) = uStack_90._4_4_;
    local_98 = lVar5;
    uStack_90 = plVar4;
  }
  plVar2 = uStack_90;
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_90 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_90 + 8))(uStack_90,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x130) = param_3;
  *(undefined1 *)(param_1 + 0x131) = param_4;
  *(undefined1 *)(param_1 + 0x132) = param_5;
  if ((param_6 == '\0') || (*(char *)(param_1 + 0x14c) == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x133) = uVar6;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x130) == '\0') {
      local_80 = *(longlong **)(param_1 + 0x128);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      local_88 = lVar5;
      SBox::SetContent(*(undefined8 *)(param_1 + 0x110),&local_88);
      plVar2 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_80)(local_80);
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
      local_68 = DAT_1464b9ee8;
      if (*(char *)(param_1 + 0x132) == '\0') {
        local_68 = DAT_1464b9ee9;
      }
      local_60 = 0;
      local_58 = 0;
      local_67 = 1;
      SLeafWidget::SetVisibility(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x2c0),&local_68);
    }
    else if (*(char *)(param_1 + 0x130) == '\x01') {
      local_70 = *(longlong **)(param_1 + 0x128);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_78 = lVar5;
      SBox::SetContent(*(undefined8 *)(param_1 + 0x100),&local_78);
      plVar2 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_70 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_70)(local_70);
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
      SWindowTitleBarArea::SetWindowButtonsVisibility
                (*(undefined8 *)(param_1 + 0xf0),*(undefined1 *)(param_1 + 0x132));
    }
  }
  FUN_142812b00(param_1 + -0x2f0);
  return;
}



// FUNCTION 1428108f0 ShouldApplyInteriorVolumes body=289 status=ok
// SIG undefined ShouldApplyInteriorVolumes(void)

uint USoundCue::ShouldApplyInteriorVolumes(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *local_18;
  undefined8 local_10;
  
  uVar2 = *(uint *)(param_1 + 0x370);
  if ((uVar2 & 0x20) == 0) {
    *(uint *)(param_1 + 0x370) = uVar2 | 0x20;
    if ((*(longlong *)(param_1 + 0x28) == 0) ||
       (uVar6 = 0x10, (*(byte *)(*(longlong *)(param_1 + 0x28) + 0x4c) & 2) == 0)) {
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x370) = uVar2 & 0xffffffef | 0x20 | uVar6;
    if (uVar6 == 0) {
      local_18 = (longlong *)0x0;
      local_10 = 0;
      FUN_1417a5b30(param_1,&local_18,1,0,0);
      plVar1 = local_18 + (int)local_10;
      for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar3 = *plVar7;
        if (lVar3 != 0) {
          lVar5 = USoundNodeSoundClass::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (((bVar4) && (*(longlong *)(lVar3 + 0x38) != 0)) &&
             ((*(byte *)(*(longlong *)(lVar3 + 0x38) + 0x4c) & 2) != 0)) {
            *(uint *)(param_1 + 0x370) = *(uint *)(param_1 + 0x370) | 0x10;
            break;
          }
        }
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
    }
  }
  return *(uint *)(param_1 + 0x370) >> 4 & 0xffffff01;
}



// FUNCTION 142810a20 FUN_142810a20 body=549 status=ok
// SIG undefined FUN_142810a20(void)

undefined8 FUN_142810a20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong uVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar7 = 1;
  if (lVar2 != 0) {
    lVar4 = USoundCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_1427ed870(lVar2,*(undefined8 *)(lVar2 + 0xb0),&local_38);
      plVar1 = local_38 + (int)local_30;
      plVar11 = local_38;
      if (local_38 != plVar1) {
        do {
          uVar9 = 0;
          bVar12 = (longlong)local_40 < 0;
          plVar5 = (longlong *)*plVar11;
          local_40 = local_40 & 0xffffffff00000000;
          if (bVar12) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48,0);
          }
          if (plVar5 != (longlong *)0x0) {
            lVar4 = USoundNodeAssetReferencer::GetPrivateStaticClass();
            uVar10 = local_40;
            if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (bVar12) {
              lVar4 = (longlong)(int)local_40;
              for (plVar6 = local_48; plVar6 != local_48 + lVar4; plVar6 = plVar6 + 1) {
                if ((longlong *)*plVar6 == plVar5) {
                  if ((int)((longlong)plVar6 - (longlong)local_48 >> 3) != -1) goto LAB_142810b8a;
                  break;
                }
              }
              iVar3 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar3);
              if (local_40._4_4_ < iVar3) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_48,uVar10 & 0xffffffff);
              }
              local_48[lVar4] = (longlong)plVar5;
            }
LAB_142810b8a:
            iVar3 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
            if (0 < (int)plVar5[6]) {
              uVar10 = uVar9;
              do {
                if ((longlong)iVar3 <= (longlong)uVar10) break;
                FUN_1427ed760(lVar2,*(undefined8 *)(plVar5[5] + uVar10 * 8),&local_48);
                uVar8 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar8;
                uVar10 = uVar10 + 1;
              } while ((int)uVar8 < (int)plVar5[6]);
            }
          }
          for (plVar5 = local_48; plVar5 != local_48 + (int)local_40; plVar5 = plVar5 + 1) {
            if (*plVar5 == param_1) {
              uVar7 = 0;
              goto LAB_142810c02;
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar1);
        uVar7 = 1;
      }
LAB_142810c02:
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return uVar7;
}



// FUNCTION 142810c50 FUN_142810c50 body=361 status=ok
// SIG undefined FUN_142810c50(void)

void FUN_142810c50(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_res18;
  int local_res1c;
  
  if (param_2 == '\0') {
    if ((char)param_1[0x5e] != '\0') {
      (**(code **)(*param_1 + 0x128))();
      *(undefined1 *)(param_1 + 0x5e) = 0;
    }
    return;
  }
  if ((char)param_1[0x5e] != '\0') {
    return;
  }
  if ((char)param_1[0x57] == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[10] + 0x1c0))();
    if (cVar1 == '\0') goto LAB_142810d86;
    plVar5 = param_1 + 0x55;
  }
  else {
    iVar3 = (int)((1.0 / *(float *)(param_1 + 0x4f)) * *(float *)(param_1 + 0x56));
    if (iVar3 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)param_1[0x19];
      if (iVar3 < (int)param_1[0x19]) {
        iVar2 = iVar3;
      }
    }
    iVar4 = (int)((1.0 / *(float *)(param_1 + 0x4f)) * *(float *)((longlong)param_1 + 0x2b4));
    iVar3 = 0;
    if ((-1 < iVar4) &&
       (iVar3 = *(int *)((longlong)param_1 + 0xcc), iVar4 < *(int *)((longlong)param_1 + 0xcc))) {
      iVar3 = iVar4;
    }
    plVar5 = (longlong *)&local_res18;
    fVar8 = (float)iVar2;
    fVar6 = (float)iVar3 * *(float *)((longlong)param_1 + 0x294);
    fVar7 = (float)iVar3 * *(float *)(param_1 + 0x53);
    local_res18 = (int)ROUND((fVar8 + fVar8) * *(float *)((longlong)param_1 + 0x28c) + fVar6 +
                             *(float *)((longlong)param_1 + 0x29c) + fVar6 +
                             *(float *)((longlong)param_1 + 0x29c) + 0.5) >> 1;
    local_res1c = (int)ROUND((fVar8 + fVar8) * *(float *)(param_1 + 0x52) + fVar7 +
                             *(float *)(param_1 + 0x54) + fVar7 + *(float *)(param_1 + 0x54) + 0.5)
                  >> 1;
  }
  FReply::SetMousePos(param_1 + 0x2c,plVar5);
LAB_142810d86:
  (**(code **)(*param_1 + 0x128))(param_1);
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return;
}



// FUNCTION 142810dc0 StartRecordingOutput body=83 status=ok
// SIG undefined StartRecordingOutput(void)

void USoundSubmix::StartRecordingOutput(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (DAT_146b17150 != 0) {
    uVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
    plVar2 = (longlong *)UWorld::GetAudioDevice(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xe8))(plVar2,param_1,param_3);
    }
  }
  return;
}



// FUNCTION 142810e20 FUN_142810e20 body=572 status=ok
// SIG undefined FUN_142810e20(void)

void FUN_142810e20(undefined4 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  DAT_146534e00 = param_1;
  if (DAT_146b17150 != 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = -1;
    uVar4 = USoundCue::GetPrivateStaticClass();
    FUN_1417a5560(uVar4,&local_38,1,0x10,0);
    uVar9 = local_30 & 0xffffffff;
    do {
      local_28 = local_28 + 1;
      if ((int)local_30 <= local_28) break;
    } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
LAB_142810ec0:
    if ((local_28 < 0) || ((int)uVar9 <= local_28)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_48 = (undefined8 *)0x0;
      local_40 = 1;
      lVar1 = *(longlong *)(local_38 + (longlong)local_28 * 8);
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,0);
      *local_48 = *(undefined8 *)(lVar1 + 0xb0);
      iVar7 = (int)local_40;
      puVar10 = local_48;
      while (0 < iVar7) {
        iVar8 = iVar7 + -1;
        plVar2 = (longlong *)puVar10[iVar8];
        iVar6 = (iVar7 - iVar8) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop(puVar10 + iVar8,puVar10 + iVar7,(longlong)iVar6 << 3);
        }
        local_40 = CONCAT44(local_40._4_4_,iVar8);
        iVar7 = iVar8;
        if (plVar2 != (longlong *)0x0) {
          lVar5 = USoundNodeAssetReferencer::GetPrivateStaticClass();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            (**(code **)(*plVar2 + 0x2f8))(plVar2);
          }
          else {
            iVar6 = (int)plVar2[6];
            if (iVar6 != 0) {
              if (local_40._4_4_ < iVar8 + iVar6) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48);
                puVar10 = local_48;
                iVar8 = (int)local_40;
              }
              _guard_xfg_dispatch_icall_nop(puVar10 + iVar8,(void *)plVar2[5],(longlong)iVar6 << 3);
              iVar7 = iVar8 + iVar6;
            }
          }
        }
      }
      FUN_1427fa520(lVar1,0);
      if (puVar10 != (undefined8 *)0x0) {
        FMemory::Free(puVar10);
      }
      uVar9 = local_30 & 0xffffffff;
      do {
        local_28 = local_28 + 1;
        if ((int)local_30 <= local_28) break;
      } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
      goto LAB_142810ec0;
    }
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 142811060 StopQuietSoundsDueToMaxConcurrency body=620 status=ok
// SIG undefined StopQuietSoundsDueToMaxConcurrency(void)

void FSoundConcurrencyManager::StopQuietSoundsDueToMaxConcurrency(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
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
  
  plVar2 = (longlong *)(param_1 + 0x148);
  uStack_84 = 1;
  uVar5 = *(uint *)(param_1 + 0x170);
  puVar1 = (uint *)(param_1 + 0x158);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar5 != 0) {
    puVar14 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar6 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar6 == 0) {
      lVar12 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar7) goto LAB_14281112c;
      uVar6 = puVar14[lVar12 + 1];
    }
    uStack_84 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_14281112c:
      uStack_74 = uVar5;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x170);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar13 = uVar6 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar6;
  if (uVar6 != uVar5) {
    puVar14 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = puVar14[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
    iVar9 = (int)uVar6 >> 5;
    while (uVar11 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1428111f2;
      uVar11 = puVar14[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar9 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar13 - iVar9) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_1428111f2:
      uStack_74 = uVar5;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar12 = (longlong)(int)uStack_4c * 0x30 + *plVar2;
    if ((*(int *)(lVar12 + 0x20) == 5) && (*(int *)(lVar12 + 0x18) < *(int *)(lVar12 + 0x10))) {
      AlgoImpl::
      IntroSortInternal<FActiveSound_*,FIdentityFunctor,TDereferenceWrapper<FActiveSound_*,_FConcurrencyGroup::StopQuietSoundsDueToMaxConcurrency_::_2_::FCompareActiveSounds>_>
                (*(undefined8 *)(lVar12 + 8),(longlong)*(int *)(lVar12 + 0x10),local_res8[0],
                 local_res8);
      iVar9 = *(int *)(lVar12 + 0x10);
      lVar8 = 0;
      iVar10 = iVar9 - *(int *)(lVar12 + 0x18);
      if (0 < iVar10) {
        do {
          lVar4 = lVar8 * 8;
          lVar8 = lVar8 + 1;
          pbVar3 = (byte *)(*(longlong *)(*(longlong *)(lVar12 + 8) + lVar4) + 0x98);
          *pbVar3 = *pbVar3 | 0x80;
        } while (lVar8 < iVar10);
        iVar9 = *(int *)(lVar12 + 0x10);
      }
      for (; lVar8 < iVar9; lVar8 = lVar8 + 1) {
        pbVar3 = (byte *)(*(longlong *)(*(longlong *)(lVar12 + 8) + lVar8 * 8) + 0x98);
        *pbVar3 = *pbVar3 & 0x7f;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 1428112d0 FUN_1428112d0 body=736 status=ok
// SIG undefined FUN_1428112d0(void)

void FUN_1428112d0(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  longlong *param_5)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *_Src;
  undefined8 uVar9;
  undefined2 *puVar10;
  float *pfVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float local_res10 [2];
  char local_res18;
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  code *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  local_res18 = param_3;
  if ((param_2 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xf0))(param_2,param_1,local_res10,&local_a8),
     *(int *)(puVar6 + 1) != 0)) {
    puVar7 = (undefined8 *)operator_new(0x90);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)puVar7 + 0x1c),0,0x74);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      FUN_14271e380(puVar7 + 4,0x2000);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    if (puVar3 != (undefined8 *)0x0) {
      Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(puVar3 + 4);
      FMemory::operator_delete(*puVar3);
      FMemory::operator_delete(puVar3,0x90);
    }
    local_a0 = (int)local_res10[0];
    uVar2 = *(uint *)(puVar6 + 1);
    local_a4 = (int)uVar2 / local_a0;
    local_9c = (int)local_a8;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(int)uVar2;
    uVar8 = SUB168(ZEXT816(2) * auVar4,0);
    fVar13 = (float)local_9c;
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    fVar14 = (float)local_a4;
    _Src = (undefined2 *)operator_new(uVar8);
    FMemory::operator_delete(0);
    pfVar11 = (float *)*puVar6;
    if (0 < (int)uVar2) {
      uVar12 = (ulonglong)uVar2;
      puVar10 = _Src;
      do {
        fVar1 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        *puVar10 = (short)(int)(fVar1 * 32767.0);
        uVar12 = uVar12 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar12 != 0);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    *(int *)((longlong)puVar6 + 0xc) = local_a4;
    *(int *)(puVar6 + 2) = local_a0;
    *(int *)((longlong)puVar6 + 0x14) = local_9c;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)(int)uVar2;
    uVar8 = SUB168(ZEXT816(2) * auVar5,0);
    *(float *)(puVar6 + 3) = fVar14 / fVar13;
    *(uint *)(puVar6 + 1) = uVar2;
    if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar9 = operator_new(uVar8);
    uVar8 = *puVar6;
    *puVar6 = uVar9;
    FMemory::operator_delete(uVar8);
    _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)*(int *)(puVar6 + 1) * 2);
    FMemory::operator_delete(_Src);
    if (local_res18 == '\0') {
      local_68 = 0;
      local_58 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_88);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_98[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_9c06637b1758a97f646615c9da4750e6>,void___cdecl(USoundWave_const_*)>
                    ::Call;
      FUN_142722610(*(longlong *)(param_1 + 0x70) + 0x20,*(longlong *)(param_1 + 0x70),0,local_98);
    }
    else if (local_res18 == '\x01') {
      local_68 = 0;
      local_58 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_88);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_98[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_7f14138a3de325c41a357493aaf120e1>,void___cdecl(void)>
                    ::Call;
      FUN_1427229b0(*(longlong *)(param_1 + 0x70) + 0x20,*(longlong *)(param_1 + 0x70),param_4,
                    param_5,local_98);
    }
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428115b0 StopRecordingOutput body=171 status=ok
// SIG undefined StopRecordingOutput(void)

void USoundSubmix::StopRecordingOutput
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
               longlong *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  if (DAT_146b17150 == 0) {
    lVar3 = *param_5;
  }
  else {
    uVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
    uVar1 = UWorld::GetAudioDevice(uVar1);
    uVar2 = FString::FString(local_18,param_5);
    FUN_1428112d0(param_1,uVar1,param_3,param_4,uVar2,param_6);
    lVar3 = *param_5;
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142811660 FUN_142811660 body=80 status=ok
// SIG undefined FUN_142811660(void)

void FUN_142811660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  FGeometry::operator=(param_1 + 0x120);
  (**(code **)(*(longlong *)(param_1 + -0x150) + 0x100))((longlong *)(param_1 + -0x150),param_4);
  plVar1 = *(longlong **)(param_1 + -0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_4);
  }
  return;
}



// FUNCTION 1428116b0 Tick body=34 status=ok
// SIG undefined Tick(void)

void SGameLayerManager::Tick(longlong param_1)

{
  FGeometry::operator=(param_1 + 0x2f8);
  FUN_1428119b0(param_1);
  return;
}



// FUNCTION 142811720 UnregisterWithPreset body=235 status=ok
// SIG undefined UnregisterWithPreset(void)

void FSoundEffectBase::UnregisterWithPreset(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = (longlong)*(int *)(lVar1 + 0x30);
  if (*(int *)(lVar1 + 0x30) != 0) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar1 + 0x28) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x28) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(lVar1 + 0x30) = iVar7;
  }
  return;
}



// FUNCTION 142811810 Update body=58 status=ok
// SIG undefined Update(void)

ulonglong FSoundEffectBase::Update(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  PumpPendingMessages();
  uVar2 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 9);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 9) = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  if ((uVar1 != 0) && (param_1[10] != 0)) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 9) = 0;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 142811850 Update body=51 status=ok
// SIG undefined Update(void)

void USoundEffectPreset::Update(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x28));
      *(longlong *)(lVar1 + 0x50) = param_1;
      LOCK();
      *(undefined4 *)(lVar1 + 0x48) = 1;
      UNLOCK();
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142811890 FUN_142811890 body=279 status=ok
// SIG undefined FUN_142811890(void)

void FUN_142811890(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x24));
  fVar2 = (*(float *)(param_2 + 0x1c) * fVar1 *
           (*(float *)(param_3 + 0x1c) - *(float *)(param_2 + 0x30)) -
          *(float *)(param_2 + 0x20) * fVar1 *
          (*(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x2c))) * *(float *)(param_1 + 0x280);
  fVar1 = (*(float *)(param_2 + 0x28) * fVar1 *
           (*(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x2c)) -
          *(float *)(param_2 + 0x24) * fVar1 *
          (*(float *)(param_3 + 0x1c) - *(float *)(param_2 + 0x30))) * *(float *)(param_1 + 0x280);
  *(int *)(param_1 + 0x274) = (int)ROUND(fVar2 + fVar2 + 0.5) >> 1;
  *(int *)(param_1 + 0x270) = (int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
  return;
}



// FUNCTION 1428119b0 FUN_1428119b0 body=233 status=ok
// SIG undefined FUN_1428119b0(void)

void FUN_1428119b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0x398) != 0) && (*(longlong **)(param_1 + 0x390) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x390) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x398) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x390);
    }
    uVar2 = (**(code **)(*plVar5 + 0x38))();
    *(undefined8 *)(param_1 + 0x380) = uVar2;
  }
  if ((*(longlong *)(param_1 + 0x380) != 0) &&
     (lVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x380) + 0x58) + 0x30))(),
     lVar3 != 0)) {
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 == '\0') {
      TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
      ::Reset(param_1 + 0x330);
      return;
    }
    lVar4 = UWorld::GetGameViewport(lVar3);
    if (lVar4 != 0) {
      uVar2 = FUN_1428749e0(DAT_146b17150,lVar3);
      FUN_14280db00(param_1,uVar2);
      FUN_1427f4500(param_1,param_1 + 0x2f8,lVar4,uVar2);
    }
  }
  return;
}



// FUNCTION 142811aa0 FUN_142811aa0 body=440 status=ok
// SIG undefined FUN_142811aa0(void)

void FUN_142811aa0(longlong param_1,longlong param_2)

{
  byte local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_18;
  byte *local_10;
  
  param_1 = param_1 + 0x220;
  local_res8[0] = *(byte *)(param_2 + 8) >> 4 & 1;
  local_18 = &DAT_1469ea0f0;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) >> 5 & 1;
  local_18 = &DAT_1469ea108;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) >> 2 & 1;
  local_18 = &DAT_1469ea0c0;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) >> 3 & 1;
  local_18 = &DAT_1469ea0d8;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) & 1;
  local_18 = &DAT_1469ea090;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) >> 1 & 1;
  local_18 = &DAT_1469ea0a8;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) >> 6 & 1;
  local_18 = &DAT_1469ea120;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  local_res8[0] = *(byte *)(param_2 + 8) >> 7;
  local_18 = &DAT_1469ea138;
  local_10 = local_res8;
  FUN_1427ecc40(param_1,local_res10,&local_18,0);
  return;
}



// FUNCTION 142811c60 FUN_142811c60 body=769 status=ok
// SIG undefined FUN_142811c60(void)

void FUN_142811c60(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  void *pvVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  uint uVar12;
  LARGE_INTEGER local_40;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  cVar3 = IsInRenderingThread();
  if (cVar3 != '\0') {
    local_res18[0] = 0;
    uVar12 = 0;
    pvVar5 = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                               (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + -8),0,1,
                                local_res18,0,1);
    _guard_xfg_dispatch_icall_nop(pvVar5,(void *)*param_2,(longlong)*(int *)(param_2 + 1));
    (**(code **)(*DAT_146ab6358 + 0x588))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + -8),0,uVar12 & 0xffffff00,1);
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    local_res20[0] = 0;
    uVar12 = 0;
    pvVar5 = (void *)(**(code **)(*DAT_146ab6358 + 0x580))
                               (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + -8),0,1,
                                local_res20,0,1);
    _guard_xfg_dispatch_icall_nop(pvVar5,(void *)*param_2,(longlong)*(int *)(param_2 + 1));
    (**(code **)(*DAT_146ab6358 + 0x588))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + -8),0,uVar12 & 0xffffff00,1);
    QueryPerformanceCounter(&local_40);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_40.s.LowPart - local_38._0_4_);
    return;
  }
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar10 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar10 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar10);
    plVar7 = plVar10;
  }
  plVar10 = (longlong *)plVar7[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar7;
    if (plVar10 == (longlong *)0x0) {
      lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = lVar8;
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar8 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar2;
        } while (lVar8 != 0);
        *puVar2 = 0;
      }
      plVar10 = (longlong *)plVar7[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar7[1] = (longlong)plVar10;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar11 = (int)plVar7[2];
  }
  plVar7[1] = *plVar10;
  *(int *)(plVar7 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *(undefined1 *)(plVar10 + 4) = 0;
  *plVar10 = (longlong)&PTR_FUN_1451b4090;
  plVar10[5] = 0;
  plVar10[2] = param_1 + -0x10;
  plVar10[3] = (longlong)param_2;
  lVar8 = plVar10[5];
  piVar1 = (int *)(lVar8 + 0x48);
  if (lVar8 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(plVar10,0,0xff,1);
  if (lVar8 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(lVar8);
    }
  }
  return;
}



// FUNCTION 142811f70 FUN_142811f70 body=696 status=ok
// SIG undefined FUN_142811f70(void)

void FUN_142811f70(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  DWORD DVar6;
  longlong *plVar7;
  DWORD *pDVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
    iVar12 = 0x20;
    plVar7 = (longlong *)operator_new(0x20);
    plVar11 = (longlong *)0x0;
    plVar13 = plVar11;
    if (plVar7 != (longlong *)0x0) {
      uVar3 = *(undefined4 *)(param_2 + 1);
      *plVar7 = 0;
      iVar4 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(plVar7 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar7,iVar4,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar7,_Src,(longlong)iVar4);
      }
      *(undefined4 *)(plVar7 + 2) = uVar3;
      *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
      *(undefined4 *)(plVar7 + 3) = 1;
      plVar13 = plVar7;
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_48);
      (**(code **)(*param_1 + 0x28))(param_1,plVar13);
      if (plVar13 != (longlong *)0x0) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar13,0x20);
      }
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_48._0_4_);
    }
    else {
      pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar8);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar11 = plVar7;
        }
        TlsSetValue(*pDVar8,plVar11);
        plVar7 = plVar11;
      }
      plVar11 = (longlong *)plVar7[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar7;
        if (plVar11 == (longlong *)0x0) {
          lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
          plVar7[1] = lVar9;
          if (lVar9 == 0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar10;
            lVar9 = 0x1f;
            do {
              puVar2 = puVar10 + 0x20;
              *puVar10 = puVar2;
              lVar9 = lVar9 + -1;
              puVar10 = puVar2;
            } while (lVar9 != 0);
            *puVar2 = 0;
          }
          plVar11 = (longlong *)plVar7[1];
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          plVar7[1] = (longlong)plVar11;
          *plVar7 = 0;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
      }
      else {
        iVar12 = (int)plVar7[2];
      }
      plVar7[1] = *plVar11;
      *(int *)(plVar7 + 2) = iVar12 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      local_40 = 0;
      local_38 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_1451b40a0;
      *(undefined1 *)(plVar11 + 4) = 0;
      plVar11[5] = 0;
      plVar11[3] = (longlong)plVar13;
      plVar11[2] = (longlong)(param_1 + -2);
      lVar9 = plVar11[5];
      piVar1 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res20 = lVar9;
      FUN_1409421c0(plVar11,0,0xff,1);
      if (lVar9 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
    }
  }
  return;
}



// FUNCTION 142812230 FUN_142812230 body=235 status=ok
// SIG undefined FUN_142812230(void)

void FUN_142812230(longlong *param_1,int param_2,int param_3,void *param_4)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
    puVar4 = (undefined8 *)operator_new(0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      *(int *)(puVar4 + 2) = param_2;
      *(int *)((longlong)puVar4 + 0x14) = param_3;
      *(undefined4 *)(puVar4 + 3) = 4;
      uVar1 = *(uint *)(puVar4 + 1);
      uVar5 = param_2 * param_3 * 4;
      if ((int)uVar1 < (int)uVar5) {
        *(uint *)(puVar4 + 1) = uVar5;
        if (*(int *)((longlong)puVar4 + 0xc) < (int)uVar5) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar4,uVar1);
        }
      }
      else if (((int)uVar5 < (int)uVar1) && (uVar5 != uVar1)) {
        *(uint *)(puVar4 + 1) = uVar5;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(puVar4);
      }
      if (param_4 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,param_4,(ulonglong)uVar5);
      }
    }
    (**(code **)(*param_1 + 0x40))(param_1,puVar4);
  }
  return;
}



// FUNCTION 142812320 FUN_142812320 body=586 status=ok
// SIG undefined FUN_142812320(void)

void FUN_142812320(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    lVar9 = param_2[2];
    iVar5 = (**(code **)param_1[-2])(param_1 + -2);
    if ((iVar5 != (int)lVar9) ||
       (iVar5 = *(int *)((longlong)param_2 + 0x14),
       iVar6 = (**(code **)(param_1[-2] + 8))(param_1 + -2), iVar6 != iVar5)) {
      lVar9 = param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)(param_1 + 8) = (int)lVar9;
      FRenderResource::UpdateRHI(param_1 + 2);
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
    if (*param_2 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_2,0x20);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
    return;
  }
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
    if (*plVar8 == 0) {
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
      plVar11 = (longlong *)plVar8[1];
      iVar5 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
    else {
      plVar8[1] = *plVar8;
      *plVar8 = 0;
      plVar11 = (longlong *)plVar8[1];
      iVar5 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
  }
  else {
    iVar5 = (int)plVar8[2];
  }
  plVar8[1] = *plVar11;
  *(int *)(plVar8 + 2) = iVar5 + -1;
  *plVar11 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar11 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
  *plVar11 = (longlong)&PTR_FUN_1451b40b0;
  *(undefined1 *)(plVar11 + 4) = 0;
  plVar11[5] = 0;
  plVar11[2] = (longlong)(param_1 + -2);
  plVar11[3] = (longlong)param_2;
  lVar9 = plVar11[5];
  piVar1 = (int *)(lVar9 + 0x48);
  if (lVar9 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar9;
  FUN_1409421c0(plVar11,0,0xff,1);
  if (lVar9 != 0) {
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 142812570 FUN_142812570 body=1418 status=ok
// SIG undefined FUN_142812570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142812570(longlong *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [8];
  longlong local_1e0;
  LARGE_INTEGER local_1d8;
  LARGE_INTEGER local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [352];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  TBaseMulticastDelegate<void,bool>::Broadcast(&DAT_1464af148,0);
  FUN_141edc760(local_1e8,1);
  *(undefined4 *)((longlong)param_1 + 0xcc) = param_4;
  *(undefined4 *)(param_1 + 0x19) = param_3;
  plVar10 = (longlong *)0x0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = param_5;
  plVar9 = param_1 + 2;
  if (param_1 == (longlong *)&DAT_00000008) {
    plVar9 = plVar10;
  }
  FUN_141edf360(plVar9);
  if (param_2 == '\0') {
    FUN_141edf270(plVar9);
    if ((*(char *)((longlong)param_1 + 0x2f3) == '\0') &&
       (*(char *)((longlong)param_1 + 0x2f4) == '\0')) {
      plVar9 = *(longlong **)(DAT_1469f4590 + 0x18);
      FWidgetPath::FWidgetPath(local_198);
      plVar3 = (longlong *)param_1[0x5b];
      local_1c8 = plVar10;
      plVar13 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar15 = iVar5 == 0;
        if (bVar15) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (local_1c8 = (longlong *)0x0, plVar13 = plVar10, !bVar15) {
          LOCK();
          bVar15 = iVar5 == (int)plVar3[1];
          if (bVar15) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar15) {
            plVar13 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              local_1c8 = (longlong *)param_1[0x5a];
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar15 = iVar5 == 0;
          if (bVar15) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_1c0 = plVar13;
      puVar7 = (undefined8 *)FUN_14189a110(DAT_1469f4590,local_1a8,&local_1c8,local_198);
      puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0xb8))(plVar9,*puVar7);
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1a0 + 1;
        lVar12 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar13 + 1;
        lVar12 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
        LOCK();
        plVar9 = plVar13 + 1;
        lVar12 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      if (puVar7 != (undefined8 *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17,*puVar7);
      }
      FUN_140458830(local_198);
    }
    if (param_1 == (longlong *)&DAT_00000008) {
      param_1 = plVar10;
    }
    bVar15 = false;
    DAT_1465351bc = DAT_1465351bc + 1;
    lVar12 = (longlong)(DAT_1465351b0 + -1);
    if (-1 < DAT_1465351b0 + -1) {
      lVar14 = lVar12 << 4;
      bVar15 = false;
      do {
        if (((*(int *)(lVar14 + 8 + DAT_1465351a8) == 0) ||
            (plVar9 = *(longlong **)(lVar14 + DAT_1465351a8), plVar9 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar9 + 0x40))(plVar9,param_1,0), cVar4 == '\0')) {
          bVar15 = true;
        }
        lVar14 = lVar14 + -0x10;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    iVar5 = DAT_1465351b0;
    DAT_1465351bc = DAT_1465351bc + -1;
    if ((bVar15) && (DAT_1465351bc < 1)) {
      plVar9 = plVar10;
      if (0 < DAT_1465351b0) {
        do {
          if (((*(int *)((longlong)plVar9 + DAT_1465351a8 + 8) == 0) ||
              (*(longlong **)((longlong)plVar9 + DAT_1465351a8) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)((longlong)plVar9 + DAT_1465351a8) + 0x10))(),
             cVar4 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465351a8,plVar10,1,1);
          }
          else {
            plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
            plVar9 = plVar9 + 2;
          }
        } while ((int)plVar10 < DAT_1465351b0);
      }
      _DAT_1465351b8 = DAT_1465351b0 * 2;
      if (_DAT_1465351b8 < 3) {
        _DAT_1465351b8 = 2;
      }
      if ((_DAT_1465351b8 < iVar5) && (DAT_1465351b4 != DAT_1465351b0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465351a8);
      }
    }
  }
  else if ((DAT_146ac3ac5 == '\0') &&
          (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
           (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_1d0);
    plVar9 = plVar10;
    if (0 < (int)param_1[0x65]) {
      do {
        lVar12 = param_1[100];
        plVar3 = *(longlong **)((longlong)plVar9 + lVar12);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,1);
          lVar12 = param_1[100];
        }
        *(undefined8 *)((longlong)plVar9 + lVar12) = 0;
        plVar3 = (longlong *)param_1[0x6b];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,1);
        }
        uVar11 = (int)plVar10 + 1;
        plVar10 = (longlong *)(ulonglong)uVar11;
        param_1[0x6b] = 0;
        plVar9 = plVar9 + 1;
      } while ((int)uVar11 < (int)param_1[0x65]);
    }
    QueryPerformanceCounter(&local_1d8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_1d8.s.LowPart - local_1d0._0_4_);
  }
  else {
    pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar9 = TlsGetValue(*pDVar8);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)operator_new(0x18);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = 0;
        plVar9[1] = 0;
        *(undefined4 *)(plVar9 + 2) = 0;
        plVar10 = plVar9;
      }
      TlsSetValue(*pDVar8,plVar10);
      plVar9 = plVar10;
    }
    plVar10 = (longlong *)plVar9[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar9;
      if (plVar10 == (longlong *)0x0) {
        lVar12 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
        plVar9[1] = lVar12;
        if (lVar12 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar9[1] = (longlong)puVar7;
          lVar12 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar12 = lVar12 + -1;
            puVar7 = puVar2;
          } while (lVar12 != 0);
          *puVar2 = 0;
        }
        plVar10 = (longlong *)plVar9[1];
        iVar5 = 0x20;
        *(undefined4 *)(plVar9 + 2) = 0x20;
      }
      else {
        iVar5 = 0x20;
        plVar9[1] = (longlong)plVar10;
        *(undefined4 *)(plVar9 + 2) = 0x20;
        *plVar9 = 0;
      }
    }
    else {
      iVar5 = (int)plVar9[2];
    }
    plVar9[1] = *plVar10;
    *(int *)(plVar9 + 2) = iVar5 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    local_1b8 = 0;
    local_1b0 = 0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_1451b2d20;
    *(undefined1 *)(plVar10 + 4) = 0;
    plVar10[5] = 0;
    plVar10[2] = (longlong)(param_1 + 100);
    plVar10[3] = (longlong)(param_1 + 0x6b);
    lVar12 = plVar10[5];
    piVar1 = (int *)(lVar12 + 0x48);
    if (lVar12 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_1e0 = lVar12;
    FUN_1409421c0(plVar10,0,0xff,1);
    if (lVar12 != 0) {
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FGraphEvent::Recycle(local_1e0);
      }
    }
  }
  FUN_141edd460(local_1e8);
  TBaseMulticastDelegate<void,bool>::Broadcast(&DAT_1464af160,0);
  return;
}



// FUNCTION 142812b00 FUN_142812b00 body=244 status=ok
// SIG undefined FUN_142812b00(void)

void FUN_142812b00(longlong param_1)

{
  undefined1 uVar1;
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = DAT_1464b9eec;
  if (*(char *)(param_1 + 0x421) != '\0') {
    uVar1 = DAT_1464b9ee8;
  }
  if (*(char *)(param_1 + 0x420) == '\0') {
    local_28 = DAT_1464b9ee9;
    if (*(char *)(param_1 + 0x423) != '\0') {
      local_28 = uVar1;
    }
    local_27 = 1;
    local_20 = 0;
    local_18 = 0;
    SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x3d0),&local_28);
    local_28 = DAT_1464b9ee9;
  }
  else {
    if (*(char *)(param_1 + 0x420) != '\x01') {
      return;
    }
    local_28 = DAT_1464b9ee9;
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x3d0),&local_28);
    local_28 = DAT_1464b9ee9;
    if (*(char *)(param_1 + 0x423) != '\0') {
      local_28 = uVar1;
    }
  }
  local_27 = 1;
  local_20 = 0;
  local_18 = 0;
  SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x3e0),&local_28);
  return;
}



// FUNCTION 142812ca0 FUN_142812ca0 body=307 status=ok
// SIG undefined FUN_142812ca0(void)

float * FUN_142812ca0(longlong param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x29c);
  fVar2 = *(float *)(param_1 + 0x2a0);
  fVar3 = *(float *)(param_1 + 0x28c);
  fVar4 = *(float *)(param_1 + 0x290);
  fVar7 = (float)(int)((ulonglong)param_3 >> 0x20);
  fVar6 = 1.0 / (fVar3 * *(float *)(param_1 + 0x298) - fVar4 * *(float *)(param_1 + 0x294));
  uVar5 = *(uint *)(param_1 + 0xcc);
  *param_2 = ((((float)(int)param_3 - fVar1) * *(float *)(param_1 + 0x298) * fVar6 -
              (fVar7 - fVar2) * *(float *)(param_1 + 0x294) * fVar6) /
             (float)*(uint *)(param_1 + 200)) * *(float *)(param_1 + 0x278);
  param_2[1] = (((fVar7 - fVar2) * fVar3 * fVar6 - ((float)(int)param_3 - fVar1) * fVar4 * fVar6) /
               (float)uVar5) * *(float *)(param_1 + 0x278);
  return param_2;
}



// FUNCTION 142812de0 FUN_142812de0 body=178 status=ok
// SIG undefined FUN_142812de0(void)

void FUN_142812de0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  if (param_2 != (longlong *)0x0) {
    if ((*(char *)(param_1 + 0x2fb) == '\0') && (*(char *)(param_1 + 0x2fc) == '\0')) {
      if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142812e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x110))(param_2,param_3,0);
        return;
      }
    }
    else if (param_3 != 0) {
      cVar1 = FUN_142881000(DAT_146b17150,param_1 + 8);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142812e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x110))(param_2,param_3,param_1 + 0x160);
        return;
      }
      (**(code **)(*param_2 + 0x110))(param_2,param_3,0);
    }
  }
  return;
}



// FUNCTION 142812ea0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindBranch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x150;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindBranchTwitch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x160;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindBranchWhip";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x170;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindBranchAnchor";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000180;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1428130a0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindRollingNoise";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x110;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindAnimation";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x120;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindVector";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x130;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindGlobal";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000140;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1428132a0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindBranchAdherences";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 400;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindTurbulences";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1a0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindLeaf1Ripple";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1b0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindLeaf1Tumble";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000001c0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1428134a0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindLeaf1Twitch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1d0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindLeaf2Ripple";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindLeaf2Tumble";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1f0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindLeaf2Twitch";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000200;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1428136a0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindFrondRipple";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x210;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindRollingBranch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x220;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindRollingLeafAndDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x230;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWindRollingNoise";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000240;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1428138a0 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"WindVector";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
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
  *puVar3 = L"WindGlobal";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"WindBranch";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"WindBranchTwitch";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"WindBranchWhip";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 142813b00 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindBranchAnchor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindBranchAdherences";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindTurbulences";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindLeaf1Ripple";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000080;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142813d00 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindLeaf1Tumble";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindLeaf1Twitch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindLeaf2Ripple";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindLeaf2Tumble";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000c0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142813f00 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FSpeedTreeUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindLeaf2Twitch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindFrondRipple";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xe0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindRollingBranch";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindRollingLeafAndDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000100;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142814100 FUN_142814100 body=214 status=ok
// SIG undefined FUN_142814100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142814100(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_bf8 [32];
  undefined1 local_bd8 [24];
  longlong *local_bc0;
  undefined1 local_140 [296];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_bf8;
  param_1 = (undefined8 *)*param_1;
  uVar4 = FUN_142816c90(local_bd8);
  *param_2 = *param_1;
  FUN_142816bc0(param_2 + 1,uVar4);
  FUN_14276d480(local_140);
  lVar6 = 8;
  puVar5 = local_140;
  do {
    puVar5 = puVar5 + -0x148;
    FUN_14276d480(puVar5);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (local_bc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_bc0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_bc0)(local_bc0);
      LOCK();
      piVar2 = (int *)((longlong)local_bc0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_bc0 + 8))(local_bc0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1428141e0 FUN_1428141e0 body=446 status=ok
// SIG undefined FUN_1428141e0(void)

int * FUN_1428141e0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  longlong *local_20;
  
  FUN_142819f40(param_1,local_28);
  *param_2 = local_28[0];
  FUN_142814100(param_3,local_20);
  *(undefined4 *)(local_20 + 0x179) = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    lVar1 = *local_20;
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)((longlong)iVar4 * 0xbd0 + *param_1) == lVar1) goto LAB_1428142b2;
          iVar4 = *(int *)((longlong)iVar4 * 0xbd0 + 0xbc8 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1428142b2:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0xbd0 + *param_1);
      FUN_142817fd0((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0xbc8);
      FUN_142824fa0(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_142814373;
    }
  }
  cVar2 = FUN_14281a5c0(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0xbcc) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0x179) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142814373:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1428143a0 FUN_1428143a0 body=871 status=ok
// SIG undefined FUN_1428143a0(void)

int * FUN_1428143a0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  void *_Dst;
  bool local_res8;
  
  iVar14 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar5 = (undefined4 *)param_3[1];
  plVar12 = (longlong *)((longlong)iVar9 * 0x30 + *param_1);
  *plVar12 = *(longlong *)*param_3;
  *(undefined4 *)(plVar12 + 1) = *puVar5;
  plVar12[2] = 0;
  plVar12[2] = *(longlong *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined4 *)(plVar12 + 3) = puVar5[4];
  *(undefined4 *)((longlong)plVar12 + 0x1c) = puVar5[5];
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined4 *)(plVar12 + 4) = puVar5[6];
  *(undefined4 *)((longlong)plVar12 + 0x24) = puVar5[7];
  *(undefined4 *)(plVar12 + 5) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    lVar2 = *plVar12;
    iVar8 = iVar13;
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == lVar2) break;
          iVar7 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      iVar14 = *(int *)((longlong)_Dst + 0x18);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (iVar14 != 0) {
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar12,0x28);
      iVar14 = *param_2;
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar14;
      }
      puVar5 = (undefined4 *)((longlong)iVar14 * 0x30 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar5[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1428146df;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar14 = 0x20;
    if (uVar4 != 0) {
      iVar14 = 0x1f - iVar13;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar14 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar11 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x2c) = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1428146df:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142814710 FUN_142814710 body=846 status=ok
// SIG undefined FUN_142814710(void)

int * FUN_142814710(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  void *_Dst;
  int iVar14;
  bool local_res8;
  
  iVar14 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)iVar9 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar5 = (undefined4 *)param_3[1];
  plVar11 = (longlong *)((longlong)iVar9 * 0x38 + *param_1);
  *plVar11 = *(longlong *)*param_3;
  *(undefined4 *)(plVar11 + 1) = *puVar5;
  plVar11[2] = 0;
  plVar11[2] = *(longlong *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined4 *)(plVar11 + 3) = puVar5[4];
  *(undefined4 *)((longlong)plVar11 + 0x1c) = puVar5[5];
  *(undefined8 *)(puVar5 + 4) = 0;
  plVar11[4] = *(longlong *)(puVar5 + 6);
  *(undefined4 *)(plVar11 + 5) = puVar5[8];
  *(undefined4 *)(plVar11 + 6) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    lVar2 = *plVar11;
    iVar8 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x38 + *param_1) == lVar2) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x38 + 0x30 + *param_1);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x38 + *param_1);
      iVar14 = *(int *)((longlong)_Dst + 0x18);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (iVar14 != 0) {
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x30);
      iVar14 = *param_2;
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar14;
      }
      puVar5 = (undefined4 *)((longlong)iVar14 * 0x38 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar5[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142814a35;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar14 = 0x20;
    if (uVar4 != 0) {
      iVar14 = 0x1f - iVar13;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar14 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x34) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 6) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142814a35:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142814a60 FUN_142814a60 body=873 status=ok
// SIG undefined FUN_142814a60(void)

int * FUN_142814a60(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  void *_Dst;
  bool local_res8;
  
  iVar17 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)((longlong)iVar12 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar8 = (undefined4 *)param_3[1];
  plVar14 = (longlong *)((longlong)iVar12 * 0x60 + *param_1);
  *plVar14 = *(longlong *)*param_3;
  *(undefined4 *)(plVar14 + 2) = *puVar8;
  plVar14[3] = 0;
  plVar14[3] = *(longlong *)(puVar8 + 2);
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined4 *)(plVar14 + 4) = puVar8[4];
  *(undefined4 *)((longlong)plVar14 + 0x24) = puVar8[5];
  *(undefined8 *)(puVar8 + 4) = 0;
  uVar4 = puVar8[9];
  uVar5 = puVar8[10];
  uVar6 = puVar8[0xb];
  *(undefined4 *)(plVar14 + 6) = puVar8[8];
  *(undefined4 *)((longlong)plVar14 + 0x34) = uVar4;
  *(undefined4 *)(plVar14 + 7) = uVar5;
  *(undefined4 *)((longlong)plVar14 + 0x3c) = uVar6;
  *(undefined4 *)(plVar14 + 8) = puVar8[0xc];
  *(undefined4 *)(plVar14 + 10) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    lVar2 = *plVar14;
    iVar11 = iVar16;
    if (uVar15 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x60 + *param_1) == lVar2) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x60 + 0x50 + *param_1);
          iVar11 = iVar16;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x60 + *param_1);
      iVar17 = *(int *)((longlong)_Dst + 0x20);
      plVar9 = *(longlong **)((longlong)_Dst + 0x18);
      if (iVar17 != 0) {
        do {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
        plVar9 = *(longlong **)((longlong)_Dst + 0x18);
      }
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar14,0x50);
      iVar17 = *param_2;
      bVar3 = (byte)iVar17 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar17;
      }
      puVar8 = (undefined4 *)((longlong)iVar17 * 0x60 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      puVar8[1] = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar17;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142814da1;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar17 = 0x20;
    if (uVar7 != 0) {
      iVar17 = 0x1f - iVar16;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar16;
    }
    iVar17 = 1 << (~(byte)((iVar17 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar17 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x54) = uVar15;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 10) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    TSet<TTuple<FName,TMeshAttributeArraySet<FVector4>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FVector4>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142814da1:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142814dd0 FUN_142814dd0 body=862 status=ok
// SIG undefined FUN_142814dd0(void)

int * FUN_142814dd0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  void *_Dst;
  int iVar14;
  bool local_res8;
  
  iVar14 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)iVar9 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar5 = (undefined4 *)param_3[1];
  plVar11 = (longlong *)((longlong)iVar9 * 0x38 + *param_1);
  *plVar11 = *(longlong *)*param_3;
  *(undefined4 *)(plVar11 + 1) = *puVar5;
  plVar11[2] = 0;
  plVar11[2] = *(longlong *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined4 *)(plVar11 + 3) = puVar5[4];
  *(undefined4 *)((longlong)plVar11 + 0x1c) = puVar5[5];
  *(undefined8 *)(puVar5 + 4) = 0;
  plVar11[4] = *(longlong *)(puVar5 + 6);
  *(undefined4 *)(plVar11 + 5) = puVar5[8];
  *(undefined4 *)((longlong)plVar11 + 0x2c) = puVar5[9];
  *(undefined4 *)(plVar11 + 6) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    lVar2 = *plVar11;
    iVar8 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x38 + *param_1) == lVar2) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x38 + 0x30 + *param_1);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x38 + *param_1);
      iVar14 = *(int *)((longlong)_Dst + 0x18);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (iVar14 != 0) {
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x30);
      iVar14 = *param_2;
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar14;
      }
      puVar5 = (undefined4 *)((longlong)iVar14 * 0x38 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar5[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142815105;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar14 = 0x20;
    if (uVar4 != 0) {
      iVar14 = 0x1f - iVar13;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar14 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x34) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 6) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142815105:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142815130 FUN_142815130 body=871 status=ok
// SIG undefined FUN_142815130(void)

int * FUN_142815130(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  void *_Dst;
  bool local_res8;
  
  iVar14 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar5 = (undefined4 *)param_3[1];
  plVar12 = (longlong *)((longlong)iVar9 * 0x30 + *param_1);
  *plVar12 = *(longlong *)*param_3;
  *(undefined4 *)(plVar12 + 1) = *puVar5;
  plVar12[2] = 0;
  plVar12[2] = *(longlong *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined4 *)(plVar12 + 3) = puVar5[4];
  *(undefined4 *)((longlong)plVar12 + 0x1c) = puVar5[5];
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined1 *)(plVar12 + 4) = *(undefined1 *)(puVar5 + 6);
  *(undefined4 *)((longlong)plVar12 + 0x24) = puVar5[7];
  *(undefined4 *)(plVar12 + 5) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    lVar2 = *plVar12;
    iVar8 = iVar13;
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == lVar2) break;
          iVar7 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      iVar14 = *(int *)((longlong)_Dst + 0x18);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (iVar14 != 0) {
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar12,0x28);
      iVar14 = *param_2;
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar14;
      }
      puVar5 = (undefined4 *)((longlong)iVar14 * 0x30 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar5[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14281546f;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar14 = 0x20;
    if (uVar4 != 0) {
      iVar14 = 0x1f - iVar13;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar14 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar11 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x2c) = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 5) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14281546f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1428154a0 FUN_1428154a0 body=274 status=ok
// SIG undefined FUN_1428154a0(void)

void FUN_1428154a0(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  
  if (param_1[4] != param_1[0xf]) {
    puVar2 = *(undefined4 **)(param_1 + 0x12);
    if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
      puVar2 = param_1 + 0x10;
    }
    iVar1 = puVar2[(longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                   (longlong)(int)param_1[0x14] - 1U];
    if (iVar1 != -1) {
      do {
        if (*(longlong *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 2)) == param_2) {
          if (iVar1 != -1) {
            return;
          }
          break;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x50 + *(longlong *)(param_1 + 2));
      } while (iVar1 != -1);
    }
  }
  local_68 = &local_res10;
  local_res10 = param_2;
  local_60 = FUN_142815a20(local_58,param_3,param_4,param_5,*param_1);
  FUN_142814a60(param_1 + 2,local_res8,&local_68,0);
  plVar3 = local_50;
  for (; local_48 != 0; local_48 = local_48 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}



// FUNCTION 1428155c0 FUN_1428155c0 body=271 status=ok
// SIG undefined FUN_1428155c0(void)

void FUN_1428155c0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  int local_28;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar2 = param_1 + 0x98;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      do {
        if (*(longlong *)((longlong)iVar1 * 0x38 + lVar2) == param_2) {
          if (iVar1 != -1) {
            return;
          }
          break;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + lVar2);
      } while (iVar1 != -1);
    }
  }
  local_48 = &local_res10;
  local_res10 = param_2;
  local_40 = FUN_142815b40(local_38,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0x58));
  FUN_142814dd0((longlong *)(param_1 + 0x60),local_res8,&local_48,0);
  plVar3 = local_30;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}



// FUNCTION 1428156d0 RegisterAttribute<bool> body=286 status=ok
// SIG undefined RegisterAttribute<bool>(void)

void TAttributesSet<FEdgeID>::RegisterAttribute<bool>
               (longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  int local_18;
  
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1 + 0x1f8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x208) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x1c0);
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar1 * 0x30) == param_2) {
          if (iVar1 != -1) {
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
      } while (iVar1 != -1);
    }
  }
  local_38 = &local_res10;
  local_res10 = param_2;
  local_30 = FUN_142815c60(local_28,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0x1b8));
  FUN_142815130((longlong *)(param_1 + 0x1c0),local_res8,&local_38,0);
  plVar3 = local_20;
  for (; local_18 != 0; local_18 = local_18 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_20 != (longlong *)0x0) {
    FMemory::Free(local_20);
  }
  return;
}



// FUNCTION 1428157f0 FUN_1428157f0 body=262 status=ok
// SIG undefined FUN_1428157f0(void)

int * FUN_1428157f0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar5 = (longlong)param_1[4];
  param_1[6] = *param_3;
  param_1[7] = param_4;
  iVar1 = param_1[4];
  if (iVar1 < param_2) {
    param_1[4] = param_2;
    iVar3 = param_2 - iVar1;
    if (param_1[5] < param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
  }
  else if (param_2 < iVar1) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 2,param_2,iVar1 - param_2,1);
  }
  if (lVar5 < param_2) {
    lVar6 = lVar5 << 4;
    lVar5 = param_2 - lVar5;
    do {
      iVar1 = *param_1;
      lVar4 = *(longlong *)(param_1 + 2) + lVar6;
      *(undefined4 *)(lVar4 + 8) = 0;
      if (*(int *)(lVar4 + 0xc) < iVar1) {
        TArray<float,FDefaultAllocator>::ResizeTo(lVar4,iVar1);
      }
      TMeshAttributeArrayBase<float>::Insert(lVar4,iVar1 + -1,param_1 + 6);
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 142815900 FUN_142815900 body=278 status=ok
// SIG undefined FUN_142815900(void)

int * FUN_142815900(int *param_1,int param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar5 = (longlong)param_1[4];
  *(undefined8 *)(param_1 + 6) = *param_3;
  param_1[8] = param_4;
  iVar1 = param_1[4];
  if (iVar1 < param_2) {
    param_1[4] = param_2;
    iVar3 = param_2 - iVar1;
    if (param_1[5] < param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
  }
  else if (param_2 < iVar1) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 2,param_2,iVar1 - param_2,1);
  }
  if (lVar5 < param_2) {
    lVar6 = lVar5 << 4;
    lVar5 = param_2 - lVar5;
    do {
      iVar1 = *param_1;
      lVar4 = *(longlong *)(param_1 + 2) + lVar6;
      *(undefined4 *)(lVar4 + 8) = 0;
      if (*(int *)(lVar4 + 0xc) < iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar4,iVar1);
      }
      TMeshAttributeArrayBase<FVector2D>::Insert(lVar4,iVar1 + -1,param_1 + 6);
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 142815a20 FUN_142815a20 body=278 status=ok
// SIG undefined FUN_142815a20(void)

int * FUN_142815a20(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = param_3[1];
  iVar4 = param_3[2];
  iVar2 = param_3[3];
  lVar6 = (longlong)param_1[4];
  param_1[8] = *param_3;
  param_1[9] = iVar1;
  param_1[10] = iVar4;
  param_1[0xb] = iVar2;
  param_1[0xc] = param_4;
  iVar1 = param_1[4];
  if (iVar1 < param_2) {
    param_1[4] = param_2;
    iVar4 = param_2 - iVar1;
    if (param_1[5] < param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  else if (param_2 < iVar1) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 2,param_2,iVar1 - param_2,1);
  }
  if (lVar6 < param_2) {
    lVar7 = lVar6 << 4;
    lVar6 = param_2 - lVar6;
    do {
      iVar1 = *param_1;
      lVar5 = *(longlong *)(param_1 + 2) + lVar7;
      *(undefined4 *)(lVar5 + 8) = 0;
      if (*(int *)(lVar5 + 0xc) < iVar1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar5,iVar1);
      }
      TMeshAttributeArrayBase<FVector4>::Insert(lVar5,iVar1 + -1,param_1 + 8);
      lVar7 = lVar7 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 142815b40 FUN_142815b40 body=278 status=ok
// SIG undefined FUN_142815b40(void)

int * FUN_142815b40(int *param_1,int param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar5 = (longlong)param_1[4];
  *(undefined8 *)(param_1 + 6) = *param_3;
  param_1[8] = *(int *)(param_3 + 1);
  param_1[9] = param_4;
  iVar1 = param_1[4];
  if (iVar1 < param_2) {
    param_1[4] = param_2;
    iVar3 = param_2 - iVar1;
    if (param_1[5] < param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
  }
  else if (param_2 < iVar1) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 2,param_2,iVar1 - param_2,1);
  }
  if (lVar5 < param_2) {
    lVar6 = lVar5 << 4;
    lVar5 = param_2 - lVar5;
    do {
      iVar1 = *param_1;
      lVar4 = *(longlong *)(param_1 + 2) + lVar6;
      *(undefined4 *)(lVar4 + 8) = 0;
      if (*(int *)(lVar4 + 0xc) < iVar1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (lVar4,iVar1);
      }
      TMeshAttributeArrayBase<FVector>::Insert(lVar4,iVar1 + -1,param_1 + 6);
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 142815c60 FUN_142815c60 body=262 status=ok
// SIG undefined FUN_142815c60(void)

int * FUN_142815c60(int *param_1,int param_2,undefined1 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar5 = (longlong)param_1[4];
  *(undefined1 *)(param_1 + 6) = *param_3;
  param_1[7] = param_4;
  iVar1 = param_1[4];
  if (iVar1 < param_2) {
    param_1[4] = param_2;
    iVar3 = param_2 - iVar1;
    if (param_1[5] < param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
  }
  else if (param_2 < iVar1) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 2,param_2,iVar1 - param_2,1);
  }
  if (lVar5 < param_2) {
    lVar6 = lVar5 << 4;
    lVar5 = param_2 - lVar5;
    do {
      iVar1 = *param_1;
      lVar4 = *(longlong *)(param_1 + 2) + lVar6;
      *(undefined4 *)(lVar4 + 8) = 0;
      if (*(int *)(lVar4 + 0xc) < iVar1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar4,iVar1);
      }
      TMeshAttributeArrayBase<bool>::Insert(lVar4,iVar1 + -1,param_1 + 6);
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 142815d70 FUN_142815d70 body=350 status=ok
// SIG undefined FUN_142815d70(void)

undefined8 * FUN_142815d70(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"LightComponent0");
  uVar2 = UPhysicsConstraintComponent::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FName::FName(local_res8,L"LightComponent0",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_14253df20(param_1,param_2);
  uVar4 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1450f0d78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x38) <
      DAT_146b161e0) {
    _Init_thread_header(&DAT_146b161e0);
    if (DAT_146b161e0 == -1) {
      FName::FName(&DAT_146b161c0,L"Lighting",1);
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146b161c8,L"Lighting",L"SpriteCategory",L"Lighting");
      atexit(FUN_143ebaf50);
      _Init_thread_footer(&DAT_146b161e0);
    }
  }
  param_1[0x8d] = param_1[0x8b];
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  lVar1 = param_1[0x8d];
  *(undefined8 *)(lVar1 + 0x1f8) = 0xc2b40000;
  *(undefined4 *)(lVar1 + 0x200) = 0;
  param_1[0x2d] = param_1[0x8d];
  return param_1;
}



// FUNCTION 142815ed0 FUN_142815ed0 body=230 status=ok
// SIG undefined FUN_142815ed0(void)

undefined8 * FUN_142815ed0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *param_1 = &PTR_FUN_1451bc488;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"StaticMeshComponent0",1);
  uVar1 = *puVar3;
  uVar4 = FUN_142a232e0();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar4,uVar4,1,0,0);
  param_1[0x8b] = plVar5;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc60);
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  FUN_1423974f0(param_1[0x8b],0);
  *(byte *)(param_1[0x8b] + 0x745) = *(byte *)(param_1[0x8b] + 0x745) | 4;
  lVar2 = param_1[2];
  param_1[0x2d] = param_1[0x8b];
  lVar6 = AAfrPlayerState::GetPrivateStaticClass();
  bVar7 = 0;
  if (lVar2 == lVar6) {
    bVar7 = 0x80;
  }
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0x7f;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | bVar7;
  return param_1;
}



// FUNCTION 142815fc0 FUN_142815fc0 body=1658 status=ok
// SIG undefined FUN_142815fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142815fc0(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong **pplVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_178 [32];
  char local_158;
  int local_154;
  longlong *local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [64];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *(undefined1 *)(param_1 + 1) = 0;
  plVar10 = param_1 + 5;
  plVar18 = param_1 + 7;
  plVar17 = param_1 + 0xb;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (longlong)&PTR_FUN_1451bbae0;
  *plVar10 = 0;
  param_1[6] = 0;
  *plVar18 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *plVar17 = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  lVar9 = param_2[0x24];
  local_154 = param_4;
  local_148 = param_1;
  local_e8 = param_2;
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_2);
  }
  local_138 = *(undefined4 *)(lVar9 + 0x1c0);
  lVar9 = (longlong)local_154;
  local_150 = *(longlong **)(param_2[0xe5] + 0x38);
  local_118 = *(longlong *)(*local_150 + lVar9 * 8);
  local_110 = *(longlong **)(*param_3 + lVar9 * 8);
  if (*(char *)((longlong)param_2 + 0x2e7) == '\x02') {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (local_154 < (int)param_2[0xec]) {
    lVar9 = lVar9 * 0xc0 + param_2[0xeb];
    if (*(char *)((longlong)param_2 + 0x2e7) != '\x02') {
      local_128 = 0;
      uStack_120 = 0;
      plVar10 = (longlong *)FUN_1423d3320(param_2,lVar9,&local_128);
      if (plVar10 != (longlong *)0x0) {
        param_1[2] = *plVar10;
        param_1[3] = plVar10[1];
        FUN_1408e22e0(plVar17,plVar10 + 2);
      }
    }
    lVar21 = local_118;
    param_1[10] = lVar9 + 0x50;
    lVar20 = lVar9 - (longlong)param_1;
    bVar5 = false;
    uVar15 = 0;
    lVar9 = lVar9 - (longlong)param_1;
    do {
      lVar4 = *(longlong *)(lVar20 + -8 + (longlong)plVar18);
      if (lVar4 != 0) {
        iVar16 = *(int *)(lVar21 + 0x480);
        lVar14 = 0;
        if (0 < iVar16) {
          puVar11 = (uint *)(*(longlong *)(lVar21 + 0x478) + 0x10);
          do {
            if (*(uint *)(*(longlong *)(lVar9 + -8 + (longlong)plVar18) + 0x54) <= *puVar11)
            goto LAB_1428161b6;
            lVar14 = lVar14 + 1;
            puVar11 = puVar11 + 6;
          } while (lVar14 < iVar16);
        }
        *plVar18 = lVar4;
        if (((0x1d < DAT_146ab62cc) || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) &&
           ((0x1b < DAT_146ab62cc ||
            (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0 ||
             (uVar7 = RHIGetShaderLanguageVersion(), 1 < uVar7)))))) {
          bVar5 = true;
        }
      }
LAB_1428161b6:
      param_2 = local_e8;
      param_1 = local_148;
      uVar15 = uVar15 + 1;
      plVar18 = plVar18 + 1;
    } while (uVar15 < 2);
    if (bVar5) {
      local_108 = local_148 + 9;
      uStack_100 = local_110 + 0xee;
      local_f8 = local_148 + 7;
      if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
          local_d8 = (undefined4)local_108;
          uStack_d4 = local_108._4_4_;
          uStack_d0 = (undefined4)uStack_100;
          uStack_cc = uStack_100._4_4_;
          local_c8 = local_f8;
          uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_1428190b0(&local_d8,uVar12);
        }
        else {
          plVar10 = (longlong *)FUN_14281a780(local_c0,0,0xff);
          lVar9 = *plVar10;
          *(undefined4 *)(lVar9 + 0x10) = (undefined4)local_108;
          *(undefined4 *)(lVar9 + 0x14) = local_108._4_4_;
          *(undefined4 *)(lVar9 + 0x18) = (undefined4)uStack_100;
          *(undefined4 *)(lVar9 + 0x1c) = uStack_100._4_4_;
          *(longlong **)(lVar9 + 0x20) = local_f8;
          lVar4 = plVar10[2];
          lVar9 = plVar10[1];
          lVar21 = *plVar10;
          lVar20 = *(longlong *)(lVar21 + 0x30);
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 0x48) = *(int *)(lVar20 + 0x48) + 1;
            UNLOCK();
          }
          FUN_14048a160(lVar21,lVar9,(int)lVar4,1);
          if (lVar20 != 0) {
            LOCK();
            piVar1 = (int *)(lVar20 + 0x48);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              FGraphEvent::Recycle(lVar20);
            }
          }
        }
      }
      else {
        uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_1428190b0(&local_108,uVar12);
      }
    }
    plVar10 = param_1 + 5;
    plVar17 = param_1 + 0xb;
  }
  plVar18 = local_150;
  if (((param_5 == '\0') || ((int)param_2[0xec] < 1)) ||
     (*(char *)((longlong)param_2 + 0x2e7) == '\x02')) goto LAB_1428163ba;
  puVar11 = (uint *)param_2[0xeb];
  uVar7 = *(uint *)((longlong)param_2 + 0x774) ^ puVar11[3];
  uVar15 = *(uint *)((longlong)param_2 + 0x76c) ^ puVar11[1];
  if (local_154 < 1) {
    if (((uVar7 == 0 && (*(uint *)(param_2 + 0xee) ^ puVar11[2]) == 0) && uVar15 == 0) &&
        (*puVar11 ^ *(uint *)(param_2 + 0xed)) == 0) goto LAB_1428163ba;
LAB_14281635b:
    local_148 = (longlong *)param_2[0xed];
    uStack_140 = (undefined4)param_2[0xee];
    uStack_13c = *(undefined4 *)((longlong)param_2 + 0x774);
    pplVar19 = (longlong **)&local_148;
  }
  else {
    if (((uVar7 != 0 || (*(uint *)(param_2 + 0xee) ^ puVar11[2]) != 0) || uVar15 != 0) ||
        (*puVar11 ^ *(uint *)(param_2 + 0xed)) != 0) goto LAB_14281635b;
    local_128 = 0;
    pplVar19 = &local_e8;
    uStack_120 = 0;
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    uStack_dc = 0;
  }
  plVar13 = (longlong *)FUN_1423d3320(param_2,puVar11,pplVar19);
  if (plVar13 != (longlong *)0x0) {
    param_1[2] = *plVar13;
    param_1[3] = plVar13[1];
    FUN_1408e22e0(plVar17,plVar13 + 2);
  }
LAB_1428163ba:
  if ((param_1[2] == 0) && (param_1[3] == 0)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  iVar16 = *(int *)(*(longlong *)(*plVar18 + (longlong)local_154 * 8) + 0x480);
  *(undefined4 *)(plVar10 + 1) = 0;
  local_158 = cVar6;
  if (*(int *)((longlong)plVar10 + 0xc) != iVar16) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar10);
  }
  iVar16 = 0;
  if (0 < *(int *)(local_118 + 0x480)) {
    lVar21 = 0;
    lVar9 = 0;
    do {
      uStack_140 = 0;
      uStack_13c = 0xffffffff;
      plVar10 = (longlong *)
                (**(code **)(*param_2 + 0x560))
                          (param_2,*(undefined4 *)(*(longlong *)(local_118 + 0x478) + lVar9));
      local_148 = plVar10;
      if (DAT_146b16001 == '\0') {
LAB_14281647d:
        if (((plVar10 == (longlong *)0x0) ||
            ((cVar6 != '\0' && (cVar6 = (**(code **)(*plVar10 + 0x2f0))(plVar10,4), cVar6 == '\0')))
            ) || (((*(byte *)(param_2 + 0x73) & 2) != 0 &&
                  (cVar6 = (**(code **)(*plVar10 + 0x2f0))(plVar10,0xd), cVar6 == '\0'))))
        goto LAB_1428164bb;
      }
      else {
        if (plVar10 != (longlong *)0x0) {
          uVar15 = (**(code **)(*plVar10 + 0x460))(plVar10);
          if (uVar15 < 2) {
            plVar10 = (longlong *)UMaterial::GetDefaultMaterial(0);
            local_148 = plVar10;
          }
          goto LAB_14281647d;
        }
LAB_1428164bb:
        plVar10 = (longlong *)UMaterial::GetDefaultMaterial(0);
        local_148 = plVar10;
      }
      uVar12 = (**(code **)(*local_110 + 0x40))();
      cVar6 = FUN_142859470(plVar10,uVar12,local_138);
      if ((cVar6 != '\0') && ((*(byte *)(local_118 + 0x494) & 1) == 0)) {
        plVar10 = (longlong *)UMaterial::GetDefaultMaterial(0);
        local_148 = plVar10;
      }
      if ((local_154 < (int)param_2[0xec]) &&
         (lVar20 = (longlong)local_154 * 0xc0 + param_2[0xeb], iVar16 < *(int *)(lVar20 + 0x48))) {
        lVar20 = *(longlong *)(lVar20 + 0x40);
        uStack_140 = *(undefined4 *)(lVar20 + lVar21);
        uStack_13c = *(undefined4 *)(lVar20 + 4 + lVar21);
      }
      iVar3 = (int)param_1[6];
      *(int *)(param_1 + 6) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 5,iVar3);
      }
      puVar2 = (undefined4 *)(param_1[5] + (longlong)iVar3 * 0x10);
      *puVar2 = (undefined4)local_148;
      puVar2[1] = local_148._4_4_;
      puVar2[2] = uStack_140;
      puVar2[3] = uStack_13c;
      local_68 = 0;
      local_60 = 0;
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x298))(plVar10,local_a8);
      lVar20 = (**(code **)(*plVar10 + 0x2f8))(plVar10,local_138,3);
      if (lVar20 != 0) {
        cVar6 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
          cVar6 = FUN_14259cbc0(lVar20);
        }
        else {
          cVar6 = FUN_14259cb90(lVar20);
        }
        if (cVar6 != '\0') {
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      iVar16 = iVar16 + 1;
      lVar9 = lVar9 + 0x18;
      lVar21 = lVar21 + 8;
      cVar6 = local_158;
    } while (iVar16 < *(int *)(local_118 + 0x480));
  }
  return param_1;
}


