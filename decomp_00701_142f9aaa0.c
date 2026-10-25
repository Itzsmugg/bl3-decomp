// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f9aaa0 FUN_142f9aaa0 body=27 status=ok
// SIG undefined FUN_142f9aaa0(void)

void FUN_142f9aaa0(undefined8 param_1)

{
  FUN_142fbba00();
  FUN_142fbb3e0(param_1);
  return;
}



// FUNCTION 142f9aac0 FUN_142f9aac0 body=56 status=ok
// SIG undefined FUN_142f9aac0(void)

void FUN_142f9aac0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  local_14 = *(undefined4 *)(param_1 + 0x14);
  local_10 = *(undefined8 *)(param_1 + 0x18);
  (**(code **)(param_1 + 8))(param_2,param_3,&local_18);
  return;
}



// FUNCTION 142f9ab00 Execute body=103 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,TTypeWrapper<void>___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType)>
     ::Execute(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000142f9ab64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142f9ab70 FUN_142f9ab70 body=58 status=ok
// SIG undefined FUN_142f9ab70(void)

undefined8 FUN_142f9ab70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  local_14 = *(undefined4 *)(param_1 + 0x14);
  local_10 = *(undefined8 *)(param_1 + 0x18);
  (**(code **)(param_1 + 8))(param_2,param_3,&local_18);
  return 1;
}



// FUNCTION 142f9abb0 ExecuteIfSafe body=131 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UNavModifierComponent,void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 142f9ac40 FUN_142f9ac40 body=763 status=ok
// SIG undefined FUN_142f9ac40(void)

void FUN_142f9ac40(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong local_88;
  longlong local_80 [2];
  float local_70;
  undefined1 local_6c [44];
  
  iVar17 = *(int *)(param_3 + 0x80c);
  *(undefined4 *)(param_3 + 0x808) = 0;
  iVar10 = 0;
  if ((iVar17 < 0) && (iVar10 = 0, iVar17 != 0)) {
    TArray<ACoreAIController::FTraceRequest,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>::
    ResizeTo();
    iVar17 = *(int *)(param_3 + 0x80c);
    iVar10 = *(int *)(param_3 + 0x808);
  }
  lVar18 = param_2[1];
  iVar9 = iVar10 + (int)lVar18;
  *(int *)(param_3 + 0x808) = iVar9;
  if (iVar17 < iVar9) {
    FUN_142fb0fa0();
  }
  lVar11 = *(longlong *)(param_3 + 0x800);
  if (*(longlong *)(param_3 + 0x800) == 0) {
    lVar11 = param_3;
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(lVar11 + (longlong)iVar10 * 0x40),0,(longlong)(int)lVar18 << 6);
  iVar17 = 0;
  if (0 < (int)param_2[1]) {
    local_88 = 0;
    do {
      lVar11 = FWeakObjectPtr::Get(*param_2 + (longlong)iVar17 * 8);
      lVar18 = *(longlong *)(param_3 + 0x800);
      if (*(longlong *)(param_3 + 0x800) == 0) {
        lVar18 = param_3;
      }
      lVar18 = lVar18 + local_88;
      *(bool *)lVar18 = lVar11 != 0;
      if (lVar11 != 0) {
        *(undefined4 *)(lVar18 + 4) = *(undefined4 *)(lVar11 + 0x6e8);
        *(undefined8 *)(lVar18 + 8) = *(undefined8 *)(lVar11 + 0x774);
        *(undefined4 *)(lVar18 + 0x10) = *(undefined4 *)(lVar11 + 0x77c);
        local_70 = *(float *)(lVar11 + 0x78c) - *(float *)(lVar11 + 0x6ec);
        *(undefined8 *)(lVar18 + 0x14) = *(undefined8 *)(lVar11 + 0x784);
        *(float *)(lVar18 + 0x1c) = local_70;
        *(undefined1 *)(lVar18 + 0x20) = *(undefined1 *)(lVar11 + 0xab2);
        puVar12 = (undefined4 *)FUN_142c62620(local_6c);
        uVar5 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        *(undefined4 *)(lVar18 + 0x24) = *puVar12;
        *(undefined4 *)(lVar18 + 0x28) = uVar5;
        *(undefined4 *)(lVar18 + 0x2c) = uVar6;
        *(undefined4 *)(lVar18 + 0x30) = uVar7;
        *(undefined4 *)(lVar18 + 0x34) = puVar12[4];
        plVar3 = *(longlong **)(lVar11 + 0x280);
        lVar4 = *(longlong *)(lVar11 + 0x278);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if ((lVar4 != 0) && (cVar8 = FUN_142fa8a90(lVar4 + 0x20), cVar8 != '\0')) {
          uVar5 = *(undefined4 *)(lVar4 + 0x40);
          uVar6 = *(undefined4 *)(lVar4 + 0x44);
          uVar7 = *(undefined4 *)(lVar4 + 0x48);
          *(undefined4 *)(lVar18 + 0x24) = *(undefined4 *)(lVar4 + 0x3c);
          *(undefined4 *)(lVar18 + 0x28) = uVar5;
          *(undefined4 *)(lVar18 + 0x2c) = uVar6;
          *(undefined4 *)(lVar18 + 0x30) = uVar7;
          *(undefined4 *)(lVar18 + 0x34) = *(undefined4 *)(lVar4 + 0x4c);
        }
        lVar4 = *(longlong *)(lVar11 + 0x738);
        uVar16 = 0;
        if (lVar4 != 0) {
          plVar15 = *(longlong **)(lVar4 + 0x30);
          plVar2 = plVar15 + (longlong)*(int *)(lVar4 + 0x38) * 3;
          for (; plVar15 != plVar2; plVar15 = plVar15 + 3) {
            if ((*plVar15 != 0) && (*(float *)(plVar15 + 1) <= 1.0)) {
              iVar10 = FUN_142f9d9e0(param_1 + 0x6c0);
              if (iVar10 == -1) {
                uVar14 = 0;
              }
              else {
                uVar14 = 1 << ((byte)iVar10 & 0x1f);
              }
              uVar16 = uVar16 | uVar14;
            }
          }
        }
        *(uint *)(lVar18 + 0x38) = uVar16;
        local_80[0] = FUN_142df3580(*(undefined8 *)(lVar11 + 0x750));
        if (local_80[0] == 0) {
          uVar13 = 0xff;
        }
        else {
          uVar13 = *(undefined1 *)(local_80[0] + 0x6a);
        }
        *(undefined1 *)(lVar18 + 0x3c) = uVar13;
        FUN_142e8b080(param_4,local_80);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar18 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
      local_88 = local_88 + 0x40;
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142f9af40 FUN_142f9af40 body=245 status=ok
// SIG undefined FUN_142f9af40(void)

void FUN_142f9af40(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FGenericPlatformMath::Atan2
                           (param_2[1] - *(float *)(param_1 + 8),*param_2 - *(float *)(param_1 + 4))
  ;
  *(float *)(param_1 + 0x14) = fVar1 * 57.295776;
  fVar1 = (float)FGenericPlatformMath::Atan2
                           (param_3[1] - *(float *)(param_1 + 8),*param_3 - *(float *)(param_1 + 4))
  ;
  fVar2 = fVar1 * 57.295776 - *(float *)(param_1 + 0x14);
  fVar1 = (float)(int)(fVar2 * 0.0027777778) * 360.0;
  if (ABS(fVar2) < ABS(fVar1)) {
    fVar1 = fVar2;
  }
  fVar2 = fVar2 - fVar1;
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + 360.0;
  }
  if (180.0 < fVar2) {
    fVar2 = fVar2 - 360.0;
  }
  *(float *)(param_1 + 0x18) = fVar2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (fVar2 < 0.0) {
      *(float *)(param_1 + 0x18) = fVar2 + 360.0;
    }
  }
  else if (0.0 < fVar2) {
    *(float *)(param_1 + 0x18) = fVar2 - 360.0;
    return;
  }
  return;
}



// FUNCTION 142f9b040 FUN_142f9b040 body=546 status=ok
// SIG undefined FUN_142f9b040(void)

void FUN_142f9b040(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  longlong local_res10;
  
  iVar6 = 0;
  iVar10 = *(int *)(param_3 + 0x70c);
  *(undefined4 *)(param_3 + 0x708) = 0;
  if ((iVar10 < 0) && (iVar10 != 0)) {
    TArray<FClipmapUpdateBounds,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo
              (param_3,0);
    iVar10 = *(int *)(param_3 + 0x70c);
    iVar6 = *(int *)(param_3 + 0x708);
  }
  lVar12 = param_2[1];
  iVar5 = iVar6 + (int)lVar12;
  *(int *)(param_3 + 0x708) = iVar5;
  if (iVar10 < iVar5) {
    FUN_142fb1140(param_3,iVar6);
  }
  lVar7 = *(longlong *)(param_3 + 0x700);
  if (*(longlong *)(param_3 + 0x700) == 0) {
    lVar7 = param_3;
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(lVar7 + (longlong)iVar6 * 0x1c),0,(longlong)(int)lVar12 * 0x1c);
  iVar10 = 0;
  if (0 < (int)param_2[1]) {
    lVar12 = 0;
    do {
      lVar7 = FWeakObjectPtr::Get(*param_2 + (longlong)iVar10 * 8);
      if (lVar7 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar7 + 0x58);
      }
      lVar8 = *(longlong *)(param_3 + 0x700);
      if (*(longlong *)(param_3 + 0x700) == 0) {
        lVar8 = param_3;
      }
      puVar9 = (undefined1 *)(lVar8 + lVar12);
      if ((lVar7 == 0) || (lVar11 == 0)) {
        *puVar9 = 0;
      }
      else {
        *puVar9 = 1;
        uVar2 = *(undefined4 *)(lVar11 + 0x224);
        uVar3 = *(undefined4 *)(lVar11 + 0x228);
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(lVar11 + 0x220);
        *(undefined4 *)(puVar9 + 0xc) = uVar2;
        *(undefined4 *)(puVar9 + 0x10) = uVar3;
        fVar13 = ABS(*(float *)(lVar7 + 0x44));
        if (ABS(*(float *)(lVar7 + 0x40)) <= ABS(*(float *)(lVar7 + 0x44))) {
          fVar13 = ABS(*(float *)(lVar7 + 0x40));
        }
        if (ABS(*(float *)(lVar7 + 0x48)) <= fVar13) {
          fVar13 = ABS(*(float *)(lVar7 + 0x48));
        }
        *(float *)(puVar9 + 4) = fVar13 * *(float *)(lVar7 + 0x28);
        iVar6 = FUN_142f9d9e0(param_1 + 0x6c0);
        if (iVar6 == -1) {
          iVar6 = 0;
        }
        else {
          iVar6 = 1 << ((byte)iVar6 & 0x1f);
        }
        *(int *)(puVar9 + 0x14) = iVar6;
        plVar1 = *(longlong **)(lVar11 + 0x118);
        if ((plVar1 == (longlong *)0x0) ||
           (lVar7 = (**(code **)(*plVar1 + 0x688))(plVar1), lVar7 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        puVar9[1] = uVar4;
        local_res10 = FUN_142df3580(plVar1);
        if (local_res10 == 0) {
          puVar9[0x18] = 0xff;
          FUN_142e8b080(param_4,&local_res10);
        }
        else {
          puVar9[0x18] = *(undefined1 *)(local_res10 + 0x6a);
          FUN_142e8b080(param_4,&local_res10);
        }
      }
      iVar10 = iVar10 + 1;
      lVar12 = lVar12 + 0x1c;
    } while (iVar10 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142f9b270 FUN_142f9b270 body=294 status=ok
// SIG undefined FUN_142f9b270(void)

void FUN_142f9b270(longlong param_1,float *param_2,undefined8 *param_3)

{
  char cVar1;
  
  cVar1 = UAIBlueprintHelperLibrary::IsValidAILocation(param_2 + 7);
  if (cVar1 == '\0') {
    return;
  }
  if ((((*param_2 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= *param_2)) ||
      (param_2[1] <= -DAT_14676e1b0._4_4_)) ||
     (((DAT_14676e1b0._4_4_ <= param_2[1] || (param_2[2] <= -DAT_14676e1b8)) ||
      ((DAT_14676e1b8 <= param_2[2] || (cVar1 = FUN_142c738d0(param_2 + 7,param_2), cVar1 == '\0')))
      ))) {
    if (*(int *)(param_1 + 0xbc) != 2) {
      FUN_142f971e0(param_2);
      return;
    }
    *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 7);
    param_2[2] = param_2[9];
    *param_3 = *(undefined8 *)(param_2 + 7);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_142c6c930();
    FUN_142c6c930(param_2 + 7,param_2[2]);
  }
  else {
    cVar1 = FUN_142c73980(param_2 + 7,*(float *)(param_3 + 1) + param_2[2]);
    if (cVar1 == '\0') {
      FUN_142f971e0(param_2);
    }
    FUN_142c6c930(param_2 + 7,param_2[2]);
  }
  return;
}



// FUNCTION 142f9b3a0 FUN_142f9b3a0 body=685 status=ok
// SIG undefined FUN_142f9b3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142f9b3a0(float *param_1,float *param_2,ulonglong *param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  ulonglong local_c8 [2];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  longlong local_80;
  float local_68;
  float fStack_64;
  float fStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1424c8610();
  FUN_1424c98a0();
  uVar4 = *(ulonglong *)(param_1 + 0x1e);
  if ((uVar4 != 0) &&
     (((((float)DAT_14676e1b0 != *param_1 || (DAT_14676e1b0._4_4_ != param_1[1])) ||
       (DAT_14676e1b8 != param_1[2])) && (param_1[9] != -NAN)))) {
    lVar6 = 0;
    lVar3 = lVar6;
    if (*(longlong *)(uVar4 + 0x8f8) != 0) {
      lVar3 = UWeapon::GetStatusEffectOriginStats
                        (*(undefined8 *)(*(longlong *)(uVar4 + 0x8f8) + 0x130));
      uVar4 = *(ulonglong *)(param_1 + 0x1e);
    }
    lVar5 = lVar6;
    if (uVar4 != 0) {
      lVar5 = *(longlong *)(uVar4 + 0x8f8);
    }
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x130);
    }
    if ((lVar3 != 0) && (lVar6 != 0)) {
      fVar8 = param_1[6] * 0.01 + 0.001;
      FUN_143850ae0(&local_b8);
      local_88 = param_1[9];
      local_98 = _DAT_1467f08b0;
      uStack_94 = uRam00000001467f08b4;
      uStack_90 = uRam00000001467f08b8;
      uStack_8c = uRam00000001467f08bc;
      local_80 = FUN_142fa12f0(*(longlong *)(param_1 + 0x1e) + 0xa28,param_1 + 0x1a);
      if (local_80 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x1e);
        uVar4 = FWeakObjectPtr::IsValid(lVar3 + 0xa28);
        if ((char)uVar4 == '\0') goto LAB_142f9b625;
        local_80 = *(longlong *)(lVar3 + 0xb48);
        uVar4 = 0;
        if (local_80 == 0) goto LAB_142f9b625;
      }
      fVar7 = param_1[3] * 0.01;
      if (param_1[3] * 0.01 <= 0.0) {
        fVar7 = fVar8;
      }
      fVar1 = param_1[4];
      local_b8 = (float)*(undefined8 *)param_1 * 0.01;
      fStack_b4 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0.01;
      fStack_b0 = param_1[2] * 0.01;
      uStack_ac = 0;
      local_9c = 4.2039e-45;
      local_a8 = fVar8;
      local_a4 = fVar7;
      local_a0 = fVar7;
      if (((int)fVar1 < 1) || (local_9c = fVar1, 1 < (int)fVar1)) {
        local_a0 = _guard_xfg_dispatch_icall_nop(2.0,-(float)((int)local_9c + -1));
        local_a0 = local_a0 * fVar7;
      }
      uVar4 = FUN_143854bc0(lVar6,&local_b8,&local_68,local_c8);
      if ((int)uVar4 != 0) {
        *param_2 = local_68;
        param_2[1] = fStack_64;
        param_2[2] = fStack_60;
        *param_2 = *param_2 * 100.0;
        param_2[2] = param_2[2] * 100.0;
        param_2[1] = param_2[1] * 100.0;
        if ((uint)local_c8[0] == 0xffffffff) {
          local_c8[0] = 0xffffffffffffffff;
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (uint)local_c8[0] & 0x3fffff;
          local_c8[0] = CONCAT44((uint)local_c8[0],(uint)local_c8[0] >> 0x16) & 0x3fffffffffffff;
        }
        uVar4 = (ulonglong)uVar2;
        if (param_3 != (ulonglong *)0x0) {
          *param_3 = local_c8[0];
          uVar4 = local_c8[0];
        }
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
LAB_142f9b625:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142f9b650 FUN_142f9b650 body=491 status=ok
// SIG undefined FUN_142f9b650(void)

undefined8 FUN_142f9b650(longlong param_1,float *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_98;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x784);
  local_18 = *(undefined8 *)(param_1 + 0x6b8);
  local_8c = (float)uVar2;
  fStack_b0 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
  local_b8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_88 = CONCAT44(fStack_b0,local_b8._4_4_);
  fStack_b0 = param_2[2] - fStack_b0;
  local_res8 = -1;
  local_98 = CONCAT44(param_2[1] - local_b8._4_4_,*param_2 - local_8c);
  local_68 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_60 = *(undefined8 *)(param_1 + 0x700);
  local_78 = *(undefined8 *)(param_1 + 0x6e8);
  uStack_70 = *(undefined8 *)(param_1 + 0x6f0);
  local_48 = *(undefined8 *)(param_1 + 0x718);
  uStack_40 = *(undefined8 *)(param_1 + 0x720);
  uStack_80 = *(undefined8 *)(param_1 + 0x760);
  local_58 = *(undefined8 *)(param_1 + 0x708);
  uStack_50 = *(undefined8 *)(param_1 + 0x710);
  local_28 = *(undefined8 *)(param_1 + 0x738);
  uStack_20 = *(undefined4 *)(param_1 + 0x740);
  uStack_1c = *(undefined4 *)(param_1 + 0x744);
  local_38 = *(undefined4 *)(param_1 + 0x728);
  uStack_34 = *(undefined4 *)(param_1 + 0x72c);
  uStack_30 = *(undefined4 *)(param_1 + 0x730);
  uStack_2c = *(undefined4 *)(param_1 + 0x734);
  local_b8 = uVar2;
  local_90 = fStack_b0;
  cVar1 = FUN_142f993b0(&local_98,&local_b8,&local_res8);
  if (cVar1 == '\0') {
    local_88 = *(undefined8 *)(param_1 + 0x6e8);
    uStack_80 = *(undefined8 *)(param_1 + 0x6f0);
    local_28 = *(undefined8 *)(param_1 + 0x6b8);
    local_78 = *(undefined8 *)(param_1 + 0x6f8);
    uStack_70 = *(undefined8 *)(param_1 + 0x700);
    local_68 = *(undefined8 *)(param_1 + 0x708);
    uStack_60 = *(undefined8 *)(param_1 + 0x710);
    local_90 = param_2[2];
    local_58 = *(undefined8 *)(param_1 + 0x718);
    uStack_50 = *(undefined8 *)(param_1 + 0x720);
    local_48 = *(undefined8 *)(param_1 + 0x728);
    uStack_40 = *(undefined8 *)(param_1 + 0x730);
    local_38 = *(undefined4 *)(param_1 + 0x738);
    uStack_34 = *(undefined4 *)(param_1 + 0x73c);
    uStack_30 = *(undefined4 *)(param_1 + 0x740);
    uStack_2c = *(undefined4 *)(param_1 + 0x744);
    local_98 = *(undefined8 *)param_2;
    local_8c = *(float *)(param_1 + 0x6e8);
    uVar2 = FUN_142f9e4d0(&local_98,&local_b8,&local_res8);
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  if (((int)local_res8 < 0) || (local_res8 < 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (longlong)(int)local_res8 << 0x20 | (longlong)(local_res8._4_4_ + 1) |
            0x8000000000000000;
  }
  *param_3 = (undefined4)local_b8;
  param_3[1] = local_b8._4_4_;
  param_3[2] = fStack_b0;
  param_3[3] = uStack_ac;
  *(ulonglong *)(param_3 + 4) = uVar3;
  return CONCAT71((uint7)(uint3)((uint)fStack_b0 >> 8),1);
}



// FUNCTION 142f9b840 FUN_142f9b840 body=23 status=ok
// SIG undefined FUN_142f9b840(void)

undefined8 FUN_142f9b840(undefined8 param_1)

{
  FUN_142f9c2b0();
  return param_1;
}



// FUNCTION 142f9b860 FindId body=199 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar3 = (longlong)iVar5;
        local_res8 = *param_3;
        local_res20 = *(undefined4 *)(lVar4 + lVar3 * 0x14);
        local_res24 = *(undefined4 *)(lVar4 + 4 + lVar3 * 0x14);
        local_resc = param_3[1];
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar1 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        lVar4 = *param_1;
        iVar5 = *(int *)(lVar4 + 0xc + lVar3 * 0x14);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142f9b930 FUN_142f9b930 body=179 status=ok
// SIG undefined FUN_142f9b930(void)

int * FUN_142f9b930(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = GetTypeHash(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar4 + lVar1) == *param_3) &&
           (*(longlong *)(lVar4 + 8 + lVar1) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x18 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142f9b9f0 FUN_142f9b9f0 body=971 status=ok
// SIG undefined FUN_142f9b9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142f9b9f0(float *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                     float *param_5,undefined8 param_6)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 local_e8;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [48];
  
  param_1[3] = -NAN;
  param_1[4] = -NAN;
  param_1[5] = -NAN;
  param_1[6] = -NAN;
  FUN_142c62620(param_1 + 7);
  param_1[3] = -NAN;
  param_1[4] = -NAN;
  param_1[5] = -NAN;
  param_1[6] = -NAN;
  puVar5 = (undefined8 *)FUN_142c62620(local_58);
  uVar2 = puVar5[1];
  *(undefined8 *)(param_1 + 7) = *puVar5;
  *(undefined8 *)(param_1 + 9) = uVar2;
  param_1[0xb] = *(float *)(puVar5 + 2);
  *(ulonglong *)param_1 = CONCAT44(DAT_14676e1b0._4_4_,(float)DAT_14676e1b0);
  param_1[2] = DAT_14676e1b8;
  uVar2 = param_3[1];
  *(undefined8 *)(param_1 + 7) = *param_3;
  *(undefined8 *)(param_1 + 9) = uVar2;
  param_1[0xb] = *(float *)(param_3 + 2);
  if (*(char *)((longlong)param_2 + 0x99) == '\x01') {
    local_e8 = *param_3;
    uStack_cc = 1;
    uStack_cb = 0;
    uStack_c9 = 0;
    local_68 = param_2[0xc];
    local_e0 = *(undefined4 *)(param_3 + 1);
    pfVar6 = (float *)FUN_142c702e0(param_3,local_58);
    uStack_d4 = (undefined4)*(undefined8 *)(param_4 + 0xc);
    uStack_d0 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0xc) >> 0x20);
    local_d8 = *(undefined4 *)(param_3 + 2);
    local_b8 = param_2[2];
    uStack_b0 = param_2[3];
    local_dc = SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2]);
    local_98 = param_2[6];
    uStack_90 = param_2[7];
    local_c8 = *param_2;
    uStack_c0 = param_2[1];
    local_78 = param_2[10];
    uStack_70 = *(undefined4 *)(param_2 + 0xb);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x5c);
    local_a8 = param_2[4];
    uStack_a0 = param_2[5];
    local_88 = *(undefined4 *)(param_2 + 8);
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_80 = *(undefined4 *)(param_2 + 9);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x4c);
    cVar4 = FUN_142f9e730(&local_e8,param_1,param_1 + 3);
    if (cVar4 != '\0') {
      uVar2 = param_2[0xd];
      fVar8 = *(float *)((longlong)param_2 + 4);
      lVar3 = param_2[0xc];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b44218) &&
         (_Init_thread_header(&DAT_146b44218), DAT_146b44218 == -1)) {
        _DAT_146b44214 = 2.15;
        _Init_thread_footer(&DAT_146b44218);
      }
      fVar7 = *param_5;
      if (((((fVar7 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= fVar7)) ||
           (fVar1 = param_5[1], fVar1 <= -DAT_14676e1b0._4_4_)) ||
          ((DAT_14676e1b0._4_4_ <= fVar1 || (param_5[2] <= -DAT_14676e1b8)))) ||
         ((DAT_14676e1b8 <= param_5[2] ||
          (_DAT_14676e1d8 <
           (param_1[1] - fVar1) * (param_1[1] - fVar1) + (*param_1 - fVar7) * (*param_1 - fVar7)))))
      {
        if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0xb50), lVar3 == 0)) {
          fVar7 = 100.0;
        }
        else {
          fVar7 = *(float *)(lVar3 + 0xf4);
        }
        fVar8 = fVar8 + fVar8;
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        fVar8 = (float)FUN_142fa2ea0(uVar2,param_1,0,fVar8,param_6);
        fVar8 = fVar8 - _DAT_146b44214;
        *(undefined8 *)param_5 = *(undefined8 *)param_1;
        param_5[2] = param_1[2];
        param_5[2] = fVar8 - param_1[2];
      }
    }
  }
  else if (*(char *)((longlong)param_2 + 0x99) == '\x02') {
    local_78 = param_2[0xc];
    local_e8 = *param_3;
    local_e0 = *(undefined4 *)(param_3 + 1);
    pfVar6 = (float *)FUN_142c702e0(param_3,local_58);
    uVar2 = param_2[1];
    local_d8 = (undefined4)*param_2;
    uStack_d4 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uStack_d0 = (undefined4)uVar2;
    uStack_cc = (undefined1)((ulonglong)uVar2 >> 0x20);
    uStack_cb = (undefined2)((ulonglong)uVar2 >> 0x28);
    uStack_c9 = (undefined1)((ulonglong)uVar2 >> 0x38);
    local_b8 = param_2[4];
    uStack_b0 = param_2[5];
    local_dc = SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2]);
    local_98 = param_2[8];
    uStack_90 = param_2[9];
    local_c8 = param_2[2];
    uStack_c0 = param_2[3];
    local_a8 = param_2[6];
    uStack_a0 = param_2[7];
    local_88 = *(undefined4 *)(param_2 + 10);
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x54);
    uStack_80 = *(undefined4 *)(param_2 + 0xb);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x5c);
    FUN_142f9e4d0(&local_e8,param_1,param_1 + 5);
    *(undefined8 *)param_5 = *(undefined8 *)param_1;
    param_5[2] = 0.0;
  }
  return param_1;
}



// FUNCTION 142f9bdc0 FUN_142f9bdc0 body=596 status=ok
// SIG undefined FUN_142f9bdc0(void)

ulonglong FUN_142f9bdc0(longlong param_1,float *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  undefined8 local_res8;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_98;
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  longlong local_18;
  
  local_18 = *(longlong *)(param_1 + 0x27a8);
  uVar3 = 0;
  if (local_18 == 0) {
LAB_142f9bff9:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x2854);
    local_8c = (float)uVar1;
    fStack_b0 = *(float *)(param_1 + 0x285c) - *(float *)(param_1 + 0x27bc);
    local_b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_88 = CONCAT44(fStack_b0,local_b8._4_4_);
    fStack_b0 = param_2[2] - fStack_b0;
    local_res8 = -1;
    local_98 = CONCAT44(param_2[1] - local_b8._4_4_,*param_2 - local_8c);
    uStack_68 = *(undefined8 *)(param_1 + 0x27c8);
    uStack_60 = *(undefined8 *)(param_1 + 0x27d0);
    uStack_78 = *(undefined8 *)(param_1 + 0x27b8);
    uStack_70 = *(undefined8 *)(param_1 + 0x27c0);
    local_48 = *(undefined8 *)(param_1 + 0x27e8);
    uStack_40 = *(undefined8 *)(param_1 + 0x27f0);
    local_80 = *(undefined8 *)(param_1 + 0x2828);
    local_58 = *(undefined8 *)(param_1 + 0x27d8);
    uStack_50 = *(undefined8 *)(param_1 + 0x27e0);
    local_28 = *(undefined8 *)(param_1 + 0x2808);
    lStack_20 = *(undefined8 *)(param_1 + 0x2810);
    local_38 = *(undefined8 *)(param_1 + 0x27f8);
    uStack_30 = *(undefined8 *)(param_1 + 0x2800);
    local_b8 = uVar1;
    local_90 = fStack_b0;
    cVar2 = FUN_142f99630(&local_98,&local_b8,&local_res8);
    if (cVar2 == '\0') {
      local_80 = *(undefined8 *)(param_1 + 0x27b8);
      uStack_78 = *(undefined8 *)(param_1 + 0x27c0);
      lStack_20 = *(longlong *)(param_1 + 0x27a8);
      uStack_70 = *(undefined8 *)(param_1 + 0x27c8);
      uStack_68 = *(undefined8 *)(param_1 + 0x27d0);
      local_88 = 0;
      uStack_60 = *(undefined8 *)(param_1 + 0x27d8);
      local_58 = *(undefined8 *)(param_1 + 0x27e0);
      uStack_50 = *(undefined8 *)(param_1 + 0x27e8);
      local_48 = *(undefined8 *)(param_1 + 0x27f0);
      local_90 = param_2[2];
      uStack_40 = *(undefined8 *)(param_1 + 0x27f8);
      local_38 = *(undefined8 *)(param_1 + 0x2800);
      uStack_30 = *(undefined8 *)(param_1 + 0x2808);
      local_28 = *(undefined8 *)(param_1 + 0x2810);
      local_98 = *(undefined8 *)param_2;
      if (*(longlong *)(lStack_20 + 0xb50) == 0) {
        fVar5 = 100.0;
      }
      else {
        fVar5 = *(float *)(*(longlong *)(lStack_20 + 0xb50) + 0xf4);
      }
      local_8c = *(float *)(param_1 + 0x27b8);
      if (*(float *)(param_1 + 0x27b8) <= fVar5) {
        local_8c = fVar5;
      }
      local_18 = 1;
      uVar3 = FUN_142f9b3a0(&local_98,&local_b8,&local_res8);
      if (((char)uVar3 == '\0') ||
         (*(float *)(param_1 + 0x27b8) * *(float *)(param_1 + 0x27b8) <
          (param_2[1] - local_b8._4_4_) * (param_2[1] - local_b8._4_4_) +
          (*param_2 - (float)local_b8) * (*param_2 - (float)local_b8))) goto LAB_142f9bff9;
    }
    if (((int)local_res8 < 0) || (local_res8 < 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (longlong)(local_res8._4_4_ + 1) | (longlong)(int)local_res8 << 0x20;
    }
    uVar3 = CONCAT71((uint7)(uint3)((uint)fStack_b0 >> 8),1);
    *param_3 = (float)local_b8;
    param_3[1] = local_b8._4_4_;
    param_3[2] = fStack_b0;
    param_3[3] = uStack_ac;
    *(ulonglong *)(param_3 + 4) = uVar4;
  }
  return uVar3;
}



// FUNCTION 142f9c020 FUN_142f9c020 body=305 status=ok
// SIG undefined FUN_142f9c020(void)

void FUN_142f9c020(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  longlong local_28;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x148))();
  }
  lVar2 = FUN_142f9cfb0(uVar1);
  if (lVar2 != 0) {
    _guard_xfg_dispatch_icall_nop(&local_a8,0,0x88);
    local_a8 = *param_2;
    local_94 = 0xffffffffffffffff;
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_8c = 1;
    local_88 = 0x3f800000;
    local_84 = 0x3f800000;
    local_9c = param_3;
    local_28 = lVar2;
    if (param_5 == 0) {
      lVar3 = FUN_142f9d030();
      if (lVar3 == 0) {
        param_5 = 0;
      }
      else {
        param_5 = *(longlong *)(lVar3 + 0x30);
      }
    }
    plVar4 = *(longlong **)(lVar2 + 0x720);
    plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x728) * 4;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_5) {
        if (plVar4 != (longlong *)0x0) {
          local_7c = (undefined4)plVar4[2];
          goto LAB_142f9c119;
        }
        break;
      }
    }
    local_7c = 0xffffffff;
LAB_142f9c119:
    FUN_142f9e730(&local_a8,param_4,0);
  }
  return;
}



// FUNCTION 142f9c160 FUN_142f9c160 body=331 status=ok
// SIG undefined FUN_142f9c160(void)

void FUN_142f9c160(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined1 local_78 [112];
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x148))();
  }
  plVar2 = (longlong *)FUN_142f9cfb0(uVar1,0);
  if (plVar2 != (longlong *)0x0) {
    local_108 = *param_2;
    local_f8 = 0;
    local_eb = 0;
    local_e9 = 0;
    local_f4 = 0xffffffffffffffff;
    local_100 = *(undefined4 *)(param_2 + 1);
    local_ec = 1;
    local_fc = param_3;
    local_88 = plVar2;
    puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x860))(plVar2,local_78,param_1);
    local_d8 = *(undefined8 *)(puVar3 + 4);
    uStack_d0 = *(undefined8 *)(puVar3 + 6);
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    iStack_dc = puVar3[3];
    local_c8 = *(undefined8 *)(puVar3 + 8);
    uStack_c0 = *(undefined8 *)(puVar3 + 10);
    local_b8 = *(undefined8 *)(puVar3 + 0xc);
    uStack_b0 = *(undefined8 *)(puVar3 + 0xe);
    local_98 = puVar3[0x14];
    uStack_94 = puVar3[0x15];
    uStack_90 = puVar3[0x16];
    uStack_8c = puVar3[0x17];
    local_a8 = *(undefined8 *)(puVar3 + 0x10);
    uStack_a0 = *(undefined8 *)(puVar3 + 0x12);
    if (iStack_dc == -1) {
      iStack_dc = FUN_142fa3070(plVar2 + 0xe4,local_e8);
    }
    FUN_142f9e730(&local_108,param_4,0);
  }
  return;
}



// FUNCTION 142f9c2b0 FUN_142f9c2b0 body=899 status=ok
// SIG undefined FUN_142f9c2b0(void)

longlong * FUN_142f9c2b0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *local_188;
  ulonglong local_180;
  longlong local_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  longlong *plStack_138;
  undefined4 local_130;
  uint local_12c;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  undefined1 local_88 [96];
  
  plVar8 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x38);
  if (plVar8 == (longlong *)0x0) {
LAB_142f9c614:
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    return param_1;
  }
  lVar9 = FUN_142fc43a0();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_142f9c614;
  local_118 = *(undefined8 *)(param_3 + 8);
  local_100 = 0xffffffffffffffff;
  local_10c = *(undefined8 *)(param_3 + 0x14);
  local_f8 = 0xffffffffffffffff;
  local_110 = *(undefined4 *)(param_3 + 0x10);
  local_104 = *(undefined4 *)(param_3 + 0x1c);
  local_90 = plVar8;
  lVar10 = FWeakObjectPtr::Get(param_3);
  lVar9 = 0;
  if (lVar10 != 0) {
    lVar11 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142f9c3c6;
  }
  lVar10 = lVar9;
LAB_142f9c3c6:
  puVar12 = (undefined8 *)(**(code **)(*plVar8 + 0x860))(plVar8,local_88,lVar10);
  local_188 = (undefined8 *)0x0;
  local_180 = 0;
  local_f0 = *puVar12;
  uStack_e8 = puVar12[1];
  local_e0 = puVar12[2];
  uStack_d8 = puVar12[3];
  local_d0 = puVar12[4];
  uStack_c8 = puVar12[5];
  local_c0 = puVar12[6];
  uStack_b8 = puVar12[7];
  local_b0 = *(undefined4 *)(puVar12 + 8);
  uStack_ac = *(undefined4 *)((longlong)puVar12 + 0x44);
  uStack_a8 = *(undefined4 *)(puVar12 + 9);
  uStack_a4 = *(undefined4 *)((longlong)puVar12 + 0x4c);
  local_a0 = *(undefined4 *)(puVar12 + 10);
  uStack_9c = *(undefined4 *)((longlong)puVar12 + 0x54);
  uStack_98 = *(undefined4 *)(puVar12 + 0xb);
  uStack_94 = *(undefined4 *)((longlong)puVar12 + 0x5c);
  cVar6 = FUN_142faa510(&local_118,&local_188);
  if (cVar6 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 2;
  }
  else {
    local_168 = 0;
    local_178 = 0;
    lStack_170 = 0;
    FWeakObjectPtr::operator=(local_160,0);
    local_12c = local_12c | 1;
    local_158 = DAT_14676e180;
    local_14c = DAT_14676e180;
    local_140 = 0;
    plStack_138 = (longlong *)0x0;
    local_150 = DAT_14676e188;
    local_144 = DAT_14676e188;
    local_130 = 0;
    plVar8 = (longlong *)FUN_142f85900(plVar8,local_128,local_160);
    if (&local_178 != plVar8) {
      local_178 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&lStack_170);
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_120 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120);
        }
      }
    }
    plVar8 = plStack_138;
    if (plStack_138 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_138 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_138)(plStack_138);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    lVar10 = local_178;
    iVar5 = (int)local_180;
    uVar13 = local_180 & 0xffffffff;
    iVar3 = *(int *)(local_178 + 0x30);
    iVar7 = iVar3 + (int)local_180;
    *(int *)(local_178 + 0x30) = iVar7;
    if (*(int *)(local_178 + 0x34) < iVar7) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(local_178 + 0x28);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar3 * 0x20 + *(longlong *)(lVar10 + 0x28)),0,
               (longlong)iVar5 << 5);
    puVar12 = local_188;
    if (0 < iVar5) {
      do {
        lVar9 = lVar9 + 0x20;
        lVar11 = *(longlong *)(lVar10 + 0x28);
        *(undefined8 *)(lVar11 + -0x20 + lVar9) = *puVar12;
        *(undefined4 *)(lVar11 + -0x18 + lVar9) = *(undefined4 *)(puVar12 + 1);
        *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + -8 + lVar9) = 0;
        uVar13 = uVar13 - 1;
        puVar12 = (undefined8 *)((longlong)puVar12 + 0xc);
      } while (uVar13 != 0);
    }
    *(uint *)(lVar10 + 0x98) = *(uint *)(lVar10 + 0x98) | 2;
    *param_1 = lVar10;
    param_1[1] = lStack_170;
    *(undefined4 *)(param_1 + 2) = 3;
  }
  if (local_188 != (undefined8 *)0x0) {
    FMemory::Free(local_188);
  }
  return param_1;
}



// FUNCTION 142f9c640 FUN_142f9c640 body=641 status=ok
// SIG undefined FUN_142f9c640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f9c640(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 local_d8 [32];
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
  
  if (*param_1 != 0) {
    puVar1 = (ulonglong *)(*param_1 + 8);
    LOCK();
    uVar7 = *puVar1;
    if (uVar7 == 0) {
      *puVar1 = 0;
      uVar7 = 0;
    }
    UNLOCK();
    if ((uVar7 >> 0x1a & 1) == 0) {
      uVar8 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,param_1,0xff);
    }
  }
  lVar12 = param_1[1];
  lVar11 = (longlong)(int)param_1[2] * 0x140 + lVar12;
  if (lVar12 != lVar11) {
    puVar13 = (undefined8 *)(lVar12 + 0xd8);
    do {
      lVar9 = FWeakObjectPtr::Get(puVar13 + 0xc);
      if (lVar9 != 0) {
        uVar8 = puVar13[1];
        *(undefined8 *)(lVar9 + 0x300) = *puVar13;
        *(undefined8 *)(lVar9 + 0x308) = uVar8;
        uVar8 = puVar13[3];
        *(undefined8 *)(lVar9 + 0x310) = puVar13[2];
        *(undefined8 *)(lVar9 + 0x318) = uVar8;
        uVar8 = puVar13[5];
        *(undefined8 *)(lVar9 + 800) = puVar13[4];
        *(undefined8 *)(lVar9 + 0x328) = uVar8;
        uVar8 = puVar13[7];
        *(undefined8 *)(lVar9 + 0x330) = puVar13[6];
        *(undefined8 *)(lVar9 + 0x338) = uVar8;
        uVar3 = *(undefined4 *)((longlong)puVar13 + 0x44);
        uVar4 = *(undefined4 *)(puVar13 + 9);
        uVar5 = *(undefined4 *)((longlong)puVar13 + 0x4c);
        *(undefined4 *)(lVar9 + 0x340) = *(undefined4 *)(puVar13 + 8);
        *(undefined4 *)(lVar9 + 0x344) = uVar3;
        *(undefined4 *)(lVar9 + 0x348) = uVar4;
        *(undefined4 *)(lVar9 + 0x34c) = uVar5;
        *(undefined8 *)(lVar9 + 0x350) = puVar13[10];
        if (((*(char *)(lVar9 + 0x780) == '\0') && (*(char *)(lVar9 + 0xae8) == '\0')) &&
           (*(float *)(lVar9 + 0x31c) * *(float *)(lVar9 + 0x304) +
            *(float *)(lVar9 + 0x318) * *(float *)(lVar9 + 0x300) +
            *(float *)(lVar9 + 800) * *(float *)(lVar9 + 0x308) <= 0.0)) {
          *(undefined8 *)(lVar9 + 0x300) = _DAT_1468b5d90;
          *(undefined4 *)(lVar9 + 0x308) = DAT_1468b5d98;
        }
        if (((*(longlong *)(lVar9 + 0x6e0) != 0) &&
            (*(char *)(*(longlong *)(lVar9 + 0x6e0) + 0x2040) != '\0')) &&
           (1 < *(int *)(lVar9 + 0x270) - 1U)) {
          FUN_142f92310(lVar9,&local_b8);
          lVar2 = *(longlong *)(lVar9 + 0x6e0);
          *(undefined8 *)(lVar2 + 0x2160) = local_b8;
          *(undefined8 *)(lVar2 + 0x2168) = uStack_b0;
          *(undefined8 *)(lVar2 + 0x2170) = local_a8;
          *(undefined8 *)(lVar2 + 0x2178) = uStack_a0;
          *(undefined8 *)(lVar2 + 0x2180) = local_98;
          *(undefined8 *)(lVar2 + 0x2188) = uStack_90;
          *(undefined8 *)(lVar2 + 0x2190) = local_88;
          *(undefined8 *)(lVar2 + 0x2198) = uStack_80;
          *(undefined8 *)(lVar2 + 0x21a0) = local_78;
          *(undefined8 *)(lVar2 + 0x21a8) = uStack_70;
          *(undefined8 *)(lVar2 + 0x21b0) = local_68;
          *(undefined8 *)(lVar2 + 0x21b8) = uStack_60;
          *(undefined8 *)(lVar2 + 0x21c0) = local_58;
          *(undefined8 *)(lVar2 + 0x21c8) = uStack_50;
          *(undefined8 *)(lVar2 + 0x21d0) = local_48;
          *(undefined8 *)(lVar2 + 0x21d8) = uStack_40;
          *(undefined4 *)(lVar2 + 0x21e0) = local_38;
          *(undefined4 *)(lVar2 + 0x21e4) = uStack_34;
          *(undefined4 *)(lVar2 + 0x21e8) = uStack_30;
          *(undefined4 *)(lVar2 + 0x21ec) = uStack_2c;
          *(undefined4 *)(lVar2 + 0x21f0) = local_28;
          *(undefined4 *)(lVar2 + 0x21f4) = uStack_24;
          *(undefined4 *)(lVar2 + 0x21f8) = uStack_20;
          *(undefined4 *)(lVar2 + 0x21fc) = uStack_1c;
          cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x6e0) + 0xc78))();
          if (cVar6 != '\0') {
            (**(code **)(**(longlong **)(lVar9 + 0x6e0) + 0x260))();
            lVar9 = *(longlong *)(lVar9 + 0x6e0);
            puVar10 = (undefined4 *)FUN_142c62640(local_d8,&local_b8);
            uVar3 = puVar10[1];
            uVar4 = puVar10[2];
            uVar5 = puVar10[3];
            *(undefined4 *)(lVar9 + 0x2200) = *puVar10;
            *(undefined4 *)(lVar9 + 0x2204) = uVar3;
            *(undefined4 *)(lVar9 + 0x2208) = uVar4;
            *(undefined4 *)(lVar9 + 0x220c) = uVar5;
            *(undefined8 *)(lVar9 + 0x2210) = *(undefined8 *)(puVar10 + 4);
            *(undefined4 *)(lVar9 + 0x2218) = puVar10[6];
          }
        }
      }
      lVar12 = lVar12 + 0x140;
      puVar13 = puVar13 + 0x28;
    } while (lVar12 != lVar11);
  }
  return;
}



// FUNCTION 142f9c8d0 FUN_142f9c8d0 body=92 status=ok
// SIG undefined FUN_142f9c8d0(void)

void FUN_142f9c8d0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = FUN_142f9cfb0(lVar1,0);
    if (lVar1 != 0) {
      FUN_142f8fba0(param_1);
      FUN_142f8e420(lVar1 + 0x918,param_1);
    }
  }
  return;
}



// FUNCTION 142f9c930 FUN_142f9c930 body=317 status=ok
// SIG undefined FUN_142f9c930(void)

void FUN_142f9c930(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x750);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0xa68) != 0) {
      puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0xa68) + 8);
      LOCK();
      uVar3 = *puVar1;
      if (uVar3 == 0) {
        *puVar1 = 0;
        uVar3 = 0;
      }
      UNLOCK();
      if ((uVar3 >> 0x1a & 1) == 0) {
        uVar4 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar4,lVar2 + 0xa68,0xff);
      }
    }
    pcVar5 = *(char **)(lVar2 + 0xa70);
    *(undefined1 *)(lVar2 + 0xa08) = 0;
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      *(undefined4 *)(lVar2 + 0xa10) = *(undefined4 *)(pcVar5 + 0x90);
      TSet<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::operator=(lVar2 + 0xa18,pcVar5 + 0x98);
      *(undefined8 *)(lVar2 + 0x9f8) = *(undefined8 *)(*(longlong *)(lVar2 + 0xa70) + 0x14);
      FUN_142fa9cd0(lVar2 + 0x9e8);
      pcVar5 = *(char **)(lVar2 + 0xa70);
    }
    if (pcVar5 != (char *)0x0) {
      pcVar5[0xe0] = '\0';
      pcVar5[0xe1] = '\0';
      pcVar5[0xe2] = '\0';
      pcVar5[0xe3] = '\0';
      if (*(longlong *)(pcVar5 + 0xd8) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(pcVar5 + 0x98,0);
      if (*(longlong *)(pcVar5 + 0xb8) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(pcVar5 + 0x98) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(pcVar5,0xf0);
      *(undefined8 *)(lVar2 + 0xa70) = 0;
    }
    *(undefined8 *)(param_1 + 0x750) = 0;
  }
  return;
}



// FUNCTION 142f9ca70 FUN_142f9ca70 body=393 status=ok
// SIG undefined FUN_142f9ca70(void)

void FUN_142f9ca70(longlong *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  BOOL BVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *local_res8;
  
  if (*param_1 != 0) {
    puVar1 = (ulonglong *)(*param_1 + 8);
    LOCK();
    uVar11 = *puVar1;
    if (uVar11 == 0) {
      *puVar1 = 0;
      uVar11 = 0;
    }
    UNLOCK();
    if ((uVar11 >> 0x1a & 1) == 0) {
      uVar12 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar12,param_1,0xff);
    }
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      LOCK();
      piVar2 = (int *)(lVar5 + 0x48);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle();
      }
    }
    BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
    if (BVar10 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
    }
    plVar3 = param_1 + 3;
    local_res8 = param_1;
    FUN_142f87a50(plVar3,&local_res8);
    *(undefined4 *)(param_1 + 6) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
    plVar13 = (longlong *)*plVar3;
    plVar15 = plVar13 + (longlong)(int)param_1[4] * 0x2a;
    if (plVar13 != plVar15) {
      puVar14 = (undefined8 *)((longlong)plVar13 + 0x11c);
      do {
        cVar9 = FWeakObjectPtr::IsValid((longlong)puVar14 + -0x14);
        if (cVar9 != '\0') {
          lVar5 = *plVar13;
          uVar12 = puVar14[1];
          *(undefined8 *)(lVar5 + 0x20) = *puVar14;
          *(undefined8 *)(lVar5 + 0x28) = uVar12;
          uVar6 = *(undefined4 *)((longlong)puVar14 + 0x14);
          uVar7 = *(undefined4 *)(puVar14 + 3);
          uVar8 = *(undefined4 *)((longlong)puVar14 + 0x1c);
          *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(puVar14 + 2);
          *(undefined4 *)(lVar5 + 0x34) = uVar6;
          *(undefined4 *)(lVar5 + 0x38) = uVar7;
          *(undefined4 *)(lVar5 + 0x3c) = uVar8;
          uVar12 = puVar14[5];
          *(undefined8 *)(lVar5 + 0x40) = puVar14[4];
          *(undefined8 *)(lVar5 + 0x48) = uVar12;
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)((longlong)puVar14 + -0xc);
          *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)((longlong)puVar14 + -4);
          *(undefined1 *)(lVar5 + 0x1d) = 0;
          FUN_142f9b270(lVar5,lVar5 + 0x20);
          cVar9 = FUN_142fa8a90(lVar5 + 0x20);
          *(bool *)lVar5 = cVar9 == '\0';
        }
        plVar13 = plVar13 + 0x2a;
        puVar14 = puVar14 + 0x2a;
      } while (plVar13 != plVar15);
    }
    FUN_142fb0970(plVar3,0);
  }
  return;
}



// FUNCTION 142f9cc00 FUN_142f9cc00 body=73 status=ok
// SIG undefined FUN_142f9cc00(void)

void FUN_142f9cc00(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_142fc0410();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x2870) = param_2;
      FUN_142fb0a50(lVar2);
    }
  }
  return;
}



// FUNCTION 142f9cc50 FUN_142f9cc50 body=864 status=ok
// SIG undefined FUN_142f9cc50(void)

void FUN_142f9cc50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint uVar17;
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
  
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) != *(int *)(param_1 + 0x198)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1);
    }
    plVar2 = (longlong *)(lVar7 + 0x2b0);
    local_98 = 0;
    uVar5 = *(uint *)(lVar7 + 0x2d8);
    puVar4 = (uint *)(lVar7 + 0x2c0);
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar5 != 0) {
      puVar16 = *(uint **)(lVar7 + 0x2d0);
      if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
        puVar16 = puVar4;
      }
      uVar6 = *puVar16;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar6 == 0) {
        lVar14 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar10 = local_98 + 1;
        bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar10;
        if (bVar8) goto LAB_142f9cd5d;
        uVar6 = puVar16[lVar14 + 1];
      }
      uStack_94 = uVar6 - 1 & uVar6 ^ uVar6;
      iVar10 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_84 = (iStack_80 - iVar10) + 0x1f;
      if ((int)uVar5 < (int)uStack_84) {
LAB_142f9cd5d:
        uStack_84 = uVar5;
      }
    }
    uVar6 = *(uint *)(lVar7 + 0x2d8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar17 = uVar6 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar4;
    local_50 = plVar2;
    puStack_40 = puVar4;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar6;
    if (uVar6 != uVar5) {
      puVar16 = *(uint **)(lVar7 + 0x2d0);
      if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
        puVar16 = puVar4;
      }
      uVar13 = puVar16[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
      iVar10 = (int)uVar6 >> 5;
      while (uVar13 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_142f9ce35;
        uVar13 = puVar16[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar10 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_84 = (uVar17 - iVar10) + 0x1f;
      if ((int)uVar5 < (int)uStack_84) {
LAB_142f9ce35:
        uStack_84 = uVar5;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar4)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) break;
      lVar7 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
      if (lVar7 != 0) {
        lVar14 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          plVar11 = *(longlong **)(param_1 + 400);
          plVar3 = plVar11 + *(int *)(param_1 + 0x198);
          for (; plVar11 != plVar3; plVar11 = plVar11 + 1) {
            if (*plVar11 == *(longlong *)(lVar7 + 0x18)) {
              if ((*(byte *)(lVar7 + 0xb8) & 1) != 0) {
                iVar10 = *(int *)(param_1 + 0x1b8);
                iVar9 = iVar10 + 1;
                *(int *)(param_1 + 0x1b8) = iVar9;
                if (*(int *)(param_1 + 0x1bc) < iVar9) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                  ::ResizeGrow(plVar1);
                }
                lVar14 = *plVar1;
                lVar12 = (longlong)iVar10 * 0x20;
                *(undefined8 *)(lVar12 + lVar14) = 0;
                *(undefined8 *)(lVar12 + 8 + lVar14) = 0;
                *(undefined8 *)(lVar12 + 0x10 + lVar14) = 0;
                *(undefined8 *)(lVar12 + 0x18 + lVar14) = 0;
                puVar15 = (undefined8 *)(*plVar1 + lVar12);
                puVar15[3] = lVar7;
                *puVar15 = DAT_14676e1b0;
                *(undefined4 *)(puVar15 + 1) = DAT_14676e1b8;
                *(undefined8 *)((longlong)puVar15 + 0xc) = DAT_14676e1b0;
                *(undefined4 *)((longlong)puVar15 + 0x14) = DAT_14676e1b8;
              }
              break;
            }
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return;
}



// FUNCTION 142f9cfb0 FUN_142f9cfb0 body=127 status=ok
// SIG undefined FUN_142f9cfb0(void)

longlong FUN_142f9cfb0(void)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  plVar2 = (longlong *)FUN_142b8e570();
  if (((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x39a) & 8) != 0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(plVar2), plVar2 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_142fc43a0();
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
      lVar5 = lVar3;
    }
  }
  return lVar5;
}



// FUNCTION 142f9d030 FUN_142f9d030 body=284 status=ok
// SIG undefined FUN_142f9d030(void)

longlong FUN_142f9d030(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *local_18;
  undefined8 local_10;
  
  if (DAT_146b43f00 == '\0') {
    lVar7 = 0;
    DAT_146b43f00 = 1;
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    if (DAT_1468b6148 != 0) {
      puVar8 = &DAT_1468e2360;
      cVar2 = FConfigCacheIni::GetString
                        (DAT_1468b6148,L"GlobalsData",L"GbxNavGlobals",&local_18,&DAT_1468e2360);
      if (cVar2 != '\0') {
        puVar6 = &DAT_143f3eda8;
        if ((int)local_10 != 0) {
          puVar6 = local_18;
        }
        uVar4 = FUN_142fbe590();
        DAT_146b43f08 = FUN_141799c90(uVar4,0,puVar6,0,(ulonglong)puVar8 & 0xffffffff00000000,0,1);
        if (DAT_146b43f08 != 0) {
          iVar1 = *(int *)(DAT_146b43f08 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar5 = iVar1 >> 0x1f & 0xffff;
            uVar3 = iVar1 + uVar5;
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
          }
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
        }
      }
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    return DAT_146b43f08;
  }
  return DAT_146b43f08;
}



// FUNCTION 142f9d150 FUN_142f9d150 body=400 status=ok
// SIG undefined FUN_142f9d150(void)

longlong * FUN_142f9d150(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  cVar5 = FUN_142fa8b90();
  if (cVar5 == '\0') {
    plVar7 = param_1 + 0xdd;
    lVar1 = param_1[0xde];
    lVar2 = param_1[0xdf];
    lVar3 = param_1[0xe0];
    *param_2 = *plVar7;
    param_2[1] = lVar1;
    lVar1 = param_1[0xe1];
    lVar4 = param_1[0xe2];
    param_2[2] = lVar2;
    param_2[3] = lVar3;
    lVar2 = param_1[0xe3];
    lVar3 = param_1[0xe4];
    param_2[4] = lVar1;
    param_2[5] = lVar4;
    lVar1 = param_1[0xe5];
    lVar4 = param_1[0xe6];
    param_2[6] = lVar2;
    param_2[7] = lVar3;
    lVar2 = param_1[0xe7];
    lVar3 = param_1[0xe8];
    param_2[8] = lVar1;
    param_2[9] = lVar4;
    lVar1 = param_1[0xe9];
    lVar4 = param_1[0xea];
    param_2[10] = lVar2;
    param_2[0xb] = lVar3;
    lVar2 = param_1[0xed];
    lVar3 = param_1[0xee];
    param_2[0xc] = lVar1;
    param_2[0xd] = lVar4;
    lVar1 = param_1[0xec];
    param_2[0xe] = param_1[0xeb];
    param_2[0xf] = lVar1;
    lVar1 = param_1[0xef];
    lVar4 = param_1[0xf0];
    param_2[0x10] = lVar2;
    param_2[0x11] = lVar3;
    param_2[0x12] = lVar1;
    param_2[0x13] = lVar4;
  }
  else {
    lVar1 = param_1[0xdc];
    local_b8 = *(longlong *)(lVar1 + 0x27b8);
    lStack_b0 = *(longlong *)(lVar1 + 0x27c0);
    local_a8 = *(longlong *)(lVar1 + 0x27c8);
    lStack_a0 = *(longlong *)(lVar1 + 0x27d0);
    local_98 = *(longlong *)(lVar1 + 0x27d8);
    lStack_90 = *(longlong *)(lVar1 + 0x27e0);
    local_88 = *(longlong *)(lVar1 + 0x27e8);
    lStack_80 = *(longlong *)(lVar1 + 0x27f0);
    local_78 = *(longlong *)(lVar1 + 0x27f8);
    lStack_70 = *(longlong *)(lVar1 + 0x2800);
    local_68 = *(longlong *)(lVar1 + 0x2808);
    lStack_60 = *(longlong *)(lVar1 + 0x2810);
    local_58 = *(longlong *)(lVar1 + 0x2818);
    lStack_50 = *(longlong *)(lVar1 + 0x2820);
    local_38 = *(undefined4 *)(lVar1 + 0x2838);
    uStack_34 = *(undefined4 *)(lVar1 + 0x283c);
    uStack_30 = *(undefined4 *)(lVar1 + 0x2840);
    uStack_2c = *(undefined4 *)(lVar1 + 0x2844);
    local_48 = *(longlong *)(lVar1 + 0x2828);
    lStack_40 = *(longlong *)(lVar1 + 0x2830);
    local_28 = *(undefined4 *)(lVar1 + 0x2848);
    uStack_24 = *(undefined4 *)(lVar1 + 0x284c);
    uStack_20 = *(undefined4 *)(lVar1 + 0x2850);
    uStack_1c = *(undefined4 *)(lVar1 + 0x2854);
    local_18 = *(undefined8 *)(lVar1 + 0x2858);
    uVar6 = (**(code **)(*param_1 + 0x4b8))(param_1);
    uStack_20 = CONCAT31(uStack_20._1_3_,uVar6);
    plVar7 = &local_b8;
    *param_2 = local_b8;
    param_2[1] = lStack_b0;
    param_2[2] = local_a8;
    param_2[3] = lStack_a0;
    param_2[4] = local_98;
    param_2[5] = lStack_90;
    param_2[6] = local_88;
    param_2[7] = lStack_80;
    param_2[8] = local_78;
    param_2[9] = lStack_70;
    param_2[10] = local_68;
    param_2[0xb] = lStack_60;
    param_2[0xc] = local_58;
    param_2[0xd] = lStack_50;
    param_2[0xe] = local_48;
    param_2[0xf] = lStack_40;
    param_2[0x10] = CONCAT44(uStack_34,local_38);
    param_2[0x11] = CONCAT44(uStack_2c,uStack_30);
    param_2[0x12] = CONCAT44(uStack_24,local_28);
    param_2[0x13] = CONCAT44(uStack_1c,uStack_20);
  }
  param_2[0x14] = plVar7[0x14];
  return param_2;
}



// FUNCTION 142f9d2e0 FUN_142f9d2e0 body=235 status=ok
// SIG undefined FUN_142f9d2e0(void)

longlong FUN_142f9d2e0(longlong *param_1,longlong param_2,float param_3,float param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *plVar7;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  plVar5 = (longlong *)*param_1;
  plVar7 = plVar5 + (longlong)(int)param_1[1] * 4;
  do {
    if (plVar5 == plVar7) {
      return param_2;
    }
    if ((param_3 < *(float *)(plVar5 + 1) || param_3 == *(float *)(plVar5 + 1)) &&
       (param_4 < *(float *)((longlong)plVar5 + 0xc) ||
        param_4 == *(float *)((longlong)plVar5 + 0xc))) {
      plVar2 = (longlong *)*param_1;
      plVar4 = plVar2 + (longlong)(int)param_1[1] * 4;
      for (; plVar2 != plVar4; plVar2 = plVar2 + 4) {
        if (*plVar2 == *plVar5) {
          if (plVar2 != (longlong *)0x0) {
            uVar6 = (undefined4)plVar2[2];
            goto LAB_142f9d366;
          }
          break;
        }
      }
      uVar6 = 0xffffffff;
LAB_142f9d366:
      iVar1 = *(int *)(param_2 + 0x18);
      *(int *)(param_2 + 0x18) = iVar1 + 1;
      if (*(int *)(param_2 + 0x1c) < iVar1 + 1) {
        TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
      }
      lVar3 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar3 = param_2;
      }
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = uVar6;
    }
    plVar5 = plVar5 + 4;
  } while( true );
}



// FUNCTION 142f9d3d0 FUN_142f9d3d0 body=1322 status=ok
// SIG undefined FUN_142f9d3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f9d3d0(longlong *param_1,longlong **param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  longlong *_Src;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  ulonglong local_res8;
  longlong *local_88;
  uint local_80;
  int local_7c;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong uVar10;
  ulonglong uVar17;
  
  plVar12 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_7c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b44280) && (_Init_thread_header(&DAT_146b44280), DAT_146b44280 == -1))
  {
    DAT_146b44270 = 0;
    _DAT_146b44278 = 0;
    atexit((_func_5014 *)&LAB_143ec2680);
    _Init_thread_footer(&DAT_146b44280);
  }
  lVar2 = FUN_142f9d030();
  if (lVar2 == 0) {
    puVar3 = &DAT_146b44270;
  }
  else {
    puVar3 = (ulonglong *)(lVar2 + 0x68);
  }
  plVar22 = (longlong *)*puVar3;
  plVar18 = (longlong *)((longlong)(int)puVar3[1] & 0x1fffffffffffffff);
  if (plVar22 + (int)puVar3[1] < plVar22) {
    plVar18 = plVar12;
  }
  _Src = plVar12;
  plVar21 = plVar12;
  iVar19 = local_7c;
  if (plVar18 != (longlong *)0x0) {
    do {
      lVar2 = *plVar22;
      iVar11 = (int)plVar12;
      for (plVar9 = _Src; plVar9 != _Src + iVar11; plVar9 = plVar9 + 1) {
        if (*plVar9 == lVar2) {
          if ((int)((longlong)plVar9 - (longlong)_Src >> 3) != -1) goto LAB_142f9d4dc;
          break;
        }
      }
      local_80 = iVar11 + 1;
      if (iVar19 < (int)local_80) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,plVar12);
        _Src = local_88;
        iVar19 = local_7c;
      }
      plVar12 = (longlong *)(ulonglong)local_80;
      _Src[iVar11] = lVar2;
LAB_142f9d4dc:
      plVar22 = plVar22 + 1;
      plVar21 = (longlong *)((longlong)plVar21 + 1);
    } while (plVar21 != plVar18);
  }
  local_68 = (**(code **)(*param_1 + 0x148))(param_1);
  local_60 = &local_68;
  local_58 = FUN_14073d760(&local_68,DAT_146b44170);
  puVar1 = local_60;
  local_50 = &local_68;
  local_48 = 0;
  puVar4 = (undefined8 *)FUN_14073d760(local_60,local_58);
  puVar5 = (undefined8 *)FUN_14073d760(local_50,local_48);
  iVar19 = local_7c;
  for (; iVar11 = (int)plVar12, puVar4 != puVar5;
      puVar4 = (undefined8 *)FUN_14073d760(puVar1,*puVar4)) {
    lVar2 = *(longlong *)(puVar4[2] + 0x740);
    for (plVar22 = _Src; plVar22 != _Src + iVar11; plVar22 = plVar22 + 1) {
      if (*plVar22 == lVar2) {
        if ((int)((longlong)plVar22 - (longlong)_Src >> 3) != -1) goto LAB_142f9d5c6;
        break;
      }
    }
    local_80 = iVar11 + 1;
    if (iVar19 < (int)local_80) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,plVar12);
      _Src = local_88;
      iVar19 = local_7c;
    }
    plVar12 = (longlong *)(ulonglong)local_80;
    _Src[iVar11] = lVar2;
LAB_142f9d5c6:
  }
  if (param_1[0x16a] != 0) {
    puVar4 = (undefined8 *)FSoftObjectPath::ToString(param_1[0x16a] + 0x168,local_78);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar4;
    }
    uVar6 = UNavLinkTrivial::StaticClass();
    lVar2 = FUN_141799c90(uVar6,0,puVar16,0,0,0,1);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      plVar18 = *(longlong **)(lVar2 + 0x30);
      plVar22 = plVar18 + *(int *)(lVar2 + 0x38);
      iVar19 = local_7c;
      for (; plVar18 != plVar22; plVar18 = plVar18 + 1) {
        if ((*plVar18 != 0) && (lVar2 = *(longlong *)(*plVar18 + 0x48), lVar2 != 0)) {
          lVar7 = FUN_142fc1ed0();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          if (bVar23) {
            iVar11 = (int)plVar12;
            for (plVar21 = _Src; plVar21 != _Src + iVar11; plVar21 = plVar21 + 1) {
              if (*plVar21 == lVar2) {
                if ((int)((longlong)plVar21 - (longlong)_Src >> 3) != -1) goto LAB_142f9d716;
                break;
              }
            }
            local_80 = iVar11 + 1;
            if (iVar19 < (int)local_80) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,plVar12);
              _Src = local_88;
              iVar19 = local_7c;
            }
            plVar12 = (longlong *)(ulonglong)local_80;
            _Src[iVar11] = lVar2;
          }
        }
LAB_142f9d716:
        iVar11 = (int)plVar12;
      }
    }
  }
  uVar20 = 0;
  iVar19 = 0;
  if (iVar11 != 0) {
    bVar23 = *_Src != 0;
    local_res8 = 0;
    uVar10 = uVar20;
    uVar13 = uVar20;
    uVar17 = uVar20;
    do {
      uVar14 = (uint)uVar17;
      uVar15 = uVar14;
      do {
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + 1;
        uVar17 = (ulonglong)uVar15;
        if ((longlong)iVar11 <= (longlong)uVar13) break;
        uVar10 = local_res8;
      } while (bVar23 == (_Src[uVar13] != 0));
      uVar8 = (uint)uVar10;
      if (bVar23 != false) {
        if (uVar8 != uVar14) {
          _guard_xfg_dispatch_icall_nop
                    (_Src + (int)uVar8,_Src + (int)uVar14,(longlong)(int)(uVar15 - uVar14) << 3);
          uVar8 = (uint)local_res8;
        }
        uVar8 = uVar8 + (uVar15 - uVar14);
        uVar10 = (ulonglong)uVar8;
        local_res8 = (ulonglong)uVar8;
      }
      bVar23 = (bool)(bVar23 ^ 1);
    } while ((longlong)uVar13 < (longlong)iVar11);
    iVar19 = (int)uVar10;
  }
  if (param_2 != &local_88) {
    *(int *)(param_2 + 1) = iVar19;
    if ((iVar19 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar19);
      _guard_xfg_dispatch_icall_nop(*param_2,_Src,(longlong)iVar19 << 3);
    }
  }
  uVar13 = (ulonglong)((longlong)(_Src + iVar19) + (7 - (longlong)_Src)) >> 3;
  if (_Src + iVar19 < _Src) {
    uVar13 = uVar20;
  }
  plVar12 = _Src;
  if (uVar13 != 0) {
    do {
      plVar22 = *param_2;
      iVar19 = *(int *)(param_2 + 1);
      lVar2 = *(longlong *)(*plVar12 + 0x30);
      plVar18 = plVar22;
      lVar7 = *plVar12;
      if (lVar2 != 0) {
        lVar7 = lVar2;
      }
      for (; plVar18 != plVar22 + iVar19; plVar18 = plVar18 + 1) {
        if (*plVar18 == lVar7) {
          if ((int)((longlong)plVar18 - (longlong)plVar22 >> 3) != -1) goto LAB_142f9d882;
          break;
        }
      }
      *(int *)(param_2 + 1) = iVar19 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar19 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar19);
      }
      (*param_2)[iVar19] = lVar7;
LAB_142f9d882:
      plVar12 = plVar12 + 1;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar13);
  }
  if (_Src != (longlong *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 142f9d900 FUN_142f9d900 body=213 status=ok
// SIG undefined FUN_142f9d900(void)

undefined4 FUN_142f9d900(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x38) == '\b') {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      local_28 = 0;
      local_20 = 0;
      FUN_1422acfa0(*(longlong *)(param_1 + 0x70),&DAT_1468b5d90,&local_28);
      uVar3 = UBlendSpaceBase::GetAnimationLengthFromSampleData
                        (*(undefined8 *)(param_1 + 0x70),&local_28);
      if ((int)local_20 != 0) {
        plVar1 = (longlong *)(local_28 + 0x30);
        iVar2 = (int)local_20;
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 8;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      return uVar3;
    }
  }
  else {
    plVar1 = (longlong *)
             FUN_142c9fd40(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40));
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142f9d9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 142f9d9e0 FUN_142f9d9e0 body=148 status=ok
// SIG undefined FUN_142f9d9e0(void)

ulonglong FUN_142f9d9e0(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    if (*(ulonglong *)(param_2 + 0x48) != 0) {
      param_2 = *(ulonglong *)(param_2 + 0x48);
    }
    if (param_2 != 0) {
      lVar2 = FUN_142f9d030();
      uVar6 = 0;
      uVar3 = uVar6;
      if (lVar2 != 0) {
        uVar3 = *(ulonglong *)(lVar2 + 0x48);
      }
      if (param_2 != uVar3) {
        puVar1 = (ulonglong *)*param_1;
        puVar5 = puVar1;
        do {
          if (puVar5 == puVar1 + (int)param_1[1]) {
            uVar4 = 0xffffffff;
LAB_142f9da46:
            if (uVar4 != 0xffffffff) {
              uVar6 = (ulonglong)uVar4;
            }
            return uVar6;
          }
          if (*puVar5 == param_2) {
            uVar4 = (uint)((longlong)puVar5 - (longlong)puVar1 >> 3);
            goto LAB_142f9da46;
          }
          puVar5 = puVar5 + 1;
        } while( true );
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 142f9da80 FUN_142f9da80 body=791 status=ok
// SIG undefined FUN_142f9da80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f9da80(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined *local_180;
  undefined8 *local_178;
  longlong **local_170;
  undefined4 local_168;
  longlong *local_158;
  int local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  float local_11c;
  undefined1 local_118 [64];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  if (param_4 != (undefined8 *)0x0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
    puVar5 = (undefined8 *)FUN_1422e0550(local_118,0,param_2);
    uVar6 = 0;
    uVar4 = puVar5[1];
    *param_4 = *puVar5;
    param_4[1] = uVar4;
    uVar4 = puVar5[3];
    param_4[2] = puVar5[2];
    param_4[3] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar5 + 0x24);
    uVar2 = *(undefined4 *)(puVar5 + 5);
    uVar3 = *(undefined4 *)((longlong)puVar5 + 0x2c);
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(puVar5 + 4);
    *(undefined4 *)((longlong)param_4 + 0x24) = uVar1;
    *(undefined4 *)(param_4 + 5) = uVar2;
    *(undefined4 *)((longlong)param_4 + 0x2c) = uVar3;
    param_4[6] = puVar5[6];
    if (param_1 != (longlong *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    }
    lVar7 = FUN_142f9cfb0(uVar6,0);
    if (lVar7 != 0) {
      local_140 = 0xffffffff;
      local_13c = 0;
      FWeakObjectPtr::operator=(&local_140,param_3);
      uVar1 = local_140;
      local_158 = (longlong *)0x0;
      local_150 = 0;
      local_148 = CONCAT44(local_148._4_4_,local_13c);
      local_138 = param_4;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 == (longlong *)0x0) {
        if (((local_150 != 0) && (local_158 != (longlong *)0x0)) &&
           ((**(code **)(*local_158 + 0x28))(local_158,0), local_158 != (longlong *)0x0)) {
          local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
        }
      }
      else {
        *plVar8 = (longlong)&PTR_GetPoolName_145a0e060;
        plVar8[1] = (longlong)FUN_142f8e980;
        *(undefined4 *)((longlong)plVar8 + 0x14) = (undefined4)local_148;
        *(undefined4 *)(plVar8 + 2) = uVar1;
        plVar8[3] = (longlong)param_4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[4] = lVar9;
        *plVar8 = (longlong)&PTR_GetPoolName_145a0e0a8;
        FUN_142f98400(plVar8,&local_158);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar9 = FMemory::Realloc(plVar8,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
      local_c8 = 0x10000;
      local_d0 = 0;
      local_b8 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_68 = 0;
      local_c0 = 0;
      local_148 = 0;
      local_d8 = 0;
      local_c4 = 0;
      local_b4 = 0x101;
      local_bc = 0;
      local_c2 = 0;
      FCollisionQueryParams::AddIgnoredActor(&local_d8,param_1);
      if (*(longlong *)(lVar7 + 0xb50) == 0) {
        local_11c = 100.0;
      }
      else {
        local_11c = *(float *)(*(longlong *)(lVar7 + 0xb50) + 0xf4);
      }
      local_170 = &local_158;
      local_130 = *param_2;
      local_12c = param_2[1];
      local_168 = 0;
      local_128 = (float)param_2[2] - local_11c;
      local_178 = &local_d8;
      local_11c = local_11c + (float)param_2[2];
      local_180 = &DAT_14676e1f0;
      local_188 = &local_130;
      local_124 = local_130;
      local_120 = local_12c;
      FUN_142330140(uVar6,&local_148,1,&local_124);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (local_150 != 0) {
        if (local_158 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_158 + 0x28))(local_158,0);
        if (local_158 != (longlong *)0x0) {
          local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
        }
        local_150 = 0;
      }
      if (local_158 != (longlong *)0x0) {
        FMemory::Free(local_158);
      }
    }
  }
  return;
}



// FUNCTION 142f9dda0 FUN_142f9dda0 body=797 status=ok
// SIG undefined FUN_142f9dda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142f9dda0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
             longlong *param_5)

{
  undefined8 uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_258 [32];
  longlong *local_238;
  undefined1 *local_230;
  undefined *local_228;
  undefined1 local_218 [8];
  undefined8 local_210;
  float local_208;
  float local_200 [2];
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined8 local_1c4 [15];
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_110;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 local_e8 [72];
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if ((param_5 == (longlong *)0x0) || (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 == 0)) {
    *param_2 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    return param_2;
  }
  (**(code **)(*param_5 + 0x578))(param_5,local_200,&local_210);
  _guard_xfg_dispatch_icall_nop(local_1d8,0,0x90);
  local_1cc = 0x3f800000;
  local_210 = 0;
  local_238 = param_5;
  FUN_1422ffb20(local_e8,0,local_218,1);
  local_1f8 = *(undefined4 *)param_3;
  local_1f4 = *(undefined4 *)((longlong)param_3 + 4);
  local_210 = *param_3;
  local_228 = &DAT_146aefe68;
  local_208 = *(float *)(param_3 + 1) - 100000.0;
  local_1f0 = *(float *)(param_3 + 1) + 16.0;
  local_230 = local_e8;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,0xf);
  cVar3 = UWorld::LineTraceSingleByChannel(lVar5,local_1d8,&local_1f8,&local_210);
  lVar5 = param_1[0x11f];
  puVar7 = local_1c4;
  if (cVar3 == '\0') {
    puVar7 = param_3;
  }
  fVar2 = *(float *)(puVar7 + 1);
  uVar1 = *puVar7;
  local_1f0 = fVar2;
  if (lVar5 != 0) {
    lVar6 = UWeapon::GetStatusEffectOriginStats(*(undefined8 *)(lVar5 + 0x130));
    lVar5 = *(longlong *)(lVar5 + 0x130);
    if ((lVar6 != 0) && (lVar5 != 0)) {
      fVar8 = local_1f0 * 0.01;
      FUN_143850ae0(&local_148);
      local_138 = (local_200[0] + 1.0) * 0.01;
      local_12c = 3;
      local_134 = param_4 * 0.01;
      local_130 = param_4 * 0.0025;
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0x3f800000;
      uStack_11c = 0;
      local_148 = (float)uVar1 * 0.01;
      local_144 = (float)((ulonglong)uVar1 >> 0x20) * 0.01;
      local_140 = fVar8;
      local_13c = 0;
      local_110 = FUN_142f9e4a0(param_1 + 0x145);
      if ((local_110 != 0) &&
         (iVar4 = FUN_143854bc0(lVar5,&local_148,&local_f8,local_1e8), iVar4 != 0)) {
        local_210 = CONCAT44(fStack_f4,local_f8);
        local_208 = fStack_f0 * 100.0;
        *param_2 = CONCAT44(fStack_f4 * 100.0,local_f8 * 100.0);
        *(float *)(param_2 + 1) = local_208;
        goto LAB_142f9e05c;
      }
    }
  }
  *param_2 = uVar1;
  *(float *)(param_2 + 1) = fVar2;
LAB_142f9e05c:
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142f9e0c0 GetFigureRotation_Implementation body=25 status=ok
// SIG undefined GetFigureRotation_Implementation(void)

undefined8 *
AREDDF_FigureSkeletalBase::GetFigureRotation_Implementation(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *param_2 = *(undefined8 *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142f9e0e0 FUN_142f9e0e0 body=116 status=ok
// SIG undefined FUN_142f9e0e0(void)

undefined8 * FUN_142f9e0e0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float local_res10 [4];
  undefined1 local_res20 [8];
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_1 = *param_3;
    *(undefined4 *)(param_1 + 1) = uVar2;
    return param_1;
  }
  (**(code **)(*param_2 + 0x578))(param_2,local_res20,local_res10);
  fVar1 = *(float *)(param_3 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_3 + 4);
  *(float *)(param_1 + 1) = local_res10[0] + fVar1;
  return param_1;
}



// FUNCTION 142f9e160 FUN_142f9e160 body=99 status=ok
// SIG undefined FUN_142f9e160(void)

undefined8 * FUN_142f9e160(undefined8 *param_1,longlong *param_2)

{
  float local_res8 [2];
  undefined4 local_res10 [6];
  
  *param_1 = DAT_14676e1b0;
  *(undefined4 *)(param_1 + 1) = DAT_14676e1b8;
  local_res10[0] = 0;
  local_res8[0] = 0.0;
  (**(code **)(*param_2 + 0x6c0))(param_2,param_1,local_res10,local_res8);
  *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - local_res8[0];
  return param_1;
}



// FUNCTION 142f9e1d0 FUN_142f9e1d0 body=219 status=ok
// SIG undefined FUN_142f9e1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f9e1d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  uVar2 = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *param_2 = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_2 + 1) = uVar2;
  lVar1 = *param_1;
  *(undefined1 *)(param_2 + 3) = 0;
  local_38 = (**(code **)(lVar1 + 0x148))();
  local_30 = &local_38;
  local_28 = FUN_14073d760(&local_38,DAT_146b440c0);
  puVar3 = local_30;
  local_20 = &local_38;
  local_18 = 0;
  puVar4 = (undefined8 *)FUN_14073d760(local_30,local_28);
  puVar5 = (undefined8 *)FUN_14073d760(local_20,local_18);
  for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d760(puVar3,*puVar4)) {
  }
  return param_2;
}



// FUNCTION 142f9e2b0 FUN_142f9e2b0 body=288 status=ok
// SIG undefined FUN_142f9e2b0(void)

undefined8 FUN_142f9e2b0(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float local_28;
  float fStack_24;
  float fStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  iVar2 = (int)param_2;
  if (-1 < iVar2) {
    iVar3 = (int)((ulonglong)param_2 >> 0x20);
    if (-1 < param_2) {
      if (param_1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x8f8);
      }
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x130), lVar1 != 0)) &&
         (iVar2 < *(int *)(lVar1 + 0x40))) {
        lVar1 = *(longlong *)((longlong)iVar2 * 0x100 + 8 + *(longlong *)(lVar1 + 0x38));
        if ((lVar1 != 0) && (iVar3 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x20))) {
          FUN_142fbd3f0(lVar1,*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x18) +
                              (longlong)iVar3 * 0x18,&local_28);
          *param_3 = local_28;
          param_3[1] = fStack_24;
          param_3[2] = fStack_20;
          *param_3 = *param_3 * 100.0;
          param_3[2] = param_3[2] * 100.0;
          param_3[1] = param_3[1] * 100.0;
          param_3[3] = local_18;
          param_3[4] = fStack_14;
          param_3[5] = fStack_10;
          param_3[3] = param_3[3] * 100.0;
          param_3[4] = param_3[4] * 100.0;
          param_3[5] = param_3[5] * 100.0;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142f9e3d0 FUN_142f9e3d0 body=197 status=ok
// SIG undefined FUN_142f9e3d0(void)

undefined2 FUN_142f9e3d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar5 = (int)((ulonglong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  if ((-1 < iVar4) && (-1 < param_2)) {
    if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
      lVar2 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar2 = param_1 + 0xb8;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)iVar4) * 4);
      if (iVar1 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x80));
          if ((int)*plVar6 == iVar4) {
            if (iVar1 != -1) goto LAB_142f9e462;
            break;
          }
          iVar1 = (int)plVar6[3];
        } while (iVar1 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_142f9e462:
    plVar3 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if ((plVar3 != (longlong *)0x0) && (iVar5 < (int)plVar3[1])) {
      return *(undefined2 *)(*plVar3 + (longlong)iVar5 * 2);
    }
  }
  return 0xffff;
}



// FUNCTION 142f9e4a0 FUN_142f9e4a0 body=39 status=ok
// SIG undefined FUN_142f9e4a0(void)

undefined8 FUN_142f9e4a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x120);
}



// FUNCTION 142f9e4d0 FUN_142f9e4d0 body=605 status=ok
// SIG undefined FUN_142f9e4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142f9e4d0(float *param_1,float *param_2,ulonglong *param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_a8 [2];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_1424c8610();
  FUN_1424c98a0();
  if ((*(longlong *)(param_1 + 0x1c) != 0) &&
     (((((float)DAT_14676e1b0 != *param_1 || (DAT_14676e1b0._4_4_ != param_1[1])) ||
       (DAT_14676e1b8 != param_1[2])) &&
      ((param_1[8] != -NAN &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c) + 0x8f8), lVar2 != 0)))))) {
    plVar5 = (longlong *)FUN_1412bf1c0(*(undefined8 *)(lVar2 + 0x130));
    if (plVar5 != (longlong *)0x0) {
      local_58 = 0;
      uStack_50 = 0;
      local_38 = param_1[3] * 0.01;
      local_64 = 0;
      local_68 = 0;
      local_48 = (float)*(undefined8 *)param_1 * 0.01;
      fStack_44 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0.01;
      fStack_40 = param_1[2] * 0.01;
      uStack_3c = 0;
      local_60 = 0;
      if (-1 < (int)param_1[8]) {
        local_64 = 1 << (SUB41(param_1[8],0) & 0x1f);
      }
      fStack_34 = local_38;
      fStack_30 = local_38;
      fStack_2c = local_38;
      (**(code **)(*plVar5 + 0x18))(plVar5,local_a8,&local_68,&local_78);
      if (local_a8[0] != 0xffffffff) {
        local_b8 = CONCAT44(local_a8[0],local_a8[0] >> 0x16) & 0x3fffffffffffff;
        if (param_3 != (ulonglong *)0x0) {
          *param_3 = local_b8;
        }
        *param_2 = local_78;
        param_2[1] = fStack_74;
        param_2[2] = fStack_70;
        *param_2 = *param_2 * 100.0;
        param_2[2] = param_2[2] * 100.0;
        param_2[1] = param_2[1] * 100.0;
        cVar4 = FUN_142f9e2b0(*(undefined8 *)(param_1 + 0x1c),local_b8,&local_a0);
        if (cVar4 != '\0') {
          local_b8 = *(ulonglong *)param_2;
          if ((*param_2 < local_a0) || (local_a0 = local_94, local_94 < *param_2)) {
            uVar3 = local_b8 >> 0x20;
            local_b8 = CONCAT44((int)uVar3,local_a0);
          }
          if ((param_2[1] < local_9c) || (local_9c = local_90, local_90 < param_2[1])) {
            local_b8 = CONCAT44(local_9c,(undefined4)local_b8);
          }
          if ((param_2[2] < local_98) ||
             (local_98 = local_8c, fVar1 = param_2[2], local_8c < param_2[2])) {
            fVar1 = local_98;
          }
          *(ulonglong *)param_2 = local_b8;
          param_2[2] = fVar1;
        }
        return (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
               (*param_2 - *param_1) * (*param_2 - *param_1) +
               (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]) <= param_1[3] * param_1[3];
      }
    }
  }
  return false;
}



// FUNCTION 142f9e730 FUN_142f9e730 body=1266 status=ok
// SIG undefined FUN_142f9e730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142f9e730(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_138 [32];
  float local_118;
  float fStack_114;
  float local_110;
  longlong *local_108 [2];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if ((lVar3 != 0) &&
     ((((float)DAT_14676e1b0 != *param_1 || (DAT_14676e1b0._4_4_ != param_1[1])) ||
      (DAT_14676e1b8 != param_1[2])))) {
    plVar4 = (longlong *)0x0;
    plVar2 = plVar4;
    if (*(longlong *)(lVar3 + 0x8f8) != 0) {
      plVar2 = (longlong *)
               UWeapon::GetStatusEffectOriginStats
                         (*(undefined8 *)(*(longlong *)(lVar3 + 0x8f8) + 0x130));
      lVar3 = *(longlong *)(param_1 + 0x20);
    }
    plVar5 = plVar4;
    if (lVar3 != 0) {
      plVar5 = *(longlong **)(lVar3 + 0x8f8);
    }
    if (plVar5 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar5[0x26];
    }
    if ((plVar2 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
      local_118 = (float)DAT_14676e1b0;
      fStack_114 = DAT_14676e1b0._4_4_;
      local_110 = DAT_14676e1b8;
      local_108[0] = (longlong *)&DAT_ffffffffffffffff;
      if ((-1 < (int)param_1[5]) && (-1 < (int)param_1[6])) {
        uStack_e0 = *(undefined8 *)(param_1 + 8);
        uStack_d8 = *(undefined8 *)(param_1 + 10);
        uStack_d0 = *(undefined8 *)(param_1 + 0xc);
        uStack_c8 = *(undefined8 *)(param_1 + 0xe);
        local_80 = *(undefined8 *)(param_1 + 0x20);
        local_c0 = *(ulonglong *)(param_1 + 0x10);
        local_e8 = *(undefined8 *)(param_1 + 5);
        auStack_b8 = *(undefined1 (*) [16])(param_1 + 0x12);
        uStack_a8 = *(undefined8 *)(param_1 + 0x16);
        local_f0 = (ulonglong)(uint)param_1[2];
        local_a0 = *(undefined8 *)(param_1 + 0x18);
        uStack_98 = *(undefined8 *)(param_1 + 0x1a);
        local_90 = *(undefined8 *)(param_1 + 0x1c);
        uStack_88 = *(undefined8 *)(param_1 + 0x1e);
        local_f8 = *(longlong *)param_1;
        FUN_142f9ec30(&local_f8,&local_118,local_108);
      }
      if (((local_118 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= local_118)) ||
         ((fStack_114 <= -DAT_14676e1b0._4_4_ ||
          (((DAT_14676e1b0._4_4_ <= fStack_114 || (local_110 <= -DAT_14676e1b8)) ||
           (DAT_14676e1b8 <= local_110)))))) {
        local_e8 = *(undefined8 *)(param_1 + 8);
        uStack_e0 = *(undefined8 *)(param_1 + 10);
        uStack_d8 = *(undefined8 *)(param_1 + 0xc);
        uStack_d0 = *(undefined8 *)(param_1 + 0xe);
        uStack_c8 = *(undefined8 *)(param_1 + 0x10);
        local_c0 = *(ulonglong *)(param_1 + 0x12);
        auStack_b8 = *(undefined1 (*) [16])(param_1 + 0x14);
        uStack_a8 = *(undefined8 *)(param_1 + 0x18);
        local_a0 = *(undefined8 *)(param_1 + 0x1a);
        uStack_98 = *(undefined8 *)(param_1 + 0x1c);
        local_90 = *(undefined8 *)(param_1 + 0x1e);
        local_f8 = *(longlong *)param_1;
        fVar6 = param_1[4];
        if (fVar6 <= 0.0) {
          fVar6 = param_1[3];
        }
        local_f0 = CONCAT44(fVar6,param_1[2]);
        uStack_88 = *(undefined8 *)(param_1 + 0x20);
        FUN_142fae610(&local_f8,&local_118,local_108);
      }
      if (((local_118 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= local_118)) ||
         (((fStack_114 <= -DAT_14676e1b0._4_4_ ||
           ((DAT_14676e1b0._4_4_ <= fStack_114 || (local_110 <= -DAT_14676e1b8)))) ||
          (DAT_14676e1b8 <= local_110)))) {
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_c8 = CONCAT44(uRam00000001467f08d4,DAT_1467f08d0);
        local_c0 = CONCAT44(uRam00000001467f08dc,uRam00000001467f08d8);
        local_f0 = 0;
        uStack_d8 = 0;
        auStack_b8._8_8_ = uRam00000001467f0738;
        auStack_b8._0_8_ = _DAT_1467f0730;
        if ((int)param_1[0xb] < 0) {
          local_f8 = 0;
        }
        else {
          local_f8 = (ulonglong)(uint)(1 << (SUB41(param_1[0xb],0) & 0x1f)) << 0x20;
        }
        local_e8 = FUN_142fa4c50(*(longlong *)(param_1 + 0x20) + 0xa28,param_1 + 0x1c);
        auVar7._0_4_ = param_1[3] * 0.01;
        auVar7._4_4_ = auVar7._0_4_;
        auVar7._8_4_ = auVar7._0_4_;
        auVar7._12_4_ = auVar7._0_4_;
        auStack_b8 = maxps(auVar7,_DAT_1467f06f0);
        uStack_c8 = CONCAT44((float)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0.01,
                             (float)*(undefined8 *)param_1 * 0.01);
        local_c0 = (ulonglong)(uint)(param_1[2] * 0.01);
        (**(code **)(*plVar2 + 0x18))(plVar2,local_108,&local_f8,&local_68);
        if ((uint)local_108[0] == 0xffffffff) {
          return 0;
        }
        local_108[0] = (longlong *)
                       (CONCAT44((uint)local_108[0],(uint)local_108[0] >> 0x16) & 0x3fffffffffffff);
        local_118 = local_68 * 100.0;
        fStack_114 = fStack_64 * 100.0;
        local_110 = fStack_60 * 100.0;
      }
      if (*(char *)(param_1 + 7) != '\0') {
        local_f8 = CONCAT44(fStack_114,local_118);
        uStack_d0 = *(undefined8 *)(param_1 + 0xc);
        uStack_c8 = *(undefined8 *)(param_1 + 0xe);
        uStack_e0 = *(undefined8 *)(param_1 + 8);
        uStack_d8 = *(undefined8 *)(param_1 + 10);
        local_e8 = 0;
        local_78 = 0;
        uStack_a8 = *(undefined8 *)(param_1 + 0x16);
        local_c0 = *(ulonglong *)(param_1 + 0x10);
        auStack_b8 = *(undefined1 (*) [16])(param_1 + 0x12);
        local_80 = *(undefined8 *)(param_1 + 0x20);
        local_90 = *(undefined8 *)(param_1 + 0x1c);
        uStack_88 = *(undefined8 *)(param_1 + 0x1e);
        local_a0 = *(undefined8 *)(param_1 + 0x18);
        uStack_98 = *(undefined8 *)(param_1 + 0x1a);
        fVar6 = param_1[3];
        if (param_1[3] <= param_1[8]) {
          fVar6 = param_1[8];
        }
        if (1000.0 <= fVar6) {
          fVar6 = 1000.0;
        }
        local_f0 = CONCAT44(fVar6,local_110);
        cVar1 = FUN_142f9b3a0(&local_f8,&local_118,local_108);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      *param_2 = CONCAT44(fStack_114,local_118);
      *(float *)(param_2 + 1) = local_110;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = local_108[0];
      }
      if ((-1 < (int)(uint)local_108[0]) && (-1 < (longlong)local_108[0])) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f9ec30 FUN_142f9ec30 body=666 status=ok
// SIG undefined FUN_142f9ec30(void)

undefined8 FUN_142f9ec30(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong *local_res18;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  undefined8 local_40;
  
  *param_2 = DAT_14676e1b0;
  *(undefined4 *)(param_2 + 1) = DAT_14676e1b8;
  local_res8 = 0xffffffffffffffff;
  *param_3 = 0xffffffffffffffff;
  lVar5 = 0;
  lVar6 = param_1[0xf];
  lVar8 = lVar5;
  if (lVar6 != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x8f8);
  }
  lVar9 = lVar5;
  if (lVar8 != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x130);
  }
  lVar8 = lVar5;
  if (lVar6 != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x8f8);
  }
  local_res18 = param_3;
  if (lVar8 != 0) {
    lVar5 = UWeapon::GetStatusEffectOriginStats(*(undefined8 *)(lVar8 + 0x130));
  }
  if ((((lVar9 != 0) && (lVar5 != 0)) && (-1 < *(int *)(param_1 + 2))) &&
     (-1 < *(int *)((longlong)param_1 + 0x14))) {
    lVar6 = param_1[2];
    if (((int)lVar6 < 0) || (uVar3 = (undefined4)((ulonglong)lVar6 >> 0x20), lVar6 < 0)) {
      uVar3 = 0xffffffff;
    }
    lVar6 = FUN_142fa2fb0(param_1[0xf],param_1[2]);
    if (lVar6 != 0) {
      cVar2 = FUN_142fa8260(param_1[0xf],param_1 + 3,param_1[2]);
      if (cVar2 != '\0') {
        local_50 = *(undefined4 *)(param_1 + 1);
        local_58 = *param_1;
        local_48 = param_1[2];
        local_40 = param_1[0xf];
        local_4c = *(undefined4 *)((longlong)param_1 + 0xc);
        cVar2 = FUN_142fa8600(&local_58,&local_68);
        if (cVar2 != '\0') {
          *param_2 = local_68;
          *(undefined4 *)(param_2 + 1) = local_60;
          *param_3 = param_1[2];
          return 1;
        }
      }
      local_res8 = CONCAT44(local_res8._4_4_,uVar3) & 0xffffffff003fffff;
      piVar7 = (int *)FUN_142fbd520(lVar6,&local_res8);
      iVar10 = *piVar7;
      if (iVar10 < (short)piVar7[2] + iVar10) {
        do {
          local_res8 = CONCAT44(local_res8._4_4_,iVar10);
          lVar8 = FUN_142fbd4c0(lVar6,&local_res8);
          if ((*(int *)(lVar8 + 8) != -1) && ((*(byte *)(lVar8 + 0x10) & 0x20) == 0)) {
            uVar4 = *(uint *)(lVar8 + 0xc);
            if ((*(byte *)(lVar8 + 0x10) & 0x40) == 0) {
              if (uVar4 != 0xffffffff) {
                uVar4 = *(int *)(*(longlong *)(lVar6 + 0x18) + 0x17c) << 0x16 | uVar4 & 0x3fffff;
                goto LAB_142f9ee0f;
              }
LAB_142f9ee14:
              local_res10 = 0xffffffffffffffff;
            }
            else {
LAB_142f9ee0f:
              if (uVar4 == 0xffffffff) goto LAB_142f9ee14;
              local_res10 = CONCAT44(uVar4,uVar4 >> 0x16) & 0x3fffffffffffff;
            }
            uVar1 = local_res10;
            cVar2 = FUN_142fa8260(param_1[0xf],param_1 + 3,local_res10);
            if (cVar2 != '\0') {
              local_58 = *param_1;
              local_50 = *(undefined4 *)(param_1 + 1);
              local_4c = *(undefined4 *)((longlong)param_1 + 0xc);
              local_40 = param_1[0xf];
              local_48 = uVar1;
              cVar2 = FUN_142fa8600(&local_58,&local_68);
              if (cVar2 != '\0') {
                *param_2 = local_68;
                *(undefined4 *)(param_2 + 1) = local_60;
                *local_res18 = uVar1;
                return 1;
              }
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)(short)piVar7[2] + *piVar7);
      }
    }
  }
  return 0;
}



// FUNCTION 142f9eed0 FUN_142f9eed0 body=199 status=ok
// SIG undefined FUN_142f9eed0(void)

float FUN_142f9eed0(float *param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iStackX_14;
  
  if (param_1[4] != param_1[0xf]) {
    pfVar2 = *(float **)(param_1 + 0x12);
    if (*(float **)(param_1 + 0x12) == (float *)0x0) {
      pfVar2 = param_1 + 0x10;
    }
    fVar1 = pfVar2[(longlong)(int)param_1[0x14] - 1U & (longlong)(int)param_2];
    if (fVar1 != -NAN) {
      do {
        plVar4 = (longlong *)((longlong)(int)fVar1 * 0x20 + *(longlong *)(param_1 + 2));
        if ((int)*plVar4 == (int)param_2) {
          if (fVar1 != -NAN) goto LAB_142f9ef42;
          break;
        }
        fVar1 = *(float *)(plVar4 + 3);
      } while (fVar1 != -NAN);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_142f9ef42:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    if (((-1 < param_2) && (iStackX_14 < (int)plVar3[1])) &&
       (*(byte *)((longlong)iStackX_14 + *plVar3) != 0xff)) {
      return (float)*(byte *)((longlong)iStackX_14 + *plVar3) * *param_1 * 0.003937008;
    }
  }
  return 3.4028235e+38;
}



// FUNCTION 142f9efa0 FUN_142f9efa0 body=191 status=ok
// SIG undefined FUN_142f9efa0(void)

undefined8 * FUN_142f9efa0(longlong param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (((cVar1 != '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    FUN_142f9b930(param_1 + 0x80,local_res8,param_2);
    puVar5 = (undefined8 *)0x0;
    puVar4 = puVar5;
    if (local_res8[0] != -1) {
      puVar4 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x80));
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = puVar5;
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return puVar5;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142f9f060 FUN_142f9f060 body=12 status=ok
// SIG undefined FUN_142f9f060(void)

undefined4 * FUN_142f9f060(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x2fc);
  return param_2;
}



// FUNCTION 142f9f070 FUN_142f9f070 body=1329 status=ok
// SIG undefined FUN_142f9f070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142f9f070(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 uStack_120;
  char cStack_11f;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined4 local_118;
  float fStack_114;
  undefined1 local_108 [8];
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined2 uStack_eb;
  undefined1 uStack_e9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_78 [16];
  int local_68 [4];
  int *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (((param_1[0x44] == 0) || (param_1[0x4f5] == 0)) || (param_1[0x2f] == 0)) {
    FUN_142f88d20(param_2);
  }
  else {
    (**(code **)(*param_1 + 0xca0))(param_1,&local_1b8);
    if ((1.0 < ABS(local_1b8 - *(float *)(param_1 + 0x4f7))) ||
       (1.0 < ABS(fStack_1b4 - *(float *)((longlong)param_1 + 0x27bc)))) {
      local_1c8 = 0xffffffffffffffff;
      uStack_140 = 0xffffffffffffffff;
      local_148 = 0xffffffffffffffff;
      iStack_1ac = -1;
      iStack_1a8 = -1;
    }
    uVar7 = uStack_140;
    uVar6 = local_148;
    if (cStack_11f == '\x01') {
      if ((param_1[0x50e] != 0) && (iStack_1ac == -1)) {
        iStack_1ac = FUN_142fa30d0(param_1[0x4f5] + 0x720);
      }
      lVar4 = param_1[0x4f5];
      if (*(longlong *)(lVar4 + 0xb50) == 0) {
        uVar10 = 0x42c80000;
      }
      else {
        uVar10 = *(undefined4 *)(*(longlong *)(lVar4 + 0xb50) + 0xf4);
      }
      if (local_158 == 0) {
        local_1c8 = 0xffffffffffffffff;
        uVar7 = 0xffffffffffffffff;
      }
      else {
        cVar3 = FUN_142fa8260(local_158,&local_1b8,uVar6);
        if (cVar3 == '\0') {
          local_1c8 = 0xffffffffffffffff;
          uVar6 = 0xffffffffffffffff;
        }
        bVar8 = iStack_1ac == -1;
        FUN_142f9d2e0(local_158 + 0x720,local_68,local_1b8,fStack_1b4);
        local_d8 = CONCAT44(uStack_1a4,iStack_1a8);
        uStack_eb = 0;
        uStack_e9 = 0;
        uStack_f4 = (undefined4)uVar6;
        uStack_f0 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_ec = 0;
        local_1c0 = fStack_114 - fStack_1b4;
        uStack_e0 = CONCAT44(iStack_1ac,uStack_1b0);
        local_fc = local_1b8;
        if (bVar8) {
          local_fc = 500.0;
        }
        piVar5 = local_68;
        if (local_58 != (int *)0x0) {
          piVar5 = local_58;
        }
        piVar1 = piVar5 + local_50;
        local_100 = local_1c0;
        local_f8 = uVar10;
        for (; uVar7 = uVar6, piVar5 != piVar1; piVar5 = piVar5 + 1) {
          if ((bVar8) || (iStack_1ac == *piVar5)) {
            local_1c8 = 0xffffffffffffffff;
            uStack_e0 = CONCAT44(*piVar5,(undefined4)uStack_e0);
            cVar3 = FUN_142f9e730(local_108,local_78,&local_1c8);
            uVar7 = local_1c8;
            if (cVar3 != '\0') break;
          }
        }
        if (local_58 != (int *)0x0) {
          FMemory::Free();
        }
        lVar4 = param_1[0x4f5];
      }
      local_148 = uVar7;
      iStack_1ac = FUN_142fa3830(lVar4,uVar7);
    }
    else if (cStack_11f == '\x02') {
      if (local_158 == 0) {
        local_1c8 = 0xffffffffffffffff;
        uVar6 = 0xffffffffffffffff;
      }
      else {
        fVar9 = fStack_1b4;
        if (fStack_1b4 <= local_1b8) {
          fVar9 = local_1b8;
        }
        bVar8 = iStack_1a8 == -1;
        FUN_142f9d2e0(local_158 + 0x738,local_68,fVar9,fVar9);
        local_e8 = CONCAT44(uStack_1a4,iStack_1a8);
        local_1c0 = fStack_114 - fStack_1b4;
        uStack_ec = (undefined1)iStack_1ac;
        uStack_eb = (undefined2)((uint)iStack_1ac >> 8);
        uStack_e9 = (undefined1)((uint)iStack_1ac >> 0x18);
        local_fc = local_1b8;
        if (bVar8) {
          local_fc = 500.0;
        }
        piVar5 = local_68;
        if (local_58 != (int *)0x0) {
          piVar5 = local_58;
        }
        piVar1 = piVar5 + local_50;
        local_100 = local_1c0;
        for (; uVar6 = uVar7, piVar5 != piVar1; piVar5 = piVar5 + 1) {
          if ((bVar8) || (iStack_1a8 == *piVar5)) {
            local_1c8 = 0xffffffffffffffff;
            uVar2 = (ulonglong)local_e8 >> 0x20;
            local_e8 = CONCAT44((int)uVar2,*piVar5);
            cVar3 = FUN_142f9e4d0(local_108,local_78,&local_1c8);
            uVar6 = local_1c8;
            if (cVar3 != '\0') break;
          }
        }
        if (local_58 != (int *)0x0) {
          FMemory::Free();
        }
      }
      uStack_140 = uVar6;
      iStack_1a8 = FUN_142fa37d0(param_1[0x4f5],uVar6);
    }
    *param_2 = CONCAT44(fStack_1b4,local_1b8);
    param_2[1] = CONCAT44(iStack_1ac,uStack_1b0);
    param_2[2] = CONCAT44(uStack_1a4,iStack_1a8);
    param_2[3] = uStack_1a0;
    param_2[4] = local_198;
    param_2[5] = uStack_190;
    param_2[6] = local_188;
    param_2[7] = uStack_180;
    param_2[8] = local_178;
    param_2[9] = uStack_170;
    param_2[10] = local_168;
    param_2[0xb] = uStack_160;
    param_2[0xc] = local_158;
    param_2[0xd] = uStack_150;
    param_2[0xe] = local_148;
    param_2[0xf] = uStack_140;
    param_2[0x10] = local_138;
    param_2[0x11] = uStack_130;
    param_2[0x12] = local_128;
    param_2[0x13] = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(cStack_11f,uStack_120)));
    param_2[0x14] = CONCAT44(fStack_114,local_118);
  }
  return param_2;
}



// FUNCTION 142f9f5b0 FUN_142f9f5b0 body=173 status=ok
// SIG undefined FUN_142f9f5b0(void)

undefined8 * FUN_142f9f5b0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x781) == '\x01') {
    if ((*(int *)(param_1 + 0x758) < 0) || (*(int *)(param_1 + 0x75c) < 0)) goto LAB_142f9f61e;
    uVar4 = (ulonglong)(*(int *)(param_1 + 0x75c) + 1);
    uVar3 = (longlong)*(int *)(param_1 + 0x758) << 0x20;
  }
  else {
    if (((*(char *)(param_1 + 0x781) != '\x02') || (uVar3 = 0, *(int *)(param_1 + 0x760) < 0)) ||
       (*(int *)(param_1 + 0x764) < 0)) goto LAB_142f9f61e;
    uVar4 = (longlong)(*(int *)(param_1 + 0x764) + 1) | (longlong)*(int *)(param_1 + 0x760) << 0x20;
    uVar3 = 0x8000000000000000;
  }
  uVar3 = uVar4 | uVar3;
LAB_142f9f61e:
  fVar2 = *(float *)(param_1 + 0x78c);
  fVar1 = *(float *)(param_1 + 0x6ec);
  param_2[2] = uVar3;
  *param_2 = *(undefined8 *)(param_1 + 0x784);
  *(float *)(param_2 + 1) = fVar2 - fVar1;
  return param_2;
}



// FUNCTION 142f9f660 GetPostProcessManager body=28 status=ok
// SIG undefined GetPostProcessManager(void)

undefined8 UUiModelCharacterUtils::GetPostProcessManager(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142f9d030();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x40);
  }
  return 0;
}



// FUNCTION 142f9f680 GetResultWhenComplete body=27 status=ok
// SIG undefined GetResultWhenComplete(void)

undefined8
BuildPatchServices::FDeltaScanner::GetResultWhenComplete(longlong param_1,undefined8 param_2)

{
  FUN_142f9f6a0(param_1 + 0x68);
  return param_2;
}



// FUNCTION 142f9f6a0 FUN_142f9f6a0 body=2315 status=ok
// SIG undefined FUN_142f9f6a0(void)

void ** FUN_142f9f6a0(char *param_1,void **param_2)

{
  void *pvVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  size_t sVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  void **ppvVar16;
  int iVar17;
  void *pvVar18;
  ulonglong local_res8;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar17 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (*param_1 == '\x01') {
    lVar14 = 0x10;
LAB_142f9f78f:
    cVar10 = FWeakObjectPtr::IsValid(param_1 + lVar14);
    if (cVar10 != '\0') {
LAB_142f9f7b0:
      cVar10 = *param_1;
      if (cVar10 == '\0') {
        fVar3 = *(float *)(param_1 + 4);
        if ((((fVar3 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= fVar3)) ||
            ((fVar4 = *(float *)(param_1 + 8), fVar4 <= -DAT_14676e1b0._4_4_ ||
             ((DAT_14676e1b0._4_4_ <= fVar4 ||
              (fVar5 = *(float *)(param_1 + 0xc), fVar5 <= -DAT_14676e1b8)))))) ||
           (DAT_14676e1b8 <= fVar5)) {
          local_58 = (void *)0x0;
          local_50 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          FGenericPlatformString::Memcpy(local_58,L"None",10);
          ppvVar16 = &local_58;
          bVar8 = false;
          bVar7 = true;
        }
        else if (((0.0001 < ABS(fVar3)) || (0.0001 < ABS(fVar4))) || (0.0001 < ABS(fVar5))) {
          local_68 = (void *)0x0;
          local_60 = 3;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          pvVar18 = local_68;
          FGenericPlatformString::Memcpy(local_68,&DAT_144063a8c,6);
          bVar7 = true;
          if (1e-08 < ABS(*(float *)(param_1 + 4))) {
            FString::PrintfImpl(&local_58,L"X=%.2f",(double)*(float *)(param_1 + 4));
            pvVar1 = local_58;
            uVar9 = local_60;
            iVar11 = iVar17;
            if ((int)local_50 != 0) {
              iVar11 = (int)local_50 + -1;
            }
            if (iVar11 != 0) {
              iVar12 = (int)local_60;
              lVar14 = (longlong)(int)local_60;
              iVar13 = (uint)((int)local_60 == 0) + iVar11 + (int)local_60;
              local_60 = CONCAT44(local_60._4_4_,iVar13);
              if (local_60._4_4_ < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
                pvVar18 = local_68;
              }
              pvVar2 = (void *)((longlong)pvVar18 + (lVar14 - (ulonglong)(iVar12 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar1,(longlong)iVar11 * 2);
              *(undefined2 *)((longlong)pvVar2 + (longlong)iVar11 * 2) = 0;
            }
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
            bVar7 = false;
          }
          if (1e-08 < ABS(*(float *)(param_1 + 8))) {
            if (!bVar7) {
              local_58 = (void *)0x0;
              local_50 = 3;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
              pvVar1 = local_58;
              FGenericPlatformString::Memcpy(local_58,&DAT_144063aa8,6);
              uVar9 = local_60;
              if (((int)local_50 != 0) && ((int)local_50 + -1 != 0)) {
                iVar11 = (int)local_60;
                lVar14 = (longlong)(int)local_60;
                iVar12 = (uint)((int)local_60 == 0) + (int)local_60 + (int)local_50 + -1;
                local_60 = CONCAT44(local_60._4_4_,iVar12);
                if (local_60._4_4_ < iVar12) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
                  pvVar18 = local_68;
                }
                pvVar2 = (void *)((longlong)pvVar18 + (lVar14 - (ulonglong)(iVar11 != 0)) * 2);
                sVar6 = (longlong)((int)local_50 + -1) * 2;
                _guard_xfg_dispatch_icall_nop(pvVar2,pvVar1,sVar6);
                *(undefined2 *)((longlong)pvVar2 + sVar6) = 0;
              }
              if (pvVar1 != (void *)0x0) {
                FMemory::Free(pvVar1);
              }
            }
            FString::PrintfImpl(&local_58,L"Y=%.2f",(double)*(float *)(param_1 + 8));
            pvVar1 = local_58;
            uVar9 = local_60;
            iVar11 = iVar17;
            if ((int)local_50 != 0) {
              iVar11 = (int)local_50 + -1;
            }
            if (iVar11 != 0) {
              iVar12 = (int)local_60;
              lVar14 = (longlong)(int)local_60;
              iVar13 = (uint)((int)local_60 == 0) + iVar11 + (int)local_60;
              local_60 = CONCAT44(local_60._4_4_,iVar13);
              if (local_60._4_4_ < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
                pvVar18 = local_68;
              }
              pvVar2 = (void *)((longlong)pvVar18 + (lVar14 - (ulonglong)(iVar12 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar1,(longlong)iVar11 * 2);
              *(undefined2 *)((longlong)pvVar2 + (longlong)iVar11 * 2) = 0;
            }
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
            bVar7 = false;
          }
          if (1e-08 < ABS(*(float *)(param_1 + 0xc))) {
            if (!bVar7) {
              local_58 = (void *)0x0;
              local_50 = 3;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
              pvVar1 = local_58;
              FGenericPlatformString::Memcpy(local_58,&DAT_144063aa8,6);
              uVar9 = local_60;
              if (((int)local_50 != 0) && ((int)local_50 + -1 != 0)) {
                iVar11 = (int)local_60;
                lVar14 = (longlong)(int)local_60;
                iVar12 = (uint)((int)local_60 == 0) + (int)local_50 + -1 + (int)local_60;
                local_60 = CONCAT44(local_60._4_4_,iVar12);
                if (local_60._4_4_ < iVar12) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
                  pvVar18 = local_68;
                }
                pvVar2 = (void *)((longlong)pvVar18 + (lVar14 - (ulonglong)(iVar11 != 0)) * 2);
                sVar6 = (longlong)((int)local_50 + -1) * 2;
                _guard_xfg_dispatch_icall_nop(pvVar2,pvVar1,sVar6);
                *(undefined2 *)((longlong)pvVar2 + sVar6) = 0;
              }
              if (pvVar1 != (void *)0x0) {
                FMemory::Free(pvVar1);
              }
            }
            FString::PrintfImpl(&local_58,L"Z=%.2f",(double)*(float *)(param_1 + 0xc));
            pvVar1 = local_58;
            uVar9 = local_60;
            if ((int)local_50 != 0) {
              iVar17 = (int)local_50 + -1;
            }
            if (iVar17 != 0) {
              iVar11 = (int)local_60;
              lVar14 = (longlong)(int)local_60;
              iVar12 = (uint)((int)local_60 == 0) + iVar17 + (int)local_60;
              local_60 = CONCAT44(local_60._4_4_,iVar12);
              if (local_60._4_4_ < iVar12) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
                pvVar18 = local_68;
              }
              pvVar2 = (void *)((longlong)pvVar18 + (lVar14 - (ulonglong)(iVar11 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar2,pvVar1,(longlong)iVar17 * 2);
              *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
            }
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
          }
          local_58 = (void *)0x0;
          local_50 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          pvVar1 = local_58;
          FGenericPlatformString::Memcpy(local_58,&DAT_144063ad0,4);
          uVar9 = local_60;
          if (((int)local_50 != 0) && (iVar17 = (int)local_50 + -1, iVar17 != 0)) {
            iVar11 = (int)local_60;
            lVar14 = (longlong)(int)local_60;
            iVar12 = (uint)((int)local_60 == 0) + (int)local_60 + iVar17;
            local_60 = CONCAT44(local_60._4_4_,iVar12);
            if (local_60._4_4_ < iVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
              pvVar18 = local_68;
            }
            pvVar2 = (void *)((longlong)pvVar18 + (lVar14 - (ulonglong)(iVar11 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar1,(longlong)iVar17 * 2);
            *(undefined2 *)((longlong)pvVar2 + (longlong)iVar17 * 2) = 0;
          }
          if (pvVar1 != (void *)0x0) {
            FMemory::Free(pvVar1);
          }
          ppvVar16 = &local_48;
          bVar8 = true;
          bVar7 = false;
          local_40 = (int)local_60;
          local_3c = local_60._4_4_;
          local_48 = pvVar18;
        }
        else {
          FString::PrintfImpl(&local_48,L"V(0)");
          ppvVar16 = &local_48;
          bVar8 = true;
          bVar7 = false;
        }
        FString::operator=(param_2,ppvVar16);
        if ((bVar7) && (local_58 != (void *)0x0)) {
          FMemory::Free();
        }
        if (!bVar8) {
          return param_2;
        }
        if (local_48 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      if (cVar10 == '\x01') {
        lVar14 = FWeakObjectPtr::Get(param_1 + 0x10);
        if (lVar14 == 0) {
          local_68 = (void *)0x0;
          local_60 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
        }
        else {
          local_res8 = *(ulonglong *)(lVar14 + 0x18);
          FName::ToString(&local_res8,&local_68);
        }
        FString::operator=(param_2,&local_68);
        if (local_68 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free();
        return param_2;
      }
      if (cVar10 == '\x02') {
        lVar14 = FWeakObjectPtr::Get(param_1 + 0x18);
        if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x118) != 0)) {
          local_res8 = *(ulonglong *)(*(longlong *)(lVar14 + 0x118) + 0x18);
          FName::ToString(&local_res8,&local_58);
          if (param_2 == &local_58) {
            if (local_58 != (void *)0x0) {
              FMemory::Free();
            }
          }
          else {
            if (*param_2 != (void *)0x0) {
              FMemory::Free();
            }
            *param_2 = local_58;
            *(int *)(param_2 + 1) = (int)local_50;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
          }
          iVar11 = *(int *)(param_2 + 1);
          iVar12 = iVar11 + -1;
          if (iVar11 < 1) {
            iVar12 = iVar17;
          }
          iVar11 = (iVar11 < 1) + 1 + iVar11;
          *(int *)(param_2 + 1) = iVar11;
          if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)((longlong)*param_2 + (longlong)iVar12 * 2) = 0x2e;
          *(undefined2 *)((longlong)*param_2 + (longlong)iVar12 * 2 + 2) = 0;
        }
        lVar14 = FWeakObjectPtr::Get(param_1 + 0x18);
        if (lVar14 == 0) {
          local_68 = (void *)0x0;
          local_60 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
        }
        else {
          local_res8 = *(ulonglong *)(lVar14 + 0x18);
          FName::ToString(&local_res8,&local_68);
        }
        pvVar18 = local_68;
        if ((int)local_60 != 0) {
          iVar17 = (int)local_60 + -1;
        }
        if (iVar17 != 0) {
          iVar11 = *(int *)(param_2 + 1);
          iVar12 = (uint)(iVar11 == 0) + iVar17 + iVar11;
          *(int *)(param_2 + 1) = iVar12;
          if (*(int *)((longlong)param_2 + 0xc) < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
          }
          pvVar1 = (void *)((longlong)*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar18,(longlong)iVar17 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar17 * 2) = 0;
        }
        if (local_68 == (void *)0x0) {
          return param_2;
        }
        FMemory::Free(local_68);
        return param_2;
      }
      if (*param_2 == &DAT_145a05c20) {
        return param_2;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,5);
        iVar17 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar17 + 5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar17 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
      }
      puVar15 = *param_2;
      *puVar15 = 0x65006e006f004e;
      goto LAB_142f9f768;
    }
  }
  else {
    if (*param_1 == '\x02') {
      lVar14 = 0x18;
      goto LAB_142f9f78f;
    }
    if ((((float)DAT_14676e1b0 != *(float *)(param_1 + 4)) ||
        (DAT_14676e1b0._4_4_ != *(float *)(param_1 + 8))) ||
       (DAT_14676e1b8 != *(float *)(param_1 + 0xc))) goto LAB_142f9f7b0;
  }
  if (*param_2 == &DAT_145a05c30) {
    return param_2;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,5);
    iVar17 = *(int *)(param_2 + 1);
  }
  *(int *)(param_2 + 1) = iVar17 + 5;
  if (*(int *)((longlong)param_2 + 0xc) < iVar17 + 5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
  }
  puVar15 = *param_2;
  *puVar15 = 0x65006e006f004e;
LAB_142f9f768:
  *(undefined2 *)(puVar15 + 1) = 0;
  return param_2;
}



// FUNCTION 142f9ffb0 FUN_142f9ffb0 body=949 status=ok
// SIG undefined FUN_142f9ffb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142f9ffb0(longlong param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  param_2[2] = DAT_1468b5d98;
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    return param_2;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  else {
    if (cVar1 != '\x02') goto LAB_142fa0015;
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  if (lVar2 == 0) {
    return param_2;
  }
LAB_142fa0015:
  if (cVar1 == '\x01') {
    piVar3 = (int *)UDynamicEntryBox::GetAllEntries(*(undefined8 *)(param_1 + 0x60));
    if (*piVar3 != 0) {
      return param_2;
    }
    *(undefined8 *)param_2 = *(undefined8 *)(piVar3 + 0xc);
    fVar6 = param_2[1];
    fVar9 = *param_2;
    param_2[2] = 0.0;
    fVar5 = fVar9 * fVar9 + fVar6 * fVar6;
    if (fVar5 <= 1e-08) {
      return param_2;
    }
    auVar10 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar8 = auVar10._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
  }
  else {
    if (cVar1 != '\x02') {
      return param_2;
    }
    piVar3 = (int *)FUN_1407ffb90(*(undefined8 *)(param_1 + 0x70));
    if (*piVar3 != 0) {
      return param_2;
    }
    if (*(float *)(param_1 + 0x38) <= -(float)DAT_14676e1b0) {
      return param_2;
    }
    if ((float)DAT_14676e1b0 <= *(float *)(param_1 + 0x38)) {
      return param_2;
    }
    if (*(float *)(param_1 + 0x3c) <= -DAT_14676e1b0._4_4_) {
      return param_2;
    }
    if (DAT_14676e1b0._4_4_ <= *(float *)(param_1 + 0x3c)) {
      return param_2;
    }
    if (*(float *)(param_1 + 0x40) <= -DAT_14676e1b8) {
      return param_2;
    }
    if (DAT_14676e1b8 <= *(float *)(param_1 + 0x40)) {
      return param_2;
    }
    pfVar4 = (float *)FUN_142fa3db0(param_1,&local_48);
    local_48 = *(float *)(param_1 + 0x38) - *pfVar4;
    fStack_44 = *(float *)(param_1 + 0x3c) - pfVar4[1];
    local_40 = *(float *)(param_1 + 0x40) - pfVar4[2];
    fVar6 = fStack_44 * fStack_44 + local_48 * local_48;
    if (_DAT_14676e1f8 <= fVar6) {
      fVar6 = local_40 * local_40 + fVar6;
      if (fVar6 != 1.0) {
        if (1e-08 <= fVar6) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar9 = auVar10._0_4_;
          fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
          fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
          local_48 = local_48 * fVar9;
          fStack_44 = fStack_44 * fVar9;
          local_40 = local_40 * fVar9;
        }
        else {
          local_48 = DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
          fStack_44 = DAT_1468b5d94;
        }
      }
      *(ulonglong *)param_2 = CONCAT44(fStack_44,local_48);
      param_2[2] = local_40;
      return param_2;
    }
    fVar6 = (float)piVar3[0xd];
    fVar9 = (float)piVar3[0xe];
    *param_2 = (float)piVar3[0xc];
    param_2[1] = fVar6;
    param_2[2] = fVar9;
    fVar6 = param_2[1];
    fVar9 = *param_2;
    fVar5 = param_2[2];
    fVar7 = fVar9 * fVar9 + fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar7 <= 1e-08) {
      return param_2;
    }
    auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar10._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
    param_2[2] = fVar5 * fVar8;
  }
  param_2[1] = fVar6 * fVar8;
  *param_2 = fVar9 * fVar8;
  return param_2;
}



// FUNCTION 142fa0370 FUN_142fa0370 body=803 status=ok
// SIG undefined FUN_142fa0370(void)

float * FUN_142fa0370(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  FUN_142c626d0(param_2);
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 == 0) {
    return param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    return param_2;
  }
  if (*(longlong *)(lVar1 + 0x178) == 0) {
    return param_2;
  }
  local_50 = *(float *)(lVar2 + 0x5fc);
  local_58 = *(undefined8 *)(lVar2 + 0x5f4);
  if (((*(char *)(param_1 + 0x38) - 3U & 0xfd) != 0) || (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_142fa4860(param_1,local_48);
    fVar7 = *(float *)(*(longlong *)(param_1 + 0x60) + 0x614);
    fVar6 = (float)FUN_142f9d900(param_1);
    if (fVar7 <= fVar6) {
      fVar6 = fVar7;
    }
    fVar3 = (float)FUN_142fa3e70(*(undefined8 *)(param_1 + 0x60),local_48,fVar6);
    fVar3 = fVar3 + *(float *)(*(longlong *)(param_1 + 0x60) + 0x5e0);
    fVar7 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
    if (ABS(fVar3) < ABS(fVar7)) {
      fVar7 = fVar3;
    }
    fVar3 = fVar3 - fVar7;
    if (fVar3 < 0.0) {
      fVar3 = fVar3 + 360.0;
    }
    if (180.0 < fVar3) {
      fVar3 = fVar3 - 360.0;
    }
    *param_2 = fVar3;
    *(ulonglong *)(param_2 + 1) = CONCAT44(local_34 * fVar6 + local_40,local_38 * fVar6 + local_44);
    param_2[3] = local_30 * fVar6 + local_3c;
    return param_2;
  }
  if (*(char *)(param_1 + 0x38) == '\x03') {
    local_68 = *(undefined8 *)(lVar2 + 0x784);
    local_70 = *(float *)(lVar2 + 0x78c);
    goto LAB_142fa0527;
  }
  fVar7 = *(float *)(lVar1 + 400);
  fVar6 = *(float *)(lVar1 + 0x18c);
  fVar3 = fVar6 * fVar6 + fVar7 * fVar7;
  if (fVar3 == 1.0) {
    if (*(float *)(lVar1 + 0x194) == 0.0) {
      local_78 = *(undefined8 *)(lVar1 + 0x18c);
      local_70 = *(float *)(lVar1 + 0x194);
    }
    else {
LAB_142fa0510:
      local_70 = 0.0;
      local_78 = CONCAT44(fVar7,fVar6);
    }
  }
  else {
    if (1e-08 <= fVar3) {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar6 = fVar6 * fVar4;
      fVar7 = fVar7 * fVar4;
      goto LAB_142fa0510;
    }
    local_70 = DAT_1468b5d98;
    local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  local_68 = local_78;
LAB_142fa0527:
  local_50 = local_70 * 10000.0 + local_50;
  local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
  *(ulonglong *)(param_2 + 1) =
       CONCAT44(local_68._4_4_ * 10000.0 + local_58._4_4_,
                (float)local_68 * 10000.0 + (float)local_58);
  param_2[3] = local_50;
  local_60 = local_70;
  lVar2 = FVector::Rotation(&local_68,&local_58);
  *param_2 = *(float *)(lVar2 + 4);
  return param_2;
}



// FUNCTION 142fa06a0 FUN_142fa06a0 body=1026 status=ok
// SIG undefined FUN_142fa06a0(void)

void FUN_142fa06a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  
  if (param_2 != 0) {
    uVar1 = FUN_142fc5d60();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2), lVar3 != 0))
    {
      uVar6 = FUN_1423ac1f0(lVar3,param_1 + 0x2b4);
      FUN_1423ae500(lVar3,uVar6);
      FRotator::Vector(param_3,&local_e0);
      FUN_1423adf70(lVar3,&local_f0);
      puVar4 = (undefined8 *)FVector::Rotation(&local_f0,&local_d0);
      fVar19 = 0.0;
      *param_4 = *puVar4;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar4 + 1);
      fVar9 = local_e8 * DAT_1464aa798._4_4_;
      fVar7 = local_ec * DAT_1464aa7a0;
      fVar13 = local_e8 * (float)DAT_1464aa798;
      fVar20 = local_ec * (float)DAT_1464aa798;
      fVar10 = local_f0 * DAT_1464aa798._4_4_;
      fVar14 = local_f0 * DAT_1464aa7a0;
      fVar11 = local_dc * *(float *)(param_1 + 400) + local_e0 * *(float *)(param_1 + 0x18c) +
               local_d8 * *(float *)(param_1 + 0x194);
      fVar11 = SQRT(local_dc * fVar11 * local_dc * fVar11 + local_e0 * fVar11 * local_e0 * fVar11 +
                    local_d8 * fVar11 * local_d8 * fVar11) * (1.0 / *(float *)(param_1 + 0x214));
      if (0.0 <= fVar11) {
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      uVar6 = FUN_1423ac1f0(lVar3,param_1 + 0x2b4);
      fVar8 = (float)FUN_1423ae500(lVar3,uVar6);
      iVar5 = 1;
      do {
        FUN_1423adf70(lVar3,&local_d0,(float)iVar5 * 1200.0 + fVar8,1);
        fVar12 = local_cc * local_cc + local_d0 * local_d0 + local_c8 * local_c8;
        fVar17 = local_cc;
        fVar18 = local_d0;
        fVar15 = local_c8;
        if ((fVar12 != 1.0) &&
           (fVar17 = DAT_1468b5d94, fVar18 = DAT_1468b5d90, fVar15 = DAT_1468b5d98, 1e-08 <= fVar12)
           ) {
          auVar16 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar15 = auVar16._0_4_;
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          fVar18 = local_d0 * fVar15;
          fVar17 = local_cc * fVar15;
          fVar15 = local_c8 * fVar15;
        }
        iVar5 = iVar5 + 1;
        fVar19 = fVar19 + fVar17 * (fVar14 - fVar13) + fVar18 * (fVar9 - fVar7) +
                          fVar15 * (fVar20 - fVar10);
      } while (iVar5 < 6);
      fVar19 = fVar19 * 0.3;
      fVar7 = -1.0;
      if ((-1.0 <= fVar19) && (fVar7 = fVar19, 1.0 <= fVar19)) {
        fVar7 = 1.0;
      }
      *(float *)(param_4 + 1) = fVar7 * fVar11 * *(float *)(param_1 + 0x27c);
    }
  }
  return;
}



// FUNCTION 142fa0ab0 FUN_142fa0ab0 body=468 status=ok
// SIG undefined FUN_142fa0ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142fa0ab0(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  cVar3 = FUN_142fa53c0();
  if (cVar3 == '\0') {
    fVar7 = *(float *)(param_1 + 0x77c);
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x774);
    param_2[2] = fVar7;
    return param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x278);
  uVar1 = *(undefined8 *)(param_1 + 0x784);
  local_50 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
  local_58._0_4_ = (float)uVar1;
  fVar7 = *(float *)(lVar2 + 0x20) - (float)local_58;
  local_58._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar8 = *(float *)(lVar2 + 0x24) - local_58._4_4_;
  fVar9 = *(float *)(lVar2 + 0x28) - local_50;
  local_48 = CONCAT44(fVar8,fVar7);
  local_40 = fVar9;
  if (*(char *)(param_1 + 0x781) == '\x02') {
    local_58 = uVar1;
    cVar3 = FUN_142c738d0(lVar2 + 0x3c,&local_58);
    if (cVar3 != '\0') {
      fVar7 = 0.0;
      local_48 = 0;
      fVar8 = 0.0;
    }
  }
  fVar5 = DAT_1468b5d98;
  fVar4 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
  if (fVar4 == 1.0) {
    *(undefined8 *)param_2 = local_48;
    param_2[2] = local_40;
  }
  else if (1e-08 <= fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    *param_2 = fVar5 * fVar7;
    param_2[1] = fVar8 * fVar5;
    param_2[2] = fVar9 * fVar5;
  }
  else {
    *(undefined8 *)param_2 = _DAT_1468b5d90;
    param_2[2] = fVar5;
  }
  return param_2;
}



// FUNCTION 142fa0c90 FUN_142fa0c90 body=1388 status=ok
// SIG undefined FUN_142fa0c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142fa0c90(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX;
  int iVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
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
  float local_e8;
  float fStack_e4;
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
  
  fVar2 = fRam0000000146b43ffc;
  fVar6 = fRam0000000146b43ff8;
  fVar5 = fRam0000000146b43ff4;
  fVar4 = _DAT_146b43ff0;
  fVar3 = fRam0000000146b43f1c;
  fVar47 = fRam0000000146b43f18;
  fVar46 = fRam0000000146b43f14;
  fVar45 = _DAT_146b43f10;
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar19 = auVar8._0_4_;
  fVar21 = auVar8._4_4_;
  fVar29 = auVar8._8_4_;
  fVar31 = auVar8._12_4_;
  auVar9 = *(undefined1 (*) [16])(param_1 + 0x720);
  fVar20 = auVar9._0_4_;
  fVar22 = auVar9._4_4_;
  fVar30 = auVar9._8_4_;
  fVar32 = auVar9._12_4_;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar3;
  fVar10 = (float)((uint)fVar46 & uRam0000000146b43f24);
  fVar11 = (float)((uint)fVar47 & uRam0000000146b43f28);
  fVar12 = (float)((uint)fVar3 & uRam0000000146b43f2c);
  param_2[8] = (float)((uint)fVar45 & _DAT_146b43f20);
  param_2[9] = fVar10;
  param_2[10] = fVar11;
  param_2[0xb] = fVar12;
  auVar8 = minps(auVar9,auVar8);
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  auVar9._4_4_ = -(uint)(auVar8._4_4_ < fVar5);
  auVar9._0_4_ = -(uint)(auVar8._0_4_ < fVar4);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ < fVar6);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ < fVar2);
  iVar7 = movmskps(in_EAX,auVar9);
  if (iVar7 == 0) {
    fVar45 = *(float *)(param_1 + 0x210);
    fVar46 = *(float *)(param_1 + 0x214);
    fVar47 = *(float *)(param_1 + 0x218);
    fVar3 = *(float *)(param_1 + 0x21c);
    fVar4 = *(float *)(param_1 + 0x700);
    fVar5 = *(float *)(param_1 + 0x704);
    fVar6 = *(float *)(param_1 + 0x708);
    fVar2 = *(float *)(param_1 + 0x70c);
    fVar26 = *(float *)(param_1 + 0x710) * fVar19;
    fVar28 = *(float *)(param_1 + 0x714) * fVar21;
    fVar33 = *(float *)(param_1 + 0x718) * fVar29;
    fVar34 = *(float *)(param_1 + 0x71c) * fVar31;
    fVar23 = fVar2 * fVar45 * _DAT_146b43fb0;
    fVar17 = fVar6 * fVar45 * fRam0000000146b43fb4;
    fVar27 = fVar5 * fVar45 * fRam0000000146b43fb8;
    fVar18 = fVar4 * fVar45 * fRam0000000146b43fbc;
    fVar14 = fVar46 * fVar6 * _DAT_146b43fa0;
    fVar16 = fVar46 * fVar2 * fRam0000000146b43fa4;
    fVar24 = fVar46 * fVar4 * fRam0000000146b43fa8;
    fVar25 = fVar46 * fVar5 * fRam0000000146b43fac;
    fVar10 = fVar47 * fVar5 * _DAT_146b43f90;
    fVar11 = fVar47 * fVar4 * fRam0000000146b43f94;
    fVar12 = fVar47 * fVar2 * fRam0000000146b43f98;
    fVar13 = fVar47 * fVar6 * fRam0000000146b43f9c;
    param_2[8] = fVar20 * fVar19;
    param_2[9] = fVar22 * fVar21;
    param_2[10] = fVar30 * fVar29;
    param_2[0xb] = fVar32 * fVar31;
    *param_2 = fVar23 + fVar3 * fVar4 + fVar14 + fVar10;
    param_2[1] = fVar17 + fVar3 * fVar5 + fVar16 + fVar11;
    param_2[2] = fVar27 + fVar3 * fVar6 + fVar24 + fVar12;
    param_2[3] = fVar18 + fVar3 * fVar2 + fVar25 + fVar13;
    fVar22 = fVar33 * fVar46 - fVar28 * fVar47;
    fVar29 = fVar26 * fVar47 - fVar33 * fVar45;
    fVar30 = fVar28 * fVar45 - fVar26 * fVar46;
    fVar31 = fVar34 * fVar3 - fVar34 * fVar3;
    fVar22 = fVar22 + fVar22;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar19 = *(float *)(param_1 + 0x224);
    fVar20 = *(float *)(param_1 + 0x228);
    fVar21 = *(float *)(param_1 + 0x22c);
    param_2[4] = (fVar30 * fVar46 - fVar29 * fVar47) + fVar3 * fVar22 + fVar26 +
                 *(float *)(param_1 + 0x220);
    param_2[5] = (fVar22 * fVar47 - fVar30 * fVar45) + fVar3 * fVar29 + fVar28 + fVar19;
    param_2[6] = (fVar29 * fVar45 - fVar22 * fVar46) + fVar3 * fVar30 + fVar33 + fVar20;
    param_2[7] = (fVar31 * fVar3 - fVar31 * fVar3) + fVar3 * fVar31 + fVar34 + fVar21;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x210);
    fVar10 = *(float *)(param_1 + 0x214);
    fVar11 = *(float *)(param_1 + 0x218);
    fVar12 = *(float *)(param_1 + 0x21c);
    fVar23 = fVar10 + fVar10;
    fVar25 = fVar11 + fVar11;
    fVar13 = *(float *)(param_1 + 0x220);
    fVar14 = *(float *)(param_1 + 0x224);
    fVar16 = *(float *)(param_1 + 0x228);
    fVar27 = fVar2 * (fVar2 + fVar2);
    fVar24 = (fVar2 + fVar2) * fVar12;
    fVar42 = (fVar25 * fVar12 + fVar23 * fVar2) * fVar19;
    fVar43 = (fVar24 + fVar25 * fVar10) * fVar21;
    fVar44 = (fVar23 * fVar12 + fVar25 * fVar2) * fVar29;
    fVar33 = fVar21 * (fVar23 * fVar2 - fVar25 * fVar12);
    fVar35 = fVar29 * (fVar25 * fVar10 - fVar24);
    fVar37 = fVar19 * (fVar25 * fVar2 - fVar23 * fVar12);
    fVar24 = (float)((uint)((fVar45 - (fVar11 * fVar25 + fVar10 * fVar23)) * fVar19) &
                    _DAT_146b43f20);
    fVar25 = (float)((uint)((fVar46 - (fVar11 * fVar25 + fVar27)) * fVar21) & uRam0000000146b43f24);
    fVar17 = (float)((uint)((fVar47 - (fVar10 * fVar23 + fVar27)) * fVar29) & uRam0000000146b43f28);
    fVar18 = (float)((uint)((fVar3 - (fVar27 + fVar27)) * fVar31) & uRam0000000146b43f2c);
    fVar2 = *(float *)(param_1 + 0x700);
    fVar10 = *(float *)(param_1 + 0x704);
    fVar11 = *(float *)(param_1 + 0x708);
    fVar12 = *(float *)(param_1 + 0x70c);
    fVar27 = fVar10 + fVar10;
    fVar26 = fVar11 + fVar11;
    fVar28 = fVar2 * (fVar2 + fVar2);
    fVar23 = (fVar2 + fVar2) * fVar12;
    fVar39 = (fVar26 * fVar12 + fVar27 * fVar2) * fVar20;
    fVar40 = (fVar23 + fVar26 * fVar10) * fVar22;
    fVar41 = (fVar27 * fVar12 + fVar26 * fVar2) * fVar30;
    fVar34 = fVar22 * (fVar27 * fVar2 - fVar26 * fVar12);
    fVar36 = fVar30 * (fVar26 * fVar10 - fVar23);
    fVar38 = fVar20 * (fVar26 * fVar2 - fVar27 * fVar12);
    fVar12 = (float)((uint)((fVar45 - (fVar11 * fVar26 + fVar10 * fVar27)) * fVar20) &
                    _DAT_146b43f20);
    fVar23 = (float)((uint)((fVar46 - (fVar11 * fVar26 + fVar28)) * fVar22) & uRam0000000146b43f24);
    fVar27 = (float)((uint)((fVar47 - (fVar10 * fVar27 + fVar28)) * fVar30) & uRam0000000146b43f28);
    fVar26 = (float)((uint)((fVar3 - (fVar28 + fVar28)) * fVar32) & uRam0000000146b43f2c);
    fVar2 = *(float *)(param_1 + 0x710);
    fVar10 = *(float *)(param_1 + 0x714);
    fVar11 = *(float *)(param_1 + 0x718);
    local_d8 = fVar39 * fVar33 + fVar12 * fVar24 + fVar38 * fVar44 + fVar26 * fVar13;
    fStack_d4 = fVar39 * fVar25 + fVar12 * fVar42 + fVar38 * fVar35 + fVar26 * fVar14;
    fStack_d0 = fVar39 * fVar43 + fVar12 * fVar37 + fVar38 * fVar17 + fVar26 * fVar16;
    fStack_cc = fVar39 * fVar18 + fVar12 * fVar18 + fVar38 * fVar18 + fVar26 * fVar3;
    local_c8 = fVar23 * fVar33 + fVar34 * fVar24 + fVar40 * fVar44 + fVar26 * fVar13;
    fStack_c4 = fVar23 * fVar25 + fVar34 * fVar42 + fVar40 * fVar35 + fVar26 * fVar14;
    fStack_c0 = fVar23 * fVar43 + fVar34 * fVar37 + fVar40 * fVar17 + fVar26 * fVar16;
    fStack_bc = fVar23 * fVar18 + fVar34 * fVar18 + fVar40 * fVar18 + fVar26 * fVar3;
    local_b8 = fVar36 * fVar33 + fVar41 * fVar24 + fVar27 * fVar44 + fVar26 * fVar13;
    fStack_b4 = fVar36 * fVar25 + fVar41 * fVar42 + fVar27 * fVar35 + fVar26 * fVar14;
    fStack_b0 = fVar36 * fVar43 + fVar41 * fVar37 + fVar27 * fVar17 + fVar26 * fVar16;
    fStack_ac = fVar36 * fVar18 + fVar41 * fVar18 + fVar27 * fVar18 + fVar26 * fVar3;
    local_a8 = fVar10 * fVar33 + fVar2 * fVar24 + fVar11 * fVar44 + fVar3 * fVar13;
    fStack_a4 = fVar10 * fVar25 + fVar2 * fVar42 + fVar11 * fVar35 + fVar3 * fVar14;
    fStack_a0 = fVar10 * fVar43 + fVar2 * fVar37 + fVar11 * fVar17 + fVar3 * fVar16;
    fStack_9c = fVar10 * fVar18 + fVar2 * fVar18 + fVar11 * fVar18 + fVar3 * fVar3;
    FMatrix::RemoveScaling(&local_d8);
    fVar45 = (float)(-(uint)(fVar4 <= fVar20 * fVar19) & (_DAT_146b43fe0 ^ (uint)fVar45) ^
                    _DAT_146b43fe0);
    fVar46 = (float)(-(uint)(fVar5 <= fVar22 * fVar21) & (uRam0000000146b43fe4 ^ (uint)fVar46) ^
                    uRam0000000146b43fe4);
    fVar47 = (float)(-(uint)(fVar6 <= fVar30 * fVar29) & (uRam0000000146b43fe8 ^ (uint)fVar47) ^
                    uRam0000000146b43fe8);
    local_d8 = local_d8 * fVar45;
    fStack_d4 = fStack_d4 * fVar45;
    fStack_d0 = fStack_d0 * fVar45;
    fStack_c4 = fStack_c4 * fVar46;
    fStack_c0 = fStack_c0 * fVar46;
    local_c8 = local_c8 * fVar46;
    fStack_b4 = fStack_b4 * fVar47;
    fStack_b0 = fStack_b0 * fVar47;
    local_b8 = local_b8 * fVar47;
    FQuat::FQuat(&local_e8,&local_d8);
    fVar3 = fRam0000000146b43fdc;
    fVar47 = fRam0000000146b43fd8;
    fVar46 = fRam0000000146b43fd4;
    fVar45 = _DAT_146b43fd0;
    param_2[8] = fVar20 * fVar19;
    param_2[9] = fVar22 * fVar21;
    param_2[10] = fVar30 * fVar29;
    param_2[0xb] = fVar32 * fVar31;
    auVar15._0_4_ = local_e8 * local_e8 + fStack_e0 * fStack_e0;
    auVar15._4_4_ = fStack_e4 * fStack_e4 + fStack_dc * fStack_dc;
    auVar15._8_4_ = fStack_e0 * fStack_e0 + local_e8 * local_e8;
    auVar15._12_4_ = fStack_dc * fStack_dc + fStack_e4 * fStack_e4;
    fVar29 = auVar15._4_4_ + auVar15._0_4_;
    fVar30 = auVar15._8_4_ + auVar15._4_4_;
    fVar31 = auVar15._12_4_ + auVar15._8_4_;
    fVar32 = auVar15._0_4_ + auVar15._12_4_;
    auVar1._4_4_ = fVar30;
    auVar1._0_4_ = fVar29;
    auVar1._8_4_ = fVar31;
    auVar1._12_4_ = fVar32;
    auVar8 = rsqrtps(auVar15,auVar1);
    fVar19 = auVar8._0_4_;
    fVar20 = auVar8._4_4_;
    fVar21 = auVar8._8_4_;
    fVar22 = auVar8._12_4_;
    fVar19 = (fVar45 - fVar19 * fVar19 * fVar29 * fVar45) * fVar19 + fVar19;
    fVar20 = (fVar46 - fVar20 * fVar20 * fVar30 * fVar46) * fVar20 + fVar20;
    fVar21 = (fVar47 - fVar21 * fVar21 * fVar31 * fVar47) * fVar21 + fVar21;
    fVar22 = (fVar3 - fVar22 * fVar22 * fVar32 * fVar3) * fVar22 + fVar22;
    auVar8._4_4_ = fStack_a4;
    auVar8._0_4_ = local_a8;
    auVar8._8_4_ = fStack_a0;
    fVar19 = (float)(((uint)(((fVar45 - fVar19 * fVar19 * fVar29 * fVar45) * fVar19 + fVar19) *
                            local_e8) ^ _DAT_146b43fc0) & -(uint)(1e-08 <= fVar29) ^ _DAT_146b43fc0)
    ;
    fVar20 = (float)(((uint)(((fVar46 - fVar20 * fVar20 * fVar30 * fVar46) * fVar20 + fVar20) *
                            fStack_e4) ^ uRam0000000146b43fc4) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146b43fc4);
    fVar21 = (float)(((uint)(((fVar47 - fVar21 * fVar21 * fVar31 * fVar47) * fVar21 + fVar21) *
                            fStack_e0) ^ uRam0000000146b43fc8) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146b43fc8);
    fVar22 = (float)(((uint)(((fVar3 - fVar22 * fVar22 * fVar32 * fVar3) * fVar22 + fVar22) *
                            fStack_dc) ^ uRam0000000146b43fcc) & -(uint)(1e-08 <= fVar32) ^
                    uRam0000000146b43fcc);
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar8;
    *param_2 = fVar19;
    param_2[1] = fVar20;
    param_2[2] = fVar21;
    param_2[3] = fVar22;
  }
  return param_2;
}



// FUNCTION 142fa1200 FUN_142fa1200 body=235 status=ok
// SIG undefined FUN_142fa1200(void)

float * FUN_142fa1200(longlong param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_58 [80];
  
  if (0.0 <= param_3) {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
  }
  else {
    param_3 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x734);
  if (param_4 <= 0.0) {
    param_4 = 64.0;
  }
  pfVar7 = (float *)FUN_142fa1940(0x3f800000,local_58,param_4);
  fVar2 = *pfVar7;
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[2];
  fVar5 = pfVar7[3];
  fVar11 = pfVar7[8] * 0.0;
  fVar12 = ((param_3 + param_3) - 1.0) * fVar1 * pfVar7[9];
  fVar13 = pfVar7[10] * 0.0;
  fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
  fVar9 = fVar11 * fVar4 - fVar13 * fVar2;
  fVar10 = fVar12 * fVar2 - fVar11 * fVar3;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar1 = pfVar7[5];
  fVar6 = pfVar7[6];
  *param_2 = (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11 + pfVar7[4];
  param_2[2] = (fVar9 * fVar2 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13 + fVar6;
  param_2[1] = (fVar8 * fVar4 - fVar10 * fVar2) + fVar5 * fVar9 + fVar12 + fVar1;
  return param_2;
}



// FUNCTION 142fa12f0 FUN_142fa12f0 body=181 status=ok
// SIG undefined FUN_142fa12f0(void)

undefined8 * FUN_142fa12f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (((cVar1 != '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    FUN_142f9b930(param_1 + 0x30,local_res8,param_2);
    puVar5 = (undefined8 *)0x0;
    puVar4 = puVar5;
    if (local_res8[0] != -1) {
      puVar4 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x30));
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = puVar5;
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return puVar5;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fa13b0 FUN_142fa13b0 body=1420 status=ok
// SIG undefined FUN_142fa13b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142fa13b0(longlong param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_EAX;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar12 [16];
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
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
  
  uVar5 = uRam0000000146b43f2c;
  uVar4 = uRam0000000146b43f28;
  uVar3 = uRam0000000146b43f24;
  uVar2 = _DAT_146b43f20;
  fVar34 = fRam0000000146b43f1c;
  fVar33 = fRam0000000146b43f18;
  fVar30 = fRam0000000146b43f14;
  fVar28 = _DAT_146b43f10;
  param_3 = -param_3;
  fVar11 = *(float *)(param_1 + 0x210);
  fVar15 = *(float *)(param_1 + 0x214);
  fVar14 = *(float *)(param_1 + 0x218);
  fVar18 = *(float *)(param_1 + 0x21c);
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar20 = auVar8._0_4_;
  fVar22 = auVar8._4_4_;
  fVar24 = auVar8._8_4_;
  fVar25 = auVar8._12_4_;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  fVar42 = (float)((uint)fVar28 & uVar2);
  fVar43 = (float)((uint)fVar30 & uVar3);
  fVar44 = (float)((uint)fVar33 & uVar4);
  fVar45 = (float)((uint)fVar34 & uVar5);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar34;
  auVar7._4_4_ = fVar43;
  auVar7._0_4_ = fVar42;
  auVar7._8_4_ = fVar44;
  auVar7._12_4_ = fVar45;
  auVar8 = minps(auVar7,auVar8);
  param_2[8] = fVar42;
  param_2[9] = fVar43;
  param_2[10] = fVar44;
  param_2[0xb] = fVar45;
  auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam0000000146b43ff4);
  auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_146b43ff0);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam0000000146b43ff8);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam0000000146b43ffc);
  iVar6 = movmskps(in_EAX,auVar9);
  if (iVar6 == 0) {
    param_3 = fVar20 * param_3;
    fVar16 = fVar22 * 0.0;
    fVar17 = fVar24 * 0.0;
    fVar26 = fVar25 * 0.0;
    fVar21 = fVar11 * fVar34 * _DAT_146b43fb0;
    fVar23 = fVar11 * 0.0 * fRam0000000146b43fb4;
    fVar10 = fVar11 * 0.0 * fRam0000000146b43fb8;
    fVar13 = fVar11 * 0.0 * fRam0000000146b43fbc;
    fVar28 = fVar15 * 0.0 * _DAT_146b43fa0;
    fVar30 = fVar15 * fVar34 * fRam0000000146b43fa4;
    fVar33 = fVar15 * 0.0 * fRam0000000146b43fa8;
    fVar19 = fVar15 * 0.0 * fRam0000000146b43fac;
    param_2[8] = fVar42 * fVar20;
    param_2[9] = fVar43 * fVar22;
    param_2[10] = fVar44 * fVar24;
    param_2[0xb] = fVar45 * fVar25;
    fVar20 = fVar14 * 0.0 * fRam0000000146b43f94;
    fVar22 = fVar14 * fVar34 * fRam0000000146b43f98;
    fVar24 = fVar14 * 0.0 * fRam0000000146b43f9c;
    *param_2 = fVar21 + fVar18 * 0.0 + fVar28 + fVar14 * 0.0 * _DAT_146b43f90;
    param_2[1] = fVar23 + fVar18 * 0.0 + fVar30 + fVar20;
    param_2[2] = fVar10 + fVar18 * 0.0 + fVar33 + fVar22;
    param_2[3] = fVar13 + fVar18 * fVar34 + fVar19 + fVar24;
    fVar25 = fVar17 * fVar15 - fVar16 * fVar14;
    fVar28 = param_3 * fVar14 - fVar17 * fVar11;
    fVar30 = fVar16 * fVar11 - param_3 * fVar15;
    fVar33 = fVar26 * fVar18 - fVar26 * fVar18;
    fVar25 = fVar25 + fVar25;
    fVar28 = fVar28 + fVar28;
    fVar30 = fVar30 + fVar30;
    fVar33 = fVar33 + fVar33;
    fVar20 = *(float *)(param_1 + 0x224);
    fVar22 = *(float *)(param_1 + 0x228);
    fVar24 = *(float *)(param_1 + 0x22c);
    param_2[4] = (fVar30 * fVar15 - fVar28 * fVar14) + fVar18 * fVar25 + param_3 +
                 *(float *)(param_1 + 0x220);
    param_2[5] = (fVar25 * fVar14 - fVar30 * fVar11) + fVar18 * fVar28 + fVar16 + fVar20;
    param_2[6] = (fVar28 * fVar11 - fVar25 * fVar15) + fVar18 * fVar30 + fVar17 + fVar22;
    param_2[7] = (fVar33 * fVar18 - fVar33 * fVar18) + fVar18 * fVar33 + fVar26 + fVar24;
  }
  else {
    fVar13 = fVar15 + fVar15;
    fVar16 = fVar14 + fVar14;
    fVar19 = *(float *)(param_1 + 0x220);
    fVar21 = *(float *)(param_1 + 0x224);
    fVar23 = *(float *)(param_1 + 0x228);
    fVar26 = fVar11 * (fVar11 + fVar11);
    fVar36 = fVar18 * (fVar11 + fVar11);
    fVar39 = (fVar18 * fVar16 + fVar11 * fVar13) * fVar20;
    fVar40 = (fVar36 + fVar15 * fVar16) * fVar22;
    fVar41 = (fVar18 * fVar13 + fVar11 * fVar16) * fVar24;
    fVar10 = (float)((uint)((fVar28 - (fVar14 * fVar16 + fVar15 * fVar13)) * fVar20) & uVar2);
    fVar14 = (float)((uint)((fVar30 - (fVar14 * fVar16 + fVar26)) * fVar22) & uVar3);
    fVar17 = (float)((uint)((fVar33 - (fVar15 * fVar13 + fVar26)) * fVar24) & uVar4);
    fVar26 = (float)((uint)((fVar34 - (fVar26 + fVar26)) * fVar25) & uVar5);
    fVar27 = fVar22 * (fVar11 * fVar13 - fVar18 * fVar16);
    fVar36 = fVar24 * (fVar15 * fVar16 - fVar36);
    fVar31 = fVar20 * (fVar11 * fVar16 - fVar18 * fVar13);
    fVar35 = (fVar34 * 0.0 + 0.0) * fVar42;
    fVar37 = (fVar34 * 0.0 + 0.0) * fVar43;
    fVar38 = (fVar34 * 0.0 + 0.0) * fVar44;
    fVar16 = fVar43 * (0.0 - fVar34 * 0.0);
    fVar29 = fVar44 * (0.0 - fVar34 * 0.0);
    fVar32 = fVar42 * (0.0 - fVar34 * 0.0);
    fVar11 = (float)((uint)((fVar28 - 0.0) * fVar42) & uVar2);
    fVar15 = (float)((uint)((fVar30 - 0.0) * fVar43) & uVar3);
    fVar18 = (float)((uint)((fVar33 - 0.0) * fVar44) & uVar4);
    fVar13 = (float)((uint)((fVar34 - 0.0) * fVar45) & uVar5);
    local_e8 = fVar35 * fVar27 + fVar11 * fVar10 + fVar32 * fVar41 + fVar13 * fVar19;
    fStack_e4 = fVar35 * fVar14 + fVar11 * fVar39 + fVar32 * fVar36 + fVar13 * fVar21;
    fStack_e0 = fVar35 * fVar40 + fVar11 * fVar31 + fVar32 * fVar17 + fVar13 * fVar23;
    fStack_dc = fVar35 * fVar26 + fVar11 * fVar26 + fVar32 * fVar26 + fVar13 * fVar34;
    local_d8 = fVar15 * fVar27 + fVar16 * fVar10 + fVar37 * fVar41 + fVar13 * fVar19;
    fStack_d4 = fVar15 * fVar14 + fVar16 * fVar39 + fVar37 * fVar36 + fVar13 * fVar21;
    fStack_d0 = fVar15 * fVar40 + fVar16 * fVar31 + fVar37 * fVar17 + fVar13 * fVar23;
    fStack_cc = fVar15 * fVar26 + fVar16 * fVar26 + fVar37 * fVar26 + fVar13 * fVar34;
    local_c8 = fVar29 * fVar27 + fVar38 * fVar10 + fVar18 * fVar41 + fVar13 * fVar19;
    fStack_c4 = fVar29 * fVar14 + fVar38 * fVar39 + fVar18 * fVar36 + fVar13 * fVar21;
    fStack_c0 = fVar29 * fVar40 + fVar38 * fVar31 + fVar18 * fVar17 + fVar13 * fVar23;
    fStack_bc = fVar29 * fVar26 + fVar38 * fVar26 + fVar18 * fVar26 + fVar13 * fVar34;
    local_b8 = fVar27 * 0.0 + param_3 * fVar10 + fVar41 * 0.0 + fVar34 * fVar19;
    fStack_b4 = fVar14 * 0.0 + param_3 * fVar39 + fVar36 * 0.0 + fVar34 * fVar21;
    fStack_b0 = fVar40 * 0.0 + param_3 * fVar31 + fVar17 * 0.0 + fVar34 * fVar23;
    fStack_ac = fVar26 * 0.0 + param_3 * fVar26 + fVar26 * 0.0 + fVar34 * fVar34;
    FMatrix::RemoveScaling(&local_e8);
    fVar11 = (float)(-(uint)(_DAT_146b43ff0 <= fVar20 * fVar42) & (_DAT_146b43fe0 ^ (uint)fVar28) ^
                    _DAT_146b43fe0);
    fVar15 = (float)(-(uint)(fRam0000000146b43ff4 <= fVar22 * fVar43) &
                     (uRam0000000146b43fe4 ^ (uint)fVar30) ^ uRam0000000146b43fe4);
    fVar14 = (float)(-(uint)(fRam0000000146b43ff8 <= fVar24 * fVar44) &
                     (uRam0000000146b43fe8 ^ (uint)fVar33) ^ uRam0000000146b43fe8);
    local_e8 = local_e8 * fVar11;
    fStack_e4 = fStack_e4 * fVar11;
    fStack_e0 = fStack_e0 * fVar11;
    fStack_d4 = fStack_d4 * fVar15;
    fStack_d0 = fStack_d0 * fVar15;
    local_d8 = local_d8 * fVar15;
    fStack_c4 = fStack_c4 * fVar14;
    fStack_c0 = fStack_c0 * fVar14;
    local_c8 = local_c8 * fVar14;
    FQuat::FQuat(&local_f8,&local_e8);
    fVar18 = fRam0000000146b43fdc;
    fVar14 = fRam0000000146b43fd8;
    fVar15 = fRam0000000146b43fd4;
    fVar11 = _DAT_146b43fd0;
    param_2[8] = fVar20 * fVar42;
    param_2[9] = fVar22 * fVar43;
    param_2[10] = fVar24 * fVar44;
    param_2[0xb] = fVar25 * fVar45;
    auVar12._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar12._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar12._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar12._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar28 = auVar12._4_4_ + auVar12._0_4_;
    fVar30 = auVar12._8_4_ + auVar12._4_4_;
    fVar33 = auVar12._12_4_ + auVar12._8_4_;
    fVar34 = auVar12._0_4_ + auVar12._12_4_;
    auVar1._4_4_ = fVar30;
    auVar1._0_4_ = fVar28;
    auVar1._8_4_ = fVar33;
    auVar1._12_4_ = fVar34;
    auVar8 = rsqrtps(auVar12,auVar1);
    fVar20 = auVar8._0_4_;
    fVar22 = auVar8._4_4_;
    fVar24 = auVar8._8_4_;
    fVar25 = auVar8._12_4_;
    fVar20 = (fVar11 - fVar20 * fVar20 * fVar28 * fVar11) * fVar20 + fVar20;
    fVar22 = (fVar15 - fVar22 * fVar22 * fVar30 * fVar15) * fVar22 + fVar22;
    fVar24 = (fVar14 - fVar24 * fVar24 * fVar33 * fVar14) * fVar24 + fVar24;
    fVar25 = (fVar18 - fVar25 * fVar25 * fVar34 * fVar18) * fVar25 + fVar25;
    auVar8._4_4_ = fStack_b4;
    auVar8._0_4_ = local_b8;
    auVar8._8_4_ = fStack_b0;
    fVar20 = (float)(((uint)(((fVar11 - fVar20 * fVar20 * fVar28 * fVar11) * fVar20 + fVar20) *
                            local_f8) ^ _DAT_146b43fc0) & -(uint)(1e-08 <= fVar28) ^ _DAT_146b43fc0)
    ;
    fVar22 = (float)(((uint)(((fVar15 - fVar22 * fVar22 * fVar30 * fVar15) * fVar22 + fVar22) *
                            fStack_f4) ^ uRam0000000146b43fc4) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146b43fc4);
    fVar24 = (float)(((uint)(((fVar14 - fVar24 * fVar24 * fVar33 * fVar14) * fVar24 + fVar24) *
                            fStack_f0) ^ uRam0000000146b43fc8) & -(uint)(1e-08 <= fVar33) ^
                    uRam0000000146b43fc8);
    fVar25 = (float)(((uint)(((fVar18 - fVar25 * fVar25 * fVar34 * fVar18) * fVar25 + fVar25) *
                            fStack_ec) ^ uRam0000000146b43fcc) & -(uint)(1e-08 <= fVar34) ^
                    uRam0000000146b43fcc);
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar8;
    *param_2 = fVar20;
    param_2[1] = fVar22;
    param_2[2] = fVar24;
    param_2[3] = fVar25;
  }
  return param_2;
}



// FUNCTION 142fa1940 FUN_142fa1940 body=1450 status=ok
// SIG undefined FUN_142fa1940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142fa1940(undefined8 param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [48];
  float local_e8;
  float fStack_e4;
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
  
  uVar5 = uRam0000000146b43f2c;
  uVar4 = uRam0000000146b43f28;
  uVar3 = uRam0000000146b43f24;
  uVar2 = _DAT_146b43f20;
  fVar12 = fRam0000000146b43f1c;
  fVar43 = (float)((uint)_DAT_146b43f10 & _DAT_146b43f20);
  fVar44 = (float)((uint)fRam0000000146b43f14 & uRam0000000146b43f24);
  fVar45 = (float)((uint)fRam0000000146b43f18 & uRam0000000146b43f28);
  fVar46 = (float)((uint)fRam0000000146b43f1c & uRam0000000146b43f2c);
  pfVar7 = (float *)FUN_142fa0c90(param_1,local_118);
  fVar18 = fRam0000000146b43f1c;
  fVar35 = fRam0000000146b43f18;
  fVar31 = fRam0000000146b43f14;
  fVar27 = _DAT_146b43f10;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  auVar9 = *(undefined1 (*) [16])(pfVar7 + 8);
  fVar19 = auVar9._0_4_;
  fVar20 = auVar9._4_4_;
  fVar21 = auVar9._8_4_;
  fVar22 = auVar9._12_4_;
  fVar26 = *pfVar7;
  fVar30 = pfVar7[1];
  fVar34 = pfVar7[2];
  fVar11 = pfVar7[3];
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar18;
  param_2[8] = (float)((uint)fVar27 & uVar2);
  param_2[9] = (float)((uint)fVar31 & uVar3);
  param_2[10] = (float)((uint)fVar35 & uVar4);
  param_2[0xb] = (float)((uint)fVar18 & uVar5);
  auVar8._4_4_ = fVar44;
  auVar8._0_4_ = fVar43;
  auVar8._8_4_ = fVar45;
  auVar8._12_4_ = fVar46;
  auVar9 = minps(auVar8,auVar9);
  auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146b43ff4);
  auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146b43ff0);
  auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146b43ff8);
  auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146b43ffc);
  iVar6 = movmskps((int)pfVar7,auVar10);
  if (iVar6 == 0) {
    param_3 = fVar19 * param_3;
    fVar16 = fVar20 * 0.0;
    fVar17 = fVar21 * 0.0;
    fVar24 = fVar22 * 0.0;
    fVar14 = fVar12 * fVar26 * _DAT_146b43fb0;
    fVar15 = fVar26 * 0.0 * fRam0000000146b43fb4;
    fVar37 = fVar26 * 0.0 * fRam0000000146b43fb8;
    fVar23 = fVar26 * 0.0 * fRam0000000146b43fbc;
    fVar27 = fVar30 * 0.0 * _DAT_146b43fa0;
    fVar31 = fVar12 * fVar30 * fRam0000000146b43fa4;
    fVar35 = fVar30 * 0.0 * fRam0000000146b43fa8;
    fVar18 = fVar30 * 0.0 * fRam0000000146b43fac;
    fVar25 = fVar34 * 0.0 * _DAT_146b43f90;
    fVar28 = fVar34 * 0.0 * fRam0000000146b43f94;
    fVar29 = fVar12 * fVar34 * fRam0000000146b43f98;
    fVar32 = fVar34 * 0.0 * fRam0000000146b43f9c;
    param_2[8] = fVar43 * fVar19;
    param_2[9] = fVar44 * fVar20;
    param_2[10] = fVar45 * fVar21;
    param_2[0xb] = fVar46 * fVar22;
    *param_2 = fVar14 + fVar11 * 0.0 + fVar27 + fVar25;
    param_2[1] = fVar15 + fVar11 * 0.0 + fVar31 + fVar28;
    param_2[2] = fVar37 + fVar11 * 0.0 + fVar35 + fVar29;
    param_2[3] = fVar23 + fVar11 * fVar12 + fVar18 + fVar32;
    fVar22 = fVar17 * fVar30 - fVar16 * fVar34;
    fVar27 = param_3 * fVar34 - fVar17 * fVar26;
    fVar31 = fVar16 * fVar26 - param_3 * fVar30;
    fVar35 = fVar24 * fVar11 - fVar24 * fVar11;
    fVar22 = fVar22 + fVar22;
    fVar27 = fVar27 + fVar27;
    fVar31 = fVar31 + fVar31;
    fVar35 = fVar35 + fVar35;
    fVar19 = pfVar7[5];
    fVar20 = pfVar7[6];
    fVar21 = pfVar7[7];
    param_2[4] = (fVar31 * fVar30 - fVar27 * fVar34) + fVar11 * fVar22 + param_3 + pfVar7[4];
    param_2[5] = (fVar22 * fVar34 - fVar31 * fVar26) + fVar11 * fVar27 + fVar16 + fVar19;
    param_2[6] = (fVar27 * fVar26 - fVar22 * fVar30) + fVar11 * fVar31 + fVar17 + fVar20;
    param_2[7] = (fVar35 * fVar11 - fVar35 * fVar11) + fVar11 * fVar35 + fVar24 + fVar21;
  }
  else {
    fVar14 = fVar30 + fVar30;
    fVar15 = fVar34 + fVar34;
    fVar23 = fVar26 * (fVar26 + fVar26);
    fVar37 = fVar11 * (fVar26 + fVar26);
    fVar40 = (fVar11 * fVar15 + fVar26 * fVar14) * fVar19;
    fVar41 = (fVar37 + fVar30 * fVar15) * fVar20;
    fVar42 = (fVar11 * fVar14 + fVar26 * fVar15) * fVar21;
    fVar24 = fVar20 * (fVar26 * fVar14 - fVar11 * fVar15);
    fVar28 = fVar21 * (fVar30 * fVar15 - fVar37);
    fVar32 = fVar19 * (fVar26 * fVar15 - fVar11 * fVar14);
    fVar11 = (float)((uint)((fVar27 - (fVar34 * fVar15 + fVar30 * fVar14)) * fVar19) & uVar2);
    fVar15 = (float)((uint)((fVar31 - (fVar34 * fVar15 + fVar23)) * fVar20) & uVar3);
    fVar37 = (float)((uint)((fVar35 - (fVar30 * fVar14 + fVar23)) * fVar21) & uVar4);
    fVar16 = (float)((uint)((fVar18 - (fVar23 + fVar23)) * fVar22) & uVar5);
    fVar26 = pfVar7[4];
    fVar30 = pfVar7[5];
    fVar34 = pfVar7[6];
    fVar36 = (fVar12 * 0.0 + 0.0) * fVar43;
    fVar38 = (fVar12 * 0.0 + 0.0) * fVar44;
    fVar39 = (fVar12 * 0.0 + 0.0) * fVar45;
    fVar25 = fVar44 * (0.0 - fVar12 * 0.0);
    fVar29 = fVar45 * (0.0 - fVar12 * 0.0);
    fVar33 = fVar43 * (0.0 - fVar12 * 0.0);
    fVar12 = (float)((uint)((fVar27 - 0.0) * fVar43) & _DAT_146b43f20);
    fVar14 = (float)((uint)((fVar31 - 0.0) * fVar44) & uRam0000000146b43f24);
    fVar23 = (float)((uint)((fVar35 - 0.0) * fVar45) & uRam0000000146b43f28);
    fVar17 = (float)((uint)((fVar18 - 0.0) * fVar46) & uRam0000000146b43f2c);
    local_e8 = fVar36 * fVar24 + fVar12 * fVar11 + fVar33 * fVar42 + fVar17 * fVar26;
    fStack_e4 = fVar36 * fVar15 + fVar12 * fVar40 + fVar33 * fVar28 + fVar17 * fVar30;
    fStack_e0 = fVar36 * fVar41 + fVar12 * fVar32 + fVar33 * fVar37 + fVar17 * fVar34;
    fStack_dc = fVar36 * fVar16 + fVar12 * fVar16 + fVar33 * fVar16 + fVar17 * fVar18;
    local_d8 = fVar14 * fVar24 + fVar25 * fVar11 + fVar38 * fVar42 + fVar17 * fVar26;
    fStack_d4 = fVar14 * fVar15 + fVar25 * fVar40 + fVar38 * fVar28 + fVar17 * fVar30;
    fStack_d0 = fVar14 * fVar41 + fVar25 * fVar32 + fVar38 * fVar37 + fVar17 * fVar34;
    fStack_cc = fVar14 * fVar16 + fVar25 * fVar16 + fVar38 * fVar16 + fVar17 * fVar18;
    local_c8 = fVar29 * fVar24 + fVar39 * fVar11 + fVar23 * fVar42 + fVar17 * fVar26;
    fStack_c4 = fVar29 * fVar15 + fVar39 * fVar40 + fVar23 * fVar28 + fVar17 * fVar30;
    fStack_c0 = fVar29 * fVar41 + fVar39 * fVar32 + fVar23 * fVar37 + fVar17 * fVar34;
    fStack_bc = fVar29 * fVar16 + fVar39 * fVar16 + fVar23 * fVar16 + fVar17 * fVar18;
    local_b8 = fVar24 * 0.0 + param_3 * fVar11 + fVar42 * 0.0 + fVar18 * fVar26;
    fStack_b4 = fVar15 * 0.0 + param_3 * fVar40 + fVar28 * 0.0 + fVar18 * fVar30;
    fStack_b0 = fVar41 * 0.0 + param_3 * fVar32 + fVar37 * 0.0 + fVar18 * fVar34;
    fStack_ac = fVar16 * 0.0 + param_3 * fVar16 + fVar16 * 0.0 + fVar18 * fVar18;
    FMatrix::RemoveScaling(&local_e8);
    fVar26 = (float)(-(uint)(_DAT_146b43ff0 <= fVar19 * fVar43) & (_DAT_146b43fe0 ^ (uint)fVar27) ^
                    _DAT_146b43fe0);
    fVar30 = (float)(-(uint)(fRam0000000146b43ff4 <= fVar20 * fVar44) &
                     (uRam0000000146b43fe4 ^ (uint)fVar31) ^ uRam0000000146b43fe4);
    fVar34 = (float)(-(uint)(fRam0000000146b43ff8 <= fVar21 * fVar45) &
                     (uRam0000000146b43fe8 ^ (uint)fVar35) ^ uRam0000000146b43fe8);
    local_e8 = local_e8 * fVar26;
    fStack_e4 = fStack_e4 * fVar26;
    fStack_e0 = fStack_e0 * fVar26;
    fStack_d0 = fStack_d0 * fVar30;
    fStack_d4 = fStack_d4 * fVar30;
    local_d8 = local_d8 * fVar30;
    fStack_c0 = fStack_c0 * fVar34;
    local_c8 = local_c8 * fVar34;
    fStack_c4 = fStack_c4 * fVar34;
    FQuat::FQuat(&local_128,&local_e8);
    fVar11 = fRam0000000146b43fdc;
    fVar34 = fRam0000000146b43fd8;
    fVar30 = fRam0000000146b43fd4;
    fVar26 = _DAT_146b43fd0;
    param_2[8] = fVar19 * fVar43;
    param_2[9] = fVar20 * fVar44;
    param_2[10] = fVar21 * fVar45;
    param_2[0xb] = fVar22 * fVar46;
    auVar13._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
    auVar13._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
    auVar13._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
    auVar13._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
    fVar27 = auVar13._4_4_ + auVar13._0_4_;
    fVar31 = auVar13._8_4_ + auVar13._4_4_;
    fVar35 = auVar13._12_4_ + auVar13._8_4_;
    fVar12 = auVar13._0_4_ + auVar13._12_4_;
    auVar1._4_4_ = fVar31;
    auVar1._0_4_ = fVar27;
    auVar1._8_4_ = fVar35;
    auVar1._12_4_ = fVar12;
    auVar9 = rsqrtps(auVar13,auVar1);
    fVar19 = auVar9._0_4_;
    fVar20 = auVar9._4_4_;
    fVar21 = auVar9._8_4_;
    fVar22 = auVar9._12_4_;
    fVar19 = (fVar26 - fVar19 * fVar19 * fVar27 * fVar26) * fVar19 + fVar19;
    fVar20 = (fVar30 - fVar20 * fVar20 * fVar31 * fVar30) * fVar20 + fVar20;
    fVar21 = (fVar34 - fVar21 * fVar21 * fVar35 * fVar34) * fVar21 + fVar21;
    fVar22 = (fVar11 - fVar22 * fVar22 * fVar12 * fVar11) * fVar22 + fVar22;
    auVar9._4_4_ = fStack_b4;
    auVar9._0_4_ = local_b8;
    auVar9._8_4_ = fStack_b0;
    fVar19 = (float)(((uint)(((fVar26 - fVar19 * fVar19 * fVar27 * fVar26) * fVar19 + fVar19) *
                            local_128) ^ _DAT_146b43fc0) & -(uint)(1e-08 <= fVar27) ^ _DAT_146b43fc0
                    );
    fVar20 = (float)(((uint)(((fVar30 - fVar20 * fVar20 * fVar31 * fVar30) * fVar20 + fVar20) *
                            fStack_124) ^ uRam0000000146b43fc4) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146b43fc4);
    fVar21 = (float)(((uint)(((fVar34 - fVar21 * fVar21 * fVar35 * fVar34) * fVar21 + fVar21) *
                            fStack_120) ^ uRam0000000146b43fc8) & -(uint)(1e-08 <= fVar35) ^
                    uRam0000000146b43fc8);
    fVar22 = (float)(((uint)(((fVar11 - fVar22 * fVar22 * fVar12 * fVar11) * fVar22 + fVar22) *
                            fStack_11c) ^ uRam0000000146b43fcc) & -(uint)(1e-08 <= fVar12) ^
                    uRam0000000146b43fcc);
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar9;
    *param_2 = fVar19;
    param_2[1] = fVar20;
    param_2[2] = fVar21;
    param_2[3] = fVar22;
  }
  return param_2;
}



// FUNCTION 142fa1ef0 FUN_142fa1ef0 body=316 status=ok
// SIG undefined FUN_142fa1ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142fa1ef0(longlong param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  int local_38 [4];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) && (-1 < (int)*param_2)) &&
     (local_38[0] = *(int *)((longlong)param_2 + 4), -1 < local_38[0])) {
    lVar1 = *param_2;
    iVar3 = (int)lVar1;
    if (((((-1 < iVar3) && (-1 < lVar1)) &&
         ((*(longlong *)(param_1 + 0x8f8) != 0 &&
          ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x130), lVar2 != 0 &&
           (-1 < iVar3)))))) && (iVar3 < *(int *)(lVar2 + 0x40))) &&
       ((lVar2 = *(longlong *)((longlong)iVar3 * 0x100 + *(longlong *)(lVar2 + 0x38)), lVar2 != 0 &&
        ((int)((ulonglong)lVar1 >> 0x20) <
         *(int *)(*(longlong *)(lVar2 + 0x18) + 0xd8) + *(int *)(*(longlong *)(lVar2 + 0x18) + 0x20)
        )))) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_143852380(lVar2,local_38,&local_28);
      *param_3 = (float)local_28;
      param_3[1] = local_28._4_4_;
      param_3[2] = (float)uStack_20;
      *param_3 = *param_3 * 100.0;
      param_3[2] = param_3[2] * 100.0;
      param_3[1] = param_3[1] * 100.0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fa2030 FUN_142fa2030 body=321 status=ok
// SIG undefined FUN_142fa2030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142fa2030(longlong param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  int local_48 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (((param_1 != 0) && (-1 < (int)*param_2)) &&
     (local_48[0] = *(int *)((longlong)param_2 + 4), -1 < local_48[0])) {
    lVar1 = *param_2;
    iVar3 = (int)lVar1;
    if (((((-1 < iVar3) && (-1 < lVar1)) &&
         ((*(longlong *)(param_1 + 0x8f8) != 0 &&
          ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x130), lVar2 != 0 &&
           (-1 < iVar3)))))) && (iVar3 < *(int *)(lVar2 + 0x40))) &&
       ((lVar2 = *(longlong *)((longlong)iVar3 * 0x100 + *(longlong *)(lVar2 + 0x38)), lVar2 != 0 &&
        ((int)((ulonglong)lVar1 >> 0x20) <
         *(int *)(*(longlong *)(lVar2 + 0x18) + 0xd8) + *(int *)(*(longlong *)(lVar2 + 0x18) + 0x20)
        )))) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_143852420(local_28,lVar2,local_48,&local_38);
      *param_3 = (float)local_38;
      param_3[1] = local_38._4_4_;
      param_3[2] = (float)uStack_30;
      *param_3 = *param_3 * 100.0;
      param_3[2] = param_3[2] * 100.0;
      param_3[1] = param_3[1] * 100.0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fa2180 FUN_142fa2180 body=120 status=ok
// SIG undefined FUN_142fa2180(void)

float FUN_142fa2180(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if ((((-1 < (int)param_2) && (-1 < param_2)) && (-1 < *(int *)(param_1 + 0x10))) &&
     (-1 < *(int *)(param_1 + 0x14))) {
    fVar1 = (float)FUN_142f9eed0((float *)(param_1 + 0x28));
    if (fVar1 == 3.4028235e+38) {
      return 0.0;
    }
    fVar1 = 1.0 - fVar1 / *(float *)(param_1 + 0x28);
    if (fVar1 <= 0.0001) {
      fVar1 = 0.0001;
    }
    return fVar1;
  }
  return 3.4028235e+38;
}



// FUNCTION 142fa2200 FUN_142fa2200 body=753 status=ok
// SIG undefined FUN_142fa2200(void)

undefined8 * FUN_142fa2200(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  fVar5 = DAT_1468b5d98;
  *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_2 + 1) = fVar5;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      FUN_1422e15c0(param_1 + 0x40,&local_34);
      FUN_1422e15c0(param_1 + 0x78,&local_40);
      local_40 = local_40 - local_34;
      local_3c = local_3c - local_30;
      fVar5 = local_3c * local_3c + local_40 * local_40;
      if (fVar5 == 1.0) {
        if (local_38 - local_2c == 0.0) {
          uVar4 = CONCAT44(local_3c,local_40);
          local_44 = local_38 - local_2c;
        }
        else {
          uVar4 = CONCAT44(local_3c,local_40);
          local_44 = 0.0;
        }
      }
      else if (1e-08 <= fVar5) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        local_44 = 0.0;
        uVar4 = CONCAT44(local_3c * fVar6,local_40 * fVar6);
      }
      else {
        uVar4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_44 = DAT_1468b5d98;
      }
      goto LAB_142fa24cb;
    }
  }
  if (*(int *)(param_1 + 0x198) < 1) {
    return param_2;
  }
  lVar3 = *(longlong *)(param_1 + 400);
  if (*(longlong *)(param_1 + 400) == 0) {
    lVar3 = param_1 + 0x120;
  }
  local_4c = *(float *)(lVar3 + 0x10) - *(float *)(lVar3 + 4);
  fStack_48 = *(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 8);
  local_44 = *(float *)(lVar3 + 0x18) - *(float *)(lVar3 + 0xc);
  fVar5 = fStack_48 * fStack_48 + local_4c * local_4c;
  if (fVar5 == 1.0) {
    if (local_44 != 0.0) {
      local_44 = 0.0;
    }
  }
  else if (1e-08 <= fVar5) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    local_44 = 0.0;
    local_4c = local_4c * fVar6;
    fStack_48 = fStack_48 * fVar6;
  }
  else {
    local_4c = DAT_1468b5d90;
    fStack_48 = DAT_1468b5d94;
    local_44 = DAT_1468b5d98;
  }
  uVar4 = CONCAT44(fStack_48,local_4c);
LAB_142fa24cb:
  *param_2 = uVar4;
  *(float *)(param_2 + 1) = local_44;
  return param_2;
}



// FUNCTION 142fa2500 FUN_142fa2500 body=608 status=ok
// SIG undefined FUN_142fa2500(void)

float * FUN_142fa2500(longlong param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  
  if ((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
LAB_142fa2595:
    fVar8 = DAT_1468b5d98;
    if (*(int *)(param_1 + 0x198) < 1) {
      *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      param_2[2] = fVar8;
      return param_2;
    }
    lVar3 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar3 = param_1 + 0x120;
    }
    fStack_94 = (float)((ulonglong)*(undefined8 *)(lVar3 + 4) >> 0x20);
    local_90 = *(float *)(lVar3 + 0xc);
    local_80 = *(float *)(lVar3 + 0x18);
    fStack_84 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    local_88 = (float)*(undefined8 *)(lVar3 + 4);
    local_98 = (float)*(undefined8 *)(lVar3 + 0x10);
    fVar8 = local_88;
    local_88 = local_98;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 < 1) goto LAB_142fa2595;
    FUN_1422e15c0(param_1 + 0x40,&local_98);
    FUN_1422e15c0(param_1 + 0x78,&local_88);
    fVar8 = local_98;
  }
  fVar8 = local_88 - fVar8;
  fStack_94 = fStack_84 - fStack_94;
  fVar5 = fStack_94 * fStack_94 + fVar8 * fVar8;
  if (fVar5 == 1.0) {
    fVar6 = fVar8;
    fVar9 = fStack_94;
    fVar4 = local_80 - local_90;
    if (local_80 - local_90 == 0.0) goto LAB_142fa26de;
  }
  else {
    fVar6 = DAT_1468b5d90;
    fVar9 = DAT_1468b5d94;
    fVar4 = DAT_1468b5d98;
    if (fVar5 < 1e-08) goto LAB_142fa26de;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar8 = fVar8 * fVar6;
    fStack_94 = fStack_94 * fVar6;
  }
  fVar6 = fVar8;
  fVar9 = fStack_94;
  fVar4 = 0.0;
LAB_142fa26de:
  *param_2 = fVar6 * 10000.0 + local_88;
  param_2[1] = fVar9 * 10000.0 + fStack_84;
  param_2[2] = fVar4 * 10000.0 + local_80;
  return param_2;
}



// FUNCTION 142fa2760 FUN_142fa2760 body=30 status=ok
// SIG undefined FUN_142fa2760(void)

undefined8 FUN_142fa2760(longlong param_1,undefined8 param_2)

{
  FUN_142f8eb00(param_1,param_2,param_1 + 0x300);
  return param_2;
}



// FUNCTION 142fa2780 FUN_142fa2780 body=25 status=ok
// SIG undefined FUN_142fa2780(void)

undefined8 * FUN_142fa2780(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x32c);
  *param_2 = *(undefined8 *)(param_1 + 0x324);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142fa27a0 FUN_142fa27a0 body=336 status=ok
// SIG undefined FUN_142fa27a0(void)

longlong * FUN_142fa27a0(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)UAITask::GetPrivateStaticClass();
    plVar3 = param_1;
    do {
      if (plVar3 == plVar2) {
        plVar2 = (longlong *)UAITask::GetPrivateStaticClass();
        plVar3 = param_1;
        goto LAB_142fa27e8;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  return (longlong *)0x0;
  while (plVar3 = (longlong *)plVar3[6], plVar5 = plVar6, plVar3 != (longlong *)0x0) {
LAB_142fa27e8:
    plVar6 = (longlong *)0x0;
    plVar5 = param_1;
    if (plVar3 == plVar2) break;
  }
  plVar3 = (longlong *)UAITask_LockLogic::StaticClass();
  if (plVar5 == plVar3) {
    lVar4 = FUN_142f9d030();
    if (lVar4 != 0) {
      plVar6 = *(longlong **)(lVar4 + 0x40);
    }
    return plVar6;
  }
  plVar2 = (longlong *)UAITask::GetPrivateStaticClass();
  plVar3 = param_1;
  do {
    plVar5 = param_1;
    if (plVar3 == plVar2) break;
    plVar3 = (longlong *)plVar3[6];
    plVar5 = plVar6;
  } while (plVar3 != (longlong *)0x0);
  plVar3 = (longlong *)UAITask_LockLogic::StaticClass();
  if (plVar5 == plVar3) {
    lVar4 = FUN_142f9d030();
    if (lVar4 != 0) {
      plVar6 = *(longlong **)(lVar4 + 0x48);
    }
    return plVar6;
  }
  lVar4 = param_1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar4 = param_1[0x1f];
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
  }
  plVar3 = *(longlong **)(lVar4 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_142fbe6f0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142fa28f0 FUN_142fa28f0 body=1099 status=ok
// SIG undefined FUN_142fa28f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142fa28f0(char *param_1,float *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc [20];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [144];
  
  if (*param_1 == '\x01') {
    lVar4 = 0x10;
LAB_142fa2946:
    cVar3 = FWeakObjectPtr::IsValid(param_1 + lVar4);
    bVar8 = cVar3 == '\0';
LAB_142fa2951:
    fVar13 = DAT_1468b5d98;
    if (bVar8) {
      *(undefined8 *)param_2 = _DAT_1468b5d90;
      param_2[2] = fVar13;
      return param_2;
    }
  }
  else {
    if (*param_1 == '\x02') {
      lVar4 = 0x18;
      goto LAB_142fa2946;
    }
    if (((float)DAT_14676e1b0 == *(float *)(param_1 + 4)) &&
       (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 8))) {
      bVar8 = DAT_14676e1b8 == *(float *)(param_1 + 0xc);
      goto LAB_142fa2951;
    }
  }
  if (param_1[0x28] == '\0') {
    if (*param_1 == '\x01') {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        fVar16 = 1.0;
        fVar13 = 0.0;
        fVar15 = 0.0;
        fVar14 = 0.0;
      }
      else {
        fVar13 = *(float *)(lVar4 + 0x210);
        fVar15 = *(float *)(lVar4 + 0x214);
        fVar14 = *(float *)(lVar4 + 0x218);
        fVar16 = *(float *)(lVar4 + 0x21c);
      }
      fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar1 = *(float *)(param_1 + 0x34);
      local_d8._0_4_ = (float)*(undefined8 *)(param_1 + 0x2c);
      fVar12 = fVar1 * fVar15 - fVar9 * fVar14;
      fVar11 = (float)local_d8 * fVar14 - fVar1 * fVar13;
      fVar12 = fVar12 + fVar12;
      fVar10 = fVar9 * fVar13 - (float)local_d8 * fVar15;
      fVar11 = fVar11 + fVar11;
      fVar10 = fVar10 + fVar10;
      local_d8._0_4_ = (fVar10 * fVar15 - fVar11 * fVar14) + fVar12 * fVar16 + (float)local_d8;
      fVar15 = (fVar13 * fVar11 - fVar12 * fVar15) + fVar10 * fVar16 + fVar1;
      fVar13 = (fVar12 * fVar14 - fVar13 * fVar10) + fVar11 * fVar16 + fVar9;
      goto LAB_142fa2cc3;
    }
    if (*param_1 == '\x02') {
      iVar7 = (int)param_1 + 0x18;
      lVar4 = FWeakObjectPtr::Get();
      local_a8 = *(float *)(lVar4 + 0x210);
      fStack_a4 = *(float *)(lVar4 + 0x214);
      fStack_a0 = *(float *)(lVar4 + 0x218);
      fStack_9c = *(float *)(lVar4 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_a4);
      auVar2._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_a8);
      auVar2._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_a0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_9c);
      iVar7 = movmskps(iVar7,auVar2);
      if (iVar7 != 0) {
        *(float *)(lVar4 + 0x250) = local_a8;
        *(float *)(lVar4 + 0x254) = fStack_a4;
        *(float *)(lVar4 + 600) = fStack_a0;
        *(float *)(lVar4 + 0x25c) = fStack_9c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_a8,local_bc);
        *(undefined8 *)(lVar4 + 0x260) = *puVar5;
        *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      local_c8 = *(undefined8 *)(lVar4 + 0x260);
      local_c0 = *(undefined4 *)(lVar4 + 0x268);
      pfVar6 = (float *)FRotator::Quaternion(&local_c8,local_98);
      fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar1 = *(float *)(param_1 + 0x34);
      fVar13 = pfVar6[2];
      fVar15 = pfVar6[1];
      fVar14 = *pfVar6;
      fVar16 = pfVar6[3];
      local_d8._0_4_ = (float)*(undefined8 *)(param_1 + 0x2c);
      fVar12 = fVar15 * fVar1 - fVar13 * fVar9;
      fVar12 = fVar12 + fVar12;
      fVar11 = fVar13 * (float)local_d8 - fVar14 * fVar1;
      fVar10 = fVar14 * fVar9 - fVar15 * (float)local_d8;
      fVar11 = fVar11 + fVar11;
      fVar10 = fVar10 + fVar10;
      local_d8._0_4_ = (fVar15 * fVar10 - fVar13 * fVar11) + fVar16 * fVar12 + (float)local_d8;
      fVar15 = (fVar14 * fVar11 - fVar15 * fVar12) + fVar16 * fVar10 + fVar1;
      fVar13 = (fVar13 * fVar12 - fVar14 * fVar10) + fVar16 * fVar11 + fVar9;
      goto LAB_142fa2cc3;
    }
    local_d8 = *(undefined8 *)(param_1 + 0x2c);
    fVar13 = (float)((ulonglong)local_d8 >> 0x20);
  }
  else {
    local_d8 = *(undefined8 *)(param_1 + 0x2c);
    fVar13 = (float)((ulonglong)local_d8 >> 0x20);
  }
  fVar15 = *(float *)(param_1 + 0x34);
LAB_142fa2cc3:
  fVar14 = *(float *)(param_1 + 0x40);
  fVar16 = *(float *)(param_1 + 0x3c);
  *param_2 = (float)local_d8 + *(float *)(param_1 + 0x38);
  param_2[2] = fVar15 + fVar14;
  param_2[1] = fVar13 + fVar16;
  return param_2;
}



// FUNCTION 142fa2d40 FUN_142fa2d40 body=40 status=ok
// SIG undefined FUN_142fa2d40(void)

undefined8 * FUN_142fa2d40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *param_2 = *(undefined8 *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(float *)(param_2 + 1) = *(float *)(param_2 + 1) - *(float *)(param_1 + 4);
  return param_2;
}



// FUNCTION 142fa2d70 FUN_142fa2d70 body=116 status=ok
// SIG undefined FUN_142fa2d70(void)

undefined8 * FUN_142fa2d70(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float local_res10 [4];
  undefined1 local_res20 [8];
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_1 = *param_3;
    *(undefined4 *)(param_1 + 1) = uVar2;
    return param_1;
  }
  (**(code **)(*param_2 + 0x578))(param_2,local_res20,local_res10);
  fVar1 = *(float *)(param_3 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_3 + 4);
  *(float *)(param_1 + 1) = fVar1 - local_res10[0];
  return param_1;
}



// FUNCTION 142fa2df0 FUN_142fa2df0 body=176 status=ok
// SIG undefined FUN_142fa2df0(void)

undefined8 FUN_142fa2df0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong local_28 [4];
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f9cfb0(uVar1,0);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb50) == 0)) {
    uVar3 = 0x42c80000;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0xb50) + 0xf4);
  }
  uVar1 = FUN_142fa2ea0(param_1,param_2,param_3,uVar3,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142fa2ea0 FUN_142fa2ea0 body=260 status=ok
// SIG undefined FUN_142fa2ea0(void)

undefined4
FUN_142fa2ea0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  byte local_b8 [28];
  undefined4 local_9c;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  if (param_1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b44238) {
      _Init_thread_header(&DAT_146b44238);
      if (DAT_146b44238 == -1) {
        FName::FName(&DAT_146b44230,L"NavProjectGoal",1);
        _Init_thread_footer(&DAT_146b44238);
      }
    }
    FUN_142ce92e0(local_b8,param_1,param_2,param_4,DAT_146b44230,param_5);
    if ((local_b8[0] & 1) != 0) {
      uVar1 = local_9c;
    }
    if (param_3 != 0) {
      FUN_140729f20(param_3,local_b8);
    }
  }
  return uVar1;
}



// FUNCTION 142fa2fb0 FUN_142fa2fb0 body=95 status=ok
// SIG undefined FUN_142fa2fb0(void)

longlong FUN_142fa2fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((-1 < iVar2) && (-1 < param_2)) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x8f8);
    }
    if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x130), lVar1 != 0)) &&
        (iVar2 < *(int *)(lVar1 + 0x40))) &&
       ((lVar1 = *(longlong *)((longlong)iVar2 * 0x100 + *(longlong *)(lVar1 + 0x38)), lVar1 != 0 &&
        ((int)((ulonglong)param_2 >> 0x20) <
         *(int *)(*(longlong *)(lVar1 + 0x18) + 0xd8) + *(int *)(*(longlong *)(lVar1 + 0x18) + 0x20)
        )))) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142fa3010 FUN_142fa3010 body=94 status=ok
// SIG undefined FUN_142fa3010(void)

undefined4 FUN_142fa3010(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = 0;
  plVar1 = plVar2 + (longlong)(int)param_1[1] * 4;
  plVar3 = plVar2;
  if (plVar2 == plVar1) {
    return 0xffffffff;
  }
  while ((*(float *)(plVar3 + 1) <= param_2 && param_2 != *(float *)(plVar3 + 1) ||
         (*(float *)((longlong)plVar3 + 0xc) <= param_2 &&
          param_2 != *(float *)((longlong)plVar3 + 0xc)))) {
    plVar3 = plVar3 + 4;
    if (plVar3 == plVar1) {
joined_r0x000142fa304f:
      while( true ) {
        if (plVar2 == plVar1) {
          return 0xffffffff;
        }
        if (*plVar2 == lVar4) break;
        plVar2 = plVar2 + 4;
      }
      if (plVar2 == (longlong *)0x0) {
        return 0xffffffff;
      }
      return (int)plVar2[2];
    }
  }
  lVar4 = *plVar3;
  goto joined_r0x000142fa304f;
}



// FUNCTION 142fa3070 FUN_142fa3070 body=94 status=ok
// SIG undefined FUN_142fa3070(void)

undefined4 FUN_142fa3070(longlong *param_1,float param_2,float param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = 0;
  plVar1 = plVar2 + (longlong)(int)param_1[1] * 4;
  plVar3 = plVar2;
  if (plVar2 == plVar1) {
    return 0xffffffff;
  }
  while ((*(float *)(plVar3 + 1) <= param_2 && param_2 != *(float *)(plVar3 + 1) ||
         (*(float *)((longlong)plVar3 + 0xc) <= param_3 &&
          param_3 != *(float *)((longlong)plVar3 + 0xc)))) {
    plVar3 = plVar3 + 4;
    if (plVar3 == plVar1) {
joined_r0x000142fa30af:
      while( true ) {
        if (plVar2 == plVar1) {
          return 0xffffffff;
        }
        if (*plVar2 == lVar4) break;
        plVar2 = plVar2 + 4;
      }
      if (plVar2 == (longlong *)0x0) {
        return 0xffffffff;
      }
      return (int)plVar2[2];
    }
  }
  lVar4 = *plVar3;
  goto joined_r0x000142fa30af;
}



// FUNCTION 142fa30d0 FUN_142fa30d0 body=48 status=ok
// SIG undefined FUN_142fa30d0(void)

undefined4 FUN_142fa30d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + (longlong)(int)param_1[1] * 4;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0xffffffff;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 4;
  }
  if (plVar1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  return (int)plVar1[2];
}



// FUNCTION 142fa3100 FUN_142fa3100 body=44 status=ok
// SIG undefined FUN_142fa3100(void)

undefined8 FUN_142fa3100(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = puVar1 + (longlong)(int)param_1[1] * 4;
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    if ((param_2 < *(float *)(puVar1 + 1) || param_2 == *(float *)(puVar1 + 1)) &&
       (param_2 < *(float *)((longlong)puVar1 + 0xc) ||
        param_2 == *(float *)((longlong)puVar1 + 0xc))) break;
    puVar1 = puVar1 + 4;
  }
  return *puVar1;
}



// FUNCTION 142fa3130 FUN_142fa3130 body=44 status=ok
// SIG undefined FUN_142fa3130(void)

undefined8 FUN_142fa3130(longlong *param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = puVar1 + (longlong)(int)param_1[1] * 4;
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    if ((param_2 < *(float *)(puVar1 + 1) || param_2 == *(float *)(puVar1 + 1)) &&
       (param_3 < *(float *)((longlong)puVar1 + 0xc) ||
        param_3 == *(float *)((longlong)puVar1 + 0xc))) break;
    puVar1 = puVar1 + 4;
  }
  return *puVar1;
}



// FUNCTION 142fa3160 FUN_142fa3160 body=236 status=ok
// SIG undefined FUN_142fa3160(void)

void FUN_142fa3160(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b44190) && (_Init_thread_header(&DAT_146b44190), DAT_146b44190 == -1))
  {
    uVar1 = FUN_142fbec90();
    FUN_142fbec90();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FlightState",1);
    DAT_146b44188 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b44190);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b44188 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b44188 + 0x40) + (short)iVar3;
      local_14 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b44188 + 0x30));
  }
  return;
}



// FUNCTION 142fa3250 FUN_142fa3250 body=232 status=ok
// SIG undefined FUN_142fa3250(void)

void FUN_142fa3250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142ced880();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b441e0) && (_Init_thread_header(&DAT_146b441e0), DAT_146b441e0 == -1))
  {
    uVar1 = FUN_142fc0410();
    FUN_142fc0410();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PathingData",1);
    DAT_146b441d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b441e0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b441d8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b441d8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b441d8 + 0x30));
  }
  return;
}



// FUNCTION 142fa3340 FUN_142fa3340 body=358 status=ok
// SIG undefined FUN_142fa3340(void)

float * FUN_142fa3340(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_3 + param_1[5]) * 0.017453292;
  if (fVar3 < 0.0) {
    fVar1 = fVar3 * 0.15915494 - 0.5;
  }
  else {
    fVar1 = fVar3 * 0.15915494 + 0.5;
  }
  fVar3 = fVar3 - (float)(int)fVar1 * 6.2831855;
  if (fVar3 <= 1.5707964) {
    if (-1.5707964 <= fVar3) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = -1.0;
      fVar3 = -3.1415927 - fVar3;
    }
  }
  else {
    fVar1 = -1.0;
    fVar3 = 3.1415927 - fVar3;
  }
  fVar2 = fVar3 * fVar3;
  param_2[2] = param_1[3];
  *param_2 = (((((2.4760495e-05 - fVar2 * 2.6051615e-07) * fVar2 - 0.0013888378) * fVar2 +
               0.041666638) * fVar2 - 0.5) * fVar2 + 1.0) * fVar1 * *param_1 + param_1[1];
  param_2[1] = (((((2.7525562e-06 - fVar2 * 2.3889859e-08) * fVar2 - 0.00019840874) * fVar2 +
                 0.008333331) * fVar2 - 0.16666667) * fVar2 + 1.0) * fVar3 * *param_1 + param_1[2];
  return param_2;
}



// FUNCTION 142fa34d0 FUN_142fa34d0 body=30 status=ok
// SIG undefined FUN_142fa34d0(void)

undefined4 FUN_142fa34d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xb50) + 0xf4);
  }
  return 0x42c80000;
}



// FUNCTION 142fa34f0 FUN_142fa34f0 body=35 status=ok
// SIG undefined FUN_142fa34f0(void)

undefined4 FUN_142fa34f0(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xb50) != 0)) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xb50) + 0xf4);
  }
  return 0x42c80000;
}



// FUNCTION 142fa3560 FUN_142fa3560 body=45 status=ok
// SIG undefined FUN_142fa3560(void)

undefined4 FUN_142fa3560(undefined8 param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = FUN_142cee690();
  FUN_142f8ec00(param_1,local_res10);
  return local_res10[0];
}



// FUNCTION 142fa3590 FUN_142fa3590 body=567 status=ok
// SIG undefined FUN_142fa3590(void)

float * FUN_142fa3590(longlong *param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float local_res10 [2];
  float local_res18 [2];
  undefined1 local_48 [48];
  
  lVar7 = 0;
  param_2[5] = 0.1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[6] = 1.0;
  param_2[7] = 0.01;
  param_2[8] = 0.1;
  param_2[9] = 1.0;
  param_2[10] = 100.0;
  param_2[0xb] = 0.5;
  param_2[0xc] = 0.0;
  param_2[0xd] = 1.25;
  param_2[0xe] = 4.0;
  param_2[0xf] = 1.0;
  param_2[0x10] = 1.0;
  param_2[0x11] = 5.0;
  param_2[0x14] = 0.0;
  param_2[0x15] = 0.0;
  param_2[0x16] = 0.0;
  param_2[0x17] = 0.0;
  if ((param_3 != (longlong *)0x0) &&
     (plVar2 = (longlong *)FUN_14222e260(param_3), plVar2 != (longlong *)0x0)) {
    uVar3 = AAICharacter::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(lVar4 + 0x6f0);
      *(undefined8 *)param_2 = *(undefined8 *)(lVar4 + 0x6e8);
      *(undefined8 *)(param_2 + 2) = uVar3;
      uVar3 = *(undefined8 *)(lVar4 + 0x700);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar4 + 0x6f8);
      *(undefined8 *)(param_2 + 6) = uVar3;
      uVar3 = *(undefined8 *)(lVar4 + 0x710);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar4 + 0x708);
      *(undefined8 *)(param_2 + 10) = uVar3;
      uVar3 = *(undefined8 *)(lVar4 + 0x720);
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar4 + 0x718);
      *(undefined8 *)(param_2 + 0xe) = uVar3;
      uVar3 = *(undefined8 *)(lVar4 + 0x730);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar4 + 0x728);
      *(undefined8 *)(param_2 + 0x12) = uVar3;
      uVar3 = *(undefined8 *)(lVar4 + 0x740);
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(lVar4 + 0x738);
      *(undefined8 *)(param_2 + 0x16) = uVar3;
      return param_2;
    }
  }
  (**(code **)(*param_3 + 0x578))(param_3,local_res10,local_res18);
  *param_2 = local_res10[0];
  param_2[1] = local_res18[0];
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x868))(param_1,local_48,param_3);
  uVar3 = puVar5[1];
  *(undefined8 *)(param_2 + 0x14) = *puVar5;
  *(undefined8 *)(param_2 + 0x16) = uVar3;
  plVar2 = (longlong *)param_1[0xe4];
  plVar8 = plVar2 + (longlong)(int)param_1[0xe5] * 4;
  for (plVar6 = plVar2; lVar4 = lVar7, plVar6 != plVar8; plVar6 = plVar6 + 4) {
    if ((local_res10[0] < *(float *)(plVar6 + 1) || local_res10[0] == *(float *)(plVar6 + 1)) &&
       (local_res18[0] < *(float *)((longlong)plVar6 + 0xc) ||
        local_res18[0] == *(float *)((longlong)plVar6 + 0xc))) {
      lVar4 = *plVar6;
      break;
    }
  }
  fVar9 = -NAN;
  for (; plVar2 != plVar8; plVar2 = plVar2 + 4) {
    if (*plVar2 == lVar4) {
      if (plVar2 != (longlong *)0x0) {
        fVar1 = *(float *)(plVar2 + 2);
        goto LAB_142fa3736;
      }
      break;
    }
  }
  fVar1 = -NAN;
LAB_142fa3736:
  param_2[3] = fVar1;
  if (local_res10[0] <= local_res18[0]) {
    local_res10[0] = local_res18[0];
  }
  plVar2 = (longlong *)param_1[0xe7];
  plVar8 = plVar2 + (longlong)(int)param_1[0xe8] * 4;
  for (plVar6 = plVar2; plVar6 != plVar8; plVar6 = plVar6 + 4) {
    if ((local_res10[0] < *(float *)(plVar6 + 1) || local_res10[0] == *(float *)(plVar6 + 1)) &&
       (local_res10[0] < *(float *)((longlong)plVar6 + 0xc) ||
        local_res10[0] == *(float *)((longlong)plVar6 + 0xc))) {
      lVar7 = *plVar6;
      break;
    }
  }
  do {
    if (plVar2 == plVar8) {
LAB_142fa37a9:
      param_2[4] = fVar9;
      return param_2;
    }
    if (*plVar2 == lVar7) {
      if (plVar2 != (longlong *)0x0) {
        fVar9 = *(float *)(plVar2 + 2);
      }
      goto LAB_142fa37a9;
    }
    plVar2 = plVar2 + 4;
  } while( true );
}



// FUNCTION 142fa37d0 FUN_142fa37d0 body=91 status=ok
// SIG undefined FUN_142fa37d0(void)

undefined4 FUN_142fa37d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((-1 < iVar2) && (-1 < param_2)) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x8f8);
    }
    if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x130), lVar1 != 0)) &&
        (iVar2 < *(int *)(lVar1 + 0x40))) &&
       (lVar1 = *(longlong *)((longlong)iVar2 * 0x100 + 8 + *(longlong *)(lVar1 + 0x38)), lVar1 != 0
       )) {
      return *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x98);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142fa3830 FUN_142fa3830 body=107 status=ok
// SIG undefined FUN_142fa3830(void)

undefined4 FUN_142fa3830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((-1 < iVar2) && (-1 < param_2)) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x8f8);
    }
    if ((((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x130), lVar1 != 0)) &&
        (iVar2 < *(int *)(lVar1 + 0x40))) &&
       ((lVar1 = *(longlong *)((longlong)iVar2 * 0x100 + *(longlong *)(lVar1 + 0x38)), lVar1 != 0 &&
        (lVar1 = *(longlong *)(lVar1 + 0x18),
        (int)((ulonglong)param_2 >> 0x20) < *(int *)(lVar1 + 0xd8) + *(int *)(lVar1 + 0x20))))) {
      return *(undefined4 *)(lVar1 + 0x180);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142fa38b0 FUN_142fa38b0 body=185 status=ok
// SIG undefined FUN_142fa38b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142fa38b0(longlong param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = fRam0000000146b43fdc;
  fVar5 = fRam0000000146b43fd8;
  fVar4 = fRam0000000146b43fd4;
  fVar3 = _DAT_146b43fd0;
  fVar1 = *(float *)(param_1 + 0x210);
  fVar17 = *(float *)(param_1 + 0x214);
  fVar18 = *(float *)(param_1 + 0x218);
  fVar19 = *(float *)(param_1 + 0x21c);
  *param_2 = fVar1;
  param_2[1] = fVar17;
  param_2[2] = fVar18;
  param_2[3] = fVar19;
  uVar2 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_2 + 6) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_2 + 10) = uVar2;
  fVar7 = (float)(uRam0000000146b43f14 & uRam0000000146b43f24);
  fVar8 = (float)(uRam0000000146b43f18 & uRam0000000146b43f28);
  fVar9 = (float)(uRam0000000146b43f1c & uRam0000000146b43f2c);
  param_2[8] = (float)(_DAT_146b43f10 & _DAT_146b43f20);
  param_2[9] = fVar7;
  param_2[10] = fVar8;
  param_2[0xb] = fVar9;
  auVar10._0_4_ = fVar1 * fVar1 + fVar18 * fVar18;
  auVar10._4_4_ = fVar17 * fVar17 + fVar19 * fVar19;
  auVar10._8_4_ = fVar18 * fVar18 + fVar1 * fVar1;
  auVar10._12_4_ = fVar19 * fVar19 + fVar17 * fVar17;
  fVar13 = auVar10._4_4_ + auVar10._0_4_;
  fVar14 = auVar10._8_4_ + auVar10._4_4_;
  fVar15 = auVar10._12_4_ + auVar10._8_4_;
  fVar16 = auVar10._0_4_ + auVar10._12_4_;
  auVar11._4_4_ = fVar14;
  auVar11._0_4_ = fVar13;
  auVar11._8_4_ = fVar15;
  auVar11._12_4_ = fVar16;
  auVar11 = rsqrtps(auVar10,auVar11);
  fVar7 = auVar11._0_4_;
  fVar8 = auVar11._4_4_;
  fVar9 = auVar11._8_4_;
  fVar12 = auVar11._12_4_;
  fVar7 = (fVar3 - fVar7 * fVar7 * fVar3 * fVar13) * fVar7 + fVar7;
  fVar8 = (fVar4 - fVar8 * fVar8 * fVar4 * fVar14) * fVar8 + fVar8;
  fVar9 = (fVar5 - fVar9 * fVar9 * fVar5 * fVar15) * fVar9 + fVar9;
  fVar12 = (fVar6 - fVar12 * fVar12 * fVar6 * fVar16) * fVar12 + fVar12;
  fVar17 = (float)(((uint)(((fVar4 - fVar8 * fVar8 * fVar4 * fVar14) * fVar8 + fVar8) * fVar17) ^
                   uRam0000000146b43fc4) & -(uint)(fRam0000000146b440f4 <= fVar14) ^
                  uRam0000000146b43fc4);
  fVar18 = (float)(((uint)(((fVar5 - fVar9 * fVar9 * fVar5 * fVar15) * fVar9 + fVar9) * fVar18) ^
                   uRam0000000146b43fc8) & -(uint)(fRam0000000146b440f8 <= fVar15) ^
                  uRam0000000146b43fc8);
  fVar19 = (float)(((uint)(((fVar6 - fVar12 * fVar12 * fVar6 * fVar16) * fVar12 + fVar12) * fVar19)
                   ^ uRam0000000146b43fcc) & -(uint)(fRam0000000146b440fc <= fVar16) ^
                  uRam0000000146b43fcc);
  *param_2 = (float)(((uint)(((fVar3 - fVar7 * fVar7 * fVar3 * fVar13) * fVar7 + fVar7) * fVar1) ^
                     _DAT_146b43fc0) & -(uint)(_DAT_146b440f0 <= fVar13) ^ _DAT_146b43fc0);
  param_2[1] = fVar17;
  param_2[2] = fVar18;
  param_2[3] = fVar19;
  return param_2;
}



// FUNCTION 142fa3970 FUN_142fa3970 body=532 status=ok
// SIG undefined FUN_142fa3970(void)

float * FUN_142fa3970(float *param_1,longlong param_2,float *param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  float local_30;
  
  if (*(char *)(param_2 + 0x4b0) == '\0') {
    fVar2 = (float)*(undefined8 *)param_3;
    fVar7 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fVar6 = param_3[2];
    _local_38 = CONCAT44(param_3[1] - param_4[1],*param_3 - *param_4);
    local_30 = param_3[2] - param_4[2];
    cVar1 = FUN_142fb4880(param_2,&local_38);
    if (cVar1 != '\0') {
      fVar2 = (*param_4 - *param_3) + *param_4;
      fVar7 = (param_4[1] - param_3[1]) + param_4[1];
      fVar6 = (param_3[2] - param_4[2]) + param_4[2];
    }
    *(ulonglong *)param_1 = CONCAT44(fVar7,fVar2);
    param_1[2] = fVar6;
    return param_1;
  }
  fVar6 = *(float *)(param_2 + 0x300);
  fVar7 = *(float *)(param_2 + 0x304);
  fVar2 = fVar6 * fVar6 + fVar7 * fVar7;
  if (fVar2 == 1.0) {
    if (*(float *)(param_2 + 0x308) == 0.0) {
      local_38 = (float)*(undefined8 *)(param_2 + 0x300);
      fVar4 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x300) >> 0x20);
      fVar3 = *(float *)(param_2 + 0x308);
      goto LAB_142fa3a94;
    }
  }
  else {
    fVar4 = DAT_1468b5d94;
    fVar3 = DAT_1468b5d98;
    local_38 = DAT_1468b5d90;
    if (fVar2 < 1e-08) goto LAB_142fa3a94;
    auVar5 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar2 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar2 * 0.5 * fVar4 * fVar4);
    fVar6 = fVar6 * fVar4;
    fVar7 = fVar7 * fVar4;
  }
  fVar4 = fVar7;
  fVar3 = 0.0;
  local_38 = fVar6;
LAB_142fa3a94:
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  *param_1 = local_38 * 10000.0 + *param_4;
  param_1[1] = fVar4 * 10000.0 + fVar6;
  param_1[2] = fVar3 * 10000.0 + fVar7;
  return param_1;
}



// FUNCTION 142fa3b90 FUN_142fa3b90 body=28 status=ok
// SIG undefined FUN_142fa3b90(void)

undefined8 FUN_142fa3b90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142f9d030();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x48);
  }
  return 0;
}



// FUNCTION 142fa3c20 FUN_142fa3c20 body=153 status=ok
// SIG undefined FUN_142fa3c20(void)

void FUN_142fa3c20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  lVar3 = (longlong)*(int *)(param_1 + 0x1b8) * 0x20 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x18);
    }
  }
  return;
}



// FUNCTION 142fa3cc0 FUN_142fa3cc0 body=27 status=ok
// SIG undefined FUN_142fa3cc0(void)

undefined8 FUN_142fa3cc0(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_18 [24];
  
  lVar1 = (**(code **)(*param_1 + 0x4a0))(param_1,local_18);
  return *(undefined8 *)(lVar1 + 8);
}



// FUNCTION 142fa3ce0 FUN_142fa3ce0 body=115 status=ok
// SIG undefined FUN_142fa3ce0(void)

undefined8 * FUN_142fa3ce0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  uVar1 = FUN_142fc0410();
  lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x2720);
  *param_2 = *(undefined8 *)(lVar2 + 0x2718);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 142fa3d60 FUN_142fa3d60 body=71 status=ok
// SIG undefined FUN_142fa3d60(void)

undefined8 * FUN_142fa3d60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x2868);
    *param_2 = *(undefined8 *)(lVar1 + 0x2860);
    param_2[1] = uVar2;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142fa3db0 FUN_142fa3db0 body=182 status=ok
// SIG undefined FUN_142fa3db0(void)

float * FUN_142fa3db0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  
  *(undefined8 *)param_2 = DAT_14676e1b0;
  param_2[2] = DAT_14676e1b8;
  if (((*(char *)(param_1 + 0x28) == '\x01') && (*(longlong *)(param_1 + 0x60) != 0)) &&
     (cVar3 = FUN_14385da40(), cVar3 != '\0')) {
    pfVar4 = (float *)FCulture::GetName(*(undefined8 *)(param_1 + 0x60));
  }
  else {
    if (*(char *)(param_1 + 0x28) != '\x02') {
      return param_2;
    }
    if (*(longlong *)(param_1 + 0x70) == 0) {
      return param_2;
    }
    cVar3 = FUN_1438607c0();
    if (cVar3 == '\0') {
      return param_2;
    }
    pfVar4 = (float *)FCulture::GetName(*(undefined8 *)(param_1 + 0x70));
  }
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  *param_2 = *pfVar4;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  *param_2 = *param_2 * 100.0;
  param_2[2] = param_2[2] * 100.0;
  param_2[1] = param_2[1] * 100.0;
  return param_2;
}



// FUNCTION 142fa3e70 FUN_142fa3e70 body=800 status=ok
// SIG undefined FUN_142fa3e70(void)

float FUN_142fa3e70(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b0;
  float fStack_ac;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 local_94 [148];
  
  fVar11 = param_2[4];
  if (((ABS(fVar11) <= 0.0001) && (ABS(param_2[5]) <= 0.0001)) && (ABS(param_2[6]) <= 0.0001)) {
    return *param_2;
  }
  fVar8 = *(float *)(param_1 + 0x5fc);
  fVar1 = *(float *)(param_1 + 0x5e0);
  fVar2 = *(float *)(param_1 + 0x610);
  if (*(float *)(param_1 + 0x614) < param_3) {
    param_3 = *(float *)(param_1 + 0x614);
  }
  fVar9 = param_2[1];
  fVar3 = param_2[2];
  local_b0 = (float)*(undefined8 *)(param_1 + 0x5f4);
  local_a0 = fVar9 - local_b0;
  fVar4 = param_2[3];
  fStack_ac = (float)((ulonglong)*(undefined8 *)(param_1 + 0x5f4) >> 0x20);
  local_9c = fVar3 - fStack_ac;
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  local_98 = fVar4 - fVar8;
  lVar7 = FVector::Rotation(&local_a0,local_94);
  fVar10 = *(float *)(lVar7 + 4);
  local_9c = (fVar5 * param_3 + fVar3) - fStack_ac;
  local_98 = (fVar6 * param_3 + fVar4) - fVar8;
  local_a0 = (fVar11 * param_3 + fVar9) - local_b0;
  lVar7 = FVector::Rotation(&local_a0,local_94);
  fVar8 = *(float *)(lVar7 + 4) - fVar10;
  fVar11 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
  if (ABS(fVar8) < ABS(fVar11)) {
    fVar11 = fVar8;
  }
  fVar8 = fVar8 - fVar11;
  if (fVar8 < 0.0) {
    fVar8 = fVar8 + 360.0;
  }
  if (180.0 < fVar8) {
    fVar8 = fVar8 - 360.0;
  }
  if (fVar8 <= 0.0) {
    if (0.0 <= fVar8) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = -1.0;
    }
  }
  else {
    fVar11 = 1.0;
  }
  fVar9 = ABS(fVar8);
  if (fVar2 <= ABS(fVar8)) {
    fVar9 = fVar2;
  }
  fVar10 = fVar9 * fVar11 + fVar10;
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar10 = fVar10 - fVar11;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  if (180.0 < fVar10) {
    fVar10 = fVar10 - 360.0;
  }
  fVar10 = fVar10 - fVar1;
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar10 = fVar10 - fVar11;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  if (180.0 < fVar10) {
    fVar10 = fVar10 - 360.0;
  }
  return fVar10;
}



// FUNCTION 142fa4190 FUN_142fa4190 body=904 status=ok
// SIG undefined FUN_142fa4190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142fa4190(longlong param_1,float *param_2,float param_3,float *param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  int local_178;
  float local_174;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [24];
  float local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_110;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar3 = *(longlong *)(param_1 + 0x8f8);
  if (lVar3 == 0) {
    plVar7 = *(longlong **)(param_5 + 8);
    uVar6 = local_88;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar4 = (int)lVar3 - 1;
      uVar6 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        uVar6 = (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          uVar6 = (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    plVar7 = (longlong *)UWeapon::GetStatusEffectOriginStats(*(undefined8 *)(lVar3 + 0x130));
    if ((plVar7 != (longlong *)0x0) && (lVar3 = *(longlong *)(lVar3 + 0x130), lVar3 != 0)) {
      local_168 = *(undefined8 *)param_2;
      local_160 = param_2[2];
      fVar11 = param_3 * param_3;
      do {
        iVar5 = rand();
        fVar9 = (float)iVar5 * 3.051851e-05 * param_3;
        iVar5 = rand();
        fVar10 = (float)iVar5 * 3.051851e-05 * param_3;
        iVar5 = rand();
        fVar8 = (float)iVar5 * 3.051851e-05 * param_3;
      } while (fVar11 < fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
      local_d4 = 0xffffffff;
      if (param_3 <= 1.0) {
        param_3 = 1.0;
      }
      local_a8 = (fVar9 + (float)local_168) * 0.01;
      fStack_a4 = (fVar10 + local_168._4_4_) * 0.01;
      fStack_a0 = (fVar8 + local_160) * 0.01;
      uStack_9c = 0;
      local_d8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d0 = 0;
      local_b8 = 0;
      local_98 = param_3 * 0.01;
      local_174 = DAT_1465318f4;
      if (DAT_1465318f4 <= 0.0) {
        local_174 = 0.0;
      }
      fVar8 = DAT_1465318f8;
      if (DAT_1465318f8 <= 0.0) {
        fVar8 = 0.0;
      }
      local_174 = local_174 * 0.01;
      fStack_94 = local_98;
      fStack_90 = local_98;
      fStack_8c = local_98;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_178,&local_d8,local_f8);
      if (local_178 != -1) {
        FUN_143850ae0(local_148);
        local_128 = _DAT_1467f08b0;
        uStack_124 = uRam00000001467f08b4;
        uStack_120 = uRam00000001467f08b8;
        uStack_11c = uRam00000001467f08bc;
        FUN_143854e80(local_148,local_f8,local_174,fVar8 * 0.01 + fVar8 * 0.01);
        if (local_130 <= 1.0) {
          local_130 = 1.0;
        }
        local_110 = FUN_142f9e4a0(param_1 + 0xa28);
        if (local_110 != 0) {
          iVar5 = FUN_143854bc0(lVar3,local_148,&local_e8,local_158);
          *param_4 = local_e8;
          param_4[1] = fStack_e4;
          param_4[2] = fStack_e0;
          fVar8 = *param_4;
          fVar9 = param_4[1];
          fVar10 = param_4[2];
          *param_4 = fVar8 * 100.0;
          param_4[1] = fVar9 * 100.0;
          param_4[2] = fVar10 * 100.0;
          if ((iVar5 != 0) &&
             (fVar9 = fVar9 * 100.0 - param_2[1], fVar8 = fVar8 * 100.0 - *param_2,
             fVar10 = fVar10 * 100.0 - param_2[2],
             fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10 <= fVar11)) {
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_5);
            return 1;
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_5);
          return 0;
        }
      }
    }
    uVar6 = TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_5);
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142fa4520 FUN_142fa4520 body=819 status=ok
// SIG undefined FUN_142fa4520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142fa4520(undefined8 *param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined1 local_1e0 [8];
  float local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  undefined8 local_148;
  uint local_138 [4];
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  int local_118;
  float local_10c;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  uVar2 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_150 = param_1[0xf];
  if (local_150 != 0) {
    local_1b0 = param_1[3];
    uStack_1a8 = param_1[4];
    local_1a0 = param_1[5];
    uStack_198 = param_1[6];
    local_1bc = 0;
    local_1b4 = 0;
    local_190 = param_1[7];
    uStack_188 = param_1[8];
    local_148 = 0;
    local_1c0 = *(undefined4 *)(param_1 + 1);
    local_180 = param_1[9];
    uStack_178 = param_1[10];
    local_1e8 = 0xffffffffffffffff;
    local_170 = param_1[0xb];
    uStack_168 = param_1[0xc];
    local_160 = *(undefined4 *)(param_1 + 0xd);
    uStack_15c = *(undefined4 *)((longlong)param_1 + 0x6c);
    uStack_158 = *(undefined4 *)(param_1 + 0xe);
    uStack_154 = *(undefined4 *)((longlong)param_1 + 0x74);
    local_1c8 = *param_1;
    local_48 = uVar2;
    uVar2 = FUN_142f9b3a0(&local_1c8,local_1e0,&local_1e8);
    if ((char)uVar2 != '\0') {
      uVar2 = param_1[0xf];
      lVar5 = 0;
      lVar4 = lVar5;
      if (uVar2 != 0) {
        lVar4 = *(longlong *)(uVar2 + 0x8f8);
      }
      lVar3 = lVar5;
      if (lVar4 != 0) {
        lVar3 = UWeapon::GetStatusEffectOriginStats(*(undefined8 *)(lVar4 + 0x130));
        uVar2 = param_1[0xf];
      }
      lVar4 = lVar5;
      if (uVar2 != 0) {
        lVar4 = *(longlong *)(uVar2 + 0x8f8);
      }
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x130);
      }
      if ((lVar3 != 0) && (lVar5 != 0)) {
        *param_2 = 0;
        TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Reset(param_2 + 2);
        FUN_143841ee0(local_138);
        local_128 = local_1e0._0_4_ * 0.01;
        fStack_124 = local_1e0._4_4_ * 0.01;
        fStack_120 = local_1d8 * 0.01;
        uStack_11c = 0;
        local_10c = *(float *)(param_1 + 3) * 0.01 + *(float *)(param_1 + 3) * 0.01;
        local_f8 = FUN_142fa12f0(param_1[0xf] + 0xa28,param_1 + 0xd);
        local_100 = FUN_142f9efa0(param_1[0xf] + 0xa28,param_1 + 0xd);
        local_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0x3f800000;
        uStack_cc = 0;
        if (((int)local_1e8 < 0) || ((longlong)local_1e8 < 0)) {
          local_138[0] = 0xffffffff;
        }
        else {
          local_138[0] = (int)local_1e8 << 0x16 | (uint)(local_1e8 >> 0x20);
        }
        local_118 = 0x9c4;
        if (*(int *)(param_1 + 0x10) != 0) {
          local_118 = *(int *)(param_1 + 0x10);
        }
        if (local_f8 == 0) {
          lVar4 = param_1[0xf];
          cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0xa28);
          if ((cVar1 == '\0') || (local_f8 = *(longlong *)(lVar4 + 0xb48), local_f8 == 0)) {
            return 0;
          }
        }
        local_c0 = 0x3f800000;
        local_c8 = &PTR_FUN_145a0e0f0;
        local_b8 = 0;
        local_b0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0xffffffff;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_58 = lVar5;
        AkFft::IfftReal(lVar5,local_138,&local_c8,0);
        if (param_3 != (ulonglong *)0x0) {
          if (local_138[0] == 0xffffffff) {
            local_1e8 = 0xffffffffffffffff;
          }
          else {
            local_1e8 = CONCAT44(local_138[0],local_138[0] >> 0x16) & 0x3fffffffffffff;
          }
          *param_3 = local_1e8;
        }
        FUN_142fb2580(param_2,local_c0,&local_b8);
        local_70 = 0;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
        return 1;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142fa4860 FUN_142fa4860 body=324 status=ok
// SIG undefined FUN_142fa4860(void)

undefined8 * FUN_142fa4860(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_28 [32];
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x68) == 0)) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x178) == 0)) {
    FUN_142c628c0(param_2);
    return param_2;
  }
  FUN_142c628c0(local_28);
  if (*(char *)(param_1 + 0x38) == '\x05') {
    uVar4 = *(undefined8 *)(lVar3 + 0x7b4);
    uVar1 = *(undefined8 *)(lVar3 + 0x7bc);
    uVar2 = *(undefined4 *)(lVar3 + 0x7c4);
    *param_2 = *(undefined8 *)(lVar3 + 0x7ac);
    param_2[1] = uVar4;
    param_2[2] = uVar1;
    *(undefined4 *)(param_2 + 3) = uVar2;
    return param_2;
  }
  if ((*(char *)(param_1 + 0x38) == '\a') && (ABS(*(float *)(lVar3 + 0x790)) < 135.0)) {
    uVar4 = *(undefined8 *)(lVar3 + 2000);
    uVar1 = *(undefined8 *)(lVar3 + 0x7d8);
    uVar2 = *(undefined4 *)(lVar3 + 0x7e0);
    *param_2 = *(undefined8 *)(lVar3 + 0x7c8);
    param_2[1] = uVar4;
    param_2[2] = uVar1;
    *(undefined4 *)(param_2 + 3) = uVar2;
    return param_2;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x798);
  uVar1 = *(undefined8 *)(lVar3 + 0x7a0);
  uVar2 = *(undefined4 *)(lVar3 + 0x7a8);
  *param_2 = *(undefined8 *)(lVar3 + 0x790);
  param_2[1] = uVar4;
  param_2[2] = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  return param_2;
}



// FUNCTION 142fa49b0 FUN_142fa49b0 body=485 status=ok
// SIG undefined FUN_142fa49b0(void)

undefined8 FUN_142fa49b0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res10;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [96];
  
  lVar7 = 0;
  lVar3 = lVar7;
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  local_a8 = (longlong *)FUN_142f9cfb0(lVar3,0);
  if (local_a8 == (longlong *)0x0) {
    FBasedPosition::FBasedPosition(param_1);
  }
  else {
    if (local_a8[0x16a] == 0) {
      local_10c = 0x42c80000;
    }
    else {
      local_10c = *(undefined4 *)(local_a8[0x16a] + 0xf4);
    }
    local_110 = *(undefined4 *)(param_3 + 1);
    local_118 = *param_3;
    puVar4 = (undefined8 *)(**(code **)(*local_a8 + 0x860))(local_a8,local_88,param_2);
    local_res10 = 0xffffffffffffffff;
    local_108 = *puVar4;
    uStack_100 = puVar4[1];
    local_f8 = puVar4[2];
    uStack_f0 = puVar4[3];
    local_e8 = puVar4[4];
    uStack_e0 = puVar4[5];
    local_d8 = puVar4[6];
    uStack_d0 = puVar4[7];
    local_c8 = *(undefined4 *)(puVar4 + 8);
    uStack_c4 = *(undefined4 *)((longlong)puVar4 + 0x44);
    uStack_c0 = *(undefined4 *)(puVar4 + 9);
    uStack_bc = *(undefined4 *)((longlong)puVar4 + 0x4c);
    local_b8 = *(undefined4 *)(puVar4 + 10);
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0x54);
    uStack_b0 = *(undefined4 *)(puVar4 + 0xb);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0x5c);
    FUN_142fae610(&local_118,local_98,&local_res10);
    local_140 = &local_148;
    local_148 = lVar3;
    local_138 = FUN_14073d760(&local_148,DAT_146b440c0);
    plVar2 = local_140;
    local_130 = &local_148;
    local_128 = 0;
    puVar4 = (undefined8 *)FUN_14073d760(local_140,local_138);
    puVar5 = (undefined8 *)FUN_14073d760(local_130,local_128);
    lVar3 = lVar7;
    if (puVar4 != puVar5) {
      iVar1 = (int)local_res10;
      do {
        lVar3 = *(longlong *)(puVar4[2] + 0x790);
        if (lVar3 == 0) {
          iVar6 = -1;
        }
        else {
          iVar6 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x17c);
        }
        lVar3 = puVar4[2];
      } while ((iVar6 != iVar1) &&
              (puVar4 = (undefined8 *)FUN_14073d760(plVar2,*puVar4), lVar3 = lVar7, puVar4 != puVar5
              ));
    }
    FUN_142c482c0(param_1,lVar3,param_3);
  }
  return param_1;
}



// FUNCTION 142fa4ba0 FUN_142fa4ba0 body=175 status=ok
// SIG undefined FUN_142fa4ba0(void)

void FUN_142fa4ba0(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar3 = 0;
  plVar5 = *(longlong **)(param_1 + 0x10);
  uVar4 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x18) < plVar5) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar2 = *plVar5;
      if ((lVar2 != 0) &&
         ((param_2 == *(int *)(lVar2 + 0x28) || (param_2 == *(int *)(lVar2 + 0x2c))))) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 142fa4c50 FUN_142fa4c50 body=191 status=ok
// SIG undefined FUN_142fa4c50(void)

undefined8 * FUN_142fa4c50(longlong param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_res8 [2];
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (((cVar1 != '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    FUN_142f9b930(param_1 + 0xd0,local_res8,param_2);
    puVar5 = (undefined8 *)0x0;
    puVar4 = puVar5;
    if (local_res8[0] != -1) {
      puVar4 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xd0));
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = puVar5;
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return puVar5;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fa4d50 FUN_142fa4d50 body=246 status=ok
// SIG undefined FUN_142fa4d50(void)

longlong * FUN_142fa4d50(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_3 + 0x68) != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar3 = (undefined4 *)(*param_2 + (longlong)iVar1 * 8);
    *puVar3 = local_res8;
    puVar3[1] = local_resc;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar3 = (undefined4 *)(*param_2 + (longlong)iVar1 * 8);
    *puVar3 = *(undefined4 *)(param_1 + 0x78);
    local_resc = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    if (*(char *)(param_1 + 0x68) != '\x02') {
      return param_2;
    }
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x80);
    if (lVar2 == 0) {
      return param_2;
    }
    FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(lVar2 + 0x118));
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar3 = (undefined4 *)(*param_2 + (longlong)iVar1 * 8);
    *puVar3 = local_res8;
  }
  puVar3[1] = local_resc;
  return param_2;
}



// FUNCTION 142fa4e50 FUN_142fa4e50 body=125 status=ok
// SIG undefined FUN_142fa4e50(void)

float FUN_142fa4e50(longlong param_1,char param_2)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  fVar2 = 0.0;
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x40) + 0x2f8);
    }
  }
  else if (*(char *)(lVar1 + 0x280) == '\x01') {
    fVar2 = *(float *)(lVar1 + 0x268) * *(float *)(lVar1 + 0x244);
  }
  else if (*(char *)(lVar1 + 0x280) == '\x02') {
    fVar2 = *(float *)(lVar1 + 0x274) * *(float *)(lVar1 + 0x244);
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x25c) * *(float *)(lVar1 + 0x244);
  }
  if ((param_2 == '\0') && (0.0 < *(float *)(param_1 + 0x58))) {
    fVar2 = fVar2 / *(float *)(param_1 + 0x58);
  }
  return fVar2;
}



// FUNCTION 142fa4ed0 FUN_142fa4ed0 body=32 status=ok
// SIG undefined FUN_142fa4ed0(void)

ulonglong FUN_142fa4ed0(int *param_1)

{
  if ((-1 < *param_1) && (-1 < param_1[1])) {
    return (longlong)(param_1[1] + 1) | (longlong)*param_1 << 0x20;
  }
  return 0;
}



// FUNCTION 142fa4ef0 FUN_142fa4ef0 body=150 status=ok
// SIG undefined FUN_142fa4ef0(void)

int FUN_142fa4ef0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int local_res8 [2];
  undefined1 local_res10 [24];
  
  iVar3 = 0;
  while ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
    if (iVar1 == -1) break;
    while (*(int *)(*param_1 + (longlong)iVar1 * 0xc) != iVar3) {
      iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar1 * 0xc);
      if (iVar1 == -1) goto LAB_142fa4f59;
    }
    if (iVar1 == -1) break;
    iVar3 = iVar3 + 1;
  }
LAB_142fa4f59:
  local_res8[0] = iVar3;
  FUN_14044be50(param_1,local_res10,local_res8,0);
  return iVar3;
}



// FUNCTION 142fa4f90 FUN_142fa4f90 body=299 status=ok
// SIG undefined FUN_142fa4f90(void)

void FUN_142fa4f90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar1 = FUN_142fa53c0();
  if ((cVar1 == '\0') ||
     (((lVar2 = *(longlong *)(param_1 + 0x278), *(int *)(lVar2 + 0x2c) < 0 ||
       (*(int *)(lVar2 + 0x30) < 0)) &&
      ((*(int *)(lVar2 + 0x34) < 0 || (*(int *)(lVar2 + 0x38) < 0)))))) {
    FUN_142fabb30(param_1,0);
  }
  else {
    cVar1 = FUN_142fa53c0(param_1);
    if (cVar1 != '\0') {
      FUN_142fb36a0(param_1 + 0x430,*(longlong *)(param_1 + 0x278) + 0x20);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b44200) {
    _Init_thread_header(&DAT_146b44200);
    if (DAT_146b44200 == -1) {
      FName::FName(&DAT_146b441f8,L"NavGoal",1);
      _Init_thread_footer(&DAT_146b44200);
    }
  }
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x568);
  }
  if (lVar2 != 0) {
    cVar1 = FUN_142fa53c0(param_1);
    if (cVar1 != '\0') {
      local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x20);
      local_10 = *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x28);
      FUN_142bcae30(lVar2,&DAT_146b441f8,&local_18);
    }
  }
  FUN_142fa53c0(param_1);
  return;
}



// FUNCTION 142fa50c0 FUN_142fa50c0 body=72 status=ok
// SIG undefined FUN_142fa50c0(void)

void FUN_142fa50c0(longlong param_1)

{
  char cVar1;
  
  *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2f8);
  *(undefined1 *)(param_1 + 0x9a9) = 1;
  *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
  cVar1 = FUN_142fa53c0();
  if (cVar1 != '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x210,param_1);
    return;
  }
  return;
}



// FUNCTION 142fa5110 FUN_142fa5110 body=255 status=ok
// SIG undefined FUN_142fa5110(void)

undefined8 FUN_142fa5110(undefined8 param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  float local_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
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
  undefined8 local_20;
  undefined8 local_18;
  
  local_98 = *(undefined8 *)param_2;
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  local_8c = 0;
  local_88 = 1;
  local_18 = 0;
  local_90 = param_2[2];
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_50 = param_3[6];
  uStack_48 = param_3[7];
  local_60 = param_3[4];
  uStack_58 = param_3[5];
  local_30 = *(undefined4 *)(param_3 + 10);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x54);
  uStack_28 = *(undefined4 *)(param_3 + 0xb);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x5c);
  local_40 = *(undefined4 *)(param_3 + 8);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0x44);
  uStack_38 = *(undefined4 *)(param_3 + 9);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x4c);
  local_20 = param_1;
  cVar1 = FUN_142f9b3a0(&local_98,&local_a8,0);
  if (((cVar1 != '\0') && (ABS(local_a8 - *param_2) <= 0.1)) && (ABS(fStack_a4 - param_2[1]) <= 0.1)
     ) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = CONCAT44(fStack_a4,local_a8);
      *(undefined4 *)(param_4 + 1) = local_a0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142fa5210 FUN_142fa5210 body=423 status=ok
// SIG undefined FUN_142fa5210(void)

ulonglong FUN_142fa5210(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  float *pfVar5;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  uVar4 = FUN_142fa53c0();
  if (((char)uVar4 == '\0') || (cVar3 = *(char *)((longlong)param_1 + 0x781), cVar3 == '\0')) {
    return uVar4 & 0xffffffffffffff00;
  }
  lVar1 = param_1[0x4f];
  pfVar5 = (float *)(lVar1 + 0x20);
  local_48 = (float)DAT_14676e1b0;
  local_44 = DAT_14676e1b0._4_4_;
  local_40 = DAT_14676e1b8;
  local_38 = *(undefined8 *)pfVar5;
  local_30 = *(float *)(lVar1 + 0x28);
  if (cVar3 == '\x01') {
    bVar2 = (**(code **)(*param_1 + 0x448))(param_1,pfVar5,&local_48);
LAB_142fa5325:
    if (bVar2 != 0) goto LAB_142fa537b;
  }
  else if (cVar3 == '\x02') {
    local_28 = *pfVar5 - (float)*(undefined8 *)((longlong)param_1 + 0x784);
    local_14 = *(float *)((longlong)param_1 + 0x78c);
    local_24 = *(float *)(lVar1 + 0x24) -
               (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20);
    local_20 = *(float *)(lVar1 + 0x28) - (local_14 - *(float *)((longlong)param_1 + 0x6ec));
    bVar2 = (**(code **)(*param_1 + 0x460))(param_1,&local_28,1,&local_48,0);
    goto LAB_142fa5325;
  }
  if (1.0 <= (local_38._4_4_ - local_44) * (local_38._4_4_ - local_44) +
             ((float)local_38 - local_48) * ((float)local_38 - local_48) +
             (local_30 - local_40) * (local_30 - local_40)) {
    return 0;
  }
  bVar2 = 1;
LAB_142fa537b:
  cVar3 = FUN_142c73980(param_1[0x4f] + 0x3c,local_40);
  uVar4 = (ulonglong)bVar2;
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 142fa53c0 FUN_142fa53c0 body=114 status=ok
// SIG undefined FUN_142fa53c0(void)

undefined8 FUN_142fa53c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x278);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x68) == '\x01') {
      lVar3 = 0x10;
    }
    else {
      if (*(char *)(lVar1 + 0x68) != '\x02') {
        if ((float)DAT_14676e1b0 != *(float *)(lVar1 + 0x6c)) {
          return 1;
        }
        if (DAT_14676e1b0._4_4_ != *(float *)(lVar1 + 0x70)) {
          return 1;
        }
        if (DAT_14676e1b8 != *(float *)(lVar1 + 0x74)) {
          return 1;
        }
        return 0;
      }
      lVar3 = 0x18;
    }
    cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x68 + lVar3);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fa5440 FUN_142fa5440 body=42 status=ok
// SIG undefined FUN_142fa5440(void)

bool FUN_142fa5440(longlong param_1)

{
  if (*(char *)(param_1 + 0x781) == '\x01') {
    return *(int *)(param_1 + 0x6f4) != -1;
  }
  if (*(char *)(param_1 + 0x781) != '\x02') {
    return false;
  }
  return *(int *)(param_1 + 0x6f8) != -1;
}



// FUNCTION 142fa5470 FUN_142fa5470 body=1110 status=ok
// SIG undefined FUN_142fa5470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142fa5470(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  BOOL BVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  float local_190 [4];
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  float local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  float local_118;
  undefined4 local_10c;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  cVar1 = FUN_142ca5540();
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x02') {
    return 1;
  }
  if ((param_3[0x102] == 0) || (param_3[0x103] == 0)) {
    return 0;
  }
  uVar4 = USignificanceManager::GetWorld(param_3);
  lVar5 = FUN_142c9fbb0(param_2,uVar4);
  if (lVar5 == 0) {
    return 0;
  }
  if ((char)param_3[0x100] != '\0') {
    return 1;
  }
  local_1c8 = 0;
  FUN_142291830(lVar5,local_a8,0,0x7f7fffff);
  local_1b0 = local_98;
  local_1ac = fStack_94;
  local_1a8 = fStack_90;
  if (((ABS(local_98) <= 0.0001) && (ABS(fStack_94) <= 0.0001)) && (ABS(fStack_90) <= 0.0001)) {
    return 1;
  }
  local_19c = (undefined4)param_3[0xbc];
  local_1a0 = 0;
  local_198 = 0;
  _guard_xfg_dispatch_icall_nop(&local_138,0,0x88);
  uVar4 = (**(code **)(*param_3 + 0x148))(param_3);
  local_b8 = FUN_142f9cfb0(uVar4,0);
  local_124 = *(undefined4 *)((longlong)param_3 + 0x5fc);
  local_12c = *(undefined8 *)((longlong)param_3 + 0x5f4);
  lpCriticalSection = (LPCRITICAL_SECTION)(local_b8 + 0x638);
  local_10c = *(undefined4 *)((longlong)param_3 + 0x80c);
  local_118 = *(float *)(param_3 + 0xc0) - 1.0;
  local_c8 = param_3[0x102];
  local_1b8 = CONCAT44(*(undefined4 *)((longlong)param_3 + 0x804),(int)param_3[0x101]);
  local_c0 = param_3[0x103];
  local_120 = local_1b8;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(char *)(param_2 + 0x28) == '\0') {
    puVar6 = (undefined8 *)FRotator::RotateVector(&local_1a0,&local_150,&local_1b0);
    local_138 = *puVar6;
    local_130 = *(float *)(puVar6 + 1);
    if (*(char *)(param_1 + 0x48) == '\x01') {
      local_138._4_4_ = (float)((ulonglong)local_138 >> 0x20);
      fVar7 = (float)local_138 * (float)local_138 + local_138._4_4_ * local_138._4_4_;
      fVar11 = SQRT(fVar7) - *(float *)(param_1 + 0x50);
      if (fVar11 <= *(float *)(param_3 + 0xf0)) {
        fVar11 = *(float *)(param_3 + 0xf0);
      }
      if (fVar7 == 1.0) {
        fVar8 = (float)local_138;
        fVar10 = local_138._4_4_;
        if (local_130 != 0.0) {
LAB_142fa583c:
          fVar8 = (float)local_138;
          fVar10 = local_138._4_4_;
          local_130 = 0.0;
        }
      }
      else {
        fVar8 = DAT_1468b5d90;
        fVar10 = DAT_1468b5d94;
        local_130 = DAT_1468b5d98;
        if (1e-08 <= fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          local_138._0_4_ = (float)local_138 * fVar8;
          local_138._4_4_ = local_138._4_4_ * fVar8;
          goto LAB_142fa583c;
        }
      }
      local_138 = CONCAT44(fVar10 * fVar11,fVar8 * fVar11);
      local_130 = local_130 * fVar11;
    }
  }
  else {
    local_190[0] = local_1b0;
    local_190[1] = 0.0;
    local_190[2] = 0.0;
    FRotator::RotateVector(&local_1a0,&local_180,local_190);
    local_130 = local_178;
    local_138 = CONCAT44(local_17c,local_180);
    local_1b8 = 0xffffffffffffffff;
    cVar1 = FUN_142f99630(&local_138,&local_150,&local_1b8);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_142fa5887;
    }
    local_16c = local_1ac;
    local_170 = 0;
    local_168 = 0;
    FRotator::RotateVector(&local_1a0,&local_160,&local_170);
    local_124 = local_148;
    local_138 = CONCAT44(local_15c,local_160);
    local_12c = local_150;
    local_120 = local_1b8;
    local_130 = local_158;
  }
  uVar2 = FUN_142f99630(&local_138,0,0);
LAB_142fa5887:
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 142fa58d0 FUN_142fa58d0 body=9 status=ok
// SIG undefined FUN_142fa58d0(void)

void FUN_142fa58d0(longlong param_1)

{
  FUN_142fa8a90(param_1 + 0x20);
  return;
}



// FUNCTION 142fa58e0 FUN_142fa58e0 body=55 status=ok
// SIG undefined FUN_142fa58e0(void)

undefined1 FUN_142fa58e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142fa8b90();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x780) == '\0')) {
    cVar1 = FUN_142fbc510(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fa5920 FUN_142fa5920 body=423 status=ok
// SIG undefined FUN_142fa5920(void)

void FUN_142fa5920(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (1e-08 < ABS(param_2)) {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar8 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + param_1[2] * param_1[2]);
    fVar6 = DAT_1468b5d90;
    fVar7 = DAT_1468b5d94;
    if (1e-08 < fVar8) {
      fVar6 = fVar1 * (1.0 / fVar8);
      fVar7 = fVar2 * (1.0 / fVar8);
    }
    if (0.0001 <= fVar8) {
      fVar3 = fVar6 * fVar6 + fVar7 * fVar7 + param_2 * param_2;
      fVar1 = fVar6;
      fVar2 = fVar7;
      fVar4 = param_2;
      if ((fVar3 != 1.0) &&
         (fVar1 = DAT_1468b5d90, fVar2 = DAT_1468b5d94, fVar4 = DAT_1468b5d98, 1e-08 <= fVar3)) {
        auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar2 = auVar5._0_4_;
        fVar2 = fVar2 + fVar2 * (0.5 - fVar3 * 0.5 * fVar2 * fVar2);
        fVar2 = fVar2 + fVar2 * (0.5 - fVar3 * 0.5 * fVar2 * fVar2);
        fVar4 = fVar2 * param_2;
        fVar1 = fVar6 * fVar2;
        fVar2 = fVar2 * fVar7;
      }
      fVar1 = fVar1 * fVar8;
      fVar2 = fVar2 * fVar8;
      param_2 = fVar4 * fVar8;
    }
    else {
      param_2 = param_2 * param_3;
      fVar1 = 0.0;
      fVar2 = 0.0;
    }
    *(ulonglong *)param_1 = CONCAT44(fVar2,fVar1);
    param_1[2] = param_2;
  }
  return;
}



// FUNCTION 142fa5ad0 FUN_142fa5ad0 body=345 status=ok
// SIG undefined FUN_142fa5ad0(void)

void FUN_142fa5ad0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  plVar5 = (longlong *)0x0;
  param_1[2] = param_2;
  plVar2 = plVar5;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_2 + 0x118);
  }
  param_1[3] = plVar2;
  lVar1 = (**(code **)(*plVar2 + 0x668))();
  if (lVar1 != 0) {
    param_1[3] = *(undefined8 *)(lVar1 + 0x488);
  }
  plVar2 = plVar5;
  if ((param_1[2] != 0) && (plVar2 = *(longlong **)(param_1[2] + 0x120), plVar2 == (longlong *)0x0))
  {
    plVar2 = (longlong *)FUN_1423407b0();
  }
  *param_1 = plVar2;
  uVar3 = FUN_142f9cfb0(plVar2,0);
  plVar2 = (longlong *)param_1[3];
  param_1[1] = uVar3;
  plVar4 = plVar5;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_142e39920();
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    plVar5 = (longlong *)param_1[3];
  }
  param_1[4] = plVar4;
  if (plVar5 != (longlong *)0x0) {
    uVar3 = UNavAgentInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar5,uVar3);
    if (plVar5 != (longlong *)0x0) {
      puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x10))(plVar5);
      *(undefined4 *)(param_1 + 5) = *puVar6;
      *(undefined4 *)((longlong)param_1 + 0x2c) = puVar6[1];
      *(undefined4 *)(param_1 + 6) = puVar6[2];
      *(undefined4 *)((longlong)param_1 + 0x34) = puVar6[3];
      *(undefined4 *)(param_1 + 7) = puVar6[4];
      local_28 = *(undefined8 *)(puVar6 + 6);
      FString::FString(local_20,puVar6 + 8);
      FSoftObjectPath::operator=(param_1 + 8,&local_28);
      return;
    }
  }
  if (((longlong *)param_1[3] != (longlong *)0x0) &&
     (lVar1 = (**(code **)(*(longlong *)param_1[3] + 0x668))(), lVar1 != 0)) {
    uVar3 = (**(code **)(*(longlong *)(lVar1 + 0x458) + 0x10))();
    FUN_1409f69a0(param_1 + 5,uVar3);
  }
  return;
}



// FUNCTION 142fa5c30 FUN_142fa5c30 body=278 status=ok
// SIG undefined FUN_142fa5c30(void)

void FUN_142fa5c30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  param_1[2] = param_2;
  plVar5 = (longlong *)*param_1;
  plVar6 = plVar5 + (longlong)(int)param_1[1] * 4;
  for (; plVar5 != plVar6; plVar5 = plVar5 + 4) {
    if ((param_1[2] != 0) && (lVar1 = *plVar5, lVar1 != 0)) {
      lVar4 = FUN_142fbe640();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar1 = param_1[2];
        lVar4 = *(longlong *)(lVar1 + 0x8f8);
        if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x140) != 0)) &&
            (cVar3 = FWeakObjectPtr::IsValid(lVar1 + 0xa28), cVar3 != '\0')) &&
           (*(longlong *)(lVar1 + 0xb48) != 0)) {
          FUN_14384cf70(lVar4,(int)plVar5[2],*(longlong *)(lVar1 + 0xb48),0,0,
                        *(float *)(plVar5 + 1) * 0.01);
        }
      }
    }
  }
  return;
}



// FUNCTION 142fa5d50 FUN_142fa5d50 body=400 status=ok
// SIG undefined FUN_142fa5d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fa5d50(longlong *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 2,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b44268) && (_Init_thread_header(&DAT_146b44268), DAT_146b44268 == -1))
  {
    DAT_146b44258 = 0;
    _DAT_146b44260 = 0;
    atexit((_func_5014 *)&LAB_143ec2660);
    _Init_thread_footer(&DAT_146b44268);
  }
  lVar2 = FUN_142f9d030();
  if (lVar2 == 0) {
    plVar3 = &DAT_146b44258;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x50);
  }
  if (param_1 != plVar3) {
    iVar1 = (int)plVar3[1];
    _Src = (void *)*plVar3;
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  lVar2 = FUN_142f9d030();
  if (lVar2 != 0) {
    lVar6 = *(longlong *)(lVar2 + 0x40);
  }
  plVar3 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  plVar5 = plVar3;
  do {
    if (plVar5 == plVar3 + iVar1) {
LAB_142fa5e2e:
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 8),(void *)*param_1,(longlong)iVar1 << 3);
      *(longlong *)*param_1 = lVar6;
      return;
    }
    if (*plVar5 == lVar6) {
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar3 >> 3);
      if (iVar4 != -1) {
        lVar6 = *plVar3;
        *plVar3 = plVar3[iVar4];
        plVar3[iVar4] = lVar6;
        return;
      }
      goto LAB_142fa5e2e;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 142fa5ee0 FUN_142fa5ee0 body=939 status=ok
// SIG undefined FUN_142fa5ee0(void)

void FUN_142fa5ee0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  uint local_80;
  uint local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if (param_2 != 0) {
    iVar7 = (int)param_1[0xb];
    if (0 < iVar7) {
      lVar8 = param_1[1];
      iVar5 = (int)lVar8 + iVar7;
      *(int *)(param_1 + 1) = iVar5;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)(int)lVar8 * 8),0,(longlong)iVar7 << 3);
      iVar7 = 0;
      if (0 < (int)param_1[1]) {
        do {
          FUN_142faa3e0((longlong)iVar7 * 8 + *param_1,param_1[10] + (longlong)iVar7 * 8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_1[1]);
      }
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (*(int *)((longlong)param_1 + 0x5c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
      }
    }
    lVar8 = param_1[2];
    plVar1 = param_1 + 2;
    lVar9 = (longlong)(int)param_1[3] * 0x20 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x20) {
      FUN_142faa3e0(lVar8,lVar8 + 0x10);
      FUN_142faa3e0(lVar8 + 8,lVar8 + 0x18);
    }
    plVar6 = (longlong *)0x0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    FUN_142f9d3d0(param_2,&local_78);
    iVar7 = 0;
    local_88 = (longlong *)0x0;
    local_7c = 0;
    local_98 = (longlong *)0x0;
    iVar5 = 0;
    local_8c = 0;
    plVar12 = (longlong *)
              ((ulonglong)((longlong)(local_78 + (int)local_70) + (7 - (longlong)local_78)) >> 3);
    if (local_78 + (int)local_70 < local_78) {
      plVar12 = plVar6;
    }
    plVar11 = plVar6;
    plVar13 = plVar6;
    plVar14 = local_78;
    plVar16 = plVar6;
    plVar17 = plVar6;
    plVar18 = plVar6;
    if (plVar12 != (longlong *)0x0) {
      do {
        lVar8 = *plVar14;
        if (*(char *)(lVar8 + 0x5e) == '\0') {
          if (*(char *)(lVar8 + 0x5f) == '\0') {
            plVar6 = (longlong *)*param_1;
            iVar7 = (int)param_1[1];
            for (plVar11 = plVar6; plVar11 != plVar6 + iVar7; plVar11 = plVar11 + 1) {
              if (*plVar11 == lVar8) {
                if ((int)((longlong)plVar11 - (longlong)plVar6 >> 3) != -1) goto LAB_142fa6112;
                break;
              }
            }
            *(int *)(param_1 + 1) = iVar7 + 1;
            if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
              plVar13 = local_98;
            }
            *(longlong *)((longlong)iVar7 * 8 + *param_1) = lVar8;
          }
          else {
            iVar7 = (int)plVar18;
            local_90 = iVar7 + 1;
            if ((int)plVar11 < (int)local_90) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,plVar18);
              plVar13 = local_98;
            }
            plVar18 = (longlong *)(ulonglong)local_90;
            plVar13[iVar7] = lVar8;
          }
        }
        else {
          iVar7 = (int)plVar17;
          local_80 = iVar7 + 1;
          if ((int)plVar6 < (int)local_80) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,plVar17);
            plVar13 = local_98;
          }
          plVar17 = (longlong *)(ulonglong)local_80;
          local_88[iVar7] = lVar8;
        }
LAB_142fa6112:
        iVar5 = (int)plVar18;
        iVar7 = (int)plVar17;
        plVar6 = (longlong *)(ulonglong)local_7c;
        plVar16 = (longlong *)((longlong)plVar16 + 1);
        plVar11 = (longlong *)(ulonglong)local_8c;
        plVar14 = plVar14 + 1;
      } while (plVar16 != plVar12);
    }
    plVar12 = local_88 + iVar7;
    if (local_88 != plVar12) {
      plVar6 = local_88;
      uVar15 = (ulonglong)((longlong)(plVar13 + iVar5) + (7 - (longlong)plVar13)) >> 3;
      if (plVar13 + iVar5 < plVar13) {
        uVar15 = 0;
      }
      do {
        uVar10 = 0;
        lVar8 = *plVar6;
        plVar11 = plVar13;
        if (uVar15 != 0) {
          do {
            plVar13 = (longlong *)*plVar1;
            iVar7 = (int)param_1[3];
            uStack_60 = *plVar11;
            lVar9 = (longlong)iVar7 * 0x20;
            for (plVar14 = plVar13; local_68 = lVar8, plVar14 != plVar13 + (longlong)iVar7 * 4;
                plVar14 = plVar14 + 4) {
              if ((*plVar14 == lVar8) && (plVar14[1] == uStack_60)) {
                if ((int)((longlong)plVar14 - (longlong)plVar13 >> 5) != -1) goto LAB_142fa6203;
                break;
              }
            }
            *(int *)(param_1 + 3) = iVar7 + 1;
            if (*(int *)((longlong)param_1 + 0x1c) < iVar7 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar1,iVar7);
            }
            lVar4 = *plVar1;
            puVar2 = (undefined4 *)(lVar9 + lVar4);
            *puVar2 = (undefined4)local_68;
            puVar2[1] = local_68._4_4_;
            puVar2[2] = (undefined4)uStack_60;
            puVar2[3] = uStack_60._4_4_;
            puVar3 = (undefined8 *)(lVar9 + 0x10 + lVar4);
            *puVar3 = 0;
            puVar3[1] = 0;
LAB_142fa6203:
            uVar10 = uVar10 + 1;
            plVar13 = local_98;
            plVar11 = plVar11 + 1;
          } while (uVar10 != uVar15);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar12);
    }
    plVar1 = local_88;
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142fa6290 FUN_142fa6290 body=406 status=ok
// SIG undefined FUN_142fa6290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fa6290(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  FWeakObjectPtr::operator=(param_1 + 0xe8);
  local_28 = _DAT_1467f08b0;
  uStack_24 = uRam00000001467f08b4;
  uStack_20 = uRam00000001467f08b8;
  uStack_1c = uRam00000001467f08bc;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x90);
  puVar4 = (undefined8 *)0x0;
  puVar3 = puVar4;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_1438eca20(lVar2,&local_28);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(param_1 + 0xe0) = puVar3;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))();
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    _guard_xfg_dispatch_icall_nop(puVar3 + 4,0,0x708);
    _guard_xfg_dispatch_icall_nop(puVar3 + 0xe7,0,0x800);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_145a0e380;
    *(undefined4 *)(puVar3 + 2) = 0x1ffff;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[0xe5] = 0;
    puVar3[0xe6] = 0;
    puVar3[0x1e7] = 0;
    puVar3[0x1e8] = 0;
    puVar4 = puVar3;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(param_1 + 0xd8) = puVar4;
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14370c030(puVar4);
  }
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14370c150();
  }
  *(undefined8 **)(lVar2 + 0x80) = puVar4;
  FUN_142b85e20(*(undefined8 *)(param_1 + 0xe0));
  return;
}



// FUNCTION 142fa6430 FUN_142fa6430 body=278 status=ok
// SIG undefined FUN_142fa6430(void)

void FUN_142fa6430(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && (cVar1 = UObjectBaseUtility::IsTemplate(param_2,0x30), cVar1 == '\0')) {
    FWeakObjectPtr::operator=(param_1,param_2);
    cVar1 = FWeakObjectPtr::IsValid(param_1);
    if ((cVar1 == '\0') || (lVar3 = FWeakObjectPtr::Get(param_1), lVar3 == 0)) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      return;
    }
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar4 + 0x58),0xc0);
    lVar7 = 0;
    lVar6 = lVar7;
    if (lVar5 != 0) {
      lVar6 = FUN_142f897f0(lVar5,lVar3 + 0x6c0,lVar3 + 0x660);
    }
    lVar5 = FUN_142f9d030();
    if (lVar5 != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x48);
    }
    bVar2 = FUN_142f9d9e0(lVar3 + 0x6c0,lVar7);
    *(undefined4 *)(lVar6 + 0x24) = 0xffffffff;
    *(undefined8 *)(lVar6 + 0x18) = 1;
    *(int *)(lVar6 + 0x20) = ~(1 << (bVar2 & 0x1f));
    *(longlong *)(param_1 + 0x120) = lVar6;
  }
  return;
}



// FUNCTION 142fa6550 FUN_142fa6550 body=669 status=ok
// SIG undefined FUN_142fa6550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fa6550(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  BOOL BVar5;
  LPVOID pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [16];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_1c8 [224];
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
    cVar4 = UObjectBaseUtility::IsTemplate(param_2,0x30);
    if ((cVar4 == '\0') && (lVar10 = *(longlong *)(param_2 + 0xb50), lVar10 != 0)) {
      FWeakObjectPtr::operator=(param_1 + 4,param_2);
      FUN_1424c98a0();
      FUN_143845c40(&local_288);
      local_288 = _DAT_1467f08b0;
      uStack_284 = uRam00000001467f08b4;
      uStack_280 = uRam00000001467f08b8;
      uStack_27c = uRam00000001467f08bc;
      pvVar6 = TlsGetValue(DAT_146b7bf70);
      if (pvVar6 == (LPVOID)0x0) {
        pvVar6 = DAT_146b7bf68;
      }
      lVar7 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar6 + 0x58),0x520);
      uVar8 = 0;
      if (lVar7 != 0) {
        uVar8 = FUN_143845d00(lVar7,&local_288);
      }
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      FUN_142b86240(uVar8);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x138);
      if (lVar7 != 0) {
        FUN_142b890e0(lVar10 + 0x68,lVar7 + 0x50);
      }
      FUN_142f8ba30(local_e8);
      FUN_142f8b990(local_1c8);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44130);
        if (BVar5 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44130);
        }
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          plVar9[1] = param_1;
          *plVar9 = (longlong)&DAT_143f3ed00;
          plVar9[2] = (longlong)FUN_142faafa0;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[4] = lVar10;
          *plVar9 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        uVar8 = 0;
        if (plVar9 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534730,1);
          puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_298);
          iVar3 = DAT_146534738;
          lVar10 = (longlong)DAT_146534738;
          uVar8 = *puVar11;
          DAT_146534738 = DAT_146534738 + 1;
          if (DAT_14653473c < DAT_146534738) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534730,iVar3);
          }
          puVar11 = (undefined8 *)(lVar10 * 0x10 + DAT_146534730);
          *puVar11 = plVar9;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x28) = uVar8;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44130);
      }
      plVar9 = (longlong *)operator_new(0x10);
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        lVar10 = *(longlong *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined4 *)(param_1 + 8);
        *plVar9 = 0;
        *(undefined4 *)(plVar9 + 1) = uVar1;
        *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
        if (lVar10 != 0) {
          FUN_14370c030(lVar10);
        }
        if (*plVar9 != 0) {
          FUN_14370c150();
        }
        *plVar9 = lVar10;
        FUN_142f87c50(lVar10 + 0x68,plVar9,AK::MemoryMgr::StartProfileThreadUsage,
                      "FHavokWorldListener::OnNavMeshDataModified");
        FUN_142f87cf0(lVar10 + 0x70,plVar9,FUN_142fab110,
                      "FHavokWorldListener::OnClearanceCachesFilled");
      }
      *(longlong **)(param_1 + 0x18) = plVar9;
    }
  }
  return;
}



// FUNCTION 142fa67f0 FUN_142fa67f0 body=540 status=ok
// SIG undefined FUN_142fa67f0(void)

void FUN_142fa67f0(longlong param_1,wchar_t *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  
  pwVar9 = (wchar_t *)0x0;
  if (param_2 == (wchar_t *)0x0) {
LAB_142fa6848:
    pwVar7 = pwVar9;
  }
  else {
    lVar4 = UMonkeyAnim::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    pwVar7 = param_2;
    if (!bVar1) goto LAB_142fa6848;
  }
  *(wchar_t **)(param_1 + 0x60) = pwVar7;
  pwVar7 = pwVar9;
  pwVar5 = pwVar9;
  if ((param_2 != (wchar_t *)0x0) &&
     (pwVar5 = (wchar_t *)FUN_142269f40(param_2), pwVar5 != (wchar_t *)0x0)) {
    uVar6 = FUN_142e39920();
    pwVar7 = (wchar_t *)(**(code **)(*(longlong *)pwVar5 + 0x628))(pwVar5,uVar6);
  }
  *(wchar_t **)(param_1 + 0x68) = pwVar7;
  if (((pwVar5 == (wchar_t *)0x0) ||
      (lVar4 = (**(code **)(*(longlong *)pwVar5 + 0x148))(pwVar5), lVar4 == 0)) ||
     (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  pwVar7 = *(wchar_t **)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x89) = uVar2;
  if (pwVar7 != (wchar_t *)0x0) {
    lVar4 = FUN_142fbee60();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142fa68f6;
  }
  pwVar7 = pwVar9;
LAB_142fa68f6:
  *(bool *)(param_1 + 0x8a) = pwVar7 != (wchar_t *)0x0;
  pwVar7 = pwVar9;
  if (param_2 != (wchar_t *)0x0) {
    pwVar7 = (wchar_t *)USignificanceManager::GetWorld(param_2);
  }
  pwVar8 = pwVar9;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    pwVar8 = *(wchar_t **)(*(longlong *)(param_1 + 0x68) + 0xfd8);
  }
  if ((pwVar8 == (wchar_t *)0x0) || (*(wchar_t **)(pwVar8 + 0x260) == pwVar7)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x88) = uVar2;
  if (pwVar5 != (wchar_t *)0x0) {
    if ((pwVar5[0x4a] & L'\x18') == L'\x10') {
      FUN_142fac890(param_1);
    }
    else {
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UGbxAnimStateManager_AINav::Owner_PostBeginPlay",L"::");
      while (pwVar8 = pwVar7, pwVar8 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
        pwVar9 = pwVar8;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UParticleSystemComponent_*>::
      __Internal_AddUniqueDynamic<AEmitter>(pwVar5 + 0x204,param_1,FUN_142fac890,local_res8);
    }
  }
  if (((*(longlong *)(param_1 + 0x60) != 0) && (lVar4 = *(longlong *)(param_1 + 0x68), lVar4 != 0))
     && (*(char *)(param_1 + 0x88) != '\0')) {
    uVar6 = USignificanceManager::GetWorld();
    FUN_142c87850(lVar4 + 0x2110,uVar6,lVar4);
  }
  return;
}



// FUNCTION 142fa6a10 FUN_142fa6a10 body=328 status=ok
// SIG undefined FUN_142fa6a10(void)

void FUN_142fa6a10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  if (((((*(char *)(param_1 + 0x2c) != '\0') || (*(char *)(param_1 + 0x3c) != '\0')) &&
       (param_2 != 0)) &&
      ((*(longlong *)(param_1 + 0x58) != param_2 &&
       ((lVar4 = *(longlong *)(param_2 + 0x120), lVar4 != 0 ||
        (lVar4 = FUN_1423407b0(param_2), lVar4 != 0)))))) &&
     (cVar3 = UWorld::IsGameWorld(lVar4), cVar3 != '\0')) {
    *(longlong *)(param_1 + 0x58) = param_2;
    lVar4 = FUN_142b8e570(lVar4);
    if (lVar4 != 0) {
      if ((*(byte *)(lVar4 + 0x39a) & 8) != 0) {
        FUN_142f9c8d0(param_1);
        return;
      }
      plVar1 = (longlong *)(lVar4 + 0x108);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)FUN_142f9c8d0;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar2 = *(int *)(lVar4 + 0x110);
        *(int *)(lVar4 + 0x110) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x114) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 142fa6b60 FUN_142fa6b60 body=264 status=ok
// SIG undefined FUN_142fa6b60(void)

void FUN_142fa6b60(int *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_2 + 0x100) == 0) && (*(longlong *)(param_2 + 0x108) == 0)) {
    if ((*(longlong *)(param_2 + 0x110) != 0) &&
       (lVar2 = FWeakObjectPtr::Get(param_1 + 1), lVar2 != 0)) {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      lVar4 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar3 + 0x58),0xe0);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_142ba3410(lVar4,param_2);
      }
      iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x618) + 8))((longlong *)(lVar2 + 0x618),param_3);
      if (iVar1 != -1) {
        *(int *)(lVar4 + 0x24) = iVar1;
      }
      FUN_143833280(lVar4);
      *(longlong *)(param_2 + 0x108) = lVar4;
      FUN_143848720(*(undefined8 *)(param_1 + 4),lVar4);
      *param_1 = *param_1 + 1;
    }
    return;
  }
  FWeakObjectPtr::Get(param_2 + 0x138);
  return;
}



// FUNCTION 142fa6c70 FUN_142fa6c70 body=428 status=ok
// SIG undefined FUN_142fa6c70(void)

void FUN_142fa6c70(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x8f8);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      lVar1 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar2 + 0x58),0x1f0);
      uVar3 = 0;
      if (lVar1 != 0) {
        uVar3 = FUN_14385ef00(lVar1,uVar5);
      }
      *(undefined8 *)(param_1 + 0x70) = uVar3;
      FUN_143861090(uVar3,1000);
      FUN_143860ff0(*(undefined8 *)(param_1 + 0x70),0x3d99999a);
      plVar4 = (longlong *)operator_new(8);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        *plVar4 = param_1;
      }
      *(longlong **)(param_1 + 0x78) = plVar4;
      lVar1 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(lVar1 + 0x20,plVar4,AK::MemoryMgr::StartProfileThreadUsage,
                    "FFlyNavigatorListener::OnPathStale");
      lVar1 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(lVar1 + 0x18,*(undefined8 *)(param_1 + 0x78),
                    AK::MemoryMgr::StartProfileThreadUsage,"FFlyNavigatorListener::OnGoalRemoved");
      lVar1 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(lVar1 + 0x30,*(undefined8 *)(param_1 + 0x78),&LAB_142fac080,
                    "FFlyNavigatorListener::OnReachedGoal");
      lVar1 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(lVar1 + 8,*(undefined8 *)(param_1 + 0x78),FUN_142fabab0,
                    "FFlyNavigatorListener::OnPathFailed");
      uVar5 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(uVar5,*(undefined8 *)(param_1 + 0x78),FUN_142fabd90,
                    "FFlyNavigatorListener::OnPathSucceeded");
      lVar1 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(lVar1 + 0x28,*(undefined8 *)(param_1 + 0x78),
                    AK::MemoryMgr::StartProfileThreadUsage,
                    "FFlyNavigatorListener::OnUserEdgeEntered");
      lVar1 = FHttpRequestWinInet::OnRequestProgress(*(undefined8 *)(param_1 + 0x70));
      FUN_142f87c50(lVar1 + 0x10,*(undefined8 *)(param_1 + 0x78),FUN_142fabf70,
                    "FFlyNavigatorListener::OnPathTerminated");
    }
  }
  return;
}



// FUNCTION 142fa6e20 FUN_142fa6e20 body=201 status=ok
// SIG undefined FUN_142fa6e20(void)

void FUN_142fa6e20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    lVar3 = FUN_142fbe640();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x8f8);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
         (lVar3 = FUN_142f9e4a0(*(longlong *)(param_1 + 0x10) + 0xa28), lVar3 != 0)) {
        FUN_14384cf70(lVar1,(int)param_2[2],lVar3,0,0,*(float *)(param_2 + 1) * 0.01);
      }
    }
  }
  return;
}



// FUNCTION 142fa6ef0 FUN_142fa6ef0 body=1736 status=ok
// SIG undefined FUN_142fa6ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fa6ef0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  LPVOID pvVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  lVar5 = FUN_142f9cfb0(lVar5,0);
  *(longlong *)(param_1 + 0x6b8) = lVar5;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = FUN_142b8e570(lVar5);
    if (lVar5 == 0) {
      return;
    }
    if ((*(byte *)(lVar5 + 0x39a) & 8) != 0) {
      return;
    }
    local_28 = &LAB_142ee0a08;
    plVar11 = (longlong *)(lVar5 + 0x108);
    uStack_20 = 0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    *plVar6 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_28);
    iVar1 = *(int *)(lVar5 + 0x110);
    *(int *)(lVar5 + 0x110) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x114) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
    return;
  }
  plVar11 = *(longlong **)(param_1 + 0x118);
  plVar6 = (longlong *)0x0;
  if (plVar11 == (longlong *)0x0) {
LAB_142fa7061:
    plVar11 = plVar6;
  }
  else {
    lVar5 = FUN_142c2de20();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142fa7061;
  }
  *(longlong **)(param_1 + 0x6d8) = plVar11;
  plVar12 = plVar6;
  plVar9 = plVar6;
  if ((plVar11 != (longlong *)0x0) &&
     (plVar9 = (longlong *)(**(code **)(*plVar11 + 0x678))(plVar11), plVar9 != (longlong *)0x0)) {
    plVar12 = (longlong *)plVar9[0x9a];
  }
  *(longlong **)(param_1 + 0x6d0) = plVar12;
  plVar11 = plVar6;
  if (plVar9 != (longlong *)0x0) {
    uVar10 = FUN_142fc0410();
    plVar11 = (longlong *)(**(code **)(*plVar9 + 0x628))(plVar9,uVar10);
  }
  *(longlong **)(param_1 + 0x6e0) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    lVar5 = plVar11[0x4e3];
    *(longlong *)(param_1 + 0xa78) = plVar11[0x4e2];
    *(longlong *)(param_1 + 0xa80) = lVar5;
    lVar5 = plVar11[0x4e5];
    *(longlong *)(param_1 + 0xa88) = plVar11[0x4e4];
    *(longlong *)(param_1 + 0xa90) = lVar5;
    lVar5 = plVar11[0x4e7];
    *(longlong *)(param_1 + 0xa98) = plVar11[0x4e6];
    *(longlong *)(param_1 + 0xaa0) = lVar5;
    *(longlong *)(param_1 + 0xaa8) = plVar11[0x4e8];
    uVar10 = *(undefined8 *)((longlong)plVar11 + 0x2754);
    *(undefined8 *)(param_1 + 0xab0) = *(undefined8 *)((longlong)plVar11 + 0x274c);
    *(undefined8 *)(param_1 + 0xab8) = uVar10;
    uVar10 = *(undefined8 *)((longlong)plVar11 + 0x2764);
    *(undefined8 *)(param_1 + 0xac0) = *(undefined8 *)((longlong)plVar11 + 0x275c);
    *(undefined8 *)(param_1 + 0xac8) = uVar10;
    lVar5 = plVar11[0x4ee];
    uVar2 = *(undefined4 *)((longlong)plVar11 + 0x2774);
    lVar7 = plVar11[0x4ef];
    *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)((longlong)plVar11 + 0x276c);
    *(int *)(param_1 + 0xad4) = (int)lVar5;
    *(undefined4 *)(param_1 + 0xad8) = uVar2;
    *(int *)(param_1 + 0xadc) = (int)lVar7;
    *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)((longlong)plVar11 + 0x277c);
    *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)((longlong)plVar11 + 0x2784);
  }
  *(longlong *)(param_1 + 0x898) = param_1;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  uVar10 = FUN_142f9cfb0(lVar5,0);
  *(undefined8 *)(param_1 + 0x890) = uVar10;
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x898) + 0x118);
  if (plVar11 != (longlong *)0x0) {
    lVar5 = FUN_142c2de20();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142fa71c1;
  }
  plVar11 = plVar6;
LAB_142fa71c1:
  *(longlong **)(param_1 + 0x8a8) = plVar11;
  plVar12 = plVar6;
  if ((plVar11 != (longlong *)0x0) &&
     (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x688))(plVar11), plVar11 != (longlong *)0x0)) {
    uVar10 = FUN_142e27720();
    plVar12 = (longlong *)(**(code **)(*plVar11 + 0x628))(plVar11,uVar10);
  }
  *(longlong **)(param_1 + 0x8a0) = plVar12;
  *(longlong *)(param_1 + 0x9f0) = param_1;
  *(undefined1 *)(param_1 + 0xa08) = 0;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  uVar10 = FUN_142f9cfb0(lVar5,0);
  *(undefined8 *)(param_1 + 0x9e8) = uVar10;
  FUN_142fa5ad0(param_1 + 0x930,param_1);
  *(longlong *)(param_1 + 0x658) = param_1;
  *(longlong **)(param_1 + 0x660) = *(longlong **)(param_1 + 0x118);
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))();
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x660) = *(undefined8 *)(lVar5 + 0x488);
  }
  plVar11 = plVar6;
  if ((*(longlong *)(param_1 + 0x658) != 0) &&
     (plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x658) + 0x120), plVar11 == (longlong *)0x0))
  {
    plVar11 = (longlong *)FUN_1423407b0();
  }
  *(longlong **)(param_1 + 0x650) = plVar11;
  plVar11 = plVar6;
  if ((*(longlong **)(param_1 + 0x660) != (longlong *)0x0) &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x660) + 0x678))(), lVar5 != 0)) {
    lVar7 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar11 = *(longlong **)(lVar5 + 0x900);
    }
  }
  *(longlong **)(param_1 + 0x668) = plVar11;
  *(longlong *)(param_1 + 0x560) = param_1;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  *(longlong *)(param_1 + 0x550) = lVar5;
  uVar10 = FUN_142f9cfb0(lVar5,0);
  *(undefined8 *)(param_1 + 0x558) = uVar10;
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x560) + 0x118);
  plVar12 = plVar6;
  if ((plVar11 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar11 + 0x678))(plVar11), lVar5 != 0)
     ) {
    lVar7 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar12 = *(longlong **)(lVar5 + 0x900);
    }
  }
  *(longlong **)(param_1 + 0x568) = plVar12;
  plVar12 = plVar6;
  if ((plVar11 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar11 + 0x668))(plVar11), lVar5 != 0)
     ) {
    plVar12 = *(longlong **)(lVar5 + 0x488);
  }
  plVar11 = plVar6;
  if (plVar12 != (longlong *)0x0) {
    uVar10 = FUN_142fbec90();
    plVar11 = (longlong *)(**(code **)(*plVar12 + 0x628))(plVar12,uVar10);
  }
  *(longlong **)(param_1 + 0x570) = plVar11;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  FWeakObjectPtr::operator=(param_1 + 0x374,lVar5);
  *(undefined4 *)(param_1 + 0x2fc) = DAT_146690efc;
  *(undefined4 *)(param_1 + 0x270) = 0;
  if (*(longlong *)(param_1 + 0x518) == 0) {
    FWeakObjectPtr::operator=(param_1 + 0x450,param_1);
    plVar11 = plVar6;
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x8f8);
    }
    FWeakObjectPtr::operator=(param_1 + 0x448);
    if (plVar11 != (longlong *)0x0) {
      uStack_20 = 0x3f800000;
      local_28 = (undefined1 *)0x3f8000003f800000;
      pvVar13 = TlsGetValue(DAT_146b7bf70);
      if (pvVar13 == (LPVOID)0x0) {
        pvVar13 = DAT_146b7bf68;
      }
      lVar5 = (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar13 + 0x58),0x110);
      plVar12 = plVar6;
      if (lVar5 != 0) {
        plVar12 = (longlong *)FUN_1438eb1c0(lVar5,&local_28);
      }
      if (*(longlong *)(param_1 + 0x518) != 0) {
        FUN_14370c150();
      }
      *(longlong **)(param_1 + 0x518) = plVar12;
      pvVar13 = TlsGetValue(DAT_146b7bf70);
      if (pvVar13 == (LPVOID)0x0) {
        pvVar13 = DAT_146b7bf68;
      }
      lVar5 = (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar13 + 0x58),0x38);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_1438eb6d0(lVar5,plVar11);
      }
      if (*(longlong *)(param_1 + 0x520) != 0) {
        FUN_14370c150();
      }
      *(longlong **)(param_1 + 0x520) = plVar6;
    }
  }
  cVar4 = FUN_142fa8b90(param_1);
  if (cVar4 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x6b8);
    plVar12 = (longlong *)(lVar5 + 0x768);
    plVar6 = (longlong *)*plVar12;
    iVar1 = *(int *)(lVar5 + 0x770);
    plVar11 = plVar6 + iVar1;
    for (; plVar6 != plVar11; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_1) goto LAB_142fa7588;
    }
    *(int *)(lVar5 + 0x770) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x774) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12);
    }
    *(longlong *)(*plVar12 + (longlong)iVar1 * 8) = param_1;
LAB_142fa7588:
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0xc70))(*(longlong **)(param_1 + 0x6e0),param_1)
    ;
  }
  return;
}



// FUNCTION 142fa75c0 FUN_142fa75c0 body=402 status=ok
// SIG undefined FUN_142fa75c0(void)

void FUN_142fa75c0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  undefined4 uStack_c;
  
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if ((cVar3 != '\0') || ((*(uint *)(param_1 + 1) >> 6 & 1) != 0)) {
    return;
  }
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar4 = FUN_142f9cfb0(lVar4,0);
  param_1[0xe1] = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0x920))(param_1);
    (**(code **)(*param_1 + 0x8e8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142fa7636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8f8))(param_1);
    return;
  }
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar4 = FUN_142b8e570(lVar4);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x39a) & 8) == 0)) {
    plVar1 = (longlong *)(lVar4 + 0x108);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = 0x42fadda0;
      *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
      *(undefined4 *)(plVar5 + 3) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
      iVar2 = *(int *)(lVar4 + 0x110);
      *(int *)(lVar4 + 0x110) = iVar2 + 1;
      if (*(int *)(lVar4 + 0x114) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142fa7745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8f8))(param_1);
  return;
}



// FUNCTION 142fa7760 FUN_142fa7760 body=168 status=ok
// SIG undefined FUN_142fa7760(void)

void FUN_142fa7760(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_142fa5c30(param_1 + 0xe4,param_1);
  FUN_142fa5c30(param_1 + 0xe7,param_1);
  FUN_142fb32d0(param_1);
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = UWorld::IsGameWorld(uVar3);
    if (cVar1 == '\0') {
      FUN_142fa5d50(param_1 + 0xd8);
      FUN_142fa5ee0(param_1 + 0xcc,param_1);
      param_1[0xef] = (longlong)param_1;
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar2 != 0) {
        cVar1 = UWorld::IsGameWorld(lVar2);
        if (cVar1 != '\0') {
          param_1[0xef] = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 142fa7810 FUN_142fa7810 body=556 status=ok
// SIG undefined FUN_142fa7810(void)

void FUN_142fa7810(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 local_18 [16];
  
  if ((*(longlong *)(param_1 + 0x60) == 0) &&
     (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)) {
    uVar6 = *(undefined8 *)(lVar1 + 0x8f8);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar2 + 0x58),0x260);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_14385b580(lVar3,uVar6);
    }
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    FUN_14385e970(uVar4,1000);
    if (*(longlong *)(lVar1 + 0xb50) == 0) {
      fVar7 = 100.0;
    }
    else {
      fVar7 = *(float *)(*(longlong *)(lVar1 + 0xb50) + 0xf4);
    }
    FUN_14385ec00(*(undefined8 *)(param_1 + 0x60),fVar7 * 0.01);
    FUN_14385e8d0(*(undefined8 *)(param_1 + 0x60),0x3d99999a);
    plVar5 = (longlong *)operator_new(8);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      *plVar5 = param_1;
    }
    *(longlong **)(param_1 + 0x68) = plVar5;
    lVar1 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(lVar1 + 0x20,plVar5,&LAB_142fabd80,"FWalkNavigatorListener::OnPathStale");
    lVar1 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(lVar1 + 0x18,*(undefined8 *)(param_1 + 0x68),
                  AK::MemoryMgr::StartProfileThreadUsage,"FWalkNavigatorListener::OnGoalRemoved");
    lVar1 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(lVar1 + 0x30,*(undefined8 *)(param_1 + 0x68),&LAB_142fac080,
                  "FWalkNavigatorListener::OnReachedGoal");
    lVar1 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(lVar1 + 8,*(undefined8 *)(param_1 + 0x68),FUN_142fabae0,
                  "FWalkNavigatorListener::OnPathFailed");
    uVar6 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(uVar6,*(undefined8 *)(param_1 + 0x68),FUN_142fabdc0,
                  "FWalkNavigatorListener::OnPathSucceeded");
    lVar1 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(lVar1 + 0x28,*(undefined8 *)(param_1 + 0x68),FUN_142fac6b0,
                  "FWalkNavigatorListener::OnUserEdgeEntered");
    lVar1 = FUN_14203c490(*(undefined8 *)(param_1 + 0x60));
    FUN_142f87c50(lVar1 + 0x10,*(undefined8 *)(param_1 + 0x68),&LAB_142fac050,
                  "FWalkNavigatorListener::OnPathTerminated");
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1438eb660(*(longlong *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    }
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x4a0))(plVar5,local_18);
      FUN_142fb4630(param_1,uVar6);
    }
  }
  return;
}



// FUNCTION 142fa7a40 FUN_142fa7a40 body=39 status=ok
// SIG undefined FUN_142fa7a40(void)

void FUN_142fa7a40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145a06518;
    return;
  }
  return;
}



// FUNCTION 142fa7a70 FUN_142fa7a70 body=142 status=ok
// SIG undefined FUN_142fa7a70(void)

void FUN_142fa7a70(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x1d) != '\0') {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
    }
    iVar1 = DAT_146b440a0;
    lVar3 = (longlong)DAT_146b440a0;
    DAT_146b440a0 = DAT_146b440a0 + 1;
    if (DAT_146b440a4 < DAT_146b440a0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b44098,iVar1);
    }
    *(longlong *)(DAT_146b44098 + lVar3 * 8) = param_1;
    FUN_142fb0430(&DAT_146b44070,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  }
  return;
}



// FUNCTION 142fa7b00 FUN_142fa7b00 body=1243 status=ok
// SIG undefined FUN_142fa7b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fa7b00(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 auStack_198 [32];
  uint *local_178;
  int local_170;
  uint local_16c;
  undefined8 local_168;
  uint *puStack_160;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  int local_13c;
  uint local_138;
  int local_134;
  uint local_130 [2];
  longlong local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  uint *puStack_110;
  uint uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 local_f0;
  uint local_e8 [4];
  uint *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar9 = 0;
  if (param_1 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x8f8);
  }
  if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x130), lVar9 != 0)) {
    fVar1 = *(float *)(param_2 + 1);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0xc);
    uVar4 = *param_2;
    fVar2 = *(float *)((longlong)param_2 + 0x14);
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = (uint *)0x0;
    local_d0 = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    local_178 = (uint *)0x0;
    local_170 = 0;
    local_16c = 0x80000000;
    local_128 = param_1;
    FUN_1438443a0(&local_120,lVar9);
    local_a8._0_4_ = 0;
    local_98 = (uint *)0x0;
    uStack_90 = 0;
    local_a8._4_4_ = 0xffffffff;
    uStack_a0 = 0;
    local_88 = 0;
    local_78 = (float)uVar4 * 0.01;
    fStack_74 = (float)((ulonglong)uVar4 >> 0x20) * 0.01;
    fStack_70 = fVar1 * 0.01;
    uStack_6c = 0;
    local_68 = (float)uVar3 * 0.01;
    fStack_64 = (float)((ulonglong)uVar3 >> 0x20) * 0.01;
    fStack_60 = fVar2 * 0.01;
    uStack_5c = 0;
    FUN_143845290(&local_120,&local_a8,&local_178);
    FUN_1438443d0(&local_120);
    puVar15 = local_178 + local_170;
    if (local_178 != puVar15) {
      puVar13 = local_178;
      do {
        uVar5 = *puVar13;
        local_138 = uVar5 >> 0x16;
        lVar7 = *(longlong *)((ulonglong)local_138 * 0x100 + *(longlong *)(lVar9 + 0x38));
        if (lVar7 != 0) {
          if ((int)local_f0 != local_c4) {
            puVar11 = local_c0;
            if (local_b8 != (undefined1 *)0x0) {
              puVar11 = local_b8;
            }
            iVar6 = *(int *)(puVar11 + ((longlong)(local_b0 + -1) & (ulonglong)local_138) * 4);
            while (iVar6 != -1) {
              lVar12 = (longlong)iVar6 * 0x20;
              if (*(uint *)(lVar12 + local_f8) == local_138) {
                lVar12 = lVar12 + local_f8;
                if (iVar6 != -1) goto LAB_142fa7cf4;
                break;
              }
              iVar6 = *(int *)(lVar12 + 0x18 + local_f8);
            }
          }
          lVar12 = 0;
LAB_142fa7cf4:
          lVar14 = lVar12 + 8;
          if (lVar12 == 0) {
            lVar14 = 0;
          }
          if (lVar14 == 0) {
            local_168 = &local_138;
            local_148 = 0;
            puStack_160 = (uint *)&local_148;
            local_140 = 0;
            local_13c = -0x80000000;
            FUN_142f86770(&local_f8,&local_134,&local_168,0);
            lVar14 = local_f8 + 8 + (longlong)local_134 * 0x20;
            local_140 = 0;
            if (-1 < local_13c) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_148,8);
            }
            local_148 = 0;
            local_13c = 0x80000000;
            FUN_14383a8d0(lVar7,lVar14);
          }
          local_130[0] = uVar5 & 0x3fffff;
          FUN_14383aa60(lVar7,lVar14,local_130);
        }
        puVar13 = puVar13 + 1;
        param_1 = local_128;
      } while (puVar13 != puVar15);
    }
    iVar6 = (int)local_d0;
    puStack_160 = local_e8;
    local_168._0_4_ = 0;
    local_168._4_4_ = 1;
    iStack_154 = 0;
    iStack_150 = 0;
    if ((int)local_d0 != 0) {
      puVar15 = local_e8;
      if (local_d8 != (uint *)0x0) {
        puVar15 = local_d8;
      }
      uVar5 = *puVar15;
      while (uVar5 == 0) {
        iStack_150 = iStack_150 + 0x20;
        if ((int)((int)local_d0 + -1 + ((int)local_d0 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_168)
        {
          iStack_154 = (int)local_d0;
          local_168._0_4_ = (int)local_168 + 1;
          goto LAB_142fa7e9a;
        }
        uVar5 = puVar15[(longlong)(int)local_168 + 1];
        local_168._0_4_ = (int)local_168 + 1;
      }
      local_168._4_4_ = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (local_168._4_4_ != 0) {
        for (; local_168._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (local_168._4_4_ == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_154 = (iStack_150 - iVar8) + 0x1f;
      if ((int)local_d0 < iStack_154) {
        iStack_154 = (int)local_d0;
      }
    }
LAB_142fa7e9a:
    uStack_90._0_4_ = 0xffffffff;
    uStack_90._4_4_ = iStack_154;
    uStack_100 = CONCAT44(uStack_14c,iStack_150);
    local_120 = &local_f8;
    local_158 = -1 << ((byte)local_d0 & 0x1f);
    iStack_118 = (int)local_168;
    uStack_114 = local_168._4_4_;
    iStack_154 = (int)local_d0;
    uStack_a0._0_4_ = (int)local_168;
    uStack_a0._4_4_ = local_168._4_4_;
    puStack_110 = puStack_160;
    local_98 = puStack_160;
    local_88 = uStack_100;
    uStack_108 = (uint)uStack_90;
    iStack_104 = uStack_90._4_4_;
    local_a8 = local_120;
    while (((uStack_90._4_4_ != iVar6 || (local_98 != local_e8)) || (local_a8 != &local_f8))) {
      piVar10 = (int *)((longlong)uStack_90._4_4_ * 0x20 + *local_a8);
      FUN_14383a990(*(undefined8 *)((longlong)*piVar10 * 0x100 + *(longlong *)(lVar9 + 0x38)),
                    piVar10 + 2);
      uStack_90._0_4_ = (uint)uStack_90 & ~uStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    }
    if ((0 < local_170) && (*(longlong *)(param_1 + 0x8f8) != 0)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x8f8) + 0x511) = 1;
    }
    local_170 = 0;
    if (-1 < (int)local_16c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_178,4,local_16c & 0x3fffffff);
    }
    local_178 = (uint *)0x0;
    local_16c = 0x80000000;
    local_b0 = 0;
    if (local_b8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    FUN_142f8b500(&local_f8);
  }
  return;
}



// FUNCTION 142fa7fe0 FUN_142fa7fe0 body=24 status=ok
// SIG undefined FUN_142fa7fe0(void)

ulonglong FUN_142fa7fe0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) ||
     (uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1), *(char *)(lVar1 + 0xb68) == '\0')) {
    uVar2 = (ulonglong)*(byte *)(param_1 + 4);
  }
  return uVar2;
}



// FUNCTION 142fa8000 FUN_142fa8000 body=516 status=ok
// SIG undefined FUN_142fa8000(void)

undefined8 FUN_142fa8000(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fStack_34;
  undefined8 local_28;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1[3] == 0) {
    return 0;
  }
  if (param_1[2] == 0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[4] == 0) {
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0x79) == '\0') {
    return 0;
  }
  cVar3 = FUN_1407c3030(param_1[4] + 0x8b0);
  if (cVar3 != '\0') {
    return 0;
  }
  lVar2 = param_1[2];
  if (*(char *)(lVar2 + 0x781) == '\x01') {
    local_10 = *(undefined8 *)(lVar2 + 0x6b8);
    local_28 = *(undefined8 *)(lVar2 + 0x784);
    local_1c = 0.1;
    local_20 = *(float *)(lVar2 + 0x78c) - *(float *)(lVar2 + 0x6ec);
    local_18 = *(undefined8 *)(lVar2 + 0x758);
    cVar3 = FUN_142fa8600(&local_28,0);
    if ((cVar3 == '\0') ||
       (cVar3 = FUN_142f9a0f0(*(undefined8 *)(lVar2 + 0x6b8),lVar2 + 0x6e8,
                              *(undefined8 *)(lVar2 + 0x758)), cVar3 == '\0')) {
      piVar4 = (int *)param_1[0x15];
      piVar1 = piVar4 + (longlong)(int)param_1[0x16] * 2;
      if (piVar4 == piVar1) {
        return 1;
      }
      while ((*piVar4 != *(int *)(param_1[2] + 0x758) || (piVar4[1] != *(int *)(param_1[2] + 0x75c))
             )) {
        piVar4 = piVar4 + 2;
        if (piVar4 == piVar1) {
          return 1;
        }
      }
    }
  }
  lVar2 = param_1[2];
  if (*(char *)(lVar2 + 0x781) != '\x02') {
    return 0;
  }
  if (((-1 < *(int *)(lVar2 + 0x760)) && (-1 < *(int *)(lVar2 + 0x764))) &&
     (cVar3 = FUN_142f9e2b0(*(undefined8 *)(lVar2 + 0x6b8),*(undefined8 *)(lVar2 + 0x760),&local_28)
     , cVar3 != '\0')) {
    fVar6 = (float)*(undefined8 *)(lVar2 + 0x784);
    fVar5 = *(float *)(lVar2 + 0x78c) - *(float *)(lVar2 + 0x6ec);
    if (((float)local_28 <= fVar6) && (fVar6 <= local_1c)) {
      fStack_34 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x784) >> 0x20);
      if (((local_28._4_4_ <= fStack_34) && ((fStack_34 <= (float)local_18 && (local_20 <= fVar5))))
         && (fVar5 <= local_18._4_4_)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142fa8210 FUN_142fa8210 body=20 status=ok
// SIG undefined FUN_142fa8210(void)

bool FUN_142fa8210(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  return 0 < iVar1;
}



// FUNCTION 142fa8230 FUN_142fa8230 body=21 status=ok
// SIG undefined FUN_142fa8230(void)

undefined1 FUN_142fa8230(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x490) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x490) + 0x6f8);
  }
  return 0;
}



// FUNCTION 142fa8250 IsClientFriendsListReady body=8 status=ok
// SIG undefined IsClientFriendsListReady(void)

undefined1 AIcarusPlayerController::IsClientFriendsListReady(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6f8);
}



// FUNCTION 142fa8260 FUN_142fa8260 body=272 status=ok
// SIG undefined FUN_142fa8260(void)

bool FUN_142fa8260(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_res18;
  
  if (param_1 == 0) {
    return false;
  }
  iVar5 = (int)param_3;
  if (-1 < iVar5) {
    iVar4 = (int)((ulonglong)param_3 >> 0x20);
    if ((((-1 < param_3) && (*(longlong *)(param_1 + 0x8f8) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x130), lVar1 != 0)) &&
       (iVar5 < *(int *)(lVar1 + 0x40))) {
      lVar1 = *(longlong *)((longlong)iVar5 * 0x100 + *(longlong *)(lVar1 + 0x38));
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x18);
        if (iVar4 < *(int *)(lVar2 + 0xd8) + *(int *)(lVar2 + 0x20)) {
          if (*(int *)(lVar2 + 0x108) == 0) {
            bVar3 = 0;
          }
          else {
            bVar3 = *(byte *)((longlong)iVar4 + *(longlong *)(lVar2 + 0x100));
          }
          if ((bVar3 & 1) == 0) {
            local_res18 = param_3;
            plVar6 = (longlong *)FUN_142fa4c50(param_1 + 0xa28,param_2 + 0x50);
            if (plVar6 == (longlong *)0x0) {
              return true;
            }
            local_res18 = CONCAT44(local_res18._4_4_,local_res18._4_4_);
            iVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,lVar1,&local_res18,0,0);
            return iVar5 != 0;
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 142fa8370 FUN_142fa8370 body=252 status=ok
// SIG undefined FUN_142fa8370(void)

bool FUN_142fa8370(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 local_res8 [4];
  undefined8 local_res18;
  
  if ((param_1 != 0) && (iVar5 = (int)param_3, -1 < iVar5)) {
    iVar4 = (int)((ulonglong)param_3 >> 0x20);
    if ((-1 < param_3) &&
       (((*(longlong *)(param_1 + 0x8f8) != 0 &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x130), lVar1 != 0)) &&
        (iVar5 < *(int *)(lVar1 + 0x40))))) {
      lVar1 = *(longlong *)((longlong)iVar5 * 0x100 + *(longlong *)(lVar1 + 0x38));
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x18);
        if (iVar4 < *(int *)(lVar2 + 0xd8) + *(int *)(lVar2 + 0x20)) {
          if (*(int *)(lVar2 + 0x108) == 0) {
            bVar3 = 0;
          }
          else {
            bVar3 = *(byte *)((longlong)iVar4 + *(longlong *)(lVar2 + 0x100));
          }
          if ((bVar3 & 1) == 0) {
            local_res18 = param_3;
            plVar6 = (longlong *)FUN_142fa4c50(param_1 + 0xa28,param_2);
            if (plVar6 == (longlong *)0x0) {
              return true;
            }
            local_res8[0] = local_res18._4_4_;
            iVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,lVar1,local_res8,0,0);
            return iVar5 != 0;
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 142fa8470 FUN_142fa8470 body=8 status=ok
// SIG undefined FUN_142fa8470(void)

bool FUN_142fa8470(longlong param_1)

{
  return *(char *)(param_1 + 0x78) == '\x02';
}



// FUNCTION 142fa8480 FUN_142fa8480 body=11 status=ok
// SIG undefined FUN_142fa8480(void)

bool FUN_142fa8480(longlong param_1)

{
  return *(char *)(param_1 + 0x781) == '\x02';
}



// FUNCTION 142fa84f0 FUN_142fa84f0 body=175 status=ok
// SIG undefined FUN_142fa84f0(void)

undefined8 FUN_142fa84f0(longlong param_1)

{
  char cVar1;
  undefined8 local_28;
  float local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0x6b8);
  local_28 = *(undefined8 *)(param_1 + 0x784);
  local_1c = 0x3dcccccd;
  local_20 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
  local_18 = *(undefined8 *)(param_1 + 0x758);
  cVar1 = FUN_142fa8600(&local_28,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_142f9a0f0(*(undefined8 *)(param_1 + 0x6b8),param_1 + 0x6e8,
                          *(undefined8 *)(param_1 + 0x758));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fa85a0 FUN_142fa85a0 body=21 status=ok
// SIG undefined FUN_142fa85a0(void)

undefined1 FUN_142fa85a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x490) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x490) + 0x179);
  }
  return 0;
}



// FUNCTION 142fa85c0 FUN_142fa85c0 body=55 status=ok
// SIG undefined FUN_142fa85c0(void)

undefined1 FUN_142fa85c0(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x270) == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x6e0) != 0) &&
     (cVar1 = FUN_1407c3030(*(longlong *)(param_1 + 0x6e0) + 0x8b0), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142fa8600 FUN_142fa8600 body=797 status=ok
// SIG undefined FUN_142fa8600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142fa8600(float *param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  float *local_98;
  float local_88 [2];
  undefined8 local_80;
  float local_78;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar5 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(uVar5 + 0x38) < DAT_146b44250) &&
     (uVar5 = _Init_thread_header(&DAT_146b44250), DAT_146b44250 == -1)) {
    _DAT_146b44240 = 0;
    uRam0000000146b44244 = 0;
    uRam0000000146b44248 = 0x3f800000;
    uRam0000000146b4424c = 0;
    uVar5 = _Init_thread_footer(&DAT_146b44250);
  }
  if (((*(longlong *)(param_1 + 6) == 0) ||
      ((((float)DAT_14676e1b0 == *param_1 && (DAT_14676e1b0._4_4_ == param_1[1])) &&
       (DAT_14676e1b8 == param_1[2])))) ||
     ((uVar5 = FUN_142fa2fb0(*(longlong *)(param_1 + 6),*(undefined8 *)(param_1 + 4)), uVar5 == 0 ||
      (local_88[0] = param_1[5],
      *(int *)(*(longlong *)(uVar5 + 0x18) + 0xd8) + *(int *)(*(longlong *)(uVar5 + 0x18) + 0x20) <=
      (int)local_88[0])))) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_98 = &local_48;
    local_58 = (float)*(undefined8 *)param_1 * 0.01;
    fStack_54 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0.01;
    fStack_50 = param_1[2] * 0.01;
    uStack_4c = 0;
    fVar8 = param_1[3] * 0.01;
    if (fVar8 <= 0.0001) {
      fVar8 = 0.0001;
    }
    fVar7 = (float)FUN_143853770(uVar5,local_88,&DAT_146b44240,&local_58);
    bVar2 = fVar7 < fVar8 * fVar8;
    if (param_2 != (undefined8 *)0x0) {
      if (bVar2) {
        local_68 = *(undefined8 *)param_1;
        fStack_60 = param_1[2];
      }
      else {
        fStack_60 = fStack_40 * 100.0;
        local_68 = CONCAT44(fStack_44 * 100.0,local_48 * 100.0);
      }
      local_78 = fStack_60;
      lVar1 = *(longlong *)(param_1 + 4);
      local_80 = local_68;
      iVar3 = (int)lVar1;
      fVar8 = (float)DAT_14676e1b0;
      fVar7 = DAT_14676e1b0._4_4_;
      fVar4 = DAT_14676e1b8;
      if ((-1 < iVar3) && (-1 < lVar1)) {
        if (*(longlong *)(param_1 + 6) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 6) + 0x8f8);
        }
        if (((((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x130), lVar6 != 0)) && (-1 < iVar3))
            && ((iVar3 < *(int *)(lVar6 + 0x40) &&
                (lVar6 = *(longlong *)((longlong)iVar3 * 0x100 + *(longlong *)(lVar6 + 0x38)),
                lVar6 != 0)))) &&
           ((int)((ulonglong)lVar1 >> 0x20) <
            *(int *)(*(longlong *)(lVar6 + 0x18) + 0xd8) +
            *(int *)(*(longlong *)(lVar6 + 0x18) + 0x20))) {
          local_88[0] = param_1[5];
          FUN_1438525c0(lVar6,local_88,&local_68);
          fVar8 = (float)local_80;
          fVar7 = local_80._4_4_;
          fVar4 = local_78 -
                  (((float)local_80 * (float)local_68 + local_80._4_4_ * local_68._4_4_ +
                   local_78 * fStack_60) - fStack_5c * -100.0) / ABS(fStack_60);
        }
      }
      *param_2 = CONCAT44(fVar7,fVar8);
      *(float *)(param_2 + 1) = fVar4;
    }
    uVar5 = (ulonglong)bVar2;
  }
  return uVar5;
}



// FUNCTION 142fa8920 FUN_142fa8920 body=138 status=ok
// SIG undefined FUN_142fa8920(void)

bool FUN_142fa8920(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_38 = (**(code **)(*param_1 + 0x148))();
  local_30 = &local_38;
  local_28 = FUN_14073d760(&local_38,DAT_146b440d8);
  local_20 = &local_38;
  local_18 = 0;
  lVar1 = FUN_14073d760(local_30,local_28);
  lVar2 = FUN_14073d760(local_20,local_18);
  return lVar1 != lVar2;
}



// FUNCTION 142fa89b0 FUN_142fa89b0 body=139 status=ok
// SIG undefined FUN_142fa89b0(void)

undefined1 FUN_142fa89b0(float *param_1)

{
  if ((*param_1 < 3.4028235e+38) && (0.0001 < *param_1)) {
    if ((-(float)DAT_14676e1b0 < param_1[1]) && (param_1[1] < (float)DAT_14676e1b0)) {
      if ((-DAT_14676e1b0._4_4_ < param_1[2]) && (param_1[2] < DAT_14676e1b0._4_4_)) {
        if ((-DAT_14676e1b8 < param_1[3]) &&
           (((param_1[3] < DAT_14676e1b8 && (param_1[5] != 3.4028235e+38)) &&
            (param_1[6] != 3.4028235e+38)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142fa8a40 FUN_142fa8a40 body=80 status=ok
// SIG undefined FUN_142fa8a40(void)

undefined1 FUN_142fa8a40(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x78);
    return uVar1;
  }
  if (*(char *)(param_1 + 0x68) != '\x02') {
    if ((((float)DAT_14676e1b0 == *(float *)(param_1 + 0x6c)) &&
        (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 0x70))) &&
       (DAT_14676e1b8 == *(float *)(param_1 + 0x74))) {
      return 0;
    }
    return 1;
  }
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x80);
  return uVar1;
}



// FUNCTION 142fa8a90 FUN_142fa8a90 body=132 status=ok
// SIG undefined FUN_142fa8a90(void)

undefined1 FUN_142fa8a90(float *param_1)

{
  char cVar1;
  
  cVar1 = UAIBlueprintHelperLibrary::IsValidAILocation(param_1 + 7);
  if (cVar1 != '\0') {
    if ((-(float)DAT_14676e1b0 < *param_1) && (*param_1 < (float)DAT_14676e1b0)) {
      if ((-DAT_14676e1b0._4_4_ < param_1[1]) && (param_1[1] < DAT_14676e1b0._4_4_)) {
        if ((-DAT_14676e1b8 < param_1[2]) && (param_1[2] < DAT_14676e1b8)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142fa8b20 FUN_142fa8b20 body=79 status=ok
// SIG undefined FUN_142fa8b20(void)

undefined1 FUN_142fa8b20(char *param_1)

{
  undefined1 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x10);
    return uVar1;
  }
  if (*param_1 != '\x02') {
    if ((((float)DAT_14676e1b0 == *(float *)(param_1 + 4)) &&
        (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 8))) &&
       (DAT_14676e1b8 == *(float *)(param_1 + 0xc))) {
      return 0;
    }
    return 1;
  }
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  return uVar1;
}



// FUNCTION 142fa8b70 FUN_142fa8b70 body=19 status=ok
// SIG undefined FUN_142fa8b70(void)

undefined1 FUN_142fa8b70(longlong *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142fa8b90 FUN_142fa8b90 body=98 status=ok
// SIG undefined FUN_142fa8b90(void)

undefined1 FUN_142fa8b90(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x518) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x458) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x490);
  }
  else {
    if (*(char *)(param_1 + 0x458) != '\x02') goto LAB_142fa8bc4;
    lVar1 = *(longlong *)(param_1 + 0x4a0);
  }
  if (lVar1 == 0) {
    return 0;
  }
LAB_142fa8bc4:
  if ((((*(longlong *)(param_1 + 0x6d0) != 0) && (*(longlong *)(param_1 + 0x6d8) != 0)) &&
      (*(longlong *)(param_1 + 0x6e0) != 0)) && (*(longlong *)(param_1 + 0x6b8) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142fa8c00 FUN_142fa8c00 body=11 status=ok
// SIG undefined FUN_142fa8c00(void)

bool FUN_142fa8c00(longlong param_1)

{
  return *(char *)(param_1 + 0x781) == '\x01';
}



// FUNCTION 142fa8c10 FUN_142fa8c10 body=1061 status=ok
// SIG undefined FUN_142fa8c10(void)

void FUN_142fa8c10(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  longlong *local_48;
  int local_40;
  
  if ((((param_1[0xe1] != 0) && (cVar5 = (**(code **)(*param_1 + 0x8f8))(), cVar5 == '\0')) &&
      (cVar5 = (**(code **)(*param_1 + 0x900))(param_1), cVar5 != '\0')) &&
     (((param_1[0xf4] != 0 && (*(longlong *)(param_1[0xf4] + 0x30) != 0)) &&
      (lVar2 = *(longlong *)(param_1[0xe1] + 0x8f8), lVar2 != 0)))) {
    cVar5 = FUN_142f8ee40(param_1);
    plVar10 = (longlong *)0x0;
    iVar15 = 0;
    local_50 = 0;
    local_40 = 8;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    local_58 = *(longlong **)((longlong)pvVar7 + 0x18);
    if ((*(int *)((longlong)pvVar7 + 0x10) < 0x80) ||
       (*(longlong **)((longlong)pvVar7 + 0x20) < local_58 + 0x10)) {
      local_58 = (longlong *)FUN_1437138c0(pvVar7,0x80);
    }
    else {
      *(longlong **)((longlong)pvVar7 + 0x18) = local_58 + 0x10;
    }
    local_4c = 0x80000008;
    local_48 = local_58;
    if (cVar5 != '\0') {
      pauVar12 = (undefined1 (*) [16])(param_1[0xe1] + 0x6e0);
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
      if ((((*(int *)((longlong)param_1 + 0x6f4) == 0 && (int)param_1[0xdf] == 0) &&
           *(int *)((longlong)param_1 + 0x6fc) == 0) && (int)param_1[0xe0] == 0) ||
         (auVar1 = *pauVar12,
         ((auVar1._4_4_ != (int)param_1[0xdf] || auVar1._12_4_ != (int)param_1[0xe0]) ||
         *(int *)((longlong)param_1 + 0x6f4) != auVar1._0_4_) ||
         *(int *)((longlong)param_1 + 0x6fc) != auVar1._8_4_)) {
        FUN_142fb0850(pauVar12,(int)param_1[0xde]);
        plVar16 = plVar10;
      }
      else {
        FUN_142fa4ba0(pauVar12,(int)param_1[0xde],&local_68);
        plVar16 = local_68;
        iVar15 = (int)plStack_60;
      }
      for (plVar13 = plVar16; plVar13 != plVar16 + iVar15; plVar13 = plVar13 + 1) {
        lVar9 = *plVar13;
        if (lVar9 != 0) {
          uVar8 = FUN_143703a50();
          if (local_50 == (local_4c & 0x3fffffff)) {
            FUN_14370c460(uVar8,&local_58,8);
          }
          local_58[(int)local_50] = *(longlong *)(lVar9 + 0x30);
          local_50 = local_50 + 1;
        }
      }
      if (plVar16 != (longlong *)0x0) {
        FMemory::Free(plVar16);
      }
    }
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar9 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar7 + 0x58),0x50);
    if (lVar9 != 0) {
      plVar10 = (longlong *)FUN_14383c8b0(lVar9);
    }
    param_1[0xf3] = (longlong)plVar10;
    FUN_142fbd650(plVar10,*(undefined8 *)(param_1[0xf4] + 0x30),(int)param_1[0xde]);
    fVar3 = *(float *)((longlong)param_1 + 0x744);
    fVar4 = *(float *)(param_1 + 0xe9);
    lVar9 = param_1[0xf3];
    plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,fVar4);
    *(float *)(lVar9 + 0x40) = *(float *)(param_1 + 0xe8) * 0.01;
    *(float *)(lVar9 + 0x44) = fVar3 * 0.01;
    *(float *)(lVar9 + 0x48) = fVar4 * 0.01;
    *(undefined4 *)(lVar9 + 0x4c) = 0;
    lVar9 = param_1[0xed];
    if (lVar9 == 0) {
      lVar9 = param_1[0xec];
    }
    uVar6 = FUN_142f8e040(param_1[0xe1] + 0x738,lVar9);
    FUN_142fbde00(param_1[0xf3],uVar6);
    plStack_60 = local_58 + (int)local_50;
    local_68 = local_58;
    puVar11 = (undefined4 *)
              FUN_143847490(lVar2,local_res8,param_1[0xf3],*(undefined8 *)(param_1[0xf4] + 0x38),
                            &local_68);
    local_res8[0] = *puVar11;
    local_68 = (longlong *)local_res8;
    plStack_60 = param_1 + 0xf5;
    FUN_142f86230(param_1[0xe1] + 0x7f8,local_res10,&local_68,0);
    iVar15 = local_40;
    plVar10 = local_48;
    if (local_48 == local_58) {
      local_50 = 0;
    }
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    uVar14 = iVar15 * 8 + 0x7fU & 0xffffff80;
    if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar14) ||
        ((longlong)(int)uVar14 + (longlong)plVar10 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
       (*(longlong **)((longlong)pvVar7 + 0x28) == plVar10)) {
      FUN_143713ff0(pvVar7,plVar10);
    }
    else {
      *(longlong **)((longlong)pvVar7 + 0x18) = plVar10;
    }
    uVar8 = FUN_143703a50();
    local_50 = 0;
    if (-1 < (int)local_4c) {
      FUN_143702e10(uVar8,local_58,8,local_4c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 142fa9040 FUN_142fa9040 body=1726 status=ok
// SIG undefined FUN_142fa9040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fa9040(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_168 [32];
  longlong **local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_128;
  longlong *plStack_120;
  longlong local_118;
  uint local_110;
  uint local_10c;
  longlong local_108;
  int local_100;
  longlong *local_f8;
  uint local_f0;
  uint local_ec;
  longlong *local_e8;
  int local_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong lStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((((param_1[0xe1] != 0) && (cVar3 = (**(code **)(*param_1 + 0x8f8))(), cVar3 == '\0')) &&
      (cVar3 = (**(code **)(*param_1 + 0x900))(param_1), cVar3 != '\0')) &&
     ((param_1[0xf4] != 0 && (*(longlong *)(param_1[0xf4] + 0x30) != 0)))) {
    lVar2 = *(longlong *)(param_1[0xe1] + 0x8f8);
    if (lVar2 != 0) {
      lVar9 = param_1[0xed];
      if (lVar9 == 0) {
        lVar9 = param_1[0xec];
      }
      iVar4 = FUN_142f8e040(param_1[0xe1] + 0x720,lVar9);
      if (iVar4 != -1) {
        cVar3 = FUN_142f8ee40(param_1);
        plVar13 = (longlong *)0x0;
        iVar14 = 0;
        local_f0 = 0;
        local_e0 = 8;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        local_f8 = *(longlong **)((longlong)pvVar5 + 0x18);
        if ((*(int *)((longlong)pvVar5 + 0x10) < 0x80) ||
           (*(longlong **)((longlong)pvVar5 + 0x20) < local_f8 + 0x10)) {
          local_f8 = (longlong *)FUN_1437138c0(pvVar5,0x80);
        }
        else {
          *(longlong **)((longlong)pvVar5 + 0x18) = local_f8 + 0x10;
        }
        local_ec = 0x80000008;
        local_110 = 0;
        local_100 = 8;
        local_e8 = local_f8;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        local_118 = *(longlong *)((longlong)pvVar5 + 0x18);
        if ((*(int *)((longlong)pvVar5 + 0x10) < 0x80) ||
           (*(ulonglong *)((longlong)pvVar5 + 0x20) < local_118 + 0x80U)) {
          local_118 = FUN_1437138c0(pvVar5,0x80);
        }
        else {
          *(ulonglong *)((longlong)pvVar5 + 0x18) = local_118 + 0x80U;
        }
        local_10c = 0x80000008;
        local_108 = local_118;
        if (cVar3 != '\0') {
          lVar9 = param_1[0xe1];
          local_128 = (longlong *)0x0;
          plStack_120 = (longlong *)0x0;
          if ((((*(int *)((longlong)param_1 + 0x6f4) == 0 && (int)param_1[0xdf] == 0) &&
               *(int *)((longlong)param_1 + 0x6fc) == 0) && (int)param_1[0xe0] == 0) ||
             (auVar1 = *(undefined1 (*) [16])(lVar9 + 0x700),
             ((auVar1._4_4_ != (int)param_1[0xdf] || auVar1._12_4_ != (int)param_1[0xe0]) ||
             auVar1._0_4_ != *(int *)((longlong)param_1 + 0x6f4)) ||
             auVar1._8_4_ != *(int *)((longlong)param_1 + 0x6fc))) {
            FUN_142fb0850(lVar9 + 0x700,(int)param_1[0xde]);
          }
          else {
            FUN_142fa4ba0(lVar9 + 0x700,(int)param_1[0xde],&local_128);
            plVar13 = local_128;
            iVar14 = (int)plStack_120;
          }
          for (plVar11 = plVar13; plVar11 != plVar13 + iVar14; plVar11 = plVar11 + 1) {
            lVar9 = *plVar11;
            if (lVar9 != 0) {
              uVar6 = FUN_143703a50();
              if (local_f0 == (local_ec & 0x3fffffff)) {
                FUN_14370c460(uVar6,&local_f8,8);
              }
              local_f8[(int)local_f0] = *(longlong *)(lVar9 + 0x30);
              local_f0 = local_f0 + 1;
              uVar6 = FUN_143703a50();
              if (local_110 == (local_10c & 0x3fffffff)) {
                FUN_14370c460(uVar6,&local_118,8);
              }
              *(undefined8 *)(local_118 + (longlong)(int)local_110 * 8) =
                   *(undefined8 *)(lVar9 + 0x38);
              local_110 = local_110 + 1;
            }
          }
          if (plVar13 != (longlong *)0x0) {
            FMemory::Free(plVar13);
          }
        }
        lVar9 = 0;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        lVar7 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar5 + 0x58),0xa0);
        lVar8 = lVar9;
        if (lVar7 != 0) {
          lVar8 = FUN_143839b90(lVar7);
        }
        param_1[0xf2] = lVar8;
        FUN_14383a0c0(lVar8,*(undefined8 *)(param_1[0xf4] + 0x30),(int)param_1[0xde]);
        local_98 = param_1[0xe6];
        lStack_90 = param_1[0xe7];
        fVar15 = *(float *)(param_1 + 0xe8) * 0.01;
        fVar16 = *(float *)((longlong)param_1 + 0x744) * 0.01;
        fVar17 = *(float *)(param_1 + 0xe9) * 0.01;
        FUN_143716430(&local_88,&local_98);
        lVar8 = param_1[0xf2];
        *(undefined8 *)(lVar8 + 0x40) = local_88;
        *(undefined8 *)(lVar8 + 0x48) = uStack_80;
        *(undefined8 *)(lVar8 + 0x50) = local_78;
        *(undefined8 *)(lVar8 + 0x58) = uStack_70;
        *(undefined8 *)(lVar8 + 0x60) = local_68;
        *(undefined8 *)(lVar8 + 0x68) = uStack_60;
        *(float *)(lVar8 + 0x70) = fVar15;
        *(float *)(lVar8 + 0x74) = fVar16;
        *(float *)(lVar8 + 0x78) = fVar17;
        *(undefined4 *)(lVar8 + 0x7c) = 0;
        local_58 = fVar15;
        fStack_54 = fVar16;
        fStack_50 = fVar17;
        uStack_4c = 0;
        if (*(char *)(param_1[0xf2] + 0x28) == '\x01') {
          lVar8 = *(longlong *)(param_1[0xf2] + 0x18);
        }
        else {
          lVar8 = FUN_142fbda20();
        }
        *(int *)(lVar8 + 0x180) = iVar4;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        lVar8 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar5 + 0x58),0x70);
        if (lVar8 != 0) {
          lVar9 = FUN_14383b910(lVar8);
        }
        lVar8 = param_1[0xde];
        param_1[0xf3] = lVar9;
        uVar6 = *(undefined8 *)(param_1[0xf4] + 0x40);
        if (*(char *)(lVar9 + 0x28) == '\x01') {
          uVar10 = *(undefined8 *)(lVar9 + 0x18);
        }
        else {
          uVar10 = FUN_142fbd8b0();
        }
        FUN_14383b5e0(uVar10,uVar6,(int)lVar8);
        lStack_c0 = local_118 + (longlong)(int)local_110 * 8;
        plStack_120 = local_f8 + (int)local_f0;
        local_128 = local_f8;
        local_138 = &local_c8;
        local_140 = param_1[0xf3];
        local_148 = &local_b8;
        local_c8 = local_118;
        local_b8 = local_f8;
        plStack_b0 = plStack_120;
        FUN_143847060(lVar2,local_d8,param_1[0xf2],*(undefined8 *)(param_1[0xf4] + 0x38));
        (**(code **)(*param_1 + 0x4b8))(param_1);
        iVar4 = local_100;
        lVar2 = local_108;
        if (local_108 == local_118) {
          local_110 = 0;
        }
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        uVar12 = iVar4 * 8 + 0x7fU & 0xffffff80;
        if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar12) ||
            ((int)uVar12 + lVar2 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
           (*(longlong *)((longlong)pvVar5 + 0x28) == lVar2)) {
          FUN_143713ff0(pvVar5,lVar2);
        }
        else {
          *(longlong *)((longlong)pvVar5 + 0x18) = lVar2;
        }
        uVar6 = FUN_143703a50();
        local_110 = 0;
        if (-1 < (int)local_10c) {
          FUN_143702e10(uVar6,local_118,8,local_10c & 0x3fffffff);
        }
        iVar4 = local_e0;
        plVar13 = local_e8;
        if (local_e8 == local_f8) {
          local_f0 = 0;
        }
        local_118 = 0;
        local_10c = 0x80000000;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        uVar12 = iVar4 * 8 + 0x7fU & 0xffffff80;
        if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar12) ||
            ((longlong)(int)uVar12 + (longlong)plVar13 != *(longlong *)((longlong)pvVar5 + 0x18)))
           || (*(longlong **)((longlong)pvVar5 + 0x28) == plVar13)) {
          FUN_143713ff0(pvVar5,plVar13);
        }
        else {
          *(longlong **)((longlong)pvVar5 + 0x18) = plVar13;
        }
        uVar6 = FUN_143703a50();
        local_f0 = 0;
        if (-1 < (int)local_ec) {
          FUN_143702e10(uVar6,local_f8,8,local_ec & 0x3fffffff);
        }
      }
    }
  }
  return;
}



// FUNCTION 142fa9700 FUN_142fa9700 body=143 status=ok
// SIG undefined FUN_142fa9700(void)

void FUN_142fa9700(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar2 = FUN_1407c3030(param_1 + 0x6f0);
  FUN_142dafbc0(param_1 + 0x6f0,&local_res10);
  if (((cVar2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x788), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x58) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    lVar3 = FUN_142f9cfb0(lVar3,0);
    if (lVar3 != 0) {
      FUN_142fb0730(lVar3 + 0x918,lVar1);
    }
  }
  return;
}



// FUNCTION 142fa9790 FUN_142fa9790 body=378 status=ok
// SIG undefined FUN_142fa9790(void)

void FUN_142fa9790(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_58;
  float local_50;
  
  lVar3 = *(longlong *)(param_1 + 0x6e0);
  if (lVar3 != 0) {
    if (param_2 <= 0.0) {
      param_2 = *(float *)(param_1 + 0xa9c);
    }
    fVar1 = *(float *)(lVar3 + 400);
    fVar2 = *(float *)(lVar3 + 0x18c);
    local_50 = *(float *)(lVar3 + 0x194);
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + local_50 * local_50;
    if (fVar4 == 1.0) {
      local_58 = *(undefined8 *)(lVar3 + 0x18c);
      local_50 = *(float *)(lVar3 + 0x194);
    }
    else if (1e-08 <= fVar4) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      local_50 = local_50 * fVar5;
      local_58 = CONCAT44(fVar1 * fVar5,fVar2 * fVar5);
    }
    else {
      local_50 = DAT_1468b5d98;
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    FUN_142dafc80(param_1 + 0x374,param_2,&local_58);
  }
  return;
}



// FUNCTION 142fa9910 FUN_142fa9910 body=663 status=ok
// SIG undefined FUN_142fa9910(void)

void FUN_142fa9910(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar12 = 0;
    bVar13 = **(longlong **)(param_1 + 0x28) != param_2;
    lVar8 = 0;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar11 = iVar10 + 1;
      if (lVar8 < lVar6) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8);
        do {
          if (bVar13 != (*plVar7 != param_2)) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar8 < lVar6);
      }
      if (bVar13 != false) {
        if (iVar12 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12 * 8),
                     (void *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10 * 8),
                     (longlong)(iVar11 - iVar10) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar6);
    *(int *)(param_1 + 0x30) = iVar12;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b44048);
  FUN_142fb0430(param_1);
  iVar10 = *(int *)(param_1 + 0x10);
  iVar12 = iVar10 + 1;
  *(int *)(param_1 + 0x10) = iVar12;
  if (*(int *)(param_1 + 0x14) < iVar12) {
    FUN_142fb11f0(param_1 + 8);
  }
  lVar8 = (longlong)iVar10 * 0x150;
  _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 8) + lVar8),0,0x150);
  lVar6 = param_4[1];
  plVar9 = (longlong *)(*(longlong *)(param_1 + 8) + lVar8);
  plVar9[0x16] = *param_4;
  plVar9[0x17] = lVar6;
  plVar7 = plVar9 + 0x1f;
  *(int *)(plVar9 + 0x18) = (int)param_4[2];
  *plVar9 = param_2;
  lVar6 = param_3[1];
  plVar9[1] = *param_3;
  plVar9[2] = lVar6;
  lVar6 = param_3[3];
  plVar9[3] = param_3[2];
  plVar9[4] = lVar6;
  lVar6 = param_3[5];
  plVar9[5] = param_3[4];
  plVar9[6] = lVar6;
  lVar6 = param_3[7];
  plVar9[7] = param_3[6];
  plVar9[8] = lVar6;
  lVar6 = param_3[9];
  plVar9[9] = param_3[8];
  plVar9[10] = lVar6;
  lVar6 = param_3[0xb];
  plVar9[0xb] = param_3[10];
  plVar9[0xc] = lVar6;
  lVar6 = param_3[0xd];
  plVar9[0xd] = param_3[0xc];
  plVar9[0xe] = lVar6;
  lVar6 = param_3[0xf];
  plVar9[0xf] = param_3[0xe];
  plVar9[0x10] = lVar6;
  lVar6 = param_3[0x11];
  plVar9[0x11] = param_3[0x10];
  plVar9[0x12] = lVar6;
  lVar6 = param_3[0x13];
  plVar9[0x13] = param_3[0x12];
  plVar9[0x14] = lVar6;
  plVar9[0x15] = param_3[0x14];
  plVar9[0x22] = *param_6;
  *(int *)(plVar9 + 0x23) = (int)param_6[1];
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)plVar9 + 0xc4) = *param_5;
  *(undefined8 *)((longlong)plVar9 + 0xcc) = uVar5;
  uVar1 = *(undefined4 *)((longlong)param_5 + 0x14);
  uVar2 = *(undefined4 *)(param_5 + 3);
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  *(undefined4 *)((longlong)plVar9 + 0xd4) = *(undefined4 *)(param_5 + 2);
  *(undefined4 *)(plVar9 + 0x1b) = uVar1;
  *(undefined4 *)((longlong)plVar9 + 0xdc) = uVar2;
  *(undefined4 *)(plVar9 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_5 + 0x24);
  uVar2 = *(undefined4 *)(param_5 + 5);
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x2c);
  *(undefined4 *)((longlong)plVar9 + 0xe4) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(plVar9 + 0x1d) = uVar1;
  *(undefined4 *)((longlong)plVar9 + 0xec) = uVar2;
  *(undefined4 *)(plVar9 + 0x1e) = uVar3;
  if (plVar7 != param_7) {
    iVar10 = (int)param_7[1];
    _Src = (void *)*param_7;
    *(int *)(plVar9 + 0x20) = iVar10;
    if ((iVar10 == 0) && (*(int *)((longlong)plVar9 + 0x104) == 0)) {
      *(undefined4 *)((longlong)plVar9 + 0x104) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar7,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*plVar7,_Src,(longlong)iVar10 << 3);
    }
  }
  uVar5 = (**(code **)(*(longlong *)param_3[0xd] + 0x668))();
  FWeakObjectPtr::operator=(plVar9 + 0x21,uVar5);
  return;
}



// FUNCTION 142fa9bb0 FUN_142fa9bb0 body=281 status=ok
// SIG undefined FUN_142fa9bb0(void)

void FUN_142fa9bb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_142fa53c0();
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x288) = DAT_1468c21b0;
    *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(lVar1 + 0x68);
    *(undefined8 *)(param_1 + 0x294) = *(undefined8 *)(lVar1 + 0x6c);
    *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(lVar1 + 0x74);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(lVar1 + 0x78);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(lVar1 + 0x7c);
    *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(lVar1 + 0x80);
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(lVar1 + 0x84);
    *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(lVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(lVar1 + 0x8c);
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(param_1 + 0x2c0) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(param_1 + 0x2d0) = uVar2;
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined1 *)(param_1 + 0x2e0) = *(undefined1 *)(lVar1 + 0xb8);
    *(undefined1 *)(param_1 + 0x2e1) = *(undefined1 *)(lVar1 + 0xb9);
    *(undefined1 *)(param_1 + 0x2e2) = *(undefined1 *)(lVar1 + 0xba);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar1 + 0xbc);
    *(undefined1 *)(param_1 + 0x2e8) = *(undefined1 *)(lVar1 + 0xc0);
    *(undefined1 *)(param_1 + 0x2e9) = *(undefined1 *)(lVar1 + 0xc1);
    *(undefined1 *)(param_1 + 0x2ea) = *(undefined1 *)(lVar1 + 0xc2);
  }
  return;
}



// FUNCTION 142fa9cd0 FUN_142fa9cd0 body=88 status=ok
// SIG undefined FUN_142fa9cd0(void)

void FUN_142fa9cd0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x21) == '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = FUN_142d39320(lVar1);
    if (lVar1 != 0) {
      FUN_142d4ee20(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x118));
      return;
    }
  }
  return;
}



// FUNCTION 142fa9d30 FUN_142fa9d30 body=1711 status=ok
// SIG undefined FUN_142fa9d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_142fa9d30(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
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
  undefined1 auStack_178 [32];
  undefined4 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 local_140;
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
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 == '\x02') {
    uVar6 = 1;
  }
  else if (cVar1 == '\x01') {
    lVar8 = FUN_142269f40();
    uVar9 = USignificanceManager::GetWorld(param_3);
    FUN_142ca1f70(param_2,&local_e8,uVar9);
    fVar28 = fRam0000000146b43ff8;
    fVar26 = fRam0000000146b43ff4;
    fVar20 = _DAT_146b43ff0;
    fVar46 = fRam0000000146b43f18;
    fVar45 = fRam0000000146b43f14;
    fVar44 = _DAT_146b43f10;
    lVar8 = *(longlong *)(lVar8 + 0x168);
    if (lVar8 == 0) {
      fVar33 = 0.0;
      fVar35 = 0.0;
      fVar37 = 0.0;
      fVar14 = 0.0;
      fVar24 = 0.0;
      fVar23 = 0.0;
      fVar41 = (float)((uint)_DAT_146b43f10 & _DAT_146b43f20);
      fVar42 = (float)((uint)fRam0000000146b43f14 & uRam0000000146b43f24);
      fVar43 = (float)((uint)fRam0000000146b43f18 & uRam0000000146b43f28);
      fVar22 = (float)((uint)fRam0000000146b43f1c & uRam0000000146b43f2c);
      fVar16 = fRam0000000146b43f1c;
    }
    else {
      fVar14 = *(float *)(lVar8 + 0x210);
      fVar24 = *(float *)(lVar8 + 0x214);
      fVar23 = *(float *)(lVar8 + 0x218);
      fVar33 = *(float *)(lVar8 + 0x220);
      fVar35 = *(float *)(lVar8 + 0x224);
      fVar37 = *(float *)(lVar8 + 0x228);
      fVar41 = *(float *)(lVar8 + 0x230);
      fVar42 = *(float *)(lVar8 + 0x234);
      fVar43 = *(float *)(lVar8 + 0x238);
      fVar22 = *(float *)(lVar8 + 0x23c);
      fVar16 = *(float *)(lVar8 + 0x21c);
    }
    fVar2 = local_c8._0_4_;
    fVar3 = local_c8._4_4_;
    fVar4 = local_c8._8_4_;
    auVar12._4_4_ = fVar42;
    auVar12._0_4_ = fVar41;
    auVar12._8_4_ = fVar43;
    auVar12._12_4_ = fVar22;
    auVar12 = minps(local_c8,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146b43ff4);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146b43ff0);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146b43ff8);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146b43ffc);
    iVar7 = movmskps((int)lVar8,auVar13);
    if (iVar7 == 0) {
      local_d8 = local_d8 * fVar41;
      fStack_d4 = fStack_d4 * fVar42;
      fStack_d0 = fStack_d0 * fVar43;
      fVar44 = fStack_d0 * fVar24 - fStack_d4 * fVar23;
      fVar45 = local_d8 * fVar23 - fStack_d0 * fVar14;
      fVar46 = fStack_d4 * fVar14 - local_d8 * fVar24;
      fVar44 = fVar44 + fVar44;
      fVar45 = fVar45 + fVar45;
      fVar46 = fVar46 + fVar46;
      fVar33 = (fVar46 * fVar24 - fVar45 * fVar23) + fVar16 * fVar44 + local_d8 + fVar33;
      fVar35 = (fVar44 * fVar23 - fVar46 * fVar14) + fVar16 * fVar45 + fStack_d4 + fVar35;
      fVar37 = (fVar45 * fVar14 - fVar44 * fVar24) + fVar16 * fVar46 + fStack_d0 + fVar37;
    }
    else {
      fVar17 = fVar24 + fVar24;
      fVar19 = fVar23 + fVar23;
      fVar21 = fVar14 * (fVar14 + fVar14);
      fVar18 = (fVar14 + fVar14) * fVar16;
      fVar38 = (fVar19 * fVar16 + fVar17 * fVar14) * fVar41;
      fVar39 = (fVar18 + fVar19 * fVar24) * fVar42;
      fVar40 = (fVar17 * fVar16 + fVar19 * fVar14) * fVar43;
      fVar25 = fVar42 * (fVar17 * fVar14 - fVar19 * fVar16);
      fVar27 = fVar43 * (fVar19 * fVar24 - fVar18);
      fVar29 = fVar41 * (fVar19 * fVar14 - fVar17 * fVar16);
      fVar14 = (float)((uint)((_DAT_146b43f10 - (fVar23 * fVar19 + fVar24 * fVar17)) * fVar41) &
                      _DAT_146b43f20);
      fVar16 = (float)((uint)((fRam0000000146b43f14 - (fVar23 * fVar19 + fVar21)) * fVar42) &
                      uRam0000000146b43f24);
      fVar17 = (float)((uint)((fRam0000000146b43f18 - (fVar24 * fVar17 + fVar21)) * fVar43) &
                      uRam0000000146b43f28);
      fVar18 = (float)((uint)((fRam0000000146b43f1c - (fVar21 + fVar21)) * fVar22) &
                      uRam0000000146b43f2c);
      fVar22 = fStack_e4 + fStack_e4;
      fVar24 = fStack_e0 + fStack_e0;
      fVar19 = local_e8 * (local_e8 + local_e8);
      fVar23 = (local_e8 + local_e8) * fStack_dc;
      fVar32 = (fVar24 * fStack_dc + fVar22 * local_e8) * fVar2;
      fVar34 = (fVar23 + fVar24 * fStack_e4) * fVar3;
      fVar36 = (fVar22 * fStack_dc + fVar24 * local_e8) * fVar4;
      fVar21 = fVar3 * (fVar22 * local_e8 - fVar24 * fStack_dc);
      fVar30 = fVar4 * (fVar24 * fStack_e4 - fVar23);
      fVar31 = fVar2 * (fVar24 * local_e8 - fVar22 * fStack_dc);
      fVar23 = (float)((uint)((_DAT_146b43f10 - (fStack_e0 * fVar24 + fStack_e4 * fVar22)) * fVar2)
                      & _DAT_146b43f20);
      fVar24 = (float)((uint)((fRam0000000146b43f14 - (fStack_e0 * fVar24 + fVar19)) * fVar3) &
                      uRam0000000146b43f24);
      fVar22 = (float)((uint)((fRam0000000146b43f18 - (fStack_e4 * fVar22 + fVar19)) * fVar4) &
                      uRam0000000146b43f28);
      fVar19 = (float)((uint)((fRam0000000146b43f1c - (fVar19 + fVar19)) * local_c8._12_4_) &
                      uRam0000000146b43f2c);
      local_128 = fVar32 * fVar25 + fVar23 * fVar14 + fVar31 * fVar40 + fVar19 * fVar33;
      fStack_124 = fVar32 * fVar16 + fVar23 * fVar38 + fVar31 * fVar27 + fVar19 * fVar35;
      fStack_120 = fVar32 * fVar39 + fVar23 * fVar29 + fVar31 * fVar17 + fVar19 * fVar37;
      fStack_11c = fVar32 * fVar18 + fVar23 * fVar18 + fVar31 * fVar18 +
                   fVar19 * fRam0000000146b43f1c;
      local_118 = fVar24 * fVar25 + fVar21 * fVar14 + fVar34 * fVar40 + fVar19 * fVar33;
      fStack_114 = fVar24 * fVar16 + fVar21 * fVar38 + fVar34 * fVar27 + fVar19 * fVar35;
      fStack_110 = fVar24 * fVar39 + fVar21 * fVar29 + fVar34 * fVar17 + fVar19 * fVar37;
      fStack_10c = fVar24 * fVar18 + fVar21 * fVar18 + fVar34 * fVar18 +
                   fVar19 * fRam0000000146b43f1c;
      local_108 = fVar30 * fVar25 + fVar36 * fVar14 + fVar22 * fVar40 + fVar19 * fVar33;
      fStack_104 = fVar30 * fVar16 + fVar36 * fVar38 + fVar22 * fVar27 + fVar19 * fVar35;
      fStack_100 = fVar30 * fVar39 + fVar36 * fVar29 + fVar22 * fVar17 + fVar19 * fVar37;
      fStack_fc = fVar30 * fVar18 + fVar36 * fVar18 + fVar22 * fVar18 +
                  fVar19 * fRam0000000146b43f1c;
      local_f8 = fStack_d4 * fVar25 + local_d8 * fVar14 + fStack_d0 * fVar40 +
                 fRam0000000146b43f1c * fVar33;
      fStack_f4 = fStack_d4 * fVar16 + local_d8 * fVar38 + fStack_d0 * fVar27 +
                  fRam0000000146b43f1c * fVar35;
      fStack_f0 = fStack_d4 * fVar39 + local_d8 * fVar29 + fStack_d0 * fVar17 +
                  fRam0000000146b43f1c * fVar37;
      fStack_ec = fStack_d4 * fVar18 + local_d8 * fVar18 + fStack_d0 * fVar18 +
                  fRam0000000146b43f1c * fRam0000000146b43f1c;
      FMatrix::RemoveScaling(&local_128);
      fVar44 = (float)(-(uint)(fVar20 <= fVar2 * fVar41) & (_DAT_146b43fe0 ^ (uint)fVar44) ^
                      _DAT_146b43fe0);
      fVar45 = (float)(-(uint)(fVar26 <= fVar3 * fVar42) & (uRam0000000146b43fe4 ^ (uint)fVar45) ^
                      uRam0000000146b43fe4);
      fVar46 = (float)(-(uint)(fVar28 <= fVar4 * fVar43) & (uRam0000000146b43fe8 ^ (uint)fVar46) ^
                      uRam0000000146b43fe8);
      local_128 = local_128 * fVar44;
      fStack_124 = fStack_124 * fVar44;
      fStack_120 = fStack_120 * fVar44;
      fStack_114 = fStack_114 * fVar45;
      fStack_110 = fStack_110 * fVar45;
      local_118 = local_118 * fVar45;
      fStack_104 = fStack_104 * fVar46;
      fStack_100 = fStack_100 * fVar46;
      local_108 = local_108 * fVar46;
      FQuat::FQuat(&local_138,&local_128);
      local_158 = 0x322bcc77;
      auVar15._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
      auVar15._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
      auVar15._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
      auVar15._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
      fVar26 = auVar15._4_4_ + auVar15._0_4_;
      fVar28 = auVar15._8_4_ + auVar15._4_4_;
      fVar23 = auVar15._12_4_ + auVar15._8_4_;
      fVar14 = auVar15._0_4_ + auVar15._12_4_;
      auVar5._4_4_ = fVar28;
      auVar5._0_4_ = fVar26;
      auVar5._8_4_ = fVar23;
      auVar5._12_4_ = fVar14;
      auVar12 = rsqrtps(auVar15,auVar5);
      fVar44 = auVar12._0_4_;
      fVar45 = auVar12._4_4_;
      fVar46 = auVar12._8_4_;
      fVar20 = auVar12._12_4_;
      fVar44 = (_DAT_146b43fd0 - fVar44 * fVar44 * fVar26 * _DAT_146b43fd0) * fVar44 + fVar44;
      fVar45 = (fRam0000000146b43fd4 - fVar45 * fVar45 * fVar28 * fRam0000000146b43fd4) * fVar45 +
               fVar45;
      fVar46 = (fRam0000000146b43fd8 - fVar46 * fVar46 * fVar23 * fRam0000000146b43fd8) * fVar46 +
               fVar46;
      fVar20 = (fRam0000000146b43fdc - fVar20 * fVar20 * fVar14 * fRam0000000146b43fdc) * fVar20 +
               fVar20;
      local_138 = (float)(((uint)(((_DAT_146b43fd0 - fVar44 * fVar44 * fVar26 * _DAT_146b43fd0) *
                                   fVar44 + fVar44) * local_138) ^ _DAT_146b43fc0) &
                          -(uint)(1e-08 <= fVar26) ^ _DAT_146b43fc0);
      fStack_134 = (float)(((uint)(((fRam0000000146b43fd4 -
                                    fVar45 * fVar45 * fVar28 * fRam0000000146b43fd4) * fVar45 +
                                   fVar45) * fStack_134) ^ uRam0000000146b43fc4) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146b43fc4);
      fStack_130 = (float)(((uint)(((fRam0000000146b43fd8 -
                                    fVar46 * fVar46 * fVar23 * fRam0000000146b43fd8) * fVar46 +
                                   fVar46) * fStack_130) ^ uRam0000000146b43fc8) &
                           -(uint)(1e-08 <= fVar23) ^ uRam0000000146b43fc8);
      fStack_12c = (float)(((uint)(((fRam0000000146b43fdc -
                                    fVar20 * fVar20 * fVar14 * fRam0000000146b43fdc) * fVar20 +
                                   fVar20) * fStack_12c) ^ uRam0000000146b43fcc) &
                           -(uint)(1e-08 <= fVar14) ^ uRam0000000146b43fcc);
      fVar33 = local_f8;
      fVar35 = fStack_f4;
      fVar37 = fStack_f0;
    }
    uVar9 = USignificanceManager::GetWorld(param_3);
    fVar44 = (float)FUN_142c9fb80(param_2,uVar9);
    local_140 = *(undefined4 *)(param_3 + 0x7fc);
    local_150 = *(float *)(param_3 + 0x7ec) + fVar44 * *(float *)(param_3 + 0x7bc);
    fStack_144 = *(float *)(param_3 + 0x7f8) - 10.0;
    if (fStack_144 <= 0.0) {
      fStack_144 = 0.0;
    }
    fStack_14c = *(float *)(param_3 + 0x7f0) + fVar44 * *(float *)(param_3 + 0x7c0);
    fStack_148 = *(float *)(param_3 + 0x7f4) + fVar44 * *(float *)(param_3 + 0x7c4);
    local_138 = fVar33;
    fStack_134 = fVar35;
    fStack_130 = fVar37;
    uVar6 = FUN_142c73900(&local_150,&local_138);
  }
  else {
    if (cVar1 == '\x03') {
      uVar9 = USignificanceManager::GetWorld(param_3);
      FUN_142ca1f70(param_2,&local_e8,uVar9);
      local_d8 = local_d8 - *(float *)(param_1 + 0x50);
      bVar11 = local_d8 == *(float *)(param_3 + 0x780);
      bVar10 = local_d8 < *(float *)(param_3 + 0x780);
    }
    else {
      uVar9 = USignificanceManager::GetWorld(param_3);
      lVar8 = FUN_142ca1f70(param_2,&local_e8,uVar9);
      fVar44 = SQRT(*(float *)(lVar8 + 0x14) * *(float *)(lVar8 + 0x14) +
                    *(float *)(lVar8 + 0x10) * *(float *)(lVar8 + 0x10)) -
               *(float *)(param_1 + 0x50);
      bVar11 = fVar44 == *(float *)(param_3 + 0x780);
      bVar10 = fVar44 < *(float *)(param_3 + 0x780);
    }
    uVar6 = bVar10 || bVar11;
  }
  return uVar6;
}



// FUNCTION 142faa3e0 FUN_142faa3e0 body=213 status=ok
// SIG undefined FUN_142faa3e0(void)

void FUN_142faa3e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 == 0) {
    return;
  }
  plVar3 = (longlong *)UInterpTrack::GetPrivateStaticClass();
  plVar1 = (longlong *)*param_2;
  plVar6 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  while (plVar6 != plVar3) {
    plVar6 = (longlong *)plVar6[6];
    if (plVar6 == (longlong *)0x0) {
      return;
    }
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar4 = plVar1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) goto LAB_142faa49e;
  }
  lVar4 = *(longlong *)(lVar4 + 0x28);
  if (lVar4 == 0) {
LAB_142faa499:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_142fc1ed0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142faa499;
  }
  *param_1 = lVar4;
LAB_142faa49e:
  *param_2 = 0;
  return;
}



// FUNCTION 142faa4c0 FUN_142faa4c0 body=23 status=ok
// SIG undefined FUN_142faa4c0(void)

undefined8 FUN_142faa4c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142f8eb00();
  return param_2;
}



// FUNCTION 142faa510 FUN_142faa510 body=1398 status=ok
// SIG undefined FUN_142faa510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142faa510(float *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined8 local_260;
  float local_258;
  undefined8 local_250;
  float local_248;
  undefined **local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_210;
  int local_208;
  undefined4 local_204;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1c8;
  float local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  undefined1 local_148 [32];
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined1 (*local_118) [16];
  uint local_108;
  uint *local_100;
  float local_ec;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_c0;
  ulonglong local_68;
  
  uVar8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  uVar9 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  local_68 = uVar8;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    uVar8 = TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x22);
  if (lVar2 == 0) {
LAB_142faaa3f:
    return uVar8 & 0xffffffffffffff00;
  }
  if ((*param_1 <= -(float)DAT_14676e1b0) || ((float)DAT_14676e1b0 <= *param_1)) goto LAB_142faaa3f;
  if ((param_1[1] <= -DAT_14676e1b0._4_4_) || (DAT_14676e1b0._4_4_ <= param_1[1]))
  goto LAB_142faaa3f;
  if ((((((param_1[2] <= -DAT_14676e1b8) || (DAT_14676e1b8 <= param_1[2])) ||
        (param_1[3] <= -(float)DAT_14676e1b0)) ||
       (((float)DAT_14676e1b0 <= param_1[3] || (param_1[4] <= -DAT_14676e1b0._4_4_)))) ||
      (DAT_14676e1b0._4_4_ <= param_1[4])) ||
     (((param_1[5] <= -DAT_14676e1b8 || (DAT_14676e1b8 <= param_1[5])) ||
      ((uVar8 = *(ulonglong *)(lVar2 + 0x8f8), uVar8 == 0 ||
       (lVar12 = *(longlong *)(uVar8 + 0x130), lVar12 == 0)))))) goto LAB_142faaa3f;
  local_268 = *(longlong *)(param_1 + 6);
  local_260 = *(undefined8 *)param_1;
  fVar17 = (float)local_260;
  fVar18 = (float)((ulonglong)local_260 >> 0x20);
  local_258 = param_1[2];
  if (((int)local_268 < 0) || (lVar11 = local_268, local_268 < 0)) {
    local_1b8 = *(undefined8 *)(param_1 + 10);
    uStack_1b0 = *(undefined8 *)(param_1 + 0xc);
    local_1c0 = param_1[2];
    local_1a8 = *(undefined8 *)(param_1 + 0xe);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x10);
    local_198 = *(undefined8 *)(param_1 + 0x12);
    uStack_190 = *(undefined8 *)(param_1 + 0x14);
    local_1bc = 0xbf800000;
    local_188 = *(undefined8 *)(param_1 + 0x16);
    uStack_180 = *(undefined8 *)(param_1 + 0x18);
    local_178 = param_1[0x1a];
    fStack_174 = param_1[0x1b];
    fStack_170 = param_1[0x1c];
    fStack_16c = param_1[0x1d];
    local_168 = param_1[0x1e];
    fStack_164 = param_1[0x1f];
    fStack_160 = param_1[0x20];
    fStack_15c = param_1[0x21];
    local_1c8 = local_260;
    local_158 = lVar2;
    uVar8 = FUN_142fae610(&local_1c8,&local_260,&local_268);
    if ((char)uVar8 == '\0') goto LAB_142faaa3f;
    fVar17 = (float)local_260;
    fVar18 = (float)((ulonglong)local_260 >> 0x20);
    lVar11 = local_268;
  }
  local_268 = *(longlong *)(param_1 + 8);
  local_250 = *(undefined8 *)(param_1 + 3);
  fVar15 = (float)local_250;
  fVar16 = (float)((ulonglong)local_250 >> 0x20);
  local_248 = param_1[5];
  if (((int)local_268 < 0) || (local_268 < 0)) {
    local_1b8 = *(undefined8 *)(param_1 + 10);
    uStack_1b0 = *(undefined8 *)(param_1 + 0xc);
    local_158 = *(longlong *)(param_1 + 0x22);
    local_1a8 = *(undefined8 *)(param_1 + 0xe);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x10);
    local_198 = *(undefined8 *)(param_1 + 0x12);
    uStack_190 = *(undefined8 *)(param_1 + 0x14);
    local_1c0 = param_1[5];
    local_188 = *(undefined8 *)(param_1 + 0x16);
    uStack_180 = *(undefined8 *)(param_1 + 0x18);
    local_1bc = 0xbf800000;
    local_178 = param_1[0x1a];
    fStack_174 = param_1[0x1b];
    fStack_170 = param_1[0x1c];
    fStack_16c = param_1[0x1d];
    local_168 = param_1[0x1e];
    fStack_164 = param_1[0x1f];
    fStack_160 = param_1[0x20];
    fStack_15c = param_1[0x21];
    local_1c8 = local_250;
    uVar8 = FUN_142fae610(&local_1c8,&local_250,&local_268);
    if ((char)uVar8 == '\0') goto LAB_142faaa3f;
    fVar15 = (float)local_250;
    fVar16 = (float)((ulonglong)local_250 >> 0x20);
  }
  lVar2 = local_268;
  FUN_143841d70(local_148,1);
  local_128 = fVar17 * 0.01;
  fStack_124 = fVar18 * 0.01;
  fStack_120 = local_258 * 0.01;
  uStack_11c = 0;
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar15;
  auVar3._8_4_ = local_248;
  auVar3._12_4_ = 0;
  *local_118 = auVar3;
  *(float *)*local_118 = fVar15 * 0.01;
  *(float *)(*local_118 + 4) = fVar16 * 0.01;
  *(float *)(*local_118 + 8) = local_248 * 0.01;
  *(undefined4 *)(*local_118 + 0xc) = 0;
  if (((int)lVar11 < 0) || (lVar11 < 0)) {
    local_108 = 0xffffffff;
  }
  else {
    local_108 = (int)lVar11 << 0x16 | (uint)((ulonglong)lVar11 >> 0x20);
  }
  if (((int)lVar2 < 0) || (lVar2 < 0)) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = (int)lVar2 << 0x16 | (uint)((ulonglong)lVar2 >> 0x20);
  }
  *local_100 = uVar10;
  local_ec = param_1[10] * 0.02;
  local_d8 = _DAT_1467f08b0;
  uStack_d4 = uRam00000001467f08b4;
  uStack_d0 = uRam00000001467f08b8;
  uStack_cc = uRam00000001467f08bc;
  local_c0 = FUN_142fa12f0(*(longlong *)(param_1 + 0x22) + 0xa28,param_1 + 0x1e);
  local_c8 = FUN_142f9efa0(*(longlong *)(param_1 + 0x22) + 0xa28,param_1 + 0x1e);
  if (local_c0 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x22);
    cVar6 = FWeakObjectPtr::IsValid(lVar2 + 0xa28);
    if (cVar6 == '\0') {
      local_c0 = 0;
      bVar14 = false;
      goto LAB_142faaa28;
    }
    local_c0 = *(longlong *)(lVar2 + 0xb48);
    if (local_c0 == 0) {
      bVar14 = false;
      goto LAB_142faaa28;
    }
  }
  local_1f0 = 0x7f7fffee;
  local_238 = hkaiPathfindingUtil::FindPathOutput::vftable;
  local_230 = 0;
  local_228 = 0x1ffff;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0x80000000;
  local_210 = 0;
  local_208 = 0;
  local_204 = 0x80000000;
  local_1f8 = 0;
  local_1f4 = 0xffffffff;
  local_1ec = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0x80000000;
  FUN_143842cb0(lVar12,local_148,&local_238);
  bVar14 = (char)local_1ec == '\x01';
  if (bVar14) {
    lVar2 = param_2[1];
    lVar12 = (longlong)local_208;
    iVar7 = local_208 + (int)lVar2;
    *(int *)(param_2 + 1) = iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_2 + (longlong)(int)lVar2 * 0xc),0,lVar12 * 0xc);
    uVar8 = uVar9;
    uVar13 = uVar9;
    if (0 < local_208) {
      do {
        lVar2 = *param_2;
        uVar10 = (int)uVar13 + 1;
        puVar1 = (undefined4 *)(uVar8 + local_210);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        *(undefined4 *)(uVar9 + lVar2) = *puVar1;
        ((undefined4 *)(uVar9 + lVar2))[1] = uVar4;
        *(undefined4 *)(uVar9 + 8 + lVar2) = uVar5;
        *(float *)(uVar9 + lVar2) = *(float *)(uVar9 + lVar2) * 100.0;
        *(float *)(uVar9 + 4 + lVar2) = *(float *)(uVar9 + 4 + lVar2) * 100.0;
        *(float *)(uVar9 + 8 + lVar2) = *(float *)(uVar9 + 8 + lVar2) * 100.0;
        uVar9 = uVar9 + 0xc;
        uVar8 = uVar8 + 0x30;
        uVar13 = (ulonglong)uVar10;
      } while ((int)uVar10 < local_208);
    }
  }
  FUN_142f8bad0(&local_238);
LAB_142faaa28:
  FUN_142f8b990(local_148);
  return (ulonglong)bVar14;
}



// FUNCTION 142faaa90 FUN_142faaa90 body=1269 status=ok
// SIG undefined FUN_142faaa90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142faaa90(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  float *pfVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  lVar5 = FUN_142f9cfb0(lVar4,0);
  if ((lVar4 != 0) && (lVar5 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    lVar13 = (longlong)*(int *)(param_1 + 0x1b8) * 0x20 + lVar5;
    if (lVar5 != lVar13) {
      pfVar7 = (float *)(lVar5 + 0x14);
      lVar9 = lVar5;
      while (((((lVar3 = *(longlong *)(pfVar7 + 1), lVar3 == 0 ||
                (fVar15 = pfVar7[-2], fVar15 <= -(float)DAT_14676e1b0)) ||
               ((float)DAT_14676e1b0 <= fVar15)) ||
              ((fVar16 = pfVar7[-1], fVar16 <= -DAT_14676e1b0._4_4_ ||
               (DAT_14676e1b0._4_4_ <= fVar16)))) ||
             ((fVar17 = *pfVar7, fVar17 <= -DAT_14676e1b8 ||
              ((DAT_14676e1b8 <= fVar17 ||
               (fVar15 = *(float *)(lVar3 + 0x220) - fVar15,
               fVar16 = *(float *)(lVar3 + 0x224) - fVar16,
               fVar17 = *(float *)(lVar3 + 0x228) - fVar17,
               fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17 < 1.0))))))) {
        lVar9 = lVar9 + 0x20;
        pfVar7 = pfVar7 + 8;
        if (lVar9 == lVar13) {
          return;
        }
      }
      if (lVar5 != lVar13) {
        puVar10 = (undefined4 *)(lVar5 + 0xc);
        do {
          lVar9 = *(longlong *)(puVar10 + 3);
          if (lVar9 != 0) {
            uVar1 = *(undefined4 *)(lVar9 + 0x224);
            uStack_e0 = *(undefined4 *)(lVar9 + 0x228);
            *puVar10 = *(undefined4 *)(lVar9 + 0x220);
            puVar10[1] = uVar1;
            puVar10[2] = uStack_e0;
          }
          lVar5 = lVar5 + 0x20;
          puVar10 = puVar10 + 8;
        } while (lVar5 != lVar13);
      }
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar11 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      FUN_142880530(uVar11,param_1 + 0x200);
      *(undefined8 *)(param_1 + 0x200) = 0;
      local_e8 = &LAB_142faa4e0;
      uStack_e0 = 0;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_e8;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_e8._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_e0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_dc;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      }
      if (*(longlong *)(lVar4 + 400) == 0) {
        uVar11 = *(undefined8 *)(lVar4 + 0x3f8);
      }
      else {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x17c);
      local_d8 = 0;
      local_d0 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_f0 = 0xbf800000;
      local_f8 = 0;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar11,param_1 + 0x200,&local_d8,uVar1);
      if (local_78 != 0) {
        plVar14 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar14 = local_88;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar4 = FMemory::Realloc(plVar6,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      pfVar7 = *(float **)(param_1 + 0x1b0);
      pfVar12 = pfVar7 + (longlong)*(int *)(param_1 + 0x1b8) * 8;
      if (pfVar7 == pfVar12) {
        return;
      }
      do {
        lVar4 = *(longlong *)(pfVar7 + 6);
        if ((lVar4 != 0) &&
           (fVar16 = *(float *)(lVar4 + 0x224) - pfVar7[1],
           fVar15 = *(float *)(lVar4 + 0x220) - *pfVar7,
           fVar17 = *(float *)(lVar4 + 0x228) - pfVar7[2],
           *(float *)(param_1 + 0x1a4) * *(float *)(param_1 + 0x1a4) <=
           fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17)) {
          cVar2 = *(char *)(param_1 + 0x1f8);
          *(undefined1 *)(param_1 + 0x1f8) = 2;
          if (cVar2 == '\0') {
            if (*(char *)(param_1 + 0x180) == '\x02') {
              lVar4 = *(longlong *)(param_1 + 0x120);
              if (lVar4 == 0) {
                lVar4 = FUN_1423407b0(param_1);
              }
              lVar4 = FUN_142f9cfb0(lVar4,0);
              if ((lVar4 != 0) && (*(int *)(param_1 + 0x1dc) == DAT_14676e178)) {
                iVar8 = *(int *)(param_1 + 0x1a0);
                lVar5 = (longlong)iVar8;
                if ((-1 < iVar8) &&
                   ((iVar8 < *(int *)(lVar4 + 0x6d8) &&
                    (*(longlong *)(*(longlong *)(lVar4 + 0x6d0) + lVar5 * 0x10) == param_1)))) {
                  *(undefined1 *)(*(longlong *)(lVar4 + 0x6d0) + 0xc + lVar5 * 0x10) = 0;
                  *(undefined4 *)(*(longlong *)(lVar4 + 0x6d0) + 8 + lVar5 * 0x10) = 0;
                  iVar8 = *(int *)(param_1 + 0x1a0);
                }
                *(int *)(param_1 + 0x1dc) = iVar8;
                *(int *)(param_1 + 0x1a0) = DAT_14676e178;
                FUN_142f98850(param_1);
                FUN_142faf470(lVar4 + 0x6c0,param_1);
              }
            }
          }
          else if (cVar2 == '\x02') {
            return;
          }
          FUN_142fbb0d0(param_1);
          return;
        }
        pfVar7 = pfVar7 + 8;
      } while (pfVar7 != pfVar12);
    }
  }
  return;
}



// FUNCTION 142faaf90 FUN_142faaf90 body=5 status=ok
// SIG undefined FUN_142faaf90(void)

void FUN_142faaf90(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x79) = 1;
  return;
}



// FUNCTION 142faafa0 FUN_142faafa0 body=358 status=ok
// SIG undefined FUN_142faafa0(void)

void FUN_142faafa0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [32];
  undefined1 local_38;
  byte local_37;
  
  if (((((param_2 != 0) && (lVar2 = FWeakObjectPtr::Get(param_2 + 0x138), lVar2 != 0)) &&
       ((lVar3 = *(longlong *)(lVar2 + 0x120), lVar3 != 0 ||
        (lVar3 = FUN_1423407b0(lVar2), lVar3 != 0)))) &&
      ((((cVar1 = UWorld::IsGameWorld(lVar3), cVar1 == '\0' || (1 < (byte)(param_3 - 2U))) &&
        (plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 4), plVar4 != (longlong *)0x0)) &&
       ((lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4), lVar3 == lVar5 &&
        (*(longlong *)(lVar3 + 0x30) == plVar4[4])))))) &&
     (FUN_142b8e1f0(&local_38,param_2), local_37 != 0)) {
    if (local_37 < 3) {
      if ((*(uint *)(lVar2 + 8) >> 6 & 1) == 0) {
        uVar6 = FUN_142695cf0(param_2,local_58);
        FUN_142b85e90(plVar4,uVar6);
      }
    }
    else if (local_37 == 3) {
      if (param_3 != '\0') {
        if (param_3 == '\x01') {
          FUN_142fb72b0(param_1,param_2,&local_38);
          return;
        }
        if (param_3 != '\x02') {
          return;
        }
        FUN_142fb72b0(param_1,param_2,&local_38);
      }
      FUN_142fa6b60(param_1,param_2,&local_38);
    }
  }
  return;
}



// FUNCTION 142fab110 FUN_142fab110 body=51 status=ok
// SIG undefined FUN_142fab110(void)

void FUN_142fab110(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) && ((int)(param_3[1] - *param_3 >> 3) != 0)) {
    *(undefined1 *)(lVar1 + 0xb68) = 1;
  }
  return;
}



// FUNCTION 142fab150 FUN_142fab150 body=106 status=ok
// SIG undefined FUN_142fab150(void)

void FUN_142fab150(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142343790();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x938))(param_1);
  }
  if (param_1[0xec] == 0) {
    lVar3 = 0;
    param_1[0xf7] = 0;
    param_1[0xf8] = 0;
    lVar2 = FUN_142f9d030();
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x38);
    }
    param_1[0xec] = lVar3;
  }
  return;
}



// FUNCTION 142fab1c0 FUN_142fab1c0 body=70 status=ok
// SIG undefined FUN_142fab1c0(void)

void FUN_142fab1c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142343790();
  if (*(longlong *)(param_1 + 0x188) == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    lVar1 = FUN_142f9d030();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x188) = uVar2;
  }
  return;
}



// FUNCTION 142fab210 FUN_142fab210 body=106 status=ok
// SIG undefined FUN_142fab210(void)

void FUN_142fab210(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142343790();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x938))(param_1);
  }
  if (param_1[0xec] == 0) {
    lVar3 = 0;
    param_1[0xf5] = 0;
    param_1[0xf6] = 0;
    lVar2 = FUN_142f9d030();
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x30);
    }
    param_1[0xec] = lVar3;
  }
  return;
}



// FUNCTION 142fab280 FUN_142fab280 body=55 status=ok
// SIG undefined FUN_142fab280(void)

void FUN_142fab280(longlong *param_1)

{
  char cVar1;
  
  FUN_142343790();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142fab2aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x938))(param_1);
    return;
  }
  return;
}



// FUNCTION 142fab2c0 FUN_142fab2c0 body=58 status=ok
// SIG undefined FUN_142fab2c0(void)

void FUN_142fab2c0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142343790();
  lVar1 = FUN_142f9d030();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(lVar1 + 0x60);
    return;
  }
  *(undefined8 *)(param_1 + 0x740) = 0;
  return;
}



// FUNCTION 142fab300 FUN_142fab300 body=55 status=ok
// SIG undefined FUN_142fab300(void)

void FUN_142fab300(longlong *param_1)

{
  FUN_142393140();
  (**(code **)(*param_1 + 0x8f0))(param_1);
  (**(code **)(*param_1 + 0x928))(param_1);
  param_1[0xe1] = 0;
  return;
}



// FUNCTION 142fab340 FUN_142fab340 body=1104 status=ok
// SIG undefined FUN_142fab340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fab340(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_138 [32];
  undefined8 ***local_118;
  undefined8 ***local_110;
  undefined8 ***local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 ***local_f0 [3];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_44;
  float local_3c;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x178) == 0) {
    return;
  }
  lVar2 = lVar2 + 0x2110;
  local_108 = (undefined8 ****)0x0;
  FUN_142c626d0(&local_100);
  if (*(char *)(param_1 + 0x88) == '\0') {
    local_110 = &local_108;
    local_118 = (undefined8 ***)&local_100;
    FUN_142c7b6e0(lVar2,*(undefined1 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),
                  *(char *)(param_1 + 0x89));
  }
  else {
    if (*(char *)(param_1 + 0x89) != '\0') {
      FUN_142c9fce0(*(undefined8 *)(param_1 + 0x60),local_f0,*(undefined8 *)(param_1 + 0x40));
      local_108 = local_f0[0];
      pfVar1 = (float *)FUN_142fa0370(param_1,local_f0);
      local_100 = *pfVar1;
      fStack_fc = pfVar1[1];
      fStack_f8 = pfVar1[2];
      fStack_f4 = pfVar1[3];
      local_110 = *(undefined8 ****)(param_1 + 0x68);
      local_118 = local_108;
      FUN_142c7b640(lVar2,*(undefined1 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),&local_100
                   );
      goto LAB_142fab473;
    }
    local_118 = &local_108;
    FUN_142c7a780(lVar2,*(undefined1 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),&local_100);
  }
  FUN_142cab640(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40),local_108);
LAB_142fab473:
  if (((*(byte *)(param_1 + 0x38) & 0xfa) == 0) && (*(byte *)(param_1 + 0x38) != 5)) {
    return;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(lVar2 + 0x220) != 0) {
      *(undefined1 *)(*(longlong *)(lVar2 + 0x220) + 0x8ac) = 1;
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    FUN_142cf49e0(lVar2 + 0x2580,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  }
  if (*(char *)(param_1 + 0x38) == '\b') {
    local_100 = local_100 - *(float *)(*(longlong *)(param_1 + 0x60) + 0x5e0);
    fVar3 = (float)(int)(local_100 * 0.0027777778) * 360.0;
    if (ABS(local_100) < ABS(fVar3)) {
      fVar3 = local_100;
    }
    local_100 = local_100 - fVar3;
    if (local_100 < 0.0) {
      local_100 = local_100 + 360.0;
    }
    if (180.0 < local_100) {
      local_100 = local_100 - 360.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x60) + 0x768) = local_100;
    return;
  }
  if (((*(char *)(param_1 + 0x38) - 3U & 0xfd) == 0) && (*(longlong *)(param_1 + 0x40) == 0)) {
    local_100 = local_100 - *(float *)(*(longlong *)(param_1 + 0x60) + 0x5e0);
    fVar3 = (float)(int)(local_100 * 0.0027777778) * 360.0;
    if (ABS(local_100) < ABS(fVar3)) {
      fVar3 = local_100;
    }
    local_100 = local_100 - fVar3;
    if (local_100 < 0.0) {
      local_100 = local_100 + 360.0;
    }
    if (180.0 < local_100) {
      local_100 = local_100 - 360.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x60) + 0x76c) = local_100;
    return;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x856) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b441a0) &&
       (_Init_thread_header(&DAT_146b441a0), DAT_146b441a0 == -1)) {
      FName::FName(&DAT_146b44198,L"Navigation",1);
      _Init_thread_footer(&DAT_146b441a0);
    }
    local_80 = DAT_1468b5da8;
    local_98 = DAT_146b44198;
    local_c8 = _DAT_1468b5b70;
    uStack_c4 = uRam00000001468b5b74;
    uStack_c0 = uRam00000001468b5b78;
    uStack_bc = uRam00000001468b5b7c;
    local_b8 = _DAT_1468b5b80;
    uStack_b4 = uRam00000001468b5b84;
    uStack_b0 = uRam00000001468b5b88;
    uStack_ac = uRam00000001468b5b8c;
    local_a8 = _DAT_1468b5b90;
    uStack_a4 = uRam00000001468b5b94;
    uStack_a0 = uRam00000001468b5b98;
    uStack_9c = uRam00000001468b5b9c;
    local_8c = 0;
    local_88 = DAT_1468b5da0;
    local_7c = 0;
    local_78 = _DAT_1468b5b70;
    uStack_74 = uRam00000001468b5b74;
    uStack_70 = uRam00000001468b5b78;
    uStack_6c = uRam00000001468b5b7c;
    local_68 = _DAT_1468b5b80;
    uStack_64 = uRam00000001468b5b84;
    uStack_60 = uRam00000001468b5b88;
    uStack_5c = uRam00000001468b5b8c;
    local_58 = _DAT_1468b5b90;
    uStack_54 = uRam00000001468b5b94;
    uStack_50 = uRam00000001468b5b98;
    uStack_4c = uRam00000001468b5b9c;
    local_38 = 1;
    local_d8 = FUN_142269f40(*(undefined8 *)(param_1 + 0x60));
    local_d0 = FUN_142c9fd40(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x40));
    local_44 = CONCAT44(fStack_f8,fStack_fc);
    local_3c = fStack_f4;
    local_48 = 1;
    if (((*(longlong *)(param_1 + 0x40) == 0) ||
        (*(char *)(*(longlong *)(param_1 + 0x40) + 0x40) == '\0')) ||
       (lVar2 = USignificanceManager::GetWorld(*(undefined8 *)(param_1 + 0x60)), lVar2 == 0)) {
      local_90 = 1.0;
    }
    else {
      fVar3 = ABS(*(float *)(lVar2 + 0x234));
      if (ABS(*(float *)(lVar2 + 0x234)) <= ABS(*(float *)(lVar2 + 0x230))) {
        fVar3 = ABS(*(float *)(lVar2 + 0x230));
      }
      local_90 = 1.0;
      if (fVar3 <= ABS(*(float *)(lVar2 + 0x238))) {
        fVar3 = ABS(*(float *)(lVar2 + 0x238));
      }
      if (0.0 < fVar3) {
        local_90 = 1.0 / fVar3;
      }
    }
    FUN_142cad7a0(&local_d8);
    return;
  }
  return;
}



// FUNCTION 142fab790 FUN_142fab790 body=292 status=ok
// SIG undefined FUN_142fab790(void)

void FUN_142fab790(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((*(longlong *)(param_1 + 0x60) != 0) && (lVar1 = *(longlong *)(param_1 + 0x68), lVar1 != 0))
      && (*(longlong *)(lVar1 + 0x178) != 0)) && (*(char *)(param_1 + 0x88) != '\0')) {
    if (((*(byte *)(param_1 + 0x38) & 0xfa) != 0) || (*(byte *)(param_1 + 0x38) == 5)) {
      if (*(longlong *)(lVar1 + 0x220) != 0) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x220) + 0x8ac) = 0;
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146b441b0) {
        _Init_thread_header(&DAT_146b441b0);
        if (DAT_146b441b0 == -1) {
          FName::FName(&DAT_146b441a8,L"Navigation",1);
          _Init_thread_footer(&DAT_146b441b0);
        }
      }
      FUN_142cf4a80(*(longlong *)(param_1 + 0x68) + 0x2580,*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x34));
      uVar2 = FUN_142269f40(*(undefined8 *)(param_1 + 0x60));
      FUN_142cad710(uVar2,&DAT_146b441a8);
    }
    FUN_142c7b160(*(longlong *)(param_1 + 0x68) + 0x2110,*(undefined4 *)(param_1 + 0x30),
                  param_2 != '\0',*(undefined1 *)(param_1 + 0x89));
  }
  return;
}



// FUNCTION 142fab8c0 FUN_142fab8c0 body=259 status=ok
// SIG undefined FUN_142fab8c0(void)

void FUN_142fab8c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x364) == '\0')) {
    FUN_142fa9bb0(lVar2);
    iVar1 = *(int *)(lVar2 + 0x270);
    lVar3 = 0;
    *(undefined4 *)(lVar2 + 0x270) = 0;
    if (iVar1 == 3) {
      if (*(longlong *)(lVar2 + 0x6d8) != 0) {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x6d8) + 0x568);
      }
      if (lVar3 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b441f0) &&
           (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
          FName::FName(&DAT_146b441e8,L"IsMoving",1);
          _Init_thread_footer(&DAT_146b441f0);
        }
        UBlackboardComponent::SetValueAsBool(lVar3,&DAT_146b441e8,0);
      }
    }
    if ((iVar1 != 0) && (((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)))) {
      FUN_142facd90(lVar2);
    }
  }
  return;
}



// FUNCTION 142fab9d0 FUN_142fab9d0 body=207 status=ok
// SIG undefined FUN_142fab9d0(void)

void FUN_142fab9d0(longlong param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  
  FUN_142cf65a0();
  if (*(longlong *)(param_1 + 0x27a8) == 0) {
    return;
  }
  if (param_2 != 2) {
    if (*(char *)(param_1 + 0x248) == '\x02') {
      lVar1 = *(longlong *)(param_1 + 0x120);
      if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_1), lVar1 == 0)) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = *(float *)(lVar1 + 0x790);
      }
      if (0.2 < fVar2 - *(float *)(param_1 + 0x2878)) {
        FUN_142fb0a50(param_1);
      }
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x248) == '\x02') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_1), lVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x2878) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2878) = *(undefined4 *)(lVar1 + 0x790);
  return;
}



// FUNCTION 142fabab0 FUN_142fabab0 body=40 status=ok
// SIG undefined FUN_142fabab0(void)

void FUN_142fabab0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_142fabb30(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 142fabae0 FUN_142fabae0 body=65 status=ok
// SIG undefined FUN_142fabae0(void)

void FUN_142fabae0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_3 + 0x30) == 2) && (*(int *)(param_3 + 0x2c) < 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FWeakObjectPtr::Get(*param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_142fabb30(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 142fabb30 FUN_142fabb30 body=577 status=ok
// SIG undefined FUN_142fabb30(void)

void FUN_142fabb30(longlong param_1,char param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 local_e8 [8];
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_18 [16];
  
  cVar2 = FUN_142fa53c0();
  if ((cVar2 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x278) + 0xbc) == 0)) {
    *(undefined1 *)(param_1 + 0x9a9) = 1;
    FUN_142fb3df0(param_1,0);
    goto LAB_142fabbc3;
  }
  FUN_142fb3df0(param_1,3);
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
    if (lVar5 != 0) goto LAB_142fabb8c;
    fVar8 = 0.0;
  }
  else {
LAB_142fabb8c:
    fVar8 = *(float *)(lVar5 + 0x790);
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  *(float *)(param_1 + 0x35c) = fVar8 + *(float *)(param_1 + 0x360);
LAB_142fabbc3:
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x750) != 0)) {
    local_90 = *(undefined8 *)(param_1 + 0x6e8);
    uStack_88 = *(undefined8 *)(param_1 + 0x6f0);
    local_80 = *(undefined8 *)(param_1 + 0x6f8);
    uStack_78 = *(undefined8 *)(param_1 + 0x700);
    local_98 = 0;
    local_28 = 0;
    local_70 = *(undefined8 *)(param_1 + 0x708);
    uStack_68 = *(undefined8 *)(param_1 + 0x710);
    local_30 = *(undefined8 *)(param_1 + 0x6b8);
    local_60 = *(undefined8 *)(param_1 + 0x718);
    uStack_58 = *(undefined8 *)(param_1 + 0x720);
    local_50 = *(undefined8 *)(param_1 + 0x728);
    uStack_48 = *(undefined8 *)(param_1 + 0x730);
    local_40 = *(undefined8 *)(param_1 + 0x738);
    uStack_38 = *(undefined8 *)(param_1 + 0x740);
    local_9c = 0x43fa0000;
    local_e0 = *(float *)(param_1 + 0x78c) - *(float *)(param_1 + 0x6ec);
    local_a8 = *(undefined8 *)(param_1 + 0x784);
    local_a0 = local_e0;
    uVar3 = FUN_142f9b3a0(&local_a8,local_e8,0);
    if ((char)uVar3 != '\0') {
      local_e0 = local_e0 + *(float *)(param_1 + 0x6ec);
      plVar7 = *(longlong **)(param_1 + 0x750);
      lVar5 = plVar7[0x2d];
      if (lVar5 == 0) {
        uVar3 = (undefined4)DAT_1468b5da0;
        uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_d0 = DAT_1468b5da8;
      }
      else {
        local_b8 = *(float *)(lVar5 + 0x210);
        fStack_b4 = *(float *)(lVar5 + 0x214);
        fStack_b0 = *(float *)(lVar5 + 0x218);
        fStack_ac = *(float *)(lVar5 + 0x21c);
        auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_b4);
        auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_b8);
        auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_b0);
        auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_ac);
        iVar4 = movmskps(uVar3,auVar1);
        if (iVar4 != 0) {
          *(float *)(lVar5 + 0x250) = local_b8;
          *(float *)(lVar5 + 0x254) = fStack_b4;
          *(float *)(lVar5 + 600) = fStack_b0;
          *(float *)(lVar5 + 0x25c) = fStack_ac;
          puVar6 = (undefined8 *)FQuat::Rotator(&local_b8,local_18);
          *(undefined8 *)(lVar5 + 0x260) = *puVar6;
          *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar6 + 1);
          plVar7 = *(longlong **)(param_1 + 0x750);
        }
        uVar3 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
        uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
        local_d0 = *(undefined4 *)(lVar5 + 0x268);
      }
      local_d8 = CONCAT44(uVar9,uVar3);
      local_cc = local_d8;
      local_c4 = local_d0;
      (**(code **)(*plVar7 + 0x500))(uVar3,local_e8,&local_cc,0,0);
    }
  }
  return;
}



// FUNCTION 142fabd90 FUN_142fabd90 body=38 status=ok
// SIG undefined FUN_142fabd90(void)

void FUN_142fabd90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(*param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_142fabe70(lVar1);
    return;
  }
  return;
}



// FUNCTION 142fabdc0 FUN_142fabdc0 body=169 status=ok
// SIG undefined FUN_142fabdc0(void)

void FUN_142fabdc0(longlong *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  ulonglong local_res8;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_142fabe70(lVar2);
  }
  fVar1 = param_3[8];
  if (fVar1 == -NAN) {
    local_res8 = 0xffffffffffffffff;
  }
  else {
    local_res8 = CONCAT44(fVar1,(uint)fVar1 >> 0x16) & 0x3fffffffffffff;
  }
  fVar1 = param_3[2];
  lVar2 = *param_1;
  *(ulonglong *)(lVar2 + 4) = CONCAT44(param_3[1] * 100.0,*param_3 * 100.0);
  *(float *)(lVar2 + 0xc) = fVar1 * 100.0;
  *(ulonglong *)(lVar2 + 0x10) = local_res8;
  return;
}



// FUNCTION 142fabe70 FUN_142fabe70 body=253 status=ok
// SIG undefined FUN_142fabe70(void)

void FUN_142fabe70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x270) = 3;
  if (iVar1 != 3) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x568);
    }
    if (lVar2 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b441f0) &&
         (_Init_thread_header(&DAT_146b441f0), DAT_146b441f0 == -1)) {
        FName::FName(&DAT_146b441e8,L"IsMoving",1);
        _Init_thread_footer(&DAT_146b441f0);
      }
      UBlackboardComponent::SetValueAsBool(lVar2,&DAT_146b441e8,1);
    }
  }
  if (iVar1 == 0) {
    FUN_142fa50c0(param_1);
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_142facd60(param_1);
    return;
  }
  FUN_142fa4f90(param_1);
  FUN_142facd60(param_1);
  return;
}



// FUNCTION 142fabf70 FUN_142fabf70 body=77 status=ok
// SIG undefined FUN_142fabf70(void)

void FUN_142fabf70(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)FUN_1407ffb90(param_2);
  if ((*piVar1 == 0) && (piVar1[1] == 2)) {
    lVar2 = FWeakObjectPtr::Get(*param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_142fabe70(lVar2);
      return;
    }
    return;
  }
  FUN_142fabfc0(*param_1);
  return;
}



// FUNCTION 142fabfc0 FUN_142fabfc0 body=132 status=ok
// SIG undefined FUN_142fabfc0(void)

void FUN_142fabfc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_142fa53c0(lVar2);
  if ((cVar1 != '\0') && (*(int *)(*(longlong *)(lVar2 + 0x278) + 0xbc) != 0)) {
    if (*(longlong *)(lVar2 + 0x490) == 0) {
      if (*(longlong *)(lVar2 + 0x4a0) == 0) goto LAB_142fac02f;
      lVar3 = FUN_1407ffb90();
    }
    else {
      lVar3 = UDynamicEntryBox::GetAllEntries();
    }
    if (*(int *)(lVar3 + 4) == 2) {
      FUN_142fabe70(lVar2);
      return;
    }
  }
LAB_142fac02f:
  FUN_142fabb30(lVar2,0);
  return;
}



// FUNCTION 142fac090 FUN_142fac090 body=475 status=ok
// SIG undefined FUN_142fac090(void)

void FUN_142fac090(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_142343b00();
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142fac0e3;
  }
  lVar7 = 0;
LAB_142fac0e3:
  *(longlong *)(param_1 + 0x6d8) = lVar7;
  if (lVar7 != 0) {
    plVar6 = (longlong *)(lVar7 + 0x4d8);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = 0x42fac060;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = *(int *)(lVar7 + 0x4e0);
      *(int *)(lVar7 + 0x4e0) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x4e4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar5 = plVar4;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    lVar7 = *(longlong *)(param_1 + 0x6d8);
    plVar4 = (longlong *)(lVar7 + 0x4f0);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x42fac4c0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar3;
      *plVar6 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar1 = *(int *)(lVar7 + 0x4f8);
      *(int *)(lVar7 + 0x4f8) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x4fc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
      *puVar5 = plVar6;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 142fac270 FUN_142fac270 body=144 status=ok
// SIG undefined FUN_142fac270(void)

void FUN_142fac270(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_142343b00();
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    cVar2 = UWorld::IsGameWorld(lVar3);
    if ((((cVar2 != '\0') && (lVar1 != 0)) && ((*(uint *)(lVar1 + 8) >> 0x13 & 1) == 0)) &&
       ((*(char *)(param_1 + 0x180) == '\x02' && (*(char *)(param_1 + 0x208) == '\0')))) {
      *(undefined1 *)(param_1 + 0x180) = 1;
    }
  }
  FUN_142f98850(param_1);
  FUN_142f9cc50(param_1);
  FUN_142fbb0d0(param_1);
  FUN_142faf040(param_1);
  return;
}



// FUNCTION 142fac300 FUN_142fac300 body=27 status=ok
// SIG undefined FUN_142fac300(void)

void FUN_142fac300(undefined8 param_1)

{
  FUN_1423937b0();
  FUN_142fa75c0(param_1);
  return;
}



// FUNCTION 142fac320 FUN_142fac320 body=101 status=ok
// SIG undefined FUN_142fac320(void)

void FUN_142fac320(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1423937b0();
  lVar1 = *(longlong *)(param_1 + 0x788);
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x230);
    uVar3 = *(undefined4 *)(param_1 + 0x234);
    uVar4 = *(undefined4 *)(param_1 + 0x238);
    *(undefined1 *)(lVar1 + 0x60) = 1;
    *(undefined4 *)(lVar1 + 0x40) = uVar2;
    *(undefined4 *)(lVar1 + 0x44) = uVar3;
    *(undefined4 *)(lVar1 + 0x48) = uVar4;
    FUN_142fa6a10(*(undefined8 *)(param_1 + 0x788),param_1);
    return;
  }
  return;
}



// FUNCTION 142fac390 FUN_142fac390 body=118 status=ok
// SIG undefined FUN_142fac390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fac390(longlong param_1)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x290) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x290) + 0x168);
    if (lVar1 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(undefined4 *)(lVar1 + 0x228);
    }
    *(undefined8 *)(param_1 + 0x2a8) = local_18;
    *(undefined4 *)(param_1 + 0x2b0) = local_10;
  }
  return;
}



// FUNCTION 142fac410 FUN_142fac410 body=129 status=ok
// SIG undefined FUN_142fac410(void)

void FUN_142fac410(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = *(undefined4 *)(param_2 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_20 = *(undefined4 *)(param_2 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_18 = *(undefined4 *)(param_2 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_10 = *(undefined4 *)(param_2 + 5);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x2c);
  FUN_142cf6c10(local_18,&local_38);
  lVar1 = param_2[5];
  *(undefined1 *)(param_1 + 0x279c) = 0;
  *(undefined1 *)(param_1 + 0x287c) = 0;
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x279c) = *(undefined1 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x27a0) = *(undefined8 *)(lVar1 + 0x74);
    *(undefined1 *)(param_1 + 0x287c) = *(undefined1 *)(lVar1 + 0x7c);
    *(undefined4 *)(param_1 + 0x2880) = *(undefined4 *)(lVar1 + 0x80);
  }
  return;
}



// FUNCTION 142fac4a0 FUN_142fac4a0 body=27 status=ok
// SIG undefined FUN_142fac4a0(void)

void FUN_142fac4a0(undefined8 param_1)

{
  FUN_142cf7150();
  FUN_142fb0a50(param_1);
  return;
}



// FUNCTION 142fac4e0 FUN_142fac4e0 body=32 status=ok
// SIG undefined FUN_142fac4e0(void)

void FUN_142fac4e0(longlong *param_1)

{
  FUN_142344780();
                    /* WARNING: Could not recover jumptable at 0x000142fac4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x488))(param_1);
  return;
}



// FUNCTION 142fac500 FUN_142fac500 body=55 status=ok
// SIG undefined FUN_142fac500(void)

void FUN_142fac500(longlong *param_1)

{
  FUN_142393f60();
  (**(code **)(*param_1 + 0x8f0))(param_1);
  (**(code **)(*param_1 + 0x928))(param_1);
  param_1[0xe1] = 0;
  return;
}



// FUNCTION 142fac540 FUN_142fac540 body=42 status=ok
// SIG undefined FUN_142fac540(void)

void FUN_142fac540(longlong param_1)

{
  FUN_142393f60();
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FUN_142f97a90();
    return;
  }
  return;
}



// FUNCTION 142fac570 FUN_142fac570 body=96 status=ok
// SIG undefined FUN_142fac570(void)

void FUN_142fac570(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_res8 [4];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar2 = *(longlong *)(param_1 + 0x120);
  if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x708) != 0) && (cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0'))
  {
    local_res8[0] = param_1;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>
              (*(longlong *)(param_1 + 0x708) + 0x8d8,local_res8);
  }
  return;
}



// FUNCTION 142fac5d0 FUN_142fac5d0 body=220 status=ok
// SIG undefined FUN_142fac5d0(void)

void FUN_142fac5d0(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_18 [2];
  
  if ((undefined8 *)(param_1 + 0x7c0) != local_18) {
    *(undefined8 *)(param_1 + 0x7c0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x7c8);
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    if (plVar3 != (longlong *)0x0) {
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
  if (param_2 == '\x01') {
    cVar4 = *(char *)(param_1 + 0x870);
    if (cVar4 == '\x01') {
      uVar5 = *(undefined8 *)(param_1 + 0x880);
      lVar7 = param_1 + 0x858;
      *(undefined1 *)(param_1 + 0x870) = 2;
      lVar6 = param_1 + 0x84c;
    }
    else {
      if (cVar4 != '\x02') {
        if (cVar4 == '\x03') {
          *(undefined1 *)(param_1 + 0x870) = 0;
        }
        goto LAB_142fac68e;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x888);
      lVar7 = param_1 + 0x864;
      *(undefined1 *)(param_1 + 0x870) = 3;
      lVar6 = param_1 + 0x858;
    }
    cVar4 = FUN_142facf40(param_1 + 0x790,uVar5,lVar6,lVar7);
    if (cVar4 != '\0') {
      return;
    }
  }
LAB_142fac68e:
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x7a8);
  }
  return;
}



// FUNCTION 142fac6b0 FUN_142fac6b0 body=162 status=ok
// SIG undefined FUN_142fac6b0(void)

void FUN_142fac6b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  uVar2 = FWeakObjectPtr::Get(*param_1 + 0x18);
  puVar3 = (undefined8 *)FUN_142f89860(local_28,param_3,uVar2);
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x928);
    iVar5 = iVar1 + 1;
    *(int *)(lVar4 + 0x928) = iVar5;
    if (*(int *)(lVar4 + 0x92c) < iVar5) {
      TArray<FGridBlendSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(lVar4 + 0x8b0);
    }
    uVar2 = puVar3[1];
    lVar6 = *(longlong *)(lVar4 + 0x920);
    if (*(longlong *)(lVar4 + 0x920) == 0) {
      lVar6 = lVar4 + 0x8b0;
    }
    lVar4 = (longlong)iVar1 * 0x1c;
    *(undefined8 *)(lVar6 + lVar4) = *puVar3;
    ((undefined8 *)(lVar6 + lVar4))[1] = uVar2;
    *(undefined8 *)(lVar6 + 0x10 + lVar4) = puVar3[2];
    *(undefined4 *)(lVar6 + 0x18 + lVar4) = *(undefined4 *)(puVar3 + 3);
  }
  return;
}



// FUNCTION 142fac760 FUN_142fac760 body=294 status=ok
// SIG undefined FUN_142fac760(void)

undefined1 FUN_142fac760(longlong *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float local_18;
  
  cVar1 = FUN_142fa8b90();
  if (((cVar1 != '\0') && ((char)param_1[0xf0] == '\0')) &&
     (cVar1 = FUN_142fbc510(param_1), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x410))(param_1);
  if ((cVar1 != '\0') && (0.0 < *(float *)(param_1 + 0xde))) {
    fVar3 = (float)((ulonglong)param_1[0x90] >> 0x20);
    local_18 = (float)param_1[0x90];
    if (((local_18 != (float)DAT_14676e1b0) ||
        ((fVar3 != DAT_14676e1b0._4_4_ || (*(float *)(param_1 + 0x91) != DAT_14676e1b8)))) &&
       (local_18 = (float)*(undefined8 *)((longlong)param_1 + 0x784) - local_18,
       fVar3 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x784) >> 0x20) - fVar3,
       fVar2 = (*(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec)) -
               *(float *)(param_1 + 0x91),
       SQRT(fVar3 * fVar3 + local_18 * local_18 + fVar2 * fVar2) *
       (1.0 / *(float *)(param_1 + 0xde)) < *(float *)(param_1 + 0x154))) {
      return 1;
    }
  }
  cVar1 = FUN_1407c3030(param_1 + 0x2f);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 142fac890 FUN_142fac890 body=500 status=ok
// SIG undefined FUN_142fac890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fac890(longlong param_1)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x2040) = 1;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xff7fffff;
  if (*(longlong *)(param_1 + 0x60) == 0) goto LAB_142fac99d;
  uVar3 = USignificanceManager::GetWorld();
  local_58 = 0;
  FUN_142c81650(param_1 + 0x48,&local_58,uVar3);
  lVar5 = local_58;
  if (local_58 == 0) {
LAB_142fac93c:
    lVar5 = 0;
  }
  else {
    lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142fac93c;
  }
  *(longlong *)(param_1 + 0x70) = lVar5;
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 200);
    lVar5 = lVar6 + (longlong)*(int *)(lVar5 + 0xd0) * 0x18;
    if (lVar6 != lVar5) {
      fVar11 = *(float *)(param_1 + 0x78);
      fVar10 = *(float *)(param_1 + 0x7c);
      do {
        fVar1 = *(float *)(lVar6 + 8);
        fVar9 = fVar1;
        if (fVar1 < fVar11) {
          *(float *)(param_1 + 0x78) = fVar1;
          fVar9 = *(float *)(lVar6 + 8);
          fVar11 = fVar1;
        }
        if (fVar10 < fVar9) {
          *(float *)(param_1 + 0x7c) = fVar9;
          fVar10 = fVar9;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != lVar5);
    }
  }
LAB_142fac99d:
  if ((*(char *)(param_1 + 0x38) == '\x05') && (*(longlong *)(param_1 + 0x70) != 0)) {
    local_58 = 0;
    local_50 = 0;
    FUN_1422acfa0(*(longlong *)(param_1 + 0x70),&DAT_1468b5d90,&local_58);
    if ((0 < (int)local_50) && (*(longlong *)(local_58 + 8) != 0)) {
      lVar5 = FUN_142291ab0(*(longlong *)(local_58 + 8),local_48,0,0x7f7fffff);
      *(float *)(param_1 + 0x8c) =
           SQRT(*(float *)(lVar5 + 0x14) * *(float *)(lVar5 + 0x14) +
                *(float *)(lVar5 + 0x10) * *(float *)(lVar5 + 0x10));
    }
    if ((int)local_50 != 0) {
      plVar8 = (longlong *)(local_58 + 0x30);
      iVar7 = (int)local_50;
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 8;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  FUN_142f90530(param_1);
  return;
}



// FUNCTION 142faca90 FUN_142faca90 body=708 status=ok
// SIG undefined FUN_142faca90(void)

ulonglong FUN_142faca90(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar3 = FUN_142fa53c0();
  if (((char)uVar3 != '\0') &&
     (uVar3 = FUN_142fa8a90(*(longlong *)(param_1 + 0x278) + 0x20), (char)uVar3 != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    fVar1 = *(float *)(param_1 + 0x78c);
    uVar3 = (ulonglong)(uint)fVar1;
    fVar4 = ABS((fVar1 - *(float *)(param_1 + 0x6ec)) - *(float *)(lVar2 + 0x28));
    if (fVar4 < *(float *)(lVar2 + 0x4c) || fVar4 == *(float *)(lVar2 + 0x4c)) {
      fVar11 = *(float *)(lVar2 + 0x20) - *(float *)(param_1 + 0x2ec);
      fVar12 = *(float *)(lVar2 + 0x24) - *(float *)(param_1 + 0x2f0);
      fVar14 = *(float *)(lVar2 + 0x28) - *(float *)(param_1 + 0x2f4);
      fVar5 = fVar12 * fVar12 + fVar11 * fVar11 + fVar14 * fVar14;
      fVar4 = fVar11;
      fVar13 = fVar12;
      fVar6 = fVar14;
      if ((fVar5 != 1.0) &&
         (fVar4 = DAT_1468b5d90, fVar13 = DAT_1468b5d94, fVar6 = DAT_1468b5d98, 1e-08 <= fVar5)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar4 = fVar11 * fVar6;
        fVar13 = fVar12 * fVar6;
        fVar6 = fVar14 * fVar6;
      }
      fVar10 = (float)*(undefined8 *)(param_1 + 0x784) - *(float *)(lVar2 + 0x20);
      fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x784) >> 0x20) -
              *(float *)(lVar2 + 0x24);
      fVar9 = (fVar1 - *(float *)(param_1 + 0x6ec)) - *(float *)(lVar2 + 0x28);
      fVar14 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
      fVar5 = fVar8;
      fVar11 = fVar9;
      fVar12 = fVar10;
      if ((fVar14 != 1.0) &&
         (fVar5 = DAT_1468b5d94, fVar11 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, 1e-08 <= fVar14)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar12 = auVar7._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar14 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar14 * 0.5 * fVar12 * fVar12);
        fVar5 = fVar8 * fVar12;
        fVar11 = fVar9 * fVar12;
        fVar12 = fVar10 * fVar12;
      }
      return (ulonglong)
             CONCAT31((int3)((uint)fVar1 >> 8),
                      0.1 < fVar5 * fVar13 + fVar12 * fVar4 + fVar11 * fVar6);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142facd60 FUN_142facd60 body=39 status=ok
// SIG undefined FUN_142facd60(void)

void FUN_142facd60(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined1 *)(param_1 + 0x358) = 0;
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x228,param_1);
  return;
}



// FUNCTION 142facd90 FUN_142facd90 body=418 status=ok
// SIG undefined FUN_142facd90(void)

void FUN_142facd90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong local_18;
  longlong *local_10;
  
  cVar5 = FUN_142fa53c0();
  if ((cVar5 == '\0') || (*(char *)(param_1[0x4f] + 0xba) == '\0')) {
    (**(code **)(*param_1 + 0x438))(param_1,0);
  }
  else {
    CAkSrcMediaCodecVorbis::ReleaseBuffer((longlong)param_1 + 0x374);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b44210) && (_Init_thread_header(&DAT_146b44210), DAT_146b44210 == -1))
  {
    FName::FName(&DAT_146b44208,L"NavGoal",1);
    _Init_thread_footer(&DAT_146b44210);
  }
  lVar6 = 0;
  if (param_1[0xdb] != 0) {
    lVar6 = *(longlong *)(param_1[0xdb] + 0x568);
  }
  if (lVar6 != 0) {
    FUN_142bb5c30(lVar6,&DAT_146b44208);
  }
  FUN_142f97c10(param_1 + 0x86);
  local_10 = (longlong *)0x0;
  if (param_1 + 0x4f != &local_18) {
    param_1[0x4f] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x125) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x92c)) {
    FUN_1422b26f0(param_1 + 0x116,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x2fc) = DAT_146690efc;
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x48,param_1);
  return;
}



// FUNCTION 142facf40 FUN_142facf40 body=2991 status=ok
// SIG undefined FUN_142facf40(void)

ulonglong FUN_142facf40(longlong param_1,ulonglong param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_428 [8];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  void *local_408;
  int local_400;
  int local_3fc;
  undefined1 local_3f8;
  undefined1 local_3f7;
  undefined4 local_3f4;
  byte local_3f0;
  undefined1 local_3e8 [24];
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [24];
  undefined1 local_388;
  undefined4 local_384;
  undefined1 local_380;
  undefined4 local_37c;
  undefined8 local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined **local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  void *local_320;
  int local_318;
  undefined4 local_314;
  undefined1 local_310;
  undefined1 local_30f;
  undefined4 local_30c;
  byte local_308;
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0;
  undefined4 local_29c;
  undefined1 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 local_288;
  longlong local_280;
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  longlong *local_268;
  longlong *local_260;
  undefined1 local_250 [56];
  undefined1 local_218 [56];
  undefined1 local_1e0 [56];
  undefined1 local_1a8 [56];
  undefined1 local_170 [56];
  undefined1 local_138 [56];
  undefined1 local_100 [56];
  undefined1 local_c8 [56];
  undefined1 local_90 [104];
  
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar15 + 0x38) < DAT_146b44290) &&
     (_Init_thread_header(&DAT_146b44290), DAT_146b44290 == -1)) {
    FName::FName(&DAT_146b44288,L"EntryX",1);
    _Init_thread_footer(&DAT_146b44290);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b442a0) &&
     (_Init_thread_header(&DAT_146b442a0), DAT_146b442a0 == -1)) {
    FName::FName(&DAT_146b44298,L"EntryY",1);
    _Init_thread_footer(&DAT_146b442a0);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b442b0) &&
     (_Init_thread_header(&DAT_146b442b0), DAT_146b442b0 == -1)) {
    FName::FName(&DAT_146b442a8,L"EntryZ",1);
    _Init_thread_footer(&DAT_146b442b0);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b442c0) &&
     (_Init_thread_header(&DAT_146b442c0), DAT_146b442c0 == -1)) {
    FName::FName(&DAT_146b442b8,L"ExitX",1);
    _Init_thread_footer(&DAT_146b442c0);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b442d0) &&
     (_Init_thread_header(&DAT_146b442d0), DAT_146b442d0 == -1)) {
    FName::FName(&DAT_146b442c8,L"ExitY",1);
    _Init_thread_footer(&DAT_146b442d0);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b442e0) &&
     (_Init_thread_header(&DAT_146b442e0), DAT_146b442e0 == -1)) {
    FName::FName(&DAT_146b442d8,L"ExitZ",1);
    _Init_thread_footer(&DAT_146b442e0);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b442f0) &&
     (_Init_thread_header(&DAT_146b442f0), DAT_146b442f0 == -1)) {
    FName::FName(&DAT_146b442e8,L"HitDirectionX",1);
    _Init_thread_footer(&DAT_146b442f0);
  }
  if ((*(int *)(lVar15 + 0x38) < DAT_146b44300) &&
     (_Init_thread_header(&DAT_146b44300), DAT_146b44300 == -1)) {
    FName::FName(&DAT_146b442f8,L"HitDirectionY",1);
    _Init_thread_footer(&DAT_146b44300);
  }
  uVar10 = (ulonglong)*(uint *)(lVar15 + 0x38);
  if (((int)*(uint *)(lVar15 + 0x38) < DAT_146b44310) &&
     (uVar10 = _Init_thread_header(&DAT_146b44310), DAT_146b44310 == -1)) {
    FName::FName(&DAT_146b44308,L"HitDirectionZ",1);
    uVar10 = _Init_thread_footer(&DAT_146b44310);
  }
  if (param_2 != 0) {
    uVar10 = FUN_142e20fc0();
    uVar13 = param_2;
    do {
      if (uVar13 == uVar10) {
        if ((((*(longlong *)(param_1 + 0x108) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) &&
            (*(longlong *)(param_1 + 0x110) != 0)) && (*(longlong *)(param_1 + 0x118) != 0)) {
          FUN_142c62180(local_428);
          local_3f7 = 1;
          puVar11 = (undefined8 *)FUN_142c62590(local_250,&DAT_146b44288,*param_3);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_218,&DAT_146b44298,param_3[1]);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_1e0,&DAT_146b442a8,param_3[2]);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_1a8,&DAT_146b442b8,*param_4);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_170,&DAT_146b442c8,param_4[1]);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_138,&DAT_146b442d8,param_4[2]);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar5 = puVar11[5];
          puVar2 = (undefined8 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar2 = puVar11[4];
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          fVar21 = *param_4 - *param_3;
          fVar23 = param_4[1] - param_3[1];
          fVar25 = param_4[2] - param_3[2];
          fVar18 = fVar23 * fVar23 + fVar21 * fVar21 + fVar25 * fVar25;
          fVar22 = fVar21;
          fVar24 = fVar23;
          fVar19 = fVar25;
          if ((fVar18 != 1.0) &&
             (fVar22 = DAT_1468b5d90, fVar24 = DAT_1468b5d94, fVar19 = DAT_1468b5d98,
             1e-08 <= fVar18)) {
            auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
            fVar19 = auVar20._0_4_;
            fVar19 = fVar19 + fVar19 * (0.5 - fVar18 * 0.5 * fVar19 * fVar19);
            fVar19 = fVar19 + fVar19 * (0.5 - fVar18 * 0.5 * fVar19 * fVar19);
            fVar22 = fVar21 * fVar19;
            fVar24 = fVar23 * fVar19;
            fVar19 = fVar25 * fVar19;
          }
          puVar11 = (undefined8 *)FUN_142c62590(local_100,&DAT_146b442e8,fVar22);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_c8,&DAT_146b442f8,fVar24);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          puVar11 = (undefined8 *)FUN_142c62590(local_90,&DAT_146b44308,fVar19);
          iVar9 = local_400;
          lVar15 = (longlong)local_400;
          local_400 = local_400 + 1;
          if (local_3fc < local_400) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_408,iVar9);
          }
          uVar5 = puVar11[1];
          lVar15 = lVar15 * 0x38;
          local_340 = &PTR_FUN_143ff6170;
          *(undefined8 *)(lVar15 + (longlong)local_408) = *puVar11;
          ((undefined8 *)(lVar15 + (longlong)local_408))[1] = uVar5;
          uVar5 = puVar11[3];
          puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)local_408);
          *puVar2 = puVar11[2];
          puVar2[1] = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar11 + 0x24);
          uVar7 = *(undefined4 *)(puVar11 + 5);
          uVar8 = *(undefined4 *)((longlong)puVar11 + 0x2c);
          puVar3 = (undefined4 *)(lVar15 + 0x20 + (longlong)local_408);
          *puVar3 = *(undefined4 *)(puVar11 + 4);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          plVar16 = (longlong *)0x0;
          *(undefined8 *)(lVar15 + 0x30 + (longlong)local_408) = puVar11[6];
          lVar15 = (longlong)local_400;
          local_338 = local_420;
          local_330 = local_418;
          local_328 = local_410;
          local_320 = (void *)0x0;
          local_318 = local_400;
          if (local_400 == 0) {
            local_314 = 0;
          }
          else {
            TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
                      (&local_320,local_400,0);
            _guard_xfg_dispatch_icall_nop(local_320,local_408,lVar15 * 0x38);
          }
          local_310 = local_3f8;
          local_30f = local_3f7;
          local_30c = local_3f4;
          local_308 = local_308 ^ (local_308 ^ local_3f0) & 7;
          FUN_1405e0d90(local_300,local_3e8);
          FUN_1405e0d90(local_2e8,local_3d0);
          FUN_1405e0d90(local_2d0,local_3b8);
          FUN_1405e0d90(local_2b8,local_3a0);
          local_2a0 = local_388;
          local_29c = local_384;
          local_298 = local_380;
          local_290 = local_378;
          local_288 = local_370;
          local_294 = local_37c;
          local_280 = local_368;
          if (local_368 != 0) {
            LOCK();
            *(int *)(local_368 + 0xc) = *(int *)(local_368 + 0xc) + 1;
            UNLOCK();
          }
          puVar11 = (undefined8 *)
                    FUN_142c7bb40(*(undefined8 *)(param_1 + 0x110),local_270,param_2,&local_340,0);
          *(undefined8 *)(param_1 + 0x30) = *puVar11;
          plVar4 = (longlong *)puVar11[1];
          plVar14 = *(longlong **)(param_1 + 0x38);
          if (plVar4 != plVar14) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
              UNLOCK();
              plVar14 = *(longlong **)(param_1 + 0x38);
            }
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
            *(longlong **)(param_1 + 0x38) = plVar4;
          }
          if (local_268 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_268 + 1;
            lVar15 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_268)(local_268);
              LOCK();
              piVar1 = (int *)((longlong)local_268 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_268 + 8))(local_268,1);
              }
            }
          }
          if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 8);
            LOCK();
            iVar9 = *piVar1;
            if (iVar9 == 0) {
              *piVar1 = 0;
              iVar9 = 0;
            }
            UNLOCK();
            if (0 < iVar9) {
              plVar4 = *(longlong **)(param_1 + 0x38);
              local_350 = FUN_142fac5d0;
              uStack_348 = 0;
              plVar14 = plVar4;
              if (plVar4 == (longlong *)0x0) goto LAB_142fad793;
              LOCK();
              iVar9 = (int)plVar4[1];
              bVar17 = iVar9 == 0;
              if (bVar17) {
                *(int *)(plVar4 + 1) = 0;
                iVar9 = 0;
              }
              UNLOCK();
              goto joined_r0x000142fad770;
            }
          }
          FUN_142c63c50(local_428);
          return 0;
        }
        break;
      }
      uVar13 = *(ulonglong *)(uVar13 + 0x30);
    } while (uVar13 != 0);
  }
  return uVar10 & 0xffffffffffffff00;
joined_r0x000142fad770:
  plVar14 = plVar16;
  if (bVar17) {
LAB_142fad793:
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    plVar4 = plVar16 + 0xb;
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    local_260 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar12 + 1,uVar5);
      *(undefined4 *)(plVar12 + 2) = (undefined4)local_350;
      *(undefined4 *)((longlong)plVar12 + 0x14) = local_350._4_4_;
      *(undefined4 *)(plVar12 + 3) = uStack_348;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_344;
      lVar15 = FDelegateHandle::GenerateNewID();
      plVar12[5] = lVar15;
      *plVar12 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
      (**(code **)(*plVar12 + 0x20))(plVar12,local_278);
      iVar9 = (int)plVar16[0xc];
      *(int *)(plVar16 + 0xc) = iVar9 + 1;
      if (*(int *)((longlong)plVar16 + 100) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar9);
      }
      puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar4);
      *puVar11 = plVar12;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar14 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    FUN_142c63c50(local_428);
    return 1;
  }
  LOCK();
  bVar17 = iVar9 == (int)plVar4[1];
  if (bVar17) {
    *(int *)(plVar4 + 1) = iVar9 + 1;
  }
  UNLOCK();
  if (bVar17) {
    plVar14 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar16 = *(longlong **)(param_1 + 0x30);
    }
    goto LAB_142fad793;
  }
  LOCK();
  iVar9 = (int)plVar4[1];
  bVar17 = iVar9 == 0;
  if (bVar17) {
    *(int *)(plVar4 + 1) = 0;
    iVar9 = 0;
  }
  UNLOCK();
  goto joined_r0x000142fad770;
}



// FUNCTION 142fadaf0 FUN_142fadaf0 body=42 status=ok
// SIG undefined FUN_142fadaf0(void)

void FUN_142fadaf0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_142fa6430(param_1 + 0xa28,param_1);
  FUN_142fa7760(param_1);
  return;
}



// FUNCTION 142fadb30 FUN_142fadb30 body=27 status=ok
// SIG undefined FUN_142fadb30(void)

void FUN_142fadb30(undefined8 param_1)

{
  FUN_142b937f0();
  FUN_142fa7760(param_1);
  return;
}



// FUNCTION 142fadb50 FUN_142fadb50 body=66 status=ok
// SIG undefined FUN_142fadb50(void)

void FUN_142fadb50(longlong param_1)

{
  FUN_142b93e80();
  FUN_142fa6430(param_1 + 0xa28,param_1);
  FUN_142fbaa90(param_1 + 0x720);
  FUN_142fba0b0(param_1 + 0x738);
  FUN_142fa7760(param_1);
  return;
}



// FUNCTION 142fadba0 FUN_142fadba0 body=47 status=ok
// SIG undefined FUN_142fadba0(void)

void FUN_142fadba0(longlong param_1)

{
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 142fadbd0 FUN_142fadbd0 body=144 status=ok
// SIG undefined FUN_142fadbd0(void)

void FUN_142fadbd0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  UObject::PostLoad();
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  puVar1 = puVar6 + (longlong)*(int *)(param_1 + 0x38) * 3;
  if (puVar6 != puVar1) {
    plVar5 = puVar6 + 2;
    do {
      if (*plVar5 != 0) {
        lVar3 = UAITask::GetPrivateStaticClass();
        for (lVar2 = *plVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar3) {
            uVar4 = FUN_142fa27a0(*plVar5);
            *puVar6 = uVar4;
            *plVar5 = 0;
            break;
          }
        }
      }
      puVar6 = puVar6 + 3;
      plVar5 = plVar5 + 3;
    } while (puVar6 != puVar1);
  }
  return;
}



// FUNCTION 142fadc60 FUN_142fadc60 body=50 status=ok
// SIG undefined FUN_142fadc60(void)

void FUN_142fadc60(longlong param_1)

{
  FUN_142cfb510();
  if (*(longlong *)(param_1 + 10000) != 0) {
    *(longlong *)(param_1 + 0x2720) = *(longlong *)(param_1 + 10000);
    *(undefined8 *)(param_1 + 10000) = 0;
  }
  return;
}



// FUNCTION 142fadca0 FUN_142fadca0 body=38 status=ok
// SIG undefined FUN_142fadca0(void)

void FUN_142fadca0(longlong param_1)

{
  FUN_142349c80();
  FUN_142faa3e0(param_1 + 0x178,param_1 + 0x230);
  return;
}



// FUNCTION 142fadcd0 FUN_142fadcd0 body=146 status=ok
// SIG undefined FUN_142fadcd0(void)

void FUN_142fadcd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  UObject::PostLoad();
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x20 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    FUN_142faa3e0(lVar1,lVar1 + 0x18);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = (longlong)*(int *)(param_1 + 0x48) * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_142faa3e0(lVar1,lVar1 + 0x20);
    FUN_142faa3e0(lVar1 + 8,lVar1 + 0x28);
  }
  return;
}



// FUNCTION 142fadd70 FUN_142fadd70 body=46 status=ok
// SIG undefined FUN_142fadd70(void)

void FUN_142fadd70(longlong param_1)

{
  FUN_1423945d0();
  FUN_142faa3e0(param_1 + 0x740,param_1 + 0x7e0);
  FUN_142f8ea00(param_1);
  return;
}



// FUNCTION 142fadda0 FUN_142fadda0 body=84 status=ok
// SIG undefined FUN_142fadda0(void)

void FUN_142fadda0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x24];
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142f9cfb0(lVar1,0);
  param_1[0xe1] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x920))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142fadde7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8e8))(param_1);
    return;
  }
  return;
}



// FUNCTION 142fade00 FUN_142fade00 body=1491 status=ok
// SIG undefined FUN_142fade00(void)

void FUN_142fade00(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 local_res8 [8];
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  if ((param_2 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_2 + 0x668))(param_2), lVar3 == 0)
     ) {
LAB_142fade6b:
    lVar3 = 0;
  }
  else {
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
    if (!bVar1) goto LAB_142fade6b;
    lVar3 = *(longlong *)(lVar3 + 0x568);
  }
  lVar4 = param_1[0x51];
  plVar6 = (longlong *)0x0;
  if (lVar4 == 0) {
LAB_142fadea7:
    lVar4 = 0;
  }
  else {
    uVar5 = FUN_142fc5d60();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_142fadea7;
    lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  cVar2 = (char)param_1[0x50];
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (lVar3 == 0) {
        return;
      }
      cVar2 = FUN_142bbf240(lVar3,&DAT_146b44010);
      if (cVar2 != '\x01') {
        return;
      }
      *(undefined1 *)(param_1 + 0x50) = 2;
    }
    else if (cVar2 == '\x02') {
      if (*(float *)((longlong)param_1 + 700) <= *(float *)(param_1 + 0x53) &&
          *(float *)(param_1 + 0x53) != *(float *)((longlong)param_1 + 700)) {
        return;
      }
      *(undefined1 *)(param_1 + 0x50) = 3;
    }
    else {
      if (cVar2 != '\x03') {
        return;
      }
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      fVar11 = (float)(**(code **)(*plVar6 + 0x28))(plVar6);
      if (fVar11 <= 0.0) {
        return;
      }
      local_68 = *(undefined8 *)((longlong)param_1 + 0x2b4);
      local_60 = *(float *)((longlong)param_1 + 700);
      if (lVar4 == 0) {
        return;
      }
      uVar5 = FUN_1423ac1f0(lVar4,&local_68);
      fVar12 = (float)FUN_1423ae500(lVar4,uVar5);
      fVar13 = (float)FUN_1423b1370(lVar4);
      fVar11 = fVar13 - fVar11;
      if (0.0 <= fVar11) {
        if (fVar13 <= fVar11) {
          fVar11 = fVar13;
        }
      }
      else {
        fVar11 = 0.0;
      }
      if (fVar12 < fVar11) {
        return;
      }
      lVar3 = param_1[0x23];
      puVar10 = (undefined8 *)FName::FName(local_res8,L"ExitFX",1);
      lVar3 = UObject::FindFunction(lVar3,*puVar10);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x8c) == '\0')) {
        (**(code **)(*(longlong *)param_1[0x23] + 0x208))((longlong *)param_1[0x23],lVar3,0);
      }
      *(undefined1 *)(param_1 + 0x50) = 4;
    }
    goto LAB_142fae3a1;
  }
  if (param_1[0x52] == 0) {
    lVar7 = 0;
    if (lVar3 != 0) {
      lVar7 = FUN_142bbf6c0(lVar3,&DAT_146b44008);
      if (lVar7 == 0) {
LAB_142fadf2f:
        lVar7 = 0;
      }
      else {
        lVar8 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_142fadf2f;
      }
      param_1[0x52] = lVar7;
      (**(code **)(*param_1 + 0x260))(param_1);
      lVar7 = param_1[0x52];
    }
    if (lVar7 == 0) {
      return;
    }
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((plVar6 == (longlong *)0x0) ||
     (fVar11 = (float)(**(code **)(*plVar6 + 0x30))(plVar6), fVar11 <= 0.0)) {
    lVar4 = *(longlong *)(param_1[0x52] + 0x168);
    if (lVar4 == 0) {
      local_60 = DAT_1468b5d98;
      pfVar9 = (float *)&local_68;
      local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      pfVar9 = &local_78;
      local_78 = *(float *)(lVar4 + 0x220);
      local_70 = *(float *)(lVar4 + 0x228);
      fStack_74 = *(float *)(lVar4 + 0x224);
    }
    fVar11 = pfVar9[2];
    param_1[0x55] = *(longlong *)pfVar9;
    *(float *)(param_1 + 0x56) = fVar11;
    fVar11 = *(float *)((longlong)param_1 + 0x2ac) - *(float *)(param_1 + 0x57);
    fVar12 = *(float *)(param_1 + 0x55) - *(float *)((longlong)param_1 + 0x2b4);
    fVar11 = SQRT(fVar11 * fVar11 + fVar12 * fVar12);
    if (*(float *)((longlong)param_1 + 0x26c) <= fVar11 &&
        fVar11 != *(float *)((longlong)param_1 + 0x26c)) {
      return;
    }
  }
  else {
    local_68 = *(undefined8 *)((longlong)param_1 + 0x2b4);
    local_60 = *(float *)((longlong)param_1 + 700);
    if (lVar4 == 0) {
      return;
    }
    uVar5 = FUN_1423ac1f0(lVar4,&local_68);
    fVar12 = (float)FUN_1423ae500(lVar4,uVar5);
    fVar13 = (float)FUN_1423b1370(lVar4);
    fVar11 = fVar13 - fVar11;
    if (0.0 <= fVar11) {
      if (fVar13 <= fVar11) {
        fVar11 = fVar13;
      }
    }
    else {
      fVar11 = 0.0;
    }
    if (fVar12 < fVar11) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  if ((lVar3 == 0) || (lVar4 = FUN_142bbf6c0(lVar3,&DAT_146b44018), lVar4 == 0)) goto LAB_142fae3a1;
  uVar5 = FUN_142fc5d60();
  plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
  if ((plVar6 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar4 == 0))
  goto LAB_142fae3a1;
  FUN_1423aee90(lVar4,&local_78,0,1);
  local_68 = CONCAT44(fStack_74,local_78);
  local_60 = local_70;
  FUN_142bcae30(lVar3,&DAT_146b44020,&local_68);
  *(float *)(param_1 + 0x53) = local_70;
  FUN_1423aee90(lVar4,&local_68,0x3f000000,1);
  local_88 = (float)local_68 - local_78;
  local_84 = local_68._4_4_ - fStack_74;
  local_80 = local_60 - local_70;
  fVar11 = local_84 * local_84 + local_88 * local_88;
  if (fVar11 == 1.0) {
    if (local_80 != 0.0) {
LAB_142fae240:
      local_80 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar11) {
      auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar12 = auVar14._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
      local_84 = fVar12 * local_84;
      local_88 = fVar12 * local_88;
      goto LAB_142fae240;
    }
    local_88 = DAT_1468b5d90;
    local_80 = DAT_1468b5d98;
    local_84 = DAT_1468b5d94;
  }
  puVar10 = (undefined8 *)FVector::Rotation(&local_88,&local_68);
  *(undefined8 *)((longlong)param_1 + 0x29c) = *puVar10;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)(puVar10 + 1);
LAB_142fae3a1:
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 142fae3e0 FUN_142fae3e0 body=547 status=ok
// SIG undefined FUN_142fae3e0(void)

char FUN_142fae3e0(longlong param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                  longlong param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_ec;
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
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined1 local_78 [96];
  
  plVar2 = (longlong *)(param_1 + -0x458);
  local_ec = param_4[2];
  lVar14 = 0;
  local_f8 = *param_2;
  local_f0 = *(undefined4 *)(param_2 + 1);
  local_88 = plVar2;
  if (param_6 != 0) {
    lVar9 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142fae47f;
  }
  param_6 = lVar14;
LAB_142fae47f:
  puVar10 = (undefined8 *)(**(code **)(*plVar2 + 0x860))(plVar2,local_78,param_6);
  fVar3 = *param_4;
  local_e8 = *puVar10;
  uStack_e0 = puVar10[1];
  local_d8 = puVar10[2];
  uStack_d0 = puVar10[3];
  local_c8 = puVar10[4];
  uStack_c0 = puVar10[5];
  local_b8 = puVar10[6];
  uStack_b0 = puVar10[7];
  local_a8 = puVar10[8];
  uStack_a0 = puVar10[9];
  local_98 = *(undefined4 *)(puVar10 + 10);
  uStack_94 = *(undefined4 *)((longlong)puVar10 + 0x54);
  uStack_90 = *(undefined4 *)(puVar10 + 0xb);
  uStack_8c = *(undefined4 *)((longlong)puVar10 + 0x5c);
  if ((0.0 < fVar3) || (0.0 < param_4[1])) {
    plVar11 = *(longlong **)(param_1 + 0x2c8);
    bVar6 = true;
    fVar4 = param_4[1];
    plVar13 = plVar11 + (longlong)*(int *)(param_1 + 0x2d0) * 4;
    local_e8 = CONCAT44(fVar4,fVar3);
    plVar12 = plVar11;
    if (plVar11 != plVar13) {
      do {
        if ((fVar3 < *(float *)(plVar12 + 1) || fVar3 == *(float *)(plVar12 + 1)) &&
           (fVar4 < *(float *)((longlong)plVar12 + 0xc) ||
            fVar4 == *(float *)((longlong)plVar12 + 0xc))) {
          lVar14 = *plVar12;
          break;
        }
        plVar12 = plVar12 + 4;
      } while (plVar12 != plVar13);
      do {
        if (plVar11 == plVar13) break;
        if (*plVar11 == lVar14) {
          if (plVar11 != (longlong *)0x0) {
            uStack_e0 = CONCAT44((int)plVar11[2],(undefined4)uStack_e0);
            goto LAB_142fae556;
          }
          break;
        }
        plVar11 = plVar11 + 4;
      } while( true );
    }
    uStack_e0 = CONCAT44(0xffffffff,(undefined4)uStack_e0);
  }
  else {
    bVar6 = false;
  }
LAB_142fae556:
  cVar7 = FUN_142fae610(&local_f8,param_3,0);
  if (((bVar6) && (cVar7 != '\0')) &&
     (cVar8 = FUN_142fa5110(plVar2,param_3,&local_e8,0), cVar8 == '\0')) {
    cVar7 = '\0';
  }
  plVar2 = *(longlong **)(param_5 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  return cVar7;
}



// FUNCTION 142fae610 FUN_142fae610 body=569 status=ok
// SIG undefined FUN_142fae610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142fae610(float *param_1,float *param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1424c8610();
  FUN_1424c98a0();
  lVar1 = *(longlong *)(param_1 + 0x1c);
  if ((lVar1 != 0) &&
     ((((float)DAT_14676e1b0 != *param_1 || (DAT_14676e1b0._4_4_ != param_1[1])) ||
      (DAT_14676e1b8 != param_1[2])))) {
    fVar4 = param_1[3];
    if (fVar4 <= 0.0) {
      if (*(longlong *)(lVar1 + 0xb50) == 0) {
        fVar4 = 100.0;
      }
      else {
        fVar4 = *(float *)(*(longlong *)(lVar1 + 0xb50) + 0xf4);
        if (fVar4 <= 0.0) {
          return 0;
        }
      }
    }
    if ((*(longlong *)(lVar1 + 0x8f8) != 0) &&
       (plVar3 = (longlong *)
                 UWeapon::GetStatusEffectOriginStats
                           (*(undefined8 *)(*(longlong *)(lVar1 + 0x8f8) + 0x130)),
       plVar3 != (longlong *)0x0)) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_88 = (float)*(undefined8 *)param_1 * 0.01;
      fStack_84 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0.01;
      fStack_80 = param_1[2] * 0.01;
      uStack_7c = 0;
      local_b4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_98 = 0;
      local_78 = *param_1 * 0.01;
      fStack_74 = param_1[1] * 0.01;
      fStack_70 = (fVar4 + param_1[2]) * 0.01;
      uStack_6c = 0;
      if (-1 < (int)param_1[7]) {
        local_b4 = 1 << (SUB41(param_1[7],0) & 0x1f);
      }
      local_a8 = FUN_142fa4c50(*(longlong *)(param_1 + 0x1c) + 0xa28,param_1 + 0x18);
      cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_b8,&local_68);
      if (cVar2 != '\0') {
        *(ulonglong *)param_2 =
             CONCAT44((fStack_74 - fStack_84) * fStack_64 + fStack_84,
                      (local_78 - local_88) * local_68 + local_88);
        param_2[2] = (fStack_70 - fStack_80) * fStack_60 + fStack_80;
        *param_2 = *param_2 * 100.0;
        param_2[1] = param_2[1] * 100.0;
        param_2[2] = param_2[2] * 100.0;
        if (param_3 != (ulonglong *)0x0) {
          if (local_58 == 0xffffffff) {
            *param_3 = 0xffffffffffffffff;
            return 0xffffffffffffff01;
          }
          local_c8 = CONCAT44(local_58,local_58 >> 0x16) & 0x3fffffffffffff;
          *param_3 = local_c8;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142fae850 FUN_142fae850 body=9 status=ok
// SIG undefined FUN_142fae850(void)

void FUN_142fae850(longlong param_1)

{
  FUN_142c73900(param_1 + 0x1c);
  return;
}



// FUNCTION 142fae860 FUN_142fae860 body=191 status=ok
// SIG undefined FUN_142fae860(void)

undefined8 FUN_142fae860(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (2 < (ulonglong)(DAT_1468c21b0 - *(longlong *)(param_1 + 0x288))) goto LAB_142fae8ca;
  pcVar1 = (char *)(param_1 + 0x290);
  if (*pcVar1 == '\x01') {
    lVar4 = 0x10;
LAB_142fae8f0:
    cVar2 = FWeakObjectPtr::IsValid(pcVar1 + lVar4);
    if (cVar2 == '\0') goto LAB_142fae8ca;
  }
  else {
    if (*pcVar1 == '\x02') {
      lVar4 = 0x18;
      goto LAB_142fae8f0;
    }
    if ((((float)DAT_14676e1b0 == *(float *)(param_1 + 0x294)) &&
        (DAT_14676e1b0._4_4_ == *(float *)(param_1 + 0x298))) &&
       (DAT_14676e1b8 == *(float *)(param_1 + 0x29c))) goto LAB_142fae8ca;
  }
  cVar2 = FUN_142f8c3d0(pcVar1,param_2 + 0x68);
  if (cVar2 != '\0') {
    return 1;
  }
LAB_142fae8ca:
  uVar3 = FUN_142fae920(param_1,param_2);
  return uVar3;
}



// FUNCTION 142fae920 FUN_142fae920 body=164 status=ok
// SIG undefined FUN_142fae920(void)

undefined8 FUN_142fae920(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_18;
  float local_10;
  
  cVar1 = FUN_142fa8a90(param_2 + 0x20);
  if (cVar1 != '\0') {
    local_18 = *(undefined8 *)((longlong)param_1 + 0x784);
    local_10 = *(float *)((longlong)param_1 + 0x78c) - *(float *)((longlong)param_1 + 0x6ec);
    cVar1 = FUN_142c73900(param_2 + 0x3c,&local_18);
    if (cVar1 != '\0') {
      if ((*(char *)(param_2 + 0xb8) != '\0') &&
         (cVar1 = (**(code **)(*param_1 + 0x448))(param_1,param_2 + 0x20,0), cVar1 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fae9d0 FUN_142fae9d0 body=209 status=ok
// SIG undefined FUN_142fae9d0(void)

undefined8 FUN_142fae9d0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_18;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 5);
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = (int)param_1[4];
  local_18 = CONCAT31(local_18._1_3_,1);
  *(int *)(param_1 + 4) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x24) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 3,iVar2);
  }
  lVar3 = param_1[3];
  lVar4 = (longlong)iVar2 * 0x1c;
  puVar1 = (undefined4 *)(lVar4 + lVar3);
  *puVar1 = 0xca000000;
  puVar1[1] = 0xca000000;
  puVar1[2] = 0xca000000;
  puVar1[3] = 0x4a000000;
  *(undefined8 *)(lVar4 + 0x10 + lVar3) = 0x4a0000004a000000;
  *(undefined4 *)(lVar4 + 0x18 + lVar3) = local_18;
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return 1;
}



// FUNCTION 142faeab0 FUN_142faeab0 body=132 status=ok
// SIG undefined FUN_142faeab0(void)

void FUN_142faeab0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)*param_2;
  puVar7 = puVar8 + (longlong)(int)param_2[1] * 8;
  if (puVar8 != puVar7) {
    do {
      iVar2 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar2 + 1;
      if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
        ResizeGrow((longlong *)(param_1 + 0x18),iVar2);
      }
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar6 = (undefined4 *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x18));
      *puVar6 = *puVar8;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar8 + 4);
      puVar1 = puVar8 + 6;
      puVar8 = puVar8 + 8;
      puVar6[6] = *puVar1;
    } while (puVar8 != puVar7);
  }
  return;
}



// FUNCTION 142faeb40 FUN_142faeb40 body=697 status=ok
// SIG undefined FUN_142faeb40(void)

void FUN_142faeb40(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  BOOL BVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  LPVOID pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int local_res8 [2];
  undefined8 *local_res18 [2];
  longlong *local_48;
  undefined8 **local_40;
  
  cVar3 = FWeakObjectPtr::IsValid();
  if (((cVar3 != '\0') && (*param_2 != 0)) && (param_2[1] != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    FUN_142f9b930(param_1 + 0x30,local_res8,param_2);
    puVar10 = (undefined8 *)0x0;
    puVar9 = puVar10;
    if (local_res8[0] != -1) {
      puVar9 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x30));
    }
    puVar6 = puVar9 + 2;
    if (puVar9 == (undefined8 *)0x0) {
      puVar6 = puVar10;
    }
    if ((puVar6 == (undefined8 *)0x0) &&
       (local_res18[0] = (undefined8 *)FUN_142f98d60(param_1,param_2),
       local_res18[0] != (undefined8 *)0x0)) {
      local_40 = local_res18;
      local_48 = param_2;
      FUN_142f864b0(param_1 + 0x30,local_res8,&local_48,0);
    }
    FUN_142f9b930(param_1 + 0x80,local_res8,param_2);
    puVar9 = puVar10;
    if (local_res8[0] != -1) {
      puVar9 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x80));
    }
    puVar6 = puVar9 + 2;
    if (puVar9 == (undefined8 *)0x0) {
      puVar6 = puVar10;
    }
    if ((puVar6 == (undefined8 *)0x0) &&
       (local_res18[0] = (undefined8 *)FUN_142f984c0(param_1,param_2),
       local_res18[0] != (undefined8 *)0x0)) {
      local_40 = local_res18;
      local_48 = param_2;
      FUN_142f864b0(param_1 + 0x80,local_res8,&local_48,0);
    }
    plVar1 = (longlong *)(param_1 + 0xd0);
    FUN_142f9b930(plVar1,local_res8,param_2);
    puVar9 = puVar10;
    if (local_res8[0] != -1) {
      puVar9 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *plVar1);
    }
    puVar6 = puVar9 + 2;
    if (puVar9 == (undefined8 *)0x0) {
      puVar6 = puVar10;
    }
    if ((puVar6 == (undefined8 *)0x0) && (cVar3 = FWeakObjectPtr::IsValid(param_1), cVar3 != '\0'))
    {
      lVar7 = FWeakObjectPtr::Get(param_1);
      if ((lVar7 != 0) && ((*param_2 != 0 && (param_2[1] != 0)))) {
        pvVar8 = TlsGetValue(DAT_146b7bf70);
        if (pvVar8 == (LPVOID)0x0) {
          pvVar8 = DAT_146b7bf68;
        }
        puVar9 = (undefined8 *)
                 (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar8 + 0x58),0x28);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = 0;
          *(undefined4 *)(puVar9 + 2) = 0x1ffff;
          *puVar9 = &PTR_FUN_145a0e410;
          *(undefined4 *)(puVar9 + 3) = 1;
          puVar9[4] = lVar7 + 0x6c0;
          puVar10 = puVar9;
        }
        plVar11 = *(longlong **)(*param_2 + 0x30);
        plVar2 = plVar11 + (longlong)*(int *)(*param_2 + 0x38) * 3;
        for (; plVar11 != plVar2; plVar11 = plVar11 + 3) {
          if ((*plVar11 != 0) && (uVar5 = FUN_142f9d9e0(lVar7 + 0x6c0), uVar5 < 0x20)) {
            *(uint *)(puVar10 + 3) = *(uint *)(puVar10 + 3) | 1 << ((byte)uVar5 & 0x1f);
          }
        }
      }
      local_res18[0] = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        local_40 = local_res18;
        local_48 = param_2;
        FUN_142f864b0(plVar1,local_res8,&local_48,0);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 142faee00 FUN_142faee00 body=251 status=ok
// SIG undefined FUN_142faee00(void)

void FUN_142faee00(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x7a8);
    if (iVar1 != DAT_14676e170) {
      iVar2 = (int)param_1[5];
      if (iVar2 <= iVar1) {
        iVar8 = (iVar1 - iVar2) + 1;
        iVar4 = iVar2 + iVar8;
        *(int *)(param_1 + 5) = iVar4;
        if (*(int *)((longlong)param_1 + 0x2c) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar2 * 0x10 + param_1[4]),0,(longlong)iVar8 << 4);
      }
      plVar7 = (longlong *)((longlong)iVar1 * 0x10 + param_1[4]);
      if ((*plVar7 == 0) || (*plVar7 == param_2)) {
        *plVar7 = param_2;
        plVar3 = (longlong *)*param_1;
        for (plVar6 = plVar3; plVar6 != plVar3 + (int)param_1[1]; plVar6 = plVar6 + 1) {
          if (*plVar6 == *(longlong *)(param_2 + 0x740)) {
            uVar5 = (undefined4)((longlong)plVar6 - (longlong)plVar3 >> 3);
            goto LAB_142faeed7;
          }
        }
        uVar5 = 0xffffffff;
LAB_142faeed7:
        *(undefined4 *)((longlong)plVar7 + 0xc) = uVar5;
        *(undefined1 *)(plVar7 + 1) = *(undefined1 *)(param_2 + 0x6f8);
      }
    }
  }
  return;
}



// FUNCTION 142faef00 FUN_142faef00 body=310 status=ok
// SIG undefined FUN_142faef00(void)

void FUN_142faef00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_142f9cfb0(lVar3,0);
  if (lVar3 != 0) {
    FUN_142faee00(lVar3 + 0x660,param_1);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = FUN_142b8e570(lVar3);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x39a) & 8) == 0)) {
    plVar1 = (longlong *)(lVar3 + 0x108);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = 0x42faef00;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar2 = *(int *)(lVar3 + 0x110);
      *(int *)(lVar3 + 0x110) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x114) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 142faf040 FUN_142faf040 body=984 status=ok
// SIG undefined FUN_142faf040(void)

void FUN_142faf040(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  uint *puStack_90;
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
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (((((*(longlong *)(param_1 + 0x120) != 0) || (lVar8 = FUN_1423407b0(), lVar8 != 0)) &&
       (cVar7 = UWorld::IsGameWorld(), cVar7 != '\0')) &&
      ((*(char *)(param_1 + 0x180) != '\0' && (lVar8 = *(longlong *)(param_1 + 0x118), lVar8 != 0)))
      ) && (*(longlong *)(lVar8 + 0x168) != 0)) {
    plVar1 = (longlong *)(lVar8 + 0x2b0);
    uVar3 = *(uint *)(lVar8 + 0x2d8);
    puVar2 = (uint *)(lVar8 + 0x2c0);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar16 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      uVar4 = *puVar16;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        lVar13 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar11 = local_98 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar11;
        if (bVar5) goto LAB_142faf17d;
        uVar4 = puVar16[lVar13 + 1];
      }
      uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar11 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_84 = (iStack_80 - iVar11) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_142faf17d:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar8 + 0x2d8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    iStack_48 = local_98;
    uStack_44 = uStack_94;
    uVar15 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    puStack_90 = puVar2;
    local_68 = puVar2;
    local_50 = plVar1;
    puStack_40 = puVar2;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar16 = *(uint **)(lVar8 + 0x2d0);
      if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
        puVar16 = puVar2;
      }
      uVar12 = puVar16[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar11 = (int)uVar4 >> 5;
      while (uVar12 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_142faf255;
        uVar12 = puVar16[(longlong)iVar11 + 1];
        iVar11 = iVar11 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar11 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_84 = (uVar15 - iVar11) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_142faf255:
        uStack_84 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar2)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      lVar8 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
      if (lVar8 != 0) {
        lVar13 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          plVar14 = *(longlong **)(param_1 + 400);
          plVar9 = plVar14 + *(int *)(param_1 + 0x198);
          for (; plVar14 != plVar9; plVar14 = plVar14 + 1) {
            if (*plVar14 == *(longlong *)(lVar8 + 0x18)) {
              uVar6 = (ulonglong)puStack_90 >> 0x20;
              puStack_90 = (uint *)((ulonglong)puStack_90 & 0xffffffff00000000);
              plVar14 = (longlong *)(lVar8 + 0x2b0);
              plVar9 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar9 != (longlong *)0x0) {
                *plVar9 = (longlong)&PTR_FUN_145a0f550;
                FWeakObjectPtr::operator=(plVar9 + 1,param_1);
                *(undefined4 *)(plVar9 + 2) = 0x42faaa90;
                *(undefined4 *)((longlong)plVar9 + 0x14) = 1;
                *(undefined4 *)(plVar9 + 3) = 0;
                *(int *)((longlong)plVar9 + 0x1c) = (int)uVar6;
                lVar13 = FDelegateHandle::GenerateNewID();
                plVar9[5] = lVar13;
                *plVar9 = (longlong)&PTR_FUN_145a0f598;
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
                (**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
                iVar11 = *(int *)(lVar8 + 0x2b8);
                *(int *)(lVar8 + 0x2b8) = iVar11 + 1;
                if (*(int *)(lVar8 + 700) < iVar11 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar11);
                }
                puVar10 = (undefined8 *)((longlong)iVar11 * 0x10 + *plVar14);
                *puVar10 = plVar9;
                *(undefined4 *)(puVar10 + 1) = 3;
              }
              break;
            }
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return;
}



// FUNCTION 142faf420 FUN_142faf420 body=79 status=ok
// SIG undefined FUN_142faf420(void)

undefined8 FUN_142faf420(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (((lVar1 != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_2 + 0x20) == *(longlong *)(lVar1 + 0x30))) {
    uVar2 = FUN_142b954f0(param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142faf470 FUN_142faf470 body=224 status=ok
// SIG undefined FUN_142faf470(void)

void FUN_142faf470(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x1a0);
    lVar5 = (longlong)iVar3;
    if (iVar3 != DAT_14676e178) {
      if (*(int *)(param_1 + 0x18) < iVar3 + 1) {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar6 = (iVar3 - *(int *)(param_1 + 0x18)) + 1;
        iVar3 = iVar1 + iVar6;
        *(int *)(param_1 + 0x18) = iVar3;
        if (*(int *)(param_1 + 0x1c) < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x10);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x10)),0,
                   (longlong)iVar6 << 4);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar5 * 0x10);
      if ((lVar2 == 0) || (lVar2 == param_2)) {
        *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar5 * 0x10) = param_2;
        lVar2 = *(longlong *)(param_1 + 0x10);
        uVar4 = FUN_142f9d9e0(param_1,*(undefined8 *)(param_2 + 0x188));
        *(undefined4 *)(lVar2 + 8 + lVar5 * 0x10) = uVar4;
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xc + lVar5 * 0x10) =
             *(undefined1 *)(param_2 + 0x179);
      }
    }
  }
  return;
}



// FUNCTION 142faf550 FUN_142faf550 body=1200 status=ok
// SIG undefined FUN_142faf550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142faf550(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168 [2];
  longlong local_160;
  longlong local_158;
  int local_150;
  int local_148;
  char local_144;
  int local_140;
  longlong *local_138;
  longlong local_130;
  int local_128;
  undefined8 local_118;
  char local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_188 = param_1;
  uVar11 = (**(code **)(*param_1 + 0x148))();
  local_178 = (code *)FUN_1428dfc70();
  local_168[0] = 5;
  local_110 = '\0';
  local_180 = uVar11;
  FUN_14044bc80(&local_160,&local_180,&local_178);
  FUN_14045a130(local_168);
  iVar21 = local_148;
  plVar19 = local_138;
joined_r0x000142faf5ca:
  do {
    local_148 = iVar21;
    local_138 = plVar19;
    if (local_144 != '\0') {
      if (local_110 != '\0') {
        local_110 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_160,local_118);
        if (local_130 != 0) {
          FMemory::Free();
        }
        if (local_158 != 0) {
          FMemory::Free();
        }
      }
      return;
    }
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar11 = FUN_142954820();
    (**(code **)(*plVar19 + 0x660))(plVar19,uVar11,local_108);
    plVar19 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar19 = local_48;
    }
    plVar2 = plVar19 + (int)local_40;
    for (; plVar19 != plVar2; plVar19 = plVar19 + 1) {
      lVar4 = *plVar19;
      if (lVar4 != 0) {
        lVar12 = FUN_1429ff160();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (((bVar6) && (*(longlong *)(lVar4 + 0x118) != 0)) &&
           ((*(uint *)(*(longlong *)(lVar4 + 0x118) + 8) >> 6 & 1) == 0)) {
          uStack_170 = 0;
          local_178 = FUN_142fb1b10;
          plVar1 = (longlong *)(lVar4 + 0x2b0);
          plVar13 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = (longlong)&PTR_FUN_145a0f550;
            FWeakObjectPtr::operator=(plVar13 + 1,param_1);
            *(undefined4 *)(plVar13 + 2) = (undefined4)local_178;
            *(undefined4 *)((longlong)plVar13 + 0x14) = local_178._4_4_;
            *(undefined4 *)(plVar13 + 3) = uStack_170;
            *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_16c;
            lVar12 = FDelegateHandle::GenerateNewID();
            plVar13[5] = lVar12;
            *plVar13 = (longlong)&PTR_FUN_145a0f598;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_180);
            iVar21 = *(int *)(lVar4 + 0x2b8);
            *(int *)(lVar4 + 0x2b8) = iVar21 + 1;
            if (*(int *)(lVar4 + 700) < iVar21 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar21);
            }
            lVar4 = *plVar1;
            *(longlong **)(lVar4 + (longlong)iVar21 * 0x10) = plVar13;
            *(undefined4 *)(lVar4 + 8 + (longlong)iVar21 * 0x10) = 3;
            param_1 = local_188;
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar4 = local_160;
    iVar21 = local_148 + 1;
    if (iVar21 < local_128 + local_150) {
      lVar12 = (longlong)iVar21 * 8;
      iVar20 = local_128;
      iVar17 = local_150;
      do {
        lVar16 = 0;
        if (iVar21 < iVar17) {
          plVar19 = *(longlong **)(lVar12 + local_158);
        }
        else {
          plVar19 = *(longlong **)(local_130 + (longlong)(iVar21 - iVar17) * 8);
        }
        local_140 = local_140 + 1;
        if ((plVar19 != (longlong *)0x0) &&
           (lVar14 = AActor::GetLevel(plVar19), iVar20 = local_128, iVar17 = local_150, lVar14 != 0)
           ) {
          if ((local_168[0] & 1) != 0) {
            iVar3 = *(int *)((longlong)plVar19 + 0xc);
            if (iVar3 < (int)DAT_1469e91c4) {
              uVar18 = iVar3 >> 0x1f & 0xffff;
              uVar10 = iVar3 + uVar18;
              lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)((uVar10 & 0xffff) - uVar18) * 0x18;
            }
            if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) != 0) goto LAB_142faf92d;
          }
          if (((local_168[0] >> 1 & 1) == 0) ||
             (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(plVar19), iVar20 = local_128,
             iVar17 = local_150, cVar9 != '\0')) {
            if ((local_168[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar14 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar14 + 0x205) & 0x10) == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              piVar5 = *(int **)(lVar14 + 600);
              if (((*(longlong *)(lVar14 + 0xc0) == 0) ||
                  (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)) ||
                 (piVar5 == piVar15)) {
                bVar7 = true;
              }
              else {
                bVar7 = false;
              }
              if ((piVar5 == (int *)0x0) || (*piVar5 == 2)) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              if ((bVar7) || (bVar7 = false, bVar8)) {
                bVar7 = true;
              }
              iVar20 = local_128;
              iVar17 = local_150;
              if ((!bVar6) || (!bVar7)) goto LAB_142faf92d;
            }
            lVar16 = ULevel::GetWorld(lVar14);
            iVar20 = local_128;
            iVar17 = local_150;
            if (lVar16 == lVar4) {
              lVar16 = AActor::GetLevel(plVar19);
              param_1 = local_188;
              if (lVar16 == *(longlong *)(lVar4 + 0x30)) goto joined_r0x000142faf5ca;
              lVar16 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar19[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar19[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
                  lVar16 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              iVar20 = local_128;
              iVar17 = local_150;
              param_1 = local_188;
              if (!bVar6) goto joined_r0x000142faf5ca;
            }
          }
        }
LAB_142faf92d:
        iVar21 = iVar21 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar21 < iVar20 + iVar17);
    }
    plVar19 = (longlong *)0x0;
    local_144 = '\x01';
    param_1 = local_188;
    iVar21 = local_148;
  } while( true );
}



// FUNCTION 142fafa00 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AXHighLevelWaypoint,FWeakObjectPtr>,float,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
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
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_142fafb3f;
        uVar9 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_142fafb3f:
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
        lVar5 = *param_1;
        lVar6 = (longlong)iStack_1c;
        uVar9 = (*(uint *)(lVar5 + 4 + lVar6 * 0x14) ^ *(uint *)(lVar5 + lVar6 * 0x14)) &
                (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x10 + lVar6 * 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142fafc20 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>_>,TDefaultMapHashableKeyFuncs<SlotInfo,StrongBlockIdentifier<65536,CacheSlotStrongType>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_142fafd4f;
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
LAB_142fafd4f:
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
        lVar6 = (longlong)iStack_2c * 0x20 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x18) =
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



// FUNCTION 142fafe30 FUN_142fafe30 body=566 status=ok
// SIG undefined FUN_142fafe30(void)

void FUN_142fafe30(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
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
  
  lVar1 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x270),0,0);
    *(undefined8 *)(param_1 + 0x270) = uVar5;
  }
  puVar2 = (uint *)(param_1 + 0x278);
  uVar7 = *puVar2;
  if (uVar7 != 0) {
    FUN_140717b50(lVar1,0);
    if (0 < (int)uVar7) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar7;
      do {
        uVar8 = (longlong)(int)*puVar2 - 1U & uVar10;
        lVar9 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar9 = lVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar9 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x210);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x220);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0x218);
      if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar7 = *puVar13;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar7 == 0) {
        lVar9 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar4) goto LAB_142faff7f;
        uVar7 = puVar13[lVar9 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
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
      if (iVar3 < iStack_44) {
LAB_142faff7f:
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
        lVar9 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar9 = param_1;
        }
        puVar11 = (undefined8 *)(lVar9 + (longlong)iStack_1c * 0x10);
        uVar7 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & *puVar2 - 1;
        *(uint *)((longlong)puVar11 + 0xc) = uVar7;
        lVar9 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar9 = lVar1;
        }
        *(undefined4 *)(puVar11 + 1) =
             *(undefined4 *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4);
        lVar9 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar9 = lVar1;
        }
        *(int *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 142fb0070 Remove body=250 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::Remove
          (longlong *param_1,int param_2)

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
        goto joined_r0x000142fb0102;
      }
      iVar5 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000142fb0102:
  if (iVar1 == -1) {
LAB_142fb0130:
    if (*(longlong *)(lVar3 + 8 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_142fb0130;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x000142fb0102;
}



// FUNCTION 142fb0170 RemoveAtImpl body=188 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FClothCollisionPrim_ConvexFace,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
    iVar3 = param_3;
    do {
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



// FUNCTION 142fb0230 FUN_142fb0230 body=444 status=ok
// SIG undefined FUN_142fb0230(void)

void FUN_142fb0230(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined8 local_res18;
  undefined8 local_res20;
  
  plVar9 = *(longlong **)(param_1 + 0x50);
  iVar12 = 0;
  plVar11 = plVar9 + (longlong)*(int *)(param_1 + 0x58) * 3;
  for (; plVar9 != plVar11; plVar9 = plVar9 + 3) {
    cVar5 = FUN_14058c1e0(plVar9 + 2,param_2);
    if (((cVar5 != '\0') && (plVar9[1] != 0)) && (*plVar9 != 0)) {
      puVar1 = (ulonglong *)(*plVar9 + 8);
      LOCK();
      uVar6 = *puVar1;
      if (uVar6 == 0) {
        *puVar1 = 0;
        uVar6 = 0;
      }
      UNLOCK();
      if ((uVar6 >> 0x1a & 1) == 0) {
        piVar3 = (int *)plVar9[1];
        LOCK();
        iVar2 = *piVar3;
        if (iVar2 == 0) {
          *piVar3 = 0;
        }
        UNLOCK();
        if (iVar2 == 0) {
          LOCK();
          *piVar3 = 1;
          UNLOCK();
        }
        uVar7 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar7,plVar9,0xff);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res20,param_2);
  iVar2 = *(int *)(param_1 + 0x58);
  local_res18 = local_res20;
  if (iVar2 != 0) {
    cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(longlong *)(param_1 + 0x50) + 0x10,&local_res18);
    bVar13 = cVar5 == '\0';
    iVar8 = iVar12;
    do {
      iVar4 = iVar8;
      do {
        iVar4 = iVar4 + 1;
        if (iVar2 <= iVar4) break;
        cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x18 + 0x10,
                           &local_res18);
      } while (bVar13 == (cVar5 == '\0'));
      iVar10 = iVar4 - iVar8;
      if (bVar13 == false) {
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 0x18);
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar11 != 0) {
            LOCK();
            piVar3 = (int *)(*plVar11 + 0x48);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar11 = plVar11 + 3;
        }
      }
      else {
        if (iVar12 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar12 * 0x18),
                     (void *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 0x18),
                     (longlong)iVar10 * 0x18);
        }
        iVar12 = iVar12 + iVar10;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar8 = iVar4;
    } while (iVar4 < iVar2);
    *(int *)(param_1 + 0x58) = iVar12;
  }
  return;
}



// FUNCTION 142fb0430 FUN_142fb0430 body=317 status=ok
// SIG undefined FUN_142fb0430(void)

void FUN_142fb0430(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  lVar6 = (longlong)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar7 = 0;
    bVar8 = **(longlong **)(param_1 + 8) != param_2;
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar2 = lVar2 + 1;
      iVar4 = iVar3 + 1;
      if (lVar2 < lVar6) {
        plVar1 = (longlong *)(lVar2 * 0x150 + *(longlong *)(param_1 + 8));
        do {
          if (bVar8 != (*plVar1 != param_2)) break;
          iVar4 = iVar4 + 1;
          lVar2 = lVar2 + 1;
          plVar1 = plVar1 + 0x2a;
        } while (lVar2 < lVar6);
      }
      iVar5 = iVar4 - iVar3;
      if (bVar8 == false) {
        if (iVar5 != 0) {
          plVar1 = (longlong *)((longlong)iVar3 * 0x150 + 0xf8 + *(longlong *)(param_1 + 8));
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 0x2a;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      else {
        if (iVar7 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x150 + *(longlong *)(param_1 + 8)),
                     (void *)((longlong)iVar3 * 0x150 + *(longlong *)(param_1 + 8)),
                     (longlong)iVar5 * 0x150);
        }
        iVar7 = iVar7 + iVar5;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar3 = iVar4;
    } while (lVar2 < lVar6);
    *(int *)(param_1 + 0x10) = iVar7;
  }
  return;
}



// FUNCTION 142fb0570 FUN_142fb0570 body=444 status=ok
// SIG undefined FUN_142fb0570(void)

void FUN_142fb0570(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined8 local_res18;
  undefined8 local_res20;
  
  plVar10 = *(longlong **)(param_1 + 0x30);
  iVar13 = 0;
  plVar12 = plVar10 + (longlong)*(int *)(param_1 + 0x38) * 3;
  for (; plVar10 != plVar12; plVar10 = plVar10 + 3) {
    cVar6 = FUN_14058c1e0(plVar10 + 2,param_2);
    if (((cVar6 != '\0') && (plVar10[1] != 0)) && (*plVar10 != 0)) {
      puVar1 = (ulonglong *)(*plVar10 + 8);
      LOCK();
      uVar7 = *puVar1;
      if (uVar7 == 0) {
        *puVar1 = 0;
        uVar7 = 0;
      }
      UNLOCK();
      if ((uVar7 >> 0x1a & 1) == 0) {
        lVar4 = plVar10[1];
        piVar2 = (int *)(lVar4 + 0x10);
        LOCK();
        bVar14 = *piVar2 == 0;
        if (bVar14) {
          *piVar2 = 0;
        }
        UNLOCK();
        if (bVar14) {
          LOCK();
          *(undefined4 *)(lVar4 + 0x10) = 1;
          UNLOCK();
        }
        uVar8 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar8,plVar10,0xff);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res20,param_2);
  iVar3 = *(int *)(param_1 + 0x38);
  local_res18 = local_res20;
  if (iVar3 != 0) {
    cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(longlong *)(param_1 + 0x30) + 0x10,&local_res18);
    bVar14 = cVar6 == '\0';
    iVar9 = iVar13;
    do {
      iVar5 = iVar9;
      do {
        iVar5 = iVar5 + 1;
        if (iVar3 <= iVar5) break;
        cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x18 + 0x10,
                           &local_res18);
      } while (bVar14 == (cVar6 == '\0'));
      iVar11 = iVar5 - iVar9;
      if (bVar14 == false) {
        plVar12 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x18);
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (*plVar12 != 0) {
            LOCK();
            piVar2 = (int *)(*plVar12 + 0x48);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar12 = plVar12 + 3;
        }
      }
      else {
        if (iVar13 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0x18),
                     (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar9 * 0x18),
                     (longlong)iVar11 * 0x18);
        }
        iVar13 = iVar13 + iVar11;
      }
      bVar14 = (bool)(bVar14 ^ 1);
      iVar9 = iVar5;
    } while (iVar5 < iVar3);
    *(int *)(param_1 + 0x38) = iVar13;
  }
  return;
}



// FUNCTION 142fb0730 FUN_142fb0730 body=286 status=ok
// SIG undefined FUN_142fb0730(void)

void FUN_142fb0730(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  }
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
     (lVar2 = *(longlong *)(param_2 + 0x68), lVar2 != 0)) {
    FWeakObjectPtr::operator=(local_res10,param_2);
    lVar3 = *(longlong *)(param_1 + 0x100);
    iVar6 = *(int *)(param_1 + 0x108);
    for (lVar7 = lVar3; lVar7 != lVar3 + (longlong)iVar6 * 8; lVar7 = lVar7 + 8) {
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,local_res10);
      if (cVar4 != '\0') {
        uVar8 = lVar7 - lVar3 >> 3;
        iVar6 = (int)uVar8;
        if (iVar6 != -1) {
          FWeakObjectPtr::operator=(&local_res8,0);
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar6 * 8);
          *puVar1 = local_res8;
          puVar1[1] = local_resc;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Remove(param_1,uVar8 & 0xffffffff);
          FUN_1438ed1b0(*(undefined8 *)(param_1 + 0xe0),lVar2);
        }
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return;
}



// FUNCTION 142fb0850 FUN_142fb0850 body=257 status=ok
// SIG undefined FUN_142fb0850(void)

void FUN_142fb0850(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x10);
    uVar4 = 0;
    uVar10 = uVar4;
    if (((lVar1 == 0) || (param_2 == *(int *)(lVar1 + 0x28))) || (param_2 == *(int *)(lVar1 + 0x2c))
       ) {
      bVar11 = 0;
      uVar7 = uVar4;
    }
    else {
      bVar11 = 1;
      uVar7 = uVar4;
    }
    do {
      iVar6 = (int)uVar7;
      uVar4 = uVar4 + 1;
      uVar7 = (ulonglong)(iVar6 + 1);
      if ((longlong)uVar4 < lVar8) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
        do {
          lVar1 = *plVar3;
          if (((lVar1 == 0) || (param_2 == *(int *)(lVar1 + 0x28))) ||
             (param_2 == *(int *)(lVar1 + 0x2c))) {
            bVar2 = 0;
          }
          else {
            bVar2 = 1;
          }
          if (bVar11 != bVar2) break;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar4 = uVar4 + 1;
          plVar3 = plVar3 + 1;
        } while ((longlong)uVar4 < lVar8);
      }
      iVar5 = (int)uVar7 - iVar6;
      if (bVar11 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8),
                     (void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 8),
                     (longlong)iVar5 << 3);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar5);
      }
      bVar11 = bVar11 ^ 1;
    } while ((longlong)uVar4 < lVar8);
    *(int *)(param_1 + 0x18) = (int)uVar10;
  }
  return;
}



// FUNCTION 142fb0960 FUN_142fb0960 body=8 status=ok
// SIG undefined FUN_142fb0960(void)

bool FUN_142fb0960(longlong param_1)

{
  return *(int *)(param_1 + 0x54) == 0;
}



// FUNCTION 142fb0970 FUN_142fb0970 body=166 status=ok
// SIG undefined FUN_142fb0970(void)

void FUN_142fb0970(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0xf8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x2a;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<336,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0xf8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x2a;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142fb0a20 FUN_142fb0a20 body=33 status=ok
// SIG undefined FUN_142fb0a20(void)

void FUN_142fb0a20(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  return;
}



// FUNCTION 142fb0a50 FUN_142fb0a50 body=193 status=ok
// SIG undefined FUN_142fb0a50(void)

void FUN_142fb0a50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_b8 [176];
  
  *(undefined8 *)(param_1 + 0x2828) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2830) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x27c4) = 0xffffffffffffffff;
  puVar2 = (undefined8 *)FUN_142f9f070(param_1,local_b8);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x27b8) = *puVar2;
  *(undefined8 *)(param_1 + 0x27c0) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)(param_1 + 0x27c8) = puVar2[2];
  *(undefined8 *)(param_1 + 0x27d0) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)(param_1 + 0x27d8) = puVar2[4];
  *(undefined8 *)(param_1 + 0x27e0) = uVar1;
  uVar1 = puVar2[7];
  *(undefined8 *)(param_1 + 0x27e8) = puVar2[6];
  *(undefined8 *)(param_1 + 0x27f0) = uVar1;
  uVar1 = puVar2[9];
  *(undefined8 *)(param_1 + 0x27f8) = puVar2[8];
  *(undefined8 *)(param_1 + 0x2800) = uVar1;
  uVar1 = puVar2[0xb];
  *(undefined8 *)(param_1 + 0x2808) = puVar2[10];
  *(undefined8 *)(param_1 + 0x2810) = uVar1;
  uVar1 = puVar2[0xd];
  *(undefined8 *)(param_1 + 0x2818) = puVar2[0xc];
  *(undefined8 *)(param_1 + 0x2820) = uVar1;
  uVar1 = puVar2[0xf];
  *(undefined8 *)(param_1 + 0x2828) = puVar2[0xe];
  *(undefined8 *)(param_1 + 0x2830) = uVar1;
  uVar1 = puVar2[0x11];
  *(undefined8 *)(param_1 + 0x2838) = puVar2[0x10];
  *(undefined8 *)(param_1 + 0x2840) = uVar1;
  uVar1 = puVar2[0x13];
  *(undefined8 *)(param_1 + 0x2848) = puVar2[0x12];
  *(undefined8 *)(param_1 + 0x2850) = uVar1;
  *(undefined8 *)(param_1 + 0x2858) = puVar2[0x14];
  return;
}



// FUNCTION 142fb0b20 FUN_142fb0b20 body=27 status=ok
// SIG undefined FUN_142fb0b20(void)

void FUN_142fb0b20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x2860) = *(undefined8 *)(lVar1 + 0x2718);
    *(undefined8 *)(lVar1 + 0x2868) = *(undefined8 *)(lVar1 + 0x2720);
  }
  return;
}


