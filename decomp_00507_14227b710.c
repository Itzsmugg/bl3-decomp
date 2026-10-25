// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14227b710 FUN_14227b710 body=1396 status=ok
// SIG undefined FUN_14227b710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14227b710(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                      undefined1 param_5,char param_6,float param_7)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_res20 [2];
  longlong local_78;
  longlong lStack_70;
  undefined1 local_68 [80];
  
  lVar9 = FUN_1422767f0(param_1,param_2,param_3,param_5);
  plVar10 = (longlong *)FUN_1423ac7e0(param_2);
  uVar16 = 0;
  uVar11 = uVar16;
  if ((plVar10 != (longlong *)0x0) && (lVar9 != 0)) {
    uVar11 = UAnimInstance::GetActiveInstanceForMontage(plVar10,lVar9);
  }
  lVar12 = FUN_1423b0890(param_2);
  if (lVar12 == 0) {
    if (uVar11 == 0) goto LAB_14227badf;
    FAlphaBlend::SetDesiredValue(uVar11 + 0x130,0x3f800000);
    FAlphaBlend::SetAlpha(uVar11 + 0x130,0x3f800000);
    if (lVar9 == 0) {
      if (0 < (int)plVar10[0x10]) {
        plVar13 = (longlong *)plVar10[0xf];
        uVar15 = uVar16;
        do {
          plVar2 = (longlong *)*plVar13;
          if (plVar2 != (longlong *)0x0) {
            if ((*plVar2 == 0) || (*(float *)(plVar2 + 0x2b) == 0.0)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              if (*(char *)((longlong)plVar2 + 0x184) == '\0') {
                uVar18 = (undefined4)plVar2[0x25];
              }
              else {
                uVar18 = (undefined4)plVar2[0x30];
              }
              goto LAB_14227b96b;
            }
          }
          uVar20 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar20;
          plVar13 = plVar13 + 1;
        } while ((int)uVar20 < (int)plVar10[0x10]);
      }
LAB_14227b8dc:
      uVar18 = 0;
    }
    else {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar10 + 0x11,local_res20,lVar9);
      if ((((local_res20[0] == -1) ||
           (lVar12 = plVar10[0x11] + (longlong)local_res20[0] * 0x18, lVar12 == 0)) ||
          (plVar13 = (longlong *)(lVar12 + 8), plVar13 == (longlong *)0x0)) ||
         (lVar12 = *plVar13, lVar12 == 0)) goto LAB_14227b8dc;
      if (*(char *)(lVar12 + 0x184) == '\0') {
        uVar18 = *(undefined4 *)(lVar12 + 0x128);
      }
      else {
        uVar18 = *(undefined4 *)(lVar12 + 0x180);
      }
    }
    if (lVar9 == 0) {
LAB_14227b96b:
      uVar15 = uVar16;
      if (0 < (int)plVar10[0x10]) {
        do {
          plVar13 = *(longlong **)(uVar16 + plVar10[0xf]);
          if (plVar13 != (longlong *)0x0) {
            if ((*plVar13 == 0) || (*(float *)(plVar13 + 0x2b) == 0.0)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              *(undefined4 *)(plVar13 + 0x25) = param_4;
              *(undefined4 *)(plVar13 + 6) = 0xfffffffe;
              *(undefined4 *)(plVar13 + 7) = 0xfffffffe;
            }
          }
          uVar20 = (int)uVar15 + 1;
          uVar16 = uVar16 + 8;
          uVar15 = (ulonglong)uVar20;
        } while ((int)uVar20 < (int)plVar10[0x10]);
      }
    }
    else {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar10 + 0x11,local_res20,lVar9);
      if (((local_res20[0] != -1) &&
          (lVar12 = plVar10[0x11] + (longlong)local_res20[0] * 0x18, lVar12 != 0)) &&
         ((plVar13 = (longlong *)(lVar12 + 8), plVar13 != (longlong *)0x0 &&
          (lVar12 = *plVar13, lVar12 != 0)))) {
        *(undefined4 *)(lVar12 + 0x128) = param_4;
        *(undefined4 *)(lVar12 + 0x30) = 0xfffffffe;
        *(undefined4 *)(lVar12 + 0x38) = 0xfffffffe;
      }
    }
  }
  else {
    uVar18 = FUN_1422aace0(lVar12);
    if ((param_6 == '\0') || (lVar9 != 0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = 1;
    }
    if (param_7 == 0.0) {
      FUN_1422b41b0(lVar12,param_4,param_4,uVar17);
    }
    else {
      FUN_1422b40f0(lVar12,param_4,uVar17);
    }
  }
  if (uVar11 == 0) goto LAB_14227badf;
  FUN_142284510(plVar10,param_7,0);
  FUN_1422755f0(uVar11,uVar18,param_4,0);
  if (param_6 == '\0') {
    FUN_14229abf0(plVar10 + 0x1f,param_2);
  }
  if ((*(byte *)((longlong)plVar10 + 0x31) & 4) != 0) {
    lVar12 = plVar10[4];
    if (lVar12 != 0) {
      lVar14 = FUN_142a07000();
      lVar12 = *(longlong *)(lVar12 + 0x10);
      if ((*(int *)(lVar12 + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar12 + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        cVar7 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar8 = GetCurrentThreadId();
          bVar6 = false;
          if (DVar8 == DAT_1468c21c0) goto LAB_14227ba9a;
        }
        else {
LAB_14227ba9a:
          bVar6 = true;
        }
        if (bVar6) {
          FUN_1423b2d70(plVar10[4],1);
        }
      }
    }
    lVar12 = plVar10[0x72];
    if (lVar12 == 0) {
      lVar12 = (**(code **)(*plVar10 + 0x308))(plVar10);
      plVar10[0x72] = lVar12;
    }
    FUN_142284410(lVar12);
  }
  FUN_14227aad0(plVar10);
LAB_14227badf:
  (**(code **)(*param_2 + 0x960))(param_2,0);
  FUN_1423b8300(param_2);
  pfVar1 = (float *)(param_2 + 0x50);
  if (((*(float *)(param_2 + 0x3f) == *pfVar1) &&
      (*(float *)((longlong)param_2 + 0x1fc) == *(float *)((longlong)param_2 + 0x284))) &&
     (*(float *)(param_2 + 0x40) == *(float *)(param_2 + 0x51))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    local_78 = *(longlong *)*(undefined1 (*) [12])(param_2 + 0x3f);
    auVar19._12_4_ = 0;
    auVar19._0_12_ = *(undefined1 (*) [12])(param_2 + 0x3f);
    fVar3 = (float)DAT_146aef080;
    fVar4 = DAT_146aef080._4_4_;
    fVar5 = DAT_146aef080._8_4_;
    auVar19 = divps(auVar19,_DAT_146aef080);
    fVar21 = (float)local_78 - (float)(int)auVar19._0_4_ * fVar3;
    fVar22 = (float)((ulonglong)local_78 >> 0x20) - (float)(int)auVar19._4_4_ * fVar4;
    fVar23 = *(float *)(param_2 + 0x40) - (float)(int)auVar19._8_4_ * fVar5;
    fVar21 = (float)(((uint)(fVar21 + fVar3) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                    (uint)(fVar21 + fVar3));
    fVar22 = (float)(((uint)(fVar22 + fVar4) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                    (uint)(fVar22 + fVar4));
    fVar23 = (float)(((uint)(fVar23 + fVar5) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                    (uint)(fVar23 + fVar5));
    uVar20 = ((uint)(fVar23 - fVar5) ^ (uint)fVar23) & -(uint)(fRam0000000146aef078 < fVar23) ^
             (uint)fVar23;
    lStack_70 = CONCAT44(lStack_70._4_4_,uVar20);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar22 - fVar4) ^ (uint)fVar22) & -(uint)(fRam0000000146aef074 < fVar22) ^
                  (uint)fVar22,
                  ((uint)(fVar21 - fVar3) ^ (uint)fVar21) & -(uint)(_DAT_146aef070 < fVar21) ^
                  (uint)fVar21);
    *(uint *)(param_2 + 0x51) = uVar20;
    plVar10 = (longlong *)FRotator::Quaternion(pfVar1,local_68);
    lVar12 = plVar10[1];
    param_2[0x4e] = *plVar10;
    param_2[0x4f] = lVar12;
  }
  local_78 = param_2[0x4e];
  lStack_70 = param_2[0x4f];
  FUN_14239b520(param_2,param_2[0x32],param_2[0x33],0,&local_78,0);
  (**(code **)(*param_2 + 0x990))(param_2);
  UActorComponent::MarkRenderDynamicDataDirty(param_2);
  FUN_1423424c0(param_2);
  return lVar9;
}



// FUNCTION 14227bc90 FUN_14227bc90 body=194 status=ok
// SIG undefined FUN_14227bc90(void)

void FUN_14227bc90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar3 = FUN_142a07000();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  if (param_1[0x72] == 0) {
    lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar4;
  }
  if ((longlong *)param_2[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[7] + 0x10))();
    plVar1 = (longlong *)param_2[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
      param_2[7] = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 14227bd60 FUN_14227bd60 body=643 status=ok
// SIG undefined FUN_14227bd60(void)

void FUN_14227bd60(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar3 = (**(code **)(*param_2 + 200))(param_2);
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(*param_2 + 0xd0))(param_2), cVar3 != '\0')) {
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      lVar4 = FUN_142a07000();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar5 = param_1[0x72];
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar5;
    }
    plVar6 = *(longlong **)(lVar5 + 0xd8);
    if ((((plVar6 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar6 + 0xd8))(plVar6), cVar3 == '\0')) ||
        (plVar6 = (longlong *)FUN_142274de0(plVar6), plVar6 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar6 + 200))(plVar6), cVar3 == '\0')) {
      lVar5 = operator_new(0x48);
      uVar8 = 0;
      uVar7 = uVar8;
      if (lVar5 != 0) {
        uVar7 = FUN_142286b60(lVar5);
      }
      FUN_14227bff0(param_1,uVar7,param_3);
      FUN_14227bff0(param_1,param_2,param_3);
      lVar5 = operator_new(0x48);
      if (lVar5 != 0) {
        uVar8 = FUN_142286b20(lVar5);
      }
      FUN_14227bff0(param_1,uVar8,param_3);
    }
    else {
      lVar5 = param_1[4];
      if (lVar5 != 0) {
        lVar4 = FUN_142a07000();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1423b2d70(param_1[4],1);
        }
      }
      lVar5 = param_1[0x72];
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
        param_1[0x72] = lVar5;
      }
      FUN_142276670(lVar5,param_2,param_3);
      iVar1 = *(int *)(lVar5 + 0x5e8);
      *(int *)(lVar5 + 0x5e8) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x5ec) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x5e0,iVar1);
      }
      *(longlong **)(*(longlong *)(lVar5 + 0x5e0) + (longlong)iVar1 * 8) = param_2;
      lVar5 = (**(code **)(*param_2 + 0xc0))(param_2);
      lVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((lVar4 != 0) && (lVar5 != 0)) {
        uVar7 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                ::GetBoundProgramCounterForTimerManager(lVar4);
        FUN_140488ed0(lVar5,uVar7);
        FUN_140488ed0(lVar4,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14227bff0 FUN_14227bff0 body=364 status=ok
// SIG undefined FUN_14227bff0(void)

void FUN_14227bff0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (param_2 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0xc0))(param_2);
  }
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    lVar6 = FUN_142a07000();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar7 = param_1[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  if ((param_2 != (longlong *)0x0) && (lVar5 != 0)) {
    FUN_142276670(lVar7,param_2,param_3);
    iVar1 = *(int *)(lVar7 + 0x5e8);
    *(int *)(lVar7 + 0x5e8) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x5ec) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x5e0,iVar1);
    }
    *(longlong **)(*(longlong *)(lVar7 + 0x5e0) + (longlong)iVar1 * 8) = param_2;
    plVar2 = *(longlong **)(lVar7 + 0xd8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*plVar2 + 0xd8))(plVar2), cVar4 != '\0')) {
      uVar8 = FUN_142274de0(plVar2);
      FUN_140488ed0(lVar5,uVar8);
      FUN_142280620(plVar2,param_2);
      return;
    }
    FUN_140488ed0(lVar5,*(undefined8 *)(lVar7 + 0xd8));
    *(longlong **)(lVar7 + 0xd8) = param_2;
  }
  return;
}



// FUNCTION 14227c160 FUN_14227c160 body=303 status=ok
// SIG undefined FUN_14227c160(void)

void FUN_14227c160(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar4 = (**(code **)(*param_2 + 0xd0))(param_2);
  if (cVar4 != '\0') {
    lVar6 = param_1[4];
    if (lVar6 != 0) {
      lVar5 = FUN_142a07000();
      lVar6 = *(longlong *)(lVar6 + 0x10);
      if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar6 = param_1[0x72];
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar6;
    }
    FUN_142276670(lVar6,param_2,param_3);
    puVar1 = (undefined8 *)(lVar6 + 0x5f0);
    iVar2 = *(int *)(lVar6 + 0x5f8);
    *(int *)(lVar6 + 0x5f8) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x5fc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*puVar1 + 8),(void *)*puVar1,(longlong)iVar2 << 3);
    *(longlong **)*puVar1 = param_2;
    iVar2 = *(int *)(lVar6 + 0x5e8);
    *(int *)(lVar6 + 0x5e8) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x5ec) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar6 + 0x5e0,iVar2);
    }
    *(longlong **)(*(longlong *)(lVar6 + 0x5e0) + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 14227c290 FUN_14227c290 body=330 status=ok
// SIG undefined FUN_14227c290(void)

void FUN_14227c290(longlong *param_1)

{
  float *pfVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  float local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 *local_30;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x21);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)*param_1;
    iVar4 = 0;
    pfVar1 = (float *)(param_1 + 0x2f);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_res10[0] = *pfVar1 - *(float *)((longlong)param_1 + 0x74);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x2a8))(plVar5,local_res10,pfVar1,&local_48);
      lVar3 = *param_1;
      for (; (-1 < iVar4 && (iVar4 < *(int *)(lVar3 + 0x180))); iVar4 = iVar4 + 1) {
        FAnimTrack::GetAnimNotifiesFromTrackPositions
                  (*(longlong *)(lVar3 + 0x178) + ((longlong)iVar4 * 3 + 1) * 8,local_res10,pfVar1);
      }
      plVar6 = local_48 + (longlong)(int)local_40 * 2;
      lVar3 = local_res20;
      for (plVar5 = local_48; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        if (((plVar5[1] != 0) && (local_res20 = *plVar5, local_res20 != 0)) &&
           (*(longlong *)(local_res20 + 0x50) != 0)) {
          local_res8[0] = 1;
          lVar3 = FWeakObjectPtr::Get(param_1 + 0x21);
          local_38 = &local_res20;
          local_30 = local_res8;
          FUN_1422536b0(lVar3 + 0x168,local_res18,&local_38,0);
          lVar3 = local_res20;
        }
        local_res20 = lVar3;
        lVar3 = local_res20;
      }
      if (local_48 != (longlong *)0x0) {
        local_res20 = lVar3;
        FMemory::Free(local_48);
      }
    }
  }
  return;
}



// FUNCTION 14227c3e0 FUN_14227c3e0 body=158 status=ok
// SIG undefined FUN_14227c3e0(void)

void FUN_14227c3e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  uVar2 = *param_3;
  iVar1 = *(int *)(param_1 + 0x348);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  *(int *)(param_1 + 0x348) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x340),iVar1);
  }
  puVar9 = (undefined8 *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x340));
  *puVar9 = uVar3;
  puVar9[1] = uVar4;
  puVar9[2] = uVar5;
  puVar9[3] = uVar6;
  puVar9[4] = uVar7;
  puVar9[5] = uVar8;
  *(undefined4 *)(puVar9 + 7) = param_4;
  puVar9[6] = uVar2;
  return;
}



// FUNCTION 14227c480 FUN_14227c480 body=466 status=ok
// SIG undefined FUN_14227c480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14227c480(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  void **ppvVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  void *local_38;
  longlong *local_30;
  undefined4 local_28;
  
  plVar1 = (longlong *)(param_1 + 0x3a0);
  local_38 = (void *)CONCAT71(local_38._1_7_,*(byte *)((longlong)param_2 + 0xb1a) >> 7);
  local_30 = param_2 + 0x164;
  local_28 = *(undefined4 *)((longlong)param_2 + 0x83c);
  FBoneContainer::InitializeTo(plVar1,param_2 + 0x17a,&local_38,param_3);
  lVar7 = (**(code **)(*param_2 + 0x950))(param_2);
  if (lVar7 != 0) {
    uVar4 = *(uint *)(param_1 + 0x3a8);
    local_38 = (void *)0x0;
    local_30 = (longlong *)(ulonglong)uVar4;
    uVar10 = uVar4;
    if (0 < (int)uVar4) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar10 = (uint)local_30;
      if (0 < (int)uVar4) {
        lVar11 = 0;
        puVar9 = (undefined4 *)((longlong)local_38 + 0x20);
        do {
          uVar5 = uRam00000001468b5b78;
          uVar3 = *(ushort *)(*plVar1 + lVar11 * 2);
          if ((int)(uint)uVar3 < *(int *)(lVar7 + 0x18)) {
            puVar8 = (undefined8 *)((ulonglong)uVar3 * 0x30 + *(longlong *)(lVar7 + 0x10));
            uVar5 = puVar8[1];
            *(undefined8 *)(puVar9 + -8) = *puVar8;
            *(undefined8 *)(puVar9 + -6) = uVar5;
            uVar5 = puVar8[3];
            *(undefined8 *)(puVar9 + -4) = puVar8[2];
            *(undefined8 *)(puVar9 + -2) = uVar5;
            uVar12 = *(undefined4 *)(puVar8 + 4);
            uVar13 = *(undefined4 *)((longlong)puVar8 + 0x24);
            uVar14 = *(undefined4 *)(puVar8 + 5);
            uVar15 = *(undefined4 *)((longlong)puVar8 + 0x2c);
          }
          else {
            *(undefined8 *)(puVar9 + -8) = _DAT_1468b5b70;
            *(undefined8 *)(puVar9 + -6) = uVar5;
            uVar5 = uRam00000001468b5b88;
            *(undefined8 *)(puVar9 + -4) = _DAT_1468b5b80;
            *(undefined8 *)(puVar9 + -2) = uVar5;
            uVar12 = _DAT_1468b5b90;
            uVar13 = uRam00000001468b5b94;
            uVar14 = uRam00000001468b5b98;
            uVar15 = uRam00000001468b5b9c;
          }
          *puVar9 = uVar12;
          puVar9[1] = uVar13;
          puVar9[2] = uVar14;
          puVar9[3] = uVar15;
          lVar11 = lVar11 + 1;
          puVar9 = puVar9 + 0xc;
        } while (lVar11 < (int)uVar4);
      }
    }
    _Src = local_38;
    ppvVar2 = (void **)(param_1 + 0x440);
    if (ppvVar2 != &local_38) {
      *(uint *)(param_1 + 0x448) = uVar10;
      if ((uVar10 == 0) && (*(int *)(param_1 + 0x44c) == 0)) {
        *(undefined4 *)(param_1 + 0x44c) = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(ppvVar2,uVar10);
        _guard_xfg_dispatch_icall_nop(*ppvVar2,_Src,(longlong)(int)uVar10 * 0x30);
      }
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xe0);
  if (lVar7 != 0) {
    *(longlong **)(lVar7 + 0x40) = plVar1;
    iVar6 = *(int *)(param_1 + 0x3a8);
    *(undefined4 *)(lVar7 + 0x38) = 0;
    if (*(int *)(lVar7 + 0x3c) < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(lVar7 + 0x30,iVar6);
    }
    iVar6 = *(int *)(lVar7 + 0x38) + iVar6;
    *(int *)(lVar7 + 0x38) = iVar6;
    if (*(int *)(lVar7 + 0x3c) < iVar6) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(lVar7 + 0x30);
    }
  }
  *(byte *)(param_1 + 0x5b8) = *(byte *)(param_1 + 0x5b8) | 1;
  return;
}



// FUNCTION 14227c660 FUN_14227c660 body=317 status=ok
// SIG undefined FUN_14227c660(void)

void FUN_14227c660(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_1[4];
  if ((*(longlong *)(lVar1 + 0x718) != 0) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x718) + 0x48) != 0)) {
    if (lVar1 != 0) {
      lVar3 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar3 = param_1[0x72];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar3;
    }
    FUN_14227c480(lVar3,lVar1,*(undefined8 *)(lVar1 + 0x718));
    return;
  }
  if (param_1[5] != 0) {
    if (lVar1 != 0) {
      lVar3 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar3 = param_1[0x72];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar3;
    }
    FUN_14227c480(lVar3,lVar1,param_1[5]);
  }
  return;
}



// FUNCTION 14227c7a0 FUN_14227c7a0 body=173 status=ok
// SIG undefined FUN_14227c7a0(void)

void FUN_14227c7a0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  FUN_1422e70a0(lVar3 + 0x3a0,param_2);
  *(byte *)(lVar3 + 0x5b8) = *(byte *)(lVar3 + 0x5b8) | 1;
  return;
}



// FUNCTION 14227c850 RecordMachineWeight body=27 status=ok
// SIG undefined RecordMachineWeight(void)

void FAnimInstanceProxy::RecordMachineWeight(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x138 + (longlong)*(int *)(param_1 + 0x1c8) * 0x10) +
   (longlong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 14227c870 RecordStateWeight body=196 status=ok
// SIG undefined RecordStateWeight(void)

void FAnimInstanceProxy::RecordStateWeight
               (longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar2 = param_1 + 0x1b0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x1c0) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x178));
        if (*piVar4 == param_2) {
          if (iVar1 != -1) goto LAB_14227c8f1;
          break;
        }
        iVar1 = piVar4[2];
      } while (iVar1 != -1);
    }
  }
  piVar4 = (int *)0x0;
LAB_14227c8f1:
  piVar3 = piVar4 + 1;
  if (piVar4 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x158 + (longlong)*(int *)(param_1 + 0x1c8) * 0x10) +
     (longlong)(*piVar3 + param_3) * 4) = param_4;
  }
  return;
}



// FUNCTION 14227c940 FUN_14227c940 body=468 status=ok
// SIG undefined FUN_14227c940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14227c940(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              ((undefined8 *)(param_1 + 0x1a0),0);
  }
  plVar1 = (longlong *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x88);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar8 = uVar5;
  if (0 < lVar7) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x80) + uVar8;
      cVar3 = FAnimNotifyEvent::IsBranchingPoint(lVar6);
      iVar4 = (int)uVar5;
      if (cVar3 != '\0') {
        local_ac = FAnimNotifyEvent::GetTriggerTime(lVar6);
        local_a8 = 0;
        local_b0 = iVar4;
        FUN_1422562b0(param_1,&local_b0,&local_88);
        if (*(longlong *)(lVar6 + 0x50) != 0) {
          local_9c = FAnimNotifyEvent::GetEndTriggerTime(lVar6);
          local_98 = 1;
          local_a0 = iVar4;
          FUN_1422562b0(param_1,&local_a0,&local_88);
          iVar2 = *(int *)(param_1 + 0x1b8);
          *(int *)(param_1 + 0x1b8) = iVar2 + 1;
          if (*(int *)(param_1 + 0x1bc) < iVar2 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
          }
          *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar4;
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      lVar7 = lVar7 + -1;
      uVar8 = uVar8 + 0xa8;
    } while (lVar7 != 0);
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    AlgoImpl::
    IntroSortInternal<FBranchingPointMarker,FIdentityFunctor,TDereferenceWrapper<FBranchingPointMarker,_UAnimMontage::RefreshBranchingPointMarkers_::_13_::FCompareNotifyTickMarkersTime>_>
              (*(undefined8 *)(param_1 + 0x1a0),(longlong)*(int *)(param_1 + 0x1a8),local_b8[0],
               local_b8);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 14227cb20 RefreshCacheData body=27 status=ok
// SIG undefined RefreshCacheData(void)

void UAnimMontage::RefreshCacheData(undefined8 param_1)

{
  UAnimSequenceBase::RefreshCacheData();
  FUN_14227c940(param_1);
  return;
}



// FUNCTION 14227cb40 FUN_14227cb40 body=31 status=ok
// SIG undefined FUN_14227cb40(void)

void FUN_14227cb40(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1423a41d0(param_2,param_1 + 0x228,param_1 + 0x278);
    return;
  }
  return;
}



// FUNCTION 14227cb60 FUN_14227cb60 body=413 status=ok
// SIG undefined FUN_14227cb60(void)

void FUN_14227cb60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  iVar4 = *(int *)(*param_1 + 0x170);
  if (0 < iVar4) {
    iVar3 = 0;
    plVar1 = param_1 + 0x1d;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    if (*(int *)((longlong)param_1 + 0xf4) != iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      iVar3 = (int)param_1[0x1e];
    }
    iVar3 = *(int *)(*param_1 + 0x170) + iVar3;
    *(int *)(param_1 + 0x1e) = iVar3;
    if (*(int *)((longlong)param_1 + 0xf4) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    plVar2 = param_1 + 0x1f;
    iVar3 = 0;
    iVar4 = *(int *)(*param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)((longlong)param_1 + 0x104) != iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar2,iVar4);
      iVar3 = (int)param_1[0x20];
    }
    iVar3 = *(int *)(*param_1 + 0x170) + iVar3;
    *(int *)(param_1 + 0x20) = iVar3;
    if (*(int *)((longlong)param_1 + 0x104) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
    lVar8 = *param_1;
    iVar4 = 0;
    if (0 < *(int *)(lVar8 + 0x170)) {
      lVar6 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(undefined4 *)(lVar6 + *plVar2) = 0xffffffff;
        lVar8 = *param_1;
        lVar6 = lVar6 + 4;
      } while (iVar4 < *(int *)(lVar8 + 0x170));
    }
    iVar4 = 0;
    if (0 < *(int *)(lVar8 + 0x170)) {
      lVar7 = 0;
      lVar6 = 0;
      do {
        iVar3 = 0;
        lVar5 = 0;
        if (0 < *(int *)(lVar8 + 0x170)) {
          plVar9 = (longlong *)(*(longlong *)(lVar8 + 0x168) + 0x30);
          do {
            if (*plVar9 == *(longlong *)(*(longlong *)(lVar8 + 0x168) + 0x40 + lVar6)) {
              if (iVar3 == -1) goto LAB_14227cc9f;
              goto LAB_14227ccac;
            }
            iVar3 = iVar3 + 1;
            lVar5 = lVar5 + 1;
            plVar9 = plVar9 + 0xb;
          } while (lVar5 < *(int *)(lVar8 + 0x170));
        }
        iVar3 = -1;
        lVar5 = -1;
LAB_14227cc9f:
        if (*(char *)((longlong)param_1 + 0x1ad) != '\0') {
          iVar3 = 0;
          lVar5 = 0;
        }
LAB_14227ccac:
        *(int *)(lVar7 + *plVar1) = iVar3;
        if ((-1 < iVar3) && (iVar3 < (int)param_1[0x1e])) {
          *(int *)(*plVar2 + lVar5 * 4) = iVar4;
        }
        lVar8 = *param_1;
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x58;
        lVar7 = lVar7 + 4;
      } while (iVar4 < *(int *)(lVar8 + 0x170));
    }
  }
  return;
}



// FUNCTION 14227cd00 FUN_14227cd00 body=1509 status=ok
// SIG undefined FUN_14227cd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14227cd00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_248 [32];
  undefined2 local_228;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_208 [2];
  longlong local_200 [3];
  longlong *local_1e8;
  ulonglong *puStack_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  longlong local_1b8 [2];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  longlong local_168 [2];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [40];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_208[0] = 0;
  lVar8 = *param_2;
  if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
    lVar14 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      lVar14 = param_1 + 0x2d0;
    }
    iVar6 = *(int *)(lVar14 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                              (longlong)*(int *)(param_1 + 0x2e0) - 1U) * 4);
    if (iVar6 != -1) {
      lVar14 = *(longlong *)(param_1 + 0x298);
      do {
        if (*(longlong *)(lVar14 + (longlong)iVar6 * 0x18) == lVar8) {
          if (iVar6 != -1) {
            lVar8 = IAnimClassInterface::GetActualAnimClass(*(undefined8 *)(param_1 + 0xa8));
            lVar14 = 2;
            bVar15 = lVar8 == 0;
            if (bVar15) {
              local_200[0] = 0;
              local_200[1] = 0xc;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_200,0);
              local_228 = 0x3f;
              FGenericPlatformString::Convert<char,wchar_t>(local_200[0],0xc,"Unavailable");
              plVar12 = local_200;
            }
            else {
              local_1c0 = *(undefined8 *)(lVar8 + 0x18);
              FName::ToString(&local_1c0,local_1b8);
              plVar12 = local_1b8;
            }
            lVar8 = *plVar12;
            *plVar12 = 0;
            local_1d8 = lVar8;
            local_1d0 = (int)plVar12[1];
            local_1cc = *(undefined4 *)((longlong)plVar12 + 0xc);
            plVar12[1] = 0;
            if ((bVar15) && (local_200[0] != 0)) {
              FMemory::Free();
            }
            if ((!bVar15) && (local_1b8[0] != 0)) {
              FMemory::Free();
            }
            cVar5 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
              DVar7 = GetCurrentThreadId();
              if (DVar7 != DAT_1468c21c0) goto LAB_14227d2c5;
            }
            FName::FName(&local_218,"AnimBlueprintLog",1);
            lVar8 = FText::FromString(local_d8,&local_1d8);
            uVar9 = FName::ToString(param_2,local_168);
            lVar10 = FText::FromString(local_c0,uVar9);
            uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_128,
                               L"SLOTNODE: \'{0}\' in animation instance class {1} already exists. Remove duplicates from the animation graph for this class."
                               ,L"AnimInstance",L"AnimInstance_SlotNode");
            puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_110,uVar9);
            local_a8[0] = 4;
            FText::FText(local_98,lVar10);
            local_80 = 1;
            local_78 = 4;
            FText::FText(local_68,lVar8);
            local_1e8 = (longlong *)local_a8;
            local_50 = 1;
            puStack_1e0 = local_48;
            local_1a8 = *puVar11;
            local_1a0 = puVar11[1];
            if (local_1a0 != 0) {
              LOCK();
              *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
              UNLOCK();
            }
            local_198 = local_1e8;
            uStack_190 = puStack_1e0;
            uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                    TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
            uVar9 = FText::Format(local_140,&local_1a8,uVar9);
            FText::FText(local_158,uVar9);
            if (local_138 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_138 + 1;
              lVar4 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_138)(local_138);
                LOCK();
                piVar1 = (int *)((longlong)local_138 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_138 + 8))(local_138,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_188);
            pcVar13 = &stack0xffffffffffffffe0;
            do {
              lVar14 = lVar14 + -1;
              pcVar2 = pcVar13 + -0x30;
              if (*pcVar2 != '\0') {
                *pcVar2 = '\0';
                plVar12 = *(longlong **)(pcVar13 + -0x40);
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar12 + 1;
                  lVar4 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
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
              }
              pcVar13 = pcVar2;
            } while (lVar14 != 0);
            plVar12 = (longlong *)puVar11[1];
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar12 + 1;
              lVar14 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
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
            plVar12 = *(longlong **)(lVar10 + 8);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar12 + 1;
              lVar14 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
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
            plVar12 = *(longlong **)(lVar8 + 8);
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar12 + 1;
              lVar8 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
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
            uVar9 = FUN_14161fb50(local_100,&local_218);
            FMessageLog::Warning(uVar9,local_178,local_158);
            if (local_170 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_170 + 1;
              lVar8 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_170)(local_170);
                LOCK();
                piVar1 = (int *)((longlong)local_170 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_170 + 8))(local_170,1);
                }
              }
            }
            FMessageLog::~FMessageLog(local_100);
            if (local_150 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_150 + 1;
              lVar8 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_150)(local_150);
                LOCK();
                piVar1 = (int *)((longlong)local_150 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_150 + 8))(local_150,1);
                }
              }
            }
            if (local_120 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_120 + 1;
              lVar8 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_120)(local_120);
                LOCK();
                piVar1 = (int *)((longlong)local_120 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_120 + 8))(local_120,1);
                }
              }
            }
            if (local_168[0] != 0) {
              FMemory::Free();
            }
LAB_14227d2c5:
            if (local_1d8 == 0) {
              return;
            }
            FMemory::Free();
            return;
          }
          break;
        }
        iVar6 = *(int *)(lVar14 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  local_208[0] = *(undefined4 *)(param_1 + 0x2f0);
  puStack_1e0 = (ulonglong *)local_208;
  local_1e8 = param_2;
  FUN_1415ec610((longlong *)(param_1 + 0x298),local_1c8,&local_1e8,0);
  iVar6 = *(int *)(param_1 + 0x2f0);
  local_218 = 0;
  local_210 = (uint)local_210._2_2_ << 0x10;
  *(int *)(param_1 + 0x2f0) = iVar6 + 1;
  if (*(int *)(param_1 + 0x2f4) < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x2e8,iVar6);
  }
  uVar9 = local_218;
  lVar8 = *(longlong *)(param_1 + 0x2e8);
  local_218 = 0;
  *(undefined8 *)(lVar8 + (longlong)iVar6 * 0xc) = uVar9;
  *(uint *)(lVar8 + 8 + (longlong)iVar6 * 0xc) = local_210;
  iVar6 = *(int *)(param_1 + 0x300);
  local_210 = local_210 & 0xffff0000;
  *(int *)(param_1 + 0x300) = iVar6 + 1;
  if (*(int *)(param_1 + 0x304) < iVar6 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x2f8),iVar6);
  }
  lVar8 = *(longlong *)(param_1 + 0x2f8);
  *(undefined8 *)(lVar8 + (longlong)iVar6 * 0xc) = local_218;
  *(uint *)(lVar8 + 8 + (longlong)iVar6 * 0xc) = local_210;
  return;
}



// FUNCTION 14227d2f0 Rehash body=527 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<float,FAnimNotifyEvent_*>,TDefaultMapHashableKeyFuncs<float,FAnimNotifyEvent_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar5 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar4) goto LAB_14227d42f;
        uVar5 = puVar13[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14227d42f:
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
        lVar6 = *param_1;
        lVar8 = (longlong)iStack_2c;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + lVar8 * 0x18);
        *(uint *)(lVar6 + 0x14 + lVar8 * 0x18) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14227d500 FUN_14227d500 body=131 status=ok
// SIG undefined FUN_14227d500(void)

void FUN_14227d500(longlong param_1)

{
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2f4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2e8,0);
  }
  *(undefined4 *)(param_1 + 0x300) = 0;
  if ((*(int *)(param_1 + 0x304) < 0) && (*(int *)(param_1 + 0x304) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2f8,0);
  }
  *(short *)(param_1 + 0x350) = *(short *)(param_1 + 0x350) + 1;
  *(undefined8 *)(param_1 + 0x348) = DAT_1468c21b0;
  if (*(short *)(param_1 + 0x350) == -1) {
    *(undefined2 *)(param_1 + 0x350) = 0;
  }
  return;
}



// FUNCTION 14227d590 FUN_14227d590 body=323 status=ok
// SIG undefined FUN_14227d590(void)

void FUN_14227d590(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *local_res8;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (lVar2 != 0) {
      uVar4 = (**(code **)(*param_2 + 0xc0))(param_2);
      plVar5 = (longlong *)
               TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
               ::GetBoundProgramCounterForTimerManager(uVar4);
      if (plVar5 != (longlong *)0x0) {
        local_res8 = plVar5;
        lVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
        if (lVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar5 + 0xc0))(plVar5);
          uVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(uVar4);
        }
        lVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
        if (lVar2 != 0) {
          FUN_140488ed0(lVar2,uVar4);
          TArray<FName,FDefaultAllocator>::Remove(lVar3 + 0x5e0,&local_res8);
          if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 0x78))(local_res8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14227d6e0 RemoveAtImpl body=179 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>,FDefaultAllocator>::
     RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + (longlong)param_2 * 0x10;
    iVar3 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + *param_1),(longlong)iVar1 << 4);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14227d7a0 RemoveAtSwapImpl body=182 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FAnimNotifyEvent,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(*param_1 + (longlong)param_2 * 0xa8);
    iVar3 = param_3;
    do {
      puVar1[0xc] = &PTR_FUN_14410b0e0;
      *puVar1 = &PTR_FUN_14410b0e0;
      puVar1 = puVar1 + 0x15;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar2 = (iVar3 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xa8),
                 (void *)((longlong)(iVar3 - iVar2) * 0xa8 + *param_1),(longlong)iVar2 * 0xa8);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_1416c54a0(param_1);
    }
  }
  return;
}



// FUNCTION 14227d860 RemoveSingleSwap body=171 status=ok
// SIG undefined RemoveSingleSwap(void)

undefined8
TArray<FAnimNotifyEvent,FDefaultAllocator>::RemoveSingleSwap
          (longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = lVar3;
  while( true ) {
    if (lVar4 == (longlong)(int)param_1[1] * 0xa8 + lVar3) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar4 + 0x48);
    if ((((lVar1 != 0) && (lVar1 == *(longlong *)(param_2 + 0x48))) ||
        ((lVar2 = *(longlong *)(lVar4 + 0x50), lVar2 != 0 &&
         (lVar2 == *(longlong *)(param_2 + 0x50))))) ||
       (((lVar1 == 0 && (lVar2 == 0)) &&
        (*(longlong *)(lVar4 + 0x40) == *(longlong *)(param_2 + 0x40))))) break;
    lVar4 = lVar4 + 0xa8;
  }
  lVar3 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar4 - lVar3),8) + (lVar4 - lVar3);
  lVar3 = (lVar3 >> 7) - (lVar3 >> 0x3f);
  if ((int)lVar3 == -1) {
    return 0;
  }
  RemoveAtSwapImpl(param_1,lVar3,1,param_3);
  return 1;
}



// FUNCTION 14227d910 FUN_14227d910 body=270 status=ok
// SIG undefined FUN_14227d910(void)

void FUN_14227d910(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar5 = (longlong)*(int *)(param_1 + 0x3d0);
  if (*(int *)(param_1 + 0x3d0) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x3c8) != *param_2;
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar2 = lVar2 + 1;
      iVar4 = iVar3 + 1;
      if (lVar2 < lVar5) {
        plVar1 = (longlong *)(lVar2 * 0x10 + *(longlong *)(param_1 + 0x3c8));
        do {
          if (bVar7 != (*plVar1 != *param_2)) break;
          iVar4 = iVar4 + 1;
          lVar2 = lVar2 + 1;
          plVar1 = plVar1 + 2;
        } while (lVar2 < lVar5);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x3c8)),
                     (void *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x3c8)),
                     (longlong)(iVar4 - iVar3) << 4);
        }
        iVar6 = iVar6 + (iVar4 - iVar3);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar3 = iVar4;
    } while (lVar2 < lVar5);
    *(int *)(param_1 + 0x3d0) = iVar6;
  }
  return;
}



// FUNCTION 14227da20 Reset body=125 status=ok
// SIG undefined Reset(void)

void TArray<FAnimNotifyEvent,FDefaultAllocator>::Reset(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  puVar1 = (undefined8 *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (param_2 <= iVar2) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1[0xc] = &PTR_FUN_14410b0e0;
      *puVar1 = &PTR_FUN_14410b0e0;
      puVar1 = puVar1 + 0x15;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  if (iVar3 != 0) {
    do {
      puVar1[0xc] = &PTR_FUN_14410b0e0;
      *puVar1 = &PTR_FUN_14410b0e0;
      puVar1 = puVar1 + 0x15;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (iVar2 == param_2) {
    return;
  }
  TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
  return;
}



// FUNCTION 14227daa0 FUN_14227daa0 body=113 status=ok
// SIG undefined FUN_14227daa0(void)

void FUN_14227daa0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x568);
  uVar2 = (longlong)*(int *)(param_1 + 0x570) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x570) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14227db20 FUN_14227db20 body=159 status=ok
// SIG undefined FUN_14227db20(void)

void FUN_14227db20(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    lVar2 = FUN_142a07000();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar3 = param_1[0x72];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  FUN_14227daa0(lVar3,param_2);
  return;
}



// FUNCTION 14227dbc0 FUN_14227dbc0 body=208 status=ok
// SIG undefined FUN_14227dbc0(void)

void FUN_14227dbc0(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_14227dc56;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14227dc56;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_14227dc40;
  }
  else {
LAB_14227dc40:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_14227dc56:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  FUN_14227daa0(lVar5,param_2);
  return;
}



// FUNCTION 14227dc90 FUN_14227dc90 body=151 status=ok
// SIG undefined FUN_14227dc90(void)

void FUN_14227dc90(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x470,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0xcd85689039b0ad13) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 10);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x470,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 14227dd30 FUN_14227dd30 body=130 status=ok
// SIG undefined FUN_14227dd30(void)

void FUN_14227dd30(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x470,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0xcd85689039b0ad13) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 10);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x470,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 14227ddc0 FUN_14227ddc0 body=438 status=ok
// SIG undefined FUN_14227ddc0(void)

longlong FUN_14227ddc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x418);
  plVar1 = plVar7 + *(int *)(param_1 + 0x420);
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar5 = *plVar7;
    if ((lVar5 != 0) && (lVar2 = *param_2, *(int *)(lVar5 + 0x90) != *(int *)(lVar5 + 0xbc))) {
      lVar6 = *(longlong *)(lVar5 + 200);
      if (*(longlong *)(lVar5 + 200) == 0) {
        lVar6 = lVar5 + 0xc0;
      }
      iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(lVar5 + 0xd0) - 1U) * 4);
      if (iVar3 != -1) {
        lVar5 = *(longlong *)(lVar5 + 0x88);
        do {
          lVar6 = (longlong)iVar3;
          if (*(longlong *)(lVar5 + lVar6 * 0x18) == lVar2) {
            if (((iVar3 != -1) && (lVar5 = lVar5 + lVar6 * 0x18, lVar5 != 0)) &&
               (lVar5 = *(longlong *)(lVar5 + 8), lVar5 != 0)) {
              return lVar5;
            }
            break;
          }
          iVar3 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        } while (iVar3 != -1);
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x410)) {
    pcVar8 = *(char **)(param_1 + 0x408);
    lVar5 = 0;
    do {
      if (((*pcVar8 != '\0') && (lVar2 = *(longlong *)(pcVar8 + 8), lVar2 != 0)) &&
         (lVar6 = *param_2, *(int *)(lVar2 + 0x90) != *(int *)(lVar2 + 0xbc))) {
        lVar4 = *(longlong *)(lVar2 + 200);
        if (*(longlong *)(lVar2 + 200) == 0) {
          lVar4 = lVar2 + 0xc0;
        }
        iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(lVar2 + 0xd0) - 1U) * 4);
        if (iVar3 != -1) {
          lVar2 = *(longlong *)(lVar2 + 0x88);
          do {
            lVar4 = (longlong)iVar3;
            if (*(longlong *)(lVar2 + lVar4 * 0x18) == lVar6) {
              if (((iVar3 != -1) && (lVar2 = lVar2 + lVar4 * 0x18, lVar2 != 0)) &&
                 (lVar2 = *(longlong *)(lVar2 + 8), lVar2 != 0)) {
                return lVar2;
              }
              break;
            }
            iVar3 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
          } while (iVar3 != -1);
        }
      }
      lVar5 = lVar5 + 1;
      pcVar8 = pcVar8 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x410));
  }
  return 0;
}



// FUNCTION 14227df80 FUN_14227df80 body=286 status=ok
// SIG undefined FUN_14227df80(void)

void FUN_14227df80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar4 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    plVar1 = (longlong *)(lVar5 + 0x5a8);
    lVar7 = *plVar1;
    iVar2 = *(int *)(lVar5 + 0x5b0);
    lVar6 = (longlong)iVar2 * 0x38 + lVar7;
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0x38) {
      if (*(longlong *)(lVar7 + 0x28) == param_2) goto LAB_14227e081;
    }
    *(int *)(lVar5 + 0x5b0) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x5b4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar2);
    }
    lVar5 = *plVar1;
    lVar7 = (longlong)iVar2 * 0x38;
    *(undefined8 *)(lVar7 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x20 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x28 + lVar5) = 0;
    *(longlong *)(lVar7 + *plVar1 + 0x28) = param_2;
LAB_14227e081:
    FUN_1423be3b0(lVar4);
  }
  return;
}



// FUNCTION 14227e0a0 FUN_14227e0a0 body=193 status=ok
// SIG undefined FUN_14227e0a0(void)

void FUN_14227e0a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1423de800(param_1 + 0x40);
  FUN_1423de800(param_1 + 0xb0,param_2,param_3);
  FUN_1423de800(param_1 + 0x120,param_2,param_3);
  FUN_1423de800(param_1 + 0x1b0,param_2,param_3);
  FUN_1423de800(param_1 + 0x220,param_2,param_3);
  FUN_1423de800(param_1 + 0x290,param_2,param_3);
  FUN_1423de800(param_1 + 800,param_2,param_3);
  FUN_1423de800(param_1 + 0x390,param_2,param_3);
  FUN_1423de800(param_1 + 0x400,param_2,param_3);
  return;
}



// FUNCTION 14227e170 FUN_14227e170 body=7331 status=ok
// SIG undefined FUN_14227e170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14227e170(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  int iVar18;
  int *piVar19;
  longlong lVar20;
  float *pfVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  float *pfVar25;
  float *pfVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [8];
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar47;
  float fVar48;
  float fVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  undefined1 auVar45 [16];
  float fVar50;
  undefined1 auVar46 [16];
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
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auStack_2c8 [32];
  uint local_2a8 [2];
  uint local_2a0;
  int local_298;
  uint local_294;
  int local_290 [2];
  float local_288;
  float local_284;
  float local_280;
  uint local_278;
  float local_274;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  float *local_258;
  uint local_250;
  int local_24c;
  undefined1 local_248 [8];
  undefined8 uStack_240;
  longlong local_238;
  ulonglong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  longlong local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  longlong *local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  lVar33 = param_1 + 0x3a0;
  if (*(char *)(param_1 + 0x674) == '\0') {
    local_290[0] = *(int *)(param_1 + 0x678);
  }
  else if (*(int *)(param_1 + 0x670) == -1) {
    local_290[0] = -1;
  }
  else {
    local_290[0] = *(int *)(*(longlong *)(param_1 + 0x420) + (longlong)*(int *)(param_1 + 0x670) * 4
                           );
  }
  local_148 = _DAT_1468b5b70;
  uStack_140 = uRam00000001468b5b78;
  local_128 = (float)_DAT_1468b5b90;
  fStack_124 = (float)((ulonglong)_DAT_1468b5b90 >> 0x20);
  fStack_120 = (float)uRam00000001468b5b98;
  fStack_11c = (float)((ulonglong)uRam00000001468b5b98 >> 0x20);
  local_138 = _DAT_1468b5b80;
  uStack_130 = uRam00000001468b5b88;
  local_238 = param_1;
  local_230 = param_3;
  local_1c8 = param_2;
  FBoneContainer::GetParentBoneIndex(lVar33,&local_298,local_290);
  fVar78 = _DAT_146aeef40;
  fVar79 = fRam0000000146aeef44;
  fVar80 = fRam0000000146aeef48;
  fVar52 = _DAT_146aeefd0;
  fVar57 = fRam0000000146aeefd4;
  fVar58 = fRam0000000146aeefd8;
  uVar11 = local_148;
  uVar14 = uStack_140;
  uVar15 = local_138;
  uVar16 = uStack_130;
  fVar2 = local_128;
  fVar3 = fStack_124;
  fVar4 = fStack_120;
  fVar5 = fStack_11c;
  while( true ) {
    local_148._0_4_ = (float)uVar11;
    local_148._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    uStack_140._0_4_ = (float)uVar14;
    uStack_140._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
    local_138._0_4_ = (float)uVar15;
    local_138._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    uStack_130._0_4_ = (float)uVar16;
    uStack_130._4_4_ = (float)((ulonglong)uVar16 >> 0x20);
    _DAT_146aeef40 = fVar78;
    fRam0000000146aeef44 = fVar79;
    fRam0000000146aeef48 = fVar80;
    _DAT_146aeefd0 = fVar52;
    fRam0000000146aeefd4 = fVar57;
    fRam0000000146aeefd8 = fVar58;
    local_148 = uVar11;
    uStack_140 = uVar14;
    local_138 = uVar15;
    uStack_130 = uVar16;
    local_128 = fVar2;
    fStack_124 = fVar3;
    fStack_120 = fVar4;
    fStack_11c = fVar5;
    if (local_298 == -1) break;
    auVar12._4_4_ = fVar3;
    auVar12._0_4_ = fVar2;
    auVar12._8_4_ = fVar4;
    auVar12._12_4_ = fVar5;
    pfVar26 = (float *)((longlong)local_298 * 0x30 + *param_2);
    auVar36 = *(undefined1 (*) [16])(pfVar26 + 8);
    fVar42 = auVar36._0_4_;
    fVar74 = auVar36._4_4_;
    fVar50 = auVar36._8_4_;
    fVar49 = auVar36._12_4_;
    auVar36 = minps(auVar12,auVar36);
    auVar37._4_4_ = -(uint)(auVar36._4_4_ < fVar57);
    auVar37._0_4_ = -(uint)(auVar36._0_4_ < fVar52);
    auVar37._8_4_ = -(uint)(auVar36._8_4_ < fVar58);
    auVar37._12_4_ = -(uint)(auVar36._12_4_ < fRam0000000146aeefdc);
    iVar18 = movmskps(local_298,auVar37);
    if (iVar18 == 0) {
      fVar78 = *pfVar26;
      fVar79 = pfVar26[1];
      fVar80 = pfVar26[2];
      fVar52 = pfVar26[3];
      local_138._0_4_ = (float)local_138 * fVar42;
      local_138._4_4_ = local_138._4_4_ * fVar74;
      uStack_130._0_4_ = (float)uStack_130 * fVar50;
      uStack_130._4_4_ = uStack_130._4_4_ * fVar49;
      fVar55 = fVar78 * uStack_140._4_4_ * _DAT_146aeefb0 + (float)local_148 * fVar52 +
               fVar79 * (float)uStack_140 * _DAT_146aeefa0 +
               fVar80 * local_148._4_4_ * _DAT_146aeef90;
      fVar65 = fVar78 * (float)uStack_140 * fRam0000000146aeefb4 + local_148._4_4_ * fVar52 +
               fVar79 * uStack_140._4_4_ * fRam0000000146aeefa4 +
               fVar80 * (float)local_148 * fRam0000000146aeef94;
      fVar66 = fVar78 * local_148._4_4_ * fRam0000000146aeefb8 + (float)uStack_140 * fVar52 +
               fVar79 * (float)local_148 * fRam0000000146aeefa8 +
               fVar80 * uStack_140._4_4_ * fRam0000000146aeef98;
      fVar67 = fVar78 * (float)local_148 * fRam0000000146aeefbc + uStack_140._4_4_ * fVar52 +
               fVar79 * local_148._4_4_ * fRam0000000146aeefac +
               fVar80 * (float)uStack_140 * fRam0000000146aeef9c;
      fVar58 = (float)uStack_130 * fVar79 - local_138._4_4_ * fVar80;
      fVar41 = (float)local_138 * fVar80 - (float)uStack_130 * fVar78;
      fVar54 = local_138._4_4_ * fVar78 - (float)local_138 * fVar79;
      fVar48 = uStack_130._4_4_ * fVar52 - uStack_130._4_4_ * fVar52;
      fVar58 = fVar58 + fVar58;
      fVar41 = fVar41 + fVar41;
      fVar54 = fVar54 + fVar54;
      fVar48 = fVar48 + fVar48;
      fVar57 = (fVar54 * fVar79 - fVar41 * fVar80) + fVar58 * fVar52 + (float)local_138 + pfVar26[4]
      ;
      fVar80 = (fVar58 * fVar80 - fVar54 * fVar78) + fVar41 * fVar52 + local_138._4_4_ + pfVar26[5];
      fVar78 = (fVar41 * fVar78 - fVar58 * fVar79) + fVar54 * fVar52 + (float)uStack_130 +
               pfVar26[6];
      fVar79 = (fVar48 * fVar52 - fVar48 * fVar52) + fVar48 * fVar52 + uStack_130._4_4_ + pfVar26[7]
      ;
    }
    else {
      fVar41 = *pfVar26;
      fVar54 = pfVar26[1];
      fVar48 = pfVar26[2];
      fVar55 = pfVar26[3];
      fVar47 = fVar54 + fVar54;
      fVar51 = fVar48 + fVar48;
      fVar65 = pfVar26[4];
      fVar66 = pfVar26[5];
      fVar67 = pfVar26[6];
      fVar56 = fVar41 * (fVar41 + fVar41);
      fVar53 = fVar55 * (fVar41 + fVar41);
      fVar71 = (fVar55 * fVar51 + fVar41 * fVar47) * fVar42;
      fVar72 = (fVar53 + fVar54 * fVar51) * fVar74;
      fVar75 = (fVar55 * fVar47 + fVar41 * fVar51) * fVar50;
      fVar59 = fVar74 * (fVar41 * fVar47 - fVar55 * fVar51);
      fVar61 = fVar50 * (fVar54 * fVar51 - fVar53);
      fVar63 = fVar42 * (fVar41 * fVar51 - fVar55 * fVar47);
      fVar41 = (float)((uint)((fVar78 - (fVar48 * fVar51 + fVar54 * fVar47)) * fVar42) &
                      _DAT_146aeef50);
      fVar48 = (float)((uint)((fVar79 - (fVar48 * fVar51 + fVar56)) * fVar74) & uRam0000000146aeef54
                      );
      fVar47 = (float)((uint)((fVar80 - (fVar54 * fVar47 + fVar56)) * fVar50) & uRam0000000146aeef58
                      );
      fVar53 = (float)((uint)((fRam0000000146aeef4c - (fVar56 + fVar56)) * fVar49) &
                      uRam0000000146aeef5c);
      fVar51 = local_148._4_4_ + local_148._4_4_;
      fVar55 = (float)uStack_140 + (float)uStack_140;
      fVar56 = (float)local_148 * ((float)local_148 + (float)local_148);
      fVar54 = ((float)local_148 + (float)local_148) * uStack_140._4_4_;
      fVar68 = (fVar55 * uStack_140._4_4_ + fVar51 * (float)local_148) * fVar2;
      fVar69 = (fVar54 + fVar55 * local_148._4_4_) * fVar3;
      fVar70 = (fVar51 * uStack_140._4_4_ + fVar55 * (float)local_148) * fVar4;
      fVar60 = fVar3 * (fVar51 * (float)local_148 - fVar55 * uStack_140._4_4_);
      fVar62 = fVar4 * (fVar55 * local_148._4_4_ - fVar54);
      fVar64 = fVar2 * (fVar55 * (float)local_148 - fVar51 * uStack_140._4_4_);
      fVar54 = (float)((uint)((fVar78 - ((float)uStack_140 * fVar55 + local_148._4_4_ * fVar51)) *
                             fVar2) & _DAT_146aeef50);
      fVar55 = (float)((uint)((fVar79 - ((float)uStack_140 * fVar55 + fVar56)) * fVar3) &
                      uRam0000000146aeef54);
      fVar51 = (float)((uint)((fVar80 - (local_148._4_4_ * fVar51 + fVar56)) * fVar4) &
                      uRam0000000146aeef58);
      fVar56 = (float)((uint)((fRam0000000146aeef4c - (fVar56 + fVar56)) * fVar5) &
                      uRam0000000146aeef5c);
      local_188._0_4_ = fVar68 * fVar59 + fVar54 * fVar41 + fVar64 * fVar75 + fVar56 * fVar65;
      local_188._4_4_ = fVar68 * fVar48 + fVar54 * fVar71 + fVar64 * fVar61 + fVar56 * fVar66;
      uStack_180._0_4_ = fVar68 * fVar72 + fVar54 * fVar63 + fVar64 * fVar47 + fVar56 * fVar67;
      uStack_180._4_4_ =
           fVar68 * fVar53 + fVar54 * fVar53 + fVar64 * fVar53 + fVar56 * fRam0000000146aeef4c;
      local_178._0_4_ = fVar55 * fVar59 + fVar60 * fVar41 + fVar69 * fVar75 + fVar56 * fVar65;
      local_178._4_4_ = fVar55 * fVar48 + fVar60 * fVar71 + fVar69 * fVar61 + fVar56 * fVar66;
      uStack_170._0_4_ = fVar55 * fVar72 + fVar60 * fVar63 + fVar69 * fVar47 + fVar56 * fVar67;
      uStack_170._4_4_ =
           fVar55 * fVar53 + fVar60 * fVar53 + fVar69 * fVar53 + fVar56 * fRam0000000146aeef4c;
      local_168 = fVar62 * fVar59 + fVar70 * fVar41 + fVar51 * fVar75 + fVar56 * fVar65;
      fStack_164 = fVar62 * fVar48 + fVar70 * fVar71 + fVar51 * fVar61 + fVar56 * fVar66;
      fStack_160 = fVar62 * fVar72 + fVar70 * fVar63 + fVar51 * fVar47 + fVar56 * fVar67;
      fStack_15c = fVar62 * fVar53 + fVar70 * fVar53 + fVar51 * fVar53 +
                   fVar56 * fRam0000000146aeef4c;
      local_158 = local_138._4_4_ * fVar59 + (float)local_138 * fVar41 + (float)uStack_130 * fVar75
                  + fRam0000000146aeef4c * fVar65;
      fStack_154 = local_138._4_4_ * fVar48 + (float)local_138 * fVar71 + (float)uStack_130 * fVar61
                   + fRam0000000146aeef4c * fVar66;
      fStack_150 = local_138._4_4_ * fVar72 + (float)local_138 * fVar63 + (float)uStack_130 * fVar47
                   + fRam0000000146aeef4c * fVar67;
      fStack_14c = local_138._4_4_ * fVar53 + (float)local_138 * fVar53 + (float)uStack_130 * fVar53
                   + fRam0000000146aeef4c * fRam0000000146aeef4c;
      FMatrix::RemoveScaling(&local_188);
      fVar78 = (float)(-(uint)(fVar52 <= fVar42 * fVar2) & (_DAT_146aeefc0 ^ (uint)fVar78) ^
                      _DAT_146aeefc0);
      fVar79 = (float)(-(uint)(fVar57 <= fVar74 * fVar3) & (uRam0000000146aeefc4 ^ (uint)fVar79) ^
                      uRam0000000146aeefc4);
      fVar80 = (float)(-(uint)(fVar58 <= fVar50 * fVar4) & (uRam0000000146aeefc8 ^ (uint)fVar80) ^
                      uRam0000000146aeefc8);
      local_188 = CONCAT44(local_188._4_4_ * fVar78,(float)local_188 * fVar78);
      uStack_180 = (float *)CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar78);
      uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar79);
      fStack_164 = fStack_164 * fVar80;
      fStack_160 = fStack_160 * fVar80;
      local_168 = local_168 * fVar80;
      local_178 = (float *)CONCAT44(local_178._4_4_ * fVar79,(float)local_178 * fVar79);
      FQuat::FQuat(local_248,&local_188);
      local_2a0 = 0x322bcc77;
      auVar43._0_4_ =
           (float)local_248._0_4_ * (float)local_248._0_4_ + (float)uStack_240 * (float)uStack_240;
      auVar43._4_4_ =
           (float)local_248._4_4_ * (float)local_248._4_4_ + uStack_240._4_4_ * uStack_240._4_4_;
      auVar43._8_4_ =
           (float)uStack_240 * (float)uStack_240 + (float)local_248._0_4_ * (float)local_248._0_4_;
      auVar43._12_4_ =
           uStack_240._4_4_ * uStack_240._4_4_ + (float)local_248._4_4_ * (float)local_248._4_4_;
      fVar57 = auVar43._4_4_ + auVar43._0_4_;
      fVar58 = auVar43._8_4_ + auVar43._4_4_;
      fVar41 = auVar43._12_4_ + auVar43._8_4_;
      fVar54 = auVar43._0_4_ + auVar43._12_4_;
      auVar7._4_4_ = fVar58;
      auVar7._0_4_ = fVar57;
      auVar7._8_4_ = fVar41;
      auVar7._12_4_ = fVar54;
      auVar36 = rsqrtps(auVar43,auVar7);
      fVar78 = auVar36._0_4_;
      fVar79 = auVar36._4_4_;
      fVar80 = auVar36._8_4_;
      fVar52 = auVar36._12_4_;
      fVar78 = (_DAT_146aeef30 - fVar78 * fVar78 * fVar57 * _DAT_146aeef30) * fVar78 + fVar78;
      fVar79 = (fRam0000000146aeef34 - fVar79 * fVar79 * fVar58 * fRam0000000146aeef34) * fVar79 +
               fVar79;
      fVar80 = (fRam0000000146aeef38 - fVar80 * fVar80 * fVar41 * fRam0000000146aeef38) * fVar80 +
               fVar80;
      fVar52 = (fRam0000000146aeef3c - fVar52 * fVar52 * fVar54 * fRam0000000146aeef3c) * fVar52 +
               fVar52;
      fVar55 = (float)(((uint)(((_DAT_146aeef30 - fVar78 * fVar78 * fVar57 * _DAT_146aeef30) *
                                fVar78 + fVar78) * (float)local_248._0_4_) ^ _DAT_146aeef20) &
                       -(uint)(1e-08 <= fVar57) ^ _DAT_146aeef20);
      fVar65 = (float)(((uint)(((fRam0000000146aeef34 -
                                fVar79 * fVar79 * fVar58 * fRam0000000146aeef34) * fVar79 + fVar79)
                              * (float)local_248._4_4_) ^ uRam0000000146aeef24) &
                       -(uint)(1e-08 <= fVar58) ^ uRam0000000146aeef24);
      fVar66 = (float)(((uint)(((fRam0000000146aeef38 -
                                fVar80 * fVar80 * fVar41 * fRam0000000146aeef38) * fVar80 + fVar80)
                              * (float)uStack_240) ^ uRam0000000146aeef28) &
                       -(uint)(1e-08 <= fVar41) ^ uRam0000000146aeef28);
      fVar67 = (float)(((uint)(((fRam0000000146aeef3c -
                                fVar52 * fVar52 * fVar54 * fRam0000000146aeef3c) * fVar52 + fVar52)
                              * uStack_240._4_4_) ^ uRam0000000146aeef2c) & -(uint)(1e-08 <= fVar54)
                      ^ uRam0000000146aeef2c);
      fVar79 = 0.0;
      local_248._4_4_ = fVar65;
      local_248._0_4_ = fVar55;
      uStack_240._0_4_ = fVar66;
      uStack_240._4_4_ = fVar67;
      fVar57 = local_158;
      fVar80 = fStack_154;
      fVar78 = fStack_150;
    }
    fStack_11c = fVar49 * fVar5;
    fStack_120 = fVar50 * fVar4;
    fStack_124 = fVar74 * fVar3;
    local_128 = fVar42 * fVar2;
    local_148 = CONCAT44(fVar65,fVar55);
    uStack_140 = CONCAT44(fVar67,fVar66);
    local_138 = CONCAT44(fVar80,fVar57);
    uStack_130 = CONCAT44(fVar79,fVar78);
    piVar19 = (int *)FBoneContainer::GetParentBoneIndex(lVar33,local_2a8,&local_298);
    local_298 = *piVar19;
    fVar78 = _DAT_146aeef40;
    fVar79 = fRam0000000146aeef44;
    fVar80 = fRam0000000146aeef48;
    fVar52 = _DAT_146aeefd0;
    fVar57 = fRam0000000146aeefd4;
    fVar58 = fRam0000000146aeefd8;
    uVar11 = local_148;
    uVar14 = uStack_140;
    uVar15 = local_138;
    uVar16 = uStack_130;
    fVar2 = local_128;
    fVar3 = fStack_124;
    fVar4 = fStack_120;
    fVar5 = fStack_11c;
  }
  auVar36._4_4_ = fVar3;
  auVar36._0_4_ = fVar2;
  auVar36._8_4_ = fVar4;
  auVar36._12_4_ = fVar5;
  pfVar26 = (float *)((longlong)local_290[0] * 0x30 + *param_2);
  _local_248 = *(undefined1 (*) [16])(pfVar26 + 8);
  fVar42 = local_248._0_4_;
  fVar74 = local_248._4_4_;
  fVar50 = local_248._8_4_;
  fVar49 = local_248._12_4_;
  auVar36 = minps(_local_248,auVar36);
  auVar38._4_4_ = -(uint)(auVar36._4_4_ < fVar57);
  auVar38._0_4_ = -(uint)(auVar36._0_4_ < fVar52);
  auVar38._8_4_ = -(uint)(auVar36._8_4_ < fVar58);
  auVar38._12_4_ = -(uint)(auVar36._12_4_ < fRam0000000146aeefdc);
  iVar18 = movmskps(local_290[0],auVar38);
  if (iVar18 == 0) {
    fVar78 = *pfVar26;
    fVar79 = pfVar26[1];
    fVar80 = pfVar26[2];
    fVar52 = pfVar26[3];
    auVar36 = *(undefined1 (*) [16])(pfVar26 + 4);
    fVar57 = fVar2 * auVar36._0_4_;
    fVar58 = fVar3 * auVar36._4_4_;
    fVar41 = fVar4 * auVar36._8_4_;
    fVar54 = fVar5 * auVar36._12_4_;
    local_118._4_4_ =
         (float)local_148 * fVar80 * fRam0000000146aeefb4 + uStack_140._4_4_ * fVar79 +
         local_148._4_4_ * fVar52 * fRam0000000146aeefa4 +
         (float)uStack_140 * fVar78 * fRam0000000146aeef94;
    local_118._0_4_ =
         (float)local_148 * fVar52 * _DAT_146aeefb0 + uStack_140._4_4_ * fVar78 +
         local_148._4_4_ * fVar80 * _DAT_146aeefa0 + (float)uStack_140 * fVar79 * _DAT_146aeef90;
    fStack_110 = (float)local_148 * fVar79 * fRam0000000146aeefb8 + uStack_140._4_4_ * fVar80 +
                 local_148._4_4_ * fVar78 * fRam0000000146aeefa8 +
                 (float)uStack_140 * fVar52 * fRam0000000146aeef98;
    fStack_10c = (float)local_148 * fVar78 * fRam0000000146aeefbc + uStack_140._4_4_ * fVar52 +
                 local_148._4_4_ * fVar79 * fRam0000000146aeefac +
                 (float)uStack_140 * fVar80 * fRam0000000146aeef9c;
    fVar78 = fVar41 * local_148._4_4_ - fVar58 * (float)uStack_140;
    fVar79 = fVar57 * (float)uStack_140 - fVar41 * (float)local_148;
    fVar80 = fVar58 * (float)local_148 - fVar57 * local_148._4_4_;
    fVar52 = fVar54 * uStack_140._4_4_ - fVar54 * uStack_140._4_4_;
    fVar78 = fVar78 + fVar78;
    fVar79 = fVar79 + fVar79;
    fVar80 = fVar80 + fVar80;
    fVar52 = fVar52 + fVar52;
    local_108._0_4_ =
         (fVar80 * local_148._4_4_ - fVar79 * (float)uStack_140) +
         fVar78 * uStack_140._4_4_ + fVar57 + (float)local_138;
    local_108._4_4_ =
         (fVar78 * (float)uStack_140 - fVar80 * (float)local_148) +
         fVar79 * uStack_140._4_4_ + fVar58 + local_138._4_4_;
    fStack_100 = (fVar79 * (float)local_148 - fVar78 * local_148._4_4_) +
                 fVar80 * uStack_140._4_4_ + fVar41 + (float)uStack_130;
    register0x0000124c =
         (fVar52 * uStack_140._4_4_ - fVar52 * uStack_140._4_4_) +
         fVar52 * uStack_140._4_4_ + fVar54 + uStack_130._4_4_;
  }
  else {
    fVar41 = local_148._4_4_ + local_148._4_4_;
    fVar48 = (float)uStack_140 + (float)uStack_140;
    fVar55 = (float)local_148 * ((float)local_148 + (float)local_148);
    fVar54 = ((float)local_148 + (float)local_148) * uStack_140._4_4_;
    fVar72 = (fVar48 * uStack_140._4_4_ + fVar41 * (float)local_148) * fVar2;
    fVar75 = (fVar54 + fVar48 * local_148._4_4_) * fVar3;
    fVar76 = (fVar41 * uStack_140._4_4_ + fVar48 * (float)local_148) * fVar4;
    fVar60 = fVar3 * (fVar41 * (float)local_148 - fVar48 * uStack_140._4_4_);
    fVar62 = fVar4 * (fVar48 * local_148._4_4_ - fVar54);
    fVar64 = fVar2 * (fVar48 * (float)local_148 - fVar41 * uStack_140._4_4_);
    fVar65 = (float)((uint)((fVar78 - ((float)uStack_140 * fVar48 + local_148._4_4_ * fVar41)) *
                           fVar2) & _DAT_146aeef50);
    fVar66 = (float)((uint)((fVar79 - ((float)uStack_140 * fVar48 + fVar55)) * fVar3) &
                    uRam0000000146aeef54);
    fVar47 = (float)((uint)((fVar80 - (local_148._4_4_ * fVar41 + fVar55)) * fVar4) &
                    uRam0000000146aeef58);
    fVar53 = (float)((uint)((fRam0000000146aeef4c - (fVar55 + fVar55)) * fVar5) &
                    uRam0000000146aeef5c);
    fVar41 = *pfVar26;
    fVar54 = pfVar26[1];
    fVar48 = pfVar26[2];
    fVar55 = pfVar26[3];
    fVar51 = fVar54 + fVar54;
    fVar56 = fVar48 + fVar48;
    fVar59 = (fVar41 + fVar41) * fVar41;
    fVar67 = (fVar41 + fVar41) * fVar55;
    fVar69 = (fVar56 * fVar55 + fVar51 * fVar41) * fVar42;
    fVar70 = (fVar67 + fVar56 * fVar54) * fVar74;
    fVar71 = (fVar51 * fVar55 + fVar56 * fVar41) * fVar50;
    fVar61 = fVar74 * (fVar51 * fVar41 - fVar56 * fVar55);
    fVar63 = fVar50 * (fVar56 * fVar54 - fVar67);
    fVar68 = fVar42 * (fVar56 * fVar41 - fVar51 * fVar55);
    fVar55 = (float)((uint)((fVar78 - (fVar56 * fVar48 + fVar51 * fVar54)) * fVar42) &
                    _DAT_146aeef50);
    fVar67 = (float)((uint)((fVar79 - (fVar56 * fVar48 + fVar59)) * fVar74) & uRam0000000146aeef54);
    fVar51 = (float)((uint)((fVar80 - (fVar51 * fVar54 + fVar59)) * fVar50) & uRam0000000146aeef58);
    fVar56 = (float)((uint)((fRam0000000146aeef4c - (fVar59 + fVar59)) * fVar49) &
                    uRam0000000146aeef5c);
    fVar41 = pfVar26[4];
    fVar54 = pfVar26[5];
    fVar48 = pfVar26[6];
    local_188._0_4_ =
         fVar69 * fVar60 + fVar55 * fVar65 + fVar68 * fVar76 + fVar56 * (float)local_138;
    local_188._4_4_ = fVar69 * fVar66 + fVar55 * fVar72 + fVar68 * fVar62 + fVar56 * local_138._4_4_
    ;
    uStack_180._0_4_ =
         fVar69 * fVar75 + fVar55 * fVar64 + fVar68 * fVar47 + fVar56 * (float)uStack_130;
    uStack_180._4_4_ =
         fVar69 * fVar53 + fVar55 * fVar53 + fVar68 * fVar53 + fVar56 * fRam0000000146aeef4c;
    local_178._0_4_ =
         fVar67 * fVar60 + fVar61 * fVar65 + fVar70 * fVar76 + fVar56 * (float)local_138;
    local_178._4_4_ = fVar67 * fVar66 + fVar61 * fVar72 + fVar70 * fVar62 + fVar56 * local_138._4_4_
    ;
    uStack_170._0_4_ =
         fVar67 * fVar75 + fVar61 * fVar64 + fVar70 * fVar47 + fVar56 * (float)uStack_130;
    uStack_170._4_4_ =
         fVar67 * fVar53 + fVar61 * fVar53 + fVar70 * fVar53 + fVar56 * fRam0000000146aeef4c;
    local_168 = fVar63 * fVar60 + fVar71 * fVar65 + fVar51 * fVar76 + fVar56 * (float)local_138;
    fStack_164 = fVar63 * fVar66 + fVar71 * fVar72 + fVar51 * fVar62 + fVar56 * local_138._4_4_;
    fStack_160 = fVar63 * fVar75 + fVar71 * fVar64 + fVar51 * fVar47 + fVar56 * (float)uStack_130;
    fStack_15c = fVar63 * fVar53 + fVar71 * fVar53 + fVar51 * fVar53 + fVar56 * fRam0000000146aeef4c
    ;
    local_158 = fVar54 * fVar60 + fVar41 * fVar65 + fVar48 * fVar76 +
                fRam0000000146aeef4c * (float)local_138;
    fStack_154 = fVar54 * fVar66 + fVar41 * fVar72 + fVar48 * fVar62 +
                 fRam0000000146aeef4c * local_138._4_4_;
    fStack_150 = fVar54 * fVar75 + fVar41 * fVar64 + fVar48 * fVar47 +
                 fRam0000000146aeef4c * (float)uStack_130;
    fStack_14c = fVar54 * fVar53 + fVar41 * fVar53 + fVar48 * fVar53 +
                 fRam0000000146aeef4c * fRam0000000146aeef4c;
    FMatrix::RemoveScaling(&local_188);
    fVar78 = (float)(-(uint)(fVar52 <= fVar2 * fVar42) & (_DAT_146aeefc0 ^ (uint)fVar78) ^
                    _DAT_146aeefc0);
    fVar79 = (float)(-(uint)(fVar57 <= fVar3 * fVar74) & (uRam0000000146aeefc4 ^ (uint)fVar79) ^
                    uRam0000000146aeefc4);
    fVar80 = (float)(-(uint)(fVar58 <= fVar4 * fVar50) & (uRam0000000146aeefc8 ^ (uint)fVar80) ^
                    uRam0000000146aeefc8);
    local_188 = CONCAT44(local_188._4_4_ * fVar78,(float)local_188 * fVar78);
    uStack_180 = (float *)CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar78);
    uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar79);
    fStack_164 = fStack_164 * fVar80;
    fStack_160 = fStack_160 * fVar80;
    local_168 = local_168 * fVar80;
    local_178 = (float *)CONCAT44(local_178._4_4_ * fVar79,(float)local_178 * fVar79);
    FQuat::FQuat(&local_1b8,&local_188);
    auVar44._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
    auVar44._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
    auVar44._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
    auVar44._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
    fVar57 = auVar44._4_4_ + auVar44._0_4_;
    fVar58 = auVar44._8_4_ + auVar44._4_4_;
    fVar41 = auVar44._12_4_ + auVar44._8_4_;
    fVar54 = auVar44._0_4_ + auVar44._12_4_;
    auVar8._4_4_ = fVar58;
    auVar8._0_4_ = fVar57;
    auVar8._8_4_ = fVar41;
    auVar8._12_4_ = fVar54;
    auVar36 = rsqrtps(auVar44,auVar8);
    fVar78 = auVar36._0_4_;
    fVar79 = auVar36._4_4_;
    fVar80 = auVar36._8_4_;
    fVar52 = auVar36._12_4_;
    fVar78 = (_DAT_146aeef30 - fVar78 * fVar78 * fVar57 * _DAT_146aeef30) * fVar78 + fVar78;
    fVar79 = (fRam0000000146aeef34 - fVar79 * fVar79 * fVar58 * fRam0000000146aeef34) * fVar79 +
             fVar79;
    fVar80 = (fRam0000000146aeef38 - fVar80 * fVar80 * fVar41 * fRam0000000146aeef38) * fVar80 +
             fVar80;
    fVar52 = (fRam0000000146aeef3c - fVar52 * fVar52 * fVar54 * fRam0000000146aeef3c) * fVar52 +
             fVar52;
    local_108._4_4_ = fStack_154;
    local_108._0_4_ = local_158;
    fStack_100 = fStack_150;
    local_118._0_4_ =
         ((uint)(((_DAT_146aeef30 - fVar78 * fVar78 * fVar57 * _DAT_146aeef30) * fVar78 + fVar78) *
                local_1b8) ^ _DAT_146aeef20) & -(uint)(1e-08 <= fVar57) ^ _DAT_146aeef20;
    local_118._4_4_ =
         ((uint)(((fRam0000000146aeef34 - fVar79 * fVar79 * fVar58 * fRam0000000146aeef34) * fVar79
                 + fVar79) * fStack_1b4) ^ uRam0000000146aeef24) & -(uint)(1e-08 <= fVar58) ^
         uRam0000000146aeef24;
    fStack_110 = (float)(((uint)(((fRam0000000146aeef38 -
                                  fVar80 * fVar80 * fVar41 * fRam0000000146aeef38) * fVar80 + fVar80
                                 ) * fStack_1b0) ^ uRam0000000146aeef28) & -(uint)(1e-08 <= fVar41)
                        ^ uRam0000000146aeef28);
    fStack_10c = (float)(((uint)(((fRam0000000146aeef3c -
                                  fVar52 * fVar52 * fVar54 * fRam0000000146aeef3c) * fVar52 + fVar52
                                 ) * fStack_1ac) ^ uRam0000000146aeef2c) & -(uint)(1e-08 <= fVar54)
                        ^ uRam0000000146aeef2c);
    unique0x100002a6 = 0.0;
  }
  plVar17 = local_1c8;
  fStack_ec = fVar5 * fVar49;
  fStack_f0 = fVar4 * fVar50;
  fStack_f4 = fVar3 * fVar74;
  local_f8 = fVar2 * fVar42;
  uVar24 = 0;
  local_258 = (float *)0x0;
  local_24c = 0;
  local_270 = 0;
  local_268 = 0;
  auVar13._8_4_ = 0;
  auVar13._0_8_ = uStack_240;
  _local_248 = auVar13 << 0x40;
  local_2a0 = 0;
  uStack_240._4_4_ = 0.0;
  local_1e8 = 0;
  local_278 = 0;
  local_1dc = 0;
  local_294 = 0;
  auVar29 = (undefined1  [8])uVar24;
  if (0 < *(int *)(local_238 + 0x690)) {
    local_260 = 0;
    uVar30 = uVar24;
    uVar31 = uVar24;
    uVar32 = uVar24;
    uVar35 = uVar24;
    do {
      uVar34 = local_278;
      uVar23 = (uint)uVar24;
      local_1d0 = *(longlong *)(local_238 + 0x688);
      if (*(char *)(uVar32 + 0xc + local_1d0) == '\0') {
        iVar18 = *(int *)(uVar32 + 0x10 + local_1d0);
LAB_14227ecfb:
        if (iVar18 != -1) {
          local_2a8[0] = local_278;
          local_1e0 = local_278 + 1;
          if ((int)uVar31 < (int)local_1e0) {
            local_278 = local_1e0;
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,uVar34);
            local_278 = local_2a8[0];
          }
          uVar34 = local_2a0;
          *(int *)(local_1e8 + (longlong)(int)local_278 * 4) = iVar18;
          local_2a8[0] = local_2a0;
          local_2a0 = local_2a0 + 1;
          uStack_240._0_4_ = (float)local_2a0;
          local_278 = local_1e0;
          if ((int)uStack_240._4_4_ < (int)local_2a0) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(local_248,uVar34);
            local_2a0 = (uint)(float)uStack_240;
            auVar29 = local_248;
          }
          lVar27 = local_1e8;
          uVar11 = uRam00000001468b5b78;
          lVar20 = (longlong)(int)local_2a8[0];
          puVar1 = (undefined8 *)((longlong)auVar29 + lVar20 * 0x30);
          *puVar1 = _DAT_1468b5b70;
          puVar1[1] = uVar11;
          uVar11 = uRam00000001468b5b88;
          puVar1 = (undefined8 *)((longlong)auVar29 + 0x10U + lVar20 * 0x30);
          *puVar1 = _DAT_1468b5b80;
          puVar1[1] = uVar11;
          uVar11 = uRam00000001468b5b98;
          puVar1 = (undefined8 *)((longlong)auVar29 + 0x20U + lVar20 * 0x30);
          *puVar1 = _DAT_1468b5b90;
          puVar1[1] = uVar11;
          piVar19 = (int *)FBoneContainer::GetParentBoneIndex
                                     (lVar33,local_1a8,local_1e8 + (longlong)(int)local_294 * 4);
          local_298 = *piVar19;
          fVar78 = _DAT_146aeef40;
          fVar79 = fRam0000000146aeef44;
          fVar80 = fRam0000000146aeef48;
          fVar52 = _DAT_146aeefd0;
          fVar57 = fRam0000000146aeefd4;
          fVar58 = fRam0000000146aeefd8;
          while (_DAT_146aeef40 = fVar78, fRam0000000146aeef44 = fVar79,
                fRam0000000146aeef48 = fVar80, _DAT_146aeefd0 = fVar52,
                fRam0000000146aeefd4 = fVar57, fRam0000000146aeefd8 = fVar58, local_298 != -1) {
            auVar36 = *(undefined1 (*) [16])(uVar30 + 0x20 + (longlong)auVar29);
            fVar2 = auVar36._0_4_;
            fVar4 = auVar36._4_4_;
            fVar42 = auVar36._8_4_;
            pfVar26 = (float *)((longlong)local_298 * 0x30 + *plVar17);
            auVar38 = *(undefined1 (*) [16])(pfVar26 + 8);
            fVar3 = auVar38._0_4_;
            fVar5 = auVar38._4_4_;
            fVar74 = auVar38._8_4_;
            fVar50 = auVar38._12_4_;
            auVar38 = minps(auVar36,auVar38);
            auVar39._4_4_ = -(uint)(auVar38._4_4_ < fVar57);
            auVar39._0_4_ = -(uint)(auVar38._0_4_ < fVar52);
            auVar39._8_4_ = -(uint)(auVar38._8_4_ < fVar58);
            auVar39._12_4_ = -(uint)(auVar38._12_4_ < fRam0000000146aeefdc);
            iVar18 = movmskps(local_298,auVar39);
            if (iVar18 == 0) {
              fVar78 = *pfVar26;
              fVar79 = pfVar26[1];
              fVar80 = pfVar26[2];
              fVar52 = pfVar26[3];
              pfVar25 = (float *)(uVar30 + (longlong)auVar29);
              fVar57 = *pfVar25;
              fVar58 = pfVar25[1];
              fVar49 = pfVar25[2];
              fVar41 = pfVar25[3];
              pfVar25 = (float *)(uVar30 + 0x10 + (longlong)auVar29);
              fVar48 = *pfVar25 * fVar3;
              fVar55 = pfVar25[1] * fVar5;
              fVar65 = pfVar25[2] * fVar74;
              fVar66 = pfVar25[3] * fVar50;
              fVar67 = fVar41 * fVar78 * _DAT_146aeefb0 + fVar57 * fVar52 +
                       fVar79 * fVar49 * _DAT_146aeefa0 + fVar80 * fVar58 * _DAT_146aeef90;
              fVar47 = fVar49 * fVar78 * fRam0000000146aeefb4 + fVar58 * fVar52 +
                       fVar79 * fVar41 * fRam0000000146aeefa4 +
                       fVar80 * fVar57 * fRam0000000146aeef94;
              fVar51 = fVar58 * fVar78 * fRam0000000146aeefb8 + fVar49 * fVar52 +
                       fVar79 * fVar57 * fRam0000000146aeefa8 +
                       fVar80 * fVar41 * fRam0000000146aeef98;
              fVar53 = fVar57 * fVar78 * fRam0000000146aeefbc + fVar41 * fVar52 +
                       fVar79 * fVar58 * fRam0000000146aeefac +
                       fVar80 * fVar49 * fRam0000000146aeef9c;
              fVar58 = fVar65 * fVar79 - fVar55 * fVar80;
              fVar49 = fVar48 * fVar80 - fVar65 * fVar78;
              fVar41 = fVar55 * fVar78 - fVar48 * fVar79;
              fVar54 = fVar66 * fVar52 - fVar66 * fVar52;
              fVar58 = fVar58 + fVar58;
              fVar49 = fVar49 + fVar49;
              fVar41 = fVar41 + fVar41;
              fVar54 = fVar54 + fVar54;
              fVar57 = (fVar41 * fVar79 - fVar49 * fVar80) + fVar52 * fVar58 + fVar48 + pfVar26[4];
              fVar80 = (fVar58 * fVar80 - fVar41 * fVar78) + fVar52 * fVar49 + fVar55 + pfVar26[5];
              fVar78 = (fVar49 * fVar78 - fVar58 * fVar79) + fVar52 * fVar41 + fVar65 + pfVar26[6];
              fVar79 = (fVar54 * fVar52 - fVar54 * fVar52) + fVar52 * fVar54 + fVar66 + pfVar26[7];
            }
            else {
              fVar49 = *pfVar26;
              fVar41 = pfVar26[1];
              fVar54 = pfVar26[2];
              fVar48 = pfVar26[3];
              fVar55 = pfVar26[4];
              fVar65 = pfVar26[5];
              fVar66 = pfVar26[6];
              fVar59 = fVar41 + fVar41;
              fVar60 = fVar54 + fVar54;
              fVar61 = (fVar49 + fVar49) * fVar49;
              fVar56 = (fVar49 + fVar49) * fVar48;
              pfVar26 = (float *)(uVar30 + (longlong)auVar29);
              fVar67 = *pfVar26;
              fVar47 = pfVar26[1];
              fVar51 = pfVar26[2];
              fVar53 = pfVar26[3];
              fVar76 = (fVar60 * fVar48 + fVar59 * fVar49) * fVar3;
              fVar73 = (fVar56 + fVar60 * fVar41) * fVar5;
              fVar77 = (fVar59 * fVar48 + fVar60 * fVar49) * fVar74;
              fVar62 = fVar5 * (fVar59 * fVar49 - fVar60 * fVar48);
              fVar64 = fVar74 * (fVar60 * fVar41 - fVar56);
              fVar69 = fVar3 * (fVar60 * fVar49 - fVar59 * fVar48);
              fVar48 = (float)((uint)((fVar78 - (fVar60 * fVar54 + fVar59 * fVar41)) * fVar3) &
                              _DAT_146aeef50);
              fVar56 = (float)((uint)((fVar79 - (fVar60 * fVar54 + fVar61)) * fVar5) &
                              uRam0000000146aeef54);
              fVar59 = (float)((uint)((fVar80 - (fVar59 * fVar41 + fVar61)) * fVar74) &
                              uRam0000000146aeef58);
              fVar60 = (float)((uint)((fRam0000000146aeef4c - (fVar61 + fVar61)) * fVar50) &
                              uRam0000000146aeef5c);
              fVar49 = fVar47 + fVar47;
              fVar41 = fVar51 + fVar51;
              fVar61 = fVar67 * (fVar67 + fVar67);
              fVar54 = fVar53 * (fVar67 + fVar67);
              fVar71 = (fVar53 * fVar41 + fVar67 * fVar49) * fVar2;
              fVar72 = (fVar54 + fVar47 * fVar41) * fVar4;
              fVar75 = (fVar53 * fVar49 + fVar67 * fVar41) * fVar42;
              fVar63 = fVar4 * (fVar67 * fVar49 - fVar53 * fVar41);
              fVar68 = fVar42 * (fVar47 * fVar41 - fVar54);
              fVar70 = fVar2 * (fVar67 * fVar41 - fVar53 * fVar49);
              fVar67 = (float)((uint)((fVar78 - (fVar51 * fVar41 + fVar47 * fVar49)) * fVar2) &
                              _DAT_146aeef50);
              fVar51 = (float)((uint)((fVar79 - (fVar51 * fVar41 + fVar61)) * fVar4) &
                              uRam0000000146aeef54);
              fVar47 = (float)((uint)((fVar80 - (fVar47 * fVar49 + fVar61)) * fVar42) &
                              uRam0000000146aeef58);
              fVar53 = (float)((uint)((fRam0000000146aeef4c - (fVar61 + fVar61)) * auVar36._12_4_) &
                              uRam0000000146aeef5c);
              pfVar26 = (float *)(uVar30 + 0x10 + (longlong)auVar29);
              fVar49 = *pfVar26;
              fVar41 = pfVar26[1];
              fVar54 = pfVar26[2];
              local_188._0_4_ =
                   fVar71 * fVar62 + fVar67 * fVar48 + fVar70 * fVar77 + fVar53 * fVar55;
              local_188._4_4_ =
                   fVar71 * fVar56 + fVar67 * fVar76 + fVar70 * fVar64 + fVar53 * fVar65;
              uStack_180._0_4_ =
                   fVar71 * fVar73 + fVar67 * fVar69 + fVar70 * fVar59 + fVar53 * fVar66;
              uStack_180._4_4_ =
                   fVar71 * fVar60 + fVar67 * fVar60 + fVar70 * fVar60 +
                   fVar53 * fRam0000000146aeef4c;
              local_178._0_4_ =
                   fVar51 * fVar62 + fVar63 * fVar48 + fVar72 * fVar77 + fVar53 * fVar55;
              local_178._4_4_ =
                   fVar51 * fVar56 + fVar63 * fVar76 + fVar72 * fVar64 + fVar53 * fVar65;
              uStack_170._0_4_ =
                   fVar51 * fVar73 + fVar63 * fVar69 + fVar72 * fVar59 + fVar53 * fVar66;
              uStack_170._4_4_ =
                   fVar51 * fVar60 + fVar63 * fVar60 + fVar72 * fVar60 +
                   fVar53 * fRam0000000146aeef4c;
              local_168 = fVar68 * fVar62 + fVar75 * fVar48 + fVar47 * fVar77 + fVar53 * fVar55;
              fStack_164 = fVar68 * fVar56 + fVar75 * fVar76 + fVar47 * fVar64 + fVar53 * fVar65;
              fStack_160 = fVar68 * fVar73 + fVar75 * fVar69 + fVar47 * fVar59 + fVar53 * fVar66;
              fStack_15c = fVar68 * fVar60 + fVar75 * fVar60 + fVar47 * fVar60 +
                           fVar53 * fRam0000000146aeef4c;
              local_158 = fVar41 * fVar62 + fVar49 * fVar48 + fVar54 * fVar77 +
                          fRam0000000146aeef4c * fVar55;
              fStack_154 = fVar41 * fVar56 + fVar49 * fVar76 + fVar54 * fVar64 +
                           fRam0000000146aeef4c * fVar65;
              fStack_150 = fVar41 * fVar73 + fVar49 * fVar69 + fVar54 * fVar59 +
                           fRam0000000146aeef4c * fVar66;
              fStack_14c = fVar41 * fVar60 + fVar49 * fVar60 + fVar54 * fVar60 +
                           fRam0000000146aeef4c * fRam0000000146aeef4c;
              FMatrix::RemoveScaling(&local_188);
              fVar78 = (float)(-(uint)(fVar52 <= fVar2 * fVar3) & (_DAT_146aeefc0 ^ (uint)fVar78) ^
                              _DAT_146aeefc0);
              fVar79 = (float)(-(uint)(fVar57 <= fVar4 * fVar5) &
                               (uRam0000000146aeefc4 ^ (uint)fVar79) ^ uRam0000000146aeefc4);
              fVar80 = (float)(-(uint)(fVar58 <= fVar42 * fVar74) &
                               (uRam0000000146aeefc8 ^ (uint)fVar80) ^ uRam0000000146aeefc8);
              uStack_180 = (float *)CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar78);
              local_188 = CONCAT44(local_188._4_4_ * fVar78,(float)local_188 * fVar78);
              uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar79);
              fStack_160 = fStack_160 * fVar80;
              local_168 = local_168 * fVar80;
              fStack_164 = fStack_164 * fVar80;
              local_178 = (float *)CONCAT44(local_178._4_4_ * fVar79,(float)local_178 * fVar79);
              FQuat::FQuat(&local_198,&local_188);
              local_2a8[0] = 0x322bcc77;
              auVar45._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
              auVar45._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
              auVar45._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
              auVar45._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
              fVar58 = auVar45._4_4_ + auVar45._0_4_;
              fVar49 = auVar45._8_4_ + auVar45._4_4_;
              fVar41 = auVar45._12_4_ + auVar45._8_4_;
              fVar54 = auVar45._0_4_ + auVar45._12_4_;
              auVar9._4_4_ = fVar49;
              auVar9._0_4_ = fVar58;
              auVar9._8_4_ = fVar41;
              auVar9._12_4_ = fVar54;
              auVar38 = rsqrtps(auVar45,auVar9);
              fVar78 = auVar38._0_4_;
              fVar80 = auVar38._4_4_;
              fVar52 = auVar38._8_4_;
              fVar57 = auVar38._12_4_;
              fVar78 = (_DAT_146aeef30 - fVar78 * fVar78 * fVar58 * _DAT_146aeef30) * fVar78 +
                       fVar78;
              fVar80 = (fRam0000000146aeef34 - fVar80 * fVar80 * fVar49 * fRam0000000146aeef34) *
                       fVar80 + fVar80;
              fVar52 = (fRam0000000146aeef38 - fVar52 * fVar52 * fVar41 * fRam0000000146aeef38) *
                       fVar52 + fVar52;
              fVar57 = (fRam0000000146aeef3c - fVar57 * fVar57 * fVar54 * fRam0000000146aeef3c) *
                       fVar57 + fVar57;
              fVar79 = 0.0;
              fVar67 = (float)(((uint)(((_DAT_146aeef30 - fVar78 * fVar78 * fVar58 * _DAT_146aeef30)
                                        * fVar78 + fVar78) * local_198) ^ _DAT_146aeef20) &
                               -(uint)(1e-08 <= fVar58) ^ _DAT_146aeef20);
              fVar47 = (float)(((uint)(((fRam0000000146aeef34 -
                                        fVar80 * fVar80 * fVar49 * fRam0000000146aeef34) * fVar80 +
                                       fVar80) * fStack_194) ^ uRam0000000146aeef24) &
                               -(uint)(1e-08 <= fVar49) ^ uRam0000000146aeef24);
              fVar51 = (float)(((uint)(((fRam0000000146aeef38 -
                                        fVar52 * fVar52 * fVar41 * fRam0000000146aeef38) * fVar52 +
                                       fVar52) * fStack_190) ^ uRam0000000146aeef28) &
                               -(uint)(1e-08 <= fVar41) ^ uRam0000000146aeef28);
              fVar53 = (float)(((uint)(((fRam0000000146aeef3c -
                                        fVar57 * fVar57 * fVar54 * fRam0000000146aeef3c) * fVar57 +
                                       fVar57) * fStack_18c) ^ uRam0000000146aeef2c) &
                               -(uint)(1e-08 <= fVar54) ^ uRam0000000146aeef2c);
              fVar57 = local_158;
              fVar80 = fStack_154;
              fVar78 = fStack_150;
              local_198 = fVar67;
              fStack_194 = fVar47;
              fStack_190 = fVar51;
              fStack_18c = fVar53;
            }
            pfVar26 = (float *)(uVar30 + (longlong)auVar29);
            *pfVar26 = fVar67;
            pfVar26[1] = fVar47;
            pfVar26[2] = fVar51;
            pfVar26[3] = fVar53;
            pfVar26 = (float *)(uVar30 + 0x10 + (longlong)auVar29);
            *pfVar26 = fVar57;
            pfVar26[1] = fVar80;
            pfVar26[2] = fVar78;
            pfVar26[3] = fVar79;
            pfVar26 = (float *)(uVar30 + 0x20 + (longlong)auVar29);
            *pfVar26 = fVar2 * fVar3;
            pfVar26[1] = fVar4 * fVar5;
            pfVar26[2] = fVar42 * fVar74;
            pfVar26[3] = auVar36._12_4_ * fVar50;
            piVar19 = (int *)FBoneContainer::GetParentBoneIndex(lVar33,local_1d8,&local_298);
            fVar78 = _DAT_146aeef40;
            fVar79 = fRam0000000146aeef44;
            fVar80 = fRam0000000146aeef48;
            fVar52 = _DAT_146aeefd0;
            fVar57 = fRam0000000146aeefd4;
            fVar58 = fRam0000000146aeefd8;
            local_298 = *piVar19;
          }
          pfVar26 = (float *)(uVar30 + (longlong)auVar29);
          fVar42 = *pfVar26;
          fVar74 = pfVar26[1];
          fVar50 = pfVar26[2];
          fVar49 = pfVar26[3];
          auVar36 = *(undefined1 (*) [16])(uVar30 + 0x20 + (longlong)auVar29);
          fVar2 = auVar36._0_4_;
          fVar3 = auVar36._4_4_;
          fVar4 = auVar36._8_4_;
          fVar5 = auVar36._12_4_;
          local_188 = CONCAT44(fVar57,fVar52);
          uStack_180 = (float *)CONCAT44(fRam0000000146aeefdc,fVar58);
          pfVar26 = (float *)((longlong)*(int *)(local_260 + lVar27) * 0x30 + *plVar17);
          auVar38 = *(undefined1 (*) [16])(pfVar26 + 8);
          fVar41 = *pfVar26;
          fVar54 = pfVar26[1];
          fVar48 = pfVar26[2];
          fVar55 = pfVar26[3];
          fVar65 = pfVar26[4];
          fVar66 = pfVar26[5];
          fVar67 = pfVar26[6];
          auVar36 = minps(auVar38,auVar36);
          auVar40._4_4_ = -(uint)(auVar36._4_4_ < fVar57);
          auVar40._0_4_ = -(uint)(auVar36._0_4_ < fVar52);
          auVar40._8_4_ = -(uint)(auVar36._8_4_ < fVar58);
          auVar40._12_4_ = -(uint)(auVar36._12_4_ < fRam0000000146aeefdc);
          iVar18 = movmskps(*(int *)(local_260 + lVar27),auVar40);
          if (iVar18 == 0) {
            fVar65 = fVar65 * fVar2;
            fVar66 = fVar66 * fVar3;
            fVar67 = fVar67 * fVar4;
            fVar56 = pfVar26[7] * fVar5;
            fVar47 = fVar55 * fVar42 * _DAT_146aeefb0 + fVar49 * fVar41 +
                     fVar48 * fVar74 * _DAT_146aeefa0 + fVar54 * fVar50 * _DAT_146aeef90;
            fVar51 = fVar48 * fVar42 * fRam0000000146aeefb4 + fVar49 * fVar54 +
                     fVar55 * fVar74 * fRam0000000146aeefa4 + fVar41 * fVar50 * fRam0000000146aeef94
            ;
            fVar53 = fVar54 * fVar42 * fRam0000000146aeefb8 + fVar49 * fVar48 +
                     fVar41 * fVar74 * fRam0000000146aeefa8 + fVar55 * fVar50 * fRam0000000146aeef98
            ;
            fVar41 = fVar41 * fVar42 * fRam0000000146aeefbc + fVar49 * fVar55 +
                     fVar54 * fVar74 * fRam0000000146aeefac + fVar48 * fVar50 * fRam0000000146aeef9c
            ;
            fVar80 = fVar67 * fVar74 - fVar66 * fVar50;
            fVar52 = fVar65 * fVar50 - fVar67 * fVar42;
            fVar57 = fVar66 * fVar42 - fVar65 * fVar74;
            fVar58 = fVar56 * fVar49 - fVar56 * fVar49;
            fVar80 = fVar80 + fVar80;
            fVar52 = fVar52 + fVar52;
            fVar57 = fVar57 + fVar57;
            fVar58 = fVar58 + fVar58;
            pfVar26 = (float *)(uVar30 + 0x10 + (longlong)auVar29);
            fVar78 = (fVar57 * fVar74 - fVar52 * fVar50) + fVar49 * fVar80 + fVar65 + *pfVar26;
            fVar79 = (fVar80 * fVar50 - fVar57 * fVar42) + fVar49 * fVar52 + fVar66 + pfVar26[1];
            fVar80 = (fVar52 * fVar42 - fVar80 * fVar74) + fVar49 * fVar57 + fVar67 + pfVar26[2];
            fVar52 = (fVar58 * fVar49 - fVar58 * fVar49) + fVar49 * fVar58 + fVar56 + pfVar26[3];
          }
          else {
            fVar47 = fVar74 + fVar74;
            fVar53 = fVar50 + fVar50;
            pfVar25 = (float *)(uVar30 + 0x10 + (longlong)auVar29);
            fVar52 = *pfVar25;
            fVar57 = pfVar25[1];
            fVar58 = pfVar25[2];
            fVar56 = (fVar42 + fVar42) * fVar42;
            fVar51 = (fVar42 + fVar42) * fVar49;
            fVar70 = (fVar53 * fVar49 + fVar47 * fVar42) * fVar2;
            fVar71 = (fVar51 + fVar53 * fVar74) * fVar3;
            fVar72 = (fVar47 * fVar49 + fVar53 * fVar42) * fVar4;
            fVar59 = fVar3 * (fVar47 * fVar42 - fVar53 * fVar49);
            fVar61 = fVar4 * (fVar53 * fVar74 - fVar51);
            fVar63 = fVar2 * (fVar53 * fVar42 - fVar47 * fVar49);
            fVar42 = (float)((uint)((fVar78 - (fVar47 * fVar74 + fVar53 * fVar50)) * fVar2) &
                            _DAT_146aeef50);
            fVar50 = (float)((uint)((fVar79 - (fVar56 + fVar53 * fVar50)) * fVar3) &
                            uRam0000000146aeef54);
            fVar47 = (float)((uint)((fVar80 - (fVar56 + fVar47 * fVar74)) * fVar4) &
                            uRam0000000146aeef58);
            fVar53 = (float)((uint)((fRam0000000146aeef4c - (fVar56 + fVar56)) * fVar5) &
                            uRam0000000146aeef5c);
            fVar49 = fVar54 + fVar54;
            fVar51 = fVar48 + fVar48;
            fVar56 = fVar41 * (fVar41 + fVar41);
            fVar74 = fVar55 * (fVar41 + fVar41);
            fVar64 = (fVar55 * fVar51 + fVar41 * fVar49) * pfVar26[8];
            fVar68 = (fVar74 + fVar54 * fVar51) * pfVar26[9];
            fVar69 = (fVar55 * fVar49 + fVar41 * fVar51) * pfVar26[10];
            fVar60 = pfVar26[9] * (fVar41 * fVar49 - fVar55 * fVar51);
            fVar62 = pfVar26[10] * (fVar54 * fVar51 - fVar74);
            fVar55 = pfVar26[8] * (fVar41 * fVar51 - fVar55 * fVar49);
            fVar74 = (float)((uint)((fVar78 - (fVar48 * fVar51 + fVar54 * fVar49)) * pfVar26[8]) &
                            _DAT_146aeef50);
            fVar41 = (float)((uint)((fVar79 - (fVar48 * fVar51 + fVar56)) * pfVar26[9]) &
                            uRam0000000146aeef54);
            fVar49 = (float)((uint)((fVar80 - (fVar54 * fVar49 + fVar56)) * pfVar26[10]) &
                            uRam0000000146aeef58);
            fVar54 = (float)((uint)((fRam0000000146aeef4c - (fVar56 + fVar56)) * pfVar26[0xb]) &
                            uRam0000000146aeef5c);
            local_228._0_4_ = fVar64 * fVar59 + fVar74 * fVar42 + fVar55 * fVar72 + fVar54 * fVar52;
            local_228._4_4_ = fVar64 * fVar50 + fVar74 * fVar70 + fVar55 * fVar61 + fVar54 * fVar57;
            uStack_220._0_4_ = fVar64 * fVar71 + fVar74 * fVar63 + fVar55 * fVar47 + fVar54 * fVar58
            ;
            uStack_220._4_4_ =
                 fVar64 * fVar53 + fVar74 * fVar53 + fVar55 * fVar53 + fVar54 * fRam0000000146aeef4c
            ;
            local_218._0_4_ = fVar41 * fVar59 + fVar60 * fVar42 + fVar68 * fVar72 + fVar54 * fVar52;
            local_218._4_4_ = fVar41 * fVar50 + fVar60 * fVar70 + fVar68 * fVar61 + fVar54 * fVar57;
            uStack_210._0_4_ = fVar41 * fVar71 + fVar60 * fVar63 + fVar68 * fVar47 + fVar54 * fVar58
            ;
            uStack_210._4_4_ =
                 fVar41 * fVar53 + fVar60 * fVar53 + fVar68 * fVar53 + fVar54 * fRam0000000146aeef4c
            ;
            local_208._0_4_ = fVar62 * fVar59 + fVar69 * fVar42 + fVar49 * fVar72 + fVar54 * fVar52;
            local_208._4_4_ = fVar62 * fVar50 + fVar69 * fVar70 + fVar49 * fVar61 + fVar54 * fVar57;
            fStack_200 = fVar62 * fVar71 + fVar69 * fVar63 + fVar49 * fVar47 + fVar54 * fVar58;
            fStack_1fc = fVar62 * fVar53 + fVar69 * fVar53 + fVar49 * fVar53 +
                         fVar54 * fRam0000000146aeef4c;
            local_1f8 = fVar66 * fVar59 + fVar65 * fVar42 + fVar67 * fVar72 +
                        fRam0000000146aeef4c * fVar52;
            fStack_1f4 = fVar66 * fVar50 + fVar65 * fVar70 + fVar67 * fVar61 +
                         fRam0000000146aeef4c * fVar57;
            uStack_1f0 = (undefined8 *)
                         CONCAT44(fVar66 * fVar53 + fVar65 * fVar53 + fVar67 * fVar53 +
                                  fRam0000000146aeef4c * fRam0000000146aeef4c,
                                  fVar66 * fVar71 + fVar65 * fVar63 + fVar67 * fVar47 +
                                  fRam0000000146aeef4c * fVar58);
            FMatrix::RemoveScaling(&local_228);
            fVar78 = (float)(-(uint)((float)local_188 <= auVar38._0_4_ * fVar2) &
                             (_DAT_146aeefc0 ^ (uint)fVar78) ^ _DAT_146aeefc0);
            fVar79 = (float)(-(uint)(local_188._4_4_ <= auVar38._4_4_ * fVar3) &
                             (uRam0000000146aeefc4 ^ (uint)fVar79) ^ uRam0000000146aeefc4);
            fVar80 = (float)(-(uint)((float)uStack_180 <= auVar38._8_4_ * fVar4) &
                             (uRam0000000146aeefc8 ^ (uint)fVar80) ^ uRam0000000146aeefc8);
            local_228 = (undefined **)CONCAT44(local_228._4_4_ * fVar78,(float)local_228 * fVar78);
            uStack_220 = CONCAT44(uStack_220._4_4_,(float)uStack_220 * fVar78);
            uStack_210 = (float *)CONCAT44(uStack_210._4_4_,(float)uStack_210 * fVar79);
            fStack_200 = fStack_200 * fVar80;
            local_218 = (float *)CONCAT44(local_218._4_4_ * fVar79,(float)local_218 * fVar79);
            local_208 = (longlong *)CONCAT44(local_208._4_4_ * fVar80,(float)local_208 * fVar80);
            FQuat::FQuat(&local_1b8,&local_228);
            local_2a8[0] = 0x322bcc77;
            auVar46._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
            auVar46._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
            auVar46._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
            auVar46._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
            fVar57 = auVar46._4_4_ + auVar46._0_4_;
            fVar58 = auVar46._8_4_ + auVar46._4_4_;
            fVar42 = auVar46._12_4_ + auVar46._8_4_;
            fVar74 = auVar46._0_4_ + auVar46._12_4_;
            auVar10._4_4_ = fVar58;
            auVar10._0_4_ = fVar57;
            auVar10._8_4_ = fVar42;
            auVar10._12_4_ = fVar74;
            auVar36 = rsqrtps(auVar46,auVar10);
            fVar78 = auVar36._0_4_;
            fVar79 = auVar36._4_4_;
            fVar80 = auVar36._8_4_;
            fVar52 = auVar36._12_4_;
            fVar78 = (_DAT_146aeef30 - fVar78 * fVar78 * fVar57 * _DAT_146aeef30) * fVar78 + fVar78;
            fVar79 = (fRam0000000146aeef34 - fVar79 * fVar79 * fVar58 * fRam0000000146aeef34) *
                     fVar79 + fVar79;
            fVar80 = (fRam0000000146aeef38 - fVar80 * fVar80 * fVar42 * fRam0000000146aeef38) *
                     fVar80 + fVar80;
            fVar52 = (fRam0000000146aeef3c - fVar52 * fVar52 * fVar74 * fRam0000000146aeef3c) *
                     fVar52 + fVar52;
            fVar47 = (float)(((uint)(((_DAT_146aeef30 - fVar78 * fVar78 * fVar57 * _DAT_146aeef30) *
                                      fVar78 + fVar78) * local_1b8) ^ _DAT_146aeef20) &
                             -(uint)(1e-08 <= fVar57) ^ _DAT_146aeef20);
            fVar51 = (float)(((uint)(((fRam0000000146aeef34 -
                                      fVar79 * fVar79 * fVar58 * fRam0000000146aeef34) * fVar79 +
                                     fVar79) * fStack_1b4) ^ uRam0000000146aeef24) &
                             -(uint)(1e-08 <= fVar58) ^ uRam0000000146aeef24);
            fVar53 = (float)(((uint)(((fRam0000000146aeef38 -
                                      fVar80 * fVar80 * fVar42 * fRam0000000146aeef38) * fVar80 +
                                     fVar80) * fStack_1b0) ^ uRam0000000146aeef28) &
                             -(uint)(1e-08 <= fVar42) ^ uRam0000000146aeef28);
            fVar41 = (float)(((uint)(((fRam0000000146aeef3c -
                                      fVar52 * fVar52 * fVar74 * fRam0000000146aeef3c) * fVar52 +
                                     fVar52) * fStack_1ac) ^ uRam0000000146aeef2c) &
                             -(uint)(1e-08 <= fVar74) ^ uRam0000000146aeef2c);
            fVar52 = 0.0;
            fVar78 = local_1f8;
            fVar79 = fStack_1f4;
            fVar80 = (float)uStack_1f0;
            local_1b8 = fVar47;
            fStack_1b4 = fVar51;
            fStack_1b0 = fVar53;
            fStack_1ac = fVar41;
          }
          uVar24 = local_268;
          lVar27 = (longlong)(int)local_268;
          iVar18 = (int)local_268 + 1;
          local_268 = CONCAT44(local_268._4_4_,iVar18);
          if (local_268._4_4_ < iVar18) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_270,uVar24 & 0xffffffff);
          }
          lVar20 = local_1d0;
          pfVar26 = (float *)(lVar27 * 0x30 + local_270);
          *pfVar26 = fVar47;
          pfVar26[1] = fVar51;
          pfVar26[2] = fVar53;
          pfVar26[3] = fVar41;
          pfVar26[4] = fVar78;
          pfVar26[5] = fVar79;
          pfVar26[6] = fVar80;
          pfVar26[7] = fVar52;
          pfVar26[8] = auVar38._0_4_ * fVar2;
          pfVar26[9] = auVar38._4_4_ * fVar3;
          pfVar26[10] = auVar38._8_4_ * fVar4;
          pfVar26[0xb] = auVar38._12_4_ * fVar5;
          fVar78 = *(float *)(uVar32 + 0x18 + local_1d0);
          uVar34 = (uint)uVar35;
          if (fVar78 <= 0.0) {
            pfVar26 = (float *)(uVar30 + 0x10 + local_270);
            fVar78 = (float)local_108._0_4_ - *pfVar26;
            fVar79 = (float)local_108._4_4_ - pfVar26[1];
            local_250 = uVar34 + 1;
            fVar80 = fStack_100 - pfVar26[2];
            if (local_24c < (int)local_250) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_258,uVar35);
            }
            local_258[(int)uVar34] = SQRT(fVar79 * fVar79 + fVar78 * fVar78 + fVar80 * fVar80);
          }
          else {
            local_250 = uVar34 + 1;
            local_2a8[0] = uVar34;
            if (local_24c < (int)local_250) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_258,uVar35);
              fVar78 = *(float *)(uVar32 + 0x18 + lVar20);
            }
            local_258[(int)local_2a8[0]] = fVar78;
          }
          uVar35 = (ulonglong)local_250;
          uVar31 = (ulonglong)local_1dc;
          uVar23 = local_294;
        }
      }
      else {
        iVar18 = *(int *)(uVar32 + 8 + local_1d0);
        if (iVar18 != -1) {
          iVar18 = *(int *)(*(longlong *)(param_1 + 0x420) + (longlong)iVar18 * 4);
          uVar23 = local_294;
          goto LAB_14227ecfb;
        }
      }
      local_294 = uVar23 + 1;
      uVar24 = (ulonglong)local_294;
      local_260 = local_260 + 4;
      uVar32 = uVar32 + 0x20;
      uVar30 = uVar30 + 0x30;
      param_2 = local_1c8;
    } while ((int)local_294 < *(int *)(local_238 + 0x690));
  }
  pfVar26 = local_258;
  uVar34 = local_278;
  lVar27 = 0;
  local_188 = local_238;
  local_218 = &local_288;
  local_288 = (float)local_108._0_4_;
  uStack_210 = (float *)&local_270;
  local_284 = (float)local_108._4_4_;
  local_228 = &PTR_LAB_14501c150;
  uStack_1f0 = &local_228;
  local_280 = fStack_100;
  uStack_220 = local_238;
  uStack_180 = local_218;
  local_178 = uStack_210;
  FUN_1422a73c0(CONCAT71((int7)(uVar24 >> 8),10),&local_228);
  uVar24 = local_230;
  lVar33 = local_238;
  if (uVar34 != 0) {
    if (0 < (int)uVar34) {
      uVar30 = (ulonglong)uVar34;
      lVar20 = lVar27;
      do {
        pfVar25 = (float *)((longlong)auVar29 + 0x10U + lVar20);
        fVar80 = pfVar25[1];
        fVar52 = pfVar25[2];
        fVar57 = *(float *)(local_230 + 8) - 1.0;
        auVar36 = *(undefined1 (*) [16])(lVar20 + local_270 + 0x10);
        fVar78 = *(float *)(local_230 + 0x10);
        fVar79 = *(float *)(local_230 + 0x14);
        pfVar21 = (float *)(lVar20 + local_270 + 0x10);
        *pfVar21 = (auVar36._0_4_ - *pfVar25) * fVar57 * *(float *)(local_230 + 0xc) + auVar36._0_4_
        ;
        pfVar21[1] = (auVar36._4_4_ - fVar80) * fVar57 * fVar78 + auVar36._4_4_;
        pfVar21[2] = (auVar36._8_4_ - fVar52) * fVar57 * fVar79 + auVar36._8_4_;
        pfVar21[3] = auVar36._12_4_ + 0.0;
        lVar20 = lVar20 + 0x30;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    fVar78 = local_280;
    if (*(float *)(local_230 + 8) < 1.0) {
      fVar78 = ((1.0 - *(float *)(local_230 + 8)) * *(float *)(local_238 + 0x680) + 1.0) * local_280
      ;
    }
    local_274 = fVar78;
    if (0 < (int)uVar34) {
      pfVar21 = (float *)(local_270 + 0x10);
      uVar30 = (ulonglong)uVar34;
      pfVar25 = pfVar26;
      do {
        fVar79 = (*pfVar25 * *pfVar25 - (*pfVar21 - local_288) * (*pfVar21 - local_288)) -
                 (pfVar21[1] - local_284) * (pfVar21[1] - local_284);
        if (fVar79 < 0.0) {
          fVar79 = 0.0;
        }
        else {
          fVar79 = SQRT(fVar79);
        }
        fVar79 = pfVar21[2] + fVar79;
        if (fVar79 < fVar78) {
          fVar78 = fVar79;
          local_274 = fVar79;
        }
        pfVar21 = pfVar21 + 0xc;
        pfVar25 = pfVar25 + 1;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    local_218 = &local_288;
    local_188 = local_238;
    uStack_210 = &local_274;
    local_208 = &local_270;
    local_228 = &PTR_LAB_14501c180;
    uStack_1f0 = &local_228;
    uStack_220 = local_238;
    uStack_180 = local_218;
    local_178 = uStack_210;
    uStack_170 = local_208;
    FUN_1422a73c0(10,&local_228);
    fVar78 = *(float *)(uVar24 + 4);
    if (fVar78 == 3.4028235e+38) {
      fVar78 = local_280 - local_274;
      *(float *)(uVar24 + 4) = fVar78;
    }
    fVar78 = ((local_274 - local_280) - fVar78) * *(float *)(lVar33 + 0x664) + fVar78;
    *(float *)(uVar24 + 4) = fVar78;
    local_280 = local_280 + fVar78;
    if (0 < (int)uVar34) {
      local_1d0 = local_1e8 - (longlong)pfVar26;
      local_230 = (ulonglong)uVar34;
      lVar33 = lVar27;
      do {
        fVar78 = *pfVar26;
        pfVar25 = (float *)(local_270 + 0x10 + lVar33);
        fVar57 = *pfVar25 - local_288;
        fVar52 = pfVar25[1] - local_284;
        fVar80 = pfVar25[2] - local_280;
        fVar79 = fVar52 * fVar52 + fVar57 * fVar57 + fVar80 * fVar80;
        if (fVar78 < SQRT(fVar79)) {
          if (1e-08 < fVar79) {
            auVar36 = rsqrtss(ZEXT416((uint)fVar79),ZEXT416((uint)fVar79));
            fVar58 = auVar36._0_4_;
            fVar58 = fVar58 + fVar58 * (0.5 - fVar79 * 0.5 * fVar58 * fVar58);
            fVar58 = fVar58 + fVar58 * (0.5 - fVar79 * 0.5 * fVar58 * fVar58);
            fVar57 = fVar57 * fVar58;
            fVar52 = fVar52 * fVar58;
            fVar80 = fVar80 * fVar58;
          }
          fVar57 = fVar57 * fVar78;
          fVar52 = fVar52 * fVar78;
          fVar80 = fVar80 * fVar78;
        }
        auVar6._4_4_ = fVar52 + local_284;
        auVar6._0_4_ = fVar57 + local_288;
        auVar6._8_4_ = fVar80 + local_280;
        auVar6._12_4_ = 0;
        *(undefined1 (*) [16])(local_270 + 0x10 + lVar33) = auVar6;
        lVar28 = (longlong)*(int *)(local_1d0 + (longlong)pfVar26);
        lVar20 = *param_2;
        puVar22 = (undefined8 *)
                  FUN_14162bcf0(local_270 + lVar27,&local_188,(longlong)auVar29 + lVar27);
        lVar27 = lVar27 + 0x30;
        lVar33 = lVar33 + 0x30;
        pfVar26 = pfVar26 + 1;
        local_230 = local_230 - 1;
        uVar11 = puVar22[1];
        puVar1 = (undefined8 *)(lVar20 + lVar28 * 0x30);
        *puVar1 = *puVar22;
        puVar1[1] = uVar11;
        uVar11 = puVar22[3];
        puVar1 = (undefined8 *)(lVar20 + 0x10 + lVar28 * 0x30);
        *puVar1 = puVar22[2];
        puVar1[1] = uVar11;
        uVar11 = puVar22[5];
        puVar1 = (undefined8 *)(lVar20 + 0x20 + lVar28 * 0x30);
        *puVar1 = puVar22[4];
        puVar1[1] = uVar11;
      } while (local_230 != 0);
      local_230 = 0;
      lVar33 = local_238;
    }
    local_108._4_4_ = local_284;
    local_108._0_4_ = local_288;
    lVar20 = (longlong)local_290[0];
    lVar27 = *param_2;
    fStack_100 = local_280;
    unique0x100003c6 = 0.0;
    puVar22 = (undefined8 *)FUN_14162bcf0(local_118,&local_188,&local_148);
    uVar11 = puVar22[1];
    puVar1 = (undefined8 *)(lVar27 + lVar20 * 0x30);
    *puVar1 = *puVar22;
    puVar1[1] = uVar11;
    uVar11 = puVar22[3];
    puVar1 = (undefined8 *)(lVar27 + 0x10 + lVar20 * 0x30);
    *puVar1 = puVar22[2];
    puVar1[1] = uVar11;
    uVar11 = puVar22[5];
    local_218 = &local_288;
    puVar1 = (undefined8 *)(lVar27 + 0x20 + lVar20 * 0x30);
    *puVar1 = puVar22[4];
    puVar1[1] = uVar11;
    uStack_210 = (float *)&local_270;
    local_228 = &PTR_LAB_14501c1b0;
    uStack_1f0 = &local_228;
    uStack_220 = lVar33;
    local_188 = lVar33;
    uStack_180 = local_218;
    local_178 = uStack_210;
    FUN_1422a73c0(10,&local_228);
  }
  if (local_1e8 != 0) {
    FMemory::Free(local_1e8);
  }
  if (auVar29 != (undefined1  [8])0x0) {
    FMemory::Free(auVar29);
  }
  if (local_270 != 0) {
    FMemory::Free();
  }
  if (local_258 != (float *)0x0) {
    FMemory::Free(local_258);
  }
  return;
}



// FUNCTION 14227fe20 FUN_14227fe20 body=509 status=ok
// SIG undefined FUN_14227fe20(void)

void FUN_14227fe20(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x28) & 3) == 3) {
    return;
  }
  lVar7 = param_1[4];
  if (lVar7 == 0) goto LAB_14227fecd;
  lVar6 = FUN_142a07000();
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_14227fecd;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar2 = false;
    if (DVar4 == DAT_1468c21c0) goto LAB_14227feb7;
  }
  else {
LAB_14227feb7:
    bVar2 = true;
  }
  if (bVar2) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_14227fecd:
  lVar7 = param_1[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  plVar8 = (longlong *)FUN_14091a320(param_2,lVar7 + 0x3a0);
  puVar1 = *(undefined4 **)plVar8[1];
  if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar8 + 0x50))(plVar8,lVar7 + 0x3c8,4);
    if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar8,lVar7 + 0x3c8,4);
    }
  }
  else {
    *(undefined4 *)(lVar7 + 0x3c8) = *puVar1;
    *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
  }
  if ((*(byte *)(plVar8 + 5) & 1) != 0) {
    *(undefined4 *)(lVar7 + 0x3cc) = *(undefined4 *)(lVar7 + 0x3c8);
    TBitArray<FDefaultBitArrayAllocator>::Realloc(lVar7 + 0x3b0,0);
  }
  iVar5 = *(int *)(lVar7 + 0x3c8) + 0x1f;
  lVar6 = *(longlong *)(lVar7 + 0x3c0);
  if (*(longlong *)(lVar7 + 0x3c0) == 0) {
    lVar6 = lVar7 + 0x3b0;
  }
  (**(code **)(*plVar8 + 0x50))
            (plVar8,lVar6,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2);
  (**(code **)(*plVar8 + 0x10))(plVar8,lVar7 + 0x3d0);
  (**(code **)(*plVar8 + 0x10))(plVar8,lVar7 + 0x3d8);
  (**(code **)(*plVar8 + 0x10))(plVar8,lVar7 + 0x3e0);
  uVar9 = FUN_1408bda20(plVar8,lVar7 + 0x3f0);
  plVar8 = (longlong *)FUN_1408bda20(uVar9,lVar7 + 0x400);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,lVar7 + 0x470);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,lVar7 + 0x471);
  (**(code **)(*plVar8 + 8))(plVar8,lVar7 + 0x472);
  return;
}



// FUNCTION 142280020 SetMatineeAnimPositionInner body=214 status=ok
// SIG undefined SetMatineeAnimPositionInner(void)

longlong FAnimMontageInstance::SetMatineeAnimPositionInner
                   (undefined8 param_1,undefined8 param_2,undefined1 param_3,float param_4,
                   undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float local_28 [8];
  
  lVar1 = FUN_1422767f0(param_1,param_2,param_3,param_5);
  lVar2 = FUN_1423ac7e0(param_2);
  lVar3 = FUN_1423b0890(param_2);
  lVar4 = lVar1;
  if (lVar3 == 0) {
    if ((lVar1 != 0) && (lVar2 != 0)) {
      lVar2 = UAnimInstance::GetActiveInstanceForMontage(lVar2,lVar1);
      lVar4 = 0;
      if (lVar2 != 0) {
        FAlphaBlend::SetDesiredValue(lVar2 + 0x130,0x3f800000);
        FAlphaBlend::SetAlpha(lVar2 + 0x130,0x3f800000);
        lVar4 = lVar1;
        if (local_28 != (float *)(lVar2 + 0x180)) {
          *(float *)(lVar2 + 0x180) = param_4;
          *(undefined1 *)(lVar2 + 0x184) = 1;
        }
      }
    }
  }
  else {
    fVar5 = (float)FUN_1422aace0(lVar3);
    if (fVar5 != param_4) {
      FUN_1422b40f0(lVar3,param_4,1);
    }
  }
  return lVar4;
}



// FUNCTION 142280100 SetMorphTarget body=18 status=ok
// SIG undefined SetMorphTarget(void)

void UAnimInstance::SetMorphTarget(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1423bad30();
    return;
  }
  return;
}



// FUNCTION 142280120 FUN_142280120 body=159 status=ok
// SIG undefined FUN_142280120(void)

void FUN_142280120(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_2 != -1) &&
     (plVar3 = (longlong *)FUN_142268ae0(*(undefined8 *)(param_1 + 0x10)), plVar3 != (longlong *)0x0
     )) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
    param_2 = (int)plVar3[1] - param_2;
    if ((0 < param_2) && (param_2 + -1 < (int)plVar3[1])) {
      lVar1 = *(longlong *)(*plVar3 + -8 + (longlong)param_2 * 8);
      lVar4 = FUN_1428f5a70();
      if ((*(longlong *)(lVar1 + 0x70) == lVar4) &&
         (((param_1 = param_1 + *(int *)(lVar1 + 0x44), *(int *)(param_1 + 0x40) == 0 ||
           (*(longlong **)(param_1 + 0x38) == (longlong *)0x0)) ||
          (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(), cVar2 == '\0')))) {
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x38,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1422801c0 FUN_1422801c0 body=327 status=ok
// SIG undefined FUN_1422801c0(void)

undefined8 FUN_1422801c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  lVar2 = *param_1;
  uVar6 = 0;
  iVar1 = *(int *)(lVar2 + 0x170);
  if (0 < iVar1) {
    plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x168) + 0x30);
    uVar7 = uVar6;
    uVar9 = uVar6;
    do {
      iVar8 = (int)uVar9;
      if (*plVar4 == *param_2) goto LAB_14228021a;
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 0xb;
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  iVar8 = -1;
LAB_14228021a:
  if (0 < iVar1) {
    plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x168) + 0x30);
    uVar7 = uVar6;
    do {
      iVar5 = (int)uVar6;
      if (*plVar4 == *param_3) goto LAB_14228024a;
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 0xb;
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  iVar5 = -1;
LAB_14228024a:
  if ((iVar8 < 0) || ((int)param_1[0x1e] <= iVar8)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    iVar1 = *(int *)(param_1[0x1d] + (longlong)iVar8 * 4);
    if (((iVar1 != -1) && (-1 < iVar1)) && (iVar1 < (int)param_1[0x20])) {
      *(undefined4 *)(param_1[0x1f] + (longlong)iVar1 * 4) = 0xffffffff;
    }
  }
  if ((-1 < iVar5) && (iVar5 < (int)param_1[0x20])) {
    *(int *)(param_1[0x1f] + (longlong)iVar5 * 4) = iVar8;
  }
  if (bVar3) {
    *(int *)(param_1[0x1d] + (longlong)iVar8 * 4) = iVar5;
    if (((char)param_1[5] != '\0') && (*(float *)(param_1 + 0x2b) == 0.0)) {
      FUN_142279d70(param_1,*(undefined4 *)((longlong)param_1 + 300));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142280310 SetNum body=121 status=ok
// SIG undefined SetNum(void)

void TArray<TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar1 < iVar3) {
    iVar4 = iVar3 - iVar1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
    }
  }
  else if (iVar3 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 142280390 FUN_142280390 body=118 status=ok
// SIG undefined FUN_142280390(void)

void FUN_142280390(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  *(undefined4 *)(param_1 + 0x7f) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = param_2[1];
  lVar1 = *(longlong *)(param_2 + 2);
  param_1[0x80] = lVar1;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x7f);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,param_1[0x80]);
      bVar2 = lVar1 != 0;
      goto LAB_1422803ef;
    }
  }
  bVar2 = false;
LAB_1422803ef:
                    /* WARNING: Could not recover jumptable at 0x0001422803ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,bVar2);
  return;
}



// FUNCTION 142280410 SetRootMotionMode body=7 status=ok
// SIG undefined SetRootMotionMode(void)

void UAnimInstance::SetRootMotionMode(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x30) = *param_2;
  return;
}



// FUNCTION 142280420 FUN_142280420 body=387 status=ok
// SIG undefined FUN_142280420(void)

longlong FUN_142280420(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong local_38 [6];
  
  lVar2 = FUN_1423ac7e0(param_2);
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(lVar2 + 0x78);
    plVar1 = plVar5 + *(int *)(lVar2 + 0x80);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar4 = (longlong *)*plVar5;
      if ((plVar4 != (longlong *)0x0) && ((int)plVar4[0x22] == *param_3)) {
        if (*plVar4 != 0) goto LAB_142280518;
        goto LAB_142280491;
      }
    }
    plVar4 = (longlong *)0x0;
LAB_142280491:
    uVar6 = 0;
    lVar3 = FUN_14225c2a0(param_4,param_1,0,0,0,1,0xbf800000,0);
    if (lVar3 != 0) {
      FUN_142278740(lVar2,lVar3,0x3f800000,0,0,uVar6 & 0xffffff00,0xbf800000,0xbf800000);
      plVar4 = (longlong *)UAnimInstance::GetActiveInstanceForMontage(lVar2,lVar3);
      *(undefined1 *)((longlong)plVar4 + 0x51) = 0;
    }
LAB_142280518:
    if (plVar4 != (longlong *)0x0) {
      lVar2 = *plVar4;
      *param_3 = (int)plVar4[0x22];
      FAlphaBlend::SetDesiredValue(plVar4 + 0x26,param_6);
      FAlphaBlend::SetAlpha(plVar4 + 0x26,param_6);
      if (local_38 == plVar4 + 0x30) {
        return lVar2;
      }
      *(undefined4 *)(plVar4 + 0x30) = param_5;
      *(undefined1 *)((longlong)plVar4 + 0x184) = 1;
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1422805b0 FUN_1422805b0 body=108 status=ok
// SIG undefined FUN_1422805b0(void)

void FUN_1422805b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  puVar4 = (undefined8 *)FUN_1422a1c10(local_18,*param_2);
  iVar2 = *(int *)(param_1 + 0x3d0);
  *(int *)(param_1 + 0x3d0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3d4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x3c8,iVar2);
  }
  uVar3 = puVar4[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x3c8) + (longlong)iVar2 * 0x10);
  *puVar1 = *puVar4;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 142280620 FUN_142280620 body=48 status=ok
// SIG undefined FUN_142280620(void)

undefined8 FUN_142280620(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xc0))();
  if (lVar1 != 0) {
    FUN_140488ed0(lVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 142280650 SetTime body=5 status=ok
// SIG undefined SetTime(void)

void FAnimLinkableElement::SetTime(longlong param_1,float param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if (param_3 != bVar1) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        if (param_3 == 0) {
          *(float *)(param_1 + 0x24) = param_2 - *(float *)(param_1 + 0x1c);
          return;
        }
        if (param_3 != 2) {
          return;
        }
        *(float *)(param_1 + 0x24) = param_2 * *(float *)(param_1 + 0x20);
        return;
      }
      if (bVar1 != 2) {
        return;
      }
      if (param_3 != 0) {
        if (param_3 != 1) {
          return;
        }
        *(float *)(param_1 + 0x24) = param_2 / *(float *)(param_1 + 0x20);
        return;
      }
      *(float *)(param_1 + 0x24) =
           (param_2 - *(float *)(param_1 + 0x1c)) / *(float *)(param_1 + 0x20);
      return;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      param_2 = param_2 * *(float *)(param_1 + 0x20);
    }
    param_2 = param_2 + *(float *)(param_1 + 0x1c);
  }
  *(float *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 142280660 FUN_142280660 body=121 status=ok
// SIG undefined FUN_142280660(void)

void FUN_142280660(longlong param_1,float param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if (param_3 != bVar1) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        if (param_3 == 0) {
          *(float *)(param_1 + 0x24) = param_2 - *(float *)(param_1 + 0x1c);
          return;
        }
        if (param_3 != 2) {
          return;
        }
        *(float *)(param_1 + 0x24) = param_2 * *(float *)(param_1 + 0x20);
        return;
      }
      if (bVar1 != 2) {
        return;
      }
      if (param_3 != 0) {
        if (param_3 != 1) {
          return;
        }
        *(float *)(param_1 + 0x24) = param_2 / *(float *)(param_1 + 0x20);
        return;
      }
      *(float *)(param_1 + 0x24) =
           (param_2 - *(float *)(param_1 + 0x1c)) / *(float *)(param_1 + 0x20);
      return;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      param_2 = param_2 * *(float *)(param_1 + 0x20);
    }
    param_2 = param_2 + *(float *)(param_1 + 0x1c);
  }
  *(float *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 1422806e0 FUN_1422806e0 body=642 status=ok
// SIG undefined FUN_1422806e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1422806e0(longlong *param_1,float param_2,float *param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_1a8 [32];
  char *local_188;
  float local_178;
  float local_174 [3];
  longlong *local_168;
  longlong local_160;
  float local_158;
  undefined8 local_154;
  undefined4 local_14c;
  char local_148;
  int local_144;
  undefined8 local_140;
  undefined2 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  char local_a8 [4];
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)*param_1 + 0x2e8))();
    if ((cVar3 == '\0') || (0 < (int)param_1[0x31])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_108 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_154 = 0;
    local_14c = 0;
    local_148 = '\x01';
    local_144 = -1;
    local_140 = 0;
    local_138 = 0;
    local_134 = 0xffffffff;
    local_110 = 0x7f7fffff;
    local_10c = 0x7f7fffff;
    local_160 = *param_1;
    local_168 = param_1;
    local_158 = param_2;
    while (1e-08 < local_158) {
      fVar6 = *param_3;
      cVar3 = FUN_142257670(&local_168,param_3,0);
      if (cVar3 != '\0') break;
      if (bVar2) {
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        uStack_80._0_4_ = 0;
        uStack_80._4_4_ = 0;
        lVar5 = *param_1;
        local_78 = _DAT_146aeef40 & _DAT_146aeef50;
        uStack_74 = uRam0000000146aeef44 & uRam0000000146aeef54;
        uStack_70 = uRam0000000146aeef48 & uRam0000000146aeef58;
        uStack_6c = uRam0000000146aeef4c & uRam0000000146aeef5c;
        local_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = uRam0000000146aeef4c;
        local_a4 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_a8[0] = cVar3;
        if (0 < *(int *)(lVar5 + 0x180)) {
          local_188 = local_a8;
          FUN_14224d7e0(lVar5,*(longlong *)(lVar5 + 0x178) + 8,fVar6,*param_3);
        }
        local_d8 = local_98;
        uStack_d4 = uStack_94;
        uStack_d0 = uStack_90;
        uStack_cc = uStack_8c;
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_b8 = local_78;
        uStack_b4 = uStack_74;
        uStack_b0 = uStack_70;
        uStack_ac = uStack_6c;
        FUN_142245a70(param_4,&local_d8);
      }
      cVar3 = local_148;
      if ((char)local_138 != '\0') {
        if (local_148 == '\0') {
          lVar5 = param_1[0x1f];
        }
        else {
          lVar5 = param_1[0x1d];
        }
        iVar1 = *(int *)(lVar5 + (longlong)local_144 * 4);
        if (iVar1 == -1) break;
        FUN_142274950(*param_1,iVar1,&local_178,local_174);
        fVar6 = local_178;
        if (cVar3 == '\0') {
          fVar6 = local_174[0] - 0.0001;
        }
        *param_3 = fVar6;
      }
    }
    FMontageSubStepper::~FMontageSubStepper(&local_168);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 142280970 FUN_142280970 body=3519 status=ok
// SIG undefined FUN_142280970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142280970(longlong param_1,longlong *param_2,longlong param_3,undefined1 *param_4,
                  float param_5,longlong *param_6,longlong **param_7,float param_8,float param_9)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  char *pcVar17;
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  short *psVar28;
  char *pcVar29;
  char *pcVar30;
  int iVar31;
  longlong *plVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  int iVar36;
  longlong *plVar37;
  longlong *plVar38;
  float *pfVar39;
  int iVar40;
  int iVar41;
  undefined4 *puVar42;
  longlong lVar43;
  char *pcVar44;
  longlong **pplVar45;
  uint uVar46;
  uint uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 in_XMM4 [16];
  undefined1 auVar54 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auStack_218 [32];
  longlong **local_1f8;
  uint local_1f0;
  char *local_1e8;
  uint uStack_1e0;
  int iStack_1dc;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  longlong local_1c8;
  longlong *local_1c0;
  longlong **local_1b8;
  longlong *local_1b0;
  int local_1a8;
  longlong local_1a0;
  undefined1 *local_198;
  undefined8 uStack_190;
  longlong *local_188;
  undefined8 uStack_180;
  undefined1 local_178 [4];
  undefined4 local_174;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined1 (*local_150) [16];
  undefined8 local_148;
  ulonglong local_140;
  longlong *local_138;
  ulonglong local_130;
  longlong *local_128;
  ushort local_120;
  undefined1 local_11e;
  char local_118 [4];
  undefined4 local_114;
  undefined8 local_110;
  uint local_108;
  int local_104;
  longlong local_100;
  longlong local_f8 [3];
  undefined2 local_e0;
  undefined1 local_de;
  char *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [64];
  undefined1 *local_88;
  uint local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1b0 = param_6;
  local_1b8 = param_7;
  local_198 = param_4;
  local_1c8 = param_1;
  local_1c0 = param_2;
  local_1a0 = param_3;
  if (param_8 <= 1e-05) {
    TArray<FTransform,TMemStackAllocator<0>_>::operator=(param_6,param_3);
    param_6[2] = *(longlong *)(param_3 + 0x10);
    FBlendedCurve::operator=(param_7,param_4);
  }
  else {
    plVar32 = *(longlong **)(param_1 + 0x538);
    pcVar29 = (char *)0x0;
    local_1e8 = (char *)0x0;
    iStack_1dc = 0;
    local_188 = plVar32 + (longlong)*(int *)(param_1 + 0x540) * 3;
    local_1d8 = 0;
    local_1cc = 0;
    pcVar44 = pcVar29;
    pcVar30 = pcVar29;
    if (plVar32 != local_188) {
      do {
        lVar24 = 0;
        cVar10 = FWeakObjectPtr::IsValid(plVar32);
        lVar43 = local_1a0;
        plVar13 = local_1b0;
        if (cVar10 == '\0') {
          TArray<FTransform,TMemStackAllocator<0>_>::operator=(local_1b0,local_1a0);
          plVar13[2] = *(longlong *)(lVar43 + 0x10);
          FBlendedCurve::operator=(local_1b8,local_198);
          goto LAB_1422816d0;
        }
        plVar13 = (longlong *)FWeakObjectPtr::Get(plVar32);
        iVar31 = (int)plVar13[0x30];
        if (0 < iVar31) {
          plVar37 = (longlong *)plVar13[0x2f];
          do {
            if (*plVar37 == *local_1c0) {
              bVar5 = 0 < (int)((longlong *)plVar13[0x2f])[lVar24 * 3 + 2];
              goto LAB_142280ac5;
            }
            lVar24 = lVar24 + 1;
            plVar37 = plVar37 + 3;
          } while (lVar24 < iVar31);
        }
        bVar5 = false;
LAB_142280ac5:
        if (bVar5) {
          plVar26 = (longlong *)0x0;
          cVar10 = '\0';
          plVar37 = plVar26;
          if (0 < iVar31) {
            plVar14 = (longlong *)plVar13[0x2f];
            plVar25 = plVar26;
            plVar38 = plVar26;
            do {
              if (*plVar14 == *local_1c0) {
                plVar37 = (longlong *)plVar13[0x2f] + (longlong)(int)plVar38 * 3 + 1;
                break;
              }
              plVar38 = (longlong *)(ulonglong)((int)plVar38 + 1);
              plVar25 = (longlong *)((longlong)plVar25 + 1);
              plVar14 = plVar14 + 3;
            } while ((longlong)plVar25 < (longlong)iVar31);
          }
          cVar11 = FAnimTrack::IsAdditive(plVar37);
          if (cVar11 != '\0') {
            cVar10 = FUN_1422513a0(plVar37);
            cVar10 = (cVar10 != '\0') + '\x01';
          }
          local_114 = (undefined4)plVar32[1];
          local_110 = 0;
          local_f8[0] = 0;
          local_f8[1] = 0;
          local_f8[2] = 0;
          local_e0 = 0;
          lVar43 = local_1c8 + 0x3a0;
          local_108 = 0;
          local_104 = 0;
          local_de = 0;
          local_1a8 = *(int *)(local_1c8 + 0x3a8);
          local_118[0] = cVar10;
          local_100 = lVar43;
          if (0 < local_1a8) {
            FUN_140848c80(&local_110,local_1a8);
            plVar26 = (longlong *)(ulonglong)local_108;
          }
          local_108 = local_1a8 + (int)plVar26;
          if (local_104 < (int)local_108) {
            TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_110);
          }
          FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(local_f8,lVar43);
          cVar11 = (**(code **)(*plVar13 + 0x2e8))(plVar13);
          if ((cVar11 == '\0') || (*(int *)(local_1c8 + 0x290) == 0)) {
            local_178[0] = 0;
          }
          else {
            local_178[0] = 1;
          }
          local_174 = (undefined4)plVar32[2];
          local_170 = 0;
          local_168 = 0;
          FUN_14224e8b0(plVar37,&local_110,local_f8,local_178);
          uVar27 = 0;
          local_158 = 0;
          local_150 = (undefined1 (*) [16])0x0;
          local_148 = 0;
          local_140 = local_140 & 0xffffffffff000000;
          FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_158,lVar43);
          (**(code **)(*plVar13 + 0x2b0))(plVar13,&local_158,(int)plVar32[2],0);
          uVar34 = uVar27;
          if (0 < (int)local_150) {
            do {
              if (*(char *)(uVar27 + 4 + local_158) != '\0') {
                *(undefined1 *)(uVar27 + 4 + local_f8[0]) = 1;
                *(undefined4 *)(uVar27 + local_f8[0]) = *(undefined4 *)(uVar27 + local_158);
              }
              uVar35 = (int)uVar34 + 1;
              uVar27 = uVar27 + 8;
              uVar34 = (ulonglong)uVar35;
            } while ((int)uVar35 < (int)local_150);
          }
          if (cVar10 == '\0') {
            iVar31 = (int)pcVar29;
            local_1d0 = iVar31 + 1;
            if (local_1cc < (int)local_1d0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1d8,pcVar29);
            }
            pcVar29 = (char *)(ulonglong)local_1d0;
            pcVar17 = (char *)((longlong)iVar31 * 0x40 + local_1d8);
          }
          else {
            iVar31 = (int)pcVar30;
            uStack_1e0 = iVar31 + 1;
            if (iStack_1dc < (int)uStack_1e0) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_1e8,pcVar30);
            }
            pcVar30 = (char *)(ulonglong)uStack_1e0;
            pcVar17 = local_1e8 + (longlong)iVar31 * 0x40;
          }
          pcVar44 = local_1e8;
          FSlotEvaluationPose::FSlotEvaluationPose(pcVar17,local_118);
          if (local_170 != 0) {
            FMemory::Free();
          }
        }
        plVar32 = plVar32 + 3;
      } while (plVar32 != local_188);
    }
    uVar35 = (uint)pcVar30;
    plVar32 = *(longlong **)(local_1c8 + 0x5d0);
    local_188 = plVar32 + (longlong)*(int *)(local_1c8 + 0x5d8) * 5;
    plVar13 = local_1c0;
    lVar43 = local_1d8;
    if (plVar32 != local_188) {
      do {
        if ((*plVar32 == *plVar13) && (plVar37 = (longlong *)plVar32[1], plVar37 != (longlong *)0x0)
           ) {
          cVar10 = (**(code **)(*plVar37 + 0x290))(plVar37);
          iVar41 = 0;
          iVar31 = 0;
          if (cVar10 != '\0') {
            iVar31 = ((char)plVar37[0x11] != '\0') + 1;
          }
          local_158 = CONCAT44((int)plVar32[2],(undefined4)local_158);
          local_158 = CONCAT71(local_158._1_7_,(char)iVar31);
          local_140 = local_1b0[2];
          local_150 = (undefined1 (*) [16])0x0;
          local_148 = 0;
          local_138 = (longlong *)0x0;
          local_130 = 0;
          local_128 = (longlong *)0x0;
          local_120 = 0;
          local_11e = 0;
          iVar21 = *(int *)(local_140 + 8);
          iVar40 = iVar41;
          iVar36 = iVar41;
          if (0 < iVar21) {
            FUN_140848c80(&local_150,iVar21);
            iVar40 = (int)(local_130 >> 0x20);
            iVar36 = (int)((ulonglong)local_148 >> 0x20);
            iVar41 = (int)local_148;
          }
          local_148 = CONCAT44(local_148._4_4_,iVar41 + iVar21);
          if (iVar36 < iVar41 + iVar21) {
            TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_150);
            iVar40 = (int)(local_130 >> 0x20);
          }
          if (local_1b8 != &local_138) {
            local_128 = local_1b8[2];
            local_120 = 0;
            if ((local_128 != (longlong *)0x0) &&
               (lVar43 = (longlong)(int)local_128[1], local_120 = 0, 0 < lVar43)) {
              psVar28 = (short *)*local_128;
              uVar16 = 0;
              do {
                local_120 = uVar16 + 1;
                if (*psVar28 == -1) {
                  local_120 = uVar16;
                }
                lVar43 = lVar43 + -1;
                psVar28 = psVar28 + 1;
                uVar16 = local_120;
              } while (lVar43 != 0);
            }
            iVar41 = 0;
            if ((iVar40 < 0) &&
               (local_130 = local_130 & 0xffffffff00000000, iVar41 = 0, iVar40 != 0)) {
              FUN_140957580(&local_138);
              iVar40 = (int)(local_130 >> 0x20);
              iVar41 = (int)local_130;
            }
            uVar34 = (ulonglong)local_120;
            local_130 = CONCAT44(local_130._4_4_,iVar41 + (uint)local_120);
            if (iVar40 < (int)(iVar41 + (uint)local_120)) {
              FUN_140848b80(&local_138);
            }
            _guard_xfg_dispatch_icall_nop(local_138 + iVar41,0,uVar34 << 3);
            local_11e = 1;
          }
          uVar33 = uRam0000000146aeef5c;
          uVar23 = uRam0000000146aeef58;
          uVar22 = uRam0000000146aeef54;
          uVar35 = _DAT_146aeef50;
          if ((*(longlong *)(local_1c8 + 0xb0) == 0) ||
             (plVar37[7] != *(longlong *)(local_1c8 + 0xb0))) {
            if (iVar31 != 0) {
              if (local_150 != local_150 + (longlong)(int)local_148 * 3) {
                in_XMM4._0_12_ = ZEXT812(0);
                in_XMM4._12_4_ = 0.0;
                pauVar18 = local_150 + 2;
                do {
                  uVar12 = uRam0000000146aeef4c;
                  *(undefined4 *)pauVar18[-2] = 0;
                  *(undefined4 *)(pauVar18[-2] + 4) = 0;
                  *(undefined4 *)(pauVar18[-2] + 8) = 0;
                  *(uint *)(pauVar18[-2] + 0xc) = uVar12;
                  pauVar18[-1] = in_XMM4;
                  pauVar1 = pauVar18 + 1;
                  uVar12 = uRam0000000146aeef44 & uVar22;
                  uVar46 = uRam0000000146aeef48 & uVar23;
                  uVar47 = uRam0000000146aeef4c & uVar33;
                  *(uint *)*pauVar18 = _DAT_146aeef40 & uVar35;
                  *(uint *)(*pauVar18 + 4) = uVar12;
                  *(uint *)(*pauVar18 + 8) = uVar46;
                  *(uint *)(*pauVar18 + 0xc) = uVar47;
                  auVar54._4_4_ = DAT_1468b5d94;
                  auVar54._0_4_ = DAT_1468b5d90;
                  auVar54._8_4_ = DAT_1468b5d98;
                  auVar54._12_4_ = 0;
                  *pauVar18 = auVar54;
                  pauVar18 = pauVar18 + 3;
                } while (pauVar1 != local_150 + (longlong)(int)local_148 * 3);
              }
              goto LAB_142280fcb;
            }
            FUN_1408488d0(&local_150,local_140);
          }
          else {
            FUN_1422a87c0(plVar37,plVar32 + 3,&local_150,&local_138);
LAB_142280fcb:
            if (iVar31 != 0) {
              iVar31 = (int)pcVar30;
              uStack_1e0 = iVar31 + 1;
              if (iStack_1dc < (int)uStack_1e0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_1e8,pcVar30);
              }
              pcVar44 = local_1e8;
              pcVar30 = (char *)(ulonglong)uStack_1e0;
              FSlotEvaluationPose::FSlotEvaluationPose
                        (local_1e8 + (longlong)iVar31 * 0x40,&local_158);
              plVar13 = local_1c0;
              lVar43 = local_1d8;
              goto LAB_142281054;
            }
          }
          iVar31 = (int)pcVar29;
          local_1d0 = iVar31 + 1;
          if (local_1cc < (int)local_1d0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_1d8,pcVar29);
          }
          lVar43 = local_1d8;
          pcVar29 = (char *)(ulonglong)local_1d0;
          FSlotEvaluationPose::FSlotEvaluationPose((longlong)iVar31 * 0x40 + local_1d8,&local_158);
          plVar13 = local_1c0;
          pcVar44 = local_1e8;
        }
LAB_142281054:
        uVar35 = (uint)pcVar30;
        plVar32 = plVar32 + 5;
      } while (plVar32 != local_188);
    }
    lVar24 = local_1a0;
    plVar32 = local_1b0;
    fVar65 = 0.0;
    if ((0.0 <= param_5) && (fVar65 = param_5, 1.0 <= param_5)) {
      fVar65 = 1.0;
    }
    uVar34 = 0;
    uVar23 = 0;
    uVar33 = (uint)pcVar29;
    uVar22 = 0;
    if (1.00001 < param_9) {
      iVar31 = 2;
      if (0 < (int)uVar35) {
        if (7 < uVar35) {
          uVar12 = uVar35 & 0x80000007;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
          }
          auVar7._4_4_ = param_9;
          auVar7._0_4_ = param_9;
          auVar7._8_4_ = param_9;
          auVar7._12_4_ = param_9;
          auVar54 = rcpps(in_XMM4,auVar7);
          fVar53 = auVar54._0_4_;
          fVar55 = auVar54._4_4_;
          fVar57 = auVar54._8_4_;
          fVar59 = auVar54._12_4_;
          in_XMM4._0_4_ = (fVar53 + fVar53) - fVar53 * fVar53 * param_9;
          in_XMM4._4_4_ = (fVar55 + fVar55) - fVar55 * fVar55 * param_9;
          in_XMM4._8_4_ = (fVar57 + fVar57) - fVar57 * fVar57 * param_9;
          in_XMM4._12_4_ = (fVar59 + fVar59) - fVar59 * fVar59 * param_9;
          pfVar19 = (float *)(pcVar44 + 0x84);
          uVar27 = uVar34;
          iVar41 = iVar31;
          do {
            fVar53 = pfVar19[0x10];
            fVar55 = *pfVar19;
            fVar57 = pfVar19[-0x10];
            iVar21 = (int)uVar27;
            uVar22 = iVar21 + 8;
            uVar27 = (ulonglong)uVar22;
            *(float *)(pcVar44 + (longlong)iVar21 * 0x40 + 4) = pfVar19[-0x20] * in_XMM4._0_4_;
            *(float *)(pcVar44 + (longlong)iVar41 * 0x40 + -0x3c) = fVar57 * in_XMM4._4_4_;
            fVar57 = pfVar19[0x30];
            *(float *)(pcVar44 + (longlong)iVar41 * 0x40 + 4) = fVar55 * in_XMM4._8_4_;
            fVar55 = pfVar19[0x40];
            *(float *)(pcVar44 + (longlong)iVar41 * 0x40 + 0x44) = fVar53 * in_XMM4._12_4_;
            fVar53 = pfVar19[0x50];
            *(float *)(pcVar44 + (longlong)iVar41 * 0x40 + 0x84) = pfVar19[0x20] * in_XMM4._0_4_;
            *(float *)(pcVar44 + (longlong)iVar41 * 0x40 + 0xc4) = fVar57 * in_XMM4._4_4_;
            *(float *)(pcVar44 + (longlong)iVar41 * 0x40 + 0x104) = fVar55 * in_XMM4._8_4_;
            lVar15 = (longlong)iVar41;
            iVar41 = iVar41 + 8;
            *(float *)(pcVar44 + lVar15 * 0x40 + 0x144) = fVar53 * in_XMM4._12_4_;
            pfVar19 = pfVar19 + 0x80;
          } while ((int)uVar22 < (int)(uVar35 - uVar12));
        }
        if ((int)uVar22 < (int)uVar35) {
          uVar27 = (ulonglong)(uVar35 - uVar22);
          pfVar19 = (float *)(pcVar44 + (longlong)(int)uVar22 * 0x40 + 4);
          do {
            *pfVar19 = (1.0 / param_9) * *pfVar19;
            uVar27 = uVar27 - 1;
            pfVar19 = pfVar19 + 0x10;
          } while (uVar27 != 0);
        }
      }
      if (0 < (int)uVar33) {
        if (7 < uVar33) {
          uVar22 = uVar33 & 0x80000007;
          if ((int)uVar22 < 0) {
            uVar22 = (uVar22 - 1 | 0xfffffff8) + 1;
          }
          auVar8._4_4_ = param_9;
          auVar8._0_4_ = param_9;
          auVar8._8_4_ = param_9;
          auVar8._12_4_ = param_9;
          auVar54 = rcpps(in_XMM4,auVar8);
          fVar53 = auVar54._0_4_;
          fVar55 = auVar54._4_4_;
          fVar57 = auVar54._8_4_;
          fVar59 = auVar54._12_4_;
          fVar53 = (fVar53 + fVar53) - fVar53 * fVar53 * param_9;
          fVar55 = (fVar55 + fVar55) - fVar55 * fVar55 * param_9;
          fVar57 = (fVar57 + fVar57) - fVar57 * fVar57 * param_9;
          fVar59 = (fVar59 + fVar59) - fVar59 * fVar59 * param_9;
          pfVar19 = (float *)(lVar43 + 0x84);
          uVar27 = uVar34;
          do {
            fVar2 = pfVar19[0x10];
            fVar3 = *pfVar19;
            fVar4 = pfVar19[-0x10];
            iVar41 = (int)uVar27;
            uVar23 = iVar41 + 8;
            uVar27 = (ulonglong)uVar23;
            *(float *)((longlong)iVar41 * 0x40 + 4 + lVar43) = pfVar19[-0x20] * fVar53;
            *(float *)((longlong)iVar31 * 0x40 + -0x3c + lVar43) = fVar4 * fVar55;
            fVar4 = pfVar19[0x30];
            *(float *)((longlong)iVar31 * 0x40 + 4 + lVar43) = fVar3 * fVar57;
            fVar3 = pfVar19[0x40];
            *(float *)((longlong)iVar31 * 0x40 + 0x44 + lVar43) = fVar2 * fVar59;
            fVar2 = pfVar19[0x50];
            *(float *)((longlong)iVar31 * 0x40 + 0x84 + lVar43) = pfVar19[0x20] * fVar53;
            *(float *)((longlong)iVar31 * 0x40 + 0xc4 + lVar43) = fVar4 * fVar55;
            *(float *)((longlong)iVar31 * 0x40 + 0x104 + lVar43) = fVar3 * fVar57;
            lVar15 = (longlong)iVar31;
            iVar31 = iVar31 + 8;
            *(float *)(lVar15 * 0x40 + 0x144 + lVar43) = fVar2 * fVar59;
            pfVar19 = pfVar19 + 0x80;
          } while ((int)uVar23 < (int)(uVar33 - uVar22));
        }
        if ((int)uVar23 < (int)uVar33) {
          uVar27 = (ulonglong)(uVar33 - uVar23);
          pfVar19 = (float *)(lVar43 + 4 + (longlong)(int)uVar23 * 0x40);
          do {
            *pfVar19 = (1.0 / param_9) * *pfVar19;
            uVar27 = uVar27 - 1;
            pfVar19 = pfVar19 + 0x10;
          } while (uVar27 != 0);
        }
      }
    }
    if (uVar33 == 0) {
      TArray<FTransform,TMemStackAllocator<0>_>::operator=(local_1b0,local_1a0);
      pplVar45 = local_1b8;
      plVar32[2] = *(longlong *)(lVar24 + 0x10);
      FBlendedCurve::operator=(local_1b8,local_198);
    }
    else {
      local_d8 = (char *)0x0;
      local_cc = 0;
      uVar22 = (1e-05 < fVar65) + uVar33;
      local_d0 = uVar22;
      if (0 < (int)uVar22) {
        TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_118,0);
      }
      local_138 = (longlong *)0x0;
      local_130 = (ulonglong)uVar22;
      if (0 < (int)uVar22) {
        TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(&local_158,0);
      }
      local_88 = (undefined1 *)0x0;
      local_7c = 0;
      local_80 = uVar22;
      if (0 < (int)uVar22) {
        TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_c8,0);
      }
      plVar32 = local_1b0;
      pplVar45 = local_1b8;
      if (0 < (int)uVar33) {
        lVar24 = lVar43 + 0x20;
        lVar15 = lVar43 - lVar24;
        uVar27 = uVar34;
        puVar42 = (undefined4 *)(lVar43 + 4);
        do {
          pcVar30 = local_118;
          if (local_d8 != (char *)0x0) {
            pcVar30 = local_d8;
          }
          *(longlong *)(pcVar30 + uVar34) = lVar24 + 8 + lVar15;
          puVar20 = local_c8;
          if (local_88 != (undefined1 *)0x0) {
            puVar20 = local_88;
          }
          *(longlong *)(puVar20 + uVar34) = lVar24;
          plVar13 = &local_158;
          if (local_138 != (longlong *)0x0) {
            plVar13 = local_138;
          }
          lVar24 = lVar24 + 0x40;
          *(undefined4 *)((longlong)plVar13 + uVar27) = *puVar42;
          pcVar29 = pcVar29 + -1;
          uVar34 = uVar34 + 8;
          uVar27 = uVar27 + 4;
          puVar42 = puVar42 + 0x10;
        } while (pcVar29 != (char *)0x0);
      }
      if (1e-05 < fVar65) {
        lVar43 = (longlong)((int)local_130 + -1);
        pcVar30 = local_118;
        if (local_d8 != (char *)0x0) {
          pcVar30 = local_d8;
        }
        *(longlong *)(pcVar30 + lVar43 * 8) = local_1a0;
        puVar20 = local_c8;
        if (local_88 != (undefined1 *)0x0) {
          puVar20 = local_88;
        }
        *(undefined1 **)(puVar20 + lVar43 * 8) = local_198;
        plVar13 = &local_158;
        if (local_138 != (longlong *)0x0) {
          plVar13 = local_138;
        }
        *(float *)((longlong)plVar13 + lVar43 * 4) = fVar65;
      }
      local_188 = &local_158;
      if (local_138 != (longlong *)0x0) {
        local_188 = local_138;
      }
      uStack_180 = CONCAT44(iStack_1dc,(int)local_130);
      local_198 = local_c8;
      if (local_88 != (undefined1 *)0x0) {
        local_198 = local_88;
      }
      uStack_190 = CONCAT44(iStack_1dc,local_80);
      local_1e8 = local_118;
      if (local_d8 != (char *)0x0) {
        local_1e8 = local_d8;
      }
      uStack_1e0 = local_d0;
      local_1f8 = local_1b8;
      FUN_14224a430(&local_1e8,&local_198,&local_188,local_1b0);
      if (local_88 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      if (local_138 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_d8 != (char *)0x0) {
        FMemory::Free();
      }
    }
    if (0 < (int)uVar35) {
      pcVar30 = pcVar44 + 0x20;
      uVar34 = (ulonglong)uVar35;
      do {
        local_1f0 = (uint)(byte)pcVar30[-0x20];
        local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,*(undefined4 *)(pcVar30 + -0x1c));
        FAnimationRuntime::AccumulateAdditivePose(plVar32,pcVar30 + -0x18,pplVar45,pcVar30);
        pcVar30 = pcVar30 + 0x40;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    fVar4 = fRam0000000146aeef6c;
    fVar3 = fRam0000000146aeef68;
    fVar2 = fRam0000000146aeef64;
    fVar59 = _DAT_146aeef60;
    fVar57 = fRam0000000146aeef3c;
    fVar55 = fRam0000000146aeef38;
    fVar53 = fRam0000000146aeef34;
    fVar65 = _DAT_146aeef30;
    pfVar19 = (float *)*plVar32;
    pfVar39 = pfVar19 + (longlong)(int)plVar32[1] * 0xc;
    for (; pfVar19 != pfVar39; pfVar19 = pfVar19 + 0xc) {
      fVar9 = *pfVar19;
      fVar56 = pfVar19[1];
      fVar58 = pfVar19[2];
      fVar60 = pfVar19[3];
      auVar48._0_4_ = fVar9 * fVar9 + fVar58 * fVar58;
      auVar48._4_4_ = fVar56 * fVar56 + fVar60 * fVar60;
      auVar48._8_4_ = fVar58 * fVar58 + fVar9 * fVar9;
      auVar48._12_4_ = fVar60 * fVar60 + fVar56 * fVar56;
      fVar61 = auVar48._4_4_ + auVar48._0_4_;
      fVar62 = auVar48._8_4_ + auVar48._4_4_;
      fVar63 = auVar48._12_4_ + auVar48._8_4_;
      fVar64 = auVar48._0_4_ + auVar48._12_4_;
      auVar6._4_4_ = fVar62;
      auVar6._0_4_ = fVar61;
      auVar6._8_4_ = fVar63;
      auVar6._12_4_ = fVar64;
      auVar54 = rsqrtps(auVar48,auVar6);
      fVar49 = auVar54._0_4_;
      fVar50 = auVar54._4_4_;
      fVar51 = auVar54._8_4_;
      fVar52 = auVar54._12_4_;
      fVar49 = (fVar65 - fVar49 * fVar49 * fVar61 * fVar65) * fVar49 + fVar49;
      fVar50 = (fVar53 - fVar50 * fVar50 * fVar62 * fVar53) * fVar50 + fVar50;
      fVar51 = (fVar55 - fVar51 * fVar51 * fVar63 * fVar55) * fVar51 + fVar51;
      fVar52 = (fVar57 - fVar52 * fVar52 * fVar64 * fVar57) * fVar52 + fVar52;
      fVar56 = (float)(((uint)(((fVar53 - fVar50 * fVar50 * fVar62 * fVar53) * fVar50 + fVar50) *
                              fVar56) ^ uRam0000000146aeef24) & -(uint)(fVar2 <= fVar62) ^
                      uRam0000000146aeef24);
      fVar58 = (float)(((uint)(((fVar55 - fVar51 * fVar51 * fVar63 * fVar55) * fVar51 + fVar51) *
                              fVar58) ^ uRam0000000146aeef28) & -(uint)(fVar3 <= fVar63) ^
                      uRam0000000146aeef28);
      fVar60 = (float)(((uint)(((fVar57 - fVar52 * fVar52 * fVar64 * fVar57) * fVar52 + fVar52) *
                              fVar60) ^ uRam0000000146aeef2c) & -(uint)(fVar4 <= fVar64) ^
                      uRam0000000146aeef2c);
      *pfVar19 = (float)(((uint)(((fVar65 - fVar49 * fVar49 * fVar61 * fVar65) * fVar49 + fVar49) *
                                fVar9) ^ _DAT_146aeef20) & -(uint)(fVar59 <= fVar61) ^
                        _DAT_146aeef20);
      pfVar19[1] = fVar56;
      pfVar19[2] = fVar58;
      pfVar19[3] = fVar60;
    }
LAB_1422816d0:
    if (local_1d8 != 0) {
      FMemory::Free(local_1d8);
    }
    if (pcVar44 != (char *)0x0) {
      FMemory::Free(pcVar44);
    }
  }
  return;
}



// FUNCTION 142281740 FUN_142281740 body=526 status=ok
// SIG undefined FUN_142281740(void)

void FUN_142281740(longlong *param_1,undefined1 *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  char local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (((char)param_1[0x2d] == '\0') && (param_3 != '\0')) {
    *(char *)(param_1 + 0x2d) = param_3;
    FUN_14227c290();
  }
  if (*(float *)(param_1 + 0x2b) == 0.0) {
    if (*(float *)(param_2 + 0x10) < *(float *)(param_1 + 0x28)) {
      FAlphaBlend::SetBlendTime(param_1 + 0x26);
      FAlphaBlend::SetDesiredValue(param_1 + 0x26,0);
    }
  }
  else {
    FAlphaBlend::SetBlendOption(param_1 + 0x26,*param_2);
    FAlphaBlend::SetCustomCurve(param_1 + 0x26,*(undefined8 *)(param_2 + 8));
    FAlphaBlend::SetBlendTime(param_1 + 0x26,*(undefined4 *)(param_2 + 0x10));
    FAlphaBlend::SetDesiredValue(param_1 + 0x26,0);
    if (*param_1 != 0) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x21);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x298))(plVar2,param_1);
        local_58 = 0;
        local_50 = 0;
        FUN_1405bae40(&local_58,param_1 + 3);
        local_38 = *param_1;
        local_30 = (char)param_1[0x2d];
        local_28 = 0;
        local_20 = 0;
        FUN_1405bae40(&local_28,&local_58);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
        if ((*(byte *)((longlong)plVar2 + 0x31) & 8) == 0) {
          TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
                    (&local_28,local_38,local_30);
          local_40 = local_30 != '\0';
          local_48 = local_38;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (plVar2 + 7,&local_48);
        }
        else {
          iVar1 = (int)plVar2[0x1c];
          *(int *)(plVar2 + 0x1c) = iVar1 + 1;
          if (*(int *)((longlong)plVar2 + 0xe4) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(plVar2 + 0x1b,iVar1);
          }
          plVar2 = (longlong *)((longlong)iVar1 * 0x20 + plVar2[0x1b]);
          *plVar2 = local_38;
          *(char *)(plVar2 + 1) = local_30;
          plVar2[2] = 0;
          *(undefined4 *)(plVar2 + 3) = 0;
          FUN_1405bae40(plVar2 + 2,&local_28);
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
      }
    }
  }
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 142281950 FUN_142281950 body=653 status=ok
// SIG undefined FUN_142281950(void)

void FUN_142281950(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [96];
  
  iVar3 = *(int *)(param_1 + 0x80) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x78);
      puVar4 = (undefined1 *)FAlphaBlend::FAlphaBlend(local_78,param_2);
      plVar2 = *(longlong **)(lVar1 + lVar6 * 8);
      if ((char)plVar2[0x2d] == '\0') {
        *(undefined1 *)(plVar2 + 0x2d) = 1;
        FUN_14227c290(plVar2);
      }
      if (*(float *)(plVar2 + 0x2b) == 0.0) {
        if (*(float *)(puVar4 + 0x10) < *(float *)(plVar2 + 0x28)) {
          FAlphaBlend::SetBlendTime(plVar2 + 0x26);
          FAlphaBlend::SetDesiredValue(plVar2 + 0x26,0);
        }
      }
      else {
        FAlphaBlend::SetBlendOption(plVar2 + 0x26,*puVar4);
        FAlphaBlend::SetCustomCurve(plVar2 + 0x26,*(undefined8 *)(puVar4 + 8));
        FAlphaBlend::SetBlendTime(plVar2 + 0x26,*(undefined4 *)(puVar4 + 0x10));
        FAlphaBlend::SetDesiredValue(plVar2 + 0x26,0);
        if ((*plVar2 != 0) &&
           (plVar5 = (longlong *)FWeakObjectPtr::Get(plVar2 + 0x21), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x298))(plVar5,plVar2);
          local_b8 = 0;
          local_b0 = 0;
          FUN_1405bae40(&local_b8,plVar2 + 3);
          local_98 = *plVar2;
          local_90 = (char)plVar2[0x2d];
          local_88 = 0;
          local_80 = 0;
          FUN_1405bae40(&local_88,&local_b8);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
          if ((*(byte *)((longlong)plVar5 + 0x31) & 8) == 0) {
            TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
                      (&local_88,local_98,local_90);
            local_a0 = local_90 != '\0';
            local_a8 = local_98;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (plVar5 + 7,&local_a8);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
          }
          else {
            iVar3 = (int)plVar5[0x1c];
            *(int *)(plVar5 + 0x1c) = iVar3 + 1;
            if (*(int *)((longlong)plVar5 + 0xe4) < iVar3 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar5 + 0x1b,iVar3);
            }
            plVar5 = (longlong *)((longlong)iVar3 * 0x20 + plVar5[0x1b]);
            *plVar5 = local_98;
            *(char *)(plVar5 + 1) = local_90;
            plVar5[2] = 0;
            *(undefined4 *)(plVar5 + 3) = 0;
            FUN_1405bae40(plVar5 + 2,&local_88);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
          }
        }
      }
      if (*(float *)(plVar2 + 0x28) <= 0.0) {
        *(undefined1 *)(plVar2 + 5) = 0;
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar3 = *(int *)(param_1 + 1000) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      FUN_1422b4b10(*(undefined8 *)(*(longlong *)(param_1 + 0x3e0) + lVar6 * 8),param_2);
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 142281be0 FUN_142281be0 body=190 status=ok
// SIG undefined FUN_142281be0(void)

void FUN_142281be0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  iVar3 = *(int *)(param_1 + 0x80) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) {
        if ((*(longlong *)(lVar2 + 0x38) == 0) || (*(int *)(lVar2 + 0x180) < 1)) {
          local_res8 = DAT_146aef318;
        }
        else {
          FUN_1422ad450(*(longlong *)(lVar2 + 0x38),&local_res8,*(undefined8 *)(lVar2 + 0x178));
        }
        if (local_res8 == param_2) {
          FUN_142281740(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8),param_3,1);
        }
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  FUN_142281ca0(param_1,param_2,*(undefined4 *)(param_3 + 0x10));
  return;
}



// FUNCTION 142281ca0 FUN_142281ca0 body=160 status=ok
// SIG undefined FUN_142281ca0(void)

void FUN_142281ca0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x3e0);
  uVar5 = (longlong)*(int *)(param_1 + 1000) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 1000) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
         (plVar2 = (longlong *)FUN_1422ab500(lVar1,local_res8), *plVar2 == param_2)) {
        FUN_1422b4b10(lVar1,param_3);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 142281d40 FUN_142281d40 body=402 status=ok
// SIG undefined FUN_142281d40(void)

void FUN_142281d40(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_88 [96];
  
  uVar9 = 0;
  if (param_3 == 0) {
    uVar10 = uVar9;
    if (0 < *(int *)(param_1 + 0x80)) {
      do {
        plVar1 = *(longlong **)(uVar10 + *(longlong *)(param_1 + 0x78));
        if (plVar1 != (longlong *)0x0) {
          if ((*plVar1 == 0) || (*(float *)(plVar1 + 0x2b) == 0.0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            uVar7 = FAlphaBlend::FAlphaBlend(local_88,*plVar1 + 0xf8,param_2);
            FUN_142281740(plVar1,uVar7,1);
          }
        }
        uVar11 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar11;
        uVar10 = uVar10 + 8;
      } while ((int)uVar11 < *(int *)(param_1 + 0x80));
    }
  }
  else {
    uVar10 = uVar9;
    uVar12 = uVar9;
    if (0 < *(int *)(param_1 + 0x80)) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + uVar12);
        if (((((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) &&
             (*(float *)(plVar1 + 0x2b) != 0.0)) &&
            (((char)plVar1[5] != '\0' &&
             (lVar3 = *(longlong *)(lVar2 + 0x20), lVar5 = GetTransientPackage(), lVar3 == lVar5))))
           && (0 < *(int *)(lVar2 + 0x180))) {
          plVar6 = *(longlong **)(lVar2 + 0x178);
          uVar8 = uVar9;
          do {
            if ((plVar6 != (longlong *)0x0) && (*plVar6 == param_3)) {
              uVar7 = FAlphaBlend::FAlphaBlend(local_88,param_2);
              FUN_142281740(plVar1,uVar7,1);
              break;
            }
            uVar8 = uVar8 + 1;
            plVar6 = plVar6 + 3;
          } while ((longlong)uVar8 < (longlong)*(int *)(lVar2 + 0x180));
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
        uVar12 = uVar12 + 8;
      } while ((int)uVar11 < *(int *)(param_1 + 0x80));
    }
  }
  return;
}



// FUNCTION 142281ee0 FUN_142281ee0 body=673 status=ok
// SIG undefined FUN_142281ee0(void)

void FUN_142281ee0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x21);
    lVar6 = 0;
    if (lVar4 != 0) {
      iVar7 = (int)param_1[0x24] + -1;
      lVar11 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar12 = lVar11 * 0xa8;
        do {
          lVar1 = param_1[0x23];
          lVar5 = FWeakObjectPtr::Get(param_1 + 0x21);
          local_48 = *(longlong *)(lVar5 + 0x20);
          local_40 = *param_1;
          local_30 = (undefined4)param_1[0x22];
          plVar8 = *(longlong **)(lVar1 + lVar12 + 0x50);
          local_38 = lVar1 + lVar12;
          (**(code **)(*plVar8 + 0x2b0))(plVar8,&local_48);
          lVar12 = lVar12 + -0xa8;
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
      }
      puVar2 = (undefined8 *)param_1[0x23];
      for (iVar7 = (int)param_1[0x24]; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2[0xc] = &PTR_FUN_14410b0e0;
        *puVar2 = &PTR_FUN_14410b0e0;
        puVar2 = puVar2 + 0x15;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      if (*(int *)((longlong)param_1 + 0x124) != 0) {
        TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1 + 0x23,0);
      }
      local_58 = 0;
      local_50 = 0;
      FUN_1405bae40(&local_58,param_1 + 1);
      local_40 = CONCAT71(local_40._1_7_,(char)param_1[0x2d]);
      local_38 = 0;
      local_30 = 0;
      local_48 = lVar10;
      FUN_1405bae40(&local_38,&local_58);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
      if ((*(byte *)(lVar4 + 0x31) & 8) == 0) {
        FUN_142283710(lVar4,&local_48);
      }
      else {
        iVar7 = *(int *)(lVar4 + 0xf0);
        *(int *)(lVar4 + 0xf0) = iVar7 + 1;
        if (*(int *)(lVar4 + 0xf4) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(lVar4 + 0xe8,iVar7);
        }
        plVar8 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar4 + 0xe8));
        *plVar8 = local_48;
        *(undefined1 *)(plVar8 + 1) = (undefined1)local_40;
        plVar8[2] = 0;
        *(undefined4 *)(plVar8 + 3) = 0;
        FUN_1405bae40(plVar8 + 2,&local_38);
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
      FUN_14225b550(lVar4,param_1);
    }
    FAlphaBlend::SetCustomCurve(param_1 + 0x26,0);
    FAlphaBlend::SetBlendOption(param_1 + 0x26,0);
    iVar7 = DAT_146aef098;
    if ((*(uint *)(*param_1 + 8) >> 0x13 & 1) == 0) {
      lVar10 = (longlong)DAT_146aef098;
      DAT_146aef098 = DAT_146aef098 + 1;
      if (DAT_146aef09c < DAT_146aef098) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146aef090,iVar7);
      }
      *(longlong *)(DAT_146aef090 + lVar10 * 8) = *param_1;
      iVar7 = *(int *)(*param_1 + 0xc);
      if (iVar7 < (int)DAT_1469e91c4) {
        uVar9 = iVar7 >> 0x1f & 0xffff;
        uVar3 = iVar7 + uVar9;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 142282190 FUN_142282190 body=509 status=ok
// SIG undefined FUN_142282190(void)

void FUN_142282190(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 local_res20 [2];
  undefined4 local_68 [2];
  undefined1 local_60 [56];
  
  bVar6 = true;
  if (*(char *)(param_4 + 0xa1) != '\0') {
    fVar2 = *(float *)(param_2 + 0x30);
    fVar3 = *(float *)(param_2 + 0x28);
    fVar4 = *(float *)(param_2 + 0x2c);
    *(float *)(param_4 + 0x94) = fVar2;
    *(float *)(param_4 + 0x98) = fVar4 / *(float *)(param_1 + 0x12);
    if ((((fVar2 != 0.0) && (*(char *)(param_2 + 0x48) != '\0')) &&
        (piVar5 = *(int **)(param_2 + 0x40), piVar5 != (int *)0x0)) &&
       (*(char *)(param_4 + 0xa0) != '\0')) {
      piVar1 = piVar5 + 2;
      bVar6 = true;
      if ((*piVar5 == -2) || (*piVar1 == -2)) {
        bVar6 = false;
      }
      if (bVar6) {
        puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x308))(0,local_60,*piVar5,*piVar1,fVar4);
      }
      else {
        local_68[0] = 0xfffffffe;
        local_res20[0] = 0xfffffffe;
        (**(code **)(*param_1 + 0x300))
                  (0,fVar4,0,*(undefined8 *)(param_4 + 0x88),local_68,local_res20);
        puVar10 = (undefined4 *)
                  (**(code **)(*param_1 + 0x308))(param_1,local_60,local_68[0],local_res20[0],fVar4)
        ;
      }
      uVar7 = puVar10[1];
      uVar8 = puVar10[2];
      uVar9 = puVar10[3];
      *(undefined4 *)(param_4 + 0x58) = *puVar10;
      *(undefined4 *)(param_4 + 0x5c) = uVar7;
      *(undefined4 *)(param_4 + 0x60) = uVar8;
      *(undefined4 *)(param_4 + 100) = uVar9;
      *(undefined8 *)(param_4 + 0x68) = *(undefined8 *)(puVar10 + 4);
      (**(code **)(*param_1 + 0x300))(param_1,fVar3,0,*(undefined8 *)(param_4 + 0x88),piVar5,piVar1)
      ;
      bVar6 = false;
      puVar10 = (undefined4 *)
                (**(code **)(*param_1 + 0x308))(param_1,local_60,*piVar5,*piVar1,fVar3);
      uVar7 = puVar10[1];
      uVar8 = puVar10[2];
      uVar9 = puVar10[3];
      *(undefined4 *)(param_4 + 0x70) = *puVar10;
      *(undefined4 *)(param_4 + 0x74) = uVar7;
      *(undefined4 *)(param_4 + 0x78) = uVar8;
      *(undefined4 *)(param_4 + 0x7c) = uVar9;
      *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(puVar10 + 4);
      FUN_142255ab0(param_4 + 0x48,*(undefined8 *)(param_2 + 0x38));
    }
    *(float *)(param_4 + 0x9c) = fVar3 / *(float *)(param_1 + 0x12);
    if (!bVar6) {
      return;
    }
  }
  puVar10 = *(undefined4 **)(param_2 + 0x40);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0xfffffffe;
    puVar10[2] = 0xfffffffe;
  }
  return;
}



// FUNCTION 142282390 FUN_142282390 body=1617 status=ok
// SIG undefined FUN_142282390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142282390(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_1a8 [32];
  int local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120 [3];
  char local_108 [4];
  undefined4 local_104;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  longlong local_c0 [5];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  char local_68;
  undefined2 local_67;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar6 = (longlong)*(int *)(param_1 + 0x1c8) * 0x10;
  lVar5 = (longlong)(1 - *(int *)(param_1 + 0x1c8)) << 4;
  local_188 = 0;
  local_180 = lVar6;
  local_138 = lVar5;
  if (0 < *(int *)(lVar6 + 0x120 + param_1)) {
    local_130 = 0;
    do {
      uVar11 = 0;
      plVar7 = (longlong *)(local_130 + *(longlong *)(lVar6 + 0x118 + param_1));
      if (0 < (int)plVar7[1]) {
        uVar9 = uVar11;
        if ((-1 < local_188) && (local_188 < *(int *)(lVar5 + 0x120 + param_1))) {
          uVar9 = (longlong)local_188 * 0x78 + *(longlong *)(lVar5 + 0x118 + param_1);
        }
        FUN_1422b0db0(plVar7,uVar9);
        local_80 = plVar7 + 3;
        iVar10 = (int)plVar7[4];
        local_d8 = _DAT_146aeef40 & _DAT_146aeef50;
        uStack_d4 = uRam0000000146aeef44 & uRam0000000146aeef54;
        uStack_d0 = uRam0000000146aeef48 & uRam0000000146aeef58;
        uStack_cc = uRam0000000146aeef4c & uRam0000000146aeef5c;
        local_c8 = *(undefined4 *)(param_1 + 0x290);
        local_68 = 0 < iVar10;
        local_108[0] = '\0';
        local_104 = 0;
        local_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_ec = uRam0000000146aeef4c;
        local_e8 = 0;
        uStack_e0 = 0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        local_c0[2] = 0;
        local_c0[3] = 0;
        local_c0[4] = local_c0[4] & 0xffffffff00000000;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_74 = 0;
        local_6c = 0;
        local_67 = CONCAT11((int)plVar7[1] == 1,1);
        if (uVar9 != 0) {
          lVar5 = *(longlong *)(uVar9 + 0x58);
          local_178 = 0;
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(uVar9 + 0x60);
            local_170 = 0;
            if (lVar6 != 0) {
              local_168 = 0;
              if (lVar5 == 0) {
LAB_142282560:
                local_160 = 0;
                if (lVar6 == 0) {
LAB_142282590:
                  local_c0[2] = *(longlong *)(uVar9 + 0x58);
                  local_c0[3] = *(longlong *)(uVar9 + 0x60);
                  local_c0[4] = *(ulonglong *)(uVar9 + 0x68);
                }
                else {
                  plVar4 = (longlong *)*local_80;
                  plVar1 = plVar4 + iVar10;
                  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
                    if (*plVar4 == lVar6) goto LAB_142282590;
                  }
                }
              }
              else {
                plVar4 = (longlong *)*local_80;
                plVar1 = plVar4 + iVar10;
                for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
                  if (*plVar4 == lVar5) goto LAB_142282560;
                }
              }
            }
          }
        }
        lVar5 = 0;
        local_78 = param_2;
        if (0 < (int)plVar7[1]) {
          lVar6 = 0;
          do {
            plVar1 = *(longlong **)(*plVar7 + lVar6);
            (**(code **)(*plVar1 + 0x278))(plVar1,(undefined8 *)(*plVar7 + lVar6),param_1 + 0x1d0);
            if ((*(int *)(param_1 + 0x290) == 2) && (local_108[0] != '\0')) {
              FRootMotionMovementParams::AccumulateWithBlend(param_1 + 0x360,&local_f8);
            }
            iVar10 = (int)uVar11;
            if (local_68 == '\0') {
LAB_142282671:
              *(int *)(plVar7 + 2) = iVar10;
              break;
            }
            local_158 = 0;
            if ((local_98 != 0) && (local_150 = 0, uStack_90 != 0)) {
              FUN_142255ab0(plVar7 + 6,local_c0);
              plVar7[8] = local_c0[2];
              plVar7[9] = local_c0[3];
              plVar7[0xe] = (longlong)local_80;
              plVar7[10] = local_c0[4];
              *(undefined4 *)(plVar7 + 0xb) = (undefined4)local_98;
              *(undefined4 *)((longlong)plVar7 + 0x5c) = local_98._4_4_;
              *(undefined4 *)(plVar7 + 0xc) = (undefined4)uStack_90;
              *(undefined4 *)((longlong)plVar7 + 100) = uStack_90._4_4_;
              plVar7[0xd] = CONCAT44(uStack_84,local_88);
              goto LAB_142282671;
            }
            *(int *)(plVar7 + 2) = iVar10;
            lVar5 = lVar5 + 1;
            uVar11 = (ulonglong)(iVar10 + 1U);
            lVar6 = lVar6 + 0x50;
          } while ((int)(iVar10 + 1U) < (int)plVar7[1]);
        }
        FUN_1422a8020(plVar7,uVar9);
        if (local_68 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))();
          local_128 = *(undefined8 *)
                       (*(longlong *)(*plVar7 + (longlong)(int)plVar7[2] * 0x50) + 0x18);
          FName::ToString(&local_128,local_120);
          local_148 = 0;
          if (local_c0[2] == 0) {
LAB_1422826f9:
            bVar2 = true;
          }
          else {
            plVar4 = (longlong *)plVar7[3];
            plVar1 = plVar4 + (int)plVar7[4];
            for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
              if (*plVar4 == local_c0[2]) goto LAB_1422826f9;
            }
            bVar2 = false;
          }
          local_140 = 0;
          if (local_c0[3] == 0) {
LAB_142282732:
            bVar3 = true;
          }
          else {
            plVar4 = (longlong *)plVar7[3];
            plVar1 = plVar4 + (int)plVar7[4];
            for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
              if (*plVar4 == local_c0[3]) goto LAB_142282732;
            }
            bVar3 = false;
          }
          if ((!bVar2) || (!bVar3)) {
            local_68 = '\0';
          }
          if (local_120[0] != 0) {
            FMemory::Free();
          }
        }
        iVar10 = (int)uVar11 + 1;
        if (iVar10 < (int)plVar7[1]) {
          local_67 = local_67 & 0xff00;
          lVar5 = (lVar5 + 1) * 0x50;
          do {
            local_108[0] = '\0';
            local_104 = 0;
            plVar1 = *(longlong **)(*plVar7 + lVar5);
            (**(code **)(*plVar1 + 0x278))(plVar1,(undefined8 *)(*plVar7 + lVar5),param_1 + 0x1d0);
            if ((*(int *)(param_1 + 0x290) == 2) && (local_108[0] != '\0')) {
              FRootMotionMovementParams::AccumulateWithBlend(param_1 + 0x360,&local_f8);
            }
            iVar10 = iVar10 + 1;
            lVar5 = lVar5 + 0x50;
          } while (iVar10 < (int)plVar7[1]);
        }
        lVar5 = local_138;
        lVar6 = local_180;
        if (local_c0[0] != 0) {
          FMemory::Free();
          lVar5 = local_138;
          lVar6 = local_180;
        }
      }
      local_188 = local_188 + 1;
      local_130 = local_130 + 0x78;
    } while (local_188 < *(int *)(lVar6 + 0x120 + param_1));
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (0 < *(int *)(lVar6 + 0x100 + param_1)) {
    do {
      puVar8 = (undefined8 *)(*(longlong *)(lVar6 + 0xf8 + param_1) + uVar9);
      plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x288))();
      local_108[0] = '\0';
      local_d8 = _DAT_146aeef40 & _DAT_146aeef50;
      uStack_d4 = uRam0000000146aeef44 & uRam0000000146aeef54;
      uStack_d0 = uRam0000000146aeef48 & uRam0000000146aeef58;
      uStack_cc = uRam0000000146aeef4c & uRam0000000146aeef5c;
      local_80 = &DAT_146aef328;
      if (plVar7 != (longlong *)0x0) {
        local_80 = plVar7;
      }
      local_104 = 0;
      local_c8 = *(undefined4 *)(param_1 + 0x290);
      local_e8 = 0;
      uStack_e0 = 0;
      local_c0[0] = 0;
      local_c0[1] = 0;
      local_c0[2] = 0;
      local_c0[3] = 0;
      local_c0[4] = local_c0[4] & 0xffffffff00000000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_74 = 0;
      local_6c = 0;
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = uRam0000000146aeef4c;
      local_67 = 0x101;
      local_68 = 0 < (int)local_80[1];
      local_78 = param_2;
      (**(code **)(*(longlong *)*puVar8 + 0x278))
                ((longlong *)*puVar8,puVar8,param_1 + 0x1d0,local_108);
      if (((*(byte *)((longlong)puVar8 + 0x1d) & 4) != 0) &&
         (iVar10 = TMeshAttributeArraySet<int>::GetNumIndices(puVar8), iVar10 == 1)) {
        iVar10 = *(int *)(param_1 + 0x658);
        *(int *)(param_1 + 0x658) = iVar10 + 1;
        if (*(int *)(param_1 + 0x65c) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x650,iVar10);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x650) + (longlong)iVar10 * 8) = *puVar8;
        lVar6 = local_180;
      }
      if ((*(int *)(param_1 + 0x290) == 2) && (local_108[0] != '\0')) {
        FRootMotionMovementParams::AccumulateWithBlend
                  (param_1 + 0x360,&local_f8,
                   *(float *)(puVar8 + 3) * *(float *)((longlong)puVar8 + 0x14));
      }
      if (local_c0[0] != 0) {
        FMemory::Free();
      }
      uVar12 = (int)uVar11 + 1;
      uVar9 = uVar9 + 0x50;
      uVar11 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(lVar6 + 0x100 + param_1));
  }
  return;
}



// FUNCTION 1422829f0 ToQuat body=190 status=ok
// SIG undefined ToQuat(void)

void FQuatFixed32NoW::ToQuat(uint *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *param_1;
  fVar5 = (float)(int)((uVar1 >> 0x15) - 0x3ff);
  fVar3 = (float)(int)((uVar1 & 0x3ff) - 0x1ff);
  fVar4 = (float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff);
  *param_2 = fVar5 * 0.0009775171;
  param_2[1] = fVar4 * 0.0009775171;
  param_2[2] = fVar3 * 0.0019569471;
  fVar2 = 0.0;
  fVar3 = ((1.0 - fVar5 * fVar5 * 9.555397e-07) - fVar4 * fVar4 * 9.555397e-07) -
          fVar3 * fVar3 * 3.829642e-06;
  if (0.0 < fVar3) {
    fVar2 = SQRT(fVar3);
  }
  param_2[3] = fVar2;
  return;
}



// FUNCTION 142282ab0 ToQuat body=193 status=ok
// SIG undefined ToQuat(void)

void FQuatFixed48NoW::ToQuat(ushort *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)(int)(*param_1 - 0x7fff);
  fVar2 = (float)(int)(param_1[1] - 0x7fff);
  fVar3 = (float)(int)(param_1[2] - 0x7fff);
  fVar4 = ((1.0 - fVar1 * fVar1 * 9.313794e-10) - fVar2 * fVar2 * 9.313794e-10) -
          fVar3 * fVar3 * 9.313794e-10;
  *param_2 = fVar1 * 3.051851e-05;
  param_2[1] = fVar2 * 3.051851e-05;
  param_2[2] = fVar3 * 3.051851e-05;
  if (0.0 < fVar4) {
    param_2[3] = SQRT(fVar4);
    return;
  }
  param_2[3] = 0.0;
  return;
}



// FUNCTION 142282b80 ToQuat body=332 status=ok
// SIG undefined ToQuat(void)

void FQuatFloat32NoW::ToQuat(uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 10;
  if (uVar1 >> 0x15 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)(((uVar1 >> 0x15 & 0xfffffc00) << 5 | uVar1 >> 0x15 & 0x7f) << 0x10 |
                   (uVar1 >> 0x1c & 7) * 0x800000 + 0x3d800000);
  }
  if ((uVar2 & 0x7ff) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)(((uVar2 & 0x400) << 5 | uVar2 & 0x7f) << 0x10 |
                   ((uVar2 & 0x7ff) >> 7 & 7) * 0x800000 + 0x3d800000);
  }
  if ((uVar1 & 0x3ff) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)(((uVar1 & 0x200) << 5 | uVar1 & 0x3f) << 0x11 |
                   ((uVar1 & 0x3ff) >> 6 & 7) * 0x800000 + 0x3d800000);
  }
  *param_2 = fVar5;
  param_2[1] = fVar4;
  param_2[2] = fVar3;
  fVar5 = ((1.0 - fVar5 * fVar5) - fVar4 * fVar4) - fVar3 * fVar3;
  if (0.0 < fVar5) {
    param_2[3] = SQRT(fVar5);
    return;
  }
  param_2[3] = 0.0;
  return;
}



// FUNCTION 142282cd0 ToQuat body=200 status=ok
// SIG undefined ToQuat(void)

void FQuatIntervalFixed32NoW::ToQuat(uint *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *param_1;
  fVar4 = (float)(int)((uVar1 >> 0x15) - 0x3ff) * 0.0009775171 * *param_4 + *param_3;
  fVar3 = (float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) * 0.0009775171 * param_4[1] + param_3[1];
  fVar2 = (float)(int)((uVar1 & 0x3ff) - 0x1ff) * 0.0019569471 * param_4[2] + param_3[2];
  *param_2 = fVar4;
  param_2[1] = fVar3;
  param_2[2] = fVar2;
  fVar3 = ((1.0 - fVar4 * fVar4) - fVar3 * fVar3) - fVar2 * fVar2;
  fVar2 = 0.0;
  if (0.0 < fVar3) {
    fVar2 = SQRT(fVar3);
  }
  param_2[3] = fVar2;
  return;
}



// FUNCTION 142282da0 FUN_142282da0 body=2410 status=ok
// SIG undefined FUN_142282da0(void)

void FUN_142282da0(longlong param_1,float param_2)

{
  undefined8 **ppuVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  int local_res10;
  uint local_res18;
  undefined8 *local_res20;
  undefined8 *local_f8;
  uint local_f0;
  int local_ec;
  longlong *local_e8;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  ulonglong local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = 0;
  local_res20 = (undefined8 *)0x0;
  local_f8 = (undefined8 *)0x0;
  local_res10 = 0;
  local_ec = 0;
  local_e8 = (longlong *)0x0;
  local_res18 = 0;
  local_dc = 0;
  uVar27 = uVar17;
  uVar23 = uVar17;
  uVar26 = uVar17;
  uVar28 = uVar17;
  if (0 < *(int *)(param_1 + 0x110)) {
    do {
      if ((*(longlong *)(uVar17 + 8 + *(longlong *)(param_1 + 0x108)) != 0) &&
         (lVar8 = *(longlong *)(uVar17 + *(longlong *)(param_1 + 0x108)), lVar8 != 0)) {
        if (*(longlong *)(lVar8 + 0x50) == 0) {
          FUN_142283b40(param_1,lVar8);
        }
        else {
          plVar9 = (longlong *)(param_1 + 0x1c8);
          lVar15 = *plVar9;
          for (lVar12 = lVar15; lVar12 != (longlong)*(int *)(param_1 + 0x1d0) * 0xa8 + lVar15;
              lVar12 = lVar12 + 0xa8) {
            lVar22 = *(longlong *)(lVar12 + 0x48);
            if (((lVar22 == 0) || (lVar22 != *(longlong *)(lVar8 + 0x48))) &&
               ((lVar19 = *(longlong *)(lVar12 + 0x50), lVar19 == 0 ||
                (lVar19 != *(longlong *)(lVar8 + 0x50))))) {
              if ((lVar22 != 0) || (bVar6 = false, lVar19 != 0)) {
                bVar6 = true;
              }
              if ((!bVar6) && (*(longlong *)(lVar12 + 0x40) == *(longlong *)(lVar8 + 0x40)))
              goto LAB_142282e97;
              bVar6 = false;
            }
            else {
LAB_142282e97:
              bVar6 = true;
            }
            if (bVar6) {
              lVar12 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar12 - lVar15),8) +
                       (lVar12 - lVar15);
              iVar11 = (int)(lVar12 >> 7) - (int)(lVar12 >> 0x3f);
              if (iVar11 != -1) {
                lVar12 = (longlong)iVar11 * 0xa8;
                *(undefined ***)(lVar12 + 0x60 + lVar15) = &PTR_FUN_14410b0e0;
                *(undefined ***)(lVar12 + lVar15) = &PTR_FUN_14410b0e0;
                iVar7 = *(int *)(param_1 + 0x1d0);
                iVar11 = (iVar7 - iVar11) + -1;
                if (0 < iVar11) {
                  iVar11 = 1;
                }
                if (iVar11 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar12 + *plVar9),
                             (void *)((longlong)(iVar7 - iVar11) * 0xa8 + *plVar9),
                             (longlong)iVar11 * 0xa8);
                  iVar7 = *(int *)(param_1 + 0x1d0);
                }
                *(int *)(param_1 + 0x1d0) = iVar7 + -1;
                FUN_1416c54a0(plVar9);
                goto LAB_142282ee3;
              }
              break;
            }
          }
          local_e0 = (int)uVar27 + 1;
          if ((int)uVar28 < (int)local_e0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,uVar27);
            uVar28 = (ulonglong)local_dc;
          }
          local_e8[(int)uVar27] = lVar8;
          local_res18 = local_e0;
LAB_142282ee3:
          iVar11 = (int)uVar23;
          local_f0 = iVar11 + 1;
          if (local_ec < (int)local_f0) {
            TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(&local_f8,uVar23);
            local_res20 = local_f8;
          }
          uVar23 = (ulonglong)local_f0;
          FAnimNotifyEvent::FAnimNotifyEvent(local_res20 + (longlong)iVar11 * 0x15,lVar8);
        }
        uVar27 = (ulonglong)local_res18;
      }
      uVar25 = (int)uVar26 + 1;
      uVar17 = uVar17 + 0x10;
      uVar26 = (ulonglong)uVar25;
    } while ((int)uVar25 < *(int *)(param_1 + 0x110));
    local_res10 = (int)uVar23;
  }
  uVar27 = 0;
  if ((((0.0 < param_2) && (*(longlong *)(param_1 + 0x400) != 0)) &&
      (lVar8 = FWeakObjectPtr::Get(), lVar8 != 0)) &&
     (lVar8 = UObject::FindFunction(lVar8,*(undefined8 *)(param_1 + 0x400)), lVar8 != 0)) {
    uVar23 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
    if ((longlong)*(int *)(param_1 + 0x1c0) * 8 + *(ulonglong *)(param_1 + 0x1b8) <
        *(ulonglong *)(param_1 + 0x1b8)) {
      uVar23 = uVar27;
    }
    if (uVar23 != 0) {
      do {
        plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x3f8);
        uVar10 = FUN_14178ac60(plVar9,*(undefined8 *)(param_1 + 0x400));
        (**(code **)(*plVar9 + 0x208))(plVar9,uVar10);
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar23);
    }
  }
  plVar9 = (longlong *)(param_1 + 0x168);
  local_d8 = 0;
  uVar25 = *(uint *)(param_1 + 400);
  puVar24 = (uint *)(param_1 + 0x178);
  uStack_d4 = 1;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar25 != 0) {
    puVar21 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar21 = puVar24;
    }
    uVar2 = *puVar21;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar11 = local_d8 + 1;
      bVar6 = (int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar11;
      if (bVar6) goto LAB_14228316d;
      uVar2 = puVar21[lVar8 + 1];
    }
    uStack_d4 = uVar2 - 1 & uVar2 ^ uVar2;
    iVar11 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_c4 = (iStack_c0 - iVar11) + 0x1f;
    if ((int)uVar25 < (int)uStack_c4) {
LAB_14228316d:
      uStack_c4 = uVar25;
    }
  }
  local_c8 = 0xffffffff;
  uVar2 = *(uint *)(param_1 + 400);
  uStack_b0 = CONCAT44(uStack_d4,local_d8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_c4;
  uStack_98 = CONCAT44(uStack_bc,iStack_c0);
  uVar16 = -1 << ((byte)uVar2 & 0x1f);
  uVar20 = uVar2 & 0xffffffe0;
  uStack_a8 = CONCAT44(uVar2,uVar16);
  iStack_80 = local_d8;
  uStack_7c = uStack_d4;
  if (uVar2 != uVar25) {
    puVar21 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar21 = puVar24;
    }
    uVar16 = puVar21[(int)uVar2 >> 5] & uVar16;
    iVar11 = (int)uVar2 >> 5;
    while (uVar16 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_142283237;
      uVar16 = puVar21[(longlong)iVar11 + 1];
      uStack_a8 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar16 = uVar16 - 1 & uVar16 ^ uVar16;
    iVar11 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iVar11 = (uVar20 - iVar11) + 0x1f;
    uStack_a8 = CONCAT44(iVar11,(undefined4)uStack_a8);
    if ((int)uVar25 < iVar11) {
LAB_142283237:
      uStack_a8 = CONCAT44(uVar25,(undefined4)uStack_a8);
    }
  }
  uVar27 = uStack_a8 >> 0x20;
  puStack_d0 = puVar24;
  local_b8 = plVar9;
  local_90 = uVar27;
  local_78 = puVar24;
  local_68 = uStack_98;
  local_88 = plVar9;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  while( true ) {
    lVar8 = (longlong)(int)uStack_6c;
    if ((uStack_6c == (uint)uVar27) && (local_78 == puVar24)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((bVar6) && (local_88 == plVar9)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    lVar15 = *local_88;
    plVar18 = (longlong *)(param_1 + 0x1c8);
    lVar12 = *plVar18;
    lVar22 = *(longlong *)(lVar15 + lVar8 * 0x18);
    lVar19 = (longlong)*(int *)(param_1 + 0x1d0) * 0xa8 + lVar12;
    for (; lVar12 != lVar19; lVar12 = lVar12 + 0xa8) {
      lVar4 = *(longlong *)(lVar12 + 0x48);
      if (((lVar4 == 0) || (lVar4 != *(longlong *)(lVar22 + 0x48))) &&
         ((lVar5 = *(longlong *)(lVar12 + 0x50), lVar5 == 0 ||
          (lVar5 != *(longlong *)(lVar22 + 0x50))))) {
        if ((lVar4 != 0) || (bVar6 = false, lVar5 != 0)) {
          bVar6 = true;
        }
        if ((!bVar6) && (*(longlong *)(lVar12 + 0x40) == *(longlong *)(lVar22 + 0x40)))
        goto LAB_1422832e8;
        bVar6 = false;
      }
      else {
LAB_1422832e8:
        bVar6 = true;
      }
      if (bVar6) {
        lVar22 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + 0x20);
        if (lVar22 == 0) {
LAB_142283343:
          lVar22 = 0;
        }
        else {
          lVar19 = UTextureRenderTarget::StaticClass();
          if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_142283343;
        }
        (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x298))
                  (*(longlong **)(lVar12 + 0x50),uVar3,lVar22);
        break;
      }
    }
    lVar8 = *(longlong *)(lVar15 + lVar8 * 0x18);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar15 = 0;
      do {
        lVar12 = *plVar18;
        lVar22 = *(longlong *)(lVar12 + 0x48 + lVar15);
        if (((lVar22 == 0) || (lVar22 != *(longlong *)(lVar8 + 0x48))) &&
           ((lVar19 = *(longlong *)(lVar12 + 0x50 + lVar15), lVar19 == 0 ||
            (lVar19 != *(longlong *)(lVar8 + 0x50))))) {
          if ((lVar22 != 0) || (bVar6 = false, lVar19 != 0)) {
            bVar6 = true;
          }
          if ((!bVar6) && (*(longlong *)(lVar12 + 0x40 + lVar15) == *(longlong *)(lVar8 + 0x40)))
          goto LAB_1422833c0;
          bVar6 = false;
        }
        else {
LAB_1422833c0:
          bVar6 = true;
        }
        if (bVar6) {
          lVar22 = (longlong)iVar11 * 0xa8;
          *(undefined ***)(lVar12 + 0x60 + lVar22) = &PTR_FUN_14410b0e0;
          *(undefined ***)(lVar12 + lVar22) = &PTR_FUN_14410b0e0;
          iVar7 = *(int *)(param_1 + 0x1d0);
          iVar14 = (iVar7 - iVar11) + -1;
          if (0 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar18 + lVar22),
                       (void *)((longlong)(iVar7 - iVar14) * 0xa8 + *plVar18),
                       (longlong)iVar14 * 0xa8);
            iVar7 = *(int *)(param_1 + 0x1d0);
          }
          *(int *)(param_1 + 0x1d0) = iVar7 + -1;
          FUN_1416c54a0(plVar18);
          iVar11 = iVar11 + -1;
          lVar15 = lVar15 + -0xa8;
        }
        iVar11 = iVar11 + 1;
        lVar15 = lVar15 + 0xa8;
        uVar27 = local_90;
        puVar24 = puStack_d0;
      } while (iVar11 < *(int *)(param_1 + 0x1d0));
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    lVar8 = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x1c8);
      lVar12 = *(longlong *)(*(longlong *)(lVar8 + 0x50 + lVar15) + 0x20);
      if (lVar12 == 0) {
LAB_1422834db:
        lVar12 = 0;
      }
      else {
        lVar22 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar22 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar22 + 0x90) * 8) != lVar22 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1422834db;
      }
      plVar9 = *(longlong **)(lVar8 + 0x50 + lVar15);
      (**(code **)(*plVar9 + 0x298))(plVar9,uVar3,lVar12,0);
      iVar11 = iVar11 + 1;
      lVar8 = lVar8 + 0xa8;
    } while (iVar11 < *(int *)(param_1 + 0x1d0));
  }
  if (0 < (int)local_res18) {
    uVar27 = (ulonglong)local_res18;
    plVar9 = local_e8;
    do {
      lVar8 = *plVar9;
      lVar15 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x20);
      if (lVar15 == 0) {
LAB_142283576:
        lVar15 = 0;
      }
      else {
        lVar12 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142283576;
      }
      plVar18 = *(longlong **)(lVar8 + 0x50);
      lVar12 = *plVar18;
      uVar29 = FAnimNotifyEvent::GetDuration(lVar8);
      (**(code **)(lVar12 + 0x280))(plVar18,uVar3,lVar15,uVar29,lVar8);
      plVar9 = plVar9 + 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  ppuVar1 = (undefined8 **)(param_1 + 0x1c8);
  if (ppuVar1 != &local_f8) {
    iVar11 = *(int *)(param_1 + 0x1d0);
    puVar13 = *ppuVar1;
    if (iVar11 != 0) {
      do {
        puVar13[0xc] = &PTR_FUN_14410b0e0;
        *puVar13 = &PTR_FUN_14410b0e0;
        puVar13 = puVar13 + 0x15;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      puVar13 = *ppuVar1;
    }
    if (puVar13 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    *ppuVar1 = local_res20;
    *(int *)(param_1 + 0x1d0) = local_res10;
    local_res10 = 0;
    local_res20 = (undefined8 *)0x0;
    *(int *)(param_1 + 0x1d4) = local_ec;
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x1d0)) {
    lVar8 = 0;
    do {
      puVar13 = *ppuVar1;
      lVar15 = *(longlong *)(*(longlong *)(lVar8 + 0x50 + (longlong)puVar13) + 0x20);
      if (lVar15 == 0) {
LAB_142283677:
        lVar15 = 0;
      }
      else {
        lVar12 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142283677;
      }
      plVar9 = *(longlong **)(lVar8 + 0x50 + (longlong)puVar13);
      (**(code **)(*plVar9 + 0x290))(plVar9,uVar3,lVar15,param_2);
      iVar11 = iVar11 + 1;
      lVar8 = lVar8 + 0xa8;
    } while (iVar11 < *(int *)(param_1 + 0x1d0));
  }
  puVar13 = local_res20;
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  for (; local_res10 != 0; local_res10 = local_res10 + -1) {
    puVar13[0xc] = &PTR_FUN_14410b0e0;
    *puVar13 = &PTR_FUN_14410b0e0;
    puVar13 = puVar13 + 0x15;
  }
  if (local_res20 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142283710 FUN_142283710 body=452 status=ok
// SIG undefined FUN_142283710(void)

void FUN_142283710(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_48;
  undefined1 local_40;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if ((lVar3 != 0) && (iVar9 = *(int *)(param_1 + 0x1d0) + -1, -1 < iVar9)) {
    plVar1 = (longlong *)(param_1 + 0x1c8);
    lVar11 = (longlong)iVar9 * 0xa8;
    lVar12 = lVar11;
    do {
      lVar4 = *plVar1;
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x50 + lVar11) + 0x20);
      if (lVar5 != 0) {
        lVar8 = UMaterialInstanceConstant::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((bVar7) && (lVar5 == *param_2)) {
          plVar6 = *(longlong **)(lVar4 + 0x50 + lVar11);
          (**(code **)(*plVar6 + 0x298))(plVar6,lVar3,lVar5,(char)param_2[1] != '\0');
          lVar4 = *plVar1;
          *(undefined ***)(lVar12 + 0x60 + lVar4) = &PTR_FUN_14410b0e0;
          *(undefined ***)(lVar12 + lVar4) = &PTR_FUN_14410b0e0;
          iVar2 = *(int *)(param_1 + 0x1d0);
          iVar10 = (iVar2 - iVar9) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar12),
                       (void *)((longlong)(iVar2 - iVar10) * 0xa8 + *plVar1),(longlong)iVar10 * 0xa8
                      );
            iVar2 = *(int *)(param_1 + 0x1d0);
          }
          *(int *)(param_1 + 0x1d0) = iVar2 + -1;
          FUN_1416c54a0(plVar1);
        }
      }
      lVar12 = lVar12 + -0xa8;
      lVar11 = lVar11 + -0xa8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
            (param_2 + 2,*param_2,(char)param_2[1]);
  local_40 = (char)param_2[1] != '\0';
  local_48 = *param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x58,&local_48);
  return;
}



// FUNCTION 1422838e0 FUN_1422838e0 body=607 status=ok
// SIG undefined FUN_1422838e0(void)

void FUN_1422838e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 local_28;
  undefined1 local_20;
  
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xf7;
  if (0 < *(int *)(param_1 + 0x3c0)) {
    plVar1 = (longlong *)(param_1 + 0x3b8);
    puVar6 = (undefined8 *)*plVar1;
    uVar10 = (ulonglong)*(int *)(param_1 + 0x3c0);
    puVar11 = puVar6 + uVar10 * 3;
    if (puVar6 != puVar11) {
      do {
        uVar2 = *puVar6;
        if (((*(int *)(puVar6 + 2) != 0) && ((longlong *)puVar6[1] != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*(longlong *)puVar6[1] + 0x18))(), cVar3 != '\0')) {
          plVar5 = (longlong *)0x0;
          if (*(int *)(puVar6 + 2) != 0) {
            plVar5 = (longlong *)puVar6[1];
          }
          (**(code **)(*plVar5 + 0x40))(plVar5,uVar2);
        }
        puVar6 = puVar6 + 3;
      } while (puVar6 != puVar11);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x3c0);
    }
    iVar4 = *(int *)(param_1 + 0x3c4);
    if (iVar4 < 0) {
      if ((int)uVar10 != 0) {
        lVar7 = *plVar1 + 8;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
          lVar7 = lVar7 + 0x18;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
        iVar4 = *(int *)(param_1 + 0x3c4);
      }
      *(undefined4 *)(param_1 + 0x3c0) = 0;
      if (iVar4 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,0);
      }
    }
    else {
      if ((int)uVar10 != 0) {
        lVar7 = *plVar1 + 8;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
          lVar7 = lVar7 + 0x18;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
      *(undefined4 *)(param_1 + 0x3c0) = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    plVar1 = (longlong *)(param_1 + 0xd8);
    puVar11 = (undefined8 *)*plVar1;
    uVar10 = (ulonglong)*(int *)(param_1 + 0xe0);
    puVar6 = puVar11 + uVar10 * 4;
    if (puVar11 != puVar6) {
      do {
        TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
                  (puVar11 + 2,*puVar11,*(undefined1 *)(puVar11 + 1));
        local_20 = *(char *)(puVar11 + 1) != '\0';
        local_28 = *puVar11;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x38,&local_28);
        puVar11 = puVar11 + 4;
      } while (puVar11 != puVar6);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0xe0);
    }
    iVar4 = *(int *)(param_1 + 0xe4);
    if (iVar4 < 0) {
      if ((int)uVar10 != 0) {
        lVar7 = *plVar1 + 0x10;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
          lVar7 = lVar7 + 0x20;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
        iVar4 = *(int *)(param_1 + 0xe4);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      if (iVar4 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,0);
      }
    }
    else {
      if ((int)uVar10 != 0) {
        lVar7 = *plVar1 + 0x10;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
          lVar7 = lVar7 + 0x20;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0xf0)) {
    plVar1 = (longlong *)(param_1 + 0xe8);
    lVar7 = *plVar1;
    uVar10 = (ulonglong)*(int *)(param_1 + 0xf0);
    lVar8 = uVar10 * 0x20 + lVar7;
    if (lVar7 != lVar8) {
      do {
        FUN_142283710(param_1,lVar7);
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != lVar8);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0xf0);
    }
    iVar4 = *(int *)(param_1 + 0xf4);
    if (iVar4 < 0) {
      if ((int)uVar10 != 0) {
        lVar7 = *plVar1 + 0x10;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
          lVar7 = lVar7 + 0x20;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
        iVar4 = *(int *)(param_1 + 0xf4);
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (iVar4 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,0);
      }
    }
    else {
      if ((int)uVar10 != 0) {
        lVar7 = *plVar1 + 0x10;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
          lVar7 = lVar7 + 0x20;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  return;
}



// FUNCTION 142283b40 FUN_142283b40 body=453 status=ok
// SIG undefined FUN_142283b40(void)

void FUN_142283b40(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x50) != 0)) {
    return;
  }
  if (*(longlong *)(param_2 + 0x48) == 0) {
    local_res10 = 0;
    if (*(longlong *)(param_2 + 0x40) == 0) {
      return;
    }
    puVar3 = (undefined8 *)FName::ToString((longlong *)(param_2 + 0x40),local_28);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_38,L"AnimNotify_%s",puVar6);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    FName::FName(&local_res10,puVar6,1);
    lVar4 = UObject::FindFunction(param_1,local_res10);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x8c) == '\0') {
        (**(code **)(*param_1 + 0x208))(param_1,lVar4,0);
      }
      else if ((*(char *)(lVar4 + 0x8c) == '\x01') &&
              (lVar2 = *(longlong *)(lVar4 + 0x58), lVar2 != 0)) {
        lVar5 = UObjectProperty::GetPrivateStaticClass();
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_res18[0] = *(undefined8 *)(param_2 + 0x48);
          (**(code **)(*param_1 + 0x208))(param_1,lVar4,local_res18);
        }
      }
    }
    if (local_38 == (undefined2 *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x20);
  if (lVar4 != 0) {
    lVar2 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142283baf;
  }
  lVar4 = 0;
LAB_142283baf:
                    /* WARNING: Could not recover jumptable at 0x000142283bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x48) + 0x280))
            (*(longlong **)(param_2 + 0x48),param_1[4],lVar4);
  return;
}



// FUNCTION 142283d10 FUN_142283d10 body=112 status=ok
// SIG undefined FUN_142283d10(void)

/* WARNING: Removing unreachable block (ram,0x000142283d58) */

longlong FUN_142283d10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x118);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_1429d7ab0();
  if ((*(int *)(lVar2 + 0x90) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x90)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) ==
      lVar2 + 0x88)) {
    return lVar1;
  }
  return 0;
}



// FUNCTION 142283d80 FUN_142283d80 body=70 status=ok
// SIG undefined FUN_142283d80(void)

void FUN_142283d80(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 800))(param_2);
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x544)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x538,0);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 142283dd0 FUN_142283dd0 body=833 status=ok
// SIG undefined FUN_142283dd0(void)

void FUN_142283dd0(longlong *param_1)

{
  void *_Src;
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 *local_38;
  undefined4 *local_30;
  
  (**(code **)(*param_1 + 0x2e0))();
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    lVar2 = FUN_142a07000();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  plVar3 = (longlong *)param_1[0x72];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = (longlong)plVar3;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  FUN_142281950(param_1,0);
  if (0 < (int)param_1[0x10]) {
    iVar5 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar7 + param_1[0xf]);
      if (lVar2 != 0) {
        FUN_14225b550(param_1,lVar2);
        FUN_142255e70(lVar2,1);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar5 < (int)param_1[0x10]);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)((longlong)param_1 + 0x84) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
    }
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x11,0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xd,0);
  }
  plVar3 = (longlong *)param_1[4];
  if ((plVar3 != (longlong *)0x0) && (DAT_1468c2185 == '\0')) {
    iVar5 = 0;
    if (0 < (int)param_1[0x3a]) {
      lVar7 = 0;
      do {
        lVar2 = param_1[0x39];
        lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x50 + lVar2) + 0x20);
        if (lVar9 == 0) {
LAB_142283f7b:
          lVar9 = 0;
        }
        else {
          lVar4 = UTextureRenderTarget::StaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_142283f7b;
        }
        plVar11 = *(longlong **)(lVar7 + 0x50 + lVar2);
        (**(code **)(*plVar11 + 0x298))(plVar11,plVar3,lVar9,4);
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 0xa8;
      } while (iVar5 < (int)param_1[0x3a]);
    }
    iVar5 = (int)param_1[0x5a];
    puVar6 = (undefined8 *)0x0;
    _Src = (void *)param_1[0x59];
    local_38 = (undefined8 *)0x0;
    local_30 = (undefined4 *)CONCAT44(local_30._4_4_,iVar5);
    if (iVar5 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,iVar5,0);
      puVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar5 << 3);
      if (0 < (int)local_30) {
        uVar12 = (ulonglong)local_30 & 0xffffffff;
        puVar8 = puVar6;
        puVar10 = puVar6;
        local_30 = local_res8;
        do {
          lVar7 = FUN_142369ad0(plVar3,*puVar10,1);
          if (lVar7 == 0) {
            local_res8[0] = 0;
          }
          else {
            local_res8[0] = *(undefined4 *)(lVar7 + 0x30);
          }
          local_38 = puVar8;
          FUN_1417e05c0(param_1 + 0x45,local_res10,&local_38,0);
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    (**(code **)(*plVar3 + 0xaa0))(plVar3);
    if (puVar6 != (undefined8 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  TArray<FAnimNotifyEvent,FDefaultAllocator>::Reset(param_1 + 0x39,0);
  plVar11 = param_1 + 0x3b;
  lVar7 = 3;
  do {
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset(plVar11);
    plVar11 = plVar11 + 10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2d4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x59,0);
  }
  FUN_14229abf0(param_1 + 0x1f,plVar3);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(uint *)((longlong)param_1 + 0x1c4) < 0x80000000) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x37,0);
  return;
}



// FUNCTION 142284120 FUN_142284120 body=741 status=ok
// SIG undefined FUN_142284120(void)

void FUN_142284120(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  
  iVar2 = *(int *)(*param_1 + 0x1b8);
  if (0 < iVar2) {
    iVar8 = (int)param_1[0x24] + -1;
    if (-1 < iVar8) {
      plVar1 = param_1 + 0x23;
      lVar10 = (longlong)iVar8 * 0xa8;
      lVar12 = (longlong)(int)param_1[0x24] * 0xa8;
      lVar11 = lVar10;
      do {
        lVar9 = lVar11 + *plVar1;
        fVar13 = (float)FAnimNotifyEvent::GetTriggerTime(lVar9);
        fVar14 = (float)FAnimNotifyEvent::GetEndTriggerTime(lVar9);
        if ((param_2 <= fVar13) || (fVar14 < param_2)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          lVar6 = FWeakObjectPtr::Get(param_1 + 0x21);
          local_68 = *(undefined8 *)(lVar6 + 0x20);
          local_60 = *param_1;
          local_50 = (undefined4)param_1[0x22];
          local_58 = lVar9;
          (**(code **)(**(longlong **)(lVar9 + 0x50) + 0x2b0))
                    (*(longlong **)(lVar9 + 0x50),&local_68);
          lVar9 = *plVar1;
          *(undefined ***)(lVar10 + 0x60 + lVar9) = &PTR_FUN_14410b0e0;
          *(undefined ***)(lVar10 + lVar9) = &PTR_FUN_14410b0e0;
          iVar5 = (int)param_1[0x24];
          iVar7 = (iVar5 - iVar8) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar10),(void *)(lVar12 + *plVar1),(longlong)iVar7 * 0xa8)
            ;
            iVar5 = (int)param_1[0x24];
          }
          *(int *)(param_1 + 0x24) = iVar5 + -1;
          FUN_1416c54a0(plVar1);
        }
        lVar12 = lVar12 + -0xa8;
        lVar10 = lVar10 + -0xa8;
        lVar11 = lVar11 + -0xa8;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    if (0 < iVar2) {
      lVar11 = 0;
      do {
        lVar10 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x1b0) + lVar11 * 4) * 0xa8 +
                 *(longlong *)(*param_1 + 0x80);
        fVar13 = (float)FAnimNotifyEvent::GetTriggerTime(lVar10);
        fVar14 = (float)FAnimNotifyEvent::GetEndTriggerTime(lVar10);
        if ((fVar13 < param_2) && (param_2 <= fVar14)) {
          plVar1 = param_1 + 0x23;
          lVar12 = *plVar1;
          lVar9 = (longlong)(int)param_1[0x24] * 0xa8 + lVar12;
          for (; lVar12 != lVar9; lVar12 = lVar12 + 0xa8) {
            lVar6 = *(longlong *)(lVar12 + 0x48);
            if ((((lVar6 != 0) && (lVar6 == *(longlong *)(lVar10 + 0x48))) ||
                ((lVar3 = *(longlong *)(lVar12 + 0x50), lVar3 != 0 &&
                 (lVar3 == *(longlong *)(lVar10 + 0x50))))) ||
               (((lVar6 == 0 && (lVar3 == 0)) &&
                (*(longlong *)(lVar12 + 0x40) == *(longlong *)(lVar10 + 0x40))))) {
              bVar4 = true;
              goto LAB_14228434c;
            }
          }
          bVar4 = false;
LAB_14228434c:
          if (!bVar4) {
            lVar12 = FWeakObjectPtr::Get(param_1 + 0x21);
            local_68 = *(undefined8 *)(lVar12 + 0x20);
            local_60 = *param_1;
            local_50 = (undefined4)param_1[0x22];
            local_58 = lVar10;
            (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x2a0))
                      (*(longlong **)(lVar10 + 0x50),&local_68);
            iVar8 = (int)param_1[0x24];
            *(int *)(param_1 + 0x24) = iVar8 + 1;
            if (*(int *)((longlong)param_1 + 0x124) < iVar8 + 1) {
              TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            FAnimNotifyEvent::FAnimNotifyEvent((longlong)iVar8 * 0xa8 + *plVar1,lVar10);
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar2);
    }
  }
  return;
}



// FUNCTION 142284410 FUN_142284410 body=247 status=ok
// SIG undefined FUN_142284410(void)

void FUN_142284410(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x20))(param_1,(int)param_1[0x18]);
  (**(code **)(*param_1 + 0x28))(param_1,(int)param_1[0x18]);
  uVar3 = 0;
  puVar4 = (undefined8 *)param_1[0xbe];
  uVar5 = (longlong)(int)param_1[0xbf] & 0x1fffffffffffffff;
  if (puVar4 + (int)param_1[0xbf] < puVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*puVar4;
      lVar2 = param_1[0x18];
      SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_38,param_1);
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = (int)lVar2;
      (**(code **)(*plVar1 + 0x10))(plVar1,local_38);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar5);
  }
  FUN_142282390(param_1,(int)param_1[0x18]);
  return;
}



// FUNCTION 142284510 FUN_142284510 body=1264 status=ok
// SIG undefined FUN_142284510(void)

void FUN_142284510(longlong *param_1,float param_2,char param_3)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar3 = FUN_142a07000();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar4 = param_1[0x72];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar4;
  }
  if ((param_1[4] == 0) || (cVar2 = FUN_1423bd710(param_1[4],param_2), cVar2 == '\0')) {
    plVar10 = (longlong *)0x0;
    if ((char)param_1[0x85] != '\0') {
      FUN_142258a70(lVar4,param_1);
      local_58 = (longlong *)0x0;
      local_4c = 0;
      plVar5 = (longlong *)FUN_142268ae0(param_1[2]);
      plVar12 = plVar10;
      iVar15 = 0;
      if (plVar5 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
        iVar14 = (int)plVar6[1];
        plVar5 = plVar10;
        plVar16 = plVar10;
        iVar15 = 0;
        if (0 < iVar14) {
          do {
            lVar3 = *(longlong *)(*plVar6 + -8 + (longlong)(iVar14 - (int)plVar5) * 8);
            if (lVar3 != 0) {
              lVar7 = FUN_1428f56b0();
              for (lVar8 = *(longlong *)(lVar3 + 0x70); lVar8 != 0;
                  lVar8 = *(longlong *)(lVar8 + 0x30)) {
                if (lVar8 == lVar7) {
                  iVar15 = *(int *)(lVar3 + 0x44);
                  iVar14 = (int)plVar16;
                  local_50 = iVar14 + 1;
                  if ((int)plVar10 < (int)local_50) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_58,plVar16);
                    plVar10 = (longlong *)(ulonglong)local_4c;
                    plVar12 = local_58;
                  }
                  plVar16 = (longlong *)(ulonglong)local_50;
                  plVar12[iVar14] = (longlong)iVar15 + (longlong)param_1;
                  break;
                }
              }
            }
            iVar15 = (int)plVar16;
            iVar14 = (int)plVar6[1];
            uVar13 = (int)plVar5 + 1;
            plVar5 = (longlong *)(ulonglong)uVar13;
          } while ((int)uVar13 < iVar14);
        }
      }
      uVar11 = 0;
      uVar9 = (ulonglong)((longlong)(plVar12 + iVar15) + (7 - (longlong)plVar12)) >> 3;
      if (plVar12 + iVar15 < plVar12) {
        uVar9 = uVar11;
      }
      plVar10 = plVar12;
      if (uVar9 != 0) {
        do {
          uVar11 = uVar11 + 1;
          *(undefined8 *)(*plVar10 + 0x60) = 0;
          plVar10 = plVar10 + 1;
        } while (uVar11 != uVar9);
      }
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
      *(undefined1 *)(param_1 + 0x85) = 0;
    }
    (**(code **)(*param_1 + 0x300))(param_1,param_2);
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2);
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
    FUN_142285720(param_1);
    FUN_1422854d0(param_1);
    (**(code **)(*param_1 + 0x2c8))(param_1,param_2);
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2);
    if (param_1[0x7b] != 0) {
      FUN_1428ec090(param_1,param_2);
    }
    FUN_142284ae0(param_1,param_2);
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      lVar8 = FUN_142a07000();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar3 = param_1[0x72];
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar3;
    }
    plVar10 = (longlong *)(lVar3 + 0x5c0);
    if (plVar10 != param_1 + 0x79) {
      iVar15 = (int)param_1[0x7a];
      _Src = (void *)param_1[0x79];
      *(int *)(lVar3 + 0x5c8) = iVar15;
      if ((iVar15 == 0) && (*(int *)(lVar3 + 0x5cc) == 0)) {
        *(undefined4 *)(lVar3 + 0x5cc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar10,iVar15);
        _guard_xfg_dispatch_icall_nop((void *)*plVar10,_Src,(longlong)iVar15 << 4);
      }
    }
    if (param_3 == '\0') {
      plVar10 = (longlong *)FUN_14292cb70();
      lVar3 = plVar10[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar10 + 0x368))(plVar10);
        lVar3 = plVar10[0x1f];
      }
      if ((((*(byte *)(lVar3 + 0x7e0) & 4) == 0) || ((*(byte *)((longlong)param_1 + 0x31) & 1) == 0)
          ) && (*DAT_146af0b98 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      cVar2 = (**(code **)(*param_1 + 0x290))(param_1);
      if (((cVar2 == '\0') || (*DAT_146af0b80 == 0)) ||
         ((*DAT_146af0b68 == 0 || ((!bVar1 || (param_2 == 0.0)))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return;
      }
    }
    FUN_142284410(lVar4);
    FUN_14227aad0(param_1);
  }
  else {
    FUN_14229abf0(param_1 + 0x1f,param_1[4]);
    uVar9 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1c4)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x37,0);
    }
    *(undefined4 *)(lVar4 + 0x330) = 0xffff;
    *(undefined8 *)(lVar4 + 0x328) = 0xffffffffffffffff;
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2);
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
    plVar10 = (longlong *)param_1[0xf];
    uVar11 = (longlong)(int)param_1[0x10] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_1[0x10] < plVar10) {
      uVar11 = uVar9;
    }
    if (uVar11 != 0) {
      do {
        lVar4 = *plVar10;
        *(undefined1 *)(lVar4 + 0x50) = 0;
        *(undefined4 *)(lVar4 + 0x30) = 0xfffffffe;
        *(undefined4 *)(lVar4 + 0x38) = 0xfffffffe;
        *(undefined4 *)(lVar4 + 0x48) = 0;
        if (0x7fffffff < *(uint *)(lVar4 + 0x4c)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar4 + 0x40,0);
        }
        plVar10 = plVar10 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar11);
    }
  }
  return;
}



// FUNCTION 142284a00 FUN_142284a00 body=223 status=ok
// SIG undefined FUN_142284a00(void)

void FUN_142284a00(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    *(short *)(param_1 + 0x330) = *(short *)(param_1 + 0x330) + 1;
    *(undefined8 *)(param_1 + 0x328) = DAT_1468c21b0;
    if (*(short *)(param_1 + 0x330) == -1) {
      *(undefined2 *)(param_1 + 0x330) = 0;
    }
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_38,param_1);
    local_30 = 0x3f800000;
    local_2c = 0x3f800000;
    local_28 = param_2;
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(*(longlong **)(param_1 + 0xd8),local_38);
    puVar1 = *(undefined8 **)(param_1 + 0xe8);
    uVar3 = 0;
    uVar2 = (longlong)*(int *)(param_1 + 0xf0) & 0x1fffffffffffffff;
    if (puVar1 + *(int *)(param_1 + 0xf0) < puVar1) {
      uVar2 = uVar3;
    }
    if (uVar2 != 0) {
      do {
        FUN_14229a180(*puVar1);
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 != uVar2);
    }
  }
  return;
}



// FUNCTION 142284ae0 FUN_142284ae0 body=1471 status=ok
// SIG undefined FUN_142284ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142284ae0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  longlong *local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  undefined1 local_150;
  undefined4 local_14c;
  longlong local_148;
  undefined4 local_140;
  longlong local_138;
  char local_128 [4];
  undefined4 local_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar12 = param_1[4];
  if (lVar12 != 0) {
    lVar5 = FUN_142a07000();
    lVar12 = *(longlong *)(lVar12 + 0x10);
    if ((*(int *)(lVar12 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  local_138 = param_1[0x72];
  if (local_138 == 0) {
    local_138 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = local_138;
  }
  uVar15 = 0;
  plVar7 = (longlong *)param_1[0x7c];
  uVar11 = (longlong)(int)param_1[0x7d] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_1[0x7d] < plVar7) {
    uVar11 = uVar15;
  }
  if (uVar11 != 0) {
    do {
      lVar12 = *plVar7;
      if (*(char *)(lVar12 + 0x1c) != '\0') {
        local_148 = CONCAT44(local_148._4_4_,0xfffffffe);
        uVar3 = local_180 >> 0x28;
        local_140 = 0xfffffffe;
        local_178 = local_178 & 0xffffffff00000000;
        local_150 = 0;
        local_14c = 0;
        bVar2 = (byte)(*(byte *)(param_1 + 6) - 2) < 2;
        if (bVar2) {
          local_e8 = 2;
        }
        else {
          local_e8 = (uint)*(byte *)(param_1 + 6);
        }
        local_170 = *(undefined4 *)(lVar12 + 0x10);
        local_160 = lVar12 + 0xf8;
        local_16c = *(undefined4 *)(lVar12 + 0x14);
        local_198 = *(longlong **)(lVar12 + 8);
        local_168 = lVar12 + 0x68;
        local_190 = lVar12 + 100;
        local_188 = *(undefined4 *)(lVar12 + 0x18);
        local_f8 = _DAT_146aeef40 & _DAT_146aeef50;
        uStack_f4 = uRam0000000146aeef44 & uRam0000000146aeef54;
        uStack_f0 = uRam0000000146aeef48 & uRam0000000146aeef58;
        uStack_ec = uRam0000000146aeef4c & uRam0000000146aeef5c;
        local_158 = &local_148;
        local_a0 = &DAT_146aef328;
        local_180._0_5_ = CONCAT14(*(undefined1 *)(lVar12 + 0x60),0x3f800000);
        local_180 = CONCAT35((int3)uVar3,(undefined5)local_180) & 0xfffffaffffffffff | 0x20000000000
        ;
        local_184 = 0x3f800000;
        local_128[0] = '\0';
        local_124 = 0;
        local_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = uRam0000000146aeef4c;
        local_108 = 0;
        uStack_100 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_94 = 0;
        local_8c = 0;
        local_88 = 0x100;
        local_86 = 1;
        local_98 = (int)param_2;
        (**(code **)(*local_198 + 0x278))(local_198,&local_198,param_1 + 0x1f,local_128);
        if ((bVar2) && (local_128[0] != '\0')) {
          FUN_14227c3e0(param_1,&local_118,lVar12,local_124);
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
      }
      fVar16 = (float)FUN_1422ad610(lVar12);
      if ((((*(float *)(lVar12 + 0x50) != 0.0) && (fVar16 <= *(float *)(lVar12 + 0x24))) &&
          (*(char *)(lVar12 + 0x61) == '\0')) && (*(char *)(lVar12 + 0x60) == '\0')) {
        FAlphaBlend::SetBlendTime(lVar12 + 0x28);
        FAlphaBlend::SetDesiredValue(lVar12 + 0x28,0);
      }
      FAlphaBlend::Update(lVar12 + 0x28,param_2);
      if ((1.0 < *(float *)(lVar12 + 100) || *(float *)(lVar12 + 100) == 1.0) &&
         (*(char *)(lVar12 + 0x60) == '\0')) {
        *(undefined1 *)(lVar12 + 0x1c) = 0;
      }
      plVar7 = plVar7 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar11);
  }
  puVar13 = (ulonglong *)(param_1 + 0x7c);
  iVar10 = (int)param_1[0x7d];
  iVar14 = iVar10 + -1;
  if (-1 < iVar14) {
    local_148 = (longlong)iVar14 * 8;
    lVar12 = local_148;
    do {
      uVar11 = *puVar13;
      lVar5 = *(longlong *)(uVar11 + lVar12);
      if (((lVar5 != 0) && (*(float *)(lVar5 + 0x50) == 0.0)) && (*(float *)(lVar5 + 0x48) == 0.0))
      {
        iVar10 = (int)param_1[0x7d];
        iVar4 = (iVar10 - iVar14) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(uVar11 + local_148),(void *)(uVar11 + (longlong)(iVar10 - iVar4) * 8),
                     (longlong)iVar4 << 3);
          iVar10 = (int)param_1[0x7d];
        }
        *(int *)(param_1 + 0x7d) = iVar10 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar13);
        if (lVar5 == param_1[0x7e]) {
          param_1[0x7e] = 0;
        }
        FUN_14084c260(lVar5 + 0xf8);
        lVar6 = lVar5 + 0x100;
        lVar9 = 3;
        do {
          plVar7 = (longlong *)(lVar6 + -0x30);
          lVar6 = lVar6 + -0x30;
          lVar9 = lVar9 + -1;
          if (*plVar7 != 0) {
            FMemory::Free();
          }
        } while (lVar9 != 0);
        FMemory::operator_delete(lVar5,0x108);
      }
      local_148 = local_148 + -8;
      lVar12 = lVar12 + -8;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
    iVar10 = (int)param_1[0x7d];
  }
  lVar12 = local_138;
  plVar7 = (longlong *)(local_138 + 0x5d0);
  iVar14 = *(int *)(local_138 + 0x5dc);
  iVar4 = *(int *)(local_138 + 0x5d8);
  if (iVar14 < iVar10) {
    if (iVar4 != 0) {
      lVar5 = *plVar7 + 0x18;
      do {
        FUN_14084c260(lVar5);
        lVar5 = lVar5 + 0x28;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar14 = *(int *)(lVar12 + 0x5dc);
    }
    *(undefined4 *)(lVar12 + 0x5d8) = 0;
    if (iVar14 != iVar10) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (plVar7,iVar10);
    }
  }
  else {
    if (iVar4 != 0) {
      lVar5 = *plVar7 + 0x18;
      do {
        FUN_14084c260(lVar5);
        lVar5 = lVar5 + 0x28;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 *)(lVar12 + 0x5d8) = 0;
  }
  plVar8 = (longlong *)*puVar13;
  uVar15 = 0;
  uVar11 = (longlong)(int)param_1[0x7d] & 0x1fffffffffffffff;
  if (plVar8 + (int)param_1[0x7d] < plVar8) {
    uVar11 = uVar15;
  }
  if (uVar11 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar8;
      local_180 = 0;
      local_1a8 = 0;
      local_198 = (longlong *)*puVar1;
      local_188 = *(undefined4 *)(puVar1 + 9);
      local_190 = puVar1[1];
      TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBlendSampleData,int>
                (&local_180,puVar1[0x1f],*(undefined4 *)(puVar1 + 0x20),0);
      iVar14 = *(int *)(lVar12 + 0x5d8);
      lVar5 = (longlong)iVar14;
      *(int *)(lVar12 + 0x5d8) = iVar14 + 1;
      if (*(int *)(lVar12 + 0x5dc) < iVar14 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar7,iVar14);
      }
      lVar6 = *plVar7;
      *(longlong **)(lVar6 + lVar5 * 0x28) = local_198;
      *(longlong *)(lVar6 + 8 + lVar5 * 0x28) = local_190;
      *(undefined4 *)(lVar6 + 0x10 + lVar5 * 0x28) = local_188;
      *(ulonglong *)(lVar6 + 0x18 + lVar5 * 0x28) = local_180;
      *(undefined4 *)(lVar6 + 0x20 + lVar5 * 0x28) = (undefined4)local_178;
      *(undefined4 *)(lVar6 + 0x24 + lVar5 * 0x28) = local_178._4_4_;
      local_180 = 0;
      local_178 = 0;
      FUN_14084c260(&local_180);
      plVar8 = plVar8 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar11);
  }
  return;
}



// FUNCTION 1422850a0 FUN_1422850a0 body=1072 status=ok
// SIG undefined FUN_1422850a0(void)

void FUN_1422850a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  longlong local_res8;
  longlong *local_res10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  uint uStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar7 = param_1[4];
  local_res10 = param_2;
  if (lVar7 != 0) {
    lVar6 = FUN_142a07000();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  if (param_1[0x72] == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  lVar7 = param_1[4];
  plVar1 = param_1 + 0x59;
  puVar15 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  local_res8 = lVar7;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2d4)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_70 = param_1 + 0x45;
  uVar12 = *(uint *)(param_1 + 0x4a);
  puStack_60 = (uint *)(param_1 + 0x47);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  puVar11 = puVar15;
  if (uVar12 != 0) {
    puVar11 = (undefined8 *)(ulonglong)uVar12;
    puVar14 = (uint *)param_1[0x49];
    if ((uint *)param_1[0x49] == (uint *)0x0) {
      puVar14 = puStack_60;
    }
    uVar3 = *puVar14;
    puVar10 = puVar15;
    puVar13 = puVar15;
    while (uVar3 == 0) {
      iVar5 = (int)puVar10;
      uStack_80 = (int)puVar13 + 0x20;
      puVar13 = (undefined8 *)(ulonglong)uStack_80;
      local_98._0_4_ = iVar5 + 1;
      puVar10 = (undefined8 *)(ulonglong)(uint)local_98;
      local_88._4_4_ = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
      goto LAB_142285227;
      uVar3 = puVar14[(longlong)iVar5 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
    if ((int)uVar12 < (int)local_88._4_4_) {
      local_88._4_4_ = uVar12;
    }
    puVar11 = (undefined8 *)(ulonglong)local_88._4_4_;
  }
LAB_142285227:
  uStack_58 = CONCAT44(local_88._4_4_,0xffffffff);
  local_78 = CONCAT44(uStack_7c,uStack_80);
  uStack_68 = (uint)local_98;
  uStack_64 = local_98._4_4_;
  uStack_90._0_4_ = (uint)local_98;
  uStack_90._4_4_ = local_98._4_4_;
  uStack_80 = 0xffffffff;
  uStack_7c = local_88._4_4_;
  lVar6 = lVar7;
  local_98 = local_70;
  uStack_50 = local_78;
  local_88 = puStack_60;
  if ((int)puVar11 < (int)uVar12) {
    do {
      plVar9 = local_98;
      lVar6 = (longlong)(int)uStack_7c;
      lVar8 = FUN_142369ad0(lVar7,*(undefined8 *)(*local_98 + lVar6 * 0x18),1);
      if (lVar8 == 0) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = *(float *)(lVar8 + 0x30);
      }
      lVar8 = *plVar9;
      if (fVar17 != *(float *)(lVar8 + 8 + lVar6 * 0x18)) {
        iVar5 = (int)param_1[0x5a];
        *(int *)(param_1 + 0x5a) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0x2d4) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar8 + lVar6 * 0x18);
      }
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      param_2 = local_res10;
      lVar6 = local_res8;
    } while ((int)uStack_7c < (int)local_88[6]);
  }
  plVar9 = param_1 + 0x3b;
  lVar7 = 3;
  do {
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset(plVar9);
    plVar9 = plVar9 + 10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  plVar9 = (longlong *)param_2[2];
  if ((plVar9 != (longlong *)0x0) && (puVar11 = puVar15, 0 < (int)plVar9[1])) {
    do {
      uVar2 = *(ushort *)(*plVar9 + ((ulonglong)puVar11 & 0xffff) * 2);
      if ((uVar2 != 0xffff) && ((int)(uint)uVar2 < (int)param_2[1])) {
        if (*(char *)(*param_2 + 4 + (ulonglong)uVar2 * 8) != '\0') {
          uVar18 = *(undefined4 *)(*param_2 + (ulonglong)uVar2 * 8);
          local_res10 = (longlong *)CONCAT62(local_res10._2_6_,(short)puVar11);
          local_res8 = 0;
          lVar7 = USkeleton::GetSmartNameContainer(param_1[5],&DAT_146aef308);
          if (lVar7 != 0) {
            FSmartNameMapping::GetName(lVar7,&local_res10,&local_res8);
          }
          FUN_1422563f0(param_1,&local_res8,uVar18);
        }
      }
      plVar9 = (longlong *)param_2[2];
      uVar12 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar12;
    } while ((int)uVar12 < (int)plVar9[1]);
  }
  iVar5 = (int)param_1[0x5a];
  _Src = (void *)*plVar1;
  local_98 = (undefined8 *)0x0;
  uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,iVar5);
  if (iVar5 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,iVar5,0);
    puVar15 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)iVar5 << 3);
    if (0 < (int)(uint)uStack_90) {
      uVar16 = (ulonglong)uStack_90 & 0xffffffff;
      puVar11 = puVar15;
      puVar10 = puVar15;
      uStack_90 = &local_res10;
      do {
        lVar7 = FUN_142369ad0(lVar6,*puVar11,1);
        if (lVar7 == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined4 *)(lVar7 + 0x30);
        }
        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar18);
        local_98 = puVar10;
        FUN_1417e05c0(param_1 + 0x45,&local_res8,&local_98,0);
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (param_1[4] != 0) {
    FUN_1423a41d0(param_1[4],param_1 + 0x45,param_1 + 0x4f);
  }
  if (puVar15 != (undefined8 *)0x0) {
    FMemory::Free(puVar15);
  }
  return;
}



// FUNCTION 1422854d0 FUN_1422854d0 body=584 status=ok
// SIG undefined FUN_1422854d0(void)

void FUN_1422854d0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    lVar6 = FUN_142a07000();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar7 = param_1[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar7;
  }
  lVar6 = param_1[0x10];
  plVar11 = (longlong *)(lVar7 + 0x538);
  uVar10 = 0;
  *(undefined4 *)(lVar7 + 0x540) = 0;
  if (*(int *)(lVar7 + 0x544) < (int)lVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar11);
  }
  plVar9 = (longlong *)param_1[0xf];
  uVar12 = (longlong)(int)param_1[0x10] & 0x1fffffffffffffff;
  if (plVar9 + (int)param_1[0x10] < plVar9) {
    uVar12 = uVar10;
  }
  if (uVar12 != 0) {
    do {
      plVar4 = (longlong *)*plVar9;
      if ((*plVar4 != 0) && (fVar1 = *(float *)(plVar4 + 0x2a), 1e-05 < fVar1)) {
        fVar2 = *(float *)(plVar4 + 0x2b);
        if (*(char *)((longlong)plVar4 + 0x184) == '\0') {
          uVar13 = (undefined4)plVar4[0x25];
        }
        else {
          uVar13 = (undefined4)plVar4[0x30];
        }
        lVar6 = plVar4[5];
        FWeakObjectPtr::operator=(&local_88);
        iVar3 = *(int *)(lVar7 + 0x540);
        lVar8 = (longlong)iVar3;
        *(int *)(lVar7 + 0x540) = iVar3 + 1;
        local_80 = fVar1;
        local_7c = fVar2;
        local_78 = uVar13;
        local_74 = (char)lVar6;
        local_73 = fVar2 != 0.0;
        if (*(int *)(lVar7 + 0x544) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar11,iVar3);
        }
        lVar6 = *plVar11;
        *(undefined4 *)(lVar6 + lVar8 * 0x18) = local_88;
        *(undefined4 *)(lVar6 + 4 + lVar8 * 0x18) = local_84;
        *(float *)(lVar6 + 8 + lVar8 * 0x18) = local_80;
        *(float *)(lVar6 + 0xc + lVar8 * 0x18) = local_7c;
        *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x18) = local_78;
        *(undefined1 *)(lVar6 + 0x14 + lVar8 * 0x18) = local_74;
        *(undefined1 *)(lVar6 + 0x15 + lVar8 * 0x18) = local_73;
      }
      plVar9 = plVar9 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar12);
  }
  return;
}



// FUNCTION 142285720 FUN_142285720 body=413 status=ok
// SIG undefined FUN_142285720(void)

void FUN_142285720(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong local_res8;
  
  plVar12 = (longlong *)param_1[0xf];
  plVar1 = plVar12 + (int)param_1[0x10];
  do {
    if (plVar12 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar12;
    bVar7 = true;
    if (*(char *)(puVar6 + 10) == '\0') {
LAB_142285885:
      *(undefined4 *)(puVar6 + 6) = 0xfffffffe;
      *(undefined4 *)(puVar6 + 7) = 0xfffffffe;
    }
    else {
      iVar5 = *(int *)((longlong)puVar6 + 0x17c);
      if (iVar5 != -1) {
        lVar10 = param_1[4];
        bVar7 = false;
        if (lVar10 != 0) {
          lVar9 = FUN_142a07000();
          lVar10 = *(longlong *)(lVar10 + 0x10);
          if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
              lVar9 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            FUN_1423b2d70(param_1[4],1);
          }
        }
        lVar10 = param_1[0x72];
        if (lVar10 == 0) {
          lVar10 = (**(code **)(*param_1 + 0x308))(param_1);
          param_1[0x72] = lVar10;
        }
        puVar11 = (undefined8 *)FUN_14225c6d0(lVar10,iVar5,&local_res8);
        uVar2 = *(undefined4 *)(puVar6 + 0x2a);
        uVar3 = *(undefined4 *)((longlong)puVar6 + 0x174);
        uVar4 = *(undefined4 *)(puVar6 + 0x2f);
        if (*(char *)((longlong)puVar6 + 0x184) == '\0') {
          uVar13 = *(undefined4 *)(puVar6 + 0x25);
        }
        else {
          uVar13 = *(undefined4 *)(puVar6 + 0x30);
        }
        *puVar11 = *puVar6;
        puVar11[7] = puVar6 + 8;
        puVar11[8] = puVar6 + 6;
        *(undefined4 *)(puVar11 + 5) = uVar13;
        *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar4;
        *(undefined4 *)(puVar11 + 6) = uVar3;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uVar2;
        *(undefined4 *)(puVar11 + 2) = 0x3f800000;
        *(undefined1 *)((longlong)puVar11 + 0x1c) = 0;
        if (local_res8 != 0) {
          FUN_1422b4b50();
        }
      }
      *(undefined1 *)(puVar6 + 10) = 0;
      if (bVar7) goto LAB_142285885;
    }
    plVar12 = plVar12 + 1;
  } while( true );
}



// FUNCTION 1422858c0 FUN_1422858c0 body=489 status=ok
// SIG undefined FUN_1422858c0(void)

void FUN_1422858c0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_res8 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  FRichCurve::UpdateOrAddKey(param_1 + 0x40,local_res8,param_3,param_2[4],0,0x38d1b717);
  FRichCurve::UpdateOrAddKey(param_1 + 0xb0,local_res8,param_3,uVar1,0,0x38d1b717);
  FRichCurve::UpdateOrAddKey(param_1 + 0x120,local_res8,param_3,uVar2,0,0x38d1b717);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FQuat::Rotator(&local_58,&local_68);
  FRichCurve::UpdateOrAddKey(param_1 + 0x1b0,local_res8,param_3,local_60,1,0x38d1b717);
  FRichCurve::UpdateOrAddKey(param_1 + 0x220,local_res8,param_3,local_68,1,0x38d1b717);
  FRichCurve::UpdateOrAddKey(param_1 + 0x290,local_res8,param_3,local_64,1,0x38d1b717);
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  FRichCurve::UpdateOrAddKey(param_1 + 800,local_res8,param_3,param_2[8],0,0x38d1b717);
  FRichCurve::UpdateOrAddKey(param_1 + 0x390,local_res8,param_3,uVar1,0,0x38d1b717);
  FRichCurve::UpdateOrAddKey(param_1 + 0x400,local_res8,param_3,uVar2,0,0x38d1b717);
  return;
}



// FUNCTION 142285ab0 FUN_142285ab0 body=214 status=ok
// SIG undefined FUN_142285ab0(void)

void FUN_142285ab0(longlong param_1,longlong *param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x2a0) != *(int *)(param_1 + 0x2cc)) {
    lVar4 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      lVar4 = param_1 + 0x2d0;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x2e0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar5 = (int *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_142285b33;
          break;
        }
        iVar2 = piVar5[4];
      } while (iVar2 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_142285b33:
  piVar3 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    lVar4 = (longlong)*piVar3;
    lVar1 = *(longlong *)((longlong)*(int *)(param_1 + 0x1c8) * 0x10 + 0x2e8 + param_1);
    *(float *)(lVar1 + lVar4 * 0xc) = param_3;
    *(undefined4 *)(lVar1 + 4 + lVar4 * 0xc) = param_4;
    if ((*(char *)(lVar1 + 8 + lVar4 * 0xc) == '\0') && (param_3 <= 1e-05)) {
      *(undefined1 *)(lVar1 + 8 + lVar4 * 0xc) = 0;
      return;
    }
    *(undefined1 *)(lVar1 + 8 + lVar4 * 0xc) = 1;
  }
  return;
}



// FUNCTION 142285b90 FUN_142285b90 body=12 status=ok
// SIG undefined FUN_142285b90(void)

bool FUN_142285b90(longlong param_1)

{
  return *(longlong *)(param_1 + 0x3f0) != 0;
}



// FUNCTION 142285c60 AddUniqueImpl<FAnimNotifyEventReference_const_&> body=147 status=ok
// SIG undefined AddUniqueImpl<FAnimNotifyEventReference_const_&>(void)

ulonglong TArray<FAnimNotifyEventReference,FDefaultAllocator>::
          AddUniqueImpl<FAnimNotifyEventReference_const_&>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar6 = (longlong)(int)uVar1;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar2 + lVar6 * 2) {
    plVar4 = plVar2;
    do {
      if (*plVar4 == *param_2) {
        uVar5 = (longlong)plVar4 - (longlong)plVar2 >> 4;
        if ((int)uVar5 != -1) {
          return uVar5;
        }
        break;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar2 + lVar6 * 2);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar1);
  }
  lVar3 = *param_1;
  *(longlong *)(lVar3 + lVar6 * 0x10) = *param_2;
  *(longlong *)(lVar3 + 8 + lVar6 * 0x10) = param_2[1];
  return (ulonglong)uVar1;
}



// FUNCTION 142285d00 FUN_142285d00 body=117 status=ok
// SIG undefined FUN_142285d00(void)

void FUN_142285d00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = param_2[2];
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
    param_1[2] = param_2[2];
  }
  return;
}



// FUNCTION 142285d80 CopyBonesFrom<FDefaultAllocator> body=117 status=ok
// SIG undefined CopyBonesFrom<FDefaultAllocator>(void)

void FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<FDefaultAllocator>
               (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = param_2[2];
  }
  else {
    FUN_140615970(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
    param_1[2] = param_2[2];
  }
  return;
}



// FUNCTION 142285e00 CopyFrom<TMemStackAllocator<0>_> body=196 status=ok
// SIG undefined CopyFrom<TMemStackAllocator<0>_>(void)

void FBaseBlendedCurve<FDefaultAllocator>::CopyFrom<TMemStackAllocator<0>_>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar3 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
      iVar3 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar3 * 8),(void *)*param_2,(longlong)iVar1 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  puVar2 = (undefined8 *)param_1[2];
  sVar7 = 0;
  if ((puVar2 != (undefined8 *)0x0) &&
     (lVar5 = (longlong)*(int *)(puVar2 + 1), sVar7 = 0, 0 < lVar5)) {
    psVar4 = (short *)*puVar2;
    sVar6 = 0;
    do {
      sVar7 = sVar6 + 1;
      if (*psVar4 == -1) {
        sVar7 = sVar6;
      }
      lVar5 = lVar5 + -1;
      psVar4 = psVar4 + 1;
      sVar6 = sVar7;
    } while (lVar5 != 0);
  }
  *(short *)(param_1 + 3) = sVar7;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}



// FUNCTION 142285ed0 CopyFrom<FDefaultAllocator> body=196 status=ok
// SIG undefined CopyFrom<FDefaultAllocator>(void)

void FBaseBlendedCurve<TMemStackAllocator<0>_>::CopyFrom<FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    FUN_140957580(param_1,0);
  }
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar3 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar1) {
      FUN_140957580(param_1);
      iVar3 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar3 * 8),(void *)*param_2,(longlong)iVar1 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  puVar2 = (undefined8 *)param_1[2];
  sVar7 = 0;
  if ((puVar2 != (undefined8 *)0x0) &&
     (lVar5 = (longlong)*(int *)(puVar2 + 1), sVar7 = 0, 0 < lVar5)) {
    psVar4 = (short *)*puVar2;
    sVar6 = 0;
    do {
      sVar7 = sVar6 + 1;
      if (*psVar4 == -1) {
        sVar7 = sVar6;
      }
      lVar5 = lVar5 + -1;
      psVar4 = psVar4 + 1;
      sVar6 = sVar7;
    } while (lVar5 != 0);
  }
  *(short *)(param_1 + 3) = sVar7;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}



// FUNCTION 142285fa0 FUN_142285fa0 body=734 status=ok
// SIG undefined FUN_142285fa0(void)

int * FUN_142285fa0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar2) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142286255;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142286255:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142286280 FUN_142286280 body=443 status=ok
// SIG undefined FUN_142286280(void)

int * FUN_142286280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar9 = false;
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar2;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_142286413;
    }
  }
  cVar3 = TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar5 = (iVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
    uVar5 = ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142286413:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142286440 FUN_142286440 body=1089 status=ok
// SIG undefined FUN_142286440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142286440(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  char local_e8;
  longlong *local_e0;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  longlong **local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 0x48) = 0;
  local_e8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x4c)) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_d4 = 1;
  local_e0 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_d0 = (uint *)(param_1 + 0x2c0);
  local_ac = 0;
  iVar13 = 0;
  local_d8 = 0;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar12 = *puVar10;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar5 = local_d8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar5;
      if (bVar3) goto LAB_14228655a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_d4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_c4 = (iStack_c0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_c4) {
LAB_14228655a:
      uStack_c4 = uVar1;
    }
  }
  local_c8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_78 = CONCAT44(uStack_d4,local_d8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_c4;
  local_88 = CONCAT44(uStack_bc,iStack_c0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_a0 = local_d8;
  uStack_9c = uStack_d4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14228661d;
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
LAB_14228661d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_98 = puStack_d0;
  local_80 = local_e0;
  puStack_70 = puStack_d0;
  uStack_60 = local_88;
  local_a8 = local_e0;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  while( true ) {
    if ((uStack_8c == uVar12) && (local_98 == puStack_d0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_a8 == local_e0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    if (lVar7 != 0) {
      lVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
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
        iVar2 = *(int *)(param_2 + 0x48);
        *(int *)(param_2 + 0x48) = iVar2 + 1;
        if (*(int *)(param_2 + 0x4c) < iVar2 + 1) {
          TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_e8 != '\0') && (lVar7 != 0)) {
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
        local_b0 = iVar13 + 1;
        if (iVar5 < local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar13);
          plVar11 = local_b8;
          iVar5 = local_ac;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_b0;
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  if (local_e8 != '\0') {
    uVar8 = 0;
    local_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_142286440(*(longlong *)(*plVar14 + 0x2d8),&local_80,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x48);
            if (*(int *)(param_2 + 0x4c) < (int)local_38 + iVar5) {
              TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x48);
            }
            _Src = &local_80;
            if (local_40 != (longlong **)0x0) {
              _Src = local_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 142286890 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 142286930 FUN_142286930 body=306 status=ok
// SIG undefined FUN_142286930(void)

void FUN_142286930(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_1 + 0x58)) {
    return;
  }
  *param_2 = 0;
  lVar5 = *param_3;
  if ((lVar5 == 0) ||
     (lVar3 = *(longlong *)(param_1 + 0x58), *(int *)(lVar5 + 0x608) == *(int *)(lVar5 + 0x634)))
  goto LAB_142286a4f;
  lVar6 = *(longlong *)(lVar5 + 0x640);
  if (*(longlong *)(lVar5 + 0x640) == 0) {
    lVar6 = lVar5 + 0x638;
  }
  iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                           (longlong)*(int *)(lVar5 + 0x648) - 1U) * 4);
  if (iVar2 == -1) goto LAB_142286a4f;
  lVar5 = *(longlong *)(lVar5 + 0x600);
  while (lVar6 = (longlong)iVar2, *(longlong *)(lVar5 + lVar6 * 0x18) != lVar3) {
    iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
    if (iVar2 == -1) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
      return;
    }
  }
  if (((iVar2 == -1) || (lVar5 = lVar5 + lVar6 * 0x18, lVar5 == 0)) ||
     (plVar4 = (longlong *)(lVar5 + 8), plVar4 == (longlong *)0x0)) goto LAB_142286a4f;
  lVar5 = *plVar4;
  if (lVar5 == 0) {
LAB_142286a45:
    lVar5 = 0;
  }
  else {
    lVar3 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142286a45;
  }
  *param_2 = lVar5;
LAB_142286a4f:
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  return;
}



// FUNCTION 142286ad0 FUN_142286ad0 body=77 status=ok
// SIG undefined FUN_142286ad0(void)

undefined8 * FUN_142286ad0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14501e228;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 142286b20 FUN_142286b20 body=49 status=ok
// SIG undefined FUN_142286b20(void)

undefined8 * FUN_142286b20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_LAB_14501e820;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 142286b60 FUN_142286b60 body=49 status=ok
// SIG undefined FUN_142286b60(void)

undefined8 * FUN_142286b60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_LAB_14501e910;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 142286de0 FUN_142286de0 body=1814 status=ok
// SIG undefined FUN_142286de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142286de0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_190;
  float afStack_188 [8];
  undefined4 local_168;
  float local_158;
  float local_154;
  float local_150;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  float afStack_d0 [42];
  
  lVar13 = 0;
  *(undefined8 *)param_1 = _DAT_1468b5d90;
  param_1[2] = DAT_1468b5d98;
  param_1[4] = DAT_1464aa810;
  param_1[5] = DAT_1464aa814;
  param_1[6] = DAT_1464aa818;
  param_1[7] = DAT_1464aa81c;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 1.0;
  param_1[0xf] = 1.0;
  uVar3 = _DAT_1464aa7d8;
  *(undefined8 *)(param_1 + 0x10) = _DAT_1464aa7d0;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar3 = _DAT_1464aa7e8;
  *(undefined8 *)(param_1 + 0x14) = _DAT_1464aa7e0;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  uVar3 = _DAT_1464aa7f8;
  *(undefined8 *)(param_1 + 0x18) = _DAT_1464aa7f0;
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  uVar3 = uRam00000001464aa808;
  *(undefined8 *)(param_1 + 0x1c) = _DAT_1464aa800;
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  uVar3 = _DAT_1464aa7d8;
  *(undefined8 *)(param_1 + 0x20) = _DAT_1464aa7d0;
  *(undefined8 *)(param_1 + 0x22) = uVar3;
  uVar3 = _DAT_1464aa7e8;
  *(undefined8 *)(param_1 + 0x24) = _DAT_1464aa7e0;
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  uVar3 = _DAT_1464aa7f8;
  *(undefined8 *)(param_1 + 0x28) = _DAT_1464aa7f0;
  *(undefined8 *)(param_1 + 0x2a) = uVar3;
  uVar3 = uRam00000001464aa808;
  *(undefined8 *)(param_1 + 0x2c) = _DAT_1464aa800;
  *(undefined8 *)(param_1 + 0x2e) = uVar3;
  param_1[0x34] = DAT_1464aa810;
  param_1[0x35] = DAT_1464aa814;
  param_1[0x36] = DAT_1464aa818;
  param_1[0x37] = DAT_1464aa81c;
  param_1[0x3c] = DAT_1464aa810;
  param_1[0x3d] = DAT_1464aa814;
  param_1[0x3e] = DAT_1464aa818;
  param_1[0x3f] = DAT_1464aa81c;
  param_1[0x44] = DAT_1464aa810;
  param_1[0x45] = DAT_1464aa814;
  param_1[0x46] = DAT_1464aa818;
  param_1[0x47] = DAT_1464aa81c;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0.0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0.0;
  param_1[0x53] = 1.0;
  *(undefined8 *)(param_1 + 0x54) = _DAT_1468b5d90;
  param_1[0x56] = DAT_1468b5d98;
  param_1[0x58] = DAT_1464aa810;
  param_1[0x59] = DAT_1464aa814;
  param_1[0x5a] = DAT_1464aa818;
  pfVar10 = param_1 + 0x6a;
  param_1[0x5b] = DAT_1464aa81c;
  param_1[0x5c] = 0.0;
  param_1[0x5d] = 0.0;
  param_1[0x5e] = 0.0;
  param_1[0x5f] = 0.0;
  param_1[0x60] = 0.0;
  param_1[0x61] = 0.0;
  pfVar10[0] = 0.0;
  pfVar10[1] = 0.0;
  local_168 = 0;
  uStack_190 = 0x142287068;
  TArray<FAnimPhysShape,FDefaultAllocator>::CopyToEmpty<FAnimPhysShape>
            (pfVar10,*param_2,*(undefined4 *)(param_2 + 1),0);
  fVar23 = 0.0;
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  fVar19 = 0.0;
  fVar20 = 0.0;
  param_1[0x42] = *(float *)(param_3 + 1);
  fVar21 = 0.0;
  fVar22 = 0.0;
  *(undefined8 *)(param_1 + 0x38) = *param_3;
  param_1[0x3a] = *(float *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x30) = *param_3;
  param_1[0x32] = *(float *)(param_3 + 1);
  *(undefined8 *)param_1 = *param_3;
  param_1[2] = *(float *)(param_3 + 1);
  lVar12 = *(longlong *)pfVar10;
  lVar16 = (longlong)(int)param_1[0x6c] * 0x30 + lVar12;
  if (lVar12 != lVar16) {
    lVar15 = lVar12 + 0x10;
    do {
      uStack_190 = 0x142287100;
      FAnimPhys::CalculateCenterOfMass(&local_158,lVar12,lVar15);
      uStack_190 = 0x14228710b;
      fVar18 = (float)FAnimPhys::CalculateVolume(lVar12,lVar15);
      fVar22 = fVar22 + fVar18;
      lVar12 = lVar12 + 0x30;
      lVar15 = lVar15 + 0x30;
      fVar19 = fVar19 + local_158 * fVar18;
      fVar20 = fVar20 + local_154 * fVar18;
      fVar21 = fVar21 + local_150 * fVar18;
    } while (lVar12 != lVar16);
  }
  pfVar1 = param_1 + 100;
  fVar22 = 1.0 / fVar22;
  local_150 = fVar21 * fVar22;
  *(ulonglong *)pfVar1 = CONCAT44(fVar20 * fVar22,fVar19 * fVar22);
  param_1[0x66] = local_150;
  *param_1 = *pfVar1 + *param_1;
  param_1[1] = param_1[0x65] + param_1[1];
  param_1[2] = param_1[0x66] + param_1[2];
  fVar22 = param_1[2];
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  param_1[0x42] = fVar22;
  param_1[0x3a] = fVar22;
  param_1[0x32] = fVar22;
  puVar9 = *(undefined8 **)pfVar10;
  puVar14 = puVar9 + (longlong)(int)param_1[0x6c] * 6;
  for (; puVar9 != puVar14; puVar9 = puVar9 + 6) {
    pfVar11 = (float *)*puVar9;
    pfVar2 = pfVar11 + (longlong)*(int *)(puVar9 + 1) * 3;
    for (; pfVar11 != pfVar2; pfVar11 = pfVar11 + 3) {
      *pfVar11 = *pfVar11 - *pfVar1;
      pfVar11[1] = pfVar11[1] - param_1[0x65];
      pfVar11[2] = pfVar11[2] - param_1[0x66];
    }
  }
  lVar12 = *(longlong *)pfVar10;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  lVar16 = 4;
  lVar15 = (longlong)(int)param_1[0x6c] * 0x30 + lVar12;
  if (lVar12 != lVar15) {
    lVar17 = lVar12 + 0x10;
    do {
      uStack_190 = 0x1422872bb;
      fVar22 = (float)FAnimPhys::CalculateVolume(lVar12,lVar17);
      uStack_190 = 0x1422872d0;
      lVar6 = FAnimPhys::CalculateInertia(&local_108,lVar12,lVar17,pfVar1);
      lVar7 = -lVar6;
      lVar8 = 4;
      pfVar10 = (float *)(lVar6 + 8);
      do {
        pfVar2 = pfVar10 + 4;
        fVar19 = pfVar10[-1];
        *(float *)((longlong)&uStack_e0 + lVar7 + (longlong)pfVar2) = fVar22 * pfVar10[-2];
        fVar20 = *pfVar10;
        *(float *)((longlong)&uStack_dc + lVar7 + (longlong)pfVar2) = fVar22 * fVar19;
        fVar19 = pfVar10[1];
        *(float *)((longlong)&local_d8 + lVar7 + (longlong)pfVar2) = fVar22 * fVar20;
        *(float *)((longlong)&uStack_d4 + lVar7 + (longlong)pfVar2) = fVar22 * fVar19;
        lVar8 = lVar8 + -1;
        lVar6 = lVar13;
        pfVar10 = pfVar2;
      } while (lVar8 != 0);
      do {
        fVar19 = *(float *)((longlong)afStack_d0 + lVar6 + 0xc);
        fVar20 = *(float *)((longlong)afStack_d0 + lVar6 + 0x10);
        fVar21 = *(float *)((longlong)afStack_d0 + lVar6 + 0x14);
        fVar18 = *(float *)((longlong)&local_148 + lVar6 + 4);
        fVar4 = *(float *)((longlong)&uStack_140 + lVar6);
        fVar5 = *(float *)((longlong)&uStack_140 + lVar6 + 4);
        *(float *)((longlong)&local_108 + lVar6) =
             *(float *)((longlong)afStack_d0 + lVar6 + 8) + *(float *)((longlong)&local_148 + lVar6)
        ;
        *(float *)((longlong)&local_108 + lVar6 + 4) = fVar19 + fVar18;
        *(float *)((longlong)&uStack_100 + lVar6) = fVar20 + fVar4;
        *(float *)((longlong)&uStack_100 + lVar6 + 4) = fVar21 + fVar5;
        lVar6 = lVar6 + 0x10;
      } while (lVar6 < 0x40);
      fVar23 = fVar23 + fVar22;
      lVar12 = lVar12 + 0x30;
      local_148 = local_108;
      uStack_140 = uStack_100;
      lVar17 = lVar17 + 0x30;
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = CONCAT44(uStack_e4,local_e8);
      uStack_120 = CONCAT44(uStack_dc,uStack_e0);
      local_118 = CONCAT44(uStack_d4,local_d8);
      uStack_110 = CONCAT44(afStack_d0[1],afStack_d0[0]);
    } while (lVar12 != lVar15);
  }
  fVar23 = 1.0 / fVar23;
  do {
    fVar22 = *(float *)((longlong)&local_148 + lVar13 + 4);
    fVar19 = *(float *)((longlong)&uStack_140 + lVar13);
    fVar20 = *(float *)((longlong)&uStack_140 + lVar13 + 4);
    *(float *)((longlong)&local_108 + lVar13) = *(float *)((longlong)&local_148 + lVar13) * fVar23;
    *(float *)((longlong)&local_108 + lVar13 + 4) = fVar22 * fVar23;
    *(float *)((longlong)&uStack_100 + lVar13) = fVar19 * fVar23;
    *(float *)((longlong)&uStack_100 + lVar13 + 4) = fVar20 * fVar23;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 < 0x40);
  fVar22 = 1.0 / param_1[0xe];
  local_138 = local_f8;
  uStack_130 = uStack_f0;
  local_148 = local_108;
  uStack_140 = uStack_100;
  local_118 = CONCAT44(uStack_d4,local_d8);
  param_1[0xf] = fVar22;
  local_128 = CONCAT44(uStack_e4,local_e8);
  uStack_120 = CONCAT44(uStack_dc,uStack_e0);
  uStack_110 = CONCAT44(0x3f800000,afStack_d0[0]);
  uStack_190 = 0x1422873fd;
  puVar9 = (undefined8 *)FMatrix::InverseFast(&local_148,afStack_d0 + 2);
  uVar3 = puVar9[1];
  *(undefined8 *)(param_1 + 0x10) = *puVar9;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar3 = puVar9[3];
  *(undefined8 *)(param_1 + 0x14) = puVar9[2];
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  uVar3 = puVar9[5];
  *(undefined8 *)(param_1 + 0x18) = puVar9[4];
  *(undefined8 *)(param_1 + 0x1a) = uVar3;
  uVar3 = puVar9[7];
  *(undefined8 *)(param_1 + 0x1c) = puVar9[6];
  *(undefined8 *)(param_1 + 0x1e) = uVar3;
  pfVar10 = param_1 + 0x11;
  do {
    pfVar1 = pfVar10 + 4;
    fVar23 = *pfVar10;
    *(float *)((longlong)afStack_188 + (-0x14 - (longlong)param_1) + (longlong)pfVar1) =
         fVar22 * pfVar10[-1];
    fVar19 = pfVar10[1];
    *(float *)((longlong)afStack_188 + (-0x10 - (longlong)param_1) + (longlong)pfVar1) =
         fVar22 * fVar23;
    fVar23 = pfVar10[2];
    *(float *)((longlong)afStack_188 + (-0xc - (longlong)param_1) + (longlong)pfVar1) =
         fVar22 * fVar19;
    *(float *)((longlong)afStack_188 + (-8 - (longlong)param_1) + (longlong)pfVar1) =
         fVar22 * fVar23;
    lVar16 = lVar16 + -1;
    pfVar10 = pfVar1;
  } while (lVar16 != 0);
  *(undefined8 *)(param_1 + 0x20) = local_148;
  *(undefined8 *)(param_1 + 0x22) = uStack_140;
  *(undefined8 *)(param_1 + 0x24) = local_138;
  *(undefined8 *)(param_1 + 0x26) = uStack_130;
  *(undefined8 *)(param_1 + 0x28) = local_128;
  *(undefined8 *)(param_1 + 0x2a) = uStack_120;
  *(undefined8 *)(param_1 + 0x2c) = local_118;
  *(undefined8 *)(param_1 + 0x2e) = uStack_110;
  return param_1;
}



// FUNCTION 142287500 FUN_142287500 body=146 status=ok
// SIG undefined FUN_142287500(void)

undefined8 * FUN_142287500(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x13,0x3e4ccccd);
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 1422875c0 UAnimNotify body=45 status=ok
// SIG undefined UAnimNotify(void)

undefined8 * UAnimNotify::UAnimNotify(undefined8 *param_1)

{
  FUN_141781840();
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1441b96a8;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1422875f0 UAnimNotifyState body=37 status=ok
// SIG undefined UAnimNotifyState(void)

undefined8 * UAnimNotifyState::UAnimNotifyState(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14501f218;
  return param_1;
}



// FUNCTION 142287620 FUN_142287620 body=37 status=ok
// SIG undefined FUN_142287620(void)

undefined8 * FUN_142287620(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_14501f4f0;
  return param_1;
}



// FUNCTION 142287650 FUN_142287650 body=79 status=ok
// SIG undefined FUN_142287650(void)

undefined8 * FUN_142287650(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14501f7c8;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  return param_1;
}



// FUNCTION 1422876a0 UAnimNotifyState_Trail body=79 status=ok
// SIG undefined UAnimNotifyState_Trail(void)

undefined8 * UAnimNotifyState_Trail::UAnimNotifyState_Trail(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14501faa0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 1;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1422876f0 FUN_1422876f0 body=115 status=ok
// SIG undefined FUN_1422876f0(void)

undefined8 * FUN_1422876f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14501ea00;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 3;
  param_1[0xb] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 142287770 UAnimNotify_PlaySound body=71 status=ok
// SIG undefined UAnimNotify_PlaySound(void)

undefined8 * UAnimNotify_PlaySound::UAnimNotify_PlaySound(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_14501ecb8;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  return param_1;
}



// FUNCTION 1422877c0 FUN_1422877c0 body=56 status=ok
// SIG undefined FUN_1422877c0(void)

undefined8 * FUN_1422877c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14501ef68;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 142287800 FUN_142287800 body=286 status=ok
// SIG undefined FUN_142287800(void)

undefined8 * FUN_142287800(undefined8 *param_1)

{
  FUN_1422a1c80();
  *param_1 = &PTR_FUN_14501dd78;
  param_1[5] = &PTR_LAB_14501e0d0;
  param_1[6] = &PTR_LAB_14501e100;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  return param_1;
}



// FUNCTION 142287920 ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(void)

void TArray<FNodeDebugData::DebugItem,FDefaultAllocator>::
     ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FNodeDebugData,FDefaultAllocator>::~TArray<FNodeDebugData,FDefaultAllocator>
                (plVar1 + 3);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 142287980 ~TArray<FNodeDebugData,FDefaultAllocator> body=113 status=ok
// SIG undefined ~TArray<FNodeDebugData,FDefaultAllocator>(void)

void TArray<FNodeDebugData,FDefaultAllocator>::~TArray<FNodeDebugData,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      ~TArray<FNodeDebugData,FDefaultAllocator>(plVar2 + 3);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TArray<FNodeDebugData::DebugItem,FDefaultAllocator>::
      ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(plVar2 + -2);
      plVar2 = plVar2 + 9;
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



// FUNCTION 142287a00 FUN_142287a00 body=105 status=ok
// SIG undefined FUN_142287a00(void)

void FUN_142287a00(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1422557f0(param_1 + 2);
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x20;
    do {
      FRichCurve::~FRichCurve(lVar1);
      lVar1 = lVar1 + 0x90;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142287a70 FUN_142287a70 body=266 status=ok
// SIG undefined FUN_142287a70(void)

longlong * FUN_142287a70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      lVar3 = lVar3 + 0x300;
      do {
        lVar1 = 3;
        lVar4 = lVar3 + 0x170;
        do {
          lVar4 = lVar4 + -0x70;
          FRichCurve::~FRichCurve(lVar4);
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        lVar1 = 3;
        lVar4 = lVar3;
        do {
          lVar4 = lVar4 + -0x70;
          FRichCurve::~FRichCurve(lVar4);
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        lVar1 = 3;
        lVar4 = lVar3 + -0x170;
        do {
          lVar4 = lVar4 + -0x70;
          FRichCurve::~FRichCurve(lVar4);
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        lVar3 = lVar3 + 0x470;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 142287b80 operator<< body=83 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  FUN_1421e8310(param_2,param_1,0);
  FUN_14228b5d0(param_2 + 0x10,param_1,0);
  if (0x14e < *(int *)(param_1 + 0x40)) {
    FUN_1421e8310(param_2 + 0x20,param_1,0);
  }
  return param_1;
}



// FUNCTION 142287be0 FUN_142287be0 body=424 status=ok
// SIG undefined FUN_142287be0(void)

longlong * FUN_142287be0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x55555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,(longlong)(int)puVar6 * 0x30 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_>::Empty(param_2,local_res8[0]);
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x30 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar5 = puVar4;
    }
    operator<<(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142287d90 FUN_142287d90 body=389 status=ok
// SIG undefined FUN_142287d90(void)

longlong * FUN_142287d90(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  puVar6 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x400000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_140871cc0(param_1,*param_2 + (longlong)(int)puVar6 * 4);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 4);
    puVar5 = puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar5 = puVar1;
    }
    FUN_140871cc0(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142287f20 operator* body=375 status=ok
// SIG undefined operator*(void)

float * FAnimPhysPose::operator*(float *param_1,float *param_2,undefined8 *param_3)

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
  float local_98;
  
  fVar7 = *(float *)(param_3 + 1);
  fVar1 = param_1[6];
  fVar8 = (float)((ulonglong)*param_3 >> 0x20);
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  local_98 = (float)*param_3;
  fVar11 = fVar3 * fVar7 - fVar1 * fVar8;
  fVar10 = fVar1 * local_98 - fVar2 * fVar7;
  fVar11 = fVar11 + fVar11;
  fVar9 = fVar2 * fVar8 - fVar3 * local_98;
  fVar4 = param_1[7];
  fVar10 = fVar10 + fVar10;
  fVar9 = fVar9 + fVar9;
  fVar5 = param_1[2];
  *param_2 = (fVar9 * fVar3 - fVar10 * fVar1) + fVar11 * fVar4 + local_98 + *param_1;
  fVar6 = param_1[1];
  param_2[2] = (fVar10 * fVar2 - fVar11 * fVar3) + fVar7 + fVar9 * fVar4 + fVar5;
  param_2[1] = (fVar11 * fVar1 - fVar9 * fVar2) + fVar10 * fVar4 + fVar8 + fVar6;
  return param_2;
}



// FUNCTION 1422880a0 FUN_1422880a0 body=166 status=ok
// SIG undefined FUN_1422880a0(void)

undefined8 * FUN_1422880a0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x88);
  if (puVar2 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar2 + 2,0,0x78);
    *puVar2 = &PTR_FUN_1440104d0;
    puVar2[1] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_14501fd88;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142288150 FUN_142288150 body=371 status=ok
// SIG undefined FUN_142288150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142288150(undefined8 *param_1,float *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = uRam00000001468b5b78;
  *(undefined8 *)param_2 = _DAT_1468b5b70;
  *(undefined8 *)(param_2 + 2) = uVar2;
  uVar2 = uRam00000001468b5b88;
  *(undefined8 *)(param_2 + 4) = _DAT_1468b5b80;
  *(undefined8 *)(param_2 + 6) = uVar2;
  fVar8 = fRam00000001468b5b9c;
  fVar7 = fRam00000001468b5b98;
  fVar6 = fRam00000001468b5b94;
  param_2[8] = _DAT_1468b5b90;
  param_2[9] = fVar6;
  param_2[10] = fVar7;
  param_2[0xb] = fVar8;
  iVar3 = FUN_1422aa260(*param_1,param_3,param_1[1],0);
  fVar6 = fRam0000000146aef0ec;
  if (iVar3 != -1) {
    lVar1 = param_1[1];
    if (((*(int *)(lVar1 + 0x128) < 1) && (*(int *)(lVar1 + 0xe8) != 0)) &&
       ((*(char *)(lVar1 + 0xf0) != '\x06' ||
        ((*(char *)(lVar1 + 0xf1) != '\x06' || (*(char *)(lVar1 + 0xf2) != '\x06')))))) {
      if (*(int *)(lVar1 + 0xe8) == 0) {
        *param_2 = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        param_2[3] = fVar6;
        param_2[4] = 0.0;
        param_2[5] = 0.0;
        param_2[6] = 0.0;
        param_2[7] = 0.0;
        fVar6 = (float)(uRam0000000146aef0e4 & uRam0000000146aef0f4);
        fVar7 = (float)(uRam0000000146aef0e8 & uRam0000000146aef0f8);
        fVar8 = (float)((uint)fRam0000000146aef0ec & uRam0000000146aef0fc);
        param_2[8] = (float)(_DAT_146aef0e0 & _DAT_146aef0f0);
        param_2[9] = fVar6;
        param_2[10] = fVar7;
        param_2[0xb] = fVar8;
      }
      else {
        FUN_1422910c0(lVar1,(longlong)iVar3 * 0x30 + *(longlong *)(lVar1 + 0xe0),param_2,0);
      }
    }
    else {
      AnimationFormat_GetBoneAtom(param_2,lVar1,iVar3,0);
    }
    fVar6 = *param_2;
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    fVar17 = param_2[3];
    auVar4._0_4_ = fVar6 * fVar6 + fVar8 * fVar8;
    auVar4._4_4_ = fVar7 * fVar7 + fVar17 * fVar17;
    auVar4._8_4_ = fVar8 * fVar8 + fVar6 * fVar6;
    auVar4._12_4_ = fVar17 * fVar17 + fVar7 * fVar7;
    fVar13 = auVar4._4_4_ + auVar4._0_4_;
    fVar14 = auVar4._8_4_ + auVar4._4_4_;
    fVar15 = auVar4._12_4_ + auVar4._8_4_;
    fVar16 = auVar4._0_4_ + auVar4._12_4_;
    auVar5._4_4_ = fVar14;
    auVar5._0_4_ = fVar13;
    auVar5._8_4_ = fVar15;
    auVar5._12_4_ = fVar16;
    auVar5 = rsqrtps(auVar4,auVar5);
    fVar9 = auVar5._0_4_;
    fVar10 = auVar5._4_4_;
    fVar11 = auVar5._8_4_;
    fVar12 = auVar5._12_4_;
    fVar9 = (_DAT_146aef170 - fVar9 * fVar9 * _DAT_146aef170 * fVar13) * fVar9 + fVar9;
    fVar10 = (fRam0000000146aef174 - fVar10 * fVar10 * fRam0000000146aef174 * fVar14) * fVar10 +
             fVar10;
    fVar11 = (fRam0000000146aef178 - fVar11 * fVar11 * fRam0000000146aef178 * fVar15) * fVar11 +
             fVar11;
    fVar12 = (fRam0000000146aef17c - fVar12 * fVar12 * fRam0000000146aef17c * fVar16) * fVar12 +
             fVar12;
    fVar7 = (float)(((uint)(((fRam0000000146aef174 - fVar10 * fVar10 * fRam0000000146aef174 * fVar14
                             ) * fVar10 + fVar10) * fVar7) ^ uRam0000000146aef164) &
                    -(uint)(fRam0000000146aef1a4 <= fVar14) ^ uRam0000000146aef164);
    fVar8 = (float)(((uint)(((fRam0000000146aef178 - fVar11 * fVar11 * fRam0000000146aef178 * fVar15
                             ) * fVar11 + fVar11) * fVar8) ^ uRam0000000146aef168) &
                    -(uint)(fRam0000000146aef1a8 <= fVar15) ^ uRam0000000146aef168);
    fVar17 = (float)(((uint)(((fRam0000000146aef17c -
                              fVar12 * fVar12 * fRam0000000146aef17c * fVar16) * fVar12 + fVar12) *
                            fVar17) ^ uRam0000000146aef16c) &
                     -(uint)(fRam0000000146aef1ac <= fVar16) ^ uRam0000000146aef16c);
    *param_2 = (float)(((uint)(((_DAT_146aef170 - fVar9 * fVar9 * _DAT_146aef170 * fVar13) * fVar9 +
                               fVar9) * fVar6) ^ _DAT_146aef160) & -(uint)(_DAT_146aef1a0 <= fVar13)
                      ^ _DAT_146aef160);
    param_2[1] = fVar7;
    param_2[2] = fVar8;
    param_2[3] = fVar17;
  }
  return param_2;
}



// FUNCTION 1422882d0 operator() body=149 status=ok
// SIG undefined operator()(void)

void <lambda_70424a8a9e00ba8506bc0d17a2249be6>::operator()(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *param_1;
      iVar1 = *(int *)(lVar3 + 0x48);
      *(int *)(lVar3 + 0x48) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x4c) < iVar1 + 1) {
        TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar3,iVar1);
      }
      lVar4 = *(longlong *)(lVar3 + 0x40);
      if (*(longlong *)(lVar3 + 0x40) == 0) {
        lVar4 = lVar3;
      }
      *(longlong *)(lVar4 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 142288370 FUN_142288370 body=1991 status=ok
// SIG undefined FUN_142288370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142288370(longlong *param_1,float *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar15 [16];
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
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
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
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  fVar11 = fRam0000000146aef0ec;
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar11;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  fVar11 = (float)((uint)fRam0000000146aef0e4 & uRam0000000146aef0f4);
  fVar12 = (float)((uint)fRam0000000146aef0e8 & uRam0000000146aef0f8);
  fVar13 = (float)((uint)fRam0000000146aef0ec & uRam0000000146aef0fc);
  param_2[8] = (float)((uint)_DAT_146aef0e0 & _DAT_146aef0f0);
  param_2[9] = fVar11;
  param_2[10] = fVar12;
  param_2[0xb] = fVar13;
  if (param_3 != -1) {
    lVar2 = *param_1;
    puVar8 = (undefined8 *)FUN_142288150(param_1 + 1,0,param_3);
    uVar6 = puVar8[1];
    *(undefined8 *)param_2 = *puVar8;
    *(undefined8 *)(param_2 + 2) = uVar6;
    uVar6 = puVar8[3];
    *(undefined8 *)(param_2 + 4) = puVar8[2];
    *(undefined8 *)(param_2 + 6) = uVar6;
    uVar6 = puVar8[5];
    *(undefined8 *)(param_2 + 8) = puVar8[4];
    *(undefined8 *)(param_2 + 10) = uVar6;
    for (iVar1 = *(int *)(*(longlong *)(lVar2 + 0x78) + 8 + (longlong)param_3 * 0x10); iVar1 != -1;
        iVar1 = *(int *)(*(longlong *)(lVar2 + 0x78) + 8 + (longlong)iVar1 * 0x10)) {
      local_108 = _DAT_1468b5b70;
      uStack_100 = uRam00000001468b5b78;
      local_f8 = _DAT_1468b5b80;
      uStack_f0 = uRam00000001468b5b88;
      local_e8 = _DAT_1468b5b90;
      uStack_e0 = uRam00000001468b5b98;
      iVar7 = FUN_1422aa260(param_1[1],iVar1,param_1[2],0);
      if (iVar7 == -1) {
        fVar11 = (float)local_108;
        fVar12 = local_108._4_4_;
        fVar13 = (float)uStack_100;
        fVar24 = uStack_100._4_4_;
        fVar41 = (float)local_e8;
        fVar43 = local_e8._4_4_;
        fVar45 = (float)uStack_e0;
        fVar47 = uStack_e0._4_4_;
        fVar30 = (float)local_f8;
        fVar32 = local_f8._4_4_;
        fVar34 = (float)uStack_f0;
        fVar36 = uStack_f0._4_4_;
      }
      else {
        lVar3 = param_1[2];
        if (((*(int *)(lVar3 + 0x128) < 1) && (*(int *)(lVar3 + 0xe8) != 0)) &&
           ((*(char *)(lVar3 + 0xf0) != '\x06' ||
            ((*(char *)(lVar3 + 0xf1) != '\x06' || (*(char *)(lVar3 + 0xf2) != '\x06')))))) {
          if (*(int *)(lVar3 + 0xe8) != 0) {
            iVar7 = FUN_1422910c0(lVar3,(longlong)iVar7 * 0x30 + *(longlong *)(lVar3 + 0xe0),
                                  &local_108,0);
            goto LAB_14228854d;
          }
          local_f8 = 0;
          uStack_f0 = 0;
          local_f8._0_4_ = 0.0;
          local_f8._4_4_ = 0.0;
          uStack_f0._0_4_ = 0.0;
          uStack_f0._4_4_ = 0.0;
          local_108._0_4_ = 0.0;
          local_108._4_4_ = 0.0;
          uStack_100._0_4_ = 0.0;
          local_e8 = CONCAT44((uint)fRam0000000146aef0e4 & uRam0000000146aef0f4,
                              (uint)_DAT_146aef0e0 & _DAT_146aef0f0);
          uStack_e0 = CONCAT44((uint)fRam0000000146aef0ec & uRam0000000146aef0fc,
                               (uint)fRam0000000146aef0e8 & uRam0000000146aef0f8);
          uStack_100._4_4_ = fRam0000000146aef0ec;
          fVar41 = (float)((uint)_DAT_146aef0e0 & _DAT_146aef0f0);
          fVar43 = (float)((uint)fRam0000000146aef0e4 & uRam0000000146aef0f4);
          fVar45 = (float)((uint)fRam0000000146aef0e8 & uRam0000000146aef0f8);
          fVar47 = (float)((uint)fRam0000000146aef0ec & uRam0000000146aef0fc);
        }
        else {
          iVar7 = AnimationFormat_GetBoneAtom(&local_108,lVar3,iVar7,0);
LAB_14228854d:
          fVar41 = (float)local_e8;
          fVar43 = local_e8._4_4_;
          fVar45 = (float)uStack_e0;
          fVar47 = uStack_e0._4_4_;
        }
        auVar9._0_4_ = (float)local_108 * (float)local_108 + (float)uStack_100 * (float)uStack_100;
        auVar9._4_4_ = local_108._4_4_ * local_108._4_4_ + uStack_100._4_4_ * uStack_100._4_4_;
        auVar9._8_4_ = (float)uStack_100 * (float)uStack_100 + (float)local_108 * (float)local_108;
        auVar9._12_4_ = uStack_100._4_4_ * uStack_100._4_4_ + local_108._4_4_ * local_108._4_4_;
        fVar30 = auVar9._4_4_ + auVar9._0_4_;
        fVar32 = auVar9._8_4_ + auVar9._4_4_;
        fVar34 = auVar9._12_4_ + auVar9._8_4_;
        fVar36 = auVar9._0_4_ + auVar9._12_4_;
        auVar14._4_4_ = fVar32;
        auVar14._0_4_ = fVar30;
        auVar14._8_4_ = fVar34;
        auVar14._12_4_ = fVar36;
        auVar14 = rsqrtps(auVar9,auVar14);
        fVar11 = auVar14._0_4_;
        fVar12 = auVar14._4_4_;
        fVar13 = auVar14._8_4_;
        fVar24 = auVar14._12_4_;
        fVar11 = (_DAT_146aef170 - fVar11 * fVar11 * fVar30 * _DAT_146aef170) * fVar11 + fVar11;
        fVar12 = (fRam0000000146aef174 - fVar12 * fVar12 * fVar32 * fRam0000000146aef174) * fVar12 +
                 fVar12;
        fVar13 = (fRam0000000146aef178 - fVar13 * fVar13 * fVar34 * fRam0000000146aef178) * fVar13 +
                 fVar13;
        fVar24 = (fRam0000000146aef17c - fVar24 * fVar24 * fVar36 * fRam0000000146aef17c) * fVar24 +
                 fVar24;
        fVar11 = (float)(((uint)(((_DAT_146aef170 - fVar11 * fVar11 * fVar30 * _DAT_146aef170) *
                                  fVar11 + fVar11) * (float)local_108) ^ _DAT_146aef160) &
                         -(uint)(_DAT_146aef1a0 <= fVar30) ^ _DAT_146aef160);
        fVar12 = (float)(((uint)(((fRam0000000146aef174 -
                                  fVar12 * fVar12 * fVar32 * fRam0000000146aef174) * fVar12 + fVar12
                                 ) * local_108._4_4_) ^ uRam0000000146aef164) &
                         -(uint)(fRam0000000146aef1a4 <= fVar32) ^ uRam0000000146aef164);
        fVar13 = (float)(((uint)(((fRam0000000146aef178 -
                                  fVar13 * fVar13 * fVar34 * fRam0000000146aef178) * fVar13 + fVar13
                                 ) * (float)uStack_100) ^ uRam0000000146aef168) &
                         -(uint)(fRam0000000146aef1a8 <= fVar34) ^ uRam0000000146aef168);
        fVar24 = (float)(((uint)(((fRam0000000146aef17c -
                                  fVar24 * fVar24 * fVar36 * fRam0000000146aef17c) * fVar24 + fVar24
                                 ) * uStack_100._4_4_) ^ uRam0000000146aef16c) &
                         -(uint)(fRam0000000146aef1ac <= fVar36) ^ uRam0000000146aef16c);
        local_108 = CONCAT44(fVar12,fVar11);
        uStack_100 = CONCAT44(fVar24,fVar13);
        fVar30 = (float)local_f8;
        fVar32 = local_f8._4_4_;
        fVar34 = (float)uStack_f0;
        fVar36 = uStack_f0._4_4_;
      }
      fVar29 = fRam0000000146aef17c;
      fVar28 = fRam0000000146aef178;
      fVar27 = fRam0000000146aef174;
      fVar25 = _DAT_146aef170;
      fVar23 = fRam0000000146aef0e8;
      fVar21 = fRam0000000146aef0e4;
      fVar37 = _DAT_146aef0e0;
      auVar14 = *(undefined1 (*) [16])(param_2 + 8);
      local_118 = _DAT_146aef1c0;
      fStack_114 = fRam0000000146aef1c4;
      fStack_110 = fRam0000000146aef1c8;
      fStack_10c = fRam0000000146aef1cc;
      auVar5._4_4_ = fVar43;
      auVar5._0_4_ = fVar41;
      auVar5._8_4_ = fVar45;
      auVar5._12_4_ = fVar47;
      auVar9 = minps(auVar14,auVar5);
      auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146aef1c4);
      auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146aef1c0);
      auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146aef1c8);
      auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146aef1cc);
      iVar7 = movmskps(iVar7,auVar10);
      if (iVar7 == 0) {
        fVar37 = *param_2;
        fVar21 = param_2[1];
        fVar23 = param_2[2];
        fVar25 = param_2[3];
        fVar27 = fVar41 * param_2[4];
        fVar28 = fVar43 * param_2[5];
        fVar29 = fVar45 * param_2[6];
        fVar17 = fVar47 * param_2[7];
        fVar16 = fVar25 * fVar11 * _DAT_146aef150 + fVar37 * fVar24 +
                 fVar23 * fVar12 * _DAT_146aef140 + fVar21 * fVar13 * _DAT_146aef130;
        fVar18 = fVar23 * fVar11 * fRam0000000146aef154 + fVar21 * fVar24 +
                 fVar25 * fVar12 * fRam0000000146aef144 + fVar37 * fVar13 * fRam0000000146aef134;
        fVar20 = fVar21 * fVar11 * fRam0000000146aef158 + fVar23 * fVar24 +
                 fVar37 * fVar12 * fRam0000000146aef148 + fVar25 * fVar13 * fRam0000000146aef138;
        fVar19 = fVar37 * fVar11 * fRam0000000146aef15c + fVar25 * fVar24 +
                 fVar21 * fVar12 * fRam0000000146aef14c + fVar23 * fVar13 * fRam0000000146aef13c;
        fVar37 = fVar29 * fVar12 - fVar28 * fVar13;
        fVar21 = fVar27 * fVar13 - fVar29 * fVar11;
        fVar23 = fVar28 * fVar11 - fVar27 * fVar12;
        fVar25 = fVar17 * fVar24 - fVar17 * fVar24;
        fVar37 = fVar37 + fVar37;
        fVar21 = fVar21 + fVar21;
        fVar23 = fVar23 + fVar23;
        fVar25 = fVar25 + fVar25;
        fVar30 = (fVar23 * fVar12 - fVar21 * fVar13) + fVar37 * fVar24 + fVar27 + fVar30;
        fVar32 = (fVar37 * fVar13 - fVar23 * fVar11) + fVar21 * fVar24 + fVar28 + fVar32;
        fVar34 = (fVar21 * fVar11 - fVar37 * fVar12) + fVar23 * fVar24 + fVar29 + fVar34;
        fVar36 = (fVar25 * fVar24 - fVar25 * fVar24) + fVar25 * fVar24 + fVar17 + fVar36;
      }
      else {
        fVar19 = fVar12 + fVar12;
        fVar22 = fVar13 + fVar13;
        fVar26 = (fVar11 + fVar11) * fVar11;
        fVar20 = (fVar11 + fVar11) * fVar24;
        fVar36 = *param_2;
        fVar17 = param_2[1];
        fVar16 = param_2[2];
        fVar18 = param_2[3];
        fVar48 = (fVar22 * fVar24 + fVar19 * fVar11) * fVar41;
        fVar49 = (fVar20 + fVar22 * fVar12) * fVar43;
        fVar50 = (fVar19 * fVar24 + fVar22 * fVar11) * fVar45;
        fVar31 = fVar43 * (fVar19 * fVar11 - fVar22 * fVar24);
        fVar33 = fVar45 * (fVar22 * fVar12 - fVar20);
        fVar35 = fVar41 * (fVar22 * fVar11 - fVar19 * fVar24);
        fVar24 = (float)((uint)((_DAT_146aef0e0 - (fVar22 * fVar13 + fVar19 * fVar12)) * fVar41) &
                        _DAT_146aef0f0);
        fVar20 = (float)((uint)((fRam0000000146aef0e4 - (fVar22 * fVar13 + fVar26)) * fVar43) &
                        uRam0000000146aef0f4);
        fVar19 = (float)((uint)((fRam0000000146aef0e8 - (fVar19 * fVar12 + fVar26)) * fVar45) &
                        uRam0000000146aef0f8);
        fVar22 = (float)((uint)((fRam0000000146aef0ec - (fVar26 + fVar26)) * fVar47) &
                        uRam0000000146aef0fc);
        fVar11 = fVar17 + fVar17;
        fVar12 = fVar16 + fVar16;
        fVar26 = (fVar36 + fVar36) * fVar36;
        fVar13 = fVar18 * (fVar36 + fVar36);
        fVar42 = (fVar18 * fVar12 + fVar36 * fVar11) * param_2[8];
        fVar44 = (fVar13 + fVar17 * fVar12) * param_2[9];
        fVar46 = (fVar18 * fVar11 + fVar36 * fVar12) * param_2[10];
        fVar38 = param_2[9] * (fVar36 * fVar11 - fVar18 * fVar12);
        fVar39 = param_2[10] * (fVar17 * fVar12 - fVar13);
        fVar40 = param_2[8] * (fVar36 * fVar12 - fVar18 * fVar11);
        fVar36 = (float)((uint)((_DAT_146aef0e0 - (fVar12 * fVar16 + fVar11 * fVar17)) * param_2[8])
                        & _DAT_146aef0f0);
        fVar16 = (float)((uint)((fRam0000000146aef0e4 - (fVar12 * fVar16 + fVar26)) * param_2[9]) &
                        uRam0000000146aef0f4);
        fVar17 = (float)((uint)((fRam0000000146aef0e8 - (fVar11 * fVar17 + fVar26)) * param_2[10]) &
                        uRam0000000146aef0f8);
        fVar18 = (float)((uint)((fRam0000000146aef0ec - (fVar26 + fVar26)) * param_2[0xb]) &
                        uRam0000000146aef0fc);
        fVar11 = param_2[4];
        fVar12 = param_2[5];
        fVar13 = param_2[6];
        local_168 = fVar42 * fVar31 + fVar36 * fVar24 + fVar40 * fVar50 + fVar18 * fVar30;
        fStack_164 = fVar42 * fVar20 + fVar36 * fVar48 + fVar40 * fVar33 + fVar18 * fVar32;
        fStack_160 = fVar42 * fVar49 + fVar36 * fVar35 + fVar40 * fVar19 + fVar18 * fVar34;
        fStack_15c = fVar42 * fVar22 + fVar36 * fVar22 + fVar40 * fVar22 +
                     fVar18 * fRam0000000146aef0ec;
        local_158 = fVar16 * fVar31 + fVar38 * fVar24 + fVar44 * fVar50 + fVar18 * fVar30;
        fStack_154 = fVar16 * fVar20 + fVar38 * fVar48 + fVar44 * fVar33 + fVar18 * fVar32;
        fStack_150 = fVar16 * fVar49 + fVar38 * fVar35 + fVar44 * fVar19 + fVar18 * fVar34;
        fStack_14c = fVar16 * fVar22 + fVar38 * fVar22 + fVar44 * fVar22 +
                     fVar18 * fRam0000000146aef0ec;
        local_148 = fVar39 * fVar31 + fVar46 * fVar24 + fVar17 * fVar50 + fVar18 * fVar30;
        fStack_144 = fVar39 * fVar20 + fVar46 * fVar48 + fVar17 * fVar33 + fVar18 * fVar32;
        fStack_140 = fVar39 * fVar49 + fVar46 * fVar35 + fVar17 * fVar19 + fVar18 * fVar34;
        fStack_13c = fVar39 * fVar22 + fVar46 * fVar22 + fVar17 * fVar22 +
                     fVar18 * fRam0000000146aef0ec;
        local_138 = fVar12 * fVar31 + fVar11 * fVar24 + fVar13 * fVar50 +
                    fRam0000000146aef0ec * fVar30;
        fStack_134 = fVar12 * fVar20 + fVar11 * fVar48 + fVar13 * fVar33 +
                     fRam0000000146aef0ec * fVar32;
        fStack_130 = fVar12 * fVar49 + fVar11 * fVar35 + fVar13 * fVar19 +
                     fRam0000000146aef0ec * fVar34;
        fStack_12c = fVar12 * fVar22 + fVar11 * fVar22 + fVar13 * fVar22 +
                     fRam0000000146aef0ec * fRam0000000146aef0ec;
        FMatrix::RemoveScaling(&local_168);
        fVar11 = (float)(-(uint)(local_118 <= fVar41 * auVar14._0_4_) &
                         (_DAT_146aef1b0 ^ (uint)fVar37) ^ _DAT_146aef1b0);
        fVar12 = (float)(-(uint)(fStack_114 <= fVar43 * auVar14._4_4_) &
                         (uRam0000000146aef1b4 ^ (uint)fVar21) ^ uRam0000000146aef1b4);
        fVar13 = (float)(-(uint)(fStack_110 <= fVar45 * auVar14._8_4_) &
                         (uRam0000000146aef1b8 ^ (uint)fVar23) ^ uRam0000000146aef1b8);
        local_168 = local_168 * fVar11;
        fStack_164 = fStack_164 * fVar11;
        fStack_160 = fStack_160 * fVar11;
        fStack_150 = fStack_150 * fVar12;
        fStack_154 = fStack_154 * fVar12;
        local_158 = local_158 * fVar12;
        fStack_140 = fStack_140 * fVar13;
        local_148 = local_148 * fVar13;
        fStack_144 = fStack_144 * fVar13;
        FQuat::FQuat(&local_128,&local_168);
        local_178 = 0x322bcc77;
        auVar15._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
        auVar15._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
        auVar15._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
        auVar15._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
        fVar30 = auVar15._4_4_ + auVar15._0_4_;
        fVar32 = auVar15._8_4_ + auVar15._4_4_;
        fVar34 = auVar15._12_4_ + auVar15._8_4_;
        fVar37 = auVar15._0_4_ + auVar15._12_4_;
        auVar4._4_4_ = fVar32;
        auVar4._0_4_ = fVar30;
        auVar4._8_4_ = fVar34;
        auVar4._12_4_ = fVar37;
        auVar9 = rsqrtps(auVar15,auVar4);
        fVar11 = auVar9._0_4_;
        fVar12 = auVar9._4_4_;
        fVar13 = auVar9._8_4_;
        fVar24 = auVar9._12_4_;
        fVar11 = (fVar25 - fVar11 * fVar11 * fVar30 * fVar25) * fVar11 + fVar11;
        fVar12 = (fVar27 - fVar12 * fVar12 * fVar32 * fVar27) * fVar12 + fVar12;
        fVar13 = (fVar28 - fVar13 * fVar13 * fVar34 * fVar28) * fVar13 + fVar13;
        fVar24 = (fVar29 - fVar24 * fVar24 * fVar37 * fVar29) * fVar24 + fVar24;
        fVar36 = 0.0;
        fVar16 = (float)(((uint)(((fVar25 - fVar11 * fVar11 * fVar30 * fVar25) * fVar11 + fVar11) *
                                local_128) ^ _DAT_146aef160) & -(uint)(1e-08 <= fVar30) ^
                        _DAT_146aef160);
        fVar18 = (float)(((uint)(((fVar27 - fVar12 * fVar12 * fVar32 * fVar27) * fVar12 + fVar12) *
                                fStack_124) ^ uRam0000000146aef164) & -(uint)(1e-08 <= fVar32) ^
                        uRam0000000146aef164);
        fVar20 = (float)(((uint)(((fVar28 - fVar13 * fVar13 * fVar34 * fVar28) * fVar13 + fVar13) *
                                fStack_120) ^ uRam0000000146aef168) & -(uint)(1e-08 <= fVar34) ^
                        uRam0000000146aef168);
        fVar19 = (float)(((uint)(((fVar29 - fVar24 * fVar24 * fVar37 * fVar29) * fVar24 + fVar24) *
                                fStack_11c) ^ uRam0000000146aef16c) & -(uint)(1e-08 <= fVar37) ^
                        uRam0000000146aef16c);
        fVar30 = local_138;
        fVar32 = fStack_134;
        fVar34 = fStack_130;
        local_128 = fVar16;
        fStack_124 = fVar18;
        fStack_120 = fVar20;
        fStack_11c = fVar19;
      }
      *param_2 = fVar16;
      param_2[1] = fVar18;
      param_2[2] = fVar20;
      param_2[3] = fVar19;
      param_2[4] = fVar30;
      param_2[5] = fVar32;
      param_2[6] = fVar34;
      param_2[7] = fVar36;
      param_2[8] = fVar41 * auVar14._0_4_;
      param_2[9] = fVar43 * auVar14._4_4_;
      param_2[10] = fVar45 * auVar14._8_4_;
      param_2[0xb] = fVar47 * auVar14._12_4_;
    }
  }
  return param_2;
}



// FUNCTION 142288b50 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_ApplyAdditive::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142288ba0 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_SaveCachedPose::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142288c20 `scalar_deleting_destructor' body=165 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_SubInstance::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142288cd0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_TransitionPoseEvaluator::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142288d40 FUN_142288d40 body=81 status=ok
// SIG undefined FUN_142288d40(void)

undefined8 * FUN_142288d40(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142288da0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_UseCachedPose::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142288df0 FUN_142288df0 body=156 status=ok
// SIG undefined FUN_142288df0(void)

undefined8 * FUN_142288df0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142288e90 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FAnimNode_BlendListByEnum::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142288ee0 FUN_142288ee0 body=199 status=ok
// SIG undefined FUN_142288ee0(void)

longlong FUN_142288ee0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_142287a00(param_1 + 0x158);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_142244f90(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 142288fb0 AddAnimNotifies body=24 status=ok
// SIG undefined AddAnimNotifies(void)

void FAnimNotifyQueue::AddAnimNotifies(void)

{
  FUN_142289290();
  return;
}



// FUNCTION 142288fd0 AddAnimNotifies body=702 status=ok
// SIG undefined AddAnimNotifies(void)

void FAnimNotifyQueue::AddAnimNotifies
               (longlong param_1,undefined1 param_2,longlong *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  int local_res18 [2];
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uVar2 = *(uint *)(param_3 + 5);
  puVar1 = (uint *)(param_3 + 2);
  local_b8 = 0;
  uStack_b4 = 1;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar12 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar9 = local_b8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar9;
      if (bVar4) goto LAB_1422890ae;
      uVar3 = puVar12[lVar6 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (iStack_a0 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_1422890ae:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_3 + 5);
  uStack_78 = 0xffffffff;
  uStack_74 = uStack_a4;
  local_70 = CONCAT44(uStack_9c,iStack_a0);
  uStack_60 = CONCAT44(uStack_b4,local_b8);
  uVar10 = uVar3 & 0xffffffe0;
  local_68._0_4_ = SUB84(param_3,0);
  local_68._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_90 = (undefined4)local_68;
  uStack_8c = local_68._4_4_;
  iStack_88 = local_b8;
  uStack_84 = uStack_b4;
  local_80 = puVar1;
  local_68 = param_3;
  puStack_58 = puVar1;
  uStack_48 = local_70;
  uStack_50 = uStack_78;
  uStack_4c = uStack_74;
  uStack_a4 = uVar3;
  if (uVar3 != uVar2) {
    puVar12 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142289171;
      uVar7 = puVar12[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_a4 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_142289171:
      uStack_a4 = uVar2;
    }
  }
  do {
    if (((uStack_74 == uStack_a4) && (local_80 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_8c,local_90) == param_3)) {
      return;
    }
    plVar8 = (longlong *)
             ((longlong)(int)uStack_74 * 0x20 + *(longlong *)CONCAT44(uStack_8c,local_90));
    lVar6 = *plVar8;
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
      lVar5 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar5 = param_1 + 0x58;
      }
      iVar9 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                               (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
      if (iVar9 != -1) {
        do {
          plVar11 = (longlong *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x20));
          if (*plVar11 == lVar6) {
            if ((iVar9 != -1) && (plVar11 != (longlong *)0x0)) goto LAB_142289238;
            break;
          }
          iVar9 = (int)plVar11[3];
        } while (iVar9 != -1);
      }
    }
    local_98 = plVar8;
    FUN_142285fa0(param_1 + 0x20,local_res18,&local_98,0);
    plVar11 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0x20));
LAB_142289238:
    FUN_142289290(param_1,param_2,plVar8 + 1,plVar11 + 1,param_4);
    uStack_78 = uStack_78 & ~uStack_84;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
  } while( true );
}



// FUNCTION 142289290 FUN_142289290 body=527 status=ok
// SIG undefined FUN_142289290(void)

void FUN_142289290(int *param_1,char param_2,longlong *param_3,longlong *param_4,float param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  float local_res18 [2];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong local_50;
  longlong *local_48;
  float *local_40;
  longlong *local_38;
  float *local_30;
  
  plVar7 = (longlong *)*param_3;
  plVar8 = plVar7 + (longlong)(int)param_3[1] * 2;
  do {
    if (plVar7 == plVar8) {
      return;
    }
    if (plVar7[1] == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *plVar7;
    }
    if ((local_50 != 0) && ((param_2 != '\0' || (*(char *)(local_50 + 0xa1) != '\0')))) {
      if (((*(float *)(local_50 + 0x3c) <= param_5) || (cVar3 = FUN_1422b49c0(), cVar3 != '\0')) &&
         (((*(char *)(local_50 + 0x98) == '\0' || (*(char *)(local_50 + 0x98) != '\x01')) ||
          (*param_1 < *(int *)(local_50 + 0x9c))))) {
        if (*(longlong *)(local_50 + 0x50) == 0) {
          uVar4 = param_1[2] * 0xbb38435 + 0x3619636b;
          param_1[2] = uVar4;
          local_res18[0] = (float)(uVar4 & 0x7fffff | 0x3f800000);
          bVar2 = local_res18[0] - (float)(int)local_res18[0] < *(float *)(local_50 + 0x94);
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(longlong *)(local_50 + 0x50) == 0) {
            iVar1 = (int)param_4[1];
            *(int *)(param_4 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar1);
            }
            plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *param_4);
            *plVar5 = *plVar7;
            plVar5[1] = plVar7[1];
          }
          else {
            TArray<FAnimNotifyEventReference,FDefaultAllocator>::
            AddUniqueImpl<FAnimNotifyEventReference_const_&>(param_4,plVar7);
          }
          goto LAB_14228946f;
        }
      }
      if ((*(float *)(local_50 + 0x3c) <= param_5) || (*(longlong *)(local_50 + 0x50) == 0)) {
        if (((*(char *)(local_50 + 0x98) == '\0') ||
            ((*(char *)(local_50 + 0x98) != '\x01' || (*param_1 < *(int *)(local_50 + 0x9c))))) ||
           (*(longlong *)(local_50 + 0x50) == 0)) goto LAB_14228946f;
        local_38 = &local_50;
        local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,3);
        pplVar9 = &local_38;
        local_30 = local_res18;
        puVar6 = local_54;
      }
      else {
        local_48 = &local_50;
        local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,2);
        pplVar9 = &local_48;
        local_40 = local_res18;
        puVar6 = local_58;
      }
      FUN_142286280(param_1 + 0x1c,puVar6,pplVar9,0);
    }
LAB_14228946f:
    plVar7 = plVar7 + 2;
  } while( true );
}



// FUNCTION 1422894a0 AddAnimNotifiesToDestNoFiltering body=162 status=ok
// SIG undefined AddAnimNotifiesToDestNoFiltering(void)

void FAnimNotifyQueue::AddAnimNotifiesToDestNoFiltering
               (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_2;
  plVar4 = plVar3 + (longlong)(int)param_2[1] * 2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if ((plVar3[1] != 0) && (*plVar3 != 0)) {
      if (*(longlong *)(*plVar3 + 0x50) == 0) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
        }
        plVar2 = (longlong *)((longlong)iVar1 * 0x10 + *param_3);
        *plVar2 = *plVar3;
        plVar2[1] = plVar3[1];
      }
      else {
        TArray<FAnimNotifyEventReference,FDefaultAllocator>::
        AddUniqueImpl<FAnimNotifyEventReference_const_&>(param_3,plVar3);
      }
    }
  }
  return;
}



// FUNCTION 142289550 AddAnimNotify body=93 status=ok
// SIG undefined AddAnimNotify(void)

void FAnimNotifyQueue::AddAnimNotify(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x10),iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x10));
  *puVar2 = param_2;
  puVar2[1] = param_3;
  return;
}



// FUNCTION 1422895b0 AddDebugItem body=268 status=ok
// SIG undefined AddDebugItem(void)

void FNodeDebugData::AddDebugItem(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar4 = (longlong *)FString::FString(local_48);
  FString::FString(&local_38,plVar4);
  local_28 = param_3;
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
  }
  plVar2 = (longlong *)(*plVar4 + (longlong)iVar3 * 0x28);
  *plVar2 = local_38;
  *(undefined4 *)(plVar2 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)plVar2 + 0xc) = local_30._4_4_;
  *(undefined1 *)(plVar2 + 2) = param_3;
  plVar2[3] = 0;
  plVar2[4] = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  TArray<FNodeDebugData,FDefaultAllocator>::~TArray<FNodeDebugData,FDefaultAllocator>(&local_20);
  if (local_38 != 0) {
    FMemory::Free();
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x10) * 5 + -2;
  if (*(int *)(*plVar4 + 0xc + lVar1 * 8) < 0xc) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (*plVar4 + lVar1 * 8,0xc);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422896c0 AdvanceMarkerBackwards body=188 status=ok
// SIG undefined AdvanceMarkerBackwards(void)

void AdvanceMarkerBackwards(uint *param_1,longlong param_2,char param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = *param_1;
  uVar6 = (ulonglong)(int)uVar5;
  iVar1 = (int)param_4[1];
  lVar2 = *param_4;
  iVar7 = (iVar1 - uVar5) + -1;
  lVar3 = *(longlong *)(lVar2 + uVar6 * 0x10);
  iVar8 = iVar1;
  while (uVar4 = uVar5, lVar3 != param_2) {
    uVar4 = (uint)uVar6;
    iVar8 = iVar8 + -1;
    if ((iVar8 < 0) || ((uVar5 == 0 && (param_3 == '\0')))) break;
    iVar7 = (iVar7 + 1) % iVar1;
    uVar5 = (iVar1 - iVar7) - 1;
    uVar6 = (ulonglong)uVar5;
    *param_1 = uVar5;
    lVar2 = *param_4;
    lVar3 = *(longlong *)(lVar2 + (longlong)(int)uVar5 * 0x10);
  }
  if ((((int)uVar4 < 0) || ((int)param_4[1] <= (int)uVar4)) ||
     (*(longlong *)(lVar2 + (longlong)(int)uVar4 * 0x10) != param_2)) {
    *param_1 = 0xffffffff;
  }
  return;
}



// FUNCTION 142289780 AdvanceMarkerForwards body=146 status=ok
// SIG undefined AdvanceMarkerForwards(void)

void AdvanceMarkerForwards(uint *param_1,longlong param_2,char param_3,longlong *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = (ulonglong)(int)uVar1;
  iVar3 = (int)param_4[1];
  if (*(longlong *)(*param_4 + uVar2 * 0x10) != param_2) {
    uVar4 = (ulonglong)uVar1;
    do {
      uVar1 = (uint)uVar2;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) break;
      uVar1 = (int)uVar4 + 1;
      *param_1 = uVar1;
      if ((uVar1 == *(uint *)(param_4 + 1)) && (param_3 == '\0')) break;
      uVar4 = (longlong)(int)uVar1 % (longlong)(int)*(uint *)(param_4 + 1);
      uVar2 = uVar4 & 0xffffffff;
      uVar1 = (uint)uVar4;
      *param_1 = uVar1;
      uVar4 = (ulonglong)(int)uVar1;
    } while (*(longlong *)(*param_4 + uVar4 * 0x10) != param_2);
  }
  if ((((int)uVar1 < 0) || ((int)param_4[1] <= (int)uVar1)) ||
     (*(longlong *)(*param_4 + (longlong)(int)uVar1 * 0x10) != param_2)) {
    *param_1 = 0xffffffff;
  }
  return;
}



// FUNCTION 142289820 FUN_142289820 body=594 status=ok
// SIG undefined FUN_142289820(void)

void FUN_142289820(longlong param_1,longlong *param_2,float param_3,undefined8 param_4,
                  float *param_5,int *param_6,int *param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  bool bVar7;
  float fVar8;
  
  uVar6 = (undefined1)param_4;
  FUN_14229e250(param_1,param_2 + 2,0.0 < param_3,param_4,param_5,param_6,param_7);
  if (0.0 < param_3) {
    iVar2 = *param_7;
    iVar4 = 0;
    lVar5 = 0;
    do {
      if (iVar2 == -1) {
        fVar8 = param_3 + *param_5;
        if (*(float *)(param_1 + 0x90) <= param_3 + *param_5) {
          fVar8 = *(float *)(param_1 + 0x90);
        }
        *param_5 = fVar8;
        iVar2 = *param_7;
        break;
      }
      iVar3 = (int)param_2[1];
      if (iVar4 < iVar3) {
        *param_6 = iVar2;
        lVar1 = *param_2;
        AdvanceMarkerForwards(param_7,*(undefined8 *)(lVar5 + lVar1),uVar6,param_1 + 0x1a0);
        iVar2 = *param_7;
        if (iVar2 == -1) {
          param_3 = *(float *)(lVar5 + 8 + lVar1);
        }
        iVar3 = (int)param_2[1];
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x10;
      }
    } while (iVar4 < iVar3);
    if (param_2[6] == 0) {
      *param_7 = -1;
      bVar7 = *param_6 == -1;
    }
    else {
      if ((iVar2 != -1) && (0 < (int)param_2[1])) {
        AdvanceMarkerForwards(param_7,param_2[6],uVar6,param_1 + 0x1a0);
      }
      bVar7 = *param_6 == -1;
    }
  }
  else {
    iVar2 = *param_6;
    iVar4 = 0;
    lVar5 = 0;
    do {
      if (iVar2 == -1) {
        param_3 = param_3 + *param_5;
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        *param_5 = param_3;
        iVar2 = *param_6;
        break;
      }
      iVar3 = (int)param_2[1];
      if (iVar4 < iVar3) {
        *param_7 = iVar2;
        lVar1 = *param_2;
        AdvanceMarkerBackwards(param_6,*(undefined8 *)(lVar5 + lVar1),uVar6,param_1 + 0x1a0);
        iVar2 = *param_6;
        if (iVar2 == -1) {
          param_3 = *(float *)(lVar5 + 8 + lVar1);
        }
        iVar3 = (int)param_2[1];
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 0x10;
      }
    } while (iVar4 < iVar3);
    if ((iVar2 != -1) && (0 < (int)param_2[1])) {
      AdvanceMarkerBackwards(param_6,param_2[5],uVar6,param_1 + 0x1a0);
      iVar2 = *param_6;
    }
    if (param_2[5] == 0) {
      *param_6 = -1;
      return;
    }
    bVar7 = iVar2 == -1;
  }
  if ((!bVar7) && (*param_7 != -1)) {
    fVar8 = (float)FUN_1422952b0(param_1,param_6,param_7,(int)param_2[7]);
    *param_5 = fVar8;
  }
  return;
}



// FUNCTION 142289a80 FUN_142289a80 body=1365 status=ok
// SIG undefined FUN_142289a80(void)

void FUN_142289a80(ulonglong param_1,char param_2,float param_3,longlong *param_4,float *param_5,
                  int *param_6,int *param_7,longlong *param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  long lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte local_res18;
  
  fVar12 = *param_5;
  fVar14 = param_3 * *(float *)(param_1 + 0x94);
  fVar13 = 0.0;
  uVar5 = param_1 & 0xffffffffffffff00;
  local_res18 = 0;
  if (0.0 <= fVar12) {
    fVar11 = *(float *)(param_1 + 0x90);
    if (fVar12 <= *(float *)(param_1 + 0x90)) {
      fVar11 = fVar12;
    }
  }
  else {
    fVar11 = 0.0;
  }
  *param_5 = fVar11;
  if (param_3 <= 0.0) {
    iVar10 = *param_6;
    while (iVar10 != -1) {
      lVar3 = (long)uVar5;
      puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x1a0));
      if (((char)uVar5 == '\0') && (local_res18 = 1, *param_5 < *(float *)(puVar7 + 1))) {
        fVar13 = -*(float *)(param_1 + 0x90);
      }
      fVar12 = (*(float *)(puVar7 + 1) + fVar13) - *param_5;
      if (fVar12 <= fVar14) {
        fVar13 = *(float *)(param_1 + 0x90);
        fVar11 = *param_5 + fVar14;
        piVar9 = param_6;
        param_6 = param_7;
        goto joined_r0x000142289fca;
      }
      *param_5 = *(float *)(puVar7 + 1);
      fVar14 = fVar14 - fVar12;
      *param_7 = *param_6;
      param_7[1] = (int)-fVar14;
      iVar10 = (int)param_8[1];
      lVar8 = (longlong)iVar10;
      *(int *)(param_8 + 1) = iVar10 + 1;
      if (*(int *)((longlong)param_8 + 0xc) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_8,iVar10);
      }
      puVar1 = (undefined8 *)(*param_8 + lVar8 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(*param_8 + lVar8 * 0x10) = *puVar7;
      *(float *)(*param_8 + 8 + lVar8 * 0x10) = fVar14;
LAB_142289e90:
      iVar4 = *param_6 + -1;
      *param_6 = iVar4;
      if (-1 < iVar4) {
LAB_142289eb0:
        plVar6 = (longlong *)*param_4;
        plVar2 = plVar6 + (int)param_4[1];
        if (plVar6 != plVar2) {
          iVar10 = *param_6;
          do {
            if (*plVar6 == *(longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x1a0)))
            goto LAB_142289f07;
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar2);
        }
        goto LAB_142289e90;
      }
      if (param_2 != '\0') {
        iVar4 = *(int *)(param_1 + 0x1a8) + -1;
        *param_6 = iVar4;
        fVar13 = fVar13 - *(float *)(param_1 + 0x90);
        goto LAB_142289eb0;
      }
      *param_6 = -1;
      iVar10 = -1;
LAB_142289f07:
      uVar5 = (ulonglong)local_res18;
    }
    fVar12 = *param_5;
    fVar13 = fVar12 + fVar14;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    *param_5 = fVar13;
    piVar9 = param_6;
    param_6 = param_7;
  }
  else {
    iVar10 = *param_7;
    if (iVar10 != -1) {
      do {
        lVar3 = (long)uVar5;
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x1a0));
        if (((char)uVar5 == '\0') &&
           (local_res18 = 1,
           *(float *)(puVar7 + 1) <= *param_5 && *param_5 != *(float *)(puVar7 + 1))) {
          fVar13 = *(float *)(param_1 + 0x90);
        }
        fVar12 = (*(float *)(puVar7 + 1) + fVar13) - *param_5;
        if (fVar14 <= fVar12) {
          fVar13 = *(float *)(param_1 + 0x90);
          fVar11 = *param_5 + fVar14;
          piVar9 = param_7;
joined_r0x000142289fca:
          if (1e-08 < ABS(fVar13)) {
            fVar13 = (float)(int)(fVar11 / fVar13) * fVar13;
            if (ABS(fVar11) < ABS(fVar13)) {
              fVar13 = fVar11;
            }
            fVar11 = fVar11 - fVar13;
            *param_5 = fVar11;
            if (fVar11 < 0.0) {
              *param_5 = fVar11 + *(float *)(param_1 + 0x90);
            }
          }
          else {
            AK::MemoryMgr::StartProfileThreadUsage(lVar3);
            *param_5 = 0.0;
          }
          piVar9[1] = (int)(fVar12 - fVar14);
          fVar14 = (float)param_6[1] - fVar14;
          goto LAB_142289f48;
        }
        *param_5 = *(float *)(puVar7 + 1);
        fVar14 = fVar14 - fVar12;
        *param_6 = *param_7;
        param_6[1] = (int)-fVar14;
        iVar10 = (int)param_8[1];
        lVar8 = (longlong)iVar10;
        *(int *)(param_8 + 1) = iVar10 + 1;
        if (*(int *)((longlong)param_8 + 0xc) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_8,iVar10);
        }
        puVar1 = (undefined8 *)(*param_8 + lVar8 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(*param_8 + lVar8 * 0x10) = *puVar7;
        *(float *)(*param_8 + 8 + lVar8 * 0x10) = fVar14;
        while( true ) {
          iVar4 = *param_7 + 1;
          *param_7 = iVar4;
          if (*(int *)(param_1 + 0x1a8) <= iVar4) break;
LAB_142289c61:
          plVar6 = (longlong *)*param_4;
          plVar2 = plVar6 + (int)param_4[1];
          if (plVar6 != plVar2) {
            iVar10 = *param_7;
            do {
              if (*plVar6 == *(longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x1a0)))
              goto LAB_142289cb8;
              plVar6 = plVar6 + 1;
            } while (plVar6 != plVar2);
          }
        }
        if (param_2 != '\0') {
          *param_7 = 0;
          fVar13 = fVar13 + *(float *)(param_1 + 0x90);
          iVar4 = 0;
          goto LAB_142289c61;
        }
        *param_7 = -1;
        iVar10 = -1;
LAB_142289cb8:
        uVar5 = (ulonglong)local_res18;
      } while (iVar10 != -1);
    }
    fVar12 = *param_5;
    fVar13 = fVar12 + fVar14;
    if (*(float *)(param_1 + 0x90) <= fVar12 + fVar14) {
      fVar13 = *(float *)(param_1 + 0x90);
    }
    *param_5 = fVar13;
    fVar13 = *(float *)(param_1 + 0x90) - fVar13;
    piVar9 = param_7;
  }
  piVar9[1] = (int)fVar13;
  fVar14 = (float)param_6[1] - (*param_5 - fVar12);
LAB_142289f48:
  param_6[1] = (int)fVar14;
  return;
}



// FUNCTION 142289fe0 FUN_142289fe0 body=159 status=ok
// SIG undefined FUN_142289fe0(void)

void FUN_142289fe0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar3 + 0x770) + 0x73) * 0x10);
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar1);
      iVar4 = *(int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0xa0) = iVar4 + iVar2;
    if (*(int *)(param_1 + 0xa4) < iVar4 + iVar2) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar4 * 0x30 + *plVar1),0,(longlong)iVar2 * 0x30);
  }
  return;
}



// FUNCTION 14228a080 FUN_14228a080 body=1200 status=ok
// SIG undefined FUN_14228a080(void)

void FUN_14228a080(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  undefined8 local_a8;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  plVar9 = (longlong *)(param_2 + 0x20);
  local_res10 = param_2;
  FAnimNotifyQueue::AddAnimNotifiesToDestNoFiltering(param_1,param_2 + 0x10,param_1 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x48);
  puVar1 = (uint *)(param_2 + 0x30);
  iVar14 = 0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_2 + 0x40);
    if (*(uint **)(param_2 + 0x40) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar3 = *puVar13;
    iStack_90 = iVar14;
    local_a8._0_4_ = iVar14;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar10 = (int)local_a8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8._0_4_ = iVar10;
      if (bVar4) goto LAB_14228a16a;
      uVar3 = puVar13[lVar7 + 1];
    }
    local_a8._4_4_ = -uVar3 & uVar3;
    iVar10 = 0x1f;
    if (local_a8._4_4_ != 0) {
      for (; local_a8._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (local_a8._4_4_ == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_94 = (iStack_90 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_14228a16a:
      uStack_94 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x48);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  local_98 = -1 << ((byte)uVar3 & 0x1f);
  iStack_58 = (int)local_a8;
  uStack_54 = local_a8._4_4_;
  uVar12 = uVar3 & 0xffffffe0;
  iStack_80 = (int)local_a8;
  uStack_7c = local_a8._4_4_;
  puStack_a0 = puVar1;
  uStack_94 = uVar3;
  local_78 = puVar1;
  local_60 = plVar9;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = plVar9;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar3 != uVar2) {
    puVar13 = *(uint **)(param_2 + 0x40);
    if (*(uint **)(param_2 + 0x40) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar6 = puVar13[(int)uVar3 >> 5] & local_98;
    iVar10 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_14228a232;
      uVar6 = puVar13[(longlong)iVar10 + 1];
      local_98 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_94 = (uVar12 - iVar10) + 0x1f;
    uVar3 = uStack_94;
    if ((int)uVar2 < (int)uStack_94) {
LAB_14228a232:
      uStack_94 = uVar2;
      uVar3 = uVar2;
    }
  }
  while (((uStack_6c != uVar3 || (local_78 != puVar1)) || (local_88 != plVar9))) {
    plVar8 = (longlong *)((longlong)(int)uStack_6c * 0x20 + *local_88);
    lVar7 = *plVar8;
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
      lVar5 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar5 = param_1 + 0x58;
      }
      iVar10 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                                (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          plVar11 = (longlong *)((longlong)iVar10 * 0x20 + *(longlong *)(param_1 + 0x20));
          if (*plVar11 == lVar7) {
            if ((iVar10 != -1) && (plVar11 != (longlong *)0x0)) goto LAB_14228a2f8;
            break;
          }
          iVar10 = (int)plVar11[3];
        } while (iVar10 != -1);
      }
    }
    local_res18 = plVar8;
    FUN_142285fa0(param_1 + 0x20,local_res8,&local_res18,0);
    plVar11 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x20));
LAB_14228a2f8:
    FAnimNotifyQueue::AddAnimNotifiesToDestNoFiltering(param_1,plVar8 + 1,plVar11 + 1);
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  plVar9 = (longlong *)(local_res10 + 0x70);
  uVar2 = *(uint *)(local_res10 + 0x98);
  puVar1 = (uint *)(local_res10 + 0x80);
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(local_res10 + 0x90);
    if (*(uint **)(local_res10 + 0x90) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    local_a8._4_4_ = *puVar13;
    iStack_90 = iVar14;
    while (local_a8._4_4_ == 0) {
      iStack_90 = iStack_90 + 0x20;
      local_a8._0_4_ = iVar14 + 1;
      local_a8._4_4_ = 1;
      uStack_94 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_14228a3eb;
      local_a8._4_4_ = puVar13[(longlong)iVar14 + 1];
      iVar14 = (int)local_a8;
    }
    local_a8._4_4_ = -local_a8._4_4_ & local_a8._4_4_;
    iVar10 = 0x1f;
    if (local_a8._4_4_ != 0) {
      for (; local_a8._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (local_a8._4_4_ == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_94 = (iStack_90 - iVar10) + 0x1f;
    local_a8._0_4_ = iVar14;
    if ((int)uVar2 < (int)uStack_94) {
      uStack_94 = uVar2;
    }
  }
LAB_14228a3eb:
  uVar3 = *(uint *)(local_res10 + 0x98);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  local_98 = -1 << ((byte)uVar3 & 0x1f);
  iStack_58 = (int)local_a8;
  uStack_54 = local_a8._4_4_;
  uVar12 = uVar3 & 0xffffffe0;
  iStack_80 = (int)local_a8;
  uStack_7c = local_a8._4_4_;
  uStack_94 = uVar3;
  local_78 = puVar1;
  local_60 = plVar9;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  local_88 = plVar9;
  if (uVar3 != uVar2) {
    puVar13 = *(uint **)(local_res10 + 0x90);
    if (*(uint **)(local_res10 + 0x90) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar6 = puVar13[(int)uVar3 >> 5] & local_98;
    iVar14 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_14228a4b3;
      uVar6 = puVar13[(longlong)iVar14 + 1];
      local_98 = 0xffffffff;
      iVar14 = iVar14 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    uStack_94 = (uVar12 - iVar14) + 0x1f;
    uVar3 = uStack_94;
    if ((int)uVar2 < (int)uStack_94) {
LAB_14228a4b3:
      uStack_94 = uVar2;
      uVar3 = uVar2;
    }
  }
  while (((uStack_6c != uVar3 || (local_78 != puVar1)) || (local_88 != plVar9))) {
    local_a8 = *local_88 + (longlong)(int)uStack_6c * 0x18;
    puStack_a0 = (uint *)(local_a8 + 8);
    FUN_142286280(param_1 + 0x70,&local_res10,&local_a8,0);
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  return;
}



// FUNCTION 14228a530 ApplyForces body=2525 status=ok
// SIG undefined ApplyForces(void)

void FAnimPhysSpring::ApplyForces(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  
  if ((char)param_1[10] != '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      local_d0 = (float)(int)param_1[7];
      puVar5 = &local_d8;
      local_d8 = param_1[6];
    }
    else {
      puVar5 = (undefined8 *)FAnimPhysPose::operator*(lVar3,&local_d8,param_1 + 6);
    }
    local_108 = *puVar5;
    lVar7 = param_1[1];
    local_100 = *(float *)(puVar5 + 1);
    if (lVar7 == 0) {
      local_d0 = (float)*(undefined4 *)((longlong)param_1 + 0x44);
      puVar5 = &local_d8;
      local_d8 = *(undefined8 *)((longlong)param_1 + 0x3c);
    }
    else {
      puVar5 = (undefined8 *)FAnimPhysPose::operator*(lVar7,&local_d8,(longlong)param_1 + 0x3c);
    }
    local_d8 = param_1[6];
    local_d0 = *(float *)(param_1 + 7);
    if (lVar3 == 0) {
      puVar6 = &local_d8;
    }
    else {
      fVar13 = *(float *)(lVar3 + 0x14);
      fVar11 = (float)((ulonglong)local_d8 >> 0x20);
      fVar14 = *(float *)(lVar3 + 0x18);
      fVar15 = *(float *)(lVar3 + 0x10);
      fVar8 = *(float *)(lVar3 + 0x1c);
      local_e8._0_4_ = (float)local_d8;
      puVar6 = &local_e8;
      fVar17 = local_d0 * fVar13 - fVar11 * fVar14;
      fVar12 = (float)local_e8 * fVar14 - local_d0 * fVar15;
      fVar17 = fVar17 + fVar17;
      fVar10 = fVar11 * fVar15 - (float)local_e8 * fVar13;
      fVar12 = fVar12 + fVar12;
      fVar10 = fVar10 + fVar10;
      local_e0 = (fVar15 * fVar12 - fVar13 * fVar17) + fVar8 * fVar10 + local_d0;
      local_e8 = CONCAT44((fVar14 * fVar17 - fVar10 * fVar15) + fVar8 * fVar12 + fVar11,
                          (fVar13 * fVar10 - fVar14 * fVar12) + fVar8 * fVar17 + (float)local_e8);
    }
    uVar1 = *puVar6;
    local_f0 = *(float *)(puVar6 + 1);
    local_d8 = *(undefined8 *)((longlong)param_1 + 0x3c);
    local_d0 = *(float *)((longlong)param_1 + 0x44);
    if (lVar7 != 0) {
      fVar13 = *(float *)(lVar7 + 0x10);
      fVar11 = (float)((ulonglong)local_d8 >> 0x20);
      fVar14 = *(float *)(lVar7 + 0x14);
      fVar15 = *(float *)(lVar7 + 0x18);
      local_e8._0_4_ = (float)local_d8;
      fVar17 = local_d0 * fVar14 - fVar11 * fVar15;
      fVar12 = (float)local_e8 * fVar15 - local_d0 * fVar13;
      fVar17 = fVar17 + fVar17;
      fVar10 = fVar11 * fVar13 - (float)local_e8 * fVar14;
      fVar8 = *(float *)(lVar7 + 0x1c);
      fVar12 = fVar12 + fVar12;
      fVar10 = fVar10 + fVar10;
      local_d0 = (fVar12 * fVar13 - fVar17 * fVar14) + local_d0 + fVar10 * fVar8;
      local_d8 = CONCAT44((fVar17 * fVar15 - fVar10 * fVar13) + fVar11 + fVar12 * fVar8,
                          (fVar10 * fVar14 - fVar12 * fVar15) + (float)local_e8 + fVar17 * fVar8);
    }
    local_118._0_4_ = (float)*puVar5;
    local_118._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
    local_118._0_4_ = (float)local_118 - (float)local_108;
    local_118._4_4_ = local_118._4_4_ - local_108._4_4_;
    fVar10 = *(float *)(puVar5 + 1) - local_100;
    local_e8 = local_d8;
    uVar4 = local_e8;
    local_e0 = local_d0;
    fVar8 = local_118._4_4_ * local_118._4_4_ + (float)local_118 * (float)local_118 +
            fVar10 * fVar10;
    fVar11 = -(SQRT(fVar8) * *(float *)(param_1 + 9) * param_2);
    fVar13 = (float)local_118;
    fVar14 = local_118._4_4_;
    fVar15 = fVar10;
    if ((fVar8 != 1.0) &&
       (fVar13 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, fVar15 = DAT_1468b5d98, 1e-08 <= fVar8)) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar15 = auVar9._0_4_;
      fVar15 = fVar15 + fVar15 * (0.5 - fVar8 * 0.5 * fVar15 * fVar15);
      fVar15 = fVar15 + fVar15 * (0.5 - fVar8 * 0.5 * fVar15 * fVar15);
      fVar13 = (float)local_118 * fVar15;
      fVar14 = local_118._4_4_ * fVar15;
      fVar15 = fVar10 * fVar15;
    }
    fVar13 = fVar13 * fVar11;
    fVar14 = fVar14 * fVar11;
    fVar15 = fVar15 * fVar11;
    if (lVar3 != 0) {
      local_f8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      fVar10 = -fVar13;
      fVar11 = -fVar14;
      fVar8 = -fVar15;
      *(float *)(lVar3 + 0x20) = fVar10 + *(float *)(lVar3 + 0x20);
      *(float *)(lVar3 + 0x24) = fVar11 + *(float *)(lVar3 + 0x24);
      *(float *)(lVar3 + 0x28) = fVar8 + *(float *)(lVar3 + 0x28);
      *(float *)(lVar3 + 0x2c) =
           (local_f8._4_4_ * fVar8 - local_f0 * fVar11) + *(float *)(lVar3 + 0x2c);
      local_f8._0_4_ = (float)uVar1;
      *(float *)(lVar3 + 0x34) =
           ((float)local_f8 * fVar11 - local_f8._4_4_ * fVar10) + *(float *)(lVar3 + 0x34);
      *(float *)(lVar3 + 0x30) =
           (local_f0 * fVar10 - (float)local_f8 * fVar8) + *(float *)(lVar3 + 0x30);
      lVar7 = param_1[1];
    }
    local_f8 = uVar1;
    local_e8 = uVar4;
    if (lVar7 != 0) {
      local_e8._4_4_ = (float)((ulonglong)local_d8 >> 0x20);
      *(float *)(lVar7 + 0x20) = fVar13 + *(float *)(lVar7 + 0x20);
      *(float *)(lVar7 + 0x24) = fVar14 + *(float *)(lVar7 + 0x24);
      *(float *)(lVar7 + 0x28) = fVar15 + *(float *)(lVar7 + 0x28);
      *(float *)(lVar7 + 0x2c) =
           (local_e8._4_4_ * fVar15 - local_d0 * fVar14) + *(float *)(lVar7 + 0x2c);
      local_e8._0_4_ = (float)local_d8;
      *(float *)(lVar7 + 0x34) =
           ((float)local_e8 * fVar14 - local_e8._4_4_ * fVar13) + *(float *)(lVar7 + 0x34);
      *(float *)(lVar7 + 0x30) =
           (local_d0 * fVar13 - (float)local_e8 * fVar15) + *(float *)(lVar7 + 0x30);
    }
  }
  if (*(char *)((longlong)param_1 + 0x51) == '\0') {
    return;
  }
  cVar2 = *(char *)((longlong)param_1 + 0x2c);
  fVar13 = 0.0;
  local_118 = 0;
  local_110 = 0.0;
  if (cVar2 == '\0') {
    lVar3 = param_1[1];
    fVar14 = *(float *)(lVar3 + 0x18);
    fVar15 = fVar14 + fVar14;
    fVar8 = -*(float *)(lVar3 + 0x14);
    fVar8 = fVar8 + fVar8;
    fVar14 = (fVar8 * *(float *)(lVar3 + 0x14) - fVar15 * fVar14) + 1.0;
    local_110 = fVar8 * *(float *)(lVar3 + 0x1c) + fVar15 * *(float *)(lVar3 + 0x10);
    fVar15 = fVar15 * *(float *)(lVar3 + 0x1c) - fVar8 * *(float *)(lVar3 + 0x10);
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        lVar3 = param_1[1];
        fVar14 = *(float *)(lVar3 + 0x14);
        fVar15 = fVar14 + fVar14;
        fVar8 = -*(float *)(lVar3 + 0x10);
        fVar8 = fVar8 + fVar8;
        local_110 = (fVar8 * *(float *)(lVar3 + 0x10) - fVar15 * fVar14) + 1.0;
        local_118 = CONCAT44(fVar8 * *(float *)(lVar3 + 0x1c) + fVar15 * *(float *)(lVar3 + 0x18),
                             fVar15 * *(float *)(lVar3 + 0x1c) - fVar8 * *(float *)(lVar3 + 0x18));
      }
      goto LAB_14228ac93;
    }
    lVar3 = param_1[1];
    fVar15 = *(float *)(lVar3 + 0x10);
    fVar8 = fVar15 + fVar15;
    fVar11 = -*(float *)(lVar3 + 0x18);
    fVar11 = fVar11 + fVar11;
    fVar14 = fVar11 * *(float *)(lVar3 + 0x1c) + fVar8 * *(float *)(lVar3 + 0x14);
    local_110 = fVar8 * *(float *)(lVar3 + 0x1c) - fVar11 * *(float *)(lVar3 + 0x14);
    fVar15 = (fVar11 * *(float *)(lVar3 + 0x18) - fVar8 * fVar15) + 1.0;
  }
  local_118 = CONCAT44(fVar15,fVar14);
LAB_14228ac93:
  fVar14 = *(float *)((longlong)param_1 + 0x14);
  fVar15 = *(float *)(param_1 + 3);
  fVar8 = *(float *)(param_1 + 2);
  fVar10 = *(float *)(param_1 + 5);
  fVar12 = (float)((ulonglong)param_1[4] >> 0x20);
  local_d8._0_4_ = (float)param_1[4];
  fVar18 = fVar10 * fVar14 - fVar12 * fVar15;
  fVar16 = (float)local_d8 * fVar15 - fVar10 * fVar8;
  fVar18 = fVar18 + fVar18;
  fVar17 = fVar12 * fVar8 - (float)local_d8 * fVar14;
  fVar11 = *(float *)((longlong)param_1 + 0x1c);
  fVar16 = fVar16 + fVar16;
  fVar17 = fVar17 + fVar17;
  local_d0 = (fVar16 * fVar8 - fVar18 * fVar14) + fVar10 + fVar17 * fVar11;
  local_d8 = CONCAT44((fVar18 * fVar15 - fVar17 * fVar8) + fVar12 + fVar16 * fVar11,
                      (fVar17 * fVar14 - fVar16 * fVar15) + (float)local_d8 + fVar18 * fVar11);
  FQuat::FindBetweenVectors(&local_e8,&local_118,&local_d8);
  fVar14 = -1.0;
  if ((-1.0 <= local_dc) && (fVar14 = local_dc, 1.0 <= local_dc)) {
    fVar14 = 1.0;
  }
  fVar14 = ::_guard_xfg_dispatch_icall_nop(fVar14);
  fVar15 = 1.0 - local_dc * local_dc;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (SQRT(fVar15) < 0.0001) {
    local_e8._0_4_ = 1.0;
    local_e0 = 0.0;
  }
  else {
    fVar15 = 1.0 / SQRT(fVar15);
    local_e8._0_4_ = (float)local_e8 * fVar15;
    fVar13 = local_e8._4_4_ * fVar15;
    local_e0 = local_e0 * fVar15;
  }
  fVar14 = (fVar14 + fVar14) * *(float *)((longlong)param_1 + 0x4c);
  lVar3 = *param_1;
  fVar15 = -(fVar14 * (float)local_e8 * param_2);
  fVar8 = -(fVar14 * fVar13 * param_2);
  fVar13 = -(fVar14 * local_e0 * param_2);
  if (lVar3 != 0) {
    *(float *)(lVar3 + 0x2c) = fVar15 + *(float *)(lVar3 + 0x2c);
    *(float *)(lVar3 + 0x30) = fVar8 + *(float *)(lVar3 + 0x30);
    *(float *)(lVar3 + 0x34) = fVar13 + *(float *)(lVar3 + 0x34);
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    *(float *)(lVar3 + 0x2c) = *(float *)(lVar3 + 0x2c) - fVar15;
    *(float *)(lVar3 + 0x30) = *(float *)(lVar3 + 0x30) - fVar8;
    *(float *)(lVar3 + 0x34) = *(float *)(lVar3 + 0x34) - fVar13;
  }
  return;
}



// FUNCTION 14228af10 ApplyMontageNotifies body=566 status=ok
// SIG undefined ApplyMontageNotifies(void)

void FAnimNotifyQueue::ApplyMontageNotifies(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
  
  plVar1 = (longlong *)(param_1 + 0x20);
  local_98 = 0;
  uVar3 = *(uint *)(param_1 + 0x48);
  puVar2 = (uint *)(param_1 + 0x30);
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_14228afea;
      uVar4 = puVar11[lVar8 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14228afea:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x48);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
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
    puVar11 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar7 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14228b0b2;
      uVar7 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14228b0b2:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar8 = (longlong)(int)uStack_5c * 0x20 + *plVar1;
    cVar6 = FUN_142277110(param_2,lVar8);
    if (cVar6 != '\0') {
      AddAnimNotifiesToDestNoFiltering(param_1,lVar8 + 8,param_1 + 0x10);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(plVar1);
  return;
}



// FUNCTION 14228b150 BeginDestroy body=36 status=ok
// SIG undefined BeginDestroy(void)

void UAnimSequence::BeginDestroy(longlong param_1)

{
  FUN_1417502d0();
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  return;
}



// FUNCTION 14228b180 BranchFlow body=449 status=ok
// SIG undefined BranchFlow(void)

longlong FNodeDebugData::BranchFlow(float *param_1,float param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_98 [16];
  float local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar3 = *(undefined8 *)(param_1 + 10);
  plVar6 = (longlong *)FString::FString(local_98,param_3);
  local_88 = param_2 * *param_1;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_80 = 0;
  local_78 = 0;
  FString::FString(&local_70,plVar6);
  local_60 = uVar3;
  local_48 = uVar4;
  if (*plVar6 != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 2) + -8 + (longlong)(int)param_1[4] * 0x28);
  lVar7 = (longlong)iVar2;
  lVar1 = *(longlong *)(param_1 + 2) + (longlong)(int)param_1[4] * 0x28;
  *(int *)(lVar1 + -8) = iVar2 + 1;
  if (*(int *)(lVar1 + -4) < iVar2 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar1 + -0x10,iVar2);
  }
  uVar5 = local_80;
  lVar1 = *(longlong *)(lVar1 + -0x10);
  local_80 = 0;
  *(float *)(lVar1 + lVar7 * 0x48) = local_88;
  *(undefined8 *)(lVar1 + 8 + lVar7 * 0x48) = uVar5;
  *(undefined4 *)(lVar1 + 0x10 + lVar7 * 0x48) = (undefined4)local_78;
  *(undefined4 *)(lVar1 + 0x14 + lVar7 * 0x48) = local_78._4_4_;
  *(longlong *)(lVar1 + 0x18 + lVar7 * 0x48) = local_70;
  *(undefined4 *)(lVar1 + 0x20 + lVar7 * 0x48) = (undefined4)local_68;
  *(undefined4 *)(lVar1 + 0x24 + lVar7 * 0x48) = local_68._4_4_;
  *(undefined8 *)(lVar1 + 0x28 + lVar7 * 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x30 + lVar7 * 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x38 + lVar7 * 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40 + lVar7 * 0x48) = uVar4;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  TArray<FNodeDebugData,FDefaultAllocator>::~TArray<FNodeDebugData,FDefaultAllocator>(&local_58);
  if (local_70 != 0) {
    FMemory::Free();
  }
  TArray<FNodeDebugData::DebugItem,FDefaultAllocator>::
  ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(&local_80);
  fVar8 = param_1[4];
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 2) + -0x10 + (longlong)(int)fVar8 * 0x28);
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 2) + -8 + (longlong)(int)fVar8 * 0x28) * 9 + -8
  ;
  if (*(int *)(lVar7 + 0xc + lVar1 * 8) < 0x32) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (lVar7 + lVar1 * 8,0x32);
    fVar8 = param_1[4];
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 2) + -8 + (longlong)(int)fVar8 * 0x28);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + -0x10 + (longlong)(int)fVar8 * 0x28);
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return lVar1 + (longlong)(iVar2 + -1) * 0x48;
}



// FUNCTION 14228b350 BranchingPointNotify body=17 status=ok
// SIG undefined BranchingPointNotify(void)

void UAnimNotify::BranchingPointNotify(longlong *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014228b35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))(param_1,*param_2,param_2[1]);
  return;
}



// FUNCTION 14228b370 BranchingPointNotifyBegin body=68 status=ok
// SIG undefined BranchingPointNotifyBegin(void)

void UAnimNotifyState::BranchingPointNotifyBegin(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[2] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FAnimNotifyEvent::GetDuration();
  }
                    /* WARNING: Could not recover jumptable at 0x00014228b3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x288))(param_1,*param_2,param_2[1],uVar1);
  return;
}



// FUNCTION 14228b3c0 FUN_14228b3c0 body=108 status=ok
// SIG undefined FUN_14228b3c0(void)

void FUN_14228b3c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FAnimNotifyEvent::GetDuration();
  }
  (**(code **)(*param_1 + 0x288))(param_1,*param_2,param_2[1],uVar2);
  if (*param_2 != 0) {
    lVar1 = FUN_1423ac7e0();
    if (lVar1 != 0) {
      lVar1 = UAnimInstance::GetMontageInstanceForID(lVar1,(int)param_2[3]);
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x188) = *(int *)(lVar1 + 0x188) + 1;
      }
    }
  }
  return;
}



// FUNCTION 14228b430 FUN_14228b430 body=20 status=ok
// SIG undefined FUN_14228b430(void)

void FUN_14228b430(longlong *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014228b43d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1,*param_2,param_2[1],0);
  return;
}



// FUNCTION 14228b450 FUN_14228b450 body=74 status=ok
// SIG undefined FUN_14228b450(void)

void FUN_14228b450(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x298))(param_1,*param_2,param_2[1],0);
  if (*param_2 != 0) {
    lVar1 = FUN_1423ac7e0();
    if (lVar1 != 0) {
      lVar1 = UAnimInstance::GetMontageInstanceForID(lVar1,(int)param_2[3]);
      if (lVar1 != 0) {
        *(int *)(lVar1 + 0x188) = *(int *)(lVar1 + 0x188) + -1;
      }
    }
  }
  return;
}



// FUNCTION 14228b4c0 FUN_14228b4c0 body=272 status=ok
// SIG undefined FUN_14228b4c0(void)

void FUN_14228b4c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar6 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar9 = lVar7 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar9 + 8 + *param_1) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + *param_1), plVar1 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6 + -1;
  if ((bVar2) && (iVar6 + -1 < 1)) {
    iVar6 = (int)param_1[1];
    uVar8 = 0;
    uVar10 = uVar8;
    iVar4 = iVar6;
    if (0 < iVar6) {
      do {
        if (((*(int *)(uVar8 + 8 + *param_1) == 0) ||
            (plVar1 = *(longlong **)(uVar8 + *param_1), plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x10))(), cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar10,1,1);
        }
        else {
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = uVar8 + 0x10;
        }
        iVar4 = (int)param_1[1];
      } while ((int)uVar10 < iVar4);
    }
    iVar5 = iVar4 * 2;
    if (iVar5 < 3) {
      iVar5 = 2;
    }
    *(int *)(param_1 + 2) = iVar5;
    if ((iVar5 < iVar6) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
    }
  }
  return;
}



// FUNCTION 14228b5d0 FUN_14228b5d0 body=511 status=ok
// SIG undefined FUN_14228b5d0(void)

void FUN_14228b5d0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x10;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 4,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_141e3dd50(param_2,param_1);
  }
  return;
}



// FUNCTION 14228b7d0 CacheBones body=17 status=ok
// SIG undefined CacheBones(void)

void FPoseLinkBase::CacheBones(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014228b7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    return;
  }
  return;
}



// FUNCTION 14228b7f0 FUN_14228b7f0 body=60 status=ok
// SIG undefined FUN_14228b7f0(void)

void FUN_14228b7f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 14228b8c0 CacheBones_AnyThread body=123 status=ok
// SIG undefined CacheBones_AnyThread(void)

void FAnimNode_StateMachine::CacheBones_AnyThread(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (iVar2 = 0, 0 < *(int *)(lVar1 + 0x18))) {
    do {
      fVar3 = (float)FUN_1422960a0(param_1,iVar2);
      if (0.0 < fVar3) {
        local_res8 = *param_2;
        FUN_14228c540(param_1,iVar2,&local_res8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x18));
  }
  return;
}



// FUNCTION 14228b940 FUN_14228b940 body=277 status=ok
// SIG undefined FUN_14228b940(void)

void FUN_14228b940(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  iVar4 = 0;
  *(longlong *)(param_1 + 0x48) = lVar8 + 0x3a0;
  iVar3 = *(int *)(lVar8 + 0x3a8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((*(int *)(param_1 + 0x44) < iVar3) && (*(int *)(param_1 + 0x44) != iVar3)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x38,iVar3);
    iVar4 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar4 + iVar3;
  if (*(int *)(param_1 + 0x44) < iVar4 + iVar3) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow();
  }
  puVar1 = (undefined8 *)(lVar8 + 0x460);
  *(undefined8 **)(param_1 + 0x60) = puVar1;
  sVar6 = 0;
  if ((puVar1 != (undefined8 *)0x0) &&
     (lVar8 = (longlong)*(int *)(lVar8 + 0x468), sVar6 = 0, 0 < lVar8)) {
    psVar7 = (short *)*puVar1;
    sVar5 = 0;
    do {
      sVar6 = sVar5 + 1;
      if (*psVar7 == -1) {
        sVar6 = sVar5;
      }
      lVar8 = lVar8 + -1;
      psVar7 = psVar7 + 1;
      sVar5 = sVar6;
    } while (lVar8 != 0);
  }
  *(short *)(param_1 + 0x68) = sVar6;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((*(int *)(param_1 + 0x5c) < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x50);
  }
  uVar2 = *(ushort *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar4 = iVar3 + (uint)uVar2;
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(int *)(param_1 + 0x5c) < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 8),0,(ulonglong)uVar2 << 3);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  return;
}



// FUNCTION 14228ba60 FUN_14228ba60 body=106 status=ok
// SIG undefined FUN_14228ba60(void)

void FUN_14228ba60(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 8))) {
    iVar1 = *(int *)(param_1 + 0x30);
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    *(longlong *)(param_1 + 0x40) = (longlong)iVar1 * 0x38 + *plVar3;
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 14228bad0 CalculateCenterOfMass body=600 status=ok
// SIG undefined CalculateCenterOfMass(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FAnimPhys::CalculateCenterOfMass(float *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_c4;
  float local_bc;
  float local_b0;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar12 = 0.0;
  fVar15 = 0.0;
  piVar7 = (int *)*param_3;
  fVar13 = 0.0;
  fVar14 = 0.0;
  piVar2 = piVar7 + (longlong)*(int *)(param_3 + 1) * 3;
  if (piVar7 != piVar2) {
    fVar13 = 0.0;
    fVar14 = 0.0;
    do {
      lVar6 = *param_2;
      uVar3 = *(undefined8 *)(lVar6 + (longlong)*piVar7 * 0xc);
      fVar10 = (float)uVar3;
      fVar15 = *(float *)(lVar6 + 8 + (longlong)*piVar7 * 0xc);
      fStack_c4 = (float)((ulonglong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(lVar6 + (longlong)piVar7[1] * 0xc);
      fVar4 = *(float *)(lVar6 + 8 + (longlong)piVar7[1] * 0xc);
      fVar8 = (float)((ulonglong)uVar3 >> 0x20);
      local_bc = (float)uVar3;
      piVar1 = piVar7 + 2;
      piVar7 = piVar7 + 3;
      uVar3 = *(undefined8 *)(lVar6 + (longlong)*piVar1 * 0xc);
      fVar5 = *(float *)(lVar6 + 8 + (longlong)*piVar1 * 0xc);
      fVar9 = (float)((ulonglong)uVar3 >> 0x20);
      local_b0 = (float)uVar3;
      fVar11 = ((fVar5 * fVar8 - fVar9 * fVar4) * fVar10 -
               (fVar5 * fStack_c4 - fVar9 * fVar15) * local_bc) +
               (fVar4 * fStack_c4 - fVar8 * fVar15) * local_b0;
      fVar12 = fVar12 + fVar11;
      fVar13 = (fVar8 + fStack_c4 + fVar9) * fVar11 + fVar13;
      fVar14 = (fVar4 + fVar15 + fVar5) * fVar11 + fVar14;
      fVar15 = (local_bc + fVar10 + local_b0) * fVar11 + *param_1;
      param_1[1] = fVar13;
      param_1[2] = fVar14;
      *param_1 = fVar15;
    } while (piVar7 != piVar2);
  }
  fVar12 = 0.25 / fVar12;
  *param_1 = fVar15 * fVar12;
  param_1[1] = fVar13 * fVar12;
  param_1[2] = fVar14 * fVar12;
  return param_1;
}



// FUNCTION 14228bd30 CalculateInertia body=1788 status=ok
// SIG undefined CalculateInertia(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FAnimPhys::CalculateInertia(float *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_170 [4];
  float local_160 [26];
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined8 local_e0;
  float local_d8 [44];
  
  piVar19 = (int *)*param_3;
  local_170[0] = 0.0;
  local_170[1] = 0.0;
  local_170[2] = 0.0;
  piVar1 = piVar19 + (longlong)*(int *)(param_3 + 1) * 3;
  local_160[0] = 0.0;
  local_160[1] = 0.0;
  local_160[2] = 0.0;
  fVar32 = 0.0;
  fVar27 = 0.0;
  fVar29 = 0.0;
  fVar34 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  fVar28 = 0.0;
  if (piVar19 != piVar1) {
    lVar3 = *param_2;
    do {
      local_f0 = *(float *)(lVar3 + 8 + (longlong)*piVar19 * 0xc);
      uVar2 = *(undefined8 *)(lVar3 + (longlong)*piVar19 * 0xc);
      local_f8 = uVar2;
      local_f8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_ec = *(undefined8 *)(lVar3 + (longlong)piVar19[1] * 0xc);
      local_e4 = *(float *)(lVar3 + 8 + (longlong)piVar19[1] * 0xc);
      fVar27 = (float)((ulonglong)local_ec >> 0x20);
      local_e0 = *(undefined8 *)(lVar3 + (longlong)piVar19[2] * 0xc);
      local_d8[0] = *(float *)(lVar3 + 8 + (longlong)piVar19[2] * 0xc);
      fVar29 = (float)((ulonglong)local_e0 >> 0x20);
      fVar34 = ((local_d8[0] * fVar27 - fVar29 * local_e4) * (float)uVar2 -
               (local_d8[0] * local_f8._4_4_ - fVar29 * local_f0) * (float)local_ec) +
               (local_e4 * local_f8._4_4_ - fVar27 * local_f0) * (float)local_e0;
      fVar32 = fVar32 + fVar34;
      iVar18 = 0;
      do {
        iVar11 = iVar18 + 1;
        iVar12 = iVar18 + 2;
        iVar17 = iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                          (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        iVar12 = iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                          (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        if (iVar18 == 0) {
          pfVar4 = local_170;
          fVar30 = (float)local_e0;
          fVar31 = (float)uVar2;
          fVar28 = (float)local_ec;
        }
        else if (iVar18 == 1) {
          pfVar4 = local_170 + 1;
          fVar30 = fVar29;
          fVar31 = local_f8._4_4_;
          fVar28 = fVar27;
        }
        else {
          pfVar4 = local_170 + 2;
          fVar30 = local_d8[0];
          fVar31 = local_f0;
          fVar28 = local_e4;
        }
        *pfVar4 = ((fVar30 + fVar31 + fVar28) * fVar28 + (fVar31 + fVar30) * fVar31 +
                  fVar30 * fVar30) * fVar34 + *pfVar4;
        if (iVar18 == 0) {
          pfVar4 = local_160;
        }
        else {
          pfVar4 = local_160 + 1;
          if (iVar18 != 1) {
            pfVar4 = local_160 + 2;
          }
        }
        if (iVar17 == 0) {
          pfVar5 = (float *)&local_f8;
        }
        else {
          pfVar5 = (float *)((longlong)&local_f8 + 4);
          if (iVar17 != 1) {
            pfVar5 = &local_f0;
          }
        }
        if (iVar12 == 0) {
          pfVar6 = (float *)&local_ec;
        }
        else {
          pfVar6 = (float *)((longlong)&local_ec + 4);
          if (iVar12 != 1) {
            pfVar6 = &local_e4;
          }
        }
        if (iVar17 == 0) {
          pfVar7 = (float *)&local_ec;
        }
        else {
          pfVar7 = (float *)((longlong)&local_ec + 4);
          if (iVar17 != 1) {
            pfVar7 = &local_e4;
          }
        }
        if (iVar12 == 0) {
          pfVar8 = (float *)&local_e0;
        }
        else {
          pfVar8 = (float *)((longlong)&local_e0 + 4);
          if (iVar12 != 1) {
            pfVar8 = local_d8;
          }
        }
        if (iVar17 == 0) {
          pfVar9 = (float *)&local_e0;
        }
        else {
          pfVar9 = (float *)((longlong)&local_e0 + 4);
          if (iVar17 != 1) {
            pfVar9 = local_d8;
          }
        }
        if (iVar12 == 0) {
          pfVar24 = (float *)&local_f8;
        }
        else {
          pfVar24 = (float *)((longlong)&local_f8 + 4);
          if (iVar12 != 1) {
            pfVar24 = &local_f0;
          }
        }
        if (iVar17 == 0) {
          pfVar23 = (float *)&local_f8;
        }
        else {
          pfVar23 = (float *)((longlong)&local_f8 + 4);
          if (iVar17 != 1) {
            pfVar23 = &local_f0;
          }
        }
        if (iVar12 == 0) {
          pfVar26 = (float *)&local_e0;
        }
        else {
          pfVar26 = (float *)((longlong)&local_e0 + 4);
          if (iVar12 != 1) {
            pfVar26 = local_d8;
          }
        }
        if (iVar17 == 0) {
          pfVar25 = (float *)&local_ec;
        }
        else {
          pfVar25 = (float *)((longlong)&local_ec + 4);
          if (iVar17 != 1) {
            pfVar25 = &local_e4;
          }
        }
        if (iVar12 == 0) {
          pfVar15 = (float *)&local_f8;
        }
        else {
          pfVar15 = (float *)((longlong)&local_f8 + 4);
          if (iVar12 != 1) {
            pfVar15 = &local_f0;
          }
        }
        if (iVar17 == 0) {
          pfVar16 = (float *)&local_e0;
        }
        else {
          pfVar16 = (float *)((longlong)&local_e0 + 4);
          if (iVar17 != 1) {
            pfVar16 = local_d8;
          }
        }
        if (iVar12 == 0) {
          pfVar14 = (float *)&local_ec;
        }
        else {
          pfVar14 = (float *)((longlong)&local_ec + 4);
          if (iVar12 != 1) {
            pfVar14 = &local_e4;
          }
        }
        if (iVar17 == 0) {
          pfVar22 = (float *)&local_f8;
        }
        else {
          pfVar22 = (float *)((longlong)&local_f8 + 4);
          if (iVar17 != 1) {
            pfVar22 = &local_f0;
          }
        }
        if (iVar12 == 0) {
          pfVar21 = (float *)&local_f8;
        }
        else {
          pfVar21 = (float *)((longlong)&local_f8 + 4);
          if (iVar12 != 1) {
            pfVar21 = &local_f0;
          }
        }
        if (iVar17 == 0) {
          pfVar20 = (float *)&local_ec;
        }
        else {
          pfVar20 = (float *)((longlong)&local_ec + 4);
          if (iVar17 != 1) {
            pfVar20 = &local_e4;
          }
        }
        if (iVar12 == 0) {
          pfVar13 = (float *)&local_ec;
        }
        else {
          pfVar13 = (float *)((longlong)&local_ec + 4);
          if (iVar12 != 1) {
            pfVar13 = &local_e4;
          }
        }
        if (iVar17 == 0) {
          pfVar10 = (float *)&local_e0;
        }
        else {
          pfVar10 = (float *)((longlong)&local_e0 + 4);
          if (iVar17 != 1) {
            pfVar10 = local_d8;
          }
        }
        fVar30 = (float)local_e0;
        if ((iVar12 != 0) && (fVar30 = local_d8[0], iVar12 == 1)) {
          fVar30 = fVar29;
        }
        *pfVar4 = (*pfVar7 * *pfVar8 + *pfVar6 * *pfVar5 + *pfVar24 * *pfVar9 + *pfVar23 * *pfVar26
                   + *pfVar15 * *pfVar25 + *pfVar16 * *pfVar14 + (*pfVar22 + *pfVar22) * *pfVar21 +
                   (*pfVar13 + *pfVar13) * *pfVar20 + (*pfVar10 + *pfVar10) * fVar30) * fVar34 +
                  *pfVar4;
        iVar18 = iVar11;
      } while (iVar11 < 3);
      piVar19 = piVar19 + 3;
      fVar27 = local_170[2];
      fVar29 = local_160[0];
      fVar34 = local_160[1];
      fVar30 = local_160[2];
      fVar31 = local_170[0];
      fVar28 = local_170[1];
    } while (piVar19 != piVar1);
  }
  fVar33 = 0.1 / fVar32;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  fVar32 = 0.05 / fVar32;
  param_1[2] = -(fVar32 * fVar34);
  param_1[6] = -(fVar32 * fVar29);
  param_1[1] = -(fVar32 * fVar30);
  param_1[4] = -(fVar32 * fVar30);
  param_1[8] = -(fVar32 * fVar34);
  param_1[9] = -(fVar32 * fVar29);
  param_1[10] = fVar33 * fVar28 + fVar33 * fVar31;
  param_1[5] = fVar33 * fVar27 + fVar33 * fVar31;
  *param_1 = fVar33 * fVar27 + fVar33 * fVar28;
  return param_1;
}



// FUNCTION 14228c430 CalculateVolume body=232 status=ok
// SIG undefined CalculateVolume(void)

float FAnimPhys::CalculateVolume(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  float fVar11;
  
  piVar10 = (int *)*param_2;
  fVar11 = 0.0;
  piVar1 = piVar10 + (longlong)*(int *)(param_2 + 1) * 3;
  if (piVar10 != piVar1) {
    lVar6 = *param_1;
    do {
      lVar7 = (longlong)piVar10[2];
      lVar8 = (longlong)piVar10[1];
      fVar2 = *(float *)(lVar6 + 4 + lVar7 * 0xc);
      fVar3 = *(float *)(lVar6 + 8 + lVar7 * 0xc);
      lVar9 = (longlong)*piVar10;
      fVar4 = *(float *)(lVar6 + 4 + lVar8 * 0xc);
      piVar10 = piVar10 + 3;
      fVar5 = *(float *)(lVar6 + 8 + lVar8 * 0xc);
      fVar11 = fVar11 + ((fVar3 * fVar4 - fVar2 * fVar5) * *(float *)(lVar6 + lVar9 * 0xc) -
                        (fVar3 * *(float *)(lVar6 + 4 + lVar9 * 0xc) -
                        fVar2 * *(float *)(lVar6 + 8 + lVar9 * 0xc)) *
                        *(float *)(lVar6 + lVar8 * 0xc)) +
                        (fVar5 * *(float *)(lVar6 + 4 + lVar9 * 0xc) -
                        fVar4 * *(float *)(lVar6 + 8 + lVar9 * 0xc)) *
                        *(float *)(lVar6 + lVar7 * 0xc);
    } while (piVar10 != piVar1);
  }
  return fVar11 * 0.16666667;
}



// FUNCTION 14228c540 FUN_14228c540 body=137 status=ok
// SIG undefined FUN_14228c540(void)

void FUN_14228c540(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  plVar2 = (longlong *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0xd0));
  if (((short)plVar2[1] == -1) || (*plVar2 == -1)) {
    lVar1 = *param_3;
  }
  else {
    lVar1 = *param_3;
    if ((short)plVar2[1] == *(short *)(lVar1 + 800)) {
      return;
    }
  }
  *(undefined2 *)(plVar2 + 1) = *(undefined2 *)(lVar1 + 800);
  *plVar2 = *(longlong *)(lVar1 + 0x318);
  *(undefined2 *)((longlong)plVar2 + 10) = *(undefined2 *)(lVar1 + 0x322);
  local_res8[0] = *param_3;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  return;
}



// FUNCTION 14228c5d0 ConstrainAlongDirection body=848 status=ok
// SIG undefined ConstrainAlongDirection(void)

void FAnimPhys::ConstrainAlongDirection
               (float param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
               longlong param_5,undefined8 *param_6,float *param_7,undefined8 param_8,float param_9,
               float param_10)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined8 local_d8;
  float local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  
  if (param_3 == 0) {
    local_d0 = (float)*(undefined4 *)(param_4 + 1);
    puVar4 = &local_d8;
    local_d8 = *param_4;
  }
  else {
    puVar4 = (undefined8 *)FAnimPhysPose::operator*(param_3,&local_d8,param_4);
  }
  local_60 = *puVar4;
  local_58 = *(float *)(puVar4 + 1);
  if (param_5 == 0) {
    local_d0 = (float)*(undefined4 *)(param_6 + 1);
    puVar4 = &local_d8;
    local_d8 = *param_6;
  }
  else {
    puVar4 = (undefined8 *)FAnimPhysPose::operator*(param_5,&local_d8,param_6);
  }
  local_d0 = *(float *)(puVar4 + 1);
  uStack_b0 = *(undefined4 *)(param_4 + 1);
  uStack_a4 = *(undefined4 *)(param_6 + 1);
  local_98 = param_7[2];
  param_1 = 1.0 / param_1;
  lStack_c0 = param_5;
  fVar7 = ((float)((ulonglong)*puVar4 >> 0x20) - local_60._4_4_) * param_7[1] +
          ((float)*puVar4 - (float)local_60) * *param_7 + (local_d0 - local_58) * param_7[2];
  local_b8 = *param_4;
  uStack_ac = (undefined4)*param_6;
  uStack_a8 = (undefined4)((ulonglong)*param_6 >> 0x20);
  uStack_a0 = *(undefined8 *)param_7;
  local_c8 = param_3;
  if (1e-08 <= ABS((float)param_8 - param_8._4_4_)) {
    uStack_84 = 0;
    fStack_94 = (fVar7 - (float)param_8) * param_1;
    param_1 = (fVar7 - param_8._4_4_) * param_1;
    local_88 = param_10;
    if (param_10 <= 0.0) {
      local_88 = 0.0;
    }
    if (0.0 <= param_10) {
      param_10 = 0.0;
    }
    fStack_90 = fStack_94;
    fStack_8c = param_10;
    FAnimPhysLinearLimit::UpdateCachedData(&local_c8);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar1);
    }
    lVar6 = lStack_c0;
    lVar2 = *param_2;
    lVar5 = (longlong)iVar1 * 0x68;
    lStack_c0 = param_5;
    *(longlong *)(lVar5 + lVar2) = local_c8;
    ((longlong *)(lVar5 + lVar2))[1] = lVar6;
    puVar4 = (undefined8 *)(lVar5 + 0x10 + lVar2);
    *puVar4 = local_b8;
    puVar4[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar4 = (undefined8 *)(lVar5 + 0x20 + lVar2);
    *puVar4 = CONCAT44(uStack_a4,uStack_a8);
    puVar4[1] = uStack_a0;
    uVar3 = CONCAT44(uStack_84,local_88);
    uStack_84 = 0;
    puVar4 = (undefined8 *)(lVar5 + 0x30 + lVar2);
    *puVar4 = CONCAT44(fStack_94,local_98);
    puVar4[1] = CONCAT44(fStack_8c,fStack_90);
    puVar4 = (undefined8 *)(lVar5 + 0x40 + lVar2);
    *puVar4 = uVar3;
    puVar4[1] = uStack_80;
    puVar4 = (undefined8 *)(lVar5 + 0x50 + lVar2);
    *puVar4 = local_78;
    puVar4[1] = uStack_70;
    *(undefined8 *)(lVar5 + 0x60 + lVar2) = local_68;
    local_b8 = *param_4;
    uStack_b0 = *(undefined4 *)(param_4 + 1);
    uStack_ac = (undefined4)*param_6;
    uStack_a8 = (undefined4)((ulonglong)*param_6 >> 0x20);
    uStack_a0 = *(undefined8 *)param_7;
    fStack_8c = param_9;
    if (0.0 <= param_9) {
      fStack_8c = 0.0;
    }
    uStack_a4 = *(undefined4 *)(param_6 + 1);
    if (param_9 <= 0.0) {
      param_9 = 0.0;
    }
    local_98 = param_7[2];
    local_c8 = param_3;
    fStack_94 = param_1;
    fStack_90 = param_1;
    local_88 = param_9;
    FAnimPhysLinearLimit::UpdateCachedData(&local_c8);
  }
  else {
    fStack_94 = param_1 * fVar7;
    fStack_8c = param_9;
    if (param_10 <= param_9) {
      fStack_8c = param_10;
    }
    if (param_9 <= param_10) {
      param_9 = param_10;
    }
    uStack_84 = 0;
    fStack_90 = fStack_94;
    local_88 = param_9;
    FAnimPhysLinearLimit::UpdateCachedData(&local_c8);
  }
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar6 = (longlong)iVar1 * 0x68;
  *(longlong *)(lVar6 + lVar2) = local_c8;
  ((longlong *)(lVar6 + lVar2))[1] = lStack_c0;
  puVar4 = (undefined8 *)(lVar6 + 0x10 + lVar2);
  *puVar4 = local_b8;
  puVar4[1] = CONCAT44(uStack_ac,uStack_b0);
  puVar4 = (undefined8 *)(lVar6 + 0x20 + lVar2);
  *puVar4 = CONCAT44(uStack_a4,uStack_a8);
  puVar4[1] = uStack_a0;
  puVar4 = (undefined8 *)(lVar6 + 0x30 + lVar2);
  *puVar4 = CONCAT44(fStack_94,local_98);
  puVar4[1] = CONCAT44(fStack_8c,fStack_90);
  puVar4 = (undefined8 *)(lVar6 + 0x40 + lVar2);
  *puVar4 = CONCAT44(uStack_84,local_88);
  puVar4[1] = uStack_80;
  puVar4 = (undefined8 *)(lVar6 + 0x50 + lVar2);
  *puVar4 = local_78;
  puVar4[1] = uStack_70;
  *(undefined8 *)(lVar6 + 0x60 + lVar2) = local_68;
  return;
}



// FUNCTION 14228c920 ConstrainAngularRange body=289 status=ok
// SIG undefined ConstrainAngularRange(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAnimPhys::ConstrainAngularRange
               (undefined4 param_1,undefined8 param_2,longlong param_3,longlong param_4,
               float *param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (param_3 == 0) {
    local_18 = *param_5;
    local_14 = param_5[1];
    local_10 = param_5[2];
    local_c = param_5[3];
  }
  else {
    fVar1 = *(float *)(param_3 + 0x10);
    fVar2 = *(float *)(param_3 + 0x14);
    fVar3 = *(float *)(param_3 + 0x18);
    fVar4 = *(float *)(param_3 + 0x1c);
    fVar5 = *param_5;
    fVar6 = param_5[1];
    fVar7 = param_5[2];
    fVar8 = param_5[3];
    local_18 = fVar1 * fVar8 * _DAT_146aef150 + fVar4 * fVar5 + fVar2 * fVar7 * _DAT_146aef140 +
               fVar3 * fVar6 * _DAT_146aef130;
    local_14 = fVar1 * fVar7 * fRam0000000146aef154 + fVar4 * fVar6 +
               fVar2 * fVar8 * fRam0000000146aef144 + fVar3 * fVar5 * fRam0000000146aef134;
    local_10 = fVar1 * fVar6 * fRam0000000146aef158 + fVar4 * fVar7 +
               fVar2 * fVar5 * fRam0000000146aef148 + fVar3 * fVar8 * fRam0000000146aef138;
    local_c = fVar1 * fVar5 * fRam0000000146aef15c + fVar4 * fVar8 +
              fVar2 * fVar6 * fRam0000000146aef14c + fVar3 * fVar7 * fRam0000000146aef13c;
  }
  puVar9 = (undefined8 *)(param_4 + 0x10);
  if (param_4 == 0) {
    puVar9 = (undefined8 *)&DAT_1464aa810;
  }
  local_28 = *puVar9;
  uStack_20 = puVar9[1];
  FUN_14228ca50(param_1,local_10,local_c,&local_18,param_4,&local_28,param_6,param_7,param_8,param_9
               );
  return;
}



// FUNCTION 14228ca50 FUN_14228ca50 body=3821 status=ok
// SIG undefined FUN_14228ca50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14228ca50(float param_1,longlong *param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5,float *param_6,char param_7,float *param_8,float *param_9,
                  float param_10)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
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
  float local_res10;
  float local_res20;
  undefined8 local_198;
  float fStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  float local_150;
  float local_148;
  float fStack_144;
  float local_140;
  undefined8 local_138;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  
  fStack_11c = param_4[3];
  fVar19 = *param_6;
  fVar14 = param_6[1];
  fVar12 = param_6[2];
  fVar15 = param_6[3];
  fVar20 = 0.0;
  fVar13 = -*param_4;
  local_114 = *param_8 * 0.017453292;
  local_f8 = param_8[1] * 0.017453292;
  local_f0 = param_8[2] * 0.017453292;
  local_110 = *param_9 * 0.017453292;
  local_f4 = param_9[1] * 0.017453292;
  local_ec = param_9[2] * 0.017453292;
  fStack_120 = -param_4[2];
  fVar11 = -param_4[1];
  local_128 = -*param_4;
  fStack_124 = -param_4[1];
  fVar16 = fVar13 * fVar15 * _DAT_146aef150 + fStack_11c * fVar19 + fVar11 * fVar12 * _DAT_146aef140
           + fStack_120 * fVar14 * _DAT_146aef130;
  fVar17 = fVar13 * fVar12 * fRam0000000146aef154 + fStack_11c * fVar14 +
           fVar11 * fVar15 * fRam0000000146aef144 + fStack_120 * fVar19 * fRam0000000146aef134;
  fVar18 = fVar13 * fVar14 * fRam0000000146aef158 + fStack_11c * fVar12 +
           fVar11 * fVar19 * fRam0000000146aef148 + fStack_120 * fVar15 * fRam0000000146aef138;
  fVar19 = fVar13 * fVar19 * fRam0000000146aef15c + fStack_11c * fVar15 +
           fVar11 * fVar14 * fRam0000000146aef14c + fStack_120 * fVar12 * fRam0000000146aef13c;
  if (param_7 == '\0') {
    local_e8 = 0x3f800000;
    fVar12 = fVar18 + fVar18;
    fVar15 = -fVar17 + -fVar17;
    fStack_190 = fVar15 * fVar19 + fVar12 * fVar16;
    fVar14 = (fVar15 * fVar17 - fVar12 * fVar18) + 1.0;
    fVar12 = fVar12 * fVar19 - fVar15 * fVar16;
LAB_14228cd90:
    local_130 = 0.0;
LAB_14228cd93:
    local_e0 = local_130;
    local_130 = fStack_190;
    local_138 = CONCAT44(fVar12,fVar14);
  }
  else {
    if (param_7 == '\x01') {
      local_e8 = 0x3f80000000000000;
      fVar12 = fVar16 + fVar16;
      fVar15 = -fVar18 + -fVar18;
      fVar14 = fVar12 * fVar17 + fVar15 * fVar19;
      fStack_190 = fVar12 * fVar19 - fVar15 * fVar17;
      fVar12 = (fVar15 * fVar18 - fVar12 * fVar16) + 1.0;
      goto LAB_14228cd90;
    }
    if (param_7 == '\x02') {
      local_130 = 1.0;
      local_e8 = 0;
      fVar11 = -fVar16 + -fVar16;
      fVar15 = fVar17 + fVar17;
      fVar14 = fVar15 * fVar19 - fVar11 * fVar18;
      fVar12 = fVar15 * fVar18 + fVar11 * fVar19;
      fStack_190 = (fVar11 * fVar16 - fVar15 * fVar17) + 1.0;
      goto LAB_14228cd93;
    }
  }
  FQuat::FindBetweenVectors(&local_128,&local_e8,&local_138);
  fVar14 = -fStack_124;
  fVar11 = -local_128;
  fVar15 = -fStack_120;
  fVar12 = fStack_11c * fVar19;
  local_108 = fVar19 * fVar11 * _DAT_146aef150 + fStack_11c * fVar16 +
              fVar18 * fVar14 * _DAT_146aef140 + fVar17 * fVar15 * _DAT_146aef130;
  local_118 = fVar18 * fVar11 * fRam0000000146aef154 + fStack_11c * fVar17 +
              fVar19 * fVar14 * fRam0000000146aef144 + fVar16 * fVar15 * fRam0000000146aef134;
  local_res20 = fVar17 * fVar11 * fRam0000000146aef158 + fStack_11c * fVar18 +
                fVar16 * fVar14 * fRam0000000146aef148 + fVar19 * fVar15 * fRam0000000146aef138;
  if (fStack_11c < 0.0) {
    local_128 = local_128 * -1.0;
    fStack_124 = fStack_124 * -1.0;
    fStack_120 = fStack_120 * -1.0;
    fStack_11c = fStack_11c * -1.0;
  }
  if (fVar16 * fVar11 * fRam0000000146aef15c + fVar12 + fVar17 * fVar14 * fRam0000000146aef14c +
      fVar18 * fVar15 * fRam0000000146aef13c < 0.0) {
    local_108 = local_108 * -1.0;
    local_118 = local_118 * -1.0;
    local_res20 = local_res20 * -1.0;
  }
  uVar6 = param_5;
  fVar19 = 0.0;
  fStack_144 = 0.0;
  fVar15 = 0.0;
  local_140 = 0.0;
  fVar14 = 0.0;
  param_9._0_4_ = 0.0;
  fVar12 = 0.0;
  local_158 = 0;
  local_150 = 0.0;
  local_148 = 0.0;
  local_198 = 0;
  fStack_190 = 0.0;
  if (param_7 == '\0') {
    fVar19 = param_6[2];
    fVar14 = *param_6;
    fVar12 = param_6[3];
    fVar20 = -fVar19 + -fVar19;
    fVar11 = fVar14 + fVar14;
    fVar16 = -fVar14 + -fVar14;
    fVar15 = param_6[1];
    param_5._0_4_ = fVar20 * fVar12 + fVar11 * fVar15;
    local_150 = fVar11 * fVar12 - fVar20 * fVar15;
    local_res10 = (fVar20 * fVar19 - fVar11 * fVar14) + 1.0;
    fVar20 = fVar15 + fVar15;
    local_158 = CONCAT44(local_res10,(float)param_5);
    fVar13 = fVar19 + fVar19;
    local_148 = fVar20 * fVar12 - fVar16 * fVar19;
    fStack_144 = fVar16 * fVar12 + fVar20 * fVar19;
    fVar11 = fVar16 * fVar14 - fVar20 * fVar15;
    fVar20 = -fVar15 + -fVar15;
    fStack_190 = fVar20 * fVar12 + fVar13 * fVar14;
    param_9._0_4_ = local_108;
    local_198 = CONCAT44(fVar13 * fVar12 - fVar20 * fVar14,(fVar20 * fVar15 - fVar13 * fVar19) + 1.0
                        );
    fVar13 = local_f4;
    fVar20 = local_f8;
    fVar14 = fStack_124;
LAB_14228d3e9:
    fVar11 = fVar11 + 1.0;
    fVar19 = local_f0;
    fVar12 = fStack_120;
    fVar15 = local_ec;
LAB_14228d3f9:
    param_8._0_4_ = fStack_144;
    _param_7 = local_148;
    fVar16 = local_150;
    local_140 = fVar11;
    if (fVar20 == fVar13) goto LAB_14228d413;
    if (fVar13 - fVar20 < 6.2831855) {
      fVar13 = _guard_xfg_dispatch_icall_nop(fVar13 * 0.5);
      fStack_170 = local_150;
      uStack_16c = 0;
      local_178 = local_158;
      local_188 = param_3;
      uStack_180 = uVar6;
      fVar20 = _guard_xfg_dispatch_icall_nop(fVar20 * 0.5);
      uStack_164 = 0;
      uStack_160 = 0x7f7fffff;
      local_168 = ((fVar20 + fVar20) - (fVar14 + fVar14)) * (1.0 / param_1);
      FAnimPhysAngularLimit::UpdateCachedData(&local_188);
      iVar4 = (int)param_2[1];
      lVar10 = (longlong)iVar4;
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      uVar7 = CONCAT44(uStack_16c,fStack_170);
      lVar5 = *param_2;
      uStack_16c = 0;
      puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x30);
      *puVar1 = local_188;
      puVar1[1] = uStack_180;
      uVar8 = CONCAT44(uStack_164,local_168);
      uVar9 = CONCAT44(uStack_15c,uStack_160);
      uStack_164 = 0;
      puVar3 = (ulonglong *)(lVar5 + 0x10 + lVar10 * 0x30);
      *puVar3 = local_178;
      puVar3[1] = uVar7;
      uStack_160 = 0x7f7fffff;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar10 * 0x30);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      fStack_170 = -fVar16;
      local_178 = CONCAT44(local_res10,(float)param_5) ^ 0x8000000080000000;
      local_188 = param_3;
      uStack_180 = uVar6;
      local_168 = ((fVar14 - fVar13) + (fVar14 - fVar13)) * (1.0 / param_1);
      local_150 = fStack_170;
      FAnimPhysAngularLimit::UpdateCachedData(&local_188);
      iVar4 = (int)param_2[1];
      lVar10 = (longlong)iVar4;
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      lVar5 = *param_2;
      puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x30);
      *puVar1 = local_188;
      puVar1[1] = uStack_180;
      puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar10 * 0x30);
      *puVar2 = (undefined4)local_178;
      puVar2[1] = local_178._4_4_;
      puVar2[2] = fStack_170;
      puVar2[3] = uStack_16c;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar10 * 0x30);
      *puVar1 = CONCAT44(uStack_164,local_168);
      puVar1[1] = CONCAT44(uStack_15c,uStack_160);
    }
  }
  else {
    fVar13 = local_110;
    if (param_7 == '\x01') {
      fVar19 = param_6[1];
      fVar14 = param_6[2];
      fVar12 = param_6[3];
      fVar20 = -fVar19 + -fVar19;
      fVar15 = *param_6;
      fVar11 = fVar14 + fVar14;
      fVar17 = -fVar15 + -fVar15;
      local_150 = fVar11 * fVar15 + fVar20 * fVar12;
      param_5._0_4_ = (fVar20 * fVar19 - fVar11 * fVar14) + 1.0;
      local_res10 = fVar11 * fVar12 - fVar20 * fVar15;
      fVar20 = fVar19 + fVar19;
      local_148 = fVar20 * fVar12 - fVar17 * fVar14;
      local_158 = CONCAT44(local_res10,(float)param_5);
      fVar16 = -fVar14 + -fVar14;
      fStack_144 = fVar17 * fVar12 + fVar20 * fVar14;
      fVar11 = fVar17 * fVar15 - fVar20 * fVar19;
      fVar20 = fVar15 + fVar15;
      param_9._0_4_ = local_118;
      fStack_190 = fVar12 * fVar20 - fVar16 * fVar19;
      local_198 = CONCAT44((fVar16 * fVar14 - fVar20 * fVar15) + 1.0,
                           fVar12 * fVar16 + fVar20 * fVar19);
      fVar20 = local_114;
      fVar14 = local_128;
      goto LAB_14228d3e9;
    }
    if (param_7 == '\x02') {
      fVar19 = param_6[1];
      fVar14 = param_6[2];
      fVar12 = param_6[3];
      fVar20 = -fVar19 + -fVar19;
      fVar11 = fVar14 + fVar14;
      fVar15 = *param_6;
      fVar18 = fVar15 + fVar15;
      local_150 = fVar11 * fVar15 + fVar20 * fVar12;
      param_5._0_4_ = (fVar20 * fVar19 - fVar11 * fVar14) + 1.0;
      local_res10 = fVar11 * fVar12 - fVar20 * fVar15;
      fVar20 = -fVar14 + -fVar14;
      local_148 = fVar20 * fVar12 + fVar18 * fVar19;
      local_158 = CONCAT44(local_res10,(float)param_5);
      fVar17 = fVar19 + fVar19;
      fVar11 = fVar18 * fVar12 - fVar20 * fVar19;
      fVar16 = -fVar15 + -fVar15;
      fStack_144 = (fVar20 * fVar14 - fVar18 * fVar15) + 1.0;
      fStack_190 = (fVar16 * fVar15 - fVar17 * fVar19) + 1.0;
      param_9._0_4_ = local_res20;
      local_198 = CONCAT44(fVar16 * fVar12 + fVar17 * fVar14,fVar17 * fVar12 - fVar16 * fVar14);
      fVar19 = local_f8;
      fVar20 = local_114;
      fVar14 = local_128;
      fVar12 = fStack_124;
      fVar15 = local_f4;
      goto LAB_14228d3f9;
    }
LAB_14228d413:
    fVar11 = local_140;
    param_8._0_4_ = fStack_144;
    _param_7 = local_148;
    local_178 = local_158;
    fStack_170 = local_150;
    uStack_16c = 0;
    local_188 = param_3;
    uStack_180 = uVar6;
    fVar20 = _guard_xfg_dispatch_icall_nop(fVar20 * 0.5);
    uStack_164 = 0xff7fffff;
    uStack_160 = 0x7f7fffff;
    local_168 = ((fVar20 + fVar20) - (fVar14 + fVar14)) / param_1;
    FAnimPhysAngularLimit::UpdateCachedData(&local_188);
    iVar4 = (int)param_2[1];
    lVar10 = (longlong)iVar4;
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    lVar5 = *param_2;
    puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x30);
    *puVar1 = local_188;
    puVar1[1] = uStack_180;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar10 * 0x30);
    *puVar2 = (undefined4)local_178;
    puVar2[1] = local_178._4_4_;
    puVar2[2] = fStack_170;
    puVar2[3] = uStack_16c;
    puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar10 * 0x30);
    *puVar1 = CONCAT44(uStack_164,local_168);
    puVar1[1] = CONCAT44(uStack_15c,uStack_160);
  }
  if (fVar19 == fVar15) {
    local_178 = CONCAT44(fStack_144,local_148);
    uStack_164 = 0xff7fffff;
    local_168 = ((fVar19 - fVar12) * (param_10 + param_10)) / param_1;
  }
  else {
    if (6.2831855 <= fVar15 - fVar19) goto LAB_14228d853;
    fVar14 = _guard_xfg_dispatch_icall_nop(fVar15 * 0.5);
    local_178 = CONCAT44(fStack_144,local_148);
    fStack_170 = local_140;
    uStack_16c = 0;
    local_188 = param_3;
    uStack_180 = uVar6;
    fVar19 = _guard_xfg_dispatch_icall_nop(fVar19 * 0.5);
    uStack_164 = 0;
    uStack_160 = 0x7f7fffff;
    local_168 = ((fVar19 + fVar19) - (fVar12 + fVar12)) * (1.0 / param_1);
    FAnimPhysAngularLimit::UpdateCachedData(&local_188);
    iVar4 = (int)param_2[1];
    lVar10 = (longlong)iVar4;
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    lVar5 = *param_2;
    local_140 = -fVar11;
    puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x30);
    *puVar1 = local_188;
    puVar1[1] = uStack_180;
    uVar8 = CONCAT44(uStack_164,local_168);
    uStack_164 = 0;
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar10 * 0x30);
    *puVar1 = local_178;
    puVar1[1] = CONCAT44(uStack_16c,fStack_170);
    puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar10 * 0x30);
    *puVar1 = uVar8;
    puVar1[1] = CONCAT44(uStack_15c,uStack_160);
    local_178 = CONCAT44(param_8._0_4_,_param_7) ^ 0x8000000080000000;
    local_168 = ((fVar12 - fVar14) + (fVar12 - fVar14)) * (1.0 / param_1);
  }
  fStack_170 = local_140;
  uStack_16c = 0;
  uStack_160 = 0x7f7fffff;
  local_188 = param_3;
  uStack_180 = uVar6;
  FAnimPhysAngularLimit::UpdateCachedData(&local_188);
  iVar4 = (int)param_2[1];
  lVar10 = (longlong)iVar4;
  *(int *)(param_2 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
  }
  lVar5 = *param_2;
  puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x30);
  *puVar1 = local_188;
  puVar1[1] = uStack_180;
  puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar10 * 0x30);
  *puVar2 = (undefined4)local_178;
  puVar2[1] = local_178._4_4_;
  puVar2[2] = fStack_170;
  puVar2[3] = uStack_16c;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar10 * 0x30);
  *puVar1 = CONCAT44(uStack_164,local_168);
  puVar1[1] = CONCAT44(uStack_15c,uStack_160);
LAB_14228d853:
  local_178 = local_198;
  fStack_170 = fStack_190;
  local_168 = (param_10 * -2.0 * param_9._0_4_) / param_1;
  uStack_16c = 0;
  uStack_164 = 0xff7fffff;
  uStack_160 = 0x7f7fffff;
  local_188 = param_3;
  uStack_180 = uVar6;
  FAnimPhysAngularLimit::UpdateCachedData(&local_188);
  iVar4 = (int)param_2[1];
  lVar10 = (longlong)iVar4;
  *(int *)(param_2 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
  }
  lVar5 = *param_2;
  puVar1 = (undefined8 *)(lVar5 + lVar10 * 0x30);
  *puVar1 = local_188;
  puVar1[1] = uStack_180;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar10 * 0x30);
  *puVar1 = local_178;
  puVar1[1] = CONCAT44(uStack_16c,fStack_170);
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar10 * 0x30);
  *puVar1 = CONCAT44(uStack_164,local_168);
  puVar1[1] = CONCAT44(uStack_15c,uStack_160);
  return;
}



// FUNCTION 14228d940 ConstrainConeAngle body=1360 status=ok
// SIG undefined ConstrainConeAngle(void)

void FAnimPhys::ConstrainConeAngle
               (float param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
               longlong param_5,undefined8 *param_6,float param_7,float param_8)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  uVar17 = 0;
  local_f0 = *(float *)(param_4 + 1);
  if (param_3 == 0) {
    puVar4 = &local_f8;
    local_f8 = *param_4;
  }
  else {
    fVar6 = *(float *)(param_3 + 0x10);
    fVar7 = *(float *)(param_3 + 0x14);
    fVar11 = *(float *)(param_3 + 0x18);
    fVar16 = (float)((ulonglong)*param_4 >> 0x20);
    fVar13 = *(float *)(param_3 + 0x1c);
    local_108._0_4_ = (float)*param_4;
    puVar4 = &local_108;
    fVar14 = fVar7 * local_f0 - fVar11 * fVar16;
    fVar14 = fVar14 + fVar14;
    fVar10 = fVar11 * (float)local_108 - fVar6 * local_f0;
    fVar8 = fVar6 * fVar16 - fVar7 * (float)local_108;
    fVar10 = fVar10 + fVar10;
    fVar8 = fVar8 + fVar8;
    local_100 = (fVar6 * fVar10 - fVar7 * fVar14) + fVar13 * fVar8 + local_f0;
    local_108 = CONCAT44((fVar11 * fVar14 - fVar6 * fVar8) + fVar13 * fVar10 + fVar16,
                         (fVar7 * fVar8 - fVar11 * fVar10) + fVar13 * fVar14 + (float)local_108);
  }
  local_f8 = *puVar4;
  fVar15 = (float)((ulonglong)local_f8 >> 0x20);
  local_f0 = *(float *)(puVar4 + 1);
  fVar6 = *(float *)(param_5 + 0x14);
  fVar7 = *(float *)(param_5 + 0x18);
  fVar16 = (float)((ulonglong)*param_6 >> 0x20);
  fVar11 = *(float *)(param_5 + 0x1c);
  fVar13 = *(float *)(param_6 + 1);
  local_108._0_4_ = (float)*param_6;
  fVar12 = fVar6 * fVar13 - fVar7 * fVar16;
  fVar12 = fVar12 + fVar12;
  fVar14 = fVar7 * (float)local_108 - *(float *)(param_5 + 0x10) * fVar13;
  fVar10 = *(float *)(param_5 + 0x10) * fVar16 - fVar6 * (float)local_108;
  fVar14 = fVar14 + fVar14;
  fVar10 = fVar10 + fVar10;
  fVar8 = (fVar6 * fVar10 - fVar7 * fVar14) + fVar11 * fVar12 + (float)local_108;
  fVar6 = (*(float *)(param_5 + 0x10) * fVar14 - fVar6 * fVar12) + fVar11 * fVar10 + fVar13;
  fVar16 = (fVar7 * fVar12 - *(float *)(param_5 + 0x10) * fVar10) + fVar11 * fVar14 + fVar16;
  fVar11 = fVar16 * local_f0 - fVar6 * fVar15;
  fVar13 = fVar6 * (float)local_f8 - fVar8 * local_f0;
  local_100 = fVar8 * fVar15 - fVar16 * (float)local_f8;
  fVar7 = fVar13 * fVar13 + fVar11 * fVar11 + local_100 * local_100;
  if (fVar7 == 1.0) {
LAB_14228dd2d:
    local_108 = CONCAT44(fVar13,fVar11);
  }
  else {
    if (1e-08 <= fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar10 = auVar9._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
      fVar11 = fVar11 * fVar10;
      fVar13 = fVar13 * fVar10;
      local_100 = local_100 * fVar10;
      goto LAB_14228dd2d;
    }
    local_100 = DAT_1468b5d98;
    local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  fVar6 = (float)local_f8 * fVar8 + fVar16 * fVar15 + local_f0 * fVar6;
  if (0.0 <= fVar6) {
    fVar7 = -1.0;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if (fVar6 < -1.0) goto LAB_14228dd7f;
  }
  else {
    fVar6 = 0.0;
  }
  fVar7 = fVar6;
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
LAB_14228dd7f:
  if (param_7 != 0.0) {
    fVar6 = ::_guard_xfg_dispatch_icall_nop(fVar7);
    param_8 = (fVar6 - param_7 * 0.017453292) / param_1;
  }
  if (param_7 <= 0.0) {
    uVar17 = 0xff7fffff;
  }
  local_d8 = local_108;
  uStack_c0 = 0x7f7fffff;
  fStack_d0 = local_100;
  uStack_cc = 0;
  local_e8 = param_3;
  lStack_e0 = param_5;
  local_c8 = param_8;
  uStack_c4 = uVar17;
  FAnimPhysAngularLimit::UpdateCachedData(&local_e8);
  iVar2 = (int)param_2[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  lVar3 = *param_2;
  plVar1 = (longlong *)(lVar3 + lVar5 * 0x30);
  *plVar1 = local_e8;
  plVar1[1] = lStack_e0;
  puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar5 * 0x30);
  *puVar4 = local_d8;
  puVar4[1] = CONCAT44(uStack_cc,fStack_d0);
  puVar4 = (undefined8 *)(lVar3 + 0x20 + lVar5 * 0x30);
  *puVar4 = CONCAT44(uStack_c4,local_c8);
  puVar4[1] = CONCAT44(uStack_bc,uStack_c0);
  return;
}



// FUNCTION 14228de90 FUN_14228de90 body=816 status=ok
// SIG undefined FUN_14228de90(void)

void FUN_14228de90(float param_1,longlong *param_2,float *param_3,float *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_d8;
  float *pfStack_d0;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  fVar8 = *param_4;
  fVar11 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  local_c8 = *(undefined8 *)(param_4 + 4);
  fStack_c0 = param_4[6];
  fVar7 = fVar11 * 1.0 - fVar4 * 0.0;
  fVar9 = fVar4 * 0.0 - fVar8 * 1.0;
  fVar10 = fVar8 * 0.0 - fVar11 * 0.0;
  fVar7 = fVar7 + fVar7;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  local_f8 = (fVar10 * fVar11 - fVar9 * fVar4) + fVar5 * fVar7 + 0.0;
  fStack_f4 = (fVar7 * fVar4 - fVar10 * fVar8) + fVar5 * fVar9 + 0.0;
  local_f0 = (fVar9 * fVar8 - fVar7 * fVar11) + fVar5 * fVar10 + 1.0;
  fStack_a4 = (fStack_f4 * param_3[1] + local_f8 * *param_3 + local_f0 * param_3[2]) -
              (fStack_f4 * param_4[5] + local_f8 * param_4[4] + local_f0 * fStack_c0);
  if (*(char *)(param_3 + 0x67) != '\0') {
    fStack_a4 = fStack_a4 - param_3[0x68];
  }
  fStack_a4 = fStack_a4 / param_1;
  fVar8 = fStack_f4 * fStack_f4 + local_f8 * local_f8 + local_f0 * local_f0;
  if (fVar8 != 1.0) {
    if (fVar8 < 1e-08) {
      local_f8 = DAT_1468b5d90;
      local_f0 = DAT_1468b5d98;
      fStack_f4 = DAT_1468b5d94;
    }
    else {
      auVar12 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar11 = auVar12._0_4_;
      fVar11 = fVar11 + fVar11 * (0.5 - fVar8 * 0.5 * fVar11 * fVar11);
      fVar11 = fVar11 + fVar11 * (0.5 - fVar8 * 0.5 * fVar11 * fVar11);
      local_f8 = local_f8 * fVar11;
      fStack_f4 = fStack_f4 * fVar11;
      local_f0 = local_f0 * fVar11;
    }
  }
  uStack_b0 = CONCAT44(fStack_f4,local_f8);
  fStack_b4 = DAT_1468b5d98;
  local_98 = 0x7f7fffff;
  local_d8 = 0;
  fStack_bc = DAT_1468b5d90;
  fStack_b8 = DAT_1468b5d94;
  local_a8 = local_f0;
  uStack_9c = 0;
  uStack_94 = 0;
  pfStack_d0 = param_3;
  fStack_a0 = fStack_a4;
  FAnimPhysLinearLimit::UpdateCachedData(&local_d8);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar2 * 0x68;
  *(undefined8 *)(lVar6 + lVar3) = local_d8;
  ((undefined8 *)(lVar6 + lVar3))[1] = pfStack_d0;
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  *puVar1 = local_c8;
  puVar1[1] = CONCAT44(fStack_bc,fStack_c0);
  puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar3);
  *puVar1 = CONCAT44(fStack_b4,fStack_b8);
  puVar1[1] = uStack_b0;
  puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar3);
  *puVar1 = CONCAT44(fStack_a4,local_a8);
  puVar1[1] = CONCAT44(uStack_9c,fStack_a0);
  puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar3);
  *puVar1 = CONCAT44(uStack_94,local_98);
  puVar1[1] = uStack_90;
  puVar1 = (undefined8 *)(lVar6 + 0x50 + lVar3);
  *puVar1 = local_88;
  puVar1[1] = uStack_80;
  *(undefined8 *)(lVar6 + 0x60 + lVar3) = local_78;
  return;
}



// FUNCTION 14228e1c0 ConstrainPositionNailed body=884 status=ok
// SIG undefined ConstrainPositionNailed(void)

void FAnimPhys::ConstrainPositionNailed
               (float param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
               longlong param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  
  if (param_3 == 0) {
    local_e0 = *(undefined4 *)(param_4 + 1);
    puVar4 = &local_e8;
    local_e8 = *param_4;
  }
  else {
    puVar4 = (undefined8 *)FAnimPhysPose::operator*(param_3,&local_e8,param_4);
  }
  local_70 = *puVar4;
  local_68 = *(float *)(puVar4 + 1);
  if (param_5 == 0) {
    local_e0 = *(undefined4 *)(param_6 + 1);
    puVar4 = &local_e8;
    local_e8 = *param_6;
  }
  else {
    puVar4 = (undefined8 *)FAnimPhysPose::operator*(param_5,&local_e8,param_6);
  }
  uStack_c0 = *(undefined4 *)(param_4 + 1);
  fVar8 = *(float *)(puVar4 + 1) - local_68;
  param_1 = 1.0 / param_1;
  uStack_b4 = *(undefined4 *)(param_6 + 1);
  local_e0 = 0;
  lStack_d0 = param_5;
  local_a8 = 0;
  local_c8 = *param_4;
  uStack_bc = (undefined4)*param_6;
  uStack_b8 = (undefined4)((ulonglong)*param_6 >> 0x20);
  fVar7 = (float)((ulonglong)*puVar4 >> 0x20) - local_70._4_4_;
  fStack_a4 = ((float)*puVar4 - (float)local_70) * param_1;
  uStack_b0 = 0x3f800000;
  uStack_a0 = 0;
  uStack_9c = 0xff7fffff;
  uStack_98 = 0x7f7fffff;
  uStack_94 = 0;
  local_d8 = param_3;
  FAnimPhysLinearLimit::UpdateCachedData(&local_d8);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar6 = lStack_d0;
  lVar3 = *param_2;
  local_e0 = 0;
  lVar5 = (longlong)iVar2 * 0x68;
  lStack_d0 = param_5;
  *(longlong *)(lVar5 + lVar3) = local_d8;
  ((longlong *)(lVar5 + lVar3))[1] = lVar6;
  puVar4 = (undefined8 *)(lVar5 + 0x10 + lVar3);
  *puVar4 = local_c8;
  puVar4[1] = CONCAT44(uStack_bc,uStack_c0);
  puVar4 = (undefined8 *)(lVar5 + 0x20 + lVar3);
  *puVar4 = CONCAT44(uStack_b4,uStack_b8);
  puVar4[1] = uStack_b0;
  puVar4 = (undefined8 *)(lVar5 + 0x30 + lVar3);
  *puVar4 = CONCAT44(fStack_a4,local_a8);
  puVar4[1] = CONCAT44(uStack_9c,uStack_a0);
  puVar4 = (undefined8 *)(lVar5 + 0x40 + lVar3);
  *puVar4 = CONCAT44(uStack_94,uStack_98);
  puVar4[1] = uStack_90;
  puVar1 = (undefined4 *)(lVar5 + 0x50 + lVar3);
  *puVar1 = local_88;
  puVar1[1] = uStack_84;
  puVar1[2] = uStack_80;
  puVar1[3] = uStack_7c;
  *(undefined8 *)(lVar5 + 0x60 + lVar3) = local_78;
  local_c8 = *param_4;
  uStack_c0 = *(undefined4 *)(param_4 + 1);
  uStack_bc = (undefined4)*param_6;
  uStack_b8 = (undefined4)((ulonglong)*param_6 >> 0x20);
  uStack_b4 = *(undefined4 *)(param_6 + 1);
  uStack_b0 = 0x3f80000000000000;
  uStack_a0 = 0;
  uStack_9c = 0xff7fffff;
  uStack_98 = 0x7f7fffff;
  uStack_94 = 0;
  local_a8 = 0;
  local_d8 = param_3;
  fStack_a4 = fVar7 * param_1;
  FAnimPhysLinearLimit::UpdateCachedData(&local_d8);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar6 = lStack_d0;
  lVar3 = *param_2;
  local_e0 = 0x3f800000;
  lVar5 = (longlong)iVar2 * 0x68;
  lStack_d0 = param_5;
  *(longlong *)(lVar5 + lVar3) = local_d8;
  ((longlong *)(lVar5 + lVar3))[1] = lVar6;
  puVar4 = (undefined8 *)(lVar5 + 0x10 + lVar3);
  *puVar4 = local_c8;
  puVar4[1] = CONCAT44(uStack_bc,uStack_c0);
  puVar4 = (undefined8 *)(lVar5 + 0x20 + lVar3);
  *puVar4 = CONCAT44(uStack_b4,uStack_b8);
  puVar4[1] = uStack_b0;
  puVar4 = (undefined8 *)(lVar5 + 0x30 + lVar3);
  *puVar4 = CONCAT44(fStack_a4,local_a8);
  puVar4[1] = CONCAT44(uStack_9c,uStack_a0);
  puVar4 = (undefined8 *)(lVar5 + 0x40 + lVar3);
  *puVar4 = CONCAT44(uStack_94,uStack_98);
  puVar4[1] = uStack_90;
  puVar1 = (undefined4 *)(lVar5 + 0x50 + lVar3);
  *puVar1 = local_88;
  puVar1[1] = uStack_84;
  puVar1[2] = uStack_80;
  puVar1[3] = uStack_7c;
  *(undefined8 *)(lVar5 + 0x60 + lVar3) = local_78;
  local_c8 = *param_4;
  uStack_c0 = *(undefined4 *)(param_4 + 1);
  uStack_bc = (undefined4)*param_6;
  uStack_b8 = (undefined4)((ulonglong)*param_6 >> 0x20);
  uStack_b4 = *(undefined4 *)(param_6 + 1);
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_9c = 0xff7fffff;
  uStack_98 = 0x7f7fffff;
  uStack_94 = 0;
  local_a8 = 0x3f800000;
  local_d8 = param_3;
  fStack_a4 = fVar8 * param_1;
  FAnimPhysLinearLimit::UpdateCachedData(&local_d8);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar2 * 0x68;
  *(longlong *)(lVar6 + lVar3) = local_d8;
  ((longlong *)(lVar6 + lVar3))[1] = lStack_d0;
  puVar4 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  *puVar4 = local_c8;
  puVar4[1] = CONCAT44(uStack_bc,uStack_c0);
  puVar4 = (undefined8 *)(lVar6 + 0x20 + lVar3);
  *puVar4 = CONCAT44(uStack_b4,uStack_b8);
  puVar4[1] = uStack_b0;
  puVar4 = (undefined8 *)(lVar6 + 0x30 + lVar3);
  *puVar4 = CONCAT44(fStack_a4,local_a8);
  puVar4[1] = CONCAT44(uStack_9c,uStack_a0);
  puVar4 = (undefined8 *)(lVar6 + 0x40 + lVar3);
  *puVar4 = CONCAT44(uStack_94,uStack_98);
  puVar4[1] = uStack_90;
  puVar4 = (undefined8 *)(lVar6 + 0x50 + lVar3);
  *puVar4 = CONCAT44(uStack_84,local_88);
  puVar4[1] = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(lVar6 + 0x60 + lVar3) = local_78;
  return;
}



// FUNCTION 14228e540 FUN_14228e540 body=661 status=ok
// SIG undefined FUN_14228e540(void)

void FUN_14228e540(float param_1,longlong *param_2,float *param_3,longlong param_4,float param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_e8;
  float *pfStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_78;
  
  local_d8 = *(float *)(param_4 + 0x10);
  fStack_d4 = *(float *)(param_4 + 0x14);
  fStack_d0 = *(float *)(param_4 + 0x18);
  local_f8 = *param_3 - local_d8;
  fStack_f4 = param_3[1] - fStack_d4;
  local_f0 = param_3[2] - fStack_d0;
  fVar7 = fStack_f4 * fStack_f4 + local_f8 * local_f8 + local_f0 * local_f0;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_f8 = DAT_1468b5d90;
      local_f0 = DAT_1468b5d98;
      fStack_f4 = DAT_1468b5d94;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
      local_f8 = local_f8 * fVar5;
      fStack_f4 = fStack_f4 * fVar5;
      local_f0 = local_f0 * fVar5;
    }
  }
  param_5 = SQRT(fVar7) - param_5;
  if (*(char *)(param_3 + 0x67) != '\0') {
    param_5 = param_5 + param_3[0x68];
  }
  fStack_b4 = param_5 / param_1;
  fStack_c4 = DAT_1468b5d98;
  local_e8 = 0;
  local_b8 = local_f0;
  local_a8 = 0;
  uStack_c0 = CONCAT44(fStack_f4,local_f8);
  uStack_ac = 0xff7fffff;
  fStack_cc = DAT_1468b5d90;
  fStack_c8 = DAT_1468b5d94;
  pfStack_e0 = param_3;
  fStack_b0 = fStack_b4;
  local_78 = fStack_d0;
  FAnimPhysLinearLimit::UpdateCachedData(&local_e8);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x68;
  *(undefined8 *)(lVar4 + lVar3) = local_e8;
  ((undefined8 *)(lVar4 + lVar3))[1] = pfStack_e0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = CONCAT44(fStack_d4,local_d8);
  puVar1[1] = CONCAT44(fStack_cc,fStack_d0);
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3);
  *puVar1 = CONCAT44(fStack_c4,fStack_c8);
  puVar1[1] = uStack_c0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar3);
  *puVar1 = CONCAT44(fStack_b4,local_b8);
  puVar1[1] = CONCAT44(uStack_ac,fStack_b0);
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar3);
  *puVar1 = local_a8;
  puVar1[1] = uStack_a0;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar3);
  *puVar1 = local_98;
  puVar1[1] = uStack_90;
  *(undefined8 *)(lVar4 + 0x60 + lVar3) = local_88;
  return;
}



// FUNCTION 14228e7e0 FUN_14228e7e0 body=642 status=ok
// SIG undefined FUN_14228e7e0(void)

void FUN_14228e7e0(float param_1,longlong *param_2,float *param_3,longlong param_4,float param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_e8;
  float fStack_e4;
  float local_e0;
  undefined8 local_c8;
  float *pfStack_c0;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_b8 = *(undefined8 *)(param_4 + 0x10);
  fStack_b0 = *(float *)(param_4 + 0x18);
  local_e8 = *param_3 - *(float *)(param_4 + 0x10);
  fStack_e4 = param_3[1] - *(float *)(param_4 + 0x14);
  local_e0 = param_3[2] - fStack_b0;
  fVar5 = fStack_e4 * fStack_e4 + local_e8 * local_e8 + local_e0 * local_e0;
  param_5 = SQRT(fVar5) - param_5;
  if (*(char *)(param_3 + 0x67) != '\0') {
    param_5 = param_5 - param_3[0x68];
  }
  fStack_94 = param_5 / param_1;
  if (fVar5 != 1.0) {
    if (fVar5 < 1e-08) {
      local_e8 = DAT_1468b5d90;
      local_e0 = DAT_1468b5d98;
      fStack_e4 = DAT_1468b5d94;
    }
    else {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      local_e8 = local_e8 * fVar6;
      fStack_e4 = fStack_e4 * fVar6;
      local_e0 = local_e0 * fVar6;
    }
  }
  uStack_a0 = CONCAT44(fStack_e4,local_e8);
  fStack_a4 = DAT_1468b5d98;
  local_88 = 0x7f7fffff;
  local_c8 = 0;
  fStack_ac = DAT_1468b5d90;
  fStack_a8 = DAT_1468b5d94;
  local_98 = local_e0;
  uStack_8c = 0;
  uStack_84 = 0;
  pfStack_c0 = param_3;
  fStack_90 = fStack_94;
  FAnimPhysLinearLimit::UpdateCachedData(&local_c8);
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x68;
  *(undefined8 *)(lVar4 + lVar3) = local_c8;
  ((undefined8 *)(lVar4 + lVar3))[1] = pfStack_c0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_b8;
  puVar1[1] = CONCAT44(fStack_ac,fStack_b0);
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3);
  *puVar1 = CONCAT44(fStack_a4,fStack_a8);
  puVar1[1] = uStack_a0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar3);
  *puVar1 = CONCAT44(fStack_94,local_98);
  puVar1[1] = CONCAT44(uStack_8c,fStack_90);
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar3);
  *puVar1 = CONCAT44(uStack_84,local_88);
  puVar1[1] = uStack_80;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar3);
  *puVar1 = local_78;
  puVar1[1] = uStack_70;
  *(undefined8 *)(lVar4 + 0x60 + lVar3) = local_68;
  return;
}



// FUNCTION 14228ea70 ContainsNaN body=107 status=ok
// SIG undefined ContainsNaN(void)

undefined8 FComponentSpacePoseContext::ContainsNaN(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = (longlong)*(int *)(param_1 + 0x10) * 0x30 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    cVar1 = FUN_140618120(lVar2);
    if (((cVar1 != '\0') || (cVar1 = FUN_140618120(lVar2 + 0x10), cVar1 != '\0')) ||
       (cVar1 = FUN_140618120(lVar2 + 0x20), cVar1 != '\0')) break;
    lVar2 = lVar2 + 0x30;
  }
  return 1;
}



// FUNCTION 14228eae0 CreateSpring body=214 status=ok
// SIG undefined CreateSpring(void)

void FAnimPhys::CreateSpring
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_18;
  undefined1 local_17;
  
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  puVar4 = (undefined8 *)((longlong)iVar2 * 0x60 + *param_1);
  puVar4[1] = param_4;
  *puVar4 = param_2;
  puVar4[2] = local_58;
  puVar4[3] = uStack_50;
  *(undefined4 *)(puVar4 + 9) = 0x41400000;
  puVar4[4] = local_48;
  uVar1 = *param_3;
  *(undefined4 *)(puVar4 + 5) = local_40;
  *(undefined1 *)((longlong)puVar4 + 0x2c) = local_3c;
  uVar3 = *(undefined4 *)(param_3 + 1);
  puVar4[6] = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x40800000;
  uVar3 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)((longlong)puVar4 + 0x3c) = *param_5;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uVar3;
  *(undefined1 *)(puVar4 + 10) = local_18;
  *(undefined1 *)((longlong)puVar4 + 0x51) = local_17;
  return;
}



// FUNCTION 14228ebc0 CreateTickRecordForNode body=186 status=ok
// SIG undefined CreateTickRecordForNode(void)

void FAnimNode_AssetPlayerBase::CreateTickRecordForNode
               (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong local_res8;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  if ((*(byte *)(param_1 + 0x38) < 3) || (uVar3 = 0xffffffff, *(char *)(param_1 + 0x54) != '\0')) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
  }
  lVar2 = FUN_14225c6d0(*param_2,uVar3,&local_res8);
  FUN_1422777c0(*param_2,lVar2,param_3,param_4,param_5,uVar1,param_1 + 0x40,param_1 + 0x44);
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)((longlong)param_2 + 0xc);
  if (local_res8 != 0) {
    FUN_1422b4c10(local_res8,*(undefined1 *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 14228ec80 DiffQ body=1393 status=ok
// SIG undefined DiffQ(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FAnimPhys::DiffQ(float *param_1,undefined8 *param_2,float *param_3,float *param_4)

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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  local_1b8 = (float)*param_2;
  fStack_1b4 = (float)((ulonglong)*param_2 >> 0x20);
  fStack_1b0 = (float)param_2[1];
  fStack_1ac = (float)((ulonglong)param_2[1] >> 0x20);
  auVar17._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
  auVar17._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
  auVar17._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
  auVar17._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
  fVar24 = auVar17._4_4_ + auVar17._0_4_;
  fVar25 = auVar17._8_4_ + auVar17._4_4_;
  fVar26 = auVar17._12_4_ + auVar17._8_4_;
  fVar27 = auVar17._0_4_ + auVar17._12_4_;
  auVar18._4_4_ = fVar25;
  auVar18._0_4_ = fVar24;
  auVar18._8_4_ = fVar26;
  auVar18._12_4_ = fVar27;
  auVar18 = rsqrtps(auVar17,auVar18);
  fVar19 = auVar18._0_4_;
  fVar20 = auVar18._4_4_;
  fVar21 = auVar18._8_4_;
  fVar22 = auVar18._12_4_;
  fVar19 = (_DAT_146aef170 - fVar19 * fVar19 * _DAT_146aef170 * fVar24) * fVar19 + fVar19;
  fVar20 = (fRam0000000146aef174 - fVar20 * fVar20 * fRam0000000146aef174 * fVar25) * fVar20 +
           fVar20;
  fVar21 = (fRam0000000146aef178 - fVar21 * fVar21 * fRam0000000146aef178 * fVar26) * fVar21 +
           fVar21;
  fVar22 = (fRam0000000146aef17c - fVar22 * fVar22 * fRam0000000146aef17c * fVar27) * fVar22 +
           fVar22;
  local_b8 = (float)(((uint)(((_DAT_146aef170 - fVar19 * fVar19 * _DAT_146aef170 * fVar24) * fVar19
                             + fVar19) * local_1b8) ^ _DAT_146aef160) & -(uint)(1e-08 <= fVar24) ^
                    _DAT_146aef160);
  fStack_b4 = (float)(((uint)(((fRam0000000146aef174 -
                               fVar20 * fVar20 * fRam0000000146aef174 * fVar25) * fVar20 + fVar20) *
                             fStack_1b4) ^ uRam0000000146aef164) & -(uint)(1e-08 <= fVar25) ^
                     uRam0000000146aef164);
  fStack_b0 = (float)(((uint)(((fRam0000000146aef178 -
                               fVar21 * fVar21 * fRam0000000146aef178 * fVar26) * fVar21 + fVar21) *
                             fStack_1b0) ^ uRam0000000146aef168) & -(uint)(1e-08 <= fVar26) ^
                     uRam0000000146aef168);
  fStack_ac = (float)(((uint)(((fRam0000000146aef17c -
                               fVar22 * fVar22 * fRam0000000146aef17c * fVar27) * fVar22 + fVar22) *
                             fStack_1ac) ^ uRam0000000146aef16c) & -(uint)(1e-08 <= fVar27) ^
                     uRam0000000146aef16c);
  _local_1b8 = CONCAT44(fStack_b4,local_b8);
  _fStack_1b0 = CONCAT44(fStack_ac,fStack_b0);
  FQuatRotationMatrix::Make(&local_198,&local_1b8);
  fVar19 = *param_3;
  fVar20 = param_3[1];
  fVar21 = param_3[2];
  fVar22 = param_3[3];
  fVar24 = param_3[4];
  fVar25 = param_3[5];
  fVar26 = param_3[6];
  fVar27 = param_3[7];
  fVar23 = param_3[8];
  fVar28 = param_3[9];
  fVar29 = param_3[10];
  fVar30 = param_3[0xb];
  fVar1 = param_3[0xc];
  fVar2 = param_3[0xd];
  fVar3 = param_3[0xe];
  fVar4 = param_3[0xf];
  fVar5 = local_198 * fVar19 + fStack_194 * fVar24 + fStack_190 * fVar23 + fStack_18c * fVar1;
  fVar8 = local_198 * fVar20 + fStack_194 * fVar25 + fStack_190 * fVar28 + fStack_18c * fVar2;
  fVar11 = local_198 * fVar21 + fStack_194 * fVar26 + fStack_190 * fVar29 + fStack_18c * fVar3;
  fVar14 = local_198 * fVar22 + fStack_194 * fVar27 + fStack_190 * fVar30 + fStack_18c * fVar4;
  fVar6 = local_188 * fVar19 + fStack_184 * fVar24 + fStack_180 * fVar23 + fStack_17c * fVar1;
  fVar9 = local_188 * fVar20 + fStack_184 * fVar25 + fStack_180 * fVar28 + fStack_17c * fVar2;
  fVar12 = local_188 * fVar21 + fStack_184 * fVar26 + fStack_180 * fVar29 + fStack_17c * fVar3;
  fVar15 = local_188 * fVar22 + fStack_184 * fVar27 + fStack_180 * fVar30 + fStack_17c * fVar4;
  fVar7 = local_178 * fVar19 + fStack_174 * fVar24 + fStack_170 * fVar23 + fStack_16c * fVar1;
  fVar10 = local_178 * fVar20 + fStack_174 * fVar25 + fStack_170 * fVar28 + fStack_16c * fVar2;
  fVar13 = local_178 * fVar21 + fStack_174 * fVar26 + fStack_170 * fVar29 + fStack_16c * fVar3;
  fVar16 = local_178 * fVar22 + fStack_174 * fVar27 + fStack_170 * fVar30 + fStack_16c * fVar4;
  fVar23 = local_168 * fVar19 + fStack_164 * fVar24 + fStack_160 * fVar23 + fStack_15c * fVar1;
  fVar25 = local_168 * fVar20 + fStack_164 * fVar25 + fStack_160 * fVar28 + fStack_15c * fVar2;
  fVar26 = local_168 * fVar21 + fStack_164 * fVar26 + fStack_160 * fVar29 + fStack_15c * fVar3;
  fVar27 = local_168 * fVar22 + fStack_164 * fVar27 + fStack_160 * fVar30 + fStack_15c * fVar4;
  fVar19 = *param_4;
  fVar20 = param_4[1];
  fVar21 = param_4[2];
  fVar22 = ((fVar25 * fStack_194 + fVar23 * local_198 + fVar26 * fStack_190 + fVar27 * fStack_18c) *
            0.0 + fVar21 * (fVar10 * fStack_194 + fVar7 * local_198 + fVar13 * fStack_190 +
                           fVar16 * fStack_18c) +
           fVar20 * (fVar9 * fStack_194 + fVar6 * local_198 + fVar12 * fStack_190 +
                    fVar15 * fStack_18c) +
           fVar19 * (fVar5 * local_198 + fVar8 * fStack_194 + fVar11 * fStack_190 +
                    fVar14 * fStack_18c)) * 0.5;
  fVar24 = ((fVar25 * fStack_184 + fVar23 * local_188 + fVar26 * fStack_180 + fVar27 * fStack_17c) *
            0.0 + fVar21 * (fVar10 * fStack_184 + fVar7 * local_188 + fVar13 * fStack_180 +
                           fVar16 * fStack_17c) +
           fVar20 * (fVar9 * fStack_184 + fVar6 * local_188 + fVar12 * fStack_180 +
                    fVar15 * fStack_17c) +
           fVar19 * (fVar5 * local_188 + fVar8 * fStack_184 + fVar11 * fStack_180 +
                    fVar14 * fStack_17c)) * 0.5;
  fVar30 = ((fVar25 * fStack_174 + fVar23 * local_178 + fVar26 * fStack_170 + fVar27 * fStack_16c) *
            0.0 + fVar21 * (fVar10 * fStack_174 + fVar7 * local_178 + fVar13 * fStack_170 +
                           fVar16 * fStack_16c) +
           fVar20 * (fVar9 * fStack_174 + fVar6 * local_178 + fVar12 * fStack_170 +
                    fVar15 * fStack_16c) +
           fVar19 * (fVar5 * local_178 + fVar8 * fStack_174 + fVar11 * fStack_170 +
                    fVar14 * fStack_16c)) * 0.5;
  fVar25 = fStack_b0 * fVar22 * fRam0000000146aef154;
  fVar26 = fStack_b4 * fVar22 * fRam0000000146aef158;
  fVar27 = local_b8 * fVar22 * fRam0000000146aef15c;
  fVar19 = fStack_ac * fVar24 * fRam0000000146aef144;
  fVar20 = local_b8 * fVar24 * fRam0000000146aef148;
  fVar21 = fStack_b4 * fVar24 * fRam0000000146aef14c;
  fVar23 = local_b8 * fVar30 * fRam0000000146aef134;
  fVar28 = fStack_ac * fVar30 * fRam0000000146aef138;
  fVar29 = fStack_b0 * fVar30 * fRam0000000146aef13c;
  *param_1 = fStack_ac * fVar22 * _DAT_146aef150 + local_b8 * 0.0 +
             fStack_b0 * fVar24 * _DAT_146aef140 + fStack_b4 * fVar30 * _DAT_146aef130;
  param_1[1] = fVar25 + fStack_b4 * 0.0 + fVar19 + fVar23;
  param_1[2] = fVar26 + fStack_b0 * 0.0 + fVar20 + fVar28;
  param_1[3] = fVar27 + fStack_ac * 0.0 + fVar21 + fVar29;
  return param_1;
}



// FUNCTION 14228f220 FUN_14228f220 body=39 status=ok
// SIG undefined FUN_14228f220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14228f220(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = uRam0000000146acae0c;
  uVar4 = uRam0000000146acae08;
  uVar3 = uRam0000000146acae04;
  uVar2 = _DAT_146acae00;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014228f22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    return;
  }
  if (*(char *)(param_2 + 0x40) == '\0') {
    FUN_1408488d0((undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
    return;
  }
  puVar7 = *(undefined4 **)(param_2 + 8);
  puVar6 = puVar7 + (longlong)*(int *)(param_2 + 0x10) * 0xc;
  uVar8 = uRam0000000146acadfc;
  for (; puVar7 != puVar6; puVar7 = puVar7 + 0xc) {
    uRam0000000146acadfc = uVar8;
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = uVar8;
    uVar8 = uRam0000000146acadf4 & uVar3;
    uVar9 = uRam0000000146acadf8 & uVar4;
    uVar10 = uRam0000000146acadfc & uVar5;
    puVar7[8] = _DAT_146acadf0 & uVar2;
    puVar7[9] = uVar8;
    puVar7[10] = uVar9;
    puVar7[0xb] = uVar10;
    auVar1._4_4_ = DAT_1468b5d94;
    auVar1._0_4_ = DAT_1468b5d90;
    auVar1._8_4_ = DAT_1468b5d98;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(puVar7 + 8) = auVar1;
    uVar8 = uRam0000000146acadfc;
  }
  uRam0000000146acadfc = uVar8;
  return;
}



// FUNCTION 14228f250 FUN_14228f250 body=249 status=ok
// SIG undefined FUN_14228f250(void)

void FUN_14228f250(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014228f26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    return;
  }
  lVar4 = *param_2 + 0x3a0;
  param_2[3] = lVar4;
  iVar2 = *(int *)(*param_2 + 0x3a8);
  iVar5 = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  iVar3 = 0;
  if ((*(int *)((longlong)param_2 + 0x14) < iVar2) &&
     (iVar3 = 0, iVar2 != *(int *)((longlong)param_2 + 0x14))) {
    FUN_140848c80(param_2 + 1,iVar2);
    iVar3 = (int)param_2[2];
  }
  *(int *)(param_2 + 2) = iVar3 + iVar2;
  if (*(int *)((longlong)param_2 + 0x14) < iVar3 + iVar2) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(param_2 + 1);
  }
  FUN_1408488d0(param_2 + 1,param_2[3]);
  *(undefined4 *)(param_2 + 5) = 0;
  if (*(int *)((longlong)param_2 + 0x2c) != (int)param_2[2]) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 4);
    iVar5 = (int)param_2[5];
  }
  lVar1 = param_2[2];
  iVar2 = iVar5 + (int)lVar1;
  *(int *)(param_2 + 5) = iVar2;
  if (*(int *)((longlong)param_2 + 0x2c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 4);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 + param_2[4]),0,(longlong)(int)lVar1);
  *(undefined1 *)param_2[4] = 1;
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(param_2 + 10,lVar4);
  return;
}



// FUNCTION 14228f360 FUN_14228f360 body=333 status=ok
// SIG undefined FUN_14228f360(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14228f360(longlong param_1,longlong *param_2)

{
  void **ppvVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  longlong local_68 [2];
  int local_58;
  int local_54;
  longlong local_50;
  void *local_48;
  ulonglong local_40;
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  char local_28;
  
  local_68[0] = *param_2;
  local_58 = 0;
  local_68[1] = 0;
  local_54 = 0;
  lVar4 = local_68[0] + 0x3a0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2e = 0;
  local_28 = '\0';
  iVar2 = *(int *)(local_68[0] + 0x3a8);
  local_50 = lVar4;
  if (0 < iVar2) {
    local_58 = 0;
    FUN_140848c80(local_68 + 1,iVar2);
  }
  local_58 = iVar2 + local_58;
  if (local_54 < local_58) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(local_68 + 1);
  }
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_48,lVar4);
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    if (local_28 == '\0') {
      FUN_1408488d0(local_68 + 1,local_50);
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
    }
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3,local_68);
  }
  FCSPose<FCompactPose>::InitPose(param_2 + 1,local_68 + 1);
  _Src = local_48;
  ppvVar1 = (void **)(param_2 + 10);
  if (ppvVar1 != &local_48) {
    lVar4 = (longlong)(int)local_40;
    *(int *)(param_2 + 0xb) = (int)local_40;
    if (((int)local_40 == 0) && (*(int *)((longlong)param_2 + 0x5c) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
    }
    else {
      FUN_141dab210(ppvVar1,local_40 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,lVar4 << 3);
    }
  }
  param_2[0xc] = local_38;
  *(undefined2 *)(param_2 + 0xd) = local_30;
  *(undefined1 *)((longlong)param_2 + 0x6a) = local_2e;
  return;
}



// FUNCTION 14228f4e0 FUN_14228f4e0 body=278 status=ok
// SIG undefined FUN_14228f4e0(void)

undefined8 * FUN_14228f4e0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar4 = (longlong)param_2;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0xb0) + lVar4 * 8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)operator_new(0x48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      *(undefined2 *)(puVar3 + 7) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x3a) = 0;
      *(bool *)(puVar3 + 8) = *(char *)(param_3 + 8) != '\0';
      FUN_142296770(puVar3,*param_3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0xb0) + lVar4 * 8) = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (((lVar1 == 0) || (*(int *)(lVar1 + 0x18) <= param_2)) ||
       (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar4 * 0x58) == '\0')) {
      local_res8 = *param_3;
      FUN_14228c540(param_1,param_2,&local_res8);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 8 + lVar4 * 0x18);
      if (plVar2 == (longlong *)0x0) {
        if (*(char *)(puVar3 + 8) == '\0') {
          FUN_1408488d0(puVar3 + 1,puVar3[3]);
        }
        else {
          FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
        }
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2,puVar3);
      }
    }
  }
  return puVar3;
}



// FUNCTION 14228f600 FUN_14228f600 body=675 status=ok
// SIG undefined FUN_14228f600(void)

void FUN_14228f600(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short sVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  short *psVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong local_78;
  longlong local_70;
  uint local_68;
  int local_64;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  char local_38;
  
  if (*(int *)(param_3 + 0x20) != -1) {
    iVar18 = 0;
    while ((-1 < iVar18 && (iVar18 < *(int *)(param_3 + 0x58)))) {
      lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x50) + (longlong)iVar18 * 8);
      if ((*(char *)(lVar19 + 0x31) == '\0') || (0 < *(int *)(lVar19 + 0x70))) {
        if (param_4 == '\0') {
          if (*(char *)(lVar19 + 0x30) != '\0') goto LAB_14228f6a4;
          uVar8 = *(undefined4 *)(param_3 + 0x3c);
LAB_14228f6a8:
          lVar15 = FUN_14228f4e0(param_1,uVar8,param_2);
          FUN_142285d00(lVar19 + 0x38,lVar15 + 8);
          FBaseBlendedCurve<FDefaultAllocator>::CopyFrom<TMemStackAllocator<0>_>
                    (lVar19 + 0x50,lVar15 + 0x20);
          goto LAB_14228f6d0;
        }
        if (*(char *)(lVar19 + 0x30) != '\0') {
LAB_14228f6a4:
          uVar8 = *(undefined4 *)(param_3 + 0x38);
          goto LAB_14228f6a8;
        }
        FUN_142285d00(lVar19 + 0x38,param_2 + 1);
        FBaseBlendedCurve<FDefaultAllocator>::CopyFrom<TMemStackAllocator<0>_>
                  (lVar19 + 0x50,param_2 + 4);
        iVar18 = iVar18 + 1;
      }
      else {
LAB_14228f6d0:
        iVar18 = iVar18 + 1;
      }
    }
    local_78 = *param_2;
    uVar21 = 0;
    local_38 = (char)param_2[8] != '\0';
    lVar19 = local_78 + 0x3a0;
    local_70 = 0;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3e = 0;
    iVar18 = *(int *)(local_78 + 0x3a8);
    uVar17 = uVar21;
    local_60 = lVar19;
    if (0 < iVar18) {
      local_68 = 0;
      FUN_140848c80(&local_70,iVar18);
      uVar17 = (ulonglong)local_68;
    }
    local_68 = iVar18 + (int)uVar17;
    if (local_64 < (int)local_68) {
      TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_70);
    }
    FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_58,lVar19);
    plVar9 = *(longlong **)(param_3 + 0x28);
    if (plVar9 == (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_1408488d0(&local_70,local_60);
      }
      else {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      }
    }
    else {
      (**(code **)(*plVar9 + 0x18))(plVar9,&local_78);
    }
    if (*(uint *)(param_2 + 2) != 0) {
      uVar20 = (ulonglong)*(uint *)(param_2 + 2);
      uVar17 = uVar21;
      do {
        uVar1 = uVar17 + 0x30;
        lVar19 = param_2[1];
        puVar3 = (undefined8 *)(local_70 + -0x30 + uVar1);
        uVar12 = puVar3[1];
        *(undefined8 *)(uVar17 + lVar19) = *puVar3;
        ((undefined8 *)(uVar17 + lVar19))[1] = uVar12;
        puVar3 = (undefined8 *)(local_70 + -0x20 + uVar1);
        uVar12 = puVar3[1];
        puVar4 = (undefined8 *)(uVar17 + 0x10 + lVar19);
        *puVar4 = *puVar3;
        puVar4[1] = uVar12;
        puVar5 = (undefined4 *)(local_70 + -0x10 + uVar1);
        uVar8 = puVar5[1];
        uVar10 = puVar5[2];
        uVar11 = puVar5[3];
        puVar6 = (undefined4 *)(uVar17 + 0x20 + lVar19);
        *puVar6 = *puVar5;
        puVar6[1] = uVar8;
        puVar6[2] = uVar10;
        puVar6[3] = uVar11;
        uVar20 = uVar20 - 1;
        uVar17 = uVar1;
      } while (uVar20 != 0);
    }
    ppvVar2 = (void **)(param_2 + 4);
    if (&local_58 != ppvVar2) {
      param_2[6] = local_48;
      *(undefined4 *)(param_2 + 5) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_2 + 0x2c)) {
        FUN_140957580(ppvVar2,0);
      }
      iVar18 = (int)local_50;
      lVar19 = (longlong)(int)local_50;
      if ((int)local_50 != 0) {
        iVar13 = (int)param_2[5];
        if (*(int *)((longlong)param_2 + 0x2c) < (int)local_50 + iVar13) {
          FUN_140957580(ppvVar2);
          iVar13 = (int)param_2[5];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)*ppvVar2 + (longlong)iVar13 * 8),local_58,lVar19 << 3);
        *(int *)(param_2 + 5) = (int)param_2[5] + iVar18;
      }
      puVar3 = (undefined8 *)param_2[6];
      if ((puVar3 != (undefined8 *)0x0) && (lVar19 = (longlong)*(int *)(puVar3 + 1), 0 < lVar19)) {
        psVar16 = (short *)*puVar3;
        do {
          sVar7 = *psVar16;
          psVar16 = psVar16 + 1;
          uVar14 = (uint)uVar21 + 1;
          if (sVar7 == -1) {
            uVar14 = (uint)uVar21;
          }
          uVar21 = (ulonglong)uVar14;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      *(short *)(param_2 + 7) = (short)uVar21;
      *(undefined1 *)((longlong)param_2 + 0x3a) = 1;
    }
  }
  return;
}



// FUNCTION 14228f8b0 FUN_14228f8b0 body=431 status=ok
// SIG undefined FUN_14228f8b0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14228f8b0(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong local_68 [2];
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_28;
  
  if (param_4 == '\0') {
    uVar2 = FUN_14228f4e0(param_1,*(undefined4 *)(param_3 + 0x3c),param_2);
    uVar3 = FUN_14228f4e0(param_1,*(undefined4 *)(param_3 + 0x38),param_2);
    FUN_14228fa60(param_1,param_2,param_3,uVar2,uVar3);
  }
  else {
    iVar4 = 0;
    local_28 = (char)param_2[8] != '\0';
    local_68[0] = *param_2;
    local_68[1] = 0;
    local_54 = 0;
    lVar5 = local_68[0] + 0x3a0;
    local_48 = 0;
    iVar1 = *(int *)(local_68[0] + 0x3a8);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2e = 0;
    local_50 = lVar5;
    local_58 = iVar4;
    if (0 < iVar1) {
      local_58 = 0;
      FUN_140848c80(local_68 + 1,iVar1);
    }
    local_58 = iVar1 + local_58;
    if (local_54 < local_58) {
      TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(local_68 + 1);
    }
    FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_48,lVar5);
    if (local_68[0] != *param_2) {
      lVar5 = local_68[0] + 0x3a0;
      iVar1 = *(int *)(local_68[0] + 0x3a8);
      local_50 = lVar5;
      if ((local_54 < iVar1) && (local_58 = 0, iVar1 != local_54)) {
        FUN_140848c80(local_68 + 1,iVar1);
        iVar4 = local_58;
      }
      local_58 = iVar1 + iVar4;
      if (local_54 < local_58) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(local_68 + 1,iVar4);
      }
      FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_48,lVar5);
    }
    TArray<FTransform,TMemStackAllocator<0>_>::operator=(local_68 + 1,param_2 + 1);
    local_50 = param_2[3];
    FBlendedCurve::operator=(&local_48,param_2 + 4);
    local_28 = (undefined1)param_2[8];
    uVar2 = FUN_14228f4e0(param_1,*(undefined4 *)(param_3 + 0x38),param_2);
    FUN_14228fa60(param_1,param_2,param_3,local_68,uVar2);
  }
  return;
}



// FUNCTION 14228fa60 FUN_14228fa60 body=975 status=ok
// SIG undefined FUN_14228fa60(void)

void FUN_14228fa60(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
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
  
  uVar13 = 0;
  fVar19 = 1.0 - *(float *)(param_3 + 4);
  fVar31 = *(float *)(param_3 + 4);
  if (*(longlong *)(param_3 + 0x90) == 0) {
    if (*(uint *)(param_2 + 2) != 0) {
      uVar18 = (ulonglong)*(uint *)(param_2 + 2);
      uVar14 = uVar13;
      do {
        lVar15 = *(longlong *)(param_4 + 8);
        pfVar3 = (float *)(uVar14 + lVar15);
        fVar28 = pfVar3[1];
        fVar30 = pfVar3[2];
        fVar7 = pfVar3[3];
        pfVar4 = (float *)(uVar14 + 0x10 + lVar15);
        fVar21 = *pfVar4;
        fVar20 = pfVar4[1];
        fVar22 = pfVar4[2];
        fVar23 = pfVar4[3];
        pfVar4 = (float *)(uVar14 + 0x20 + lVar15);
        fVar24 = *pfVar4;
        fVar25 = pfVar4[1];
        fVar26 = pfVar4[2];
        fVar27 = pfVar4[3];
        lVar15 = param_2[1];
        pfVar4 = (float *)(uVar14 + lVar15);
        *pfVar4 = fVar19 * *pfVar3;
        pfVar4[1] = fVar19 * fVar28;
        pfVar4[2] = fVar19 * fVar30;
        pfVar4[3] = fVar19 * fVar7;
        pfVar3 = (float *)(uVar14 + 0x10 + lVar15);
        *pfVar3 = fVar21 * fVar19;
        pfVar3[1] = fVar20 * fVar19;
        pfVar3[2] = fVar22 * fVar19;
        pfVar3[3] = fVar23 * fVar19;
        pfVar3 = (float *)(uVar14 + 0x20 + lVar15);
        *pfVar3 = fVar24 * fVar19;
        pfVar3[1] = fVar25 * fVar19;
        pfVar3[2] = fVar26 * fVar19;
        pfVar3[3] = fVar27 * fVar19;
        lVar15 = param_2[1];
        lVar6 = *(longlong *)(param_5 + 8);
        pfVar3 = (float *)(uVar14 + lVar6);
        fVar24 = *pfVar3 * fVar31;
        fVar25 = pfVar3[1] * fVar31;
        fVar26 = pfVar3[2] * fVar31;
        fVar27 = pfVar3[3] * fVar31;
        pfVar3 = (float *)(uVar14 + lVar15);
        fVar21 = fVar24 * *pfVar3 + fVar26 * pfVar3[2];
        fVar20 = fVar25 * pfVar3[1] + fVar27 * pfVar3[3];
        fVar22 = fVar26 * pfVar3[2] + fVar24 * *pfVar3;
        fVar23 = fVar27 * pfVar3[3] + fVar25 * pfVar3[1];
        pfVar3 = (float *)(uVar14 + lVar15);
        fVar28 = pfVar3[1];
        fVar30 = pfVar3[2];
        fVar7 = pfVar3[3];
        pfVar4 = (float *)(uVar14 + lVar15);
        *pfVar4 = (float)(-(uint)(0.0 <= fVar20 + fVar21) & ((uint)(0.0 - fVar24) ^ (uint)fVar24) ^
                         (uint)(0.0 - fVar24)) + *pfVar3;
        pfVar4[1] = (float)(-(uint)(0.0 <= fVar22 + fVar20) & ((uint)(0.0 - fVar25) ^ (uint)fVar25)
                           ^ (uint)(0.0 - fVar25)) + fVar28;
        pfVar4[2] = (float)(-(uint)(0.0 <= fVar23 + fVar22) & ((uint)(0.0 - fVar26) ^ (uint)fVar26)
                           ^ (uint)(0.0 - fVar26)) + fVar30;
        pfVar4[3] = (float)(-(uint)(0.0 <= fVar21 + fVar23) & ((uint)(0.0 - fVar27) ^ (uint)fVar27)
                           ^ (uint)(0.0 - fVar27)) + fVar7;
        pfVar3 = (float *)(uVar14 + 0x10 + lVar6);
        fVar28 = pfVar3[1];
        fVar30 = pfVar3[2];
        fVar7 = pfVar3[3];
        pfVar4 = (float *)(uVar14 + 0x10 + lVar15);
        fVar21 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar22 = pfVar4[3];
        pfVar5 = (float *)(uVar14 + 0x10 + lVar15);
        *pfVar5 = *pfVar3 * fVar31 + *pfVar4;
        pfVar5[1] = fVar28 * fVar31 + fVar21;
        pfVar5[2] = fVar30 * fVar31 + fVar20;
        pfVar5[3] = fVar7 * fVar31 + fVar22;
        pfVar3 = (float *)(uVar14 + 0x20 + lVar6);
        fVar28 = pfVar3[1];
        fVar30 = pfVar3[2];
        fVar7 = pfVar3[3];
        pfVar4 = (float *)(uVar14 + 0x20 + lVar15);
        fVar21 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar22 = pfVar4[3];
        pfVar5 = (float *)(uVar14 + 0x20 + lVar15);
        *pfVar5 = *pfVar3 * fVar31 + *pfVar4;
        pfVar5[1] = fVar28 * fVar31 + fVar21;
        pfVar5[2] = fVar30 * fVar31 + fVar20;
        pfVar5[3] = fVar7 * fVar31 + fVar22;
        uVar14 = uVar14 + 0x30;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  else {
    uVar17 = *(uint *)(param_2 + 2);
    uVar14 = uVar13;
    uVar18 = uVar13;
    if (uVar17 != 0) {
      do {
        puVar12 = (undefined8 *)(*(longlong *)(param_3 + 0x90) + 0x28);
        iVar10 = (**(code **)*puVar12)(puVar12,uVar14,*param_2 + 0x3a0);
        fVar28 = fVar19;
        fVar30 = fVar31;
        if (iVar10 != -1) {
          fVar28 = *(float *)(*(longlong *)(*(longlong *)(param_3 + 0x60) + 0x70) +
                             (longlong)iVar10 * 4);
          fVar30 = *(float *)(*(longlong *)(*(longlong *)(param_3 + 0x60) + 0x30) +
                             (longlong)iVar10 * 4);
        }
        lVar15 = *(longlong *)(param_4 + 8);
        uVar16 = (int)uVar14 + 1;
        pfVar3 = (float *)(uVar18 + lVar15);
        fVar7 = *pfVar3;
        fVar21 = pfVar3[1];
        fVar20 = pfVar3[2];
        fVar22 = pfVar3[3];
        pfVar3 = (float *)(uVar18 + 0x10 + lVar15);
        fVar23 = pfVar3[1];
        fVar24 = pfVar3[2];
        fVar25 = pfVar3[3];
        pfVar4 = (float *)(uVar18 + 0x20 + lVar15);
        fVar26 = *pfVar4;
        fVar27 = pfVar4[1];
        fVar29 = pfVar4[2];
        fVar8 = pfVar4[3];
        lVar15 = param_2[1];
        pfVar4 = (float *)(uVar18 + 0x10 + lVar15);
        *pfVar4 = *pfVar3 * fVar28;
        pfVar4[1] = fVar23 * fVar28;
        pfVar4[2] = fVar24 * fVar28;
        pfVar4[3] = fVar25 * fVar28;
        pfVar3 = (float *)(uVar18 + 0x20 + lVar15);
        *pfVar3 = fVar26 * fVar28;
        pfVar3[1] = fVar27 * fVar28;
        pfVar3[2] = fVar29 * fVar28;
        pfVar3[3] = fVar8 * fVar28;
        pfVar3 = (float *)(uVar18 + lVar15);
        *pfVar3 = fVar7 * fVar28;
        pfVar3[1] = fVar21 * fVar28;
        pfVar3[2] = fVar20 * fVar28;
        pfVar3[3] = fVar22 * fVar28;
        lVar15 = param_2[1];
        lVar6 = *(longlong *)(param_5 + 8);
        pfVar3 = (float *)(uVar18 + lVar15);
        pfVar4 = (float *)(uVar18 + lVar6);
        fVar25 = *pfVar4 * fVar30;
        fVar26 = pfVar4[1] * fVar30;
        fVar27 = pfVar4[2] * fVar30;
        fVar29 = pfVar4[3] * fVar30;
        fVar20 = *pfVar3 * fVar25 + pfVar3[2] * fVar27;
        fVar22 = pfVar3[1] * fVar26 + pfVar3[3] * fVar29;
        fVar23 = pfVar3[2] * fVar27 + *pfVar3 * fVar25;
        fVar24 = pfVar3[3] * fVar29 + pfVar3[1] * fVar26;
        pfVar3 = (float *)(uVar18 + lVar15);
        fVar28 = pfVar3[1];
        fVar7 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar4 = (float *)(uVar18 + lVar15);
        *pfVar4 = (float)(-(uint)(0.0 <= fVar22 + fVar20) & ((uint)(0.0 - fVar25) ^ (uint)fVar25) ^
                         (uint)(0.0 - fVar25)) + *pfVar3;
        pfVar4[1] = (float)(-(uint)(0.0 <= fVar23 + fVar22) & ((uint)(0.0 - fVar26) ^ (uint)fVar26)
                           ^ (uint)(0.0 - fVar26)) + fVar28;
        pfVar4[2] = (float)(-(uint)(0.0 <= fVar24 + fVar23) & ((uint)(0.0 - fVar27) ^ (uint)fVar27)
                           ^ (uint)(0.0 - fVar27)) + fVar7;
        pfVar4[3] = (float)(-(uint)(0.0 <= fVar20 + fVar24) & ((uint)(0.0 - fVar29) ^ (uint)fVar29)
                           ^ (uint)(0.0 - fVar29)) + fVar21;
        pfVar3 = (float *)(uVar18 + 0x10 + lVar6);
        fVar28 = pfVar3[1];
        fVar7 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar4 = (float *)(uVar18 + 0x10 + lVar15);
        fVar20 = pfVar4[1];
        fVar22 = pfVar4[2];
        fVar23 = pfVar4[3];
        pfVar5 = (float *)(uVar18 + 0x10 + lVar15);
        *pfVar5 = *pfVar3 * fVar30 + *pfVar4;
        pfVar5[1] = fVar28 * fVar30 + fVar20;
        pfVar5[2] = fVar7 * fVar30 + fVar22;
        pfVar5[3] = fVar21 * fVar30 + fVar23;
        pfVar3 = (float *)(uVar18 + 0x20 + lVar6);
        fVar28 = pfVar3[1];
        fVar7 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar4 = (float *)(uVar18 + 0x20 + lVar15);
        fVar20 = pfVar4[1];
        fVar22 = pfVar4[2];
        fVar23 = pfVar4[3];
        pfVar5 = (float *)(uVar18 + 0x20 + lVar15);
        *pfVar5 = *pfVar3 * fVar30 + *pfVar4;
        pfVar5[1] = fVar28 * fVar30 + fVar20;
        pfVar5[2] = fVar7 * fVar30 + fVar22;
        pfVar5[3] = fVar21 * fVar30 + fVar23;
        uVar14 = (ulonglong)uVar16;
        uVar18 = uVar18 + 0x30;
      } while (uVar16 != uVar17);
    }
  }
  plVar1 = (longlong *)(param_4 + 0x20);
  fVar31 = 1.0 - *(float *)(param_3 + 4);
  plVar2 = param_2 + 4;
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(plVar2,plVar1);
  if (1e-08 < ABS(fVar31 - 1.0)) {
    uVar14 = uVar13;
    uVar18 = uVar13;
    if (0 < *(int *)(param_4 + 0x28)) {
      do {
        uVar17 = (int)uVar18 + 1;
        *(undefined1 *)(uVar14 + 4 + *plVar2) = *(undefined1 *)(uVar14 + 4 + *plVar1);
        *(float *)(uVar14 + *plVar2) = fVar31 * *(float *)(uVar14 + *plVar1);
        uVar14 = uVar14 + 8;
        uVar18 = (ulonglong)uVar17;
      } while ((int)uVar17 < *(int *)(param_4 + 0x28));
    }
  }
  else {
    FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(plVar2,plVar1);
    *(undefined4 *)(param_2 + 5) = 0;
    if ((*(int *)((longlong)param_2 + 0x2c) < 0) && (*(int *)((longlong)param_2 + 0x2c) != 0)) {
      FUN_140957580(plVar2,0);
    }
    iVar10 = *(int *)(param_4 + 0x28);
    if (iVar10 != 0) {
      iVar11 = (int)param_2[5];
      if (*(int *)((longlong)param_2 + 0x2c) < iVar11 + iVar10) {
        FUN_140957580(plVar2);
        iVar11 = (int)param_2[5];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar2 + (longlong)iVar11 * 8),(void *)*plVar1,(longlong)iVar10 << 3);
      *(int *)(param_2 + 5) = (int)param_2[5] + iVar10;
    }
  }
  fVar31 = *(float *)(param_3 + 4);
  if ((1e-05 < fVar31) && (0 < (int)param_2[5])) {
    lVar15 = *(longlong *)(param_5 + 0x20);
    uVar14 = uVar13;
    do {
      if ((*(char *)(uVar13 + 4 + *plVar2) == '\0') && (*(char *)(uVar13 + 4 + lVar15) == '\0')) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      *(undefined1 *)(uVar13 + 4 + *plVar2) = uVar9;
      uVar17 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar17;
      lVar15 = *(longlong *)(param_5 + 0x20);
      *(float *)(uVar13 + *plVar2) =
           fVar31 * *(float *)(uVar13 + lVar15) + *(float *)(uVar13 + *plVar2);
      uVar13 = uVar13 + 8;
    } while ((int)uVar17 < (int)param_2[5]);
  }
  return;
}



// FUNCTION 14228fe30 FUN_14228fe30 body=391 status=ok
// SIG undefined FUN_14228fe30(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14228fe30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_58 [2];
  int local_48;
  int local_44;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  char local_18;
  
  if (*(float *)(param_1 + 0x70) <= 1e-05) {
    if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
      if ((char)param_2[8] == '\0') {
        FUN_1408488d0(param_2 + 1,param_2[3]);
      }
      else {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
    }
  }
  else {
    local_58[0] = *param_2;
    local_58[1] = 0;
    local_44 = 0;
    lVar1 = local_58[0] + 0x3a0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1e = 0;
    local_18 = '\x01';
    iVar2 = *(int *)(local_58[0] + 0x3a8);
    local_40 = lVar1;
    iVar4 = 0;
    if (0 < iVar2) {
      local_48 = 0;
      FUN_140848c80(local_58 + 1,iVar2);
      iVar4 = local_48;
    }
    local_48 = iVar2 + iVar4;
    if (local_44 < local_48) {
      TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(local_58 + 1,iVar4);
    }
    FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_38,lVar1);
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      if ((char)param_2[8] == '\0') {
        FUN_1408488d0(param_2 + 1,param_2[3]);
      }
      else {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    plVar3 = *(longlong **)(param_1 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      if (local_18 == '\0') {
        FUN_1408488d0(local_58 + 1,local_40);
      }
      else {
        FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
    }
    FAnimationRuntime::AccumulateAdditivePose
              (param_2 + 1,local_58 + 1,param_2 + 4,&local_38,*(undefined4 *)(param_1 + 0x70),2);
    FUN_141fac440(param_2 + 1);
  }
  return;
}



// FUNCTION 14228ffd0 FUN_14228ffd0 body=499 status=ok
// SIG undefined FUN_14228ffd0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14228ffd0(longlong param_1,longlong *param_2)

{
  void **ppvVar1;
  longlong *plVar2;
  uint uVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_88 [2];
  uint local_78;
  int local_74;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  longlong local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  local_88[0] = *param_2;
  local_78 = 0;
  local_1e = 0;
  local_88[1] = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (plVar2 == (longlong *)0x0) {
    lVar6 = local_88[0] + 0x3a0;
    iVar5 = *(int *)(local_88[0] + 0x3a8);
    local_70 = lVar6;
    uVar4 = 0;
    if (0 < iVar5) {
      FUN_140848c80(local_88 + 1,iVar5);
      uVar4 = local_78;
    }
    local_78 = iVar5 + uVar4;
    if (local_74 < (int)local_78) {
      TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(local_88 + 1);
    }
    FUN_1408488d0(local_88 + 1);
    uVar4 = local_60._4_4_;
    local_60 = (ulonglong)local_60._4_4_ << 0x20;
    iVar5 = 0;
    if (uVar4 != local_78) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_68);
      uVar4 = local_60._4_4_;
      iVar5 = (int)local_60;
    }
    uVar3 = local_78;
    local_60 = CONCAT44(local_60._4_4_,iVar5 + local_78);
    if ((int)uVar4 < (int)(iVar5 + local_78)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    _guard_xfg_dispatch_icall_nop(local_68 + iVar5,0,(longlong)(int)uVar3);
    *local_68 = 1;
    FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_38,lVar6);
  }
  else {
    (**(code **)(*plVar2 + 0x20))(plVar2,local_88);
  }
  FUN_14060d7a0(local_88 + 1,param_2 + 1);
  _Src = local_38;
  ppvVar1 = (void **)(param_2 + 4);
  if (ppvVar1 != &local_38) {
    lVar6 = (longlong)(int)local_30;
    *(int *)(param_2 + 5) = (int)local_30;
    if (((int)local_30 == 0) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    }
    else {
      FUN_141dab210(ppvVar1,local_30 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,lVar6 << 3);
    }
  }
  param_2[6] = local_28;
  *(undefined2 *)(param_2 + 7) = local_20;
  *(undefined1 *)((longlong)param_2 + 0x3a) = local_1e;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422901d0 FUN_1422901d0 body=459 status=ok
// SIG undefined FUN_1422901d0(void)

void FUN_1422901d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  longlong local_68;
  void *local_60;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  char local_28;
  
  if ((*(short *)(param_1 + 0xd8) == -1) || (*(longlong *)(param_1 + 0xd0) == -1)) {
    lVar3 = *param_2;
  }
  else {
    lVar3 = *param_2;
    if (*(short *)(param_1 + 0xd8) == *(short *)(lVar3 + 0x340)) goto LAB_142290374;
  }
  *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar3 + 0x340);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar3 + 0x338);
  *(undefined2 *)(param_1 + 0xda) = *(undefined2 *)(lVar3 + 0x342);
  local_68 = *param_2;
  local_58 = 0;
  local_28 = (char)param_2[8] != '\0';
  lVar3 = local_68 + 0x3a0;
  local_60 = (void *)0x0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2e = 0;
  iVar1 = *(int *)(local_68 + 0x3a8);
  local_50 = lVar3;
  if (0 < iVar1) {
    local_58 = 0;
    FUN_140848c80(&local_60,iVar1);
  }
  local_58 = iVar1 + local_58;
  if (local_54 < local_58) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_60);
  }
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(&local_48,lVar3);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    if (local_28 == '\0') {
      FUN_1408488d0(&local_60,local_50);
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_68);
  }
  _Src = local_60;
  lVar3 = (longlong)local_58;
  *(int *)(param_1 + 0x60) = local_58;
  if ((local_58 == 0) && (*(int *)(param_1 + 100) == 0)) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy
              ((undefined8 *)(param_1 + 0x58),local_58);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x58),_Src,lVar3 * 0x30);
  }
  *(longlong *)(param_1 + 0x68) = local_50;
  FBaseBlendedCurve<FDefaultAllocator>::CopyFrom<TMemStackAllocator<0>_>(param_1 + 0x70,&local_48);
LAB_142290374:
  FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<FDefaultAllocator>
            (param_2 + 1,param_1 + 0x58);
  FBaseBlendedCurve<TMemStackAllocator<0>_>::CopyFrom<FDefaultAllocator>(param_2 + 4,param_1 + 0x70)
  ;
  return;
}



// FUNCTION 1422903a0 FUN_1422903a0 body=1289 status=ok
// SIG undefined FUN_1422903a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422903a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_208 [32];
  byte local_1e8 [4];
  undefined4 local_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (((plVar5 == (longlong *)0x0) || (*(longlong *)(*param_2 + 0xb0) == 0)) ||
     (plVar5[7] != *(longlong *)(*param_2 + 0xb0))) {
    if ((char)param_2[8] == '\0') {
      FUN_1408488d0(param_2 + 1,param_2[3]);
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
    }
  }
  else {
    lVar7 = param_2[8];
    cVar6 = (**(code **)(*plVar5 + 0x290))();
    local_188 = (undefined4 *)CONCAT44(local_188._4_4_,(undefined4)local_188);
    uStack_180 = (ulonglong *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180);
    if (((char)lVar7 != '\0') &&
       (local_188 = (undefined4 *)CONCAT44(local_188._4_4_,(undefined4)local_188),
       uStack_180 = (ulonglong *)CONCAT44(uStack_180._4_4_,(undefined4)uStack_180), cVar6 == '\0'))
    {
      lVar7 = *param_2;
      local_1d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x18);
      FName::ToString(&local_1d0,local_198);
      lVar7 = FText::FromString(local_110,lVar7 + 200);
      local_1c0 = lVar7;
      lVar8 = FText::FromString(local_f8,local_198);
      local_1c8 = lVar8;
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,
                         L"Trying to play a non-additive animation \'{0}\' into a pose that is expected to be additive in anim instance \'{1}\'"
                         ,L"AnimNode_SequencePlayer",L"AdditiveMismatchWarning");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_120,uVar9);
      local_a8[0] = 4;
      FText::FText(local_98,lVar8);
      local_80 = 1;
      local_78 = 4;
      FText::FText(local_68,lVar7);
      local_1b8 = local_a8;
      local_50 = 1;
      puStack_1b0 = local_48;
      local_1a8 = *puVar10;
      local_1a0 = puVar10[1];
      if (local_1a0 != 0) {
        LOCK();
        *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
        UNLOCK();
      }
      local_188 = local_1b8;
      uStack_180 = puStack_1b0;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_188);
      uVar9 = FText::Format(local_150,&local_1a8,uVar9);
      FText::FText(local_168,uVar9);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_148 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_178);
      lVar7 = 2;
      pcVar11 = &stack0xffffffffffffffe0;
      do {
        lVar7 = lVar7 + -1;
        pcVar2 = pcVar11 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar11 + -0x40);
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
        }
        pcVar11 = pcVar2;
      } while (lVar7 != 0);
      plVar5 = (longlong *)puVar10[1];
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
      plVar5 = *(longlong **)(local_1c8 + 8);
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
      plVar5 = *(longlong **)(local_1c0 + 8);
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
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_130 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (local_198[0] != 0) {
        FMemory::Free();
      }
      lVar7 = FText::FText(local_e0,local_168);
      lVar8 = FText::FText(local_c8,lVar7);
      FName::FName(&local_1b8,"Evaluate",1);
      AK::MemoryMgr::StartProfileThreadUsage((long)*param_2);
      plVar5 = *(longlong **)(lVar8 + 8);
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
      plVar5 = *(longlong **)(lVar7 + 8);
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
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_160 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    local_1e4 = *(undefined4 *)(param_1 + 0x40);
    local_1e8[0] = *(byte *)(*param_2 + 0x5b8) >> 1 & 1;
    local_1e0 = 0;
    local_1d8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2d8))
              (*(longlong **)(param_1 + 0x68),param_2 + 1,param_2 + 4,local_1e8);
    if (local_1e0 != 0) {
      FMemory::Free();
    }
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_14227e170(*param_2,param_2 + 1);
    }
  }
  return;
}



// FUNCTION 1422908b0 FUN_1422908b0 body=498 status=ok
// SIG undefined FUN_1422908b0(void)

void FUN_1422908b0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (lVar9 == 0) {
    FUN_1408488d0(param_2 + 1,param_2[3]);
    return;
  }
  iVar2 = *(int *)(lVar9 + 0x18);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    if ((-1 < iVar3) && (iVar3 < iVar2)) {
      if (*(int *)(param_1 + 0x60) < 1) {
        if ((iVar2 <= iVar3) ||
           (*(char *)((longlong)iVar3 * 0x58 + 0x28 + *(longlong *)(lVar9 + 0x10)) == '\0')) {
          local_res8 = *param_2;
          FUN_14228c540(param_1,(longlong)iVar3,&local_res8);
          plVar5 = *(longlong **)
                    (*(longlong *)(param_1 + 0x68) + 8 + (longlong)*(int *)(param_1 + 0x48) * 0x18);
          if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142290a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
            return;
          }
          if (*(char *)(param_2 + 8) != '\0') {
            FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
            return;
          }
          goto LAB_142290a80;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x70);
        puVar1 = (ulonglong *)(param_1 + 0xb0);
        iVar3 = *(int *)(param_1 + 0xb8);
        iVar4 = iVar3 + iVar2;
        *(int *)(param_1 + 0xb8) = iVar4;
        if (*(int *)(param_1 + 0xbc) < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*puVar1 + (longlong)iVar3 * 8),0,(longlong)iVar2 << 3);
        uVar8 = 0;
        uVar6 = uVar8;
        uVar10 = uVar8;
        if (0 < *(int *)(param_1 + 0x60)) {
          do {
            lVar9 = *(longlong *)(param_1 + 0x58) + uVar10;
            if (*(char *)(lVar9 + 0xd) != '\0') {
              if (*(char *)(lVar9 + 0x4c) == '\0') {
                FUN_14228f8b0(param_1,param_2,lVar9,0 < (int)uVar6);
              }
              else if (*(char *)(lVar9 + 0x4c) == '\x01') {
                FUN_14228f600(param_1,param_2);
              }
            }
            uVar7 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar7;
            uVar10 = uVar10 + 0xd8;
          } while ((int)uVar7 < *(int *)(param_1 + 0x60));
        }
        FUN_141fac440(param_2 + 1);
        plVar5 = (longlong *)*puVar1;
        uVar6 = (longlong)*(int *)(param_1 + 0xb8) & 0x1fffffffffffffff;
        if (plVar5 + *(int *)(param_1 + 0xb8) < plVar5) {
          uVar6 = uVar8;
        }
        if (uVar6 != 0) {
          do {
            if (*plVar5 != 0) {
              FMemory::operator_delete(*plVar5,0x48);
            }
            plVar5 = plVar5 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar6);
        }
        *(undefined4 *)(param_1 + 0xb8) = 0;
        if (*(int *)(param_1 + 0xbc) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
        }
      }
      return;
    }
  }
LAB_142290a80:
  FUN_1408488d0(param_2 + 1,param_2[3]);
  return;
}



// FUNCTION 142290ab0 Evaluate_AnyThread body=152 status=ok
// SIG undefined Evaluate_AnyThread(void)

void FAnimNode_SubInput::Evaluate_AnyThread(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((((lVar1 != 0) && (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x30), cVar2 != '\0')) &&
      (*(longlong *)(lVar1 + 0x48) != 0)) &&
     (((0 < *(int *)(lVar1 + 8) && (*(longlong *)(param_1 + 0x58) != 0)) &&
      (*(uint *)(param_1 + 0x50) == (uint)*(ushort *)(param_1 + 0x60))))) {
    FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<FDefaultAllocator>
              (param_2 + 8,param_1 + 0x30);
    FBaseBlendedCurve<TMemStackAllocator<0>_>::CopyFrom<FDefaultAllocator>
              (param_2 + 0x20,param_1 + 0x48);
    return;
  }
  if (*(char *)(param_2 + 0x40) == '\0') {
    FUN_1408488d0(param_2 + 8,*(undefined8 *)(param_2 + 0x18));
  }
  else {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
  }
  return;
}



// FUNCTION 142290b50 FUN_142290b50 body=422 status=ok
// SIG undefined FUN_142290b50(void)

void FUN_142290b50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_2 + 8;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if (*(char *)(param_2 + 0x40) != '\0') {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      return;
    }
    FUN_1408488d0(lVar1,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
    if (*(char *)(param_2 + 0x40) == '\0') {
      FUN_1408488d0(lVar1,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  lVar7 = plVar2[4];
  if (lVar7 == 0) goto LAB_142290c2c;
  lVar6 = FUN_142a07000();
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_142290c2c;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar3 = false;
    if (DVar5 == DAT_1468c21c0) goto LAB_142290c16;
  }
  else {
LAB_142290c16:
    bVar3 = true;
  }
  if (bVar3) {
    FUN_1423b2d70(plVar2[4],1);
  }
LAB_142290c2c:
  lVar7 = plVar2[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*plVar2 + 0x308))(plVar2);
    plVar2[0x72] = lVar7;
  }
  lVar7 = *(longlong *)(lVar7 + 0xe0);
  if (lVar7 != 0) {
    FUN_142285d00(lVar7 + 0x30,param_2 + 8);
    FBaseBlendedCurve<FDefaultAllocator>::CopyFrom<TMemStackAllocator<0>_>
              (lVar7 + 0x48,param_2 + 0x20);
  }
  FUN_1422799a0(*(undefined8 *)(param_1 + 0x50),0,0,param_1 + 0x98,param_1 + 0xa8,lVar1);
  FBaseBlendedCurve<TMemStackAllocator<0>_>::CopyFrom<FDefaultAllocator>
            (param_2 + 0x20,param_1 + 0xa8);
  return;
}



// FUNCTION 142290d00 Evaluate_AnyThread body=77 status=ok
// SIG undefined Evaluate_AnyThread(void)

void FAnimNode_TransitionPoseEvaluator::Evaluate_AnyThread(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<FDefaultAllocator>
            (param_2 + 8,param_1 + 0x38);
  FBaseBlendedCurve<TMemStackAllocator<0>_>::CopyFrom<FDefaultAllocator>
            (param_2 + 0x20,param_1 + 0x50);
  if ((*(char *)(param_1 + 0x31) != '\0') && (0 < *(int *)(param_1 + 0x70))) {
    iVar1 = *(int *)(param_1 + 0x70) + -1;
    iVar2 = 0;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x70) = iVar2;
  }
  return;
}



// FUNCTION 142290d80 FUN_142290d80 body=689 status=ok
// SIG undefined FUN_142290d80(void)

void FUN_142290d80(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(**(longlong **)(*param_2 + 0xa0) + 0x208))
              (*(longlong **)(*param_2 + 0xa0),*(longlong *)(param_1 + 0x18),0);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  if (plVar3 != plVar3 + (longlong)iVar2 * 0xd) {
    plVar8 = plVar3 + 8;
    do {
      plVar10 = (longlong *)*plVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)plVar8[-1];
      }
      cVar1 = *(char *)((longlong)plVar8 + -0xf);
      if (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)plVar8 + -0xe);
        if (cVar1 == '\x01') {
          lVar11 = plVar8[-4];
          pbVar7 = (byte *)((longlong)((int)plVar8[-3] * *(int *)(lVar11 + 0x34)) +
                            (ulonglong)*(byte *)(lVar11 + 0x71) + (longlong)*(int *)(lVar11 + 0x44)
                           + plVar8[2]);
LAB_142290fd6:
          if ((*(byte *)((longlong)plVar10 + 0x73) &
              *(byte *)((ulonglong)*(byte *)((longlong)plVar10 + 0x71) +
                        (longlong)*(int *)((longlong)plVar10 + 0x44) + plVar8[1])) == 0) {
            bVar9 = 0;
          }
          else {
            bVar9 = *(byte *)(lVar11 + 0x72);
          }
          *pbVar7 = ~*(byte *)(lVar11 + 0x73) & *pbVar7 | bVar9;
        }
        else if (cVar1 == '\x02') {
          FUN_141717f80(*(undefined8 *)(plVar8[-4] + 0x70),plVar8[4],plVar8[3],1);
        }
        else if (cVar1 == '\x03') {
          uVar6 = (**(code **)(*plVar10 + 0x378))
                            (plVar10,(longlong)*(int *)((longlong)plVar10 + 0x44) + plVar8[1]);
          plVar10 = (longlong *)plVar8[-4];
          (**(code **)(*plVar10 + 0x380))
                    (plVar10,(longlong)((int)plVar8[-3] * *(int *)((longlong)plVar10 + 0x34)) +
                             (longlong)*(int *)((longlong)plVar10 + 0x44) + plVar8[2],uVar6);
        }
        else {
          if (cVar1 == '\x04') {
            lVar11 = *(longlong *)(plVar8[-4] + 0x70);
            pbVar7 = (byte *)((ulonglong)*(byte *)(lVar11 + 0x71) +
                              (longlong)*(int *)(lVar11 + 0x44) + plVar8[4]);
            goto LAB_142290fd6;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)plVar8[4],(void *)plVar8[3],
                     (longlong)*(int *)((longlong)plVar8 + -0x14));
        }
      }
      else if (cVar1 == '\x01') {
        bVar9 = *(byte *)((longlong)plVar10 + 0x73) &
                *(byte *)((ulonglong)*(byte *)((longlong)plVar10 + 0x71) +
                          (longlong)*(int *)((longlong)plVar10 + 0x44) + plVar8[1]);
        if (*(char *)((longlong)plVar8 + -0xe) == '\x01') {
          lVar11 = plVar8[-4];
          pbVar7 = (byte *)((longlong)((int)plVar8[-3] * *(int *)(lVar11 + 0x34)) +
                            (ulonglong)*(byte *)(lVar11 + 0x71) + (longlong)*(int *)(lVar11 + 0x44)
                           + plVar8[2]);
          if (bVar9 == 0) {
            *pbVar7 = ~*(byte *)(lVar11 + 0x73) & *pbVar7 | *(byte *)(lVar11 + 0x72);
          }
          else {
            *pbVar7 = ~*(byte *)(lVar11 + 0x73) & *pbVar7;
          }
        }
        else {
          lVar11 = plVar8[-4];
          if (lVar11 != 0) {
            lVar5 = UArrayProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar11 = *(longlong *)(lVar11 + 0x70);
              pbVar7 = (byte *)((ulonglong)*(byte *)(lVar11 + 0x71) + plVar8[4]);
              if (bVar9 == 0) {
                *pbVar7 = ~*(byte *)(lVar11 + 0x73) & *pbVar7 | *(byte *)(lVar11 + 0x72);
              }
              else {
                *pbVar7 = ~*(byte *)(lVar11 + 0x73) & *pbVar7;
              }
            }
          }
        }
      }
      else if (cVar1 == '\x02') {
        *(uint *)plVar8[4] = *(uint *)plVar8[3] & 0x7fffffff;
      }
      plVar10 = plVar8 + 5;
      plVar8 = plVar8 + 0xd;
    } while (plVar10 != plVar3 + (longlong)iVar2 * 0xd);
  }
  return;
}



// FUNCTION 142291040 ExecuteIfBound body=124 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>::ExecuteIfBound
                    (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))(), (char)in_RAX != '\0')) {
    if ((int)param_1[1] != 0) {
      uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))
                        ((longlong *)*param_1,param_2,param_3,param_4);
      return uVar1;
    }
    uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3,param_4);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422910c0 FUN_1422910c0 body=1894 status=ok
// SIG undefined FUN_1422910c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422910c0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  int iVar37;
  longlong lVar38;
  float fVar39;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float local_res10 [2];
  int local_c8;
  int local_c4 [43];
  
  fVar48 = fRam0000000146aef0ec;
  if (((int)param_2[1] == 0) || ((int)param_2[3] == 0)) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = fVar48;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    fVar48 = (float)((uint)fRam0000000146aef0e4 & uRam0000000146aef0f4);
    fVar50 = (float)((uint)fRam0000000146aef0e8 & uRam0000000146aef0f8);
    fVar52 = (float)((uint)fRam0000000146aef0ec & uRam0000000146aef0fc);
    param_3[8] = (float)((uint)_DAT_146aef0e0 & _DAT_146aef0f0);
    param_3[9] = fVar48;
    param_3[10] = fVar50;
    param_3[0xb] = fVar52;
    return;
  }
  FAnimationRuntime::GetKeyIndicesFromTime
            (local_c4,&local_c8,local_res10,param_4,*(undefined4 *)(param_1 + 0xb8),
             *(undefined4 *)(param_1 + 0x90));
  fVar30 = fRam0000000146aef1ac;
  fVar29 = fRam0000000146aef1a8;
  fVar28 = fRam0000000146aef1a4;
  fVar27 = _DAT_146aef1a0;
  fVar26 = fRam0000000146aef17c;
  fVar25 = fRam0000000146aef178;
  fVar63 = fRam0000000146aef174;
  fVar24 = _DAT_146aef170;
  fVar52 = DAT_146531a68;
  fVar50 = DAT_146531a64;
  fVar48 = DAT_146531a60;
  iVar32 = (int)param_2[5];
  if (*(char *)(param_1 + 0x198) == '\x01') {
    local_res10[0] = 0.0;
  }
  iVar31 = (int)param_2[1] + -1;
  iVar37 = (int)param_2[3] + -1;
  if (local_res10[0] <= 0.0) {
    if (local_c4[0] <= iVar31) {
      iVar31 = local_c4[0];
    }
    lVar33 = (longlong)iVar31;
    if (local_c4[0] <= iVar37) {
      iVar37 = local_c4[0];
    }
    lVar38 = (longlong)iVar37;
    lVar34 = *param_2;
    uVar59 = *(undefined4 *)(lVar34 + 8 + lVar33 * 0xc);
    uVar57 = *(undefined4 *)(lVar34 + 4 + lVar33 * 0xc);
    uVar55 = *(undefined4 *)(lVar34 + lVar33 * 0xc);
    if (0 < iVar32) {
      iVar31 = iVar32 + -1;
      if (local_c4[0] <= iVar32 + -1) {
        iVar31 = local_c4[0];
      }
      lVar33 = param_2[4];
      lVar34 = (longlong)iVar31;
      uVar3 = *(undefined4 *)(lVar33 + 8 + lVar34 * 0xc);
      uVar4 = *(undefined4 *)(lVar33 + 4 + lVar34 * 0xc);
      uVar5 = *(undefined4 *)(lVar33 + lVar34 * 0xc);
      puVar1 = (undefined8 *)(param_2[2] + lVar38 * 0x10);
      uVar23 = puVar1[1];
      *(undefined8 *)param_3 = *puVar1;
      *(undefined8 *)(param_3 + 2) = uVar23;
      auVar41._4_4_ = uVar4;
      auVar41._0_4_ = uVar5;
      auVar41._8_4_ = uVar3;
      auVar41._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 8) = auVar41;
      auVar9._4_4_ = uVar57;
      auVar9._0_4_ = uVar55;
      auVar9._8_4_ = uVar59;
      auVar9._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar9;
      return;
    }
LAB_1422911e2:
    puVar1 = (undefined8 *)(param_2[2] + lVar38 * 0x10);
    uVar23 = puVar1[1];
    *(undefined8 *)param_3 = *puVar1;
    *(undefined8 *)(param_3 + 2) = uVar23;
    auVar10._4_4_ = uVar57;
    auVar10._0_4_ = uVar55;
    auVar10._8_4_ = uVar59;
    auVar10._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 4) = auVar10;
    auVar7._4_4_ = fVar50;
    auVar7._0_4_ = fVar48;
    auVar7._8_4_ = fVar52;
    auVar7._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 8) = auVar7;
    return;
  }
  if (1.0 <= local_res10[0]) {
    if (local_c8 <= iVar31) {
      iVar31 = local_c8;
    }
    lVar33 = (longlong)iVar31;
    if (local_c8 <= iVar37) {
      iVar37 = local_c8;
    }
    lVar38 = (longlong)iVar37;
    lVar34 = *param_2;
    uVar59 = *(undefined4 *)(lVar34 + 8 + lVar33 * 0xc);
    uVar57 = *(undefined4 *)(lVar34 + 4 + lVar33 * 0xc);
    uVar55 = *(undefined4 *)(lVar34 + lVar33 * 0xc);
    if (0 < iVar32) {
      iVar31 = iVar32 + -1;
      if (local_c8 <= iVar32 + -1) {
        iVar31 = local_c8;
      }
      lVar33 = param_2[4];
      lVar34 = (longlong)iVar31;
      uVar3 = *(undefined4 *)(lVar33 + 8 + lVar34 * 0xc);
      uVar4 = *(undefined4 *)(lVar33 + 4 + lVar34 * 0xc);
      uVar5 = *(undefined4 *)(lVar33 + lVar34 * 0xc);
      puVar1 = (undefined8 *)(param_2[2] + lVar38 * 0x10);
      uVar23 = puVar1[1];
      *(undefined8 *)param_3 = *puVar1;
      *(undefined8 *)(param_3 + 2) = uVar23;
      auVar8._4_4_ = uVar4;
      auVar8._0_4_ = uVar5;
      auVar8._8_4_ = uVar3;
      auVar8._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 8) = auVar8;
      auVar11._4_4_ = uVar57;
      auVar11._0_4_ = uVar55;
      auVar11._8_4_ = uVar59;
      auVar11._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar11;
      return;
    }
    goto LAB_1422911e2;
  }
  iVar21 = iVar31;
  if (local_c8 <= iVar31) {
    iVar21 = local_c8;
  }
  iVar22 = iVar37;
  if (local_c8 <= iVar37) {
    iVar22 = local_c8;
  }
  if (local_c4[0] <= iVar31) {
    iVar31 = local_c4[0];
  }
  if (local_c4[0] <= iVar37) {
    iVar37 = local_c4[0];
  }
  lVar33 = (longlong)iVar31;
  if (iVar32 < 1) {
    lVar34 = *param_2;
    fVar52 = *(float *)(lVar34 + lVar33 * 0xc);
    pfVar2 = (float *)(param_2[2] + (longlong)iVar37 * 0x10);
    fVar64 = *pfVar2;
    fVar65 = pfVar2[1];
    fVar66 = pfVar2[2];
    fVar67 = pfVar2[3];
    fVar48 = *(float *)(lVar34 + 8 + lVar33 * 0xc);
    fVar50 = *(float *)(lVar34 + 4 + lVar33 * 0xc);
    lVar33 = (longlong)iVar21;
    fVar56 = *(float *)(lVar34 + 4 + lVar33 * 0xc);
    fVar54 = *(float *)(lVar34 + 8 + lVar33 * 0xc);
    fVar58 = *(float *)(lVar34 + lVar33 * 0xc);
    pfVar2 = (float *)(param_2[2] + (longlong)iVar22 * 0x10);
    fVar68 = *pfVar2;
    fVar69 = pfVar2[1];
    fVar70 = pfVar2[2];
    fVar71 = pfVar2[3];
    fVar60 = DAT_146531a60;
    fVar61 = DAT_146531a64;
    fVar62 = DAT_146531a68;
    fVar73 = DAT_146531a60;
    fVar74 = DAT_146531a64;
    fVar75 = DAT_146531a68;
  }
  else {
    lVar34 = *param_2;
    iVar32 = iVar32 + -1;
    lVar38 = param_2[4];
    iVar31 = iVar32;
    if (local_c4[0] <= iVar32) {
      iVar31 = local_c4[0];
    }
    fVar48 = *(float *)(lVar34 + 8 + lVar33 * 0xc);
    fVar50 = *(float *)(lVar34 + 4 + lVar33 * 0xc);
    if (local_c8 <= iVar32) {
      iVar32 = local_c8;
    }
    fVar52 = *(float *)(lVar34 + lVar33 * 0xc);
    pfVar2 = (float *)(param_2[2] + (longlong)iVar37 * 0x10);
    fVar64 = *pfVar2;
    fVar65 = pfVar2[1];
    fVar66 = pfVar2[2];
    fVar67 = pfVar2[3];
    lVar33 = (longlong)iVar31;
    lVar35 = (longlong)iVar32;
    lVar36 = (longlong)iVar21;
    fVar54 = *(float *)(lVar34 + 8 + lVar36 * 0xc);
    fVar56 = *(float *)(lVar34 + 4 + lVar36 * 0xc);
    fVar58 = *(float *)(lVar34 + lVar36 * 0xc);
    pfVar2 = (float *)(param_2[2] + (longlong)iVar22 * 0x10);
    fVar68 = *pfVar2;
    fVar69 = pfVar2[1];
    fVar70 = pfVar2[2];
    fVar71 = pfVar2[3];
    fVar60 = *(float *)(lVar38 + lVar33 * 0xc);
    fVar61 = *(float *)(lVar38 + 4 + lVar33 * 0xc);
    fVar62 = *(float *)(lVar38 + 8 + lVar33 * 0xc);
    fVar73 = *(float *)(lVar38 + lVar35 * 0xc);
    fVar74 = *(float *)(lVar38 + 4 + lVar35 * 0xc);
    fVar75 = *(float *)(lVar38 + 8 + lVar35 * 0xc);
  }
  fVar39 = fVar64 * fVar64 + fVar66 * fVar66;
  fVar45 = fVar65 * fVar65 + fVar67 * fVar67;
  fVar46 = fVar66 * fVar66 + fVar64 * fVar64;
  fVar47 = fVar67 * fVar67 + fVar65 * fVar65;
  fVar72 = fVar45 + fVar39;
  fVar45 = fVar46 + fVar45;
  fVar46 = fVar47 + fVar46;
  fVar39 = fVar39 + fVar47;
  auVar40._0_4_ = (float)((uint)(_DAT_146aef0e0 - fVar72) & _DAT_146aef190);
  auVar40._4_4_ = (float)((uint)(fRam0000000146aef0e4 - fVar45) & uRam0000000146aef194);
  auVar40._8_4_ = (float)((uint)(fRam0000000146aef0e8 - fVar46) & uRam0000000146aef198);
  auVar40._12_4_ = (float)((uint)(fRam0000000146aef0ec - fVar39) & uRam0000000146aef19c);
  auVar6._4_4_ = -(uint)(fRam0000000146aef184 < auVar40._4_4_);
  auVar6._0_4_ = -(uint)(_DAT_146aef180 < auVar40._0_4_);
  auVar6._8_4_ = -(uint)(fRam0000000146aef188 < auVar40._8_4_);
  auVar6._12_4_ = -(uint)(fRam0000000146aef18c < auVar40._12_4_);
  iVar32 = movmskps(iVar22 * 2,auVar6);
  if (iVar32 != 0) {
    auVar16._4_4_ = fVar45;
    auVar16._0_4_ = fVar72;
    auVar16._8_4_ = fVar46;
    auVar16._12_4_ = fVar39;
    auVar41 = rsqrtps(auVar40,auVar16);
    fVar47 = auVar41._0_4_;
    fVar49 = auVar41._4_4_;
    fVar51 = auVar41._8_4_;
    fVar53 = auVar41._12_4_;
    fVar47 = (_DAT_146aef170 - fVar47 * fVar47 * fVar72 * _DAT_146aef170) * fVar47 + fVar47;
    fVar49 = (fRam0000000146aef174 - fVar49 * fVar49 * fVar45 * fRam0000000146aef174) * fVar49 +
             fVar49;
    fVar51 = (fRam0000000146aef178 - fVar51 * fVar51 * fVar46 * fRam0000000146aef178) * fVar51 +
             fVar51;
    fVar53 = (fRam0000000146aef17c - fVar53 * fVar53 * fVar39 * fRam0000000146aef17c) * fVar53 +
             fVar53;
    fVar64 = (float)(((uint)(fVar64 * ((_DAT_146aef170 - fVar47 * fVar47 * fVar72 * _DAT_146aef170)
                                       * fVar47 + fVar47)) ^ _DAT_146aef160) &
                     -(uint)(_DAT_146aef1a0 <= fVar72) ^ _DAT_146aef160);
    fVar65 = (float)(((uint)(fVar65 * ((fRam0000000146aef174 -
                                       fVar49 * fVar49 * fVar45 * fRam0000000146aef174) * fVar49 +
                                      fVar49)) ^ uRam0000000146aef164) &
                     -(uint)(fRam0000000146aef1a4 <= fVar45) ^ uRam0000000146aef164);
    fVar66 = (float)(((uint)(fVar66 * ((fRam0000000146aef178 -
                                       fVar51 * fVar51 * fVar46 * fRam0000000146aef178) * fVar51 +
                                      fVar51)) ^ uRam0000000146aef168) &
                     -(uint)(fRam0000000146aef1a8 <= fVar46) ^ uRam0000000146aef168);
    fVar67 = (float)(((uint)(fVar67 * ((fRam0000000146aef17c -
                                       fVar53 * fVar53 * fVar39 * fRam0000000146aef17c) * fVar53 +
                                      fVar53)) ^ uRam0000000146aef16c) &
                     -(uint)(fRam0000000146aef1ac <= fVar39) ^ uRam0000000146aef16c);
  }
  auVar42._0_4_ = fVar68 * fVar68 + fVar70 * fVar70;
  auVar42._4_4_ = fVar69 * fVar69 + fVar71 * fVar71;
  auVar42._8_4_ = fVar70 * fVar70 + fVar68 * fVar68;
  auVar42._12_4_ = fVar71 * fVar71 + fVar69 * fVar69;
  fVar39 = auVar42._4_4_ + auVar42._0_4_;
  fVar45 = auVar42._8_4_ + auVar42._4_4_;
  fVar46 = auVar42._12_4_ + auVar42._8_4_;
  fVar47 = auVar42._0_4_ + auVar42._12_4_;
  auVar20._4_4_ =
       -(uint)(fRam0000000146aef184 <
              (float)((uint)(fRam0000000146aef0e4 - fVar45) & uRam0000000146aef194));
  auVar20._0_4_ =
       -(uint)(_DAT_146aef180 < (float)((uint)(_DAT_146aef0e0 - fVar39) & _DAT_146aef190));
  auVar20._8_4_ =
       -(uint)(fRam0000000146aef188 <
              (float)((uint)(fRam0000000146aef0e8 - fVar46) & uRam0000000146aef198));
  auVar20._12_4_ =
       -(uint)(fRam0000000146aef18c <
              (float)((uint)(fRam0000000146aef0ec - fVar47) & uRam0000000146aef19c));
  iVar32 = movmskps(iVar32,auVar20);
  if (iVar32 != 0) {
    auVar17._4_4_ = fVar45;
    auVar17._0_4_ = fVar39;
    auVar17._8_4_ = fVar46;
    auVar17._12_4_ = fVar47;
    auVar41 = rsqrtps(auVar42,auVar17);
    fVar72 = auVar41._0_4_;
    fVar49 = auVar41._4_4_;
    fVar51 = auVar41._8_4_;
    fVar53 = auVar41._12_4_;
    fVar72 = (_DAT_146aef170 - fVar72 * fVar72 * fVar39 * _DAT_146aef170) * fVar72 + fVar72;
    fVar49 = (fRam0000000146aef174 - fVar49 * fVar49 * fVar45 * fRam0000000146aef174) * fVar49 +
             fVar49;
    fVar51 = (fRam0000000146aef178 - fVar51 * fVar51 * fVar46 * fRam0000000146aef178) * fVar51 +
             fVar51;
    fVar53 = (fRam0000000146aef17c - fVar53 * fVar53 * fVar47 * fRam0000000146aef17c) * fVar53 +
             fVar53;
    fVar68 = (float)(((uint)(fVar68 * ((_DAT_146aef170 - fVar72 * fVar72 * fVar39 * _DAT_146aef170)
                                       * fVar72 + fVar72)) ^ _DAT_146aef160) &
                     -(uint)(_DAT_146aef1a0 <= fVar39) ^ _DAT_146aef160);
    fVar69 = (float)(((uint)(fVar69 * ((fRam0000000146aef174 -
                                       fVar49 * fVar49 * fVar45 * fRam0000000146aef174) * fVar49 +
                                      fVar49)) ^ uRam0000000146aef164) &
                     -(uint)(fRam0000000146aef1a4 <= fVar45) ^ uRam0000000146aef164);
    fVar70 = (float)(((uint)(fVar70 * ((fRam0000000146aef178 -
                                       fVar51 * fVar51 * fVar46 * fRam0000000146aef178) * fVar51 +
                                      fVar51)) ^ uRam0000000146aef168) &
                     -(uint)(fRam0000000146aef1a8 <= fVar46) ^ uRam0000000146aef168);
    fVar71 = (float)(((uint)(fVar71 * ((fRam0000000146aef17c -
                                       fVar53 * fVar53 * fVar47 * fRam0000000146aef17c) * fVar53 +
                                      fVar53)) ^ uRam0000000146aef16c) &
                     -(uint)(fRam0000000146aef1ac <= fVar47) ^ uRam0000000146aef16c);
  }
  if (1e-05 < ABS(local_res10[0])) {
    if (ABS(local_res10[0] - 1.0) <= 1e-05) {
      *param_3 = fVar68;
      param_3[1] = fVar69;
      param_3[2] = fVar70;
      param_3[3] = fVar71;
      auVar15._4_4_ = fVar56;
      auVar15._0_4_ = fVar58;
      auVar15._8_4_ = fVar54;
      auVar15._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar15;
      auVar19._4_4_ = fVar74;
      auVar19._0_4_ = fVar73;
      auVar19._8_4_ = fVar75;
      auVar19._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 8) = auVar19;
      goto LAB_142291742;
    }
    fVar39 = fVar68 * fVar64 + fVar70 * fVar66;
    fVar45 = fVar69 * fVar65 + fVar71 * fVar67;
    fVar46 = fVar70 * fVar66 + fVar68 * fVar64;
    fVar47 = fVar71 * fVar67 + fVar69 * fVar65;
    param_3[8] = (fVar73 - fVar60) * local_res10[0] + fVar60;
    param_3[9] = (fVar74 - fVar61) * local_res10[0] + fVar61;
    param_3[10] = (fVar75 - fVar62) * local_res10[0] + fVar62;
    param_3[0xb] = local_res10[0] * 0.0 + 0.0;
    param_3[4] = (fVar58 - fVar52) * local_res10[0] + fVar52;
    param_3[5] = (fVar56 - fVar50) * local_res10[0] + fVar50;
    param_3[6] = (fVar54 - fVar48) * local_res10[0] + fVar48;
    param_3[7] = local_res10[0] * 0.0 + 0.0;
    fVar64 = (float)(-(uint)(0.0 <= fVar45 + fVar39) & ((uint)fVar64 ^ (uint)(0.0 - fVar64)) ^
                    (uint)(0.0 - fVar64)) * (_DAT_146aef0e0 - local_res10[0]) +
             fVar68 * local_res10[0];
    fVar65 = (float)(-(uint)(0.0 <= fVar46 + fVar45) & ((uint)fVar65 ^ (uint)(0.0 - fVar65)) ^
                    (uint)(0.0 - fVar65)) * (fRam0000000146aef0e4 - local_res10[0]) +
             fVar69 * local_res10[0];
    fVar68 = (float)(-(uint)(0.0 <= fVar47 + fVar46) & ((uint)fVar66 ^ (uint)(0.0 - fVar66)) ^
                    (uint)(0.0 - fVar66)) * (fRam0000000146aef0e8 - local_res10[0]) +
             fVar70 * local_res10[0];
    fVar69 = (float)(-(uint)(0.0 <= fVar39 + fVar47) & ((uint)fVar67 ^ (uint)(0.0 - fVar67)) ^
                    (uint)(0.0 - fVar67)) * (fRam0000000146aef0ec - local_res10[0]) +
             fVar71 * local_res10[0];
    auVar43._0_4_ = fVar64 * fVar64 + fVar68 * fVar68;
    auVar43._4_4_ = fVar65 * fVar65 + fVar69 * fVar69;
    auVar43._8_4_ = fVar68 * fVar68 + fVar64 * fVar64;
    auVar43._12_4_ = fVar69 * fVar69 + fVar65 * fVar65;
    fVar56 = auVar43._4_4_ + auVar43._0_4_;
    fVar58 = auVar43._8_4_ + auVar43._4_4_;
    fVar66 = auVar43._12_4_ + auVar43._8_4_;
    fVar67 = auVar43._0_4_ + auVar43._12_4_;
    auVar13._4_4_ = fVar58;
    auVar13._0_4_ = fVar56;
    auVar13._8_4_ = fVar66;
    auVar13._12_4_ = fVar67;
    auVar41 = rsqrtps(auVar43,auVar13);
    fVar48 = auVar41._0_4_;
    fVar50 = auVar41._4_4_;
    fVar52 = auVar41._8_4_;
    fVar54 = auVar41._12_4_;
    fVar48 = (fVar24 - fVar48 * fVar48 * fVar56 * fVar24) * fVar48 + fVar48;
    fVar50 = (fVar63 - fVar50 * fVar50 * fVar58 * fVar63) * fVar50 + fVar50;
    fVar52 = (fVar25 - fVar52 * fVar52 * fVar66 * fVar25) * fVar52 + fVar52;
    fVar54 = (fVar26 - fVar54 * fVar54 * fVar67 * fVar26) * fVar54 + fVar54;
    fVar64 = (float)(((uint)(((fVar24 - fVar48 * fVar48 * fVar56 * fVar24) * fVar48 + fVar48) *
                            fVar64) ^ _DAT_146aef160) & -(uint)(fVar27 <= fVar56) ^ _DAT_146aef160);
    fVar65 = (float)(((uint)(((fVar63 - fVar50 * fVar50 * fVar58 * fVar63) * fVar50 + fVar50) *
                            fVar65) ^ uRam0000000146aef164) & -(uint)(fVar28 <= fVar58) ^
                    uRam0000000146aef164);
    fVar66 = (float)(((uint)(((fVar25 - fVar52 * fVar52 * fVar66 * fVar25) * fVar52 + fVar52) *
                            fVar68) ^ uRam0000000146aef168) & -(uint)(fVar29 <= fVar66) ^
                    uRam0000000146aef168);
    fVar67 = (float)(((uint)(((fVar26 - fVar54 * fVar54 * fVar67 * fVar26) * fVar54 + fVar54) *
                            fVar69) ^ uRam0000000146aef16c) & -(uint)(fVar30 <= fVar67) ^
                    uRam0000000146aef16c);
  }
  else {
    auVar18._4_4_ = fVar50;
    auVar18._0_4_ = fVar52;
    auVar18._8_4_ = fVar48;
    auVar18._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 4) = auVar18;
    auVar14._4_4_ = fVar61;
    auVar14._0_4_ = fVar60;
    auVar14._8_4_ = fVar62;
    auVar14._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 8) = auVar14;
  }
  *param_3 = fVar64;
  param_3[1] = fVar65;
  param_3[2] = fVar66;
  param_3[3] = fVar67;
  fVar68 = fVar64;
  fVar69 = fVar65;
  fVar70 = fVar66;
  fVar71 = fVar67;
LAB_142291742:
  auVar44._0_4_ = fVar68 * fVar68 + fVar70 * fVar70;
  auVar44._4_4_ = fVar69 * fVar69 + fVar71 * fVar71;
  auVar44._8_4_ = fVar70 * fVar70 + fVar68 * fVar68;
  auVar44._12_4_ = fVar71 * fVar71 + fVar69 * fVar69;
  fVar56 = auVar44._4_4_ + auVar44._0_4_;
  fVar58 = auVar44._8_4_ + auVar44._4_4_;
  fVar64 = auVar44._12_4_ + auVar44._8_4_;
  fVar65 = auVar44._0_4_ + auVar44._12_4_;
  auVar12._4_4_ = fVar58;
  auVar12._0_4_ = fVar56;
  auVar12._8_4_ = fVar64;
  auVar12._12_4_ = fVar65;
  auVar41 = rsqrtps(auVar44,auVar12);
  fVar48 = auVar41._0_4_;
  fVar50 = auVar41._4_4_;
  fVar52 = auVar41._8_4_;
  fVar54 = auVar41._12_4_;
  fVar48 = (fVar24 - fVar48 * fVar48 * fVar56 * fVar24) * fVar48 + fVar48;
  fVar50 = (fVar63 - fVar50 * fVar50 * fVar58 * fVar63) * fVar50 + fVar50;
  fVar52 = (fVar25 - fVar52 * fVar52 * fVar64 * fVar25) * fVar52 + fVar52;
  fVar54 = (fVar26 - fVar54 * fVar54 * fVar65 * fVar26) * fVar54 + fVar54;
  fVar50 = (float)(((uint)(((fVar63 - fVar50 * fVar50 * fVar58 * fVar63) * fVar50 + fVar50) * fVar69
                          ) ^ uRam0000000146aef164) & -(uint)(fVar28 <= fVar58) ^
                  uRam0000000146aef164);
  fVar52 = (float)(((uint)(((fVar25 - fVar52 * fVar52 * fVar64 * fVar25) * fVar52 + fVar52) * fVar70
                          ) ^ uRam0000000146aef168) & -(uint)(fVar29 <= fVar64) ^
                  uRam0000000146aef168);
  fVar63 = (float)(((uint)(((fVar26 - fVar54 * fVar54 * fVar65 * fVar26) * fVar54 + fVar54) * fVar71
                          ) ^ uRam0000000146aef16c) & -(uint)(fVar30 <= fVar65) ^
                  uRam0000000146aef16c);
  *param_3 = (float)(((uint)(((fVar24 - fVar48 * fVar48 * fVar56 * fVar24) * fVar48 + fVar48) *
                            fVar68) ^ _DAT_146aef160) & -(uint)(fVar27 <= fVar56) ^ _DAT_146aef160);
  param_3[1] = fVar50;
  param_3[2] = fVar52;
  param_3[3] = fVar63;
  return;
}



// FUNCTION 142291830 FUN_142291830 body=633 status=ok
// SIG undefined FUN_142291830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_142291830(longlong param_1,undefined4 *param_2,float param_3,float param_4,char param_5)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  float local_164;
  float local_160 [2];
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_158[0] = 0;
  local_128 = _DAT_146aef0e0 & _DAT_146aef0f0;
  uStack_124 = uRam0000000146aef0e4 & uRam0000000146aef0f4;
  uStack_120 = uRam0000000146aef0e8 & uRam0000000146aef0f8;
  uStack_11c = uRam0000000146aef0ec & uRam0000000146aef0fc;
  local_138._0_4_ = 0;
  local_138._4_4_ = 0;
  uStack_130._0_4_ = 0;
  uStack_130._4_4_ = 0;
  local_154 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  local_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = uRam0000000146aef0ec;
  local_138 = 0;
  uStack_130 = 0;
  if (param_4 != 0.0) {
    local_168[0] = 0;
    local_164 = param_3;
    local_160[0] = param_4;
    iVar2 = FUN_1422467d0(local_168,local_160,&local_164,param_1 + 0x90);
    fVar1 = local_164;
    FUN_142291cd0(param_1,local_118,param_3,0);
    FUN_142291cd0(param_1,local_e8,fVar1,0);
    local_f8 = 0x3f8000003f800000;
    uStack_f0 = 0x3f800000;
    local_c8 = 0x3f8000003f800000;
    uStack_c0 = 0x3f800000;
    FUN_14162bcf0(local_e8,local_b8,local_118);
    FUN_142245a70(local_158,local_b8);
    uVar3 = local_148;
    uVar4 = uStack_144;
    uVar5 = uStack_140;
    while ((iVar2 == 1 && (param_5 != '\0'))) {
      local_160[0] = local_160[0] - (local_164 - param_3);
      if (0.0 <= param_4) {
        param_3 = 0.0;
      }
      else {
        param_3 = *(float *)(param_1 + 0x90);
      }
      local_168[0] = 0;
      local_164 = param_3;
      local_148 = uVar3;
      uStack_144 = uVar4;
      uStack_140 = uVar5;
      iVar2 = FUN_1422467d0(local_168,local_160,&local_164,param_1 + 0x90);
      fVar1 = local_164;
      FUN_142291cd0(param_1,local_118,param_3,0);
      FUN_142291cd0(param_1,local_e8,fVar1,0);
      local_f8 = 0x3f8000003f800000;
      uStack_f0 = 0x3f800000;
      local_c8 = 0x3f8000003f800000;
      uStack_c0 = 0x3f800000;
      FUN_14162bcf0(local_e8,local_b8,local_118);
      FUN_142245a70(local_158,local_b8);
      uVar3 = local_148;
      uVar4 = uStack_144;
      uVar5 = uStack_140;
    }
    local_138._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    uStack_130._4_4_ = (undefined4)((ulonglong)uStack_130 >> 0x20);
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uStack_13c;
  param_2[4] = (undefined4)local_138;
  param_2[5] = local_138._4_4_;
  param_2[6] = (undefined4)uStack_130;
  param_2[7] = uStack_130._4_4_;
  param_2[8] = local_128;
  param_2[9] = uStack_124;
  param_2[10] = uStack_120;
  param_2[0xb] = uStack_11c;
  return param_2;
}



// FUNCTION 142291ab0 FUN_142291ab0 body=149 status=ok
// SIG undefined FUN_142291ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142291ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_142291cd0(param_1,local_98,param_3,0);
  FUN_142291cd0(param_1,local_68,param_4,0);
  local_78 = 0x3f800000;
  uStack_74 = 0x3f800000;
  uStack_70 = 0x3f800000;
  uStack_6c = 0;
  local_48 = 0x3f800000;
  uStack_44 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  FUN_14162bcf0(local_68,param_2,local_98);
  return param_2;
}



// FUNCTION 142291b50 FUN_142291b50 body=384 status=ok
// SIG undefined FUN_142291b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142291b50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar3 = (int)param_1[0x17] + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,iVar3);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_3,iVar3);
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1,iVar4);
      FUN_142291cd0(param_1,local_b8,0,0);
      FUN_142291cd0(param_1,local_88);
      local_98 = 0x3f8000003f800000;
      uStack_90 = 0x3f800000;
      local_68 = 0x3f8000003f800000;
      uStack_60 = 0x3f800000;
      FUN_14162bcf0(local_88,&local_e8,local_b8);
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_2);
      *puVar2 = local_e8;
      puVar2[1] = uStack_e0;
      *(undefined4 *)(puVar2 + 2) = local_d8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_d4;
      *(undefined4 *)(puVar2 + 3) = uStack_d0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_cc;
      *(undefined4 *)(puVar2 + 4) = local_c8;
      *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_c4;
      *(undefined4 *)(puVar2 + 5) = uStack_c0;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_bc;
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar5;
    } while (iVar4 < iVar3);
  }
  return;
}



// FUNCTION 142291cd0 FUN_142291cd0 body=368 status=ok
// SIG undefined FUN_142291cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142291cd0(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  uVar1 = uRam00000001468b5b78;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar2 = 0xc0;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    lVar2 = 0xd0;
  }
  if ((*(int *)(lVar2 + 8 + param_1) < 1) || (**(int **)(lVar2 + param_1) != 0)) {
    if ((param_4 == 0) || (*(int *)(*(longlong *)(param_4 + 0x48) + 0x28) < 1)) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (((param_4 != 0) || (lVar2 == 0)) || (*(int *)(lVar2 + 0x80) < 1)) {
        *param_2 = _DAT_1468b5b70;
        param_2[1] = uVar1;
        uVar1 = uRam00000001468b5b88;
        param_2[2] = _DAT_1468b5b80;
        param_2[3] = uVar1;
        local_28 = _DAT_1468b5b90;
        uStack_24 = uRam00000001468b5b94;
        uStack_20 = uRam00000001468b5b98;
        uStack_1c = uRam00000001468b5b9c;
        goto LAB_142291e26;
      }
      puVar3 = *(undefined8 **)(lVar2 + 0x88);
    }
    else {
      puVar3 = *(undefined8 **)(*(longlong *)(param_4 + 0x48) + 0x30);
    }
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    uVar1 = puVar3[3];
    param_2[2] = puVar3[2];
    param_2[3] = uVar1;
    local_28 = *(uint *)(puVar3 + 4);
    uStack_24 = *(uint *)((longlong)puVar3 + 0x24);
    uStack_20 = *(uint *)(puVar3 + 5);
    uStack_1c = *(uint *)((longlong)puVar3 + 0x2c);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = _DAT_146aef0e0 & _DAT_146aef0f0;
    uStack_24 = uRam0000000146aef0e4 & uRam0000000146aef0f4;
    uStack_20 = uRam0000000146aef0e8 & uRam0000000146aef0f8;
    uStack_1c = uRam0000000146aef0ec & uRam0000000146aef0fc;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = uRam0000000146aef0ec;
    if ((*(char *)(param_1 + 0x1c0) == '\0') &&
       (((0 < *(int *)(param_1 + 0x128) || (*(int *)(param_1 + 0xe8) == 0)) ||
        ((*(char *)(param_1 + 0xf0) == '\x06' &&
         ((*(char *)(param_1 + 0xf1) == '\x06' && (*(char *)(param_1 + 0xf2) == '\x06')))))))) {
      AnimationFormat_GetBoneAtom(&local_48,param_1,0,param_3);
    }
    else if (*(int *)(param_1 + 0xe8) != 0) {
      FUN_1422910c0(0,*(undefined8 *)(param_1 + 0xe0),&local_48,param_3);
    }
    *param_2 = CONCAT44(uStack_44,local_48);
    param_2[1] = CONCAT44(uStack_3c,uStack_40);
    param_2[2] = local_38;
    param_2[3] = uStack_30;
  }
LAB_142291e26:
  *(uint *)(param_2 + 4) = local_28;
  *(uint *)((longlong)param_2 + 0x24) = uStack_24;
  *(uint *)(param_2 + 5) = uStack_20;
  *(uint *)((longlong)param_2 + 0x2c) = uStack_1c;
  return param_2;
}



// FUNCTION 142291e40 FUN_142291e40 body=682 status=ok
// SIG undefined FUN_142291e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142291e40(longlong param_1,longlong *param_2,longlong param_3,int *param_4,
                       int *param_5)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x18);
  if (0 < iVar1) {
    uVar3 = uVar9;
    do {
      iVar8 = (int)uVar3;
      if ((longlong)iVar8 * 0x58 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) == param_3)
      goto LAB_142291e9b;
      uVar3 = (ulonglong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) < iVar1);
  }
  iVar8 = -1;
LAB_142291e9b:
  iVar1 = param_5[6];
  piVar6 = *(int **)(param_5 + 4);
  if (*(int **)(param_5 + 4) == (int *)0x0) {
    piVar6 = param_5;
  }
  piVar5 = piVar6 + iVar1;
  for (; piVar6 != piVar5; piVar6 = piVar6 + 1) {
    if (*piVar6 == iVar8) goto LAB_14229206e;
  }
  param_5[6] = iVar1 + 1;
  if (param_5[7] < iVar1 + 1) {
    TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_5);
  }
  piVar6 = *(int **)(param_5 + 4);
  if (*(int **)(param_5 + 4) == (int *)0x0) {
    piVar6 = param_5;
  }
  piVar6[iVar1] = iVar8;
  lVar4 = *param_2;
  uVar3 = uVar9;
  if (lVar4 != 0) {
    uVar3 = *(ulonglong *)(lVar4 + 0xa8);
  }
  lVar4 = GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                    (*(undefined8 *)(lVar4 + 0xa0),uVar3,*(undefined4 *)(param_3 + 0x2c));
  if (lVar4 != 0) {
    if (((*(int *)(lVar4 + 0x40) == 0) || (*(longlong **)(lVar4 + 0x38) == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 0x18))(), cVar2 == '\0')) {
      piVar5 = (int *)FUN_142290d80(lVar4 + 8,param_2);
    }
    else if (*(int *)(lVar4 + 0x40) == 0) {
      piVar5 = (int *)(**(code **)(_DAT_00000000 + 0x38))();
      *(char *)(lVar4 + 0x30) = (char)piVar5;
    }
    else {
      piVar5 = (int *)(**(code **)(**(longlong **)(lVar4 + 0x38) + 0x38))();
      *(char *)(lVar4 + 0x30) = (char)piVar5;
    }
    if (*(char *)(lVar4 + 0x30) == '\0') goto LAB_14229206e;
  }
  piVar6 = (int *)(longlong)*(int *)(param_3 + 0x10);
  piVar5 = piVar6;
  uVar10 = uVar9;
  if (0 < (longlong)piVar6) {
    do {
      piVar5 = *(int **)(param_3 + 8);
      lVar4 = uVar10 + (longlong)piVar5;
      if (*(int *)(uVar10 + (longlong)piVar5) != -1) {
        lVar7 = GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                          (*(undefined8 *)(*param_2 + 0xa0),uVar3);
        piVar5 = (int *)FUN_142299b60(param_1,param_2,param_3,lVar7,lVar4);
        *(char *)(lVar7 + 0x30) = (char)piVar5;
        if ((char)piVar5 == *(char *)(lVar4 + 0xc)) {
          iVar1 = *(int *)((longlong)*(int *)(lVar4 + 8) * 0x40 + 0xc +
                          *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20));
          lVar7 = (longlong)iVar1 * 0x58 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
          if (*(char *)(lVar7 + 0x28) == '\0') {
            *param_4 = -1;
            param_4[2] = 0;
            param_4[3] = 0;
            param_4[10] = 0;
            if (0x7fffffff < (uint)param_4[0xb]) {
              FUN_14229ae90(param_4 + 4,0);
            }
            *(longlong *)(param_4 + 2) = lVar4;
            *param_4 = iVar1;
LAB_14229208c:
            iVar1 = param_4[10];
            param_4[10] = iVar1 + 1;
            if (param_4[0xb] < iVar1 + 1) {
              TArray<int,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow(param_4 + 4,iVar1);
            }
            piVar6 = *(int **)(param_4 + 8);
            if (*(int **)(param_4 + 8) == (int *)0x0) {
              piVar6 = param_4 + 4;
            }
            iVar8 = *(int *)(lVar4 + 8);
            piVar6[iVar1] = iVar8;
            return CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1);
          }
          piVar5 = (int *)FUN_142291e40(param_1,param_2,lVar7,param_4,param_5);
          if ((char)piVar5 != '\0') goto LAB_14229208c;
        }
      }
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 + 0x20;
    } while ((longlong)uVar9 < (longlong)piVar6);
  }
LAB_14229206e:
  return (ulonglong)piVar5 & 0xffffffffffffff00;
}



// FUNCTION 1422920f0 FUN_1422920f0 body=534 status=ok
// SIG undefined FUN_1422920f0(void)

void FUN_1422920f0(longlong param_1,float *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 local_res8;
  void *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  if (param_2[8] == 0.0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(param_2 + 6);
  }
  lVar4 = FAnimNode_ApplyMeshSpaceAdditive::StaticStruct();
  local_res8 = *(undefined8 *)(lVar4 + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar8 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar8 = local_38;
  }
  FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s",puVar8,(double)(*param_2 * 100.0),puVar7);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar6 = 0;
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  FString::PrintfImpl(&local_38,L"(Alpha: %.1f%%)",(double)(*(float *)(param_1 + 0x70) * 100.0));
  puVar7 = local_38;
  iVar3 = local_40;
  if ((int)local_30 != 0) {
    iVar6 = (int)local_30 + -1;
  }
  if (iVar6 != 0) {
    lVar4 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar6;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar4 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar7,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free(local_38);
  }
  pvVar1 = local_48;
  lVar4 = (longlong)local_40;
  local_38 = (undefined2 *)0x0;
  local_30 = CONCAT44(local_30._4_4_,local_40);
  if (local_40 == 0) {
    local_30 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar4 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  uVar5 = FNodeDebugData::BranchFlow(param_2,0x3f800000,&local_38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,uVar5);
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  uVar5 = FNodeDebugData::BranchFlow(param_2,*(undefined4 *)(param_1 + 0x70),&local_38);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,uVar5);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142292310 FUN_142292310 body=301 status=ok
// SIG undefined FUN_142292310(void)

void FUN_142292310(longlong param_1,float *param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  ulonglong local_20;
  
  if (param_2[8] == 0.0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_2 + 6);
  }
  lVar2 = FAnimNode_ConvertComponentToLocalSpace::StaticStruct();
  local_res8 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar5 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  FString::PrintfImpl(&local_28,L"%s<W:%.1f%%> %s",puVar5,(double)(*param_2 * 100.0),puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  _Src = local_28;
  local_38 = (undefined2 *)0x0;
  iVar3 = (int)local_20;
  local_30 = iVar3;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142292440 FUN_142292440 body=301 status=ok
// SIG undefined FUN_142292440(void)

void FUN_142292440(longlong param_1,float *param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  ulonglong local_20;
  
  if (param_2[8] == 0.0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_2 + 6);
  }
  lVar2 = FAnimNode_ConvertLocalToComponentSpace::StaticStruct();
  local_res8 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar5 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  FString::PrintfImpl(&local_28,L"%s<W:%.1f%%> %s",puVar5,(double)(*param_2 * 100.0),puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  _Src = local_28;
  local_38 = (undefined2 *)0x0;
  iVar3 = (int)local_20;
  local_30 = iVar3;
  if (iVar3 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142292570 FUN_142292570 body=804 status=ok
// SIG undefined FUN_142292570(void)

void FUN_142292570(longlong param_1,float *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 local_res8;
  void *local_a8;
  int local_a0;
  int local_9c;
  undefined2 *local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar10 = &DAT_143f3eda8;
  if (param_2[8] == 0.0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = *(undefined2 **)(param_2 + 6);
  }
  lVar7 = FUN_1428f5830();
  local_res8 = *(undefined8 *)(lVar7 + 0x18);
  FName::ToString(&local_res8,&local_98);
  puVar12 = &DAT_143f3eda8;
  if ((int)local_90 != 0) {
    puVar12 = local_98;
  }
  FString::PrintfImpl(&local_a8,L"%s<W:%.1f%%> %s",puVar12,(double)(*param_2 * 100.0),puVar13);
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar9 = 0;
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  puVar8 = (undefined8 *)FName::ToString(param_1 + 0x48,local_88);
  if (*(int *)(puVar8 + 1) != 0) {
    puVar10 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_98,&DAT_14501d198,puVar10);
  puVar10 = local_98;
  iVar5 = local_a0;
  if ((int)local_90 != 0) {
    iVar9 = (int)local_90 + -1;
  }
  if (iVar9 != 0) {
    lVar7 = (longlong)local_a0;
    local_a0 = (uint)(local_a0 == 0) + local_a0 + iVar9;
    if (local_9c < local_a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar5);
    }
    pvVar1 = (void *)((longlong)local_a8 + (lVar7 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar9 * 2);
    *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  local_78 = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  local_98 = (undefined2 *)0x0;
  local_90 = 0;
  local_70 = 0;
  local_68 = 0;
  FString::FString(&local_60,&local_98);
  local_50 = uVar2;
  local_38 = uVar3;
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar7 = *(longlong *)(param_2 + 10);
  iVar9 = *(int *)(lVar7 + 0x38);
  lVar11 = (longlong)iVar9;
  *(int *)(lVar7 + 0x38) = iVar9 + 1;
  if (*(int *)(lVar7 + 0x3c) < iVar9 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar7 + 0x30,iVar9);
  }
  uVar6 = local_70;
  lVar7 = *(longlong *)(lVar7 + 0x30);
  local_70 = 0;
  *(undefined4 *)(lVar7 + lVar11 * 0x48) = local_78;
  *(undefined8 *)(lVar7 + 8 + lVar11 * 0x48) = uVar6;
  *(undefined4 *)(lVar7 + 0x10 + lVar11 * 0x48) = (undefined4)local_68;
  *(undefined4 *)(lVar7 + 0x14 + lVar11 * 0x48) = local_68._4_4_;
  *(longlong *)(lVar7 + 0x18 + lVar11 * 0x48) = local_60;
  *(undefined4 *)(lVar7 + 0x20 + lVar11 * 0x48) = (undefined4)local_58;
  *(undefined4 *)(lVar7 + 0x24 + lVar11 * 0x48) = local_58._4_4_;
  *(undefined8 *)(lVar7 + 0x28 + lVar11 * 0x48) = uVar2;
  *(undefined8 *)(lVar7 + 0x30 + lVar11 * 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x38 + lVar11 * 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x40 + lVar11 * 0x48) = uVar3;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  TArray<FNodeDebugData,FDefaultAllocator>::~TArray<FNodeDebugData,FDefaultAllocator>(&local_48);
  if (local_60 != 0) {
    FMemory::Free();
  }
  TArray<FNodeDebugData::DebugItem,FDefaultAllocator>::
  ~TArray<FNodeDebugData::DebugItem,FDefaultAllocator>(&local_70);
  lVar11 = *(longlong *)(param_2 + 10);
  lVar7 = (longlong)*(int *)(lVar11 + 0x38) * 9 + -8;
  if (*(int *)(*(longlong *)(lVar11 + 0x30) + 0xc + lVar7 * 8) < 0x32) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (*(longlong *)(lVar11 + 0x30) + lVar7 * 8,0x32);
    lVar11 = *(longlong *)(param_2 + 10);
  }
  pvVar1 = local_a8;
  lVar7 = *(longlong *)(lVar11 + 0x30) + (longlong)(*(int *)(lVar11 + 0x38) + -1) * 0x48;
  if (lVar7 != 0) {
    lVar11 = (longlong)local_a0;
    local_98 = (undefined2 *)0x0;
    local_90 = CONCAT44(local_90._4_4_,local_a0);
    if (local_a0 == 0) {
      local_90 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_a0,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar1,lVar11 * 2);
    }
    FNodeDebugData::AddDebugItem(lVar7,&local_98,0);
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,lVar7);
    }
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422928a0 FUN_1422928a0 body=529 status=ok
// SIG undefined FUN_1422928a0(void)

void FUN_1422928a0(longlong param_1,float *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined2 *puVar8;
  ulonglong local_res8;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  int local_30;
  
  bVar7 = false;
  iVar4 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_2[8] == 0.0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(param_2 + 6);
  }
  lVar3 = FUN_1428f5890();
  local_res8 = *(ulonglong *)(lVar3 + 0x18);
  FName::ToString(&local_res8,&local_48);
  puVar6 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar6 = local_48;
  }
  FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s",puVar6,(double)(*param_2 * 100.0),puVar8);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    pwVar5 = L"NULL";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x68) + 0x18);
    FName::ToString(&local_res8,&local_38);
    bVar7 = true;
    pwVar5 = L"";
    if (local_30 != 0) {
      pwVar5 = local_38;
    }
  }
  FString::PrintfImpl(&local_48,L"(\'%s\' Play Time: %.3f)",pwVar5,
                      (double)*(float *)(param_1 + 0x40),puVar8);
  puVar8 = local_48;
  iVar2 = local_50;
  if (local_40 != 0) {
    iVar4 = local_40 + -1;
  }
  if (iVar4 != 0) {
    lVar3 = (longlong)local_50;
    local_50 = (uint)(local_50 == 0) + local_50 + iVar4;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
    }
    pvVar1 = (void *)((longlong)local_58 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar8,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free(local_48);
  }
  if ((bVar7) && (local_38 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  pvVar1 = local_58;
  lVar3 = (longlong)local_50;
  local_48 = (undefined2 *)0x0;
  local_40 = local_50;
  if (local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_48,1);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142292ac0 FUN_142292ac0 body=811 status=ok
// SIG undefined FUN_142292ac0(void)

void FUN_142292ac0(longlong param_1,float *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 local_res8;
  void *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong uVar9;
  
  if (param_2[8] == 0.0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = *(undefined2 **)(param_2 + 6);
  }
  lVar4 = FUN_1428f58f0();
  local_res8 = *(undefined8 *)(lVar4 + 0x18);
  FName::ToString(&local_res8,&local_58);
  puVar10 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar10 = local_58;
  }
  FString::PrintfImpl(&local_68,L"%s<W:%.1f%%> %s",puVar10,(double)(*param_2 * 100.0),puVar11);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar9 = 0;
  iVar7 = 0;
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  puVar5 = (undefined8 *)
           FName::ToString((longlong)*(int *)(param_1 + 0x48) * 0x58 +
                           *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10),local_38);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  puVar5 = (undefined8 *)FName::ToString(*(undefined8 *)(param_1 + 0x40),&local_48);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar5;
  }
  FString::PrintfImpl(&local_58,L"(%s->%s)",puVar10,puVar11);
  puVar11 = local_58;
  iVar3 = local_60;
  if (local_50 != 0) {
    iVar7 = local_50 + -1;
  }
  if (iVar7 != 0) {
    lVar4 = (longlong)local_60;
    local_60 = (uint)(local_60 == 0) + local_60 + iVar7;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
    }
    pvVar1 = (void *)((longlong)local_68 + (lVar4 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar11,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  pvVar1 = local_68;
  lVar4 = (longlong)local_60;
  local_58 = (undefined2 *)0x0;
  local_50 = local_60;
  if (local_60 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar4 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_58,0);
  uVar12 = uVar9;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      puVar5 = (undefined8 *)
               FName::ToString((longlong)(int)uVar9 * 0x58 +
                               *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10),local_38);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_48,L"(State: %s)",puVar11);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      pvVar1 = local_48;
      lVar4 = (longlong)local_40;
      local_58 = (undefined2 *)0x0;
      local_50 = local_40;
      if (local_40 == 0) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_40,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar4 * 2);
      }
      lVar4 = *(longlong *)(param_1 + 0x68);
      uVar13 = FUN_1422960a0(param_1,uVar9);
      uVar6 = FNodeDebugData::BranchFlow(param_2,uVar13,&local_58);
      plVar2 = *(longlong **)(uVar12 + 8 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,uVar6);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar12 = uVar12 + 0x18;
    } while ((int)uVar8 < *(int *)(param_1 + 0x70));
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142292df0 GatherDebugData body=281 status=ok
// SIG undefined GatherDebugData(void)

void FAnimNode_TransitionResult::GatherDebugData(undefined8 param_1,float *param_2)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  ulonglong local_10;
  
  if (param_2[8] == 0.0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 6);
  }
  lVar1 = FAnimNode_SubInput::StaticStruct();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  FString::PrintfImpl(&local_18,L"%s<W:%.1f%%> %s",puVar4,(double)(*param_2 * 100.0),puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  _Src = local_18;
  local_28 = (undefined2 *)0x0;
  iVar2 = (int)local_10;
  local_20 = iVar2;
  if (iVar2 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_10 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar2 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_28,0);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142292f10 FUN_142292f10 body=846 status=ok
// SIG undefined FUN_142292f10(void)

void FUN_142292f10(longlong param_1,float *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  ulonglong local_res8;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 local_30;
  
  iVar12 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_2[8] == 0.0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = *(undefined2 **)(param_2 + 6);
  }
  lVar7 = FAnimNode_SubInstance::StaticStruct();
  local_res8 = *(ulonglong *)(lVar7 + 0x18);
  FName::ToString(&local_res8,&local_48);
  puVar15 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar15 = local_48;
  }
  FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s",puVar15,(double)(*param_2 * 100.0),puVar13);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar8 = FUN_1428eccf0();
    lVar7 = *(longlong *)(param_1 + 0x48);
joined_r0x000142292fde:
    if (lVar7 != 0) {
      if (lVar7 != lVar8) goto code_r0x000142292fe5;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar8 = 1;
        lVar9 = FUN_1428eccf0();
        for (lVar7 = *(longlong *)(param_1 + 0x48);
            (lVar11 = 0, lVar7 != 0 && (lVar11 = *(longlong *)(param_1 + 0x48), lVar7 != lVar9));
            lVar7 = *(longlong *)(lVar7 + 0x30)) {
        }
        local_res8 = *(ulonglong *)(lVar11 + 0x18);
        FName::ToString(&local_res8,&local_38);
        pwVar14 = L"";
        if ((int)local_30 != 0) {
          pwVar14 = local_38;
        }
        goto LAB_142292ff5;
      }
    }
  }
  pwVar14 = L"None";
  lVar8 = 0;
LAB_142292ff5:
  FString::PrintfImpl(&local_48,L"Target: %s",pwVar14);
  puVar13 = local_48;
  iVar4 = local_50;
  if (local_40 != 0) {
    iVar12 = local_40 + -1;
  }
  if (iVar12 != 0) {
    lVar7 = (longlong)local_50;
    local_50 = (uint)(local_50 == 0) + local_50 + iVar12;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
    }
    pvVar1 = (void *)((longlong)local_58 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar13,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free(local_48);
  }
  if ((lVar8 != 0) && (local_38 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  pvVar1 = local_58;
  lVar7 = (longlong)local_50;
  local_48 = (undefined2 *)0x0;
  local_40 = local_50;
  if (local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar7 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_48,0);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 == (longlong *)0x0) goto LAB_142293203;
  lVar7 = plVar2[4];
  if (lVar7 != 0) {
    lVar8 = FUN_142a07000();
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        bVar3 = false;
        if (DVar6 == DAT_1468c21c0) goto LAB_1422931a4;
      }
      else {
LAB_1422931a4:
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1423b2d70(plVar2[4],1);
      }
    }
  }
  lVar7 = plVar2[0x72];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*plVar2 + 0x308))(plVar2);
    plVar2[0x72] = lVar7;
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  uVar10 = FNodeDebugData::BranchFlow(param_2,0x3f800000,&local_38);
  FUN_14225df90(lVar7,uVar10);
LAB_142293203:
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  uVar10 = FNodeDebugData::BranchFlow(param_2,0x3f800000,&local_38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,uVar10);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
code_r0x000142292fe5:
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000142292fde;
}



// FUNCTION 142293260 GatherDebugData body=424 status=ok
// SIG undefined GatherDebugData(void)

void FAnimNode_TransitionPoseEvaluator::GatherDebugData(longlong param_1,float *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  void *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  if (param_2[8] == 0.0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(param_2 + 6);
  }
  lVar3 = StaticStruct();
  local_res8 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res8,&local_38);
  puVar6 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar6 = local_38;
  }
  FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s",puVar6,(double)(*param_2 * 100.0),puVar5);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar4 = 0;
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  FString::PrintfImpl(&local_38,L"(Cached Frames Remaining: %i)",*(undefined4 *)(param_1 + 0x70));
  puVar5 = local_38;
  iVar2 = local_40;
  if (local_30 != 0) {
    iVar4 = local_30 + -1;
  }
  if (iVar4 != 0) {
    lVar3 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + iVar4 + local_40;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar2);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,puVar5,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free(local_38);
  }
  pvVar1 = local_48;
  lVar3 = (longlong)local_40;
  local_38 = (undefined2 *)0x0;
  local_30 = local_40;
  if (local_40 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_38,0);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142293410 GatherDebugData body=281 status=ok
// SIG undefined GatherDebugData(void)

void FAnimNode_TransitionResult::GatherDebugData(undefined8 param_1,float *param_2)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  ulonglong local_10;
  
  if (param_2[8] == 0.0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 6);
  }
  lVar1 = FUN_1428f5a70();
  local_res10 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar4 = local_28;
  }
  FString::PrintfImpl(&local_18,L"%s<W:%.1f%%> %s",puVar4,(double)(*param_2 * 100.0),puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  _Src = local_18;
  local_28 = (undefined2 *)0x0;
  iVar2 = (int)local_10;
  local_20 = iVar2;
  if (iVar2 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_10 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar2 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_28,0);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142293530 FUN_142293530 body=459 status=ok
// SIG undefined FUN_142293530(void)

void FUN_142293530(longlong param_1,float *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 local_res8;
  void *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  puVar7 = &DAT_143f3eda8;
  if (param_2[8] == 0.0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_2 + 6);
  }
  lVar3 = FAnimNode_UseCachedPose::StaticStruct();
  local_res8 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res8,&local_48);
  puVar8 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar8 = local_48;
  }
  FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s",puVar8,(double)(*param_2 * 100.0),puVar6);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar5 = 0;
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  puVar4 = (undefined8 *)FName::ToString(param_1 + 0x48,local_38);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(&local_48,&DAT_14501d390,puVar7);
  puVar7 = local_48;
  iVar2 = local_50;
  if (local_40 != 0) {
    iVar5 = local_40 + -1;
  }
  if (iVar5 != 0) {
    lVar3 = (longlong)local_50;
    local_50 = (uint)(local_50 == 0) + iVar5 + local_50;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
    }
    pvVar1 = (void *)((longlong)local_58 + (lVar3 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar7,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  pvVar1 = local_58;
  lVar3 = (longlong)local_50;
  local_48 = (undefined2 *)0x0;
  local_40 = local_50;
  if (local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_48,1);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142293700 GatherDebugData body=17 status=ok
// SIG undefined GatherDebugData(void)

void FPoseLinkBase::GatherDebugData(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014229370c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    return;
  }
  return;
}



// FUNCTION 142293730 FUN_142293730 body=839 status=ok
// SIG undefined FUN_142293730(void)

void FUN_142293730(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  ulonglong local_res8;
  longlong local_98 [4];
  longlong local_78 [2];
  undefined4 local_68;
  float fStack_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  
  pvVar4 = (void *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (((*(char *)(param_1 + 0x17d) != '\x01') &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x290))(), cVar1 != '\0')) &&
     (*(int *)(*(longlong *)(param_1 + 0x180) + 0xe8) < 1)) {
    local_res8 = *(ulonglong *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_68);
    bVar6 = *(longlong *)(param_1 + 0x38) == 0;
    if (bVar6) {
      local_98[0] = 0;
      local_98[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
      FGenericPlatformString::Memcpy(local_98[0],L"NoSkeleton",0x16);
      plVar2 = local_98;
    }
    else {
      local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x18);
      FName::ToString(&local_res8,local_98 + 2);
      plVar2 = local_98 + 2;
    }
    lVar3 = *plVar2;
    *plVar2 = 0;
    plVar2[1] = 0;
    if ((bVar6) && (local_98[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar6) && (local_98[2] != 0)) {
      FMemory::Free();
    }
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x180) + 0x18);
    FName::ToString(&local_res8,local_78);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x38);
    bVar6 = lVar5 == 0;
    if (bVar6) {
      local_98[0] = 0;
      local_98[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
      FGenericPlatformString::Memcpy(local_98[0],L"NoRefSeqSkeleton",0x22);
      plVar2 = local_98;
    }
    else {
      local_res8 = *(ulonglong *)(lVar5 + 0x18);
      FName::ToString(&local_res8,local_98 + 2);
      plVar2 = local_98 + 2;
    }
    lVar5 = *plVar2;
    *plVar2 = 0;
    plVar2[1] = 0;
    if ((bVar6) && (local_98[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar6) && (local_98[2] != 0)) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    if (CONCAT44(fStack_64,local_68) != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x17d) == '\x02') {
    fStack_64 = *(float *)(param_4 + 4);
    fVar7 = fStack_64 / *(float *)(param_1 + 0x90);
    fVar8 = 0.0;
    if ((0.0 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
      fVar8 = 1.0;
    }
    lVar3 = *(longlong *)(param_1 + 0x180);
  }
  else {
    if (*(char *)(param_1 + 0x17d) != '\x03') {
      FUN_1408488d0(param_2,*(undefined8 *)(param_2 + 0x10));
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x180);
    fVar8 = 0.0;
    if (((0 < *(int *)(lVar3 + 0xb8)) &&
        (fVar7 = (float)*(int *)(param_1 + 0x188) / (float)*(int *)(lVar3 + 0xb8), 0.0 <= fVar7)) &&
       (fVar8 = fVar7, 1.0 <= fVar7)) {
      fVar8 = 1.0;
    }
    fStack_64 = *(float *)(param_4 + 4);
  }
  local_58 = *(int *)(param_4 + 0x10);
  lVar5 = (longlong)local_58;
  fVar7 = *(float *)(lVar3 + 0x90);
  _Src = *(void **)(param_4 + 8);
  local_68 = CONCAT31(local_68._1_3_,*param_4);
  local_60 = (void *)0x0;
  if (local_58 == 0) {
    local_54 = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_60,local_58,0);
    pvVar4 = local_60;
    _guard_xfg_dispatch_icall_nop(local_60,_Src,lVar5 << 2);
    lVar3 = *(longlong *)(param_1 + 0x180);
  }
  fStack_64 = fVar8 * fVar7;
  FUN_142294010(lVar3,param_2,param_3,&local_68,1);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return;
}



// FUNCTION 142293a80 FUN_142293a80 body=704 status=ok
// SIG undefined FUN_142293a80(void)

void FUN_142293a80(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  longlong local_48;
  longlong local_40 [3];
  undefined2 local_28;
  undefined1 local_26;
  
  cVar2 = FUN_14229e1a0(param_1,*(undefined8 *)(param_2 + 0x10));
  if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x290))(param_1), cVar2 == '\0')) {
    FUN_142294010(param_1,param_2,param_3,param_4,0);
    return;
  }
  if (*(char *)((longlong)param_1 + 0x17c) == '\x01') {
    cVar2 = (**(code **)(*param_1 + 0x290))(param_1);
    if (cVar2 != '\0') {
      FUN_142294010(param_1,param_2,param_3,param_4,0);
      local_48 = *(longlong *)(param_2 + 0x10);
      uVar5 = 0;
      local_58 = 0;
      local_4c = 0;
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_28 = 0;
      local_26 = 0;
      iVar1 = *(int *)(local_48 + 8);
      uVar4 = uVar5;
      if (0 < iVar1) {
        local_50 = 0;
        FUN_140848c80(&local_58,iVar1);
        uVar4 = (ulonglong)local_50;
      }
      local_50 = (int)uVar4 + iVar1;
      if (local_4c < (int)local_50) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_58);
      }
      FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(local_40,param_3);
      FUN_142293730(param_1,&local_58,local_40,param_4);
      FAnimationRuntime::ConvertPoseToAdditive(param_2,&local_58);
      uVar4 = uVar5;
      if ((int)param_3[1] < 1) {
        return;
      }
      do {
        if ((*(char *)(uVar5 + 4 + *param_3) == '\0') &&
           (*(char *)(uVar5 + 4 + local_40[0]) == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(uVar5 + 4 + *param_3) = uVar3;
        uVar6 = (int)uVar4 + 1;
        *(float *)(uVar5 + *param_3) =
             *(float *)(uVar5 + *param_3) - *(float *)(uVar5 + local_40[0]);
        uVar5 = uVar5 + 8;
        uVar4 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_3[1]);
      return;
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x17c) != '\x02') {
      return;
    }
    cVar2 = (**(code **)(*param_1 + 0x290))(param_1);
    if (cVar2 != '\0') {
      FUN_142294010(param_1,param_2,param_3,param_4,1);
      local_48 = *(longlong *)(param_2 + 0x10);
      uVar5 = 0;
      local_58 = 0;
      local_4c = 0;
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_28 = 0;
      local_26 = 0;
      iVar1 = *(int *)(local_48 + 8);
      uVar4 = uVar5;
      if (0 < iVar1) {
        local_50 = 0;
        FUN_140848c80(&local_58,iVar1);
        uVar4 = (ulonglong)local_50;
      }
      local_50 = iVar1 + (int)uVar4;
      if (local_4c < (int)local_50) {
        TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(&local_58);
      }
      FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(local_40,param_3);
      FUN_142293730(param_1,&local_58,local_40,param_4);
      FAnimationRuntime::ConvertPoseToMeshRotation(param_2);
      FAnimationRuntime::ConvertPoseToMeshRotation(&local_58);
      FAnimationRuntime::ConvertPoseToAdditive(param_2,&local_58);
      uVar4 = uVar5;
      if ((int)param_3[1] < 1) {
        return;
      }
      do {
        if ((*(char *)(uVar5 + 4 + *param_3) == '\0') &&
           (*(char *)(uVar5 + 4 + local_40[0]) == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(uVar5 + 4 + *param_3) = uVar3;
        uVar6 = (int)uVar4 + 1;
        *(float *)(uVar5 + *param_3) =
             *(float *)(uVar5 + *param_3) - *(float *)(uVar5 + local_40[0]);
        uVar5 = uVar5 + 8;
        uVar4 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_3[1]);
      return;
    }
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity(param_2);
  return;
}



// FUNCTION 142293d40 FUN_142293d40 body=592 status=ok
// SIG undefined FUN_142293d40(void)

void FUN_142293d40(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *pvVar8;
  
  FString::PrintfImpl(&local_58,L"%.03f",
                      (double)((float)(*(int *)(param_1 + 0x128) + 4 +
                                      (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0x110)) * 4) /
                              (float)(*(int *)(param_1 + 0xe8) * *(int *)(param_1 + 0xb8) * 0x28)));
  puVar3 = (undefined8 *)FName::FName(local_res8,L"Compression Ratio",1);
  pvVar8 = local_58;
  local_40 = (void *)0x0;
  local_48 = *puVar3;
  iVar5 = (int)local_50;
  local_38 = iVar5;
  if (iVar5 == 0) {
    pvVar6 = (void *)0x0;
    uVar4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    pvVar6 = local_40;
    _guard_xfg_dispatch_icall_nop(local_40,pvVar8,(longlong)iVar5 * 2);
    uVar4 = local_34;
  }
  iVar2 = local_38;
  uVar1 = local_48;
  iVar5 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar5);
  }
  puVar3 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
  *puVar3 = uVar1;
  puVar3[1] = pvVar6;
  *(int *)(puVar3 + 2) = iVar2;
  uVar7 = 0;
  pvVar8 = (void *)0x0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uVar4;
  puVar3[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_58,L"%.02f",
                      (double)((float)(*(int *)(param_1 + 0x128) + 4 +
                                      (*(int *)(param_1 + 0x100) + *(int *)(param_1 + 0x110)) * 4) *
                              0.0009765625));
  puVar3 = (undefined8 *)FName::FName(local_res8,L"Compressed Size (KB)",1);
  pvVar6 = local_58;
  local_40 = (void *)0x0;
  local_48 = *puVar3;
  iVar5 = (int)local_50;
  local_38 = iVar5;
  if (iVar5 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
    pvVar8 = local_40;
    _guard_xfg_dispatch_icall_nop(local_40,pvVar6,(longlong)iVar5 * 2);
    uVar7 = local_34;
  }
  iVar2 = local_38;
  uVar1 = local_48;
  iVar5 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar5);
  }
  puVar3 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
  *puVar3 = uVar1;
  puVar3[1] = pvVar8;
  *(int *)(puVar3 + 2) = iVar2;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uVar7;
  puVar3[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1417557f0(param_1,param_2);
  return;
}



// FUNCTION 142293f90 FUN_142293f90 body=113 status=ok
// SIG undefined FUN_142293f90(void)

undefined4 FUN_142293f90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar3 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x1c8) != 0)) {
      return *(undefined4 *)(lVar1 + 0x1d0);
    }
  }
  return 0xbf800000;
}



// FUNCTION 142294010 FUN_142294010 body=3944 status=ok
// SIG undefined FUN_142294010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142294010(longlong *param_1,longlong *param_2,undefined8 param_3,char *param_4,char param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  void *_Src;
  char cVar28;
  char cVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined8 *puVar38;
  longlong *plVar39;
  longlong *plVar40;
  undefined1 (*pauVar41) [12];
  undefined8 *puVar42;
  float *pfVar43;
  int *piVar44;
  ulonglong uVar45;
  int iVar46;
  longlong *plVar47;
  longlong lVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  uint uVar62;
  uint uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  longlong *local_res10;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  undefined1 local_1c4 [4];
  int local_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  int local_198;
  longlong local_190;
  int local_188;
  longlong *local_180;
  longlong *local_178;
  int local_168;
  int iStack_164;
  longlong local_160;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  ulonglong local_120;
  longlong *local_118;
  undefined1 local_108 [208];
  
  lVar31 = param_2[2];
  local_res10 = param_2;
  local_190 = lVar31;
  if ((param_5 == '\0') && (cVar28 = FUN_14229e1a0(param_1,lVar31), cVar28 == '\0')) {
    cVar28 = '\0';
    cVar29 = (**(code **)(*param_1 + 0x290))(param_1);
    if (cVar29 == '\0') goto LAB_14229407c;
    cVar29 = '\x01';
  }
  else {
    cVar28 = '\x01';
LAB_14229407c:
    cVar29 = '\0';
  }
  local_1a8 = (void *)param_1[7];
  if (local_1a8 == (void *)0x0) {
    if (cVar29 != '\0') {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity();
      return;
    }
    FUN_1408488d0(param_2,param_2[2]);
    return;
  }
  lVar48 = 0;
  if (cVar29 == '\0') {
    if (*(char *)(lVar31 + 0xd0) == '\0') {
      FUN_1408488d0(param_2,param_2[2]);
    }
    else {
      plVar39 = (longlong *)FUN_1422f2860(param_2[2],param_1 + 0x32);
      if (*(uint *)(param_2 + 1) != 0) {
        uVar45 = (ulonglong)*(uint *)(param_2 + 1);
        lVar32 = lVar48;
        lVar33 = lVar48;
        do {
          lVar34 = *param_2;
          puVar42 = (undefined8 *)
                    ((longlong)*(int *)(lVar33 + *(longlong *)(lVar31 + 0x70)) * 0x30 + *plVar39);
          uVar37 = puVar42[1];
          *(undefined8 *)(lVar32 + lVar34) = *puVar42;
          ((undefined8 *)(lVar32 + lVar34))[1] = uVar37;
          *(undefined1 (*) [16])(lVar32 + 0x10 + lVar34) = *(undefined1 (*) [16])(puVar42 + 2);
          uVar49 = *(undefined4 *)((longlong)puVar42 + 0x24);
          uVar51 = *(undefined4 *)(puVar42 + 5);
          uVar52 = *(undefined4 *)((longlong)puVar42 + 0x2c);
          puVar4 = (undefined4 *)(lVar32 + 0x20 + lVar34);
          *puVar4 = *(undefined4 *)(puVar42 + 4);
          puVar4[1] = uVar49;
          puVar4[2] = uVar51;
          puVar4[3] = uVar52;
          uVar45 = uVar45 - 1;
          lVar32 = lVar32 + 0x30;
          lVar33 = lVar33 + 4;
        } while (uVar45 != 0);
      }
    }
  }
  else {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToAdditiveIdentity(param_2);
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,param_3,*(undefined4 *)(param_4 + 4),cVar28);
  if (cVar28 == '\0') {
    local_198 = (int)param_1[0x1b];
  }
  else {
    local_198 = (int)param_1[0x19];
  }
  if (local_198 == 0) {
    return;
  }
  puStack_1b0 = &local_1c8;
  local_1b8 = &LAB_14228c520;
  local_1c8 = 0;
  lVar31 = FUN_1415d8310(&local_1b8,&DAT_146531a6c);
  local_1c7 = 0;
  plVar39 = (longlong *)(lVar31 + 0x18);
  puStack_1b0 = &local_1c7;
  local_1b8 = &LAB_14228c520;
  lVar32 = FUN_1415d8310(&local_1b8,&DAT_146531a6c);
  local_1c6 = 0;
  plVar40 = (longlong *)(lVar32 + 0x28);
  puStack_1b0 = &local_1c6;
  local_1b8 = &LAB_14228c520;
  lVar33 = FUN_1415d8310(&local_1b8,&DAT_146531a6c);
  local_1c5 = 0;
  plVar47 = (longlong *)(lVar33 + 0x38);
  puStack_1b0 = &local_1c5;
  local_1b8 = &LAB_14228c520;
  local_118 = plVar47;
  lVar34 = FUN_1415d8310(&local_1b8,&DAT_146531a6c);
  local_1c4[0] = 0;
  puStack_1b0 = local_1c4;
  local_1b8 = &LAB_14228c520;
  local_178 = (longlong *)(lVar34 + 0x48);
  lVar35 = FUN_1415d8310(&local_1b8,&DAT_146531a6c);
  *(undefined4 *)(lVar31 + 0x20) = 0;
  plVar1 = (longlong *)(lVar35 + 0x58);
  local_180 = plVar1;
  if ((*(int *)(lVar31 + 0x24) < 0) && (*(int *)(lVar31 + 0x24) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar39,0);
  }
  *(undefined4 *)(lVar32 + 0x30) = 0;
  if ((*(int *)(lVar32 + 0x34) < 0) && (*(int *)(lVar32 + 0x34) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar40,0);
  }
  *(undefined4 *)(lVar33 + 0x40) = 0;
  if ((*(int *)(lVar33 + 0x44) < 0) && (*(int *)(lVar33 + 0x44) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar47,0);
  }
  *(undefined4 *)(lVar34 + 0x50) = 0;
  if ((*(int *)(lVar34 + 0x54) < 0) && (*(int *)(lVar34 + 0x54) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(lVar34 + 0x48),0);
  }
  *(undefined4 *)(lVar35 + 0x60) = 0;
  if ((*(int *)(lVar35 + 100) < 0) && (*(int *)(lVar35 + 100) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar11 = *(int *)param_1[0x1a];
  local_188 = iVar11;
  lVar33 = FWeakObjectPtr::Get(local_190 + 0x38);
  plVar1 = local_118;
  if (lVar33 == 0) {
    local_160 = 0;
  }
  else {
    local_160 = *(longlong *)(lVar33 + 0x360);
  }
  uVar36 = (ulonglong)(iVar11 == 0);
  uVar45 = uVar36;
  if ((longlong)uVar36 < (longlong)local_198) {
    do {
      iVar11 = *(int *)(param_1[0x1a] + uVar45 * 4);
      iVar46 = (int)uVar36;
      local_120 = uVar45;
      if ((iVar11 != -1) &&
         (iVar12 = *(int *)(*(longlong *)(local_190 + 0x80) + (longlong)iVar11 * 4), iVar12 != -1))
      {
        local_1c0 = *(int *)(lVar31 + 0x20);
        *(int *)(lVar31 + 0x20) = local_1c0 + 1;
        local_168 = iVar12;
        iStack_164 = iVar46;
        if (*(int *)(lVar31 + 0x24) < local_1c0 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar39,local_1c0);
        }
        *(ulonglong *)(*plVar39 + (longlong)local_1c0 * 8) = CONCAT44(iStack_164,local_168);
        if (local_160 == 0) {
          uVar30 = 0;
          if ((-1 < iVar11) && (iVar11 < *(int *)((longlong)local_1a8 + 0x40))) {
            uVar30 = (uint)*(byte *)(*(longlong *)((longlong)local_1a8 + 0x38) + 0xc +
                                    (longlong)iVar11 * 0x10);
          }
        }
        else {
          uVar30 = FUN_1422aa630(local_160,iVar11);
        }
        if (uVar30 == 0) {
          iVar13 = *(int *)(lVar32 + 0x30);
          *(int *)(lVar32 + 0x30) = iVar13 + 1;
          local_128 = iVar12;
          iStack_124 = iVar46;
          if (*(int *)(lVar32 + 0x34) < iVar13 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar40,iVar13);
          }
          lVar33 = *plVar40;
          uVar37 = CONCAT44(iStack_124,local_128);
        }
        else {
          if (uVar30 != 2) {
            if (uVar30 == 3) {
              local_1c0 = *(int *)(lVar32 + 0x30);
              *(int *)(lVar32 + 0x30) = local_1c0 + 1;
              local_148 = iVar12;
              iStack_144 = iVar46;
              if (*(int *)(lVar32 + 0x34) < local_1c0 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar40,local_1c0)
                ;
              }
              plVar47 = local_178;
              *(ulonglong *)(*plVar40 + (longlong)local_1c0 * 8) = CONCAT44(iStack_144,local_148);
              if (cVar29 == '\0') {
                iVar13 = (int)local_178[1];
                *(int *)(local_178 + 1) = iVar13 + 1;
                local_140 = iVar12;
                iStack_13c = iVar11;
                if (*(int *)((longlong)local_178 + 0xc) < iVar13 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (local_178,iVar13);
                }
                *(ulonglong *)(*plVar47 + (longlong)iVar13 * 8) = CONCAT44(iStack_13c,local_140);
              }
            }
            else if (uVar30 == 4) {
              local_1c0 = *(int *)(lVar32 + 0x30);
              *(int *)(lVar32 + 0x30) = local_1c0 + 1;
              local_158 = iVar12;
              iStack_154 = iVar46;
              if (*(int *)(lVar32 + 0x34) < local_1c0 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar40,local_1c0)
                ;
              }
              plVar47 = local_180;
              *(ulonglong *)(*plVar40 + (longlong)local_1c0 * 8) = CONCAT44(iStack_154,local_158);
              if (cVar29 == '\0') {
                iVar13 = (int)local_180[1];
                *(int *)(local_180 + 1) = iVar13 + 1;
                local_150 = iVar12;
                iStack_14c = iVar11;
                if (*(int *)((longlong)local_180 + 0xc) < iVar13 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (local_180,iVar13);
                }
                *(ulonglong *)(*plVar47 + (longlong)iVar13 * 8) = CONCAT44(iStack_14c,local_150);
              }
            }
            goto LAB_1422945da;
          }
          local_1c0 = *(int *)(lVar32 + 0x30);
          *(int *)(lVar32 + 0x30) = local_1c0 + 1;
          local_138 = iVar12;
          iStack_134 = iVar46;
          if (*(int *)(lVar32 + 0x34) < local_1c0 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar40,local_1c0);
          }
          *(ulonglong *)(*plVar40 + (longlong)local_1c0 * 8) = CONCAT44(iStack_134,local_138);
          iVar13 = (int)plVar1[1];
          *(int *)(plVar1 + 1) = iVar13 + 1;
          local_130 = iVar12;
          iStack_12c = iVar11;
          if (*(int *)((longlong)plVar1 + 0xc) < iVar13 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar13);
          }
          lVar33 = *plVar1;
          uVar37 = CONCAT44(iStack_12c,local_130);
        }
        *(undefined8 *)(lVar33 + (longlong)iVar13 * 8) = uVar37;
      }
LAB_1422945da:
      uVar36 = (ulonglong)(iVar46 + 1);
      local_120 = local_120 + 1;
      param_2 = local_res10;
      plVar47 = local_118;
      uVar45 = local_120;
    } while ((longlong)local_120 < (longlong)local_198);
  }
  lVar32 = local_190;
  if (local_188 == 0) {
    lVar33 = *param_2;
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
    AnimationFormat_GetBoneAtom(lVar33,param_1,0,*(undefined4 *)(param_4 + 4));
    lVar32 = local_190;
    FUN_1422521e0(param_1[7],param_1 + 0x32,lVar33,0,&local_res10,local_190,cVar29);
  }
  if (0 < *(int *)(lVar31 + 0x20)) {
    local_1a8 = (void *)0x0;
    uStack_1a0 = 0;
    uVar49 = *(undefined4 *)(param_4 + 4);
    if (&local_1a8 != param_2) {
      uVar30 = *(uint *)(param_2 + 1);
      local_res10 = (longlong *)*param_2;
      uStack_1a0 = (ulonglong)uVar30;
      if (uVar30 != 0) {
        FUN_140615970(&local_1a8,uVar30,0);
        _guard_xfg_dispatch_icall_nop(local_1a8,local_res10,(longlong)(int)uVar30 * 0x30);
      }
    }
    FUN_142257a20(&local_1a8,plVar39,plVar40,plVar39,param_1,uVar49);
    _Src = local_1a8;
    if (param_2 != &local_1a8) {
      lVar31 = (longlong)(int)(float)uStack_1a0;
      *(float *)(param_2 + 1) = (float)uStack_1a0;
      if (((float)uStack_1a0 == 0.0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_140615970(param_2,uStack_1a0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,lVar31 * 0x30);
      }
    }
  }
  uVar37 = uRam00000001468b5b78;
  if (((*param_4 != '\0') && (*(char *)((longlong)param_1 + 0x199) != '\0')) ||
     (*(char *)((longlong)param_1 + 0x19b) != '\0')) {
    puVar42 = (undefined8 *)*param_2;
    cVar28 = *(char *)((longlong)param_1 + 0x19a);
    local_1a8 = (void *)puVar42[4];
    uStack_1a0 = puVar42[5];
    if (cVar28 == '\x01') {
      puVar38 = (undefined8 *)FUN_142291cd0(param_1,local_108,0,lVar32);
      uVar37 = puVar38[1];
      *puVar42 = *puVar38;
      puVar42[1] = uVar37;
      *(undefined1 (*) [16])(puVar42 + 2) = *(undefined1 (*) [16])(puVar38 + 2);
      uVar49 = *(undefined4 *)(puVar38 + 4);
      uVar51 = *(undefined4 *)((longlong)puVar38 + 0x24);
      uVar52 = *(undefined4 *)(puVar38 + 5);
      uVar53 = *(undefined4 *)((longlong)puVar38 + 0x2c);
    }
    else if (cVar28 == '\x02') {
      *puVar42 = _DAT_1468b5b70;
      puVar42[1] = uVar37;
      *(undefined1 (*) [16])(puVar42 + 2) = _DAT_1468b5b80;
      uVar49 = _DAT_1468b5b90;
      uVar51 = uRam00000001468b5b94;
      uVar52 = uRam00000001468b5b98;
      uVar53 = uRam00000001468b5b9c;
    }
    else {
      puVar38 = *(undefined8 **)(*(longlong *)(lVar32 + 0x48) + 0x30);
      uVar37 = puVar38[1];
      *puVar42 = *puVar38;
      puVar42[1] = uVar37;
      *(undefined1 (*) [16])(puVar42 + 2) = *(undefined1 (*) [16])(puVar38 + 2);
      uVar49 = *(undefined4 *)(puVar38 + 4);
      uVar51 = *(undefined4 *)((longlong)puVar38 + 0x24);
      uVar52 = *(undefined4 *)(puVar38 + 5);
      uVar53 = *(undefined4 *)((longlong)puVar38 + 0x2c);
    }
    *(undefined4 *)(puVar42 + 4) = uVar49;
    *(undefined4 *)((longlong)puVar42 + 0x24) = uVar51;
    *(undefined4 *)(puVar42 + 5) = uVar52;
    *(undefined4 *)((longlong)puVar42 + 0x2c) = uVar53;
    if ((char)param_1[0x3b] == '\0') {
      cVar29 = (**(code **)(*param_1 + 0x290))(param_1);
      if ((cVar29 == '\0') || (cVar28 == '\x01')) goto LAB_142294868;
      fVar60 = *(float *)(puVar42 + 4) - 1.0;
      fVar56 = *(float *)((longlong)puVar42 + 0x24) - 1.0;
      fVar64 = *(float *)(puVar42 + 5) - 1.0;
    }
    else {
      fVar64 = (float)uStack_1a0;
      fVar56 = local_1a8._4_4_;
      fVar60 = (float)local_1a8;
    }
    auVar55._4_4_ = fVar56;
    auVar55._0_4_ = fVar60;
    auVar55._8_4_ = fVar64;
    auVar55._12_4_ = 0;
    *(undefined1 (*) [16])(puVar42 + 4) = auVar55;
  }
LAB_142294868:
  if (0 < (int)plVar47[1]) {
    plVar39 = (longlong *)FUN_1422f2860(param_2[2],param_1 + 0x32);
    piVar44 = (int *)*plVar47;
    piVar2 = piVar44 + (longlong)(int)plVar47[1] * 2;
    for (; piVar44 != piVar2; piVar44 = piVar44 + 2) {
      pfVar43 = (float *)(*plVar39 + 0x10 + (longlong)piVar44[1] * 0x30);
      fVar64 = SQRT(pfVar43[1] * pfVar43[1] + *pfVar43 * *pfVar43 + pfVar43[2] * pfVar43[2]);
      if (0.0001 < fVar64) {
        lVar31 = (longlong)*piVar44;
        pfVar43 = (float *)(*(longlong *)(lVar32 + 0xa0) + 0x10 + lVar31 * 0x30);
        fVar61 = SQRT(pfVar43[1] * pfVar43[1] + *pfVar43 * *pfVar43 + pfVar43[2] * pfVar43[2]) *
                 (1.0 / fVar64);
        pfVar43 = (float *)(*param_2 + 0x10 + lVar31 * 0x30);
        fVar64 = pfVar43[1];
        fVar56 = pfVar43[2];
        fVar60 = pfVar43[3];
        pfVar5 = (float *)(*param_2 + 0x10 + lVar31 * 0x30);
        *pfVar5 = fVar61 * *pfVar43;
        pfVar5[1] = fVar61 * fVar64;
        pfVar5[2] = fVar61 * fVar56;
        pfVar5[3] = fVar60 * 0.0;
      }
    }
  }
  plVar39 = local_178;
  if (0 < (int)local_178[1]) {
    plVar40 = (longlong *)FUN_1422f2860(param_2[2],param_1 + 0x32);
    fVar27 = fRam0000000146aef1ac;
    fVar26 = fRam0000000146aef1a8;
    fVar25 = fRam0000000146aef1a4;
    fVar24 = _DAT_146aef1a0;
    fVar23 = fRam0000000146aef17c;
    fVar22 = fRam0000000146aef178;
    fVar21 = fRam0000000146aef174;
    fVar20 = _DAT_146aef170;
    fVar19 = fRam0000000146aef15c;
    fVar77 = fRam0000000146aef158;
    fVar76 = fRam0000000146aef154;
    fVar75 = _DAT_146aef150;
    fVar10 = fRam0000000146aef14c;
    fVar9 = fRam0000000146aef148;
    fVar8 = fRam0000000146aef144;
    fVar7 = _DAT_146aef140;
    fVar61 = fRam0000000146aef13c;
    fVar60 = fRam0000000146aef138;
    fVar56 = fRam0000000146aef134;
    fVar64 = _DAT_146aef130;
    piVar44 = (int *)*plVar39;
    piVar2 = piVar44 + (longlong)(int)plVar39[1] * 2;
    while (piVar44 != piVar2) {
      lVar33 = (longlong)*piVar44;
      lVar31 = *(longlong *)(lVar32 + 0xa0);
      pfVar43 = (float *)(lVar31 + lVar33 * 0x30);
      fVar66 = *pfVar43;
      fVar74 = pfVar43[1];
      fVar70 = pfVar43[2];
      fVar18 = pfVar43[3];
      pfVar43 = (float *)(*plVar40 + (longlong)piVar44[1] * 0x30);
      fVar73 = pfVar43[3];
      fVar65 = -*pfVar43;
      fVar50 = -pfVar43[1];
      pfVar5 = (float *)(*param_2 + lVar33 * 0x30);
      fVar57 = *pfVar5;
      fVar58 = pfVar5[1];
      fVar59 = pfVar5[2];
      fVar67 = pfVar5[3];
      fVar68 = -pfVar43[2];
      fVar69 = fVar73 * fVar57 * fVar75 + fVar67 * fVar65 + fVar68 * fVar58 * fVar7 +
               fVar50 * fVar59 * fVar64;
      fVar71 = fVar68 * fVar57 * fVar76 + fVar67 * fVar50 + fVar73 * fVar58 * fVar8 +
               fVar65 * fVar59 * fVar56;
      fVar72 = fVar50 * fVar57 * fVar77 + fVar67 * fVar68 + fVar65 * fVar58 * fVar9 +
               fVar73 * fVar59 * fVar60;
      fVar73 = fVar65 * fVar57 * fVar19 + fVar67 * fVar73 + fVar50 * fVar58 * fVar10 +
               fVar68 * fVar59 * fVar61;
      pfVar43 = (float *)(*param_2 + lVar33 * 0x30);
      *pfVar43 = fVar18 * fVar69 * fVar75 + fVar73 * fVar66 + fVar70 * fVar71 * fVar7 +
                 fVar74 * fVar72 * fVar64;
      pfVar43[1] = fVar70 * fVar69 * fVar76 + fVar73 * fVar74 + fVar18 * fVar71 * fVar8 +
                   fVar66 * fVar72 * fVar56;
      pfVar43[2] = fVar74 * fVar69 * fVar77 + fVar73 * fVar70 + fVar66 * fVar71 * fVar9 +
                   fVar18 * fVar72 * fVar60;
      pfVar43[3] = fVar66 * fVar69 * fVar19 + fVar73 * fVar18 + fVar74 * fVar71 * fVar10 +
                   fVar70 * fVar72 * fVar61;
      pfVar43 = (float *)(lVar31 + 0x10 + lVar33 * 0x30);
      pfVar5 = (float *)(*plVar40 + 0x10 + (longlong)piVar44[1] * 0x30);
      pfVar6 = (float *)(*param_2 + 0x10 + lVar33 * 0x30);
      auVar14._4_4_ = (pfVar43[1] - pfVar5[1]) + pfVar6[1];
      auVar14._0_4_ = (*pfVar43 - *pfVar5) + *pfVar6;
      auVar14._8_4_ = (pfVar43[2] - pfVar5[2]) + pfVar6[2];
      auVar14._12_4_ = 0;
      *(undefined1 (*) [16])(*param_2 + 0x10 + lVar33 * 0x30) = auVar14;
      pfVar43 = (float *)(*plVar40 + 0x20 + (longlong)piVar44[1] * 0x30);
      local_1a8 = *(void **)pfVar43;
      fVar66 = pfVar43[2];
      uStack_1a0 = *(ulonglong *)(pfVar43 + 2);
      if (1e-08 < ABS(*pfVar43)) {
        fVar74 = 1.0 / *pfVar43;
      }
      else {
        fVar74 = 0.0;
      }
      if (1e-08 < ABS(pfVar43[1])) {
        fVar70 = 1.0 / pfVar43[1];
      }
      else {
        fVar70 = 0.0;
      }
      if (1e-08 < ABS(fVar66)) {
        fVar66 = 1.0 / fVar66;
      }
      else {
        fVar66 = 0.0;
      }
      pfVar43 = (float *)(lVar31 + 0x20 + lVar33 * 0x30);
      piVar44 = piVar44 + 2;
      pfVar5 = (float *)(*param_2 + 0x20 + lVar33 * 0x30);
      auVar15._4_4_ = fVar70 * pfVar43[1] * pfVar5[1];
      auVar15._0_4_ = fVar74 * *pfVar43 * *pfVar5;
      auVar15._8_4_ = fVar66 * pfVar43[2] * pfVar5[2];
      auVar15._12_4_ = 0;
      *(undefined1 (*) [16])(*param_2 + 0x20 + lVar33 * 0x30) = auVar15;
      pfVar43 = (float *)(*param_2 + lVar33 * 0x30);
      fVar66 = *pfVar43;
      fVar74 = pfVar43[1];
      fVar70 = pfVar43[2];
      fVar18 = pfVar43[3];
      auVar54._0_4_ = fVar66 * fVar66 + fVar70 * fVar70;
      auVar54._4_4_ = fVar74 * fVar74 + fVar18 * fVar18;
      auVar54._8_4_ = fVar70 * fVar70 + fVar66 * fVar66;
      auVar54._12_4_ = fVar18 * fVar18 + fVar74 * fVar74;
      fVar67 = auVar54._4_4_ + auVar54._0_4_;
      fVar50 = auVar54._8_4_ + auVar54._4_4_;
      fVar68 = auVar54._12_4_ + auVar54._8_4_;
      fVar65 = auVar54._0_4_ + auVar54._12_4_;
      auVar17._4_4_ = fVar50;
      auVar17._0_4_ = fVar67;
      auVar17._8_4_ = fVar68;
      auVar17._12_4_ = fVar65;
      auVar55 = rsqrtps(auVar54,auVar17);
      fVar73 = auVar55._0_4_;
      fVar57 = auVar55._4_4_;
      fVar58 = auVar55._8_4_;
      fVar59 = auVar55._12_4_;
      fVar73 = (fVar20 - fVar73 * fVar73 * fVar67 * fVar20) * fVar73 + fVar73;
      fVar57 = (fVar21 - fVar57 * fVar57 * fVar50 * fVar21) * fVar57 + fVar57;
      fVar58 = (fVar22 - fVar58 * fVar58 * fVar68 * fVar22) * fVar58 + fVar58;
      fVar59 = (fVar23 - fVar59 * fVar59 * fVar65 * fVar23) * fVar59 + fVar59;
      uVar30 = ((uint)(((fVar21 - fVar57 * fVar57 * fVar50 * fVar21) * fVar57 + fVar57) * fVar74) ^
               uRam0000000146aef164) & -(uint)(fVar25 <= fVar50) ^ uRam0000000146aef164;
      uVar62 = ((uint)(((fVar22 - fVar58 * fVar58 * fVar68 * fVar22) * fVar58 + fVar58) * fVar70) ^
               uRam0000000146aef168) & -(uint)(fVar26 <= fVar68) ^ uRam0000000146aef168;
      uVar63 = ((uint)(((fVar23 - fVar59 * fVar59 * fVar65 * fVar23) * fVar59 + fVar59) * fVar18) ^
               uRam0000000146aef16c) & -(uint)(fVar27 <= fVar65) ^ uRam0000000146aef16c;
      puVar3 = (uint *)(*param_2 + lVar33 * 0x30);
      *puVar3 = ((uint)(((fVar20 - fVar73 * fVar73 * fVar67 * fVar20) * fVar73 + fVar73) * fVar66) ^
                _DAT_146aef160) & -(uint)(fVar24 <= fVar67) ^ _DAT_146aef160;
      puVar3[1] = uVar30;
      puVar3[2] = uVar62;
      puVar3[3] = uVar63;
    }
  }
  plVar39 = local_180;
  lVar31 = local_190;
  iVar11 = (int)local_180[1];
  if (((0 < iVar11) &&
      (plVar40 = (longlong *)FUN_1422f28c0(local_190,param_1 + 0x32), 0 < (int)plVar40[1])) &&
     (((int)plVar40[3] == *(int *)(lVar31 + 8) && (0 < iVar11)))) {
    do {
      lVar31 = (longlong)*(int *)(*plVar39 + lVar48 * 8);
      iVar46 = *(int *)(plVar40[2] + lVar31 * 4);
      if (iVar46 != -1) {
        lVar31 = lVar31 * 0x30 + *param_2;
        pfVar43 = (float *)((longlong)iVar46 * 0x30 + *plVar40);
        fVar64 = *(float *)(lVar31 + 0x10);
        fVar56 = *(float *)(lVar31 + 0x14);
        fVar60 = *(float *)(lVar31 + 0x18);
        if (((0.001 < ABS(fVar64 - pfVar43[5])) || (0.001 < ABS(fVar56 - pfVar43[6]))) ||
           (0.001 < ABS(fVar60 - pfVar43[7]))) {
          fVar61 = pfVar43[1];
          pauVar41 = (undefined1 (*) [12])&local_1a8;
          fVar7 = pfVar43[2];
          fVar8 = *pfVar43;
          fVar9 = pfVar43[3];
          fVar10 = pfVar43[4];
          fVar76 = fVar61 * fVar60 - fVar7 * fVar56;
          fVar77 = fVar7 * fVar64 - fVar8 * fVar60;
          fVar76 = fVar76 + fVar76;
          fVar75 = fVar8 * fVar56 - fVar61 * fVar64;
          fVar77 = fVar77 + fVar77;
          fVar75 = fVar75 + fVar75;
          local_1a8 = (void *)CONCAT44(((fVar76 * fVar7 - fVar75 * fVar8) + fVar9 * fVar77 + fVar56)
                                       * fVar10,((fVar75 * fVar61 - fVar77 * fVar7) +
                                                fVar9 * fVar76 + fVar64) * fVar10);
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,
                                ((fVar77 * fVar8 - fVar76 * fVar61) + fVar9 * fVar75 + fVar60) *
                                fVar10);
        }
        else {
          puStack_1b0 = (undefined1 *)CONCAT44(puStack_1b0._4_4_,pfVar43[10]);
          pauVar41 = (undefined1 (*) [12])&local_1b8;
          local_1b8 = *(undefined1 **)(pfVar43 + 8);
        }
        auVar16._12_4_ = 0;
        auVar16._0_12_ = *pauVar41;
        *(undefined1 (*) [16])(lVar31 + 0x10) = auVar16;
      }
      lVar48 = lVar48 + 1;
    } while (lVar48 < iVar11);
  }
  return;
}



// FUNCTION 142294f80 FUN_142294f80 body=322 status=ok
// SIG undefined FUN_142294f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142294f80(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_38 [48];
  
  uVar4 = uRam0000000146aef0ec;
  local_58 = *(longlong *)(param_1 + 0x38);
  uVar11 = _DAT_146aef0e0 & _DAT_146aef0f0;
  uVar12 = uRam0000000146aef0e4 & uRam0000000146aef0f4;
  uVar13 = uRam0000000146aef0e8 & uRam0000000146aef0f8;
  uVar14 = uRam0000000146aef0ec & uRam0000000146aef0fc;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar4;
  param_2[2] = 0;
  param_2[3] = 0;
  *(uint *)(param_2 + 4) = uVar11;
  *(uint *)((longlong)param_2 + 0x24) = uVar12;
  *(uint *)(param_2 + 5) = uVar13;
  *(uint *)((longlong)param_2 + 0x2c) = uVar14;
  if (local_58 != 0) {
    uVar10 = 0xffffffff;
    local_68 = (undefined4)local_58;
    uStack_64 = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_60 = (undefined4)param_1;
    uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
    local_50 = local_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    if (param_3 != 0) {
      if (*(int *)(local_58 + 0xf0) != *(int *)(local_58 + 0x11c)) {
        lVar6 = *(longlong *)(local_58 + 0x128);
        if (*(longlong *)(local_58 + 0x128) == 0) {
          lVar6 = local_58 + 0x120;
        }
        iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                                 (longlong)*(int *)(local_58 + 0x130) - 1U) * 4);
        if (iVar5 != -1) {
          do {
            puVar9 = (undefined4 *)(*(longlong *)(local_58 + 0xe8) + (longlong)iVar5 * 0x18);
            if (*(longlong *)(*(longlong *)(local_58 + 0xe8) + (longlong)iVar5 * 0x18) == param_3) {
              if (iVar5 != -1) goto LAB_142295073;
              break;
            }
            iVar5 = puVar9[4];
          } while (iVar5 != -1);
        }
      }
      puVar9 = (undefined4 *)0x0;
LAB_142295073:
      puVar7 = puVar9 + 2;
      if (puVar9 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        uVar10 = *puVar7;
      }
    }
    puVar8 = (undefined8 *)FUN_142288370(&local_58,local_38,uVar10);
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *param_2 = *puVar8;
    param_2[1] = uVar1;
    uVar1 = puVar8[5];
    param_2[4] = puVar8[4];
    param_2[5] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  return param_2;
}



// FUNCTION 1422950d0 FUN_1422950d0 body=147 status=ok
// SIG undefined FUN_1422950d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422950d0(longlong param_1,undefined4 *param_2,int param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = uRam0000000146aef0ec;
  if ((param_5 == '\0') &&
     (((0 < *(int *)(param_1 + 0x128) || (*(int *)(param_1 + 0xe8) == 0)) ||
      ((*(char *)(param_1 + 0xf0) == '\x06' &&
       ((*(char *)(param_1 + 0xf1) == '\x06' && (*(char *)(param_1 + 0xf2) == '\x06')))))))) {
    AnimationFormat_GetBoneAtom(param_2,param_1);
    return;
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar1 = uRam0000000146aef0e4 & uRam0000000146aef0f4;
    uVar2 = uRam0000000146aef0e8 & uRam0000000146aef0f8;
    uVar3 = uRam0000000146aef0ec & uRam0000000146aef0fc;
    param_2[8] = _DAT_146aef0e0 & _DAT_146aef0f0;
    param_2[9] = uVar1;
    param_2[10] = uVar2;
    param_2[0xb] = uVar3;
    return;
  }
  FUN_1422910c0(param_1,(longlong)param_3 * 0x30 + *(longlong *)(param_1 + 0xe0),param_2);
  return;
}



// FUNCTION 142295180 GetCompressedCodecFormat body=65 status=ok
// SIG undefined GetCompressedCodecFormat(void)

undefined8 * GetCompressedCodecFormat(undefined8 *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = DAT_146aef128;
    return param_1;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      *param_1 = 0;
      return param_1;
    }
    *param_1 = DAT_146aef1d8;
    return param_1;
  }
  *param_1 = DAT_146aef1d0;
  return param_1;
}



// FUNCTION 1422951d0 FUN_1422951d0 body=162 status=ok
// SIG undefined FUN_1422951d0(void)

float FUN_1422951d0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1[0xd] == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_1[0xd] + 0x94);
  }
  if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x74))) {
    fVar2 = *(float *)(param_1 + 0xf) / *(float *)((longlong)param_1 + 0x74);
  }
  else {
    fVar2 = 0.0;
  }
  fVar2 = (float)FInputScaleBiasClamp::ApplyTo((longlong)param_1 + 0x7c,fVar2,0);
  if (fVar2 * fVar1 < 0.0) {
    fVar1 = (float)(**(code **)(*param_1 + 0x118))(param_1);
    return fVar1 - *(float *)(param_1 + 8);
  }
  return *(float *)(param_1 + 8);
}



// FUNCTION 142295280 FUN_142295280 body=46 status=ok
// SIG undefined FUN_142295280(void)

undefined8 * FUN_142295280(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x18))) {
    *param_2 = *(undefined8 *)
                ((longlong)iVar1 * 0x58 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10));
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1422952b0 FUN_1422952b0 body=184 status=ok
// SIG undefined FUN_1422952b0(void)

void FUN_1422952b0(longlong param_1,int *param_2,int *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*param_2 == -1) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x1a0) + 8 + (longlong)*param_2 * 0x10);
  }
  if (*param_3 == -1) {
    fVar3 = *(float *)(param_1 + 0x90);
    fVar4 = fVar3;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x90);
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x1a0) + 8 + (longlong)*param_3 * 0x10);
  }
  if (fVar4 <= fVar2) {
    fVar2 = fVar2 - fVar3;
  }
  fVar1 = (fVar4 - fVar2) * param_4 + fVar2;
  if ((0.0 <= fVar1) || (fVar1 = fVar1 + fVar3, 0.0 <= fVar1)) {
    if (fVar3 <= fVar1) {
      fVar1 = fVar3;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_2[1] = (int)(fVar2 - fVar1);
  param_3[1] = (int)(fVar4 - fVar1);
  return;
}



// FUNCTION 142295390 GetCurveWidth body=108 status=ok
// SIG undefined GetCurveWidth(void)

undefined4 UAnimNotifyState_Trail::GetCurveWidth(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_res8 [4];
  undefined8 local_res18;
  
  lVar2 = FUN_1423ac7e0();
  local_res8[0] = 0x3f800000;
  local_res18 = 0;
  if ((*(longlong *)(param_1 + 0x50) != 0) && (lVar2 != 0)) {
    cVar1 = FUN_1422687f0(lVar2,*(undefined8 *)(param_1 + 0x50),local_res8);
    if (cVar1 != '\0') {
      return local_res8[0];
    }
  }
  return 0x3f800000;
}



// FUNCTION 142295480 FUN_142295480 body=31 status=ok
// SIG undefined FUN_142295480(void)

undefined8 * FUN_142295480(longlong param_1,undefined8 *param_2)

{
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
    *param_2 = **(undefined8 **)(param_1 + 0x40);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1422954a0 FUN_1422954a0 body=1062 status=ok
// SIG undefined FUN_1422954a0(void)

void FUN_1422954a0(longlong param_1,longlong *param_2,char param_3,int *param_4,int *param_5,
                  float *param_6)

{
  longlong lVar1;
  float fVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  uVar5 = 0;
  if (param_3 == '\0') {
    *param_4 = -1;
    *param_5 = -1;
    uVar6 = uVar5;
    if (*(int *)(param_1 + 0x1a8) < 1) {
      return;
    }
    do {
      lVar7 = *(longlong *)(param_1 + 0x1a0);
      fVar16 = *(float *)(uVar5 + 8 + lVar7);
      iVar8 = (int)uVar6;
      if ((*param_6 <= fVar16) || (*(longlong *)(uVar5 + lVar7) != *param_2)) {
        if ((*param_6 < fVar16) && (*(longlong *)(uVar5 + lVar7) == param_2[1])) {
          *param_5 = iVar8;
          param_5[1] = (int)(fVar16 - *param_6);
          return;
        }
      }
      else {
        *param_4 = iVar8;
        param_4[1] = (int)(fVar16 - *param_6);
      }
      uVar5 = uVar5 + 0x10;
      uVar6 = (ulonglong)(iVar8 + 1U);
      if (*(int *)(param_1 + 0x1a8) <= (int)(iVar8 + 1U)) {
        return;
      }
    } while( true );
  }
  if (*param_2 == 0) {
    *param_4 = -1;
    if (0 < *(int *)(param_1 + 0x1a8)) {
      plVar3 = *(longlong **)(param_1 + 0x1a0);
      uVar6 = uVar5;
      uVar10 = uVar5;
      do {
        if (*plVar3 == param_2[1]) {
          *param_5 = (int)uVar10;
          fVar16 = (float)FUN_1422952b0(param_1,param_4,param_5,(int)param_2[2],0);
          *param_6 = fVar16;
          return;
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar6 = uVar6 + 1;
        plVar3 = plVar3 + 2;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x1a8));
    }
  }
  uVar18 = 0;
  if (param_2[1] == 0) {
    *param_5 = -1;
    iVar8 = *(int *)(param_1 + 0x1a8) + -1;
    if (-1 < iVar8) {
      lVar7 = (longlong)iVar8;
      plVar3 = (longlong *)(lVar7 * 0x10 + *(longlong *)(param_1 + 0x1a0));
      do {
        if (*plVar3 == *param_2) {
          *param_4 = iVar8;
          fVar16 = (float)FUN_1422952b0(param_1,param_4,param_5,(int)param_2[2],0);
          *param_6 = fVar16;
          return;
        }
        iVar8 = iVar8 + -1;
        plVar3 = plVar3 + -2;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  iVar8 = *(int *)(param_1 + 0x1a8);
  fVar17 = 3.4028235e+38;
  fVar16 = *param_6;
  if (iVar8 < 1) {
    return;
  }
  iVar13 = 1;
  uVar6 = uVar5;
  do {
    lVar7 = *(longlong *)(param_1 + 0x1a0);
    iVar12 = (int)uVar5;
    if (*(longlong *)(uVar6 + lVar7) == *param_2) {
      if (iVar13 < iVar13 + iVar8) {
        iVar4 = iVar13;
        do {
          iVar9 = iVar4 % iVar8;
          if (*(longlong *)(lVar7 + (longlong)iVar9 * 0x10) == param_2[1]) {
            fVar15 = *(float *)(uVar6 + 8 + lVar7);
            fVar2 = *(float *)(param_1 + 0x90);
            fVar14 = *(float *)(lVar7 + 8 + (longlong)iVar9 * 0x10);
            if (fVar14 < fVar15) {
              fVar14 = fVar14 + fVar2;
            }
            fVar15 = (fVar14 - fVar15) * *(float *)(param_2 + 2) + fVar15;
            if (fVar2 < fVar15) {
              fVar15 = fVar15 - fVar2;
            }
            if (ABS(fVar15 - fVar16) < fVar17) {
              *param_4 = iVar12;
              *param_5 = iVar9;
              fVar17 = (float)FUN_1422952b0(param_1,param_4,param_5,(int)param_2[2],uVar18);
              *param_6 = fVar17;
              fVar17 = ABS(fVar15 - fVar16);
            }
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar13 + iVar8);
      }
      if (*param_4 == -2) {
        iVar12 = iVar12 + 1;
        if (*param_6 - *(float *)(uVar6 + 8 + lVar7) <= 0.0) goto LAB_14229580c;
        lVar7 = (longlong)iVar12;
        lVar11 = lVar7 << 4;
        break;
      }
    }
    iVar8 = *(int *)(param_1 + 0x1a8);
    uVar5 = (ulonglong)(iVar12 + 1U);
    iVar13 = iVar13 + 1;
    uVar6 = uVar6 + 0x10;
    if (iVar8 <= (int)(iVar12 + 1U)) {
      return;
    }
  } while( true );
  while( true ) {
    iVar12 = iVar12 + 1;
    lVar7 = lVar7 + 1;
    lVar1 = lVar11 + 8;
    lVar11 = lVar11 + 0x10;
    if (*param_6 - *(float *)(lVar1 + *(longlong *)(param_1 + 0x1a0)) <= 0.0) break;
    if (*(int *)(param_1 + 0x1a8) <= lVar7) break;
  }
LAB_14229580c:
  *param_4 = iVar12 + -1;
  *param_5 = -1;
  if (*param_4 == -1) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = *(float *)(*(longlong *)(param_1 + 0x1a0) + 8 + (longlong)*param_4 * 0x10);
  }
  fVar17 = *(float *)(param_1 + 0x90);
  if (fVar17 <= fVar16) {
    fVar16 = fVar16 - fVar17;
  }
  fVar15 = (fVar17 - fVar16) * *(float *)(param_2 + 2) + fVar16;
  if ((0.0 <= fVar15) || (fVar15 = fVar15 + fVar17, 0.0 <= fVar15)) {
    if (fVar17 <= fVar15) {
      fVar15 = fVar17;
    }
  }
  else {
    fVar15 = 0.0;
  }
  param_4[1] = (int)(fVar16 - fVar15);
  param_5[1] = (int)(fVar17 - fVar15);
  *param_6 = fVar15;
  return;
}



// FUNCTION 1422958d0 FUN_1422958d0 body=286 status=ok
// SIG undefined FUN_1422958d0(void)

void FUN_1422958d0(longlong param_1,float param_2,uint param_3,longlong *param_4,int *param_5,
                  int *param_6)

{
  longlong *plVar1;
  float fVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  param_5[1] = (int)-param_2;
  *param_5 = -1;
  iVar4 = (param_3 & 0xff ^ 1) - 1;
  *param_6 = -1;
  param_6[1] = (int)(*(float *)(param_1 + 0x90) - param_2);
  do {
    if ((int)((param_3 & 0xff) + 1) <= iVar4) {
      return;
    }
    iVar5 = 0;
    fVar2 = *(float *)(param_1 + 0x90);
    if (0 < *(int *)(param_1 + 0x1a8)) {
      lVar6 = 0;
      do {
        plVar3 = (longlong *)*param_4;
        plVar1 = plVar3 + (int)param_4[1];
        if (plVar3 != plVar1) {
          do {
            if (*plVar3 == *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x1a0))) {
              fVar7 = (float)iVar4 * fVar2 + *(float *)(lVar6 + 8 + *(longlong *)(param_1 + 0x1a0));
              fVar8 = fVar7 - param_2;
              if (param_2 <= fVar7) {
                param_6[1] = (int)fVar8;
                *param_6 = iVar5;
                goto LAB_1422959c8;
              }
              param_5[1] = (int)fVar8;
              *param_5 = iVar5;
              break;
            }
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar5 < *(int *)(param_1 + 0x1a8));
    }
LAB_1422959c8:
    if (*param_6 != -1) {
      return;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



// FUNCTION 142295ab0 FUN_142295ab0 body=152 status=ok
// SIG undefined FUN_142295ab0(void)

float FUN_142295ab0(longlong param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = 0;
  if (*param_2 != 0) {
    if ((param_2[1] != 0) && (iVar2 = *(int *)(param_1 + 0x1a8) + -1, 0 < iVar2)) {
      plVar1 = *(longlong **)(param_1 + 0x1a0);
      do {
        if ((((*param_3 <= *(float *)(plVar1 + 3)) && (*plVar1 == *param_2)) &&
            (plVar1[2] == param_2[1])) &&
           (fVar4 = (*(float *)(plVar1 + 3) - *(float *)(plVar1 + 1)) * *(float *)(param_2 + 2) +
                    *(float *)(plVar1 + 1), *param_3 <= fVar4)) {
          return fVar4;
        }
        lVar3 = lVar3 + 1;
        plVar1 = plVar1 + 2;
      } while (lVar3 < iVar2);
    }
  }
  return *param_3;
}



// FUNCTION 142295b50 GetNotifyName_Implementation body=255 status=ok
// SIG undefined GetNotifyName_Implementation(void)

longlong * UAnimNotify::GetNotifyName_Implementation(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 200);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar1 == 0) {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  }
  else {
    local_res8 = *(undefined8 *)(lVar1 + 0x18);
  }
  FName::ToString(&local_res8,&local_18);
  if (param_2 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
  }
  plVar2 = (longlong *)FString::Replace(param_2,&local_18,L"AnimNotify_",&DAT_14501c4ec,0);
  if (param_2 != plVar2) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142295c50 GetNotifyName_Implementation body=255 status=ok
// SIG undefined GetNotifyName_Implementation(void)

longlong * UAnimNotifyState::GetNotifyName_Implementation(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 200);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar1 == 0) {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  }
  else {
    local_res8 = *(undefined8 *)(lVar1 + 0x18);
  }
  FName::ToString(&local_res8,&local_18);
  if (param_2 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
  }
  plVar2 = (longlong *)FString::Replace(param_2,&local_18,L"AnimNotifyState_",&DAT_14501c694,0);
  if (param_2 != plVar2) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142295d50 GetNotifyName_Implementation body=293 status=ok
// SIG undefined GetNotifyName_Implementation(void)

longlong *
UAnimNotifyState_TimedParticleEffect::GetNotifyName_Implementation
          (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FName::ToString(&local_res8);
    return param_2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 200);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar1 == 0) {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  }
  else {
    local_res8 = *(undefined8 *)(lVar1 + 0x18);
  }
  FName::ToString(&local_res8,&local_18);
  if (param_2 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
  }
  plVar2 = (longlong *)FString::Replace(param_2,&local_18,L"AnimNotifyState_",&DAT_14501c694,0);
  if (param_2 != plVar2) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142295e80 GetNotifyName_Implementation body=60 status=ok
// SIG undefined GetNotifyName_Implementation(void)

undefined8
UAnimNotify_PlayParticleEffect::GetNotifyName_Implementation(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FName::ToString(local_res8);
    return param_2;
  }
  UAnimNotify::GetNotifyName_Implementation();
  return param_2;
}



// FUNCTION 142295ec0 GetNotifyName_Implementation body=62 status=ok
// SIG undefined GetNotifyName_Implementation(void)

undefined8 *
UAnimNotify_ResetClothingSimulation::GetNotifyName_Implementation
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Reset Clothing Sim",0x26);
  return param_2;
}



// FUNCTION 142295fa0 FUN_142295fa0 body=214 status=ok
// SIG undefined FUN_142295fa0(void)

undefined8 * FUN_142295fa0(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = (**(code **)(*param_1 + 0x2b8))();
  if (*(int *)(lVar5 + 0x18) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined4 *)(param_2 + 3) = 0;
    FVectorCurve::FVectorCurve(param_2 + 4);
    FVectorCurve::FVectorCurve(param_2 + 0x32);
    FVectorCurve::FVectorCurve(param_2 + 0x60);
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
    puVar1 = *(undefined4 **)(lVar5 + 0x10);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    uVar2 = puVar1[5];
    uVar3 = puVar1[6];
    uVar4 = puVar1[7];
    *(undefined4 *)(param_2 + 2) = puVar1[4];
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
    *(undefined4 *)(param_2 + 3) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
    FUN_142255070(param_2 + 4,puVar1 + 8);
    FUN_142255070(param_2 + 0x32,puVar1 + 100);
    FUN_142255070(param_2 + 0x60,puVar1 + 0xc0);
  }
  return param_2;
}



// FUNCTION 142296090 FUN_142296090 body=16 status=ok
// SIG undefined FUN_142296090(void)

longlong FUN_142296090(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x58 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
}



// FUNCTION 1422960a0 FUN_1422960a0 body=435 status=ok
// SIG undefined FUN_1422960a0(void)

float FUN_1422960a0(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x60);
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar4 = 0;
    fVar5 = 0.0;
    if (3 < lVar1) {
      piVar3 = (int *)(*(longlong *)(param_1 + 0x58) + 0x3c);
      piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + 0x1ec);
      do {
        fVar6 = 1.0 - (float)piVar3[-0xe];
        if (lVar4 < 1) {
          if (*piVar3 == param_2) {
            fVar5 = fVar5 + fVar6;
          }
        }
        else {
          fVar5 = fVar5 * fVar6;
        }
        if (piVar3[-1] == param_2) {
          fVar5 = fVar5 + (float)piVar3[-0xe];
        }
        fVar6 = 1.0 - (float)piVar3[0x28];
        if (lVar4 == -1 || lVar4 + 1 < 0) {
          if (piVar3[0x36] == param_2) {
            fVar5 = fVar5 + fVar6;
          }
        }
        else {
          fVar5 = fVar5 * fVar6;
        }
        if (piVar3[0x35] == param_2) {
          fVar5 = fVar5 + (float)piVar3[0x28];
        }
        fVar6 = 1.0 - (float)piVar2[-0xe];
        if (lVar4 < -1) {
          if (*piVar2 == param_2) {
            fVar5 = fVar5 + fVar6;
          }
        }
        else {
          fVar5 = fVar5 * fVar6;
        }
        if (piVar2[-1] == param_2) {
          fVar5 = fVar5 + (float)piVar2[-0xe];
        }
        fVar6 = 1.0 - (float)piVar2[0x28];
        if (lVar4 == -3 || lVar4 + 3 < 0) {
          if (piVar2[0x36] == param_2) {
            fVar5 = fVar5 + fVar6;
          }
        }
        else {
          fVar5 = fVar5 * fVar6;
        }
        if (piVar2[0x35] == param_2) {
          fVar5 = fVar5 + (float)piVar2[0x28];
        }
        lVar4 = lVar4 + 4;
        piVar3 = piVar3 + 0xd8;
        piVar2 = piVar2 + 0xd8;
      } while (lVar4 < lVar1 + -3);
    }
    if (lVar4 < lVar1) {
      piVar3 = (int *)(*(longlong *)(param_1 + 0x58) + 0x3c + lVar4 * 0xd8);
      do {
        fVar6 = 1.0 - (float)piVar3[-0xe];
        if (lVar4 < 1) {
          if (*piVar3 == param_2) {
            fVar5 = fVar5 + fVar6;
          }
        }
        else {
          fVar5 = fVar5 * fVar6;
        }
        if (piVar3[-1] == param_2) {
          fVar5 = fVar5 + (float)piVar3[-0xe];
        }
        lVar4 = lVar4 + 1;
        piVar3 = piVar3 + 0x36;
      } while (lVar4 < lVar1);
    }
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
      fVar6 = 1.0;
    }
    return fVar6;
  }
  if (param_2 != *(int *)(param_1 + 0x48)) {
    return 0.0;
  }
  return 1.0;
}



// FUNCTION 142296260 GetTransitionInfo body=16 status=ok
// SIG undefined GetTransitionInfo(void)

longlong FAnimNode_StateMachine::GetTransitionInfo(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x40 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
}



// FUNCTION 142296270 OnRequestProgress body=8 status=ok
// SIG undefined OnRequestProgress(void)

longlong FHttpRequestWinInet::OnRequestProgress(longlong param_1)

{
  return param_1 + 0x1b0;
}



// FUNCTION 1422962a0 FUN_1422962a0 body=149 status=ok
// SIG undefined FUN_1422962a0(void)

void FUN_1422962a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 local_58 [80];
  
  UAnimSequenceBase::HandleAssetPlayerTickedInternal();
  if (*(char *)(param_1 + 0x199) != '\0') {
    uVar1 = FUN_142291830(param_1,local_58,param_3,param_4,*(undefined1 *)(param_5 + 0x1c),param_6);
    FUN_142245a70(param_2,uVar1);
  }
  return;
}



// FUNCTION 142296340 GetIsGrapplingPressed body=8 status=ok
// SIG undefined GetIsGrapplingPressed(void)

undefined1 UBlockablePlayerInputComponent::GetIsGrapplingPressed(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1c2);
}



// FUNCTION 142296370 FUN_142296370 body=1015 status=ok
// SIG undefined FUN_142296370(void)

void FUN_142296370(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((char)param_1[4] == '\0') {
    if (*param_1 == 0) {
      param_1[3] = 0;
    }
    else if (param_1[3] == 0) {
      lVar5 = UObject::FindFunction(param_3,*param_1);
      param_1[3] = lVar5;
    }
    plVar2 = (longlong *)param_1[1];
    lVar5 = param_1[2];
    if (plVar2 != plVar2 + (longlong)(int)lVar5 * 0xd) {
      plVar8 = plVar2 + 2;
      do {
        lVar6 = plVar8[5];
        if (lVar6 == 0) {
          lVar6 = UStruct::FindPropertyByName(*(undefined8 *)(param_3 + 0x10),plVar8[-1]);
          plVar8[5] = lVar6;
          if (lVar6 != 0) goto LAB_142296412;
LAB_14229644c:
          lVar6 = plVar8[5];
          if (*plVar8 == 0) {
            plVar8[9] = (longlong)*(int *)(lVar6 + 0x44) +
                        (int)plVar8[1] * *(int *)(lVar6 + 0x34) + param_3;
            iVar4 = *(int *)(lVar6 + 0x34) * *(int *)(lVar6 + 0x30);
            plVar8[7] = param_3;
          }
          else {
            lVar7 = plVar8[6];
            lVar9 = *(int *)(lVar6 + 0x44) + param_3;
            if (lVar7 == 0) {
              lVar7 = UStruct::FindPropertyByName(*(undefined8 *)(lVar6 + 0x70),*plVar8);
              plVar8[6] = lVar7;
            }
            plVar8[9] = (longlong)*(int *)(lVar7 + 0x44) +
                        (int)plVar8[1] * *(int *)(lVar7 + 0x34) + lVar9;
            iVar4 = *(int *)(lVar7 + 0x34) * *(int *)(lVar7 + 0x30);
            plVar8[7] = lVar9;
          }
          *(int *)((longlong)plVar8 + 0x1c) = iVar4;
        }
        else {
LAB_142296412:
          lVar7 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14229644c;
        }
        lVar6 = plVar8[2];
        if (lVar6 == 0) {
LAB_1422965f0:
          lVar6 = plVar8[2];
          if (lVar6 != 0) {
            iVar4 = (int)plVar8[3];
            plVar8[10] = (longlong)*(int *)(lVar6 + 0x44) + *(int *)(lVar6 + 0x34) * iVar4 + param_2
            ;
            if ((char)plVar8[4] == '\0') {
              plVar8[8] = param_2;
            }
            else {
              if (*(longlong *)(lVar6 + 0x20) != *(longlong *)(param_3 + 0x10)) {
                lVar6 = UStruct::FindPropertyByName
                                  (*(longlong *)(param_3 + 0x10),*(undefined8 *)(lVar6 + 0x18));
                iVar4 = (int)plVar8[3];
                plVar8[2] = lVar6;
              }
              plVar8[8] = param_3;
              plVar8[10] = (longlong)*(int *)(lVar6 + 0x44) +
                           *(int *)(lVar6 + 0x34) * iVar4 + param_3;
            }
            if (lVar6 != 0) {
              lVar7 = UBoolProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                *(undefined1 *)((longlong)plVar8 + 0x22) = 1;
                goto LAB_14229672f;
              }
            }
            lVar6 = plVar8[2];
            if (lVar6 != 0) {
              lVar7 = UStructProperty::GetPrivateStaticClass();
              lVar6 = *(longlong *)(lVar6 + 0x10);
              if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
                  != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                *(undefined1 *)((longlong)plVar8 + 0x22) = 2;
                goto LAB_14229672f;
              }
            }
            lVar6 = plVar8[2];
            if (lVar6 != 0) {
              lVar7 = UObjectPropertyBase::GetPrivateStaticClass();
              lVar6 = *(longlong *)(lVar6 + 0x10);
              if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
                  != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                *(undefined1 *)((longlong)plVar8 + 0x22) = 3;
                goto LAB_14229672f;
              }
            }
            *(undefined1 *)((longlong)plVar8 + 0x22) = 0;
          }
        }
        else {
          lVar7 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1422965f0;
          lVar7 = 0;
          if (*(int *)((longlong)*(int *)(plVar8[2] + 0x44) + 8 + param_2) != 0) {
            lVar7 = (longlong)((int)plVar8[3] * *(int *)(*(longlong *)(lVar6 + 0x70) + 0x34)) +
                    *(longlong *)(*(int *)(plVar8[2] + 0x44) + param_2);
          }
          plVar8[10] = lVar7;
          lVar7 = param_3;
          if ((char)plVar8[4] == '\0') {
            lVar7 = param_2;
          }
          plVar8[8] = lVar7;
          lVar7 = plVar8[6];
          if ((lVar7 != 0) || (lVar7 = plVar8[5], lVar7 != 0)) {
            lVar9 = UBoolProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (lVar6 = *(longlong *)(lVar6 + 0x70), lVar6 != 0)) {
              lVar7 = UBoolProperty::GetPrivateStaticClass();
              lVar6 = *(longlong *)(lVar6 + 0x10);
              if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
                  != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                *(undefined1 *)((longlong)plVar8 + 0x22) = 4;
              }
            }
          }
        }
LAB_14229672f:
        plVar1 = plVar8 + 0xb;
        plVar8 = plVar8 + 0xd;
      } while (plVar1 != plVar2 + (longlong)(int)lVar5 * 0xd);
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



// FUNCTION 142296770 FUN_142296770 body=121 status=ok
// SIG undefined FUN_142296770(void)

void FUN_142296770(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = *param_1 + 0x3a0;
  param_1[3] = lVar3;
  iVar1 = *(int *)(*param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) < iVar1) {
    FUN_140848c80(param_1 + 1,iVar1);
    iVar2 = (int)param_1[2];
  }
  *(int *)(param_1 + 2) = iVar2 + iVar1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar2 + iVar1) {
    TArray<FTransform,TMemStackAllocator<0>_>::ResizeGrow(param_1 + 1);
  }
  FBaseBlendedCurve<TMemStackAllocator<0>_>::InitFrom(param_1 + 4,lVar3);
  return;
}



// FUNCTION 1422967f0 Initialize body=164 status=ok
// SIG undefined Initialize(void)

void FPoseLinkBase::Initialize(int *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 2);
  if ((puVar4 == (undefined8 *)0x0) && (iVar1 = *param_1, iVar1 != -1)) {
    plVar3 = (longlong *)0x0;
    if (*param_2 != 0) {
      plVar3 = *(longlong **)(*param_2 + 0xa8);
    }
    lVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if ((iVar1 < 0) || (*(int *)(lVar2 + 8) <= iVar1)) {
      puVar4 = *(undefined8 **)(param_1 + 2);
    }
    else {
      iVar1 = *param_1;
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
      puVar4 = (undefined8 *)
               (*(longlong *)(*param_2 + 0xa0) +
               (longlong)*(int *)(*(longlong *)(*plVar3 + (longlong)iVar1 * 8) + 0x44));
      *(undefined8 **)(param_1 + 2) = puVar4;
    }
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014229688a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,param_2);
  return;
}



// FUNCTION 1422968a0 FUN_1422968a0 body=1487 status=ok
// SIG undefined FUN_1422968a0(void)

void FUN_1422968a0(float param_1,undefined8 *param_2,float *param_3)

{
  float *pfVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
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
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [7];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar10 = 0.7;
  param_2[0x2a] = *param_2;
  *(undefined4 *)(param_2 + 0x2b) = *(undefined4 *)(param_2 + 1);
  param_2[0x2c] = param_2[2];
  param_2[0x2d] = param_2[3];
  if (*(char *)((longlong)param_2 + 0x144) == '\0') {
    fVar5 = 0.7;
  }
  else {
    fVar5 = *(float *)(param_2 + 0x29);
  }
  if (*(char *)((longlong)param_2 + 0x13c) != '\0') {
    fVar10 = *(float *)(param_2 + 0x28);
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(1.0 - fVar5,param_1);
  fVar10 = _guard_xfg_dispatch_icall_nop(1.0 - fVar10,param_1);
  *(float *)(param_2 + 4) = fVar5 * *(float *)(param_2 + 4);
  *(float *)((longlong)param_2 + 0x24) = fVar5 * *(float *)((longlong)param_2 + 0x24);
  *(float *)(param_2 + 5) = fVar5 * *(float *)(param_2 + 5);
  *(float *)(param_2 + 6) = fVar10 * *(float *)(param_2 + 6);
  *(float *)((longlong)param_2 + 0x2c) = fVar10 * *(float *)((longlong)param_2 + 0x2c);
  *(float *)((longlong)param_2 + 0x34) = fVar10 * *(float *)((longlong)param_2 + 0x34);
  plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  fVar6 = ABS(*(float *)(lVar4 + 0x38));
  fVar10 = *(float *)(param_2 + 7);
  fVar5 = *(float *)((longlong)param_2 + 0x14c);
  fVar9 = fVar6 * *param_3 * fVar10 * fVar5;
  fVar11 = fVar6 * param_3[1] * fVar10 * fVar5;
  fVar5 = fVar6 * param_3[2] * fVar10 * fVar5;
  if (*(char *)(param_2 + 0x24) != '\0') {
    fVar10 = *(float *)(param_2 + 0x25);
    fVar6 = *(float *)((longlong)param_2 + 0x124);
    fVar8 = fVar10 * *(float *)(param_2 + 0x26) * 250.0 * fVar6;
    fVar7 = fVar10 * *(float *)((longlong)param_2 + 0x134) * 250.0 * fVar6;
    fVar6 = fVar10 * *(float *)((longlong)param_2 + 300) * 250.0 * fVar6;
    if (1e-08 < fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) {
      fVar10 = *(float *)(param_2 + 0x27);
      fVar9 = fVar6 * fVar10 + fVar9;
      fVar11 = fVar8 * fVar10 + fVar11;
      fVar5 = fVar7 * fVar10 + fVar5;
    }
  }
  *(float *)(param_2 + 5) = fVar5 * param_1 + *(float *)(param_2 + 5);
  *(float *)(param_2 + 4) = fVar9 * param_1 + *(float *)(param_2 + 4);
  *(float *)((longlong)param_2 + 0x24) = fVar11 * param_1 + *(float *)((longlong)param_2 + 0x24);
  FQuatRotationMatrix::Make(&local_138,param_2 + 2);
  fVar10 = *(float *)((longlong)param_2 + 0x3c);
  afStack_fc[1] = local_138;
  afStack_fc[2] = local_128;
  afStack_fc[3] = local_118;
  afStack_fc[4] = local_108;
  lVar4 = 4;
  afStack_fc[5] = fStack_134;
  afStack_fc[6] = fStack_124;
  fStack_e0 = fStack_114;
  fStack_dc = fStack_104;
  local_d8 = fStack_130;
  fStack_d4 = fStack_120;
  fStack_d0 = fStack_110;
  fStack_cc = fStack_100;
  local_c8 = fStack_12c;
  fStack_c4 = fStack_11c;
  fStack_c0 = fStack_10c;
  fStack_bc = afStack_fc[0];
  pfVar3 = (float *)((longlong)param_2 + 0x44);
  do {
    pfVar1 = pfVar3 + 4;
    fVar5 = *pfVar3;
    *(float *)(((longlong)&fStack_10c - (longlong)param_2) + (longlong)pfVar1) = fVar10 * pfVar3[-1]
    ;
    fVar6 = pfVar3[1];
    *(float *)(((longlong)&local_108 - (longlong)param_2) + (longlong)pfVar1) = fVar10 * fVar5;
    fVar5 = pfVar3[2];
    *(float *)(((longlong)&fStack_104 - (longlong)param_2) + (longlong)pfVar1) = fVar10 * fVar6;
    *(float *)(((longlong)&fStack_100 - (longlong)param_2) + (longlong)pfVar1) = fVar10 * fVar5;
    lVar4 = lVar4 + -1;
    pfVar3 = pfVar1;
  } while (lVar4 != 0);
  fVar10 = fStack_134 * local_a8 + local_138 * local_b8 + fStack_130 * local_98 +
           fStack_12c * local_88;
  fVar5 = fStack_134 * fStack_a4 + local_138 * fStack_b4 + fStack_130 * fStack_94 +
          fStack_12c * fStack_84;
  fVar6 = fStack_134 * fStack_a0 + local_138 * fStack_b0 + fStack_130 * fStack_90 +
          fStack_12c * fStack_80;
  fVar9 = fStack_134 * fStack_9c + local_138 * fStack_ac + fStack_130 * fStack_8c +
          fStack_12c * fStack_7c;
  fVar17 = fStack_124 * local_a8 + local_128 * local_b8 + fStack_120 * local_98 +
           fStack_11c * local_88;
  fVar18 = fStack_124 * fStack_a4 + local_128 * fStack_b4 + fStack_120 * fStack_94 +
           fStack_11c * fStack_84;
  fVar19 = fStack_124 * fStack_a0 + local_128 * fStack_b0 + fStack_120 * fStack_90 +
           fStack_11c * fStack_80;
  fVar20 = fStack_124 * fStack_9c + local_128 * fStack_ac + fStack_120 * fStack_8c +
           fStack_11c * fStack_7c;
  fVar13 = fStack_114 * local_a8 + local_118 * local_b8 + fStack_110 * local_98 +
           fStack_10c * local_88;
  fVar14 = fStack_114 * fStack_a4 + local_118 * fStack_b4 + fStack_110 * fStack_94 +
           fStack_10c * fStack_84;
  fVar15 = fStack_114 * fStack_a0 + local_118 * fStack_b0 + fStack_110 * fStack_90 +
           fStack_10c * fStack_80;
  fVar16 = fStack_114 * fStack_9c + local_118 * fStack_ac + fStack_110 * fStack_8c +
           fStack_10c * fStack_7c;
  fVar11 = fStack_104 * local_a8 + local_108 * local_b8 + fStack_100 * local_98 +
           afStack_fc[0] * local_88;
  fVar7 = fStack_104 * fStack_a4 + local_108 * fStack_b4 + fStack_100 * fStack_94 +
          afStack_fc[0] * fStack_84;
  fVar8 = fStack_104 * fStack_a0 + local_108 * fStack_b0 + fStack_100 * fStack_90 +
          afStack_fc[0] * fStack_80;
  fVar12 = fStack_104 * fStack_9c + local_108 * fStack_ac + fStack_100 * fStack_8c +
           afStack_fc[0] * fStack_7c;
  *(float *)(param_2 + 0x10) =
       fVar10 * afStack_fc[1] + fVar5 * afStack_fc[5] + fVar6 * local_d8 + fVar9 * local_c8;
  *(float *)((longlong)param_2 + 0x84) =
       fVar10 * afStack_fc[2] + fVar5 * afStack_fc[6] + fVar6 * fStack_d4 + fVar9 * fStack_c4;
  *(float *)(param_2 + 0x11) =
       fVar10 * afStack_fc[3] + fVar5 * fStack_e0 + fVar6 * fStack_d0 + fVar9 * fStack_c0;
  *(float *)((longlong)param_2 + 0x8c) =
       fVar10 * afStack_fc[4] + fVar5 * fStack_dc + fVar6 * fStack_cc + fVar9 * fStack_bc;
  *(float *)(param_2 + 0x12) =
       fVar18 * afStack_fc[5] + fVar17 * afStack_fc[1] + fVar19 * local_d8 + fVar20 * local_c8;
  *(float *)((longlong)param_2 + 0x94) =
       fVar18 * afStack_fc[6] + fVar17 * afStack_fc[2] + fVar19 * fStack_d4 + fVar20 * fStack_c4;
  *(float *)(param_2 + 0x13) =
       fVar18 * fStack_e0 + fVar17 * afStack_fc[3] + fVar19 * fStack_d0 + fVar20 * fStack_c0;
  *(float *)((longlong)param_2 + 0x9c) =
       fVar18 * fStack_dc + fVar17 * afStack_fc[4] + fVar19 * fStack_cc + fVar20 * fStack_bc;
  *(float *)(param_2 + 0x14) =
       fVar14 * afStack_fc[5] + fVar13 * afStack_fc[1] + fVar15 * local_d8 + fVar16 * local_c8;
  *(float *)((longlong)param_2 + 0xa4) =
       fVar14 * afStack_fc[6] + fVar13 * afStack_fc[2] + fVar15 * fStack_d4 + fVar16 * fStack_c4;
  *(float *)(param_2 + 0x15) =
       fVar14 * fStack_e0 + fVar13 * afStack_fc[3] + fVar15 * fStack_d0 + fVar16 * fStack_c0;
  *(float *)((longlong)param_2 + 0xac) =
       fVar14 * fStack_dc + fVar13 * afStack_fc[4] + fVar15 * fStack_cc + fVar16 * fStack_bc;
  *(float *)(param_2 + 0x16) =
       fVar7 * afStack_fc[5] + fVar11 * afStack_fc[1] + fVar8 * local_d8 + fVar12 * local_c8;
  *(float *)((longlong)param_2 + 0xb4) =
       fVar7 * afStack_fc[6] + fVar11 * afStack_fc[2] + fVar8 * fStack_d4 + fVar12 * fStack_c4;
  *(float *)(param_2 + 0x17) =
       fVar7 * fStack_e0 + fVar11 * afStack_fc[3] + fVar8 * fStack_d0 + fVar12 * fStack_c0;
  *(float *)((longlong)param_2 + 0xbc) =
       fVar7 * fStack_dc + fVar11 * afStack_fc[4] + fVar8 * fStack_cc + fVar12 * fStack_bc;
  return;
}



// FUNCTION 142296e70 FUN_142296e70 body=509 status=ok
// SIG undefined FUN_142296e70(void)

void FUN_142296e70(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(int *)(param_3 + 4) != -1) {
    plVar6 = (longlong *)0x0;
    if (*param_2 != 0) {
      plVar6 = *(longlong **)(*param_2 + 0xa8);
    }
    if (plVar6 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
      *(int *)(param_1 + 0x20) = (*(int *)(lVar3 + 8) - *(int *)(param_3 + 4)) + -1;
      FPoseLinkBase::Initialize();
      if ((*param_2 != 0) && (iVar7 = 0, 0 < *(int *)(param_3 + 0x18))) {
        lVar3 = 0;
        do {
          lVar8 = *(longlong *)(*param_2 + 0xa0);
          iVar2 = *(int *)(lVar3 + *(longlong *)(param_3 + 0x10));
          if (iVar2 == -1) {
            lVar8 = 0;
          }
          else {
            lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
            iVar1 = *(int *)(lVar4 + 8);
            plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
            lVar8 = *(int *)(*(longlong *)(*plVar5 + -8 + (longlong)(iVar1 - iVar2) * 8) + 0x44) +
                    lVar8;
          }
          iVar2 = *(int *)(param_1 + 0x58);
          iVar1 = iVar2 + 1;
          *(int *)(param_1 + 0x58) = iVar1;
          if (*(int *)(param_1 + 0x5c) < iVar1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      ((longlong *)(param_1 + 0x50));
          }
          iVar7 = iVar7 + 1;
          lVar3 = lVar3 + 4;
          *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 8) = lVar8;
        } while (iVar7 < *(int *)(param_3 + 0x18));
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    iVar7 = *(int *)(param_1 + 0x68);
    plVar6 = (longlong *)(param_1 + 0x60);
    iVar2 = iVar7 + 2;
    *(int *)(param_1 + 0x68) = iVar2;
    if (*(int *)(param_1 + 0x6c) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar6);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x40 + *plVar6),0,0x80);
    lVar3 = *plVar6;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x40);
    iVar2 = *(int *)(lVar3 + 0x38);
    iVar1 = iVar2 + iVar7;
    *(int *)(lVar3 + 0x38) = iVar1;
    if (*(int *)(lVar3 + 0x3c) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar3 + 0x30);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 4),0,(longlong)iVar7 << 2);
    lVar3 = *plVar6;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x40);
    iVar2 = *(int *)(lVar3 + 0x78);
    iVar1 = iVar2 + iVar7;
    *(int *)(lVar3 + 0x78) = iVar1;
    if (*(int *)(lVar3 + 0x7c) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar3 + 0x70);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 4),0,(longlong)iVar7 << 2);
  }
  return;
}



// FUNCTION 142297070 FUN_142297070 body=59 status=ok
// SIG undefined FUN_142297070(void)

void FUN_142297070(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x80))();
  FPoseLinkBase::Initialize(param_1 + 6,param_2);
  FPoseLinkBase::Initialize(param_1 + 9,param_2);
  return;
}



// FUNCTION 1422970b0 FUN_1422970b0 body=42 status=ok
// SIG undefined FUN_1422970b0(void)

void FUN_1422970b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x80))();
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  return;
}



// FUNCTION 1422970e0 ReadLocalVoiceData body=10 status=ok
// SIG undefined ReadLocalVoiceData(void)

void IVoiceEngine::ReadLocalVoiceData(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001422970e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}



// FUNCTION 142297100 FUN_142297100 body=209 status=ok
// SIG undefined FUN_142297100(void)

void FUN_142297100(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  
  if ((((short)param_1[0x15] != -1) && (param_1[0x14] != -1)) &&
     (lVar1 = *param_2, (short)param_1[0x15] == *(short *)(lVar1 + 0x310))) {
    if ((short)param_1[0x19] == -1) {
      return;
    }
    if (param_1[0x18] == -1) {
      return;
    }
    if ((short)param_1[0x19] == *(short *)(lVar1 + 0x330)) {
      return;
    }
    sVar2 = (short)(int)param_1[0x19] + 1;
    if (sVar2 == -1) {
      sVar2 = 0;
    }
    if ((DAT_1468c21b0 != -1) && (sVar2 == *(short *)(lVar1 + 0x330))) {
      return;
    }
  }
  lVar1 = *param_2;
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(lVar1 + 0x310);
  param_1[0x14] = *(longlong *)(lVar1 + 0x308);
  *(undefined2 *)((longlong)param_1 + 0xaa) = *(undefined2 *)(lVar1 + 0x312);
  (**(code **)(*param_1 + 0x80))(param_1);
  FPoseLinkBase::Initialize(param_1 + 6,param_2);
  return;
}



// FUNCTION 1422971e0 FUN_1422971e0 body=418 status=ok
// SIG undefined FUN_1422971e0(void)

void FUN_1422971e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  (**(code **)(*param_1 + 0x80))();
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_142286930(param_1,param_1 + 0xd,param_2);
  if ((((char)param_1[0x1c] != '\0') && (*param_2 != 0)) &&
     (plVar1 = *(longlong **)(*param_2 + 0xb8), plVar1 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar1 + 0xaa8))(plVar1,param_1[0xd]);
    *(undefined4 *)(param_1 + 0x17) = uVar3;
  }
  if ((*(char *)((longlong)param_1 + 0xe1) != '\0') && (param_1[0xd] != 0)) {
    fVar5 = *(float *)(param_1[0xd] + 0x90);
    iVar2 = rand();
    *(float *)(param_1 + 0x17) = (float)iVar2 * 3.051851e-05 * fVar5;
  }
  fVar5 = *(float *)(param_1 + 0x1d);
  fVar4 = *(float *)((longlong)param_1 + 0xe4);
  iVar2 = rand();
  *(float *)(param_1 + 0xf) = (float)iVar2 * 3.051851e-05 * (fVar5 - fVar4) + fVar4;
  FUN_142290d80(param_1 + 1,param_2);
  fVar5 = *(float *)(param_1 + 0x17);
  *(float *)(param_1 + 8) = fVar5;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  if (param_1[0xd] != 0) {
    if (0.0 <= fVar5) {
      fVar4 = *(float *)(param_1[0xd] + 0x90);
      if (fVar5 <= fVar4) {
        fVar4 = fVar5;
      }
    }
    else {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 8) = fVar4;
    if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x74))) {
      fVar5 = *(float *)(param_1 + 0xf) / *(float *)((longlong)param_1 + 0x74);
    }
    else {
      fVar5 = 0.0;
    }
    fVar5 = (float)FInputScaleBiasClamp::ApplyTo((longlong)param_1 + 0x7c,fVar5,0);
    if ((*(float *)(param_1 + 0x17) == 0.0) && (fVar5 * *(float *)(param_1[0xd] + 0x94) < 0.0)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1[0xd] + 0x90);
    }
  }
  return;
}



// FUNCTION 142297390 FUN_142297390 body=779 status=ok
// SIG undefined FUN_142297390(void)

void FUN_142297390(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  longlong *plVar13;
  longlong *plVar14;
  int *piVar15;
  int local_res10;
  int *piVar12;
  
  (**(code **)(*param_1 + 0x80))();
  plVar13 = (longlong *)0x0;
  plVar14 = plVar13;
  if (*param_2 != 0) {
    plVar14 = *(longlong **)(*param_2 + 0xa8);
  }
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    iVar9 = (int)param_1[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    if ((iVar9 != -1) && (iVar9 < (int)param_1[0x14])) {
      TBaseDelegate<void,FAnimNode_StateMachine_const_&,int,int>::ExecuteIfBound
                ((longlong)iVar9 * 0x10 + param_1[0x13],param_1,(longlong)iVar9,0xffffffff);
    }
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    if (0 < *(int *)(lVar3 + 0x18)) {
      plVar1 = param_1 + 0xd;
      *(undefined4 *)(param_1 + 0xe) = 0;
      if (*(int *)((longlong)param_1 + 0x74) < 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,0);
      }
      iVar9 = *(int *)(lVar3 + 0x18);
      if (*(int *)((longlong)param_1 + 0x74) < iVar9) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,iVar9);
        iVar9 = *(int *)(lVar3 + 0x18);
      }
      local_res10 = 0;
      if (0 < iVar9) {
        do {
          piVar12 = (int *)0x0;
          iVar9 = (int)param_1[0xe];
          lVar4 = *(longlong *)(lVar3 + 0x10);
          *(int *)(param_1 + 0xe) = iVar9 + 1;
          if (*(int *)((longlong)param_1 + 0x74) < iVar9 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar1,iVar9);
          }
          piVar15 = (int *)(*plVar1 + (longlong)iVar9 * 0x18);
          piVar10 = piVar12;
          if (piVar15 != (int *)0x0) {
            piVar15[0] = 0;
            piVar15[1] = 0;
            piVar15[2] = 0;
            piVar15[3] = 0;
            piVar15[4] = 0;
            piVar15[5] = 0;
            *piVar15 = -1;
            piVar10 = piVar15;
          }
          if (*(int *)((longlong)plVar13 + lVar4 + 0x18) != -1) {
            lVar5 = (**(code **)(*plVar14 + 0x20))(plVar14);
            *piVar10 = (*(int *)(lVar5 + 8) - *(int *)((longlong)plVar13 + lVar4 + 0x18)) + -1;
          }
          if ((*(int *)((longlong)plVar13 + lVar4 + 0x2c) != -1) &&
             (puVar6 = (undefined8 *)
                       GetNodeFromPropertyIndex<FAnimNode_TransitionResult>
                                 (*(undefined8 *)(*param_2 + 0xa0),plVar14),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)(puVar6,param_2);
          }
          piVar15 = piVar12;
          if (0 < *(int *)((longlong)plVar13 + lVar4 + 0x10)) {
            do {
              iVar9 = *(int *)((longlong)piVar15 + *(longlong *)((longlong)plVar13 + lVar4 + 8));
              if (iVar9 != -1) {
                lVar5 = *(longlong *)(*param_2 + 0xa0);
                lVar7 = (**(code **)(*plVar14 + 0x20))(plVar14);
                iVar2 = *(int *)(lVar7 + 8);
                plVar8 = (longlong *)(**(code **)(*plVar14 + 0x20))();
                puVar6 = (undefined8 *)
                         (*(int *)(*(longlong *)(*plVar8 + -8 + (longlong)(iVar2 - iVar9) * 8) +
                                  0x44) + lVar5);
                if (puVar6 != (undefined8 *)0x0) {
                  (**(code **)*puVar6)(puVar6,param_2);
                }
              }
              uVar11 = (int)piVar12 + 1;
              piVar12 = (int *)(ulonglong)uVar11;
              piVar15 = piVar15 + 8;
            } while ((int)uVar11 < *(int *)((longlong)plVar13 + lVar4 + 0x10));
          }
          plVar13 = plVar13 + 0xb;
          local_res10 = local_res10 + 1;
        } while (local_res10 < *(int *)(lVar3 + 0x18));
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      if ((*(int *)((longlong)param_1 + 0x84) < 0) && (*(int *)((longlong)param_1 + 0x84) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
      }
      FUN_14229ab00(param_1 + 0xb,0);
      iVar9 = *(int *)(lVar3 + 0x18);
      plVar14 = param_1 + 0x1a;
      *(undefined4 *)(param_1 + 0x1b) = 0;
      if (*(int *)((longlong)param_1 + 0xdc) < iVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar14);
      }
      iVar9 = *(int *)(lVar3 + 0x18);
      iVar2 = (int)param_1[0x1b];
      *(int *)(param_1 + 0x1b) = iVar2 + iVar9;
      if (*(int *)((longlong)param_1 + 0xdc) < iVar2 + iVar9) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar14);
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar6 = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 1) = 0xffff;
        puVar6 = puVar6 + 2;
      }
      FUN_14229b960(param_1,param_2,*(undefined4 *)(lVar3 + 8),0);
      FUN_14229c0d0(param_1,*param_2,lVar3);
      *(undefined1 *)(param_1 + 0x15) = 1;
    }
  }
  return;
}



// FUNCTION 1422976b0 FUN_1422976b0 body=47 status=ok
// SIG undefined FUN_1422976b0(void)

void FUN_1422976b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x80))();
  FPoseLinkBase::Initialize(param_1 + 6,param_2);
  return;
}



// FUNCTION 1422976e0 FUN_1422976e0 body=65 status=ok
// SIG undefined FUN_1422976e0(void)

void FUN_1422976e0(longlong *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x80))();
  if (*(char *)((longlong)param_1 + 0x31) == '\x01') {
    *(undefined4 *)(param_1 + 0xe) = 1;
    return;
  }
  if (*(char *)((longlong)param_1 + 0x31) == '\x02') {
    uVar1 = 1;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0xe) = uVar1;
  }
  return;
}



// FUNCTION 142297730 FUN_142297730 body=51 status=ok
// SIG undefined FUN_142297730(void)

undefined1 FUN_142297730(longlong param_1)

{
  if (((*(int *)(param_1 + 0x128) < 1) && (*(int *)(param_1 + 0xe8) != 0)) &&
     ((*(char *)(param_1 + 0xf0) != '\x06' ||
      ((*(char *)(param_1 + 0xf1) != '\x06' || (*(char *)(param_1 + 0xf2) != '\x06')))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 142297770 FUN_142297770 body=129 status=ok
// SIG undefined FUN_142297770(void)

undefined8 FUN_142297770(longlong *param_1,longlong param_2)

{
  int iVar1;
  float extraout_XMM0_Da;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))();
  (**(code **)(*param_1 + 0xe8))(param_1);
  if ((((DAT_146aef0d0 == 0) || ((extraout_XMM0_Da == 0.0 && (iVar1 == -1)))) &&
      (extraout_XMM0_Da * extraout_XMM0_Da < *(float *)(param_2 + 0x6b4) ||
       extraout_XMM0_Da * extraout_XMM0_Da == *(float *)(param_2 + 0x6b4))) &&
     ((iVar1 == -1 || (*(int *)(param_2 + 0x4c8) <= iVar1)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142297850 FUN_142297850 body=24 status=ok
// SIG undefined FUN_142297850(void)

longlong FUN_142297850(longlong param_1,int param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x18))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142297870 IsValidTransitionIndex body=19 status=ok
// SIG undefined IsValidTransitionIndex(void)

ulonglong FAnimNode_StateMachine::IsValidTransitionIndex(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  
  if ((-1 < param_2) && (in_RAX = *(ulonglong *)(param_1 + 0x40), param_2 < *(int *)(in_RAX + 0x28))
     ) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142297890 FUN_142297890 body=615 status=ok
// SIG undefined FUN_142297890(void)

void FUN_142297890(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(float *)(param_1 + 4) != -3.4028235e+38) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(lVar2 + 0x2c);
      fVar4 = *(float *)(lVar2 + 0x30);
      fVar3 = *(float *)(lVar2 + 0x34);
      fVar6 = (*(float *)(lVar2 + 0xb4) * 0.0 + fVar3 * *(float *)(lVar2 + 0xa4) +
              fVar4 * *(float *)(lVar2 + 0x94) + fVar6 * *(float *)(lVar2 + 0x84)) *
              *(float *)((longlong)param_1 + 0x14) +
              (*(float *)(lVar2 + 0xb0) * 0.0 + fVar3 * *(float *)(lVar2 + 0xa0) +
              fVar4 * *(float *)(lVar2 + 0x90) + fVar6 * *(float *)(lVar2 + 0x80)) *
              *(float *)(param_1 + 2) +
              (*(float *)(lVar2 + 0xb8) * 0.0 + fVar3 * *(float *)(lVar2 + 0xa8) +
              fVar4 * *(float *)(lVar2 + 0x98) + fVar6 * *(float *)(lVar2 + 0x88)) *
              *(float *)(param_1 + 3);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(lVar1 + 0x2c);
      fVar3 = *(float *)(lVar1 + 0x30);
      fVar5 = *(float *)(lVar1 + 0x34);
      fVar4 = (*(float *)(lVar1 + 0xb4) * 0.0 + fVar5 * *(float *)(lVar1 + 0xa4) +
              fVar3 * *(float *)(lVar1 + 0x94) + fVar4 * *(float *)(lVar1 + 0x84)) *
              *(float *)((longlong)param_1 + 0x14) +
              (*(float *)(lVar1 + 0xb0) * 0.0 + fVar5 * *(float *)(lVar1 + 0xa0) +
              fVar3 * *(float *)(lVar1 + 0x90) + fVar4 * *(float *)(lVar1 + 0x80)) *
              *(float *)(param_1 + 2) +
              (*(float *)(lVar1 + 0xb8) * 0.0 + fVar5 * *(float *)(lVar1 + 0xa8) +
              fVar3 * *(float *)(lVar1 + 0x98) + fVar4 * *(float *)(lVar1 + 0x88)) *
              *(float *)(param_1 + 3);
    }
    fVar3 = param_2 * *(float *)(param_1 + 5) - *(float *)((longlong)param_1 + 0x1c);
    fVar5 = param_2 * *(float *)((longlong)param_1 + 0x24) - *(float *)((longlong)param_1 + 0x1c);
    fVar6 = (*(float *)(param_1 + 4) - (fVar6 - fVar4)) * *(float *)((longlong)param_1 + 0x2c);
    if (fVar3 <= fVar6) {
      fVar6 = fVar3;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    if (lVar1 != 0) {
      fVar4 = *(float *)((longlong)param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 3);
      *(float *)(lVar1 + 0x2c) = *(float *)(lVar1 + 0x2c) - fVar6 * *(float *)(param_1 + 2);
      *(float *)(lVar1 + 0x30) = *(float *)(lVar1 + 0x30) - fVar4 * fVar6;
      *(float *)(lVar1 + 0x34) = *(float *)(lVar1 + 0x34) - fVar3 * fVar6;
      lVar2 = param_1[1];
    }
    if (lVar2 != 0) {
      fVar4 = *(float *)((longlong)param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 3);
      *(float *)(lVar2 + 0x2c) = fVar6 * *(float *)(param_1 + 2) + *(float *)(lVar2 + 0x2c);
      *(float *)(lVar2 + 0x30) = fVar4 * fVar6 + *(float *)(lVar2 + 0x30);
      *(float *)(lVar2 + 0x34) = fVar3 * fVar6 + *(float *)(lVar2 + 0x34);
    }
    *(float *)((longlong)param_1 + 0x1c) = fVar6 + *(float *)((longlong)param_1 + 0x1c);
  }
  return;
}



// FUNCTION 142297b00 Iter body=1201 status=ok
// SIG undefined Iter(void)

void FAnimPhysLinearLimit::Iter(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float fStack_74;
  float fStack_70;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    local_78 = 0.0;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
  }
  else {
    fVar8 = *(float *)(lVar3 + 0x2c);
    fVar1 = *(float *)(lVar3 + 0x30);
    fVar2 = *(float *)(lVar3 + 0x34);
    fVar11 = *(float *)(lVar3 + 0x3c);
    fVar5 = *(float *)(lVar3 + 0xb0) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa0) +
            fVar1 * *(float *)(lVar3 + 0x90) + fVar8 * *(float *)(lVar3 + 0x80);
    fVar7 = *(float *)(lVar3 + 0xb4) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa4) +
            fVar1 * *(float *)(lVar3 + 0x94) + fVar8 * *(float *)(lVar3 + 0x84);
    fVar8 = *(float *)(lVar3 + 0xb8) * 0.0 + fVar2 * *(float *)(lVar3 + 0xa8) +
            fVar1 * *(float *)(lVar3 + 0x98) + fVar8 * *(float *)(lVar3 + 0x88);
    local_78 = (*(float *)((longlong)param_1 + 0x54) * fVar7 - *(float *)(param_1 + 10) * fVar8) +
               fVar11 * *(float *)(lVar3 + 0x20);
    fStack_74 = (*(float *)((longlong)param_1 + 0x4c) * fVar8 -
                *(float *)((longlong)param_1 + 0x54) * fVar5) + fVar11 * *(float *)(lVar3 + 0x24);
    fStack_70 = (*(float *)(param_1 + 10) * fVar5 - *(float *)((longlong)param_1 + 0x4c) * fVar7) +
                fVar11 * *(float *)(lVar3 + 0x28);
  }
  fVar2 = fStack_70;
  fVar1 = fStack_74;
  fVar8 = local_78;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_78 = 0.0;
    fStack_74 = 0.0;
    fStack_70 = 0.0;
  }
  else {
    fVar11 = *(float *)(lVar4 + 0x2c);
    fVar5 = *(float *)(lVar4 + 0x30);
    fVar7 = *(float *)(lVar4 + 0x34);
    fVar6 = *(float *)(lVar4 + 0x3c);
    fVar9 = *(float *)(lVar4 + 0xb0) * 0.0 + fVar7 * *(float *)(lVar4 + 0xa0) +
            fVar5 * *(float *)(lVar4 + 0x90) + fVar11 * *(float *)(lVar4 + 0x80);
    fVar10 = *(float *)(lVar4 + 0xb4) * 0.0 + fVar7 * *(float *)(lVar4 + 0xa4) +
             fVar5 * *(float *)(lVar4 + 0x94) + fVar11 * *(float *)(lVar4 + 0x84);
    fVar11 = *(float *)(lVar4 + 0xb8) * 0.0 + fVar7 * *(float *)(lVar4 + 0xa8) +
             fVar5 * *(float *)(lVar4 + 0x98) + fVar11 * *(float *)(lVar4 + 0x88);
    local_78 = (fVar10 * *(float *)(param_1 + 0xc) - fVar11 * *(float *)((longlong)param_1 + 0x5c))
               + fVar6 * *(float *)(lVar4 + 0x20);
    fStack_70 = (fVar9 * *(float *)((longlong)param_1 + 0x5c) - fVar10 * *(float *)(param_1 + 0xb))
                + fVar6 * *(float *)(lVar4 + 0x28);
    fStack_74 = (fVar11 * *(float *)(param_1 + 0xb) - fVar9 * *(float *)(param_1 + 0xc)) +
                fVar6 * *(float *)(lVar4 + 0x24);
  }
  fVar11 = param_2 * *(float *)(param_1 + 8) - *(float *)((longlong)param_1 + 0x44);
  fVar5 = param_2 * *(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x44);
  fVar8 = (-*(float *)((longlong)param_1 + 0x34) -
          ((local_78 - fVar8) * *(float *)(param_1 + 5) +
           (fStack_74 - fVar1) * *(float *)((longlong)param_1 + 0x2c) +
          (fStack_70 - fVar2) * *(float *)(param_1 + 6))) * *(float *)(param_1 + 9);
  if (fVar11 <= fVar8) {
    fVar8 = fVar11;
  }
  if (fVar8 <= fVar5) {
    fVar8 = fVar5;
  }
  if (lVar3 != 0) {
    fVar5 = -fVar8;
    fVar6 = fVar5 * *(float *)(param_1 + 5);
    fVar7 = fVar5 * *(float *)((longlong)param_1 + 0x2c);
    fVar5 = fVar5 * *(float *)(param_1 + 6);
    *(float *)(lVar3 + 0x20) = fVar6 + *(float *)(lVar3 + 0x20);
    *(float *)(lVar3 + 0x24) = fVar7 + *(float *)(lVar3 + 0x24);
    *(float *)(lVar3 + 0x28) = fVar5 + *(float *)(lVar3 + 0x28);
    fVar1 = *(float *)(param_1 + 10);
    fVar2 = *(float *)((longlong)param_1 + 0x54);
    fVar11 = *(float *)((longlong)param_1 + 0x4c);
    *(float *)(lVar3 + 0x2c) = (fVar5 * fVar1 - fVar7 * fVar2) + *(float *)(lVar3 + 0x2c);
    *(float *)(lVar3 + 0x34) = (fVar7 * fVar11 - fVar6 * fVar1) + *(float *)(lVar3 + 0x34);
    *(float *)(lVar3 + 0x30) = (fVar6 * fVar2 - fVar5 * fVar11) + *(float *)(lVar3 + 0x30);
    lVar4 = param_1[1];
  }
  if (lVar4 != 0) {
    fVar7 = fVar8 * *(float *)((longlong)param_1 + 0x2c);
    fVar6 = fVar8 * *(float *)(param_1 + 5);
    fVar5 = fVar8 * *(float *)(param_1 + 6);
    *(float *)(lVar4 + 0x24) = fVar7 + *(float *)(lVar4 + 0x24);
    *(float *)(lVar4 + 0x20) = fVar6 + *(float *)(lVar4 + 0x20);
    *(float *)(lVar4 + 0x28) = fVar5 + *(float *)(lVar4 + 0x28);
    fVar1 = *(float *)((longlong)param_1 + 0x5c);
    fVar2 = *(float *)(param_1 + 0xc);
    fVar11 = *(float *)(param_1 + 0xb);
    *(float *)(lVar4 + 0x2c) = (fVar5 * fVar1 - fVar7 * fVar2) + *(float *)(lVar4 + 0x2c);
    *(float *)(lVar4 + 0x34) = (fVar7 * fVar11 - fVar6 * fVar1) + *(float *)(lVar4 + 0x34);
    *(float *)(lVar4 + 0x30) = (fVar6 * fVar2 - fVar5 * fVar11) + *(float *)(lVar4 + 0x30);
  }
  *(float *)((longlong)param_1 + 0x44) = fVar8 + *(float *)((longlong)param_1 + 0x44);
  return;
}


