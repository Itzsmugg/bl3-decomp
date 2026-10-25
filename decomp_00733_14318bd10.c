// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14318bd10 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkAudioDevice::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x300));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x300);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x330) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x328) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x330)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x338) = *(int *)(lVar9 + 0x338) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x300));
  return uVar3;
}



// FUNCTION 14318be00 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkFxCustom::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x2f0) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x2e8) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x2f0)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x2f8) = *(int *)(lVar9 + 0x2f8) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x2c0));
  return uVar3;
}



// FUNCTION 14318bef0 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkFxShareSet::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x280));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x280);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x2b0) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x2a8) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x2b0)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x2b8) = *(int *)(lVar9 + 0x2b8) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x280));
  return uVar3;
}



// FUNCTION 14318bfe0 FUN_14318bfe0 body=304 status=ok
// SIG undefined FUN_14318bfe0(void)

undefined1 FUN_14318bfe0(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = (ulonglong)uVar1;
  uVar6 = (ulonglong)param_2;
  if (uVar1 <= param_2) {
    if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
      cVar2 = FUN_14318b500(param_1,param_2 - uVar1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (uVar7 < uVar6) {
      if (3 < uVar6 - uVar7) {
        lVar5 = uVar7 << 4;
        lVar8 = ((uVar6 - uVar7) - 4 >> 2) + 1;
        uVar7 = uVar7 + lVar8 * 4;
        do {
          lVar3 = *param_1;
          puVar4 = (undefined8 *)(lVar5 + lVar3);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined2 *)(puVar4 + 1) = 0;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            lVar3 = *param_1;
          }
          puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar5);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined2 *)(puVar4 + 1) = 0;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            lVar3 = *param_1;
          }
          puVar4 = (undefined8 *)(lVar3 + 0x20 + lVar5);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined2 *)(puVar4 + 1) = 0;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            lVar3 = *param_1;
          }
          puVar4 = (undefined8 *)(lVar3 + 0x30 + lVar5);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined2 *)(puVar4 + 1) = 0;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          }
          lVar5 = lVar5 + 0x40;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (uVar7 < uVar6) {
        lVar5 = uVar7 << 4;
        lVar8 = uVar6 - uVar7;
        do {
          puVar4 = (undefined8 *)(lVar5 + *param_1);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined2 *)(puVar4 + 1) = 0;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
          }
          lVar5 = lVar5 + 0x10;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



// FUNCTION 14318c110 SetFX body=181 status=ok
// SIG undefined SetFX(void)

int CAkFxBase::SetFX(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)0x0;
  iVar3 = FUN_143128760(&PTR_PTR_1467be0f8,param_2,local_18);
  if ((iVar3 == 1) && (local_18[0] != (longlong *)0x0)) {
    iVar3 = (**(code **)(*local_18[0] + 0x18))(local_18[0],&PTR_PTR_1467be0f8,param_3,param_4);
    plVar2 = local_18[0];
    if (iVar3 != 1) {
      (**(code **)(*local_18[0] + 0x20))(local_18[0],&PTR_PTR_1467be0f8);
      return iVar3;
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_1467be0f8);
    }
    *(longlong **)(param_1 + 0x38) = plVar2;
  }
  *(int *)(param_1 + 0x30) = (int)param_2;
  return 1;
}



// FUNCTION 14318c1d0 FUN_14318c1d0 body=1223 status=ok
// SIG undefined FUN_14318c1d0(void)

ulonglong FUN_14318c1d0(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ushort *puVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  void *pvVar16;
  uint *puVar17;
  void *pvVar18;
  ulonglong uVar19;
  uint *puVar20;
  byte *pbVar21;
  ushort *puVar22;
  ushort uVar23;
  ulonglong uVar24;
  ushort *local_res10;
  int local_res18 [2];
  undefined8 local_res20;
  
  puVar22 = (ushort *)(param_2 + 0xc);
  uVar13 = 1;
  iVar6 = *(int *)(param_2 + 4);
  uVar14 = *(uint *)(param_2 + 8);
  local_res10 = puVar22;
  local_res18[0] = param_3;
  if (iVar6 != -1) {
    local_res20 = (longlong *)0x0;
    iVar12 = FUN_143128760(&PTR_PTR_1467be0f8,iVar6,&local_res20);
    if ((iVar12 == 1) && (local_res20 != (longlong *)0x0)) {
      uVar13 = (**(code **)(*local_res20 + 0x18))
                         (local_res20,&PTR_PTR_1467be0f8,puVar22,(ulonglong)uVar14);
      plVar10 = local_res20;
      if (uVar13 != 1) {
        (**(code **)(*local_res20 + 0x20))(local_res20,&PTR_PTR_1467be0f8);
        goto LAB_14318c289;
      }
      plVar8 = *(longlong **)(param_1 + 0x38);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8,&PTR_PTR_1467be0f8);
      }
      *(longlong **)(param_1 + 0x38) = plVar10;
    }
    uVar13 = 1;
    *(int *)(param_1 + 0x30) = iVar6;
  }
LAB_14318c289:
  local_res18[0] = local_res18[0] - uVar14;
  pbVar15 = (byte *)((longlong)local_res10 + (ulonglong)uVar14);
  if (uVar13 != 1) {
    return (ulonglong)uVar13;
  }
  bVar4 = *pbVar15;
  local_res10 = (ushort *)(pbVar15 + 1);
  uVar24 = (ulonglong)(uint)bVar4;
  if (bVar4 == 0) {
LAB_14318c2df:
    if (bVar4 != 0) {
      do {
        uVar14 = *(uint *)(param_1 + 0x48);
        uVar23 = *local_res10;
        uVar13 = *(uint *)((longlong)local_res10 + 1);
        local_res10 = (ushort *)((longlong)local_res10 + 5);
        puVar17 = *(uint **)(param_1 + 0x40);
        local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar13);
        puVar2 = puVar17 + (ulonglong)uVar14 * 2;
        for (; (puVar17 != puVar2 && (*puVar17 != (uint)(byte)uVar23)); puVar17 = puVar17 + 2) {
        }
        puVar20 = puVar17 + 1;
        if (puVar17 == puVar2) {
          puVar20 = (uint *)0x0;
        }
        if (puVar20 == (uint *)0x0) {
          if (uVar14 < *(uint *)(param_1 + 0x4c)) {
LAB_14318c3c7:
            uVar14 = *(uint *)(param_1 + 0x48);
            *(uint *)(param_1 + 0x48) = uVar14 + 1;
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar14 * 8);
            if (puVar2 != (uint *)0x0) {
              *puVar2 = (uint)(byte)uVar23;
              puVar2[1] = uVar13;
            }
          }
          else {
            uVar1 = *(uint *)(param_1 + 0x4c) + 1;
            pvVar16 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
            if (pvVar16 != (void *)0x0) {
              pvVar18 = *(void **)(param_1 + 0x40);
              if ((pvVar18 != (void *)0x0) && (pvVar18 != pvVar16)) {
                uVar13 = *(uint *)(param_1 + 0x48);
                uVar19 = 0;
                if ((ulonglong)uVar13 != 0) {
                  do {
                    *(undefined8 *)((longlong)pvVar16 + uVar19 * 8) =
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar19 * 8);
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar13);
                  pvVar18 = *(void **)(param_1 + 0x40);
                }
                AK::MemoryMgr::Free(g_DefaultPoolId,pvVar18);
              }
              *(void **)(param_1 + 0x40) = pvVar16;
              *(uint *)(param_1 + 0x4c) = uVar1;
              uVar13 = (uint)local_res20;
              if (uVar14 < uVar1) goto LAB_14318c3c7;
            }
          }
        }
        else {
          *puVar20 = uVar13;
        }
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    uVar13 = 0;
    uVar14 = GetNumberOfRTPC(&local_res10);
    if (uVar14 != 0) {
      pvVar16 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar14 << 5);
      *(void **)(param_1 + 0x50) = pvVar16;
      if (pvVar16 == (void *)0x0) goto LAB_14318c589;
      *(uint *)(param_1 + 0x5c) = uVar14;
    }
    uVar14 = 1;
    uVar23 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar23 != 0) {
      do {
        uVar7 = *(undefined4 *)local_res10;
        puVar22 = local_res10 + 2;
        pbVar15 = (byte *)((longlong)local_res10 + 5);
        bVar4 = (byte)local_res10[3];
        pbVar21 = (byte *)((longlong)local_res10 + 7);
        uVar14 = bVar4 & 0x7f;
        while ((char)bVar4 < '\0') {
          bVar4 = *pbVar21;
          pbVar21 = pbVar21 + 1;
          uVar14 = bVar4 & 0x7f | uVar14 << 7;
        }
        uVar5 = *(ushort *)(pbVar21 + 5);
        local_res10 = (ushort *)(pbVar21 + 7);
        uVar14 = FUN_14318c6a0(param_1,uVar7,(byte)*puVar22,*pbVar15,uVar14,*(undefined4 *)pbVar21,
                               pbVar21[4],local_res10,(uint)uVar5,0);
        if (uVar14 != 1) break;
        uVar13 = uVar13 + 1;
        local_res10 = local_res10 + (ulonglong)uVar5 * 6;
        local_res18[0] = local_res18[0] + (uint)uVar5 * -0xc;
      } while (uVar13 < uVar23);
    }
    if (uVar14 != 1) {
      return (ulonglong)uVar14;
    }
    uVar24 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x68))
                       (param_1 + 0x18,&local_res10,local_res18);
    uVar19 = uVar24 & 0xffffffff;
    if ((int)uVar24 != 1) {
      return uVar24;
    }
    uVar23 = *local_res10;
    local_res10 = local_res10 + 1;
    uVar24 = (ulonglong)(uint)uVar23;
    if (uVar23 != 0) {
      pvVar16 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar23 * 8);
      *(void **)(param_1 + 0x60) = pvVar16;
      if (pvVar16 == (void *)0x0) goto LAB_14318c589;
      uVar19 = 1;
      *(uint *)(param_1 + 0x6c) = (uint)uVar23;
    }
    if (uVar23 != 0) {
      do {
        bVar4 = (byte)*local_res10;
        uVar23 = bVar4 & 0x7f;
        puVar22 = local_res10;
        while (puVar9 = (ushort *)((longlong)puVar22 + 1), (char)bVar4 < '\0') {
          bVar4 = *(byte *)puVar9;
          uVar23 = bVar4 & 0x7f | uVar23 << 7;
          puVar22 = puVar9;
        }
        uVar14 = *(uint *)(param_1 + 0x68);
        local_res10 = puVar22 + 3;
        local_res20 = (longlong *)CONCAT44(*(undefined4 *)(puVar22 + 1),(uint)local_res20);
        local_res20._0_3_ = CONCAT12(*(byte *)puVar9,uVar23);
        if ((uVar14 < *(uint *)(param_1 + 0x6c)) ||
           ((cVar11 = FUN_14318b6c0(param_1 + 0x60,2), cVar11 != '\0' &&
            (uVar14 < *(uint *)(param_1 + 0x6c))))) {
          puVar3 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68) * 8);
          *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + 1;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = local_res20;
          }
        }
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  else {
    pvVar16 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)bVar4 * 8);
    *(void **)(param_1 + 0x40) = pvVar16;
    if (pvVar16 != (void *)0x0) {
      *(uint *)(param_1 + 0x4c) = (uint)bVar4;
      goto LAB_14318c2df;
    }
LAB_14318c589:
    uVar19 = 0x34;
  }
  return uVar19;
}



// FUNCTION 14318c6a0 FUN_14318c6a0 body=896 status=ok
// SIG undefined FUN_14318c6a0(void)

int FUN_14318c6a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,int param_6,undefined4 param_7,void *param_8,uint param_9,
                 char param_10)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *_Dst;
  ushort *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  int local_58;
  
  puVar8 = *(undefined8 **)(param_1 + 0x50);
  uVar6 = *(uint *)(param_1 + 0x58);
  uVar12 = 0;
  local_58 = 1;
  puVar3 = puVar8;
  if (puVar8 == puVar8 + (ulonglong)uVar6 * 4) {
    uVar9 = *(uint *)(param_1 + 0x58);
  }
  else {
    lVar11 = (longlong)puVar8 + 0x1c;
    do {
      if ((*(short *)(lVar11 + -0x16) == (short)param_5) && (*(int *)(lVar11 + -0x14) == param_6)) {
        if (*(void **)(lVar11 + -0xc) != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar11 + -0xc));
          *(undefined8 *)(lVar11 + -0xc) = 0;
        }
        *(undefined8 *)(lVar11 + -4) = 0;
        puVar3 = *(undefined8 **)(param_1 + 0x50);
        uVar6 = *(uint *)(param_1 + 0x58);
        if (puVar8 < puVar3 + (ulonglong)uVar6 * 4 + -4) {
          uVar7 = ((ulonglong)
                   ((longlong)(puVar3 + (ulonglong)uVar6 * 4 + -4) + (-1 - (longlong)puVar8)) >> 3 &
                  0xfffffffffffffffc) + 4 & 0x1ffffffffffffffc;
          puVar3 = (undefined8 *)(lVar11 + 4);
          puVar10 = puVar8;
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar3 = *(undefined8 **)(param_1 + 0x50);
          uVar6 = *(uint *)(param_1 + 0x58);
        }
        uVar6 = uVar6 - 1;
        *(uint *)(param_1 + 0x58) = uVar6;
        uVar9 = uVar6;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x58);
        puVar8 = puVar8 + 4;
        lVar11 = lVar11 + 0x20;
      }
    } while (puVar8 != puVar3 + (ulonglong)uVar6 * 4);
  }
  if (*(uint *)(param_1 + 0x5c) <= uVar9) {
    uVar6 = *(uint *)(param_1 + 0x5c) + 2;
    puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 << 5);
    if (puVar3 == (undefined8 *)0x0) {
      return 0x34;
    }
    puVar8 = *(undefined8 **)(param_1 + 0x50);
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar3)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x58);
      if (uVar7 != 0) {
        lVar11 = (longlong)puVar3 + 0x1c;
        do {
          if ((undefined8 *)(lVar11 + -0x1c) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar11 + -0xc) = 0;
            *(undefined8 *)(lVar11 + -4) = 0;
          }
          lVar4 = *(longlong *)(param_1 + 0x50) + (-0x1c - (longlong)puVar3);
          puVar8 = (undefined8 *)(lVar4 + lVar11);
          uVar2 = puVar8[1];
          *(undefined8 *)(lVar11 + -0x1c) = *puVar8;
          *(undefined8 *)(lVar11 + -0x14) = uVar2;
          puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar11);
          uVar2 = puVar8[1];
          *(undefined8 *)(lVar11 + -0xc) = *puVar8;
          *(undefined8 *)(lVar11 + -4) = uVar2;
          uVar7 = uVar7 - 1;
          lVar11 = lVar11 + 0x20;
        } while (uVar7 != 0);
        puVar8 = *(undefined8 **)(param_1 + 0x50);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar3;
    *(uint *)(param_1 + 0x5c) = uVar6;
    if (uVar6 <= uVar9) {
      return 0x34;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = uVar6 + 1;
  puVar3 = puVar3 + (ulonglong)uVar6 * 4;
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(int *)(puVar3 + 1) = param_6;
  *(undefined4 *)puVar3 = param_2;
  *(short *)((longlong)puVar3 + 6) = (short)param_5;
  *(char *)((longlong)puVar3 + 4) = (char)param_3;
  *(char *)((longlong)puVar3 + 5) = (char)param_4;
  if ((param_8 != (void *)0x0) && (param_9 != 0)) {
    puVar3[3] = 0;
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_9 * 0xc);
    puVar3[2] = _Dst;
    if (_Dst == (void *)0x0) {
      local_58 = 0x34;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,param_8,(ulonglong)(param_9 * 0xc));
      *(undefined4 *)((longlong)puVar3 + 0x1c) = param_7;
      local_58 = 1;
      uVar12 = param_9;
    }
    *(uint *)(puVar3 + 3) = uVar12;
    if (local_58 != 1) {
      return local_58;
    }
  }
  puVar5 = *(ushort **)(param_1 + 0x60);
  puVar1 = puVar5 + (ulonglong)*(uint *)(param_1 + 0x68) * 4;
  do {
    if (puVar5 == puVar1) {
LAB_14318c958:
      if (param_10 != '\0') {
        for (lVar11 = *(longlong *)(param_1 + 0x78); lVar11 != 0;
            lVar11 = *(longlong *)(lVar11 + 0x58)) {
          FUN_143137d00(g_pRTPCMgr,lVar11,*(undefined4 *)puVar3,param_3,param_4,param_5,param_6,
                        param_7,param_8,param_9,lVar11 + 0x18,1,1);
        }
        CAkFxBase::RecalculatePropertyValue(param_1,param_5 & 0xffff);
        return local_58;
      }
      return local_58;
    }
    if (*puVar5 == param_5) {
      *(char *)(puVar5 + 1) = (char)param_4;
      goto LAB_14318c958;
    }
    puVar5 = puVar5 + 4;
  } while( true );
}



// FUNCTION 14318ca20 SubscribeRTPC body=177 status=ok
// SIG undefined SubscribeRTPC(void)

void CAkFxBase::SubscribeRTPC(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != puVar1 + (ulonglong)*(uint *)(param_1 + 0x58) * 8) {
    do {
      FUN_143137d00(g_pRTPCMgr,param_2,*puVar1,*(undefined1 *)(puVar1 + 1),
                    *(undefined1 *)((longlong)puVar1 + 5),*(undefined2 *)((longlong)puVar1 + 6),
                    puVar1[2],puVar1[7],*(undefined8 *)(puVar1 + 4),puVar1[6],param_3,1,1);
      puVar1 = puVar1 + 8;
    } while (puVar1 != (undefined4 *)
                       ((ulonglong)*(uint *)(param_1 + 0x58) * 0x20 + *(longlong *)(param_1 + 0x50))
            );
  }
  return;
}



// FUNCTION 14318cae0 FUN_14318cae0 body=266 status=ok
// SIG undefined FUN_14318cae0(void)

void FUN_14318cae0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    CAkFxBase::SubscribeRTPC(*(longlong *)(param_1 + 0x10),param_1,param_2);
    uVar5 = param_2[1];
    lVar1 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *param_2;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar5 = param_2[3];
    *(undefined8 *)(param_1 + 0x28) = param_2[2];
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar3 = *(undefined4 *)(param_2 + 5);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    *(undefined4 *)(param_1 + 0x44) = uVar4;
    if (lVar1 != 0) {
      local_58[1] = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_40 = *param_2;
      local_48 = 1;
      local_44 = 2;
      local_38 = 0xff00;
      local_1c = 1;
      lVar6 = *(longlong *)(lVar1 + 0x50);
      local_58[0] = param_1;
      if (lVar6 != (ulonglong)*(uint *)(lVar1 + 0x58) * 0x20 + lVar6) {
        do {
          if (*(char *)(lVar6 + 4) == '\x02') {
            CAkModulatorMgr::Trigger(DAT_146b50ae0,local_58,&local_40,param_3);
          }
          lVar6 = lVar6 + 0x20;
        } while (lVar6 != (ulonglong)*(uint *)(lVar1 + 0x58) * 0x20 + *(longlong *)(lVar1 + 0x50));
      }
    }
  }
  return;
}



// FUNCTION 14318cbf0 TakeFrom body=130 status=ok
// SIG undefined TakeFrom(void)

void AkSinkPluginParams::TakeFrom(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_2[0xc];
  param_2[0xc] = 0;
  (**(code **)(*param_1 + 0x20))();
  param_1[1] = param_2[1];
  plVar2 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[0xf] == 0) {
      plVar2[0xf] = (longlong)param_1;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = plVar2[0xf];
      plVar2[0xf] = (longlong)param_1;
    }
    (**(code **)(*plVar2 + 8))();
  }
  param_2[1] = 0;
  (**(code **)(*param_2 + 0x20))(param_2);
  param_1[0xc] = lVar1;
  return;
}



// FUNCTION 14318cc80 FUN_14318cc80 body=52 status=ok
// SIG undefined FUN_14318cc80(void)

void FUN_14318cc80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_14318ccc0(param_1);
  return;
}



// FUNCTION 14318ccc0 FUN_14318ccc0 body=294 status=ok
// SIG undefined FUN_14318ccc0(void)

void FUN_14318ccc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) &&
     (lVar5 = *(longlong *)(lVar4 + 0x50),
     lVar5 != (ulonglong)*(uint *)(lVar4 + 0x58) * 0x20 + lVar5)) {
    do {
      CAkRTPCMgr::UnSubscribeRTPC(g_pRTPCMgr,param_1,*(undefined2 *)(lVar5 + 6));
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != (ulonglong)*(uint *)(lVar4 + 0x58) * 0x20 + *(longlong *)(lVar4 + 0x50));
  }
  plVar1 = *(longlong **)(param_1 + 8);
  lVar4 = 0;
  uStack_20 = CONCAT31(uStack_20._1_3_,0xff);
  local_18 = CONCAT31(local_18._1_3_,0xff);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(ulonglong *)(param_1 + 0x20) = (ulonglong)uStack_2c << 0x20;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = uStack_24;
  *(undefined4 *)(param_1 + 0x30) = uStack_20;
  *(undefined4 *)(param_1 + 0x34) = uStack_1c;
  *(undefined4 *)(param_1 + 0x38) = local_18;
  *(undefined4 *)(param_1 + 0x3c) = uStack_14;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_1467be108);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = plVar1[0xf];
    lVar2 = lVar5;
    lVar3 = lVar5;
    if (lVar5 == 0) {
LAB_14318cd96:
      if (lVar3 != 0) {
        if (lVar3 == lVar5) {
          plVar1[0xf] = *(longlong *)(lVar3 + 0x58);
        }
        else {
          *(longlong *)(lVar4 + 0x58) = *(longlong *)(lVar3 + 0x58);
        }
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    else {
      do {
        lVar3 = lVar2;
        if (lVar3 == param_1) goto LAB_14318cd96;
        lVar2 = *(longlong *)(lVar3 + 0x58);
        lVar4 = lVar3;
      } while (*(longlong *)(lVar3 + 0x58) != 0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 14318cdf0 FUN_14318cdf0 body=423 status=ok
// SIG undefined FUN_14318cdf0(void)

void FUN_14318cdf0(longlong param_1,int param_2,int param_3,uint param_4,int param_5,float param_6)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  float fVar9;
  float local_res8 [2];
  undefined2 uStack_1e;
  
  fVar2 = param_6;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    if (param_5 == 1) {
      (**(code **)(*plVar1 + 8))(plVar1,param_4 & 0xffff,&param_6,4);
      return;
    }
    if (param_5 == 3) {
      fVar9 = 1.0;
    }
    else {
      fVar9 = 0.0;
    }
    piVar7 = *(int **)(param_1 + 0x48);
    uVar8 = *(uint *)(param_1 + 0x50);
    piVar4 = piVar7 + (ulonglong)uVar8 * 4;
    piVar6 = piVar7;
    local_res8[0] = fVar9;
    if (piVar7 != piVar4) {
      do {
        if (*(ushort *)(piVar6 + 2) == param_4) {
          if ((*piVar6 == param_2) && (piVar6[1] == param_3)) {
            piVar6[3] = (int)param_6;
            piVar4 = piVar6;
            fVar9 = local_res8[0];
          }
          if ((param_5 != 4) || (*piVar6 != 0)) {
            if (param_5 == 3) {
              fVar9 = fVar9 * (float)piVar6[3];
              local_res8[0] = fVar9;
            }
            else {
              fVar9 = fVar9 + (float)piVar6[3];
              local_res8[0] = fVar9;
            }
          }
        }
        uVar8 = *(uint *)(param_1 + 0x50);
        piVar6 = piVar6 + 4;
        piVar7 = *(int **)(param_1 + 0x48);
      } while (piVar6 != piVar7 + (ulonglong)uVar8 * 4);
    }
    if ((piVar4 == piVar7 + (ulonglong)uVar8 * 4) &&
       ((uVar8 < *(uint *)(param_1 + 0x54) ||
        ((cVar3 = FUN_14318b500(param_1 + 0x48,2), cVar3 != '\0' &&
         (uVar8 < *(uint *)(param_1 + 0x54))))))) {
      uVar8 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = uVar8 + 1;
      puVar5 = (undefined8 *)((ulonglong)uVar8 * 0x10 + *(longlong *)(param_1 + 0x48));
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = CONCAT44(param_3,param_2);
        puVar5[1] = CONCAT44(fVar2,CONCAT22(uStack_1e,(short)param_4));
        if (param_5 == 3) {
          local_res8[0] = local_res8[0] * param_6;
        }
        else {
          local_res8[0] = local_res8[0] + param_6;
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 8))
              (*(longlong **)(param_1 + 8),param_4 & 0xffff,local_res8,4);
  }
  return;
}



// FUNCTION 14318cfa0 FUN_14318cfa0 body=841 status=ok
// SIG undefined FUN_14318cfa0(void)

longlong FUN_14318cfa0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                      undefined8 param_5,char param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar11;
  ulonglong uVar12;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong uVar10;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,&PTR_PTR_1467be108);
    param_1[2] = (longlong)param_2;
    uVar12 = 0;
    param_1[1] = lVar5;
    if (param_2[0xf] == 0) {
      param_2[0xf] = (longlong)param_1;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = param_2[0xf];
      param_2[0xf] = (longlong)param_1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    uVar8 = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    lVar5 = param_1[2];
    lVar6 = *(longlong *)(lVar5 + 0x50);
    lVar9 = (ulonglong)*(uint *)(lVar5 + 0x58) * 0x20 + lVar6;
    iVar11 = *(int *)(lVar5 + 0x68);
    for (; lVar6 != lVar9; lVar6 = lVar6 + 0x20) {
      iVar7 = iVar11 + 1;
      if (*(char *)(lVar6 + 5) == '\x01') {
        iVar7 = iVar11;
      }
      iVar11 = iVar7;
    }
    lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x18) + 0x30))(lVar5 + 0x18);
    lVar6 = (**(code **)(*(longlong *)(param_1[2] + 0x18) + 0x78))();
    if ((lVar5 != 0) && (lVar6 != 0)) {
      uVar10 = uVar12;
      for (lVar6 = *(longlong *)(lVar6 + 8); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x10)) {
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      }
      iVar11 = iVar11 + *(int *)(lVar5 + 8) * uVar8;
    }
    if ((iVar11 == 0) || (cVar4 = FUN_14318bfe0(param_1 + 9,iVar11), cVar4 != '\0')) {
      lVar5 = param_1[2];
      if (*(int *)(lVar5 + 0x68) != 0) {
        do {
          uVar8 = (int)uVar12 + 1;
          lVar5 = *(longlong *)(param_1[2] + 0x60);
          lVar6 = uVar12 * 0x10 + param_1[9];
          *(undefined2 *)(lVar6 + 8) = *(undefined2 *)(lVar5 + uVar12 * 8);
          *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(lVar5 + uVar12 * 8 + 4);
          lVar5 = param_1[2];
          uVar12 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(lVar5 + 0x68));
      }
      if (param_3 == (longlong *)0x0) {
        if ((param_6 != '\0') && (lVar5 != 0)) {
          CAkFxBase::SubscribeRTPC(lVar5,param_1,param_4);
          lVar6 = param_4[1];
          lVar5 = param_1[2];
          param_1[3] = *param_4;
          param_1[4] = lVar6;
          lVar6 = param_4[3];
          param_1[5] = param_4[2];
          param_1[6] = lVar6;
          uVar2 = *(undefined4 *)((longlong)param_4 + 0x24);
          lVar6 = param_4[5];
          uVar3 = *(undefined4 *)((longlong)param_4 + 0x2c);
          *(int *)(param_1 + 7) = (int)param_4[4];
          *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
          *(int *)(param_1 + 8) = (int)lVar6;
          *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
          if (lVar5 != 0) {
            local_60 = *param_4;
            local_70 = 0;
            local_68 = 0x200000001;
            local_58 = 0xff00;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            local_3c = 1;
            local_38 = 0;
            lVar6 = *(longlong *)(lVar5 + 0x50);
            local_78 = param_1;
            if (lVar6 != (ulonglong)*(uint *)(lVar5 + 0x58) * 0x20 + lVar6) {
              do {
                if (*(char *)(lVar6 + 4) == '\x02') {
                  CAkModulatorMgr::Trigger(DAT_146b50ae0,&local_78,&local_60,param_5);
                }
                lVar6 = lVar6 + 0x20;
              } while (lVar6 != (ulonglong)*(uint *)(lVar5 + 0x58) * 0x20 +
                                *(longlong *)(lVar5 + 0x50));
            }
          }
        }
      }
      else if (lVar5 != 0) {
        CAkFxBase::SubscribeRTPC(lVar5,param_1,param_3 + 3);
        lVar5 = param_3[4];
        param_1[3] = param_3[3];
        param_1[4] = lVar5;
        uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
        lVar5 = param_3[6];
        uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
        *(int *)(param_1 + 5) = (int)param_3[5];
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
        *(int *)(param_1 + 6) = (int)lVar5;
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
        uVar2 = *(undefined4 *)((longlong)param_3 + 0x3c);
        lVar5 = param_3[8];
        uVar3 = *(undefined4 *)((longlong)param_3 + 0x44);
        *(int *)(param_1 + 7) = (int)param_3[7];
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
        *(int *)(param_1 + 8) = (int)lVar5;
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
        if (param_1[2] != 0) {
          local_70 = param_3[0x2e];
          local_68 = 1;
          local_60 = 0;
          local_58 = 0xff00;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_3c = 1;
          local_38 = 0;
          local_78 = param_1;
          (**(code **)(*param_3 + 0x40))(param_3,&local_60,1);
          lVar5 = param_1[2];
          local_40 = 0;
          lVar6 = *(longlong *)(lVar5 + 0x50);
          if (lVar6 != (ulonglong)*(uint *)(lVar5 + 0x58) * 0x20 + lVar6) {
            do {
              if (*(char *)(lVar6 + 4) == '\x02') {
                CAkModulatorMgr::Trigger(DAT_146b50ae0,&local_78,&local_60,param_3 + 0xb);
              }
              lVar6 = lVar6 + 0x20;
            } while (lVar6 != (ulonglong)*(uint *)(lVar5 + 0x58) * 0x20 +
                              *(longlong *)(lVar5 + 0x50));
          }
        }
      }
      PluginRTPCSub::CalculatePropertyUpdateStates(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return param_1[1];
}



// FUNCTION 14318d2f0 FUN_14318d2f0 body=482 status=ok
// SIG undefined FUN_14318d2f0(void)

void FUN_14318d2f0(longlong param_1,ulonglong param_2,float param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  short sVar6;
  uint uVar7;
  float fVar8;
  uint local_res8 [2];
  float local_res18 [4];
  undefined8 local_58;
  undefined2 uStack_4e;
  
  sVar6 = (short)param_2;
  local_res8[0] = 0;
  local_res18[0] = param_3;
  FUN_14318b880(param_1,param_2,local_res18,local_res8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar7 = local_res8[0];
  if ((lVar2 != 0) &&
     (puVar5 = *(undefined4 **)(lVar2 + 0x50),
     puVar5 != puVar5 + (ulonglong)*(uint *)(lVar2 + 0x58) * 8)) {
    do {
      if (*(short *)((longlong)puVar5 + 6) == sVar6) {
        uVar7 = (uint)*(byte *)((longlong)puVar5 + 5);
        fVar8 = (float)FUN_143134160(g_pRTPCMgr,param_1,param_2 & 0xffff,param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x50);
        local_58 = CONCAT44(*puVar5,1);
        if ((uVar1 < *(uint *)(param_1 + 0x54)) ||
           ((cVar3 = FUN_14318b500(param_1 + 0x48,2), cVar3 != '\0' &&
            (uVar1 < *(uint *)(param_1 + 0x54))))) {
          uVar1 = *(uint *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x50) = uVar1 + 1;
          puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 0x48));
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = local_58;
            puVar4[1] = CONCAT44(fVar8,CONCAT22(uStack_4e,sVar6));
            if (uVar7 == 3) {
              local_res18[0] = local_res18[0] * fVar8;
            }
            else {
              local_res18[0] = local_res18[0] + fVar8;
            }
          }
        }
      }
      puVar5 = puVar5 + 8;
    } while (puVar5 != (undefined4 *)
                       ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x58) * 0x20 +
                       *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50)));
  }
  if (uVar7 == 4) {
    local_res18[0] = local_res18[0] - param_3;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x50);
    if ((uVar7 < *(uint *)(param_1 + 0x54)) ||
       ((cVar3 = FUN_14318b500(param_1 + 0x48,2), cVar3 != '\0' &&
        (uVar7 < *(uint *)(param_1 + 0x54))))) {
      uVar7 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = uVar7 + 1;
      puVar5 = (undefined4 *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_1 + 0x48));
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = CONCAT22(uStack_4e,sVar6);
        puVar5[3] = param_3;
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),param_2 & 0xffff,local_res18,4);
  return;
}



// FUNCTION 14318d4e0 CAkSinkBase body=18 status=ok
// SIG undefined CAkSinkBase(void)

undefined8 * CAkSinkBase::CAkSinkBase(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_145acb840;
  return param_1;
}



// FUNCTION 14318d500 FUN_14318d500 body=86 status=ok
// SIG undefined FUN_14318d500(void)

undefined8 * FUN_14318d500(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &PTR_FUN_145ac6b40;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(uint *)(puVar1 + 3) = *(uint *)(puVar1 + 3) & 0xff;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0x2b;
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14318d560 FUN_14318d560 body=151 status=ok
// SIG undefined FUN_14318d560(void)

void FUN_14318d560(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ushort local_res10 [2];
  float local_res14;
  
  if (*(short *)(param_2 + 0x12) != 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x60))();
    if (*plVar1 != 0) {
      CAkMixer::CAkMixer(local_res10);
      local_res10[0] = *(ushort *)(param_2 + 0x10);
      local_res14 = 1.0 / (float)local_res10[0];
      FUN_1431421a0(local_res10,param_2,plVar1,param_3);
      *(undefined2 *)((longlong)plVar1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 14318d600 FUN_14318d600 body=716 status=ok
// SIG undefined FUN_14318d600(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14318d600(AkAudioBuffer *param_1,undefined8 *param_2,undefined8 param_3)

{
  float *_Dst;
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  void *pvVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar17;
  uint uVar18;
  byte *pbVar19;
  float *pfVar20;
  uint uVar21;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  float afStack_70 [2];
  ushort local_68 [8];
  void *local_58;
  undefined4 local_50;
  undefined8 local_4c;
  ulonglong uVar16;
  
  uVar16 = 0;
  local_50 = 0;
  local_58 = (void *)0x0;
  local_4c = 0x2b;
  puVar17 = auStack_98;
  if ((*(uint *)(param_2 + 1) & 0xf00) == 0x200) {
    uStack_a0 = 0x14318d676;
    pvVar11 = AK::MemoryMgr::Malign
                        (g_LEngineDefaultPoolId,
                         (ulonglong)((uint)*(ushort *)(param_1 + 0x10) * (uint)(byte)param_1[8]) <<
                         2,0x10);
    puVar17 = auStack_98;
    if (pvVar11 != (void *)0x0) {
      uStack_a0 = 0x14318d69d;
      _guard_xfg_dispatch_icall_nop
                (pvVar11,0,
                 (ulonglong)((uint)(byte)param_1[8] * (uint)*(ushort *)(param_1 + 0x10)) << 2);
      uVar18 = *(uint *)(param_2 + 1) & 0xff;
      uVar21 = uVar18 + 3 >> 2;
      iVar13 = uVar21 * uVar18;
      uVar12 = (ulonglong)(uint)(iVar13 * 0x10) + 0xf;
      if (uVar12 <= (uint)(iVar13 * 0x10)) {
        uVar12 = 0xffffffffffffff0;
      }
      uStack_a0 = 0x14318d6d6;
      lVar10 = -(uVar12 & 0xfffffffffffffff0);
      puVar17 = auStack_98 + lVar10;
      _Dst = (float *)((longlong)&local_58 + lVar10);
      if (iVar13 != 0) {
        *(undefined8 *)(auStack_98 + lVar10 + -8) = 0x14318d6fa;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)(iVar13 * 4) << 2);
      }
      if (3 < uVar18) {
        iVar13 = 2;
        pbVar19 = &DAT_145acb8c1;
        pfVar20 = (float *)&DAT_145acb8d4;
        do {
          iVar14 = (int)uVar16;
          uVar15 = iVar14 + 4;
          uVar16 = (ulonglong)uVar15;
          bVar3 = *pbVar19;
          fVar1 = *pfVar20;
          _Dst[(ulonglong)(uVar21 * iVar14 * 4) + (ulonglong)pbVar19[-1]] = 0.70710677 / pfVar20[-1]
          ;
          fVar2 = pfVar20[1];
          bVar4 = pbVar19[1];
          _Dst[(ulonglong)((iVar13 + -1) * uVar21 * 4) + (ulonglong)bVar3] = 0.70710677 / fVar1;
          fVar1 = pfVar20[2];
          bVar3 = pbVar19[2];
          _Dst[(ulonglong)(iVar13 * uVar21 * 4) + (ulonglong)bVar4] = 0.70710677 / fVar2;
          iVar14 = iVar13 + 1;
          iVar13 = iVar13 + 4;
          _Dst[(ulonglong)(iVar14 * uVar21 * 4) + (ulonglong)bVar3] = 0.70710677 / fVar1;
          pbVar19 = pbVar19 + 4;
          pfVar20 = pfVar20 + 4;
        } while (uVar15 < uVar18 - 3);
      }
      if ((uint)uVar16 < uVar18) {
        pbVar19 = &DAT_145acb8c0 + uVar16;
        pfVar20 = (float *)(&DAT_145acb8d0 + uVar16);
        do {
          bVar3 = *pbVar19;
          pbVar19 = pbVar19 + 1;
          iVar13 = (int)uVar16;
          uVar15 = iVar13 + 1;
          uVar16 = (ulonglong)uVar15;
          _Dst[(ulonglong)(uVar21 * iVar13 * 4) + (ulonglong)bVar3] = 0.70710677 / *pfVar20;
          pfVar20 = pfVar20 + 1;
        } while (uVar15 < uVar18);
      }
      uVar5 = *(ushort *)(param_1 + 0x10);
      uVar7 = *(undefined4 *)(param_1 + 8);
      *(ushort *)((longlong)local_68 + lVar10) = uVar5;
      local_4c._0_6_ = CONCAT24(uVar5,(undefined4)local_4c);
      local_58 = pvVar11;
      local_50 = uVar7;
      local_res8 = 0x3f800000;
      local_resc = 0x3f800000;
      *(float *)((longlong)afStack_70 + lVar10) = 1.0 / (float)uVar5;
      *(float **)((longlong)&uStack_78 + lVar10) = _Dst;
      *(undefined8 *)(auStack_98 + lVar10 + -8) = 0x14318d86c;
      CAkMixer::MixNinNChannels
                (param_1,(AkAudioBuffer *)&local_58,(AkRamp *)&local_res8,_Dst,
                 *(float **)((longlong)&uStack_78 + lVar10),
                 *(float *)((longlong)afStack_70 + lVar10),*(ushort *)((longlong)local_68 + lVar10))
      ;
      param_1 = (AkAudioBuffer *)&local_58;
    }
  }
  uVar6 = *(undefined2 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *param_2;
  uVar9 = *(undefined8 *)param_1;
  *(undefined8 *)(puVar17 + 0x20) = param_3;
  *(undefined8 *)(puVar17 + -8) = 0x14318d88a;
  CAkMixer::InterleaveAndConvertToInt16(uVar9,uVar8,uVar6,uVar7);
  pvVar11 = local_58;
  if (local_58 != (void *)0x0) {
    local_50 = 0;
    local_4c = local_4c & 0xffffffff;
    local_58 = (void *)0x0;
    *(undefined8 *)(puVar17 + -8) = 0x14318d8ae;
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,pvVar11);
  }
  return;
}



// FUNCTION 14318d8f0 FUN_14318d8f0 body=54 status=ok
// SIG undefined FUN_14318d8f0(void)

undefined8 FUN_14318d8f0(void)

{
  uint uVar1;
  char cVar2;
  longlong in_stack_00000028;
  
  if (*(char *)(in_stack_00000028 + 4) == '\0') {
    uVar1 = 3;
    cVar2 = '\0';
    do {
      cVar2 = cVar2 + '\x01';
      uVar1 = uVar1 & uVar1 - 1;
    } while (uVar1 != 0);
    *(char *)(in_stack_00000028 + 4) = cVar2;
    *(uint *)(in_stack_00000028 + 4) = *(uint *)(in_stack_00000028 + 4) & 0xff;
    *(uint *)(in_stack_00000028 + 4) = *(uint *)(in_stack_00000028 + 4) | 0x3100;
  }
  return 1;
}



// FUNCTION 14318d930 OnFrameEnd body=53 status=ok
// SIG undefined OnFrameEnd(void)

void CAkSinkBase::OnFrameEnd(longlong *param_1)

{
  if ((char)param_1[1] != '\0') {
    (**(code **)(*param_1 + 0x68))();
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  (**(code **)(*param_1 + 0x60))();
  (**(code **)(*param_1 + 0x70))(param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14318d970 Term body=56 status=ok
// SIG undefined Term(void)

undefined8 CAkSinkBase::Term(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 14318d9c0 Instance body=298 status=ok
// SIG AkRuntimeEnvironmentMgr * Instance(void)

/* WARNING: Removing unreachable block (ram,0x00014318da6c) */
/* WARNING: Removing unreachable block (ram,0x00014318da5c) */
/* WARNING: Removing unreachable block (ram,0x00014318da4d) */
/* WARNING: Removing unreachable block (ram,0x00014318da38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class AK::AkRuntimeEnvironmentMgr * __ptr64 __cdecl
   AK::AkRuntimeEnvironmentMgr::Instance(void) */

AkRuntimeEnvironmentMgr * __cdecl AK::AkRuntimeEnvironmentMgr::Instance(void)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
                    /* 0x318d9c0  231  ?Instance@AkRuntimeEnvironmentMgr@AK@@SAPEAV12@XZ */
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b51f98) && (_Init_thread_header(&DAT_146b51f98), DAT_146b51f98 == -1))
  {
    uVar4 = 0;
    piVar1 = (int *)cpuid_basic_info(0);
    uVar5 = 0;
    if (0 < *piVar1) {
      lVar2 = cpuid_Version_info(1);
      uVar5 = *(uint *)(lVar2 + 8);
      uVar4 = *(uint *)(lVar2 + 0xc);
    }
    puVar3 = (uint *)cpuid(0x80000000);
    if (*puVar3 < 0x80000006) {
      _DAT_1467be348 = 0x40;
      _DAT_1467be344 = 0x400;
    }
    else {
      lVar2 = cpuid(0x80000006);
      _DAT_1467be348 = *(uint *)(lVar2 + 0xc) & 0xff;
      _DAT_1467be344 = (int)*(uint *)(lVar2 + 0xc) >> 0x10 & 0xffff;
    }
    if ((uVar5 >> 0x19 & 1) != 0) {
      DAT_1467be340 = 1;
    }
    if ((uVar5 >> 0x1a & 1) != 0) {
      DAT_1467be340 = DAT_1467be340 | 2;
    }
    if ((uVar4 & 1) != 0) {
      DAT_1467be340 = DAT_1467be340 | 4;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      DAT_1467be340 = DAT_1467be340 | 8;
    }
    atexit((_func_5014 *)&LAB_143ec4450);
    _Init_thread_footer(&DAT_146b51f98);
    return (AkRuntimeEnvironmentMgr *)&PTR_PTR_1467be338;
  }
  return (AkRuntimeEnvironmentMgr *)&PTR_PTR_1467be338;
}



// FUNCTION 14318daf0 CAkSinkDirectSound body=61 status=ok
// SIG undefined CAkSinkDirectSound(void)

undefined8 * CAkSinkDirectSound::CAkSinkDirectSound(undefined8 *param_1)

{
  CAkSink::CAkSink();
  *param_1 = &PTR_FUN_145acb930;
  DAT_146b51fa0 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  return param_1;
}



// FUNCTION 14318db30 FUN_14318db30 body=43 status=ok
// SIG undefined FUN_14318db30(void)

undefined8 * FUN_14318db30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14318db60 CreateSecondaryBuffer body=492 status=ok
// SIG undefined CreateSecondaryBuffer(void)

undefined8 CAkSinkDirectSound::CreateSecondaryBuffer(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  longlong *local_res18;
  void *local_res20;
  undefined8 local_88;
  undefined2 local_80;
  ushort local_7e;
  int local_7c;
  int local_78;
  ushort local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 uStack_6e;
  uint uStack_6c;
  ushort uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_58 = 0x28;
  local_4c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_54 = 0x10000;
  if (DAT_146b50d6c != '\0') {
    local_54 = 0x18000;
  }
  local_48 = &local_80;
  uVar3 = (uint)DAT_146b50d60;
  local_7e = (ushort)*(uint *)(param_1 + 0x10) & 0xff;
  uVar4 = *(uint *)(param_1 + 0x10) >> 0xc;
  local_74 = local_7e * 2;
  *(ushort *)(param_1 + 0x58) = local_74;
  local_50 = uVar3 * local_7e * 0x800;
  local_78 = (uint)local_74 * DAT_1467bdcac;
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_5a = 0;
  local_7c = DAT_1467bdcac;
  local_72 = 0x10;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  if (uVar4 != 3) {
    local_70 = 0x16;
    uStack_6e = 0x10;
    local_80 = 0xfffe;
    uStack_64 = 0x100000;
    uStack_60 = 0x80;
    uStack_5e = 0xaa00;
    uStack_5c = 0x3800;
    uStack_5a = 0x719b;
    uStack_6c = uVar4;
  }
  else {
    local_70 = 0;
    local_80 = 1;
  }
  uStack_66 = 0;
  uStack_68 = (ushort)(uVar4 != 3);
  *(int *)(param_1 + 0x40) = local_50;
  *(int *)(param_1 + 0x48) = local_50;
  local_res18 = (longlong *)0x0;
  local_res20 = (void *)0x0;
  local_88 = 0;
  uVar2 = (**(code **)(*DAT_146b51fa0 + 0x18))(DAT_146b51fa0,&local_58,&local_res18,0);
  if (-1 < (int)uVar2) {
    iVar1 = (**(code **)*local_res18)(local_res18,&DAT_145ac63a0,param_1 + 0x38);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))
                          (*(longlong **)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x40),
                           &local_res20,local_res8,&local_88,local_res10,1), -1 < iVar1)) {
      ::_guard_xfg_dispatch_icall_nop(local_res20,0,(ulonglong)local_res8[0]);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x98))
                        (*(longlong **)(param_1 + 0x38),local_res20,local_res8[0],local_88,
                         local_res10[0]);
      if (-1 < iVar1) {
        (**(code **)(*local_res18 + 0x10))();
        return 0;
      }
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
    uVar2 = 0x80004005;
  }
  return uVar2;
}



// FUNCTION 14318dd50 DoRefill body=695 status=ok
// SIG undefined DoRefill(void)

void CAkSinkDirectSound::DoRefill(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  undefined2 *puVar5;
  float *pfVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar11 = (uint)DAT_1467bdcb8;
  pfVar6 = (float *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  puVar9 = *(undefined2 **)(param_3 + 8);
  uVar7 = uVar10 & 0xff;
  uVar13 = uVar11 * uVar7;
  uVar8 = (ulonglong)(byte)uVar1;
  if ((((uVar1 & 0xff) == uVar7) && (((uVar10 ^ uVar1) & 0xf00) == 0)) &&
     (uVar3 = uVar13, ((uVar10 ^ uVar1) & 0xfffff000) == 0)) {
    do {
      fVar14 = *pfVar6;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      pfVar6 = pfVar6 + 1;
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      *puVar9 = (short)(int)(fVar14 * 32767.0);
      uVar3 = uVar3 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar3 != 0);
  }
  else if ((uVar1 & 0xff) < uVar7) {
    ::_guard_xfg_dispatch_icall_nop(puVar9,0,(ulonglong)uVar13 * 2);
    uVar12 = uVar8;
    if ((uVar1 & 0xff) != 0) {
      do {
        uVar10 = (uint)DAT_1467bdcb8;
        pfVar4 = pfVar6;
        puVar5 = puVar9;
        do {
          fVar14 = *pfVar4;
          pfVar4 = pfVar4 + uVar8;
          if (fVar14 <= -1.0) {
            fVar14 = -1.0;
          }
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
          *puVar5 = (short)(int)(fVar14 * 32767.0);
          puVar5 = puVar5 + uVar7;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        pfVar6 = pfVar6 + 1;
        puVar9 = puVar9 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  else {
    pfVar4 = pfVar6 + 1;
    pfVar2 = pfVar6;
    do {
      *pfVar2 = pfVar2[2] * 0.707 + *pfVar2;
      pfVar2 = pfVar2 + uVar8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    uVar10 = (uint)DAT_1467bdcb8;
    pfVar2 = pfVar4;
    do {
      *pfVar2 = pfVar2[1] * 0.707 + *pfVar2;
      pfVar2 = pfVar2 + uVar8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar10 = (uint)DAT_1467bdcb8;
    pfVar2 = pfVar6;
    do {
      *pfVar2 = pfVar2[4] * 0.707 + *pfVar2;
      pfVar2 = pfVar2 + uVar8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar10 = (uint)DAT_1467bdcb8;
    pfVar2 = pfVar4;
    do {
      *pfVar2 = pfVar2[4] * 0.707 + *pfVar2;
      pfVar2 = pfVar2 + uVar8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar10 = (uint)DAT_1467bdcb8;
    puVar5 = puVar9;
    do {
      fVar14 = *pfVar6;
      pfVar6 = pfVar6 + uVar8;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      *puVar5 = (short)(int)(fVar14 * 32767.0);
      puVar5 = puVar5 + uVar7;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar10 = (uint)DAT_1467bdcb8;
    puVar9 = puVar9 + 1;
    do {
      fVar14 = *pfVar4;
      pfVar4 = pfVar4 + uVar8;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
      *puVar9 = (short)(int)(fVar14 * 32767.0);
      puVar9 = puVar9 + uVar7;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar13 * 2;
  uVar10 = *(uint *)(param_1 + 0x44);
  if (*(uint *)(param_1 + 0x40) <= uVar10) {
    uVar10 = 0;
  }
  *(uint *)(param_1 + 0x44) = uVar10;
  return;
}



// FUNCTION 14318e010 GetDirectSoundInstance body=8 status=ok
// SIG IDirectSound8 * GetDirectSoundInstance(void)

/* struct IDirectSound8 * __ptr64 __cdecl AK::GetDirectSoundInstance(void) */

IDirectSound8 * __cdecl AK::GetDirectSoundInstance(void)

{
                    /* 0x318e010  155  ?GetDirectSoundInstance@AK@@YAPEAUIDirectSound8@@XZ */
  return DAT_146b51fa0;
}



// FUNCTION 14318e020 FUN_14318e020 body=455 status=ok
// SIG undefined FUN_14318e020(void)

undefined8 FUN_14318e020(longlong param_1,undefined8 *param_2,uint param_3)

{
  HRESULT HVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  HVar1 = CoCreateInstance((IID *)&DAT_145ac6370,(LPUNKNOWN)0x0,1,(IID *)&DAT_145ac6390,
                           &DAT_146b51fa0);
  if (((-1 < HVar1) && (iVar2 = (**(code **)(*DAT_146b51fa0 + 0x50))(DAT_146b51fa0,0), -1 < iVar2))
     && (iVar2 = (**(code **)(*DAT_146b51fa0 + 0x30))(DAT_146b51fa0,*param_2,2), -1 < iVar2)) {
    local_38 = 0x28;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    iVar2 = (**(code **)(*DAT_146b51fa0 + 0x18))(DAT_146b51fa0,&local_38,param_1 + 0x30,0);
    if (-1 < iVar2) {
      bVar7 = 0;
      for (uVar5 = param_3; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
        bVar7 = bVar7 + 1;
      }
      *(byte *)(param_1 + 0x10) = bVar7;
      uVar5 = (uint)bVar7 | param_3 << 0xc | 0x100;
      uVar8 = 3;
      *(uint *)(param_1 + 0x10) = uVar5;
      if (bVar7 == 0) {
        uVar5 = 3;
        iVar2 = (**(code **)(*DAT_146b51fa0 + 0x40))();
        if (-1 < iVar2) {
          uVar5 = 0x63f;
        }
        bVar7 = 0;
        uVar6 = uVar5;
        do {
          bVar7 = bVar7 + 1;
          uVar6 = uVar6 & uVar6 - 1;
        } while (uVar6 != 0);
        *(byte *)(param_1 + 0x10) = bVar7;
        uVar5 = (uint)bVar7 | uVar5 << 0xc | 0x100;
        *(uint *)(param_1 + 0x10) = uVar5;
      }
      uVar5 = uVar5 >> 0xc;
      if (((uVar5 != 0x63f) && (uVar5 != 0x60f)) && (uVar5 != 3)) {
        cVar4 = '\0';
        do {
          cVar4 = cVar4 + '\x01';
          uVar8 = uVar8 & uVar8 - 1;
        } while (uVar8 != 0);
        *(char *)(param_1 + 0x10) = cVar4;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xff;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x3100;
      }
      uVar3 = CAkSinkDirectSound::SetPrimaryBufferFormat(param_1);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      DAT_1467bdcb0 = 5;
      uVar3 = CAkSink::AllocBuffer(param_1,*(undefined4 *)(param_1 + 0x10));
      return uVar3;
    }
  }
  return 2;
}



// FUNCTION 14318e220 IsDataNeeded body=209 status=ok
// SIG undefined IsDataNeeded(void)

undefined8 CAkSinkDirectSound::IsDataNeeded(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                    (*(longlong **)(param_1 + 0x38),param_1 + 0x50,param_1 + 0x54);
  if (iVar7 == 0) {
    uVar8 = *(uint *)(param_1 + 0x40);
    uVar2 = *(uint *)(param_1 + 0x54);
    uVar3 = *(uint *)(param_1 + 0x50);
    uVar4 = *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x48) = uVar8 - uVar4;
    if (uVar3 + uVar2 != 0) {
      if ((((uVar1 < uVar4) && (uVar4 < uVar2)) || ((uVar2 < uVar1 && (uVar1 < uVar4)))) ||
         ((uVar4 < uVar2 && (uVar2 < uVar1)))) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
      *(undefined1 *)(param_1 + 0x5a) = uVar6;
      uVar8 = (uVar3 - uVar4) + uVar8;
      if (uVar4 <= uVar3) {
        uVar8 = uVar3 - uVar4;
      }
    }
    uVar5 = (ulonglong)uVar8 / (ulonglong)*(ushort *)(param_1 + 0x58);
    *(int *)(param_1 + 0x4c) = (int)uVar5;
    *param_2 = (int)(uVar5 / DAT_1467bdcb8);
    uVar9 = 1;
  }
  else {
    uVar9 = 2;
  }
  return uVar9;
}



// FUNCTION 14318e310 PassData body=194 status=ok
// SIG undefined PassData(void)

void CAkSinkDirectSound::PassData(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 local_38;
  int iStack_34;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) && (*(short *)(param_1 + 0x2a) != 0)) {
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    _local_38 = CONCAT44((uint)*(byte *)(param_1 + 0x10) * (uint)DAT_1467bdcb8 * 2,
                         *(undefined4 *)(param_1 + 0x44));
    local_18._4_4_ = 0;
    puVar4 = &local_18;
    puVar3 = &local_20;
    uVar2 = (undefined4)((ulonglong)&local_28 >> 0x20);
    uVar5 = local_18._4_4_;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))();
    if (-1 < iVar1) {
      DoRefill(param_1,param_1 + 0x18,&local_38);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x98))
                (*(longlong **)(param_1 + 0x38),local_30,local_28 & 0xffffffff,local_20,
                 CONCAT44(uVar2,(undefined4)local_18),puVar3,puVar4,uVar5);
    }
  }
  return;
}



// FUNCTION 14318e3e0 PassSilence body=227 status=ok
// SIG undefined PassSilence(void)

void CAkSinkDirectSound::PassSilence(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    local_20 = 0;
    local_18 = 0;
    local_18._4_4_ = 0;
    puVar4 = &local_18;
    puVar3 = &local_20;
    uVar5 = local_18._4_4_;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))();
    if (-1 < iVar1) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x58) * (uint)DAT_1467bdcb8;
      ::_guard_xfg_dispatch_icall_nop((void *)0x0,0,(ulonglong)uVar2);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar2;
      uVar2 = *(uint *)(param_1 + 0x44);
      if (*(uint *)(param_1 + 0x40) <= *(uint *)(param_1 + 0x44)) {
        uVar2 = 0;
      }
      *(uint *)(param_1 + 0x44) = uVar2;
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x98))
                (*(longlong **)(param_1 + 0x38),0,0,local_20,local_18 & 0xffffffff,puVar3,puVar4,
                 uVar5);
    }
  }
  return;
}



// FUNCTION 14318e4d0 Reset body=40 status=ok
// SIG undefined Reset(void)

char CAkSinkDirectSound::Reset(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))
                    (*(longlong **)(param_1 + 0x38),0,0,1);
  return (iVar1 != 0) + '\x01';
}



// FUNCTION 14318e510 SetPrimaryBufferFormat body=392 status=ok
// SIG undefined SetPrimaryBufferFormat(void)

undefined8 CAkSinkDirectSound::SetPrimaryBufferFormat(longlong param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  do {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))();
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x70))();
    if (((-1 < iVar1) &&
        (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
                           (*(longlong **)(param_1 + 0x30),0,0,1), -1 < iVar1)) &&
       (iVar1 = CreateSecondaryBuffer(param_1), -1 < iVar1)) {
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x10) >> 0xc;
    if (uVar2 == 0x60f) {
      uVar2 = 3;
      bVar3 = 0;
      do {
        bVar3 = bVar3 + 1;
        uVar2 = uVar2 & uVar2 - 1;
      } while (uVar2 != 0);
      uVar2 = bVar3 | 0x3100;
      *(byte *)(param_1 + 0x10) = bVar3;
    }
    else {
      if (uVar2 != 0x63f) {
        return 2;
      }
      uVar2 = 0x60f;
      bVar3 = 0;
      do {
        bVar3 = bVar3 + 1;
        uVar2 = uVar2 & uVar2 - 1;
      } while (uVar2 != 0);
      uVar2 = bVar3 | 0x60f100;
      *(byte *)(param_1 + 0x10) = bVar3;
    }
    *(uint *)(param_1 + 0x10) = uVar2;
  } while (iVar1 < 0);
  return 1;
}



// FUNCTION 14318e6a0 Term body=130 status=ok
// SIG undefined Term(void)

void CAkSinkDirectSound::Term(longlong param_1,undefined8 param_2)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))();
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (DAT_146b51fa0 != (longlong *)0x0) {
    (**(code **)(*DAT_146b51fa0 + 0x10))();
    DAT_146b51fa0 = (longlong *)0x0;
  }
  CAkSinkBase::Term(param_1,param_2);
  return;
}



// FUNCTION 14318e730 FUN_14318e730 body=161 status=ok
// SIG undefined FUN_14318e730(void)

undefined8 * FUN_14318e730(undefined8 *param_1)

{
  CAkSink::CAkSink();
  *param_1 = &PTR_FUN_145acb9c0;
  param_1[6] = &PTR_StartProfileThreadUsage_145acba48;
  param_1[7] = &PTR_FUN_145acba60;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
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



// FUNCTION 14318e7e0 FUN_14318e7e0 body=65 status=ok
// SIG undefined FUN_14318e7e0(void)

undefined8 * FUN_14318e7e0(undefined8 *param_1,ulonglong param_2)

{
  param_1[6] = &PTR_StartProfileThreadUsage_145acba48;
  param_1[7] = &PTR_FUN_145acba60;
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14318e830 FindDevicePathForIMMDevice body=547 status=ok
// SIG undefined FindDevicePathForIMMDevice(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CXAudio2Base::FindDevicePathForIMMDevice
               (undefined8 param_1,longlong *param_2,wchar_t *param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined1 *DeviceInfoSet;
  wchar_t *pwVar5;
  ulonglong uVar6;
  DWORD MemberIndex;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint local_res10 [2];
  undefined1 auStack_10b8 [48];
  GUID local_1088;
  wchar_t *local_1078;
  undefined1 local_1070 [8];
  _SP_DEVICE_INTERFACE_DATA local_1068;
  _SP_DEVINFO_DATA local_1048;
  WCHAR local_1028 [2044];
  undefined8 uStack_30;
  
  uStack_30 = 0x14318e844;
  MemberIndex = 0;
  local_1078 = (wchar_t *)0x0;
  (**(code **)(*param_2 + 0x28))(param_2,&local_1078);
  _wcsupr(local_1078);
  local_1088.Data1 = 0xe6327cad;
  local_1088.Data2 = 0xdcec;
  local_1088.Data3 = 0x4949;
  local_1088.Data4[0] = 0xae;
  local_1088.Data4[1] = 0x8a;
  local_1088.Data4[2] = 0x99;
  local_1088.Data4[3] = '\x1e';
  local_1088.Data4[4] = 0x97;
  local_1088.Data4[5] = 'j';
  local_1088.Data4[6] = 'y';
  local_1088.Data4[7] = 0xd2;
  local_res10[0] = 0;
  DeviceInfoSet = SetupDiGetClassDevsW(&local_1088,(PCWSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet == &DAT_ffffffffffffffff) {
    bVar9 = false;
  }
  else {
    local_1048.cbSize = 0x20;
    local_1068.cbSize = 0x20;
    puVar2 = auStack_10b8;
    do {
      do {
        do {
          puVar7 = puVar2;
          *(_SP_DEVICE_INTERFACE_DATA **)(puVar7 + 0x20) = &local_1068;
          *(undefined8 *)(puVar7 + -8) = 0x14318e90b;
          BVar3 = SetupDiEnumDeviceInterfaces
                            (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_1088,MemberIndex,
                             *(PSP_DEVICE_INTERFACE_DATA *)(puVar7 + 0x20));
          if (BVar3 == 0) {
            *(undefined8 *)(puVar7 + -8) = 0x14318e915;
            DVar4 = GetLastError();
            puVar8 = puVar7;
            if (DVar4 == 0x103) goto LAB_14318ea0e;
          }
          *(undefined8 *)(puVar7 + 0x28) = 0;
          *(uint **)(puVar7 + 0x20) = local_res10;
          MemberIndex = MemberIndex + 1;
          *(undefined8 *)(puVar7 + -8) = 0x14318e946;
          SetupDiGetDeviceInterfaceDetailW
                    (DeviceInfoSet,&local_1068,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,
                     *(PDWORD *)(puVar7 + 0x20),*(PSP_DEVINFO_DATA *)(puVar7 + 0x28));
          uVar6 = (ulonglong)local_res10[0] + 0xf;
          if (uVar6 <= local_res10[0]) {
            uVar6 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar7 + -8) = 0x14318e964;
          lVar1 = -(uVar6 & 0xfffffffffffffff0);
          puVar8 = puVar7 + lVar1;
          *(_SP_DEVINFO_DATA **)(puVar7 + lVar1 + 0x28) = &local_1048;
          ((PSP_DEVICE_INTERFACE_DETAIL_DATA_W)(puVar7 + lVar1 + 0x30))->cbSize = 8;
          local_1048.cbSize = 0x20;
          *(undefined8 *)(puVar7 + lVar1 + 0x20) = 0;
          *(undefined8 *)(puVar7 + lVar1 + -8) = 0x14318e99e;
          BVar3 = SetupDiGetDeviceInterfaceDetailW
                            (DeviceInfoSet,&local_1068,
                             (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)(puVar7 + lVar1 + 0x30),
                             local_res10[0],*(PDWORD *)(puVar7 + lVar1 + 0x20),
                             *(PSP_DEVINFO_DATA *)(puVar7 + lVar1 + 0x28));
          puVar2 = puVar7 + lVar1;
        } while (BVar3 == 0);
        local_res10[0] = 0x1000;
        *(undefined1 **)(puVar7 + lVar1 + 0x20) = local_1070;
        local_1028[0] = L'\0';
        *(undefined8 *)(puVar7 + lVar1 + -8) = 0x14318e9d5;
        BVar3 = SetupDiGetDeviceInstanceIdW
                          (DeviceInfoSet,&local_1048,local_1028,0x1000,
                           *(PDWORD *)(puVar7 + lVar1 + 0x20));
        pwVar5 = local_1078;
        puVar2 = puVar7 + lVar1;
      } while (BVar3 == 0);
      *(undefined8 *)(puVar7 + lVar1 + -8) = 0x14318e9ea;
      pwVar5 = ::_guard_xfg_dispatch_icall_nop(local_1028,pwVar5);
      puVar2 = puVar7 + lVar1;
    } while (pwVar5 == (wchar_t *)0x0);
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x14318ea09;
    wcsncpy(param_3,(wchar_t *)(puVar7 + lVar1 + 0x34),(ulonglong)(param_4 - 1U));
    param_3[param_4 - 1U] = L'\0';
LAB_14318ea0e:
    if (DeviceInfoSet != (undefined1 *)0x0) {
      *(undefined8 *)(puVar8 + -8) = 0x14318ea1c;
      SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    }
    pwVar5 = local_1078;
    *(undefined8 *)(puVar8 + -8) = 0x14318ea26;
    CoTaskMemFree(pwVar5);
    bVar9 = *param_3 != L'\0';
  }
  return bVar9;
}



// FUNCTION 14318ea60 GetWwiseXAudio2Interface body=30 status=ok
// SIG IUnknown * GetWwiseXAudio2Interface(void)

/* struct IUnknown * __ptr64 __cdecl AK::GetWwiseXAudio2Interface(void) */

IUnknown * __cdecl AK::GetWwiseXAudio2Interface(void)

{
  IUnknown *pIVar1;
  
                    /* 0x318ea60  218  ?GetWwiseXAudio2Interface@AK@@YAPEAUIUnknown@@XZ */
  if (DAT_146b51fc0 != 0) {
    pIVar1 = *(IUnknown **)(DAT_146b51fc0 + 0x50);
    if (pIVar1 == (IUnknown *)0x0) {
      pIVar1 = *(IUnknown **)(DAT_146b51fc0 + 0x58);
    }
    return pIVar1;
  }
  return (IUnknown *)0x0;
}



// FUNCTION 14318ea80 Init body=1434 status=ok
// SIG undefined Init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char CAkSinkXAudio2::Init
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  wchar_t *pwVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  uint local_res8 [2];
  uint local_res20;
  undefined8 in_stack_ffffffffffffef10;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffef20;
  undefined4 uVar13;
  wchar_t *local_10d8;
  undefined2 local_10d0;
  short local_10ce;
  uint local_10cc;
  int local_10c8;
  ushort local_10c4;
  undefined2 local_10c2;
  undefined4 local_10c0;
  uint local_10bc;
  undefined4 local_10b8;
  undefined4 uStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  wchar_t local_10a8 [536];
  undefined1 local_c78 [1030];
  ushort local_872;
  undefined1 local_848 [2064];
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffef20 >> 0x20);
  iVar4 = CXAudio2Base::Init(param_1 + 0x50);
  uVar9 = DAT_1467bdcac;
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffef10 >> 0x20);
  if (iVar4 < 0) {
    return 'T';
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if (param_2 == (longlong *)0x0) {
LAB_14318ec02:
      uVar6 = 0;
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                        (*(longlong **)(param_1 + 0x58),local_res8);
      if (iVar4 < 0) {
        return '\x02';
      }
      (**(code **)(*param_2 + 0x28))(param_2,&local_10d8);
      uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffef10 >> 0x20);
      uVar8 = 0;
      uVar6 = local_res8[0];
      uVar7 = 0;
      if (local_res8[0] != 0) {
        do {
          uVar8 = uVar7;
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                            (*(longlong **)(param_1 + 0x58),uVar8);
          if (-1 < iVar4) {
            pwVar5 = ::_guard_xfg_dispatch_icall_nop(local_10d8,local_10a8);
            uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffef10 >> 0x20);
            uVar6 = uVar8;
            if (pwVar5 != (wchar_t *)0x0) break;
          }
          uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffef10 >> 0x20);
          uVar8 = uVar8 + 1;
          uVar6 = local_res8[0];
          uVar7 = uVar8;
        } while (uVar8 < local_res8[0]);
      }
      CoTaskMemFree(local_10d8);
      if (local_res8[0] <= uVar8) goto LAB_14318ec02;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))
                      (*(longlong **)(param_1 + 0x58),param_1 + 0x60,0,uVar9,0,
                       CONCAT44(uVar12,uVar6),0);
  }
  else {
    puVar11 = (undefined1 *)0x0;
    ::_guard_xfg_dispatch_icall_nop(local_848,0,0x800);
    if (param_2 != (longlong *)0x0) {
      cVar2 = CXAudio2Base::FindDevicePathForIMMDevice(param_1 + 0x50,param_2,local_848,0x400);
      puVar11 = local_848;
      if (cVar2 == '\0') {
        puVar11 = (undefined1 *)0x0;
      }
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x38))
                      (*(longlong **)(param_1 + 0x50),param_1 + 0x60,0,uVar9,0,puVar11,0,
                       CONCAT44(uVar13,6));
  }
  uVar9 = 0;
  cVar2 = (iVar4 < 0) + '\x01';
  if (cVar2 != '\x01') {
    return cVar2;
  }
  uVar6 = *(uint *)(param_5 + 0xc);
  uVar7 = uVar6 >> 0xc;
  if (0xfff < uVar6) {
    bVar10 = 0;
    do {
      bVar10 = bVar10 + 1;
      uVar7 = uVar7 & uVar7 - 1;
    } while (uVar7 != 0);
    *(byte *)(param_1 + 0x10) = bVar10;
    uVar6 = uVar6 & 0xfffff100 | (uint)bVar10 | 0x100;
    goto LAB_14318ed7e;
  }
  if (DAT_146b51fa8 == 1) {
    if ((*(longlong *)(param_1 + 0x50) == 0) &&
       (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                          (*(longlong **)(param_1 + 0x58),0,local_c78), iVar4 == 0)) {
      uVar6 = (uint)local_872;
LAB_14318ecc0:
      if (6 < uVar6) {
        uVar6 = 0x63f;
        cVar2 = '\0';
        do {
          cVar2 = cVar2 + '\x01';
          uVar6 = uVar6 & uVar6 - 1;
        } while (uVar6 != 0);
        *(char *)(param_1 + 0x10) = cVar2;
        uVar6 = *(uint *)(param_1 + 0x10) & 0x1ff | 0x63f100;
        goto LAB_14318ed7e;
      }
      if (3 < uVar6) {
        uVar6 = 0x60f;
        cVar2 = '\0';
        do {
          cVar2 = cVar2 + '\x01';
          uVar6 = uVar6 & uVar6 - 1;
        } while (uVar6 != 0);
        *(char *)(param_1 + 0x10) = cVar2;
        uVar6 = *(uint *)(param_1 + 0x10) & 0x1ff | 0x60f100;
        goto LAB_14318ed7e;
      }
    }
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x98))();
    uVar6 = uVar9;
    if (-1 < iVar4) {
      for (; local_res20 != 0; local_res20 = local_res20 & local_res20 - 1) {
        uVar6 = uVar6 + 1;
      }
      goto LAB_14318ecc0;
    }
  }
  uVar6 = 3;
  cVar2 = '\0';
  do {
    cVar2 = cVar2 + '\x01';
    uVar6 = uVar6 & uVar6 - 1;
  } while (uVar6 != 0);
  *(char *)(param_1 + 0x10) = cVar2;
  uVar6 = *(uint *)(param_1 + 0x10) & 0x1ff | 0x3100;
LAB_14318ed7e:
  *(uint *)(param_1 + 0x10) = uVar6;
  *(uint *)(param_1 + 0x48) = uVar6 & 0xff;
  iVar4 = CAkSink::AllocBuffer(param_1,*(undefined4 *)(param_1 + 0x10));
  if (iVar4 == 1) {
    uVar3 = *(short *)(param_1 + 0x48) << 2;
    *(ushort *)(param_1 + 0xc4) = uVar3;
    uVar6 = (uint)uVar3 * (uint)DAT_1467bdcb8;
    _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)(uVar6 * 8));
    *(void **)(param_1 + 0x70) = _Dst;
    if (_Dst != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uVar6 * 8));
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
      *(ulonglong *)(param_1 + 0x88) = (ulonglong)uVar6 + *(longlong *)(param_1 + 0x70);
      *(ulonglong *)(param_1 + 0x90) = (ulonglong)(uVar6 * 2) + *(longlong *)(param_1 + 0x70);
      *(ulonglong *)(param_1 + 0x98) = (ulonglong)(uVar6 * 3) + *(longlong *)(param_1 + 0x70);
      *(ulonglong *)(param_1 + 0xa0) = (ulonglong)(uVar6 * 4) + *(longlong *)(param_1 + 0x70);
      *(ulonglong *)(param_1 + 0xa8) = (ulonglong)(uVar6 * 5) + *(longlong *)(param_1 + 0x70);
      *(ulonglong *)(param_1 + 0xb0) = (ulonglong)(uVar6 * 6) + *(longlong *)(param_1 + 0x70);
      local_10c2 = 0x20;
      *(ulonglong *)(param_1 + 0xb8) = (ulonglong)(uVar6 * 7) + *(longlong *)(param_1 + 0x70);
      local_10bc = *(uint *)(param_1 + 0x10) >> 0xc;
      local_10ce = *(short *)(param_1 + 0x48);
      local_10c4 = local_10ce << 2;
      local_10d0 = 0xfffe;
      local_10c8 = local_10c4 * DAT_1467bdcac;
      local_10cc = DAT_1467bdcac;
      local_10c0 = 0x200016;
      local_10b8 = 3;
      uStack_10b4 = 0x100000;
      uStack_10b0 = 0xaa000080;
      uStack_10ac = 0x719b3800;
      if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))
                          (*(longlong **)(param_1 + 0x58),param_1 + 0x68,&local_10d0,0,0x3f800000,
                           param_1 + 0x38,0,0);
      }
      else {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
      }
      if (-1 < iVar4) {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x60))
                  (*(longlong **)(param_1 + 0x68),0x3f800000,0);
        lVar1 = DAT_146b51fc0;
        if (DAT_146b51fc0 != 0) {
          uVar6 = *(int *)(DAT_146b51fc0 + 0xc0) + 1U & 0x80000007;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
          }
          *(short *)(param_1 + 0x78) = (short)uVar6;
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + 0xc0);
          *(undefined2 *)(param_1 + 0x7a) = 0;
          if (0 < *(int *)(param_1 + 0xc0)) {
            do {
              FUN_14318f700(param_1);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < *(int *)(param_1 + 0xc0));
          }
        }
        DAT_1467bdcb0 = (((uint)DAT_1467bdcb8 * 1000) / DAT_1467bdcac) * 2;
        if (DAT_146b51fc0 == 0) {
          DAT_146b51fc0 = param_1;
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        else {
          *(longlong *)(param_1 + 0x40) = DAT_146b51fc0;
          DAT_146b51fc0 = param_1;
        }
        if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
          return '\x01';
        }
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                  (*(longlong **)(param_1 + 0x58),param_1 + 0x30);
        return '\x01';
      }
    }
  }
  return '\x02';
}



// FUNCTION 14318f020 Init body=711 status=ok
// SIG undefined Init(void)

ulonglong CXAudio2Base::Init(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  FARPROC pFVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  LPVOID *ppv;
  bool bVar7;
  HMODULE local_res10;
  
  if (param_2 != (longlong *)0x0) {
    DAT_146b51fa8 = 0;
    local_res10 = (HMODULE)0x0;
    cVar1 = IsWindowsVersionOrGreater(10,0);
    if ((cVar1 == '\0') || (BVar2 = GetModuleHandleExA(0,"XAudio2_9.dll",&local_res10), BVar2 == 0))
    {
      cVar1 = IsWindowsVersionOrGreater();
      if ((cVar1 == '\0') ||
         (BVar2 = GetModuleHandleExA(0,"XAudio2_8.dll",&local_res10), BVar2 == 0)) {
        bVar7 = DAT_146b51fc8 == '\0';
        cVar1 = IsWindowsVersionOrGreater(6,1,0);
        pHVar6 = (HMODULE)0x0;
        if ((cVar1 != '\0') &&
           (BVar2 = GetModuleHandleExA((uint)bVar7,"XAudio2_7.dll",&local_res10), BVar2 != 0)) {
          DAT_146b51fa8 = 1;
          DAT_146b51fc8 = '\x01';
          pHVar6 = local_res10;
        }
      }
      else {
        DAT_146b51fa8 = 2;
        pHVar6 = local_res10;
      }
    }
    else {
      DAT_146b51fa8 = 3;
      pHVar6 = local_res10;
    }
    DAT_146b51fb0 = pHVar6;
    *param_1 = param_2;
    (**(code **)(*param_2 + 8))(param_2);
    return 0;
  }
  if (DAT_146b51fb0 == (HMODULE)0x0) {
    local_res10 = (HMODULE)0x0;
    DAT_146b51fa8 = 0;
    cVar1 = IsWindowsVersionOrGreater(10,0,0);
    if (cVar1 != '\0') {
      local_res10 = LoadLibraryA("XAudio2_9.dll");
      DAT_146b51fa8 = 3;
    }
    if (local_res10 == (HMODULE)0x0) {
      cVar1 = IsWindowsVersionOrGreater(6,2,0);
      if (cVar1 != '\0') {
        local_res10 = LoadLibraryA("XAudio2_8.dll");
        DAT_146b51fa8 = 2;
      }
      if ((local_res10 == (HMODULE)0x0) && (cVar1 = IsWindowsVersionOrGreater(6,1,0), cVar1 != '\0')
         ) {
        local_res10 = LoadLibraryA("XAudio2_7.dll");
        DAT_146b51fa8 = 1;
        if (DAT_146b51fc8 == '\0') {
          BVar2 = GetModuleHandleExA(1,"XAudio2_7.dll",&local_res10);
          DAT_146b51fc8 = BVar2 == 1;
        }
      }
    }
    DAT_146b51fb0 = local_res10;
    if (local_res10 == (HMODULE)0x0) {
      return 0x80004002;
    }
  }
  if (DAT_146b51fa8 == 1) {
    ppv = (LPVOID *)(param_1 + 1);
    uVar3 = CoCreateInstance((IID *)&DAT_1454d9810,(LPUNKNOWN)0x0,1,(IID *)&DAT_1454d9820,ppv);
    if ((-1 < (int)uVar3) &&
       (uVar3 = (**(code **)(*(longlong *)*ppv + 0x28))(*ppv,0,1), (int)uVar3 < 0)) {
      (**(code **)(*(longlong *)*ppv + 0x10))();
      *ppv = (LPVOID)0x0;
      return (ulonglong)uVar3;
    }
  }
  else {
    pFVar4 = GetProcAddress(DAT_146b51fb0,"XAudio2Create");
    if (pFVar4 != (FARPROC)0x0) {
      uVar5 = (*pFVar4)(param_1,0,1);
      return uVar5;
    }
    uVar3 = 0x80004005;
  }
  return (ulonglong)uVar3;
}



// FUNCTION 14318f2f0 IsDataNeeded body=169 status=ok
// SIG undefined IsDataNeeded(void)

char CAkSinkXAudio2::IsDataNeeded(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_2 = 1000;
  for (lVar1 = DAT_146b51fc0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
    uVar4 = 0;
    if (*(int *)(lVar1 + 0xc0) < (int)(uint)DAT_146b50d60) {
      uVar4 = (uint)(ushort)(DAT_146b50d60 - (short)*(undefined4 *)(lVar1 + 0xc0));
    }
    uVar3 = *param_2;
    if (uVar4 <= uVar3) {
      if (*(int *)(lVar1 + 0xc0) < (int)(uint)DAT_146b50d60) {
        uVar2 = DAT_146b50d60 - (short)*(undefined4 *)(lVar1 + 0xc0);
      }
      else {
        uVar2 = 0;
      }
      uVar3 = (uint)uVar2;
    }
    *param_2 = uVar3;
  }
  return (*(char *)(param_1 + 199) != '\0') + '\x01';
}



// FUNCTION 14318f3b0 IsWindowsVersionOrGreater body=203 status=ok
// SIG undefined IsWindowsVersionOrGreater(void)

undefined8 IsWindowsVersionOrGreater(undefined2 param_1,undefined4 param_2,WORD param_3)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 extraout_var;
  _OSVERSIONINFOEXW local_128;
  
  local_128.dwMinorVersion = 0;
  local_128.dwBuildNumber = 0;
  local_128.dwPlatformId = 0;
  local_128.dwOSVersionInfoSize = 0x11c;
  local_128.dwMajorVersion = 0;
  _guard_xfg_dispatch_icall_nop(local_128.szCSDVersion,0,0x100);
  local_128.wServicePackMajor = 0;
  local_128.wServicePackMinor = 0;
  local_128.wSuiteMask = 0;
  local_128.wProductType = '\0';
  local_128.wReserved = '\0';
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,0x20,3);
  local_128.dwMajorVersion._0_2_ = param_1;
  local_128.dwMajorVersion._2_2_ = 0;
  local_128._8_8_ = CONCAT44(local_128.dwBuildNumber,param_2) & 0xffffffff0000ffff;
  local_128.wServicePackMajor = param_3;
  BVar1 = VerifyVersionInfoW(&local_128,0x23,dwlConditionMask);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}



// FUNCTION 14318f4c0 FUN_14318f4c0 body=281 status=ok
// SIG undefined FUN_14318f4c0(void)

void FUN_14318f4c0(longlong param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 local_58 [8];
  uint local_50;
  longlong local_4c;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  (**(code **)(**(longlong **)(param_1 + 0x30) + 200))(*(longlong **)(param_1 + 0x30),local_58,0);
  uVar1 = *(ushort *)(param_1 + 0x8c);
  iVar4 = 0;
  iVar3 = 0;
  if (local_50 < *(uint *)(param_1 + 0x88)) {
    do {
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_40 = (ulonglong)((uint)DAT_1467bdcb8 * (uint)*(ushort *)(param_1 + 0x8c)) << 0x20;
      local_38 = *(undefined8 *)(param_1 + 0x48 + (ulonglong)*(ushort *)(param_1 + 0x42) * 8);
      sVar2 = *(ushort *)(param_1 + 0x42) + 1;
      *(short *)(param_1 + 0x42) = sVar2;
      if (sVar2 == 8) {
        *(undefined2 *)(param_1 + 0x42) = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0xa8))
                (*(longlong **)(param_1 + 0x30),&local_40,0);
      iVar4 = iVar3 + 1;
      local_50 = local_50 + 1;
      iVar3 = iVar4;
    } while (local_50 < *(uint *)(param_1 + 0x88));
  }
  if ((local_4c != 0) && ((uint)DAT_1467bdcb8 * iVar4 < param_2 / uVar1)) {
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  if (local_50 < DAT_146b50d60) {
    CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
  }
  return;
}



// FUNCTION 14318f5e0 PassData body=109 status=ok
// SIG undefined PassData(void)

void CAkSinkXAudio2::PassData(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 199) == '\0') {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x80 + (ulonglong)*(ushort *)(param_1 + 0x78) * 8),
               *(void **)(param_1 + 0x18),
               (longlong)(int)((uint)*(ushort *)(param_1 + 0x2a) * *(int *)(param_1 + 0x48)) << 2);
    *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
    if (*(short *)(param_1 + 0x78) == 8) {
      *(undefined2 *)(param_1 + 0x78) = 0;
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0xc0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)(uint)DAT_146b50d60 < iVar2 + 1) {
      LOCK();
      *(uint *)(param_1 + 0xc0) = (uint)DAT_146b50d60;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14318f650 PassSilence body=111 status=ok
// SIG undefined PassSilence(void)

void CAkSinkXAudio2::PassSilence(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 199) == '\0') {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x80 + (ulonglong)*(ushort *)(param_1 + 0x78) * 8),0,
               (ulonglong)(*(int *)(param_1 + 0x48) * (uint)DAT_1467bdcb8 * 4));
    *(short *)(param_1 + 0x78) = *(short *)(param_1 + 0x78) + 1;
    if (*(short *)(param_1 + 0x78) == 8) {
      *(undefined2 *)(param_1 + 0x78) = 0;
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0xc0);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)(uint)DAT_146b50d60 < iVar2 + 1) {
      LOCK();
      *(uint *)(param_1 + 0xc0) = (uint)DAT_146b50d60;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14318f6c0 Reset body=37 status=ok
// SIG undefined Reset(void)

char CAkSinkXAudio2::Reset(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x98))(*(longlong **)(param_1 + 0x68),0,0);
  return (iVar1 < 0) + '\x01';
}



// FUNCTION 14318f700 FUN_14318f700 body=115 status=ok
// SIG undefined FUN_14318f700(void)

bool FUN_14318f700(longlong param_1)

{
  int iVar1;
  short sVar2;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_34 = (uint)*(ushort *)(param_1 + 0xc4) * (uint)DAT_1467bdcb8;
  local_38 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_30 = *(undefined8 *)(param_1 + 0x80 + (ulonglong)*(ushort *)(param_1 + 0x7a) * 8);
  sVar2 = *(ushort *)(param_1 + 0x7a) + 1;
  *(short *)(param_1 + 0x7a) = sVar2;
  if (sVar2 == 8) {
    *(undefined2 *)(param_1 + 0x7a) = 0;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xa8))
                    (*(longlong **)(param_1 + 0x68),&local_38);
  return -1 < iVar1;
}



// FUNCTION 14318f780 FUN_14318f780 body=488 status=ok
// SIG undefined FUN_14318f780(void)

void FUN_14318f780(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  *(undefined1 *)(param_1 + 200) = 1;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(param_1 + 0xc0);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xa0))
                      (*(longlong **)(param_1 + 0x68),0,0);
    if ((iVar4 == 0) &&
       (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xb0))(), iVar4 == 0)) {
      iVar4 = *(int *)(param_1 + 0xc0);
      uVar6 = uVar7;
      while (((iVar4 != 0 && (*(int *)(param_1 + 0xc0) == iVar1)) && ((int)uVar6 != 0x102))) {
        DVar5 = WaitForSingleObjectEx(*(HANDLE *)(DAT_146b50b78 + 0x80),DAT_1467bdca8 + 1,0);
        iVar4 = *(int *)(param_1 + 0xc0);
        uVar6 = (ulonglong)DVar5;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0x30);
    }
    plVar2 = *(longlong **)(param_1 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0x30);
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x90))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar6 = DAT_146b51fc0;
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar6 = DAT_146b51fc0;
  }
  do {
    uVar3 = DAT_146b51fc0;
    if (uVar6 == 0) {
LAB_14318f94e:
      DAT_146b51fc0 = uVar3;
      CAkSinkBase::Term(param_1,param_2);
      return;
    }
    if (uVar6 == param_1) {
      if ((uVar6 != 0) && (uVar3 = *(ulonglong *)(uVar6 + 0x40), uVar6 != DAT_146b51fc0)) {
        *(ulonglong *)(uVar7 + 0x40) = *(ulonglong *)(uVar6 + 0x40);
        uVar3 = DAT_146b51fc0;
      }
      goto LAB_14318f94e;
    }
    uVar7 = uVar6;
    uVar6 = *(ulonglong *)(uVar6 + 0x40);
  } while( true );
}



// FUNCTION 14318f970 CAkSinkWasapi body=129 status=ok
// SIG undefined CAkSinkWasapi(void)

undefined8 * CAkSinkWasapi::CAkSinkWasapi(undefined8 *param_1)

{
  CAkSink::CAkSink();
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acbae8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  CAkResampler::CAkResampler(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) & 0xff;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x2b;
  return param_1;
}



// FUNCTION 14318fa00 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSinkWasapi::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbae8;
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x68);
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14318fa70 Consume body=244 status=ok
// SIG undefined Consume(void)

void CAkSinkWasapi::Consume(longlong param_1,AkAudioBuffer *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  float *local_20;
  float *pfStack_18;
  
  if (*(short *)(param_2 + 0x12) != 0) {
    local_30 = 0;
    local_28 = 0;
    local_20 = (float *)0x0;
    pfStack_18 = (float *)0x0;
    local_38 = param_3;
    iVar1 = AkAudioMix::Allocate(&local_30,param_2[8],*(undefined1 *)(param_1 + 0x20));
    if (iVar1 == 1) {
      CAkSpeakerPan::GetSpeakerVolumesDirect
                (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 0x20),0,pfStack_18);
      uVar2 = (*(byte *)(param_1 + 0x20) + 3 & 0xfffffffc) * (uint)(byte)param_2[8];
      if (uVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop(local_20,pfStack_18,(ulonglong)uVar2 << 2);
      }
      CAkMixer::MixNinNChannels
                (param_2,(AkAudioBuffer *)(param_1 + 0x18),(AkRamp *)&local_38,pfStack_18,local_20,
                 1.0 / (float)*(ushort *)(param_1 + 0x28),*(ushort *)(param_1 + 0x28));
      AkAudioMix::Free(&local_30);
    }
    *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x12);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



// FUNCTION 14318fb70 Init body=1029 status=ok
// SIG undefined Init(void)

/* WARNING: Removing unreachable block (ram,0x00014318fc18) */
/* WARNING: Removing unreachable block (ram,0x00014318fc67) */
/* WARNING: Removing unreachable block (ram,0x00014318fc87) */
/* WARNING: Removing unreachable block (ram,0x00014318fca7) */
/* WARNING: Removing unreachable block (ram,0x00014318fcc7) */
/* WARNING: Removing unreachable block (ram,0x00014318fce7) */
/* WARNING: Removing unreachable block (ram,0x00014318fccc) */
/* WARNING: Removing unreachable block (ram,0x00014318fcd3) */
/* WARNING: Removing unreachable block (ram,0x00014318fcdc) */
/* WARNING: Removing unreachable block (ram,0x00014318fcac) */
/* WARNING: Removing unreachable block (ram,0x00014318fcb3) */
/* WARNING: Removing unreachable block (ram,0x00014318fcbc) */
/* WARNING: Removing unreachable block (ram,0x00014318fc8c) */
/* WARNING: Removing unreachable block (ram,0x00014318fc93) */
/* WARNING: Removing unreachable block (ram,0x00014318fc9c) */
/* WARNING: Removing unreachable block (ram,0x00014318fc6c) */
/* WARNING: Removing unreachable block (ram,0x00014318fc73) */
/* WARNING: Removing unreachable block (ram,0x00014318fc7c) */
/* WARNING: Removing unreachable block (ram,0x00014318fc44) */
/* WARNING: Removing unreachable block (ram,0x00014318fc50) */
/* WARNING: Removing unreachable block (ram,0x00014318fc59) */
/* WARNING: Removing unreachable block (ram,0x00014318fcea) */
/* WARNING: Removing unreachable block (ram,0x00014318fd08) */
/* WARNING: Removing unreachable block (ram,0x00014318fd0b) */
/* WARNING: Removing unreachable block (ram,0x00014318fd40) */
/* WARNING: Removing unreachable block (ram,0x00014318fd48) */
/* WARNING: Removing unreachable block (ram,0x00014318fd65) */
/* WARNING: Removing unreachable block (ram,0x00014318fd69) */
/* WARNING: Removing unreachable block (ram,0x00014318fd83) */
/* WARNING: Removing unreachable block (ram,0x00014318fd9b) */
/* WARNING: Removing unreachable block (ram,0x00014318fdb0) */
/* WARNING: Removing unreachable block (ram,0x00014318fdcc) */
/* WARNING: Removing unreachable block (ram,0x00014318fddf) */
/* WARNING: Removing unreachable block (ram,0x00014318fe12) */
/* WARNING: Removing unreachable block (ram,0x00014318fe40) */
/* WARNING: Removing unreachable block (ram,0x00014318fe64) */
/* WARNING: Removing unreachable block (ram,0x00014318fe68) */
/* WARNING: Removing unreachable block (ram,0x00014318fec3) */
/* WARNING: Removing unreachable block (ram,0x00014318ff11) */
/* WARNING: Removing unreachable block (ram,0x00014318fefb) */
/* WARNING: Removing unreachable block (ram,0x00014318feb1) */
/* WARNING: Removing unreachable block (ram,0x00014318fe08) */

undefined4 CAkSinkWasapi::Init(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 local_78 [8];
  undefined1 local_70 [72];
  
  *(longlong **)(param_1 + 0x30) = param_2;
  (**(code **)(*param_2 + 8))(param_2);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                    (*(longlong **)(param_1 + 0x30),&DAT_145acbb68,0x17,0,puVar1);
  if (iVar2 == 0) {
    (**(code **)(*(longlong *)*puVar1 + 0x48))((longlong *)*puVar1,local_70,local_78);
    AkAudioLibSettings::SetAudioBufferSettings(DAT_1467bdcac,DAT_146b50bd4);
    (**(code **)(*(longlong *)*puVar1 + 0x40))();
  }
  return 2;
}



// FUNCTION 14318ff80 IsDataNeeded body=100 status=ok
// SIG undefined IsDataNeeded(void)

undefined8 CAkSinkWasapi::IsDataNeeded(longlong param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_res8;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  if (iVar2 != 0) {
    return 2;
  }
  uVar1 = *(ushort *)(param_1 + 0xd8);
  if (*(ushort *)(param_1 + 0xd8) == 0) {
    uVar1 = DAT_1467bdcb8;
  }
  *param_2 = (uint)(*(int *)(param_1 + 0x50) - local_res8) / (uint)uVar1;
  return 1;
}



// FUNCTION 14318fff0 OnFrameEnd body=32 status=ok
// SIG undefined OnFrameEnd(void)

void CAkSinkWasapi::OnFrameEnd(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    CAkSinkBase::OnFrameEnd();
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 143190010 PassData body=266 status=ok
// SIG undefined PassData(void)

void CAkSinkWasapi::PassData(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *local_res8;
  
  if (*(short *)(param_1 + 0xd8) == 0) {
    SubmitBuffer(param_1);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 200);
    if (*(short *)(param_1 + 0xda) != *(short *)(param_1 + 0xd8)) goto LAB_1431900bc;
    do {
      CAkResampler::InterleaveAndSwapOutput(puVar1);
      local_res8 = (void *)0x0;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                        (*(longlong **)(param_1 + 0x40),*(undefined2 *)(param_1 + 0xda),&local_res8)
      ;
      if ((iVar2 == 0) && (local_res8 != (void *)0x0)) {
        ::_guard_xfg_dispatch_icall_nop
                  (local_res8,(void *)*puVar1,
                   (ulonglong)((uint)*(byte *)(param_1 + 0xd0) * (uint)*(ushort *)(param_1 + 0xda))
                   << 2);
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
                  (*(longlong **)(param_1 + 0x40),*(undefined2 *)(param_1 + 0xda),0);
      }
      *(undefined2 *)(param_1 + 0xda) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
LAB_1431900bc:
      iVar2 = CAkResampler::Execute(param_1 + 0x68,param_1 + 0x18,puVar1);
    } while (iVar2 == 0x2d);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x18),0,
             (ulonglong)((uint)*(byte *)(param_1 + 0x20) * (uint)*(ushort *)(param_1 + 0x28) * 4));
  *(undefined2 *)(param_1 + 0x2a) = 0;
  return;
}



// FUNCTION 143190120 PassSilence body=338 status=ok
// SIG undefined PassSilence(void)

void CAkSinkWasapi::PassSilence(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  void *local_res8;
  longlong local_res10;
  
  uVar2 = 0;
  local_res10 = 0;
  if (*(short *)(param_1 + 0xda) == 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                      (*(longlong **)(param_1 + 0x40),DAT_1467bdcb8,&local_res10);
    if ((iVar1 == 0) && (local_res10 != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
                (*(longlong **)(param_1 + 0x40),DAT_1467bdcb8,2);
    }
    return;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    do {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 200) +
                         (*(ushort *)(param_1 + 0xd8) * uVar2 +
                         (ulonglong)*(ushort *)(param_1 + 0xda)) * 4),0,
                 ((ulonglong)*(ushort *)(param_1 + 0xd8) - (ulonglong)*(ushort *)(param_1 + 0xda)) *
                 4);
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *(byte *)(param_1 + 0xd0));
  }
  *(undefined2 *)(param_1 + 0xda) = *(undefined2 *)(param_1 + 0xd8);
  CAkResampler::InterleaveAndSwapOutput((undefined8 *)(param_1 + 200));
  local_res8 = (void *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                    (*(longlong **)(param_1 + 0x40),*(undefined2 *)(param_1 + 0xda),&local_res8);
  if ((iVar1 == 0) && (local_res8 != (void *)0x0)) {
    ::_guard_xfg_dispatch_icall_nop
              (local_res8,*(void **)(param_1 + 200),
               (ulonglong)((uint)*(byte *)(param_1 + 0xd0) * (uint)*(ushort *)(param_1 + 0xda)) << 2
              );
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
              (*(longlong **)(param_1 + 0x40),*(undefined2 *)(param_1 + 0xda),0);
  }
  *(undefined2 *)(param_1 + 0xda) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return;
}



// FUNCTION 143190280 Reset body=24 status=ok
// SIG undefined Reset(void)

undefined8 CAkSinkWasapi::Reset(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
  return 1;
}



// FUNCTION 1431902a0 SubmitBuffer body=119 status=ok
// SIG undefined SubmitBuffer(void)

void CAkSinkWasapi::SubmitBuffer(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *local_res8;
  
  CAkResampler::InterleaveAndSwapOutput(param_2);
  local_res8 = (void *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                    (*(longlong **)(param_1 + 0x40),*(undefined2 *)((longlong)param_2 + 0x12),
                     &local_res8);
  if ((iVar1 == 0) && (local_res8 != (void *)0x0)) {
    ::_guard_xfg_dispatch_icall_nop
              (local_res8,(void *)*param_2,
               (ulonglong)
               ((uint)*(byte *)(param_2 + 1) * (uint)*(ushort *)((longlong)param_2 + 0x12)) << 2);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
              (*(longlong **)(param_1 + 0x40),*(undefined2 *)((longlong)param_2 + 0x12),0);
  }
  return;
}



// FUNCTION 143190320 Term body=183 status=ok
// SIG undefined Term(void)

undefined8 CAkSinkWasapi::Term(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)(param_1 + 0x58);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return 1;
  }
  if (*(short *)(param_1 + 0xd8) != 0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0x2b;
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))();
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar2 = CAkSinkBase::Term(param_1,param_2);
  return uVar2;
}



// FUNCTION 1431903e0 CAkStateAware body=18 status=ok
// SIG undefined CAkStateAware(void)

undefined8 * CAkStateAware::CAkStateAware(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145acbba0;
  return param_1;
}



// FUNCTION 143190400 ~CAkStateAware body=11 status=ok
// SIG undefined ~CAkStateAware(void)

void CAkStateAware::~CAkStateAware(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acbba0;
  return;
}



// FUNCTION 143190410 FUN_143190410 body=43 status=ok
// SIG undefined FUN_143190410(void)

undefined8 * FUN_143190410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acbba0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143190440 FUN_143190440 body=228 status=ok
// SIG undefined FUN_143190440(void)

longlong FUN_143190440(longlong *param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((ushort *)*param_1 == (ushort *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulonglong)*(ushort *)*param_1;
  }
  iVar2 = (int)uVar5;
  uVar1 = iVar2 * 2 + 7;
  psVar3 = AK::MemoryMgr::Malloc
                     (g_DefaultPoolId,(ulonglong)((iVar2 + 1) * 0x10 + (uVar1 & 0xfffffffc)));
  lVar4 = 0;
  if (psVar3 != (short *)0x0) {
    if (*param_1 != 0) {
      _guard_xfg_dispatch_icall_nop(psVar3 + 1,(void *)(*param_1 + 2),uVar5 * 2);
      _guard_xfg_dispatch_icall_nop
                ((void *)(((ulonglong)uVar1 & 0xfffffffc) + (longlong)psVar3),
                 (void *)(((ulonglong)(iVar2 * 2 + 5) & 0xfffffffc) + *param_1),uVar5 << 4);
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    }
    psVar3[iVar2 + 1] = param_2;
    *psVar3 = (short)uVar5 + 1;
    lVar4 = (longlong)psVar3 + ((ulonglong)uVar1 & 0xfffffffc) + uVar5 * 0x10;
    *param_1 = (longlong)psVar3;
  }
  return lVar4;
}



// FUNCTION 143190530 FUN_143190530 body=195 status=ok
// SIG undefined FUN_143190530(void)

undefined4 * FUN_143190530(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_1431905be:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined4 *)(*param_1 + (ulonglong)uVar2 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = param_2;
    }
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 0x10;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar7 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            *(undefined4 *)((longlong)pvVar4 + uVar7 * 4) = *(undefined4 *)(*param_1 + uVar7 * 4);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) goto LAB_1431905be;
    }
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}



// FUNCTION 143190600 FUN_143190600 body=667 status=ok
// SIG undefined FUN_143190600(void)

undefined4 FUN_143190600(longlong param_1,uint param_2,int param_3,char param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong *plVar10;
  uint uVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  lVar5 = DAT_146b50af8;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x80);
  EnterCriticalSection(lpCriticalSection);
  uVar11 = *(uint *)(lVar5 + 0xb0);
  plVar15 = (longlong *)0x0;
  if (uVar11 != 0) {
    for (plVar10 = *(longlong **)
                    (*(longlong *)(lVar5 + 0xa8) + ((ulonglong)param_2 % (ulonglong)uVar11) * 8);
        plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
      if (*(uint *)(plVar10 + 2) == param_2) {
        if (plVar10 != (longlong *)0x0) {
          *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
          LeaveCriticalSection(lpCriticalSection);
          goto LAB_14319066a;
        }
        break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  plVar10 = plVar15;
LAB_14319066a:
  piVar13 = *(int **)(param_1 + 0x28);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x30);
  piVar12 = piVar13 + uVar8 * 4;
  for (; (piVar13 != piVar12 && (*piVar13 != param_3)); piVar13 = piVar13 + 4) {
  }
  plVar14 = (longlong *)(piVar13 + 2);
  if (piVar13 == piVar12) {
    plVar14 = plVar15;
  }
  if (plVar14 == (longlong *)0x0) {
LAB_143190750:
    if (plVar10 == (longlong *)0x0) {
      return 0x10;
    }
    piVar13 = *(int **)(param_1 + 0x28);
    for (piVar12 = piVar13; (piVar12 != piVar13 + uVar8 * 4 && (*piVar12 != param_3));
        piVar12 = piVar12 + 4) {
    }
    uVar11 = *(uint *)(param_1 + 0x30);
    plVar14 = (longlong *)(piVar12 + 2);
    if (piVar12 == piVar13 + (ulonglong)uVar11 * 4) {
      plVar14 = plVar15;
    }
    if (plVar14 == (longlong *)0x0) {
      if (uVar11 < *(uint *)(param_1 + 0x34)) {
LAB_143190826:
        uVar11 = *(uint *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = uVar11 + 1;
        piVar13 = (int *)((ulonglong)uVar11 * 0x10 + *(longlong *)(param_1 + 0x28));
        if (piVar13 != (int *)0x0) {
          *piVar13 = param_3;
          plVar14 = (longlong *)(piVar13 + 2);
          goto LAB_143190848;
        }
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x34) + 1;
        pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
        if (pvVar7 == (void *)0x0) goto LAB_14319084b;
        pvVar9 = *(void **)(param_1 + 0x28);
        if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar7)) {
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x30);
          if (uVar8 != 0) {
            do {
              plVar15 = plVar15 + 2;
              puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x10 + (longlong)plVar15);
              uVar4 = puVar2[1];
              puVar3 = (undefined8 *)((longlong)pvVar7 + -0x10 + (longlong)plVar15);
              *puVar3 = *puVar2;
              puVar3[1] = uVar4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
            pvVar9 = *(void **)(param_1 + 0x28);
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
        }
        *(void **)(param_1 + 0x28) = pvVar7;
        *(uint *)(param_1 + 0x34) = uVar1;
        if (uVar11 < uVar1) goto LAB_143190826;
      }
    }
    else {
LAB_143190848:
      *plVar14 = (longlong)plVar10;
LAB_14319084b:
      if (plVar14 != (longlong *)0x0) {
        FUN_14185b2b0(plVar10,*(undefined8 *)(param_1 + 0x18));
        if (param_4 != '\0') {
          FUN_143190d20(*(undefined8 *)(param_1 + 0x18));
        }
        goto LAB_14319086a;
      }
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
    uVar6 = 0x34;
  }
  else {
    if (plVar10 != (longlong *)*plVar14) {
      FMovieSceneTimeController_Tick::OnStartPlaying();
      (**(code **)(*(longlong *)*plVar14 + 0x10))();
      piVar13 = *(int **)(param_1 + 0x28);
      uVar11 = *(uint *)(param_1 + 0x30);
      piVar12 = piVar13 + (ulonglong)uVar11 * 4;
      for (; (piVar13 != piVar12 && (*piVar13 != param_3)); piVar13 = piVar13 + 4) {
      }
      uVar8 = (ulonglong)uVar11;
      if (piVar13 != piVar12) {
        if (piVar13 < piVar12 + -4) {
          uVar8 = ((ulonglong)((longlong)(piVar12 + -4) + (-1 - (longlong)piVar13)) >> 3 &
                  0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
          piVar12 = piVar13 + 4;
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined8 *)piVar13 = *(undefined8 *)piVar12;
            piVar12 = piVar12 + 2;
            piVar13 = piVar13 + 2;
          }
          uVar11 = *(uint *)(param_1 + 0x30);
        }
        *(uint *)(param_1 + 0x30) = uVar11 - 1;
        uVar8 = (ulonglong)(uVar11 - 1);
      }
      goto LAB_143190750;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      return 1;
    }
LAB_14319086a:
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1431908a0 AddStateGroup body=376 status=ok
// SIG undefined AddStateGroup(void)

undefined8 * CAkStateAware::AddStateGroup(longlong *param_1,int param_2,char param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  cVar2 = (**(code **)(*param_1 + 0x70))();
  if (cVar2 != '\0') {
    lVar5 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar5 != 0) {
      for (puVar6 = *(undefined8 **)(lVar5 + 8); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)puVar6[2]) {
        if (*(int *)(puVar6 + 7) == param_2) {
          return puVar6;
        }
      }
    }
    puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[3] = param_1;
      puVar6[1] = 0;
      *puVar6 = &PTR_TransUpdateValue_145acbb98;
      puVar6[2] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      *(int *)(puVar6 + 7) = param_2;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
      *(undefined1 *)(puVar6 + 8) = 0;
      iVar3 = CAkStateMgr::AddStateGroupMember(DAT_146b50ae8,param_2,puVar6);
      lVar1 = g_DefaultPoolId;
      if (iVar3 == 1) {
        lVar5 = (**(code **)(*param_1 + 0x78))(param_1);
        if (*(longlong *)(lVar5 + 8) == 0) {
          *(undefined8 **)(lVar5 + 8) = puVar6;
          puVar6[2] = 0;
        }
        else {
          puVar6[2] = *(longlong *)(lVar5 + 8);
          *(undefined8 **)(lVar5 + 8) = puVar6;
        }
        uVar4 = CAkStateMgr::GetState(DAT_146b50ae8,param_2);
        *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar4;
        if (param_3 != '\0') {
          FUN_143190d20(param_1);
        }
      }
      else {
        *puVar6 = &PTR_TransUpdateValue_145acbb98;
        if ((void *)puVar6[5] != (void *)0x0) {
          *(undefined4 *)(puVar6 + 6) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar6[5]);
          puVar6[5] = 0;
          *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
        }
        if ((void *)puVar6[4] != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar6[4]);
        }
        puVar6[4] = 0;
        AK::MemoryMgr::Free(lVar1,puVar6);
        puVar6 = (undefined8 *)0x0;
      }
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143190a20 FUN_143190a20 body=146 status=ok
// SIG undefined FUN_143190a20(void)

undefined8 FUN_143190a20(longlong *param_1,int param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
    while (*(int *)(lVar2 + 0x38) != param_2) {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (*(byte *)(lVar2 + 0x40) == 0) {
      *(undefined4 *)(param_3 + 1) = 0;
      FUN_143190530(param_3);
      return 1;
    }
    puVar3 = (uint *)*param_3;
    puVar1 = puVar3 + *(uint *)(param_3 + 1);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      if (*puVar3 == (uint)*(byte *)(lVar2 + 0x40)) {
        return 0;
      }
    }
    FUN_143190530(param_3);
  }
  return 0;
}



// FUNCTION 143190ac0 FlushStateTransitions body=171 status=ok
// SIG undefined FlushStateTransitions(void)

void AkStateGroupChunk::FlushStateTransitions(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  longlong *plVar3;
  ushort *puVar4;
  
  puVar2 = *(ushort **)(param_1 + 0x20);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    puVar4 = puVar2 + 1;
    if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
      plVar3 = (longlong *)(((ulonglong)uVar1 * 2 + 5 & 0xfffffffc) + 8 + (longlong)puVar2);
      do {
        if (*plVar3 != 0) {
          FUN_1431501b0(DAT_146b50af0,*plVar3,param_1);
          *plVar3 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
        }
        puVar4 = puVar4 + 1;
        plVar3 = plVar3 + 2;
      } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
    }
  }
  return;
}



// FUNCTION 143190b70 FlushStateTransitions body=211 status=ok
// SIG undefined FlushStateTransitions(void)

void CAkStateAware::FlushStateTransitions(longlong *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x78))();
  if (lVar3 != 0) {
    for (lVar3 = *(longlong *)(lVar3 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      puVar2 = *(ushort **)(lVar3 + 0x20);
      if (puVar2 != (ushort *)0x0) {
        uVar1 = *puVar2;
        puVar4 = puVar2 + 1;
        if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
          plVar5 = (longlong *)(((ulonglong)uVar1 * 2 + 5 & 0xfffffffc) + 8 + (longlong)puVar2);
          do {
            if (*plVar5 != 0) {
              FUN_1431501b0(DAT_146b50af0,*plVar5,lVar3);
              *plVar5 = 0;
              (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x10))();
            }
            puVar4 = puVar4 + 1;
            plVar5 = plVar5 + 2;
          } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143190c50 GetState body=56 status=ok
// SIG undefined GetState(void)

undefined8 AkStateGroupChunk::GetState(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x28);
  piVar2 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x30) * 4;
  for (; (piVar3 != piVar2 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  piVar1 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar1 = (int *)0x0;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined8 *)piVar1;
}



// FUNCTION 143190c90 HasState body=74 status=ok
// SIG undefined HasState(void)

undefined8 CAkStateAware::HasState(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x78))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143190ce0 IsStateProperty body=64 status=ok
// SIG undefined IsStateProperty(void)

ulonglong CAkStateAware::IsStateProperty(longlong *param_1,short param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (plVar4 != (longlong *)0x0) {
    puVar1 = (uint *)(plVar4 + 1);
    if (*puVar1 != 0) {
      lVar2 = *plVar4;
      plVar3 = (longlong *)0x0;
      do {
        plVar4 = plVar3;
        if (*(short *)(lVar2 + (longlong)plVar4 * 4) == param_2) {
          return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
        }
        uVar5 = (int)plVar4 + 1;
        plVar3 = (longlong *)(ulonglong)uVar5;
      } while (uVar5 < *puVar1);
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 143190d20 FUN_143190d20 body=1012 status=ok
// SIG undefined FUN_143190d20(void)

void FUN_143190d20(longlong *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  short *psVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ushort *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 local_74;
  
  lVar5 = (**(code **)(*param_1 + 0x78))();
  if (lVar5 != 0) {
    for (lVar5 = *(longlong *)(lVar5 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
      piVar6 = *(int **)(lVar5 + 0x28);
      piVar10 = piVar6 + (ulonglong)*(uint *)(lVar5 + 0x30) * 4;
      for (; (piVar6 != piVar10 && (*piVar6 != *(int *)(lVar5 + 0x3c))); piVar6 = piVar6 + 4) {
      }
      plVar8 = (longlong *)(piVar6 + 2);
      if (piVar6 == piVar10) {
        plVar8 = (longlong *)0x0;
      }
      if ((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) {
        AkStateGroupChunk::FlushStateTransitions(lVar5);
        plVar8 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
        if ((plVar8 != (longlong *)0x0) &&
           (puVar14 = (ushort *)*plVar8, puVar14 != puVar14 + (ulonglong)*(uint *)(plVar8 + 1) * 2))
        {
          do {
            if ((char)puVar14[1] == '\x03') {
              uVar18 = 0x3f800000;
            }
            else {
              uVar18 = 0;
            }
            puVar3 = *(ushort **)(lVar5 + 0x20);
            if (puVar3 != (ushort *)0x0) {
              plVar12 = (longlong *)0x0;
              do {
                uVar13 = (int)plVar12 + 1;
                if (puVar3[(longlong)(ulonglong)uVar13] == *puVar14) {
                  puVar9 = (undefined8 *)
                           ((longlong)puVar3 +
                           (longlong)plVar12 * 0x10 +
                           ((ulonglong)((uint)*puVar3 * 2 + 5) & 0xfffffffc));
                  if (puVar9 != (undefined8 *)0x0) goto LAB_143191082;
                  break;
                }
                plVar12 = (longlong *)(ulonglong)uVar13;
              } while (uVar13 < *puVar3);
            }
            puVar9 = (undefined8 *)FUN_143190440(lVar5 + 0x20,*puVar14);
            if (puVar9 != (undefined8 *)0x0) {
LAB_143191082:
              *puVar9 = CONCAT44(local_74,uVar18);
              puVar9[1] = 0;
            }
            puVar14 = puVar14 + 2;
          } while (puVar14 != (ushort *)(*plVar8 + (ulonglong)*(uint *)(plVar8 + 1) * 4));
        }
      }
      else {
        puVar14 = *(ushort **)(*plVar8 + 0x18);
        if (puVar14 != (ushort *)0x0) {
          puVar3 = puVar14 + (ulonglong)*puVar14 + 1;
          puVar16 = (undefined4 *)(((ulonglong)*puVar14 * 2 + 5 & 0xfffffffc) + (longlong)puVar14);
          while (puVar14 = puVar14 + 1, puVar14 != puVar3) {
            uVar17 = 0;
            puVar2 = *(ushort **)(lVar5 + 0x20);
            uVar18 = *puVar16;
            if (puVar2 != (ushort *)0x0) {
              uVar11 = uVar17;
              do {
                uVar13 = (int)uVar11 + 1;
                if (puVar2[uVar13] == *puVar14) {
                  puVar15 = (undefined4 *)
                            ((longlong)puVar2 +
                            uVar11 * 0x10 + ((ulonglong)((uint)*puVar2 * 2 + 5) & 0xfffffffc));
                  if (puVar15 != (undefined4 *)0x0) {
                    if (*(longlong *)(puVar15 + 2) == 0) {
                      *puVar15 = uVar18;
                    }
                    else {
                      CAkTransitionManager::ChangeParameter
                                (DAT_146b50af0,*(longlong *)(puVar15 + 2),*puVar14,uVar18,0,4,0);
                    }
                    goto LAB_143190fa7;
                  }
                  break;
                }
                uVar11 = (ulonglong)uVar13;
              } while (uVar13 < *puVar2);
            }
            uVar1 = *puVar14;
            if (puVar2 != (ushort *)0x0) {
              uVar17 = (ulonglong)*puVar2;
            }
            iVar4 = (int)uVar17;
            uVar13 = iVar4 * 2 + 7;
            psVar7 = AK::MemoryMgr::Malloc
                               (g_DefaultPoolId,
                                (ulonglong)((uVar13 & 0xfffffffc) + (iVar4 + 1) * 0x10));
            if (psVar7 != (short *)0x0) {
              if (*(longlong *)(lVar5 + 0x20) != 0) {
                _guard_xfg_dispatch_icall_nop
                          (psVar7 + 1,(void *)(*(longlong *)(lVar5 + 0x20) + 2),uVar17 * 2);
                _guard_xfg_dispatch_icall_nop
                          ((void *)(((ulonglong)uVar13 & 0xfffffffc) + (longlong)psVar7),
                           (void *)(((ulonglong)(iVar4 * 2 + 5) & 0xfffffffc) +
                                   *(longlong *)(lVar5 + 0x20)),uVar17 << 4);
                AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar5 + 0x20));
              }
              psVar7[iVar4 + 1] = uVar1;
              *psVar7 = (short)uVar17 + 1;
              *(short **)(lVar5 + 0x20) = psVar7;
              puVar15 = (undefined4 *)
                        ((longlong)psVar7 + ((ulonglong)uVar13 & 0xfffffffc) + uVar17 * 0x10);
              if (puVar15 != (undefined4 *)0x0) {
                *puVar15 = uVar18;
                *(undefined8 *)(puVar15 + 2) = 0;
              }
            }
LAB_143190fa7:
            puVar16 = puVar16 + 1;
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



// FUNCTION 143191120 PauseTransitions body=202 status=ok
// SIG undefined PauseTransitions(void)

void CAkStateAware::PauseTransitions(longlong *param_1,char param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x78))();
  if (lVar3 != 0) {
    for (lVar3 = *(longlong *)(lVar3 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      puVar2 = *(ushort **)(lVar3 + 0x20);
      if (puVar2 != (ushort *)0x0) {
        uVar1 = *puVar2;
        puVar4 = puVar2 + 1;
        if (puVar4 != puVar2 + (ulonglong)uVar1 + 1) {
          plVar5 = (longlong *)(((ulonglong)uVar1 * 2 + 5 & 0xfffffffc) + 8 + (longlong)puVar2);
          do {
            if (*plVar5 != 0) {
              if (param_2 == '\0') {
                CAkTransitionManager::Resume(DAT_146b50af0);
              }
              else {
                CAkTransitionManager::Pause();
              }
            }
            puVar4 = puVar4 + 1;
            plVar5 = plVar5 + 2;
          } while (puVar4 != puVar2 + (ulonglong)uVar1 + 1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1431911f0 ReadStateChunk body=641 status=ok
// SIG undefined ReadStateChunk(void)

undefined8 CAkStateAware::ReadStateChunk(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  byte *pbVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  bVar1 = *(byte *)*param_2;
  pbVar14 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar14;
  uVar10 = bVar1 & 0x7f;
  while ((char)bVar1 < '\0') {
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    *param_2 = (longlong)pbVar14;
    uVar10 = bVar1 & 0x7f | uVar10 << 7;
  }
  if (uVar10 != 0) {
    cVar6 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar6 == '\0') {
      return 0x34;
    }
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
    cVar6 = FUN_143191790(plVar7,uVar10);
    if (cVar6 == '\0') {
      return 0x34;
    }
    if (uVar10 != 0) {
      lVar15 = 0;
      uVar16 = (ulonglong)uVar10;
      do {
        bVar1 = *(byte *)*param_2;
        pbVar14 = (byte *)*param_2 + 1;
        *param_2 = (longlong)pbVar14;
        uVar12 = bVar1 & 0x7f;
        while ((char)bVar1 < '\0') {
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          *param_2 = (longlong)pbVar14;
          uVar12 = bVar1 & 0x7f | uVar12 << 7;
        }
        *(ushort *)(lVar15 + *plVar7) = uVar12;
        uVar2 = *(undefined1 *)*param_2;
        *param_2 = (longlong)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(lVar15 + 2 + *plVar7) = uVar2;
        cVar6 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        lVar9 = *plVar7 + lVar15;
        pbVar14 = (byte *)(lVar9 + 3);
        *pbVar14 = *pbVar14 & 0xfe;
        lVar15 = lVar15 + 4;
        pbVar14 = (byte *)(lVar9 + 3);
        *pbVar14 = *pbVar14 | cVar6 != '\0';
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  bVar1 = *(byte *)*param_2;
  pbVar14 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar14;
  uVar10 = bVar1 & 0x7f;
  while ((char)bVar1 < '\0') {
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    *param_2 = (longlong)pbVar14;
    uVar10 = bVar1 & 0x7f | uVar10 << 7;
  }
  if ((uVar10 != 0) && (cVar6 = (**(code **)(*param_1 + 0x70))(param_1), cVar6 == '\0')) {
    return 0x34;
  }
  uVar17 = 0;
  if (uVar10 != 0) {
    do {
      uVar3 = *(undefined4 *)*param_2;
      *param_2 = (longlong)((undefined4 *)*param_2 + 1);
      lVar15 = (**(code **)(*param_1 + 0x58))(param_1,uVar3,1);
      if (lVar15 == 0) {
        return 2;
      }
      uVar2 = *(undefined1 *)*param_2;
      *param_2 = (longlong)((undefined1 *)*param_2 + 1);
      *(undefined1 *)(lVar15 + 0x40) = uVar2;
      bVar1 = *(byte *)*param_2;
      pbVar14 = (byte *)*param_2 + 1;
      *param_2 = (longlong)pbVar14;
      uVar13 = bVar1 & 0x7f;
      while ((char)bVar1 < '\0') {
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        *param_2 = (longlong)pbVar14;
        uVar13 = bVar1 & 0x7f | uVar13 << 7;
      }
      uVar11 = 0;
      if ((uVar13 & 0xffff) != 0) {
        do {
          puVar5 = (undefined4 *)*param_2;
          uVar3 = *puVar5;
          *param_2 = (longlong)(puVar5 + 1);
          uVar4 = puVar5[1];
          *param_2 = (longlong)(puVar5 + 2);
          uVar8 = FUN_143190600(lVar15,uVar4,uVar3,1);
          if ((int)uVar8 != 1) {
            return uVar8;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uVar13 & 0xffff));
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar10);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  (**(code **)(*param_1 + 0x48))(param_1);
  return 1;
}



// FUNCTION 143191480 RemoveState body=212 status=ok
// SIG undefined RemoveState(void)

void AkStateGroupChunk::RemoveState(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x28);
  piVar4 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x30) * 4;
  for (; (piVar5 != piVar4 && (*piVar5 != param_2)); piVar5 = piVar5 + 4) {
  }
  piVar3 = piVar5 + 2;
  if (piVar5 == piVar4) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    FMovieSceneTimeController_Tick::OnStartPlaying(*(undefined8 *)piVar3);
    (**(code **)(**(longlong **)piVar3 + 0x10))();
    piVar5 = *(int **)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x30);
    piVar4 = piVar5 + (ulonglong)uVar2 * 4;
    if (piVar5 != piVar4) {
      do {
        if (*piVar5 == param_2) break;
        piVar5 = piVar5 + 4;
      } while (piVar5 != piVar4);
      if (piVar5 != piVar4) {
        if (piVar5 < piVar4 + -4) {
          uVar1 = ((ulonglong)((longlong)(piVar4 + -4) + (-1 - (longlong)piVar5)) >> 3 &
                  0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
          piVar4 = piVar5 + 4;
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined8 *)piVar5 = *(undefined8 *)piVar4;
            piVar4 = piVar4 + 2;
            piVar5 = piVar5 + 2;
          }
          uVar2 = *(uint *)(param_1 + 0x30);
        }
        *(uint *)(param_1 + 0x30) = uVar2 - 1;
      }
    }
  }
  return;
}



// FUNCTION 143191560 RemoveStateGroup body=285 status=ok
// SIG undefined RemoveStateGroup(void)

void CAkStateAware::RemoveStateGroup(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = (**(code **)(*param_1 + 0x78))();
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(lVar6 + 8);
    puVar4 = (undefined8 *)0x0;
    while (puVar3 = puVar5, puVar3 != (undefined8 *)0x0) {
      if (*(int *)(puVar3 + 7) == param_2) {
        if (puVar3 == *(undefined8 **)(lVar6 + 8)) {
          *(undefined8 *)(lVar6 + 8) = puVar3[2];
        }
        else {
          puVar4[2] = puVar3[2];
        }
        CAkStateMgr::RemoveStateGroupMember(DAT_146b50ae8,param_2,puVar3);
        iVar1 = *(int *)(puVar3 + 6);
        lVar2 = g_DefaultPoolId;
        while (g_DefaultPoolId = lVar2, iVar1 != 0) {
          AkStateGroupChunk::RemoveState(puVar3,*(undefined4 *)puVar3[5]);
          lVar2 = g_DefaultPoolId;
          iVar1 = *(int *)(puVar3 + 6);
        }
        *puVar3 = &PTR_TransUpdateValue_145acbb98;
        if ((void *)puVar3[5] != (void *)0x0) {
          *(undefined4 *)(puVar3 + 6) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar3[5]);
          puVar3[5] = 0;
          *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
        }
        if ((void *)puVar3[4] != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar3[4]);
        }
        puVar3[4] = 0;
        AK::MemoryMgr::Free(lVar2,puVar3);
        if (param_3 == '\0') {
          return;
        }
        FUN_143190d20(param_1);
        return;
      }
      puVar4 = puVar3;
      puVar5 = (undefined8 *)puVar3[2];
    }
  }
  return;
}



// FUNCTION 143191680 RemoveStateGroups body=263 status=ok
// SIG undefined RemoveStateGroups(void)

void CAkStateAware::RemoveStateGroups(longlong *param_1,char param_2)

{
  int iVar1;
  long lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x78))();
  if ((lVar3 != 0) && (puVar4 = *(undefined8 **)(lVar3 + 8), puVar4 != (undefined8 *)0x0)) {
    if (puVar4 == (undefined8 *)0x0) goto LAB_1431916d9;
    do {
      *(undefined8 *)(lVar3 + 8) = puVar4[2];
LAB_1431916d9:
      CAkStateMgr::RemoveStateGroupMember(DAT_146b50ae8,*(undefined4 *)(puVar4 + 7),puVar4);
      iVar1 = *(int *)(puVar4 + 6);
      lVar2 = g_DefaultPoolId;
      while (g_DefaultPoolId = lVar2, iVar1 != 0) {
        AkStateGroupChunk::RemoveState(puVar4,*(undefined4 *)puVar4[5]);
        lVar2 = g_DefaultPoolId;
        iVar1 = *(int *)(puVar4 + 6);
      }
      *puVar4 = &PTR_TransUpdateValue_145acbb98;
      if ((void *)puVar4[5] != (void *)0x0) {
        *(undefined4 *)(puVar4 + 6) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar4[5]);
        puVar4[5] = 0;
        *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
      }
      if ((void *)puVar4[4] != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar4[4]);
      }
      puVar4[4] = 0;
      AK::MemoryMgr::Free(lVar2,puVar4);
      puVar4 = *(undefined8 **)(lVar3 + 8);
    } while (puVar4 != (undefined8 *)0x0);
    if (param_2 != '\0') {
      FUN_143190d20(param_1);
    }
  }
  return;
}



// FUNCTION 143191790 FUN_143191790 body=256 status=ok
// SIG undefined FUN_143191790(void)

undefined8 FUN_143191790(longlong *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar6;
  if (uVar6 <= param_2) {
    if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
      uVar6 = (*(uint *)((longlong)param_1 + 0xc) - uVar6) + param_2;
      puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 << 2);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      puVar5 = (undefined4 *)*param_1;
      if ((puVar5 != (undefined4 *)0x0) && (puVar5 != puVar2)) {
        uVar7 = (ulonglong)*(uint *)(param_1 + 1);
        puVar4 = puVar2;
        if (uVar7 != 0) {
          do {
            if (puVar4 != (undefined4 *)0x0) {
              *(byte *)((longlong)puVar4 + 3) = *(byte *)((longlong)puVar4 + 3) & 0xfe;
              *(undefined2 *)puVar4 = 0xffff;
              *(undefined1 *)((longlong)puVar4 + 2) = 2;
            }
            *puVar4 = *(undefined4 *)((longlong)puVar4 + (*param_1 - (longlong)puVar2));
            uVar7 = uVar7 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar7 != 0);
          puVar5 = (undefined4 *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
      }
      *param_1 = (longlong)puVar2;
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
    }
    for (; uVar3 < param_2; uVar3 = uVar3 + 1) {
      puVar1 = (undefined2 *)(*param_1 + uVar3 * 4);
      if (puVar1 != (undefined2 *)0x0) {
        *(byte *)((longlong)puVar1 + 3) = *(byte *)((longlong)puVar1 + 3) & 0xfe;
        *puVar1 = 0xffff;
        *(undefined1 *)(puVar1 + 1) = 2;
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



// FUNCTION 143191890 SetStateProperties body=309 status=ok
// SIG undefined SetStateProperties(void)

void CAkStateAware::SetStateProperties(longlong *param_1,uint param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  uVar7 = (ulonglong)param_2;
  cVar2 = (**(code **)(*param_1 + 0x70))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x48))(param_1);
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = 0;
    if (*(uint *)(plVar3 + 1) == param_2) {
      if (param_2 != 0) {
        uVar5 = 0;
        do {
          uVar4 = (uint)uVar5;
          if ((*(short *)(*plVar3 + uVar5 * 4) != *(short *)(param_3 + uVar5 * 0xc)) ||
             ((uint)*(byte *)(*plVar3 + 2 + uVar5 * 4) != *(uint *)(param_3 + uVar5 * 0xc + 4)))
          break;
          uVar4 = uVar4 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < param_2);
      }
      if (uVar4 == param_2) {
        return;
      }
    }
    if ((void *)*plVar3 != (void *)0x0) {
      *(undefined4 *)(plVar3 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar3);
      *plVar3 = 0;
      *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
    }
    if (((param_2 != 0) && (cVar2 = FUN_143191790(plVar3,param_2), cVar2 != '\0')) && (param_2 != 0)
       ) {
      uVar5 = 0;
      pcVar6 = (char *)(param_3 + 8);
      do {
        uVar1 = uVar5 + 4;
        *(undefined2 *)(uVar5 + *plVar3) = *(undefined2 *)(pcVar6 + -8);
        *(char *)(*plVar3 + -2 + uVar1) = pcVar6[-4];
        *(byte *)(*plVar3 + -1 + uVar1) = *pcVar6 != '\0' | *(byte *)(*plVar3 + -1 + uVar1) & 0xfe;
        uVar7 = uVar7 - 1;
        uVar5 = uVar1;
        pcVar6 = pcVar6 + 0xc;
      } while (uVar7 != 0);
    }
    if (param_4 != '\0') {
      FUN_143190d20(param_1);
    }
  }
  return;
}



// FUNCTION 1431919d0 TransUpdateValue body=230 status=ok
// SIG undefined TransUpdateValue(void)

void AkStateGroupChunk::TransUpdateValue
               (longlong param_1,uint param_2,undefined4 param_3,char param_4)

{
  ushort *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = *(ushort **)(param_1 + 0x20);
  if (puVar1 != (ushort *)0x0) {
    uVar6 = 0;
    do {
      uVar3 = uVar6 + 1;
      if (puVar1[uVar3] == (ushort)param_2) {
        puVar4 = (undefined4 *)
                 ((longlong)puVar1 +
                 (ulonglong)uVar6 * 0x10 + ((ulonglong)((uint)*puVar1 * 2 + 5) & 0xfffffffc));
        if (puVar4 == (undefined4 *)0x0) goto LAB_143191a15;
        uVar7 = *puVar4;
        goto LAB_143191a4f;
      }
      uVar6 = uVar3;
    } while (uVar3 < *puVar1);
  }
  puVar4 = (undefined4 *)0x0;
LAB_143191a15:
  if ((char)(param_2 >> 0x10) == '\x03') {
    uVar7 = 0x3f800000;
    cVar5 = '\0';
  }
  else {
    uVar7 = 0;
LAB_143191a4f:
    cVar5 = '\0';
    if (((puVar4 != (undefined4 *)0x0) && (*puVar4 = param_3, param_4 != '\0')) &&
       (*(longlong *)(puVar4 + 2) != 0)) {
      *(undefined8 *)(puVar4 + 2) = 0;
      cVar5 = '\x01';
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if ((char)plVar2[1] != '\0') {
    (**(code **)(*plVar2 + 0x40))
              (plVar2,param_2,param_2 >> 0x10 & 0xff,*(undefined4 *)(param_1 + 0x38),uVar7,param_3,
               cVar5);
  }
  if (cVar5 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  return;
}



// FUNCTION 143191ac0 UpdateStateGroups body=774 status=ok
// SIG undefined UpdateStateGroups(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int CAkStateAware::UpdateStateGroups(longlong *param_1,int param_2,longlong param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  byte *pbVar22;
  byte bVar23;
  uint *puVar24;
  int local_res10;
  undefined1 auStack_78 [32];
  byte local_58 [4];
  uint local_54;
  int local_50;
  byte *local_48;
  
  puVar16 = auStack_78;
  cVar7 = (**(code **)(*param_1 + 0x70))();
  if (cVar7 == '\0') {
LAB_143191dad:
    iVar21 = 0x34;
  }
  else {
    local_50 = 1;
    bVar23 = 0;
    lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar19 = 0;
    local_54 = 0;
    lVar12 = *(longlong *)(lVar10 + 8);
    lVar10 = lVar12;
    if (lVar12 != 0) {
      do {
        lVar10 = *(longlong *)(lVar10 + 0x10);
        uVar19 = uVar19 + 1;
      } while (lVar10 != 0);
      local_54 = uVar19;
    }
    uVar19 = local_54;
    local_48 = (byte *)0x0;
    if (local_54 != 0) {
      uVar13 = (ulonglong)local_54;
      uVar15 = uVar13 * 4;
      uVar11 = uVar15 + 0xf;
      if (uVar11 <= uVar15) {
        uVar11 = 0xffffffffffffff0;
      }
      puVar16 = auStack_78 + -(uVar11 & 0xfffffffffffffff0);
      pbVar22 = local_58 + -(uVar11 & 0xfffffffffffffff0);
      if (pbVar22 == (byte *)0x0) goto LAB_143191dad;
      for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x10)) {
        *(undefined4 *)pbVar22 = *(undefined4 *)(lVar12 + 0x38);
        pbVar22 = pbVar22 + 4;
      }
      local_48 = pbVar22 + uVar13 * -4;
    }
    puVar18 = puVar16;
    pbVar22 = local_48;
    iVar21 = 1;
    if (param_2 != 0) {
      puVar24 = (uint *)(param_3 + 4);
      puVar17 = puVar16;
      local_res10 = param_2;
      do {
        uVar11 = 0;
        if (pbVar22 == (byte *)0x0) {
LAB_143191bc9:
          uVar14 = (uint)uVar11;
        }
        else {
          while (uVar14 = (uint)uVar11, uVar14 < uVar19) {
            if (*(uint *)(pbVar22 + uVar11 * 4) == puVar24[-1]) goto LAB_143191bc9;
            uVar11 = (ulonglong)(uVar14 + 1);
          }
        }
        if (uVar14 == uVar19) {
          bVar23 = 1;
          uVar14 = puVar24[-1];
          local_58[0] = 1;
          pcVar5 = *(code **)(*param_1 + 0x58);
          *(undefined8 *)(puVar17 + -8) = 0x143191c2f;
          lVar10 = (*pcVar5)(param_1,uVar14,1);
          if (lVar10 == 0) {
            puVar18 = puVar17;
            iVar21 = 0x34;
            break;
          }
        }
        else {
          local_54 = uVar19 - 1;
          *(undefined4 *)(pbVar22 + uVar11 * 4) =
               *(undefined4 *)(pbVar22 + (ulonglong)(uVar19 - 1) * 4);
          uVar19 = puVar24[-1];
          pcVar5 = *(code **)(*param_1 + 0x78);
          *(undefined8 *)(puVar17 + -8) = 0x143191be8;
          lVar10 = (*pcVar5)();
          if (lVar10 != 0) {
            for (lVar10 = *(longlong *)(lVar10 + 8); lVar10 != 0;
                lVar10 = *(longlong *)(lVar10 + 0x10)) {
              if (*(uint *)(lVar10 + 0x38) == uVar19) goto LAB_143191c06;
            }
          }
          lVar10 = 0;
LAB_143191c06:
          local_58[0] = bVar23 | *(char *)(lVar10 + 0x40) != (char)puVar24[1];
        }
        *(char *)(lVar10 + 0x40) = (char)puVar24[1];
        uVar13 = (ulonglong)*(uint *)(lVar10 + 0x34) * 4;
        uVar11 = uVar13 + 0xf;
        if (uVar11 <= uVar13) {
          uVar11 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar17 + -8) = 0x143191c66;
        lVar6 = -(uVar11 & 0xfffffffffffffff0);
        puVar18 = puVar17 + lVar6;
        lVar12 = *(longlong *)(lVar10 + 0x28);
        uVar11 = 0;
        puVar2 = (undefined4 *)(puVar17 + lVar6 + 0x20);
        puVar20 = puVar2;
        if (lVar12 != (ulonglong)*(uint *)(lVar10 + 0x30) * 0x10 + lVar12) {
          do {
            plVar1 = (longlong *)(lVar12 + 8);
            uVar11 = (ulonglong)((int)uVar11 + 1);
            lVar12 = lVar12 + 0x10;
            *puVar20 = *(undefined4 *)(*plVar1 + 0x10);
            puVar20 = puVar20 + 1;
          } while (lVar12 != (ulonglong)*(uint *)(lVar10 + 0x30) * 0x10 +
                             *(longlong *)(lVar10 + 0x28));
        }
        uVar19 = 0;
        iVar21 = local_50;
        if (*puVar24 != 0) {
          do {
            uVar13 = 0;
            uVar14 = (uint)uVar11;
            if (uVar14 != 0) {
              do {
                if (puVar2[uVar13] == *param_4) break;
                uVar8 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar8;
              } while (uVar8 < uVar14);
            }
            if ((uint)uVar13 == uVar14) {
              iVar9 = param_4[1];
              iVar3 = *param_4;
              local_58[0] = 1;
              *(undefined8 *)(puVar17 + lVar6 + -8) = 0x143191d02;
              iVar9 = FUN_143190600(lVar10,iVar3,iVar9,0);
              if (iVar9 != 1) {
                iVar21 = iVar9;
              }
            }
            else {
              uVar11 = (ulonglong)(uVar14 - 1);
              puVar2[uVar13] = puVar2[uVar11];
            }
            uVar19 = uVar19 + 1;
            param_4 = param_4 + 2;
          } while (uVar19 < *puVar24);
          local_50 = iVar21;
          pbVar22 = local_48;
        }
        bVar23 = local_58[0] | (int)uVar11 != 0;
        if ((int)uVar11 != 0) {
          do {
            *(undefined8 *)(puVar17 + lVar6 + -8) = 0x143191d3a;
            AkStateGroupChunk::RemoveState(lVar10);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar24 = puVar24 + 3;
        local_res10 = local_res10 + -1;
        puVar17 = puVar17 + lVar6;
        uVar19 = local_54;
        iVar21 = local_50;
      } while (local_res10 != 0);
    }
    if (uVar19 != 0) {
      uVar11 = (ulonglong)uVar19;
      do {
        uVar4 = *(undefined4 *)pbVar22;
        pcVar5 = *(code **)(*param_1 + 0x50);
        *(undefined8 *)(puVar18 + -8) = 0x143191d91;
        (*pcVar5)(param_1,uVar4,0);
        pbVar22 = pbVar22 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (bVar23 != 0 || uVar19 != 0) {
      *(undefined8 *)(puVar18 + -8) = 0x143191da9;
      FUN_143190d20(param_1);
    }
  }
  return iVar21;
}



// FUNCTION 143191dd0 UseState body=10 status=ok
// SIG undefined UseState(void)

void CAkStateAware::UseState(longlong *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000143191dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



// FUNCTION 143191de0 UseState body=8 status=ok
// SIG undefined UseState(void)

bool CAkStateAware::UseState(longlong param_1)

{
  return *(char *)(param_1 + 8) != '\0';
}



// FUNCTION 143191df0 Distance body=56 status=ok
// SIG undefined Distance(void)

float AkMath::Distance(float *param_1,float *param_2)

{
  return SQRT((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
              (*param_1 - *param_2) * (*param_1 - *param_2) +
              (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}



// FUNCTION 143191e30 Interpolate body=52 status=ok
// SIG undefined Interpolate(void)

ulonglong AkMath::Interpolate(float param_1,ulonglong param_2,float param_3,ulonglong param_4,
                             float param_5)

{
  if (param_5 <= param_1) {
    return param_2;
  }
  if (param_3 <= param_5) {
    return param_4;
  }
  return (ulonglong)
         (uint)(((param_5 - param_1) / (param_3 - param_1)) * ((float)param_4 - (float)param_2) +
               (float)param_2);
}



// FUNCTION 143191e70 AddedNewModulatorCtx body=108 status=ok
// SIG undefined AddedNewModulatorCtx(void)

int CAkScopedRtpcObj::AddedNewModulatorCtx(undefined4 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 local_res10 [24];
  
  bVar3 = true;
  if (param_2[5] == 0) {
    if ((int)param_2[1] != 0) {
      bVar1 = CAkPlayingMgr::AddedNewModulatorCtx(DAT_146b50b00,(int)param_2[1],param_1);
      return (bVar1 ^ 1) + 1;
    }
    if (*param_2 == 0) goto LAB_143191ecf;
    lVar2 = *param_2 + 8;
  }
  else {
    lVar2 = param_2[5] + 0x198;
  }
  lVar2 = FUN_1431524a0(lVar2,param_1,local_res10);
  bVar3 = lVar2 != 0;
LAB_143191ecf:
  return (bVar3 ^ 1) + 1;
}



// FUNCTION 143191ee0 AddedNewRtpcValue body=108 status=ok
// SIG undefined AddedNewRtpcValue(void)

int CAkScopedRtpcObj::AddedNewRtpcValue(undefined4 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 local_res10 [24];
  
  bVar3 = true;
  if (param_2[5] == 0) {
    if ((int)param_2[1] != 0) {
      bVar1 = CAkPlayingMgr::AddedNewRtpcValue(DAT_146b50b00,(int)param_2[1],param_1);
      return (bVar1 ^ 1) + 1;
    }
    if (*param_2 == 0) goto LAB_143191f3f;
    lVar2 = *param_2 + 0x18;
  }
  else {
    lVar2 = param_2[5] + 0x1a8;
  }
  lVar2 = FUN_1431524a0(lVar2,param_1,local_res10);
  bVar3 = lVar2 != 0;
LAB_143191f3f:
  return (bVar3 ^ 1) + 1;
}



// FUNCTION 143191f50 Term body=242 status=ok
// SIG undefined Term(void)

void CAkScopedRtpcObj::Term(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  puVar1 = puVar2;
  if (puVar2 != puVar2 + *(uint *)(param_1 + 1)) {
    do {
      FUN_14313ad60(DAT_146b50ae0,*puVar1,param_2);
      puVar1 = puVar1 + 1;
      puVar2 = (undefined4 *)*param_1;
    } while (puVar1 != puVar2 + *(uint *)(param_1 + 1));
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  puVar2 = (undefined4 *)param_1[2];
  puVar1 = puVar2;
  if (puVar2 != puVar2 + *(uint *)(param_1 + 3)) {
    do {
      CAkRTPCMgr::RemovedScopedRtpcObj(g_pRTPCMgr,*puVar1,param_2);
      puVar1 = puVar1 + 1;
      puVar2 = (undefined4 *)param_1[2];
    } while (puVar1 != puVar2 + *(uint *)(param_1 + 3));
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 143192050 SetInitialRTPC<CAkLayer> body=465 status=ok
// SIG undefined SetInitialRTPC<CAkLayer>(void)

ulonglong SetInitialRTPC<CAkLayer>(longlong *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  uVar11 = 0;
  uVar5 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  uVar12 = (uint)uVar5;
  if (uVar12 == 0) {
    return 1;
  }
  while( true ) {
    puVar8 = (undefined4 *)*param_1;
    uVar6 = *puVar8;
    *param_1 = (longlong)(puVar8 + 1);
    uVar2 = *(undefined1 *)(puVar8 + 1);
    *param_1 = (longlong)puVar8 + 5;
    uVar3 = *(undefined1 *)((longlong)puVar8 + 5);
    *param_1 = (longlong)puVar8 + 6;
    bVar4 = *(byte *)((longlong)puVar8 + 6);
    pbVar1 = (byte *)((longlong)puVar8 + 7);
    *param_1 = (longlong)pbVar1;
    uVar9 = bVar4 & 0x7f;
    while ((char)bVar4 < '\0') {
      bVar4 = *(byte *)*param_1;
      pbVar1 = (byte *)*param_1 + 1;
      *param_1 = (longlong)pbVar1;
      uVar9 = bVar4 & 0x7f | uVar9 << 7;
    }
    uVar7 = *(undefined4 *)pbVar1;
    *param_1 = (longlong)(pbVar1 + 4);
    bVar4 = pbVar1[4];
    *param_1 = (longlong)(pbVar1 + 5);
    uVar5 = *(ushort *)(pbVar1 + 5);
    *param_1 = (longlong)(pbVar1 + 7);
    local_50 = 0xff;
    *(ulonglong *)(param_3 + 0x28) =
         *(ulonglong *)(param_3 + 0x28) | 1L << ((longlong)(int)uVar9 & 0x3fU);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    local_48 = 0xff;
    uVar10 = FUN_143137d00(g_pRTPCMgr,param_3,uVar6,uVar2,uVar3,uVar9,uVar7,bVar4,pbVar1 + 7,
                           (uint)uVar5,&local_68,4,1);
    if ((int)uVar10 != 1) break;
    uVar11 = uVar11 + 1;
    *param_1 = *param_1 + (ulonglong)uVar5 * 0xc;
    *param_2 = *param_2 + (uint)uVar5 * -0xc;
    if (uVar12 <= uVar11) {
      return uVar10 & 0xffffffff;
    }
  }
  return uVar10;
}



// FUNCTION 143192230 FUN_143192230 body=292 status=ok
// SIG undefined FUN_143192230(void)

undefined8 * FUN_143192230(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_145acbc90;
  uVar1 = param_1[5];
  uVar2 = 0;
  while (uVar1 != 0) {
    if ((uVar1 >> (uVar2 & 0x3f) & 1) != 0) {
      CAkRTPCMgr::UnSubscribeRTPC(g_pRTPCMgr,param_1,uVar2);
      uVar1 = param_1[5] & ~(1L << (uVar2 & 0x3f));
      param_1[5] = uVar1;
    }
    uVar2 = (ulonglong)((int)uVar2 + 1);
  }
  if (*(int *)(param_1 + 7) != 0) {
    FUN_143139160(g_pRTPCMgr,param_1);
  }
  pvVar4 = (void *)param_1[3];
  pvVar3 = pvVar4;
  if (pvVar4 != (void *)((ulonglong)*(uint *)(param_1 + 4) * 0x30 + (longlong)pvVar4)) {
    do {
      FUN_1431940a0((longlong)pvVar3 + 8,param_1);
      pvVar3 = (void *)((longlong)pvVar3 + 0x30);
      pvVar4 = (void *)param_1[3];
    } while (pvVar3 != (void *)((ulonglong)*(uint *)(param_1 + 4) * 0x30 + (longlong)pvVar4));
  }
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  CAkIndexable::~CAkIndexable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143192360 FUN_143192360 body=149 status=ok
// SIG undefined FUN_143192360(void)

undefined8 * FUN_143192360(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
     (cVar3 = FUN_143193070(param_1,1), cVar3 == '\0')) {
    return (undefined8 *)0x0;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)((longlong)puVar1 + 4) = 0x3f800000;
    *(undefined4 *)(puVar1 + 1) = 0x39;
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  return puVar1;
}



// FUNCTION 143192400 FUN_143192400 body=503 status=ok
// SIG undefined FUN_143192400(void)

undefined4 * FUN_143192400(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar4) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar5 == (void *)0x0) {
      return (undefined4 *)0x0;
    }
    pvVar7 = (void *)*param_1;
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
    if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar5)) {
      uVar10 = 0;
      if (3 < uVar8) {
        lVar9 = (uVar8 - 4 >> 2) + 1;
        uVar10 = lVar9 * 4;
        puVar6 = (undefined8 *)((longlong)pvVar5 + 8);
        do {
          puVar2 = puVar6 + -1;
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined4 *)puVar2 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar6 + -4) = 0x7f7fffff;
          }
          *puVar2 = *(undefined8 *)((longlong)puVar6 + *param_1 + (-8 - (longlong)pvVar5));
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)puVar6 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar6 + 4) = 0x7f7fffff;
          }
          puVar2 = puVar6 + 1;
          *puVar6 = *(undefined8 *)((longlong)puVar6 + *param_1 + 8 + (-8 - (longlong)pvVar5));
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined4 *)puVar2 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0x7f7fffff;
          }
          *puVar2 = *(undefined8 *)((longlong)puVar6 + (8 - (longlong)pvVar5) + *param_1);
          puVar2 = puVar6 + 2;
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined4 *)puVar2 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar6 + 0x14) = 0x7f7fffff;
          }
          *puVar2 = *(undefined8 *)((longlong)puVar6 + (0x10 - (longlong)pvVar5) + *param_1);
          lVar9 = lVar9 + -1;
          puVar6 = puVar6 + 4;
        } while (lVar9 != 0);
        pvVar7 = (void *)*param_1;
      }
      if (uVar10 < uVar8) {
        puVar6 = (undefined8 *)((longlong)pvVar5 + uVar10 * 8);
        lVar9 = uVar8 - uVar10;
        do {
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)puVar6 = 0xff7fffff;
            *(undefined4 *)((longlong)puVar6 + 4) = 0x7f7fffff;
          }
          *puVar6 = *(undefined8 *)((longlong)puVar6 + (*param_1 - (longlong)pvVar5));
          puVar6 = puVar6 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pvVar7 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    }
    *param_1 = (longlong)pvVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar4) {
      return (undefined4 *)0x0;
    }
  }
  puVar3 = (undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar3 = 0xff7fffff;
  puVar3[1] = 0x7f7fffff;
  return puVar3;
}



// FUNCTION 143192600 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkLayer::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x140));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x140));
  return iVar2;
}



// FUNCTION 143192650 Create body=196 status=ok
// SIG undefined Create(void)

undefined8 * CAkLayer::Create(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    *puVar4 = &PTR_FUN_145acbc90;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x140);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x168);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x170);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x168) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x168) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x178) = *(int *)(lVar2 + 0x178) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143192720 FUN_143192720 body=155 status=ok
// SIG undefined FUN_143192720(void)

ulonglong FUN_143192720(longlong *param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = (int)param_1[1] + -1;
  iVar3 = 0;
  if (-1 < iVar6) {
    uVar5 = uVar4;
    do {
      iVar3 = (iVar6 - (int)uVar5) / 2 + (int)uVar5;
      bVar1 = *(byte *)(*param_1 + 0x20 + (longlong)iVar3 * 0x28);
      if (param_2 < bVar1) {
        iVar6 = iVar3 + -1;
      }
      else {
        if (param_2 <= bVar1) {
          bVar2 = true;
          uVar5 = *param_1 + (longlong)iVar3 * 0x28;
          goto LAB_1431927a2;
        }
        uVar5 = (ulonglong)(iVar3 + 1);
      }
      iVar3 = (int)uVar5;
    } while (iVar3 <= iVar6);
  }
  bVar2 = false;
  uVar5 = uVar4;
  if (*param_1 != 0) {
    uVar5 = *param_1 + (longlong)iVar3 * 0x28;
  }
LAB_1431927a2:
  if (bVar2) {
    uVar4 = uVar5;
  }
  return uVar4;
}



// FUNCTION 1431927c0 FUN_1431927c0 body=152 status=ok
// SIG undefined FUN_1431927c0(void)

ulonglong FUN_1431927c0(longlong *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = (int)param_1[1] + -1;
  iVar3 = 0;
  if (-1 < iVar6) {
    uVar5 = uVar4;
    do {
      iVar3 = (iVar6 - (int)uVar5) / 2 + (int)uVar5;
      uVar1 = *(uint *)(*param_1 + 0x20 + (longlong)iVar3 * 0x28);
      if (param_2 < uVar1) {
        iVar6 = iVar3 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          bVar2 = true;
          uVar5 = *param_1 + (longlong)iVar3 * 0x28;
          goto LAB_14319283f;
        }
        uVar5 = (ulonglong)(iVar3 + 1);
      }
      iVar3 = (int)uVar5;
    } while (iVar3 <= iVar6);
  }
  bVar2 = false;
  uVar5 = uVar4;
  if (*param_1 != 0) {
    uVar5 = *param_1 + (longlong)iVar3 * 0x28;
  }
LAB_14319283f:
  if (bVar2) {
    uVar4 = uVar5;
  }
  return uVar4;
}



// FUNCTION 143192860 FUN_143192860 body=152 status=ok
// SIG undefined FUN_143192860(void)

ulonglong FUN_143192860(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = (int)param_1[1] + -1;
  iVar3 = 0;
  if (-1 < iVar6) {
    uVar5 = uVar4;
    do {
      iVar3 = (iVar6 - (int)uVar5) / 2 + (int)uVar5;
      uVar1 = *(ulonglong *)(*param_1 + 0x20 + (longlong)iVar3 * 0x28);
      if (param_2 < uVar1) {
        iVar6 = iVar3 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          bVar2 = true;
          uVar5 = *param_1 + (longlong)iVar3 * 0x28;
          goto LAB_1431928df;
        }
        uVar5 = (ulonglong)(iVar3 + 1);
      }
      iVar3 = (int)uVar5;
    } while (iVar3 <= iVar6);
  }
  bVar2 = false;
  uVar5 = uVar4;
  if (*param_1 != 0) {
    uVar5 = *param_1 + (longlong)iVar3 * 0x28;
  }
LAB_1431928df:
  if (bVar2) {
    uVar4 = uVar5;
  }
  return uVar4;
}



// FUNCTION 143192900 FUN_143192900 body=447 status=ok
// SIG undefined FUN_143192900(void)

longlong FUN_143192900(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined7 uStack_47;
  undefined8 uStack_40;
  
  iVar2 = *param_2;
  lVar7 = 0;
  if ((((iVar2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(longlong *)(param_2 + 6) == 0)) goto LAB_143192a7c;
  lVar3 = FUN_1431927c0(param_1 + 0x10,iVar2);
  if (lVar3 == 0) {
    if (iVar2 == 0) goto LAB_143192a7c;
    *param_2 = 0;
    lVar3 = FUN_1431927c0(param_1 + 0x10,0);
    if (lVar3 == 0) goto LAB_143192a7c;
  }
  cVar1 = (char)param_2[2];
  if (((cVar1 == -1) && ((char)param_2[4] == -1)) && (*(longlong *)(param_2 + 6) == 0)) {
LAB_143192a53:
    uStack_40 = 0;
    *(ulonglong *)(param_2 + 4) = CONCAT71(uStack_47,0xff);
    param_2[6] = 0;
    param_2[7] = 0;
    lVar6 = lVar3 + 8;
    if (*(char *)(lVar3 + 0xc) == '\0') {
      lVar6 = lVar7;
    }
  }
  else {
    lVar4 = FUN_143192720(lVar3 + 0x10,cVar1);
    if (lVar4 == 0) {
      if (cVar1 != -1) {
        *(undefined1 *)(param_2 + 2) = 0xff;
        lVar4 = FUN_143192720(lVar3 + 0x10,0xff);
        if (lVar4 != 0) goto LAB_1431929c5;
      }
      goto LAB_143192a53;
    }
LAB_1431929c5:
    cVar1 = (char)param_2[4];
    if ((cVar1 == -1) && (*(longlong *)(param_2 + 6) == 0)) {
LAB_143192a39:
      param_2[6] = 0;
      param_2[7] = 0;
      lVar6 = lVar4 + 8;
      if (*(char *)(lVar4 + 0xc) == '\0') {
        lVar6 = lVar7;
      }
    }
    else {
      lVar5 = FUN_143192720(lVar4 + 0x10,cVar1);
      if (lVar5 == 0) {
        if (cVar1 != -1) {
          *(undefined1 *)(param_2 + 4) = 0xff;
          lVar5 = FUN_143192720(lVar4 + 0x10,0xff);
          if (lVar5 != 0) goto LAB_143192a0d;
        }
        goto LAB_143192a39;
      }
LAB_143192a0d:
      if ((*(longlong *)(param_2 + 6) == 0) || (lVar6 = FUN_143122170(lVar5 + 0x10), lVar6 == 0)) {
        param_2[6] = 0;
        param_2[7] = 0;
        lVar6 = lVar5 + 8;
        if (*(char *)(lVar5 + 0xc) == '\0') {
          lVar6 = lVar7;
        }
        if (lVar6 == 0) goto LAB_143192a39;
      }
    }
    if (lVar6 == 0) goto LAB_143192a53;
  }
  if (lVar6 != 0) {
    return lVar6;
  }
LAB_143192a7c:
  uStack_40 = CONCAT71(uStack_40._1_7_,0xff);
  *(ulonglong *)(param_2 + 2) = CONCAT71(uStack_47,0xff);
  *(undefined8 *)(param_2 + 4) = uStack_40;
  param_2[6] = 0;
  param_2[7] = 0;
  lVar3 = param_1 + 8;
  if (*(char *)(param_1 + 0xc) == '\0') {
    lVar3 = lVar7;
  }
  return lVar3;
}



// FUNCTION 143192ac0 FindBestMatch body=367 status=ok
// SIG undefined FindBestMatch(void)

longlong AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
         ::FindBestMatch(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined7 uStack_37;
  longlong lStack_30;
  
  lVar3 = *param_2;
  if (((((lVar3 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0))
  goto LAB_143192bd1;
  lVar2 = FUN_143192860(param_1 + 0x10,lVar3);
  if (lVar2 == 0) {
    if (lVar3 == 0) goto LAB_143192bd1;
    *param_2 = 0;
    lVar2 = FUN_143192860(param_1 + 0x10,0);
    if (lVar2 == 0) goto LAB_143192bd1;
  }
  iVar1 = (int)param_2[1];
  if (((iVar1 != 0) || ((int)param_2[2] != 0)) ||
     (((char)param_2[3] != -1 || (((char)param_2[4] != -1 || (param_2[5] != 0)))))) {
    lVar3 = FUN_1431927c0(lVar2 + 0x10,iVar1);
    if (lVar3 == 0) {
      if (iVar1 != 0) {
        *(undefined4 *)(param_2 + 1) = 0;
        lVar3 = FUN_1431927c0(lVar2 + 0x10,0);
        if (lVar3 != 0) goto LAB_143192b89;
      }
    }
    else {
LAB_143192b89:
      lVar3 = FUN_143192900(lVar3,param_2 + 2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  uStack_40 = CONCAT31(uStack_40._1_3_,0xff);
  lStack_30 = 0;
  param_2[2] = (ulonglong)uStack_44 << 0x20;
  param_2[3] = CONCAT44(uStack_3c,uStack_40);
  param_2[4] = CONCAT71(uStack_37,0xff);
  param_2[5] = 0;
  lVar3 = lVar2 + 8;
  if (*(char *)(lVar2 + 0xc) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_143192bd1:
  lStack_30 = CONCAT71(lStack_30._1_7_,0xff);
  param_2[1] = (ulonglong)uStack_44 << 0x20;
  param_2[2] = (ulonglong)uStack_3c << 0x20;
  param_2[3] = CONCAT71(uStack_37,0xff);
  param_2[4] = lStack_30;
  param_2[5] = 0;
  lVar3 = param_1 + 8;
  if (*(char *)(param_1 + 0xc) == '\0') {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143192c30 FUN_143192c30 body=860 status=ok
// SIG undefined FUN_143192c30(void)

undefined8
FUN_143192c30(longlong param_1,longlong param_2,float *param_3,uint param_4,longlong *param_5,
             longlong *param_6,longlong param_7)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int *piVar9;
  float *pfVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  undefined1 local_res8 [8];
  undefined4 local_res20 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((param_4 & 1) != 0) {
    uVar5 = *(ulonglong *)(param_1 + 0x28);
    if ((char)uVar5 < '\0') {
      fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1,7,param_6);
      param_3[6] = fVar13 + param_3[6];
      uVar5 = *(ulonglong *)(param_1 + 0x28);
    }
    if ((uVar5 & 1) != 0) {
      fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1,0,param_6);
      *param_3 = fVar13 + *param_3;
    }
  }
  if (((param_4 & 2) != 0) && ((*(byte *)(param_1 + 0x28) & 4) != 0)) {
    fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1,2,param_6);
    param_3[2] = fVar13 + param_3[2];
  }
  if (((param_4 & 4) != 0) && ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
    fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1,3,param_6);
    param_3[3] = fVar13 + param_3[3];
  }
  if (((param_4 & 8) != 0) && ((*(byte *)(param_1 + 0x28) & 0x10) != 0)) {
    fVar13 = (float)FUN_143134160(g_pRTPCMgr,param_1,4,param_6);
    param_3[4] = fVar13 + param_3[4];
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  local_88 = param_1;
  if (uVar2 != 0) {
    piVar6 = *(int **)(param_1 + 0x18);
    piVar9 = piVar6 + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc;
    for (; (piVar6 != piVar9 && (*piVar6 != *(int *)(param_2 + 0x10))); piVar6 = piVar6 + 0xc) {
    }
    if (*(longlong *)(piVar6 + 6) != 0) {
      local_70 = *param_6;
      lStack_68 = param_6[1];
      local_60 = (undefined4)param_6[2];
      uStack_5c = *(undefined4 *)((longlong)param_6 + 0x14);
      uStack_58 = (undefined4)param_6[3];
      uStack_54 = *(undefined4 *)((longlong)param_6 + 0x1c);
      local_50 = (undefined4)param_6[4];
      uStack_4c = *(undefined4 *)((longlong)param_6 + 0x24);
      uStack_48 = (undefined4)param_6[5];
      uStack_44 = *(undefined4 *)((longlong)param_6 + 0x2c);
      if (*(uint *)(g_pRTPCMgr + 8) != 0) {
        for (puVar3 = *(uint **)(*(longlong *)g_pRTPCMgr +
                                ((ulonglong)uVar2 % (ulonglong)*(uint *)(g_pRTPCMgr + 8)) * 8);
            puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
          if (*puVar3 == uVar2) {
            if (puVar3 != (uint *)0x0) {
              puVar7 = (undefined4 *)
                       AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
                       ::FindBestMatch(puVar3 + 8,&local_70);
              if (puVar7 == (undefined4 *)0x0) goto LAB_143192df7;
              local_res20[0] = *puVar7;
              goto LAB_143192e47;
            }
            break;
          }
        }
      }
      cVar4 = CurrentValue::GetModulatorValue(uVar2,&local_70,local_res20);
      if (cVar4 == '\0') {
LAB_143192df7:
        bVar12 = false;
        local_res20[0] = CAkRTPCMgr::GetDefaultValue(g_pRTPCMgr,*(undefined4 *)(param_1 + 0x38),0);
      }
      else {
LAB_143192e47:
        bVar12 = local_70 != 0;
      }
      fVar13 = (float)FUN_143131860(piVar6 + 6,local_res20[0],0,local_res8);
      if ((fVar13 != 1.0) || (bVar12 != false)) {
        uVar11 = bVar12 ^ 1 | (uint)uStack_80 & 0xfffffffc;
        plVar8 = (longlong *)*param_5;
        uVar2 = *(uint *)(param_5 + 1);
        plVar1 = plVar8 + (ulonglong)uVar2 * 3;
        while ((plVar8 != plVar1 &&
               ((*plVar8 != param_1 || (((*(uint *)(plVar8 + 1) ^ uVar11) & 1) != 0))))) {
          plVar8 = plVar8 + 3;
        }
        pfVar10 = (float *)(plVar8 + 2);
        if (plVar8 == plVar1) {
          pfVar10 = (float *)0x0;
        }
        if (pfVar10 == (float *)0x0) {
          uStack_80._0_4_ = uVar11;
          if ((uVar2 < *(uint *)((longlong)param_5 + 0xc)) ||
             ((cVar4 = FUN_143147540(param_5,1), cVar4 != '\0' &&
              (uVar2 < *(uint *)((longlong)param_5 + 0xc))))) {
            uVar2 = *(uint *)(param_5 + 1);
            *(uint *)(param_5 + 1) = uVar2 + 1;
            puVar7 = (undefined4 *)(*param_5 + (ulonglong)uVar2 * 0x18);
            if (puVar7 != (undefined4 *)0x0) {
              puVar7[4] = fVar13;
              *puVar7 = (undefined4)local_88;
              puVar7[1] = local_88._4_4_;
              puVar7[2] = (uint)uStack_80;
              puVar7[3] = uStack_80._4_4_;
            }
          }
        }
        else {
          *pfVar10 = fVar13;
        }
      }
    }
  }
  if (param_7 != 0) {
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    local_78 = 4;
    local_88 = param_1;
    FUN_14313a450(DAT_146b50ae0,&local_88);
  }
  return 1;
}



// FUNCTION 143192f90 FUN_143192f90 body=223 status=ok
// SIG undefined FUN_143192f90(void)

undefined8 FUN_143192f90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    local_18 = 0;
    local_14 = 0x3f800000;
    local_10 = 0x39;
    cVar1 = FUN_14313a5d0(DAT_146b50ae0,param_1,0,param_3,param_4,&local_18);
    if (cVar1 != '\0') {
      FUN_143192360(param_2,&local_18);
    }
  }
  if ((*(byte *)(param_1 + 0x28) & 0x80) != 0) {
    local_18 = 0;
    local_14 = 0x3f800000;
    local_10 = 0x39;
    cVar1 = FUN_14313a5d0(DAT_146b50ae0,param_1,7,param_3,param_4,&local_18);
    if (cVar1 != '\0') {
      FUN_143192360(param_2,&local_18);
    }
  }
  return 1;
}



// FUNCTION 143193070 FUN_143193070 body=506 status=ok
// SIG undefined FUN_143193070(void)

undefined8 FUN_143193070(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar10 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar10 * 0xc);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar9 = 0;
    if (3 < uVar6) {
      lVar7 = -(longlong)pvVar2;
      lVar8 = (uVar6 - 4 >> 2) + 1;
      uVar9 = lVar8 * 4;
      puVar3 = (undefined4 *)((longlong)pvVar2 + 8);
      do {
        puVar5 = (undefined8 *)(puVar3 + -2);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)puVar5 = 0;
          puVar3[-1] = 0x3f800000;
          *puVar3 = 0x39;
        }
        lVar1 = *param_1;
        *puVar5 = *(undefined8 *)((longlong)puVar3 + lVar1 + lVar7 + -8);
        *puVar3 = *(undefined4 *)((longlong)puVar3 + lVar1 + lVar7);
        puVar5 = (undefined8 *)(puVar3 + 1);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)puVar5 = 0;
          puVar3[2] = 0x3f800000;
          puVar3[3] = 0x39;
        }
        lVar1 = *param_1;
        *puVar5 = *(undefined8 *)((longlong)puVar3 + lVar1 + lVar7 + 4);
        puVar5 = (undefined8 *)(puVar3 + 4);
        puVar3[3] = *(undefined4 *)((longlong)puVar3 + lVar1 + lVar7 + 0xc);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)puVar5 = 0;
          puVar3[5] = 0x3f800000;
          puVar3[6] = 0x39;
        }
        lVar1 = *param_1;
        *puVar5 = *(undefined8 *)((longlong)puVar3 + (0x10 - (longlong)pvVar2) + lVar1);
        puVar3[6] = *(undefined4 *)((longlong)puVar3 + (0x10 - (longlong)pvVar2) + lVar1 + 8);
        puVar5 = (undefined8 *)(puVar3 + 7);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)puVar5 = 0;
          puVar3[8] = 0x3f800000;
          puVar3[9] = 0x39;
        }
        lVar1 = *param_1;
        *puVar5 = *(undefined8 *)((longlong)puVar3 + lVar1 + -(longlong)pvVar2 + 0x1c);
        puVar3[9] = *(undefined4 *)((longlong)puVar3 + lVar1 + -(longlong)pvVar2 + 0x24);
        lVar8 = lVar8 + -1;
        puVar3 = puVar3 + 0xc;
      } while (lVar8 != 0);
      pvVar4 = (void *)*param_1;
    }
    if (uVar9 < uVar6) {
      lVar7 = uVar6 - uVar9;
      puVar5 = (undefined8 *)((longlong)pvVar2 + uVar9 * 0xc);
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)puVar5 = 0;
          *(undefined4 *)((longlong)puVar5 + 4) = 0x3f800000;
          *(undefined4 *)(puVar5 + 1) = 0x39;
        }
        lVar8 = *param_1;
        *puVar5 = *(undefined8 *)((longlong)puVar5 + (lVar8 - (longlong)pvVar2));
        *(undefined4 *)(puVar5 + 1) =
             *(undefined4 *)((longlong)puVar5 + lVar8 + (8 - (longlong)pvVar2));
        puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar10;
  return 1;
}



// FUNCTION 143193270 FUN_143193270 body=58 status=ok
// SIG undefined FUN_143193270(void)

ulonglong FUN_143193270(longlong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(param_1 + 0x20);
  if ((pfVar2 != (float *)0x0) && (pfVar1 = pfVar2 + 2, *pfVar1 != 0.0)) {
    pfVar2 = *(float **)pfVar2;
    pfVar1 = pfVar2 + (ulonglong)(uint)*pfVar1 * 2;
    while( true ) {
      if (pfVar2 == pfVar1) {
        return CONCAT71((int7)((ulonglong)pfVar2 >> 8),1);
      }
      if ((*pfVar2 <= param_2) && (param_2 < pfVar2[1] || param_2 == pfVar2[1])) break;
      pfVar2 = pfVar2 + 2;
    }
  }
  return (ulonglong)pfVar2 & 0xffffffffffffff00;
}



// FUNCTION 1431932b0 FUN_1431932b0 body=60 status=ok
// SIG undefined FUN_1431932b0(void)

longlong FUN_1431932b0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar3;
  longlong lVar2;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar2;
  while( true ) {
    uVar3 = (uint7)((ulonglong)lVar2 >> 8);
    if (lVar2 == lVar4) {
      return (ulonglong)uVar3 << 8;
    }
    if (((*(longlong *)(lVar2 + 0x10) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x78), lVar1 != 0)) &&
       (0 < *(short *)(lVar1 + 0x50))) break;
    lVar2 = lVar2 + 0x30;
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 1431932f0 FUN_1431932f0 body=1205 status=ok
// SIG undefined FUN_1431932f0(void)

void FUN_1431932f0(longlong param_1,longlong *param_2,float param_3,float param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  char cVar18;
  char cVar19;
  byte local_248 [8];
  undefined4 local_240;
  undefined4 local_23c;
  char local_238;
  undefined4 local_230 [2];
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_214;
  undefined2 local_210;
  undefined1 local_20e;
  undefined2 local_20d;
  undefined8 local_208;
  longlong local_200;
  uint local_1f8;
  longlong local_1f0;
  float local_1e8;
  undefined1 local_1e0;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 *local_1c0;
  int *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  char local_140 [3];
  char local_13d;
  undefined1 local_130 [224];
  byte local_50;
  
  if (*(uint *)(param_1 + 0x20) != 0) {
    lVar16 = *(longlong *)(param_1 + 0x18);
    local_1f8 = (uint)(*param_2 == 0) | local_1f8 & 0xfffffffc;
    local_200 = param_1;
    local_1e8 = param_4;
    if (lVar16 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar16) {
      do {
        if (*(longlong *)(lVar16 + 0x10) != 0) {
          if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x108) != '\0') {
            puVar4 = *(undefined8 **)(lVar16 + 0x28);
            if ((puVar4 == (undefined8 *)0x0) || (*(uint *)(puVar4 + 1) == 0)) {
LAB_1431933d1:
              cVar19 = '\0';
            }
            else {
              pfVar13 = (float *)*puVar4;
              pfVar2 = pfVar13 + (ulonglong)*(uint *)(puVar4 + 1) * 2;
              for (; pfVar13 != pfVar2; pfVar13 = pfVar13 + 2) {
                if ((*pfVar13 <= param_3) && (param_3 < pfVar13[1] || param_3 == pfVar13[1]))
                goto LAB_1431933d1;
              }
              cVar19 = '\x01';
            }
            if ((puVar4 == (undefined8 *)0x0) || (*(uint *)(puVar4 + 1) == 0)) {
LAB_143193409:
              cVar18 = '\0';
            }
            else {
              pfVar13 = (float *)*puVar4;
              pfVar2 = pfVar13 + (ulonglong)*(uint *)(puVar4 + 1) * 2;
              for (; pfVar13 != pfVar2; pfVar13 = pfVar13 + 2) {
                if ((*pfVar13 <= param_4) && (param_4 < pfVar13[1] || param_4 == pfVar13[1]))
                goto LAB_143193409;
              }
              cVar18 = '\x01';
            }
            if (cVar19 != cVar18) {
              for (puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + 0x100);
                  puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
                if ((((((*param_2 == 0) || (puVar4[1] == *param_2)) &&
                      (((int)param_2[1] == 0 || (*(int *)(puVar4 + 2) == (int)param_2[1])))) &&
                     (((int)param_2[2] == 0 || (*(int *)(puVar4 + 3) == (int)param_2[2])))) &&
                    (((char)param_2[3] == -1 || (*(char *)(puVar4 + 4) == (char)param_2[3])))) &&
                   (((((char)param_2[4] == -1 || (*(char *)(puVar4 + 5) == (char)param_2[4])) &&
                     ((param_2[5] == 0 || (puVar4[6] == param_2[5])))) &&
                    ((param_5 == (undefined8 *)0x0 ||
                     (cVar8 = (**(code **)*param_5)(), cVar8 == '\0')))))) {
                  iVar12 = 0;
                  iVar17 = *(int *)(puVar4 + 0xc) + -1;
                  if (-1 < iVar17) {
                    do {
                      iVar10 = (iVar17 - iVar12) / 2 + iVar12;
                      uVar3 = *(uint *)(puVar4[0xb] + (longlong)iVar10 * 8);
                      lVar15 = puVar4[0xb] + (longlong)iVar10 * 8;
                      if (*(uint *)(lVar16 + 8) < uVar3) {
                        iVar17 = iVar10 + -1;
                      }
                      else {
                        if (*(uint *)(lVar16 + 8) <= uVar3) {
                          bVar6 = true;
                          goto LAB_14319350a;
                        }
                        iVar12 = iVar10 + 1;
                      }
                    } while (iVar12 <= iVar17);
                  }
                  bVar6 = false;
                  if (puVar4[0xb] == 0) {
                    lVar15 = 0;
                  }
                  else {
                    lVar15 = puVar4[0xb] + (longlong)iVar12 * 8;
                  }
LAB_14319350a:
                  lVar14 = 0;
                  if (bVar6) {
                    lVar14 = lVar15;
                  }
                  if (lVar14 != 0) {
                    if (cVar19 == '\0') {
                      if ((cVar18 != '\0') &&
                         (*(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1, *(int *)(lVar14 + 4) == 1
                         )) {
                        local_228 = puVar4[1];
                        local_220 = *(undefined4 *)(puVar4 + 2);
                        local_214 = 0;
                        local_20d = 0;
                        local_208 = 0;
                        local_210 = 0;
                        local_20e = 0;
                        local_230[0] = 0;
                        local_218 = 4;
                        local_21c = 0;
                        (**(code **)(**(longlong **)(lVar16 + 0x10) + 0x90))
                                  (*(longlong **)(lVar16 + 0x10),local_230);
                        FUN_143140ce0(DAT_146b50b78,*(undefined8 *)(lVar16 + 0x10),puVar4[1],
                                      *(undefined4 *)(puVar4 + 2));
                      }
                    }
                    else if (cVar18 == '\0') {
                      piVar1 = (int *)(lVar14 + 4);
                      *piVar1 = *piVar1 + -1;
                      if (*piVar1 == 0) {
                        local_23c = 4;
                        local_240 = 0;
                        local_238 = cVar18;
                        FUN_14313bbf0(local_1d8);
                        local_1d0 = *(undefined8 *)(param_1 + 0x30);
                        local_50 = local_50 | 2;
                        piVar1 = (int *)puVar4[7];
                        local_1c8 = puVar4[1];
                        local_1c0 = &local_240;
                        local_1a4 = *(undefined4 *)((longlong)puVar4 + 0x4c);
                        local_1b0 = puVar4[8];
                        local_1a8 = *(undefined4 *)(puVar4 + 9);
                        local_1d8[0] = 0;
                        if (local_1b8 != (int *)0x0) {
                          AkExternalSourceArray::Release();
                        }
                        uVar7 = local_1a4;
                        if (piVar1 != (int *)0x0) {
                          *piVar1 = *piVar1 + 1;
                        }
                        local_158 = *(undefined4 *)(puVar4 + 10);
                        plVar5 = *(longlong **)(lVar16 + 0x10);
                        bVar9 = local_50 | 8;
                        local_154 = 0;
                        local_150 = 0;
                        local_148 = 0;
                        local_1b8 = piVar1;
                        if ((local_140[0] == -0x70) && (local_13d != '\0')) {
                          local_248[0] = local_50 & 1;
                          local_50 = bVar9;
                          uVar11 = AkPBIParams::GetMidiTargetID(local_1d8);
                          iVar12 = CAkParameterNode::FilterAndTransformMidiEvent
                                             (plVar5,local_140,uVar11,local_248,local_1c8,uVar7);
                          if (iVar12 == 1) {
                            bVar9 = local_50 ^ (local_248[0] ^ local_50) & 1;
                            goto LAB_14319362e;
                          }
                        }
                        else {
LAB_14319362e:
                          local_50 = bVar9;
                          iVar12 = FUN_1431a35f0(plVar5);
                          if (iVar12 == 1) {
                            (**(code **)(*plVar5 + 0x238))(plVar5);
                          }
                        }
                        AkInitialSoundParams::DoTerm(local_130);
                        if (local_1b8 != (int *)0x0) {
                          AkExternalSourceArray::Release();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          lVar15 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x78);
          if ((lVar15 != 0) && (0 < *(short *)(lVar15 + 0x50))) {
            local_1e0 = 0;
            local_1f0 = lVar16 + 0x18;
            (**(code **)(**(longlong **)(lVar16 + 0x10) + 0xf0))
                      (*(longlong **)(lVar16 + 0x10),_LayerMuteFunc,param_2,&local_200);
          }
        }
        lVar16 = lVar16 + 0x30;
      } while (lVar16 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18)
              );
    }
  }
  return;
}



// FUNCTION 1431937b0 FUN_1431937b0 body=126 status=ok
// SIG undefined FUN_1431937b0(void)

void FUN_1431937b0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar2) {
    do {
      plVar1 = *(longlong **)(lVar2 + 0x10);
      if (((plVar1 != (longlong *)0x0) && (plVar1[0xf] != 0)) &&
         (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 400))(plVar1,param_2);
      }
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 143193830 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkLayer::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x140));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x140);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x170) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x168) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x170)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x178) = *(int *)(lVar9 + 0x178) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x140));
  return uVar3;
}



// FUNCTION 143193920 FUN_143193920 body=388 status=ok
// SIG undefined FUN_143193920(void)

int * FUN_143193920(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  void *pvVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  
  piVar10 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  piVar13 = piVar10 + (ulonglong)uVar4 * 0xc;
  for (; (piVar10 != piVar13 && (*piVar10 != param_2)); piVar10 = piVar10 + 0xc) {
  }
  piVar9 = (int *)0x0;
  piVar12 = piVar10 + 2;
  if (piVar10 == piVar13) {
    piVar12 = piVar9;
  }
  if (piVar12 != (int *)0x0) {
    return piVar12;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar4) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x30);
    if (pvVar7 == (void *)0x0) {
      return (int *)0x0;
    }
    pvVar11 = (void *)*param_1;
    if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar7)) {
      uVar14 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar14 != 0) {
        lVar8 = (longlong)pvVar7 + 0x24;
        do {
          if ((undefined8 *)(lVar8 + -0x24) != (undefined8 *)0x0) {
            *(undefined4 *)(lVar8 + -0x1c) = 0;
            *(undefined8 *)(lVar8 + -0x14) = 0;
            *(undefined8 *)(lVar8 + -0xc) = 0;
            *(undefined8 *)(lVar8 + -4) = 0;
            *(undefined8 *)(lVar8 + 4) = 0;
          }
          lVar5 = *param_1;
          lVar2 = (-0x24 - (longlong)pvVar7) + lVar8;
          uVar6 = ((undefined8 *)(lVar2 + lVar5))[1];
          *(undefined8 *)(lVar8 + -0x24) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar8 + -0x1c) = uVar6;
          puVar3 = (undefined8 *)(lVar2 + 0x10 + lVar5);
          uVar6 = puVar3[1];
          *(undefined8 *)(lVar8 + -0x14) = *puVar3;
          *(undefined8 *)(lVar8 + -0xc) = uVar6;
          puVar3 = (undefined8 *)(lVar2 + 0x20 + lVar5);
          uVar6 = puVar3[1];
          *(undefined8 *)(lVar8 + -4) = *puVar3;
          *(undefined8 *)(lVar8 + 4) = uVar6;
          uVar14 = uVar14 - 1;
          lVar8 = lVar8 + 0x30;
        } while (uVar14 != 0);
        pvVar11 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
    }
    *param_1 = (longlong)pvVar7;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    piVar10 = piVar9;
    if (uVar1 <= uVar4) goto LAB_143193a83;
  }
  uVar4 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar4 + 1;
  piVar10 = (int *)((ulonglong)uVar4 * 0x30 + *param_1);
  if (piVar10 != (int *)0x0) {
    piVar10[2] = 0;
    piVar10[4] = 0;
    piVar10[5] = 0;
    piVar10[6] = 0;
    piVar10[7] = 0;
    piVar10[8] = 0;
    piVar10[9] = 0;
    piVar10[10] = 0;
    piVar10[0xb] = 0;
  }
LAB_143193a83:
  if (piVar10 != (int *)0x0) {
    *piVar10 = param_2;
    piVar9 = piVar10 + 2;
  }
  return piVar9;
}



// FUNCTION 143193ab0 FUN_143193ab0 body=741 status=ok
// SIG undefined FUN_143193ab0(void)

ulonglong FUN_143193ab0(longlong param_1,int param_2,void *param_3,uint param_4)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  void *pvVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined4 uVar16;
  
  piVar6 = *(int **)(param_1 + 0x18);
  piVar15 = piVar6 + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc;
  for (; (piVar6 != piVar15 && (*piVar6 != param_2)); piVar6 = piVar6 + 0xc) {
  }
  if (piVar6 == (int *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18))
     ) {
    piVar6 = (int *)FUN_143193920(param_1 + 0x18,param_2);
    if (piVar6 == (int *)0x0) {
      return 0x34;
    }
    *piVar6 = param_2;
    uVar7 = CAkLayer::CAssociatedChildData::UpdateChildPtr(piVar6,param_1);
    if ((int)uVar7 != 1) {
      piVar6 = *(int **)(param_1 + 0x18);
      piVar15 = piVar6 + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc;
      if (piVar6 == piVar15) {
        return uVar7;
      }
      do {
        if (*piVar6 == param_2) break;
        piVar6 = piVar6 + 0xc;
      } while (piVar6 != piVar15);
      if (piVar6 == piVar15) {
        return uVar7;
      }
      if (piVar6 < piVar15 + -0xc) {
        lVar11 = (((ulonglong)((longlong)(piVar15 + -0xc) + (-1 - (longlong)piVar6)) / 0x30 + 1) * 3
                 & 0xfffffffffffffff) << 1;
        piVar15 = piVar6 + 0xc;
        for (; lVar11 != 0; lVar11 = lVar11 + -1) {
          *(undefined8 *)piVar6 = *(undefined8 *)piVar15;
          piVar15 = piVar15 + 2;
          piVar6 = piVar6 + 2;
        }
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      return uVar7 & 0xffffffff;
    }
  }
  else {
    piVar6 = piVar6 + 2;
  }
  pvVar5 = *(void **)(piVar6 + 4);
  puVar14 = (undefined8 *)0x0;
  if (param_4 == 0) {
    if (pvVar5 != (void *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
      piVar6[4] = 0;
      piVar6[5] = 0;
    }
    piVar6[6] = 0;
    piVar6[7] = 0;
  }
  else {
    if (pvVar5 != (void *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
      piVar6[4] = 0;
      piVar6[5] = 0;
    }
    piVar6[6] = 0;
    piVar6[7] = 0;
    if (param_3 != (void *)0x0) {
      pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_4 * 0xc);
      *(void **)(piVar6 + 4) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        piVar6[6] = 0;
      }
      else {
        _guard_xfg_dispatch_icall_nop(pvVar5,param_3,(ulonglong)(param_4 * 0xc));
        piVar6[6] = param_4;
        piVar6[7] = 0;
      }
    }
  }
  uVar12 = 1;
  if (*(longlong *)(piVar6 + 8) != 0) {
    *(undefined4 *)(*(longlong *)(piVar6 + 8) + 8) = 0;
  }
  if (1 < (uint)piVar6[6]) {
    if (*(longlong *)(piVar6 + 8) == 0) {
      puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
      puVar9 = puVar14;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar9 = puVar8;
      }
      *(undefined8 **)(piVar6 + 8) = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
        uVar12 = 0x34;
        goto LAB_143193d5c;
      }
    }
    bVar4 = false;
    uVar16 = 0xff7fffff;
    if (piVar6[6] != 0) {
      do {
        lVar11 = *(longlong *)(piVar6 + 4);
        fVar1 = *(float *)(lVar11 + 4 + (longlong)puVar14 * 0xc);
        if (bVar4) {
          if (fVar1 <= 0.0) {
            uVar2 = *(undefined4 *)(lVar11 + (longlong)puVar14 * 0xc);
            bVar4 = false;
            puVar10 = (undefined4 *)FUN_143192400(*(undefined8 *)(piVar6 + 8));
            if (puVar10 == (undefined4 *)0x0) goto LAB_143193d47;
            *puVar10 = uVar16;
            puVar10[1] = uVar2;
          }
        }
        else if ((0.0 < fVar1) || (*(int *)(lVar11 + 8 + (longlong)puVar14 * 0xc) != 9)) {
          uVar16 = *(undefined4 *)(lVar11 + (longlong)puVar14 * 0xc);
          bVar4 = true;
        }
        uVar13 = (int)puVar14 + 1;
        puVar14 = (undefined8 *)(ulonglong)uVar13;
      } while (uVar13 < (uint)piVar6[6]);
      if (bVar4) {
        uVar2 = *(undefined4 *)(*(longlong *)(piVar6 + 4) + (ulonglong)(piVar6[6] - 1) * 0xc);
        puVar10 = (undefined4 *)FUN_143192400(*(undefined8 *)(piVar6 + 8));
        if (puVar10 == (undefined4 *)0x0) {
LAB_143193d47:
          uVar12 = 0x34;
        }
        else {
          *puVar10 = uVar16;
          puVar10[1] = uVar2;
        }
      }
    }
  }
LAB_143193d5c:
  plVar3 = *(longlong **)(piVar6 + 2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 400))(plVar3,0);
  }
  return (ulonglong)uVar12;
}



// FUNCTION 143193da0 FUN_143193da0 body=352 status=ok
// SIG undefined FUN_143193da0(void)

ulonglong FUN_143193da0(longlong param_1,longlong *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  
  *param_2 = *param_2 + 4;
  uVar7 = SetInitialRTPC<CAkLayer>(param_2,param_3,param_1,1);
  if ((int)uVar7 == 1) {
    piVar4 = (int *)*param_2;
    uVar6 = 1;
    uVar9 = 0;
    iVar2 = *piVar4;
    *param_2 = (longlong)(piVar4 + 1);
    bVar1 = *(byte *)(piVar4 + 1);
    *param_2 = (longlong)piVar4 + 5;
    if (*(int *)(param_1 + 0x38) != iVar2) {
      if (*(int *)(param_1 + 0x38) != 0) {
        FUN_143139160(g_pRTPCMgr,param_1);
      }
      *(int *)(param_1 + 0x38) = iVar2;
      uVar10 = (uint)bVar1;
      *(uint *)(param_1 + 0x3c) = uVar10;
      uVar6 = 1;
      if ((iVar2 != 0) &&
         (uVar6 = CAkRTPCMgr::RegisterLayer(g_pRTPCMgr,param_1,iVar2,uVar10), uVar6 != 1)) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      FUN_1431937b0(param_1,0);
    }
    if (uVar6 == 1) {
      uVar10 = *(uint *)*param_2;
      *param_2 = (longlong)((uint *)*param_2 + 1);
      if (uVar10 != 0) {
        pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar10 * 0x30);
        *(void **)(param_1 + 0x18) = pvVar8;
        if (pvVar8 == (void *)0x0) {
          return 0x34;
        }
        *(uint *)(param_1 + 0x24) = uVar10;
        if (uVar10 != 0) {
          do {
            puVar5 = (undefined4 *)*param_2;
            uVar3 = *puVar5;
            *param_2 = (longlong)(puVar5 + 1);
            uVar6 = puVar5[1];
            *param_2 = (longlong)(puVar5 + 2);
            uVar7 = FUN_143193ab0(param_1,uVar3,puVar5 + 2,uVar6);
            if ((int)uVar7 != 1) {
              return uVar7;
            }
            uVar9 = uVar9 + 1;
            *param_2 = *param_2 + (ulonglong)uVar6 * 0xc;
            *param_3 = *param_3 + uVar6 * -0xc;
          } while (uVar9 < uVar10);
          return uVar7;
        }
        return 1;
      }
    }
    uVar7 = (ulonglong)uVar6;
  }
  return uVar7;
}



// FUNCTION 143193f00 FUN_143193f00 body=207 status=ok
// SIG undefined FUN_143193f00(void)

void FUN_143193f00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x18),
     lVar1 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar1)) {
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FUN_1431a1610(*(longlong *)(lVar1 + 0x10),param_1);
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18));
  }
  *(longlong *)(param_1 + 0x30) = param_2;
  if ((param_2 != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x18),
     lVar1 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar1)) {
    do {
      CAkLayer::CAssociatedChildData::UpdateChildPtr(lVar1 + 8,param_1);
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 143193fd0 FUN_143193fd0 body=199 status=ok
// SIG undefined FUN_143193fd0(void)

undefined8
FUN_143193fd0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             float param_5,float param_6,undefined8 *param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined8 local_18;
  float local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_20 = 0;
  local_50 = *param_7;
  uStack_48 = param_7[1];
  local_40 = param_7[2];
  uStack_38 = param_7[3];
  local_30 = *(undefined4 *)(param_7 + 4);
  uStack_2c = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_28 = *(undefined4 *)(param_7 + 5);
  uStack_24 = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_18 = param_8;
  local_10 = param_5 - param_6;
  local_58[0] = param_3;
  if (lVar2 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar2) {
    do {
      plVar1 = *(longlong **)(lVar2 + 0x10);
      if (((plVar1 != (longlong *)0x0) && (plVar1[0xf] != 0)) &&
         (0 < *(short *)(plVar1[0xf] + 0x50))) {
        (**(code **)(*plVar1 + 0xb8))(plVar1,local_58);
      }
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 1431940a0 FUN_1431940a0 body=167 status=ok
// SIG undefined FUN_1431940a0(void)

undefined4 FUN_1431940a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 1;
  if (*(longlong *)(param_1 + 2) != 0) {
    uVar1 = FUN_1431a1610();
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
  }
  *(undefined8 *)(param_1 + 6) = 0;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    if ((void *)*puVar2 != (void *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar2);
      *puVar2 = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    if (puVar2 != (undefined8 *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar1;
}



// FUNCTION 143194150 TriggerModulators body=64 status=ok
// SIG undefined TriggerModulators(void)

void CAkLayer::TriggerModulators(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_20 = *(longlong *)(param_1 + 0x30);
  if (*(char *)(local_20 + 0x108) == '\0') {
    local_18 = 4;
    local_28 = param_1;
    CAkModulatorMgr::Trigger(DAT_146b50ae0,&local_28,param_2,param_3);
  }
  return;
}



// FUNCTION 143194190 FUN_143194190 body=195 status=ok
// SIG undefined FUN_143194190(void)

undefined4 FUN_143194190(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x18);
  piVar5 = piVar4 + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc;
  for (; (piVar4 != piVar5 && (*piVar4 != param_2)); piVar4 = piVar4 + 0xc) {
  }
  if (piVar4 == (int *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18))
     ) {
    return 0x10;
  }
  uVar1 = FUN_1431940a0(piVar4 + 2,param_1);
  uVar3 = *(uint *)(param_1 + 0x20);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x18) + -0x30 + (ulonglong)uVar3 * 0x30);
  if (piVar4 < piVar5) {
    lVar2 = (((ulonglong)((longlong)piVar5 + (-1 - (longlong)piVar4)) / 0x30 + 1) * 3 &
            0xfffffffffffffff) << 1;
    piVar5 = piVar4 + 0xc;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8 *)piVar4 = *(undefined8 *)piVar5;
      piVar5 = piVar5 + 2;
      piVar4 = piVar4 + 2;
    }
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x20) = uVar3 - 1;
  return uVar1;
}



// FUNCTION 143194260 FUN_143194260 body=70 status=ok
// SIG undefined FUN_143194260(void)

void FUN_143194260(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 0xc) {
  }
  if (piVar2 == (int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x30)
     ) {
    return;
  }
  CAkLayer::CAssociatedChildData::UpdateChildPtr(piVar2 + 2,param_1);
  return;
}



// FUNCTION 1431942b0 UpdateChildPtr body=198 status=ok
// SIG undefined UpdateChildPtr(void)

int CAkLayer::CAssociatedChildData::UpdateChildPtr(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    iVar1 = 1;
    plVar2 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*param_1,0);
    if (plVar2 != (longlong *)0x0) {
      if ((*(longlong *)(param_2 + 0x30) == 0) || (plVar2[0x10] == 0)) {
        iVar1 = 3;
      }
      else {
        iVar1 = (plVar2[0x10] != *(longlong *)(param_2 + 0x30)) + 1;
      }
      if (iVar1 == 1) {
        *(longlong **)(param_1 + 2) = plVar2;
        iVar1 = FUN_1431a0fc0(plVar2,param_2);
        if (iVar1 != 1) {
          *(undefined8 *)(param_1 + 2) = 0;
        }
      }
      else if (iVar1 == 3) {
        iVar1 = 1;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    return iVar1;
  }
  return 1;
}



// FUNCTION 143194380 _LayerMuteFunc body=83 status=ok
// SIG undefined _LayerMuteFunc(void)

void _LayerMuteFunc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 local_res18 [16];
  
  if (*(char *)(param_3 + 0x20) == '\0') {
    uVar1 = FUN_143131860(*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x18),0,
                          local_res18);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    *(undefined1 *)(param_3 + 0x20) = 1;
  }
  FUN_14317e2d0(param_1,*(undefined4 *)(param_3 + 0x1c),param_3,1);
  return;
}



// FUNCTION 1431943e0 GetMod<long> body=99 status=ok
// SIG undefined GetMod<long>(void)

int RandomizerModifier::GetMod<long>(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - *param_1;
  if (iVar1 != 0) {
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    return *param_1 +
           (int)((double)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 4.656612875245797e-10 *
                 (double)iVar1 + 0.5);
  }
  return *param_1;
}



// FUNCTION 143194450 SetInitialRTPC<CAkModulator> body=464 status=ok
// SIG undefined SetInitialRTPC<CAkModulator>(void)

ulonglong SetInitialRTPC<CAkModulator>(longlong *param_1,int *param_2,longlong param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  uVar11 = 0;
  uVar5 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  uVar12 = (uint)uVar5;
  if (uVar12 == 0) {
    return 1;
  }
  while( true ) {
    puVar8 = (undefined4 *)*param_1;
    uVar6 = *puVar8;
    *param_1 = (longlong)(puVar8 + 1);
    uVar2 = *(undefined1 *)(puVar8 + 1);
    *param_1 = (longlong)puVar8 + 5;
    uVar3 = *(undefined1 *)((longlong)puVar8 + 5);
    *param_1 = (longlong)puVar8 + 6;
    bVar4 = *(byte *)((longlong)puVar8 + 6);
    pbVar1 = (byte *)((longlong)puVar8 + 7);
    *param_1 = (longlong)pbVar1;
    uVar9 = bVar4 & 0x7f;
    while ((char)bVar4 < '\0') {
      bVar4 = *(byte *)*param_1;
      pbVar1 = (byte *)*param_1 + 1;
      *param_1 = (longlong)pbVar1;
      uVar9 = bVar4 & 0x7f | uVar9 << 7;
    }
    uVar7 = *(undefined4 *)pbVar1;
    *param_1 = (longlong)(pbVar1 + 4);
    bVar4 = pbVar1[4];
    *param_1 = (longlong)(pbVar1 + 5);
    uVar5 = *(ushort *)(pbVar1 + 5);
    *param_1 = (longlong)(pbVar1 + 7);
    local_50 = 0xff;
    *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) | (uint)(1L << ((ulonglong)uVar9 & 0x3f));
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    local_48 = 0xff;
    uVar10 = FUN_143137d00(g_pRTPCMgr,param_3,uVar6,uVar2,uVar3,uVar9,uVar7,bVar4,pbVar1 + 7,
                           (uint)uVar5,&local_68,3,1);
    if ((int)uVar10 != 1) break;
    uVar11 = uVar11 + 1;
    *param_1 = *param_1 + (ulonglong)uVar5 * 0xc;
    *param_2 = *param_2 + (uint)uVar5 * -0xc;
    if (uVar12 <= uVar11) {
      return uVar10 & 0xffffffff;
    }
  }
  return uVar10;
}



// FUNCTION 143194620 _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey> body=520 status=ok
// SIG undefined _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>(void)

longlong AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>
         ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                   (longlong param_1,code *param_2,undefined8 param_3,undefined1 *param_4,
                   undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar4 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar4 = 0;
  }
  if (((lVar4 != 0) && (cVar1 = (*param_2)(lVar4,param_3,param_5), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (puVar6 != puVar6 + uVar2 * 6) {
    do {
      *param_4 = *(undefined1 *)(puVar6 + 5);
      cVar1 = AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
              ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                        (puVar6,param_2,param_3,param_4 + 8,param_5);
      if (cVar1 == '\0') {
        puVar6 = puVar6 + 6;
      }
      else {
        lVar4 = puVar6[3];
        lVar7 = (ulonglong)*(uint *)(puVar6 + 4) * 0x30 + lVar4;
        for (; lVar4 != lVar7; lVar4 = lVar4 + 0x30) {
          if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
            *(undefined4 *)(lVar4 + 0x20) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar4 + 0x18));
            *(undefined8 *)(lVar4 + 0x18) = 0;
            *(undefined4 *)(lVar4 + 0x24) = 0;
          }
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar6 + 3);
        puVar8 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x18) + -0x30 +
                 (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
        if (puVar6 < puVar8) {
          lVar4 = (ulonglong)((longlong)puVar8 + (-1 - (longlong)puVar6)) / 0x30 + 1;
          puVar5 = puVar6 + 10;
          do {
            *(undefined1 *)(puVar5 + -5) = *(undefined1 *)(puVar5 + 1);
            puVar5[-9] = puVar5[-3];
            *(undefined1 *)(puVar5 + -8) = *(undefined1 *)(puVar5 + -2);
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(puVar5 + -7);
            puVar5[-7] = puVar5[-1];
            *(undefined4 *)(puVar5 + -6) = *(undefined4 *)puVar5;
            *(undefined4 *)((longlong)puVar5 + -0x2c) = *(undefined4 *)((longlong)puVar5 + 4);
            puVar5[-1] = 0;
            *puVar5 = 0;
            lVar4 = lVar4 + -1;
            puVar5 = puVar5 + 6;
          } while (lVar4 != 0);
        }
        (**(code **)*puVar8)(puVar8,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (puVar6 != (undefined8 *)(uVar2 * 0x30 + *(longlong *)(param_1 + 0x18)));
  }
  uVar3 = (uint7)(uVar2 >> 8);
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 143194830 _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey> body=680 status=ok
// SIG undefined _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>(void)

longlong AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
         ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                   (longlong param_1,code *param_2,undefined8 param_3,undefined1 *param_4,
                   undefined8 param_5)

{
  char cVar1;
  uint7 uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  
  lVar3 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar3 = 0;
  }
  if (((lVar3 != 0) && (cVar1 = (*param_2)(lVar3,param_3,param_5), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (puVar8 != puVar8 + uVar6 * 6) {
    puVar11 = (uint *)(puVar8 + 4);
    do {
      *param_4 = (char)puVar11[2];
      puVar4 = puVar11 + -6;
      if ((char)puVar11[-4] == '\0') {
        puVar4 = (uint *)0x0;
      }
      if (((puVar4 != (uint *)0x0) && (cVar1 = (*param_2)(puVar4,param_3,param_5), cVar1 != '\0'))
         && ((char)puVar11[-4] != '\0')) {
        *(undefined1 *)(puVar11 + -4) = 0;
      }
      puVar5 = *(undefined8 **)(puVar11 + -2);
      uVar7 = *puVar11;
      puVar9 = puVar5;
      if (puVar5 != puVar5 + (ulonglong)uVar7 * 2) {
        do {
          *(undefined8 *)(param_4 + 8) = puVar9[1];
          cVar1 = (*param_2)(puVar9,param_3,param_5);
          uVar7 = *puVar11;
          if (cVar1 == '\0') {
            puVar9 = puVar9 + 2;
          }
          else {
            puVar5 = (undefined8 *)((ulonglong)uVar7 * 0x10 + -0x10 + *(longlong *)(puVar11 + -2));
            if (puVar9 < puVar5) {
              uVar6 = ((ulonglong)((longlong)puVar5 + (-1 - (longlong)puVar9)) >> 3 &
                      0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
              puVar5 = puVar9 + 2;
              puVar10 = puVar9;
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar10 = puVar10 + 1;
              }
              uVar7 = *puVar11;
            }
            uVar7 = uVar7 - 1;
            *puVar11 = uVar7;
          }
          puVar5 = *(undefined8 **)(puVar11 + -2);
        } while (puVar9 != puVar5 + (ulonglong)uVar7 * 2);
      }
      if ((uVar7 == 0) && (puVar5 != (undefined8 *)0x0)) {
        *puVar11 = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
        puVar5 = (undefined8 *)0x0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        puVar11[1] = 0;
      }
      if (((char)puVar11[-4] == '\0') && (*puVar11 == 0)) {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar11 = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
          puVar11[-2] = 0;
          puVar11[-1] = 0;
          puVar11[1] = 0;
        }
        puVar9 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x18) + -0x30 +
                 (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
        puVar5 = puVar8;
        while (puVar5 < puVar9) {
          ChildTreeType::Transfer(puVar5,puVar5 + 6);
          puVar5 = puVar5 + 6;
        }
        (**(code **)*puVar9)(puVar9,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      else {
        puVar8 = puVar8 + 6;
        puVar11 = puVar11 + 0xc;
      }
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (puVar8 != (undefined8 *)(uVar6 * 0x30 + *(longlong *)(param_1 + 0x18)));
  }
  uVar2 = (uint7)(uVar6 >> 8);
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 143194ae0 _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey> body=734 status=ok
// SIG undefined _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>(void)

longlong AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>
         ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                   (longlong param_1,code *param_2,undefined8 param_3,undefined4 *param_4,
                   undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  lVar10 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar10 = 0;
  }
  if (((lVar10 != 0) && (cVar1 = (*param_2)(lVar10,param_3,param_5), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (puVar9 != puVar9 + uVar2 * 6) {
    do {
      *param_4 = *(undefined4 *)(puVar9 + 5);
      cVar1 = AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>
              ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                        (puVar9,param_2,param_3,param_4 + 2,param_5);
      if (cVar1 == '\0') {
        puVar9 = puVar9 + 6;
      }
      else {
        lVar10 = puVar9[3];
        lVar12 = (ulonglong)*(uint *)(puVar9 + 4) * 0x30 + lVar10;
        for (; lVar10 != lVar12; lVar10 = lVar10 + 0x30) {
          lVar6 = *(longlong *)(lVar10 + 0x18);
          lVar5 = (ulonglong)*(uint *)(lVar10 + 0x20) * 0x30 + lVar6;
          for (; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
            lVar4 = *(longlong *)(lVar6 + 0x18);
            lVar7 = (ulonglong)*(uint *)(lVar6 + 0x20) * 0x30 + lVar4;
            for (; lVar4 != lVar7; lVar4 = lVar4 + 0x30) {
              if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
                *(undefined4 *)(lVar4 + 0x20) = 0;
                AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar4 + 0x18));
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined4 *)(lVar4 + 0x24) = 0;
              }
            }
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(lVar6 + 0x18);
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(lVar10 + 0x18);
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar9 + 3);
        puVar11 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + -0x30 +
                  (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
        if (puVar9 < puVar11) {
          puVar8 = puVar9 + 10;
          lVar10 = (ulonglong)((longlong)puVar11 + (-1 - (longlong)puVar9)) / 0x30 + 1;
          do {
            *(undefined4 *)(puVar8 + -5) = *(undefined4 *)(puVar8 + 1);
            puVar8[-9] = puVar8[-3];
            *(undefined1 *)(puVar8 + -8) = *(undefined1 *)(puVar8 + -2);
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(puVar8 + -7);
            puVar8[-7] = puVar8[-1];
            *(undefined4 *)(puVar8 + -6) = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar8 + -0x2c) = *(undefined4 *)((longlong)puVar8 + 4);
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8 = puVar8 + 6;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        (**(code **)*puVar11)(puVar11,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (puVar9 != (undefined8 *)(uVar2 * 0x30 + *(longlong *)(param_1 + 0x18)));
  }
  uVar3 = (uint7)(uVar2 >> 8);
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 143194dc0 _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey> body=627 status=ok
// SIG undefined _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>(void)

longlong AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>
         ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                   (longlong param_1,code *param_2,undefined8 param_3,undefined4 *param_4,
                   undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar6 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar6 = 0;
  }
  if (((lVar6 != 0) && (cVar1 = (*param_2)(lVar6,param_3,param_5), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (puVar9 != puVar9 + uVar2 * 6) {
    do {
      *param_4 = *(undefined4 *)(puVar9 + 5);
      cVar1 = AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>
              ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                        (puVar9,param_2,param_3,param_4 + 2,param_5);
      if (cVar1 == '\0') {
        puVar9 = puVar9 + 6;
      }
      else {
        lVar6 = puVar9[3];
        lVar5 = (ulonglong)*(uint *)(puVar9 + 4) * 0x30 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
          lVar4 = *(longlong *)(lVar6 + 0x18);
          lVar7 = (ulonglong)*(uint *)(lVar6 + 0x20) * 0x30 + lVar4;
          for (; lVar4 != lVar7; lVar4 = lVar4 + 0x30) {
            if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
              *(undefined4 *)(lVar4 + 0x20) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar4 + 0x18));
              *(undefined8 *)(lVar4 + 0x18) = 0;
              *(undefined4 *)(lVar4 + 0x24) = 0;
            }
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(lVar6 + 0x18);
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar9 + 3);
        puVar10 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + -0x30 +
                  (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
        if (puVar9 < puVar10) {
          puVar8 = puVar9 + 10;
          lVar6 = (ulonglong)((longlong)puVar10 + (-1 - (longlong)puVar9)) / 0x30 + 1;
          do {
            *(undefined4 *)(puVar8 + -5) = *(undefined4 *)(puVar8 + 1);
            puVar8[-9] = puVar8[-3];
            *(undefined1 *)(puVar8 + -8) = *(undefined1 *)(puVar8 + -2);
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(puVar8 + -7);
            puVar8[-7] = puVar8[-1];
            *(undefined4 *)(puVar8 + -6) = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar8 + -0x2c) = *(undefined4 *)((longlong)puVar8 + 4);
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8 = puVar8 + 6;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        (**(code **)*puVar10)(puVar10,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (puVar9 != (undefined8 *)(uVar2 * 0x30 + *(longlong *)(param_1 + 0x18)));
  }
  uVar3 = (uint7)(uVar2 >> 8);
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 143195040 _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey> body=813 status=ok
// SIG undefined _ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>(void)

longlong AkRTPCNestedSearchTree<AkRTPCKey,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>_>
         ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                   (longlong param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  uint7 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *local_58;
  
  lVar11 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar11 = 0;
  }
  if (((lVar11 != 0) && (cVar1 = (*param_2)(lVar11,param_3,param_5), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  local_58 = puVar5;
  if (puVar5 != puVar5 + uVar2 * 6) {
    do {
      *param_4 = puVar5[5];
      cVar1 = AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>
              ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                        (puVar5,param_2,param_3,param_4 + 1,param_5);
      if (cVar1 == '\0') {
        puVar5 = puVar5 + 6;
        local_58 = puVar5;
      }
      else {
        lVar11 = puVar5[3];
        lVar10 = (ulonglong)*(uint *)(puVar5 + 4) * 0x30 + lVar11;
        for (; lVar11 != lVar10; lVar11 = lVar11 + 0x30) {
          lVar12 = *(longlong *)(lVar11 + 0x18);
          lVar14 = (ulonglong)*(uint *)(lVar11 + 0x20) * 0x30 + lVar12;
          for (; lVar12 != lVar14; lVar12 = lVar12 + 0x30) {
            lVar7 = *(longlong *)(lVar12 + 0x18);
            lVar6 = (ulonglong)*(uint *)(lVar12 + 0x20) * 0x30 + lVar7;
            for (; lVar7 != lVar6; lVar7 = lVar7 + 0x30) {
              lVar4 = *(longlong *)(lVar7 + 0x18);
              lVar9 = (ulonglong)*(uint *)(lVar7 + 0x20) * 0x30 + lVar4;
              for (; lVar4 != lVar9; lVar4 = lVar4 + 0x30) {
                if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
                  *(undefined4 *)(lVar4 + 0x20) = 0;
                  AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar4 + 0x18));
                  *(undefined8 *)(lVar4 + 0x18) = 0;
                  *(undefined4 *)(lVar4 + 0x24) = 0;
                }
              }
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(lVar7 + 0x18);
            }
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(lVar12 + 0x18);
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(lVar11 + 0x18);
          puVar5 = local_58;
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar5 + 3);
        puVar13 = (undefined8 *)
                  (*(longlong *)(param_1 + 0x18) + -0x30 +
                  (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
        if (puVar5 < puVar13) {
          puVar8 = puVar5 + 10;
          lVar11 = (ulonglong)((longlong)puVar13 + (-1 - (longlong)puVar5)) / 0x30 + 1;
          do {
            puVar8[-5] = puVar8[1];
            puVar8[-9] = puVar8[-3];
            *(undefined1 *)(puVar8 + -8) = *(undefined1 *)(puVar8 + -2);
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(puVar8 + -7);
            puVar8[-7] = puVar8[-1];
            *(undefined4 *)(puVar8 + -6) = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar8 + -0x2c) = *(undefined4 *)((longlong)puVar8 + 4);
            puVar8[-1] = 0;
            *puVar8 = 0;
            puVar8 = puVar8 + 6;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        (**(code **)*puVar13)(puVar13,0);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      }
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
    } while (puVar5 != (undefined8 *)(uVar2 * 0x30 + *(longlong *)(param_1 + 0x18)));
  }
  uVar3 = (uint7)(uVar2 >> 8);
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 143195370 FUN_143195370 body=672 status=ok
// SIG undefined FUN_143195370(void)

void FUN_143195370(longlong param_1,code *param_2,char *param_3,undefined8 param_4,char *param_5,
                  undefined8 param_6,char param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_7 != '\0') {
    lVar5 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      (*param_2)(lVar5,param_4,param_6);
    }
  }
  cVar2 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (cVar2 == -1) {
    lVar5 = *plVar1;
    if (lVar5 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar5) {
      do {
        *param_5 = *(char *)(lVar5 + 0x28);
        lVar6 = lVar5 + 8;
        if (*(char *)(lVar5 + 0x10) == '\0') {
          lVar6 = 0;
        }
        if (lVar6 != 0) {
          (*param_2)(lVar6,param_4,param_6);
        }
        cVar2 = param_3[8];
        if (cVar2 == -1) {
          lVar6 = *(longlong *)(lVar5 + 0x18);
          if (lVar6 != (ulonglong)*(uint *)(lVar5 + 0x20) * 0x30 + lVar6) {
            do {
              param_5[8] = *(char *)(lVar6 + 0x28);
              lVar4 = lVar6 + 8;
              if (*(char *)(lVar6 + 0x10) == '\0') {
                lVar4 = 0;
              }
              if (lVar4 != 0) {
                (*param_2)(lVar4,param_4,param_6);
              }
              lVar4 = *(longlong *)(param_3 + 0x10);
              if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar6 + 0x18);
                if (lVar4 != (ulonglong)*(uint *)(lVar6 + 0x20) * 0x10 + lVar4) {
                  do {
                    *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)(lVar4 + 8);
                    (*param_2)(lVar4,param_4,param_6);
                    lVar4 = lVar4 + 0x10;
                  } while (lVar4 != (ulonglong)*(uint *)(lVar6 + 0x20) * 0x10 +
                                    *(longlong *)(lVar6 + 0x18));
                }
              }
              else {
                lVar3 = FUN_143122170(lVar6 + 0x18,lVar4);
                if (lVar3 != 0) {
                  *(longlong *)(param_5 + 0x10) = lVar4;
                  (*param_2)(lVar3,param_4,param_6);
                }
              }
              lVar6 = lVar6 + 0x30;
            } while (lVar6 != (ulonglong)*(uint *)(lVar5 + 0x20) * 0x30 +
                              *(longlong *)(lVar5 + 0x18));
          }
        }
        else {
          lVar4 = FUN_143197340(lVar5 + 0x18,cVar2,&param_7);
          lVar6 = 0;
          if (param_7 != '\0') {
            lVar6 = lVar4;
          }
          if (lVar6 != 0) {
            param_5[8] = cVar2;
            AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>::
            _ForEachMatching<void_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                      (lVar6,param_2,param_3 + 0x10,param_4,param_5 + 0x10,param_6);
          }
        }
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *plVar1);
    }
  }
  else {
    lVar6 = FUN_143197340(plVar1,cVar2,&param_7);
    lVar5 = 0;
    if (param_7 != '\0') {
      lVar5 = lVar6;
    }
    if (lVar5 != 0) {
      *param_5 = cVar2;
      FUN_143195610(lVar5,param_2,param_3 + 8,param_4,param_5 + 8,param_6,1);
    }
  }
  return;
}



// FUNCTION 143195610 FUN_143195610 body=463 status=ok
// SIG undefined FUN_143195610(void)

void FUN_143195610(longlong param_1,code *param_2,char *param_3,undefined8 param_4,char *param_5,
                  undefined8 param_6,char param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_7 != '\0') {
    lVar5 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      (*param_2)(lVar5,param_4,param_6);
    }
  }
  cVar2 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (cVar2 == -1) {
    lVar5 = *plVar1;
    if (lVar5 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar5) {
      do {
        *param_5 = *(char *)(lVar5 + 0x28);
        lVar4 = lVar5 + 8;
        if (*(char *)(lVar5 + 0x10) == '\0') {
          lVar4 = 0;
        }
        if (lVar4 != 0) {
          (*param_2)(lVar4,param_4,param_6);
        }
        lVar4 = *(longlong *)(param_3 + 8);
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(lVar5 + 0x18);
          if (lVar4 != (ulonglong)*(uint *)(lVar5 + 0x20) * 0x10 + lVar4) {
            do {
              *(undefined8 *)(param_5 + 8) = *(undefined8 *)(lVar4 + 8);
              (*param_2)(lVar4,param_4,param_6);
              lVar4 = lVar4 + 0x10;
            } while (lVar4 != (ulonglong)*(uint *)(lVar5 + 0x20) * 0x10 +
                              *(longlong *)(lVar5 + 0x18));
          }
        }
        else {
          lVar3 = FUN_143122170(lVar5 + 0x18,lVar4);
          if (lVar3 != 0) {
            *(longlong *)(param_5 + 8) = lVar4;
            (*param_2)(lVar3,param_4,param_6);
          }
        }
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *plVar1);
    }
  }
  else {
    lVar4 = FUN_143197340(plVar1,cVar2,&param_7);
    lVar5 = 0;
    if (param_7 != '\0') {
      lVar5 = lVar4;
    }
    if (lVar5 != 0) {
      *param_5 = cVar2;
      AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>::
      _ForEachMatching<void_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
                (lVar5,param_2,param_3 + 8,param_4,param_5 + 8,param_6);
    }
  }
  return;
}



// FUNCTION 1431957e0 FUN_1431957e0 body=573 status=ok
// SIG undefined FUN_1431957e0(void)

void FUN_1431957e0(longlong param_1,code *param_2,int *param_3,undefined8 param_4,int *param_5,
                  undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_7 != '\0') {
    lVar4 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      (*param_2)(lVar4,param_4,param_6);
    }
  }
  iVar2 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (iVar2 == 0) {
    lVar4 = *plVar1;
    if (lVar4 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar4) {
      do {
        *param_5 = *(int *)(lVar4 + 0x28);
        lVar5 = lVar4 + 8;
        if (*(char *)(lVar4 + 0x10) == '\0') {
          lVar5 = 0;
        }
        if (lVar5 != 0) {
          (*param_2)(lVar5,param_4,param_6);
        }
        iVar2 = param_3[2];
        if (iVar2 == 0) {
          lVar5 = *(longlong *)(lVar4 + 0x18);
          if (lVar5 != (ulonglong)*(uint *)(lVar4 + 0x20) * 0x30 + lVar5) {
            do {
              param_5[2] = *(int *)(lVar5 + 0x28);
              FUN_143195370(lVar5,param_2,param_3 + 4,param_4,param_5 + 4,param_6,1);
              lVar5 = lVar5 + 0x30;
            } while (lVar5 != (ulonglong)*(uint *)(lVar4 + 0x20) * 0x30 +
                              *(longlong *)(lVar4 + 0x18));
          }
        }
        else {
          lVar3 = FUN_1431973f0(lVar4 + 0x18,iVar2,&param_7);
          lVar5 = 0;
          if (param_7 != '\0') {
            lVar5 = lVar3;
          }
          if (lVar5 != 0) {
            param_5[2] = iVar2;
            FUN_143195370(lVar5,param_2,param_3 + 4,param_4,param_5 + 4,param_6,1);
          }
        }
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *plVar1);
    }
  }
  else {
    lVar5 = FUN_1431973f0(plVar1,iVar2,&param_7);
    lVar4 = 0;
    if (param_7 != '\0') {
      lVar4 = lVar5;
    }
    if (lVar4 != 0) {
      *param_5 = iVar2;
      FUN_143195a20(lVar4,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
    }
  }
  return;
}



// FUNCTION 143195a20 FUN_143195a20 body=320 status=ok
// SIG undefined FUN_143195a20(void)

void FUN_143195a20(longlong param_1,code *param_2,int *param_3,undefined8 param_4,int *param_5,
                  undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_7 != '\0') {
    lVar4 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      (*param_2)(lVar4,param_4,param_6);
    }
  }
  iVar2 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (iVar2 == 0) {
    lVar4 = *plVar1;
    if (lVar4 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar4) {
      do {
        *param_5 = *(int *)(lVar4 + 0x28);
        FUN_143195370(lVar4,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *plVar1);
    }
  }
  else {
    lVar3 = FUN_1431973f0(plVar1,iVar2,&param_7);
    lVar4 = 0;
    if (param_7 != '\0') {
      lVar4 = lVar3;
    }
    if (lVar4 != 0) {
      *param_5 = iVar2;
      FUN_143195370(lVar4,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
    }
  }
  return;
}



// FUNCTION 143195b60 _ForEachMatching<void_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey> body=211 status=ok
// SIG undefined _ForEachMatching<void_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>(void)

void AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>::
     _ForEachMatching<void_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
               (longlong param_1,code *param_2,longlong *param_3,undefined8 param_4,
               longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    (*param_2)(lVar3,param_4,param_6);
  }
  lVar3 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = *plVar1;
    if (lVar3 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x10 + lVar3) {
      do {
        *param_5 = *(longlong *)(lVar3 + 8);
        (*param_2)(lVar3,param_4,param_6);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x10 + *plVar1);
    }
  }
  else {
    lVar2 = FUN_143122170(plVar1,lVar3);
    if (lVar2 != 0) {
      *param_5 = lVar3;
      (*param_2)(lVar2,param_4,param_6);
    }
  }
  return;
}



// FUNCTION 143195c40 FUN_143195c40 body=771 status=ok
// SIG undefined FUN_143195c40(void)

undefined8
FUN_143195c40(longlong param_1,code *param_2,char *param_3,undefined8 param_4,char *param_5,
             undefined8 param_6,char param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *local_res8;
  code *local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_7 != '\0') {
    lVar2 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar2 = 0;
    }
    if (((lVar2 != 0) && (cVar1 = (*param_2)(lVar2,param_4,param_6), cVar1 != '\0')) &&
       (*(char *)(param_1 + 0x10) != '\0')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  cVar1 = *param_3;
  if (cVar1 == -1) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (puVar4 != puVar4 + (ulonglong)*(uint *)(param_1 + 0x20) * 6) {
      local_res8 = param_3 + 8;
      do {
        *param_5 = *(char *)(puVar4 + 5);
        cVar1 = FUN_143195f50(puVar4,param_2,local_res8,param_4,param_5 + 8,param_6,1);
        if (cVar1 == '\0') {
          puVar4 = puVar4 + 6;
        }
        else {
          lVar2 = puVar4[3];
          lVar5 = (ulonglong)*(uint *)(puVar4 + 4) * 0x30 + lVar2;
          for (; lVar2 != lVar5; lVar2 = lVar2 + 0x30) {
            if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
              *(undefined4 *)(lVar2 + 0x20) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar2 + 0x18));
              *(undefined8 *)(lVar2 + 0x18) = 0;
              *(undefined4 *)(lVar2 + 0x24) = 0;
            }
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar4 + 3);
          puVar6 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x18) + -0x30 +
                   (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
          if (puVar4 < puVar6) {
            puVar3 = puVar4 + 10;
            lVar2 = (ulonglong)((longlong)puVar6 + (-1 - (longlong)puVar4)) / 0x30 + 1;
            do {
              *(undefined1 *)(puVar3 + -5) = *(undefined1 *)(puVar3 + 1);
              puVar3[-9] = puVar3[-3];
              *(undefined1 *)(puVar3 + -8) = *(undefined1 *)(puVar3 + -2);
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(puVar3 + -7);
              puVar3[-7] = puVar3[-1];
              *(undefined4 *)(puVar3 + -6) = *(undefined4 *)puVar3;
              *(undefined4 *)((longlong)puVar3 + -0x2c) = *(undefined4 *)((longlong)puVar3 + 4);
              puVar3[-1] = 0;
              *puVar3 = 0;
              puVar3 = puVar3 + 6;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
          (**(code **)*puVar6)(puVar6,0);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          param_4 = local_res20;
          param_2 = local_res10;
        }
      } while (puVar4 != (undefined8 *)
                         ((ulonglong)*(uint *)(param_1 + 0x20) * 0x30 +
                         *(longlong *)(param_1 + 0x18)));
    }
  }
  else {
    lVar5 = FUN_143197340(param_1 + 0x18,cVar1,&param_7);
    lVar2 = 0;
    if (param_7 != '\0') {
      lVar2 = lVar5;
    }
    if (lVar2 != 0) {
      *param_5 = cVar1;
      cVar1 = FUN_143195f50(lVar2,param_2,param_3 + 8,param_4,param_5 + 8,param_6,1);
      if (cVar1 != '\0') {
        FUN_14319b240(lVar2);
        local_res8 = (char *)FUN_143197340(param_1 + 0x18,*param_3,&param_7);
        if (param_7 != '\0') {
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType>_>
          ::Erase(param_1 + 0x18,local_res18,&local_res8);
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143195f50 FUN_143195f50 body=999 status=ok
// SIG undefined FUN_143195f50(void)

undefined8
FUN_143195f50(longlong param_1,code *param_2,char *param_3,undefined8 param_4,char *param_5,
             undefined8 param_6,char param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *local_58;
  
  if (param_7 != '\0') {
    lVar3 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar3 = 0;
    }
    if (((lVar3 != 0) && (cVar1 = (*param_2)(lVar3,param_4,param_6), cVar1 != '\0')) &&
       (*(char *)(param_1 + 0x10) != '\0')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  cVar1 = *param_3;
  if (cVar1 == -1) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (puVar5 != puVar5 + (ulonglong)*(uint *)(param_1 + 0x20) * 6) {
      puVar10 = (uint *)(puVar5 + 4);
      local_58 = puVar5;
      do {
        *param_5 = (char)puVar10[2];
        puVar4 = puVar10 + -6;
        if ((char)puVar10[-4] == '\0') {
          puVar4 = (uint *)0x0;
        }
        if (((puVar4 != (uint *)0x0) && (cVar1 = (*param_2)(puVar4,param_4,param_6), cVar1 != '\0'))
           && ((char)puVar10[-4] != '\0')) {
          *(undefined1 *)(puVar10 + -4) = 0;
        }
        lVar3 = *(longlong *)(param_3 + 8);
        if (lVar3 == 0) {
          puVar8 = *(undefined8 **)(puVar10 + -2);
          uVar7 = *puVar10;
          puVar9 = puVar8;
          if (puVar8 != puVar8 + (ulonglong)uVar7 * 2) {
            do {
              *(undefined8 *)(param_5 + 8) = puVar9[1];
              cVar1 = (*param_2)(puVar9,param_4,param_6);
              uVar7 = *puVar10;
              if (cVar1 == '\0') {
                puVar9 = puVar9 + 2;
              }
              else {
                puVar5 = (undefined8 *)
                         ((ulonglong)uVar7 * 0x10 + -0x10 + *(longlong *)(puVar10 + -2));
                if (puVar9 < puVar5) {
                  uVar6 = ((ulonglong)((longlong)puVar5 + (-1 - (longlong)puVar9)) >> 3 &
                          0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
                  puVar5 = puVar9 + 2;
                  puVar8 = puVar9;
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar8 = *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  uVar7 = *puVar10;
                }
                uVar7 = uVar7 - 1;
                *puVar10 = uVar7;
              }
              puVar8 = *(undefined8 **)(puVar10 + -2);
              puVar5 = local_58;
            } while (puVar9 != puVar8 + (ulonglong)uVar7 * 2);
          }
          if ((uVar7 == 0) && (puVar8 != (undefined8 *)0x0)) {
            *puVar10 = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
            puVar10[-2] = 0;
            puVar10[-1] = 0;
            puVar10[1] = 0;
          }
        }
        else {
          lVar2 = FUN_143122170(puVar10 + -2,lVar3);
          if (lVar2 != 0) {
            *(longlong *)(param_5 + 8) = lVar3;
            cVar1 = (*param_2)(lVar2,param_4,param_6);
            if (cVar1 != '\0') {
              FUN_143139660(puVar10 + -2,*(undefined8 *)(param_3 + 8));
            }
          }
        }
        if (((char)puVar10[-4] == '\0') && (*puVar10 == 0)) {
          if (*(void **)(puVar10 + -2) != (void *)0x0) {
            *puVar10 = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar10 + -2));
            puVar10[-2] = 0;
            puVar10[-1] = 0;
            puVar10[1] = 0;
          }
          puVar9 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x18) + -0x30 +
                   (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
          puVar8 = puVar5;
          while (puVar8 < puVar9) {
            AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
            ::ChildTreeType::Transfer(puVar8,puVar8 + 6);
            puVar8 = puVar8 + 6;
          }
          (**(code **)*puVar9)(puVar9,0);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
        else {
          puVar5 = puVar5 + 6;
          puVar10 = puVar10 + 0xc;
          local_58 = puVar5;
        }
      } while (puVar5 != (undefined8 *)
                         ((ulonglong)*(uint *)(param_1 + 0x20) * 0x30 +
                         *(longlong *)(param_1 + 0x18)));
    }
  }
  else {
    lVar2 = FUN_143197340(param_1 + 0x18,cVar1,&param_7);
    lVar3 = 0;
    if (param_7 != '\0') {
      lVar3 = lVar2;
    }
    if (lVar3 != 0) {
      *param_5 = cVar1;
      cVar1 = FUN_143196e20(lVar3,param_2,param_3 + 8,param_4,param_5 + 8,param_6);
      if (cVar1 != '\0') {
        AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term(lVar3);
        FUN_14319bff0(param_1 + 0x18,*param_3);
      }
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143196340 FUN_143196340 body=903 status=ok
// SIG undefined FUN_143196340(void)

undefined8
FUN_143196340(ulonglong param_1,code *param_2,int *param_3,undefined8 param_4,int *param_5,
             undefined8 param_6,char param_7)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong local_res8;
  code *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_7 != '\0') {
    lVar10 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar10 = 0;
    }
    if (((lVar10 != 0) && (cVar2 = (*param_2)(lVar10,param_4,param_6), cVar2 != '\0')) &&
       (*(char *)(param_1 + 0x10) != '\0')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  iVar1 = *param_3;
  plVar6 = (longlong *)(param_1 + 0x18);
  local_res18 = plVar6;
  if (iVar1 == 0) {
    puVar9 = (undefined8 *)*plVar6;
    if (puVar9 != puVar9 + (ulonglong)*(uint *)(param_1 + 0x20) * 6) {
      do {
        *param_5 = *(int *)(puVar9 + 5);
        cVar2 = FUN_1431966d0(puVar9,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
        if (cVar2 == '\0') {
          puVar9 = puVar9 + 6;
        }
        else {
          lVar10 = puVar9[3];
          lVar12 = (ulonglong)*(uint *)(puVar9 + 4) * 0x30 + lVar10;
          for (; lVar10 != lVar12; lVar10 = lVar10 + 0x30) {
            lVar5 = *(longlong *)(lVar10 + 0x18);
            lVar4 = (ulonglong)*(uint *)(lVar10 + 0x20) * 0x30 + lVar5;
            for (; lVar5 != lVar4; lVar5 = lVar5 + 0x30) {
              lVar3 = *(longlong *)(lVar5 + 0x18);
              lVar7 = (ulonglong)*(uint *)(lVar5 + 0x20) * 0x30 + lVar3;
              for (; lVar3 != lVar7; lVar3 = lVar3 + 0x30) {
                if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
                  *(undefined4 *)(lVar3 + 0x20) = 0;
                  AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar3 + 0x18));
                  *(undefined8 *)(lVar3 + 0x18) = 0;
                  *(undefined4 *)(lVar3 + 0x24) = 0;
                }
              }
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(lVar5 + 0x18);
            }
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(lVar10 + 0x18);
            param_1 = local_res8;
            plVar6 = local_res18;
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar9 + 3);
          puVar11 = (undefined8 *)(*plVar6 + -0x30 + (ulonglong)*(uint *)(param_1 + 0x20) * 0x30);
          if (puVar9 < puVar11) {
            puVar8 = puVar9 + 10;
            lVar10 = (ulonglong)((longlong)puVar11 + (-1 - (longlong)puVar9)) / 0x30 + 1;
            do {
              *(undefined4 *)(puVar8 + -5) = *(undefined4 *)(puVar8 + 1);
              puVar8[-9] = puVar8[-3];
              *(undefined1 *)(puVar8 + -8) = *(undefined1 *)(puVar8 + -2);
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(puVar8 + -7);
              puVar8[-7] = puVar8[-1];
              *(undefined4 *)(puVar8 + -6) = *(undefined4 *)puVar8;
              *(undefined4 *)((longlong)puVar8 + -0x2c) = *(undefined4 *)((longlong)puVar8 + 4);
              puVar8[-1] = 0;
              *puVar8 = 0;
              puVar8 = puVar8 + 6;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            plVar6 = (longlong *)(param_1 + 0x18);
          }
          (**(code **)*puVar11)(puVar11,0);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          param_4 = local_res20;
          param_2 = local_res10;
        }
      } while (puVar9 != (undefined8 *)((ulonglong)*(uint *)(plVar6 + 1) * 0x30 + *plVar6));
    }
  }
  else {
    lVar12 = FUN_1431973f0(plVar6,iVar1,&param_7);
    lVar10 = 0;
    if (param_7 != '\0') {
      lVar10 = lVar12;
    }
    if (lVar10 != 0) {
      *param_5 = iVar1;
      cVar2 = FUN_1431966d0(lVar10,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
      if (cVar2 != '\0') {
        AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>
        ::Term(lVar10);
        local_res8 = FUN_1431973f0(plVar6,*param_3,&param_7);
        if (param_7 != '\0') {
          FUN_143197970(plVar6,&local_res18,&local_res8);
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1431966d0 FUN_1431966d0 body=825 status=ok
// SIG undefined FUN_1431966d0(void)

undefined8
FUN_1431966d0(longlong param_1,code *param_2,int *param_3,undefined8 param_4,int *param_5,
             undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *local_res8;
  code *local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_7 != '\0') {
    lVar7 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar7 = 0;
    }
    if (((lVar7 != 0) && (cVar3 = (*param_2)(lVar7,param_4,param_6), cVar3 != '\0')) &&
       (*(char *)(param_1 + 0x10) != '\0')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  iVar2 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (iVar2 == 0) {
    puVar10 = (undefined8 *)*plVar1;
    if (puVar10 != puVar10 + (ulonglong)*(uint *)(param_1 + 0x20) * 6) {
      local_res8 = param_3 + 2;
      do {
        *param_5 = *(int *)(puVar10 + 5);
        cVar3 = FUN_143195c40(puVar10,param_2,local_res8,param_4,param_5 + 2,param_6,1);
        if (cVar3 == '\0') {
          puVar10 = puVar10 + 6;
        }
        else {
          lVar7 = puVar10[3];
          lVar5 = (ulonglong)*(uint *)(puVar10 + 4) * 0x30 + lVar7;
          for (; lVar7 != lVar5; lVar7 = lVar7 + 0x30) {
            lVar4 = *(longlong *)(lVar7 + 0x18);
            lVar8 = (ulonglong)*(uint *)(lVar7 + 0x20) * 0x30 + lVar4;
            for (; lVar4 != lVar8; lVar4 = lVar4 + 0x30) {
              if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
                *(undefined4 *)(lVar4 + 0x20) = 0;
                AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar4 + 0x18));
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined4 *)(lVar4 + 0x24) = 0;
              }
            }
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(lVar7 + 0x18);
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar10 + 3);
          puVar6 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x18) +
                   (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          if (puVar10 < puVar6) {
            puVar9 = puVar10 + 10;
            lVar7 = (ulonglong)((longlong)puVar6 + (-1 - (longlong)puVar10)) / 0x30 + 1;
            do {
              *(undefined4 *)(puVar9 + -5) = *(undefined4 *)(puVar9 + 1);
              puVar9[-9] = puVar9[-3];
              *(undefined1 *)(puVar9 + -8) = *(undefined1 *)(puVar9 + -2);
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(puVar9 + -7);
              puVar9[-7] = puVar9[-1];
              *(undefined4 *)(puVar9 + -6) = *(undefined4 *)puVar9;
              *(undefined4 *)((longlong)puVar9 + -0x2c) = *(undefined4 *)((longlong)puVar9 + 4);
              puVar9[-1] = 0;
              *puVar9 = 0;
              puVar9 = puVar9 + 6;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          (**(code **)*puVar6)(puVar6,0);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          param_2 = local_res10;
          param_4 = local_res20;
        }
      } while (puVar10 !=
               (undefined8 *)
               ((ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18)));
    }
  }
  else {
    lVar5 = FUN_1431973f0(plVar1,iVar2,&param_7);
    lVar7 = 0;
    if (param_7 != '\0') {
      lVar7 = lVar5;
    }
    if (lVar7 != 0) {
      *param_5 = iVar2;
      cVar3 = FUN_143195c40(lVar7,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
      if (cVar3 != '\0') {
        AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>
        ::Term(lVar7);
        local_res8 = (int *)FUN_1431973f0(plVar1,*param_3,&param_7);
        if (param_7 != '\0') {
          FUN_143197970(plVar1,local_res18,&local_res8);
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143196a10 FUN_143196a10 body=1033 status=ok
// SIG undefined FUN_143196a10(void)

undefined8
FUN_143196a10(ulonglong param_1,code *param_2,longlong *param_3,undefined8 param_4,longlong *param_5
             ,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong local_res8;
  code *local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_7 != '\0') {
    lVar11 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar11 = 0;
    }
    if (((lVar11 != 0) && (cVar2 = (*param_2)(lVar11,param_4,param_6), cVar2 != '\0')) &&
       (*(char *)(param_1 + 0x10) != '\0')) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  lVar11 = *param_3;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (lVar11 == 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 != puVar4 + (ulonglong)*(uint *)(param_1 + 0x20) * 6) {
      plVar8 = plVar1;
      local_res18 = puVar4;
      do {
        *param_5 = puVar4[5];
        cVar2 = FUN_143196340(puVar4,param_2,param_3 + 1,param_4,param_5 + 1,param_6,1);
        if (cVar2 == '\0') {
          puVar4 = puVar4 + 6;
          local_res18 = puVar4;
        }
        else {
          lVar11 = puVar4[3];
          lVar10 = (ulonglong)*(uint *)(puVar4 + 4) * 0x30 + lVar11;
          for (; lVar11 != lVar10; lVar11 = lVar11 + 0x30) {
            lVar12 = *(longlong *)(lVar11 + 0x18);
            lVar13 = (ulonglong)*(uint *)(lVar11 + 0x20) * 0x30 + lVar12;
            for (; lVar12 != lVar13; lVar12 = lVar12 + 0x30) {
              lVar6 = *(longlong *)(lVar12 + 0x18);
              lVar5 = (ulonglong)*(uint *)(lVar12 + 0x20) * 0x30 + lVar6;
              for (; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
                lVar3 = *(longlong *)(lVar6 + 0x18);
                lVar9 = (ulonglong)*(uint *)(lVar6 + 0x20) * 0x30 + lVar3;
                for (; lVar3 != lVar9; lVar3 = lVar3 + 0x30) {
                  if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
                    *(undefined4 *)(lVar3 + 0x20) = 0;
                    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar3 + 0x18));
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                    *(undefined4 *)(lVar3 + 0x24) = 0;
                  }
                }
                AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
                ::Term(lVar6 + 0x18);
              }
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(lVar12 + 0x18);
            }
            AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
            ::Term(lVar11 + 0x18);
            puVar4 = local_res18;
            plVar8 = plVar1;
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar4 + 3);
          param_1 = local_res8;
          puVar14 = (undefined8 *)(*plVar8 + (ulonglong)*(uint *)(local_res8 + 0x20) * 0x30 + -0x30)
          ;
          if (puVar4 < puVar14) {
            puVar7 = puVar4 + 10;
            lVar11 = (ulonglong)((longlong)puVar14 + (-1 - (longlong)puVar4)) / 0x30 + 1;
            do {
              puVar7[-5] = puVar7[1];
              puVar7[-9] = puVar7[-3];
              *(undefined1 *)(puVar7 + -8) = *(undefined1 *)(puVar7 + -2);
              AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
              ::Term(puVar7 + -7);
              puVar7[-7] = puVar7[-1];
              *(undefined4 *)(puVar7 + -6) = *(undefined4 *)puVar7;
              *(undefined4 *)((longlong)puVar7 + -0x2c) = *(undefined4 *)((longlong)puVar7 + 4);
              puVar7[-1] = 0;
              *puVar7 = 0;
              puVar7 = puVar7 + 6;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            plVar8 = (longlong *)(param_1 + 0x18);
          }
          (**(code **)*puVar14)(puVar14,0);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
          param_4 = local_res20;
          param_2 = local_res10;
        }
      } while (puVar4 != (undefined8 *)((ulonglong)*(uint *)(plVar8 + 1) * 0x30 + *plVar8));
    }
  }
  else {
    lVar12 = FUN_1431974a0(plVar1,lVar11,&param_7);
    lVar10 = 0;
    if (param_7 != '\0') {
      lVar10 = lVar12;
    }
    if (lVar10 != 0) {
      *param_5 = lVar11;
      cVar2 = FUN_143196340(lVar10,param_2,param_3 + 1,param_4,param_5 + 1,param_6,1);
      if (cVar2 != '\0') {
        AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>
        ::Term(lVar10);
        local_res8 = FUN_1431974a0(plVar1,*param_3,&param_7);
        if (param_7 != '\0') {
          FUN_143197a60(plVar1,&local_res18,&local_res8);
        }
      }
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143196e20 FUN_143196e20 body=466 status=ok
// SIG undefined FUN_143196e20(void)

undefined8
FUN_143196e20(longlong param_1,code *param_2,longlong *param_3,undefined8 param_4,longlong *param_5,
             undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  lVar3 = param_1 + 8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar3 = 0;
  }
  if (((lVar3 != 0) && (cVar1 = (*param_2)(lVar3,param_4,param_6), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *param_3;
  if (lVar3 == 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    uVar7 = *(uint *)(param_1 + 0x20);
    puVar6 = puVar4;
    if (puVar4 != puVar4 + (ulonglong)uVar7 * 2) {
      do {
        *param_5 = puVar6[1];
        cVar1 = (*param_2)(puVar6,param_4,param_6);
        if (cVar1 == '\0') {
          uVar7 = *(uint *)(param_1 + 0x20);
          puVar6 = puVar6 + 2;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0x20);
          puVar4 = (undefined8 *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_1 + 0x18) + -0x10);
          if (puVar6 < puVar4) {
            uVar5 = ((ulonglong)((longlong)puVar4 + (-1 - (longlong)puVar6)) >> 3 &
                    0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
            puVar4 = puVar6 + 2;
            puVar8 = puVar6;
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar8 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            }
            uVar7 = *(uint *)(param_1 + 0x20);
          }
          uVar7 = uVar7 - 1;
          *(uint *)(param_1 + 0x20) = uVar7;
        }
        puVar4 = *(undefined8 **)(param_1 + 0x18);
      } while (puVar6 != puVar4 + (ulonglong)uVar7 * 2);
      uVar7 = *(uint *)(param_1 + 0x20);
    }
    if ((uVar7 == 0) && (puVar4 != (undefined8 *)0x0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  else {
    lVar2 = FUN_143122170(param_1 + 0x18,lVar3);
    if (lVar2 != 0) {
      *param_5 = lVar3;
      cVar1 = (*param_2)(lVar2,param_4,param_6);
      if (cVar1 != '\0') {
        FUN_143139660(param_1 + 0x18,*param_3);
      }
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143197000 ~CAkModulator body=297 status=ok
// SIG undefined ~CAkModulator(void)

void CAkModulator::~CAkModulator(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acbd80;
  uVar1 = (ulonglong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    uVar3 = 1;
    do {
      if ((uVar3 & uVar1) != 0) {
        CAkRTPCMgr::UnSubscribeRTPC(g_pRTPCMgr,param_1,uVar2);
        uVar1 = (ulonglong)*(uint *)(param_1 + 6) & ~(1L << (uVar2 & 0x3f));
        *(int *)(param_1 + 6) = (int)uVar1;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar3 = uVar3 << 1 | (ulonglong)((longlong)uVar3 < 0);
    } while ((int)uVar1 != 0);
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_10 = 0;
  AkRTPCNestedSearchTree<AkRTPCKey,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>_>
  ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
            (param_1 + 7,ModCtx_MarkFinishedAndRelease,&local_38,&local_38,0);
  FUN_14313a3d0(DAT_146b50ae0);
  AkRTPCNestedSearchTree<AkRTPCKey,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>_>
  ::Term(param_1 + 7);
  if ((void *)param_1[0xc] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0xc]);
    param_1[0xc] = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  param_1[7] = &PTR_FUN_143f3ece8;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[4]);
  }
  param_1[4] = 0;
  CAkIndexable::~CAkIndexable(param_1);
  return;
}



// FUNCTION 143197130 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRedoutOnlineSessionSettings::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbef0;
  CAkModulatorCtx::~CAkModulatorCtx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 143197170 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * TaskBattleResult::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbe20;
  CAkModulator::~CAkModulator();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1431971b0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkLFOCtx::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbec0;
  CAkModulatorCtx::~CAkModulatorCtx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1431971f0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * TaskBattleResult::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbdd0;
  CAkModulator::~CAkModulator();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143197230 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkModulator::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkModulator();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143197270 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRedoutOnlineSessionSettings::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbf20;
  CAkModulatorCtx::~CAkModulatorCtx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1431972b0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * TaskBattleResult::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbe70;
  CAkModulator::~CAkModulator();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1431972f0 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkModulator::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x1c0));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
  return iVar2;
}



// FUNCTION 143197340 FUN_143197340 body=169 status=ok
// SIG undefined FUN_143197340(void)

ulonglong FUN_143197340(longlong *param_1,byte param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    uVar3 = uVar5;
    do {
      iVar2 = (iVar4 - (int)uVar3) / 2 + (int)uVar3;
      bVar1 = *(byte *)((longlong)iVar2 * 0x30 + 0x28 + *param_1);
      if (param_2 < bVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= bVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x30;
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar3;
    } while (iVar2 <= iVar4);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = (longlong)iVar2 * 0x30 + *param_1;
  }
  return uVar5;
}



// FUNCTION 1431973f0 FUN_1431973f0 body=166 status=ok
// SIG undefined FUN_1431973f0(void)

ulonglong FUN_1431973f0(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    uVar3 = uVar5;
    do {
      iVar2 = (iVar4 - (int)uVar3) / 2 + (int)uVar3;
      uVar1 = *(uint *)((longlong)iVar2 * 0x30 + 0x28 + *param_1);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x30;
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar3;
    } while (iVar2 <= iVar4);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = (longlong)iVar2 * 0x30 + *param_1;
  }
  return uVar5;
}



// FUNCTION 1431974a0 FUN_1431974a0 body=167 status=ok
// SIG undefined FUN_1431974a0(void)

ulonglong FUN_1431974a0(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    uVar3 = uVar5;
    do {
      iVar2 = (iVar4 - (int)uVar3) / 2 + (int)uVar3;
      uVar1 = *(ulonglong *)((longlong)iVar2 * 0x30 + 0x28 + *param_1);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x30;
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar3;
    } while (iVar2 <= iVar4);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = (longlong)iVar2 * 0x30 + *param_1;
  }
  return uVar5;
}



// FUNCTION 143197550 FUN_143197550 body=332 status=ok
// SIG undefined FUN_143197550(void)

undefined8 FUN_143197550(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char local_res10 [8];
  
  if ((((param_3[5] == 0) || (param_2[5] != 0)) &&
      (((char)param_3[4] == -1 || ((char)param_2[4] != -1)))) &&
     (((((char)param_3[3] == -1 || ((char)param_2[3] != -1)) &&
       (((int)param_3[2] == 0 || ((int)param_2[2] != 0)))) &&
      (((int)param_3[1] == 0 || ((int)param_2[1] != 0)))))) {
    lVar5 = *param_3;
    if (lVar5 == 0) {
      return 0;
    }
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    lVar5 = *param_3;
  }
  if (lVar5 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar4 = FUN_1431974a0(plVar1,lVar5,local_res10);
    lVar5 = 0;
    if (local_res10[0] != '\0') {
      lVar5 = lVar4;
    }
    if (lVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x20) + -1;
      if (-1 < iVar3) {
        do {
          lVar4 = (longlong)(iVar3 / 2) * 0x30 + *plVar1;
          if (*(longlong *)(lVar4 + 0x28) == 0) {
            bVar2 = true;
            goto LAB_143197624;
          }
          iVar3 = iVar3 / 2 + -1;
        } while (-1 < iVar3);
      }
      lVar4 = *plVar1;
      bVar2 = false;
LAB_143197624:
      lVar5 = 0;
      if (bVar2) {
        lVar5 = lVar4;
      }
    }
    if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
       ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
      cVar6 = lVar5 != 0;
    }
    else {
      if (lVar5 == 0) {
        return 0;
      }
      cVar6 = FUN_14319c290(lVar5,param_2 + 1,param_3 + 1);
    }
    if (cVar6 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1431976a0 Create body=465 status=ok
// SIG undefined Create(void)

undefined8 * CAkModulator::Create(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == 0) {
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x78);
    if (puVar4 != (undefined8 *)0x0) {
      CAkIndexable::CAkIndexable(puVar4);
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      puVar4[8] = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[7] = &PTR_FUN_144d838e0;
      ppuVar5 = &PTR__scalar_deleting_destructor__145acbdd0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
LAB_1431977f0:
      *puVar4 = ppuVar5;
      *(undefined1 *)(puVar4 + 0xe) = 0;
      lVar2 = DAT_146b50af8;
      if (puVar4 != (undefined8 *)0x0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x1c0);
        EnterCriticalSection(lpCriticalSection);
        cVar3 = FUN_14313b140(lVar2 + 0x1e8);
        if (cVar3 != '\0') {
          uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x1f0);
          puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x1e8) + uVar1 * 8);
          *(undefined8 **)(*(longlong *)(lVar2 + 0x1e8) + uVar1 * 8) = puVar4;
          *(int *)(lVar2 + 0x1f8) = *(int *)(lVar2 + 0x1f8) + 1;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      return puVar4;
    }
  }
  else if (param_2 == 1) {
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x78);
    if (puVar4 != (undefined8 *)0x0) {
      CAkIndexable::CAkIndexable(puVar4);
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      puVar4[8] = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[7] = &PTR_FUN_144d838e0;
      ppuVar5 = &PTR__scalar_deleting_destructor__145acbe20;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined4 *)(puVar4 + 3) = 1;
      goto LAB_1431977f0;
    }
  }
  else if (param_2 == 2) {
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x78);
    if (puVar4 != (undefined8 *)0x0) {
      CAkIndexable::CAkIndexable(puVar4);
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      puVar4[8] = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[7] = &PTR_FUN_144d838e0;
      ppuVar5 = &PTR__scalar_deleting_destructor__145acbe70;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined4 *)(puVar4 + 3) = 2;
      goto LAB_1431977f0;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143197880 Erase body=237 status=ok
// SIG undefined Erase(void)

ulonglong *
AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType>_>
::Erase(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)(*param_1 + -0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x30);
  if (puVar1 < puVar4) {
    puVar2 = puVar1 + 10;
    lVar3 = (ulonglong)((longlong)puVar4 + (-1 - (longlong)puVar1)) / 0x30 + 1;
    do {
      *(undefined1 *)(puVar2 + -5) = *(undefined1 *)(puVar2 + 1);
      puVar2[-9] = puVar2[-3];
      *(undefined1 *)(puVar2 + -8) = *(undefined1 *)(puVar2 + -2);
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
      ::Term(puVar2 + -7);
      puVar2[-7] = puVar2[-1];
      *(undefined4 *)(puVar2 + -6) = *(undefined4 *)puVar2;
      *(undefined4 *)((longlong)puVar2 + -0x2c) = *(undefined4 *)((longlong)puVar2 + 4);
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  (**(code **)*puVar4)(puVar4,0);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 143197970 FUN_143197970 body=236 status=ok
// SIG undefined FUN_143197970(void)

ulonglong * FUN_143197970(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)(*param_1 + -0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x30);
  if (puVar1 < puVar4) {
    puVar2 = puVar1 + 10;
    lVar3 = (ulonglong)((longlong)puVar4 + (-1 - (longlong)puVar1)) / 0x30 + 1;
    do {
      *(undefined4 *)(puVar2 + -5) = *(undefined4 *)(puVar2 + 1);
      puVar2[-9] = puVar2[-3];
      *(undefined1 *)(puVar2 + -8) = *(undefined1 *)(puVar2 + -2);
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
      ::Term(puVar2 + -7);
      puVar2[-7] = puVar2[-1];
      *(undefined4 *)(puVar2 + -6) = *(undefined4 *)puVar2;
      *(undefined4 *)((longlong)puVar2 + -0x2c) = *(undefined4 *)((longlong)puVar2 + 4);
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  (**(code **)*puVar4)(puVar4,0);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 143197a60 FUN_143197a60 body=253 status=ok
// SIG undefined FUN_143197a60(void)

ulonglong * FUN_143197a60(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)(*param_1 + -0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x30);
  if (puVar1 < puVar4) {
    puVar2 = puVar1 + 10;
    lVar3 = (ulonglong)((longlong)puVar4 + (-1 - (longlong)puVar1)) / 0x30 + 1;
    do {
      puVar2[-5] = puVar2[1];
      puVar2[-9] = puVar2[-3];
      *(undefined1 *)(puVar2 + -8) = *(undefined1 *)(puVar2 + -2);
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
      ::Term(puVar2 + -7);
      puVar2[-7] = puVar2[-1];
      *(undefined4 *)(puVar2 + -6) = *(undefined4 *)puVar2;
      *(undefined4 *)((longlong)puVar2 + -0x2c) = *(undefined4 *)((longlong)puVar2 + 4);
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  (**(code **)*puVar4)(puVar4,0);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 143197b60 FUN_143197b60 body=308 status=ok
// SIG undefined FUN_143197b60(void)

longlong FUN_143197b60(longlong param_1,char *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  char local_res10 [8];
  
  cVar3 = *param_2;
  if (((cVar3 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x20) != 0;
    }
    lVar1 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar1 = 0;
    }
  }
  else {
    if ((param_3 != (longlong *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
      *param_3 = param_1 + 8;
      cVar3 = *param_2;
    }
    lVar1 = FUN_143197340(param_1 + 0x18,cVar3,local_res10);
    lVar4 = 0;
    lVar2 = lVar4;
    if (local_res10[0] != '\0') {
      lVar2 = lVar1;
    }
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      cVar3 = param_2[8];
      if ((cVar3 != -1) || (*(longlong *)(param_2 + 0x10) != 0)) {
        if ((param_3 != (longlong *)0x0) && (*(char *)(lVar2 + 0x10) != '\0')) {
          *param_3 = lVar2 + 8;
          cVar3 = param_2[8];
        }
        lVar1 = FUN_143197340(lVar2 + 0x18,cVar3,local_res10);
        lVar2 = lVar4;
        if (local_res10[0] != '\0') {
          lVar2 = lVar1;
        }
        if (lVar2 == 0) {
          return 0;
        }
        if (*(longlong *)(param_2 + 0x10) != 0) {
          if ((param_3 != (longlong *)0x0) && (*(char *)(lVar2 + 0x10) != '\0')) {
            *param_3 = lVar2 + 8;
          }
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = 0;
          }
          lVar2 = FUN_143122170(lVar2 + 0x18,*(undefined8 *)(param_2 + 0x10));
          return lVar2;
        }
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(int *)(lVar2 + 0x20) != 0;
      }
      lVar1 = lVar2 + 8;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        lVar1 = lVar4;
      }
    }
  }
  return lVar1;
}



// FUNCTION 143197ca0 FUN_143197ca0 body=293 status=ok
// SIG undefined FUN_143197ca0(void)

longlong FUN_143197ca0(longlong param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char local_res10 [8];
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    if (param_4 != 0) {
      *(bool *)param_4 = *(int *)(param_1 + 0x20) != 0;
    }
    lVar1 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar1 = 0;
    }
  }
  else {
    if ((param_3 != (longlong *)0x0) && (*(char *)(param_1 + 0x10) != '\0')) {
      *param_3 = param_1 + 8;
      iVar3 = *param_2;
    }
    lVar1 = FUN_1431973f0(param_1 + 0x18,iVar3,local_res10);
    lVar4 = 0;
    lVar2 = lVar4;
    if (local_res10[0] != '\0') {
      lVar2 = lVar1;
    }
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      iVar3 = param_2[2];
      if (((iVar3 == 0) && ((char)param_2[4] == -1)) &&
         (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
        if (param_4 != 0) {
          *(bool *)param_4 = *(int *)(lVar2 + 0x20) != 0;
        }
        lVar1 = lVar2 + 8;
        if (*(char *)(lVar2 + 0x10) == '\0') {
          lVar1 = lVar4;
        }
      }
      else {
        if ((param_3 != (longlong *)0x0) && (*(char *)(lVar2 + 0x10) != '\0')) {
          *param_3 = lVar2 + 8;
          iVar3 = param_2[2];
        }
        lVar1 = FUN_1431973f0(lVar2 + 0x18,iVar3,local_res10);
        lVar2 = lVar4;
        if (local_res10[0] != '\0') {
          lVar2 = lVar1;
        }
        lVar1 = lVar4;
        if (lVar2 != 0) {
          lVar1 = FUN_143197b60(lVar2,param_2 + 4,param_3,param_4);
        }
      }
    }
  }
  return lVar1;
}



// FUNCTION 143197dd0 FUN_143197dd0 body=743 status=ok
// SIG undefined FUN_143197dd0(void)

void FUN_143197dd0(longlong param_1,code *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res18;
  char local_68;
  char local_67 [7];
  longlong *local_60;
  longlong local_58;
  int local_50 [2];
  int local_48 [2];
  undefined1 local_40 [8];
  undefined1 local_38;
  undefined8 local_30;
  
  local_40[0] = 0xff;
  local_58 = 0;
  local_50[0] = 0;
  local_48[0] = 0;
  local_38 = 0xff;
  local_30 = 0;
  local_res18 = param_3;
  if ((((*param_3 == 0) && ((int)param_3[1] == 0)) && ((int)param_3[2] == 0)) &&
     ((((char)param_3[3] == -1 && ((char)param_3[4] == -1)) && (param_3[5] == 0)))) {
    lVar4 = param_1 + 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      (*param_2)(lVar4,&local_58,param_4);
    }
  }
  lVar4 = *param_3;
  plVar6 = (longlong *)(param_1 + 0x18);
  local_60 = plVar6;
  if (lVar4 == 0) {
    lVar4 = *plVar6;
    if (lVar4 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar4) {
      do {
        local_58 = *(longlong *)(lVar4 + 0x28);
        lVar3 = lVar4 + 8;
        if (*(char *)(lVar4 + 0x10) == '\0') {
          lVar3 = 0;
        }
        if (lVar3 != 0) {
          (*param_2)(lVar3,&local_58,param_4);
          plVar6 = local_60;
        }
        iVar1 = (int)param_3[1];
        if (iVar1 == 0) {
          lVar3 = *(longlong *)(lVar4 + 0x18);
          plVar7 = param_3;
          if (lVar3 != (ulonglong)*(uint *)(lVar4 + 0x20) * 0x30 + lVar3) {
            do {
              local_50[0] = *(int *)(lVar3 + 0x28);
              lVar5 = lVar3 + 8;
              if (*(char *)(lVar3 + 0x10) == '\0') {
                lVar5 = 0;
              }
              if (lVar5 != 0) {
                (*param_2)(lVar5,&local_58,param_4);
              }
              iVar1 = (int)plVar7[2];
              param_3 = plVar7;
              if (iVar1 == 0) {
                lVar5 = *(longlong *)(lVar3 + 0x18);
                if (lVar5 != (ulonglong)*(uint *)(lVar3 + 0x20) * 0x30 + lVar5) {
                  do {
                    local_48[0] = *(int *)(lVar5 + 0x28);
                    FUN_143195370(lVar5,param_2,plVar7 + 3,&local_58,local_40,param_4,1);
                    lVar5 = lVar5 + 0x30;
                    param_3 = local_res18;
                  } while (lVar5 != (ulonglong)*(uint *)(lVar3 + 0x20) * 0x30 +
                                    *(longlong *)(lVar3 + 0x18));
                }
              }
              else {
                lVar2 = FUN_1431973f0(lVar3 + 0x18,iVar1,&local_68);
                lVar5 = 0;
                if (local_68 != '\0') {
                  lVar5 = lVar2;
                }
                if (lVar5 != 0) {
                  local_48[0] = iVar1;
                  FUN_143195370(lVar5,param_2,plVar7 + 3,&local_58,local_40,param_4,1);
                }
              }
              lVar3 = lVar3 + 0x30;
              plVar6 = local_60;
              plVar7 = param_3;
            } while (lVar3 != (ulonglong)*(uint *)(lVar4 + 0x20) * 0x30 +
                              *(longlong *)(lVar4 + 0x18));
          }
        }
        else {
          lVar5 = FUN_1431973f0(lVar4 + 0x18,iVar1,local_67);
          lVar3 = 0;
          if (local_67[0] != '\0') {
            lVar3 = lVar5;
          }
          plVar6 = local_60;
          if (lVar3 != 0) {
            local_50[0] = iVar1;
            FUN_143195a20(lVar3,param_2,param_3 + 2,&local_58,local_48,param_4,1);
            plVar6 = local_60;
          }
        }
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != (ulonglong)*(uint *)(plVar6 + 1) * 0x30 + *plVar6);
    }
  }
  else {
    lVar5 = FUN_1431974a0(plVar6,lVar4,&local_res18);
    lVar3 = 0;
    if ((char)local_res18 != '\0') {
      lVar3 = lVar5;
    }
    if (lVar3 != 0) {
      local_58 = lVar4;
      FUN_1431957e0(lVar3,param_2,param_3 + 1,&local_58,local_50,param_4,1);
    }
  }
  return;
}



// FUNCTION 1431980c0 FUN_1431980c0 body=468 status=ok
// SIG undefined FUN_1431980c0(void)

ulonglong FUN_1431980c0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong *plVar9;
  undefined7 uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 local_res8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pbVar12 = *(byte **)(param_1 + 0x20);
  pbVar13 = (byte *)0x0;
  local_res8[0] = DAT_1467be350;
  pbVar8 = pbVar13;
  if (pbVar12 != (byte *)0x0) {
    pbVar7 = pbVar13;
    do {
      uVar11 = (int)pbVar7 + 1;
      if (pbVar12[uVar11] == 0) {
        pbVar8 = pbVar12 + (longlong)pbVar7 * 4 + ((ulonglong)(*pbVar12 + 4) & 0xfffffffc);
        break;
      }
      pbVar7 = (byte *)(ulonglong)uVar11;
    } while (uVar11 < *pbVar12);
  }
  local_a8 = *(undefined4 *)param_2;
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
  pbVar12 = (byte *)*param_2;
  uVar11 = *(uint *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_98 = *(int *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_90 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  pbVar7 = (byte *)local_res8;
  if (pbVar8 != (byte *)0x0) {
    pbVar7 = pbVar8;
  }
  local_88 = *(undefined4 *)(param_2 + 4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = *(undefined4 *)(param_2 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  iVar1 = *(int *)pbVar7;
  pbVar8 = (byte *)(ulonglong)uVar11;
  pbVar7 = (byte *)param_2[5];
  if (0 < iVar1) {
    if (*(char *)(param_2 + 4) != -1) {
      pbVar8 = pbVar13;
    }
    uVar11 = (uint)pbVar8;
    uStack_80 = 0;
    uStack_7c = 0;
    pbVar7 = pbVar13;
    if (1 < iVar1) {
      uVar11 = (uint)local_88 >> 8;
      local_88 = CONCAT31((int3)uVar11,0xff);
      if (2 < iVar1) {
        pbVar12 = pbVar13;
      }
      uVar11 = (uint)uStack_90 >> 8;
      uStack_90 = CONCAT31((int3)uVar11,0xff);
      local_98 = 0;
      local_a8 = SUB84(pbVar12,0);
      uStack_a4 = (undefined4)((ulonglong)pbVar12 >> 0x20);
      uVar11 = 0;
      pbVar8 = pbVar13;
    }
  }
  if ((((pbVar12 == (byte *)0x0) && ((int)pbVar8 == 0)) && (local_98 == 0)) &&
     ((((char)uStack_90 == -1 && ((char)local_88 == -1)) && (pbVar7 == (byte *)0x0)))) {
    if (*(char *)(param_1 + 0x48) == '\0') goto LAB_14319826b;
    plVar9 = (longlong *)(param_1 + 0x40);
  }
  else {
    uStack_70 = uVar11;
    uStack_6c = uVar3;
    local_68 = local_98;
    uStack_64 = uVar4;
    uStack_60 = uStack_90;
    uStack_5c = uVar5;
    local_58 = local_88;
    uStack_54 = uVar6;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    pbVar8 = (byte *)FUN_1431974a0(param_1 + 0x50,pbVar12,local_res8);
    if ((byte)local_res8[0] != 0) {
      pbVar13 = pbVar8;
    }
    if (pbVar13 == (byte *)0x0) goto LAB_14319826b;
    plVar9 = (longlong *)FUN_143197ca0(pbVar13,&uStack_70,0,0);
  }
  pbVar8 = (byte *)0x0;
  if (plVar9 != (longlong *)0x0) {
    lVar2 = *plVar9;
    pbVar8 = (byte *)0x0;
    if (lVar2 != 0) {
      *(undefined4 *)param_2 = local_a8;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_a4;
      *(uint *)(param_2 + 1) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      *(int *)(param_2 + 2) = local_98;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      *(undefined4 *)(param_2 + 3) = uStack_90;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
      *(undefined4 *)(param_2 + 4) = local_88;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
      *(undefined4 *)(param_2 + 5) = uStack_80;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_7c;
      uVar10 = (undefined7)((ulonglong)lVar2 >> 8);
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        *param_3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x60) + 0xc);
        return CONCAT71(uVar10,1);
      }
      *param_3 = *(undefined4 *)(lVar2 + 0x80);
      return CONCAT71(uVar10,1);
    }
  }
LAB_14319826b:
  return (ulonglong)pbVar8 & 0xffffffffffffff00;
}



// FUNCTION 1431982a0 GetCurrentValue body=24 status=ok
// SIG undefined GetCurrentValue(void)

undefined4 CAkModulatorCtx::GetCurrentValue(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xc);
  }
  return *(undefined4 *)(param_1 + 0x80);
}



// FUNCTION 1431982c0 FUN_1431982c0 body=2028 status=ok
// SIG undefined FUN_1431982c0(void)

void FUN_1431982c0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float local_res8 [2];
  undefined4 uStack_fc;
  undefined4 uStack_f4;
  undefined7 uStack_ef;
  undefined7 uStack_e7;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  pfVar13 = (float *)0x0;
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar5 = CONCAT44(uStack_fc,*(undefined4 *)(param_3 + 0x58));
  uVar6 = CONCAT44(uStack_f4,*(undefined4 *)(param_3 + 0x54));
  uVar7 = CONCAT71(uStack_ef,*(undefined1 *)(param_3 + 0x51));
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be374;
  uVar8 = CONCAT71(uStack_e7,*(undefined1 *)(param_3 + 0x50));
  pfVar11 = pfVar13;
  if (pbVar3 != (byte *)0x0) {
    pfVar10 = pfVar13;
    do {
      uVar12 = (int)pfVar10 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 9) {
        pfVar11 = (float *)(pbVar3 + (longlong)pfVar10 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  pfVar10 = local_res8;
  if (pfVar11 != (float *)0x0) {
    pfVar10 = pfVar11;
  }
  fVar14 = *pfVar10;
  local_res8[0] = fVar14;
  local_d8 = uVar1;
  uStack_d0 = uVar5;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  uStack_b0 = uVar2;
  if ((*(uint *)(param_1 + 0x30) & 0x100) != 0) {
    fVar14 = (float)FUN_143134160(g_pRTPCMgr,param_1,8,&local_d8);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar11 = pfVar13;
    do {
      uVar12 = (int)pfVar11 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 9) {
        if (pbVar3 + (longlong)pfVar11 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar14 = fVar15 + fVar14;
          if (0.0 <= fVar14) {
            if (3.4028235e+38 <= fVar14) {
              fVar14 = 3.4028235e+38;
            }
          }
          else {
            fVar14 = 0.0;
          }
        }
        break;
      }
      pfVar11 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  if ((double)DAT_1467bdcac * (double)fVar14 <= 0.0) {
    lVar4 = 0xbfe00000;
  }
  else {
    lVar4 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x1c) = (int)((double)(lVar4 << 0x20) + (double)DAT_1467bdcac * (double)fVar14)
  ;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be37c;
  pfVar11 = pfVar13;
  if (pbVar3 != (byte *)0x0) {
    pfVar10 = pfVar13;
    do {
      uVar12 = (int)pfVar10 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xb) {
        pfVar11 = (float *)(pbVar3 + (longlong)pfVar10 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  pfVar10 = local_res8;
  if (pfVar11 != (float *)0x0) {
    pfVar10 = pfVar11;
  }
  fVar14 = *pfVar10;
  local_res8[0] = fVar14;
  local_d8 = uVar1;
  uStack_d0 = uVar5;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  uStack_b0 = uVar2;
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    fVar14 = (float)FUN_143134160(g_pRTPCMgr,param_1,10,&local_d8);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar11 = pfVar13;
    do {
      uVar12 = (int)pfVar11 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xb) {
        if (pbVar3 + (longlong)pfVar11 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar14 = fVar15 + fVar14;
          if (0.0 <= fVar14) {
            if (3.4028235e+38 <= fVar14) {
              fVar14 = 3.4028235e+38;
            }
          }
          else {
            fVar14 = 0.0;
          }
        }
        break;
      }
      pfVar11 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  if ((double)DAT_1467bdcac * (double)fVar14 <= 0.0) {
    lVar4 = 0xbfe00000;
  }
  else {
    lVar4 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x28) = (int)((double)(lVar4 << 0x20) + (double)DAT_1467bdcac * (double)fVar14)
  ;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be388;
  pfVar11 = pfVar13;
  if (pbVar3 != (byte *)0x0) {
    pfVar10 = pfVar13;
    do {
      uVar12 = (int)pfVar10 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xe) {
        pfVar11 = (float *)(pbVar3 + (longlong)pfVar10 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  pfVar10 = local_res8;
  if (pfVar11 != (float *)0x0) {
    pfVar10 = pfVar11;
  }
  fVar14 = *pfVar10;
  local_res8[0] = fVar14;
  local_d8 = uVar1;
  uStack_d0 = uVar5;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  uStack_b0 = uVar2;
  if ((*(uint *)(param_1 + 0x30) & 0x2000) != 0) {
    fVar14 = (float)FUN_143134160(g_pRTPCMgr,param_1,0xd,&local_d8);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar11 = pfVar13;
    do {
      uVar12 = (int)pfVar11 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xe) {
        if (pbVar3 + (longlong)pfVar11 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar14 = fVar15 + fVar14;
          if (0.0 <= fVar14) {
            if (3.4028235e+38 <= fVar14) {
              fVar14 = 3.4028235e+38;
            }
          }
          else {
            fVar14 = 0.0;
          }
        }
        break;
      }
      pfVar11 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  if ((double)DAT_1467bdcac * (double)fVar14 <= 0.0) {
    lVar4 = 0xbfe00000;
  }
  else {
    lVar4 = 0x3fe00000;
  }
  *(int *)(param_2 + 0x2c) = (int)((double)(lVar4 << 0x20) + (double)DAT_1467bdcac * (double)fVar14)
  ;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be384;
  pfVar11 = pfVar13;
  if (pbVar3 != (byte *)0x0) {
    pfVar10 = pfVar13;
    do {
      uVar12 = (int)pfVar10 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xd) {
        pfVar11 = (float *)(pbVar3 + (longlong)pfVar10 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  pfVar10 = local_res8;
  if (pfVar11 != (float *)0x0) {
    pfVar10 = pfVar11;
  }
  fVar14 = *pfVar10;
  local_res8[0] = fVar14;
  local_d8 = uVar1;
  uStack_d0 = uVar5;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  uStack_b0 = uVar2;
  if ((*(uint *)(param_1 + 0x30) & 0x1000) != 0) {
    fVar14 = (float)FUN_143134160(g_pRTPCMgr,param_1,0xc,&local_d8);
  }
  if (fVar14 < 0.0) {
    iVar9 = 0x7fffffff;
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x28);
    if (pbVar3 != (byte *)0x0) {
      pfVar11 = pfVar13;
      do {
        uVar12 = (int)pfVar11 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xd) {
          if (pbVar3 + (longlong)pfVar11 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) !=
              (byte *)0x0) {
            fVar15 = (float)RandomizerModifier::GetMod();
            fVar14 = fVar15 + fVar14;
            if (0.0 <= fVar14) {
              if (3.4028235e+38 <= fVar14) {
                fVar14 = 3.4028235e+38;
              }
            }
            else {
              fVar14 = 0.0;
            }
          }
          break;
        }
        pfVar11 = (float *)(ulonglong)uVar12;
      } while (uVar12 < *pbVar3);
    }
    uVar12 = 0x3fe00000;
    if ((double)DAT_1467bdcac * (double)fVar14 <= 0.0) {
      uVar12 = 0xbfe00000;
    }
    iVar9 = (int)((double)((ulonglong)uVar12 << 0x20) + (double)DAT_1467bdcac * (double)fVar14) +
            *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x28);
  }
  *(int *)(param_2 + 8) = iVar9;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be380;
  pfVar11 = pfVar13;
  if (pbVar3 != (byte *)0x0) {
    pfVar10 = pfVar13;
    do {
      uVar12 = (int)pfVar10 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xc) {
        pfVar11 = (float *)(pbVar3 + (longlong)pfVar10 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  pfVar10 = local_res8;
  if (pfVar11 != (float *)0x0) {
    pfVar10 = pfVar11;
  }
  *(float *)(param_2 + 0x24) = *pfVar10;
  local_d8 = uVar1;
  uStack_d0 = uVar5;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  uStack_b0 = uVar2;
  if ((*(uint *)(param_1 + 0x30) & 0x800) != 0) {
    uVar16 = FUN_143134160(g_pRTPCMgr,param_1,0xb,&local_d8);
    *(undefined4 *)(param_2 + 0x24) = uVar16;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar11 = pfVar13;
    do {
      uVar12 = (int)pfVar11 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 0xc) {
        if (pbVar3 + (longlong)pfVar11 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar14 = (float)RandomizerModifier::GetMod();
          fVar14 = fVar14 + *(float *)(param_2 + 0x24);
          if (0.0 <= fVar14) {
            if (100.0 <= fVar14) {
              fVar14 = 100.0;
            }
          }
          else {
            fVar14 = 0.0;
          }
          goto LAB_1431988ca;
        }
        break;
      }
      pfVar11 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  fVar14 = *(float *)(param_2 + 0x24);
LAB_1431988ca:
  *(float *)(param_2 + 0x24) = fVar14 * 0.01;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be378;
  pfVar11 = pfVar13;
  if (pbVar3 != (byte *)0x0) {
    pfVar10 = pfVar13;
    do {
      uVar12 = (int)pfVar10 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar12 + (longlong)pbVar3) == 10) {
        pfVar11 = (float *)(pbVar3 + (longlong)pfVar10 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar10 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  pfVar10 = local_res8;
  if (pfVar11 != (float *)0x0) {
    pfVar10 = pfVar11;
  }
  *(float *)(param_2 + 0x20) = *pfVar10;
  local_d8 = uVar1;
  uStack_d0 = uVar5;
  local_c8 = uVar6;
  uStack_c0 = uVar7;
  local_b8 = uVar8;
  uStack_b0 = uVar2;
  if ((*(uint *)(param_1 + 0x30) & 0x200) != 0) {
    uVar16 = FUN_143134160(g_pRTPCMgr,param_1,9,&local_d8);
    *(undefined4 *)(param_2 + 0x20) = uVar16;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    do {
      uVar12 = (int)pfVar13 + 1;
      if (pbVar3[uVar12] == 10) {
        if (pbVar3 + (longlong)pfVar13 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar14 = (float)RandomizerModifier::GetMod();
          fVar14 = fVar14 + *(float *)(param_2 + 0x20);
          if (0.0 <= fVar14) {
            if (100.0 <= fVar14) {
              fVar14 = 100.0;
            }
          }
          else {
            fVar14 = 0.0;
          }
          goto LAB_143198989;
        }
        break;
      }
      pfVar13 = (float *)(ulonglong)uVar12;
    } while (uVar12 < *pbVar3);
  }
  fVar14 = *(float *)(param_2 + 0x20);
LAB_143198989:
  *(float *)(param_2 + 0x20) = fVar14 * 0.01;
  fVar14 = *(float *)(param_3 + 0x80);
  if (0.0 <= fVar14) {
    fVar15 = 1.0;
    if (fVar14 <= 1.0) {
      fVar15 = fVar14;
    }
    *(float *)(param_2 + 0x18) = fVar15;
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 143198ab0 GetInitialParams body=2126 status=ok
// SIG undefined GetInitialParams(void)

void CAkLFOModulator::GetInitialParams(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined7 uStack_a7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  pfVar11 = (float *)0x0;
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(param_3 + 0x58));
  uStack_b0 = CONCAT71(uStack_b0._1_7_,*(undefined1 *)(param_3 + 0x51));
  uVar6 = CONCAT44(uStack_b4,*(undefined4 *)(param_3 + 0x54));
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be358;
  uVar7 = CONCAT71(uStack_a7,*(undefined1 *)(param_3 + 0x50));
  uStack_90 = uStack_c0;
  uStack_80 = uStack_b0;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 2) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  *(float *)(param_2 + 0x18) = *pfVar8;
  local_98 = uVar1;
  local_88 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar2;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar14 = FUN_143134160(g_pRTPCMgr,param_1,0,&local_98);
    *(undefined4 *)(param_2 + 0x18) = uVar14;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar9 = pfVar11;
    do {
      uVar10 = (int)pfVar9 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 2) {
        if (pbVar3 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar15 = fVar15 + *(float *)(param_2 + 0x18);
          if (0.0 <= fVar15) {
            if (100.0 <= fVar15) {
              fVar15 = 100.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          goto LAB_143198bda;
        }
        break;
      }
      pfVar9 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  fVar15 = *(float *)(param_2 + 0x18);
LAB_143198bda:
  uStack_90 = uStack_c0;
  *(float *)(param_2 + 0x18) = fVar15 * 0.01;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be364;
  uStack_80 = uStack_b0;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 5) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  *(float *)(param_2 + 0x24) = *pfVar8;
  if ((*(byte *)(param_1 + 0x30) & 8) != 0) {
    local_98 = uVar1;
    local_88 = uVar6;
    local_78 = uVar7;
    uStack_70 = uVar2;
    fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1,3,&local_98);
    *(int *)(param_2 + 0x24) = (int)fVar15;
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be360;
  uStack_90 = uStack_c0;
  uStack_80 = uStack_b0;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 4) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  *(float *)(param_2 + 0x28) = *pfVar8;
  local_98 = uVar1;
  local_88 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar2;
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    uVar14 = FUN_143134160(g_pRTPCMgr,param_1,2,&local_98);
    *(undefined4 *)(param_2 + 0x28) = uVar14;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar9 = pfVar11;
    do {
      uVar10 = (int)pfVar9 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 4) {
        if (pbVar3 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar15 = fVar15 + *(float *)(param_2 + 0x28);
          if (0.0 <= fVar15) {
            if (20000.0 <= fVar15) {
              fVar15 = 20000.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          *(float *)(param_2 + 0x28) = fVar15;
        }
        break;
      }
      pfVar9 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be36c;
  uStack_90 = uStack_c0;
  uStack_80 = uStack_b0;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 7) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  *(float *)(param_2 + 0x30) = *pfVar8;
  local_98 = uVar1;
  local_88 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar2;
  if ((*(byte *)(param_1 + 0x30) & 0x20) != 0) {
    uVar14 = FUN_143134160(g_pRTPCMgr,param_1,5,&local_98);
    *(undefined4 *)(param_2 + 0x30) = uVar14;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar9 = pfVar11;
    do {
      uVar10 = (int)pfVar9 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 7) {
        if (pbVar3 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar15 = fVar15 + *(float *)(param_2 + 0x30);
          if (0.0 <= fVar15) {
            if (100.0 <= fVar15) {
              fVar15 = 100.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          goto LAB_143198e5a;
        }
        break;
      }
      pfVar9 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  fVar15 = *(float *)(param_2 + 0x30);
LAB_143198e5a:
  uStack_90 = uStack_c0;
  *(float *)(param_2 + 0x30) = fVar15 * 0.01;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be368;
  uStack_80 = uStack_b0;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 6) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  *(float *)(param_2 + 0x2c) = *pfVar8;
  local_98 = uVar1;
  local_88 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar2;
  if ((*(byte *)(param_1 + 0x30) & 0x10) != 0) {
    uVar14 = FUN_143134160(g_pRTPCMgr,param_1,4,&local_98);
    *(undefined4 *)(param_2 + 0x2c) = uVar14;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar9 = pfVar11;
    do {
      uVar10 = (int)pfVar9 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 6) {
        if (pbVar3 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar15 = (float)RandomizerModifier::GetMod();
          fVar15 = fVar15 + *(float *)(param_2 + 0x2c);
          if (0.0 <= fVar15) {
            if (100.0 <= fVar15) {
              fVar15 = 100.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
          goto LAB_143198f0a;
        }
        break;
      }
      pfVar9 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  fVar15 = *(float *)(param_2 + 0x2c);
LAB_143198f0a:
  uStack_90 = uStack_c0;
  *(float *)(param_2 + 0x2c) = fVar15 * 0.01;
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be35c;
  uStack_80 = uStack_b0;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 3) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  fVar15 = *pfVar8;
  local_res8[0] = fVar15;
  local_98 = uVar1;
  local_88 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar2;
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1,1,&local_98);
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    pfVar9 = pfVar11;
    do {
      uVar10 = (int)pfVar9 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 3) {
        if (pbVar3 + (longlong)pfVar9 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar16 = (float)RandomizerModifier::GetMod();
          fVar15 = fVar16 + fVar15;
          if (0.0 <= fVar15) {
            if (3.4028235e+38 <= fVar15) {
              fVar15 = 3.4028235e+38;
            }
          }
          else {
            fVar15 = 0.0;
          }
        }
        break;
      }
      pfVar9 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  if ((double)DAT_1467bdcac * (double)fVar15 <= 0.0) {
    uVar10 = 0xbfe00000;
  }
  else {
    uVar10 = 0x3fe00000;
  }
  uStack_90 = uStack_c0;
  uStack_80 = uStack_b0;
  *(int *)(param_2 + 0x1c) =
       (int)((double)DAT_1467bdcac * (double)fVar15 + (double)((ulonglong)uVar10 << 0x20));
  pbVar3 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be370;
  pfVar9 = pfVar11;
  if (pbVar3 != (byte *)0x0) {
    pfVar8 = pfVar11;
    do {
      uVar10 = (int)pfVar8 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar10 + (longlong)pbVar3) == 8) {
        pfVar9 = (float *)(pbVar3 + (longlong)pfVar8 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc));
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  pfVar8 = local_res8;
  if (pfVar9 != (float *)0x0) {
    pfVar8 = pfVar9;
  }
  *(float *)(param_2 + 0x20) = *pfVar8;
  local_98 = uVar1;
  local_88 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar2;
  if ((*(byte *)(param_1 + 0x30) & 0x40) != 0) {
    uVar14 = FUN_143134160(g_pRTPCMgr,param_1,6,&local_98);
    *(undefined4 *)(param_2 + 0x20) = uVar14;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != (byte *)0x0) {
    do {
      uVar10 = (int)pfVar11 + 1;
      if (pbVar3[uVar10] == 8) {
        if (pbVar3 + (longlong)pfVar11 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar16 = (float)RandomizerModifier::GetMod();
          fVar16 = fVar16 + *(float *)(param_2 + 0x20);
          fVar15 = -180.0;
          if ((-180.0 <= fVar16) && (fVar15 = fVar16, 180.0 <= fVar16)) {
            fVar15 = 180.0;
          }
          *(float *)(param_2 + 0x20) = fVar15;
        }
        break;
      }
      pfVar11 = (float *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar3);
  }
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  fVar15 = *(float *)(param_2 + 0x20);
  uVar12 = DAT_146b50b60 >> 0x21;
  DSP::MonoLFO<DSP::Unipolar,DSP::ModulatorLFOOutputPolicy>::SetParams
            (param_2 + 0x38,48000,param_2 + 0x24);
  iVar4 = *(int *)(param_2 + 0x4c);
  plVar5 = (longlong *)(param_2 + 0x50);
  lVar13 = *plVar5;
  if (*(int *)(param_2 + 0x24) == 0) {
    fVar16 = 6.2831855;
  }
  else {
    fVar16 = 1.0;
  }
  fVar15 = fVar16 * fVar15 * 0.0027777778;
  uStack_c0._0_4_ = (undefined4)*(undefined8 *)(param_2 + 0x40);
  uStack_c0 = CONCAT44(fVar15,(undefined4)uStack_c0);
  if (iVar4 == 1) {
    fVar15 = fVar15 + 0.25;
    uStack_c0 = CONCAT44(fVar15,(undefined4)uStack_c0);
    lVar13 = *plVar5;
  }
  else if (iVar4 == 3) {
    fVar15 = fVar15 + 0.5;
    uStack_c0 = CONCAT44(fVar15,(undefined4)uStack_c0);
    lVar13 = *plVar5;
  }
  else if (iVar4 == 5) {
    lVar13 = uVar12 * 0x5851f42d4c957f2d + 1;
  }
  if (fVar15 < 0.0) {
    fVar15 = fVar15 + fVar16;
    uStack_c0 = CONCAT44(fVar15,(undefined4)uStack_c0);
  }
  if (fVar16 <= fVar15) {
    fVar15 = fVar15 - fVar16;
    uStack_c0 = CONCAT44(fVar15,(undefined4)uStack_c0);
  }
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x40) = uStack_c0;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(int *)(param_2 + 0x4c) = iVar4;
  *(longlong *)(param_2 + 0x50) = lVar13;
  if (iVar4 == 0) {
    fVar16 = 6.2831855;
  }
  else {
    if (iVar4 == 5) {
      return;
    }
    fVar16 = 1.0;
  }
  fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15,fVar16);
  *(float *)(param_2 + 0x44) = fVar15;
  return;
}



// FUNCTION 143199300 FUN_143199300 body=1165 status=ok
// SIG undefined FUN_143199300(void)

void FUN_143199300(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  undefined4 uStack_dc;
  undefined4 uStack_d4;
  undefined7 uStack_cf;
  undefined7 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  pfVar18 = (float *)0x0;
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  uVar3 = *(undefined4 *)(param_3 + 0x58);
  uVar4 = *(undefined4 *)(param_3 + 0x54);
  uVar1 = *(undefined1 *)(param_3 + 0x51);
  uVar2 = *(undefined1 *)(param_3 + 0x50);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  pbVar8 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be390;
  pfVar14 = pfVar18;
  if (pbVar8 != (byte *)0x0) {
    pfVar13 = pfVar18;
    do {
      uVar15 = (int)pfVar13 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar15 + (longlong)pbVar8) == 0x10) {
        pfVar14 = (float *)(pbVar8 + (longlong)pfVar13 * 4 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar13 = (float *)(ulonglong)uVar15;
    } while (uVar15 < *pbVar8);
  }
  uVar15 = 0x3fe00000;
  pfVar13 = local_res8;
  if (pfVar14 != (float *)0x0) {
    pfVar13 = pfVar14;
  }
  if ((float)DAT_1467bdcac * *pfVar13 <= 0.0) {
    fVar5 = -0.5;
  }
  else {
    fVar5 = 0.5;
  }
  *(int *)(param_2 + 0x18) = (int)(fVar5 + (float)DAT_1467bdcac * *pfVar13);
  pbVar8 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be354;
  pfVar14 = pfVar18;
  if (pbVar8 != (byte *)0x0) {
    pfVar13 = pfVar18;
    do {
      uVar16 = (int)pfVar13 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar16 + (longlong)pbVar8) == 1) {
        pfVar14 = (float *)(pbVar8 + (longlong)pfVar13 * 4 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar13 = (float *)(ulonglong)uVar16;
    } while (uVar16 < *pbVar8);
  }
  uVar9 = CONCAT44(uStack_dc,uVar3);
  uVar10 = CONCAT44(uStack_d4,uVar4);
  uVar11 = CONCAT71(uStack_cf,uVar1);
  pfVar13 = local_res8;
  if (pfVar14 != (float *)0x0) {
    pfVar13 = pfVar14;
  }
  uVar12 = CONCAT71(uStack_c7,uVar2);
  fVar5 = *pfVar13;
  local_res8[0] = DAT_1467be398;
  pfVar14 = pfVar18;
  if (pbVar8 != (byte *)0x0) {
    pfVar13 = pfVar18;
    do {
      uVar16 = (int)pfVar13 + 1;
      if (pbVar8[uVar16] == 0x12) {
        pfVar14 = (float *)(pbVar8 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc) + (longlong)pfVar13 * 4
                           );
        break;
      }
      pfVar13 = (float *)(ulonglong)uVar16;
    } while (uVar16 < *pbVar8);
  }
  pfVar13 = local_res8;
  if (pfVar14 != (float *)0x0) {
    pfVar13 = pfVar14;
  }
  fVar19 = *pfVar13;
  local_res8[0] = fVar19;
  local_b8 = uVar6;
  uStack_b0 = uVar9;
  local_a8 = uVar10;
  uStack_a0 = uVar11;
  local_98 = uVar12;
  uStack_90 = uVar7;
  if ((*(uint *)(param_1 + 0x30) & 0x4000) != 0) {
    fVar19 = (float)FUN_143134160(g_pRTPCMgr,param_1,0xe,&local_b8);
  }
  pbVar8 = *(byte **)(param_1 + 0x28);
  if (pbVar8 != (byte *)0x0) {
    pfVar14 = pfVar18;
    do {
      uVar16 = (int)pfVar14 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar16 + (longlong)pbVar8) == 0x12) {
        if (pbVar8 + (longlong)pfVar14 * 8 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar20 = (float)RandomizerModifier::GetMod();
          fVar20 = fVar20 + fVar19;
          fVar19 = 0.25;
          if ((0.25 <= fVar20) && (fVar19 = fVar20, 4.0 <= fVar20)) {
            fVar19 = 4.0;
          }
        }
        break;
      }
      pfVar14 = (float *)(ulonglong)uVar16;
    } while (uVar16 < *pbVar8);
  }
  *(float *)(param_2 + 0x20) = fVar19;
  pbVar8 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be39c;
  pfVar14 = pfVar18;
  if (pbVar8 != (byte *)0x0) {
    pfVar13 = pfVar18;
    do {
      uVar16 = (int)pfVar13 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar16 + (longlong)pbVar8) == 0x13) {
        pfVar14 = (float *)(pbVar8 + (longlong)pfVar13 * 4 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar13 = (float *)(ulonglong)uVar16;
    } while (uVar16 < *pbVar8);
  }
  pfVar13 = local_res8;
  if (pfVar14 != (float *)0x0) {
    pfVar13 = pfVar14;
  }
  fVar19 = *pfVar13;
  local_res8[0] = fVar19;
  local_b8 = uVar6;
  uStack_b0 = uVar9;
  local_a8 = uVar10;
  uStack_a0 = uVar11;
  local_98 = uVar12;
  uStack_90 = uVar7;
  if ((*(uint *)(param_1 + 0x30) & 0x8000) != 0) {
    fVar19 = (float)FUN_143134160(g_pRTPCMgr,param_1,0xf,&local_b8);
  }
  pbVar8 = *(byte **)(param_1 + 0x28);
  if (pbVar8 != (byte *)0x0) {
    pfVar14 = pfVar18;
    do {
      uVar16 = (int)pfVar14 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar16 + (longlong)pbVar8) == 0x13) {
        if (pbVar8 + (longlong)pfVar14 * 8 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          fVar20 = (float)RandomizerModifier::GetMod();
          fVar20 = fVar20 + fVar19;
          fVar19 = 0.0;
          if ((0.0 <= fVar20) && (fVar19 = fVar20, 4.0 <= fVar20)) {
            fVar19 = 4.0;
          }
        }
        break;
      }
      pfVar14 = (float *)(ulonglong)uVar16;
    } while (uVar16 < *pbVar8);
  }
  if ((double)DAT_1467bdcac * (double)fVar19 <= 0.0) {
    uVar15 = 0xbfe00000;
  }
  *(int *)(param_2 + 0x24) =
       (int)((double)DAT_1467bdcac * (double)fVar19 + (double)((ulonglong)uVar15 << 0x20));
  pbVar8 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be394;
  pfVar14 = pfVar18;
  if (pbVar8 != (byte *)0x0) {
    pfVar13 = pfVar18;
    do {
      uVar15 = (int)pfVar13 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar15 + (longlong)pbVar8) == 0x11) {
        pfVar14 = (float *)(pbVar8 + (longlong)pfVar13 * 4 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc)
                           );
        break;
      }
      pfVar13 = (float *)(ulonglong)uVar15;
    } while (uVar15 < *pbVar8);
  }
  pfVar13 = local_res8;
  if (pfVar14 != (float *)0x0) {
    pfVar13 = pfVar14;
  }
  fVar19 = *pfVar13;
  if (fVar19 == 0.0) {
    iVar17 = 0x7fffffff;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x28);
    if (pbVar8 == (byte *)0x0) {
LAB_143199730:
      iVar17 = (int)fVar19 * *(int *)(param_2 + 0x18);
    }
    else {
      do {
        uVar15 = (int)pfVar18 + 1;
        if (pbVar8[uVar15] == 0x11) {
          if (pbVar8 + (longlong)pfVar18 * 8 + ((ulonglong)(*pbVar8 + 4) & 0xfffffffc) ==
              (byte *)0x0) goto LAB_143199730;
          iVar17 = RandomizerModifier::GetMod<long>();
          fVar19 = (float)((int)fVar19 + iVar17);
          if (0 < (int)fVar19) {
            if (100 < (int)fVar19) {
              fVar19 = 1.4013e-43;
            }
            goto LAB_143199730;
          }
          iVar17 = *(int *)(param_2 + 0x18);
          goto LAB_14319973c;
        }
        pfVar18 = (float *)(ulonglong)uVar15;
      } while (uVar15 < *pbVar8);
      iVar17 = (int)fVar19 * *(int *)(param_2 + 0x18);
    }
  }
LAB_14319973c:
  *(int *)(param_2 + 0x1c) = iVar17;
  if (fVar5 == 0.0) {
    *(undefined4 *)(param_2 + 8) = 0x7fffffff;
  }
  else {
    *(int *)(param_2 + 8) = iVar17;
  }
  return;
}



// FUNCTION 143199790 GetMod body=92 status=ok
// SIG undefined GetMod(void)

float RandomizerModifier::GetMod(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = 0.0;
  if (param_1[1] - fVar1 != 0.0) {
    DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
    fVar2 = (float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 4.656613e-10 * (param_1[1] - fVar1);
    fVar1 = *param_1;
  }
  return fVar1 + fVar2;
}



// FUNCTION 1431997f0 FUN_1431997f0 body=168 status=ok
// SIG undefined FUN_1431997f0(void)

undefined8 FUN_1431997f0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 << 4);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != puVar2)) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 1);
      puVar3 = puVar2;
      if (uVar6 != 0) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
          }
          puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 2;
        } while (uVar6 != 0);
        puVar4 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = (longlong)puVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1431998a0 FUN_1431998a0 body=335 status=ok
// SIG undefined FUN_1431998a0(void)

undefined8 FUN_1431998a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 * 0x30);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((longlong)pvVar2 + 0x24);
      do {
        if ((undefined8 *)(puVar6 + -9) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar6 + -7) = 0;
          *(undefined1 *)(puVar6 + -5) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          *(undefined8 *)(puVar6 + -1) = 0;
          *(undefined ***)(puVar6 + -9) = &PTR_FUN_144d838d0;
        }
        lVar1 = *param_1 + (-0x24 - (longlong)pvVar2);
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0x28);
        *(undefined8 *)(puVar6 + -7) = *(undefined8 *)((longlong)puVar6 + lVar1 + 8);
        *(undefined1 *)(puVar6 + -5) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0x10);
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18);
        puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x20);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x24);
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18) = 0;
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x20) = 0;
        puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x24 - (longlong)pvVar2));
        (**(code **)*puVar3)(puVar3,0);
        puVar6 = puVar6 + 0xc;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1431999f0 FUN_1431999f0 body=272 status=ok
// SIG undefined FUN_1431999f0(void)

undefined8 FUN_1431999f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 * 0x30);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      lVar5 = (longlong)pvVar2 + 0x24;
      do {
        puVar3 = (undefined8 *)(lVar5 + -0x24);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar5 + -0x1c) = 0;
          *(undefined1 *)(lVar5 + -0x14) = 0;
          *(undefined8 *)(lVar5 + -0xc) = 0;
          *(undefined8 *)(lVar5 + -4) = 0;
          *puVar3 = &PTR_FUN_144d838d0;
        }
        lVar1 = (-0x24 - (longlong)pvVar2) + lVar5;
        AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
        ::ChildTreeType::Transfer(puVar3,*param_1 + lVar1);
        puVar3 = (undefined8 *)(*param_1 + lVar1);
        (**(code **)*puVar3)(puVar3,0);
        lVar5 = lVar5 + 0x30;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  return 1;
}



// FUNCTION 143199b00 FUN_143199b00 body=334 status=ok
// SIG undefined FUN_143199b00(void)

undefined8 FUN_143199b00(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 * 0x30);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((longlong)pvVar2 + 0x24);
      do {
        if ((undefined8 *)(puVar6 + -9) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar6 + -7) = 0;
          *(undefined1 *)(puVar6 + -5) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          *(undefined8 *)(puVar6 + -1) = 0;
          *(undefined ***)(puVar6 + -9) = &PTR_FUN_144d838d0;
        }
        lVar1 = *param_1 + (-0x24 - (longlong)pvVar2);
        puVar6[1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x28);
        *(undefined8 *)(puVar6 + -7) = *(undefined8 *)((longlong)puVar6 + lVar1 + 8);
        *(undefined1 *)(puVar6 + -5) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0x10);
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18);
        puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x20);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x24);
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18) = 0;
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x20) = 0;
        puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x24 - (longlong)pvVar2));
        (**(code **)*puVar3)(puVar3,0);
        puVar6 = puVar6 + 0xc;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 143199c50 FUN_143199c50 body=336 status=ok
// SIG undefined FUN_143199c50(void)

undefined8 FUN_143199c50(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 * 0x30);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((longlong)pvVar2 + 0x24);
      do {
        if ((undefined8 *)(puVar6 + -9) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar6 + -7) = 0;
          *(undefined1 *)(puVar6 + -5) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          *(undefined8 *)(puVar6 + -1) = 0;
          *(undefined ***)(puVar6 + -9) = &PTR_FUN_144d838d0;
        }
        lVar1 = *param_1 + (-0x24 - (longlong)pvVar2);
        *(undefined8 *)(puVar6 + 1) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x28);
        *(undefined8 *)(puVar6 + -7) = *(undefined8 *)((longlong)puVar6 + lVar1 + 8);
        *(undefined1 *)(puVar6 + -5) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0x10);
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18);
        puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x20);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x24);
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18) = 0;
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x20) = 0;
        puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x24 - (longlong)pvVar2));
        (**(code **)*puVar3)(puVar3,0);
        puVar6 = puVar6 + 0xc;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 143199e60 ModCtx_MarkFinishedAndRelease body=66 status=ok
// SIG undefined ModCtx_MarkFinishedAndRelease(void)

undefined8 CAkModulator::ModCtx_MarkFinishedAndRelease(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  piVar1 = (int *)((longlong)param_1 + 0x74);
  *piVar1 = *piVar1 + -1;
  *(undefined4 *)(param_1 + 0xf) = 3;
  lVar2 = g_DefaultPoolId;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar2,param_1);
  }
  return 1;
}



// FUNCTION 143199eb0 FUN_143199eb0 body=370 status=ok
// SIG undefined FUN_143199eb0(void)

undefined8 FUN_143199eb0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  long lVar4;
  char cVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  plVar6 = (longlong *)param_3[0xc];
  param_1 = (undefined8 *)*param_1;
  local_68 = &PTR_LAB_145acbf50;
  local_58 = param_3 + 7;
  plVar2 = plVar6 + *(uint *)(param_3 + 0xd);
  local_60 = param_2;
  for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
    plVar3 = (longlong *)*plVar6;
    if ((((int)plVar3[9] == 1) ||
        ((((int)plVar3[1] != 0 && ((int)plVar3[1] != 7)) ||
         (cVar5 = (**(code **)(*param_3 + 0x30))(param_3), cVar5 == '\0')))) &&
       (((int)plVar3[9] != 2 ||
        ((*(longlong *)(*plVar3 + 8) != 0 && (*(int *)(*(longlong *)(*plVar3 + 8) + 0x18) != 0))))))
    {
      local_50 = param_1[8];
      local_48 = *(undefined4 *)(param_1 + 0xb);
      local_40 = *(undefined4 *)((longlong)param_1 + 0x54);
      local_38 = *(undefined1 *)((longlong)param_1 + 0x51);
      local_30 = *(undefined1 *)(param_1 + 10);
      local_28 = param_1[3];
      uVar7 = CAkModulatorCtx::GetCurrentValue(param_1);
      FUN_143134dc0(plVar3,(int)param_3[2],*(undefined4 *)(param_1 + 0x10),uVar7,&local_50,&local_68
                    ,0);
    }
  }
  cVar5 = CAkModulatorCtx::IsFinished(param_1);
  if (cVar5 != '\0') {
    piVar1 = (int *)((longlong)param_1 + 0x74);
    *piVar1 = *piVar1 + -1;
    lVar4 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,0);
      AK::MemoryMgr::Free(lVar4,param_1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14319a050 NotifySubscribers body=73 status=ok
// SIG undefined NotifySubscribers(void)

void CAkModulator::NotifySubscribers(longlong param_1)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_20 = 0xff;
  local_18 = 0xff;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  AkRTPCNestedSearchTree<AkRTPCKey,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>_>
  ::_ForEachEx<bool_(__cdecl*)(AkModTreeValue_&,AkRTPCKey_const_&,void_*),AkRTPCKey>
            (param_1 + 0x38,FUN_143199eb0,&local_38,&local_38,param_1);
  return;
}



// FUNCTION 14319a0a0 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkModulator::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x1c0));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x1c0);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x1f0) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x1e8) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x1f0)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x1f8) = *(int *)(lVar9 + 0x1f8) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x1c0));
  return uVar3;
}



// FUNCTION 14319a190 Release body=71 status=ok
// SIG undefined Release(void)

int CAkModulatorCtx::Release(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 0x74) + -1;
  *(int *)((longlong)param_1 + 0x74) = iVar2;
  lVar1 = g_DefaultPoolId;
  if (iVar2 == 0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return iVar2;
}



// FUNCTION 14319a1e0 RemoveCtxsMatchingKey body=128 status=ok
// SIG undefined RemoveCtxsMatchingKey(void)

undefined8 CAkModulator::RemoveCtxsMatchingKey(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_20 = 0xff;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_18 = 0xff;
  local_10 = 0;
  if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_143196a10(param_1 + 0x38,ModCtx_MarkFinishedAndRelease,param_2,&local_38,&local_38,0,uVar1);
  return 1;
}



// FUNCTION 14319a260 FUN_14319a260 body=216 status=ok
// SIG undefined FUN_14319a260(void)

undefined8 * FUN_14319a260(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  if ((((*param_2 != 0) || ((char)param_2[2] != -1)) || ((char)param_2[4] != -1)) ||
     (*(longlong *)(param_2 + 6) != 0)) {
    param_1 = FUN_14319a6d0(param_1 + 0x18,*param_2,local_res10);
    if (param_1 == 0) {
      return (undefined8 *)0x0;
    }
    if ((((char)param_2[2] != -1) || ((char)param_2[4] != -1)) || (*(longlong *)(param_2 + 6) != 0))
    {
      param_1 = FUN_14319a340(param_1 + 0x18,(char)param_2[2],local_res10);
      if (param_1 == 0) {
        return (undefined8 *)0x0;
      }
      if (((char)param_2[4] != -1) || (*(longlong *)(param_2 + 6) != 0)) {
        param_1 = FUN_14319a530(param_1 + 0x18,(char)param_2[4],local_res10);
        if (param_1 == 0) {
          return (undefined8 *)0x0;
        }
        if (*(longlong *)(param_2 + 6) != 0) {
          puVar1 = (undefined8 *)
                   FUN_14319a8b0(param_1 + 0x18,*(longlong *)(param_2 + 6),local_res10);
          return puVar1;
        }
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    return puVar1;
  }
  return puVar1;
}



// FUNCTION 14319a340 FUN_14319a340 body=482 status=ok
// SIG undefined FUN_14319a340(void)

undefined8 * FUN_14319a340(longlong *param_1,undefined1 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)FUN_143197340();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_1431998a0(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + *param_1);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
      }
      goto LAB_14319a4f6;
    }
  }
  else {
    lVar6 = ((longlong)puVar4 - *param_1) / 6 + ((longlong)puVar4 - *param_1 >> 0x3f);
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_1431998a0(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar5 = *param_1;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      lVar6 = ((lVar6 >> 3) - (lVar6 >> 0x3f) & 0xffffffffU) * 0x30;
      if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
        puVar4 = puVar4 + -2;
        do {
          *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(puVar4 + 1);
          puVar4[3] = puVar4[-3];
          *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + -2);
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar4 + 5);
          puVar4[5] = puVar4[-1];
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)puVar4;
          *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)puVar4 + 4);
          puVar4[-1] = 0;
          *puVar4 = 0;
          lVar5 = *param_1;
          puVar1 = puVar4 + -4;
          puVar4 = puVar4 + -6;
        } while ((undefined8 *)(lVar5 + lVar6) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar6 + lVar5))(lVar6 + lVar5,0);
      lVar5 = *param_1;
      puVar4 = (undefined8 *)(lVar6 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      puVar4 = (undefined8 *)(lVar5 + lVar6);
LAB_14319a4f6:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)(puVar4 + 5) = param_2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14319a530 FUN_14319a530 body=409 status=ok
// SIG undefined FUN_14319a530(void)

undefined8 * FUN_14319a530(longlong *param_1,undefined1 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)FUN_143197340();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_1431999f0(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + *param_1);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
      }
      goto LAB_14319a69e;
    }
  }
  else {
    lVar6 = ((longlong)puVar4 - *param_1) / 6 + ((longlong)puVar4 - *param_1 >> 0x3f);
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_1431999f0(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar5 = *param_1;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      lVar6 = ((lVar6 >> 3) - (lVar6 >> 0x3f) & 0xffffffffU) * 0x30;
      if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
        do {
          puVar1 = puVar4 + -6;
          AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
          ::ChildTreeType::Transfer(puVar4,puVar1);
          lVar5 = *param_1;
          puVar4 = puVar1;
        } while ((undefined8 *)(lVar5 + lVar6) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar6 + lVar5))(lVar6 + lVar5,0);
      lVar5 = *param_1;
      puVar4 = (undefined8 *)(lVar6 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      puVar4 = (undefined8 *)(lVar5 + lVar6);
LAB_14319a69e:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)(puVar4 + 5) = param_2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14319a6d0 FUN_14319a6d0 body=480 status=ok
// SIG undefined FUN_14319a6d0(void)

undefined8 * FUN_14319a6d0(longlong *param_1,undefined4 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)FUN_1431973f0();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_143199b00(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + *param_1);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
      }
      goto LAB_14319a884;
    }
  }
  else {
    lVar6 = ((longlong)puVar4 - *param_1) / 6 + ((longlong)puVar4 - *param_1 >> 0x3f);
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_143199b00(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar5 = *param_1;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      lVar6 = ((lVar6 >> 3) - (lVar6 >> 0x3f) & 0xffffffffU) * 0x30;
      if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
        puVar4 = puVar4 + -2;
        do {
          *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(puVar4 + 1);
          puVar4[3] = puVar4[-3];
          *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + -2);
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar4 + 5);
          puVar4[5] = puVar4[-1];
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)puVar4;
          *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)puVar4 + 4);
          puVar4[-1] = 0;
          *puVar4 = 0;
          lVar5 = *param_1;
          puVar1 = puVar4 + -4;
          puVar4 = puVar4 + -6;
        } while ((undefined8 *)(lVar5 + lVar6) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar6 + lVar5))(lVar6 + lVar5,0);
      lVar5 = *param_1;
      puVar4 = (undefined8 *)(lVar6 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      puVar4 = (undefined8 *)(lVar5 + lVar6);
LAB_14319a884:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar4 + 5) = param_2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14319a8b0 FUN_14319a8b0 body=297 status=ok
// SIG undefined FUN_14319a8b0(void)

undefined8 * FUN_14319a8b0(longlong *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar3 = (undefined8 *)FUN_143133070();
  if (*param_3 != '\0') {
    return puVar3;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (puVar3 == (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
       (cVar2 = FUN_1431997f0(param_1,1), cVar2 == '\0')) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar3 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *param_1);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    lVar6 = *param_1;
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
        (cVar2 = FUN_1431997f0(param_1,1), cVar2 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar1)) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x10 + lVar5);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      lVar5 = *param_1;
    }
    lVar6 = ((longlong)puVar3 - lVar6 >> 4 & 0xffffffffU) * 0x10;
    if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
      do {
        *puVar4 = puVar4[-2];
        puVar4[1] = puVar4[-1];
        lVar5 = *param_1;
        puVar4 = puVar4 + -2;
      } while ((undefined8 *)(lVar5 + lVar6) < puVar4);
    }
    if ((undefined8 *)(lVar6 + lVar5) != (undefined8 *)0x0) {
      *(undefined8 *)(lVar6 + lVar5) = 0;
      lVar5 = *param_1;
    }
    puVar3 = (undefined8 *)(lVar5 + lVar6);
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_2;
  }
  return puVar3;
}



// FUNCTION 14319a9e0 FUN_14319a9e0 body=482 status=ok
// SIG undefined FUN_14319a9e0(void)

undefined8 * FUN_14319a9e0(longlong *param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)FUN_1431974a0();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_143199c50(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + *param_1);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
      }
      goto LAB_14319ab96;
    }
  }
  else {
    lVar6 = ((longlong)puVar4 - *param_1) / 6 + ((longlong)puVar4 - *param_1 >> 0x3f);
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_143199c50(param_1,1), cVar3 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      lVar5 = *param_1;
      *(uint *)(param_1 + 1) = uVar2 + 1;
      puVar4 = (undefined8 *)((ulonglong)uVar2 * 0x30 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      lVar6 = ((lVar6 >> 3) - (lVar6 >> 0x3f) & 0xffffffffU) * 0x30;
      if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
        puVar4 = puVar4 + -2;
        do {
          puVar4[7] = puVar4[1];
          puVar4[3] = puVar4[-3];
          *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + -2);
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(puVar4 + 5);
          puVar4[5] = puVar4[-1];
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)puVar4;
          *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)puVar4 + 4);
          puVar4[-1] = 0;
          *puVar4 = 0;
          lVar5 = *param_1;
          puVar1 = puVar4 + -4;
          puVar4 = puVar4 + -6;
        } while ((undefined8 *)(lVar5 + lVar6) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar6 + lVar5))(lVar6 + lVar5,0);
      lVar5 = *param_1;
      puVar4 = (undefined8 *)(lVar6 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *puVar4 = &PTR_FUN_144d838d0;
        lVar5 = *param_1;
      }
      puVar4 = (undefined8 *)(lVar5 + lVar6);
LAB_14319ab96:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar4[5] = param_2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14319abd0 SetAkProp body=294 status=ok
// SIG undefined SetAkProp(void)

undefined8
AkPropBundle<RANGED_MODIFIERS<AkPropValue>,unsigned_char>::SetAkProp
          (longlong *param_1,byte param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  size_t _Size;
  uint uVar6;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)0x0) {
    _Size = 0;
  }
  else {
    bVar1 = *pbVar5;
    _Size = (size_t)bVar1;
    uVar6 = 0;
    do {
      uVar4 = uVar6 + 1;
      if (pbVar5[uVar4] == param_2) {
        pbVar5 = pbVar5 + (ulonglong)uVar6 * 8 + ((ulonglong)(bVar1 + 4) & 0xfffffffc);
        if (pbVar5 != (byte *)0x0) goto LAB_14319accf;
        break;
      }
      uVar6 = uVar4;
    } while (uVar4 < bVar1);
  }
  iVar2 = (int)_Size;
  uVar6 = iVar2 + 5;
  pcVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)((uVar6 & 0xfffffffc) + 8 + iVar2 * 8));
  if (pcVar3 != (char *)0x0) {
    if (*param_1 != 0) {
      ::_guard_xfg_dispatch_icall_nop(pcVar3 + 1,(void *)(*param_1 + 1),_Size);
      ::_guard_xfg_dispatch_icall_nop
                (pcVar3 + ((ulonglong)uVar6 & 0xfffffffc),
                 (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *param_1),_Size * 8);
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    }
    pcVar3[iVar2 + 1] = param_2;
    *pcVar3 = (char)_Size + '\x01';
    *param_1 = (longlong)pcVar3;
    pbVar5 = (byte *)(pcVar3 + _Size * 8 + ((ulonglong)uVar6 & 0xfffffffc));
    if (pbVar5 != (byte *)0x0) {
LAB_14319accf:
      *(undefined8 *)pbVar5 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 14319ad00 SetInitialValues body=287 status=ok
// SIG undefined SetInitialValues(void)

undefined8 CAkModulator::SetInitialValues(longlong param_1,longlong param_2,undefined4 param_3)

{
  size_t sVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *local_res10;
  undefined4 local_res18 [2];
  
  bVar2 = *(byte *)(param_2 + 4);
  pbVar6 = (byte *)(param_2 + 5);
  local_res18[0] = param_3;
  if (bVar2 == 0) {
LAB_14319ad85:
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    local_res10 = pbVar6;
    if (bVar2 != 0) {
      uVar5 = bVar2 + 4 & 0xfffffffc;
      pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar5 + (uint)bVar2 * 8));
      if (pbVar3 == (byte *)0x0) goto LAB_14319ae18;
      *pbVar3 = bVar2;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,pbVar6,(ulonglong)bVar2);
      sVar1 = (ulonglong)bVar2 * 8;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar5,pbVar6 + bVar2,sVar1);
      local_res10 = pbVar6 + bVar2 + sVar1;
      *(byte **)(param_1 + 0x28) = pbVar3;
    }
    uVar4 = SetInitialRTPC<CAkModulator>(&local_res10,local_res18,param_1,1);
  }
  else {
    uVar5 = bVar2 + 4 & 0xfffffffc;
    pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar5 + (uint)bVar2 * 4));
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = bVar2;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,pbVar6,(ulonglong)bVar2);
      sVar1 = (ulonglong)bVar2 * 4;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar5,pbVar6 + bVar2,sVar1);
      pbVar6 = pbVar6 + bVar2 + sVar1;
      *(byte **)(param_1 + 0x20) = pbVar3;
      goto LAB_14319ad85;
    }
LAB_14319ae18:
    uVar4 = 2;
  }
  return uVar4;
}



// FUNCTION 14319ae20 FUN_14319ae20 body=239 status=ok
// SIG undefined FUN_14319ae20(void)

void FUN_14319ae20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10 [6];
  byte *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  pbVar3 = *(byte **)(param_1 + 0x20);
  pbVar7 = (byte *)0x0;
  local_res10[0] = DAT_1467be350;
  pbVar6 = pbVar7;
  if (pbVar3 != (byte *)0x0) {
    pbVar5 = pbVar7;
    do {
      uVar4 = (int)pbVar5 + 1;
      if (pbVar3[uVar4] == 0) {
        pbVar6 = pbVar3 + (longlong)pbVar5 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        break;
      }
      pbVar5 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar3);
  }
  local_38 = (byte *)*param_4;
  uStack_30 = param_4[1];
  local_28 = *(undefined4 *)(param_4 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_20 = *(undefined4 *)(param_4 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_4 + 0x1c);
  pbVar3 = (byte *)local_res10;
  if (pbVar6 != (byte *)0x0) {
    pbVar3 = pbVar6;
  }
  local_18 = *(undefined4 *)(param_4 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_10 = param_4[5];
  iVar1 = *(int *)pbVar3;
  if (0 < iVar1) {
    uVar2 = (undefined4)uStack_30;
    if (*(char *)(param_4 + 4) != -1) {
      uVar2 = 0;
    }
    uStack_10 = 0;
    uStack_30._4_4_ = (uint)((ulonglong)uStack_30 >> 0x20);
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar2);
    if (1 < iVar1) {
      uVar4 = (uint)local_18 >> 8;
      local_18 = CONCAT31((int3)uVar4,0xff);
      if (2 < iVar1) {
        local_38 = pbVar7;
      }
      uVar4 = (uint)uStack_20 >> 8;
      uStack_20 = CONCAT31((int3)uVar4,0xff);
      local_28 = 0;
      uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
    }
  }
  local_res8 = param_2;
  local_resc = param_3;
  FUN_143197dd0(param_1 + 0x38,&LAB_14319a030,&local_38,&local_res8);
  return;
}



// FUNCTION 14319af10 SetParams body=370 status=ok
// SIG undefined SetParams(void)

void DSP::MonoLFO<DSP::Unipolar,DSP::ModulatorLFOOutputPolicy>::SetParams
               (longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined8 extraout_XMM0_Qb;
  
  fVar5 = 0.0;
  fVar8 = (float)param_3[1];
  fVar7 = (float)param_3[2];
  if (fVar7 == 0.0) {
    fVar7 = 1.0;
  }
  else {
    dVar6 = (double)param_2;
    dVar2 = (double)fVar8;
    if (dVar6 <= (double)fVar8) {
      dVar2 = dVar6;
    }
    dVar2 = ::_guard_xfg_dispatch_icall_nop((dVar6 * 0.5) / dVar2);
    dVar2 = ::_guard_xfg_dispatch_icall_nop(-(dVar2 * (double)fVar7));
    auVar3._0_8_ = ::_guard_xfg_dispatch_icall_nop
                             (((dVar2 * dVar6 * 0.5) / dVar6) * 6.283185307179586);
    auVar3._8_8_ = extraout_XMM0_Qb;
    dVar6 = 2.0 - auVar3._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar6 * dVar6 - 1.0;
    auVar4 = sqrtpd(auVar3,auVar4);
    fVar5 = (float)(auVar4._0_8_ - dVar6);
    fVar7 = fVar5 + 1.0;
  }
  if ((float)param_2 <= fVar8) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = fVar8 / (float)param_2;
  }
  *(float *)(param_1 + 0x10) = fVar8;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = fVar8 * 6.2831855;
  }
  *(float *)(param_1 + 4) = fVar7;
  *(float *)(param_1 + 8) = fVar5;
  iVar1 = *param_3;
  if (*(int *)(param_1 + 0x14) != iVar1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      fVar8 = *(float *)(param_1 + 0xc) * 0.15915494;
    }
    else {
      if (iVar1 != 0) goto LAB_14319b074;
      fVar8 = *(float *)(param_1 + 0xc) * 6.2831855;
    }
    *(float *)(param_1 + 0xc) = fVar8;
    iVar1 = *param_3;
  }
LAB_14319b074:
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 14319b090 StopWhenFinished body=125 status=ok
// SIG undefined StopWhenFinished(void)

/* WARNING: Removing unreachable block (ram,0x00014319b0dc) */

undefined8 CAkModulator::StopWhenFinished(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  int local_res8 [8];
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  pbVar1 = *(byte **)(param_1 + 0x20);
  local_res8[0] = DAT_1467be354;
  if (pbVar1 != (byte *)0x0) {
    uVar3 = 0;
    do {
      uVar4 = (int)uVar3 + 1;
      if (pbVar1[uVar4] == 1) {
        pbVar2 = (byte *)local_res8;
        if (pbVar1 + uVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0) {
          pbVar2 = pbVar1 + uVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        }
        return CONCAT71((int7)((ulonglong)pbVar2 >> 8),*(int *)pbVar2 != 0);
      }
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  return CONCAT71((int7)((ulonglong)local_res8 >> 8),DAT_1467be354 != 0);
}



// FUNCTION 14319b110 Term body=111 status=ok
// SIG undefined Term(void)

void AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
     ::Term(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 6;
    if (puVar2 != puVar1) {
      do {
        (**(code **)*puVar2)(puVar2,0);
        puVar2 = puVar2 + 6;
      } while (puVar2 != puVar1);
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14319b180 Term body=182 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
    lVar1 = *(longlong *)(lVar3 + 0x18);
    lVar4 = (ulonglong)*(uint *)(lVar3 + 0x20) * 0x30 + lVar1;
    for (; lVar1 != lVar4; lVar1 = lVar1 + 0x30) {
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x18));
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0;
      }
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
    ::Term(lVar3 + 0x18);
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
  ::Term(param_1 + 0x18);
  return;
}



// FUNCTION 14319b240 FUN_14319b240 body=116 status=ok
// SIG undefined FUN_14319b240(void)

void FUN_14319b240(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
      *(undefined4 *)(lVar1 + 0x20) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x18));
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 0;
    }
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
  ::Term(param_1 + 0x18);
  return;
}



// FUNCTION 14319b2c0 Term body=333 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
    lVar7 = *(longlong *)(lVar6 + 0x18);
    lVar8 = (ulonglong)*(uint *)(lVar6 + 0x20) * 0x30 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x30) {
      lVar3 = *(longlong *)(lVar7 + 0x18);
      lVar2 = (ulonglong)*(uint *)(lVar7 + 0x20) * 0x30 + lVar3;
      for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
        lVar1 = *(longlong *)(lVar3 + 0x18);
        lVar4 = (ulonglong)*(uint *)(lVar3 + 0x20) * 0x30 + lVar1;
        for (; lVar1 != lVar4; lVar1 = lVar1 + 0x30) {
          if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
            *(undefined4 *)(lVar1 + 0x20) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x18));
            *(undefined8 *)(lVar1 + 0x18) = 0;
            *(undefined4 *)(lVar1 + 0x24) = 0;
          }
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(lVar3 + 0x18);
      }
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
      ::Term(lVar7 + 0x18);
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
    ::Term(lVar6 + 0x18);
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
  ::Term(param_1 + 0x18);
  return;
}



// FUNCTION 14319b410 Term body=274 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x30) {
    lVar3 = *(longlong *)(lVar5 + 0x18);
    lVar2 = (ulonglong)*(uint *)(lVar5 + 0x20) * 0x30 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
      lVar1 = *(longlong *)(lVar3 + 0x18);
      lVar4 = (ulonglong)*(uint *)(lVar3 + 0x20) * 0x30 + lVar1;
      for (; lVar1 != lVar4; lVar1 = lVar1 + 0x30) {
        if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x18));
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
      }
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
      ::Term(lVar3 + 0x18);
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
    ::Term(lVar5 + 0x18);
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
  ::Term(param_1 + 0x18);
  return;
}



// FUNCTION 14319b530 Term body=521 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkRTPCKey,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    lVar10 = *(longlong *)(lVar1 + 0x18);
    lVar9 = (ulonglong)*(uint *)(lVar1 + 0x20) * 0x30 + lVar10;
    for (; lVar10 != lVar9; lVar10 = lVar10 + 0x30) {
      lVar11 = *(longlong *)(lVar10 + 0x18);
      lVar12 = (ulonglong)*(uint *)(lVar10 + 0x20) * 0x30 + lVar11;
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x30) {
        lVar6 = *(longlong *)(lVar11 + 0x18);
        lVar5 = (ulonglong)*(uint *)(lVar11 + 0x20) * 0x30 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
          lVar3 = *(longlong *)(lVar6 + 0x18);
          lVar7 = (ulonglong)*(uint *)(lVar6 + 0x20) * 0x30 + lVar3;
          for (; lVar3 != lVar7; lVar3 = lVar3 + 0x30) {
            if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
              *(undefined4 *)(lVar3 + 0x20) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar3 + 0x18));
              *(undefined8 *)(lVar3 + 0x18) = 0;
              *(undefined4 *)(lVar3 + 0x24) = 0;
            }
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
          ::Term(lVar6 + 0x18);
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
        ::Term(lVar11 + 0x18);
      }
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
      ::Term(lVar10 + 0x18);
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>::ChildTreeType>_>
    ::Term(lVar1 + 0x18);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  if (puVar8 != (undefined8 *)0x0) {
    puVar4 = puVar8 + (ulonglong)*(uint *)(param_1 + 0x20) * 6;
    if (puVar8 != puVar4) {
      do {
        (**(code **)*puVar8)(puVar8,0);
        puVar8 = puVar8 + 6;
      } while (puVar8 != puVar4);
      puVar8 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 14319b740 Term body=57 status=ok
// SIG undefined Term(void)

void AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term
               (longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 14319b850 Transfer body=119 status=ok
// SIG undefined Transfer(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
     ::ChildTreeType::Transfer(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 14319b8d0 FUN_14319b8d0 body=1015 status=ok
// SIG undefined FUN_14319b8d0(void)

int FUN_14319b8d0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  char local_res8 [8];
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar14;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  pbVar7 = (byte *)param_1[4];
  pbVar12 = (byte *)0x0;
  local_res8[0] = '\0';
  iVar3 = 2;
  pbVar11 = pbVar12;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar12;
    do {
      uVar10 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar10)[(longlong)pbVar7] == 0) {
        pbVar11 = pbVar7 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar7 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar10;
    } while (uVar10 < *pbVar7);
  }
  iVar13 = *(int *)(param_2 + 0x14);
  pbVar4 = (byte *)&local_res10;
  if (pbVar11 != (byte *)0x0) {
    pbVar4 = pbVar11;
  }
  if (iVar13 <= *(int *)pbVar4) {
    pbVar11 = pbVar12;
    if (pbVar7 != (byte *)0x0) {
      pbVar4 = pbVar12;
      do {
        uVar10 = (int)pbVar4 + 1;
        if (pbVar7[uVar10] == 0) {
          pbVar11 = pbVar7 + ((ulonglong)(*pbVar7 + 4) & 0xfffffffc) + (longlong)pbVar4 * 4;
          break;
        }
        pbVar4 = (byte *)(ulonglong)uVar10;
      } while (uVar10 < *pbVar7);
    }
    pbVar7 = (byte *)&local_res10;
    if (pbVar11 != (byte *)0x0) {
      pbVar7 = pbVar11;
    }
    iVar13 = *(int *)pbVar7;
  }
  local_res10 = CONCAT44(local_res10._4_4_,DAT_1467be350);
  plVar5 = (longlong *)AkModulatorTriggerParams::GetRTPCKey(param_3,&local_70);
  local_a0 = *plVar5;
  uStack_98 = plVar5[1];
  local_90 = (int)plVar5[2];
  uStack_8c = *(undefined4 *)((longlong)plVar5 + 0x14);
  uStack_88 = (undefined4)plVar5[3];
  uStack_84 = *(undefined4 *)((longlong)plVar5 + 0x1c);
  local_80 = (undefined4)plVar5[4];
  uStack_7c = *(undefined4 *)((longlong)plVar5 + 0x24);
  lStack_78 = plVar5[5];
  iVar2 = (int)uStack_98;
  if (iVar13 < 1) {
LAB_14319ba1f:
    if ((((local_a0 == 0) && (iVar2 == 0)) && (local_90 == 0)) &&
       ((((char)uStack_88 == -1 && ((char)local_80 == -1)) && (lStack_78 == 0))))
    goto LAB_14319ba42;
    lVar6 = FUN_14319a9e0(param_1 + 10,local_a0,&local_res10);
    if (lVar6 == 0) {
LAB_14319bac5:
      plVar5 = (longlong *)0x0;
    }
    else if ((((int)uStack_98 == 0) && (local_90 == 0)) &&
            (((char)uStack_88 == -1 && (((char)local_80 == -1 && (lStack_78 == 0)))))) {
      plVar5 = (longlong *)(lVar6 + 8);
      if (*(char *)(lVar6 + 0x10) == '\0') {
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = 0;
        }
        *(undefined1 *)(lVar6 + 0x10) = 1;
      }
    }
    else {
      lVar6 = FUN_14319a6d0(lVar6 + 0x18,uStack_98 & 0xffffffff,&local_res10);
      if (lVar6 == 0) goto LAB_14319bac5;
      plVar5 = (longlong *)FUN_14319a260(lVar6,&local_90);
    }
  }
  else {
    lStack_78 = 0;
    if ((char)plVar5[4] != -1) {
      iVar2 = 0;
    }
    uStack_98._4_4_ = (uint)(uStack_98 >> 0x20);
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar2);
    if (iVar13 < 2) goto LAB_14319ba1f;
    uVar10 = (uint)local_80 >> 8;
    local_80 = CONCAT31((int3)uVar10,0xff);
    uVar10 = (uint)uStack_88 >> 8;
    uStack_88 = CONCAT31((int3)uVar10,0xff);
    local_90 = 0;
    uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
    iVar2 = 0;
    if (iVar13 < 3) goto LAB_14319ba1f;
    local_a0 = 0;
LAB_14319ba42:
    plVar5 = param_1 + 8;
    if ((char)param_1[9] == '\0') {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
      }
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return 2;
  }
  lVar6 = (**(code **)(*param_1 + 0x38))
                    (param_1,*plVar5,param_3,*(undefined8 *)(param_2 + 8),CONCAT44(uVar14,iVar13),
                     local_res8);
  if (lVar6 == 0) {
    if (*plVar5 != 0) {
      return 2;
    }
    if (((((local_a0 == 0) && ((int)uStack_98 == 0)) && (local_90 == 0)) &&
        (((char)uStack_88 == -1 && ((char)local_80 == -1)))) && (lStack_78 == 0)) {
      if ((char)param_1[9] != '\0') {
        *(undefined1 *)(param_1 + 9) = 0;
        return 2;
      }
      return 2;
    }
    pbVar7 = (byte *)FUN_1431974a0(param_1 + 10,local_a0,&local_res10);
    if ((byte)local_res10 != 0) {
      pbVar12 = pbVar7;
    }
    if (pbVar12 == (byte *)0x0) {
      return 2;
    }
    FUN_14319be70(pbVar12,&uStack_98);
    if (pbVar12[0x10] != 0) {
      return 2;
    }
    if (*(int *)(pbVar12 + 0x20) == 0) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>_>
      ::Term(pbVar12);
      uVar8 = FUN_1431974a0(param_1 + 10,local_a0,&local_res10);
      if ((byte)local_res10 != 0) {
        local_res10 = uVar8;
        FUN_143197a60(param_1 + 10,local_a8,&local_res10);
        return 2;
      }
      return 2;
    }
    return 2;
  }
  if (*plVar5 != lVar6) {
    *(int *)(lVar6 + 0x74) = *(int *)(lVar6 + 0x74) + 1;
    if (*plVar5 != 0) {
      CAkModulatorCtx::Release();
    }
    *plVar5 = lVar6;
  }
  if (param_5 == (longlong *)0x0) goto LAB_14319bb71;
  lVar9 = *param_5;
  if (lVar9 == 0) {
    FUN_1431ad360(param_5);
    lVar9 = *param_5;
    if (lVar9 != 0) goto LAB_14319bb39;
  }
  else {
LAB_14319bb39:
    iVar3 = FUN_1431ad130(lVar9,lVar6,param_3,param_2);
  }
  if (iVar3 != 1) {
    return iVar3;
  }
  if (((int)param_5[1] != -1) && (*param_5 != 0)) {
    CAkModulatorPBIData::TriggerRelease();
  }
LAB_14319bb71:
  if (local_res8[0] != '\0') {
    iVar3 = CAkScopedRtpcObj::AddedNewModulatorCtx((int)param_1[2],&local_a0);
    if (iVar3 == 1) {
      CAkModulatorEngine::AddContext(param_4,lVar6);
    }
    else {
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xff;
      local_50 = 0xff;
      local_48 = 0;
      if ((((local_a0 == 0) && ((int)uStack_98 == 0)) && (local_90 == 0)) &&
         ((((char)uStack_88 == -1 && ((char)local_80 == -1)) && (lStack_78 == 0)))) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      FUN_143196a10(param_1 + 7,CAkModulator::ModCtx_MarkFinishedAndRelease,&local_a0,&local_70,
                    &local_70,0,uVar1);
    }
  }
  return 1;
}



// FUNCTION 14319bcd0 FUN_14319bcd0 body=403 status=ok
// SIG undefined FUN_14319bcd0(void)

void FUN_14319bcd0(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  if (((*param_2 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
  param_1 = param_1 + 0x18;
  lVar1 = FUN_143197340(param_1,*param_2,&local_res10);
  lVar4 = 0;
  if ((char)local_res10 != '\0') {
    lVar4 = lVar1;
  }
  if (lVar4 == 0) {
    return;
  }
  if ((param_2[8] == -1) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (*(char *)(lVar4 + 0x10) != '\0') {
      *(undefined1 *)(lVar4 + 0x10) = 0;
    }
    goto LAB_14319be02;
  }
  lVar2 = FUN_143197340(lVar4 + 0x18,param_2[8],&local_res10);
  lVar1 = 0;
  if ((char)local_res10 != '\0') {
    lVar1 = lVar2;
  }
  if (lVar1 != 0) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      if (*(char *)(lVar1 + 0x10) != '\0') {
        *(undefined1 *)(lVar1 + 0x10) = 0;
      }
    }
    else {
      FUN_143139660(lVar1 + 0x18);
      if ((*(int *)(lVar1 + 0x20) == 0) && (*(void **)(lVar1 + 0x18) != (void *)0x0)) {
        *(undefined4 *)(lVar1 + 0x20) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x18));
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x24) = 0;
      }
      if (*(char *)(lVar1 + 0x10) != '\0') goto LAB_14319bdf0;
    }
    if (*(int *)(lVar1 + 0x20) == 0) {
      AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term(lVar1);
      FUN_14319bff0(lVar4 + 0x18,param_2[8]);
    }
  }
LAB_14319bdf0:
  if (*(char *)(lVar4 + 0x10) != '\0') {
    return;
  }
LAB_14319be02:
  if (*(int *)(lVar4 + 0x20) == 0) {
    FUN_14319b240(lVar4);
    uVar3 = FUN_143197340(param_1,*param_2,&local_res10);
    if ((char)local_res10 != '\0') {
      local_res10 = uVar3;
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType_const_&,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>::ChildTreeType>_>
      ::Erase(param_1,local_res18,&local_res10);
    }
  }
  return;
}



// FUNCTION 14319be70 FUN_14319be70 body=370 status=ok
// SIG undefined FUN_14319be70(void)

void FUN_14319be70(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      return;
    }
  }
  else {
    param_1 = param_1 + 0x18;
    lVar1 = FUN_1431973f0(param_1,*param_2,&local_res10);
    lVar4 = 0;
    if ((char)local_res10 != '\0') {
      lVar4 = lVar1;
    }
    if (lVar4 != 0) {
      if (((param_2[2] == 0) && ((char)param_2[4] == -1)) &&
         (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
        if (*(char *)(lVar4 + 0x10) != '\0') {
          *(undefined1 *)(lVar4 + 0x10) = 0;
        }
      }
      else {
        lVar2 = FUN_1431973f0(lVar4 + 0x18,param_2[2],&local_res10);
        lVar1 = 0;
        if ((char)local_res10 != '\0') {
          lVar1 = lVar2;
        }
        if (((lVar1 != 0) && (FUN_14319bcd0(lVar1,param_2 + 4), *(char *)(lVar1 + 0x10) == '\0')) &&
           (*(int *)(lVar1 + 0x20) == 0)) {
          AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>
          ::Term(lVar1);
          uVar3 = FUN_1431973f0(lVar4 + 0x18,param_2[2],&local_res10);
          if ((char)local_res10 != '\0') {
            local_res10 = uVar3;
            FUN_143197970(lVar4 + 0x18,local_res18,&local_res10);
          }
        }
        if (*(char *)(lVar4 + 0x10) != '\0') {
          return;
        }
      }
      if (*(int *)(lVar4 + 0x20) == 0) {
        AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkModTreeValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>_>_>
        ::Term(lVar4);
        uVar3 = FUN_1431973f0(param_1,*param_2,&local_res10);
        if ((char)local_res10 != '\0') {
          local_res10 = uVar3;
          FUN_143197970(param_1,local_res18,&local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 14319bff0 FUN_14319bff0 body=120 status=ok
// SIG undefined FUN_14319bff0(void)

char FUN_14319bff0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char local_res18 [16];
  
  puVar1 = (undefined8 *)FUN_143197340(param_1,param_2,local_res18);
  if (local_res18[0] != '\0') {
    puVar2 = (undefined8 *)(*param_1 + -0x30 + (ulonglong)*(uint *)(param_1 + 1) * 0x30);
    while (puVar1 < puVar2) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkModTreeValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkModTreeValue>_>
      ::ChildTreeType::Transfer(puVar1,puVar1 + 6);
      puVar1 = puVar1 + 6;
    }
    (**(code **)*puVar2)(puVar2,0);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return local_res18[0];
}



// FUNCTION 14319c070 FUN_14319c070 body=535 status=ok
// SIG undefined FUN_14319c070(void)

bool FUN_14319c070(longlong param_1,char *param_2,char *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char local_res18;
  
  if (*param_3 == -1) {
    return false;
  }
  lVar2 = FUN_143197340();
  lVar4 = 0;
  if (local_res18 != '\0') {
    lVar4 = lVar2;
  }
  if (lVar4 == 0) {
    iVar6 = *(int *)(param_1 + 0x20) + -1;
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + (iVar6 - iVar5) / 2;
        lVar2 = (longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x18);
        if (*(char *)(lVar2 + 0x28) == -1) {
          bVar1 = true;
          goto LAB_14319c10f;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar6);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    bVar1 = false;
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)iVar5 * 0x30 + lVar2;
    }
LAB_14319c10f:
    lVar4 = 0;
    if (bVar1) {
      lVar4 = lVar2;
    }
  }
  if (((*param_2 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    return lVar4 != 0;
  }
  if (lVar4 == 0) {
    return false;
  }
  if (param_3[8] != -1) {
    lVar3 = FUN_143197340();
    lVar2 = 0;
    if (local_res18 != '\0') {
      lVar2 = lVar3;
    }
    if (lVar2 == 0) {
      iVar5 = *(int *)(lVar4 + 0x20) + -1;
      iVar6 = 0;
      if (-1 < iVar5) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + (iVar5 - iVar6) / 2;
          lVar3 = (longlong)iVar6 * 0x30 + *(longlong *)(lVar4 + 0x18);
          if (*(char *)(lVar3 + 0x28) == -1) {
            bVar1 = true;
            goto LAB_14319c1dd;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= iVar5);
      }
      lVar3 = *(longlong *)(lVar4 + 0x18);
      bVar1 = false;
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar6 * 0x30 + lVar3;
      }
LAB_14319c1dd:
      lVar2 = 0;
      if (bVar1) {
        lVar2 = lVar3;
      }
    }
    if ((param_2[8] == -1) && (*(longlong *)(param_2 + 0x10) == 0)) {
      return lVar2 != 0;
    }
    if (((lVar2 != 0) && (*(longlong *)(param_2 + 0x10) == 0)) &&
       (*(longlong *)(param_3 + 0x10) != 0)) {
      lVar4 = FUN_143122170(lVar2 + 0x18);
      return lVar4 != 0;
    }
  }
  return false;
}



// FUNCTION 14319c290 FUN_14319c290 body=438 status=ok
// SIG undefined FUN_14319c290(void)

bool FUN_14319c290(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char local_res18 [8];
  
  if (*param_3 == 0) {
    return false;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar5 = FUN_1431973f0(plVar1,*param_3,local_res18);
  lVar7 = 0;
  if (local_res18[0] != '\0') {
    lVar7 = lVar5;
  }
  if (lVar7 == 0) {
    iVar4 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar4) {
      do {
        lVar5 = (longlong)(iVar4 / 2) * 0x30 + *plVar1;
        if (*(int *)(lVar5 + 0x28) == 0) {
          bVar2 = true;
          goto LAB_14319c305;
        }
        iVar4 = iVar4 / 2 + -1;
      } while (-1 < iVar4);
    }
    lVar5 = *plVar1;
    bVar2 = false;
LAB_14319c305:
    lVar7 = 0;
    if (bVar2) {
      lVar7 = lVar5;
    }
  }
  if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    return lVar7 != 0;
  }
  if (lVar7 == 0) {
    return false;
  }
  uVar3 = 0;
  if (param_3[2] != 0) {
    plVar1 = (longlong *)(lVar7 + 0x18);
    lVar6 = FUN_1431973f0(plVar1,param_3[2],local_res18);
    lVar5 = 0;
    if (local_res18[0] != '\0') {
      lVar5 = lVar6;
    }
    if (lVar5 == 0) {
      iVar4 = *(int *)(lVar7 + 0x20) + -1;
      if (-1 < iVar4) {
        do {
          lVar7 = (longlong)(iVar4 / 2) * 0x30 + *plVar1;
          if (*(int *)(lVar7 + 0x28) == 0) {
            bVar2 = true;
            goto LAB_14319c3b5;
          }
          iVar4 = iVar4 / 2 + -1;
        } while (-1 < iVar4);
      }
      lVar7 = *plVar1;
      bVar2 = false;
LAB_14319c3b5:
      lVar5 = 0;
      if (bVar2) {
        lVar5 = lVar7;
      }
    }
    if (((param_2[2] == 0) && ((char)param_2[4] == -1)) &&
       (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
      return lVar5 != 0;
    }
    if (lVar5 != 0) {
      uVar3 = FUN_14319c070(lVar5,param_2 + 4,param_3 + 4);
    }
  }
  return (bool)uVar3;
}



// FUNCTION 14319c450 _Trigger body=422 status=ok
// SIG undefined _Trigger(void)

undefined8 *
CAkModulator::_Trigger
          (longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,int param_5,
          undefined1 *param_6)

{
  int iVar1;
  char cVar2;
  
  *param_6 = 0;
  cVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_3);
  if (cVar2 == '\0') {
    param_2 = (undefined8 *)0x0;
  }
  else if (param_2 == (undefined8 *)0x0) {
    if ((param_5 == 0) || (param_2 = (undefined8 *)0x0, *(int *)(param_3 + 0x24) != 0)) {
      iVar1 = (int)param_1[3];
      if (iVar1 == 0) {
        param_2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xf0);
        if (param_2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        CAkModulatorCtx::CAkModulatorCtx(param_2);
        *param_2 = &PTR__scalar_deleting_destructor__145acbec0;
        param_2[0x19] = 0;
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
        param_2[0x1c] = 0;
        *(undefined1 *)(param_2 + 0x1d) = 0;
      }
      else if (iVar1 == 1) {
        param_2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
        if (param_2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        CAkModulatorCtx::CAkModulatorCtx(param_2);
        *param_2 = &PTR__scalar_deleting_destructor__145acbef0;
      }
      else {
        if (iVar1 != 2) {
          return (undefined8 *)0x0;
        }
        param_2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
        if (param_2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        CAkModulatorCtx::CAkModulatorCtx(param_2);
        *(undefined1 *)(param_2 + 0x17) = 0;
        *param_2 = &PTR__scalar_deleting_destructor__145acbf20;
      }
      if (param_2 != (undefined8 *)0x0) {
        FUN_1431c1a30(param_2,param_1,param_3,param_4,param_5);
        *param_6 = 1;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((cVar2 != '\0') && ((*(int *)(param_3 + 0x24) - 1U & 0xfffffffd) == 0)) {
      FUN_1431c1a30(param_2,param_1,param_3,param_4,param_5);
    }
  }
  return param_2;
}



// FUNCTION 14319c600 FUN_14319c600 body=683 status=ok
// SIG undefined FUN_14319c600(void)

undefined8 FUN_14319c600(undefined8 param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  puVar4 = (undefined8 *)*param_3;
  puVar8 = puVar4;
  if ((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)((longlong)puVar4 + 0x14)))
  {
    param_3[1] = puVar4;
    puVar8 = (undefined8 *)*puVar4;
    *param_3 = puVar8;
  }
  puVar13 = (undefined4 *)0x0;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
    if (puVar8 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,0x300,0x10);
    puVar8[1] = pvVar9;
    if (pvVar9 == (void *)0x0) {
LAB_14319c83e:
      lVar7 = g_DefaultPoolId;
      if ((void *)puVar8[6] != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar8[6]);
      }
      *(undefined4 *)((longlong)puVar8 + 0x2c) = 0;
      puVar8[6] = 0;
      if ((void *)puVar8[1] != (void *)0x0) {
        *(undefined4 *)(puVar8 + 2) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar8[1]);
        puVar8[1] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
      }
      if ((void *)puVar8[3] != (void *)0x0) {
        *(undefined4 *)(puVar8 + 4) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar8[3]);
        puVar8[3] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(lVar7,puVar8);
      return 0x34;
    }
    *(undefined4 *)((longlong)puVar8 + 0x14) = 0x10;
    pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,0x180,0x10);
    puVar8[3] = pvVar9;
    if (pvVar9 == (void *)0x0) goto LAB_14319c83e;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x10;
    *puVar8 = 0;
    if (*(longlong *)(param_2 + 4) == 0) {
      *(undefined8 **)(param_2 + 4) = puVar8;
    }
    else {
      **(undefined8 **)(param_2 + 2) = puVar8;
    }
    *param_2 = *param_2 + 1;
    *(undefined8 **)(param_2 + 2) = puVar8;
    *param_3 = puVar8;
    param_3[1] = puVar4;
  }
  uVar3 = *(uint *)(puVar8 + 2);
  if (*(uint *)((longlong)puVar8 + 0x14) <= uVar3) {
    uVar1 = *(uint *)((longlong)puVar8 + 0x14) + 1;
    pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar1 * 0x30,0x10);
    if (pvVar9 == (void *)0x0) goto LAB_14319c7b0;
    pvVar10 = (void *)puVar8[1];
    if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar9)) {
      uVar12 = (ulonglong)*(uint *)(puVar8 + 2);
      puVar11 = puVar13;
      if (uVar12 != 0) {
        do {
          lVar5 = puVar8[1];
          puVar11 = puVar11 + 0xc;
          puVar4 = (undefined8 *)(lVar5 + -0x30 + (longlong)puVar11);
          uVar6 = puVar4[1];
          puVar2 = (undefined8 *)((longlong)pvVar9 + -0x30 + (longlong)puVar11);
          *puVar2 = *puVar4;
          puVar2[1] = uVar6;
          puVar4 = (undefined8 *)(lVar5 + -0x20 + (longlong)puVar11);
          uVar6 = puVar4[1];
          puVar2 = (undefined8 *)((longlong)pvVar9 + -0x20 + (longlong)puVar11);
          *puVar2 = *puVar4;
          puVar2[1] = uVar6;
          puVar4 = (undefined8 *)(lVar5 + -0x10 + (longlong)puVar11);
          uVar6 = puVar4[1];
          puVar2 = (undefined8 *)((longlong)pvVar9 + -0x10 + (longlong)puVar11);
          *puVar2 = *puVar4;
          puVar2[1] = uVar6;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        pvVar10 = (void *)puVar8[1];
      }
      AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar10);
    }
    puVar8[1] = pvVar9;
    *(uint *)((longlong)puVar8 + 0x14) = uVar1;
    if (uVar1 <= uVar3) goto LAB_14319c7b0;
  }
  puVar13 = (undefined4 *)((ulonglong)*(uint *)(puVar8 + 2) * 0x30 + puVar8[1]);
  *(uint *)(puVar8 + 2) = *(uint *)(puVar8 + 2) + 1;
LAB_14319c7b0:
  puVar13[6] = *(undefined4 *)(param_4 + 0xa8);
  puVar13[7] = *(undefined4 *)(param_4 + 0xac);
  puVar13[8] = *(undefined4 *)(param_4 + 0xb0);
  puVar13[9] = *(undefined4 *)(param_4 + 0xb4);
  puVar13[10] = *(undefined4 *)(param_4 + 0xb8);
  puVar13[0xb] = *(undefined4 *)(param_4 + 0xbc);
  *puVar13 = *(undefined4 *)(param_4 + 0x78);
  puVar13[3] = *(undefined4 *)(param_4 + 0x70);
  puVar13[2] = *(undefined4 *)(param_4 + 0x6c);
  puVar13[1] = *(undefined4 *)(param_4 + 0x68);
  puVar13[4] = *(undefined4 *)(param_4 + 0x80);
  puVar13[5] = *(undefined4 *)(param_4 + 0x88);
  return 1;
}



// FUNCTION 14319c8b0 FUN_14319c8b0 body=655 status=ok
// SIG undefined FUN_14319c8b0(void)

undefined8 FUN_14319c8b0(undefined8 param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  puVar4 = (undefined8 *)*param_3;
  puVar8 = puVar4;
  if ((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)((longlong)puVar4 + 0x14)))
  {
    param_3[1] = puVar4;
    puVar8 = (undefined8 *)*puVar4;
    *param_3 = puVar8;
  }
  puVar13 = (undefined4 *)0x0;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
    if (puVar8 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,0x280,0x10);
    puVar8[1] = pvVar9;
    if (pvVar9 == (void *)0x0) {
LAB_14319cad2:
      lVar7 = g_DefaultPoolId;
      if ((void *)puVar8[6] != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar8[6]);
      }
      *(undefined4 *)((longlong)puVar8 + 0x2c) = 0;
      puVar8[6] = 0;
      if ((void *)puVar8[1] != (void *)0x0) {
        *(undefined4 *)(puVar8 + 2) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar8[1]);
        puVar8[1] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
      }
      if ((void *)puVar8[3] != (void *)0x0) {
        *(undefined4 *)(puVar8 + 4) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar8[3]);
        puVar8[3] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(lVar7,puVar8);
      return 0x34;
    }
    *(undefined4 *)((longlong)puVar8 + 0x14) = 0x10;
    pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,0x180,0x10);
    puVar8[3] = pvVar9;
    if (pvVar9 == (void *)0x0) goto LAB_14319cad2;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0x10;
    *puVar8 = 0;
    if (*(longlong *)(param_2 + 4) == 0) {
      *(undefined8 **)(param_2 + 4) = puVar8;
    }
    else {
      **(undefined8 **)(param_2 + 2) = puVar8;
    }
    *param_2 = *param_2 + 1;
    *(undefined8 **)(param_2 + 2) = puVar8;
    *param_3 = puVar8;
    param_3[1] = puVar4;
  }
  uVar3 = *(uint *)(puVar8 + 2);
  if (*(uint *)((longlong)puVar8 + 0x14) <= uVar3) {
    uVar1 = *(uint *)((longlong)puVar8 + 0x14) + 1;
    pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar1 * 0x28,0x10);
    if (pvVar9 == (void *)0x0) goto LAB_14319ca62;
    pvVar10 = (void *)puVar8[1];
    if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar9)) {
      uVar12 = (ulonglong)*(uint *)(puVar8 + 2);
      puVar11 = puVar13;
      if (uVar12 != 0) {
        do {
          lVar5 = puVar8[1];
          puVar11 = puVar11 + 10;
          puVar4 = (undefined8 *)(lVar5 + -0x28 + (longlong)puVar11);
          uVar6 = puVar4[1];
          puVar2 = (undefined8 *)((longlong)pvVar9 + -0x28 + (longlong)puVar11);
          *puVar2 = *puVar4;
          puVar2[1] = uVar6;
          puVar4 = (undefined8 *)(lVar5 + -0x18 + (longlong)puVar11);
          uVar6 = puVar4[1];
          puVar2 = (undefined8 *)((longlong)pvVar9 + -0x18 + (longlong)puVar11);
          *puVar2 = *puVar4;
          puVar2[1] = uVar6;
          *(undefined8 *)((longlong)pvVar9 + -8 + (longlong)puVar11) =
               *(undefined8 *)(lVar5 + -8 + (longlong)puVar11);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        pvVar10 = (void *)puVar8[1];
      }
      AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar10);
    }
    puVar8[1] = pvVar9;
    *(uint *)((longlong)puVar8 + 0x14) = uVar1;
    if (uVar1 <= uVar3) goto LAB_14319ca62;
  }
  uVar3 = *(uint *)(puVar8 + 2);
  *(uint *)(puVar8 + 2) = uVar3 + 1;
  puVar13 = (undefined4 *)(puVar8[1] + (ulonglong)uVar3 * 0x28);
LAB_14319ca62:
  puVar13[6] = *(undefined4 *)(param_4 + 0xa8);
  puVar13[7] = *(undefined4 *)(param_4 + 0xac);
  puVar13[8] = *(undefined4 *)(param_4 + 0xb0);
  *puVar13 = *(undefined4 *)(param_4 + 0x78);
  puVar13[3] = *(undefined4 *)(param_4 + 0x70);
  puVar13[2] = *(undefined4 *)(param_4 + 0x6c);
  puVar13[1] = *(undefined4 *)(param_4 + 0x68);
  puVar13[4] = *(undefined4 *)(param_4 + 0x80);
  puVar13[5] = *(undefined4 *)(param_4 + 0x88);
  return 1;
}



// FUNCTION 14319cb40 ProcessBatch<CAkLFOProcess,AkLFOParams,AkLFOOutput> body=740 status=ok
// SIG undefined ProcessBatch<CAkLFOProcess,AkLFOParams,AkLFOOutput>(void)

undefined8
CAkModulatorEngine::ProcessBatch<CAkLFOProcess,AkLFOParams,AkLFOOutput>
          (undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  float _Y;
  float fVar17;
  undefined1 local_res8 [8];
  float fStack_9c;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return 1;
    }
    uVar8 = *(uint *)(param_1 + 5);
    if (*(uint *)((longlong)param_1 + 0x2c) < uVar8) {
      if ((void *)param_1[6] != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)param_1[6]);
        uVar8 = *(uint *)(param_1 + 5);
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      param_1[6] = 0;
      pvVar9 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar8 << 2,0x10);
      param_1[6] = pvVar9;
      if (pvVar9 == (void *)0x0) {
        return 2;
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1 + 5);
    }
    lVar10 = param_1[1];
    plVar13 = (longlong *)param_1[3];
    lVar14 = param_1[6];
    lVar12 = (ulonglong)*(uint *)(param_1 + 2) * 0x58 + lVar10;
    if (lVar10 != lVar12) {
      uVar11 = (ulonglong)(param_2 - 1);
      plVar15 = plVar13 + 3;
      do {
        *plVar13 = lVar14;
        *(undefined4 *)(plVar15 + -2) = 0xffffffff;
        uVar3 = *(undefined4 *)(lVar10 + 0x48);
        iVar4 = *(int *)(lVar10 + 0x4c);
        uVar5 = *(undefined4 *)(lVar10 + 0x50);
        uVar6 = *(undefined4 *)(lVar10 + 0x54);
        lVar7 = *(longlong *)(lVar10 + 0x40);
        *plVar15 = *(longlong *)(lVar10 + 0x38);
        plVar15[1] = lVar7;
        *(undefined4 *)(plVar15 + 2) = uVar3;
        *(int *)((longlong)plVar15 + 0x14) = iVar4;
        *(undefined4 *)(plVar15 + 3) = uVar5;
        *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar6;
        if (iVar4 == 0) {
          fVar16 = 6.2831855;
LAB_14319cc5d:
          fStack_9c = (float)((ulonglong)lVar7 >> 0x20);
          fVar16 = ::_guard_xfg_dispatch_icall_nop(fStack_9c,fVar16);
          *(float *)((longlong)plVar15 + 0xc) = fVar16;
        }
        else if (iVar4 != 5) {
          fVar16 = 1.0;
          goto LAB_14319cc5d;
        }
        uVar8 = *(uint *)(lVar10 + 0xc);
        uVar2 = *(uint *)(lVar10 + 0x1c);
        fVar16 = *(float *)(lVar10 + 0x18);
        fVar17 = fVar16;
        if (uVar8 - param_2 < uVar2) {
          fVar17 = ((float)(uVar8 - param_2) * fVar16) / (float)uVar2;
        }
        if (*(int *)(lVar10 + 0x14) == 0) {
          *plVar13 = 0;
          iVar4 = *(int *)((longlong)plVar15 + 0x14);
          fVar16 = *(float *)((longlong)plVar15 + 0xc) + (float)uVar11 * *(float *)(plVar15 + 2);
          *(int *)plVar15 = (int)*plVar15;
          *(undefined4 *)((longlong)plVar15 + 4) = *(undefined4 *)((longlong)plVar15 + 4);
          *(int *)(plVar15 + 1) = (int)plVar15[1];
          *(float *)((longlong)plVar15 + 0xc) = fVar16;
          *(float *)(plVar15 + 2) = *(float *)(plVar15 + 2);
          *(int *)((longlong)plVar15 + 0x14) = iVar4;
          *(int *)(plVar15 + 3) = (int)plVar15[3];
          *(undefined4 *)((longlong)plVar15 + 0x1c) = *(undefined4 *)((longlong)plVar15 + 0x1c);
          if (iVar4 == 0) {
            _Y = 6.2831855;
LAB_14319cd6a:
            fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16,_Y);
            *(float *)((longlong)plVar15 + 0xc) = fVar16;
          }
          else if (iVar4 != 5) {
            _Y = 1.0;
            goto LAB_14319cd6a;
          }
          FUN_14319ee90(plVar15,(longlong)plVar15 + -0xc,1,fVar17,fVar17,
                        *(undefined4 *)(lVar10 + 0x30),local_res8);
          fVar16 = *(float *)((longlong)plVar15 + -0xc);
          uVar11 = (ulonglong)(param_2 - 1);
        }
        else {
          if (uVar8 < uVar2) {
            fVar16 = ((float)uVar8 * fVar16) / (float)uVar2;
          }
          FUN_14319ee90(plVar15,lVar14,param_2,fVar16,fVar17,*(undefined4 *)(lVar10 + 0x30),
                        local_res8);
          *(undefined4 *)((longlong)plVar15 + -0xc) = *(undefined4 *)(lVar14 + uVar11 * 4);
        }
        *(float *)(plVar15 + -1) = fVar16;
        plVar13 = plVar13 + 7;
        puVar1 = (uint *)(lVar10 + 0x14);
        plVar15 = plVar15 + 7;
        lVar10 = lVar10 + 0x58;
        lVar14 = lVar14 + (ulonglong)*puVar1 * 4;
      } while (lVar10 != lVar12);
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 14319ce30 ProcessBatch<CAkTimeModProcess,AkTimeModParams,AkTimeModOutput> body=605 status=ok
// SIG undefined ProcessBatch<CAkTimeModProcess,AkTimeModParams,AkTimeModOutput>(void)

undefined8
CAkModulatorEngine::ProcessBatch<CAkTimeModProcess,AkTimeModParams,AkTimeModOutput>
          (undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return 1;
    }
    uVar8 = *(uint *)(param_1 + 5);
    if (*(uint *)((longlong)param_1 + 0x2c) < uVar8) {
      if ((void *)param_1[6] != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)param_1[6]);
        uVar8 = *(uint *)(param_1 + 5);
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      param_1[6] = 0;
      pvVar6 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar8 << 2,0x10);
      param_1[6] = pvVar6;
      if (pvVar6 == (void *)0x0) {
        return 2;
      }
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1 + 5);
    }
    lVar7 = param_1[1];
    puVar10 = (undefined8 *)param_1[3];
    pfVar9 = (float *)param_1[6];
    lVar2 = lVar7 + (ulonglong)*(uint *)(param_1 + 2) * 0x28;
    if (lVar7 != lVar2) {
      pfVar11 = (float *)(puVar10 + 2);
      do {
        *puVar10 = pfVar9;
        iVar3 = *(int *)(lVar7 + 0x14);
        pfVar11[-2] = -NAN;
        *pfVar11 = 0.0;
        uVar8 = *(uint *)(lVar7 + 0xc);
        uVar4 = *(uint *)(lVar7 + 0x18);
        if (iVar3 == 0) {
          if ((uVar4 < uVar8) && (uVar8 < *(uint *)(lVar7 + 0x1c))) {
            uVar8 = uVar8 % uVar4;
          }
          fVar13 = (float)((double)(int)uVar4 * (1.0 / (double)DAT_1467bdcac));
          fVar12 = (float)((double)(int)uVar8 * (1.0 / (double)DAT_1467bdcac));
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          if (uVar8 < *(uint *)(lVar7 + 8)) {
            fVar13 = fVar12;
            if (fVar12 <= 0.0) {
              fVar13 = 0.0;
            }
            *pfVar11 = fVar13;
          }
          else {
            fVar12 = fVar13;
            if (fVar13 <= 0.0) {
              fVar12 = 0.0;
            }
LAB_14319d026:
            *pfVar11 = fVar12;
            pfVar11[-2] = 4.2039e-45;
            fVar12 = fVar13;
          }
        }
        else {
          if ((uVar4 < uVar8) && (uVar8 < *(uint *)(lVar7 + 0x1c))) {
            uVar8 = uVar8 % uVar4;
          }
          fVar13 = (float)((double)(int)uVar4 * (1.0 / (double)DAT_1467bdcac));
          fVar12 = (float)((double)(int)uVar8 * (1.0 / (double)DAT_1467bdcac));
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          pfVar5 = pfVar9;
          if (*(uint *)(lVar7 + 8) <= uVar8) {
            for (; pfVar5 < pfVar9 + param_2; pfVar5 = pfVar5 + 4) {
              *pfVar5 = fVar13;
              pfVar5[1] = fVar13;
              pfVar5[2] = fVar13;
              pfVar5[3] = fVar13;
            }
            fVar12 = *pfVar11;
            if (*pfVar11 <= fVar13) {
              fVar12 = fVar13;
            }
            goto LAB_14319d026;
          }
          for (; pfVar5 < pfVar9 + param_2; pfVar5 = pfVar5 + 4) {
            *pfVar5 = fVar12;
            pfVar5[1] = fVar12;
            pfVar5[2] = fVar12;
            pfVar5[3] = fVar12;
          }
          fVar13 = *pfVar11;
          if (*pfVar11 <= fVar12) {
            fVar13 = fVar12;
          }
          *pfVar11 = fVar13;
        }
        pfVar11[-1] = fVar12;
        puVar10 = puVar10 + 3;
        puVar1 = (uint *)(lVar7 + 0x14);
        pfVar11 = pfVar11 + 6;
        lVar7 = lVar7 + 0x28;
        pfVar9 = pfVar9 + *puVar1;
      } while (lVar7 != lVar2);
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 14319d090 _Process<BufferOutputPolicy> body=1554 status=ok
// SIG undefined _Process<BufferOutputPolicy>(void)

void CAkEnvelopeProcess::_Process<BufferOutputPolicy>
               (longlong param_1,uint param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float *local_a8;
  float *local_a0;
  ulonglong uVar8;
  
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  local_a0 = (float *)(param_3 + 0x10);
  *local_a0 = *(float *)(param_1 + 0x18);
  uVar3 = *(int *)(param_1 + 0x28) + 2U & 0xfffffffc;
  uVar15 = *(uint *)(param_1 + 4) & 0xfffffffc;
  fVar20 = *(float *)(param_1 + 0x18);
  uVar14 = (*(int *)(param_1 + 8) + 2U & 0xfffffffc) + uVar15;
  uVar11 = *(int *)(param_1 + 0xc) - param_2;
  uVar4 = *(int *)(param_1 + 0x2c) + 2U & 0xfffffffc;
  uVar17 = (*(uint *)(param_1 + 0x1c) >> 1) + 2 & 0xfffffffc;
  if (fVar20 <= 0.0) {
    fVar22 = (float)uVar17;
  }
  else {
    fVar18 = *(float *)(param_1 + 0x20);
    if ((fVar18 <= fVar20) || (fVar18 <= 0.0)) {
      fVar22 = (float)uVar17;
      uVar5 = (int)(longlong)(((fVar20 - fVar18) / (1.0 - fVar18)) * fVar22) + uVar17 + 2 &
              0xfffffffc;
      uVar11 = uVar11 + uVar5;
      uVar14 = uVar14 + uVar5;
    }
    else {
      fVar22 = (float)uVar17;
      uVar5 = (int)(longlong)((fVar20 / fVar18) * fVar22) + 2U & 0xfffffffc;
      uVar11 = uVar11 + uVar5;
      uVar14 = uVar14 + uVar5;
    }
  }
  if (uVar11 != 0) {
    fVar20 = *(float *)(param_1 + 0x10);
  }
  local_a8 = param_4;
  if (uVar11 < uVar15) {
    uVar5 = param_2;
    if (uVar15 - uVar11 < param_2) {
      uVar5 = uVar15 - uVar11;
    }
    local_a8 = param_4 + uVar5;
    for (; param_4 < local_a8; param_4 = param_4 + 4) {
      *param_4 = 0.0;
      param_4[1] = 0.0;
      param_4[2] = 0.0;
      param_4[3] = 0.0;
    }
    fVar18 = *local_a0;
    uVar11 = uVar11 + uVar5;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    param_2 = param_2 - uVar5;
    *local_a0 = fVar18;
  }
  uVar9 = (ulonglong)param_2;
  uVar5 = uVar17 + uVar15;
  if (uVar14 <= uVar17 + uVar15) {
    uVar5 = uVar14;
  }
  if (uVar11 < uVar5) {
    if (-0.0 < (float)uVar17) {
      fVar20 = *(float *)(param_1 + 0x20) / (float)uVar17;
    }
    else {
      fVar20 = 0.0;
    }
    if (uVar5 - uVar11 <= param_2) {
      uVar9 = (ulonglong)(uVar5 - uVar11);
    }
    fVar20 = (float)BufferOutputPolicy::Ramp(&local_a8,uVar9,local_a0,fVar20,local_a0);
    uVar11 = uVar11 + (int)uVar9;
    uVar9 = (ulonglong)(param_2 - (int)uVar9);
  }
  uVar6 = uVar15 + uVar17 * 2;
  if (uVar14 <= uVar6) {
    uVar6 = uVar14;
  }
  if (uVar11 < uVar6) {
    if (-0.0 < fVar22) {
      fVar20 = (1.0 - *(float *)(param_1 + 0x20)) / fVar22;
    }
    else {
      fVar20 = 0.0;
    }
    uVar12 = (uint)uVar9;
    if (uVar6 - uVar11 <= uVar12) {
      uVar9 = (ulonglong)(uVar6 - uVar11);
    }
    fVar20 = (float)BufferOutputPolicy::Ramp(&local_a8,uVar9,local_a0,fVar20,local_a0);
    uVar11 = uVar11 + (int)uVar9;
    uVar9 = (ulonglong)(uVar12 - (int)uVar9);
  }
  uVar16 = uVar6 + uVar3;
  uVar12 = uVar14;
  if (uVar16 < uVar14) {
    uVar12 = uVar16;
  }
  if (uVar11 < uVar12) {
    if (-0.0 < (float)uVar3) {
      fVar20 = (*(float *)(param_1 + 0x24) - 1.0) / (float)uVar3;
    }
    else {
      fVar20 = 0.0;
    }
    uVar13 = (uint)uVar9;
    if (uVar12 - uVar11 <= uVar13) {
      uVar9 = (ulonglong)(uVar12 - uVar11);
    }
    fVar20 = (float)BufferOutputPolicy::Ramp(&local_a8,uVar9,uVar12,fVar20,local_a0);
    uVar11 = uVar11 + (int)uVar9;
    uVar9 = (ulonglong)(uVar13 - (int)uVar9);
  }
  pfVar2 = local_a0;
  fVar18 = *(float *)(param_1 + 0x24);
  uVar10 = 0;
  uVar13 = 0;
  if (uVar14 < uVar16) {
    fVar21 = 1.0;
    if (uVar17 != 0) {
      if (-0.0 < fVar22) {
        fVar21 = *(float *)(param_1 + 0x20) / fVar22;
        fVar22 = (1.0 - *(float *)(param_1 + 0x20)) / fVar22;
      }
      else {
        fVar21 = 0.0;
        fVar22 = 0.0;
      }
      fVar21 = (float)(uVar5 - uVar15) * fVar21 + (float)(uVar6 - uVar5) * fVar22;
    }
    fVar21 = fVar21 - fVar18;
    if (fVar21 <= 0.0) {
      fVar18 = fVar18 + fVar21;
    }
    else {
      if (-0.0 < (float)uVar3) {
        fVar22 = (fVar18 - 1.0) / (float)uVar3;
        if (fVar22 != 0.0) {
          uVar13 = (uint)(longlong)-(fVar21 / fVar22);
        }
      }
      else {
        fVar22 = 0.0;
        uVar13 = 0;
      }
      uVar16 = uVar16 - uVar14;
      uVar3 = uVar16;
      if (uVar13 <= uVar16) {
        uVar3 = uVar13;
      }
      uVar15 = uVar4;
      if ((uVar3 <= uVar4) && (uVar15 = uVar13, uVar16 < uVar13)) {
        uVar15 = uVar16;
      }
      uVar10 = (uVar15 >> 1) + 2 & 0xfffffffc;
      if (-0.0 < (float)uVar4) {
        fVar19 = fVar18 / (float)uVar4;
      }
      else {
        fVar19 = -0.0;
      }
      fVar23 = (float)uVar10;
      fVar18 = fVar18 + fVar23 * fVar19;
      if (uVar11 < uVar12 + uVar10) {
        if (-0.0 < fVar23) {
          fVar20 = -((((float)uVar12 - (float)uVar6) * fVar22 + fVar21 + fVar23 * fVar19) / fVar23);
        }
        else {
          fVar20 = 0.0;
        }
        uVar3 = (uVar12 + uVar10) - uVar11;
        uVar15 = (uint)uVar9;
        if (uVar3 <= uVar15) {
          uVar9 = (ulonglong)uVar3;
        }
        fVar20 = (float)BufferOutputPolicy::Ramp(&local_a8,uVar9,uVar12,fVar20,local_a0);
        uVar11 = uVar11 + (int)uVar9;
        uVar9 = (ulonglong)(uVar15 - (int)uVar9);
      }
    }
  }
  uVar15 = uVar14 - uVar11;
  uVar17 = (uint)uVar9;
  uVar3 = uVar17;
  if ((int)uVar15 <= (int)uVar17) {
    uVar3 = uVar15;
  }
  if (-1 < (int)uVar3) {
    uVar8 = (ulonglong)uVar15;
    if ((int)uVar17 < (int)uVar15) {
      uVar8 = uVar9;
    }
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
      fVar20 = *(float *)(param_1 + 0x24);
      pfVar1 = local_a8 + uVar8;
      for (; local_a8 < pfVar1; local_a8 = local_a8 + 4) {
        *local_a8 = fVar20;
        local_a8[1] = fVar20;
        local_a8[2] = fVar20;
        local_a8[3] = fVar20;
      }
      fVar22 = fVar20;
      if (fVar20 <= *pfVar2) {
        fVar22 = *pfVar2;
      }
      uVar11 = uVar11 + iVar7;
      uVar9 = (ulonglong)(uVar17 - iVar7);
      *pfVar2 = fVar22;
      local_a8 = pfVar1;
    }
  }
  uVar3 = (uint)uVar9;
  uVar14 = (uVar4 - uVar10) + uVar14;
  if (uVar11 < uVar14) {
    fVar22 = (float)(uVar4 - uVar10);
    if (-0.0 < fVar22) {
      fVar22 = -(fVar18 / fVar22);
    }
    else {
      fVar22 = 0.0;
    }
    if (uVar14 - uVar11 <= uVar3) {
      uVar9 = (ulonglong)(uVar14 - uVar11);
    }
    fVar20 = (float)BufferOutputPolicy::Ramp(&local_a8,uVar9,fVar20,fVar22,pfVar2);
    uVar11 = uVar11 + (int)uVar9;
    uVar3 = uVar3 - (int)uVar9;
  }
  if ((uVar3 == 0) || (uVar11 < uVar14)) {
    *(float *)(param_3 + 0xc) = fVar20;
  }
  else {
    pfVar1 = local_a8 + uVar3;
    for (; local_a8 < pfVar1; local_a8 = local_a8 + 4) {
      *local_a8 = 0.0;
      local_a8[1] = 0.0;
      local_a8[2] = 0.0;
      local_a8[3] = 0.0;
    }
    fVar20 = *pfVar2;
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *pfVar2 = fVar20;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 8) = 3;
  }
  return;
}



// FUNCTION 14319d6b0 _Process<SingleOutputPolicy> body=1267 status=ok
// SIG undefined _Process<SingleOutputPolicy>(void)

void CAkEnvelopeProcess::_Process<SingleOutputPolicy>
               (longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x1c);
  uVar8 = *(uint *)(param_1 + 4) & 0xfffffffc;
  uVar7 = *(int *)(param_1 + 8) + uVar8;
  fVar14 = *(float *)(param_1 + 0x18);
  uVar6 = *(int *)(param_1 + 0xc) - param_2;
  uVar5 = *(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar11 = uVar10 >> 1;
  if (fVar14 <= 0.0) {
    fVar16 = (float)uVar11;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x20);
    if ((fVar13 <= fVar14) || (fVar13 <= 0.0)) {
      fVar16 = (float)uVar11;
      iVar2 = (int)(longlong)(((fVar14 - fVar13) / (1.0 - fVar13)) * fVar16) + uVar11;
      uVar6 = uVar6 + iVar2;
      uVar7 = uVar7 + iVar2;
    }
    else {
      fVar16 = (float)uVar11;
      iVar2 = (int)(longlong)((fVar14 / fVar13) * fVar16);
      uVar6 = uVar6 + iVar2;
      uVar7 = uVar7 + iVar2;
    }
  }
  if (uVar6 != 0) {
    fVar14 = *(float *)(param_1 + 0x10);
  }
  if (uVar6 < uVar8) {
    uVar3 = uVar8 - uVar6;
    if (param_2 <= uVar8 - uVar6) {
      uVar3 = param_2;
    }
    fVar13 = *(float *)(param_3 + 0x10);
    uVar6 = uVar6 + uVar3;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    param_2 = param_2 - uVar3;
    *(float *)(param_3 + 0x10) = fVar13;
  }
  uVar3 = uVar11 + uVar8;
  if (uVar7 <= uVar11 + uVar8) {
    uVar3 = uVar7;
  }
  fVar13 = fVar14;
  if (uVar6 < uVar3) {
    if (-0.0 < fVar16) {
      fVar13 = *(float *)(param_1 + 0x20) / fVar16;
    }
    else {
      fVar13 = 0.0;
    }
    uVar4 = param_2;
    if (uVar3 - uVar6 <= param_2) {
      uVar4 = uVar3 - uVar6;
    }
    uVar6 = uVar6 + uVar4;
    param_2 = param_2 - uVar4;
    fVar13 = (float)uVar4 * fVar13 + fVar14;
    fVar15 = fVar13;
    if (fVar13 <= fVar14) {
      fVar15 = fVar14;
    }
    if (fVar15 <= *(float *)(param_3 + 0x10)) {
      fVar15 = *(float *)(param_3 + 0x10);
    }
    *(float *)(param_3 + 0x10) = fVar15;
  }
  uVar11 = uVar8 + uVar11 * 2;
  if (uVar7 <= uVar11) {
    uVar11 = uVar7;
  }
  fVar14 = fVar13;
  if (uVar6 < uVar11) {
    if (-0.0 < fVar16) {
      fVar14 = (1.0 - *(float *)(param_1 + 0x20)) / fVar16;
    }
    else {
      fVar14 = 0.0;
    }
    uVar4 = param_2;
    if (uVar11 - uVar6 <= param_2) {
      uVar4 = uVar11 - uVar6;
    }
    uVar6 = uVar6 + uVar4;
    param_2 = param_2 - uVar4;
    fVar14 = (float)uVar4 * fVar14 + fVar13;
    fVar15 = fVar14;
    if (fVar14 <= fVar13) {
      fVar15 = fVar13;
    }
    if (fVar15 <= *(float *)(param_3 + 0x10)) {
      fVar15 = *(float *)(param_3 + 0x10);
    }
    *(float *)(param_3 + 0x10) = fVar15;
  }
  uVar12 = uVar11 + uVar5;
  uVar4 = uVar7;
  if (uVar12 < uVar7) {
    uVar4 = uVar12;
  }
  fVar13 = fVar14;
  if (uVar6 < uVar4) {
    if (-0.0 < (float)uVar5) {
      fVar13 = (*(float *)(param_1 + 0x24) - 1.0) / (float)uVar5;
    }
    else {
      fVar13 = 0.0;
    }
    uVar9 = param_2;
    if (uVar4 - uVar6 <= param_2) {
      uVar9 = uVar4 - uVar6;
    }
    uVar6 = uVar6 + uVar9;
    param_2 = param_2 - uVar9;
    fVar13 = (float)uVar9 * fVar13 + fVar14;
    fVar15 = fVar13;
    if (fVar13 <= fVar14) {
      fVar15 = fVar14;
    }
    if (fVar15 <= *(float *)(param_3 + 0x10)) {
      fVar15 = *(float *)(param_3 + 0x10);
    }
    *(float *)(param_3 + 0x10) = fVar15;
  }
  fVar14 = *(float *)(param_1 + 0x24);
  uVar9 = 0;
  fVar15 = fVar13;
  if (uVar7 < uVar12) {
    fVar17 = 1.0;
    if (uVar10 >> 1 != 0) {
      if (-0.0 < fVar16) {
        fVar17 = *(float *)(param_1 + 0x20) / fVar16;
        fVar16 = (1.0 - *(float *)(param_1 + 0x20)) / fVar16;
      }
      else {
        fVar17 = 0.0;
        fVar16 = 0.0;
      }
      fVar17 = (float)(uVar3 - uVar8) * fVar17 + (float)(uVar11 - uVar3) * fVar16;
    }
    fVar17 = fVar17 - fVar14;
    if (fVar17 <= 0.0) {
      fVar14 = fVar14 + fVar17;
      uVar9 = 0;
    }
    else {
      fVar16 = (float)uVar5;
      if (-0.0 < fVar16) {
        fVar18 = (fVar14 - 1.0) / fVar16;
        if (fVar18 != 0.0) {
          uVar9 = (uint)(longlong)-((fVar16 * fVar17) / (fVar14 - 1.0));
        }
      }
      else {
        fVar18 = 0.0;
      }
      uVar10 = uVar12 - uVar7;
      if (uVar9 <= uVar12 - uVar7) {
        uVar10 = uVar9;
      }
      if (uVar1 < uVar10) {
        uVar10 = uVar1;
      }
      uVar9 = uVar10 >> 1;
      if (-0.0 < (float)uVar1) {
        fVar16 = -(fVar14 / (float)uVar1);
      }
      else {
        fVar16 = 0.0;
      }
      fVar19 = (float)uVar9;
      fVar14 = fVar14 - fVar19 * fVar16;
      if (uVar6 < uVar9 + uVar4) {
        if (-0.0 < fVar19) {
          fVar19 = (fVar19 * fVar16 - (((float)uVar4 - (float)uVar11) * fVar18 + fVar17)) / fVar19;
        }
        else {
          fVar19 = 0.0;
        }
        uVar5 = (uVar9 + uVar4) - uVar6;
        uVar10 = param_2;
        if (uVar5 <= param_2) {
          uVar10 = uVar5;
        }
        uVar6 = uVar6 + uVar10;
        param_2 = param_2 - uVar10;
        fVar15 = (float)uVar10 * fVar19 + fVar13;
        fVar16 = fVar15;
        if (fVar15 <= fVar13) {
          fVar16 = fVar13;
        }
        if (fVar16 <= *(float *)(param_3 + 0x10)) {
          fVar16 = *(float *)(param_3 + 0x10);
        }
        *(float *)(param_3 + 0x10) = fVar16;
      }
    }
  }
  uVar5 = uVar7 - uVar6;
  uVar10 = param_2;
  if ((int)uVar5 <= (int)param_2) {
    uVar10 = uVar5;
  }
  if (-1 < (int)uVar10) {
    uVar10 = param_2;
    if ((int)uVar5 <= (int)param_2) {
      uVar10 = uVar5;
    }
    if (uVar10 != 0) {
      fVar15 = *(float *)(param_1 + 0x24);
      uVar6 = uVar6 + uVar10;
      param_2 = param_2 - uVar10;
      fVar16 = fVar15;
      if (fVar15 <= *(float *)(param_3 + 0x10)) {
        fVar16 = *(float *)(param_3 + 0x10);
      }
      *(float *)(param_3 + 0x10) = fVar16;
    }
  }
  uVar7 = uVar7 + (uVar1 - uVar9);
  fVar16 = fVar15;
  if (uVar6 < uVar7) {
    fVar16 = (float)(uVar1 - uVar9);
    if (-0.0 < fVar16) {
      fVar14 = -(fVar14 / fVar16);
    }
    else {
      fVar14 = 0.0;
    }
    uVar10 = param_2;
    if (uVar7 - uVar6 <= param_2) {
      uVar10 = uVar7 - uVar6;
    }
    uVar6 = uVar6 + uVar10;
    param_2 = param_2 - uVar10;
    fVar16 = (float)uVar10 * fVar14 + fVar15;
    fVar14 = fVar16;
    if (fVar16 <= fVar15) {
      fVar14 = fVar15;
    }
    if (fVar14 <= *(float *)(param_3 + 0x10)) {
      fVar14 = *(float *)(param_3 + 0x10);
    }
    *(float *)(param_3 + 0x10) = fVar14;
  }
  if ((param_2 != 0) && (uVar7 <= uVar6)) {
    fVar14 = *(float *)(param_3 + 0x10);
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    *(float *)(param_3 + 0x10) = fVar14;
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 8) = 3;
    return;
  }
  *(float *)(param_3 + 0xc) = fVar16;
  return;
}



// FUNCTION 14319dbb0 ~CAkModulatorEngine body=594 status=ok
// SIG undefined ~CAkModulatorEngine(void)

void CAkModulatorEngine::~CAkModulatorEngine(int *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 4);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = puVar2[1];
    if (puVar2 == *(undefined8 **)(param_1 + 2)) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = *param_1 + -1;
    FUN_1431c1760(puVar2);
    piVar1 = (int *)((longlong)puVar2 + 0x74);
    *piVar1 = *piVar1 + -1;
    lVar4 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar4,puVar2);
    }
    puVar2 = *(undefined8 **)(param_1 + 4);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  puVar2 = *(undefined8 **)(param_1 + 10);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    lVar4 = g_DefaultPoolId;
    puVar3 = (undefined8 *)*puVar2;
    if ((void *)puVar2[6] != (void *)0x0) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[6]);
    }
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    puVar2[6] = 0;
    if ((void *)puVar2[1] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 2) = 0;
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[1]);
      puVar2[1] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    }
    if ((void *)puVar2[3] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 4) = 0;
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[3]);
      puVar2[3] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(lVar4,puVar2);
    puVar2 = puVar3;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    lVar4 = g_DefaultPoolId;
    puVar3 = (undefined8 *)*puVar2;
    if ((void *)puVar2[6] != (void *)0x0) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[6]);
    }
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    puVar2[6] = 0;
    if ((void *)puVar2[1] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 2) = 0;
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[1]);
      puVar2[1] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    }
    if ((void *)puVar2[3] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 4) = 0;
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[3]);
      puVar2[3] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(lVar4,puVar2);
    puVar2 = puVar3;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x16);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    lVar4 = g_DefaultPoolId;
    puVar3 = (undefined8 *)*puVar2;
    if ((void *)puVar2[6] != (void *)0x0) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[6]);
    }
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    puVar2[6] = 0;
    if ((void *)puVar2[1] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 2) = 0;
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[1]);
      puVar2[1] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
    }
    if ((void *)puVar2[3] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 4) = 0;
      AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar2[3]);
      puVar2[3] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    }
    AK::MemoryMgr::Free(lVar4,puVar2);
    puVar2 = puVar3;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  return;
}



// FUNCTION 14319de10 AddContext body=44 status=ok
// SIG undefined AddContext(void)

void CAkModulatorEngine::AddContext(int *param_1,longlong param_2)

{
  *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
  *(undefined8 *)(param_2 + 8) = 0;
  if (*(longlong *)(param_1 + 4) == 0) {
    *param_1 = *param_1 + 1;
    *(longlong *)(param_1 + 4) = param_2;
    *(longlong *)(param_1 + 2) = param_2;
    return;
  }
  *(longlong *)(*(longlong *)(param_1 + 2) + 8) = param_2;
  *param_1 = *param_1 + 1;
  *(longlong *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 14319de40 CleanUpFinishedCtxs body=212 status=ok
// SIG undefined CleanUpFinishedCtxs(void)

void CAkModulatorEngine::CleanUpFinishedCtxs(int *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char cVar7;
  undefined8 *puVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 4);
  puVar8 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)0x0;
  while (puVar5 = puVar8, puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
    cVar7 = CAkModulatorCtx::IsFinished(puVar4);
    puVar2 = (undefined8 *)puVar4[1];
    puVar8 = puVar4;
    if (cVar7 != '\0') {
      if (puVar4 == *(undefined8 **)(param_1 + 4)) {
        *(undefined8 **)(param_1 + 4) = puVar2;
      }
      else {
        puVar5[1] = puVar2;
      }
      if (puVar4 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(param_1 + 2) = puVar5;
      }
      *param_1 = *param_1 + -1;
      puVar8 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        puVar8 = puVar3;
      }
      puVar4[1] = puVar8;
      puVar8 = puVar5;
      puVar3 = puVar4;
    }
  }
  while (puVar2 = puVar3, puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar2[1];
    FUN_1431c1760(puVar2);
    piVar1 = (int *)((longlong)puVar2 + 0x74);
    *piVar1 = *piVar1 + -1;
    lVar6 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar6,puVar2);
    }
  }
  return;
}



// FUNCTION 14319df20 FillParams body=604 status=ok
// SIG undefined FillParams(void)

void CAkLFOCtx::FillParams(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fStack_5c;
  undefined8 extraout_XMM0_Qb;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 == 0) goto LAB_14319e0ed;
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar3 = *(undefined4 *)(lVar2 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x2c);
  uVar4 = *(undefined4 *)(lVar2 + 0x30);
  uVar5 = *(undefined4 *)(lVar2 + 0x34);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(int *)(param_1 + 0xdc) = iVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  if (iVar1 == 0) {
    fVar11 = 6.2831855;
LAB_14319df92:
    fStack_5c = (float)((ulonglong)uVar6 >> 0x20);
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fStack_5c,fVar11);
    *(float *)(param_1 + 0xd4) = fVar11;
  }
  else if (iVar1 != 5) {
    fVar11 = 1.0;
    goto LAB_14319df92;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') goto LAB_14319e0ed;
  fVar7 = 0.0;
  fVar11 = *(float *)(param_1 + 0xb8);
  fVar12 = *(float *)(param_1 + 0xbc);
  if (fVar12 == 0.0) {
    fVar12 = 1.0;
  }
  else {
    dVar8 = (double)fVar11;
    if (48000.0 <= dVar8) {
      dVar8 = 48000.0;
    }
    dVar8 = ::_guard_xfg_dispatch_icall_nop(24000.0 / dVar8);
    dVar8 = ::_guard_xfg_dispatch_icall_nop(-(dVar8 * (double)fVar12));
    auVar9._0_8_ = ::_guard_xfg_dispatch_icall_nop(dVar8 * 3.141592653589793);
    auVar9._8_8_ = extraout_XMM0_Qb;
    dVar8 = 2.0 - auVar9._0_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar8 * dVar8 - 1.0;
    auVar10 = sqrtpd(auVar9,auVar10);
    fVar7 = (float)(auVar10._0_8_ - dVar8);
    fVar12 = fVar7 + 1.0;
  }
  if (48000.0 <= fVar11) {
    fVar11 = 1.0;
  }
  else {
    fVar11 = fVar11 * 2.0833333e-05;
  }
  *(float *)(param_1 + 0xd8) = fVar11;
  if (*(int *)(param_1 + 0xb4) == 0) {
    *(float *)(param_1 + 0xd8) = fVar11 * 6.2831855;
  }
  *(float *)(param_1 + 0xcc) = fVar12;
  *(float *)(param_1 + 0xd0) = fVar7;
  iVar1 = *(int *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xdc) != iVar1) {
    if (*(int *)(param_1 + 0xdc) == 0) {
      fVar11 = *(float *)(param_1 + 0xd4) * 0.15915494;
    }
    else {
      if (iVar1 != 0) goto LAB_14319e0d5;
      fVar11 = *(float *)(param_1 + 0xd4) * 6.2831855;
    }
    *(float *)(param_1 + 0xd4) = fVar11;
  }
LAB_14319e0d5:
  *(int *)(param_1 + 0xdc) = iVar1;
  *(undefined1 *)(param_1 + 0xe8) = 0;
LAB_14319e0ed:
  param_2[6] = *(undefined4 *)(param_1 + 0xa8);
  param_2[7] = *(undefined4 *)(param_1 + 0xac);
  param_2[8] = *(undefined4 *)(param_1 + 0xb0);
  param_2[9] = *(undefined4 *)(param_1 + 0xb4);
  param_2[10] = *(undefined4 *)(param_1 + 0xb8);
  param_2[0xb] = *(undefined4 *)(param_1 + 0xbc);
  param_2[0xc] = *(undefined4 *)(param_1 + 0xc0);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  *param_2 = *(undefined4 *)(param_1 + 0x78);
  param_2[3] = *(undefined4 *)(param_1 + 0x70);
  param_2[2] = *(undefined4 *)(param_1 + 0x6c);
  param_2[1] = *(undefined4 *)(param_1 + 0x68);
  param_2[4] = *(undefined4 *)(param_1 + 0x80);
  param_2[5] = *(undefined4 *)(param_1 + 0x88);
  return;
}



// FUNCTION 14319e180 FUN_14319e180 body=510 status=ok
// SIG undefined FUN_14319e180(void)

undefined8 FUN_14319e180(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar8 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar4 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar8 * 0x18,0x10);
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  pvVar7 = (void *)*param_1;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar4)) {
    uVar12 = 0;
    if (3 < uVar9) {
      lVar10 = -(longlong)pvVar4;
      lVar11 = (uVar9 - 4 >> 2) + 1;
      uVar12 = lVar11 * 4;
      puVar6 = (undefined8 *)((longlong)pvVar4 + 0xc);
      do {
        puVar1 = (undefined8 *)((longlong)puVar6 + -0xc);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)((longlong)puVar6 + -4) = 0xffffffff;
          *puVar6 = 0;
        }
        lVar5 = *param_1;
        puVar2 = (undefined8 *)((longlong)puVar6 + lVar5 + lVar10 + -0xc);
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        *(undefined8 *)((longlong)puVar6 + -4) = uVar3;
        *(undefined8 *)((longlong)puVar6 + 4) =
             *(undefined8 *)((longlong)puVar6 + lVar5 + lVar10 + 4);
        puVar1 = (undefined8 *)((longlong)puVar6 + 0xc);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)((longlong)puVar6 + 0x14) = 0xffffffff;
          puVar6[3] = 0;
        }
        lVar5 = *param_1;
        puVar2 = (undefined8 *)((longlong)puVar6 + lVar5 + lVar10 + 0xc);
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        *(undefined8 *)((longlong)puVar6 + 0x14) = uVar3;
        puVar1 = (undefined8 *)((longlong)puVar6 + 0x24);
        *(undefined8 *)((longlong)puVar6 + 0x1c) =
             *(undefined8 *)((longlong)puVar6 + lVar5 + lVar10 + 0x1c);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0xffffffff;
          puVar6[6] = 0;
        }
        lVar5 = *param_1 + (0x24 - (longlong)pvVar4);
        puVar2 = (undefined8 *)(lVar5 + (longlong)puVar6);
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        *(undefined8 *)((longlong)puVar6 + 0x2c) = uVar3;
        *(undefined8 *)((longlong)puVar6 + 0x34) = *(undefined8 *)(lVar5 + 0x10 + (longlong)puVar6);
        puVar1 = (undefined8 *)((longlong)puVar6 + 0x3c);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          *(undefined4 *)((longlong)puVar6 + 0x44) = 0xffffffff;
          puVar6[9] = 0;
        }
        lVar5 = (0x3c - (longlong)pvVar4) + *param_1;
        puVar2 = (undefined8 *)(lVar5 + (longlong)puVar6);
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        *(undefined8 *)((longlong)puVar6 + 0x44) = uVar3;
        *(undefined8 *)((longlong)puVar6 + 0x4c) = *(undefined8 *)(lVar5 + 0x10 + (longlong)puVar6);
        lVar11 = lVar11 + -1;
        puVar6 = puVar6 + 0xc;
      } while (lVar11 != 0);
      pvVar7 = (void *)*param_1;
    }
    if (uVar12 < uVar9) {
      lVar10 = uVar9 - uVar12;
      puVar6 = (undefined8 *)((longlong)pvVar4 + uVar12 * 0x18);
      do {
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0xffffffff;
          *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
        }
        lVar11 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar6 + (lVar11 - (longlong)pvVar4));
        uVar3 = puVar1[1];
        *puVar6 = *puVar1;
        puVar6[1] = uVar3;
        puVar6[2] = *(undefined8 *)((longlong)puVar6 + lVar11 + (0x10 - (longlong)pvVar4));
        puVar6 = puVar6 + 3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pvVar7 = (void *)*param_1;
    }
    AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar7);
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  return 1;
}



// FUNCTION 14319e380 FUN_14319e380 body=734 status=ok
// SIG undefined FUN_14319e380(void)

undefined8 FUN_14319e380(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  uVar14 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar7 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar14 * 0x38,0x10);
  if (pvVar7 == (void *)0x0) {
    return 0;
  }
  pvVar9 = (void *)*param_1;
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar7)) {
    uVar10 = 0;
    if (3 < uVar11) {
      lVar5 = -(longlong)pvVar7;
      lVar12 = -(longlong)pvVar7;
      lVar4 = -(longlong)pvVar7;
      lVar13 = (uVar11 - 4 >> 2) + 1;
      uVar10 = lVar13 * 4;
      puVar8 = (undefined8 *)((longlong)pvVar7 + 0x20);
      do {
        puVar2 = puVar8 + -4;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar8 + -3) = 0xffffffff;
          *(undefined8 *)((longlong)puVar8 + -0x14) = 0;
          puVar8[-1] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        lVar3 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + -0x20);
        uVar6 = puVar1[1];
        *puVar2 = *puVar1;
        puVar8[-3] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + -0x10);
        uVar6 = puVar2[1];
        puVar8[-2] = *puVar2;
        puVar8[-1] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5);
        uVar6 = puVar2[1];
        *puVar8 = *puVar2;
        puVar8[1] = uVar6;
        puVar8[2] = *(undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + 0x10);
        puVar2 = puVar8 + 3;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar8 + 4) = 0xffffffff;
          *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
        }
        lVar3 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + 0x18);
        uVar6 = puVar1[1];
        *puVar2 = *puVar1;
        puVar8[4] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + 0x28);
        uVar6 = puVar2[1];
        puVar8[5] = *puVar2;
        puVar8[6] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + 0x38);
        uVar6 = puVar2[1];
        puVar8[7] = *puVar2;
        puVar8[8] = uVar6;
        puVar2 = puVar8 + 10;
        puVar8[9] = *(undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + 0x48);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar8 + 0xb) = 0xffffffff;
          *(undefined8 *)((longlong)puVar8 + 0x5c) = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          puVar8[0xf] = 0;
          puVar8[0x10] = 0;
        }
        lVar3 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar12 + 0x50);
        uVar6 = puVar1[1];
        *puVar2 = *puVar1;
        puVar8[0xb] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar12 + 0x60);
        uVar6 = puVar2[1];
        puVar8[0xc] = *puVar2;
        puVar8[0xd] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar12 + 0x70);
        uVar6 = puVar2[1];
        puVar8[0xe] = *puVar2;
        puVar8[0xf] = uVar6;
        puVar8[0x10] = *(undefined8 *)((longlong)puVar8 + lVar3 + lVar12 + 0x80);
        puVar2 = puVar8 + 0x11;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
          *(undefined8 *)((longlong)puVar8 + 0x94) = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
        }
        lVar3 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar4 + 0x88);
        uVar6 = puVar1[1];
        *puVar2 = *puVar1;
        puVar8[0x12] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar4 + 0x98);
        uVar6 = puVar2[1];
        puVar8[0x13] = *puVar2;
        puVar8[0x14] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar4 + 0xa8);
        uVar6 = puVar2[1];
        puVar8[0x15] = *puVar2;
        puVar8[0x16] = uVar6;
        puVar8[0x17] = *(undefined8 *)((longlong)puVar8 + lVar3 + lVar4 + 0xb8);
        lVar13 = lVar13 + -1;
        puVar8 = puVar8 + 0x1c;
      } while (lVar13 != 0);
      pvVar9 = (void *)*param_1;
    }
    if (uVar10 < uVar11) {
      lVar5 = -(longlong)pvVar7;
      lVar12 = uVar11 - uVar10;
      puVar8 = (undefined8 *)((longlong)pvVar7 + uVar10 * 0x38 + 0x20);
      do {
        puVar2 = puVar8 + -4;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar8 + -3) = 0xffffffff;
          *(undefined8 *)((longlong)puVar8 + -0x14) = 0;
          puVar8[-1] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        lVar4 = *param_1;
        puVar1 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar5 + -0x20);
        uVar6 = puVar1[1];
        *puVar2 = *puVar1;
        puVar8[-3] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar5 + -0x10);
        uVar6 = puVar2[1];
        puVar8[-2] = *puVar2;
        puVar8[-1] = uVar6;
        puVar2 = (undefined8 *)((longlong)puVar8 + lVar4 + lVar5);
        uVar6 = puVar2[1];
        *puVar8 = *puVar2;
        puVar8[1] = uVar6;
        puVar8[2] = *(undefined8 *)((longlong)puVar8 + lVar4 + lVar5 + 0x10);
        lVar12 = lVar12 + -1;
        puVar8 = puVar8 + 7;
      } while (lVar12 != 0);
      pvVar9 = (void *)*param_1;
    }
    AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar9);
  }
  *param_1 = (longlong)pvVar7;
  *(uint *)((longlong)param_1 + 0xc) = uVar14;
  return 1;
}



// FUNCTION 14319e660 FUN_14319e660 body=2074 status=ok
// SIG undefined FUN_14319e660(void)

int FUN_14319e660(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int local_res8;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  local_res8 = 1;
  for (; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
    *(undefined4 *)(puVar9 + 5) = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    *(undefined4 *)(puVar9 + 4) = 0;
  }
  for (puVar9 = *(undefined8 **)(param_1 + 0x28); puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)*puVar9) {
    *(undefined4 *)(puVar9 + 5) = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    *(undefined4 *)(puVar9 + 4) = 0;
  }
  plVar8 = *(longlong **)(param_1 + 0x58);
  local_48 = 0;
  if (plVar8 != (longlong *)0x0) {
    do {
      *(undefined4 *)(plVar8 + 5) = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      *(undefined4 *)(plVar8 + 4) = 0;
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != (longlong *)0x0);
    local_48 = *(undefined8 *)(param_1 + 0x58);
  }
  plVar8 = *(longlong **)(param_1 + 0x10);
  local_58 = *(longlong **)(param_1 + 0x28);
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  local_50 = 0;
  local_40 = 0;
  for (; puVar14 = puVar9, plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[1]) {
    (**(code **)(*plVar8 + 0x10))(plVar8,param_2);
    if ((*(int *)((longlong)plVar8 + 0x7c) == 3) ||
       (*(int *)((longlong)plVar8 + 0x8c) < *(int *)((longlong)plVar8 + 0x84))) {
      iVar1 = *(int *)(plVar8[2] + 0x18);
      if (iVar1 == 0) {
        if (puVar9 == (undefined8 *)0x0) {
LAB_14319e7c1:
          puVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            puVar9[5] = 0;
            puVar9[6] = 0;
            pvVar10 = AK::MemoryMgr::Malign(g_DefaultPoolId,0x580,0x10);
            puVar9[1] = pvVar10;
            if (pvVar10 != (void *)0x0) {
              *(undefined4 *)((longlong)puVar9 + 0x14) = 0x10;
              pvVar10 = AK::MemoryMgr::Malign(g_DefaultPoolId,0x380,0x10);
              puVar9[3] = pvVar10;
              if (pvVar10 != (void *)0x0) {
                *(undefined4 *)((longlong)puVar9 + 0x24) = 0x10;
                *puVar9 = 0;
                if (*(longlong *)(param_1 + 0x40) == 0) {
                  *(undefined8 **)(param_1 + 0x40) = puVar9;
                }
                else {
                  **(undefined8 **)(param_1 + 0x38) = puVar9;
                }
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                *(undefined8 **)(param_1 + 0x38) = puVar9;
                goto LAB_14319e868;
              }
            }
            lVar5 = g_DefaultPoolId;
            if ((void *)puVar9[6] != (void *)0x0) {
              AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[6]);
            }
            *(undefined4 *)((longlong)puVar9 + 0x2c) = 0;
            puVar9[6] = 0;
            if ((void *)puVar9[1] != (void *)0x0) {
              *(undefined4 *)(puVar9 + 2) = 0;
              AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[1]);
              puVar9[1] = 0;
              *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
            }
            if ((void *)puVar9[3] != (void *)0x0) {
              *(undefined4 *)(puVar9 + 4) = 0;
              AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[3]);
              puVar9[3] = 0;
              *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
            }
            AK::MemoryMgr::Free(lVar5,puVar9);
          }
          local_res8 = 0x34;
          break;
        }
        if (*(int *)(puVar9 + 2) == *(int *)((longlong)puVar9 + 0x14)) {
          puVar9 = (undefined8 *)*puVar9;
        }
        puVar14 = puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_14319e7c1;
LAB_14319e868:
        uVar7 = *(uint *)(puVar9 + 2);
        lVar12 = 0;
        if (uVar7 < *(uint *)((longlong)puVar9 + 0x14)) {
          *(uint *)(puVar9 + 2) = uVar7 + 1;
          lVar12 = (ulonglong)uVar7 * 0x58 + puVar9[1];
          if (lVar12 != 0) {
            *(undefined8 *)(lVar12 + 0x38) = 0;
            *(undefined8 *)(lVar12 + 0x40) = 0;
            *(undefined8 *)(lVar12 + 0x48) = 0;
            *(undefined8 *)(lVar12 + 0x50) = 0;
          }
        }
        CAkLFOCtx::FillParams(plVar8,lVar12);
        local_res8 = 1;
      }
      else {
        if (iVar1 == 1) {
          local_res8 = FUN_14319c600(param_1,param_1 + 0x18,&local_58,plVar8);
        }
        else {
          if (iVar1 != 2) goto LAB_14319e8a8;
          local_res8 = FUN_14319c8b0(param_1,param_1 + 0x48,&local_48,plVar8);
        }
        if (local_res8 != 1) break;
      }
    }
LAB_14319e8a8:
  }
  plVar3 = local_58;
  if ((puVar14 != (undefined8 *)0x0) &&
     (*(uint *)(puVar14 + 2) < *(uint *)((longlong)puVar14 + 0x14) >> 1)) {
    puVar9 = (undefined8 *)*puVar14;
    while (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      if (puVar9 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 *)(param_1 + 0x40) = *puVar9;
      }
      else {
        *puVar14 = *puVar9;
      }
      if (puVar9 == *(undefined8 **)(param_1 + 0x38)) {
        *(undefined8 **)(param_1 + 0x38) = puVar14;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      lVar5 = g_DefaultPoolId;
      puVar16 = (undefined8 *)*puVar14;
      if ((void *)puVar9[6] != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[6]);
      }
      *(undefined4 *)((longlong)puVar9 + 0x2c) = 0;
      puVar9[6] = 0;
      if ((void *)puVar9[1] != (void *)0x0) {
        *(undefined4 *)(puVar9 + 2) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[1]);
        puVar9[1] = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
      }
      if ((void *)puVar9[3] != (void *)0x0) {
        *(undefined4 *)(puVar9 + 4) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[3]);
        puVar9[3] = 0;
        *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(lVar5,puVar9);
      puVar9 = puVar16;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    if (*(uint *)(plVar3 + 2) < *(uint *)((longlong)plVar3 + 0x14) >> 1) {
      plVar4 = (longlong *)*plVar3;
      while (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 2) = 0;
        *(undefined4 *)(plVar4 + 4) = 0;
        if (plVar4 == *(longlong **)(param_1 + 0x28)) {
          *(longlong *)(param_1 + 0x28) = *plVar4;
        }
        else {
          *plVar3 = *plVar4;
        }
        if (plVar4 == *(longlong **)(param_1 + 0x20)) {
          *(longlong **)(param_1 + 0x20) = plVar3;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        lVar5 = g_DefaultPoolId;
        plVar2 = (longlong *)*plVar3;
        if ((void *)plVar4[6] != (void *)0x0) {
          AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)plVar4[6]);
        }
        *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
        plVar4[6] = 0;
        if ((void *)plVar4[1] != (void *)0x0) {
          *(undefined4 *)(plVar4 + 2) = 0;
          AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)plVar4[1]);
          plVar4[1] = 0;
          *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
        }
        if ((void *)plVar4[3] != (void *)0x0) {
          *(undefined4 *)(plVar4 + 4) = 0;
          AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)plVar4[3]);
          plVar4[3] = 0;
          *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(lVar5,plVar4);
        plVar4 = plVar2;
      }
    }
    if ((plVar3 != (longlong *)0x0) &&
       (*(uint *)(plVar3 + 2) < *(uint *)((longlong)plVar3 + 0x14) >> 1)) {
      plVar4 = (longlong *)*plVar3;
      while (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 2) = 0;
        *(undefined4 *)(plVar4 + 4) = 0;
        if (plVar4 == *(longlong **)(param_1 + 0x58)) {
          *(longlong *)(param_1 + 0x58) = *plVar4;
        }
        else {
          *plVar3 = *plVar4;
        }
        if (plVar4 == *(longlong **)(param_1 + 0x50)) {
          *(longlong **)(param_1 + 0x50) = plVar3;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        lVar5 = g_DefaultPoolId;
        plVar2 = (longlong *)*plVar3;
        if ((void *)plVar4[6] != (void *)0x0) {
          AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)plVar4[6]);
        }
        *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
        plVar4[6] = 0;
        if ((void *)plVar4[1] != (void *)0x0) {
          *(undefined4 *)(plVar4 + 2) = 0;
          AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)plVar4[1]);
          plVar4[1] = 0;
          *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
        }
        if ((void *)plVar4[3] != (void *)0x0) {
          *(undefined4 *)(plVar4 + 4) = 0;
          AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)plVar4[3]);
          plVar4[3] = 0;
          *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
        }
        AK::MemoryMgr::Free(lVar5,plVar4);
        plVar4 = plVar2;
      }
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x40);
  puVar14 = *(undefined8 **)(param_1 + 0x28);
  puVar9 = *(undefined8 **)(param_1 + 0x58);
  for (plVar3 = *(longlong **)(param_1 + 0x10); plVar3 != plVar8; plVar3 = (longlong *)plVar3[1]) {
    if ((*(int *)((longlong)plVar3 + 0x7c) == 3) ||
       (*(int *)((longlong)plVar3 + 0x8c) < *(int *)((longlong)plVar3 + 0x84))) {
      iVar1 = *(int *)(plVar3[2] + 0x18);
      if (iVar1 == 0) {
        uVar7 = *(uint *)(puVar16 + 4);
        if ((uVar7 < *(uint *)((longlong)puVar16 + 0x24)) ||
           ((cVar6 = FUN_14319e380(puVar16 + 3,1), cVar6 != '\0' &&
            (uVar7 < *(uint *)((longlong)puVar16 + 0x24))))) {
          uVar7 = *(uint *)(puVar16 + 4);
          *(uint *)(puVar16 + 4) = uVar7 + 1;
          puVar11 = (undefined8 *)((ulonglong)uVar7 * 0x38 + puVar16[3]);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar11 + 1) = 0xffffffff;
            *puVar11 = 0;
            *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            puVar11[6] = 0;
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
        }
        plVar3[0xc] = (longlong)puVar11;
        *(int *)(puVar16 + 5) = *(int *)(puVar16 + 5) + (int)plVar3[0x11];
        if (*(int *)(puVar16 + 2) == *(int *)(puVar16 + 4)) {
          puVar16 = (undefined8 *)*puVar16;
        }
      }
      else if (iVar1 == 1) {
        uVar7 = *(uint *)(puVar14 + 4);
        if ((uVar7 < *(uint *)((longlong)puVar14 + 0x24)) ||
           ((cVar6 = FUN_14319e180(puVar14 + 3,2), cVar6 != '\0' &&
            (uVar7 < *(uint *)((longlong)puVar14 + 0x24))))) {
          puVar11 = (undefined8 *)(puVar14[3] + (ulonglong)*(uint *)(puVar14 + 4) * 0x18);
          *(uint *)(puVar14 + 4) = *(uint *)(puVar14 + 4) + 1;
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar11 + 1) = 0xffffffff;
            *puVar11 = 0;
            *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
        }
        plVar3[0xc] = (longlong)puVar11;
        *(int *)(puVar14 + 5) = *(int *)(puVar14 + 5) + (int)plVar3[0x11];
        if (*(int *)(puVar14 + 2) == *(int *)(puVar14 + 4)) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      else if (iVar1 == 2) {
        uVar7 = *(uint *)(puVar9 + 4);
        if ((uVar7 < *(uint *)((longlong)puVar9 + 0x24)) ||
           ((cVar6 = FUN_14319e180(puVar9 + 3,2), cVar6 != '\0' &&
            (uVar7 < *(uint *)((longlong)puVar9 + 0x24))))) {
          puVar11 = (undefined8 *)(puVar9[3] + (ulonglong)*(uint *)(puVar9 + 4) * 0x18);
          *(uint *)(puVar9 + 4) = *(uint *)(puVar9 + 4) + 1;
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar11 + 1) = 0xffffffff;
            *puVar11 = 0;
            *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
          }
        }
        else {
          puVar11 = (undefined8 *)0x0;
        }
        plVar3[0xc] = (longlong)puVar11;
        *(int *)(puVar9 + 5) = *(int *)(puVar9 + 5) + (int)plVar3[0x11];
        if (*(int *)(puVar9 + 2) == *(int *)(puVar9 + 4)) {
          puVar9 = (undefined8 *)*puVar9;
        }
      }
    }
    else {
      plVar3[0xc] = 0;
    }
  }
  for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[1]) {
    plVar3[0xc] = 0;
  }
  CAkModulatorEngine::ProcessBatch<CAkLFOProcess,AkLFOParams,AkLFOOutput>
            (*(undefined8 *)(param_1 + 0x40),param_2);
  for (puVar9 = *(undefined8 **)(param_1 + 0x28); puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)*puVar9) {
    uVar7 = *(uint *)(puVar9 + 5);
    if (*(uint *)((longlong)puVar9 + 0x2c) < uVar7) {
      if ((void *)puVar9[6] != (void *)0x0) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[6]);
        uVar7 = *(uint *)(puVar9 + 5);
      }
      *(undefined4 *)((longlong)puVar9 + 0x2c) = 0;
      puVar9[6] = 0;
      pvVar10 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar7 << 2,0x10);
      puVar9[6] = pvVar10;
      if (pvVar10 == (void *)0x0) break;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = *(undefined4 *)(puVar9 + 5);
    }
    lVar13 = puVar9[1];
    plVar8 = (longlong *)puVar9[3];
    lVar12 = puVar9[6];
    lVar15 = (ulonglong)*(uint *)(puVar9 + 2) * 0x30 + lVar13;
    for (; lVar13 != lVar15; lVar13 = lVar13 + 0x30) {
      *plVar8 = lVar12;
      if (*(int *)(lVar13 + 0x14) == 0) {
        CAkEnvelopeProcess::_Process<SingleOutputPolicy>();
      }
      else {
        CAkEnvelopeProcess::_Process<BufferOutputPolicy>(lVar13,param_2,plVar8,lVar12);
      }
      plVar8 = plVar8 + 3;
      lVar12 = lVar12 + (ulonglong)*(uint *)(lVar13 + 0x14) * 4;
    }
  }
  CAkModulatorEngine::ProcessBatch<CAkTimeModProcess,AkTimeModParams,AkTimeModOutput>
            (*(undefined8 *)(param_1 + 0x58),param_2);
  return local_res8;
}



// FUNCTION 14319ee90 FUN_14319ee90 body=3463 status=ok
// SIG undefined FUN_14319ee90(void)

void FUN_14319ee90(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float _X;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  
  local_c8 = *(undefined1 (*) [16])(param_1 + 2);
  fVar11 = local_c8._0_4_;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  pfVar1 = param_2 + param_3;
  fVar25 = (param_4 - param_5) / (float)param_3;
  fVar24 = fVar11;
  if (fVar11 <= 1e-08) {
    auVar12._0_8_ = local_c8._4_8_ << 0x20;
    auVar12._8_4_ = local_c8._8_4_;
    auVar12._12_4_ = local_c8._12_4_;
    local_c8._4_12_ = auVar12._4_12_;
    local_c8._0_4_ = 0x322bcc77;
    fVar24 = 1e-08;
  }
  uVar9 = local_c8._4_4_;
  uStack_d0._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  _X = uStack_d0._4_4_;
  if (uVar9 < 6) {
    pfVar5 = (float *)(longlong)(int)uVar9;
    uStack_d0._0_4_ = (float)uVar3;
    auVar13._0_4_ = (float)uStack_d0;
    local_d8._0_4_ = (float)uVar2;
    local_d8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar26 = local_d8._4_4_;
    local_d8 = uVar2;
    uStack_d0 = uVar3;
    switch(uVar9) {
    case 0:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        fVar26 = 1.0 / fVar24;
        do {
          auVar13._0_4_ = (1.5707964 - _X) * fVar26;
          iVar6 = (int)auVar13._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar13._0_4_)) {
            auVar13._4_4_ = auVar13._0_4_;
            auVar13._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar13);
            auVar13._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar13._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              auVar13._0_4_ = _X * _X;
              *param_2 = ((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                           0.08332414) * auVar13._0_4_ + 0.4999983) * _X + 0.5) * param_5;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          auVar14._0_4_ = (3.1415927 - _X) * fVar26;
          iVar6 = (int)auVar14._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar14._0_4_)) {
            auVar14._4_4_ = auVar14._0_4_;
            auVar14._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar14);
            auVar14._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar14._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              auVar14._0_4_ = 3.1415927 - _X;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_2 = ((((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                           0.08332414) * auVar13._0_4_ + 0.4999983) * auVar14._0_4_ + 0.5) * param_5
              ;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          auVar15._0_4_ = (4.712389 - _X) * fVar26;
          iVar6 = (int)auVar15._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar15._0_4_)) {
            auVar15._4_4_ = auVar15._0_4_;
            auVar15._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar15);
            auVar15._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar15._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              auVar14._0_4_ = _X - 3.1415927;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_2 = (0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                 0.08332414) * auVar13._0_4_ + 0.4999983) * auVar14._0_4_) * param_5
              ;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          auVar16._0_4_ = (6.2831855 - _X) * fVar26;
          iVar6 = (int)auVar16._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar16._0_4_)) {
            auVar16._4_4_ = auVar16._0_4_;
            auVar16._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar16);
            auVar16._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar16._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              auVar14._0_4_ = 6.2831855 - _X;
              auVar13._0_4_ = auVar14._0_4_ * auVar14._0_4_;
              *param_2 = (0.5 - (((0.0041531627 - auVar13._0_4_ * 9.181827e-05) * auVar13._0_4_ -
                                 0.08332414) * auVar13._0_4_ + 0.4999983) * auVar14._0_4_) * param_5
              ;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          if (6.2831855 <= _X) {
            _X = _X + -6.2831855;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 1:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar17._0_4_ = (0.5 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar17._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar17._0_4_)) {
            auVar17._4_4_ = auVar17._0_4_;
            auVar17._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar17);
            auVar17._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar17._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              auVar14._0_4_ = (_X + _X) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          auVar18._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar18._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar18._0_4_)) {
            auVar18._4_4_ = auVar18._0_4_;
            auVar18._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar18);
            auVar18._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar18._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              auVar14._0_4_ = ((1.0 - _X) + (1.0 - _X)) * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_ * param_5;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 2:
      if (param_2 < pfVar1) {
        uVar10 = 0;
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar19._0_4_ = (param_6 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar19._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar19._0_4_)) {
            auVar19._4_4_ = auVar19._0_4_;
            auVar19._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar19);
            auVar19._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar19._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              _X = _X + fVar24;
              auVar14._0_4_ = fVar26 * param_5 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          auVar20._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar20._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar20._0_4_)) {
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar20);
            auVar20._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar20._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = uVar10;
          }
          uVar8 = uVar10;
          if (uVar7 != 0) {
            do {
              param_5 = param_5 + fVar25;
              uVar8 = uVar8 + 1;
              _X = _X + fVar24;
              auVar14._0_4_ = -(auVar14._0_4_ * auVar13._0_4_);
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 3:
      if (param_2 < pfVar1) {
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar21._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar21._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar21._0_4_)) {
            auVar21._4_4_ = auVar21._0_4_;
            auVar21._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar21);
            auVar21._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar21._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar10 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar10 = 0;
          }
          uVar7 = 0;
          if (uVar10 != 0) {
            do {
              _X = _X + fVar24;
              param_5 = param_5 + fVar25;
              uVar7 = uVar7 + 1;
              auVar14._0_4_ = _X * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar10);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 4:
      if (param_2 < pfVar1) {
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar22._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar22._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar22._0_4_)) {
            auVar22._4_4_ = auVar22._0_4_;
            auVar22._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar22);
            auVar22._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar22._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar10 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar10 = 0;
          }
          uVar7 = 0;
          if (uVar10 != 0) {
            do {
              _X = _X + fVar24;
              uVar7 = uVar7 + 1;
              param_5 = param_5 + fVar25;
              auVar14._0_4_ = (1.0 - _X) * param_5 * fVar26 - auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar7 < uVar10);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
      break;
    case 5:
      if (param_2 < pfVar1) {
        uVar10 = local_c8._8_8_;
        auVar14._0_4_ = (float)local_d8;
        do {
          auVar23._0_4_ = (1.0 - _X) * (1.0 / fVar24);
          iVar6 = (int)auVar23._0_4_;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar23._0_4_)) {
            auVar23._4_4_ = auVar23._0_4_;
            auVar23._8_8_ = 0;
            uVar4 = movmskps((int)pfVar5,auVar23);
            auVar23._0_4_ = (float)(int)(iVar6 + (uVar4 & 1 ^ 1));
          }
          uVar4 = (uint)auVar23._0_4_;
          if ((int)uVar4 < 0) {
            uVar4 = 0xffffffff;
          }
          else if ((int)param_3 < (int)uVar4) {
            uVar4 = param_3;
          }
          pfVar5 = pfVar1;
          if (param_2 + (int)uVar4 < pfVar1) {
            pfVar5 = param_2 + (int)uVar4;
          }
          uVar7 = (ulonglong)((longlong)pfVar5 + (3 - (longlong)param_2)) >> 2;
          if (pfVar5 < param_2) {
            uVar7 = 0;
          }
          if (uVar7 != 0) {
            pfVar5 = (float *)(uVar10 >> 0x21);
            uVar8 = 0;
            do {
              uVar8 = uVar8 + 1;
              param_5 = param_5 + fVar25;
              _X = _X + fVar24;
              auVar14._0_4_ =
                   (float)(uint)(uVar10 >> 0x21) * 4.656613e-10 * param_5 * fVar26 -
                   auVar14._0_4_ * auVar13._0_4_;
              *param_2 = auVar14._0_4_;
              param_2 = param_2 + 1;
            } while (uVar8 < uVar7);
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_d8 = CONCAT44(local_d8._4_4_,auVar14._0_4_);
          }
          if (1.0 <= _X) {
            _X = _X + -1.0;
            uVar10 = uVar10 * 0x5851f42d4c957f2d + 1;
            uStack_d0 = CONCAT44(_X,(float)uStack_d0);
            local_c8._8_8_ = uVar10;
          }
          uVar2 = local_d8;
          uVar3 = uStack_d0;
        } while (param_2 < pfVar1);
      }
    }
  }
  uStack_d0 = uVar3;
  local_d8 = uVar2;
  if (fVar11 != 0.0) {
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
    *(undefined1 (*) [16])(param_1 + 2) = local_c8;
    if (uVar9 == 0) {
      fVar11 = 6.2831855;
    }
    else {
      if (uVar9 == 5) {
        return;
      }
      fVar11 = 1.0;
    }
    fVar11 = _guard_xfg_dispatch_icall_nop(_X,fVar11);
    *(float *)((longlong)param_1 + 0xc) = fVar11;
  }
  return;
}



// FUNCTION 14319fc30 Ramp body=280 status=ok
// SIG undefined Ramp(void)

undefined8
BufferOutputPolicy::Ramp
          (longlong *param_1,uint param_2,undefined8 param_3,float param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = (float)param_3;
  if (param_2 == 0) {
    return param_3;
  }
  pfVar1 = (float *)*param_1;
  fVar5 = param_4 * 4.0;
  fVar7 = fVar6 + 0.0;
  fVar8 = param_4 + fVar6;
  *pfVar1 = fVar7;
  pfVar1[1] = fVar8;
  pfVar1[2] = param_4 + param_4 + fVar6;
  pfVar1[3] = param_4 * 3.0 + fVar6;
  pfVar4 = pfVar1 + 4;
  pfVar2 = pfVar1;
  if (pfVar4 < pfVar1 + param_2) {
    do {
      pfVar3 = pfVar2;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[2];
      fVar9 = pfVar3[3];
      *pfVar4 = *pfVar3 + fVar5;
      pfVar4[1] = fVar7 + fVar5;
      pfVar4[2] = fVar8 + fVar5;
      pfVar4[3] = fVar9 + fVar5;
      pfVar4 = pfVar4 + 4;
      pfVar2 = pfVar3 + 4;
    } while (pfVar4 < pfVar1 + param_2);
    fVar7 = pfVar3[4];
    fVar8 = pfVar3[5];
  }
  *param_1 = *param_1 + (ulonglong)param_2 * 4;
  fVar7 = fVar7 + fVar5;
  fVar9 = 0.0;
  fVar10 = 0.0;
  if ((0.0 <= fVar7) && (fVar9 = fVar7, fVar10 = fVar8 + fVar5, 1.0 <= fVar7)) {
    fVar9 = 1.0;
  }
  fVar7 = fVar9;
  if (fVar9 <= fVar6) {
    fVar7 = fVar6;
  }
  if (fVar7 <= *param_5) {
    fVar7 = *param_5;
  }
  *param_5 = fVar7;
  return CONCAT44(fVar10,fVar9);
}



// FUNCTION 14319fd50 CAkSource body=36 status=ok
// SIG undefined CAkSource(void)

undefined4 * CAkSource::CAkSource(undefined4 *param_1)

{
  param_1[6] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[3] = param_1[3] & 0xfffff800;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0xffffffff;
  return param_1;
}



// FUNCTION 14319fd80 ~CAkSource body=89 status=ok
// SIG undefined ~CAkSource(void)

void CAkSource::~CAkSource(undefined4 *param_1)

{
  if ((((byte)param_1[3] & 0x7c) == 4) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
  }
  param_1[3] = param_1[3] & 0xfffff800;
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 0xffffff7f;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 14319fde0 Clone body=88 status=ok
// SIG undefined Clone(void)

void CAkSource::Clone(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    puVar2[2] = 0;
    *(uint *)((longlong)puVar2 + 0xc) = *(uint *)((longlong)puVar2 + 0xc) & 0xfffff800;
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)((longlong)puVar2 + 4) = 0xffffffff;
    *(undefined4 *)(puVar2 + 1) = 0;
    uVar1 = param_1[1];
    *puVar2 = *param_1;
    puVar2[1] = uVar1;
    uVar1 = param_1[3];
    puVar2[2] = param_1[2];
    puVar2[3] = uVar1;
    return;
  }
  return;
}



// FUNCTION 14319fe40 LockDataPtr body=92 status=ok
// SIG undefined LockDataPtr(void)

void CAkSource::LockDataPtr(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 4) == 0) {
    FUN_143155b70(DAT_146b50b18,&local_18,*param_1);
    *param_3 = local_10;
    *param_2 = local_18;
    return;
  }
  *param_3 = param_1[2];
  *param_2 = *(undefined8 *)(param_1 + 4);
  return;
}



// FUNCTION 14319fea0 PrepareData body=34 status=ok
// SIG undefined PrepareData(void)

undefined8 CAkSource::PrepareData(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    uVar1 = CAkBankMgr::PrepareSingleMedia(DAT_146b50b18,param_1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14319fed0 SetSource body=134 status=ok
// SIG undefined SetSource(void)

void CAkSource::SetSource(undefined4 *param_1,undefined4 param_2)

{
  if ((((byte)param_1[3] & 0x7c) == 4) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
  }
  param_1[3] = param_1[3] & 0xfffff800;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = param_1[3] & 0xffffff7f;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 0xfffff808 | 8;
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  return;
}



// FUNCTION 14319ff60 SetSource body=322 status=ok
// SIG undefined SetSource(void)

void CAkSource::SetSource
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,wchar_t *param_4,
               undefined4 param_5,byte param_6,byte param_7)

{
  wchar_t *_Dst;
  longlong lVar1;
  longlong lVar3;
  ulonglong _MaxCount;
  longlong lVar2;
  
  if ((((byte)param_1[3] & 0x7c) == 4) && (*(void **)(param_1 + 4) != (void *)0x0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
  }
  param_1[3] = param_1[3] & 0xfffff800;
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 0xffffff7f;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = param_3;
  if (param_4 != (wchar_t *)0x0) {
    lVar1 = -1;
    do {
      lVar3 = lVar1;
      lVar1 = lVar3 + 1;
    } while (param_4[lVar3 + 1] != L'\0');
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(lVar3 + 2U) * 2);
    *(wchar_t **)(param_1 + 4) = _Dst;
    if (_Dst != (wchar_t *)0x0) {
      _MaxCount = lVar3 + 1;
      lVar1 = -1;
      do {
        lVar2 = lVar1;
        lVar1 = lVar2 + 1;
      } while (param_4[lVar1] != L'\0');
      if (lVar2 + 2U <= _MaxCount) {
        lVar1 = -1;
        do {
          lVar2 = lVar1;
          lVar1 = lVar2 + 1;
        } while (param_4[lVar1] != L'\0');
        _MaxCount = lVar2 + 2;
      }
      wcsncpy_s(_Dst,lVar3 + 2U,param_4,_MaxCount);
      _Dst[_MaxCount] = L'\0';
    }
  }
  param_1[3] = param_1[3] & 0xfffff884;
  param_1[1] = param_5;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = param_1[3] | ((uint)param_6 * 2 | (uint)param_7) << 8 | 0x84;
  return;
}



// FUNCTION 1431a00b0 SetSource body=129 status=ok
// SIG undefined SetSource(void)

void CAkSource::SetSource
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x7c) == 4) &&
     ((void *)param_1[2] != (void *)0x0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 0x80;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[2] = param_3;
  return;
}



// FUNCTION 1431a0140 SetSource body=111 status=ok
// SIG undefined SetSource(void)

void CAkSource::SetSource(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((byte)*(undefined4 *)((longlong)param_1 + 0xc) & 0x7c) == 4) &&
     ((void *)param_1[2] != (void *)0x0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[2]);
    param_1[2] = 0;
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  param_1[2] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 0x80;
  *(undefined4 *)(param_1 + 3) = param_2;
  return;
}



// FUNCTION 1431a01b0 UnLockDataPtr body=22 status=ok
// SIG undefined UnLockDataPtr(void)

void CAkSource::UnLockDataPtr(undefined4 *param_1)

{
  if (*(longlong *)(param_1 + 4) == 0) {
    FUN_143159ab0(DAT_146b50b18,*param_1);
    return;
  }
  return;
}



// FUNCTION 1431a01d0 UnPrepareData body=28 status=ok
// SIG undefined UnPrepareData(void)

void CAkSource::UnPrepareData(undefined4 *param_1)

{
  if ((param_1[2] != 0) && (*(longlong *)(param_1 + 4) == 0)) {
    FUN_14315b110(DAT_146b50b18,*param_1);
    return;
  }
  return;
}



// FUNCTION 1431a01f0 CAkAction body=72 status=ok
// SIG undefined CAkAction(void)

undefined8 * CAkAction::CAkAction(undefined8 *param_1,undefined2 param_2,undefined4 param_3)

{
  CAkIndexable::CAkIndexable(param_1,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__145acbf70;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x36) = 4;
  return param_1;
}



// FUNCTION 1431a0240 ~CAkAction body=88 status=ok
// SIG undefined ~CAkAction(void)

void CAkAction::~CAkAction(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbf70;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[4]);
  }
  param_1[4] = 0;
  CAkIndexable::~CAkIndexable(param_1);
  return;
}



// FUNCTION 1431a02a0 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkAction::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acbf70;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[4]);
  }
  param_1[4] = 0;
  CAkIndexable::~CAkIndexable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431a0320 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkAction::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x100));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x100));
  return iVar2;
}



// FUNCTION 1431a0370 AddToIndex body=120 status=ok
// SIG undefined AddToIndex(void)

void CAkAction::AddToIndex(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar2 = DAT_146b50af8;
  if (*(int *)(param_1 + 0x10) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x100);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x128);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(param_1 + 0x10) % (ulonglong)*(uint *)(lVar2 + 0x130);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(lVar2 + 0x128) + uVar1 * 8);
      *(longlong *)(*(longlong *)(lVar2 + 0x128) + uVar1 * 8) = param_1;
      *(int *)(lVar2 + 0x138) = *(int *)(lVar2 + 0x138) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1431a03f0 Create body=433 status=ok
// SIG undefined Create(void)

undefined8 CAkAction::Create(uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0xff00;
  if (0x1100 < uVar2) {
    if (0x1d00 < uVar2) {
      if (uVar2 < 0x2101) {
        if (uVar2 == 0x2100) {
          uVar1 = FUN_1431c3cb0();
          return uVar1;
        }
        if (uVar2 == 0x1e00) {
          uVar1 = CAkActionSeek::Create();
          return uVar1;
        }
        if (uVar2 == 0x1f00) {
          uVar1 = CAkActionMute::Create();
          return uVar1;
        }
        bVar3 = uVar2 == 0x2000;
      }
      else {
        if (uVar2 == 0x2200) {
          uVar1 = CAkActionMute::Create();
          return uVar1;
        }
        bVar3 = uVar2 == 0x3000;
      }
      if (!bVar3) {
        return 0;
      }
      uVar1 = CAkActionSetAkProp::Create(param_1,param_2,4);
      return uVar1;
    }
    if (uVar2 == 0x1d00) {
      uVar1 = FUN_1431c3790();
      return uVar1;
    }
    if (uVar2 < 0x1901) {
      if (uVar2 == 0x1900) {
        uVar1 = CAkActionSetSwitch::Create();
        return uVar1;
      }
      if (uVar2 != 0x1200) {
        if ((uVar2 - 0x1300 & 0xfffffeff) != 0) {
          return 0;
        }
        uVar1 = CAkActionSetGameParameter::Create();
        return uVar1;
      }
      uVar1 = CAkActionSetSwitch::Create();
      return uVar1;
    }
    if ((uVar2 - 0x1a00 & 0xfffffeff) == 0) {
      uVar1 = CAkActionBypassFX::Create();
      return uVar1;
    }
    if (uVar2 != 0x1c00) {
      return 0;
    }
    uVar1 = FUN_1431c24d0();
    return uVar1;
  }
  if (uVar2 != 0x1100) {
    if (uVar2 < 0x901) {
      if (uVar2 == 0x900) {
LAB_1431a0471:
        uVar1 = CAkActionSetAkProp::Create(param_1,param_2,2);
        return uVar1;
      }
      if (uVar2 < 0x401) {
        if (uVar2 == 0x400) {
          uVar1 = CAkActionPlay::Create();
          return uVar1;
        }
        if (uVar2 == 0x100) {
          uVar1 = CAkActionStop::Create();
          return uVar1;
        }
        if (uVar2 == 0x200) {
          uVar1 = CAkActionPause::Create();
          return uVar1;
        }
        if (uVar2 == 0x300) {
          uVar1 = FUN_1431c22e0();
          return uVar1;
        }
      }
      else {
        if ((uVar2 - 0x600 & 0xfffffeff) == 0) {
          uVar1 = CAkActionMute::Create();
          return uVar1;
        }
        if (uVar2 == 0x800) goto LAB_1431a0471;
      }
      return 0;
    }
    if (uVar2 < 0xd01) {
      if (uVar2 != 0xd00) {
        if ((uVar2 - 0xa00 & 0xfffffeff) == 0) {
          uVar1 = CAkActionSetAkProp::Create(param_1,param_2,0);
          return uVar1;
        }
        if (uVar2 != 0xc00) {
          return 0;
        }
      }
      uVar1 = CAkActionSetAkProp::Create(param_1,param_2,5);
      return uVar1;
    }
    if ((uVar2 - 0xe00 & 0xfffffeff) == 0) {
      uVar1 = CAkActionSetAkProp::Create(param_1,param_2,3);
      return uVar1;
    }
    if (uVar2 != 0x1000) {
      return 0;
    }
  }
  uVar1 = FUN_1431c3340();
  return uVar1;
}



// FUNCTION 1431a05b0 GetAndRefTarget body=28 status=ok
// SIG undefined GetAndRefTarget(void)

void CAkAction::GetAndRefTarget(longlong param_1)

{
  CAkAudioLibIndex::GetNodePtrAndAddRef
            (DAT_146b50af8,*(undefined4 *)(param_1 + 0x30),*(byte *)(param_1 + 0x36) >> 6 & 1);
  return;
}



// FUNCTION 1431a05d0 GetDelayTime body=186 status=ok
// SIG undefined GetDelayTime(void)

int CAkAction::GetDelayTime(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  pbVar6 = (byte *)0x0;
  local_res8[0] = DAT_1467be15c;
  pbVar7 = pbVar6;
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (pbVar2[uVar5] == 0xf) {
        pbVar7 = pbVar2 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x28);
  pbVar4 = (byte *)local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  iVar1 = *(int *)pbVar4;
  if (pbVar2 != (byte *)0x0) {
    do {
      uVar5 = (int)pbVar6 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar2] == 0xf) {
        if (pbVar2 + (longlong)pbVar6 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) == (byte *)0x0)
        {
          return iVar1;
        }
        iVar3 = RandomizerModifier::GetMod<long>();
        return iVar3 + iVar1;
      }
      pbVar6 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  return iVar1;
}



// FUNCTION 1431a0690 GetTransitionTime body=186 status=ok
// SIG undefined GetTransitionTime(void)

int CAkAction::GetTransitionTime(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_res8 [2];
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  pbVar6 = (byte *)0x0;
  local_res8[0] = DAT_1467be160;
  pbVar7 = pbVar6;
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (pbVar2[uVar5] == 0x10) {
        pbVar7 = pbVar2 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  pbVar2 = *(byte **)(param_1 + 0x28);
  pbVar4 = (byte *)local_res8;
  if (pbVar7 != (byte *)0x0) {
    pbVar4 = pbVar7;
  }
  iVar1 = *(int *)pbVar4;
  if (pbVar2 != (byte *)0x0) {
    do {
      uVar5 = (int)pbVar6 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar2] == 0x10) {
        if (pbVar2 + (longlong)pbVar6 * 8 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) == (byte *)0x0)
        {
          return iVar1;
        }
        iVar3 = RandomizerModifier::GetMod<long>();
        return iVar3 + iVar1;
      }
      pbVar6 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar2);
  }
  return iVar1;
}



// FUNCTION 1431a0750 PlayDirectly body=8 status=ok
// SIG undefined PlayDirectly(void)

byte CAkAction::PlayDirectly(longlong param_1)

{
  return *(byte *)(param_1 + 0x36) >> 7;
}



// FUNCTION 1431a0760 Release body=254 status=ok
// SIG undefined Release(void)

undefined4 CAkAction::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x100));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    if (uVar4 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x100);
      EnterCriticalSection(lpCriticalSection);
      if (*(uint *)(lVar9 + 0x130) != 0) {
        plVar2 = (longlong *)
                 (*(longlong *)(lVar9 + 0x128) +
                 ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x130)) * 8);
        lVar10 = *plVar2;
        lVar6 = 0;
        while (lVar5 = lVar10, lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x10) == uVar4) {
            if (lVar6 == 0) {
              *plVar2 = *(longlong *)(lVar5 + 8);
            }
            else {
              *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
            }
            *(int *)(lVar9 + 0x138) = *(int *)(lVar9 + 0x138) + -1;
            break;
          }
          lVar6 = lVar5;
          lVar10 = *(longlong *)(lVar5 + 8);
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      *(undefined4 *)(param_1 + 2) = 0;
    }
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x100));
  return uVar3;
}



// FUNCTION 1431a0860 SetAkProp body=276 status=ok
// SIG undefined SetAkProp(void)

ulonglong CAkAction::SetAkProp(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_res10 [2];
  
  uVar7 = (ulonglong)param_2;
  pbVar6 = (byte *)0x0;
  uVar8 = 1;
  pbVar1 = *(byte **)(param_1 + 0x20);
  local_res10[0] = (&DAT_1467be120)[uVar7];
  pbVar5 = pbVar6;
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar6;
    do {
      uVar4 = (int)pbVar3 + 1;
      if (((byte *)(ulonglong)uVar4)[(longlong)pbVar1] == (byte)param_2) {
        pbVar5 = pbVar1 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
        break;
      }
      pbVar3 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pbVar1 = (byte *)local_res10;
  if (pbVar5 != (byte *)0x0) {
    pbVar1 = pbVar5;
  }
  if (*(int *)pbVar1 != param_3) {
    uVar2 = AkPropBundle<AkPropValue,unsigned_char>::SetAkProp(param_1 + 0x20,uVar7 & 0xff,param_3);
    uVar8 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 1) {
      return uVar2;
    }
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    pbVar1 = *(byte **)(param_1 + 0x28);
    if (pbVar1 != (byte *)0x0) {
      do {
        uVar4 = (int)pbVar6 + 1;
        if (pbVar1[uVar4] == (byte)param_2) {
          if (pbVar1 + (longlong)pbVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
             ) {
            return uVar8;
          }
          goto LAB_1431a0941;
        }
        pbVar6 = (byte *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar1);
    }
  }
  else {
LAB_1431a0941:
    uVar8 = AkPropBundle<RANGED_MODIFIERS<AkPropValue>,unsigned_char>::SetAkProp
                      (param_1 + 0x28,uVar7 & 0xff,CONCAT44(param_5,param_4));
  }
  return uVar8;
}



// FUNCTION 1431a0980 SetAkProp body=289 status=ok
// SIG undefined SetAkProp(void)

ulonglong CAkAction::SetAkProp
                    (longlong param_1,int param_2,float param_3,float param_4,float param_5)

{
  byte *pbVar1;
  float *pfVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float local_res10 [2];
  
  uVar7 = (ulonglong)param_2;
  pfVar6 = (float *)0x0;
  uVar8 = 1;
  pbVar1 = *(byte **)(param_1 + 0x20);
  local_res10[0] = (float)(&DAT_1467be120)[uVar7];
  pfVar5 = pfVar6;
  if (pbVar1 != (byte *)0x0) {
    pfVar2 = pfVar6;
    do {
      uVar4 = (int)pfVar2 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == (byte)param_2) {
        pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar2 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  pfVar2 = local_res10;
  if (pfVar5 != (float *)0x0) {
    pfVar2 = pfVar5;
  }
  local_res10[0] = *pfVar2;
  if (local_res10[0] != param_3) {
    local_res10[0] = param_3;
    uVar3 = AkPropBundle<AkPropValue,unsigned_char>::SetAkProp(param_1 + 0x20,uVar7 & 0xff,param_3);
    uVar8 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 1) {
      return uVar3;
    }
  }
  if ((param_4 == 0.0) && (param_5 == 0.0)) {
    pbVar1 = *(byte **)(param_1 + 0x28);
    if (pbVar1 != (byte *)0x0) {
      do {
        uVar4 = (int)pfVar6 + 1;
        if (pbVar1[uVar4] == (byte)param_2) {
          if (pbVar1 + (longlong)pfVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
             ) {
            return uVar8;
          }
          goto LAB_1431a0a71;
        }
        pfVar6 = (float *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar1);
    }
  }
  else {
LAB_1431a0a71:
    uVar8 = AkPropBundle<RANGED_MODIFIERS<AkPropValue>,unsigned_char>::SetAkProp
                      (param_1 + 0x28,uVar7 & 0xff,CONCAT44(param_5,param_4));
  }
  return uVar8;
}



// FUNCTION 1431a0ad0 SetInitialValues body=757 status=ok
// SIG undefined SetInitialValues(void)

undefined4 CAkAction::SetInitialValues(longlong *param_1,longlong param_2,undefined4 param_3)

{
  size_t sVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStackX_c;
  byte *local_res10;
  undefined4 local_res18 [2];
  
  if (*(short *)((longlong)param_1 + 0x34) != *(short *)(param_2 + 4)) {
    return 1;
  }
  local_res10 = (byte *)(param_2 + 0xb);
  uStackX_c = CONCAT31(uStackX_c._1_3_,*(char *)(param_2 + 10) != '\0');
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x20))(param_1,CONCAT44(uStackX_c,*(undefined4 *)(param_2 + 6)));
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[4]);
  }
  uVar5 = 0;
  param_1[4] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
  }
  param_1[5] = 0;
  bVar2 = *local_res10;
  local_res10 = local_res10 + 1;
  if (bVar2 != 0) {
    uVar7 = bVar2 + 4 & 0xfffffffc;
    pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar7 + (uint)bVar2 * 4));
    if (pbVar3 == (byte *)0x0) {
      uVar6 = 0x34;
      goto LAB_1431a0ca0;
    }
    *pbVar3 = bVar2;
    ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,local_res10,(ulonglong)bVar2);
    local_res10 = local_res10 + bVar2;
    sVar1 = (ulonglong)bVar2 * 4;
    ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar7,local_res10,sVar1);
    local_res10 = local_res10 + sVar1;
    param_1[4] = (longlong)pbVar3;
  }
  bVar2 = *local_res10;
  local_res10 = local_res10 + 1;
  if (bVar2 != 0) {
    uVar7 = bVar2 + 4 & 0xfffffffc;
    pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar7 + (uint)bVar2 * 8));
    if (pbVar3 == (byte *)0x0) {
      uVar6 = 0x34;
      goto LAB_1431a0ca0;
    }
    *pbVar3 = bVar2;
    ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,local_res10,(ulonglong)bVar2);
    local_res10 = local_res10 + bVar2;
    sVar1 = (ulonglong)bVar2 * 8;
    ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar7,local_res10,sVar1);
    local_res10 = local_res10 + sVar1;
    param_1[5] = (longlong)pbVar3;
  }
  uVar6 = (**(code **)(*param_1 + 0x40))(param_1,&local_res10,local_res18);
LAB_1431a0ca0:
  pbVar3 = (byte *)param_1[4];
  if (pbVar3 != (byte *)0x0) {
    uVar4 = uVar5;
    do {
      uVar7 = (int)uVar4 + 1;
      if (pbVar3[uVar7] == 0xf) {
        pbVar3 = pbVar3 + uVar4 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        if (pbVar3 != (byte *)0x0) {
          *(int *)pbVar3 =
               (int)((longlong)((longlong)*(int *)pbVar3 * (ulonglong)DAT_1467bdcac) / 1000);
        }
        break;
      }
      uVar4 = (ulonglong)uVar7;
    } while (uVar7 < *pbVar3);
  }
  pbVar3 = (byte *)param_1[5];
  if (pbVar3 != (byte *)0x0) {
    while (uVar7 = (int)uVar5 + 1, pbVar3[uVar7] != 0xf) {
      uVar5 = (ulonglong)uVar7;
      if (*pbVar3 <= uVar7) {
        return uVar6;
      }
    }
    pbVar3 = pbVar3 + uVar5 * 8 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
    if (pbVar3 != (byte *)0x0) {
      *(int *)pbVar3 = (int)((longlong)((longlong)*(int *)pbVar3 * (ulonglong)DAT_1467bdcac) / 1000)
      ;
      *(int *)(pbVar3 + 4) =
           (int)((longlong)((longlong)*(int *)(pbVar3 + 4) * (ulonglong)DAT_1467bdcac) / 1000);
    }
  }
  return uVar6;
}



// FUNCTION 1431a0dd0 SetPlayDirectly body=11 status=ok
// SIG undefined SetPlayDirectly(void)

void CAkAction::SetPlayDirectly(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0x7f;
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) | param_2 << 7;
  return;
}



// FUNCTION 1431a0de0 CAkParameterNode body=85 status=ok
// SIG undefined CAkParameterNode(void)

undefined8 * CAkParameterNode::CAkParameterNode(undefined8 *param_1)

{
  CAkParameterNodeBase::CAkParameterNodeBase();
  *param_1 = &PTR__scalar_deleting_destructor__145acc030;
  param_1[3] = &PTR_LAB_145acc280;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 199;
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) & 0x80;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 1431a0e40 ~CAkParameterNode body=176 status=ok
// SIG undefined ~CAkParameterNode(void)

void CAkParameterNode::~CAkParameterNode(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145acc030;
  param_1[3] = &PTR_LAB_145acc280;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  FUN_143174960();
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      puVar1 = (undefined8 *)param_1[0x17];
    }
    if (puVar1 != (undefined8 *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x16]);
  }
  param_1[0x16] = 0;
  FUN_143173560(param_1);
  return;
}



// FUNCTION 1431a0f00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkParameterNode::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkParameterNode();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1431a0fc0 FUN_1431a0fc0 body=339 status=ok
// SIG undefined FUN_1431a0fc0(void)

undefined8 FUN_1431a0fc0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)param_1[0x17];
  uVar7 = 0;
  if (plVar8 == (longlong *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
    param_1[0x17] = (longlong)puVar4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1431a10cd;
    *puVar4 = 0;
    puVar4[1] = 0;
    plVar8 = (longlong *)param_1[0x17];
    if (plVar8 == (longlong *)0x0) goto LAB_1431a10cd;
  }
  uVar2 = *(uint *)(plVar8 + 1);
  if (*(uint *)((longlong)plVar8 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)plVar8 + 0xc) + 4;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar5 == (void *)0x0) goto LAB_1431a10cd;
    pvVar6 = (void *)*plVar8;
    if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
      uVar3 = *(uint *)(plVar8 + 1);
      if ((ulonglong)uVar3 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar5 + uVar7 * 8) = *(undefined8 *)(*plVar8 + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
        pvVar6 = (void *)*plVar8;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
    }
    *plVar8 = (longlong)pvVar5;
    *(uint *)((longlong)plVar8 + 0xc) = uVar1;
    if (uVar1 <= uVar2) goto LAB_1431a10cd;
  }
  uVar2 = *(uint *)(plVar8 + 1);
  *(uint *)(plVar8 + 1) = uVar2 + 1;
  puVar4 = (undefined8 *)(*plVar8 + (ulonglong)uVar2 * 8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = param_2;
    (**(code **)(*param_1 + 400))(param_1,0);
    return 1;
  }
LAB_1431a10cd:
  pvVar5 = (void *)param_1[0x17];
  if ((pvVar5 != (void *)0x0) && (*(int *)((longlong)pvVar5 + 8) == 0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
    param_1[0x17] = 0;
  }
  return 0x34;
}



// FUNCTION 1431a1120 CreateDelayedAction body=237 status=ok
// SIG undefined CreateDelayedAction(void)

longlong * CreateDelayedAction(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uStackX_c;
  
  plVar2 = (longlong *)FUN_1431a56b0(0x503,0,param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 0x1d) = *(undefined4 *)(param_1 + 0x20);
    CAkActionPlayAndContinue::SetHistory(plVar2,param_2 + 0x38);
    (**(code **)(*plVar2 + 0x20))(plVar2,CONCAT44(uStackX_c,param_3) & 0xffffff00ffffffff);
    CAkActionPlayAndContinue::SetInstigator(plVar2,*(undefined8 *)(param_2 + 8));
    CAkAction::SetPlayDirectly(plVar2,*(byte *)(param_2 + 0x188) >> 2 & 1);
    CAkActionPlayAndContinue::SetSAInfo(plVar2,*(undefined4 *)(param_2 + 0x90));
    CAkActionPlayAndContinue::SetIsFirstPlay(plVar2,*(byte *)(param_2 + 0x188) >> 1 & 1);
    CAkActionPlayAndContinue::SetInitialPlaybackState(plVar2,*(undefined4 *)(param_2 + 0x80));
    plVar1 = *(longlong **)(param_2 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      plVar2[0x1f] = *plVar1;
      *(int *)(plVar2 + 0x20) = (int)plVar1[1];
    }
  }
  return plVar2;
}



// FUNCTION 1431a1210 FUN_1431a1210 body=373 status=ok
// SIG undefined FUN_1431a1210(void)

int FUN_1431a1210(undefined8 *param_1,longlong param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  
  pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
  if (pvVar4 == (void *)0x0) {
    return 0x34;
  }
  plVar5 = (longlong *)AkPendingAction::AkPendingAction(pvVar4,*(undefined8 *)(param_2 + 0x10));
  if (plVar5 != (longlong *)0x0) {
    iVar3 = CAkActionPlayAndContinue::SetPlayStopTransition(param_4,*param_1,plVar5);
    if ((iVar3 == 1) &&
       (iVar3 = CAkActionPlayAndContinue::SetPauseResumeTransition(param_4,param_1[1],plVar5),
       iVar3 == 1)) {
      CAkActionPlayAndContinue::SetPathInfo(param_4,param_1[2]);
      if (*(char *)(param_2 + 0x98) != '\0') {
        param_3 = param_3 + *(int *)(param_2 + 0x84);
      }
      iVar3 = (**(code **)(*param_4 + 0x28))(param_4,0xf,param_3,0,0);
      lVar2 = g_DefaultPoolId;
      if (iVar3 == 1) {
        plVar5[1] = (longlong)param_4;
        *(undefined4 *)(plVar5 + 6) = *(undefined4 *)(param_2 + 0x34);
        *(undefined8 *)((longlong)plVar5 + 0x24) = *(undefined8 *)(param_2 + 0x28);
        *(undefined4 *)((longlong)plVar5 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
        piVar1 = *(int **)(param_2 + 0x20);
        if (*(longlong *)((longlong)plVar5 + 0x1c) != 0) {
          AkExternalSourceArray::Release();
        }
        if (piVar1 != (int *)0x0) {
          *piVar1 = *piVar1 + 1;
        }
        *(int **)((longlong)plVar5 + 0x1c) = piVar1;
        FUN_14313c660(DAT_146b50b78,plVar5);
        return 1;
      }
      (**(code **)(*plVar5 + 8))(plVar5,0);
      AK::MemoryMgr::Free(lVar2,plVar5);
      return iVar3;
    }
    lVar2 = g_DefaultPoolId;
    (**(code **)(*plVar5 + 8))(plVar5,0);
    AK::MemoryMgr::Free(lVar2,plVar5);
  }
  return 0x34;
}



// FUNCTION 1431a1390 FUN_1431a1390 body=175 status=ok
// SIG undefined FUN_1431a1390(void)

void FUN_1431a1390(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_1431744b0(param_1,*(byte *)(param_2 + 0x18) & 1);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 1) == 0) {
      FUN_143174190(param_1,*(undefined8 *)(param_2 + 8));
    }
    else {
      FUN_143174150();
    }
  }
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  if (((*(ushort *)(param_2 + 0x18) & 1) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    *(undefined1 *)(param_2 + 0x1c) = 0;
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_2 + 0x18) & 0xfffe;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x120))(*(longlong **)(param_1 + 0x88),param_2);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_2 + 0x1c) = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x120))(*(longlong **)(param_1 + 0x80),param_2);
  }
  return;
}



// FUNCTION 1431a1440 FUN_1431a1440 body=450 status=ok
// SIG undefined FUN_1431a1440(void)

undefined4 FUN_1431a1440(longlong param_1,float param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar6 = *(undefined8 **)(param_3 + 0x22);
  uVar5 = 0x34;
  uVar7 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    lVar3 = CAkContinuationList::Create();
    bVar8 = lStack_50 != 0;
    lStack_50 = lVar3;
    if (bVar8) {
      CAkContinuationList::Release();
    }
    if (lStack_50 == 0) {
      uVar5 = 2;
      goto LAB_1431a15bf;
    }
    puVar6 = &local_68;
  }
  plVar4 = (longlong *)CreateDelayedAction(puVar6,param_3,*(undefined4 *)(param_1 + 0x10));
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_3 + 0x60);
    plVar4[0x19] = lVar3;
    *(byte *)((longlong)plVar4 + 0xcc) = (byte)((ulonglong)lVar3 >> 0x20) | 1;
    *(undefined4 *)(plVar4 + 0x1a) = *param_3;
    iVar2 = CAkParameterNode::GetMidiPlayOnNoteType(param_1);
    if (iVar2 == 2) {
      uVar7 = 1;
    }
    else {
      cVar1 = CAkParameterNodeBase::IsMidiBreakLoopOnNoteOff(param_1);
      if (cVar1 != '\0') {
        uVar7 = 2;
      }
    }
    FUN_1431a53e0(plVar4,uVar7,*(undefined8 *)(param_3 + 0x28),param_3 + 0x26);
    if (*(longlong *)(param_3 + 0x22) != 0) {
      CAkActionPlayAndContinue::AssignModulator(plVar4,*(longlong *)(param_3 + 0x22) + 0x28);
    }
    if ((double)DAT_1467bdcac * (double)param_2 <= 0.0) {
      uVar9 = 0xbfe00000;
    }
    else {
      uVar9 = 0x3fe00000;
    }
    uVar5 = FUN_1431a1210(puVar6,param_3,
                          (int)((double)((ulonglong)uVar9 << 0x20) +
                               (double)DAT_1467bdcac * (double)param_2),plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1431a15bf:
  CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_40);
  if (lStack_50 != 0) {
    CAkContinuationList::Release();
  }
  return uVar5;
}


