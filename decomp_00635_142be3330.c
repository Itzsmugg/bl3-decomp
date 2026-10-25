// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142be3330 GenerateConfigurableParamsFromNamedValues body=310 status=ok
// SIG undefined GenerateConfigurableParamsFromNamedValues(void)

void FAIDynamicParam::GenerateConfigurableParamsFromNamedValues
               (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar6 = (undefined8 *)*param_3;
  puVar7 = puVar6 + (longlong)(int)param_3[1] * 2;
  for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    lVar4 = *param_2;
    lVar5 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar5 + lVar4) = 0;
    *(undefined1 *)(lVar5 + 8 + lVar4) = 0;
    *(undefined4 *)(lVar5 + 0xc + lVar4) = 0;
    *(undefined8 *)(lVar5 + 0x10 + lVar4) = 0;
    *(undefined8 *)(lVar5 + 0x18 + lVar4) = 0;
    puVar1 = (uint *)(lVar5 + 0x34 + lVar4);
    *puVar1 = *puVar1 | 1;
    *(undefined8 *)(lVar5 + 0x20 + lVar4) = 0;
    *(undefined8 *)(lVar5 + 0x28 + lVar4) = 0;
    *(undefined1 *)(lVar5 + 0x30 + lVar4) = 0xff;
    lVar4 = *param_2;
    *(undefined8 *)(lVar5 + lVar4) = *puVar6;
    lVar8 = lVar4 + 0x10 + lVar5;
    *(undefined1 *)(lVar5 + 8 + lVar4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(lVar5 + 0xc + lVar4) = *(undefined4 *)((longlong)puVar6 + 0xc);
    puVar1 = (uint *)(lVar5 + 0x34 + lVar4);
    *puVar1 = *puVar1 | 1;
    bVar2 = *(byte *)(lVar5 + 8 + lVar4);
    if (bVar2 < 2) {
      FBlackboardKeySelector::AddFloatFilter(lVar8,param_1,*(undefined8 *)(lVar5 + lVar4));
      FBlackboardKeySelector::AddIntFilter(lVar8,param_1,*(undefined8 *)(lVar5 + lVar4));
    }
    else if (bVar2 == 2) {
      FBlackboardKeySelector::AddBoolFilter(lVar8,param_1,*(undefined8 *)(lVar5 + lVar4));
    }
  }
  return;
}



// FUNCTION 142be3470 FUN_142be3470 body=1834 status=ok
// SIG undefined FUN_142be3470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142be3470(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  float *pfVar15;
  longlong *plVar16;
  int *piVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  float local_b8;
  uint local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_90;
  char local_8c;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined8 local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (param_1[0xc] != 0) {
    local_e8 = param_2;
    local_d0 = param_1;
    lVar10 = FUN_1428dfc70();
    for (lVar11 = param_1[0xc]; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar10) {
        if (param_1[0xc] == 0) {
          return;
        }
        lVar11 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
        if (lVar11 == 0) {
          return;
        }
        lVar10 = UEngine::GetWorldFromContextObject(DAT_146b17150,lVar11,1);
        if (lVar10 == 0) {
          return;
        }
        plVar16 = (longlong *)param_1[0xf];
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x278))(plVar16,lVar11,(int)param_2[6]);
          lVar12 = UStruct::FindPropertyByName(*(undefined8 *)(param_1[0xf] + 0x10),param_1[0x10]);
          param_1[0xe] = lVar12;
        }
        if ((param_1[0xe] == 0) ||
           (pcVar13 = (char *)((longlong)*(int *)(param_1[0xe] + 0x44) + param_1[0xf]),
           pcVar13 == (char *)0x0)) {
          cVar8 = (char)param_1[0x12];
        }
        else {
          cVar8 = *pcVar13;
        }
        local_c8 = 0;
        local_118 = 0;
        local_110 = 0;
        if (cVar8 == '\0') {
          local_f8 = param_1[0xc];
          local_b0[0] = 5;
          local_58 = '\0';
          local_108 = lVar10;
          FUN_14044bc80(&local_a8,&local_108,&local_f8);
          FUN_14045a130(local_b0);
          uVar1 = local_110;
          lVar11 = local_80;
          while (local_80 = lVar11, local_8c == '\0') {
            local_110._0_4_ = (int)uVar1;
            lVar10 = (longlong)(int)local_110;
            local_110._0_4_ = (int)local_110 + 1;
            local_110._4_4_ = (int)(uVar1 >> 0x20);
            if (local_110._4_4_ < (int)local_110) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_118,uVar1 & 0xffffffff);
            }
            *(longlong *)(local_118 + lVar10 * 8) = lVar11;
            FUN_14045a130(local_b0);
            uVar1 = local_110;
            lVar11 = local_80;
          }
          local_110 = uVar1;
          if (local_58 != '\0') {
            local_58 = '\0';
            UWorld::RemoveOnActorSpawnedHandler(local_a8,local_60);
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_a0 != 0) {
              FMemory::Free();
            }
          }
        }
        else {
          local_e0 = 0;
          local_d8 = 0;
          lVar12 = 0;
          if (param_1[0x19] != 0) {
            lVar14 = UEnvQueryContext::GetPrivateStaticClass();
            for (lVar18 = param_1[0x19];
                (lVar12 = 0, lVar18 != 0 && (lVar12 = param_1[0x19], lVar18 != lVar14));
                lVar18 = *(longlong *)(lVar18 + 0x30)) {
            }
          }
          FUN_142bedad0(param_2,lVar12,&local_e0);
          FAIDataProviderValue::BindData(param_1 + 0x13,lVar11,(int)param_2[6]);
          if ((param_1[0x14] == 0) ||
             (pfVar15 = (float *)((longlong)*(int *)(param_1[0x14] + 0x44) + param_1[0x15]),
             pfVar15 == (float *)0x0)) {
            fVar26 = *(float *)(param_1 + 0x18);
          }
          else {
            fVar26 = *pfVar15;
          }
          local_108 = param_1[0xc];
          local_b0[0] = 5;
          local_58 = '\0';
          local_f8 = lVar10;
          FUN_14044bc80(&local_a8,&local_f8,&local_108);
          FUN_14045a130(local_b0);
          uVar1 = local_110;
          iVar19 = local_90;
          lVar11 = local_80;
joined_r0x000142be366a:
          local_90 = iVar19;
          local_110 = uVar1;
          local_80 = lVar11;
          if (local_8c == '\0') {
            iVar19 = 0;
            if (0 < (int)local_d8) {
              lVar10 = *(longlong *)(lVar11 + 0x168);
              pfVar15 = (float *)(local_e0 + 8);
              do {
                if (lVar10 == 0) {
                  local_108 = _DAT_1468b5d90;
                  plVar16 = &local_108;
                  local_100 = DAT_1468b5d98;
                }
                else {
                  plVar16 = &local_f8;
                  local_f0 = *(undefined4 *)(lVar10 + 0x228);
                  local_f8 = *(longlong *)(lVar10 + 0x220);
                }
                local_b8 = *(float *)(plVar16 + 1);
                fVar25 = (float)*plVar16 - pfVar15[-2];
                fVar24 = (float)((ulonglong)*plVar16 >> 0x20) - pfVar15[-1];
                if (fVar25 * fVar25 + fVar24 * fVar24 +
                    (local_b8 - *pfVar15) * (local_b8 - *pfVar15) < fVar26 * fVar26) {
                  local_110._0_4_ = (int)uVar1;
                  lVar10 = (longlong)(int)local_110;
                  local_110._0_4_ = (int)local_110 + 1;
                  local_110._4_4_ = (int)(uVar1 >> 0x20);
                  if (local_110._4_4_ < (int)local_110) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_118,uVar1 & 0xffffffff);
                  }
                  *(longlong *)(local_118 + lVar10 * 8) = lVar11;
                  break;
                }
                iVar19 = iVar19 + 1;
                pfVar15 = pfVar15 + 3;
              } while (iVar19 < (int)local_d8);
            }
            lVar10 = local_a8;
            iVar19 = local_90 + 1;
            if (iVar19 < local_70 + local_98) {
              lVar12 = (longlong)iVar19 * 8;
              iVar22 = local_70;
              iVar20 = local_98;
              do {
                lVar18 = 0;
                if (iVar19 < iVar20) {
                  lVar11 = *(longlong *)(local_a0 + lVar12);
                }
                else {
                  lVar11 = *(longlong *)(local_78 + (longlong)(iVar19 - iVar20) * 8);
                }
                local_88 = local_88 + 1;
                if ((lVar11 != 0) &&
                   (lVar14 = AActor::GetLevel(lVar11), iVar22 = local_70, iVar20 = local_98,
                   lVar14 != 0)) {
                  if ((local_b0[0] & 1) != 0) {
                    iVar3 = *(int *)(lVar11 + 0xc);
                    if (iVar3 < (int)DAT_1469e91c4) {
                      uVar21 = iVar3 >> 0x1f & 0xffff;
                      uVar9 = iVar3 + uVar21;
                      lVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                               (longlong)(int)((uVar9 & 0xffff) - uVar21) * 0x18;
                    }
                    if ((*(uint *)(lVar18 + 8) >> 0x1d & 1) != 0) goto LAB_142be3900;
                  }
                  if (((local_b0[0] >> 1 & 1) == 0) ||
                     (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(lVar11), iVar22 = local_70,
                     iVar20 = local_98, cVar8 != '\0')) {
                    if ((local_b0[0] >> 2 & 1) != 0) {
                      if (((*(byte *)(lVar14 + 0x204) & 0x10) == 0) &&
                         ((*(byte *)(lVar14 + 0x205) & 0x10) == 0)) {
                        bVar7 = false;
                      }
                      else {
                        bVar7 = true;
                      }
                      piVar4 = *(int **)(lVar14 + 600);
                      if (((*(longlong *)(lVar14 + 0xc0) == 0) ||
                          (piVar17 = (int *)UWorld::GetActiveLevelCollection(),
                          piVar17 == (int *)0x0)) || (piVar4 == piVar17)) {
                        bVar5 = true;
                      }
                      else {
                        bVar5 = false;
                      }
                      if ((piVar4 == (int *)0x0) || (*piVar4 == 2)) {
                        bVar6 = true;
                      }
                      else {
                        bVar6 = false;
                      }
                      if ((bVar5) || (bVar5 = false, bVar6)) {
                        bVar5 = true;
                      }
                      iVar22 = local_70;
                      iVar20 = local_98;
                      if ((!bVar7) || (!bVar5)) goto LAB_142be3900;
                    }
                    lVar18 = ULevel::GetWorld(lVar14);
                    iVar22 = local_70;
                    iVar20 = local_98;
                    if (lVar18 == lVar10) {
                      lVar18 = AActor::GetLevel(lVar11);
                      param_1 = local_d0;
                      uVar1 = local_110;
                      if (lVar18 == *(longlong *)(lVar10 + 0x30)) goto joined_r0x000142be366a;
                      lVar18 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                        bVar7 = false;
                      }
                      else {
                        bVar7 = true;
                      }
                      iVar22 = local_70;
                      iVar20 = local_98;
                      param_1 = local_d0;
                      uVar1 = local_110;
                      if (!bVar7) goto joined_r0x000142be366a;
                    }
                  }
                }
LAB_142be3900:
                iVar19 = iVar19 + 1;
                lVar12 = lVar12 + 8;
                if (iVar22 + iVar20 <= iVar19) break;
              } while( true );
            }
            local_80 = 0;
            local_8c = '\x01';
            param_1 = local_d0;
          }
          if (local_58 != '\0') {
            local_58 = '\0';
            UWorld::RemoveOnActorSpawnedHandler(local_a8,local_60);
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_a0 != 0) {
              FMemory::Free();
            }
          }
          param_2 = local_e8;
          if (local_e0 != 0) {
            FMemory::Free(local_e0);
            param_2 = local_e8;
          }
        }
        (**(code **)(*param_1 + 0x2a0))(param_1,param_2,&local_118);
        uVar1 = local_118 + (longlong)(int)local_110 * 8;
        uVar23 = (uVar1 - local_118) + 7 >> 3;
        if (uVar1 < local_118) {
          uVar23 = 0;
        }
        if (uVar23 != 0) {
          plVar16 = param_2 + 3;
          uVar9 = local_100;
          do {
            FWeakObjectPtr::operator=(&local_f8);
            uVar2 = *(ushort *)((longlong)param_2 + 0x154);
            uVar21 = *(uint *)(local_e8 + 4);
            iVar19 = uVar21 + uVar2;
            *(int *)(local_e8 + 4) = iVar19;
            if (*(int *)((longlong)local_e8 + 0x24) < iVar19) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar16);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar16 + (longlong)(int)uVar21),0,(ulonglong)uVar2);
            UEnvQueryItemType_Actor::SetValue(*plVar16 + (longlong)(int)uVar21,&local_f8);
            param_2 = local_e8;
            uVar9 = uVar9 & 0xfffffffe;
            local_108 = ((ulonglong)uVar21 & 0x7fffffff) << 0x20;
            iVar19 = (int)local_e8[1];
            *(int *)(local_e8 + 1) = iVar19 + 1;
            if (*(int *)((longlong)local_e8 + 0xc) < iVar19 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(local_e8,iVar19);
            }
            lVar11 = *param_2;
            *(longlong *)(lVar11 + (longlong)iVar19 * 0xc) = local_108;
            *(uint *)(lVar11 + 8 + (longlong)iVar19 * 0xc) = uVar9;
            local_c8 = local_c8 + 1;
          } while (local_c8 != uVar23);
        }
        if (local_118 == 0) {
          return;
        }
        FMemory::Free(local_118);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142be3ba0 FUN_142be3ba0 body=144 status=ok
// SIG undefined FUN_142be3ba0(void)

void FUN_142be3ba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar2 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(param_1 + 0x78);
        (lVar3 = 0, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x78), lVar1 != lVar2));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  FUN_142bedad0(param_2,lVar3,local_18);
  *(undefined8 *)(param_1 + 0x88) = param_2;
  FUN_142c40540(param_1,local_18);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142be3c30 FUN_142be3c30 body=145 status=ok
// SIG undefined FUN_142be3c30(void)

longlong FUN_142be3c30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (param_1 = *(longlong *)(param_1 + 0x490), param_1 != 0)) {
      lVar2 = FUN_142c2de20();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 142be3cd0 FUN_142be3cd0 body=357 status=ok
// SIG undefined FUN_142be3cd0(void)

void FUN_142be3cd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar1 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar2 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar8 = param_1[2];
    for (lVar7 = lVar8; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar2) goto LAB_142be3d11;
    }
  }
  lVar8 = 0;
LAB_142be3d11:
  if (lVar8 != 0) {
    while (lVar8 != lVar1) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    if (0 < (int)param_1[1]) {
      if (param_1[2] != 0) {
        plVar3 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar6 = (longlong *)param_1[2];
        for (plVar9 = plVar6; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
          if (plVar9 == plVar3) goto LAB_142be3d74;
        }
      }
      plVar6 = (longlong *)0x0;
LAB_142be3d74:
      plVar9 = (longlong *)plVar6[0x1f];
      if (plVar9 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        plVar9 = (longlong *)plVar6[0x1f];
      }
      iVar5 = (int)param_1[1];
      if (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + iVar5) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar5 = (int)param_1[1];
      }
      lVar7 = *param_1;
      lVar1 = lVar7 + (longlong)iVar5 * 0xc;
      for (; lVar7 != lVar1; lVar7 = lVar7 + 0xc) {
        uVar4 = (**(code **)(*plVar9 + 0x2a8))
                          (plVar9,((longlong)(*(int *)(lVar7 + 4) * 2) >> 1) + param_1[3]);
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 142be3e40 FUN_142be3e40 body=382 status=ok
// SIG undefined FUN_142be3e40(void)

void FUN_142be3e40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_28 [16];
  
  lVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar2 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar8 = param_1[2];
    for (lVar7 = lVar8; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar2) goto LAB_142be3e81;
    }
  }
  lVar8 = 0;
LAB_142be3e81:
  if (lVar8 != 0) {
    while (lVar8 != lVar1) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    if (0 < (int)param_1[1]) {
      if (param_1[2] != 0) {
        plVar3 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar6 = (longlong *)param_1[2];
        for (plVar9 = plVar6; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
          if (plVar9 == plVar3) goto LAB_142be3ee4;
        }
      }
      plVar6 = (longlong *)0x0;
LAB_142be3ee4:
      plVar9 = (longlong *)plVar6[0x1f];
      if (plVar9 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        plVar9 = (longlong *)plVar6[0x1f];
      }
      iVar5 = (int)param_1[1];
      if (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_2);
        iVar5 = (int)param_1[1];
      }
      lVar7 = *param_1;
      lVar1 = lVar7 + (longlong)iVar5 * 0xc;
      for (; lVar7 != lVar1; lVar7 = lVar7 + 0xc) {
        puVar4 = (undefined8 *)
                 (**(code **)(*plVar9 + 0x298))
                           (plVar9,local_28,((longlong)(*(int *)(lVar7 + 4) * 2) >> 1) + param_1[3])
        ;
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        lVar8 = *param_2;
        *(undefined8 *)(lVar8 + (longlong)iVar5 * 0xc) = *puVar4;
        *(undefined4 *)(lVar8 + (longlong)iVar5 * 0xc + 8) = *(undefined4 *)(puVar4 + 1);
      }
    }
  }
  return;
}



// FUNCTION 142be3fc0 FUN_142be3fc0 body=155 status=ok
// SIG undefined FUN_142be3fc0(void)

longlong FUN_142be3fc0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = FUN_1429d7ab0();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (plVar1 = (longlong *)param_1[0x92], plVar1 != (longlong *)0x0)) {
    uVar4 = FUN_142c36280();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  uVar4 = FUN_142c36280();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
  return lVar3;
}



// FUNCTION 142be4060 GetCurrent body=98 status=ok
// SIG undefined GetCurrent(void)

undefined8 UBehaviorTreeManager::GetCurrent(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x150), lVar1 != 0)) {
    lVar3 = FUN_142c32730();
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
      return *(undefined8 *)(lVar1 + 0xa0);
    }
  }
  return 0;
}



// FUNCTION 142be40d0 FUN_142be40d0 body=119 status=ok
// SIG undefined FUN_142be40d0(void)

undefined8 FUN_142be40d0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
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
      return *(undefined8 *)(lVar2 + 0xa0);
    }
  }
  return 0;
}



// FUNCTION 142be4150 FUN_142be4150 body=390 status=ok
// SIG undefined FUN_142be4150(void)

undefined8 FUN_142be4150(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar8 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar7 = FUN_142c2de20();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar7 = param_1[0xa9];
    }
    else {
      uVar9 = FUN_142c46ed0();
      lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar9);
    }
    if (lVar7 != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x1e8);
      plVar5 = *(longlong **)(lVar7 + 0x1f0);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        uVar8 = GetTransientPackage();
        FUN_1417846f0(uVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar9 = UNavigationPath::GetPrivateStaticClass();
        uVar8 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
        local_38 = (undefined4)lVar4;
        uStack_34 = (undefined4)((ulonglong)lVar4 >> 0x20);
        uStack_30 = SUB84(plVar5,0);
        uStack_2c = (undefined4)((ulonglong)plVar5 >> 0x20);
        local_28 = local_38;
        uStack_24 = uStack_34;
        uStack_20 = uStack_30;
        uStack_1c = uStack_2c;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        FUN_142b97980(uVar8,&local_28);
      }
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
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 142be42e0 FUN_142be42e0 body=550 status=ok
// SIG undefined FUN_142be42e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142be42e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined4 *local_108;
  longlong local_100 [2];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar5 = FAIDataProviderValue::ToString(param_1 + 0x98,local_100);
  uVar5 = FText::FromString(local_f0,uVar5);
  local_58[0] = 4;
  FText::FText(local_48,uVar5);
  local_30 = '\x01';
  local_128[0] = 0;
  local_128[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
  FGenericPlatformString::Memcpy(local_128[0],L"Radius",0xe);
  local_110 = local_128;
  local_108 = local_58;
  FUN_1407484b0(&local_a8,local_118,&local_110,0);
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  if (local_30 != '\0') {
    local_30 = '\0';
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
  }
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_d8,L"radius: {Radius}",L"EnvQueryGenerator",L"ActorsOfClassDescription");
  uVar5 = FTextFormat::FTextFormat(local_c0,uVar5);
  FText::Format(param_2,uVar5,&local_a8);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return param_2;
}



// FUNCTION 142be4510 GetDescriptionDetails body=97 status=ok
// SIG undefined GetDescriptionDetails(void)

undefined8
UEnvQueryGenerator_BlueprintBase::GetDescriptionDetails(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"None",10);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be4580 FUN_142be4580 body=1469 status=ok
// SIG undefined FUN_142be4580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142be4580(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_258 [32];
  longlong local_238 [8];
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [8];
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined4 *local_1d8;
  longlong *local_1d0;
  undefined4 *local_1c8;
  longlong *local_1c0;
  undefined4 *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_142be57d0(local_1b0,param_1);
  local_c8[0] = 4;
  FText::FText(local_b8,local_1b0);
  local_a0 = '\x01';
  local_238[2] = 0;
  local_238[3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 2,0);
  FGenericPlatformString::Memcpy(local_238[2],L"DescriptionTitle",0x22);
  local_1e0 = local_238 + 2;
  local_1d8 = local_c8;
  FUN_1407484b0(&local_118,local_1f8,&local_1e0,0);
  if (local_238[2] != 0) {
    FMemory::Free();
  }
  if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar2 = (int *)((longlong)local_1a8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar6 = FUN_1428dfc70();
    lVar5 = *(longlong *)(param_1 + 0x60);
    for (lVar10 = lVar5; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar6) {
        if (lVar5 != 0) {
          local_1e8 = *(undefined8 *)(lVar5 + 0x18);
          FName::ToString(&local_1e8,local_238);
          goto LAB_142be4753;
        }
        break;
      }
    }
  }
  local_238[0] = 0;
  local_238[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238,0);
  FGenericPlatformString::Memcpy(local_238[0],&DAT_143f3edc8,10);
LAB_142be4753:
  uVar7 = FText::FromString(local_180,local_238);
  local_98[0] = 4;
  FText::FText(local_88,uVar7);
  local_70 = '\x01';
  local_238[4] = 0;
  local_238[5] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 4,0);
  FGenericPlatformString::Memcpy(local_238[4],L"ActorsClass",0x18);
  local_1d0 = local_238 + 4;
  local_1c8 = local_98;
  FUN_1407484b0(&local_118,local_1f4,&local_1d0,0);
  if (local_238[4] != 0) {
    FMemory::Free();
  }
  if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
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
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)local_178 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  if (local_238[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    if ((*(longlong *)(param_1 + 0x70) == 0) ||
       (pcVar8 = (char *)(longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x44),
       pcVar8 == (char *)0x0)) {
      cVar4 = *(char *)(param_1 + 0x90);
    }
    else {
      cVar4 = *pcVar8;
    }
    if (cVar4 == '\0') {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_168,L"{DescriptionTitle}: generate set of actors of {ActorsClass}",
                         L"EnvQueryGenerator",L"DescriptionGenerateActors");
      uVar7 = FTextFormat::FTextFormat(local_138,uVar7);
      FText::Format(param_2,uVar7,&local_118);
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      goto LAB_142be4af3;
    }
  }
  lVar5 = *(longlong *)(param_1 + 200);
  lVar10 = 0;
  if (lVar5 != 0) {
    lVar9 = UEnvQueryContext::GetPrivateStaticClass();
    lVar6 = lVar5;
    do {
      lVar10 = lVar5;
      if (lVar6 == lVar9) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar10 = 0;
    } while (lVar6 != 0);
  }
  FUN_142be57d0(local_198,lVar10);
  local_68[0] = 4;
  FText::FText(local_58,local_198);
  local_40 = '\x01';
  local_238[6] = 0;
  local_238[7] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 6,0);
  FGenericPlatformString::Memcpy(local_238[6],L"DescribeContext",0x20);
  local_1c0 = local_238 + 6;
  local_1b8 = local_68;
  FUN_1407484b0(&local_118,local_1f0,&local_1c0,0);
  if (local_238[6] != 0) {
    FMemory::Free();
  }
  if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar2 = (int *)((longlong)local_190 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_150,
                     L"{DescriptionTitle}: generate set of actors of {ActorsClass} around {DescribeContext}"
                     ,L"EnvQueryGenerator",L"DescriptionGenerateActorsAroundContext");
  uVar7 = FTextFormat::FTextFormat(local_128,uVar7);
  FText::Format(param_2,uVar7,&local_118);
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_148 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar2 = (int *)((longlong)local_148 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_148 + 8))(local_148,1);
      }
    }
  }
LAB_142be4af3:
  local_d0 = 0;
  if (local_d8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_118);
  return param_2;
}



// FUNCTION 142be4b40 FUN_142be4b40 body=1049 status=ok
// SIG undefined FUN_142be4b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142be4b40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_208 [32];
  longlong local_1e8 [6];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  undefined4 *local_190;
  longlong *local_188;
  undefined4 *local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [24];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_142be57d0(local_178,param_1);
  local_c8[0] = 4;
  FText::FText(local_b8,local_178);
  local_a0 = '\x01';
  local_1e8[0] = 0;
  local_1e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8[0],L"DescriptionTitle",0x22);
  local_1a8 = local_1e8;
  local_1a0 = local_c8;
  FUN_1407484b0(&local_118,local_1b8,&local_1a8,0);
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  local_98[0] = 4;
  FText::FText(local_88,param_1 + 0x60);
  local_70 = '\x01';
  local_1e8[2] = 0;
  local_1e8[3] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8 + 2,0);
  FGenericPlatformString::Memcpy(local_1e8[2],L"DescribeGeneratorAction",0x30);
  local_198 = local_1e8 + 2;
  local_190 = local_98;
  FUN_1407484b0(&local_118,local_1b4,&local_198,0);
  if (local_1e8[2] != 0) {
    FMemory::Free();
  }
  if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar4 = *(longlong *)(param_1 + 0x78);
  lVar8 = 0;
  if (lVar4 != 0) {
    lVar5 = UEnvQueryContext::GetPrivateStaticClass();
    lVar6 = lVar4;
    do {
      lVar8 = lVar4;
      if (lVar6 == lVar5) break;
      lVar6 = *(longlong *)(lVar6 + 0x30);
      lVar8 = 0;
    } while (lVar6 != 0);
  }
  FUN_142be57d0(local_160,lVar8);
  local_68[0] = 4;
  FText::FText(local_58,local_160);
  local_40 = '\x01';
  local_1e8[4] = 0;
  local_1e8[5] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1e8 + 4,0);
  FGenericPlatformString::Memcpy(local_1e8[4],L"DescribeContext",0x20);
  local_188 = local_1e8 + 4;
  local_180 = local_68;
  FUN_1407484b0(&local_118,local_1b0,&local_188,0);
  if (local_1e8[4] != 0) {
    FMemory::Free();
  }
  if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)local_158 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_148,
                     L"{DescriptionTitle}: {DescribeGeneratorAction} around {DescribeContext}",
                     L"EnvQueryGenerator",L"DescriptionBlueprintImplementedGenerator");
  uVar7 = FTextFormat::FTextFormat(local_130,uVar7);
  FText::Format(param_2,uVar7,&local_118);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  local_d0 = 0;
  if (local_d8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_118);
  return param_2;
}



// FUNCTION 142be4f60 FUN_142be4f60 body=29 status=ok
// SIG undefined FUN_142be4f60(void)

undefined8 FUN_142be4f60(undefined8 param_1,undefined8 param_2)

{
  FUN_142be57d0(param_2,param_1);
  return param_2;
}



// FUNCTION 142be4fb0 FUN_142be4fb0 body=55 status=ok
// SIG undefined FUN_142be4fb0(void)

undefined8 FUN_142be4fb0(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[0x2f];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142be4fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2a8))
                      (plVar1,((longlong)(*(int *)(*param_2 + 4 + (longlong)param_3 * 0xc) * 2) >> 1
                              ) + param_2[3]);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142be4ff0 FUN_142be4ff0 body=240 status=ok
// SIG undefined FUN_142be4ff0(void)

undefined8 FUN_142be4ff0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((param_2 < 0) || ((int)param_1[1] <= param_2)) {
    return 0;
  }
  lVar2 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar3 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar6 = param_1[2];
    for (lVar1 = lVar6; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) goto joined_r0x000142be5043;
    }
  }
  lVar6 = 0;
joined_r0x000142be5043:
  while( true ) {
    if (lVar6 == 0) {
      return 0;
    }
    if (lVar6 == lVar2) break;
    lVar6 = *(longlong *)(lVar6 + 0x30);
  }
  if (param_1[2] != 0) {
    plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
    plVar8 = (longlong *)param_1[2];
    for (plVar7 = plVar8; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
      if (plVar7 == plVar4) goto LAB_142be5090;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_142be5090:
  plVar7 = (longlong *)plVar8[0x1f];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    plVar7 = (longlong *)plVar8[0x1f];
  }
                    /* WARNING: Could not recover jumptable at 0x000142be50d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar7 + 0x2a8))
                    (plVar7,((longlong)(*(int *)(*param_1 + 4 + (longlong)param_2 * 0xc) * 2) >> 1)
                            + param_1[3]);
  return uVar5;
}



// FUNCTION 142be50e0 FUN_142be50e0 body=276 status=ok
// SIG undefined FUN_142be50e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142be50e0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((-1 < param_3) && (param_3 < (int)param_1[1])) {
    lVar2 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
    if (param_1[2] != 0) {
      lVar3 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar5 = param_1[2];
      for (lVar1 = lVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar3) goto joined_r0x000142be513a;
      }
    }
    lVar5 = 0;
joined_r0x000142be513a:
    do {
      if (lVar5 == 0) break;
      if (lVar5 == lVar2) {
        if (param_1[2] == 0) goto LAB_142be51a1;
        plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar7 = (longlong *)param_1[2];
        plVar6 = plVar7;
        goto joined_r0x000142be5191;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while( true );
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
joined_r0x000142be5191:
  if (plVar6 == (longlong *)0x0) {
LAB_142be51a1:
    plVar7 = (longlong *)0x0;
LAB_142be51a3:
    plVar6 = (longlong *)plVar7[0x1f];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      plVar6 = (longlong *)plVar7[0x1f];
    }
    (**(code **)(*plVar6 + 0x298))
              (plVar6,param_2,
               ((longlong)(*(int *)(*param_1 + 4 + (longlong)param_3 * 0xc) * 2) >> 1) + param_1[3])
    ;
    return param_2;
  }
  if (plVar6 == plVar4) goto LAB_142be51a3;
  plVar6 = (longlong *)plVar6[6];
  goto joined_r0x000142be5191;
}



// FUNCTION 142be5200 FUN_142be5200 body=129 status=ok
// SIG undefined FUN_142be5200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142be5200(undefined8 param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar2 = (longlong *)param_3[0x2e];
  if (plVar2 == (longlong *)0x0) {
    local_10 = DAT_1468b5d98;
    puVar3 = &local_18;
    local_18 = _DAT_1468b5d90;
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 0x298))
                       (plVar2,&local_18,
                        ((longlong)(*(int *)(*param_3 + 4 + (longlong)param_4 * 0xc) * 2) >> 1) +
                        param_3[3]);
  }
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142be5290 FUN_142be5290 body=129 status=ok
// SIG undefined FUN_142be5290(void)

undefined8 * FUN_142be5290(undefined8 param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar2 = (longlong *)param_3[0x2e];
  if (plVar2 == (longlong *)0x0) {
    local_10 = DAT_1468b5da8;
    puVar3 = &local_18;
    local_18 = DAT_1468b5da0;
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 0x2a0))
                       (plVar2,&local_18,
                        ((longlong)(*(int *)(*param_3 + 4 + (longlong)param_4 * 0xc) * 2) >> 1) +
                        param_3[3]);
  }
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142be5320 FUN_142be5320 body=48 status=ok
// SIG undefined FUN_142be5320(void)

undefined4 FUN_142be5320(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    return 0xbf800000;
  }
  if ((-1 < param_2) && (param_2 < (int)plVar1[1])) {
    return *(undefined4 *)(*plVar1 + (longlong)param_2 * 0xc);
  }
  return 0;
}



// FUNCTION 142be5450 FUN_142be5450 body=43 status=ok
// SIG undefined FUN_142be5450(void)

byte FUN_142be5450(byte *param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    bVar1 = ~bVar1;
  }
  else if ('\x01' < param_2) {
    *param_1 = (byte)(((char)bVar1 + 1) % (int)param_2);
    return bVar1;
  }
  return bVar1;
}



// FUNCTION 142be5480 FUN_142be5480 body=16 status=ok
// SIG undefined FUN_142be5480(void)

void FUN_142be5480(longlong param_1)

{
  FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x88) + 0x34);
  return;
}



// FUNCTION 142be54c0 FUN_142be54c0 body=404 status=ok
// SIG undefined FUN_142be54c0(void)

longlong * FUN_142be54c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar3 = (longlong *)UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
    plVar2 = plVar7;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      for (plVar5 = *(longlong **)(param_1 + 0x58);
          (plVar2 = plVar7, plVar5 != (longlong *)0x0 &&
          (plVar2 = *(longlong **)(param_1 + 0x58), plVar5 != plVar4));
          plVar5 = (longlong *)plVar5[6]) {
      }
    }
    for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
      if (plVar2 == plVar3) {
        plVar2 = *(longlong **)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x34) == 3) {
          FUN_142be3cd0(plVar2,param_2);
          return param_2;
        }
        if ((int)plVar2[1] < 1) goto LAB_142be560f;
        plVar5 = (longlong *)UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
        plVar3 = plVar7;
        if (plVar2[2] != 0) {
          plVar6 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          for (plVar4 = (longlong *)plVar2[2];
              (plVar3 = plVar7, plVar4 != (longlong *)0x0 &&
              (plVar3 = (longlong *)plVar2[2], plVar4 != plVar6)); plVar4 = (longlong *)plVar4[6]) {
          }
        }
        goto joined_r0x000142be5594;
      }
    }
  }
  return param_2;
joined_r0x000142be5594:
  if (plVar3 == (longlong *)0x0) goto LAB_142be560f;
  if (plVar3 == plVar5) {
    plVar3 = plVar7;
    if (plVar2[2] != 0) {
      plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      for (plVar5 = (longlong *)plVar2[2];
          (plVar3 = plVar7, plVar5 != (longlong *)0x0 &&
          (plVar3 = (longlong *)plVar2[2], plVar5 != plVar4)); plVar5 = (longlong *)plVar5[6]) {
      }
    }
    plVar7 = (longlong *)plVar3[0x1f];
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar7 = (longlong *)plVar3[0x1f];
    }
    plVar7 = (longlong *)
             (**(code **)(*plVar7 + 0x2a8))
                       (plVar7,((longlong)(*(int *)(*plVar2 + 4) * 2) >> 1) + plVar2[3]);
LAB_142be560f:
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar7;
    return param_2;
  }
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x000142be5594;
}



// FUNCTION 142be5660 FUN_142be5660 body=363 status=ok
// SIG undefined FUN_142be5660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142be5660(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x34) != 3) {
      if (0 < (int)plVar2[1]) {
        lVar4 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
        if (plVar2[2] != 0) {
          lVar5 = UEnvQueryItemType::GetPrivateStaticClass();
          lVar7 = plVar2[2];
          for (lVar3 = lVar7; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar5) goto joined_r0x000142be56d3;
          }
        }
        lVar7 = 0;
joined_r0x000142be56d3:
        do {
          if (lVar7 == 0) break;
          if (lVar7 == lVar4) {
            if (plVar2[2] == 0) goto LAB_142be576e;
            plVar6 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
            plVar9 = (longlong *)plVar2[2];
            plVar8 = plVar9;
            goto joined_r0x000142be575a;
          }
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while( true );
      }
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
      goto LAB_142be56fb;
    }
    FUN_142be3e40(plVar2);
  }
  return param_2;
joined_r0x000142be575a:
  if (plVar8 == (longlong *)0x0) goto LAB_142be576e;
  if (plVar8 == plVar6) goto LAB_142be5770;
  plVar8 = (longlong *)plVar8[6];
  goto joined_r0x000142be575a;
LAB_142be576e:
  plVar9 = (longlong *)0x0;
LAB_142be5770:
  plVar8 = (longlong *)plVar9[0x1f];
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    plVar8 = (longlong *)plVar9[0x1f];
  }
  (**(code **)(*plVar8 + 0x298))
            (plVar8,&local_18,((longlong)(*(int *)(*plVar2 + 4) * 2) >> 1) + plVar2[3]);
LAB_142be56fb:
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0xc) = local_18;
  *(undefined4 *)(lVar4 + (longlong)iVar1 * 0xc + 8) = local_10;
  return param_2;
}



// FUNCTION 142be57d0 FUN_142be57d0 body=634 status=ok
// SIG undefined FUN_142be57d0(void)

undefined8 FUN_142be57d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res10;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  int local_30;
  
  if (param_2 == 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"unknown",L"EnvQueryGenerator",L"Unknown");
    return param_1;
  }
  lVar5 = FUN_14171bfe0();
  lVar6 = *(longlong *)(param_2 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar6 = param_2;
  }
  local_res10 = *(undefined8 *)(lVar6 + 0x18);
  if ((*(uint *)(lVar6 + 0xb4) >> 0x12 & 1) == 0) {
    FName::ToString(&local_res10,&local_58);
    iVar4 = FUN_141592950(&local_58,&DAT_1457ef934,1,0,0xffffffff);
    if (iVar4 != -1) {
      uVar2 = iVar4 + 0x80000000;
      pwVar11 = (wchar_t *)0x0;
      uVar10 = local_50 - 1;
      if (local_50 == 0) {
        uVar10 = 0;
      }
      if (iVar4 + 1U < uVar10) {
        uVar10 = iVar4 + 1U;
      }
      uVar7 = local_50 - 1;
      if (local_50 == 0) {
        uVar7 = 0;
      }
      uVar8 = uVar10;
      if ((uVar10 <= uVar2) && (uVar8 = uVar7, uVar2 < uVar7)) {
        uVar8 = uVar2;
      }
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      pwVar12 = L"";
      if (local_50 != 0) {
        pwVar12 = local_58;
      }
      iVar9 = uVar8 - uVar10;
      iVar4 = iVar9 + 1;
      if (iVar9 == 0) {
        iVar4 = 0;
      }
      local_40 = iVar4;
      if ((0 < iVar4) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar4 = local_40,
         pwVar11 = local_48, 0 < local_40)) {
        wcsncpy(local_48,pwVar12 + (int)uVar10,(longlong)iVar9);
        pwVar11[iVar9] = L'\0';
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_4c = local_3c;
      local_58 = pwVar11;
      local_50 = iVar4;
    }
    FText::FromString(param_1,&local_58);
    local_38 = local_58;
    goto LAB_142be5a1f;
  }
  FName::ToString(&local_res10,&local_38);
  iVar4 = 0;
  if (local_30 == 0) {
    pwVar11 = L"";
    iVar9 = 0;
  }
  else {
    pwVar11 = local_38;
    iVar9 = local_30 + -1;
  }
  iVar1 = iVar9 + -2;
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  if (iVar1 < 0) {
LAB_142be58b8:
    local_40 = 0;
  }
  else {
    iVar4 = iVar9;
    if (iVar1 < iVar9) {
      iVar4 = iVar1;
    }
    local_40 = iVar4 + 1;
    if (iVar4 == 0) goto LAB_142be58b8;
  }
  if ((0 < local_40) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), pwVar12 = local_48, 0 < local_40))
  {
    wcsncpy(local_48,pwVar11,(longlong)iVar4);
    pwVar12[iVar4] = L'\0';
  }
  FText::FromString(param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_142be5a1f:
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142be5a50 FUN_142be5a50 body=266 status=ok
// SIG undefined FUN_142be5a50(void)

undefined8 FUN_142be5a50(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if ((*(uint *)(param_1 + 0x98) & 0x6000) == 0) {
    return 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x59);
  uVar6 = UBTAuxiliaryNode::GetMyNode();
  cVar3 = FUN_142bc1d80(param_2,uVar6,uVar1);
  if (cVar3 == '\0') {
    if ((*(char *)(param_1 + 100) - 1U & 0xfd) == 0) {
      uVar5 = *(uint *)(param_1 + 0x98) >> 0xd;
      bVar4 = 0;
      if ((uVar5 & 3) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x68);
        if ((lVar2 == 0) || ((uVar5 & 2) == 0)) {
          bVar4 = 0;
          if ((uVar5 & 1) != 0) {
            bVar4 = FUN_142c37910(param_1,*(undefined8 *)(param_1 + 0x70));
          }
        }
        else {
          bVar4 = FUN_142c37960(param_1,lVar2,*(undefined8 *)(lVar2 + 0x488));
        }
      }
      if (bVar4 != ((byte)(*(uint *)(param_1 + 0x60) >> 7) & 1)) {
        return 1;
      }
    }
  }
  else if ((byte)(*(char *)(param_1 + 100) - 2U) < 2) {
    uVar5 = *(uint *)(param_1 + 0x98) >> 0xd;
    bVar4 = 0;
    if ((uVar5 & 3) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
      if ((lVar2 == 0) || ((uVar5 & 2) == 0)) {
        bVar4 = 0;
        if ((uVar5 & 1) != 0) {
          bVar4 = FUN_142c37910(param_1,*(undefined8 *)(param_1 + 0x70));
        }
      }
      else {
        bVar4 = FUN_142c37960(param_1,lVar2,*(undefined8 *)(lVar2 + 0x488));
      }
    }
    if (bVar4 == ((byte)(*(uint *)(param_1 + 0x60) >> 7) & 1)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142be5b60 FUN_142be5b60 body=353 status=ok
// SIG undefined FUN_142be5b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142be5b60(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c690) {
    _Init_thread_header(&DAT_146b2c690);
    if (DAT_146b2c690 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146691090,0);
      FGenericPlatformString::Memcpy(DAT_146691090,L"finish with main task",0x2c);
      _DAT_1466910a8 = 0x11;
      DAT_1466910a0 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466910a0,0);
      FGenericPlatformString::Memcpy(DAT_1466910a0,L"wait for subtree",0x22);
      atexit(FUN_143ebf510);
      _Init_thread_footer(&DAT_146b2c690);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x90);
  puVar4 = &DAT_143f3eda8;
  if (bVar1 < 2) {
    if (*(int *)(&DAT_146691098 + (ulonglong)bVar1 * 0x10) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)(&DAT_146691090)[(ulonglong)bVar1 * 2];
    }
  }
  else {
    puVar3 = (undefined2 *)&DAT_1457efc54;
  }
  puVar2 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar4,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be5cd0 GetStaticDescription body=120 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_Blackboard::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0xb0) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0xa8);
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be5d50 GetStaticDescription body=375 status=ok
// SIG undefined GetStaticDescription(void)

longlong * UBTDecorator_BlueprintBase::GetStaticDescription(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *local_18;
  int local_10;
  
  UBTDecorator::GetStaticDescription();
  plVar3 = *(longlong **)(param_1 + 0x10);
  lVar7 = plVar3[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar7 = plVar3[0x1f];
  }
  if (((*(byte *)(param_1 + 0x98) & 1) != 0) && (lVar7 != 0)) {
    uVar6 = GetPrivateStaticClass();
    BlueprintNodeHelpers::CollectPropertyDescription(&local_18,param_1,uVar6,lVar7 + 0x88);
    if ((local_10 != 0) && (local_10 != 1)) {
      iVar2 = (int)param_2[1];
      iVar4 = (4 - (uint)(iVar2 != 0)) + iVar2;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      _Src = local_18;
      iVar4 = 0;
      puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar1 = 0xa003a;
      *(undefined2 *)(puVar1 + 1) = 10;
      *(undefined2 *)((longlong)puVar1 + 6) = 0;
      if (local_10 != 0) {
        iVar4 = local_10 + -1;
      }
      if (iVar4 != 0) {
        iVar2 = (int)param_2[1];
        iVar5 = (uint)(iVar2 == 0) + iVar2 + iVar4;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return param_2;
}



// FUNCTION 142be5ed0 GetStaticDescription body=120 status=ok
// SIG undefined GetStaticDescription(void)

undefined8
UBTDecorator_CheckGameplayTagsOnActor::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0xc0) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0xb8);
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be5f50 GetStaticDescription body=252 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_CompareBBEntries::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  cVar1 = *(char *)(param_1 + 0x68);
  puVar2 = (undefined8 *)FName::ToString(param_1 + 0xa8,local_28);
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::ToString(param_1 + 0x80,local_38);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_48);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar2;
  }
  pwVar3 = L"NOT EQUAL";
  if (cVar1 == '\0') {
    pwVar3 = L"EQUAL";
  }
  FString::PrintfImpl(param_2,L"%s:\n%s and %s\ncontain %s values",puVar4,puVar5,puVar6,pwVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6050 GetStaticDescription body=296 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_ConeCheck::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0xa8,local_28);
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x80,local_38);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0xd0,local_48);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_58);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: is %s in %.2f degree %s-%s cone",puVar2,puVar3,
                      (double)(*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x68)),puVar4,
                      puVar5);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6180 GetStaticDescription body=174 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_Cooldown::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_142bb8c80(local_18,1);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: lock for %.1fs after execution and return %s",puVar3,
                      (double)*(float *)(param_1 + 0x68),puVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6230 GetStaticDescription body=300 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_DoesPathExist::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  uVar1 = UEnum::GetPrivateStaticClass();
  uVar1 = FUN_141799410(uVar1,0xffffffffffffffff,L"EPathExistanceQueryType");
  puVar2 = (undefined8 *)UEnum::GetNameStringByValue(uVar1,local_28,*(undefined1 *)(param_1 + 0xbc))
  ;
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::ToString(param_1 + 0xa0,local_38);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)FName::ToString(param_1 + 0x78,local_48);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_58);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_2,L"%s: Find path from %s to %s (mode:%s)",puVar3,puVar4,puVar5,puVar6);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6360 GetStaticDescription body=409 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_IsAtLocation::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 **ppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_30 = 8;
  lVar3 = 0;
  local_38 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar9 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,8,"invalid",8,0x3f);
  lVar6 = lVar3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(param_1 + 0x80);
        (lVar6 = lVar3, lVar2 != 0 && (lVar6 = *(longlong *)(param_1 + 0x80), lVar2 != lVar1));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar6 != lVar2) {
    lVar6 = lVar3;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
      for (lVar2 = *(longlong *)(param_1 + 0x80);
          (lVar6 = lVar3, lVar2 != 0 && (lVar6 = *(longlong *)(param_1 + 0x80), lVar2 != lVar1));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar6 != lVar3) {
      iVar8 = (int)local_30;
      goto LAB_142be6483;
    }
  }
  ppuVar4 = (undefined2 **)FName::ToString(param_1 + 0x78,local_28);
  if (&local_38 == ppuVar4) {
    iVar8 = (int)local_30;
  }
  else {
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    puVar9 = *ppuVar4;
    *ppuVar4 = (undefined2 *)0x0;
    iVar8 = *(int *)(ppuVar4 + 1);
    ppuVar4[1] = (undefined2 *)0x0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
LAB_142be6483:
  puVar7 = &DAT_143f3eda8;
  puVar10 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar10 = puVar9;
  }
  puVar5 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar5 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar7,puVar10);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return param_2;
}



// FUNCTION 142be6500 GetStaticDescription body=512 status=ok
// SIG undefined GetStaticDescription(void)

longlong * UBTDecorator_IsBBEntryOfClass::GetStaticDescription(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 local_res10;
  longlong local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  lVar2 = UBTNode::GetBlackboardAsset();
  lVar5 = 0;
  lVar3 = lVar5;
  if (lVar2 != 0) {
    lVar3 = UBlackboardData::GetKey(lVar2,*(undefined1 *)(param_1 + 0x88));
  }
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,8,"invalid",8,0x3f);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
    lVar6 = lVar5;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = UBlackboardKeyType::GetPrivateStaticClass();
      for (lVar1 = *(longlong *)(param_1 + 0x80);
          (lVar6 = lVar5, lVar1 != 0 && (lVar6 = *(longlong *)(param_1 + 0x80), lVar1 != lVar4));
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
      }
    }
    if (lVar2 == lVar6) {
      FName::ToString(lVar3,&local_28);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar5 = UObject::GetPrivateStaticClass();
        lVar3 = *(longlong *)(param_1 + 0x90);
        for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar5) {
            if (lVar3 != 0) {
              local_res10 = *(undefined8 *)(lVar3 + 0x18);
              FName::ToString(&local_res10,&local_38);
              goto LAB_142be663f;
            }
            break;
          }
        }
      }
      local_38 = (undefined2 *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
LAB_142be663f:
      puVar8 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar8 = local_38;
      }
      puVar7 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar7 = local_28;
      }
      FString::PrintfImpl(&local_48,L"Check if %s is of class %s",puVar7,puVar8);
      if (param_2 == &local_48) {
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = local_48;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_40._4_4_;
        local_40 = 0;
        local_48 = 0;
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 142be6700 GetStaticDescription body=296 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_KeepInCone::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0xa8,local_28);
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x80,local_38);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0xa8,local_48);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_58);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s in %.2f degree cone of initial direction [%s-%s]",puVar2,
                      puVar3,(double)(*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x68)),
                      puVar4,puVar5);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6830 GetStaticDescription body=294 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_Loop::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"%s: %d loops",puVar3,*(undefined4 *)(param_1 + 0x68));
    local_28[0] = local_18[0];
  }
  else if (*(float *)(param_1 + 0x70) < 0.0) {
    puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(0,local_28);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"%s: infinite",puVar3);
  }
  else {
    puVar1 = (undefined8 *)FString::SanitizeFloat(local_18,(double)*(float *)(param_1 + 0x70),1);
    puVar3 = &DAT_143f3eda8;
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_28);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"%s: loop for %s seconds",puVar3,puVar2);
    bVar4 = local_28[0] != 0;
    local_28[0] = local_18[0];
    if (bVar4) {
      FMemory::Free();
      local_28[0] = local_18[0];
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6960 GetStaticDescription body=105 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_SetTagCooldown::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  int local_10;
  
  FName::ToString(param_1 + 0x68,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"%s: set to %.1fs after execution",puVar1,
                      (double)*(float *)(param_1 + 0x70));
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be69d0 GetStaticDescription body=233 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_TagCooldown::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_142bb8c80(local_18,1);
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  FName::ToString(param_1 + 0x68,&local_38);
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s %s: lock for %.1fs after execution and return %s",puVar2,puVar4,
                      (double)*(float *)(param_1 + 0x70),puVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6ac0 GetStaticDescription body=173 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator_TimeLimit::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_142bb8c80(local_18,1);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UBTDecorator::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s after %.1fs",puVar3,puVar2,(double)*(float *)(param_1 + 0x68)
                     );
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6b70 GetStaticDescription body=365 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTService_DefaultFocus::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 **ppuVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_20 = 8;
  lVar3 = 0;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar7 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,8,"invalid",8,0x3f);
  lVar5 = lVar3;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(param_1 + 0x88);
        (lVar5 = lVar3, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 0x88), lVar2 != lVar1));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar5 != lVar2) {
    lVar5 = lVar3;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
      for (lVar2 = *(longlong *)(param_1 + 0x88);
          (lVar5 = lVar3, lVar2 != 0 && (lVar5 = *(longlong *)(param_1 + 0x88), lVar2 != lVar1));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar5 != lVar3) {
      iVar6 = (int)local_20;
      goto LAB_142be6c96;
    }
  }
  ppuVar4 = (undefined2 **)FName::ToString(param_1 + 0x80,local_18);
  if (&local_28 == ppuVar4) {
    iVar6 = (int)local_20;
  }
  else {
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    puVar7 = *ppuVar4;
    *ppuVar4 = (undefined2 *)0x0;
    iVar6 = *(int *)(ppuVar4 + 1);
    ppuVar4[1] = (undefined2 *)0x0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
LAB_142be6c96:
  puVar8 = &DAT_143f3eda8;
  if (iVar6 != 0) {
    puVar8 = puVar7;
  }
  FString::PrintfImpl(param_2,L"Set default focus to %s",puVar8);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  return param_2;
}



// FUNCTION 142be6ce0 GetStaticDescription body=614 status=ok
// SIG undefined GetStaticDescription(void)

/* WARNING: Removing unreachable block (ram,0x000142be6e88) */
/* WARNING: Removing unreachable block (ram,0x000142be6e95) */

longlong * UBTService_RunEQS::GetStaticDescription(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulonglong local_res8;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((*(byte *)(param_1 + 0xdc) & 1) == 0) {
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0x80,local_68);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar8;
    }
    if (*(longlong *)(param_1 + 0x98) == 0) {
      local_a8 = (undefined2 *)0x0;
      local_a0 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,&DAT_143f3edc8,10);
    }
    else {
      local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 0x18);
      FName::ToString(&local_res8,&local_a8);
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_a0 != 0) {
      puVar11 = local_a8;
    }
    puVar8 = (undefined8 *)UBTService::GetStaticDescription(param_1,local_78);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(local_98,L"%s: %s\nResult Blackboard key: %s",puVar10,puVar11,puVar12);
    plVar9 = local_98;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0x80,local_38);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar8;
    }
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0xc0,local_48);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar8;
    }
    puVar8 = (undefined8 *)UBTService::GetStaticDescription(param_1,local_58);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(local_88,
                        L"%s: EQS query indicated by %s blackboard key\nResult Blackboard key: %s",
                        puVar10,puVar11,puVar12);
    plVar9 = local_88;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  *param_2 = *plVar9;
  *plVar9 = 0;
  *(int *)(param_2 + 1) = (int)plVar9[1];
  plVar9[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar9 + 0xc);
  if ((bVar2) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_a8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_88[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar6) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar1) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be6f50 GetStaticDescription body=375 status=ok
// SIG undefined GetStaticDescription(void)

longlong * UBTDecorator_BlueprintBase::GetStaticDescription(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *local_18;
  int local_10;
  
  UBTNode::GetStaticDescription();
  plVar3 = *(longlong **)(param_1 + 0x10);
  lVar7 = plVar3[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar7 = plVar3[0x1f];
  }
  if (((*(byte *)(param_1 + 0x98) & 1) != 0) && (lVar7 != 0)) {
    uVar6 = UBTTask_BlueprintBase::GetPrivateStaticClass();
    BlueprintNodeHelpers::CollectPropertyDescription(&local_18,param_1,uVar6,lVar7 + 0x88);
    if ((local_10 != 0) && (local_10 != 1)) {
      iVar2 = (int)param_2[1];
      iVar4 = (4 - (uint)(iVar2 != 0)) + iVar2;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      _Src = local_18;
      iVar4 = 0;
      puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar1 = 0xa003a;
      *(undefined2 *)(puVar1 + 1) = 10;
      *(undefined2 *)((longlong)puVar1 + 6) = 0;
      if (local_10 != 0) {
        iVar4 = local_10 + -1;
      }
      if (iVar4 != 0) {
        iVar2 = (int)param_2[1];
        iVar5 = (uint)(iVar2 == 0) + iVar2 + iVar4;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return param_2;
}



// FUNCTION 142be70d0 GetStaticDescription body=412 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_MoveTo::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 **ppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_30 = 8;
  lVar3 = 0;
  local_38 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar9 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,8,"invalid",8,0x3f);
  lVar6 = lVar3;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(param_1 + 0x88);
        (lVar6 = lVar3, lVar2 != 0 && (lVar6 = *(longlong *)(param_1 + 0x88), lVar2 != lVar1));
        lVar2 = *(longlong *)(lVar2 + 0x30)) {
    }
  }
  lVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  if (lVar6 != lVar2) {
    lVar6 = lVar3;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar1 = UBlackboardKeyType::GetPrivateStaticClass();
      for (lVar2 = *(longlong *)(param_1 + 0x88);
          (lVar6 = lVar3, lVar2 != 0 && (lVar6 = *(longlong *)(param_1 + 0x88), lVar2 != lVar1));
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
      }
    }
    lVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar6 != lVar3) {
      iVar8 = (int)local_30;
      goto LAB_142be71f6;
    }
  }
  ppuVar4 = (undefined2 **)FName::ToString(param_1 + 0x80,local_28);
  if (&local_38 == ppuVar4) {
    iVar8 = (int)local_30;
  }
  else {
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    puVar9 = *ppuVar4;
    *ppuVar4 = (undefined2 *)0x0;
    iVar8 = *(int *)(ppuVar4 + 1);
    ppuVar4[1] = (undefined2 *)0x0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
LAB_142be71f6:
  puVar7 = &DAT_143f3eda8;
  puVar10 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar10 = puVar9;
  }
  puVar5 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar5 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar7,puVar10);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return param_2;
}



// FUNCTION 142be7270 GetStaticDescription body=281 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_PlayAnimation::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  puVar5 = *(undefined2 **)(param_1 + 0x70);
  if (puVar5 == (undefined2 *)0x0) {
    local_20 = 5;
    local_28 = puVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(puVar5 + 0xc);
    FName::ToString(&local_res8,&local_28);
  }
  puVar5 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar4 = local_28;
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar1;
  }
  pwVar3 = L"blocking";
  if ((*(uint *)(param_1 + 0x78) & 2) != 0) {
    pwVar3 = L", non-blocking";
  }
  pwVar2 = L"";
  if ((*(uint *)(param_1 + 0x78) & 1) != 0) {
    pwVar2 = L", looping";
  }
  FString::PrintfImpl(param_2,L"%s: \'%s\'",puVar5,puVar4,pwVar2,pwVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7390 GetStaticDescription body=198 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_PlaySound::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  ulonglong local_res8;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  bVar4 = false;
  puVar2 = &DAT_143f3eda8;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    puVar3 = (undefined2 *)&DAT_1457efc74;
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FName::ToString(&local_res8,&local_38);
    bVar4 = true;
    puVar3 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar3 = local_38;
    }
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: \'%s\'",puVar2,puVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if ((bVar4) && (local_38 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7460 GetStaticDescription body=150 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_PushPawnAction::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined2 **)(param_1 + 0x70);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar1 + 0xc);
    FName::ToString(local_res8,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"Push Action: %s",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7500 GetStaticDescription body=158 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_RotateToFaceBBEntry::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  FName::ToString(param_1 + 0x80,&local_28);
  puVar3 = &DAT_143f3eda8;
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be75a0 GetStaticDescription body=228 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_RunBehavior::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  puVar3 = *(undefined2 **)(param_1 + 0x70);
  if (puVar3 == (undefined2 *)0x0) {
    local_20 = 5;
    local_28 = puVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(puVar3 + 0xc);
    FName::ToString(&local_res8,&local_28);
  }
  puVar3 = &DAT_143f3eda8;
  puVar2 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar2 = local_28;
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7690 GetStaticDescription body=158 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_RunBehaviorDynamic::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  FName::ToString(param_1 + 0x70,&local_28);
  puVar3 = &DAT_143f3eda8;
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7730 GetStaticDescription body=614 status=ok
// SIG undefined GetStaticDescription(void)

/* WARNING: Removing unreachable block (ram,0x000142be78d8) */
/* WARNING: Removing unreachable block (ram,0x000142be78e5) */

longlong * UBTTask_RunEQSQuery::GetStaticDescription(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulonglong local_res8;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((*(byte *)(param_1 + 0x13c) & 1) == 0) {
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0x80,local_68);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar8;
    }
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      local_a8 = (undefined2 *)0x0;
      local_a0 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      FGenericPlatformString::Memcpy(local_a8,&DAT_143f3edc8,10);
    }
    else {
      local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0xf8) + 0x18);
      FName::ToString(&local_res8,&local_a8);
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_a0 != 0) {
      puVar11 = local_a8;
    }
    puVar8 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_78);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(local_98,L"%s: %s\nResult Blackboard key: %s",puVar10,puVar11,puVar12);
    plVar9 = local_98;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0x80,local_38);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar8;
    }
    puVar8 = (undefined8 *)FName::ToString(param_1 + 0x120,local_48);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar8;
    }
    puVar8 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_58);
    if (*(int *)(puVar8 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(local_88,
                        L"%s: EQS query indicated by %s blackboard key\nResult Blackboard key: %s",
                        puVar10,puVar11,puVar12);
    plVar9 = local_88;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = true;
  }
  *param_2 = *plVar9;
  *plVar9 = 0;
  *(int *)(param_2 + 1) = (int)plVar9[1];
  plVar9[1] = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar9 + 0xc);
  if ((bVar2) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_a8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_88[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar6) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar1) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be79a0 GetStaticDescription body=172 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_SetTagCooldown::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  FName::ToString(param_1 + 0x70,&local_28);
  puVar3 = &DAT_143f3eda8;
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s %s: %.1fs",puVar3,puVar2,(double)*(float *)(param_1 + 0x7c));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7a50 GetStaticDescription body=189 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_Wait::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  float fVar3;
  longlong local_18 [2];
  
  fVar3 = ABS(*(float *)(param_1 + 0x74));
  if (1e-08 < fVar3) {
    puVar1 = (undefined8 *)UBTNode::GetStaticDescription(fVar3,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"%s: %.1f+-%.1fs",puVar2,(double)*(float *)(param_1 + 0x70),
                        (double)*(float *)(param_1 + 0x74));
  }
  else {
    puVar1 = (undefined8 *)UBTNode::GetStaticDescription(fVar3,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"%s: %.1fs",puVar2,(double)*(float *)(param_1 + 0x70));
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7b10 GetStaticDescription body=171 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTTask_WaitBlackboardTime::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  local_res8 = *(undefined8 *)(param_1 + 0x88);
  puVar1 = (undefined8 *)FName::ToString(&local_res8,local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142be7bc0 GetStaticServiceDescription body=792 status=ok
// SIG undefined GetStaticServiceDescription(void)

void ** UBTService_BlueprintBase::GetStaticServiceDescription(longlong param_1,void **param_2)

{
  undefined2 *puVar1;
  void *_Dst;
  longlong *plVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  void **ppvVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  void *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  bVar12 = false;
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  iVar11 = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
  lVar15 = plVar2[0x1f];
  if (lVar15 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar15 = plVar2[0x1f];
    if (lVar15 == 0) {
      return param_2;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x90);
  if ((uVar10 & 2) == 0) {
    ppvVar7 = (void **)UBTService::GetStaticServiceDescription(param_1,local_28);
    if (param_2 != ppvVar7) {
      if (*param_2 != (void *)0x0) {
        FMemory::Free();
      }
      *param_2 = *ppvVar7;
      *ppvVar7 = (void *)0x0;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar7 + 1);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar7 + 0xc);
      ppvVar7[1] = (void *)0x0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    iVar3 = *(int *)(param_2 + 1);
    iVar4 = iVar3 + -1;
    if (iVar3 < 1) {
      iVar4 = iVar11;
    }
    iVar3 = (iVar3 < 1) + 1 + iVar3;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2) = 10;
    *(undefined2 *)((longlong)*param_2 + (longlong)iVar4 * 2 + 2) = 0;
  }
  else {
    if ((uVar10 & 0xc) == 0) {
      pwVar13 = L"No tick";
    }
    else {
      puVar5 = (undefined8 *)UBTService::GetStaticServiceDescription(param_1,local_28);
      if (*(int *)(puVar5 + 1) == 0) {
        uVar10 = *(uint *)(param_1 + 0x90);
        pwVar13 = L"";
        bVar12 = true;
      }
      else {
        pwVar13 = (wchar_t *)*puVar5;
        bVar12 = true;
        uVar10 = *(uint *)(param_1 + 0x90);
      }
    }
    pwVar9 = L"No Search Start";
    if ((uVar10 & 0x300) != 0) {
      pwVar9 = L"Search Start";
    }
    pwVar6 = L"No Deactivation";
    if ((uVar10 & 0xc0) != 0) {
      pwVar6 = L"Deactivation";
    }
    pwVar14 = L"No Activation";
    if ((uVar10 & 0x30) != 0) {
      pwVar14 = L"Activation";
    }
    FString::PrintfImpl(&local_38,L"%s, %s, %s, %s\n",pwVar13,pwVar14,pwVar6,pwVar9);
    if (param_2 == &local_38) {
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != (void *)0x0) {
        FMemory::Free();
      }
      *param_2 = local_38;
      *(int *)(param_2 + 1) = (int)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
      local_38 = (void *)0x0;
    }
    if ((bVar12) && (local_28[0] != 0)) {
      FMemory::Free();
    }
  }
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar8 = GetPrivateStaticClass();
    BlueprintNodeHelpers::CollectPropertyDescription(&local_38,param_1,uVar8,lVar15 + 0x80);
    if (((int)local_30 != 0) && ((int)local_30 != 1)) {
      iVar3 = *(int *)(param_2 + 1);
      iVar4 = (2 - (uint)(iVar3 != 0)) + iVar3;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      _Src = local_38;
      puVar1 = (undefined2 *)((longlong)*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      *puVar1 = 10;
      puVar1[1] = 0;
      if ((int)local_30 != 0) {
        iVar11 = (int)local_30 + -1;
      }
      if (iVar11 != 0) {
        iVar3 = *(int *)(param_2 + 1);
        iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar11;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        _Dst = (void *)((longlong)*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar11 * 2);
        *(undefined2 *)((longlong)iVar11 * 2 + (longlong)_Dst) = 0;
      }
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return param_2;
}



// FUNCTION 142be7f00 GetValue body=28 status=ok
// SIG undefined GetValue(void)

undefined1 FAIDataProviderBoolValue::GetValue(longlong param_1)

{
  undefined1 *puVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (puVar1 = (undefined1 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x44) +
               *(longlong *)(param_1 + 0x10)), puVar1 != (undefined1 *)0x0)) {
    return *puVar1;
  }
  return *(undefined1 *)(param_1 + 0x28);
}



// FUNCTION 142be7f20 GetValue body=30 status=ok
// SIG undefined GetValue(void)

undefined4 FAIDataProviderFloatValue::GetValue(longlong param_1)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (puVar1 = (undefined4 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x44) +
               *(longlong *)(param_1 + 0x10)), puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 142be7f40 FUN_142be7f40 body=26 status=ok
// SIG undefined FUN_142be7f40(void)

undefined4 FUN_142be7f40(longlong param_1)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (puVar1 = (undefined4 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x44) +
               *(longlong *)(param_1 + 0x10)), puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 142be7f60 FUN_142be7f60 body=187 status=ok
// SIG undefined FUN_142be7f60(void)

undefined8 * FUN_142be7f60(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_14277a4d0(*(longlong *)(param_3 + 0x10) + 0x28,*(undefined4 *)(param_1 + 0x450));
  if (cVar1 != '\0') {
    cVar1 = FUN_142730ad0(param_1,param_3);
    if (cVar1 != '\0') {
      if ((*(byte *)(param_1 + 0x4e8) & 1) == 0) {
LAB_142be7fca:
        uVar3 = 0x400;
        goto LAB_142be7fd3;
      }
      if (*(longlong *)(param_1 + 0x4d8) != 0) {
        cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
        if (cVar1 != '\0') goto LAB_142be7fca;
      }
    }
  }
  uVar3 = 0;
LAB_142be7fd3:
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar3 | 0x200;
  bVar2 = FUN_142730ad0(param_1,param_3);
  uVar3 = *(uint *)((longlong)param_2 + 4) & 0xffffffef | (uint)bVar2 << 4;
  *(uint *)((longlong)param_2 + 4) = (uVar3 >> 1 ^ uVar3) & 8 ^ uVar3;
  return param_2;
}



// FUNCTION 142be8020 FUN_142be8020 body=95 status=ok
// SIG undefined FUN_142be8020(void)

undefined8 FUN_142be8020(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_142c42420();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142be8070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142be80a0 FUN_142be80a0 body=115 status=ok
// SIG undefined FUN_142be80a0(void)

void FUN_142be80a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x198);
  *(int *)(param_1 + 0x198) = iVar2 + 1;
  if (*(int *)(param_1 + 0x19c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 400),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 400) + (longlong)iVar2 * 0x18);
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined1 *)((longlong)puVar1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
  return;
}



// FUNCTION 142be8120 InitForOwnerAndBlackboard body=187 status=ok
// SIG undefined InitForOwnerAndBlackboard(void)

void FEQSParametrizedQueryExecutionRequest::InitForOwnerAndBlackboard
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0x44) & 2) == 0) {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
    uVar1 = FUN_142c3f210();
    FBlackboardKeySelector::AddObjectFilter(param_1 + 0x18,param_2,0,uVar1);
    if (((0 < *(int *)(param_1 + 0x10)) || ((*(byte *)(param_1 + 0x44) & 1) != 0)) && (param_3 != 0)
       ) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar3 = (longlong)*(int *)(param_1 + 0x10) * 0x38 + lVar2;
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x38) {
        if ((*(char *)(lVar2 + 0x30) == -1) &&
           ((*(int *)(lVar2 + 0x20) != 0 || (*(int *)(lVar2 + 0x24) != 0)))) {
          FUN_142bc9360(lVar2 + 0x10,param_3);
        }
      }
      FUN_142bc9360(param_1 + 0x18,param_3);
    }
  }
  return;
}



// FUNCTION 142be81e0 FUN_142be81e0 body=230 status=ok
// SIG undefined FUN_142be81e0(void)

longlong * FUN_142be81e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_142c2de20();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return (longlong *)param_1[0xa9];
    }
  }
  uVar3 = FUN_142c46ed0();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
  if (plVar4 == (longlong *)0x0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar3 = FUN_142c46ed0();
    plVar4 = (longlong *)FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_14234b270(plVar4,uVar3);
    (**(code **)(*plVar4 + 0x3f8))(plVar4);
  }
  return plVar4;
}



// FUNCTION 142be82d0 FUN_142be82d0 body=85 status=ok
// SIG undefined FUN_142be82d0(void)

void FUN_142be82d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_142340f20();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142c36280();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    *(longlong *)(param_1 + 0x180) = lVar3;
    if (lVar3 != 0) {
      FUN_142bb50a0(lVar3,param_1);
    }
  }
  return;
}



// FUNCTION 142be8330 InitializeFromAsset body=57 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_BlackboardBase::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x68,lVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x88) = 0xff;
  return;
}



// FUNCTION 142be8370 InitializeFromAsset body=59 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_BlueprintBase::InitializeFromAsset(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar1 = GetPrivateStaticClass();
    FUN_142bc9240(param_1,uVar1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 142be83b0 InitializeFromAsset body=50 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_CheckGameplayTagsOnActor::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x68,lVar1);
    return;
  }
  return;
}



// FUNCTION 142be83f0 InitializeFromAsset body=72 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_CompareBBEntries::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
    FUN_142bc9360(param_1 + 0x98,lVar1);
  }
  return;
}



// FUNCTION 142be8440 InitializeFromAsset body=113 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_ConeCheck::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  fVar2 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x68) * 0.017453292);
  *(float *)(param_1 + 0xe8) = fVar2;
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
    FUN_142bc9360(param_1 + 0x98,lVar1);
    FUN_142bc9360(param_1 + 0xc0,lVar1);
  }
  return;
}



// FUNCTION 142be84c0 InitializeFromAsset body=103 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_DoesPathExist::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  if ((*(uint *)(param_1 + 0xb8) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x78) = DAT_146b2c600;
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
  }
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x68,lVar1);
    FUN_142bc9360(param_1 + 0x90,lVar1);
  }
  return;
}



// FUNCTION 142be8530 InitializeFromAsset body=160 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTDecorator_KeepInCone::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  fVar3 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x68) * 0.017453292);
  uVar2 = *(uint *)(param_1 + 0xc0);
  *(float *)(param_1 + 0xc4) = fVar3;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xfffffffe;
    *(undefined8 *)(param_1 + 0x80) = DAT_146b2c600;
    *(uint *)(param_1 + 0xc0) = uVar2;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined8 *)(param_1 + 0xa8) = DAT_146b2c600;
    *(uint *)(param_1 + 0xc0) = uVar2 & 0xfffffffd;
  }
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
    FUN_142bc9360(param_1 + 0x98,lVar1);
  }
  return;
}



// FUNCTION 142be85d0 FUN_142be85d0 body=50 status=ok
// SIG undefined FUN_142be85d0(void)

void FUN_142be85d0(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
    return;
  }
  return;
}



// FUNCTION 142be8610 InitializeFromAsset body=59 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTService_BlueprintBase::InitializeFromAsset(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar1 = GetPrivateStaticClass();
    FUN_142bc9240(param_1,uVar1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 142be8650 InitializeFromAsset body=70 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTService_RunEQS::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
  }
  uVar2 = UBTNode::GetBlackboardAsset(param_1);
  FEQSParametrizedQueryExecutionRequest::InitForOwnerAndBlackboard(param_1 + 0x98,param_1,uVar2);
  return;
}



// FUNCTION 142be86a0 InitializeFromAsset body=59 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTTask_BlueprintBase::InitializeFromAsset(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar1 = GetPrivateStaticClass();
    FUN_142bc9240(param_1,uVar1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 142be86e0 InitializeFromAsset body=57 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTTask_MoveDirectlyToward::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 4;
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
    return;
  }
  return;
}



// FUNCTION 142be8720 InitializeFromAsset body=70 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTTask_RunEQSQuery::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x70,lVar1);
  }
  uVar2 = UBTNode::GetBlackboardAsset(param_1);
  FEQSParametrizedQueryExecutionRequest::InitForOwnerAndBlackboard(param_1 + 0xf8,param_1,uVar2);
  return;
}



// FUNCTION 142be8770 InitializeFromAsset body=50 status=ok
// SIG undefined InitializeFromAsset(void)

void UBTTask_WaitBlackboardTime::InitializeFromAsset(longlong param_1)

{
  longlong lVar1;
  
  UPartyBeaconState::SetTeamAssignmentMethod();
  lVar1 = UBTNode::GetBlackboardAsset(param_1);
  if (lVar1 != 0) {
    FUN_142bc9360(param_1 + 0x78,lVar1);
    return;
  }
  return;
}



// FUNCTION 142be87f0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UEnvQueryContext::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_142be8816;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_142be8816:
  lVar2 = UEnvQueryContext_Item::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 142be8830 FUN_142be8830 body=142 status=ok
// SIG undefined FUN_142be8830(void)

undefined8 FUN_142be8830(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar5 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar1 = *(undefined1 *)(param_1 + 0x59);
      uVar6 = UBTAuxiliaryNode::GetMyNode(param_1);
      cVar4 = FUN_142bc1d80(lVar2,uVar6,uVar1);
      if (cVar4 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142be88c0 FUN_142be88c0 body=117 status=ok
// SIG undefined FUN_142be88c0(void)

undefined8 FUN_142be88c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar4 = UProgressBar::GetPrivateStaticClass();
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
      cVar3 = FUN_142bc1ac0(lVar1,param_1);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142be8940 FUN_142be8940 body=209 status=ok
// SIG undefined FUN_142be8940(void)

ulonglong FUN_142be8940(longlong param_1,undefined8 *param_2,char param_3,float param_4)

{
  float *pfVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float local_28;
  float fStack_24;
  
  pcVar2 = *(char **)(param_1 + 0x120);
  pfVar1 = (float *)(longlong)*(int *)(param_1 + 0x128);
  pcVar3 = pcVar2 + (longlong)pfVar1 * 0x30;
  if (pcVar2 != pcVar3) {
    pfVar1 = (float *)(pcVar2 + 0xc);
    fStack_24 = (float)((ulonglong)*param_2 >> 0x20);
    local_28 = (float)*param_2;
    do {
      if (param_3 == '\0') {
LAB_142be89ad:
        if (SQRT((fStack_24 - pfVar1[-1]) * (fStack_24 - pfVar1[-1]) +
                 (local_28 - pfVar1[-2]) * (local_28 - pfVar1[-2]) +
                 (*(float *)(param_2 + 1) - *pfVar1) * (*(float *)(param_2 + 1) - *pfVar1)) <=
            param_4 + pfVar1[1]) {
          return CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
        }
      }
      else {
        if (param_3 == '\x02') {
          bVar4 = *pcVar2 == '\x01';
        }
        else {
          bVar4 = param_3 == *pcVar2;
        }
        if (bVar4) goto LAB_142be89ad;
      }
      pcVar2 = pcVar2 + 0x30;
      pfVar1 = pfVar1 + 0xc;
    } while (pcVar2 != pcVar3);
  }
  return (ulonglong)pfVar1 & 0xffffffffffffff00;
}



// FUNCTION 142be8a20 FUN_142be8a20 body=419 status=ok
// SIG undefined FUN_142be8a20(void)

ulonglong FUN_142be8a20(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x298))(param_2,local_38,0,0);
      pwVar10 = (wchar_t *)0x0;
      iVar1 = *(int *)(puVar4 + 1);
      uVar11 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar11 = 0;
      }
      if (8 < uVar11) {
        uVar11 = 8;
      }
      uVar6 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      uVar7 = uVar11;
      if ((uVar11 < 0x80000008) && (uVar7 = uVar6, 0x80000007 < uVar6)) {
        uVar7 = 0x80000007;
      }
      if (iVar1 == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar4;
      }
      iVar8 = uVar7 - uVar11;
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      iVar1 = iVar8 + 1;
      if (iVar8 == 0) {
        iVar1 = 0;
      }
      local_40 = iVar1;
      if ((0 < iVar1) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar1 = local_40,
         pwVar10 = local_48, 0 < local_40)) {
        wcsncpy(local_48,puVar5 + (int)uVar11,(longlong)iVar8);
        pwVar10[iVar8] = L'\0';
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x20);
      }
      pwVar9 = L"";
      if (iVar1 != 0) {
        pwVar9 = pwVar10;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar9,puVar5);
      if (pwVar10 != (wchar_t *)0x0) {
        FMemory::Free(pwVar10);
      }
      return (ulonglong)(iVar1 == 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142be8bd0 IsMatchingType body=81 status=ok
// SIG undefined IsMatchingType(void)

bool FAIDataProviderTypedValue::IsMatchingType(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar3 = UProperty::GetPrivateStaticClass();
    lVar4 = *(longlong *)(param_1 + 0x20);
    for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto LAB_142be8c10;
    }
  }
  lVar4 = 0;
LAB_142be8c10:
  return lVar1 == lVar4;
}



// FUNCTION 142be8c30 FUN_142be8c30 body=7 status=ok
// SIG undefined FUN_142be8c30(void)

bool FUN_142be8c30(char *param_1)

{
  return *param_1 < '\x01';
}



// FUNCTION 142be8c50 IsServiceActive body=99 status=ok
// SIG undefined IsServiceActive(void)

void UBTService_BlueprintBase::IsServiceActive(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142be8c9e;
  }
  lVar3 = 0;
LAB_142be8c9e:
  FUN_142bc1ac0(lVar3,param_1);
  return;
}



// FUNCTION 142be8cc0 IsSupportedForNetworking body=80 status=ok
// SIG undefined IsSupportedForNetworking(void)

ulonglong UEnvQueryInstanceBlueprintWrapper::IsSupportedForNetworking(void)

{
  ulonglong uVar1;
  longlong local_18 [3];
  
  local_18[1] = 0x1a;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  uVar1 = FGenericPlatformString::Memcpy(local_18[0],L"not available in shipping",0x34);
  if (local_18[0] != 0) {
    uVar1 = FMemory::Free(local_18[0]);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142be8d10 IsTaskAborting body=12 status=ok
// SIG undefined IsTaskAborting(void)

uint UBTTask_BlueprintBase::IsTaskAborting(longlong param_1)

{
  return *(uint *)(param_1 + 0x98) >> 7 & 0xffffff01;
}



// FUNCTION 142be8d20 IsTaskExecuting body=105 status=ok
// SIG undefined IsTaskExecuting(void)

bool UBTTask_BlueprintBase::IsTaskExecuting(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142be8d6e;
  }
  lVar4 = 0;
LAB_142be8d6e:
  iVar2 = FUN_142bbf020(lVar4,param_1);
  return iVar2 == 0;
}



// FUNCTION 142be8d90 IsValidAIDirection body=118 status=ok
// SIG undefined IsValidAIDirection(void)

undefined1 UAIBlueprintHelperLibrary::IsValidAIDirection(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  if ((-DAT_146691060 < fVar1) && (fVar1 < DAT_146691060)) {
    fVar2 = param_1[1];
    if ((-DAT_146691064 < fVar2) && (fVar2 < DAT_146691064)) {
      fVar3 = param_1[2];
      if (((-DAT_146691068 < fVar3) && (fVar3 < DAT_146691068)) &&
         ((fVar1 != 0.0 || ((fVar2 != 0.0 || (fVar3 != 0.0)))))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142be8e10 IsValidAILocation body=100 status=ok
// SIG undefined IsValidAILocation(void)

undefined1 UAIBlueprintHelperLibrary::IsValidAILocation(float *param_1)

{
  if ((-DAT_146691060 < *param_1) && (*param_1 < DAT_146691060)) {
    if ((-DAT_146691064 < param_1[1]) && (param_1[1] < DAT_146691064)) {
      if ((-DAT_146691068 < param_1[2]) && (param_1[2] < DAT_146691068)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142be8e80 IsValidAIRotation body=47 status=ok
// SIG undefined IsValidAIRotation(void)

undefined1 UAIBlueprintHelperLibrary::IsValidAIRotation(float *param_1)

{
  if (((DAT_146691038 == *param_1) && (DAT_14669103c == param_1[1])) &&
     (DAT_146691040 == param_1[2])) {
    return 0;
  }
  return 1;
}



// FUNCTION 142be8eb0 FUN_142be8eb0 body=201 status=ok
// SIG undefined FUN_142be8eb0(void)

void FUN_142be8eb0(longlong *param_1,char param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x278))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x490), lVar2 != 0)) {
    lVar3 = FUN_142c2de20();
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
      if ((param_2 != '\0') && (*(longlong *)(lVar2 + 0x548) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x548) + 0x178);
        (**(code **)(*plVar4 + 0x10))(plVar4,2);
      }
      if ((param_3 != '\0') && (*(longlong *)(lVar2 + 0x550) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x550) + 0x178);
        (**(code **)(*plVar4 + 0x10))(plVar4,2);
      }
    }
  }
  return;
}



// FUNCTION 142be8f80 FUN_142be8f80 body=152 status=ok
// SIG undefined FUN_142be8f80(void)

void FUN_142be8f80(longlong param_1)

{
  short sVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  sVar1 = *(short *)(param_1 + 0x38);
  FAIResourceLock::SetLock(param_1 + 0x38);
  if (sVar1 == 0) {
    puVar2 = (undefined8 *)FUN_142bbdc50(param_1 + 0x38,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(local_28,L"Locking Resource with source %s",puVar3);
    (**(code **)(*(longlong *)(param_1 + -0x178) + 0x418))((longlong *)(param_1 + -0x178),local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142be9020 FUN_142be9020 body=1493 status=ok
// SIG undefined FUN_142be9020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142be9020(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined4 local_1b8 [2];
  int local_1b0;
  int local_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  uint uStack_18c;
  uint *puStack_188;
  undefined4 local_180;
  uint uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined1 local_170 [8];
  undefined8 *local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  int iStack_138;
  uint uStack_134;
  uint *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined4 *local_110;
  uint local_f8;
  uint uStack_f4;
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_158 = param_1;
  uVar10 = (**(code **)(*param_1 + 0x148))();
  lVar11 = UBehaviorTreeManager::GetCurrent(uVar10);
  if (lVar11 != 0) {
    plVar4 = param_1 + 0x130;
    local_160 = lVar11;
    local_140 = (longlong *)CONCAT44(local_140._4_4_,(undefined4)local_140);
    if ((*plVar4 == 0) &&
       (lVar12 = param_1[0x117],
       local_140 = (longlong *)CONCAT44(local_140._4_4_,(undefined4)local_140), lVar12 != 0)) {
      puVar16 = (undefined8 *)param_1[0x11a];
      local_a8 = 0;
      uStack_a0 = 0;
      puVar17 = puVar16 + (longlong)(int)param_1[0x11b] * 7;
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0xffffffff;
      local_6c = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_b8 = lVar12;
      local_b0 = param_1;
      if (puVar16 != puVar17) {
        local_118 = &local_1a8;
        local_110 = local_1b8;
        do {
          local_1b8[0] = *(undefined4 *)((longlong)puVar16 + 0xc);
          local_1a8 = *puVar16;
          FUN_1417e05c0(&uStack_a0,local_170,&local_118,0);
          puVar16 = puVar16 + 7;
        } while (puVar16 != puVar17);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2c6a8) &&
         (_Init_thread_header(&DAT_146b2c6a8), DAT_146b2c6a8 == -1)) {
        DAT_146b2c698 = 0;
        _DAT_146b2c6a0 = 0;
        atexit((_func_5014 *)&LAB_143ebf4f0);
        _Init_thread_footer(&DAT_146b2c6a8);
      }
      local_1c0 = &local_150;
      local_150 = 0;
      local_148 = 0;
      local_1c8 = &DAT_146b2c698;
      FUN_142bee300(lVar11,&local_1a0);
      if (plVar4 != &local_1a0) {
        *plVar4 = local_1a0;
        local_1a0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x131,&local_198);
      }
      plVar5 = local_198;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_198 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_198 + 8))(local_198,1);
          }
        }
      }
      if (*plVar4 != 0) {
        uStack_18c = 1;
        local_190 = 0;
        plVar5 = param_1 + 0x11c;
        uVar8 = *(uint *)(param_1 + 0x121);
        puVar3 = (uint *)(param_1 + 0x11e);
        uStack_17c = 0;
        iStack_178 = 0;
        if (uVar8 != 0) {
          puVar19 = (uint *)param_1[0x120];
          if ((uint *)param_1[0x120] == (uint *)0x0) {
            puVar19 = puVar3;
          }
          uVar15 = *puVar19;
          iStack_178 = 0;
          local_190 = 0;
          while (uVar15 == 0) {
            lVar11 = (longlong)local_190;
            iStack_178 = iStack_178 + 0x20;
            iVar13 = local_190 + 1;
            bVar9 = (int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_190;
            local_190 = iVar13;
            if (bVar9) goto LAB_142be92e1;
            uVar15 = puVar19[lVar11 + 1];
          }
          uStack_18c = -uVar15 & uVar15;
          iVar13 = 0x1f;
          if (uStack_18c != 0) {
            for (; uStack_18c >> iVar13 == 0; iVar13 = iVar13 + -1) {
            }
          }
          if (uStack_18c == 0) {
            iVar13 = 0x20;
          }
          else {
            iVar13 = 0x1f - iVar13;
          }
          uStack_17c = (iStack_178 - iVar13) + 0x1f;
          if ((int)uVar8 < (int)uStack_17c) {
LAB_142be92e1:
            uStack_17c = uVar8;
          }
        }
        local_180 = 0xffffffff;
        uStack_f4 = *(uint *)(param_1 + 0x121);
        uStack_e0 = CONCAT44(uStack_18c,local_190);
        uStack_128 = CONCAT44(uStack_17c,0xffffffff);
        local_120 = CONCAT44(uStack_174,iStack_178);
        local_f8 = -1 << ((byte)uStack_f4 & 0x1f);
        uVar18 = uStack_f4 & 0xffffffe0;
        iStack_138 = local_190;
        uStack_134 = uStack_18c;
        puStack_188 = puVar3;
        local_130 = puVar3;
        local_e8 = plVar5;
        puStack_d8 = puVar3;
        uStack_d0 = uStack_128;
        uStack_c8 = local_120;
        local_140 = plVar5;
        uVar15 = uStack_f4;
        if (uStack_f4 != uVar8) {
          puVar19 = (uint *)param_1[0x120];
          if ((uint *)param_1[0x120] == (uint *)0x0) {
            puVar19 = puVar3;
          }
          uVar15 = puVar19[(int)uStack_f4 >> 5] & local_f8;
          iVar13 = (int)uStack_f4 >> 5;
          while (uVar15 == 0) {
            uVar18 = uVar18 + 0x20;
            if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
            goto LAB_142be93b2;
            uVar15 = puVar19[(longlong)iVar13 + 1];
            local_f8 = 0xffffffff;
            iVar13 = iVar13 + 1;
          }
          uVar15 = -uVar15 & uVar15;
          iVar13 = 0x1f;
          if (uVar15 != 0) {
            for (; uVar15 >> iVar13 == 0; iVar13 = iVar13 + -1) {
            }
          }
          if (uVar15 == 0) {
            iVar13 = 0x20;
          }
          else {
            iVar13 = 0x1f - iVar13;
          }
          uStack_f4 = (uVar18 - iVar13) + 0x1f;
          uVar15 = uStack_f4;
          if ((int)uVar8 < (int)uStack_f4) {
LAB_142be93b2:
            uStack_f4 = uVar8;
            uVar15 = uVar8;
          }
        }
        while( true ) {
          if (((uStack_128._4_4_ == uVar15) && (local_130 == puVar3)) && (local_140 == plVar5))
          break;
          lVar11 = *(longlong *)(*local_140 + 8 + (longlong)(int)uStack_128._4_4_ * 0x18);
          puVar16 = (undefined8 *)(*local_140 + (longlong)(int)uStack_128._4_4_ * 0x18);
          if (lVar11 != 0) {
            lVar12 = *plVar4;
            TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
            ::FindId(lVar12 + 0xc0,&local_1b0,*puVar16);
            if ((local_1b0 == -1) ||
               (lVar14 = (longlong)local_1b0 * 0x30 + *(longlong *)(lVar12 + 0xc0), lVar14 == 0)) {
              local_168 = puVar16;
              FUN_142bd0120(lVar12 + 0xc0,&local_1ac,&local_168,0);
              lVar11 = puVar16[1];
              lVar14 = (longlong)local_1ac * 0x30 + *(longlong *)(lVar12 + 0xc0);
            }
            UEnvQueryItemType_Actor::SetContextHelper(lVar14 + 8,lVar11);
          }
          uStack_128 = CONCAT44(uStack_128._4_4_,(uint)uStack_128 & ~uStack_134);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_138);
        }
        FUN_142beefd0(local_160,plVar4);
        param_1 = local_158;
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      local_58 = 0;
      if (local_60 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&uStack_a0);
    }
    if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x28) == 0)) {
      bVar6 = *(byte *)(param_1 + 0x12f);
      lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar7 = *(undefined1 *)(lVar12 + 0x718);
      *(byte *)(lVar12 + 0x718) = bVar6 & 1;
      FUN_142be0b90(*plVar4,(int)param_1[0x126]);
      iVar13 = (int)param_1[0x133];
      lVar11 = *plVar4;
      *(int *)(param_1 + 0x133) = iVar13 + 1;
      if (*(int *)((longlong)param_1 + 0x99c) < iVar13 + 1) {
        TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(param_1 + 0x132,iVar13);
      }
      FUN_142bd2030((longlong)iVar13 * 0x188 + param_1[0x132],lVar11);
      if (*(int *)(*plVar4 + 0x28) != 0) {
        *(int *)((longlong)param_1 + 0x934) = (int)param_1[0x133] + -1;
      }
      *(undefined1 *)(lVar12 + 0x718) = uVar7;
    }
  }
  return;
}



// FUNCTION 142be9600 FUN_142be9600 body=1602 status=ok
// SIG undefined FUN_142be9600(void)

void FUN_142be9600(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar2 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x44) != '\0')) {
    plVar12 = *(longlong **)(param_1 + 0x168);
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x278))(plVar12,lVar2,(int)param_2[6]);
      uVar3 = UStruct::FindPropertyByName
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x10),
                         *(undefined8 *)(param_1 + 0x170));
      *(undefined8 *)(param_1 + 0x160) = uVar3;
    }
    if ((*(longlong *)(param_1 + 0x160) == 0) ||
       (pfVar4 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x160) + 0x44) +
                          *(longlong *)(param_1 + 0x168)), pfVar4 == (float *)0x0)) {
      fVar20 = *(float *)(param_1 + 0x180);
    }
    else {
      fVar20 = *pfVar4;
    }
    if (*(char *)(param_1 + 0xf4) == '\0') {
      fVar17 = 0.0;
    }
    else {
      fVar17 = 3.4e+38;
    }
    fVar18 = -3.4e+38;
    if (*(char *)(param_1 + 0xf2) == '\x02') {
      plVar12 = *(longlong **)(param_1 + 0xa0);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x278))(plVar12,lVar2,(int)param_2[6]);
        uVar3 = UStruct::FindPropertyByName
                          (*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x10),
                           *(undefined8 *)(param_1 + 0xa8));
        *(undefined8 *)(param_1 + 0x98) = uVar3;
      }
      if ((*(longlong *)(param_1 + 0x98) == 0) ||
         (pfVar4 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 0x44) +
                            *(longlong *)(param_1 + 0xa0)), pfVar4 == (float *)0x0)) {
        fVar17 = *(float *)(param_1 + 0xb8);
      }
      else {
        fVar17 = *pfVar4;
      }
    }
    else if (*(char *)(param_1 + 0xf2) == '\x01') {
      FAIDataProviderValue::BindData(param_1 + 0xf8,lVar2,(int)param_2[6]);
      if ((*(longlong *)(param_1 + 0x100) == 0) ||
         (pfVar4 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x44) +
                            *(longlong *)(param_1 + 0x108)), pfVar4 == (float *)0x0)) {
        fVar17 = *(float *)(param_1 + 0x120);
      }
      else {
        fVar17 = *pfVar4;
      }
    }
    if (*(char *)(param_1 + 0xf3) == '\x02') {
      plVar12 = *(longlong **)(param_1 + 0xd0);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x278))(plVar12,lVar2,(int)param_2[6]);
        uVar3 = UStruct::FindPropertyByName
                          (*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x10),
                           *(undefined8 *)(param_1 + 0xd8));
        *(undefined8 *)(param_1 + 200) = uVar3;
      }
      if ((*(longlong *)(param_1 + 200) == 0) ||
         (pfVar4 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x44) +
                            *(longlong *)(param_1 + 0xd0)), pfVar4 == (float *)0x0)) {
        fVar18 = *(float *)(param_1 + 0xe8);
      }
      else {
        fVar18 = *pfVar4;
      }
    }
    else if (*(char *)(param_1 + 0xf3) == '\x01') {
      FAIDataProviderValue::BindData(param_1 + 0x128,lVar2,(int)param_2[6]);
      if ((*(longlong *)(param_1 + 0x130) == 0) ||
         (pfVar4 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 0x130) + 0x44) +
                            *(longlong *)(param_1 + 0x138)), pfVar4 == (float *)0x0)) {
        fVar18 = *(float *)(param_1 + 0x150);
      }
      else {
        fVar18 = *pfVar4;
      }
    }
    cVar1 = *(char *)(param_1 + 0xf2);
    uVar6 = 0;
    plVar12 = (longlong *)param_2[0x28];
    if ((cVar1 == '\0') || (*(char *)(param_1 + 0xf3) == '\0')) {
      lVar10 = (longlong)(int)param_2[1];
      uVar7 = uVar6;
      plVar8 = plVar12;
      if (3 < lVar10) {
        puVar5 = (uint *)(*param_2 + 0x10);
        lVar9 = (lVar10 - 4U >> 2) + 1;
        uVar7 = lVar9 * 4;
        do {
          if ((((puVar5[-3] >> 0x1e & 1) == 0) && (-1 < (int)puVar5[-3])) &&
             (fVar16 = *(float *)(*plVar8 + (longlong)*(int *)((longlong)param_2 + 0x134) * 4),
             fVar16 != -3.4028235e+38)) {
            if ((cVar1 == '\0') && (fVar16 < fVar17)) {
              fVar17 = fVar16;
            }
            if ((*(char *)(param_1 + 0xf3) == '\0') && (fVar18 < fVar16)) {
              fVar18 = fVar16;
            }
          }
          if ((((*puVar5 >> 0x1e & 1) == 0) && (-1 < (int)*puVar5)) &&
             (fVar16 = *(float *)(plVar8[2] + (longlong)*(int *)((longlong)param_2 + 0x134) * 4),
             fVar16 != -3.4028235e+38)) {
            if ((cVar1 == '\0') && (fVar16 < fVar17)) {
              fVar17 = fVar16;
            }
            if ((*(char *)(param_1 + 0xf3) == '\0') && (fVar18 < fVar16)) {
              fVar18 = fVar16;
            }
          }
          if ((((puVar5[3] >> 0x1e & 1) == 0) && (-1 < (int)puVar5[3])) &&
             (fVar16 = *(float *)(plVar8[4] + (longlong)*(int *)((longlong)param_2 + 0x134) * 4),
             fVar16 != -3.4028235e+38)) {
            if ((cVar1 == '\0') && (fVar16 < fVar17)) {
              fVar17 = fVar16;
            }
            if ((*(char *)(param_1 + 0xf3) == '\0') && (fVar18 < fVar16)) {
              fVar18 = fVar16;
            }
          }
          if ((((puVar5[6] >> 0x1e & 1) == 0) && (-1 < (int)puVar5[6])) &&
             (fVar16 = *(float *)(plVar8[6] + (longlong)*(int *)((longlong)param_2 + 0x134) * 4),
             fVar16 != -3.4028235e+38)) {
            if ((cVar1 == '\0') && (fVar16 < fVar17)) {
              fVar17 = fVar16;
            }
            if ((*(char *)(param_1 + 0xf3) == '\0') && (fVar18 < fVar16)) {
              fVar18 = fVar16;
            }
          }
          plVar8 = plVar8 + 8;
          puVar5 = puVar5 + 0xc;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if ((longlong)uVar7 < lVar10) {
        lVar10 = lVar10 - uVar7;
        puVar5 = (uint *)(*param_2 + (uVar7 * 3 + 1) * 4);
        do {
          if ((((*puVar5 >> 0x1e & 1) == 0) && (-1 < (int)*puVar5)) &&
             (fVar16 = *(float *)(*plVar8 + (longlong)*(int *)((longlong)param_2 + 0x134) * 4),
             fVar16 != -3.4028235e+38)) {
            if ((cVar1 == '\0') && (fVar16 < fVar17)) {
              fVar17 = fVar16;
            }
            if ((*(char *)(param_1 + 0xf3) == '\0') && (fVar18 < fVar16)) {
              fVar18 = fVar16;
            }
          }
          plVar8 = plVar8 + 2;
          puVar5 = puVar5 + 3;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
    if (fVar17 != fVar18) {
      cVar1 = *(char *)(param_1 + 0x1b8);
      fVar16 = fVar17;
      if (cVar1 != '\0') {
        plVar8 = *(longlong **)(param_1 + 0x198);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x278))(plVar8,lVar2,(int)param_2[6]);
          uVar3 = UStruct::FindPropertyByName
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x10),
                             *(undefined8 *)(param_1 + 0x1a0));
          *(undefined8 *)(param_1 + 400) = uVar3;
          cVar1 = *(char *)(param_1 + 0x1b8);
        }
        if (cVar1 != '\0') {
          if ((*(longlong *)(param_1 + 400) == 0) ||
             (pfVar4 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 400) + 0x44) +
                                *(longlong *)(param_1 + 0x198)), pfVar4 == (float *)0x0)) {
            fVar16 = *(float *)(param_1 + 0x1b0);
          }
          else {
            fVar16 = *pfVar4;
          }
        }
      }
      fVar19 = ABS(fVar16 - fVar18);
      if (ABS(fVar16 - fVar18) <= ABS(fVar16 - fVar17)) {
        fVar19 = ABS(fVar16 - fVar17);
      }
      uVar7 = uVar6;
      if (0 < (int)param_2[0x29]) {
        do {
          lVar2 = *param_2;
          uVar11 = *(uint *)(uVar6 + 4 + lVar2);
          if (((uVar11 >> 0x1e & 1) == 0) && (-1 < (int)uVar11)) {
            fVar15 = *(float *)(*plVar12 + (longlong)*(int *)((longlong)param_2 + 0x134) * 4);
            if (fVar15 == -3.4028235e+38) {
LAB_142be9bd4:
              fVar14 = 0.0;
            }
            else {
              fVar13 = fVar17;
              if ((fVar17 <= fVar15) && (fVar13 = fVar15, fVar18 <= fVar15)) {
                fVar13 = fVar18;
              }
              if (fVar20 < 0.0) {
                fVar15 = 1.0 - (1.0 / fVar19) * ABS(fVar16 - fVar13);
              }
              else {
                fVar15 = (1.0 / fVar19) * ABS(fVar16 - fVar13);
              }
              cVar1 = *(char *)(param_1 + 0xf1);
              fVar13 = ABS(fVar20);
              if (cVar1 == '\0') {
                fVar14 = fVar13 * fVar15;
              }
              else if (cVar1 == '\x01') {
                fVar14 = fVar15 * fVar15 * fVar13;
              }
              else if (cVar1 == '\x02') {
                fVar14 = (1.0 - fVar15) * fVar13;
              }
              else if (cVar1 == '\x03') {
                fVar14 = SQRT(fVar15) * fVar13;
              }
              else {
                fVar14 = 0.0;
                if ((cVar1 == '\x04') && (fVar14 = fVar13, fVar15 <= 0.0)) goto LAB_142be9bd4;
              }
            }
            *(float *)(uVar6 + lVar2) = fVar14 + *(float *)(uVar6 + lVar2);
          }
          uVar11 = (int)uVar7 + 1;
          uVar6 = uVar6 + 0xc;
          plVar12 = plVar12 + 2;
          uVar7 = (ulonglong)uVar11;
        } while ((int)uVar11 < (int)param_2[0x29]);
      }
    }
  }
  return;
}



// FUNCTION 142be9c50 FUN_142be9c50 body=412 status=ok
// SIG undefined FUN_142be9c50(void)

void FUN_142be9c50(longlong param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  uint local_20;
  
  if (param_4 != 0) {
    return;
  }
  *(char *)(param_3 + 8) = (char)*param_5;
  if (*param_5 == 3) {
    iVar2 = FUN_142bbf020(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
    if (iVar2 != 0) {
      return;
    }
    *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0xfd | 1;
    FUN_142bc7a20(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8));
  }
  else {
    bVar1 = *(byte *)(param_3 + 9);
    if ((bVar1 & 1) != 0) {
      local_20 = local_20 & 0xfffffff8;
      *(byte *)(param_3 + 9) = bVar1 & 0xfe;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0xffffffffffffffff;
      local_24 = 0xffffffff;
      local_58 = param_2;
      FUN_142bc34e0(param_1,&local_58,0,param_5);
      uVar3 = FUN_142bbb940(param_2,param_1);
      FUN_142bcd8c0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),(short)uVar3);
      if (((*param_5 != 2) && ((*(byte *)(param_3 + 9) & 4) == 0)) &&
         (*(char *)(param_1 + 0x90) == '\0')) {
        FUN_142bc8500(param_2,param_1,uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),0,
                      *param_5,1);
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_50 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    if (*param_5 != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x90) != '\x01') {
      return;
    }
    *(byte *)(param_3 + 9) = bVar1 | 2;
  }
  FUN_142bc84f0(param_1,param_2,0);
  return;
}



// FUNCTION 142be9df0 FUN_142be9df0 body=123 status=ok
// SIG undefined FUN_142be9df0(void)

void FUN_142be9df0(longlong param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  undefined1 local_16;
  byte local_15;
  
  local_18 = *(ushort *)(*param_2 + 800);
  lVar1 = (ulonglong)*(ushort *)(param_1 + 0x52) +
          *(longlong *)((ulonglong)local_18 * 0x60 + 0x38 + *(longlong *)(*param_2 + 0x1d8));
  if ((*(byte *)(lVar1 + 9) & 1) == 0) {
    *param_3 = (uint)*(byte *)(lVar1 + 8);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8);
    local_15 = local_15 & 0xfe;
    local_28 = 0;
    local_16 = 2;
    FUN_142bb3e30(param_2,&local_28);
  }
  return;
}



// FUNCTION 142be9e70 FUN_142be9e70 body=299 status=ok
// SIG undefined FUN_142be9e70(void)

void FUN_142be9e70(longlong *param_1,longlong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_142bbcac0(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0x550), lVar3 != 0)) {
      lVar4 = UProgressBar::GetPrivateStaticClass();
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
        iVar2 = FUN_142bbf020(lVar3,param_1);
        if (iVar2 == 0) {
          if ((param_3 == 4) || (param_3 == 1)) {
            UBTTaskNode::FinishLatentTask(param_1,lVar3,*(int *)(param_2 + 0x88) != 2);
          }
          else if (param_3 == 3) {
            (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
          }
        }
        else if (((iVar2 == 1) && ((param_3 - 1U & 0xfffffffc) == 0)) && (param_3 != 2)) {
          UBTTaskNode::FinishLatentAbort(param_1,lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142be9fa0 FUN_142be9fa0 body=177 status=ok
// SIG undefined FUN_142be9fa0(void)

void FUN_142be9fa0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142bbcac0(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x550), lVar2 != 0)) {
      lVar3 = UProgressBar::GetPrivateStaticClass();
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
        UBTTaskNode::FinishLatentTask(param_1,lVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142bea060 OnAnimationTimerDone body=78 status=ok
// SIG undefined OnAnimationTimerDone(void)

void UBTTask_PlayAnimation::OnAnimationTimerDone(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    if ((*(longlong *)(param_1 + 0x88) != 0) && (*(int *)(param_1 + 0x90) == 0)) {
      FUN_1423b9af0(*(longlong *)(param_1 + 0x88),0);
      lVar1 = *(longlong *)(param_1 + 0x80);
    }
    UBTTaskNode::FinishLatentTask(param_1,lVar1,0);
    return;
  }
  return;
}



// FUNCTION 142bea0b0 FUN_142bea0b0 body=146 status=ok
// SIG undefined FUN_142bea0b0(void)

void FUN_142bea0b0(ulonglong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_res8;
  
  local_res8 = local_res8 & 0xffffffffffffff00;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x28,&local_res8);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x54);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
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
      local_res8 = param_1;
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (lVar2 + 0xb0,&local_res8);
    }
  }
  return;
}



// FUNCTION 142bea150 FUN_142bea150 body=185 status=ok
// SIG undefined FUN_142bea150(void)

void FUN_142bea150(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = *(longlong *)(param_2 + 0x180);
  if (lVar2 != 0) {
    local_18 = &LAB_142440660;
    uVar1 = *(undefined1 *)(param_1 + 0x88);
    uStack_10 = 0;
    local_28 = 0;
    local_20 = 0;
    puVar3 = (undefined8 *)operator_new(0x30,&local_28);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar3 + 1,param_1);
      *(undefined4 *)(puVar3 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_18._4_4_;
      *(undefined4 *)(puVar3 + 3) = uStack_10;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_c;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[5] = uVar4;
    }
    FUN_142bc77b0(lVar2,local_res10,uVar1,param_1,&local_28);
  }
  return;
}



// FUNCTION 142bea210 FUN_142bea210 body=372 status=ok
// SIG undefined FUN_142bea210(void)

void FUN_142bea210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 == 0) || ((*(uint *)(param_1 + 0x98) >> 10 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x98) >> 9 & 1) != 0) {
      FUN_142c37ae0(param_1,*(undefined8 *)(param_1 + 0x70));
    }
  }
  else {
    FUN_142c37b20(param_1,lVar1,*(undefined8 *)(lVar1 + 0x488));
  }
  if (((*(uint *)(param_1 + 0x98) & 0x6000) != 0) && (((byte)*(uint *)(param_1 + 0x98) & 6) != 6)) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 4;
  }
  lVar1 = *(longlong *)(param_2 + 0x180);
  if ((lVar1 != 0) && (iVar5 = 0, 0 < *(int *)(param_1 + 0x80))) {
    do {
      cVar2 = FUN_142bbd6b0(lVar1,*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 8);
      if (cVar2 != -1) {
        local_38 = UBTDecorator_BlueprintBase::OnBlackboardKeyValueChange;
        uStack_30 = 0;
        local_48 = 0;
        local_40 = 0;
        puVar3 = (undefined8 *)operator_new(0x30,&local_48);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_14407c830;
          FWeakObjectPtr::operator=(puVar3 + 1,param_1);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 3) = uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_2c;
          uVar4 = FDelegateHandle::GenerateNewID();
          puVar3[5] = uVar4;
        }
        FUN_142bc77b0(lVar1,local_res8,cVar2,param_1,&local_48);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x80));
  }
  return;
}



// FUNCTION 142bea390 FUN_142bea390 body=302 status=ok
// SIG undefined FUN_142bea390(void)

void FUN_142bea390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *(longlong *)(param_2 + 0x180);
  if (lVar1 != 0) {
    local_28 = &LAB_142440660;
    uStack_20 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar2 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar2 + 1,param_1);
      *(undefined4 *)(puVar2 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_1c;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[5] = uVar3;
    }
    FUN_142bc77b0(lVar1,local_res10,*(undefined1 *)(param_1 + 0x90),param_1,&local_38);
    local_28 = &LAB_142440660;
    uStack_20 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar2 = (undefined8 *)operator_new(0x30,&local_38);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar2 + 1,param_1);
      *(undefined4 *)(puVar2 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 3) = uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_1c;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[5] = uVar3;
    }
    FUN_142bc77b0(lVar1,local_res10,*(undefined1 *)(param_1 + 0xb8),param_1,&local_38);
  }
  return;
}



// FUNCTION 142bea4c0 FUN_142bea4c0 body=516 status=ok
// SIG undefined FUN_142bea4c0(void)

void FUN_142bea4c0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  cVar2 = UBTDecorator_ConeCheck::CalculateDirection
                    (param_1,uVar1,param_1 + 0x70,param_1 + 0xc0,&local_78);
  if ((cVar2 != '\0') &&
     (cVar2 = UBTDecorator_ConeCheck::CalculateDirection
                        (param_1,uVar1,param_1 + 0x70,param_1 + 0x98,&local_68), cVar2 != '\0')) {
    fVar3 = local_64 * local_64 + local_68 * local_68;
    if (1e-08 < fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      local_68 = local_68 * fVar4;
      local_64 = local_64 * fVar4;
    }
    fVar3 = local_78 * local_78 + local_74 * local_74;
    if (1e-08 < fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4) + fVar4;
      local_78 = local_78 * fVar4;
      local_74 = fVar4 * local_74;
    }
    fVar3 = local_78 * local_68 + local_74 * local_64;
    if (*(float *)(param_1 + 0xe8) <= fVar3 && fVar3 != *(float *)(param_1 + 0xe8)) {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142bea6d0 OnBecomeRelevant body=65 status=ok
// SIG undefined OnBecomeRelevant(void)

void UBTDecorator_KeepInCone::OnBecomeRelevant
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_18 = 0x3f800000;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_142bd8bd0(0x3f800000,param_2,&local_18);
  *param_3 = CONCAT44(uStack_14,local_18);
  *(undefined4 *)(param_3 + 1) = uStack_10;
  return;
}



// FUNCTION 142bea720 FUN_142bea720 body=84 status=ok
// SIG undefined FUN_142bea720(void)

void FUN_142bea720(longlong param_1)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x90) & 0x20) != 0)) {
    FUN_142c3bb80(param_1,lVar1,*(undefined8 *)(lVar1 + 0x488));
    return;
  }
  if ((*(byte *)(param_1 + 0x90) & 0x10) != 0) {
    FUN_142c3bb40(param_1,*(undefined8 *)(param_1 + 0x78));
    return;
  }
  return;
}



// FUNCTION 142bea780 FUN_142bea780 body=494 status=ok
// SIG undefined FUN_142bea780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bea780(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *param_3 = 0;
  param_3[1] = _DAT_146691060;
  *(undefined4 *)(param_3 + 2) = DAT_146691068;
  *(undefined1 *)((longlong)param_3 + 0x14) = 0;
  plVar2 = *(longlong **)(param_2 + 0x188);
  lVar3 = *(longlong *)(param_2 + 0x180);
  if ((plVar2 != (longlong *)0x0) && (lVar3 != 0)) {
    lVar7 = 0;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar5 = UBlackboardKeyType::GetPrivateStaticClass();
      for (lVar6 = *(longlong *)(param_1 + 0x88);
          (lVar7 = 0, lVar6 != 0 && (lVar7 = *(longlong *)(param_1 + 0x88), lVar6 != lVar5));
          lVar6 = *(longlong *)(lVar6 + 0x30)) {
      }
    }
    lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar7 == lVar6) {
      lVar7 = FUN_140725690(lVar3,*(undefined1 *)(param_1 + 0x90));
      if (lVar7 != 0) {
        lVar6 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          (**(code **)(*plVar2 + 0x8c0))(plVar2,lVar7,*(undefined1 *)(param_1 + 0x98));
          *param_3 = lVar7;
          *(undefined1 *)((longlong)param_3 + 0x14) = 1;
        }
      }
    }
    else {
      FUN_140725750(lVar3,&local_38,*(undefined1 *)(param_1 + 0x90));
      local_28 = (longlong)local_38;
      local_20 = uStack_30;
      (**(code **)(*plVar2 + 0x8b8))(plVar2,&local_28,*(undefined1 *)(param_1 + 0x98));
      param_3[1] = (longlong)local_38;
      *(undefined4 *)(param_3 + 2) = uStack_30;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x90);
    local_38 = FUN_142beab40;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    puVar8 = (undefined8 *)operator_new(0x30,&local_28);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_14407c830;
      FWeakObjectPtr::operator=(puVar8 + 1,param_1);
      *(undefined4 *)(puVar8 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_38._4_4_;
      *(undefined4 *)(puVar8 + 3) = uStack_30;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_2c;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[5] = uVar9;
    }
    FUN_142bc77b0(lVar3,local_res10,uVar1,param_1,&local_28);
  }
  return;
}



// FUNCTION 142bea970 OnBlackboardKeyValueChange body=85 status=ok
// SIG undefined OnBlackboardKeyValueChange(void)

undefined1
UBTDecorator_Blackboard::OnBlackboardKeyValueChange
          (longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1426e2440(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x88) == param_3) {
    FUN_142bb6ab0(param_1,lVar1,*(char *)(param_1 + 0xb9) == '\0');
  }
  return 1;
}



// FUNCTION 142bea9d0 OnBlackboardKeyValueChange body=74 status=ok
// SIG undefined OnBlackboardKeyValueChange(void)

undefined1
UBTDecorator_BlackboardBase::OnBlackboardKeyValueChange
          (longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1426e2440(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x88) == param_3) {
    FUN_142bc8a50(lVar1,param_1);
  }
  return 1;
}



// FUNCTION 142beaa20 OnBlackboardKeyValueChange body=72 status=ok
// SIG undefined OnBlackboardKeyValueChange(void)

bool UBTDecorator_BlueprintBase::OnBlackboardKeyValueChange(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1426e2440(param_2);
  if (lVar2 != 0) {
    cVar1 = FUN_142be5a50(param_1,lVar2);
    if (cVar1 != '\0') {
      FUN_142bc8a50(lVar2,param_1);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 142beaa70 OnBlackboardKeyValueChange body=83 status=ok
// SIG undefined OnBlackboardKeyValueChange(void)

undefined1
UBTDecorator_CompareBBEntries::OnBlackboardKeyValueChange
          (longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1426e2440(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x90) == param_3) || (*(char *)(param_1 + 0xb8) == param_3)) {
    FUN_142bc8a50(lVar1,param_1);
  }
  return 1;
}



// FUNCTION 142beaad0 FUN_142beaad0 body=98 status=ok
// SIG undefined FUN_142beaad0(void)

undefined1 FUN_142beaad0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  uVar2 = FUN_1426e2440(param_2);
  uVar1 = *(uint *)(param_1 + 0xc);
  bVar3 = (**(code **)(*param_1 + 0x300))(param_1,uVar2,0);
  if (bVar3 != ((byte)(uVar1 >> 7) & 1)) {
    uVar2 = FUN_1426e2440(param_2);
    FUN_142bc8a50(uVar2,param_1);
  }
  return 1;
}



// FUNCTION 142beab40 FUN_142beab40 body=472 status=ok
// SIG undefined FUN_142beab40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142beab40(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  
  lVar3 = FUN_1426e2440(param_2);
  if (lVar3 != 0) {
    lVar4 = UProgressBar::GetPrivateStaticClass();
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
      plVar7 = *(longlong **)(lVar3 + 0x188);
      goto LAB_142beabb1;
    }
  }
  lVar3 = 0;
  plVar7 = (longlong *)0x0;
LAB_142beabb1:
  if (plVar7 != (longlong *)0x0) {
    uVar2 = FUN_142bbb940(lVar3,param_1);
    plVar5 = (longlong *)FUN_142bbe120(lVar3,param_1,uVar2);
    *plVar5 = 0;
    plVar5[1] = _DAT_146691060;
    *(undefined4 *)(plVar5 + 2) = DAT_146691068;
    *(undefined1 *)((longlong)plVar5 + 0x14) = 0;
    (**(code **)(*plVar7 + 0x8c8))(plVar7,*(undefined1 *)(param_1 + 0x98));
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar6 = UBlackboardKeyType::GetPrivateStaticClass();
      lVar3 = *(longlong *)(param_1 + 0x88);
      for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar6) goto LAB_142beac40;
      }
    }
    lVar3 = 0;
LAB_142beac40:
    lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar3 == lVar4) {
      lVar3 = FUN_140725690(param_2,param_3);
      if (lVar3 != 0) {
        lVar4 = FUN_1428dfc70();
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
          (**(code **)(*plVar7 + 0x8c0))(plVar7,lVar3,*(undefined1 *)(param_1 + 0x98));
          *plVar5 = lVar3;
          *(undefined1 *)((longlong)plVar5 + 0x14) = 1;
        }
      }
    }
    else {
      FUN_140725750(param_2,&local_38,param_3);
      local_28 = local_38;
      local_20 = local_30;
      (**(code **)(*plVar7 + 0x8b8))(plVar7,&local_28,*(undefined1 *)(param_1 + 0x98));
      plVar5[1] = local_38;
      *(undefined4 *)(plVar5 + 2) = local_30;
    }
  }
  return 1;
}



// FUNCTION 142bead20 FUN_142bead20 body=536 status=ok
// SIG undefined FUN_142bead20(void)

undefined8 FUN_142bead20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  float local_18;
  float local_14;
  float local_10;
  
  lVar6 = FUN_1426e2440(param_2);
  if (lVar6 != 0) {
    lVar7 = UProgressBar::GetPrivateStaticClass();
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
      uVar4 = FUN_142bbb940(lVar6,param_1);
      piVar8 = (int *)FUN_142bbe120(lVar6,param_1,uVar4);
      iVar5 = FUN_142bbf020(lVar6,param_1);
      if (iVar5 != 0) {
        piVar8[2] = 0;
        piVar8[3] = 0;
        return 0;
      }
      if (((piVar8 != (int *)0x0) && ((*(byte *)(piVar8 + 9) & 1) == 0)) &&
         (*(longlong *)(lVar6 + 0x188) != 0)) {
        if (*(longlong *)(param_1 + 0x88) != 0) {
          lVar9 = UBlackboardKeyType::GetPrivateStaticClass();
          lVar7 = *(longlong *)(param_1 + 0x88);
          for (lVar10 = lVar7; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
            if (lVar10 == lVar9) goto LAB_142beae28;
          }
        }
        lVar7 = 0;
LAB_142beae28:
        lVar10 = UBlackboardKeyType_Object::GetPrivateStaticClass();
        if ((lVar7 == lVar10) &&
           (FUN_140725750(param_2,&local_18,*(undefined1 *)(param_1 + 0x90)),
           ((float)piVar8[5] - local_14) * ((float)piVar8[5] - local_14) +
           ((float)piVar8[4] - local_18) * ((float)piVar8[4] - local_18) +
           ((float)piVar8[6] - local_10) * ((float)piVar8[6] - local_10) <=
           *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8))) {
          return 1;
        }
        if (*piVar8 != -1) {
          FUN_142bcb970(param_1,lVar6);
          plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x188) + 0x548);
          (**(code **)(*plVar1 + 0x428))(plVar1,param_1,0x80,*piVar8,1);
        }
        if (((*(uint *)(param_1 + 0xac) & 0x400) == 0) &&
           (cVar3 = (**(code **)(*(longlong *)(*(longlong *)(lVar6 + 0x188) + 0x458) + 0x40))(),
           cVar3 != '\0')) {
          *(byte *)(piVar8 + 9) = *(byte *)(piVar8 + 9) | 1;
          return 1;
        }
        iVar5 = FUN_142bec5e0(param_1,lVar6,piVar8);
        if (iVar5 != 3) {
          UBTTaskNode::FinishLatentTask(param_1,lVar6,iVar5);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142beaf60 FUN_142beaf60 body=123 status=ok
// SIG undefined FUN_142beaf60(void)

void FUN_142beaf60(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x180) != 0) {
    FUN_142bcd510(*(longlong *)(param_2 + 0x180),param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if ((lVar2 == 0) || ((*(uint *)(param_1 + 0x98) >> 0xc & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x98) >> 0xb & 1) != 0) {
      FUN_142c37b70(param_1,*(undefined8 *)(param_1 + 0x70));
    }
  }
  else {
    FUN_142c37bb0(param_1,lVar2,*(undefined8 *)(lVar2 + 0x488));
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  if ((((uVar1 & 0x6000) != 0) && (((byte)uVar1 & 6) != 6)) && ((uVar1 & 0x18) == 0)) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfb;
  }
  return;
}



// FUNCTION 142beafe0 FUN_142beafe0 body=127 status=ok
// SIG undefined FUN_142beafe0(void)

void FUN_142beafe0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((*(uint *)(param_2 + 8) >> 0xf & 1) == 0) && (*(longlong *)(param_2 + 0x118) != 0)) {
    FUN_142bb3390(param_2,param_1);
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x90) & 0x80) != 0)) {
      FUN_142c3bc10(param_1,lVar1,*(undefined8 *)(lVar1 + 0x488));
      return;
    }
    if ((*(byte *)(param_1 + 0x90) & 0x40) != 0) {
      FUN_142c3bbd0(param_1,*(undefined8 *)(param_1 + 0x78));
    }
  }
  return;
}



// FUNCTION 142beb060 FUN_142beb060 body=213 status=ok
// SIG undefined FUN_142beb060(void)

void FUN_142beb060(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = *(longlong **)(param_2 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)((longlong)param_3 + 0x14) == '\0') {
      pfVar3 = (float *)FUN_142bbd100(plVar1,local_18);
      if ((*pfVar3 != *(float *)(param_3 + 1)) || (pfVar3[1] != *(float *)((longlong)param_3 + 0xc))
         ) goto LAB_142beb10c;
      bVar4 = pfVar3[2] == *(float *)(param_3 + 2);
    }
    else if ((int)(uint)*(byte *)(param_1 + 0x98) < (int)plVar1[0xa7]) {
      lVar2 = FWeakObjectPtr::Get(plVar1[0xa6] + (ulonglong)*(byte *)(param_1 + 0x98) * 0x14);
      bVar4 = *param_3 == lVar2;
    }
    else {
      bVar4 = *param_3 == 0;
    }
    if (bVar4) {
      (**(code **)(*plVar1 + 0x8c8))(plVar1,*(undefined1 *)(param_1 + 0x98));
    }
  }
LAB_142beb10c:
  if (*(longlong *)(param_2 + 0x180) != 0) {
    FUN_142bcd510(*(longlong *)(param_2 + 0x180),param_1);
  }
  return;
}



// FUNCTION 142beb140 FUN_142beb140 body=108 status=ok
// SIG undefined FUN_142beb140(void)

void FUN_142beb140(long param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_3 == -1) goto LAB_142beb18f;
  lVar1 = *(longlong *)(param_2 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_2);
    if (lVar1 != 0) goto LAB_142beb177;
  }
  else {
LAB_142beb177:
    uVar2 = UBehaviorTreeManager::GetCurrent(lVar1);
    FUN_142bd8290(uVar2,*param_3);
  }
  *param_3 = -1;
LAB_142beb18f:
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 142beb1b0 FUN_142beb1b0 body=212 status=ok
// SIG undefined FUN_142beb1b0(void)

void FUN_142beb1b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    lVar4 = UAITask::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x68) != 0)) && (*(char *)(param_2 + 0x39) != '\x02'))
    {
      plVar6 = (longlong *)(param_1 + -0x28);
      lVar4 = FUN_142bbbeb0(plVar6,param_2);
      if (lVar4 != 0) {
        uVar3 = FUN_142bbb940(lVar4,plVar6);
        lVar5 = FUN_142bbe120(lVar4,plVar6,uVar3);
        if (((*(byte *)(lVar5 + 8) & 1) != 0) &&
           (cVar2 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                              (param_2,lVar5), cVar2 != '\0')) {
          uVar3 = (**(code **)(*plVar6 + 0x2f0))(plVar6,param_2);
          UBTTaskNode::FinishLatentTask(plVar6,lVar4,uVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142beb290 OnGameplayTaskDeactivated body=209 status=ok
// SIG undefined OnGameplayTaskDeactivated(void)

void UBTTask_MoveTo::OnGameplayTaskDeactivated(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar4 = UAITask_MoveTo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x68) != 0)) && (*(char *)(param_2 + 0x39) != '\x02'))
    {
      param_1 = param_1 + -0x28;
      lVar4 = FUN_142bbbeb0(param_1,param_2);
      if (lVar4 != 0) {
        uVar3 = FUN_142bbb940(lVar4,param_1);
        lVar5 = FUN_142bbe120(lVar4,param_1,uVar3);
        if (((*(byte *)(lVar5 + 0x24) & 2) != 0) &&
           (cVar2 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                              (param_2,lVar5 + 0x1c), cVar2 != '\0')) {
          UBTTaskNode::FinishLatentTask(param_1,lVar4,*(char *)(param_2 + 0x108) != '\0');
        }
      }
    }
  }
  return;
}



// FUNCTION 142beb370 OnInstanceCreated body=31 status=ok
// SIG undefined OnInstanceCreated(void)

void UBTTask_RunBehaviorDynamic::OnInstanceCreated(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  return;
}



// FUNCTION 142beb3c0 FUN_142beb3c0 body=548 status=ok
// SIG undefined FUN_142beb3c0(void)

void FUN_142beb3c0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  char cVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong local_res8;
  
  iVar13 = *(int *)(param_1 + 0x50);
  if (((iVar13 == -1) || (param_2 == -1)) ||
     ((param_2 != iVar13 && ((param_2 != 0 && (iVar13 != 0)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x48,1,0), cVar6 != '\0')) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UAIAsyncTaskBlueprintProxy::OnMoveCompleted",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x48);
    lVar5 = local_res8;
    plVar1 = (longlong *)(lVar8 + 0x580);
    lVar10 = *plVar1;
    iVar13 = *(int *)(lVar8 + 0x588);
    for (lVar14 = lVar10; lVar14 != (longlong)iVar13 * 0x10 + lVar10; lVar14 = lVar14 + 0x10) {
      if ((*(longlong *)(lVar14 + 8) == lVar5) &&
         (lVar9 = FWeakObjectPtr::GetEvenIfUnreachable(lVar14), param_1 == lVar9)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iVar13 = (int)(lVar14 - lVar10 >> 4);
        if (iVar13 != -1) {
          iVar12 = *(int *)(lVar8 + 0x588);
          iVar11 = (iVar12 - iVar13) + -1;
          if (0 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar13 * 0x10 + *plVar1),
                       (void *)((longlong)(iVar12 - iVar11) * 0x10 + *plVar1),(longlong)iVar11 << 4)
            ;
            iVar12 = *(int *)(lVar8 + 0x588);
          }
          *(int *)(lVar8 + 0x588) = iVar12 + -1;
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    if (param_3 == 0) {
      lVar10 = param_1 + 0x28;
    }
    else {
      lVar10 = param_1 + 0x38;
    }
    local_res8 = CONCAT71(local_res8._1_7_,(char)param_3);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar10,&local_res8);
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x54);
    if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x150), lVar10 != 0)) {
      lVar14 = FUN_142c32730();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res8 = param_1;
        TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                  (lVar10 + 0xb0,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142beb5f0 FUN_142beb5f0 body=146 status=ok
// SIG undefined FUN_142beb5f0(void)

void FUN_142beb5f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  local_res8 = CONCAT71(local_res8._1_7_,3);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x38,&local_res8);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x54);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
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
      local_res8 = param_1;
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (lVar2 + 0xb0,&local_res8);
    }
  }
  return;
}



// FUNCTION 142beb6d0 FUN_142beb6d0 body=295 status=ok
// SIG undefined FUN_142beb6d0(void)

void FUN_142beb6d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(*param_2 + 0x1d8);
  lVar4 = (ulonglong)*(ushort *)(*param_2 + 800) * 0x60;
  pcVar2 = (char *)((ulonglong)*(ushort *)(param_1[9] + 0x52) + *(longlong *)(lVar4 + 0x38 + lVar1))
  ;
  piVar3 = (int *)((ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                  *(longlong *)(lVar4 + 0x38 + lVar1));
  lVar1 = UBTComposite_SimpleParallel::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1[9] + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1[9] + 0x10) + 0x88) +
       (longlong)*(int *)(lVar1 + 0x90) * 8) != lVar1 + 0x88)) {
    if ((int)*pcVar2 == (uint)*(byte *)((longlong)param_1 + 0x59)) goto LAB_142beb778;
  }
  else if (*pcVar2 != -1) goto LAB_142beb778;
  *(char *)(piVar3 + 1) = (char)param_1[0xd];
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  piVar3[2] = *(int *)(lVar1 + 0x790);
LAB_142beb778:
  bVar5 = false;
  if (*(char *)((longlong)param_1 + 0x6c) == '\0') {
    *(char *)(piVar3 + 1) = (char)piVar3[1] + -1;
    bVar5 = (char)piVar3[1] != '\0';
  }
  else {
    if (((int)param_2[6] != *piVar3) &&
       ((*(float *)(param_1 + 0xe) <= 0.0 && *(float *)(param_1 + 0xe) != 0.0 ||
        (lVar1 = (**(code **)(*param_1 + 0x148))(param_1),
        *(float *)(lVar1 + 0x790) <= (float)piVar3[2] + *(float *)(param_1 + 0xe) &&
        (float)piVar3[2] + *(float *)(param_1 + 0xe) != *(float *)(lVar1 + 0x790))))) {
      bVar5 = true;
    }
    *piVar3 = (int)param_2[6];
  }
  if (bVar5) {
    (**(code **)(*(longlong *)param_1[9] + 0x2d0))
              ((longlong *)param_1[9],param_2,*(undefined1 *)((longlong)param_1 + 0x59));
  }
  return;
}



// FUNCTION 142beb800 OnNodeActivation body=106 status=ok
// SIG undefined OnNodeActivation(void)

void UBTDecorator_TimeLimit::OnNodeActivation(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_142bbb940(*param_2,param_1);
  lVar3 = FUN_142bbe120(*param_2,param_1,uVar2);
  if (lVar3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
    }
    *(int *)(lVar3 + 4) = (int)param_1[0xd];
    *(undefined4 *)(lVar3 + 8) = 0;
  }
  return;
}



// FUNCTION 142beb8b0 FUN_142beb8b0 body=96 status=ok
// SIG undefined FUN_142beb8b0(void)

void FUN_142beb8b0(longlong param_1,longlong *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  
  if (param_3 != 2) {
    if ((*(longlong *)(*param_2 + 0x180) == 0) || (cVar1 = FUN_142be03b0(), cVar1 == '\0')) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    if (bVar2 != ((byte)(*(uint *)(param_1 + 0x60) >> 7) & 1)) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x2d0))
                (*(longlong **)(param_1 + 0x48),param_2,*(undefined1 *)(param_1 + 0x59));
    }
  }
  return;
}



// FUNCTION 142beb910 FUN_142beb910 body=79 status=ok
// SIG undefined FUN_142beb910(void)

void FUN_142beb910(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar3 = *param_2;
  puVar5 = (undefined4 *)
           ((ulonglong)*(ushort *)(param_1 + 0x52) +
           *(longlong *)
            ((ulonglong)*(ushort *)(lVar3 + 800) * 0x60 + 0x38 + *(longlong *)(lVar3 + 0x1d8)));
  lVar4 = *(longlong *)(lVar3 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(lVar3);
  }
  uVar2 = *(undefined4 *)(lVar4 + 0x790);
  pbVar1 = (byte *)(puVar5 + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  *puVar5 = uVar2;
  return;
}



// FUNCTION 142beb9d0 OnPostLoad body=55 status=ok
// SIG undefined OnPostLoad(void)

void FEnvTraceData::OnPostLoad(int *param_1)

{
  undefined1 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = UEngineTypes::ConvertToCollisionChannel((char)param_1[10]);
    *(undefined1 *)((longlong)param_1 + 0x29) = uVar1;
  }
  else {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x29);
  }
  uVar1 = UEngineTypes::ConvertToTraceType(uVar1);
  *(undefined1 *)(param_1 + 10) = uVar1;
  *param_1 = 1;
  return;
}



// FUNCTION 142beba10 FUN_142beba10 body=102 status=ok
// SIG undefined FUN_142beba10(void)

void FUN_142beba10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((param_2 == *(longlong *)(param_1 + 8)) &&
     (plVar1 = (longlong *)(param_1 + -0x8b0), (*(uint *)(param_1 + -0x8a8) >> 4 & 1) == 0)) {
    (**(code **)(*plVar1 + 0x5e8))(plVar1);
    do {
      FUN_142be9020(plVar1);
      if (0.0 < *(float *)(param_1 + 0x80)) {
        return;
      }
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        return;
      }
    } while (*(int *)(*(longlong *)(param_1 + 0xd0) + 0x28) == 0);
  }
  return;
}



// FUNCTION 142beba80 FUN_142beba80 body=550 status=ok
// SIG undefined FUN_142beba80(void)

void FUN_142beba80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(int *)(*param_2 + 0x28) == 3) {
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar6 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142bebae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 8))(plVar6,1);
          return;
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)FWeakObjectPtr::Get(*param_2 + 0x34);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = FUN_1428dfc70();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar7 = FUN_1429d7ab0();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          plVar6 = (longlong *)plVar6[0x92];
        }
        if (plVar6 != (longlong *)0x0) {
          uVar8 = UProgressBar::GetPrivateStaticClass();
          lVar7 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar8);
          if (lVar7 != 0) {
            uVar5 = FUN_142bbb940(lVar7,param_1);
            puVar9 = (undefined4 *)FUN_142bbe120(lVar7,param_1,uVar5);
            lVar3 = *param_2;
            if (*(int *)(lVar3 + 8) < 1) {
              if ((*(char *)(param_1 + 0xf0) != '\0') && (*(longlong *)(lVar7 + 0x180) != 0)) {
                FUN_142bb5c50(*(longlong *)(lVar7 + 0x180),*(undefined1 *)(param_1 + 0x90));
              }
            }
            else {
              uVar8 = *(undefined8 *)(lVar7 + 0x180);
              if (*(longlong *)(lVar3 + 0x10) != 0) {
                plVar10 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
                plVar6 = *(longlong **)(lVar3 + 0x10);
                for (plVar11 = plVar6; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[6])
                {
                  if (plVar11 == plVar10) goto LAB_142bebc03;
                }
              }
              plVar6 = (longlong *)0x0;
LAB_142bebc03:
              plVar11 = (longlong *)plVar6[0x1f];
              if (plVar11 == (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x368))(plVar6);
                plVar11 = (longlong *)plVar6[0x1f];
              }
              (**(code **)(*plVar11 + 0x280))
                        (plVar11,param_1 + 0x70,uVar8,
                         ((longlong)(*(int *)(*(longlong *)*param_2 + 4) * 2) >> 1) +
                         ((longlong *)*param_2)[3]);
            }
            *puVar9 = 0xffffffff;
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
            return;
          }
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return;
}



// FUNCTION 142bebcb0 FUN_142bebcb0 body=553 status=ok
// SIG undefined FUN_142bebcb0(void)

void FUN_142bebcb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  if (*(int *)(*param_2 + 0x28) == 3) {
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar7 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142bebd1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 8))(plVar7,1);
          return;
        }
      }
    }
  }
  else {
    plVar7 = (longlong *)FWeakObjectPtr::Get(*param_2 + 0x34);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_1428dfc70();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar8 = FUN_1429d7ab0();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          plVar7 = (longlong *)plVar7[0x92];
        }
        if (plVar7 != (longlong *)0x0) {
          uVar9 = UProgressBar::GetPrivateStaticClass();
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar9);
          if (plVar7 != (longlong *)0x0) {
            lVar8 = *param_2;
            cVar6 = 0 < *(int *)(lVar8 + 8);
            if (0 < *(int *)(lVar8 + 8)) {
              lVar4 = plVar7[0x30];
              if (*(longlong *)(lVar8 + 0x10) != 0) {
                plVar10 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
                plVar12 = *(longlong **)(lVar8 + 0x10);
                for (plVar11 = plVar12; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[6]
                    ) {
                  if (plVar11 == plVar10) goto LAB_142bebe20;
                }
              }
              plVar12 = (longlong *)0x0;
LAB_142bebe20:
              plVar11 = (longlong *)plVar12[0x1f];
              if (plVar11 == (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x368))(plVar12);
                plVar11 = (longlong *)plVar12[0x1f];
              }
              cVar6 = (**(code **)(*plVar11 + 0x280))
                                (plVar11,param_1 + 0x70,lVar4,
                                 ((longlong)(*(int *)(*(longlong *)*param_2 + 4) * 2) >> 1) +
                                 ((longlong *)*param_2)[3]);
            }
            uVar3 = *(undefined4 *)(*param_2 + 0x30);
            local_28 = DAT_146b2c648;
            FWeakObjectPtr::operator=(local_20,param_1);
            local_14 = cVar6 != '\0';
            local_13 = 0;
            local_18 = uVar3;
            (**(code **)(*plVar7 + 0x438))(plVar7,&local_28);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
            return;
          }
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return;
}



// FUNCTION 142bebee0 FUN_142bebee0 body=579 status=ok
// SIG undefined FUN_142bebee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bebee0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uStack_60 = (longlong *)param_2[1];
  local_68 = *param_2;
  plVar8 = (longlong *)(param_1 + 0x38);
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != plVar8) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    lVar4 = *plVar8;
    plVar9 = *(longlong **)(param_1 + 0x40);
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_30 = (undefined4)uStack_60;
    uStack_2c = uStack_60._4_4_;
    *(undefined4 *)plVar8 = (undefined4)local_68;
    *(undefined4 *)(param_1 + 0x3c) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_60;
    *(undefined4 *)(param_1 + 0x44) = uStack_60._4_4_;
    local_68 = lVar4;
    uStack_60 = plVar9;
  }
  plVar8 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_60 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*param_2 + 0x2c);
  local_40 = (undefined1)*(undefined4 *)(*param_2 + 0x28);
  local_48 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x68,&local_48);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x48) != &local_58) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&plStack_50);
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_50 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar6 = FUN_142c42420();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar8 = *(longlong **)(lVar4 + 0xd0);
      iVar2 = *(int *)(lVar4 + 0xd8);
      for (plVar9 = plVar8; plVar9 != plVar8 + iVar2; plVar9 = plVar9 + 1) {
        if (*plVar9 == param_1) {
          iVar7 = (int)((longlong)plVar9 - (longlong)plVar8 >> 3);
          if (iVar7 != -1) {
            iVar5 = (iVar2 - iVar7) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar8 + iVar7,plVar8 + (iVar2 - iVar5),(longlong)iVar5 << 3);
            }
            *(int *)(lVar4 + 0xd8) = *(int *)(lVar4 + 0xd8) + -1;
          }
          break;
        }
      }
    }
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142bec130 FUN_142bec130 body=124 status=ok
// SIG undefined FUN_142bec130(void)

void FUN_142bec130(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142343b00();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_142c2de20();
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
      *(longlong *)(param_1 + 0x188) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  return;
}



// FUNCTION 142bec1b0 FUN_142bec1b0 body=87 status=ok
// SIG undefined FUN_142bec1b0(void)

void FUN_142bec1b0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar2 = *(uint *)(param_1 + 0x90) >> 8;
  if ((uVar2 & 3) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((lVar1 != 0) && ((uVar2 & 2) != 0)) {
      FUN_142c3bd30(param_1,lVar1,*(undefined8 *)(lVar1 + 0x488));
      return;
    }
    if ((uVar2 & 1) != 0) {
      FUN_142c3bcf0(param_1,*(undefined8 *)(param_1 + 0x78));
      return;
    }
  }
  return;
}



// FUNCTION 142bec210 OnSubtreeDeactivated body=86 status=ok
// SIG undefined OnSubtreeDeactivated(void)

void UBTTask_RunBehavior::OnSubtreeDeactivated
               (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_142bbb940(param_2,param_1);
  uVar1 = FUN_142bbe120(param_2,param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000142bec25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1,param_2,uVar1,param_3);
  return;
}



// FUNCTION 142bec270 OnTaskFinished body=61 status=ok
// SIG undefined OnTaskFinished(void)

void UBTTask_BlueprintBase::OnTaskFinished
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_4 != 3) {
    FUN_142bb3390(param_2,param_1);
  }
  return;
}



// FUNCTION 142bec2d0 FUN_142bec2d0 body=137 status=ok
// SIG undefined FUN_142bec2d0(void)

void FUN_142bec2d0(longlong param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x20) = 0;
  if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
    if ((*(longlong *)(param_2 + 0x180) != 0) && (*(longlong *)(param_3 + 8) != 0)) {
      FUN_142bcd200(*(longlong *)(param_2 + 0x180),*(undefined1 *)(param_1 + 0x90),
                    *(undefined8 *)(param_3 + 8));
    }
    *(undefined8 *)(param_3 + 8) = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142bec360 FUN_142bec360 body=635 status=ok
// SIG undefined FUN_142bec360(void)

void FUN_142bec360(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *local_38;
  uint local_30;
  undefined4 local_2c;
  longlong local_28;
  longlong *local_20;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    uVar8 = *(uint *)(param_1 + 0x40);
    local_38 = (longlong *)0x0;
    local_30 = uVar8;
    if (uVar8 == 0) {
      local_2c = 0;
      iVar9 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,uVar8,0);
      lVar6 = lVar6 - (longlong)local_38;
      plVar7 = local_38;
      do {
        *plVar7 = *(longlong *)(lVar6 + (longlong)plVar7);
        lVar10 = *(longlong *)(lVar6 + 8 + (longlong)plVar7);
        plVar7[1] = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        plVar7 = plVar7 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      iVar9 = *(int *)(param_1 + 0x40);
    }
    iVar4 = *(int *)(param_1 + 0x44);
    if (iVar4 < 0) {
      if (iVar9 != 0) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        do {
          plVar2 = (longlong *)*plVar7;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar2 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          plVar7 = plVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar4 = *(int *)(param_1 + 0x44);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (iVar4 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x38,0);
      }
    }
    else {
      if (iVar9 != 0) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
        do {
          plVar2 = (longlong *)*plVar7;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar2 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
          plVar7 = plVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (0 < (int)local_30) {
      uVar11 = (ulonglong)local_30;
      plVar7 = local_38;
      do {
        if (*(int *)(*plVar7 + 0x28) == 0) {
          *(undefined4 *)(*plVar7 + 0x28) = 2;
          plVar2 = (longlong *)plVar7[1];
          lVar6 = *plVar7;
          lVar10 = lVar6;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            lVar10 = *plVar7;
          }
          if (((*(int *)(lVar10 + 0x68) != 0) && (*(longlong **)(lVar10 + 0x60) != (longlong *)0x0))
             && (cVar3 = (**(code **)(**(longlong **)(lVar10 + 0x60) + 0x18))(), cVar3 != '\0')) {
            plVar5 = (longlong *)0x0;
            if (*(int *)(lVar10 + 0x68) != 0) {
              plVar5 = *(longlong **)(lVar10 + 0x60);
            }
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            local_28 = lVar6;
            local_20 = plVar2;
            (**(code **)(*plVar5 + 0x40))(plVar5,&local_28);
          }
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar2 + 1;
            lVar6 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        }
        plVar7 = plVar7 + 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((*(int *)(param_1 + 0xdc) < 0) && (*(int *)(param_1 + 0xdc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xd0,0);
    return;
  }
  return;
}



// FUNCTION 142bec5e0 FUN_142bec5e0 body=1096 status=ok
// SIG undefined FUN_142bec5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_142bec5e0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 uVar12;
  undefined4 local_res10;
  char cStackX_14;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78 [3];
  longlong local_60;
  uint local_58;
  undefined4 local_54;
  longlong *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar4 = *(longlong **)(param_2 + 0x188);
  lVar8 = *(longlong *)(param_2 + 0x180);
  uVar12 = 1;
  if ((plVar4 != (longlong *)0x0) && (lVar8 != 0)) {
    FAIMoveRequest::FAIMoveRequest(local_78);
    if (param_1[0x14] != 0) {
      lVar6 = UNavigationQueryFilter::GetPrivateStaticClass();
      local_60 = param_1[0x14];
      for (lVar9 = local_60; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar6) {
          if (local_60 != 0) goto LAB_142bec680;
          break;
        }
      }
    }
    local_60 = plVar4[0xaf];
LAB_142bec680:
    uVar3 = *(uint *)((longlong)param_1 + 0xac);
    local_54 = (undefined4)param_1[0x13];
    local_58 = ((((((uVar3 >> 1 & 1) * 2 | uVar3 >> 6 & 1) * 2 | uVar3 >> 5 & 1) * 2 |
                 uVar3 >> 4 & 1) * 2 | uVar3 >> 2 & 1) * 2 | uVar3 >> 9 & 1) << 2 |
               local_58 & 0xffffff03;
    if (param_1[0x11] != 0) {
      lVar7 = UBlackboardKeyType::GetPrivateStaticClass();
      lVar9 = param_1[0x11];
      for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar7) goto LAB_142bec741;
      }
    }
    lVar9 = 0;
LAB_142bec741:
    lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if (lVar9 == lVar6) {
      lVar8 = FUN_140725690(lVar8,(char)param_1[0x12]);
      if (lVar8 != 0) {
        lVar9 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if ((*(byte *)((longlong)param_1 + 0xac) & 8) == 0) {
            lVar8 = *(longlong *)(lVar8 + 0x168);
            if (lVar8 == 0) {
              local_90 = DAT_1468b5d98;
              puVar10 = &local_98;
              local_98 = _DAT_1468b5d90;
            }
            else {
              local_38 = *(undefined4 *)(lVar8 + 0x220);
              uStack_34 = *(undefined4 *)(lVar8 + 0x224);
              uStack_30 = *(undefined4 *)(lVar8 + 0x228);
              uStack_2c = *(undefined4 *)(lVar8 + 0x22c);
              puVar10 = (undefined8 *)&local_b8;
              local_b8 = local_38;
              local_b0 = uStack_30;
              uStack_b4 = uStack_34;
            }
            local_8c = *puVar10;
            local_84 = *(undefined4 *)(puVar10 + 1);
            FAIMoveRequest::SetGoalLocation(local_78,&local_8c);
          }
          else {
            FAIMoveRequest::SetGoalActor(local_78,lVar8);
          }
        }
      }
    }
    else {
      if (param_1[0x11] != 0) {
        lVar7 = UBlackboardKeyType::GetPrivateStaticClass();
        lVar9 = param_1[0x11];
        for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
          if (lVar6 == lVar7) goto LAB_142bec861;
        }
      }
      lVar9 = 0;
LAB_142bec861:
      lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
      if (lVar9 == lVar6) {
        FUN_140725750(lVar8,&local_a8,(char)param_1[0x12]);
        FAIMoveRequest::SetGoalLocation(local_78,&local_a8);
        *(undefined8 *)(param_3 + 4) = local_a8;
        param_3[6] = local_a0;
      }
    }
    if (((local_58 & 1) == 0) || (((local_58 & 2) != 0 && (local_78[0] == 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar11 = (longlong *)FUN_142c32730();
      lVar8 = plVar11[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar11 + 0x368))(plVar11);
        lVar8 = plVar11[0x1f];
      }
      if (*(char *)(lVar8 + 0x8f) == '\0') {
        (**(code **)(*plVar4 + 0x850))(plVar4,&local_res10,local_78,0);
        if (cStackX_14 == '\x02') {
          *param_3 = local_res10;
          FUN_142bce900(param_1,param_2,DAT_146b2c608,local_res10);
          FUN_142bce780(param_1,param_2,DAT_146b2c640);
          uVar12 = 3;
        }
        else {
          uVar12 = 1;
          if (cStackX_14 == '\x01') {
            uVar12 = 0;
          }
        }
      }
      else {
        lVar8 = FWeakObjectPtr::Get(param_3 + 7);
        lVar9 = (**(code **)(*param_1 + 0x2f0))(param_1,param_2,lVar8,local_78);
        if (lVar9 != 0) {
          *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0xfd;
          if (lVar8 == 0) {
            FWeakObjectPtr::operator=(param_3 + 7,lVar9);
            FUN_142b7b2b0(lVar9);
          }
          else if (*(char *)(lVar9 + 0x39) == '\x03') {
            FUN_142c1d900(lVar9);
          }
          *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) | 2;
          if (*(char *)(lVar9 + 0x39) == '\x04') {
            uVar12 = *(char *)(lVar9 + 0x108) != '\0';
          }
          else {
            uVar12 = 3;
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return uVar12;
}



// FUNCTION 142beca30 FUN_142beca30 body=184 status=ok
// SIG undefined FUN_142beca30(void)

void FUN_142beca30(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint local_10;
  
  if ((param_2 < 0) || ((int)param_1[1] <= param_2)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (bVar4) {
    iVar5 = param_2;
  }
  uVar1 = *(undefined4 *)(*param_1 + (longlong)iVar5 * 0xc);
  uVar2 = *(undefined4 *)(*param_1 + 4 + (longlong)iVar5 * 0xc);
  *(undefined4 *)(param_1 + 1) = 0;
  iVar5 = 1;
  if (*(int *)((longlong)param_1 + 0xc) != 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,1);
    iVar5 = *(int *)((longlong)param_1 + 0xc);
    iVar6 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (iVar5 < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
  }
  lVar3 = *param_1;
  *(ulonglong *)(lVar3 + (longlong)iVar6 * 0xc) = CONCAT44(uVar2,uVar1) & 0x7fffffffffffffff;
  *(uint *)(lVar3 + 8 + (longlong)iVar6 * 0xc) = local_10 & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}



// FUNCTION 142becaf0 PostInitProperties body=129 status=ok
// SIG undefined PostInitProperties(void)

void UBTDecorator_BlueprintBase::PostInitProperties(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x98);
  }
  else {
    uVar2 = GetPrivateStaticClass();
    FUN_142bb6220(param_1,uVar2,param_1 + 0x88);
    bVar1 = FUN_142bbfac0(param_1,uVar2);
    uVar3 = *(uint *)(param_1 + 0x98) & 0xfffffffb | (uint)bVar1 * 4;
    *(uint *)(param_1 + 0x98) = uVar3;
  }
  if (((uVar3 & 0x6000) != 0) || ((uVar3 & 4) != 0)) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 3;
  }
  return;
}



// FUNCTION 142becb80 PostLoad body=49 status=ok
// SIG undefined PostLoad(void)

void UBTTask_RotateToFaceBBEntry::PostLoad(longlong param_1)

{
  float fVar1;
  
  FUN_1417931d0();
  fVar1 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x98) * 0.017453292);
  *(float *)(param_1 + 0x9c) = fVar1;
  return;
}



// FUNCTION 142becbc0 PostInitProperties body=28 status=ok
// SIG undefined PostInitProperties(void)

void UEnvQuery::PostInitProperties(longlong param_1)

{
  FUN_1417931d0();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142becbe0 FUN_142becbe0 body=31 status=ok
// SIG undefined FUN_142becbe0(void)

void FUN_142becbe0(longlong param_1)

{
  FUN_1417931d0();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x80);
  return;
}



// FUNCTION 142becc00 FUN_142becc00 body=1270 status=ok
// SIG undefined FUN_142becc00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142becc00(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
  undefined1 auStack_148 [32];
  int local_128;
  uint uStack_124;
  uint *puStack_120;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100 [2];
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  int iStack_d8;
  uint uStack_d4;
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_e8 = param_1;
  FUN_1426a4710();
  uVar8 = FUN_1429028f0();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,uVar8);
  if (lVar9 != 0) {
    *(byte *)(lVar9 + 0x24c) =
         *(byte *)(lVar9 + 0x24c) ^
         (~((char)(*(uint *)((longlong)param_1 + 0x93c) >> 3) << 6) ^ *(byte *)(lVar9 + 0x24c)) &
         0x40;
  }
  if (0 < (int)param_1[0x119]) {
    plVar18 = param_1 + 0x118;
    lVar9 = *plVar18;
    lVar14 = (longlong)(int)param_1[0x119] * 0x10 + lVar9;
    for (; lVar9 != lVar14; lVar9 = lVar9 + 0x10) {
      if (2 < *(byte *)(lVar9 + 8)) {
        *(undefined1 *)(lVar9 + 8) = 0;
      }
    }
    FAIDynamicParam::GenerateConfigurableParamsFromNamedValues(param_1,param_1 + 0x11a,plVar18);
    *(undefined4 *)(param_1 + 0x119) = 0;
    if (*(int *)((longlong)param_1 + 0x8cc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar18,0);
    }
  }
  if (param_1[0x117] == 0) {
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x11c,0);
  }
  else {
    FUN_142bee9f0();
    lVar9 = param_1[0x117];
    local_88[0] = 0;
    plVar18 = (longlong *)(lVar9 + 0x48);
    local_88[1] = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(local_88,param_1 + 0x11c);
    local_f8 = param_1[0x124];
    if (local_f8 == 0) {
      _guard_xfg_dispatch_icall_nop(local_50,param_1 + 0x123,4);
    }
    if (local_48 != 0) {
      FMemory::Free();
      local_f8 = param_1[0x124];
    }
    param_1[0x124] = 0;
    plVar2 = param_1 + 0x11c;
    local_40 = (undefined4)param_1[0x125];
    *(undefined4 *)(param_1 + 0x125) = 0;
    local_48 = local_f8;
    if ((int)param_1[0x11d] - *(int *)((longlong)param_1 + 0x914) <
        *(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x7c)) {
      TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Reserve(plVar2);
    }
    uVar3 = *(uint *)(lVar9 + 0x70);
    puStack_120 = (uint *)(lVar9 + 0x58);
    uStack_124 = 1;
    local_128 = 0;
    uStack_114 = 0;
    iStack_110 = 0;
    if (uVar3 != 0) {
      puVar17 = *(uint **)(lVar9 + 0x68);
      if (*(uint **)(lVar9 + 0x68) == (uint *)0x0) {
        puVar17 = puStack_120;
      }
      uVar4 = *puVar17;
      iStack_110 = 0;
      local_128 = 0;
      while (uVar4 == 0) {
        lVar14 = (longlong)local_128;
        iStack_110 = iStack_110 + 0x20;
        iVar11 = local_128 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
        local_128 = iVar11;
        if (bVar6) goto LAB_142bece61;
        uVar4 = puVar17[lVar14 + 1];
      }
      uStack_124 = -uVar4 & uVar4;
      iVar11 = 0x1f;
      if (uStack_124 != 0) {
        for (; uStack_124 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_124 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_114 = (iStack_110 - iVar11) + 0x1f;
      if ((int)uVar3 < (int)uStack_114) {
LAB_142bece61:
        uStack_114 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar9 + 0x70);
    uStack_c8 = CONCAT44(uStack_114,0xffffffff);
    local_c0 = CONCAT44(uStack_10c,iStack_110);
    uStack_b0 = CONCAT44(uStack_124,local_128);
    local_118 = -1 << ((byte)uVar4 & 0x1f);
    uVar16 = uVar4 & 0xffffffe0;
    iStack_d8 = local_128;
    uStack_d4 = uStack_124;
    uStack_114 = uVar4;
    if (uVar4 != uVar3) {
      puVar17 = *(uint **)(lVar9 + 0x68);
      if (*(uint **)(lVar9 + 0x68) == (uint *)0x0) {
        puVar17 = puStack_120;
      }
      uVar13 = puVar17[(int)uVar4 >> 5] & local_118;
      iVar11 = (int)uVar4 >> 5;
      while (uVar13 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_142becf34;
        uVar13 = puVar17[(longlong)iVar11 + 1];
        local_118 = 0xffffffff;
        iVar11 = iVar11 + 1;
      }
      uVar13 = -uVar13 & uVar13;
      iVar11 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_114 = (uVar16 - iVar11) + 0x1f;
      if ((int)uVar3 < (int)uStack_114) {
LAB_142becf34:
        uStack_114 = uVar3;
      }
    }
    uVar3 = uStack_114;
    local_d0 = puStack_120;
    local_b8 = plVar18;
    puStack_a8 = puStack_120;
    uStack_a0 = uStack_c8;
    uStack_98 = local_c0;
    local_e0 = plVar18;
    while( true ) {
      param_1 = local_e8;
      if (((uStack_c8._4_4_ == uVar3) && (local_d0 == (uint *)(lVar9 + 0x58))) &&
         (local_e0 == plVar18)) break;
      lVar5 = *local_e0;
      lVar14 = (longlong)(int)uStack_c8._4_4_ * 3 + 1;
      uVar8 = *(undefined8 *)(lVar5 + lVar14 * 8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(local_88,&local_108,uVar8);
      if ((local_108 == -1) || (lVar12 = local_88[0] + (longlong)local_108 * 0x18, lVar12 == 0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar12 + 8);
      }
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar2,&local_104,uVar8);
      if ((local_104 == -1) || (lVar12 = *plVar2 + (longlong)local_104 * 0x18, lVar12 == 0)) {
        local_f0 = lVar5 + lVar14 * 8;
        FUN_142bcfe70(plVar2,local_100,&local_f0,0);
        lVar12 = *plVar2 + (longlong)local_100[0] * 0x18;
      }
      *(undefined8 *)(lVar12 + 8) = uVar15;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d8);
    }
    local_40 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_88);
  }
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if (lVar9 != 0) {
    cVar7 = UWorld::IsGameWorld();
    if ((cVar7 == '\0') || ((*(byte *)((longlong)param_1 + 0x93c) & 0x10) != 0)) {
      bVar10 = 2;
      goto LAB_142bed0b1;
    }
  }
  bVar10 = 0;
LAB_142bed0b1:
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd | bVar10;
  if (bVar10 == 0) {
    if (param_1[0x99] != 0) {
      pbVar1 = (byte *)(param_1[0x99] + 0x3c);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    if (param_1[0x98] != 0) {
      pbVar1 = (byte *)(param_1[0x98] + 0x3c);
      *pbVar1 = *pbVar1 & 0xfd;
    }
  }
  return;
}



// FUNCTION 142bed100 PostLoad body=95 status=ok
// SIG undefined PostLoad(void)

void UBTDecorator_BlueprintBase::PostLoad(longlong param_1)

{
  undefined8 uVar1;
  
  UObject::PostLoad();
  if ((*(char *)(param_1 + 100) != '\0') && ((*(byte *)(param_1 + 0x98) & 4) != 0)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x84)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x78,0);
    }
    uVar1 = GetPrivateStaticClass();
    FUN_142bb60e0(param_1,uVar1,param_1 + 0x78);
  }
  return;
}



// FUNCTION 142bed160 PostLoad body=38 status=ok
// SIG undefined PostLoad(void)

char UBTDecorator_Cooldown::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfb;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | -(*(char *)(param_1 + 100) != '\0') & 4U;
  return -*(char *)(param_1 + 100);
}



// FUNCTION 142bed190 PostLoad body=95 status=ok
// SIG undefined PostLoad(void)

void UBTTask_MoveDirectlyToward::PostLoad(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  UObject::PostLoad();
  uVar2 = *(uint *)(param_1 + 0xac);
  if ((uVar2 >> 8 & 1) != 0) {
    uVar2 = (uVar2 & 0xfffffeff) >> 2 & 0x20 | uVar2 & 0xfffffe9f;
    *(uint *)(param_1 + 0xac) = uVar2;
  }
  uVar1 = *(uint *)(param_1 + 0xb0);
  if ((uVar1 & 4) == 0) {
    *(uint *)(param_1 + 0xac) = (uVar1 * 8 ^ uVar2) & 0x18 ^ uVar2;
    *(uint *)(param_1 + 0xb0) = uVar1 | 4;
  }
  return;
}



// FUNCTION 142bed1f0 PostLoad body=55 status=ok
// SIG undefined PostLoad(void)

void UBTTask_MoveTo::PostLoad(longlong param_1)

{
  uint uVar1;
  
  UObject::PostLoad();
  uVar1 = *(uint *)(param_1 + 0xac);
  if ((uVar1 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0xac) = (uVar1 & 0xfffffeff) >> 2 & 0x20 | uVar1 & 0xfffffe9f;
  }
  return;
}



// FUNCTION 142bed230 PostLoad body=49 status=ok
// SIG undefined PostLoad(void)

void UBTTask_RotateToFaceBBEntry::PostLoad(longlong param_1)

{
  float fVar1;
  
  UObject::PostLoad();
  fVar1 = ::_guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x98) * 0.017453292);
  *(float *)(param_1 + 0x9c) = fVar1;
  return;
}



// FUNCTION 142bed270 PostLoad body=592 status=ok
// SIG undefined PostLoad(void)

void UBTTask_RunEQSQuery::PostLoad(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  UObject::PostLoad();
  if (0 < *(int *)(param_1 + 0xa8)) {
    FAIDynamicParam::GenerateConfigurableParamsFromNamedValues
              (param_1,param_1 + 0xb0,param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xa0,0);
    }
  }
  if ((*(longlong *)(param_1 + 0xf8) == 0) && ((*(byte *)(param_1 + 0x13c) & 1) == 0)) {
    plVar2 = (longlong *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x98);
    if (plVar2 != (longlong *)(param_1 + 0xb0)) {
      iVar8 = *(int *)(param_1 + 0x108);
      if (iVar8 != 0) {
        plVar6 = (longlong *)(*plVar2 + 0x10);
        do {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 7;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = *(int *)(param_1 + 0xb8);
      lVar4 = *(longlong *)(param_1 + 0xb0);
      *(int *)(param_1 + 0x108) = iVar8;
      if ((iVar8 == 0) && (*(int *)(param_1 + 0x10c) == 0)) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar2,iVar8);
        puVar10 = (undefined8 *)*plVar2;
        if (iVar8 != 0) {
          puVar9 = (undefined8 *)(lVar4 + 0x20);
          puVar7 = (undefined4 *)((longlong)puVar10 + 0x1c);
          do {
            *puVar10 = puVar9[-4];
            *(undefined1 *)(puVar7 + -5) = *(undefined1 *)(puVar9 + -3);
            puVar7[-4] = *(undefined4 *)((longlong)puVar9 + -0x14);
            *(undefined8 *)(puVar7 + -3) = 0;
            iVar3 = *(int *)(puVar9 + -1);
            pvVar5 = (void *)puVar9[-2];
            puVar7[-1] = iVar3;
            if (iVar3 == 0) {
              *puVar7 = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (puVar7 + -3,iVar3,0);
              ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar7 + -3),pvVar5,(longlong)iVar3 << 3);
            }
            puVar10 = puVar10 + 7;
            *(undefined8 *)(puVar7 + 1) = *puVar9;
            *(undefined8 *)(puVar7 + 3) = puVar9[1];
            *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar9 + 2);
            puVar1 = (uint *)((longlong)puVar9 + 0x14);
            puVar9 = puVar9 + 7;
            puVar7[6] = puVar7[6] ^ (*puVar1 ^ puVar7[6]) & 1;
            puVar7 = puVar7 + 0xe;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
    puVar10 = (undefined8 *)(param_1 + 0x110);
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_1 + 0xc0);
    if (puVar10 != (undefined8 *)(param_1 + 200)) {
      iVar8 = *(int *)(param_1 + 0xd0);
      pvVar5 = *(void **)(param_1 + 200);
      *(int *)(param_1 + 0x118) = iVar8;
      if ((iVar8 == 0) && (*(int *)(param_1 + 0x11c) == 0)) {
        *(undefined4 *)(param_1 + 0x11c) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar10,iVar8);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar5,(longlong)iVar8 << 3);
      }
    }
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x134) =
         *(uint *)(param_1 + 0x134) ^ (*(uint *)(param_1 + 0xec) ^ *(uint *)(param_1 + 0x134)) & 1;
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffe;
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | *(byte *)(param_1 + 0xf0) & 1;
  }
  return;
}



// FUNCTION 142bed4c0 FUN_142bed4c0 body=35 status=ok
// SIG undefined FUN_142bed4c0(void)

void FUN_142bed4c0(longlong param_1)

{
  UObject::PostLoad();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  FUN_142bee9f0(param_1);
  return;
}



// FUNCTION 142bed4f0 FUN_142bed4f0 body=40 status=ok
// SIG undefined FUN_142bed4f0(void)

void FUN_142bed4f0(longlong *param_1)

{
  UObject::PostLoad();
  FUN_142beed20(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142bed511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1);
  return;
}



// FUNCTION 142bed520 PostLoad body=90 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UEnvQueryManager::PostLoad(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  UObject::PostLoad();
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar4 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar4;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18);
    *puVar1 = *puVar1 | 0x20000000;
    return;
  }
  _DAT_00000008 = _DAT_00000008 | 0x20000000;
  return;
}



// FUNCTION 142bed580 PostLoad body=27 status=ok
// SIG undefined PostLoad(void)

void UNavArea::PostLoad(undefined8 param_1)

{
  UObject::PostLoad();
  FUN_142beed20(param_1);
  return;
}



// FUNCTION 142bed5a0 FUN_142bed5a0 body=265 status=ok
// SIG undefined FUN_142bed5a0(void)

undefined8 FUN_142bed5a0(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong local_res10;
  int local_res20 [2];
  ulonglong *local_18;
  undefined8 *local_10;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    uVar1 = UEnvQueryContext_Item::GetPrivateStaticClass();
    if (local_res10 != uVar1) {
      TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xc0,local_res20);
      puVar2 = (undefined8 *)0x0;
      if (local_res20[0] != -1) {
        puVar2 = (undefined8 *)((longlong)local_res20[0] * 0x30 + *(longlong *)(param_1 + 0xc0));
      }
      puVar5 = puVar2 + 1;
      if (puVar2 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 == (undefined8 *)0x0) {
        uVar3 = UBehaviorTreeManager::GetCurrent(*(undefined8 *)(param_1 + 0x58));
        plVar4 = (longlong *)FUN_142bedf60(uVar3,local_res10);
        (**(code **)(*plVar4 + 0x278))(plVar4,param_1,param_3);
        local_18 = &local_res10;
        local_10 = param_3;
        TSet<TTuple<UClass_*,FEnvQueryContextData>,TDefaultMapHashableKeyFuncs<UClass_*,FEnvQueryContextData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_*_const_&,FEnvQueryContextData_const_&>_>
                  (param_1 + 0xc0,local_res20,&local_18,0);
      }
      else {
        *param_3 = *puVar5;
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar5 + 1);
        TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_3 + 2,puVar5 + 2);
      }
    }
    if (*(int *)(param_3 + 1) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bed6b0 FUN_142bed6b0 body=495 status=ok
// SIG undefined FUN_142bed6b0(void)

ulonglong FUN_142bed6b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar10 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar3 = FUN_142bed5a0(param_1,param_2,&local_38);
  if (((cVar3 != '\0') && (local_38 != (longlong *)0x0)) &&
     (plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass(), plVar6 = local_38,
     local_38 != (longlong *)0x0)) {
    while (plVar6 != plVar4) {
      plVar6 = (longlong *)plVar6[6];
      if (plVar6 == (longlong *)0x0) goto LAB_142bed87b;
    }
    plVar4 = (longlong *)UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
    plVar6 = plVar10;
    if (local_38 != (longlong *)0x0) {
      plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      for (plVar7 = local_38;
          (plVar6 = plVar10, plVar7 != (longlong *)0x0 && (plVar6 = local_38, plVar7 != plVar5));
          plVar7 = (longlong *)plVar7[6]) {
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_142bed87b;
    do {
      if (plVar6 == plVar4) {
        plVar6 = plVar10;
        if (local_38 != (longlong *)0x0) {
          plVar7 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          for (plVar4 = local_38;
              (plVar6 = plVar10, plVar4 != (longlong *)0x0 && (plVar6 = local_38, plVar4 != plVar7))
              ; plVar4 = (longlong *)plVar4[6]) {
          }
        }
        plVar4 = (longlong *)plVar6[0x1f];
        if (plVar4 == (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          plVar4 = (longlong *)plVar6[0x1f];
        }
        lVar11 = local_28;
        uVar1 = *(ushort *)(plVar4 + 5);
        if (*(int *)((longlong)param_3 + 0xc) < local_30) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,local_30);
        }
        if (0 < local_30) {
          do {
            lVar8 = (**(code **)(*plVar4 + 0x2a8))(plVar4,lVar11);
            if (lVar8 != 0) {
              iVar2 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
              }
              *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar8;
            }
            lVar11 = lVar11 + (ulonglong)uVar1;
            uVar9 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar9;
          } while ((int)uVar9 < local_30);
        }
        break;
      }
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
LAB_142bed87b:
  lVar11 = param_3[1];
  if (local_28 != 0) {
    FMemory::Free();
  }
  return (ulonglong)(0 < (int)lVar11);
}



// FUNCTION 142bed8a0 FUN_142bed8a0 body=558 status=ok
// SIG undefined FUN_142bed8a0(void)

ulonglong FUN_142bed8a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong in_RAX;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  float local_48;
  float fStack_44;
  float local_40;
  longlong *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar10 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  bVar4 = FUN_142bed5a0(param_1,param_2,&local_38);
  if (((bVar4 != 0) && (local_38 != (longlong *)0x0)) &&
     (plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass(), plVar7 = local_38,
     local_38 != (longlong *)0x0)) {
    while (plVar7 != plVar5) {
      plVar7 = (longlong *)plVar7[6];
      if (plVar7 == (longlong *)0x0) goto LAB_142bedaa8;
    }
    plVar5 = (longlong *)UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
    plVar7 = plVar10;
    if (local_38 != (longlong *)0x0) {
      plVar6 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      for (plVar8 = local_38;
          (plVar7 = plVar10, plVar8 != (longlong *)0x0 && (plVar7 = local_38, plVar8 != plVar6));
          plVar8 = (longlong *)plVar8[6]) {
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_142bedaa8;
    do {
      if (plVar7 == plVar5) {
        plVar7 = plVar10;
        if (local_38 != (longlong *)0x0) {
          plVar8 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          for (plVar5 = local_38;
              (plVar7 = plVar10, plVar5 != (longlong *)0x0 && (plVar7 = local_38, plVar5 != plVar8))
              ; plVar5 = (longlong *)plVar5[6]) {
          }
        }
        plVar5 = (longlong *)plVar7[0x1f];
        if (plVar5 == (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          plVar5 = (longlong *)plVar7[0x1f];
        }
        lVar11 = local_28;
        uVar1 = *(ushort *)(plVar5 + 5);
        if (*(int *)((longlong)param_3 + 0xc) < local_30) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(param_3,local_30);
        }
        if (0 < local_30) {
          do {
            (**(code **)(*plVar5 + 0x2a0))(plVar5,&local_48,lVar11);
            if (((local_48 != DAT_146691038) || (fStack_44 != DAT_14669103c)) ||
               (local_40 != DAT_146691040)) {
              iVar2 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
              }
              lVar3 = *param_3;
              *(ulonglong *)(lVar3 + (longlong)iVar2 * 0xc) = CONCAT44(fStack_44,local_48);
              *(float *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = local_40;
            }
            lVar11 = lVar11 + (ulonglong)uVar1;
            uVar9 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar9;
          } while ((int)uVar9 < local_30);
        }
        break;
      }
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
LAB_142bedaa8:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar4;
}



// FUNCTION 142bedad0 FUN_142bedad0 body=632 status=ok
// SIG undefined FUN_142bedad0(void)

ulonglong FUN_142bedad0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong in_RAX;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  float local_58;
  float fStack_54;
  float local_50;
  longlong *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar10 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  bVar4 = FUN_142bed5a0(param_1,param_2,&local_48);
  if (((bVar4 != 0) && (local_48 != (longlong *)0x0)) &&
     (plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass(), plVar7 = local_48,
     local_48 != (longlong *)0x0)) {
    while (plVar7 != plVar5) {
      plVar7 = (longlong *)plVar7[6];
      if (plVar7 == (longlong *)0x0) goto LAB_142bedd1f;
    }
    plVar5 = (longlong *)UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
    plVar7 = plVar10;
    if (local_48 != (longlong *)0x0) {
      plVar6 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      for (plVar8 = local_48;
          (plVar7 = plVar10, plVar8 != (longlong *)0x0 && (plVar7 = local_48, plVar8 != plVar6));
          plVar8 = (longlong *)plVar8[6]) {
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_142bedd1f;
    do {
      if (plVar7 == plVar5) {
        plVar7 = plVar10;
        if (local_48 != (longlong *)0x0) {
          plVar8 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          for (plVar5 = local_48;
              (plVar7 = plVar10, plVar5 != (longlong *)0x0 && (plVar7 = local_48, plVar5 != plVar8))
              ; plVar5 = (longlong *)plVar5[6]) {
          }
        }
        plVar5 = (longlong *)plVar7[0x1f];
        if (plVar5 == (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          plVar5 = (longlong *)plVar7[0x1f];
        }
        lVar11 = local_38;
        uVar1 = *(ushort *)(plVar5 + 5);
        if (*(int *)((longlong)param_3 + 0xc) < local_40) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(param_3,local_40);
        }
        if (0 < local_40) {
          do {
            (**(code **)(*plVar5 + 0x298))(plVar5,&local_58,lVar11);
            if (((((-DAT_146691060 < local_58) && (local_58 < DAT_146691060)) &&
                 (-DAT_146691064 < fStack_54)) &&
                ((fStack_54 < DAT_146691064 && (-DAT_146691068 < local_50)))) &&
               (local_50 < DAT_146691068)) {
              iVar2 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
              }
              lVar3 = *param_3;
              *(ulonglong *)(lVar3 + (longlong)iVar2 * 0xc) = CONCAT44(fStack_54,local_58);
              *(float *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = local_50;
            }
            lVar11 = lVar11 + (ulonglong)uVar1;
            uVar9 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar9;
          } while ((int)uVar9 < local_40);
        }
        break;
      }
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
LAB_142bedd1f:
  if (local_38 != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar4;
}



// FUNCTION 142bedd50 FUN_142bedd50 body=243 status=ok
// SIG undefined FUN_142bedd50(void)

void FUN_142bedd50(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x118))) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 0x20 + (longlong)param_2 * 0x30),
     *(int *)(param_1 + 0x168) != param_2)) {
    *(int *)(param_1 + 0x168) = param_2;
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,0);
    }
    *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xfd;
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = plVar1[0x1f];
      if (lVar2 != 0) goto LAB_142bede11;
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
    }
    if (lVar2 != 0) {
LAB_142bede11:
      *(undefined2 *)(param_1 + 0x154) = *(undefined2 *)(lVar2 + 0x28);
      return;
    }
    *(undefined2 *)(param_1 + 0x154) = 0;
  }
  return;
}



// FUNCTION 142bede50 FUN_142bede50 body=259 status=ok
// SIG undefined FUN_142bede50(void)

void FUN_142bede50(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  ushort uVar2;
  
  if (*(int *)(param_1 + 0x168) == param_4) {
    return;
  }
  if (param_4 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x118) <= param_4) {
    return;
  }
  lVar1 = 0;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(int *)(param_1 + 0x168) = param_4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) & 0xfd;
  *(longlong **)(param_1 + 0x10) = param_2;
  if (param_2 == (longlong *)0x0) {
LAB_142bedf0b:
    if (lVar1 == 0) goto LAB_142bedf14;
  }
  else {
    lVar1 = param_2[0x1f];
    if (lVar1 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar1 = param_2[0x1f];
      goto LAB_142bedf0b;
    }
  }
  uVar2 = *(ushort *)(lVar1 + 0x28);
LAB_142bedf14:
  *(ushort *)(param_1 + 0x154) = uVar2;
  if ((0 < param_3) &&
     (*(int *)(param_1 + 0x24) < (int)((uint)uVar2 * param_3 + *(int *)(param_1 + 0x20)))) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18);
  }
  return;
}



// FUNCTION 142bedf60 FUN_142bedf60 body=481 status=ok
// SIG undefined FUN_142bedf60(void)

longlong * FUN_142bedf60(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_res8;
  longlong *local_res10;
  longlong local_res18 [2];
  longlong *local_38;
  longlong **local_30;
  
  plVar8 = (longlong *)0x0;
  plVar4 = plVar8;
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
    plVar6 = param_2;
    do {
      plVar4 = param_2;
      if (plVar6 == plVar2) break;
      plVar6 = (longlong *)plVar6[6];
      plVar4 = plVar8;
    } while (plVar6 != (longlong *)0x0);
  }
  lVar5 = plVar4[3];
  local_res10 = plVar8;
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar3 = param_1 + 0x118;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                             (longlong)*(int *)(param_1 + 0x128) - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      do {
        lVar7 = (longlong)iVar1;
        if (*(longlong *)(lVar3 + lVar7 * 0x18) == lVar5) {
          if ((iVar1 != -1) && (lVar3 = lVar3 + lVar7 * 0x18, lVar3 != 0)) {
            local_res10 = *(longlong **)(lVar3 + 8);
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
      } while (iVar1 != -1);
    }
  }
  if (local_res10 == (longlong *)0x0) {
    local_res8 = 0;
    if (param_2 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_2[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*param_2 + 0x368))(param_2);
        lVar5 = param_2[0x1f];
      }
    }
    local_res10 = (longlong *)FUN_1417987a0(lVar5,param_1,local_res8,0xefffffff,0,0,0xff800000);
    iVar1 = *(int *)(param_1 + 200);
    *(int *)(param_1 + 200) = iVar1 + 1;
    if (*(int *)(param_1 + 0xcc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc0,iVar1);
    }
    *(longlong **)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar1 * 8) = local_res10;
    plVar4 = plVar8;
    if (param_2 != (longlong *)0x0) {
      plVar2 = (longlong *)UEnvQueryContext::GetPrivateStaticClass();
      plVar6 = param_2;
      do {
        plVar4 = param_2;
        if (plVar6 == plVar2) break;
        plVar6 = (longlong *)plVar6[6];
        plVar4 = plVar8;
      } while (plVar6 != (longlong *)0x0);
    }
    local_res18[0] = plVar4[3];
    local_38 = local_res18;
    local_30 = &local_res10;
    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
              ((longlong *)(param_1 + 0xe0),&local_res8,&local_38,0);
  }
  return local_res10;
}



// FUNCTION 142bee150 FUN_142bee150 body=239 status=ok
// SIG undefined FUN_142bee150(void)

longlong FUN_142bee150(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_28 [16];
  
  if (param_3 == 0) {
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 8;
    uVar1 = *(undefined8 *)(param_2 + 0x188);
    puVar3 = (undefined8 *)FName::FName(local_28,L"Behavior",1);
    uVar2 = *puVar3;
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = UAITask_MoveTo::GetPrivateStaticClass();
    param_3 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
    *(undefined8 *)(param_3 + 0x30) = uVar2;
    UAITask::InitAITask(param_3,uVar1,param_1 + 0x28);
  }
  if (param_3 != 0) {
    UAITask_MoveTo::SetUp(param_3,*(undefined8 *)(param_3 + 0x68),param_4);
  }
  return param_3;
}



// FUNCTION 142bee240 FUN_142bee240 body=191 status=ok
// SIG undefined FUN_142bee240(void)

undefined8
FUN_142bee240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c6a8) {
    _Init_thread_header(&DAT_146b2c6a8);
    if (DAT_146b2c6a8 == -1) {
      atexit((_func_5014 *)&LAB_143ebf4f0);
      _Init_thread_footer(&DAT_146b2c6a8);
    }
  }
  local_18 = 0;
  local_10 = 0;
  FUN_142bee300(param_1,param_2,param_3,param_4,&DAT_146b2c698,&local_18);
  return param_2;
}



// FUNCTION 142bee300 FUN_142bee300 body=857 status=ok
// SIG undefined FUN_142bee300(void)

longlong *
FUN_142bee300(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             longlong *param_5,longlong *param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  LARGE_INTEGER local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined2 *local_60;
  int local_58;
  undefined1 local_50 [24];
  
  uVar6 = FString::FString(local_50,param_6);
  FUN_142bda850(param_1,&local_70,*param_3,param_4,uVar6);
  plVar2 = local_68;
  lVar13 = local_70;
  uVar14 = 0;
  if (local_70 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      lVar13 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    goto LAB_142bee636;
  }
  uVar10 = *(ulonglong *)(param_1 + 0x20);
  if (uVar10 == 0) {
LAB_142bee3fc:
    uVar10 = uVar14;
  }
  else {
    lVar7 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142bee3fc;
  }
  *(ulonglong *)(lVar13 + 0x58) = uVar10;
  FWeakObjectPtr::operator=(lVar13 + 0x34,param_3[1]);
  QueryPerformanceCounter(&local_80);
  *(double *)(lVar13 + 0x158) = (double)local_80.QuadPart * DAT_1468b02f8 + 16777216.0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=(lVar13 + 0x70,param_3 + 3);
  lVar7 = local_70;
  *(undefined4 *)(lVar13 + 0x30) = *(undefined4 *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  if (((0 < (int)param_5[1]) && (0 < *(int *)(lVar13 + 0x118))) &&
     (uVar10 = uVar14, 0 < (int)param_5[1])) {
    do {
      lVar13 = *(longlong *)(uVar14 + *param_5);
      if (lVar13 == 0) {
        local_78 = *(undefined8 *)(*param_3 + 0x18);
        FName::ToString(&local_78,&local_60);
        puVar11 = &DAT_143f3eda8;
        if (local_58 != 0) {
          puVar11 = local_60;
        }
        uVar6 = FUN_141672640();
        FOutputDevice::LogfImpl
                  (uVar6,L"*** WARNING: Null AdditionalTests entry for query %s",puVar11);
        if (local_60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      else {
        plVar2 = (longlong *)(param_1 + 0xb0);
        plVar4 = (longlong *)*plVar2;
        for (plVar12 = plVar4; plVar12 != plVar4 + *(int *)(param_1 + 0xb8); plVar12 = plVar12 + 1)
        {
          if ((*plVar12 == 0) || (*(longlong *)(*plVar12 + 0x1d0) != lVar13)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            if ((plVar12 != plVar4 + *(int *)(param_1 + 0xb8)) &&
               (iVar9 = (int)((longlong)plVar12 - (longlong)plVar4 >> 3), -1 < iVar9))
            goto LAB_142bee5a0;
            break;
          }
        }
        lVar8 = FUN_1417987a0(lVar13,param_1,0,0xefffffff,0,0,0xff800000);
        *(longlong *)(lVar8 + 0x1d0) = lVar13;
        iVar9 = *(int *)(param_1 + 0xb8);
        *(int *)(param_1 + 0xb8) = iVar9 + 1;
        if (*(int *)(param_1 + 0xbc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar9);
        }
        *(longlong *)(*plVar2 + (longlong)iVar9 * 8) = lVar8;
LAB_142bee5a0:
        lVar13 = *(longlong *)(lVar7 + 0x110);
        lVar8 = *plVar2;
        iVar3 = *(int *)(lVar13 + 0x10);
        *(int *)(lVar13 + 0x10) = iVar3 + 1;
        if (*(int *)(lVar13 + 0x14) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar13 + 8,iVar3);
        }
        *(undefined8 *)(*(longlong *)(lVar13 + 8) + (longlong)iVar3 * 8) =
             *(undefined8 *)(lVar8 + (longlong)iVar9 * 8);
      }
      uVar15 = (int)uVar10 + 1;
      uVar14 = uVar14 + 8;
      lVar13 = local_70;
      uVar10 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)param_5[1]);
  }
  TArray<FTransform,FDefaultAllocator>::operator=(lVar13 + 0x120,param_3 + 0xd);
  *param_2 = lVar13;
  param_2[1] = (longlong)local_68;
LAB_142bee636:
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bee660 FUN_142bee660 body=374 status=ok
// SIG undefined FUN_142bee660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bee660(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10;
  longlong local_18;
  undefined8 local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x34);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    lVar4 = 0;
    if (bVar2) {
      lVar4 = lVar3;
    }
    if (iVar1 == 1) {
      local_res10 = 0;
      FUN_142c40c30(param_1,lVar3,lVar4,&local_res10);
      UEnvQueryItemType_Actor::SetContextHelper(param_3,local_res10);
    }
    else {
      if (iVar1 == 2) {
        local_18 = _DAT_146691060;
        local_10 = CONCAT44(local_10._4_4_,DAT_146691068);
        FUN_142c40c90(param_1,lVar3,lVar4,&local_18);
        UEnvQueryItemType_Point::SetContextHelper(param_3,&local_18);
        return;
      }
      if (iVar1 == 3) {
        local_18 = 0;
        local_10 = 0;
        FUN_142c40a20(param_1,lVar3,lVar4,&local_18);
        UEnvQueryItemType_Actor::SetContextHelper(param_3,&local_18);
      }
      else {
        if (iVar1 != 4) {
          return;
        }
        local_18 = 0;
        local_10 = 0;
        FUN_142c40b20(param_1,lVar3,lVar4,&local_18);
        UEnvQueryItemType_Point::SetContextHelper(param_3,&local_18);
      }
      if (local_18 != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 142bee7e0 ProvideContext body=107 status=ok
// SIG undefined ProvideContext(void)

void UEnvQueryContext_Querier::ProvideContext
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142bee836;
  }
  lVar2 = 0;
LAB_142bee836:
  UEnvQueryItemType_Actor::SetContextHelper(param_3,lVar2);
  return;
}



// FUNCTION 142bee850 FUN_142bee850 body=403 status=ok
// SIG undefined FUN_142bee850(void)

undefined4 FUN_142bee850(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 == 0) {
    return 1;
  }
  lVar5 = FUN_142c2de20();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 1;
  }
  plVar1 = (longlong *)(param_3 + 0x68);
  if ((*(int *)(param_3 + 0x70) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar1 + 0x18))();
  }
  uStack_20 = 0;
  local_28 = &LAB_1404c2114;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_14428aed0;
  }
  if (&local_28 != plVar1) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(param_3 + 0x70) != 0) &&
         (plVar6 = (longlong *)*plVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_3 + 0x70) = 0;
      }
      goto LAB_142bee979;
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,plVar1);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar5 = FMemory::Realloc(plVar6,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_142bee979:
  uVar7 = 1;
  cVar4 = FUN_142bc4df0(lVar2,param_3,1,param_1);
  if (cVar4 != '\0') {
    uVar7 = 3;
  }
  return uVar7;
}



// FUNCTION 142bee9f0 FUN_142bee9f0 body=801 status=ok
// SIG undefined FUN_142bee9f0(void)

void FUN_142bee9f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong *local_res20;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8 [4];
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 *local_70;
  longlong *local_68;
  undefined1 *local_60;
  longlong *local_58;
  
  lVar1 = param_1 + 0x48;
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(lVar1);
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar4 = plVar7 + *(int *)(param_1 + 0x40);
  local_res18 = plVar4;
  if (plVar7 != plVar4) {
    do {
      uVar9 = 0;
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x28);
        local_res20 = plVar7;
        if (lVar3 != 0) {
          plVar6 = *(longlong **)(lVar3 + 0x30);
          uVar8 = (longlong)*(int *)(lVar3 + 0x38) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(lVar3 + 0x38) < plVar6) {
            uVar8 = uVar9;
          }
          if (uVar8 != 0) {
            do {
              local_d0 = *plVar6;
              if (local_d0 != 0) {
                local_d8 = *(longlong *)(local_d0 + 0x18);
                FName::ToString(&local_d8,local_c8 + 4);
                local_c8[0] = 0;
                local_c8[1] = 0x11;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
                FGenericPlatformString::Memcpy(local_c8[0],L"EnvQueryContext_",0x22);
                FString::RemoveFromStart(local_c8 + 4,local_c8,1);
                if (local_c8[0] != 0) {
                  FMemory::Free();
                }
                puVar5 = &DAT_143f3eda8;
                if (local_a0 != 0) {
                  puVar5 = local_a8;
                }
                FName::FName(local_88,puVar5,1);
                local_70 = local_88;
                local_68 = &local_d0;
                TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                          (lVar1,local_res8,&local_70,0);
                if (local_a8 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
              }
              plVar6 = plVar6 + 1;
              uVar9 = uVar9 + 1;
              plVar4 = local_res18;
            } while (uVar9 != uVar8);
          }
        }
        plVar10 = *(longlong **)(lVar2 + 0x30);
        plVar6 = plVar10 + *(int *)(lVar2 + 0x38);
        local_78 = plVar6;
        if (plVar10 != plVar6) {
          do {
            uVar9 = 0;
            lVar2 = *plVar10;
            if (lVar2 != 0) {
              plVar7 = *(longlong **)(lVar2 + 0x30);
              uVar8 = (longlong)*(int *)(lVar2 + 0x38) & 0x1fffffffffffffff;
              if (plVar7 + *(int *)(lVar2 + 0x38) < plVar7) {
                uVar8 = uVar9;
              }
              if (uVar8 != 0) {
                do {
                  local_d8 = *plVar7;
                  if (local_d8 != 0) {
                    local_d0 = *(longlong *)(local_d8 + 0x18);
                    FName::ToString(&local_d0,&local_98);
                    local_c8[2] = 0;
                    local_c8[3] = 0x11;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 2,0);
                    FGenericPlatformString::Memcpy(local_c8[2],L"EnvQueryContext_",0x22);
                    FString::RemoveFromStart(&local_98,local_c8 + 2,1);
                    if (local_c8[2] != 0) {
                      FMemory::Free();
                    }
                    puVar5 = &DAT_143f3eda8;
                    if (local_90 != 0) {
                      puVar5 = local_98;
                    }
                    FName::FName(local_80,puVar5,1);
                    local_60 = local_80;
                    local_58 = &local_d8;
                    TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
                    ::
                    Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                              (lVar1,local_res10,&local_60,0);
                    if (local_98 != (undefined2 *)0x0) {
                      FMemory::Free();
                    }
                  }
                  plVar7 = plVar7 + 1;
                  uVar9 = uVar9 + 1;
                  plVar6 = local_78;
                } while (uVar9 != uVar8);
              }
            }
            plVar10 = plVar10 + 1;
            plVar4 = local_res18;
            plVar7 = local_res20;
          } while (plVar10 != plVar6);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
  }
  return;
}



// FUNCTION 142beed20 FUN_142beed20 body=573 status=ok
// SIG undefined FUN_142beed20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142beed20(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x3c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_e8 = 1;
  local_f0 = 1;
  local_f8 = 0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FReferenceFinder::FReferenceFinder(local_c8,&local_d8,0,0);
  FReferenceFinder::FindReferences(local_c8,param_1,0,0);
  plVar2 = local_d8 + (int)local_d0;
  plVar9 = local_d8;
  if (local_d8 != plVar2) {
    do {
      lVar5 = *plVar9;
      if (lVar5 != 0) {
        lVar7 = FUN_14171bfe0();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) break;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  plVar3 = local_d8 + (int)local_d0;
joined_r0x000142beee2a:
  do {
    if (plVar9 == plVar3) {
      local_60 = 0;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_a8);
      FReferenceCollector::~FReferenceCollector(local_c8);
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar5 = *plVar9;
    lVar8 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar8) {
        iVar4 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar4 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
        }
        *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar5;
        break;
      }
    }
    do {
      do {
        plVar9 = plVar9 + 1;
        if (plVar9 == plVar2) goto joined_r0x000142beee2a;
        lVar5 = *plVar9;
      } while (lVar5 == 0);
      lVar7 = FUN_14171bfe0();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
    } while (!bVar6);
  } while( true );
}



// FUNCTION 142beef60 FUN_142beef60 body=107 status=ok
// SIG undefined FUN_142beef60(void)

void FUN_142beef60(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1a8);
  *(int *)(param_2 + 0x1a8) = iVar1 + 1;
  if (*(int *)(param_2 + 0x1ac) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x1a0,iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x1a0) + (longlong)iVar1 * 8) = param_1;
  FWeakObjectPtr::operator=(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 142beefd0 FUN_142beefd0 body=125 status=ok
// SIG undefined FUN_142beefd0(void)

void FUN_142beefd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 local_res10 [24];
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    local_20 = (longlong *)param_2[1];
    local_18 = local_28;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
      UNLOCK();
      local_18 = *param_2;
    }
    local_18 = local_18 + 0x30;
    local_10 = &local_28;
    FUN_142bd0300(param_1 + 0x50,local_res10,&local_18,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (local_20 != (longlong *)0x0)) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 142bef050 FUN_142bef050 body=274 status=ok
// SIG undefined FUN_142bef050(void)

undefined8 FUN_142bef050(longlong *param_1,int param_2)

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
      lVar3 = (longlong)iVar5 * 0x20;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x20;
        uVar7 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000142bef0e2;
      }
      iVar5 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000142bef0e2:
  if (iVar1 == -1) {
LAB_142bef110:
    plVar6 = *(longlong **)(lVar3 + 0x10 + *param_1);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar4 = (int *)((longlong)plVar6 + 0xc);
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_142bef110;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x000142bef0e2;
}



// FUNCTION 142bef170 FUN_142bef170 body=39 status=ok
// SIG undefined FUN_142bef170(void)

void FUN_142bef170(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x28))();
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) | 1;
  }
  return;
}



// FUNCTION 142bef1a0 FUN_142bef1a0 body=30 status=ok
// SIG undefined FUN_142bef1a0(void)

void FUN_142bef1a0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0x154) * param_2 + *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x24) < iVar1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18,iVar1);
    return;
  }
  return;
}



// FUNCTION 142bef1c0 Reset body=150 status=ok
// SIG undefined Reset(void)

void TArray<FString,FDefaultAllocator>::Reset(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142bef260 FUN_142bef260 body=281 status=ok
// SIG undefined FUN_142bef260(void)

void FUN_142bef260(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (param_1 + 0x130 != &local_18) {
    param_1[0x130] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x131,&local_10);
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
  *(undefined4 *)((longlong)param_1 + 0x934) = 0;
  iVar4 = *(int *)((longlong)param_1 + 0x99c);
  lVar5 = param_1[0x132];
  iVar6 = (int)param_1[0x133];
  if (iVar4 < 0) {
    if (iVar6 != 0) {
      do {
        FUN_142bd6600(lVar5);
        lVar5 = lVar5 + 0x188;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar4 = *(int *)((longlong)param_1 + 0x99c);
    }
    *(undefined4 *)(param_1 + 0x133) = 0;
    if (iVar4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x132,0);
    }
  }
  else {
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_142bd6600(lVar5);
      lVar5 = lVar5 + 0x188;
    }
    *(undefined4 *)(param_1 + 0x133) = 0;
  }
  if (param_1[0x92] == 0) {
    (**(code **)(*param_1 + 0x7c0))(param_1);
  }
  return;
}



// FUNCTION 142bef380 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FQueuedPlayer,TSizedDefaultAllocator<32>_>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x198,0);
  iVar4 = (int)(uVar3 / 0x198);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x198,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 142bef410 FUN_142bef410 body=49 status=ok
// SIG undefined FUN_142bef410(void)

undefined8 FUN_142bef410(longlong *param_1)

{
  if ((*(uint *)(param_1 + 0x3a) & 1) != 0) {
    *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfffffffe;
    (**(code **)(*param_1 + 0x400))();
    return 1;
  }
  return 0;
}



// FUNCTION 142bef450 FUN_142bef450 body=82 status=ok
// SIG undefined FUN_142bef450(void)

void FUN_142bef450(longlong *param_1)

{
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    (**(code **)(*param_1 + 0x5e8))();
    do {
      FUN_142be9020(param_1);
      if (0.0 < *(float *)(param_1 + 0x126)) {
        return;
      }
      if (param_1[0x130] == 0) {
        return;
      }
    } while (*(int *)(param_1[0x130] + 0x28) == 0);
  }
  return;
}



// FUNCTION 142bef4b0 FUN_142bef4b0 body=616 status=ok
// SIG undefined FUN_142bef4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142bef4b0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 *param_4,
             longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  lVar2 = FUN_142be40d0();
  if (lVar2 == 0) {
    return 0;
  }
  plVar3 = (longlong *)FUN_142c32730();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  if (*(char *)(lVar4 + 0x90) == '\0') {
    lVar4 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        param_3 = 0;
      }
      param_3 = *(longlong *)(param_3 + 0x488);
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  if (param_5 != 0) {
    lVar5 = UEnvQueryInstanceBlueprintWrapper::GetPrivateStaticClass();
    lVar4 = param_5;
    do {
      if (lVar4 == lVar5) {
        lVar5 = UEnvQueryInstanceBlueprintWrapper::GetPrivateStaticClass();
        lVar4 = param_5;
        goto LAB_142bef6e2;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  lVar6 = UEnvQueryInstanceBlueprintWrapper::GetPrivateStaticClass();
  goto LAB_142bef5f1;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar6 = 0, lVar4 != 0) {
LAB_142bef6e2:
    lVar6 = param_5;
    if (lVar4 == lVar5) break;
  }
LAB_142bef5f1:
  local_d8 = 0;
  local_d0 = 0;
  FUN_1417846f0(lVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  uVar7 = FUN_1417985e0(lVar6,lVar2,0,0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_c8 = param_2;
  local_c0 = param_3;
  FUN_142bf0d50(uVar7,*param_4,&local_c8);
  if (local_60 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  if (local_70 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&uStack_b0);
  return uVar7;
}



// FUNCTION 142bef720 FUN_142bef720 body=619 status=ok
// SIG undefined FUN_142bef720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bef720(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  char param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  
  iVar13 = (int)param_4[1];
  local_a8 = 0;
  local_a0 = 0;
  if (0 < iVar13) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (&local_a8,iVar13);
    iVar13 = (int)param_4[1];
  }
  puVar9 = (undefined8 *)*param_4;
  puVar2 = puVar9 + (longlong)iVar13 * 3;
  uVar6 = local_a0;
  for (; puVar9 != puVar2; puVar9 = puVar9 + 3) {
    uStack_70 = *(undefined4 *)(puVar9 + 1);
    local_78 = *puVar9;
    local_a0._0_4_ = (int)uVar6;
    lVar11 = (longlong)(int)local_a0;
    uStack_8c = (undefined4)_DAT_1468b5d90;
    uStack_88 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_80 = local_80 & 0xffffff00;
    local_54 = local_80;
    local_38 = local_38 & 0xfffffffc | 4;
    local_a0._0_4_ = (int)local_a0 + 1;
    auVar4._8_4_ = DAT_1468b5d98;
    auVar4._0_8_ = _DAT_1468b5d90;
    uStack_68 = auVar4._4_8_;
    uStack_60 = uStack_8c;
    uStack_40 = 0;
    uStack_5c = uStack_88;
    local_a0._4_4_ = (int)(uVar6 >> 0x20);
    local_98 = _DAT_1468b5d90;
    uStack_90 = DAT_1468b5d98;
    uStack_84 = DAT_1468b5d98;
    uStack_6c = uStack_8c;
    uStack_58 = DAT_1468b5d98;
    uStack_50 = _DAT_1468b5d90;
    local_48 = DAT_1468b5d98;
    if (local_a0._4_4_ < (int)local_a0) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_a8,uVar6 & 0xffffffff);
    }
    puVar1 = (undefined8 *)(local_a8 + lVar11 * 0x48);
    *puVar1 = local_78;
    puVar1[1] = CONCAT44(uStack_6c,uStack_70);
    puVar1 = (undefined8 *)(local_a8 + 0x10 + lVar11 * 0x48);
    *puVar1 = uStack_68;
    puVar1[1] = CONCAT44(uStack_5c,uStack_60);
    puVar1 = (undefined8 *)(local_a8 + 0x20 + lVar11 * 0x48);
    *puVar1 = CONCAT44(local_54,uStack_58);
    puVar1[1] = uStack_50;
    puVar1 = (undefined8 *)(local_a8 + 0x30 + lVar11 * 0x48);
    *puVar1 = CONCAT44(uStack_44,local_48);
    puVar1[1] = uStack_40;
    *(ulonglong *)(local_a8 + 0x40 + lVar11 * 0x48) = CONCAT44(uStack_34,local_38);
    uVar6 = local_a0;
  }
  local_a0 = uVar6;
  (**(code **)(*param_1 + 0x858))(param_1,&local_a8,param_2);
  iVar13 = (int)local_a0 + -1;
  if (-1 < iVar13) {
    lVar10 = (longlong)iVar13 * 0x18;
    lVar12 = (longlong)iVar13 * 0x48;
    lVar14 = (longlong)(int)local_a0 * 0x18;
    lVar11 = lVar10;
    do {
      if ((*(byte *)(lVar12 + 0x40 + local_a8) & 2) == 0) {
        if (param_5 == '\x01') {
          iVar8 = (int)param_4[1];
          iVar7 = (iVar8 - iVar13) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_4 + lVar11),(void *)(lVar14 + *param_4),
                       (longlong)iVar7 * 0x18);
            iVar8 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar8 + -1;
        }
      }
      else {
        puVar9 = (undefined8 *)(lVar12 + 0x28 + local_a8);
        uVar5 = puVar9[1];
        lVar3 = *param_4;
        puVar2 = (undefined8 *)(lVar10 + lVar3);
        *puVar2 = *puVar9;
        puVar2[1] = uVar5;
        *(undefined8 *)(lVar10 + 0x10 + lVar3) = *(undefined8 *)(lVar12 + 0x38 + local_a8);
        *(float *)(lVar10 + 8 + *param_4) =
             *(float *)(param_3 + 0x24) + *(float *)(lVar10 + 8 + *param_4);
      }
      lVar14 = lVar14 + -0x18;
      lVar11 = lVar11 + -0x18;
      lVar12 = lVar12 + -0x48;
      lVar10 = lVar10 + -0x18;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bef990 FUN_142bef990 body=372 status=ok
// SIG undefined FUN_142bef990(void)

longlong * FUN_142bef990(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_58 [16];
  longlong local_48;
  longlong *plStack_40;
  undefined4 *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_142bee240(param_1,&local_48);
  plVar4 = plStack_40;
  lVar5 = local_48;
  if (local_48 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (plStack_40 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar4 = plStack_40 + 1;
    iVar3 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
  }
  else {
    local_28 = local_48;
    plStack_20 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
      UNLOCK();
    }
    local_30 = &local_28;
    puVar1 = (undefined4 *)(local_48 + 0x30);
    local_38 = puVar1;
    FUN_142bd0300(param_1 + 0x50,local_58,&local_38,0);
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plStack_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar4 = plStack_40;
      lVar5 = local_48;
      if ((iVar3 == 1) && (plStack_20 != (longlong *)0x0)) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
        plVar4 = plStack_40;
        lVar5 = local_48;
      }
    }
    iVar3 = *(int *)(lVar5 + 0x28);
    while (iVar3 == 0) {
      FUN_142be0b90(lVar5,DAT_146691020);
      iVar3 = *(int *)(lVar5 + 0x28);
    }
    FUN_142bef050(param_1 + 0x50,*puVar1);
    *param_2 = lVar5;
    param_2[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar4 + 1;
    iVar3 = (int)*plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
  }
  plVar4 = plStack_40;
  if (iVar3 == 1) {
    (**(code **)*plStack_40)(plStack_40);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return param_2;
}



// FUNCTION 142befb10 FUN_142befb10 body=212 status=ok
// SIG undefined FUN_142befb10(void)

void FUN_142befb10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res10 [24];
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    local_20 = (longlong *)param_2[1];
    local_18 = local_28;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
      UNLOCK();
      local_18 = *param_2;
    }
    local_18 = local_18 + 0x30;
    local_10 = &local_28;
    FUN_142bd0300(param_1 + 0x50,local_res10,&local_18,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (local_20 != (longlong *)0x0)) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    lVar3 = *param_2;
    iVar2 = *(int *)(lVar3 + 0x28);
    while (iVar2 == 0) {
      FUN_142be0b90(lVar3,DAT_146691020);
      lVar3 = *param_2;
      iVar2 = *(int *)(lVar3 + 0x28);
    }
    if (lVar3 != 0) {
      FUN_142bef050(param_1 + 0x50,*(undefined4 *)(lVar3 + 0x30));
    }
  }
  return;
}



// FUNCTION 142befbf0 FUN_142befbf0 body=1002 status=ok
// SIG undefined FUN_142befbf0(void)

void FUN_142befbf0(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  char param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  
  iVar7 = (int)param_4[1];
  local_e8 = 0;
  local_e0 = 0;
  if (0 < iVar7) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (&local_e8);
    iVar7 = (int)param_4[1];
  }
  puVar10 = (undefined8 *)*param_4;
  fVar3 = *(float *)(param_3 + 0x10);
  fVar4 = *(float *)(param_3 + 0x14);
  puVar2 = puVar10 + (longlong)iVar7 * 3;
  if (fVar3 == fVar4) {
    for (; puVar10 != puVar2; puVar10 = puVar10 + 3) {
      fStack_b0 = *(float *)(puVar10 + 1);
      local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_b8 = *puVar10;
      lVar12 = (longlong)(int)local_e0;
      local_c0 = local_c0 & 0xffffff00;
      local_94 = local_c0;
      local_78 = local_78 & 0xfffffffc | 4;
      iVar7 = (int)local_e0 + 1;
      uStack_80 = 0;
      local_e0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      local_e0 = CONCAT44(local_e0._4_4_,iVar7);
      uStack_c8 = DAT_1468b5d94;
      uStack_c4 = DAT_1468b5d98;
      uStack_ac = DAT_1468b5d90;
      uStack_a8 = DAT_1468b5d94;
      uStack_a4 = DAT_1468b5d98;
      uStack_a0 = DAT_1468b5d90;
      uStack_9c = DAT_1468b5d94;
      uStack_98 = DAT_1468b5d98;
      local_90 = local_d8;
      local_88 = DAT_1468b5d98;
      if (local_e0._4_4_ < iVar7) {
        fStack_d0 = (float)DAT_1468b5d98;
        uStack_cc = DAT_1468b5d90;
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_e8);
      }
      puVar1 = (undefined8 *)(local_e8 + lVar12 * 0x48);
      *puVar1 = local_b8;
      puVar1[1] = CONCAT44(uStack_ac,fStack_b0);
      puVar1 = (undefined8 *)(local_e8 + 0x10 + lVar12 * 0x48);
      *puVar1 = CONCAT44(uStack_a4,uStack_a8);
      puVar1[1] = CONCAT44(uStack_9c,uStack_a0);
      puVar1 = (undefined8 *)(local_e8 + 0x20 + lVar12 * 0x48);
      *puVar1 = CONCAT44(local_94,uStack_98);
      puVar1[1] = local_90;
      puVar1 = (undefined8 *)(local_e8 + 0x30 + lVar12 * 0x48);
      *puVar1 = CONCAT44(uStack_84,local_88);
      puVar1[1] = uStack_80;
      *(ulonglong *)(local_e8 + 0x40 + lVar12 * 0x48) = CONCAT44(uStack_74,local_78);
    }
  }
  else {
    for (; puVar10 != puVar2; puVar10 = puVar10 + 3) {
      fStack_d0 = (fVar4 - fVar3) * 0.5 + *(float *)(puVar10 + 1);
      lVar12 = (longlong)(int)local_e0;
      local_b8 = *puVar10;
      local_48 = local_48 & 0xffffff00;
      local_94 = local_48;
      local_78 = local_78 & 0xfffffffc | 4;
      iVar7 = (int)local_e0 + 1;
      uStack_80 = 0;
      local_90 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_e0._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
      local_e0 = CONCAT44(local_e0._4_4_,iVar7);
      fStack_b0 = fStack_d0;
      uStack_ac = DAT_1468b5d90;
      uStack_a8 = DAT_1468b5d94;
      uStack_a4 = DAT_1468b5d98;
      uStack_a0 = DAT_1468b5d90;
      uStack_9c = DAT_1468b5d94;
      uStack_98 = DAT_1468b5d98;
      local_88 = DAT_1468b5d98;
      local_60 = DAT_1468b5d90;
      uStack_5c = DAT_1468b5d94;
      uStack_58 = DAT_1468b5d98;
      uStack_54 = DAT_1468b5d90;
      uStack_50 = DAT_1468b5d94;
      uStack_4c = DAT_1468b5d98;
      if (local_e0._4_4_ < iVar7) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_e8);
      }
      puVar1 = (undefined8 *)(local_e8 + lVar12 * 0x48);
      *puVar1 = local_b8;
      puVar1[1] = CONCAT44(uStack_ac,fStack_b0);
      puVar1 = (undefined8 *)(local_e8 + 0x10 + lVar12 * 0x48);
      *puVar1 = CONCAT44(uStack_a4,uStack_a8);
      puVar1[1] = CONCAT44(uStack_9c,uStack_a0);
      puVar1 = (undefined8 *)(local_e8 + 0x20 + lVar12 * 0x48);
      *puVar1 = CONCAT44(local_94,uStack_98);
      puVar1[1] = local_90;
      puVar1 = (undefined8 *)(local_e8 + 0x30 + lVar12 * 0x48);
      *puVar1 = CONCAT44(uStack_84,local_88);
      puVar1[1] = uStack_80;
      *(ulonglong *)(local_e8 + 0x40 + lVar12 * 0x48) = CONCAT44(uStack_74,local_78);
    }
  }
  local_70 = *(undefined4 *)(param_3 + 0x18);
  local_6c = *(undefined4 *)(param_3 + 0x1c);
  local_68 = (*(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x10)) * 0.5;
  local_d8 = 0;
  fStack_d0 = 0.0;
  uStack_cc = 0;
  (**(code **)(*param_1 + 0x7e0))(param_1,&local_e8,&local_70,&local_d8,param_2);
  iVar7 = (int)local_e0 + -1;
  if (-1 < iVar7) {
    lVar11 = (longlong)iVar7 * 0x18;
    lVar13 = (longlong)iVar7 * 0x48;
    lVar14 = (longlong)(int)local_e0 * 0x18;
    lVar12 = lVar11;
    do {
      if ((*(byte *)(lVar13 + 0x40 + local_e8) & 2) == 0) {
        if (param_5 == '\x01') {
          iVar9 = (int)param_4[1];
          iVar8 = (iVar9 - iVar7) + -1;
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_4 + lVar12),(void *)(lVar14 + *param_4),
                       (longlong)iVar8 * 0x18);
            iVar9 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar9 + -1;
        }
      }
      else {
        lVar5 = *param_4;
        puVar10 = (undefined8 *)(lVar13 + 0x28 + local_e8);
        uVar6 = puVar10[1];
        puVar2 = (undefined8 *)(lVar11 + lVar5);
        *puVar2 = *puVar10;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar11 + 0x10 + lVar5) = *(undefined8 *)(lVar13 + 0x38 + local_e8);
        *(float *)(lVar11 + 8 + *param_4) =
             *(float *)(param_3 + 0x24) + *(float *)(lVar11 + 8 + *param_4);
      }
      lVar14 = lVar14 + -0x18;
      lVar12 = lVar12 + -0x18;
      lVar13 = lVar13 + -0x48;
      lVar11 = lVar11 + -0x18;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142beffe0 FUN_142beffe0 body=631 status=ok
// SIG undefined FUN_142beffe0(void)

void FUN_142beffe0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  FUN_142b90120(&local_88,param_1,param_2,*(undefined8 *)(param_3 + 8));
  uVar8 = 0;
  local_98 = 0;
  local_90 = 0;
  iVar6 = (int)param_5[1];
  if (0 < iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (&local_98,iVar6);
    iVar6 = (int)param_5[1];
  }
  puVar12 = (undefined8 *)*param_5;
  puVar4 = puVar12 + (longlong)iVar6 * 3;
  uVar11 = local_90;
  for (; puVar12 != puVar4; puVar12 = puVar12 + 3) {
    local_90._0_4_ = (int)uVar11;
    lVar15 = (longlong)(int)local_90;
    uStack_60 = *(undefined4 *)(param_4 + 1);
    local_68 = *param_4;
    uStack_54 = *(undefined4 *)(puVar12 + 1);
    local_90._0_4_ = (int)local_90 + 1;
    uStack_50 = *puVar12;
    uStack_5c = (undefined4)uStack_50;
    uStack_58 = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40 = 0;
    local_38 = 0;
    local_90._4_4_ = (int)(uVar11 >> 0x20);
    local_48 = uStack_54;
    if (local_90._4_4_ < (int)local_90) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_98,uVar11 & 0xffffffff);
    }
    lVar15 = lVar15 * 0x38;
    *(undefined8 *)(lVar15 + local_98) = local_68;
    ((undefined8 *)(lVar15 + local_98))[1] = CONCAT44(uStack_5c,uStack_60);
    puVar3 = (undefined8 *)(lVar15 + 0x10 + local_98);
    *puVar3 = CONCAT44(uStack_54,uStack_58);
    puVar3[1] = uStack_50;
    puVar3 = (undefined8 *)(lVar15 + 0x20 + local_98);
    *puVar3 = CONCAT44(uStack_44,local_48);
    puVar3[1] = uStack_40;
    *(ulonglong *)(lVar15 + 0x30 + local_98) = CONCAT71(uStack_37,local_38);
    uVar11 = local_90;
  }
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  local_90 = uVar11;
  (**(code **)(*param_1 + 0x7a0))(param_1,&local_98,local_78,0);
  iVar6 = (int)param_5[1];
  uVar11 = uVar8;
  uVar14 = uVar8;
  if (0 < iVar6) {
    do {
      lVar15 = *param_5;
      uVar8 = uVar8 + 0x18;
      uVar9 = (int)uVar11 + 1;
      puVar4 = (undefined8 *)(uVar14 + 0x18 + local_98);
      uVar5 = puVar4[1];
      puVar12 = (undefined8 *)(lVar15 + -0x18 + uVar8);
      *puVar12 = *puVar4;
      puVar12[1] = uVar5;
      *(undefined8 *)(lVar15 + -8 + uVar8) = *(undefined8 *)(uVar14 + 0x28 + local_98);
      iVar6 = (int)param_5[1];
      uVar11 = (ulonglong)uVar9;
      uVar14 = uVar14 + 0x38;
    } while ((int)uVar9 < iVar6);
  }
  lVar15 = local_98;
  if ((param_6 == '\x01') && (iVar10 = iVar6 + -1, -1 < iVar10)) {
    lVar13 = (longlong)iVar10 * 0x38;
    lVar16 = (longlong)iVar10 * 0x18;
    lVar17 = (longlong)iVar6 * 0x18;
    do {
      if (*(char *)(lVar13 + 0x30 + lVar15) == '\0') {
        iVar6 = (int)param_5[1];
        iVar7 = (iVar6 - iVar10) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_5 + lVar16),(void *)(lVar17 + *param_5),(longlong)iVar7 * 0x18)
          ;
          iVar6 = (int)param_5[1];
          lVar15 = local_98;
        }
        *(int *)(param_5 + 1) = iVar6 + -1;
      }
      lVar17 = lVar17 + -0x18;
      lVar16 = lVar16 + -0x18;
      lVar13 = lVar13 + -0x38;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (lVar15 != 0) {
    FMemory::Free(lVar15);
  }
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plStack_80 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  return;
}



// FUNCTION 142bf0260 FUN_142bf0260 body=694 status=ok
// SIG undefined FUN_142bf0260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bf0260(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  size_t _Size;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190;
  undefined1 local_188 [8];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_168 [96];
  longlong local_108;
  longlong local_e8;
  void *local_d0;
  int local_c8;
  int local_c4;
  undefined1 local_b8 [16];
  undefined1 local_a8;
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar3 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_2 + 0x28));
  local_178 = *(undefined4 *)(param_2 + 0x20);
  local_17c = *(undefined4 *)(param_2 + 0x1c);
  local_180 = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c708) {
    _Init_thread_header(&DAT_146b2c708);
    if (DAT_146b2c708 == -1) {
      FName::FName(&DAT_146b2c700,"EnvQueryTrace",1);
      _Init_thread_footer(&DAT_146b2c708);
    }
  }
  local_198 = (undefined4 *)0x0;
  FUN_1422ffb20(local_b8,DAT_146b2c700,local_188,*(byte *)(param_2 + 0x2c) & 1);
  local_198 = &local_180;
  local_190 = 0;
  local_a8 = 1;
  FUN_142bd1b30(local_168,param_1,uVar3,local_b8);
  lVar5 = (longlong)local_c8;
  iVar2 = *(int *)(param_3 + 8);
  local_c8 = local_c8 + iVar2;
  if (local_c4 < local_c8) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_d0);
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)local_d0),0,(longlong)iVar2);
  cVar1 = *(char *)(param_2 + 0x2a);
  if (cVar1 == '\0') {
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf860(local_168,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  else if (cVar1 == '\x01') {
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf0a0(local_168,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  else if (cVar1 == '\x02') {
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf3b0(local_168,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  else if (cVar1 == '\x03') {
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf600(local_168,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  iVar2 = local_c8;
  _Size = (size_t)local_c8;
  if (local_c8 != 0) {
    iVar4 = (int)param_4[1];
    if (*(int *)((longlong)param_4 + 0xc) < iVar4 + local_c8) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_4);
      iVar4 = (int)param_4[1];
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 + *param_4),local_d0,_Size);
    *(int *)(param_4 + 1) = (int)param_4[1] + iVar2;
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bf0520 FUN_142bf0520 body=624 status=ok
// SIG undefined FUN_142bf0520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bf0520(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined1 local_180;
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_158 [96];
  longlong local_f8;
  longlong local_d8;
  longlong local_c0;
  undefined1 local_a8 [16];
  undefined1 local_98;
  longlong local_60;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_2 + 0x28));
  local_168 = *(undefined4 *)(param_2 + 0x20);
  local_16c = *(undefined4 *)(param_2 + 0x1c);
  local_170 = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c6f8) {
    _Init_thread_header(&DAT_146b2c6f8);
    if (DAT_146b2c6f8 == -1) {
      FName::FName(&DAT_146b2c6f0,"EnvQueryTrace",1);
      _Init_thread_footer(&DAT_146b2c6f8);
    }
  }
  local_188 = (undefined4 *)0x0;
  FUN_1422ffb20(local_a8,DAT_146b2c6f0,local_178,*(byte *)(param_2 + 0x2c) & 1);
  local_188 = &local_170;
  local_98 = 1;
  local_180 = param_4;
  FUN_142bd1b30(local_158,param_1,uVar2,local_a8);
  cVar1 = *(char *)(param_2 + 0x2a);
  if (cVar1 == '\0') {
    local_188 = (undefined4 *)CONCAT44(local_188._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf860(local_158,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  else if (cVar1 == '\x01') {
    local_188 = (undefined4 *)CONCAT44(local_188._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf0a0(local_158,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  else if (cVar1 == '\x02') {
    local_188 = (undefined4 *)CONCAT44(local_188._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf3b0(local_158,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  else if (cVar1 == '\x03') {
    local_188 = (undefined4 *)CONCAT44(local_188._4_4_,*(undefined4 *)(param_2 + 0x24));
    FUN_142bcf600(local_158,param_3,*(undefined4 *)(param_2 + 0x14),
                  *(uint *)(param_2 + 0x10) ^ 0x80000000);
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bf0790 FUN_142bf0790 body=1466 status=ok
// SIG undefined FUN_142bf0790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bf0790(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined1 *local_270;
  undefined4 *local_268;
  undefined1 *local_260;
  undefined *local_258;
  undefined1 local_248 [8];
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_208 [12];
  undefined4 local_1fc;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160 [72];
  longlong local_118;
  longlong local_f8;
  undefined4 local_e8;
  char local_e4;
  longlong local_e0;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_218 = param_3;
  uVar4 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_2 + 0x28));
  local_238 = *(undefined4 *)(param_2 + 0x20);
  local_23c = *(undefined4 *)(param_2 + 0x1c);
  local_240 = *(undefined4 *)(param_2 + 0x18);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c6e8) && (_Init_thread_header(&DAT_146b2c6e8), DAT_146b2c6e8 == -1))
  {
    FName::FName(&DAT_146b2c6e0,"EnvQueryTrace",1);
    _Init_thread_footer(&DAT_146b2c6e8);
  }
  local_278 = (undefined4 *)0x0;
  FUN_1422ffb20(local_c8,DAT_146b2c6e0,local_248,*(byte *)(param_2 + 0x2c) & 1);
  local_b8 = 1;
  FCollisionQueryParams::AddIgnoredActors(local_c8,param_5);
  local_270 = (undefined1 *)CONCAT71(local_270._1_7_,param_6);
  local_278 = &local_240;
  FUN_142bd1b30(&local_178,param_1,uVar4,local_c8);
  cVar3 = *(char *)(param_2 + 0x2a);
  if (cVar3 == '\0') {
    iVar7 = (int)param_4[1] + -1;
    if (-1 < iVar7) {
      lVar9 = (longlong)iVar7 * 0x18;
      lVar8 = (longlong)(int)param_4[1] * 0x18;
      lVar10 = lVar9;
      do {
        lVar2 = *param_4;
        _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
        local_270 = local_160;
        local_268 = (undefined4 *)&DAT_146aefe68;
        local_278 = (undefined4 *)CONCAT44(local_278._4_4_,local_e8);
        local_1fc = 0x3f800000;
        cVar3 = UWorld::LineTraceSingleByChannel(local_178,local_208,local_218,lVar10 + lVar2);
        if (cVar3 == '\0') {
          if (local_e4 == '\x01') {
            iVar6 = (int)param_4[1];
            iVar5 = (iVar6 - iVar7) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_4 + lVar10),(void *)(lVar8 + *param_4),
                         (longlong)iVar5 * 0x18);
              iVar6 = (int)param_4[1];
            }
            *(int *)(param_4 + 1) = iVar6 + -1;
          }
        }
        else {
          lVar2 = *param_4;
          local_220 = 0;
          local_230 = local_1f4;
          uStack_22c = uStack_1f0;
          uStack_228 = local_1ec;
          puVar1 = (undefined4 *)(lVar2 + lVar9);
          *puVar1 = local_1f4;
          puVar1[1] = uStack_1f0;
          puVar1[2] = local_1ec;
          puVar1[3] = uStack_224;
          *(undefined8 *)(lVar2 + 0x10 + lVar9) = 0;
        }
        lVar8 = lVar8 + -0x18;
        lVar10 = lVar10 + -0x18;
        lVar9 = lVar9 + -0x18;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  else if (cVar3 == '\x01') {
    FUN_142bcfaa0(&local_178,param_3,param_4);
  }
  else if (cVar3 == '\x02') {
    iVar7 = (int)param_4[1] + -1;
    if (-1 < iVar7) {
      lVar9 = (longlong)iVar7 * 0x18;
      lVar8 = (longlong)(int)param_4[1] * 0x18;
      lVar10 = lVar9;
      do {
        lVar2 = *param_4;
        _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
        local_260 = local_160;
        local_258 = &DAT_146aefe68;
        local_268 = &local_240;
        local_270 = (undefined1 *)CONCAT44(local_270._4_4_,local_e8);
        local_278 = &DAT_1464aa810;
        local_23c = local_170;
        local_1fc = 0x3f800000;
        local_240 = 2;
        cVar3 = UWorld::SweepSingleByChannel(local_178,local_208,local_218,lVar10 + lVar2);
        if (cVar3 == '\0') {
          if (local_e4 == '\x01') {
            iVar6 = (int)param_4[1];
            iVar5 = (iVar6 - iVar7) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_4 + lVar10),(void *)(lVar8 + *param_4),
                         (longlong)iVar5 * 0x18);
              iVar6 = (int)param_4[1];
            }
            *(int *)(param_4 + 1) = iVar6 + -1;
          }
        }
        else {
          lVar2 = *param_4;
          local_220 = 0;
          local_230 = local_1f4;
          uStack_22c = uStack_1f0;
          uStack_228 = local_1ec;
          puVar1 = (undefined4 *)(lVar2 + lVar9);
          *puVar1 = local_1f4;
          puVar1[1] = uStack_1f0;
          puVar1[2] = local_1ec;
          puVar1[3] = uStack_224;
          *(undefined8 *)(lVar2 + 0x10 + lVar9) = 0;
        }
        lVar8 = lVar8 + -0x18;
        lVar10 = lVar10 + -0x18;
        lVar9 = lVar9 + -0x18;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  else if (cVar3 == '\x03') {
    iVar7 = (int)param_4[1] + -1;
    if (-1 < iVar7) {
      lVar9 = (longlong)iVar7 * 0x18;
      lVar8 = (longlong)(int)param_4[1] * 0x18;
      lVar10 = lVar9;
      do {
        lVar2 = *param_4;
        _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
        local_260 = local_160;
        local_258 = &DAT_146aefe68;
        local_268 = &local_240;
        local_270 = (undefined1 *)CONCAT44(local_270._4_4_,local_e8);
        local_278 = &DAT_1464aa810;
        local_23c = local_170;
        local_238 = local_168;
        local_1fc = 0x3f800000;
        local_240 = 3;
        cVar3 = UWorld::SweepSingleByChannel(local_178,local_208,local_218,lVar10 + lVar2);
        if (cVar3 == '\0') {
          if (local_e4 == '\x01') {
            iVar6 = (int)param_4[1];
            iVar5 = (iVar6 - iVar7) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_4 + lVar10),(void *)(lVar8 + *param_4),
                         (longlong)iVar5 * 0x18);
              iVar6 = (int)param_4[1];
            }
            *(int *)(param_4 + 1) = iVar6 + -1;
          }
        }
        else {
          lVar2 = *param_4;
          local_220 = 0;
          local_230 = local_1f4;
          uStack_22c = uStack_1f0;
          uStack_228 = local_1ec;
          puVar1 = (undefined4 *)(lVar2 + lVar9);
          *puVar1 = local_1f4;
          puVar1[1] = uStack_1f0;
          puVar1[2] = local_1ec;
          puVar1[3] = uStack_224;
          *(undefined8 *)(lVar2 + 0x10 + lVar9) = 0;
        }
        lVar8 = lVar8 + -0x18;
        lVar10 = lVar10 + -0x18;
        lVar9 = lVar9 + -0x18;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bf0d50 FUN_142bf0d50 body=623 status=ok
// SIG undefined FUN_142bf0d50(void)

void FUN_142bf0d50(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong *local_18;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  local_28 = FUN_142bebee0;
  uStack_20 = (longlong *)((ulonglong)uStack_20 & 0xffffffff00000000);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_20._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_144089968;
  }
  iVar4 = FUN_142be0a30(param_3,param_2,&local_18);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_18 = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  *(int *)(param_1 + 0x30) = iVar4;
  if ((iVar4 != -1) && (lVar6 = *(longlong *)(param_1 + 0x20), lVar6 != 0)) {
    lVar7 = FUN_142c42420();
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
      plVar5 = (longlong *)(lVar6 + 0xd0);
      plVar2 = (longlong *)*plVar5;
      iVar4 = *(int *)(lVar6 + 0xd8);
      for (plVar8 = plVar2; plVar8 != plVar2 + iVar4; plVar8 = plVar8 + 1) {
        if (*plVar8 == param_1) {
          if ((int)((longlong)plVar8 - (longlong)plVar2 >> 3) != -1) goto LAB_142bf0eca;
          break;
        }
      }
      *(int *)(lVar6 + 0xd8) = iVar4 + 1;
      if (*(int *)(lVar6 + 0xdc) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar4);
      }
      *(longlong *)(*plVar5 + (longlong)iVar4 * 8) = param_1;
LAB_142bf0eca:
      if ((*(int *)(param_1 + 0x30) != -1) && (iVar4 = *(int *)(lVar6 + 0x40) + -1, -1 < iVar4)) {
        lVar6 = *(longlong *)(lVar6 + 0x38);
        lVar7 = (longlong)iVar4;
        plVar5 = (longlong *)(lVar7 * 0x10 + lVar6);
        do {
          if (*(int *)(*plVar5 + 0x30) == *(int *)(param_1 + 0x30)) {
            local_28 = *(code **)(lVar6 + (longlong)iVar4 * 0x10);
            uStack_20 = *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10);
            if (uStack_20 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_20 + 1) = (int)uStack_20[1] + 1;
              UNLOCK();
            }
            goto LAB_142bf0f13;
          }
          iVar4 = iVar4 + -1;
          plVar5 = plVar5 + -2;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      local_28 = (code *)0x0;
      uStack_20 = (longlong *)0x0;
LAB_142bf0f13:
      if ((undefined8 *)(param_1 + 0x48) != &local_28) {
        *(undefined8 *)(param_1 + 0x48) = local_28;
        local_28 = (code *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&uStack_20);
      }
      plVar5 = uStack_20;
      if (uStack_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = uStack_20 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*uStack_20)(uStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_20 + 8))(uStack_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142bf0fc0 FUN_142bf0fc0 body=137 status=ok
// SIG undefined FUN_142bf0fc0(void)

undefined4 FUN_142bf0fc0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_2 == 0) {
    return 0xffffffff;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(*param_2 + 0x60,param_3);
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x38));
  *plVar3 = *param_2;
  lVar2 = param_2[1];
  plVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return *(undefined4 *)(*param_2 + 0x30);
}



// FUNCTION 142bf1050 FUN_142bf1050 body=2776 status=ok
// SIG undefined FUN_142bf1050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bf1050(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_618 [32];
  undefined8 *local_5f8;
  undefined1 *local_5f0;
  undefined4 *local_5e8;
  undefined1 *local_5e0;
  undefined *local_5d8;
  undefined8 local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined1 local_5b0 [8];
  longlong local_5a8;
  undefined8 local_5a0;
  int local_598;
  undefined8 *local_590;
  uint local_588;
  uint uStack_584;
  undefined8 local_580;
  float local_578;
  longlong *local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_518;
  undefined4 local_510;
  undefined8 local_508;
  undefined4 local_500;
  float local_4f8;
  float local_4f4;
  float local_4f0;
  undefined8 local_4e8;
  float local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined7 uStack_437;
  undefined4 local_430;
  undefined4 local_42c;
  undefined8 local_418;
  longlong *plStack_410;
  undefined8 local_408 [2];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [12];
  undefined4 local_3bc;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined1 local_338 [12];
  undefined4 local_32c;
  undefined8 local_324;
  undefined4 local_31c;
  undefined1 local_2a8 [12];
  undefined4 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  undefined1 local_218 [12];
  undefined4 local_20c;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_170 [72];
  longlong local_128;
  longlong local_108;
  undefined4 local_f8;
  char local_f4;
  longlong local_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8;
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_618;
  local_4a0 = param_6;
  local_570 = param_1;
  local_4a8 = param_3;
  FUN_142b90120(&local_418,param_1,param_2,*(undefined8 *)(param_3 + 8));
  iVar16 = (int)param_5[1];
  puVar11 = (undefined8 *)0x0;
  local_5a8 = 0;
  local_5a0 = 0;
  if (0 < iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (&local_5a8,iVar16);
    iVar16 = (int)param_5[1];
  }
  puVar17 = (undefined8 *)*param_5;
  puVar18 = puVar17 + (longlong)iVar16 * 3;
  uVar7 = local_5a0;
  for (; puVar17 != puVar18; puVar17 = puVar17 + 3) {
    local_5a0._0_4_ = (int)uVar7;
    lVar13 = (longlong)(int)local_5a0;
    uStack_460 = *(undefined4 *)(param_4 + 1);
    local_468 = *param_4;
    uStack_454 = *(undefined4 *)(puVar17 + 1);
    local_5a0._0_4_ = (int)local_5a0 + 1;
    uStack_450 = *puVar17;
    uStack_45c = (undefined4)uStack_450;
    uStack_458 = (undefined4)((ulonglong)uStack_450 >> 0x20);
    uStack_440 = 0;
    local_438 = 0;
    local_5a0._4_4_ = (int)(uVar7 >> 0x20);
    local_448 = uStack_454;
    if (local_5a0._4_4_ < (int)local_5a0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_5a8,uVar7 & 0xffffffff);
    }
    puVar12 = (undefined8 *)(lVar13 * 0x38 + local_5a8);
    *puVar12 = local_468;
    puVar12[1] = CONCAT44(uStack_45c,uStack_460);
    puVar12[2] = CONCAT44(uStack_454,uStack_458);
    puVar12[3] = uStack_450;
    puVar12[4] = CONCAT44(uStack_444,local_448);
    puVar12[5] = uStack_440;
    puVar12[6] = CONCAT71(uStack_437,local_438);
    param_1 = local_570;
    uVar7 = local_5a0;
  }
  if (plStack_410 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_410 + 1) = (int)plStack_410[1] + 1;
    UNLOCK();
  }
  local_5a0 = uVar7;
  (**(code **)(*param_1 + 0x7a0))(param_1,&local_5a8,local_408,0);
  *(undefined4 *)(param_5 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_5 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_5,0);
  }
  local_590 = (undefined8 *)0x0;
  local_588 = 0;
  uStack_584 = 0;
  local_598 = 0;
  puVar18 = puVar11;
  puVar17 = puVar11;
  puVar12 = puVar11;
  if (0 < (int)local_5a0) {
    do {
      lVar13 = local_5a8;
      uVar15 = (uint)puVar18;
      if (*(char *)(local_5a8 + 0x30 + (longlong)puVar11) == '\0') {
        iVar16 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar16 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_5,iVar16);
        }
        lVar6 = *param_5;
        puVar4 = (undefined8 *)((longlong)puVar11 + lVar13 + 0x18);
        uVar10 = puVar4[1];
        puVar3 = (undefined8 *)(lVar6 + (longlong)iVar16 * 0x18);
        *puVar3 = *puVar4;
        puVar3[1] = uVar10;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar16 * 0x18) =
             *(undefined8 *)((longlong)puVar11 + lVar13 + 0x28);
      }
      else {
        if (((uint)puVar12 == uVar15) && ((int)(uint)puVar12 < (int)local_5a0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(&local_590,(int)local_5a0);
          puVar12 = (undefined8 *)(ulonglong)uStack_584;
          puVar17 = local_590;
          uVar15 = local_588;
        }
        local_5c8 = *(undefined8 *)(local_5a8 + 0x18 + (longlong)puVar11);
        uStack_5c0 = *(undefined4 *)(local_5a8 + 0x20 + (longlong)puVar11);
        uVar10 = *(undefined8 *)(local_5a8 + 0xc + (longlong)puVar11);
        uStack_5b4 = *(undefined4 *)(local_5a8 + 0x14 + (longlong)puVar11);
        uStack_5bc = (undefined4)uVar10;
        uStack_5b8 = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_588 = uVar15 + 1;
        if ((int)puVar12 < (int)local_588) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_590,uVar15);
          puVar12 = (undefined8 *)(ulonglong)uStack_584;
          puVar17 = local_590;
        }
        puVar18 = (undefined8 *)(ulonglong)local_588;
        puVar17[(longlong)(int)uVar15 * 3] = local_5c8;
        (puVar17 + (longlong)(int)uVar15 * 3)[1] = CONCAT44(uStack_5bc,uStack_5c0);
        puVar17[(longlong)(int)uVar15 * 3 + 2] = CONCAT44(uStack_5b4,uStack_5b8);
      }
      lVar13 = local_4a8;
      puVar11 = puVar11 + 7;
      local_598 = local_598 + 1;
    } while (local_598 < (int)local_5a0);
    iVar16 = (int)puVar18;
    if (0 < iVar16) {
      uVar9 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(local_4a8 + 0x28));
      local_540 = *(undefined4 *)(lVar13 + 0x20);
      local_544 = *(undefined4 *)(lVar13 + 0x1c);
      local_548 = *(undefined4 *)(lVar13 + 0x18);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2c6d8) &&
         (_Init_thread_header(&DAT_146b2c6d8), DAT_146b2c6d8 == -1)) {
        FName::FName(&DAT_146b2c6d0,"EnvQueryTrace",1);
        _Init_thread_footer(&DAT_146b2c6d8);
      }
      local_5f8 = (undefined8 *)0x0;
      FUN_1422ffb20(local_d8,DAT_146b2c6d0,local_5b0,*(byte *)(lVar13 + 0x2c) & 1);
      local_c8 = 1;
      FCollisionQueryParams::AddIgnoredActors(local_d8,local_4a0);
      uVar10 = (**(code **)(*local_570 + 0x148))();
      local_5f0 = (undefined1 *)CONCAT71(local_5f0._1_7_,param_7);
      local_5f8 = (undefined8 *)&local_548;
      FUN_142bd1b30(&local_188,uVar10,uVar9,local_d8);
      cVar8 = *(char *)(lVar13 + 0x2a);
      if (cVar8 == '\0') {
        if (0 < iVar16) {
          lVar13 = (longlong)puVar17 + 0xc;
          puVar11 = puVar17;
          do {
            local_568 = *puVar11;
            local_560 = *(undefined4 *)(puVar11 + 1);
            local_558 = *(undefined8 *)((longlong)puVar11 + 0xc);
            local_550 = local_560;
            _guard_xfg_dispatch_icall_nop(local_218,0,0x90);
            local_5f0 = local_170;
            local_5e8 = (undefined4 *)&DAT_146aefe68;
            local_5f8 = (undefined8 *)CONCAT44(local_5f8._4_4_,local_f8);
            local_20c = 0x3f800000;
            cVar8 = UWorld::LineTraceSingleByChannel(local_188,local_218,&local_568,lVar13);
            local_4b8 = local_204;
            local_4b0 = local_1fc;
            if ((cVar8 != '\0') || (local_f4 != '\x01')) {
              iVar16 = (int)param_5[1];
              uStack_5b8 = 0;
              uStack_5b4 = 0;
              puVar12 = &local_4b8;
              if (cVar8 == '\0') {
                puVar12 = &local_558;
              }
              uStack_5c0 = *(undefined4 *)(puVar12 + 1);
              local_5c8 = *puVar12;
              *(int *)(param_5 + 1) = iVar16 + 1;
              if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_5);
              }
              lVar6 = *param_5;
              puVar12 = (undefined8 *)(lVar6 + (longlong)iVar16 * 0x18);
              *puVar12 = local_5c8;
              puVar12[1] = CONCAT44(uStack_5bc,uStack_5c0);
              *(ulonglong *)(lVar6 + 0x10 + (longlong)iVar16 * 0x18) =
                   CONCAT44(uStack_5b4,uStack_5b8);
            }
            lVar13 = lVar13 + 0x18;
            puVar11 = puVar11 + 3;
            puVar18 = (undefined8 *)((longlong)puVar18 + -1);
          } while (puVar18 != (undefined8 *)0x0);
        }
      }
      else if (cVar8 == '\x01') {
        if (0 < iVar16) {
          pfVar14 = (float *)((longlong)puVar17 + 0xc);
          do {
            local_580 = *(undefined8 *)(pfVar14 + -3);
            fVar5 = pfVar14[-1];
            local_4e8 = *(undefined8 *)pfVar14;
            local_578 = fVar5;
            local_4e0 = fVar5;
            _guard_xfg_dispatch_icall_nop(local_2a8,0,0x90);
            local_4d0 = local_17c;
            local_4f8 = *pfVar14 - (float)local_580;
            local_4d4 = local_180;
            local_4cc = local_178;
            local_4f4 = pfVar14[1] - local_580._4_4_;
            local_4f0 = pfVar14[2] - fVar5;
            local_29c = 0x3f800000;
            local_4d8 = 1;
            uVar10 = FVector::Rotation(&local_4f8,local_3e8);
            puVar11 = (undefined8 *)FRotator::Quaternion(uVar10,local_3d8);
            local_5d8 = &DAT_146aefe68;
            local_3f8 = *puVar11;
            uStack_3f0 = puVar11[1];
            local_5e0 = local_170;
            local_5e8 = &local_4d8;
            local_5f0 = (undefined1 *)CONCAT44(local_5f0._4_4_,local_f8);
            local_5f8 = &local_3f8;
            cVar8 = UWorld::SweepSingleByChannel(local_188,local_2a8,&local_580,pfVar14);
            local_4c8 = local_294;
            local_4c0 = local_28c;
            if ((cVar8 != '\0') || (local_f4 != '\x01')) {
              iVar16 = (int)param_5[1];
              uStack_5b8 = 0;
              uStack_5b4 = 0;
              puVar11 = &local_4c8;
              if (cVar8 == '\0') {
                puVar11 = &local_4e8;
              }
              uStack_5c0 = *(undefined4 *)(puVar11 + 1);
              local_5c8 = *puVar11;
              *(int *)(param_5 + 1) = iVar16 + 1;
              if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_5);
              }
              lVar13 = *param_5;
              puVar11 = (undefined8 *)(lVar13 + (longlong)iVar16 * 0x18);
              *puVar11 = local_5c8;
              puVar11[1] = CONCAT44(uStack_5bc,uStack_5c0);
              *(ulonglong *)(lVar13 + 0x10 + (longlong)iVar16 * 0x18) =
                   CONCAT44(uStack_5b4,uStack_5b8);
            }
            pfVar14 = pfVar14 + 6;
            puVar18 = (undefined8 *)((longlong)puVar18 + -1);
          } while (puVar18 != (undefined8 *)0x0);
        }
      }
      else if (cVar8 == '\x02') {
        if (0 < iVar16) {
          lVar13 = (longlong)puVar17 + 0xc;
          puVar11 = puVar17;
          do {
            local_518 = *puVar11;
            local_510 = *(undefined4 *)(puVar11 + 1);
            local_508 = *(undefined8 *)((longlong)puVar11 + 0xc);
            local_500 = local_510;
            _guard_xfg_dispatch_icall_nop(local_338,0,0x90);
            local_5e0 = local_170;
            local_5d8 = &DAT_146aefe68;
            local_5e8 = &local_430;
            local_42c = local_180;
            local_5f0 = (undefined1 *)CONCAT44(local_5f0._4_4_,local_f8);
            local_5f8 = (undefined8 *)&DAT_1464aa810;
            local_32c = 0x3f800000;
            local_430 = 2;
            cVar8 = UWorld::SweepSingleByChannel(local_188,local_338,&local_518,lVar13);
            local_478 = local_324;
            local_470 = local_31c;
            if ((cVar8 != '\0') || (local_f4 != '\x01')) {
              iVar16 = (int)param_5[1];
              uStack_5b8 = 0;
              uStack_5b4 = 0;
              puVar12 = &local_478;
              if (cVar8 == '\0') {
                puVar12 = &local_508;
              }
              uStack_5c0 = *(undefined4 *)(puVar12 + 1);
              local_5c8 = *puVar12;
              *(int *)(param_5 + 1) = iVar16 + 1;
              if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_5);
              }
              lVar6 = *param_5;
              puVar12 = (undefined8 *)(lVar6 + (longlong)iVar16 * 0x18);
              *puVar12 = local_5c8;
              puVar12[1] = CONCAT44(uStack_5bc,uStack_5c0);
              *(ulonglong *)(lVar6 + 0x10 + (longlong)iVar16 * 0x18) =
                   CONCAT44(uStack_5b4,uStack_5b8);
            }
            lVar13 = lVar13 + 0x18;
            puVar11 = puVar11 + 3;
            puVar18 = (undefined8 *)((longlong)puVar18 + -1);
          } while (puVar18 != (undefined8 *)0x0);
        }
      }
      else if ((cVar8 == '\x03') && (0 < iVar16)) {
        lVar13 = (longlong)puVar17 + 0xc;
        puVar11 = puVar17;
        do {
          local_538 = *puVar11;
          local_530 = *(undefined4 *)(puVar11 + 1);
          local_528 = *(undefined8 *)((longlong)puVar11 + 0xc);
          local_520 = local_530;
          _guard_xfg_dispatch_icall_nop(local_3c8,0,0x90);
          local_5e0 = local_170;
          local_5d8 = &DAT_146aefe68;
          local_5e8 = &local_488;
          local_5f0 = (undefined1 *)CONCAT44(local_5f0._4_4_,local_f8);
          local_5f8 = (undefined8 *)&DAT_1464aa810;
          local_484 = local_180;
          local_480 = local_178;
          local_3bc = 0x3f800000;
          local_488 = 3;
          cVar8 = UWorld::SweepSingleByChannel(local_188,local_3c8,&local_538,lVar13);
          local_498 = local_3b4;
          local_490 = local_3ac;
          if ((cVar8 != '\0') || (local_f4 != '\x01')) {
            iVar16 = (int)param_5[1];
            uStack_5b8 = 0;
            uStack_5b4 = 0;
            puVar12 = &local_498;
            if (cVar8 == '\0') {
              puVar12 = &local_528;
            }
            uStack_5c0 = *(undefined4 *)(puVar12 + 1);
            local_5c8 = *puVar12;
            *(int *)(param_5 + 1) = iVar16 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar16 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_5);
            }
            lVar6 = *param_5;
            puVar12 = (undefined8 *)(lVar6 + (longlong)iVar16 * 0x18);
            *puVar12 = local_5c8;
            puVar12[1] = CONCAT44(uStack_5bc,uStack_5c0);
            *(ulonglong *)(lVar6 + 0x10 + (longlong)iVar16 * 0x18) = CONCAT44(uStack_5b4,uStack_5b8)
            ;
          }
          lVar13 = lVar13 + 0x18;
          puVar11 = puVar11 + 3;
          puVar18 = (undefined8 *)((longlong)puVar18 + -1);
        } while (puVar18 != (undefined8 *)0x0);
      }
      if (local_f0 != 0) {
        FMemory::Free();
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
    if (puVar17 != (undefined8 *)0x0) {
      FMemory::Free(puVar17);
    }
  }
  if (local_5a8 != 0) {
    FMemory::Free();
  }
  if (plStack_410 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_410 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_410)(plStack_410);
      LOCK();
      piVar2 = (int *)((longlong)plStack_410 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_410 + 8))(plStack_410,1);
      }
    }
  }
  return;
}



// FUNCTION 142bf1b30 FUN_142bf1b30 body=74 status=ok
// SIG undefined FUN_142bf1b30(void)

void FUN_142bf1b30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UThrobber::GetPrivateStaticClass();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x438))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 142bf1b80 FUN_142bf1b80 body=95 status=ok
// SIG undefined FUN_142bf1b80(void)

void FUN_142bf1b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  local_28 = param_2;
  FWeakObjectPtr::operator=(local_20,param_3);
  local_18 = 0;
  local_13 = 0;
  local_14 = param_4;
  plVar1 = (longlong *)FUN_142be2d50(param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x438))(plVar1,&local_28);
  }
  return;
}



// FUNCTION 142bf1be0 SetBehaviorAsset body=22 status=ok
// SIG undefined SetBehaviorAsset(void)

undefined1 UBTTask_RunBehaviorDynamic::SetBehaviorAsset(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != param_2) {
    *(longlong *)(param_1 + 0x80) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 142bf1c30 SetFinishOnMessage body=114 status=ok
// SIG undefined SetFinishOnMessage(void)

void UBTTask_BlueprintBase::SetFinishOnMessage(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = UProgressBar::GetPrivateStaticClass();
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
      FUN_142bc7490(lVar1,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142bf1cb0 SetFinishOnMessageWithId body=130 status=ok
// SIG undefined SetFinishOnMessageWithId(void)

void UBTTask_BlueprintBase::SetFinishOnMessageWithId
               (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = UProgressBar::GetPrivateStaticClass();
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
      FUN_142bc7610(lVar1,param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142bf1d40 FUN_142bf1d40 body=17 status=ok
// SIG undefined FUN_142bf1d40(void)

void FUN_142bf1d40(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2b) = 2;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffffab | 8;
  return;
}



// FUNCTION 142bf1d60 SetNamedParam body=67 status=ok
// SIG undefined SetNamedParam(void)

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam
               (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined8 *local_18;
  undefined4 *local_10;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    local_res10 = param_2;
    local_res18[0] = param_3;
    FUN_1417e05c0(*(longlong *)(param_1 + 0x48) + 0x70,local_res8,&local_18,0);
  }
  return;
}



// FUNCTION 142bf1db0 FUN_142bf1db0 body=13 status=ok
// SIG undefined FUN_142bf1db0(void)

void FUN_142bf1db0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2b) = 1;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffffe7;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x44;
  return;
}



// FUNCTION 142bf1dc0 SetNum body=116 status=ok
// SIG undefined SetNum(void)

void TArray<FName,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar1 * 0xc),0,(longlong)(iVar2 - iVar1) * 0xc);
    return;
  }
  if (iVar2 < iVar1) {
    TArray<FGameplayTag,FDefaultAllocator>::RemoveAtImpl(param_1,param_2,iVar1 - iVar2,param_3);
  }
  return;
}



// FUNCTION 142bf1e40 SetOwner body=113 status=ok
// SIG undefined SetOwner(void)

void UBTDecorator_BlueprintBase::SetOwner(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  *(longlong *)(param_1 + 0x70) = param_2;
  if (param_2 != 0) {
    lVar2 = FUN_142c2de20();
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
      *(longlong *)(param_1 + 0x68) = param_2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 142bf1ec0 SetOwner body=113 status=ok
// SIG undefined SetOwner(void)

void UBTService_BlueprintBase::SetOwner(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  *(longlong *)(param_1 + 0x78) = param_2;
  if (param_2 != 0) {
    lVar2 = FUN_142c2de20();
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
      *(longlong *)(param_1 + 0x70) = param_2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 142bf1f40 FUN_142bf1f40 body=29 status=ok
// SIG undefined FUN_142bf1f40(void)

void FUN_142bf1f40(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x138) + -1;
  *(undefined1 *)(param_1 + 0x181) = 1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x138) = iVar1;
  return;
}



// FUNCTION 142bf1f60 FUN_142bf1f60 body=49 status=ok
// SIG undefined FUN_142bf1f60(void)

void FUN_142bf1f60(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) & 0xfffffffe;
  *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) | (uint)param_2;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x5a) != '\x03') {
      *(undefined1 *)(param_1 + 0x5a) = 3;
    }
    *(undefined1 *)(param_1 + 0xf1) = 4;
  }
  else if (*(char *)(param_1 + 0x5a) == '\x03') {
    *(undefined1 *)(param_1 + 0x5a) = 2;
    return;
  }
  return;
}



// FUNCTION 142bf1fa0 FUN_142bf1fa0 body=2298 status=ok
// SIG undefined FUN_142bf1fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bf1fa0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_488 [32];
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  undefined4 *local_448;
  ulonglong *puStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined1 local_42c [4];
  undefined1 local_428 [4];
  undefined1 local_424 [4];
  longlong local_420;
  undefined1 local_418 [8];
  longlong local_410;
  undefined1 local_408 [8];
  undefined8 local_400;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined4 *local_3e8;
  undefined4 *puStack_3e0;
  undefined8 local_3d8;
  longlong *local_3d0;
  int local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  undefined1 local_3a0 [16];
  undefined1 local_390 [8];
  longlong *local_388;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [8];
  longlong *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [40];
  undefined1 local_230 [40];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [48];
  longlong *local_1a8;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  if (param_1 != (longlong *)0x0) {
    local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_488;
    lVar7 = (**(code **)(*param_1 + 0x148))();
    if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x138), lVar7 != 0)) {
      lVar8 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) && (param_2 != 0)) && (param_1[0x91] != 0)) {
        plVar9 = (longlong *)FUN_142be81e0(param_1);
        if (plVar9 == (longlong *)0x0) {
          FName::FName(local_418,&DAT_1457efb5c,1);
          local_420 = param_1[3];
          lVar7 = FText::FromName(local_208,&local_420);
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_2d0,L"SimpleMove failed for {0}: missing components",
                              L"AIBlueprintHelperLibrary",L"SimpleMoveErrorNoComp");
          plVar9 = (longlong *)FTextFormat::FTextFormat(local_288,uVar10);
          local_98[0] = 4;
          FText::FText(local_88,lVar7);
          local_448 = (undefined4 *)*plVar9;
          local_3e8 = local_98;
          puStack_3e0 = local_68;
          puStack_440 = (ulonglong *)plVar9[1];
          local_70 = '\x01';
          if (puStack_440 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(puStack_440 + 1) = (int)puStack_440[1] + 1;
            UNLOCK();
          }
          local_328 = local_3e8;
          uStack_320 = puStack_3e0;
          uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_3a0,&local_328);
          uVar10 = FText::Format(local_2e8,&local_448,uVar10);
          FText::FText(local_318,uVar10);
          if (local_2e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_2e0 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_2e0)(local_2e0);
              LOCK();
              piVar2 = (int *)((longlong)local_2e0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_2e0 + 8))(local_2e0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3a0);
          if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          plVar9 = (longlong *)plVar9[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar9)(plVar9);
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
          plVar9 = *(longlong **)(lVar7 + 8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar9)(plVar9);
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
          uVar10 = FUN_14161fb50(local_258,local_418);
          FMessageLog::Warning(uVar10,local_390,local_318);
          if (local_388 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_388 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_388)(local_388);
              LOCK();
              piVar2 = (int *)((longlong)local_388 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_388 + 8))(local_388,1);
              }
            }
          }
          FMessageLog::~FMessageLog(local_258);
          if (local_310 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_310 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_310)(local_310);
              LOCK();
              piVar2 = (int *)((longlong)local_310 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_310 + 8))(local_310,1);
              }
            }
          }
          plVar9 = local_2c8;
        }
        else {
          cVar6 = (**(code **)(*plVar9 + 0x4a0))(plVar9);
          if (cVar6 != '\0') {
            local_468._0_1_ = 1;
            cVar6 = FUN_142c09900(plVar9,param_2,3,0xbf800000);
            if ((int)plVar9[0x3c] != 0) {
              local_468._0_1_ = cVar6 == '\0';
              (**(code **)(*plVar9 + 0x428))(plVar9,lVar7,0x180,DAT_146b2c4ec);
            }
            if (cVar6 != '\0') {
              FUN_142c0f1e0(plVar9,local_42c,0,0);
              return;
            }
            uVar10 = (**(code **)(param_1[0x8b] + 0x10))(param_1 + 0x8b);
            lVar8 = thunk_FUN_142b8f070(lVar7,uVar10);
            if (lVar8 == 0) {
              return;
            }
            lVar4 = *(longlong *)(param_2 + 0x168);
            local_348 = 0;
            uStack_340 = 0;
            local_338 = 0;
            uStack_330 = 0;
            if (lVar4 == 0) {
              local_3f8 = DAT_1468b5d98;
              puVar11 = &local_400;
              local_400 = _DAT_1468b5d90;
            }
            else {
              local_268 = *(undefined4 *)(lVar4 + 0x220);
              uStack_264 = *(undefined4 *)(lVar4 + 0x224);
              uStack_260 = *(undefined4 *)(lVar4 + 0x228);
              uStack_25c = *(undefined4 *)(lVar4 + 0x22c);
              puVar11 = (undefined8 *)&local_438;
              local_438 = local_268;
              local_430 = uStack_260;
              uStack_434 = uStack_264;
            }
            local_3f4 = *puVar11;
            local_3ec = *(undefined4 *)(puVar11 + 1);
            uVar10 = (**(code **)(param_1[0x8b] + 0x18))(param_1 + 0x8b,&local_3e8);
            local_458 = &local_348;
            local_460 = &local_338;
            local_468 = &local_3f4;
            FUN_142b80bd0(local_198,param_1,lVar8,uVar10);
            uVar10 = FUN_142b80820(local_118,local_198);
            FUN_142b8cc30(lVar7,&local_3d8,uVar10,0);
            if (local_3c8 == 3) {
              FUN_142b977f0(local_3d8,param_2,0x42c80000);
              local_3b0 = local_3d8;
              local_3a8 = local_3d0;
              if (local_3d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_3d0 + 1) = (int)local_3d0[1] + 1;
                UNLOCK();
              }
              lVar7 = *plVar9;
              uVar10 = FAIMoveRequest::FAIMoveRequest(local_1d8,param_2);
              (**(code **)(lVar7 + 0x418))(plVar9,local_428,uVar10,&local_3b0);
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_1a8 + 1;
                lVar7 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_1a8)(local_1a8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1a8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_1a8 + 8))(local_1a8,1);
                  }
                }
              }
            }
            else if ((int)plVar9[0x3c] != 0) {
              FUN_142c0f1e0(plVar9,local_424,5);
            }
            if (local_3d0 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_3d0 + 1;
              lVar7 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_3d0)(local_3d0);
                LOCK();
                piVar2 = (int *)((longlong)local_3d0 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_3d0 + 8))(local_3d0,1);
                }
              }
            }
            FPathFindingQuery::~FPathFindingQuery(local_198);
            return;
          }
          FName::FName(local_408,&DAT_1457efbbc,1);
          local_410 = param_1[3];
          lVar7 = FText::FromName(local_1f0,&local_410);
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_2a0,L"SimpleMove failed for {0}: movement not allowed",
                              L"AIBlueprintHelperLibrary",L"SimpleMoveErrorMovement");
          puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_278,uVar10);
          local_68[0] = 4;
          FText::FText(local_58,lVar7);
          local_3c0 = *puVar11;
          local_448 = local_68;
          puStack_440 = local_38;
          local_3b8 = puVar11[1];
          local_40 = '\x01';
          if (local_3b8 != 0) {
            LOCK();
            *(int *)(local_3b8 + 8) = *(int *)(local_3b8 + 8) + 1;
            UNLOCK();
          }
          local_378 = local_448;
          uStack_370 = puStack_440;
          uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_368,&local_378);
          uVar10 = FText::Format(local_2b8,&local_3c0,uVar10);
          FText::FText(local_300,uVar10);
          if (local_2b0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_2b0 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_2b0)(local_2b0);
              LOCK();
              piVar2 = (int *)((longlong)local_2b0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_2b0 + 8))(local_2b0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_368);
          if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
            LOCK();
            plVar9 = local_50 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          plVar9 = (longlong *)puVar11[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar9)(plVar9);
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
          plVar9 = *(longlong **)(lVar7 + 8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar9)(plVar9);
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
          uVar10 = FUN_14161fb50(local_230,local_408);
          FMessageLog::Warning(uVar10,local_358,local_300);
          if (local_350 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_350 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_350)(local_350);
              LOCK();
              piVar2 = (int *)((longlong)local_350 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_350 + 8))(local_350,1);
              }
            }
          }
          FMessageLog::~FMessageLog(local_230);
          if (local_2f8 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_2f8 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2f8)(local_2f8);
              LOCK();
              piVar2 = (int *)((longlong)local_2f8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_2f8 + 8))(local_2f8,1);
              }
            }
          }
          plVar9 = local_298;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
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
      }
    }
  }
  return;
}



// FUNCTION 142bf28a0 FUN_142bf28a0 body=2191 status=ok
// SIG undefined FUN_142bf28a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bf28a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_458 [32];
  ulonglong local_438;
  undefined8 *local_430;
  undefined8 *local_428;
  undefined4 *local_418;
  ulonglong *puStack_410;
  undefined1 local_408 [4];
  undefined1 local_404 [4];
  undefined1 local_400 [8];
  longlong local_3f8;
  undefined1 local_3f0 [8];
  longlong local_3e8;
  undefined1 local_3e0 [8];
  undefined4 *local_3d8;
  undefined4 *puStack_3d0;
  undefined8 local_3c8;
  longlong *local_3c0;
  int local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined1 local_390 [16];
  undefined1 local_380 [8];
  longlong *local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [8];
  longlong *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [40];
  undefined1 local_230 [40];
  undefined1 local_208 [24];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [48];
  longlong *local_1a8;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  if (param_1 != (longlong *)0x0) {
    local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_458;
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x138), lVar6 != 0)) {
      lVar7 = FUN_142ba9430();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (param_1[0x91] != 0)) {
        plVar8 = (longlong *)FUN_142be81e0(param_1);
        if (plVar8 == (longlong *)0x0) {
          FName::FName(local_3f0,&DAT_1457efbec,1);
          local_3f8 = param_1[3];
          lVar6 = FText::FromName(local_208,&local_3f8);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_2c0,L"SimpleMove failed for {0}: missing components",
                             L"AIBlueprintHelperLibrary",L"SimpleMoveErrorNoComp");
          plVar8 = (longlong *)FTextFormat::FTextFormat(local_268,uVar9);
          local_98[0] = 4;
          FText::FText(local_88,lVar6);
          local_418 = (undefined4 *)*plVar8;
          local_3d8 = local_98;
          puStack_3d0 = local_68;
          puStack_410 = (ulonglong *)plVar8[1];
          local_70 = '\x01';
          if (puStack_410 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(puStack_410 + 1) = (int)puStack_410[1] + 1;
            UNLOCK();
          }
          local_318 = local_3d8;
          uStack_310 = puStack_3d0;
          uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_390,&local_318);
          uVar9 = FText::Format(local_2d8,&local_418,uVar9);
          FText::FText(local_308,uVar9);
          if (local_2d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_2d0 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2d0)(local_2d0);
              LOCK();
              piVar2 = (int *)((longlong)local_2d0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_2d0 + 8))(local_2d0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_390);
          if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_80 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          plVar8 = (longlong *)plVar8[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar8)(plVar8);
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
          plVar8 = *(longlong **)(lVar6 + 8);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar8)(plVar8);
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
          uVar9 = FUN_14161fb50(local_258,local_3f0);
          FMessageLog::Warning(uVar9,local_380,local_308);
          if (local_378 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_378 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_378)(local_378);
              LOCK();
              piVar2 = (int *)((longlong)local_378 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_378 + 8))(local_378,1);
              }
            }
          }
          FMessageLog::~FMessageLog(local_258);
          if (local_300 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_300 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_300)(local_300);
              LOCK();
              piVar2 = (int *)((longlong)local_300 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_300 + 8))(local_300,1);
              }
            }
          }
          plVar8 = local_2b8;
        }
        else {
          cVar5 = (**(code **)(*plVar8 + 0x4a0))(plVar8);
          if (cVar5 != '\0') {
            cVar5 = FUN_142c09800(plVar8,param_2,1,0xbf800000);
            if ((int)plVar8[0x3c] != 0) {
              local_438 = CONCAT71(local_438._1_7_,cVar5 == '\0');
              (**(code **)(*plVar8 + 0x428))(plVar8,lVar6,0x180,DAT_146b2c4ec);
              if ((int)plVar8[0x3c] != 0) {
                local_438 = local_438 & 0xffffffffffffff00;
                (**(code **)(*plVar8 + 0x428))(plVar8,lVar6,0x180,DAT_146b2c570);
              }
            }
            if (cVar5 != '\0') {
              FUN_142c0f1e0(plVar8,local_408,0,0);
              return;
            }
            uVar9 = (**(code **)(param_1[0x8b] + 0x10))(param_1 + 0x8b);
            lVar7 = thunk_FUN_142b8f070(lVar6,uVar9);
            if (lVar7 == 0) {
              return;
            }
            local_338 = 0;
            uStack_330 = 0;
            local_328 = 0;
            uStack_320 = 0;
            uVar9 = (**(code **)(param_1[0x8b] + 0x18))(param_1 + 0x8b,&local_3d8);
            local_428 = &local_338;
            local_430 = &local_328;
            local_438 = param_2;
            FUN_142b80bd0(local_198,param_1,lVar7,uVar9);
            uVar9 = FUN_142b80820(local_118,local_198);
            FUN_142b8cc30(lVar6,&local_3c8,uVar9,0);
            if (local_3b8 == 3) {
              local_3a0 = local_3c8;
              local_398 = local_3c0;
              if (local_3c0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_3c0 + 1) = (int)local_3c0[1] + 1;
                UNLOCK();
              }
              lVar6 = *plVar8;
              uVar9 = FAIMoveRequest::FAIMoveRequest(local_1d8,param_2);
              (**(code **)(lVar6 + 0x418))(plVar8,local_404,uVar9,&local_3a0);
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_1a8 + 1;
                lVar6 = *plVar8;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_1a8)(local_1a8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1a8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_1a8 + 8))(local_1a8,1);
                  }
                }
              }
            }
            else if ((int)plVar8[0x3c] != 0) {
              FUN_142c0f1e0(plVar8,local_400,5);
            }
            if (local_3c0 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_3c0 + 1;
              lVar6 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_3c0)(local_3c0);
                LOCK();
                piVar2 = (int *)((longlong)local_3c0 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_3c0 + 8))(local_3c0,1);
                }
              }
            }
            FPathFindingQuery::~FPathFindingQuery(local_198);
            return;
          }
          FName::FName(local_3e0,&DAT_1457efc24,1);
          local_3e8 = param_1[3];
          lVar6 = FText::FromName(local_1f0,&local_3e8);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_290,L"SimpleMove failed for {0}: movement not allowed",
                             L"AIBlueprintHelperLibrary",L"SimpleMoveErrorMovement");
          puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_278,uVar9);
          local_68[0] = 4;
          FText::FText(local_58,lVar6);
          local_3b0 = *puVar10;
          local_418 = local_68;
          puStack_410 = local_38;
          local_3a8 = puVar10[1];
          local_40 = '\x01';
          if (local_3a8 != 0) {
            LOCK();
            *(int *)(local_3a8 + 8) = *(int *)(local_3a8 + 8) + 1;
            UNLOCK();
          }
          local_368 = local_418;
          uStack_360 = puStack_410;
          uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_358,&local_368);
          uVar9 = FText::Format(local_2a8,&local_3b0,uVar9);
          FText::FText(local_2f0,uVar9);
          if (local_2a0 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_2a0 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2a0)(local_2a0);
              LOCK();
              piVar2 = (int *)((longlong)local_2a0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_2a0 + 8))(local_2a0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_358);
          if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
            LOCK();
            plVar8 = local_50 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
          plVar8 = (longlong *)puVar10[1];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar8)(plVar8);
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
          plVar8 = *(longlong **)(lVar6 + 8);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar8)(plVar8);
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
          uVar9 = FUN_14161fb50(local_230,local_3e0);
          FMessageLog::Warning(uVar9,local_348,local_2f0);
          if (local_340 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_340 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_340)(local_340);
              LOCK();
              piVar2 = (int *)((longlong)local_340 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_340 + 8))(local_340,1);
              }
            }
          }
          FMessageLog::~FMessageLog(local_230);
          if (local_2e8 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_2e8 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_2e8)(local_2e8);
              LOCK();
              piVar2 = (int *)((longlong)local_2e8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_2e8 + 8))(local_2e8,1);
              }
            }
          }
          plVar8 = local_288;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar8)(plVar8);
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
      }
    }
  }
  return;
}



// FUNCTION 142bf3130 FUN_142bf3130 body=335 status=ok
// SIG undefined FUN_142bf3130(void)

longlong *
FUN_142bf3130(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_48 [40];
  char local_20;
  
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    return (longlong *)0x0;
  }
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar4 = FUN_1429d7ab0();
  lVar6 = param_2;
  while (lVar6 != lVar4) {
    lVar6 = *(longlong *)(lVar6 + 0x30);
    if (lVar6 == 0) {
      return (longlong *)0x0;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_48);
  local_20 = (param_6 ^ 1) * '\x02' + '\x01';
  lVar4 = FUN_1429d7ab0();
  lVar6 = param_2;
  do {
    lVar7 = param_2;
    if (lVar6 == lVar4) break;
    lVar6 = *(longlong *)(lVar6 + 0x30);
    lVar7 = 0;
  } while (lVar6 != 0);
  plVar5 = (longlong *)UWorld::SpawnActor(lVar3,lVar7,param_4,param_5,local_48);
  if (plVar5 != (longlong *)0x0) {
    if (plVar5[0x92] == 0) {
      (**(code **)(*plVar5 + 0x7c0))(plVar5);
    }
    if ((param_3 != 0) && (plVar1 = (longlong *)plVar5[0x92], plVar1 != (longlong *)0x0)) {
      lVar3 = FUN_142c2de20();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar1 + 0x888))(plVar1,param_3);
      }
    }
  }
  return plVar5;
}



// FUNCTION 142bf3280 FUN_142bf3280 body=376 status=ok
// SIG undefined FUN_142bf3280(void)

void FUN_142bf3280(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if ((bVar2 & 2) != 0) goto LAB_142bf32de;
  if (*(short *)((longlong)param_1 + 0x1e) == 0) {
    *(byte *)((longlong)param_1 + 0x22) = bVar2 & 0xfe;
    goto LAB_142bf32de;
  }
  if ((bVar2 & 4) == 0) {
    *(byte *)((longlong)param_1 + 0x22) = bVar2 | 1;
    goto LAB_142bf32de;
  }
  if ((char)param_1[4] == '\0') {
    if (((bVar2 & 1) == 0) ||
       (*(short *)((longlong)param_1 + 0x1c) != *(short *)((longlong)param_1 + 0x1e))) {
LAB_142bf32d5:
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
  }
  else {
    if (((bVar2 & 1) == 0) || (*(short *)((longlong)param_1 + 0x1c) < 1)) goto LAB_142bf32d5;
    bVar3 = 1;
  }
  *(byte *)((longlong)param_1 + 0x22) = bVar2 & 0xfe | bVar3;
LAB_142bf32de:
  _isnan((double)*(float *)(param_1 + 3));
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  plVar4 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar4 + 0x156) & 2) == 0) {
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 4) != 0) {
        *(undefined4 *)(param_1 + 3) = 0xbf800000;
        puVar1 = (uint *)(*plVar4 + 4 + (longlong)(int)param_1[1] * 0xc);
        *puVar1 = *puVar1 | 0x80000000;
        *(int *)(*param_1 + 0x150) = *(int *)(*param_1 + 0x150) + -1;
        plVar4 = (longlong *)*param_1;
      }
    }
    else if ((*(char *)((longlong)param_1 + 0x21) == '\0') && ((bVar2 & 2) == 0)) {
      *(float *)(param_1 + 3) =
           *(float *)(param_1 + 3) / (float)(int)*(short *)((longlong)param_1 + 0x1c);
    }
    *(int *)(*(longlong *)(plVar4[0x28] + (longlong)(int)param_1[1] * 0x10) +
            (longlong)*(int *)((longlong)plVar4 + 0x134) * 4) = (int)param_1[3];
    return;
  }
  if ((bVar2 & 1) == 0) {
    *(undefined4 *)(param_1 + 3) = 0xbf800000;
    puVar1 = (uint *)(*plVar4 + 4 + (longlong)(int)param_1[1] * 0xc);
    *puVar1 = *puVar1 | 0x80000000;
    *(int *)(*param_1 + 0x150) = *(int *)(*param_1 + 0x150) + -1;
    return;
  }
  if ((bVar2 & 2) != 0) {
    *(int *)(*(longlong *)(plVar4[0x28] + (longlong)(int)param_1[1] * 0x10) +
            (longlong)*(int *)((longlong)plVar4 + 0x134) * 4) = (int)param_1[3];
    plVar4 = (longlong *)*param_1;
  }
  FUN_142beca30(plVar4,(int)param_1[1]);
  *(byte *)(*param_1 + 0x156) = *(byte *)(*param_1 + 0x156) | 1;
  *(undefined1 *)(*param_1 + 0x3d) = 1;
  return;
}



// FUNCTION 142bf3400 FUN_142bf3400 body=922 status=ok
// SIG undefined FUN_142bf3400(void)

void FUN_142bf3400(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  longlong local_98;
  longlong *local_90;
  
  if (DAT_146b17150 != 0) {
    uVar7 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
    lVar8 = FUN_1428761d0(DAT_146b17150,uVar7);
    if (lVar8 != 0) {
      iVar10 = *(int *)(param_1 + 0x18);
      uVar14 = 0;
      iVar13 = 0;
      fVar17 = *(float *)(param_1 + 0x10c);
      uVar11 = uVar14;
      uVar15 = uVar14;
      while (((0.0 < fVar17 && (iVar13 = (int)uVar15, (longlong)uVar11 < (longlong)iVar10)) &&
             (*(int *)(param_1 + 0x20) + iVar13 < iVar10))) {
        QueryPerformanceCounter(&local_res18);
        plVar9 = (longlong *)(uVar11 * 0x10 + *(longlong *)(param_1 + 0x10));
        fVar16 = 0.0;
        dVar6 = (double)local_res18.QuadPart * DAT_1468b02f8;
        plVar3 = (longlong *)plVar9[1];
        lVar8 = *plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if ((lVar8 == 0) || (*(int *)(lVar8 + 0x28) != 0)) {
          uVar11 = uVar11 + 1;
        }
        else {
          FUN_142be0b90(lVar8,fVar17);
          if (*(int *)(lVar8 + 0x28) == 0) {
            if (*(char *)(param_1 + 0x110) != '\0') goto LAB_142bf35d2;
          }
          else {
            if (0.025 < *(float *)(lVar8 + 0x160)) {
              *(byte *)(lVar8 + 0x156) = *(byte *)(lVar8 + 0x156) | 4;
            }
            QueryPerformanceCounter(&local_res20);
            dVar5 = (double)local_res20.QuadPart * DAT_1468b02f8;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_98 = lVar8;
            local_90 = plVar3;
            FUN_140699060(lVar8 + 0x60,&local_98);
            QueryPerformanceCounter(&local_b8);
            uVar15 = (ulonglong)(iVar13 + 1);
            fVar16 = (float)((double)local_b8.QuadPart * DAT_1468b02f8 - dVar5);
LAB_142bf35d2:
            uVar11 = uVar11 + 1;
          }
          if ((0.025 < *(float *)(lVar8 + 0x160)) && ((*(byte *)(lVar8 + 0x156) & 4) == 0)) {
            *(byte *)(lVar8 + 0x156) = *(byte *)(lVar8 + 0x156) | 4;
          }
        }
        iVar13 = (int)uVar15;
        if ((*(char *)(param_1 + 0x110) != '\0') && (uVar11 == (longlong)iVar10)) {
          uVar11 = uVar14;
        }
        QueryPerformanceCounter(&local_b0);
        fVar17 = fVar17 - (float)(((double)local_b0.QuadPart * DAT_1468b02f8 - dVar6) -
                                 (double)fVar16);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
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
      }
      uVar12 = *(int *)(param_1 + 0x20) + iVar13;
      if (0 < (int)uVar12) {
        if ((uVar12 == *(uint *)(param_1 + 0x18)) ||
           ((*(char *)(param_1 + 0x110) == '\0' && (*(int *)(param_1 + 0x20) < 1)))) {
          if (0 < (int)uVar12) {
            uVar11 = (ulonglong)uVar12;
            do {
              QueryPerformanceCounter(&local_a0);
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_1 + 0x10,0,uVar12,0);
        }
        else {
          iVar10 = *(uint *)(param_1 + 0x18) - 1;
          if (-1 < iVar10) {
            lVar8 = (longlong)iVar10 << 4;
            do {
              if ((int)uVar12 < 1) break;
              lVar4 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x10));
              if (lVar4 == 0) {
                TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::
                RemoveAtImpl(param_1 + 0x10,iVar10,1);
              }
              else if (*(int *)(lVar4 + 0x28) != 0) {
                QueryPerformanceCounter(&local_a8);
                TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::
                RemoveAtImpl(param_1 + 0x10,iVar10,1);
                uVar12 = uVar12 - 1;
              }
              lVar8 = lVar8 + -0x10;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 142bf37a0 FUN_142bf37a0 body=172 status=ok
// SIG undefined FUN_142bf37a0(void)

void FUN_142bf37a0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1422406d0();
  if ((((param_1[0x117] != 0) && (param_1[0x130] == 0)) &&
      (lVar2 = (**(code **)(*param_1 + 0x148))(param_1), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x150), lVar2 != 0)) {
    lVar3 = FUN_142c32730();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142bef450(param_1);
    }
  }
  if ((param_1[0x130] != 0) && (*(int *)(param_1[0x130] + 0x28) == 0)) {
    FUN_142be9020(param_1);
    return;
  }
  return;
}



// FUNCTION 142bf3850 FUN_142bf3850 body=412 status=ok
// SIG undefined FUN_142bf3850(void)

void FUN_142bf3850(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if (0 < iVar1) {
    lVar11 = 0;
    lVar10 = (longlong)iVar1;
    do {
      iVar8 = 0;
      plVar7 = (longlong *)(*(longlong *)(param_1 + 400) + lVar11);
      local_48 = *plVar7;
      local_40 = (undefined4)plVar7[1];
      local_3c = *(undefined4 *)((longlong)plVar7 + 0xc);
      iVar5 = (int)plVar7[2];
      local_34 = *(undefined1 *)((longlong)plVar7 + 0x14);
      local_33 = *(undefined1 *)((longlong)plVar7 + 0x15);
      local_38 = iVar5;
      if (0 < *(int *)(param_1 + 0x1a8)) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x1a0));
          if (((local_48 == *(longlong *)(lVar3 + 0x10)) &&
              (((*(char *)(lVar3 + 0x1c) == '\0' ||
                (((iVar2 = *(int *)(lVar3 + 0x18), iVar2 != -1 && (iVar5 != -1)) &&
                 ((iVar5 == iVar2 || ((iVar5 == 0 || (iVar2 == 0)))))))) &&
               (uVar6 = FWeakObjectPtr::Get(lVar3 + 0x30), iVar5 = local_38,
               *(int *)(lVar3 + 0x28) != 0)))) &&
             ((*(longlong **)(lVar3 + 0x20) != (longlong *)0x0 &&
              (cVar4 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x18))(), iVar5 = local_38,
              cVar4 != '\0')))) {
            if (*(int *)(lVar3 + 0x28) == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = *(longlong **)(lVar3 + 0x20);
            }
            (**(code **)(*plVar7 + 0x40))(plVar7,uVar6,&local_48);
            iVar5 = local_38;
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar8 < *(int *)(param_1 + 0x1a8));
      }
      lVar11 = lVar11 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 0x198);
      if (iVar5 - iVar1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 400),
                   (void *)((longlong)*(void **)(param_1 + 400) + (longlong)iVar1 * 0x18),
                   (longlong)(iVar5 - iVar1) * 0x18);
        iVar5 = *(int *)(param_1 + 0x198);
      }
      *(int *)(param_1 + 0x198) = iVar5 - iVar1;
    }
  }
  return;
}



// FUNCTION 142bf39f0 FUN_142bf39f0 body=122 status=ok
// SIG undefined FUN_142bf39f0(void)

void FUN_142bf39f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 == 0) || ((*(uint *)(param_1 + 0x98) & 0x10) == 0)) {
    if ((*(uint *)(param_1 + 0x98) & 8) != 0) {
      FUN_142c37c00(param_1,*(undefined8 *)(param_1 + 0x70),param_4);
    }
  }
  else {
    FUN_142c37c50(param_1,lVar1,*(undefined8 *)(lVar1 + 0x488));
  }
  if (((*(uint *)(param_1 + 0x98) & 0x6000) != 0) && (((byte)*(uint *)(param_1 + 0x98) & 6) != 6)) {
    cVar2 = FUN_142be5a50(param_1,param_2);
    if (cVar2 != '\0') {
      FUN_142bc8a50(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 142bf3a70 FUN_142bf3a70 body=538 status=ok
// SIG undefined FUN_142bf3a70(void)

void FUN_142bf3a70(longlong param_1,longlong param_2,char *param_3)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_88;
  float local_84;
  float local_78;
  float local_74;
  
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  cVar2 = UBTDecorator_ConeCheck::CalculateDirection
                    (param_1,uVar1,param_1 + 0x70,param_1 + 0xc0,&local_88);
  if (cVar2 != '\0') {
    cVar2 = UBTDecorator_ConeCheck::CalculateDirection
                      (param_1,uVar1,param_1 + 0x70,param_1 + 0x98,&local_78);
    if (cVar2 != '\0') {
      fVar3 = local_74 * local_74 + local_78 * local_78;
      if (1e-08 < fVar3) {
        auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar4 = auVar5._0_4_;
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        local_78 = local_78 * fVar4;
        local_74 = local_74 * fVar4;
      }
      fVar3 = local_88 * local_88 + local_84 * local_84;
      if (1e-08 < fVar3) {
        auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar4 = auVar5._0_4_;
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        fVar4 = fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4) + fVar4;
        local_88 = local_88 * fVar4;
        local_84 = fVar4 * local_84;
      }
      fVar3 = local_88 * local_78 + local_84 * local_74;
      if (*(float *)(param_1 + 0xe8) <= fVar3 && fVar3 != *(float *)(param_1 + 0xe8)) {
        cVar2 = '\x01';
        goto LAB_142bf3c5b;
      }
    }
  }
  cVar2 = '\0';
LAB_142bf3c5b:
  if (cVar2 != *param_3) {
    *param_3 = cVar2;
    FUN_142bc8a50(param_2,param_1);
  }
  return;
}



// FUNCTION 142bf3c90 FUN_142bf3c90 body=100 status=ok
// SIG undefined FUN_142bf3c90(void)

void FUN_142bf3c90(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  
  if (((uint)param_3[1] & 1) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_2);
    }
    if (*(float *)(param_1 + 0x68) <= *(float *)(lVar1 + 0x790) - *param_3) {
      *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 1;
      FUN_142bc8a50(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 142bf3d00 TickNode body=466 status=ok
// SIG undefined TickNode(void)

void UBTDecorator_KeepInCone::TickNode(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 local_58;
  
  local_58 = 0x3f800000;
  cVar2 = FUN_142bd8bd0(0x3f800000,0,&local_58);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    fVar6 = (float)((ulonglong)uVar1 >> 0x20);
    fVar7 = (float)local_58;
    local_58._0_4_ = (float)uVar1;
    fVar3 = fVar6 * fVar6 + (float)local_58 * (float)local_58;
    if (1e-08 < fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      local_58._0_4_ = (float)local_58 * fVar4;
      fVar6 = fVar6 * fVar4;
    }
    fVar3 = local_58._4_4_ * local_58._4_4_ + fVar7 * fVar7;
    if (1e-08 < fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar7 * fVar4;
      local_58._4_4_ = local_58._4_4_ * fVar4;
    }
    fVar7 = (float)local_58 * fVar7 + fVar6 * local_58._4_4_;
    if ((fVar7 < *(float *)(param_1 + 0xc4)) ||
       (((*(uint *)(param_1 + 0x60) >> 7 & 1) != 0 && (*(float *)(param_1 + 0xc4) < fVar7)))) {
      local_58 = uVar1;
      FUN_142bc8a50(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 142bf3ee0 FUN_142bf3ee0 body=127 status=ok
// SIG undefined FUN_142bf3ee0(void)

void FUN_142bf3ee0(longlong param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  float fVar2;
  
  if ((*param_3 & 1) == 0) {
    fVar2 = (float)FUN_142bbef90(param_2,*(undefined8 *)(param_1 + 0x68));
    if (fVar2 != 0.0) {
      lVar1 = *(longlong *)(param_2 + 0x120);
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_2);
      }
      if (*(float *)(lVar1 + 0x790) <= fVar2 && fVar2 != *(float *)(lVar1 + 0x790)) {
        return;
      }
    }
    *param_3 = *param_3 | 1;
    FUN_142bc8a50(param_2,param_1);
  }
  return;
}



// FUNCTION 142bf3f70 FUN_142bf3f70 body=103 status=ok
// SIG undefined FUN_142bf3f70(void)

void FUN_142bf3f70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  FUN_142bcc7e0();
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x90) & 8) != 0)) {
    FUN_142c3be20(param_1,lVar1,*(undefined8 *)(lVar1 + 0x488),param_4);
    return;
  }
  if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
    FUN_142c3bd80(param_1,*(undefined8 *)(param_1 + 0x78),param_4);
  }
  return;
}



// FUNCTION 142bf3fe0 FUN_142bf3fe0 body=209 status=ok
// SIG undefined FUN_142bf3fe0(void)

void FUN_142bf3fe0(longlong param_1,longlong param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x118);
  if (lVar4 != 0) {
    lVar3 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = *(longlong *)(lVar4 + 0x488);
    }
    if (((lVar4 != 0) && ((*(uint *)(param_1 + 0xdc) >> 1 & 1) != 0)) && (*param_3 == -1)) {
      iVar2 = FUN_142be0560(param_1 + 0x98,lVar4,*(undefined8 *)(param_2 + 0x180),param_1 + 0xe0);
      *param_3 = iVar2;
    }
  }
  FUN_142bcc7e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142bf4100 FUN_142bf4100 body=129 status=ok
// SIG undefined FUN_142bf4100(void)

void FUN_142bf4100(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if ((*(byte *)(param_3 + 0x24) & 1) != 0) {
    cVar1 = (**(code **)(*param_2 + 0x430))(param_2);
    if ((cVar1 == '\0') && (param_2[0x31] != 0)) {
      cVar1 = (**(code **)(*(longlong *)(param_2[0x31] + 0x458) + 0x40))();
      if (cVar1 == '\0') {
        *(byte *)(param_3 + 0x24) = *(byte *)(param_3 + 0x24) & 0xfe;
        iVar2 = FUN_142bec5e0(param_1,param_2,param_3);
        if (iVar2 != 3) {
          UBTTaskNode::FinishLatentTask(param_1,param_2,iVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142bf4190 FUN_142bf4190 body=755 status=ok
// SIG undefined FUN_142bf4190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142bf4190(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  float fStack_84;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  lVar1 = *(longlong *)(param_2 + 0x188);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x488) == 0)) {
    uVar4 = 1;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x488) + 0x168);
    if (lVar2 == 0) {
      local_60 = DAT_1464aa7b0;
      puVar3 = &local_68;
      local_68 = DAT_1464aa7a8;
    }
    else {
      puVar3 = (undefined8 *)FUN_142369f10(lVar2,&local_78);
    }
    uVar4 = *puVar3;
    fVar8 = *(float *)(puVar3 + 1);
    FUN_142bbd100(lVar1,&local_68,2);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x488) + 0x168);
    if (lVar2 == 0) {
      local_78 = _DAT_1468b5d90;
      local_70 = DAT_1468b5d98;
    }
    else {
      local_78 = *(undefined8 *)(lVar2 + 0x220);
      local_70 = *(float *)(lVar2 + 0x228);
    }
    fVar7 = (float)local_68 - (float)local_78;
    local_88 = (float)uVar4;
    fStack_84 = (float)((ulonglong)uVar4 >> 0x20);
    fVar9 = local_68._4_4_ - (float)((ulonglong)local_78 >> 0x20);
    if ((((ABS(local_88) <= 0.0001) && (ABS(fStack_84) <= 0.0001)) && (ABS(fVar8) <= 0.0001)) ||
       (((ABS(fVar7) <= 0.0001 && (ABS(fVar9) <= 0.0001)) && (ABS(local_60 - local_70) <= 0.0001))))
    {
      fVar8 = 1.0;
    }
    else {
      fVar8 = local_88 * local_88 + fStack_84 * fStack_84;
      if (1e-08 < fVar8) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
        local_88 = local_88 * fVar5;
        fStack_84 = fStack_84 * fVar5;
      }
      fVar8 = fVar9 * fVar9 + fVar7 * fVar7;
      if (1e-08 < fVar8) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar8 * 0.5 * fVar5 * fVar5);
        fVar7 = fVar7 * fVar5;
        fVar9 = fVar9 * fVar5;
      }
      fVar8 = fVar7 * local_88 + fVar9 * fStack_84;
    }
    if (fVar8 < *(float *)(param_1 + 0x9c)) {
      return;
    }
    FUN_142bd9d60(param_1,lVar1,param_3);
    uVar4 = 0;
  }
  UBTTaskNode::FinishLatentTask(param_1,param_2,uVar4);
  return;
}



// FUNCTION 142bf44b0 ToString body=169 status=ok
// SIG undefined ToString(void)

undefined8 * FAIDataProviderValue::ToString(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar1 = (longlong *)param_1[2];
  bVar3 = plVar1 == (longlong *)0x0;
  if (bVar3) {
    puVar2 = (undefined8 *)(**(code **)*param_1)(param_1,local_28);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x280))(plVar1,local_18,param_1[3]);
  }
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (bVar3) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar3) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bf4560 FUN_142bf4560 body=566 status=ok
// SIG undefined FUN_142bf4560(void)

wchar_t ** FUN_142bf4560(longlong param_1,wchar_t **param_2,undefined8 param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  undefined8 local_res18;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  local_res18 = param_3;
  FName::ToString(&local_res8);
  pwVar2 = *param_2;
  pwVar9 = (wchar_t *)0x0;
  iVar3 = *(int *)(param_2 + 1);
  pwVar11 = pwVar2;
  do {
    if (pwVar11 == pwVar2 + iVar3) {
LAB_142bf46b4:
      iVar3 = *(int *)(param_2 + 1);
      iVar8 = iVar3 + -1;
      if (iVar3 < 1) {
        iVar8 = 0;
      }
      iVar3 = (iVar3 < 1) + 1 + iVar3;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      (*param_2)[iVar8] = L'.';
      (*param_2)[(longlong)iVar8 + 1] = L'\0';
      puVar5 = (undefined8 *)FName::ToString(&local_res18,&local_38);
      _Src = (void *)*puVar5;
      iVar3 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar3 = 0;
      }
      if (iVar3 != 0) {
        iVar8 = *(int *)(param_2 + 1);
        iVar4 = (uint)(iVar8 == 0) + iVar8 + iVar3;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
        }
        pwVar2 = *param_2;
        _guard_xfg_dispatch_icall_nop
                  (pwVar2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)),_Src,(longlong)iVar3 * 2);
        (pwVar2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)))[iVar3] = L'\0';
      }
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      return param_2;
    }
    if (*pwVar11 == L'_') {
      iVar8 = (int)((longlong)pwVar11 - (longlong)pwVar2 >> 1);
      if (iVar8 != -1) {
        uVar10 = iVar3 - 1;
        if (iVar3 == 0) {
          uVar10 = 0xffffffff;
        }
        if (iVar3 == 0) {
          uVar10 = 0;
        }
        uVar1 = iVar8 + 0x80000000;
        if (iVar8 + 1U < uVar10) {
          uVar10 = iVar8 + 1U;
        }
        uVar6 = iVar3 - 1;
        if (iVar3 == 0) {
          uVar6 = 0;
        }
        uVar7 = uVar10;
        if ((uVar10 <= uVar1) && (uVar7 = uVar6, uVar1 < uVar6)) {
          uVar7 = uVar1;
        }
        local_38 = (wchar_t *)0x0;
        local_2c = 0;
        pwVar11 = L"";
        if (iVar3 != 0) {
          pwVar11 = pwVar2;
        }
        iVar8 = uVar7 - uVar10;
        iVar3 = iVar8 + 1;
        if (iVar8 == 0) {
          iVar3 = 0;
        }
        local_30 = iVar3;
        if ((0 < iVar3) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar3 = local_30,
           pwVar9 = local_38, 0 < local_30)) {
          wcsncpy(local_38,pwVar11 + (int)uVar10,(longlong)iVar8);
          pwVar9[iVar8] = L'\0';
        }
        if (param_2 == &local_38) {
          if (pwVar9 != (wchar_t *)0x0) {
            FMemory::Free(pwVar9);
          }
        }
        else {
          if (*param_2 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *param_2 = pwVar9;
          *(int *)(param_2 + 1) = iVar3;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
        }
      }
      goto LAB_142bf46b4;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
}



// FUNCTION 142bf47a0 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 UAIDataProvider_QueryParams::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x28,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"QueryParam.%s",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bf47f0 ToString body=33 status=ok
// SIG undefined ToString(void)

undefined8 UAIDataProvider_Random::ToString(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Random number");
  return param_2;
}



// FUNCTION 142bf4820 ToText body=1416 status=ok
// SIG undefined ToText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FEnvDirection::ToText(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_298 [32];
  longlong local_278 [6];
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  undefined1 local_240 [8];
  longlong *local_238;
  undefined4 *local_230;
  longlong *local_228;
  undefined4 *local_220;
  longlong *local_218;
  undefined4 *local_210;
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
  undefined1 local_190 [16];
  undefined1 local_180 [24];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar9 = 0;
  if ((char)param_1[3] == '\0') {
    lVar4 = *param_1;
    local_168 = 0;
    local_160 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    lVar10 = lVar9;
    if (lVar4 != 0) {
      lVar5 = UEnvQueryContext::GetPrivateStaticClass();
      lVar6 = lVar4;
      do {
        lVar10 = lVar4;
        if (lVar6 == lVar5) break;
        lVar6 = *(longlong *)(lVar6 + 0x30);
        lVar10 = lVar9;
      } while (lVar6 != 0);
    }
    FUN_142be57d0(local_208,lVar10);
    local_c8[0] = 4;
    FText::FText(local_b8,local_208);
    local_a0 = '\x01';
    local_278[0] = 0;
    local_278[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_278,0);
    FGenericPlatformString::Memcpy(local_278[0],L"LineFrom",0x12);
    local_238 = local_278;
    local_230 = local_c8;
    FUN_1407484b0(&local_168,local_248,&local_238,0);
    if (local_278[0] != 0) {
      FMemory::Free();
    }
    if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_200 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    lVar4 = param_1[1];
    lVar10 = lVar9;
    if (lVar4 != 0) {
      lVar5 = UEnvQueryContext::GetPrivateStaticClass();
      lVar6 = lVar4;
      do {
        lVar10 = lVar4;
        if (lVar6 == lVar5) break;
        lVar6 = *(longlong *)(lVar6 + 0x30);
        lVar10 = lVar9;
      } while (lVar6 != 0);
    }
    FUN_142be57d0(local_1f0,lVar10);
    local_98[0] = 4;
    FText::FText(local_88,local_1f0);
    local_70 = '\x01';
    local_278[2] = 0;
    local_278[3] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_278 + 2,0);
    FGenericPlatformString::Memcpy(local_278[2],L"LineTo",0xe);
    local_228 = local_278 + 2;
    local_220 = local_98;
    FUN_1407484b0(&local_168,local_244,&local_228,0);
    if (local_278[2] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)local_1e8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c0,L"[From: {LineFrom} To: {LineTo}]",L"EnvQueryGenerator",
                       L"DescribeLineFromAndTo");
    uVar7 = FTextFormat::FTextFormat(local_190,uVar7);
    FText::Format(param_2,uVar7,&local_168);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar2 = (int *)((longlong)local_1b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    local_120 = 0;
    if (local_128 != 0) {
      FMemory::Free();
    }
    puVar8 = &local_168;
  }
  else {
    lVar4 = param_1[2];
    local_118 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    lVar10 = lVar9;
    if (lVar4 != 0) {
      lVar5 = UEnvQueryContext::GetPrivateStaticClass();
      lVar6 = lVar4;
      do {
        lVar10 = lVar4;
        if (lVar6 == lVar5) break;
        lVar6 = *(longlong *)(lVar6 + 0x30);
        lVar10 = lVar9;
      } while (lVar6 != 0);
    }
    FUN_142be57d0(local_1d8,lVar10);
    local_68[0] = 4;
    FText::FText(local_58,local_1d8);
    local_40 = '\x01';
    local_278[4] = 0;
    local_278[5] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_278 + 4,0);
    FGenericPlatformString::Memcpy(local_278[4],L"Rotation",0x12);
    local_218 = local_278 + 4;
    local_210 = local_68;
    FUN_1407484b0(&local_118,local_240,&local_218,0);
    if (local_278[4] != 0) {
      FMemory::Free();
    }
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar2 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1a8,L"[{Rotation} rotation]",L"EnvQueryGenerator",L"DescribeRotation");
    uVar7 = FTextFormat::FTextFormat(local_180,uVar7);
    FText::Format(param_2,uVar7,&local_118);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    local_d0 = 0;
    if (local_d8 != 0) {
      FMemory::Free();
    }
    puVar8 = &local_118;
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (puVar8);
  return param_2;
}



// FUNCTION 142bf4db0 FUN_142bf4db0 body=7736 status=ok
// SIG undefined FUN_142bf4db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142bf553b) */
/* WARNING: Removing unreachable block (ram,0x000142bf554b) */
/* WARNING: Removing unreachable block (ram,0x000142bf5558) */
/* WARNING: Removing unreachable block (ram,0x000142bf556d) */

undefined8 FUN_142bf4db0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  wchar_t *pwVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_d88 [32];
  undefined4 local_d68 [2];
  longlong local_d60 [32];
  undefined1 local_c60 [4];
  undefined1 local_c5c [4];
  undefined1 local_c58 [4];
  undefined1 local_c54 [4];
  undefined1 local_c50 [4];
  undefined1 local_c4c [4];
  undefined1 local_c48 [4];
  undefined1 local_c44 [4];
  undefined1 local_c40 [4];
  undefined1 local_c3c [4];
  undefined1 local_c38 [4];
  undefined1 local_c34 [4];
  undefined1 local_c30 [4];
  undefined1 local_c2c [4];
  undefined1 local_c28 [8];
  undefined8 local_c20;
  undefined1 local_c18 [20];
  undefined4 local_c04;
  undefined1 local_c00 [20];
  undefined4 local_bec;
  longlong *local_be8;
  undefined4 *local_be0;
  undefined8 local_bd8;
  longlong *plStack_bd0;
  longlong *local_bc8;
  undefined4 *local_bc0;
  undefined8 local_bb8;
  longlong *plStack_bb0;
  longlong *local_ba8;
  undefined4 *local_ba0;
  undefined8 local_b98;
  longlong *plStack_b90;
  longlong *local_b88;
  undefined4 *local_b80;
  longlong *local_b78;
  undefined4 *local_b70;
  longlong *local_b68;
  undefined4 *local_b60;
  longlong *local_b58;
  undefined4 *local_b50;
  longlong *local_b48;
  undefined4 *local_b40;
  longlong *local_b38;
  undefined4 *local_b30;
  longlong *local_b28;
  undefined4 *local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  longlong *local_b08;
  undefined4 *local_b00;
  longlong *local_af8;
  undefined4 *local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  longlong *local_ad8;
  undefined4 *local_ad0;
  longlong *local_ac8;
  undefined4 *local_ac0;
  longlong *local_ab8;
  undefined4 *local_ab0;
  longlong local_aa8 [2];
  longlong *local_a98;
  undefined4 *local_a90;
  undefined1 local_a88 [8];
  longlong *local_a80;
  undefined1 local_a70 [8];
  longlong *local_a68;
  undefined1 local_a58 [8];
  longlong *local_a50;
  undefined1 local_a40 [8];
  longlong *local_a38;
  undefined1 local_a28 [8];
  longlong *local_a20;
  undefined1 local_a10 [24];
  undefined1 local_9f8 [24];
  undefined1 local_9e0 [8];
  longlong *local_9d8;
  undefined1 local_9c8 [24];
  undefined1 local_9b0 [24];
  undefined1 local_998 [24];
  undefined1 local_980 [8];
  longlong *local_978;
  undefined1 local_968 [8];
  longlong *local_960;
  undefined1 local_950 [8];
  longlong *local_948;
  undefined1 local_938 [8];
  longlong *local_930;
  undefined1 local_920 [8];
  longlong *local_918;
  undefined1 local_908 [8];
  longlong *local_900;
  undefined1 local_8f0 [24];
  undefined1 local_8d8 [24];
  undefined1 local_8c0 [8];
  longlong *local_8b8;
  undefined1 local_8a8 [8];
  longlong *local_8a0;
  undefined1 local_890 [8];
  longlong *local_888;
  undefined1 local_878 [8];
  longlong *local_870;
  undefined1 local_860 [8];
  longlong *local_858;
  undefined1 local_848 [8];
  longlong *local_840;
  undefined1 local_830 [8];
  longlong *local_828;
  undefined1 local_818 [8];
  longlong *local_810;
  undefined1 local_800 [8];
  longlong *local_7f8;
  undefined1 local_7e8 [24];
  undefined1 local_7d0 [24];
  undefined1 local_7b8 [24];
  undefined1 local_7a0 [24];
  undefined1 local_788 [24];
  undefined1 local_770 [24];
  undefined1 local_758 [24];
  undefined1 local_740 [24];
  undefined1 local_728 [24];
  undefined1 local_710 [24];
  undefined1 local_6f8 [24];
  undefined1 local_6e0 [24];
  undefined1 local_6c8 [24];
  undefined1 local_6b0 [24];
  undefined1 local_698 [16];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b4;
  longlong local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined4 local_564;
  longlong local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined1 local_538 [32];
  undefined4 local_518;
  undefined4 local_514;
  longlong local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [32];
  undefined4 local_4c8;
  undefined4 local_4c4;
  longlong local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [32];
  undefined4 local_478;
  undefined4 local_474;
  longlong local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448 [32];
  undefined4 local_428;
  undefined4 local_424;
  longlong local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined1 local_3f8 [32];
  undefined4 local_3d8;
  undefined4 local_3d4;
  longlong local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [32];
  undefined4 local_388;
  undefined4 local_384;
  longlong local_378;
  undefined4 local_370;
  undefined4 local_368 [4];
  undefined1 local_358 [8];
  longlong *local_350;
  char local_340;
  undefined4 local_338 [4];
  undefined1 local_328 [8];
  longlong *local_320;
  char local_310;
  undefined4 local_308 [4];
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  char local_2e0;
  undefined4 local_2d8 [4];
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  char local_2b0;
  undefined4 local_2a8 [4];
  undefined1 local_298 [8];
  longlong *local_290;
  char local_280;
  undefined4 local_278 [4];
  undefined1 local_268 [8];
  longlong *local_260;
  char local_250;
  undefined4 local_248 [4];
  undefined1 local_238 [24];
  undefined1 local_220;
  undefined4 local_218 [4];
  undefined1 local_208 [24];
  undefined1 local_1f0;
  undefined4 local_1e8 [4];
  undefined1 local_1d8 [24];
  undefined1 local_1c0;
  undefined4 local_1b8 [4];
  undefined1 local_1a8 [24];
  undefined1 local_190;
  undefined4 local_188 [4];
  undefined1 local_178 [24];
  undefined1 local_160;
  undefined4 local_158 [4];
  undefined1 local_148 [24];
  undefined1 local_130;
  undefined4 local_128 [4];
  undefined1 local_118 [24];
  undefined1 local_100;
  undefined4 local_f8 [4];
  undefined1 local_e8 [24];
  undefined1 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_d88;
  local_d68[0] = 0;
  FText::FText(param_2);
  cVar6 = *(char *)(param_1 + 0x2b);
  if (cVar6 == '\x02') {
    FNumberFormattingOptions::FNumberFormattingOptions(local_c00);
    local_bec = 2;
    local_5e8 = 0;
    local_5e0 = 0;
    local_5c8 = 0;
    local_bd8 = 0;
    plStack_bd0 = (longlong *)0x0;
    local_5c0 = 0;
    local_5b8 = 0xffffffff;
    local_5b4 = 0;
    local_5a8 = 0;
    local_5a0 = 0;
    uVar17 = FText::AsNumber(local_980,*(undefined4 *)(param_1 + 0x18),local_c00,&local_bd8);
    local_368[0] = 4;
    FText::FText(local_358,uVar17);
    local_340 = '\x01';
    local_d60[0] = 0;
    local_d60[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60,0);
    FGenericPlatformString::Memcpy(local_d60[0],L"ExtentX",0x10);
    local_be8 = local_d60;
    local_be0 = local_368;
    FUN_1407484b0(&local_5e8,local_d68,&local_be8,0);
    if (local_d60[0] != 0) {
      FMemory::Free();
    }
    if ((local_340 != '\0') && (local_340 = '\0', local_350 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_350 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_350)(local_350);
        LOCK();
        piVar2 = (int *)((longlong)local_350 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_350 + 8))(local_350,1);
        }
      }
    }
    if (local_978 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_978 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_978)(local_978);
        LOCK();
        piVar2 = (int *)((longlong)local_978 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_978 + 8))(local_978,1);
        }
      }
    }
    plVar1 = plStack_bd0;
    if (plStack_bd0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_bd0 + 1;
      lVar23 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plStack_bd0)(plStack_bd0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    local_bb8 = 0;
    plStack_bb0 = (longlong *)0x0;
    uVar17 = FText::AsNumber(local_968,*(undefined4 *)(param_1 + 0x1c),local_c00,&local_bb8);
    local_338[0] = 4;
    FText::FText(local_328,uVar17);
    local_310 = '\x01';
    local_d60[2] = 0;
    local_d60[3] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 2,0);
    FGenericPlatformString::Memcpy(local_d60[2],L"ExtentY",0x10);
    local_bc8 = local_d60 + 2;
    local_bc0 = local_338;
    FUN_1407484b0(&local_5e8,local_c60,&local_bc8,0);
    if (local_d60[2] != 0) {
      FMemory::Free();
    }
    if ((local_310 != '\0') && (local_310 = '\0', local_320 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_320 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar2 = (int *)((longlong)local_320 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_320 + 8))(local_320,1);
        }
      }
    }
    if (local_960 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_960 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_960)(local_960);
        LOCK();
        piVar2 = (int *)((longlong)local_960 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_960 + 8))(local_960,1);
        }
      }
    }
    plVar1 = plStack_bb0;
    if (plStack_bb0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_bb0 + 1;
      lVar23 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plStack_bb0)(plStack_bb0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    local_b98 = 0;
    plStack_b90 = (longlong *)0x0;
    uVar17 = FText::AsNumber(local_950,*(undefined4 *)(param_1 + 0x20),local_c00,&local_b98);
    local_308[0] = 4;
    FText::FText(local_2f8,uVar17);
    local_2e0 = '\x01';
    local_d60[4] = 0;
    local_d60[5] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 4,0);
    FGenericPlatformString::Memcpy(local_d60[4],L"ExtentZ",0x10);
    local_ba8 = local_d60 + 4;
    local_ba0 = local_308;
    FUN_1407484b0(&local_5e8,local_c5c,&local_ba8,0);
    if (local_d60[4] != 0) {
      FMemory::Free();
    }
    if ((local_2e0 != '\0') && (local_2e0 = '\0', local_2f0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_2f0 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar2 = (int *)((longlong)local_2f0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
        }
      }
    }
    if (local_948 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_948 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_948)(local_948);
        LOCK();
        piVar2 = (int *)((longlong)local_948 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_948 + 8))(local_948,1);
        }
      }
    }
    plVar1 = plStack_b90;
    if (plStack_b90 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_b90 + 1;
      lVar23 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plStack_b90)(plStack_b90);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
    cVar6 = *(char *)(param_1 + 0x2a);
    if (cVar6 == '\0') {
      uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_848,L"line",L"EnvQueryGenerator",L"Line");
      bVar15 = false;
      bVar14 = false;
      bVar13 = false;
      bVar11 = false;
      bVar10 = false;
      bVar26 = false;
      bVar12 = true;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
    }
    else {
      if (cVar6 == '\x02') {
        uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_860,L"sphere (radius: {ExtentX})",L"EnvQueryGenerator",
                            L"SphereWithRadius");
        uVar17 = FTextFormat::FTextFormat(local_628,uVar17);
        uVar17 = FText::Format(local_878,uVar17,&local_5e8);
        bVar15 = true;
        bVar14 = true;
        bVar13 = false;
        bVar11 = false;
        bVar10 = false;
        bVar26 = false;
        bVar9 = false;
        bVar8 = false;
      }
      else {
        if (cVar6 == '\x03') {
          uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_890,L"capsule (radius: {ExtentX}, half height: {ExtentZ})",
                              L"EnvQueryGenerator",L"CasuleWithRadiusHalfHeight");
          uVar17 = FTextFormat::FTextFormat(local_618,uVar17);
          uVar17 = FText::Format(local_8a8,uVar17,&local_5e8);
          bVar13 = true;
          bVar11 = true;
          bVar10 = false;
          bVar26 = false;
          bVar9 = false;
        }
        else {
          bVar26 = cVar6 != '\x01';
          if (bVar26) {
            uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_8f0,L"unknown",L"EnvQueryGenerator",L"Unknown");
          }
          else {
            uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_8c0,L"box (extent: {ExtentX} {ExtentY} {ExtentZ)",
                                L"EnvQueryGenerator",L"BoxWithExtents");
            uVar17 = FTextFormat::FTextFormat(local_608,uVar17);
            uVar17 = FText::Format(local_a88,uVar17,&local_5e8);
          }
          bVar13 = false;
          bVar11 = false;
          bVar10 = !bVar26;
          bVar26 = !bVar26;
          bVar9 = true;
          uVar17 = FText::FText(local_908,uVar17);
        }
        bVar15 = false;
        bVar14 = false;
        uVar17 = FText::FText(local_920,uVar17);
        bVar8 = true;
      }
      bVar12 = false;
      bVar7 = true;
      uVar17 = FText::FText(local_938,uVar17);
    }
    FText::operator=(param_2,uVar17);
    if ((bVar7) && (local_930 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_930 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_930)(local_930);
        LOCK();
        piVar2 = (int *)((longlong)local_930 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_930 + 8))(local_930,1);
        }
      }
    }
    if ((bVar8) && (local_918 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_918 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_918)(local_918);
        LOCK();
        piVar2 = (int *)((longlong)local_918 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_918 + 8))(local_918,1);
        }
      }
    }
    if ((bVar9) && (local_900 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_900 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_900)(local_900);
        LOCK();
        piVar2 = (int *)((longlong)local_900 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_900 + 8))(local_900,1);
        }
      }
    }
    if ((bVar26) && (local_a80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_a80 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_a80)(local_a80);
        LOCK();
        piVar2 = (int *)((longlong)local_a80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a80 + 8))(local_a80,1);
        }
      }
    }
    if ((bVar10) && (local_8b8 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_8b8 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_8b8)(local_8b8);
        LOCK();
        piVar2 = (int *)((longlong)local_8b8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_8b8 + 8))(local_8b8,1);
        }
      }
    }
    if ((bVar11) && (local_8a0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_8a0 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_8a0)(local_8a0);
        LOCK();
        piVar2 = (int *)((longlong)local_8a0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_8a0 + 8))(local_8a0,1);
        }
      }
    }
    if ((bVar13) && (local_888 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_888 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_888)(local_888);
        LOCK();
        piVar2 = (int *)((longlong)local_888 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_888 + 8))(local_888,1);
        }
      }
    }
    if ((bVar14) && (local_870 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_870 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_870)(local_870);
        LOCK();
        piVar2 = (int *)((longlong)local_870 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_870 + 8))(local_870,1);
        }
      }
    }
    if ((bVar15) && (local_858 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_858 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_858)(local_858);
        LOCK();
        piVar2 = (int *)((longlong)local_858 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_858 + 8))(local_858,1);
        }
      }
    }
    if ((bVar12) && (local_840 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_840 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_840)(local_840);
        LOCK();
        piVar2 = (int *)((longlong)local_840 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_840 + 8))(local_840,1);
        }
      }
    }
    local_5a0 = 0;
    if (local_5a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_5e8);
    if (param_3 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2c718) &&
         (_Init_thread_header(&DAT_146b2c718), DAT_146b2c718 == -1)) {
        uVar17 = UEnum::GetPrivateStaticClass();
        DAT_146b2c710 = FUN_141799410(uVar17,0xffffffffffffffff,L"ETraceTypeQuery",1);
        _Init_thread_footer(&DAT_146b2c718);
      }
      local_598 = 0;
      local_590 = 0;
      local_578 = 0;
      local_570 = 0;
      local_568 = 0xffffffff;
      local_564 = 0;
      local_558 = 0;
      local_550 = 0;
      local_2d8[0] = 4;
      FText::FText(local_2c8,param_2);
      local_2b0 = '\x01';
      local_d60[6] = 0;
      local_d60[7] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 6,0);
      FGenericPlatformString::Memcpy(local_d60[6],L"ExtentDescription",0x24);
      local_b88 = local_d60 + 6;
      local_b80 = local_2d8;
      FUN_1407484b0(&local_598,local_c58,&local_b88,0);
      if (local_d60[6] != 0) {
        FMemory::Free();
      }
      if ((local_2b0 != '\0') && (local_2b0 = '\0', local_2c0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_2c0 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_2c0)(local_2c0);
          LOCK();
          piVar2 = (int *)((longlong)local_2c0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_2c0 + 8))(local_2c0,1);
          }
        }
      }
      uVar16 = *(uint *)(param_1 + 0x2c) & 0x20;
      puVar20 = local_818;
      pwVar25 = L"Projection";
      pwVar24 = L"EnvQueryGenerator";
      pwVar22 = L"projection";
      if (uVar16 == 0) {
        pwVar25 = L"Trace";
        pwVar24 = L"EnvQueryGenerator";
        pwVar22 = L"trace";
        puVar20 = local_830;
      }
      uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (puVar20,pwVar22,pwVar24,pwVar25);
      local_2a8[0] = 4;
      FText::FText(local_298,uVar17);
      local_280 = '\x01';
      local_d60[8] = 0;
      local_d60[9] = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 8,0);
      FGenericPlatformString::Memcpy(local_d60[8],L"ProjectionTraceDesc",0x28);
      local_b78 = local_d60 + 8;
      local_b70 = local_2a8;
      FUN_1407484b0(&local_598,local_c54,&local_b78,0);
      if (local_d60[8] != 0) {
        FMemory::Free();
      }
      if ((local_280 != '\0') && (local_280 = '\0', local_290 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_290 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_290)(local_290);
          LOCK();
          piVar2 = (int *)((longlong)local_290 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_290 + 8))(local_290,1);
          }
        }
      }
      if ((uVar16 == 0) && (local_828 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_828 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_828)(local_828);
          LOCK();
          piVar2 = (int *)((longlong)local_828 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_828 + 8))(local_828,1);
          }
        }
      }
      if ((uVar16 != 0) && (local_810 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_810 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_810)(local_810);
          LOCK();
          piVar2 = (int *)((longlong)local_810 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_810 + 8))(local_810,1);
          }
        }
      }
      uVar17 = FUN_1417373a0(DAT_146b2c710,local_800,*(undefined1 *)(param_1 + 0x28));
      local_278[0] = 4;
      FText::FText(local_268,uVar17);
      local_250 = '\x01';
      local_d60[10] = 0;
      local_d60[0xb] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 10,0);
      FGenericPlatformString::Memcpy(local_d60[10],L"Channel",0x10);
      local_b68 = local_d60 + 10;
      local_b60 = local_278;
      FUN_1407484b0(&local_598,local_c50,&local_b68,0);
      if (local_d60[10] != 0) {
        FMemory::Free();
      }
      if ((local_250 != '\0') && (local_250 = '\0', local_260 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_260 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar2 = (int *)((longlong)local_260 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_260 + 8))(local_260,1);
          }
        }
      }
      if (local_7f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_7f8 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_7f8)(local_7f8);
          LOCK();
          piVar2 = (int *)((longlong)local_7f8 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_7f8 + 8))(local_7f8,1);
          }
        }
      }
      uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_a58,L"{ExtentDescription} {ProjectionTraceDesc} on {Channel}",
                          L"EnvQueryGenerator",L"GeometryBriefDescription");
      uVar17 = FTextFormat::FTextFormat(local_5f8,uVar17);
      uVar17 = FText::Format(local_a70,uVar17,&local_598);
      FText::operator=(param_2,uVar17);
      if (local_a68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a68 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_a68)(local_a68);
          LOCK();
          piVar2 = (int *)((longlong)local_a68 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a68 + 8))(local_a68,1);
          }
        }
      }
      if (local_a50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a50 + 1;
        lVar23 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_a50)(local_a50);
          LOCK();
          piVar2 = (int *)((longlong)local_a50 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a50 + 8))(local_a50,1);
          }
        }
      }
      local_550 = 0;
      if (local_558 != 0) {
        FMemory::Free();
      }
      puVar21 = &local_598;
    }
    else {
      local_4f8 = 0;
      local_4f0 = 0;
      TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_4e8,0,0);
      local_4c8 = 0xffffffff;
      local_4c4 = 0;
      local_4b8 = 0;
      local_4b0 = 0;
      local_248[0] = 4;
      FText::FText(local_238,param_2);
      local_220 = 1;
      local_d60[0xc] = 0;
      local_d60[0xd] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0xc,0);
      FGenericPlatformString::Memcpy(local_d60[0xc],L"Description",0x18);
      local_b58 = local_d60 + 0xc;
      local_b50 = local_248;
      FUN_1407484b0(&local_4f8,local_c4c,&local_b58,0);
      if (local_d60[0xc] != 0) {
        FMemory::Free();
      }
      FFormatArgumentValue::~FFormatArgumentValue(local_248);
      if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
        uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_a28,L"{Description}, complex collision",L"EnvQueryGenerator",
                            L"DescWithComplexCollision");
        uVar17 = FTextFormat::FTextFormat(local_698,uVar17);
        uVar17 = FText::Format(local_a40,uVar17,&local_4f8);
        FText::operator=(param_2,uVar17);
        if (local_a38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a38 + 1;
          lVar23 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*local_a38)(local_a38);
            LOCK();
            piVar2 = (int *)((longlong)local_a38 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_a38 + 8))(local_a38,1);
            }
          }
        }
        if (local_a20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a20 + 1;
          lVar23 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar23 == 1) {
            (**(code **)*local_a20)(local_a20);
            LOCK();
            piVar2 = (int *)((longlong)local_a20 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_a20 + 8))(local_a20,1);
            }
          }
        }
      }
      if ((*(byte *)(param_1 + 0x2c) & 2) == 0) {
        uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_9f8,L"{Description}, accept non blocking",L"EnvQueryGenerator",
                            L"DescWithNonBlocking");
        uVar17 = FTextFormat::FTextFormat(local_688,uVar17);
        uVar17 = FText::Format(local_a10,uVar17,&local_4f8);
        FText::operator=(param_2,uVar17);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a10);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_9f8);
      }
      local_4b0 = 0;
      if (local_4b8 != 0) {
        FMemory::Free();
      }
      puVar21 = &local_4f8;
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar21);
  }
  else if (cVar6 == '\x01') {
    uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_9e0,L"navmesh",L"EnvQueryGenerator",L"Navmesh");
    FText::operator=(param_2,uVar17);
    if (local_9d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_9d8 + 1;
      lVar23 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*local_9d8)(local_9d8);
        LOCK();
        piVar2 = (int *)((longlong)local_9d8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_9d8 + 8))(local_9d8,1);
        }
      }
    }
    if ((*(byte *)(param_1 + 0x2c) & 0x20) == 0) {
      local_408 = 0;
      local_400 = 0;
      TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_3f8,0,0);
      local_3d8 = 0xffffffff;
      local_3d4 = 0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_128[0] = 4;
      FText::FText(local_118,param_2);
      local_100 = 1;
      local_d60[0x1a] = 0;
      local_d60[0x1b] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x1a,0);
      FGenericPlatformString::Memcpy(local_d60[0x1a],L"Description",0x18);
      local_a98 = local_d60 + 0x1a;
      local_a90 = local_128;
      FUN_1407484b0(&local_408,local_c30,&local_a98,0);
      if (local_d60[0x1a] != 0) {
        FMemory::Free();
      }
      FFormatArgumentValue::~FFormatArgumentValue(local_128);
      uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_710,L"{Description} trace",L"EnvQueryGenerator",
                          L"DescriptionWithTrace");
      uVar17 = FTextFormat::FTextFormat(local_638,uVar17);
      uVar17 = FText::Format(local_728,uVar17,&local_408);
      FText::operator=(param_2,uVar17);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_728);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_710);
      if (*(longlong *)(param_1 + 8) != 0) {
        lVar18 = UNavigationQueryFilter::GetPrivateStaticClass();
        for (lVar23 = *(longlong *)(param_1 + 8); lVar23 != 0; lVar23 = *(longlong *)(lVar23 + 0x30)
            ) {
          if (lVar23 == lVar18) {
            if (*(longlong *)(param_1 + 8) != 0) {
              local_458 = 0;
              local_450 = 0;
              TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                        (local_448,0,0);
              local_428 = 0xffffffff;
              local_424 = 0;
              local_418 = 0;
              local_410 = 0;
              local_f8[0] = 4;
              FText::FText(local_e8,param_2);
              local_d0 = 1;
              local_d60[0x1c] = 0;
              local_d60[0x1d] = 0xc;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x1c,0);
              FGenericPlatformString::Memcpy(local_d60[0x1c],L"Description",0x18);
              local_ac8 = local_d60 + 0x1c;
              local_ac0 = local_f8;
              FUN_1407484b0(&local_458,local_c2c,&local_ac8,0);
              if (local_d60[0x1c] != 0) {
                FMemory::Free();
              }
              FFormatArgumentValue::~FFormatArgumentValue(local_f8);
              lVar23 = 0;
              if (*(longlong *)(param_1 + 8) != 0) {
                lVar19 = UNavigationQueryFilter::GetPrivateStaticClass();
                for (lVar18 = *(longlong *)(param_1 + 8);
                    (lVar23 = 0, lVar18 != 0 &&
                    (lVar23 = *(longlong *)(param_1 + 8), lVar18 != lVar19));
                    lVar18 = *(longlong *)(lVar18 + 0x30)) {
                }
              }
              local_c20 = *(undefined8 *)(lVar23 + 0x18);
              FName::ToString(&local_c20,local_aa8);
              uVar17 = FText::FromString(local_6f8,local_aa8);
              local_c8[0] = 4;
              FText::FText(local_b8,uVar17);
              local_a0 = 1;
              local_d60[0x1e] = 0;
              local_d60[0x1f] = 0x11;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x1e,0);
              FGenericPlatformString::Memcpy(local_d60[0x1e],L"NavigationFilter",0x22);
              local_ab8 = local_d60 + 0x1e;
              local_ab0 = local_c8;
              FUN_1407484b0(&local_458,local_c28,&local_ab8,0);
              if (local_d60[0x1e] != 0) {
                FMemory::Free();
              }
              FFormatArgumentValue::~FFormatArgumentValue(local_c8);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6f8);
              if (local_aa8[0] != 0) {
                FMemory::Free();
              }
              uVar17 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_6c8,L"{Description} (filter: {NavigationFilter})",
                                  L"EnvQueryGenerator",L"DescriptionWithNavigationFilter");
              uVar17 = FTextFormat::FTextFormat(local_648,uVar17);
              uVar17 = FText::Format(local_6e0,uVar17,&local_458);
              FText::operator=(param_2,uVar17);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6e0);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6c8);
              local_410 = 0;
              if (local_418 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_458);
            }
            break;
          }
        }
      }
      local_3c0 = 0;
      if (local_3c8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_408);
    }
    else {
      FNumberFormattingOptions::FNumberFormattingOptions(local_c18);
      local_c04 = 0;
      local_548 = 0;
      local_540 = 0;
      TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_538,0,0);
      local_518 = 0xffffffff;
      local_514 = 0;
      local_508 = 0;
      local_500 = 0;
      local_98[0] = 4;
      FText::FText(local_88,param_2);
      local_70 = 1;
      local_d60[0xe] = 0;
      local_d60[0xf] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0xe,0);
      FGenericPlatformString::Memcpy(local_d60[0xe],L"Description",0x18);
      local_b48 = local_d60 + 0xe;
      local_b40 = local_98;
      FUN_1407484b0(&local_548,local_c48,&local_b48,0);
      if (local_d60[0xe] != 0) {
        FMemory::Free();
      }
      FFormatArgumentValue::~FFormatArgumentValue(local_98);
      fVar27 = *(float *)(param_1 + 0x10);
      fVar5 = *(float *)(param_1 + 0x14);
      if (fVar27 == fVar5) {
        uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_9b0,L"height",L"EnvQueryGenerator",L"Height");
        bVar26 = true;
        bVar9 = false;
        bVar10 = false;
        bVar11 = false;
      }
      else {
        pwVar25 = L"Down";
        pwVar24 = L"EnvQueryGenerator";
        pwVar22 = L"down";
        puVar20 = local_8d8;
        if (fVar27 <= fVar5) {
          pwVar25 = L"Up";
          pwVar24 = L"EnvQueryGenerator";
          pwVar22 = L"up";
          puVar20 = local_998;
        }
        uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (puVar20,pwVar22,pwVar24,pwVar25);
        uVar17 = FText::FText(local_9c8,uVar17);
        bVar26 = false;
        bVar9 = true;
        bVar10 = false;
        bVar11 = true;
        if (fVar27 <= fVar5) {
          bVar26 = false;
          bVar9 = true;
          bVar10 = true;
          bVar11 = false;
        }
      }
      local_218[0] = 4;
      FText::FText(local_208,uVar17);
      local_1f0 = 1;
      local_d60[0x10] = 0;
      local_d60[0x11] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x10,0);
      FGenericPlatformString::Memcpy(local_d60[0x10],L"Direction",0x14);
      local_b38 = local_d60 + 0x10;
      local_b30 = local_218;
      FUN_1407484b0(&local_548,local_c44,&local_b38,0);
      if (local_d60[0x10] != 0) {
        FMemory::Free();
      }
      FFormatArgumentValue::~FFormatArgumentValue(local_218);
      if (bVar9) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_9c8);
      }
      if (bVar10) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_998);
      }
      if (bVar11) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_8d8);
      }
      if (bVar26) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_9b0);
      }
      fVar27 = *(float *)(param_1 + 0x14);
      if (*(float *)(param_1 + 0x14) <= *(float *)(param_1 + 0x10)) {
        fVar27 = *(float *)(param_1 + 0x10);
      }
      local_b18 = 0;
      uStack_b10 = 0;
      uVar17 = FText::AsNumber(local_7e8,fVar27,local_c18,&local_b18);
      local_1e8[0] = 4;
      FText::FText(local_1d8,uVar17);
      local_1c0 = 1;
      local_d60[0x12] = 0;
      local_d60[0x13] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x12,0);
      FGenericPlatformString::Memcpy(local_d60[0x12],L"ProjectionAmount",0x22);
      local_b28 = local_d60 + 0x12;
      local_b20 = local_1e8;
      FUN_1407484b0(&local_548,local_c40,&local_b28,0);
      if (local_d60[0x12] != 0) {
        FMemory::Free();
      }
      FFormatArgumentValue::~FFormatArgumentValue(local_1e8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_7e8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b18);
      uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_7b8,L"projection ({Direction}: {ProjectionAmount}",
                          L"EnvQueryGenerator",L"DescriptionWithProjection");
      uVar17 = FTextFormat::FTextFormat(local_678,uVar17);
      uVar17 = FText::Format(local_7d0,uVar17,&local_548);
      FText::operator=(param_2,uVar17);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_7d0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_7b8);
      if (1.0 < *(float *)(param_1 + 0x18)) {
        local_c04 = 2;
        local_4a8 = 0;
        local_4a0 = 0;
        TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_498,0,0);
        local_478 = 0xffffffff;
        local_474 = 0;
        local_468 = 0;
        local_460 = 0;
        local_1b8[0] = 4;
        FText::FText(local_1a8,param_2);
        local_190 = 1;
        local_d60[0x14] = 0;
        local_d60[0x15] = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x14,0);
        FGenericPlatformString::Memcpy(local_d60[0x14],L"Description",0x18);
        local_b08 = local_d60 + 0x14;
        local_b00 = local_1b8;
        FUN_1407484b0(&local_4a8,local_c3c,&local_b08,0);
        if (local_d60[0x14] != 0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_1b8);
        local_ae8 = 0;
        uStack_ae0 = 0;
        uVar17 = FText::AsNumber(local_7a0,*(undefined4 *)(param_1 + 0x18),local_c18,&local_ae8);
        local_188[0] = 4;
        FText::FText(local_178,uVar17);
        local_160 = 1;
        local_d60[0x16] = 0;
        local_d60[0x17] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x16,0);
        FGenericPlatformString::Memcpy(local_d60[0x16],L"Radius",0xe);
        local_af8 = local_d60 + 0x16;
        local_af0 = local_188;
        FUN_1407484b0(&local_4a8,local_c38,&local_af8,0);
        if (local_d60[0x16] != 0) {
          FMemory::Free();
        }
        FFormatArgumentValue::~FFormatArgumentValue(local_188);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_7a0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_ae8);
        uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_770,L"{Description}, radius {Radius}",L"EnvQueryGenerator",
                            L"DescriptionWithRadius");
        uVar17 = FTextFormat::FTextFormat(local_668,uVar17);
        uVar17 = FText::Format(local_788,uVar17,&local_4a8);
        FText::operator=(param_2,uVar17);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_788);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_770);
        local_460 = 0;
        if (local_468 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_4a8);
      }
      local_3b8 = 0;
      local_3b0 = 0;
      TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_3a8,0,0);
      local_388 = 0xffffffff;
      local_384 = 0;
      local_378 = 0;
      local_370 = 0;
      local_158[0] = 4;
      FText::FText(local_148,param_2);
      local_130 = 1;
      local_d60[0x18] = 0;
      local_d60[0x19] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d60 + 0x18,0);
      FGenericPlatformString::Memcpy(local_d60[0x18],L"Description",0x18);
      local_ad8 = local_d60 + 0x18;
      local_ad0 = local_158;
      FUN_1407484b0(&local_3b8,local_c34,&local_ad8,0);
      if (local_d60[0x18] != 0) {
        FMemory::Free();
      }
      FFormatArgumentValue::~FFormatArgumentValue(local_158);
      uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_740,L"{Description})",L"EnvQueryGenerator",L"DescriptionWithEnding")
      ;
      uVar17 = FTextFormat::FTextFormat(local_658,uVar17);
      uVar17 = FText::Format(local_758,uVar17,&local_3b8);
      FText::operator=(param_2,uVar17);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_758);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_740);
      local_370 = 0;
      if (local_378 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_3b8);
      local_500 = 0;
      if (local_508 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_548);
    }
  }
  else if (cVar6 == '\x04') {
    uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_6b0,L"Navmesh trace going over navmesh ledges",L"EnvQueryGenerator",
                        L"NavigationOverLedges");
    FText::operator=(param_2,uVar17);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6b0);
  }
  return param_2;
}



// FUNCTION 142bf6bf0 FUN_142bf6bf0 body=201 status=ok
// SIG undefined FUN_142bf6bf0(void)

void FUN_142bf6bf0(longlong *param_1,char param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x278))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x490), lVar2 != 0)) {
    lVar3 = FUN_142c2de20();
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
      if ((param_2 != '\0') && (*(longlong *)(lVar2 + 0x548) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x548) + 0x178);
        (**(code **)(*plVar4 + 0x18))(plVar4,2);
      }
      if ((param_3 != '\0') && (*(longlong *)(lVar2 + 0x550) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x550) + 0x178);
        (**(code **)(*plVar4 + 0x18))(plVar4,2);
      }
    }
  }
  return;
}



// FUNCTION 142bf6ce0 SetCategory body=3 status=ok
// SIG undefined SetCategory(void)

void TTLEOnlineRanking2GetParam::SetCategory(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 142bf6cf0 FUN_142bf6cf0 body=5 status=ok
// SIG undefined FUN_142bf6cf0(void)

void FUN_142bf6cf0(byte *param_1,byte param_2)

{
  *param_1 = ~param_2;
  return;
}



// FUNCTION 142bf6d00 FUN_142bf6d00 body=9 status=ok
// SIG undefined FUN_142bf6d00(void)

byte FUN_142bf6d00(byte *param_1)

{
  return (byte)~*param_1 >> 7;
}



// FUNCTION 142bf6d10 ValueToString body=59 status=ok
// SIG undefined ValueToString(void)

undefined8 FAIDataProviderBoolValue::ValueToString(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_1468e2308;
  if (*(char *)(param_1 + 0x28) == '\0') {
    puVar1 = &DAT_1468e2320;
  }
  uVar2 = FText::ToString(puVar1);
  FString::FString(param_2,uVar2);
  return param_2;
}



// FUNCTION 142bf6d50 ValueToString body=40 status=ok
// SIG undefined ValueToString(void)

undefined8 FAIDataProviderFloatValue::ValueToString(longlong param_1,undefined8 param_2)

{
  FString::SanitizeFloat(param_2,(double)*(float *)(param_1 + 0x28),1);
  return param_2;
}



// FUNCTION 142bf6d80 ValueToString body=37 status=ok
// SIG undefined ValueToString(void)

undefined8 FAIDataProviderIntValue::ValueToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,&DAT_1440da628,*(undefined4 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 142bf6db0 ValueToString body=62 status=ok
// SIG undefined ValueToString(void)

undefined8 * FAIDataProviderValue::ValueToString(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,&DAT_1457f05e4,6);
  return param_2;
}



// FUNCTION 142bf6df0 FUN_142bf6df0 body=206 status=ok
// SIG undefined FUN_142bf6df0(void)

void FUN_142bf6df0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint local_20;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0x154);
  uVar4 = *(uint *)(param_1 + 4);
  lVar8 = (longlong)(int)uVar4;
  iVar7 = uVar4 + uVar3;
  *(int *)(param_1 + 4) = iVar7;
  if (*(int *)((longlong)param_1 + 0x24) < iVar7) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1[3] + lVar8),0,(ulonglong)uVar3);
  lVar5 = param_1[3];
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  puVar1 = (undefined8 *)(lVar8 + lVar5);
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar8 + 0x10 + lVar5) = uVar2;
  iVar7 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
  }
  lVar8 = *param_1;
  *(ulonglong *)(lVar8 + (longlong)iVar7 * 0xc) = ((ulonglong)uVar4 & 0x7fffffff) << 0x20;
  *(uint *)(lVar8 + 8 + (longlong)iVar7 * 0xc) = local_20 & 0xfffffffe;
  return;
}



// FUNCTION 142bf6ec0 AddItemData<UEnvQueryItemType_Point,FVector> body=65 status=ok
// SIG undefined AddItemData<UEnvQueryItemType_Point,FVector>(void)

void FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point,FVector>
               (undefined8 param_1,undefined1 (*param_2) [12])

{
  undefined4 uStack_3c;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_28._12_4_ = uStack_3c;
  local_28._0_12_ = *param_2;
  local_18 = 0;
  FUN_142bf6df0(0,local_28);
  return;
}



// FUNCTION 142bf6f10 FindPathFollowingAgentForActor body=536 status=ok
// SIG undefined FindPathFollowingAgentForActor(void)

longlong FNavigationSystem::FindPathFollowingAgentForActor(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
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
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_142bf6fdc;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142bf6fdc:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
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
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142bf70a2;
      uVar8 = puVar11[(longlong)iVar7 + 1];
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
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142bf70a2:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar9 != 0) {
      uVar6 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar6);
      if (lVar9 != 0) {
        return lVar9;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return 0;
}



// FUNCTION 142bf7130 FindPath<FGridHelpers::FGridPathFilter> body=798 status=ok
// SIG undefined FindPath<FGridHelpers::FGridPathFilter>(void)

undefined8
FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>_>::
FindPath<FGridHelpers::FGridPathFilter>
          (longlong *param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  float local_78;
  uint local_74;
  uint *local_70;
  float *local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  uint local_48;
  
  if (((((int)param_2 < 0) || (*(int *)(*param_1 + 0x50) <= (int)param_2)) || ((int)param_3 < 0)) ||
     (*(int *)(*param_1 + 0x50) <= (int)param_3)) {
    return 0;
  }
  if (param_2 == param_3) {
    return 1;
  }
  plVar1 = param_1 + 1;
  iVar15 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) < 0x40) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0x40);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 3);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((*(int *)((longlong)param_1 + 0x7c) < 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xe,0);
  }
  fVar2 = *(float *)(param_1 + 2);
  local_48 = local_48 & 0xfffffffc;
  uStack_5c = 0xffffffff;
  uStack_58 = 0x7f7fffff;
  uStack_54 = 0x7f7fffff;
  local_50 = 0xffffffffffffffff;
  *(int *)(param_1 + 2) = (int)fVar2 + 1;
  local_60 = param_2;
  if (*(int *)((longlong)param_1 + 0x14) < (int)fVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,fVar2);
  }
  lVar10 = *plVar1;
  lVar12 = (longlong)(int)fVar2 * 0x1c;
  *(undefined8 *)(lVar12 + lVar10) = CONCAT44(uStack_5c,local_60);
  ((undefined8 *)(lVar12 + lVar10))[1] = CONCAT44(uStack_54,uStack_58);
  *(undefined8 *)(lVar12 + 0x10 + lVar10) = local_50;
  *(uint *)(lVar12 + 0x18 + lVar10) = local_48;
  local_70 = &local_60;
  local_68 = &local_78;
  local_78 = fVar2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_&&>_>(param_1 + 3,&local_74,&local_70,0);
  lVar10 = (longlong)(int)local_78 * 0x1c + *plVar1;
  *(float *)(lVar10 + 0x10) = local_78;
  *(undefined4 *)(lVar10 + 8) = 0;
  uVar5 = *(uint *)(*param_4 + 0x40);
  uVar11 = param_2 % uVar5 - param_3 % uVar5;
  uVar13 = param_2 / uVar5 - param_3 / uVar5;
  uVar5 = (int)uVar11 >> 0x1f;
  uVar6 = (int)uVar13 >> 0x1f;
  *(float *)(lVar10 + 0xc) = (float)(int)(((uVar11 ^ uVar5) - uVar5) + ((uVar13 ^ uVar6) - uVar6));
  FOpenList::Push(param_1 + 0xe,lVar10);
  cVar4 = '\x01';
  local_78 = *(float *)(lVar10 + 0xc);
  iVar9 = (int)param_1[0xf];
  uVar5 = *(uint *)(lVar10 + 0x10);
  while ((local_74 = uVar5, 0 < iVar9 && (cVar4 != '\0'))) {
    cVar4 = ProcessSingleNode<FGridHelpers::FGridPathFilter>
                      (param_1,param_3,1,param_4,&local_74,&local_78);
    iVar9 = (int)param_1[0xf];
    uVar5 = local_74;
  }
  uVar14 = 2;
  if (local_78 == 0.0) {
    uVar14 = 1;
  }
  uVar7 = (ulonglong)uVar5;
  iVar9 = iVar15;
  while( true ) {
    iVar8 = iVar9;
    iVar9 = iVar8 + 1;
    iVar3 = *(int *)((longlong)(int)uVar7 * 0x1c + 0x14 + *plVar1);
    uVar7 = (ulonglong)iVar3;
    if (((iVar3 < 0) || ((int)param_1[2] <= iVar3)) ||
       (*(uint *)(uVar7 * 0x1c + *plVar1) == param_2)) break;
    if (9999 < iVar9) {
LAB_142bf7396:
      uVar14 = 3;
LAB_142bf739c:
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < iVar9) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_5);
        iVar15 = (int)param_5[1];
      }
      *(int *)(param_5 + 1) = iVar15 + iVar9;
      if (*(int *)((longlong)param_5 + 0xc) < iVar15 + iVar9) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5);
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_5 + (longlong)iVar15 * 4),0,(longlong)iVar9 << 2);
      lVar12 = (longlong)iVar8;
      lVar10 = *plVar1;
      do {
        *(undefined4 *)(*param_5 + lVar12 * 4) =
             *(undefined4 *)(lVar10 + (longlong)(int)uVar5 * 0x1c);
        lVar12 = lVar12 + -1;
        lVar10 = *plVar1;
        uVar5 = *(uint *)(lVar10 + 0x14 + (longlong)(int)uVar5 * 0x1c);
      } while (-1 < lVar12);
      return uVar14;
    }
  }
  if (iVar9 < 10000) goto LAB_142bf739c;
  goto LAB_142bf7396;
}



// FUNCTION 142bf7450 ProcessSingleNode<FGridHelpers::FGridPathFilter> body=1138 status=ok
// SIG undefined ProcessSingleNode<FGridHelpers::FGridPathFilter>(void)

ulonglong FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>_>
          ::ProcessSingleNode<FGridHelpers::FGridPathFilter>
                    (longlong *param_1,uint param_2,char param_3,longlong *param_4,uint *param_5,
                    float *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int *piVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_98;
  undefined1 local_94 [4];
  uint *local_90;
  uint *local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  uint local_68;
  
  iVar17 = (int)param_1[0xf];
  plVar1 = param_1 + 0xe;
  piVar25 = (int *)*plVar1;
  puVar7 = (undefined8 *)param_1[0x11];
  iVar12 = iVar17 + -1;
  iVar5 = *piVar25;
  if (0 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    ::_guard_xfg_dispatch_icall_nop(piVar25,piVar25 + (iVar17 - iVar12),(longlong)iVar12 << 2);
    piVar25 = (int *)*plVar1;
    iVar17 = (int)param_1[0xf];
  }
  iVar17 = iVar17 + -1;
  iVar12 = 0;
  *(int *)(param_1 + 0xf) = iVar17;
  if (1 < iVar17) {
    do {
      iVar18 = iVar12 * 2 + 1;
      iVar6 = iVar12 * 2 + 2;
      lVar23 = *(longlong *)*puVar7;
      iVar19 = iVar18;
      if ((iVar6 < iVar17) &&
         (fVar27 = *(float *)((longlong)piVar25[iVar6] * 0x1c + 0xc + lVar23),
         pfVar3 = (float *)((longlong)piVar25[iVar18] * 0x1c + 0xc + lVar23), iVar19 = iVar6,
         *pfVar3 <= fVar27 && fVar27 != *pfVar3)) {
        iVar19 = iVar18;
      }
      iVar6 = piVar25[iVar12];
      fVar27 = *(float *)((longlong)iVar6 * 0x1c + 0xc + lVar23);
      pfVar3 = (float *)((longlong)piVar25[iVar19] * 0x1c + 0xc + lVar23);
      if (fVar27 < *pfVar3 || fVar27 == *pfVar3) break;
      piVar25[iVar12] = piVar25[iVar19];
      piVar25[iVar19] = iVar6;
      iVar12 = iVar19;
    } while (iVar19 * 2 + 1 < iVar17);
  }
  plVar2 = param_1 + 1;
  lVar24 = (longlong)iVar5 * 0x1c;
  pbVar4 = (byte *)(lVar24 + 0x18 + *(longlong *)param_1[0x10]);
  *pbVar4 = *pbVar4 & 0xfe;
  lVar23 = *plVar2;
  pbVar4 = (byte *)(lVar24 + 0x18 + lVar23);
  *pbVar4 = *pbVar4 | 2;
  if ((param_3 == '\0') || (*(uint *)(lVar24 + lVar23) != param_2)) {
    piVar25 = &DAT_146691150;
    do {
      lVar23 = *plVar2;
      lVar21 = *param_1;
      uVar15 = *(uint *)(lVar24 + lVar23);
      uVar22 = *(uint *)(lVar21 + 0x40);
      iVar17 = piVar25[1] + uVar15 % uVar22;
      iVar12 = *piVar25 + uVar15 / uVar22;
      if ((((((-1 < iVar12) && (iVar12 < *(int *)(lVar21 + 0x3c))) && (-1 < iVar17)) &&
           ((iVar17 < (int)uVar22 && (uVar22 = uVar22 * iVar12 + iVar17, -1 < (int)uVar22)))) &&
          (((int)uVar22 < *(int *)(lVar21 + 0x50) &&
           ((uVar22 != *(uint *)(lVar24 + 4 + lVar23) && (uVar22 != uVar15)))))) &&
         (*(char *)((longlong)(int)uVar22 + *(longlong *)(*param_4 + 0x48)) == '\0')) {
        if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
          plVar9 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar9 = param_1 + 10;
          }
          uVar15 = *(uint *)((longlong)plVar9 +
                            ((longlong)(int)param_1[0xc] - 1U & (longlong)(int)uVar22) * 4);
          if (uVar15 != 0xffffffff) {
            do {
              puVar16 = (uint *)((longlong)(int)uVar15 * 0x10 + param_1[3]);
              if (*puVar16 == uVar22) {
                if (uVar15 != 0xffffffff) goto LAB_142bf76c6;
                break;
              }
              uVar15 = puVar16[2];
            } while (uVar15 != 0xffffffff);
          }
        }
        puVar16 = (uint *)0x0;
LAB_142bf76c6:
        puVar10 = puVar16 + 1;
        if (puVar16 == (uint *)0x0) {
          puVar10 = (uint *)0x0;
        }
        if (puVar10 == (uint *)0x0) {
          uVar15 = *(uint *)(param_1 + 2);
          local_68 = local_68 & 0xfffffffc;
          uStack_7c = 0xffffffff;
          uStack_78 = 0x7f7fffff;
          uStack_74 = 0x7f7fffff;
          local_70 = 0xffffffffffffffff;
          *(uint *)(param_1 + 2) = uVar15 + 1;
          local_80 = uVar22;
          if (*(int *)((longlong)param_1 + 0x14) < (int)(uVar15 + 1)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
            ResizeGrow(plVar2,uVar15);
          }
          lVar23 = *plVar2;
          lVar21 = (longlong)(int)uVar15 * 0x1c;
          puVar16 = (uint *)(lVar21 + lVar23);
          *puVar16 = local_80;
          puVar16[1] = uStack_7c;
          puVar16[2] = uStack_78;
          puVar16[3] = uStack_74;
          *(undefined8 *)(lVar21 + 0x10 + lVar23) = local_70;
          *(uint *)(lVar21 + 0x18 + lVar23) = local_68;
          local_90 = &local_80;
          local_88 = &local_98;
          local_98 = uVar15;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_&&>_>(param_1 + 3,local_94,&local_90,0);
          puVar16 = (uint *)((longlong)(int)local_98 * 0x1c + *plVar2);
          puVar16[4] = local_98;
          lVar23 = *plVar2;
        }
        else {
          puVar16 = (uint *)((longlong)(int)*puVar10 * 0x1c + lVar23);
        }
        uVar15 = *puVar16;
        uVar22 = *(uint *)(*param_4 + 0x40);
        uVar11 = *(uint *)(lVar23 + lVar24) % uVar22 - uVar15 % uVar22;
        uVar13 = (int)uVar11 >> 0x1f;
        uVar20 = *(uint *)(lVar23 + lVar24) / uVar22 - uVar15 / uVar22;
        uVar14 = (int)uVar20 >> 0x1f;
        fVar27 = (float)(int)(((uVar11 ^ uVar13) - uVar13) + ((uVar20 ^ uVar14) - uVar14)) +
                 *(float *)(lVar23 + 8 + lVar24);
        if ((param_3 == '\0') || (uVar15 == param_2)) {
          fVar28 = 0.0;
        }
        else {
          uVar11 = uVar15 % uVar22 - param_2 % uVar22;
          uVar13 = uVar15 / uVar22 - param_2 / uVar22;
          uVar15 = (int)uVar11 >> 0x1f;
          uVar22 = (int)uVar13 >> 0x1f;
          fVar28 = (float)(int)(((uVar11 ^ uVar15) - uVar15) + ((uVar13 ^ uVar22) - uVar22));
        }
        fVar26 = fVar28 + fVar27;
        if (fVar26 < (float)puVar16[3]) {
          puVar16[2] = (uint)fVar27;
          puVar16[3] = (uint)fVar26;
          puVar16[1] = *(uint *)(lVar24 + *plVar2);
          uVar15 = *(uint *)(lVar24 + 0x10 + *plVar2);
          *(byte *)(puVar16 + 6) = (byte)puVar16[6] & 0xfd;
          puVar16[5] = uVar15;
          if ((puVar16[6] & 1) == 0) {
            FOpenList::Push(plVar1);
          }
          if (fVar28 < *param_6) {
            *param_6 = fVar28;
            *param_5 = puVar16[4];
          }
        }
      }
      piVar25 = piVar25 + 2;
    } while ((longlong)piVar25 < 0x146691190);
    uVar8 = 0x146691101;
  }
  else {
    *param_5 = *(uint *)(lVar24 + 0x10 + lVar23);
    *param_6 = 0.0;
    uVar8 = (ulonglong)param_6 & 0xffffffffffffff00;
  }
  return uVar8;
}



// FUNCTION 142bf78d0 FUN_142bf78d0 body=195 status=ok
// SIG undefined FUN_142bf78d0(void)

undefined8 * FUN_142bf78d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"PathFollowingComponent");
  uVar1 = ANavLinkProxy::GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PathFollowingComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_142bb0cb0(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1457ff258;
  param_1[0x8b] = &PTR_LAB_1457ffb38;
  param_1[0xa1] = &PTR_LAB_1457ffb90;
  param_1[0xa2] = &PTR_LAB_1457ffba8;
  param_1[0xa3] = &PTR_LAB_1457ffbf0;
  param_1[0xa4] = &PTR_LAB_1457ffc18;
  return param_1;
}



// FUNCTION 142bf79a0 FUN_142bf79a0 body=660 status=ok
// SIG undefined FUN_142bf79a0(void)

undefined8 * FUN_142bf79a0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [56];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14580a148;
  plVar1 = param_1 + 0x8d;
  param_1[0x8b] = &PTR_LAB_14580a830;
  param_1[0x8c] = &PTR_LAB_14580a850;
  *plVar1 = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"PositionComponent",1);
  uVar5 = *puVar3;
  uVar4 = FUN_1429ff160();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  param_1[0x2d] = uVar5;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"SmartLinkComp",1);
  uVar5 = *puVar3;
  uVar4 = UCurveLinearColor::GetPrivateStaticClass();
  uVar5 = FUN_141752410(param_1,uVar5,uVar4,uVar4,1,0,0);
  param_1[0x91] = uVar5;
  FUN_142ba6560(uVar5,0);
  uVar5 = param_1[0x91];
  local_78 = FUN_142c0b850;
  uStack_70 = 0;
  local_88 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_80 = 3;
  local_88 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_1443188c0;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_78._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_70;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_6c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_144318908;
  }
  FUN_142ba2cf0(uVar5,&local_88);
  if (local_80 != 0) {
    if (local_88 == (longlong *)0x0) goto LAB_142bf7b72;
    (**(code **)(*local_88 + 0x28))(local_88,0);
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
    }
    local_80 = 0;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
LAB_142bf7b72:
  *(undefined1 *)(param_1 + 0x92) = 0;
  FNavigationLinkBase::FNavigationLinkBase(local_68);
  local_30 = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0x42480000;
  uStack_1c = 0;
  uStack_2c = 0xc2480000;
  uVar5 = UAITask_LockLogic::StaticClass();
  FNavigationLinkBase::SetAreaClass(local_68,uVar5);
  iVar2 = *(int *)(param_1 + 0x8e);
  *(int *)(param_1 + 0x8e) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x474) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar7 = (longlong)iVar2 * 0x50 + *plVar1;
  FNavigationLinkBase::FNavigationLinkBase(lVar7,local_68);
  *(ulonglong *)(lVar7 + 0x38) = CONCAT44(uStack_2c,local_30);
  *(undefined4 *)(lVar7 + 0x40) = local_28;
  *(ulonglong *)(lVar7 + 0x44) = CONCAT44(uStack_20,uStack_24);
  *(undefined4 *)(lVar7 + 0x4c) = uStack_1c;
  FUN_14223c460(param_1,0);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  return param_1;
}



// FUNCTION 142bf7c40 FCombinedNavGridData body=135 status=ok
// SIG undefined FCombinedNavGridData(void)

longlong FCombinedNavGridData::FCombinedNavGridData(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FNavLocalGridData::FNavLocalGridData();
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_2 + 0x88);
  _Src = *(void **)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x80,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x80),_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 142bf7cd0 FUN_142bf7cd0 body=409 status=ok
// SIG undefined FUN_142bf7cd0(void)

undefined8 FUN_142bf7cd0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FUN_142252a50();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar3[1] = (longlong)FUN_142c15980;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  if (local_18 != plVar2) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)plVar2[1] != 0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(plVar2 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar2);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  plVar2 = (longlong *)FUN_1422511b0();
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f148;
    plVar3[1] = (longlong)FUN_142c0ad50;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
  }
  if (local_18 != plVar2) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)plVar2[1] != 0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(plVar2 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar2);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 142bf7e70 FNavLocalGridData body=275 status=ok
// SIG undefined FNavLocalGridData(void)

undefined4 * FNavLocalGridData::FNavLocalGridData(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
  param_1[0xb] = param_2[0xb];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_2 + 0xf);
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if (iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x12,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  pvVar2 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if (iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x16,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x16),pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  return param_1;
}



// FUNCTION 142bf7f90 FNavLocalGridData body=432 status=ok
// SIG undefined FNavLocalGridData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FNavLocalGridData::FNavLocalGridData(undefined8 *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  undefined1 local_48;
  
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_1468b5d98;
  param_1[1] = *(undefined8 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  fVar4 = 1.0 / DAT_1466910cc;
  local_48 = 1;
  fVar3 = (float)((int)ROUND(fVar4 * *param_2 + fVar4 * *param_2 + 0.5) >> 1) * DAT_1466910cc;
  fVar2 = (float)((int)ROUND(fVar4 * param_2[1] + fVar4 * param_2[1] + 0.5) >> 1) * DAT_1466910cc;
  local_60 = CONCAT44(fVar2 - param_3[1],fVar3 - *param_3);
  local_54 = CONCAT44(fVar2 + param_3[1],fVar3 + *param_3);
  local_58 = (float)((int)ROUND(fVar4 * param_2[2] + fVar4 * param_2[2] + 0.5) >> 1) * DAT_1466910cc
  ;
  local_4c = local_58;
  TSimpleCellGrid<unsigned_char,255>::Init(param_1,DAT_1466910cc,&local_60);
  *(int *)(param_1 + 0xe) = (int)(fVar4 * *(float *)((longlong)param_1 + 0x24));
  *(int *)(param_1 + 0xf) = (int)(fVar4 * *(float *)((longlong)param_1 + 0x2c));
  *(int *)((longlong)param_1 + 0x74) = (int)(fVar4 * *(float *)(param_1 + 5));
  return param_1;
}


