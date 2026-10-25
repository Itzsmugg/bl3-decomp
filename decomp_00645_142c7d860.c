// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c7d860 FUN_142c7d860 body=113 status=ok
// SIG undefined FUN_142c7d860(void)

void FUN_142c7d860(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(lVar1 + 0x148);
  *(undefined1 *)(param_1 + 0x470) = *(undefined1 *)(lVar1 + 0x130);
  FUN_142c63e10(param_1 + 0x478,lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(lVar1 + 0x150);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xac);
  *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x8b);
  return;
}



// FUNCTION 142c7d900 FUN_142c7d900 body=74 status=ok
// SIG undefined FUN_142c7d900(void)

void FUN_142c7d900(longlong param_1)

{
  FUN_142c7d950(*(longlong *)(param_1 + 0x10) + 0xe0,
                *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118),param_1);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xac);
  *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x8b);
  return;
}



// FUNCTION 142c7d950 FUN_142c7d950 body=1122 status=ok
// SIG undefined FUN_142c7d950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c7d950(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined4 local_400 [2];
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  lVar11 = 0;
  if (param_2 != 0) {
    lVar9 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar9 = *(longlong *)(param_2 + 0x490), lVar9 != 0)) {
      lVar10 = FUN_142c2de20();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar11 = *(longlong *)(lVar9 + 0x568);
      }
    }
  }
  if (lVar11 != 0) {
    local_3f8 = 0;
    FUN_142dc1ad0(local_3c8);
    param_1 = param_1 + 8;
    cVar8 = FUN_142cc5430(param_1,lVar11,local_3c8);
    if (cVar8 == '\0') {
      cVar8 = FUN_142cc3a70(param_1,lVar11,&local_3f8);
      if (cVar8 == '\0') {
        cVar8 = FUN_142cc54f0(param_1,lVar11,&local_3e0);
        if (cVar8 == '\0') {
          cVar8 = FUN_142cc40f0(param_1,lVar11,local_400);
          local_438 = DAT_146b2fd50;
          local_3d8 = local_400[0];
          if (cVar8 == '\0') {
            return;
          }
        }
        else {
          iVar3 = *(int *)(param_3 + 0x28);
          local_438 = DAT_146b2fd38;
          uStack_42c = local_3e0;
          uStack_430 = CONCAT31(uStack_430._1_3_,1);
          uStack_420 = 0;
          local_418 = 0;
          *(int *)(param_3 + 0x28) = iVar3 + 1;
          if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3 + 0x20,iVar3);
          }
          uVar7 = local_418;
          uVar6 = uStack_420;
          lVar11 = *(longlong *)(param_3 + 0x20);
          uVar4 = CONCAT44(uStack_42c,uStack_430);
          uStack_430 = CONCAT31(uStack_430._1_3_,1);
          uStack_420 = 0;
          lVar9 = (longlong)iVar3 * 0x38;
          *(undefined8 *)(lVar9 + lVar11) = local_438;
          ((undefined8 *)(lVar9 + lVar11))[1] = uVar4;
          local_418 = 0;
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          *puVar1 = local_428;
          puVar1[1] = uVar6;
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar11);
          *puVar1 = uVar7;
          puVar1[1] = CONCAT44(uStack_40c,uStack_410);
          *(undefined8 *)(lVar9 + 0x30 + lVar11) = local_408;
          iVar3 = *(int *)(param_3 + 0x28);
          local_438 = DAT_146b2fd40;
          uStack_42c = local_3dc;
          *(int *)(param_3 + 0x28) = iVar3 + 1;
          if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3 + 0x20,iVar3);
          }
          lVar11 = *(longlong *)(param_3 + 0x20);
          lVar9 = (longlong)iVar3 * 0x38;
          *(undefined8 *)(lVar9 + lVar11) = local_438;
          ((undefined8 *)(lVar9 + lVar11))[1] = CONCAT44(uStack_42c,uStack_430);
          puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          *puVar1 = local_428;
          puVar1[1] = uStack_420;
          puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar11);
          *puVar1 = local_418;
          puVar1[1] = CONCAT44(uStack_40c,uStack_410);
          *(undefined8 *)(lVar9 + 0x30 + lVar11) = local_408;
          local_438 = DAT_146b2fd48;
        }
        uStack_420 = 0;
        uStack_430 = CONCAT31(uStack_430._1_3_,1);
        uStack_42c = local_3d8;
      }
      else {
        local_438 = DAT_146b2fd30;
        uStack_420 = local_3f8;
        uStack_430 = CONCAT31(uStack_430._1_3_,3);
      }
    }
    else {
      FUN_142dcd4d0(local_3c8,&local_3f0,local_3d0,0);
      iVar3 = *(int *)(param_3 + 0x28);
      local_438 = DAT_146b2fd38;
      uStack_42c = local_3f0;
      uStack_430 = CONCAT31(uStack_430._1_3_,1);
      uStack_420 = 0;
      local_418 = 0;
      *(int *)(param_3 + 0x28) = iVar3 + 1;
      if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3 + 0x20,iVar3);
      }
      uVar7 = local_418;
      uVar6 = uStack_420;
      lVar11 = *(longlong *)(param_3 + 0x20);
      uVar4 = CONCAT44(uStack_42c,uStack_430);
      uStack_430 = CONCAT31(uStack_430._1_3_,1);
      uStack_420 = 0;
      lVar9 = (longlong)iVar3 * 0x38;
      *(undefined8 *)(lVar9 + lVar11) = local_438;
      ((undefined8 *)(lVar9 + lVar11))[1] = uVar4;
      local_418 = 0;
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      *puVar1 = local_428;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = CONCAT44(uStack_40c,uStack_410);
      *(undefined8 *)(lVar9 + 0x30 + lVar11) = local_408;
      iVar3 = *(int *)(param_3 + 0x28);
      local_438 = DAT_146b2fd40;
      uStack_42c = local_3ec;
      *(int *)(param_3 + 0x28) = iVar3 + 1;
      if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3 + 0x20,iVar3);
      }
      uVar7 = local_418;
      uVar6 = uStack_420;
      lVar11 = *(longlong *)(param_3 + 0x20);
      uVar4 = CONCAT44(uStack_42c,uStack_430);
      uStack_430 = CONCAT31(uStack_430._1_3_,1);
      uStack_420 = 0;
      lVar9 = (longlong)iVar3 * 0x38;
      *(undefined8 *)(lVar9 + lVar11) = local_438;
      ((undefined8 *)(lVar9 + lVar11))[1] = uVar4;
      local_418 = 0;
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      *puVar1 = local_428;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = CONCAT44(uStack_40c,uStack_410);
      *(undefined8 *)(lVar9 + 0x30 + lVar11) = local_408;
      iVar3 = *(int *)(param_3 + 0x28);
      local_438 = DAT_146b2fd48;
      uStack_42c = local_3e8;
      *(int *)(param_3 + 0x28) = iVar3 + 1;
      if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3 + 0x20,iVar3);
      }
      lVar11 = *(longlong *)(param_3 + 0x20);
      lVar9 = (longlong)iVar3 * 0x38;
      *(undefined8 *)(lVar9 + lVar11) = local_438;
      ((undefined8 *)(lVar9 + lVar11))[1] = CONCAT44(uStack_42c,uStack_430);
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
      *puVar1 = local_428;
      puVar1[1] = uStack_420;
      puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar11);
      *puVar2 = (undefined4)local_418;
      puVar2[1] = local_418._4_4_;
      puVar2[2] = uStack_410;
      puVar2[3] = uStack_40c;
      *(undefined8 *)(lVar9 + 0x30 + lVar11) = local_408;
      uStack_420 = FUN_142dd0030(local_3c8);
      local_438 = DAT_146b2fd30;
      uStack_430 = CONCAT31(uStack_430._1_3_,3);
    }
    iVar3 = *(int *)(param_3 + 0x28);
    local_418 = 0;
    *(int *)(param_3 + 0x28) = iVar3 + 1;
    if (*(int *)(param_3 + 0x2c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_3 + 0x20,iVar3);
    }
    lVar11 = *(longlong *)(param_3 + 0x20);
    lVar9 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar9 + lVar11) = local_438;
    ((undefined8 *)(lVar9 + lVar11))[1] = CONCAT44(uStack_42c,uStack_430);
    puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
    *puVar1 = local_428;
    puVar1[1] = uStack_420;
    puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar11);
    *puVar1 = local_418;
    puVar1[1] = CONCAT44(uStack_40c,uStack_410);
    *(undefined8 *)(lVar9 + 0x30 + lVar11) = local_408;
  }
  return;
}



// FUNCTION 142c7ddc0 FUN_142c7ddc0 body=546 status=ok
// SIG undefined FUN_142c7ddc0(void)

undefined8 *
FUN_142c7ddc0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined1 param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong *plVar10;
  undefined1 local_res20 [8];
  longlong *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  if ((*(char *)(param_4 + 0x31) == '\0') && (iVar4 = FUN_14233f450(), iVar4 != 3)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar10 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142e20fc0();
    plVar6 = param_3;
    do {
      if (plVar6 == plVar5) {
        *(longlong *)(param_4 + 0x18) = param_1;
        plVar6 = (longlong *)FUN_142e20fc0();
        plVar10 = param_3;
        goto LAB_142c7de50;
      }
      plVar6 = (longlong *)plVar6[6];
      plVar10 = (longlong *)0x0;
    } while (plVar6 != (longlong *)0x0);
  }
  goto LAB_142c7dee7;
  while (plVar10 = (longlong *)plVar10[6], plVar5 = (longlong *)0x0, plVar10 != (longlong *)0x0) {
LAB_142c7de50:
    plVar5 = param_3;
    if (plVar10 == plVar6) break;
  }
  plVar10 = (longlong *)plVar5[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    plVar10 = (longlong *)plVar5[0x1f];
  }
  if (plVar10 != (longlong *)0x0) {
    lVar8 = FUN_142e20fc0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x278))(plVar10,local_res20,param_4);
      param_3 = (longlong *)*puVar7;
      goto LAB_142c7dee7;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_142c7dee7:
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  lVar8 = FUN_142c71720(lVar8);
  if (((lVar8 != 0) && (plVar10 != (longlong *)0x0)) &&
     (cVar3 = FUN_142c6a2d0(param_1,param_3,param_4), cVar3 != '\0')) {
    pplVar9 = (longlong **)FUN_142c79d10(param_1,local_38,param_3,param_4,param_5);
    if (&local_48 != pplVar9) {
      local_48 = *pplVar9;
      *pplVar9 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_40,pplVar9 + 1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_30 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    plVar10 = local_48;
    local_48 = plVar10;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x30))(local_48);
      local_48 = plVar10;
    }
  }
  *param_2 = local_48;
  param_2[1] = uStack_40;
  return param_2;
}



// FUNCTION 142c7dff0 FUN_142c7dff0 body=65 status=ok
// SIG undefined FUN_142c7dff0(void)

void FUN_142c7dff0(longlong param_1)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  local_58 = (undefined4)param_1;
  uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_50 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_48 = &PTR_LAB_14583fc60;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  FUN_142c6db40(local_58,&local_48);
  return;
}



// FUNCTION 142c7e040 FUN_142c7e040 body=5856 status=ok
// SIG undefined FUN_142c7e040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_142c7e040(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 *puVar15;
  int *piVar16;
  char *pcVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  char *pcVar23;
  bool bVar24;
  undefined1 auStack_378 [32];
  longlong *local_358;
  longlong local_350;
  byte local_348;
  char local_347;
  char local_346;
  undefined1 local_345;
  char local_344;
  undefined1 local_343;
  uint local_340;
  int local_33c;
  char local_338;
  undefined1 local_337;
  char local_336 [6];
  longlong local_330;
  longlong *local_328;
  longlong *plStack_320;
  int local_318;
  int local_314 [3];
  undefined4 local_308;
  undefined1 local_300;
  undefined8 local_2f8;
  longlong lStack_2f0;
  int local_2e8 [2];
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined1 local_2c0;
  undefined1 local_2bf [7];
  longlong *local_2b8;
  longlong *plStack_2b0;
  longlong *local_2a8;
  int local_2a0;
  int local_298;
  int local_294;
  longlong *local_290;
  int local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong *local_270;
  longlong *local_268;
  undefined1 local_258 [16];
  undefined8 *local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  undefined8 *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined4 local_194;
  byte local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  char local_128 [4];
  undefined4 local_124;
  undefined1 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  local_340 = 0;
  local_300 = 0;
  bVar3 = 1;
  local_2e0 = 0;
  local_2d8 = (longlong *)0x0;
  local_2d0 = 0;
  local_308 = 0x1703;
  local_2f8 = 0;
  lStack_2f0 = 0;
  local_2e8[0] = -1;
  local_347 = '\x03';
  local_328 = (longlong *)0x0;
  plStack_320 = (longlong *)0x0;
  local_343 = 1;
  local_338 = param_4;
  local_330 = param_1;
  local_2c8 = param_3;
  cVar1 = (**(code **)(*param_2 + 0xa0))();
joined_r0x000142c7e0e2:
  if (cVar1 != '\0') {
    if (((char)local_308 == '\x01') && (bVar3 != 0)) {
      plVar11 = local_2d8 + (longlong)(int)(uint)local_2d0 * 2;
      for (plVar8 = local_2d8; plVar8 != plVar11; plVar8 = plVar8 + 2) {
        if ((((int)plVar8[1] == 0) || ((longlong *)*plVar8 == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(*(longlong *)*plVar8 + 0x18))(), cVar1 == '\0')) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (bVar24) {
          if ((int)plVar8[1] == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = (longlong *)*plVar8;
          }
          (**(code **)(*plVar12 + 0x40))();
        }
      }
    }
    lVar18 = *(longlong *)(param_3 + 0x20);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x30,0);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x80,0);
    plVar8 = plStack_320;
    *(undefined1 *)(lVar18 + 0x29) = 0;
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_320 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_320)(plStack_320);
        LOCK();
        piVar14 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plStack_320 + 8))(plStack_320,1);
        }
      }
    }
    TArray<FPolygonHoleVertices,FDefaultAllocator>::~TArray<FPolygonHoleVertices,FDefaultAllocator>
              (&local_2d8);
    return local_343;
  }
  plVar8 = (longlong *)param_2[1];
  lVar18 = param_2[0x15];
  if ((char *)plVar8[1] < (char *)*plVar8 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_347,1);
  }
  else {
    local_347 = *(char *)*plVar8;
    *plVar8 = *plVar8 + 1;
  }
  if ((((char)local_308 == '\x01') && (local_347 != '\x03')) && (bVar3 != 0)) {
    plVar11 = local_2d8 + (longlong)(int)(uint)local_2d0 * 2;
    param_3 = local_2c8;
    for (plVar8 = local_2d8; local_2c8 = param_3, plVar8 != plVar11; plVar8 = plVar8 + 2) {
      if ((((int)plVar8[1] == 0) || ((longlong *)*plVar8 == (longlong *)0x0)) ||
         (cVar1 = (**(code **)(*(longlong *)*plVar8 + 0x18))(), cVar1 == '\0')) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        if ((int)plVar8[1] == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)*plVar8;
        }
        (**(code **)(*plVar12 + 0x40))();
      }
      param_3 = local_2c8;
    }
  }
  if (local_347 == '\0') {
    lVar10 = 0;
    local_2e8[0] = -1;
    local_2e0 = 0;
    local_308 = CONCAT13(local_308._3_1_,0x1700);
    lStack_2f0 = lVar18;
    plVar8 = local_2d8;
    for (iVar20 = (uint)local_2d0; iVar20 != 0; iVar20 = iVar20 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar8);
      plVar8 = plVar8 + 2;
    }
    uVar22 = local_2d0 >> 0x20;
    local_2d0 = local_2d0 & 0xffffffff00000000;
    if ((int)uVar22 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_2d8,0);
    }
    lVar18 = *(longlong *)(param_3 + 0x20);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x30,0);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x80,0);
    *(undefined1 *)(lVar18 + 0x29) = 1;
    plVar8 = (longlong *)param_2[1];
    local_190 = local_190 & 0xf8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = &PTR_FUN_143ff6170;
    local_168 = 0;
    uStack_160 = 2;
    local_138 = 0;
    uStack_130 = 2;
    local_1c0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_194 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 2;
    local_170 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 2;
    local_140 = 0;
    local_128[0] = -1;
    local_124 = 0xffffffff;
    local_120 = 0;
    local_11c = 0;
    local_114 = 0;
    local_110 = 0;
    local_108 = (longlong *)0x0;
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_2e8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_2e8,4);
      }
    }
    else {
      local_2e8[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    plVar8 = (longlong *)param_2[1];
    if ((char *)plVar8[1] < (char *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_128,1);
    }
    else {
      local_128[0] = *(char *)*plVar8;
      *plVar8 = *plVar8 + 1;
    }
    uVar7 = FUN_14171bfe0();
    local_358 = (longlong *)0x0;
    bVar2 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x280))
                      (*(longlong **)(param_3 + 0x20),param_2,uVar7,&local_220);
    uVar7 = FUN_1428dfc70();
    local_358 = (longlong *)0x0;
    bVar3 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x280))
                      (*(longlong **)(param_3 + 0x20),param_2,uVar7,&local_228);
    plVar8 = local_228;
    bVar3 = bVar2 & 1 & bVar3;
    local_348 = bVar3;
    if (local_228 != (longlong *)0x0) {
      lVar18 = FUN_1428dfc70();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
          lVar18 + 0x88)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        local_80 = FUN_142e27720();
        lVar10 = (**(code **)(*plVar8 + 0x628))(plVar8,local_80);
      }
    }
    puVar6 = local_220;
    if (local_220 == (undefined8 *)0x0) {
LAB_142c7ebd9:
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar18 = FUN_14171bfe0();
      if ((*(int *)(puVar6[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
         (*(longlong *)(*(longlong *)(puVar6[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
          lVar18 + 0x88)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (!bVar24) goto LAB_142c7ebd9;
    }
    plVar8 = (longlong *)param_2[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_33c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_33c,4);
      }
    }
    else {
      local_33c = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    uVar21 = local_340;
    plVar11 = (longlong *)FUN_142c6e340(param_1,local_90,local_2e8[0]);
    plVar8 = local_88;
    if (*plVar11 == 0) {
      if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
        lVar18 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar18 = param_1 + 0x50;
        }
        iVar20 = *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)local_2e8[0]
                                   ) * 4);
        if (iVar20 != -1) {
          lVar18 = *(longlong *)(param_1 + 0x18);
          do {
            lVar13 = (longlong)iVar20 * 0x20;
            if (*(int *)(lVar13 + lVar18) == local_2e8[0]) {
              if (((iVar20 == -1) || (lVar18 = (longlong)iVar20 * 0x20 + lVar18, lVar18 == 0)) ||
                 ((undefined8 *)(lVar18 + 8) == (undefined8 *)0x0)) goto LAB_142c7ecf1;
              piVar14 = *(int **)(lVar18 + 8);
              piVar16 = piVar14 + (longlong)*(int *)(lVar18 + 0x10) * 0x30;
              if (piVar14 == piVar16) goto LAB_142c7ecf1;
              goto LAB_142c7ece0;
            }
            iVar20 = *(int *)(lVar13 + 0x18 + lVar18);
          } while (iVar20 != -1);
          cVar1 = '\0';
          goto LAB_142c7ecf9;
        }
      }
      goto LAB_142c7ecf1;
    }
LAB_142c7ecf6:
    cVar1 = '\x01';
    goto LAB_142c7ecf9;
  }
  if (local_347 == '\x01') {
    lVar10 = *(longlong *)(param_3 + 0x20);
    bVar3 = 1;
    lStack_2f0 = lVar18;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar10 + 0x30,0);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar10 + 0x80,0);
    *(undefined1 *)(lVar10 + 0x29) = 1;
    plVar8 = (longlong *)param_2[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_2e8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_2e8,4);
      }
    }
    else {
      local_2e8[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    (**(code **)(*param_2 + 8))(param_2,local_336);
    plVar8 = (longlong *)param_2[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_33c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_33c,4);
      }
    }
    else {
      local_33c = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    uVar22 = local_2d0 & 0xffffffff;
    local_2e0 = 0;
    local_308 = CONCAT13(local_308._3_1_,0x1701);
    plVar8 = local_2d8;
    uVar21 = (uint)local_2d0;
    while (uVar21 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar8);
      plVar8 = plVar8 + 2;
      uVar21 = (int)uVar22 - 1;
      uVar22 = (ulonglong)uVar21;
    }
    local_2d0._4_4_ = (uint)(local_2d0 >> 0x20);
    bVar24 = local_2d0._4_4_ != 0;
    local_2d0 = (ulonglong)local_2d0._4_4_ << 0x20;
    if (bVar24) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_2d8,0);
    }
    FUN_142c6e340(param_1,&local_2b8,local_2e8[0]);
    if (local_2b8 == (longlong *)0x0) {
      pplVar9 = (longlong **)FUN_142c6fef0(param_1,local_a0,local_2e8[0]);
      if (&local_2b8 != pplVar9) {
        local_2b8 = *pplVar9;
        *pplVar9 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2b0,pplVar9 + 1);
      }
      plVar8 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_98 + 1;
        lVar18 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar14 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_2b8 != (longlong *)0x0) goto LAB_142c7e85f;
      bVar3 = 0;
      if ((local_336[0] == '\0') && (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c))) {
        lVar18 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar18 = param_1 + 0x50;
        }
        iVar20 = *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)local_2e8[0]
                                   ) * 4);
        if (iVar20 != -1) {
          do {
            if (*(int *)((longlong)iVar20 * 0x20 + *(longlong *)(param_1 + 0x18)) == local_2e8[0]) {
              if (iVar20 != -1) {
                (**(code **)(*param_2 + 0x1f0))
                          (param_2,param_2[0x12],(int)param_2[0x15],(longlong)(local_33c + -0x20));
                local_358 = &lStack_2f0;
                local_350 = param_3;
                FUN_142c81880(param_1,1,param_2,&local_308);
                goto LAB_142c7e8e3;
              }
              break;
            }
            iVar20 = *(int *)((longlong)iVar20 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x18));
          } while (iVar20 != -1);
        }
      }
      TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x18,local_2e8[0]);
      (**(code **)(*param_2 + 0x1f0))
                (param_2,param_2[0x12],(int)param_2[0x15],(longlong)(local_33c + -0x20));
      bVar3 = 0;
    }
    else {
LAB_142c7e85f:
      plVar8 = plStack_320;
      local_58 = SUB84(local_2b8,0);
      uStack_54 = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uStack_50 = SUB84(plStack_2b0,0);
      uStack_4c = (undefined4)((ulonglong)plStack_2b0 >> 0x20);
      if (plStack_2b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_2b0 + 1) = (int)plStack_2b0[1] + 1;
        UNLOCK();
      }
      local_258._8_8_ = plStack_320;
      local_258._0_8_ = local_328;
      local_328 = local_2b8;
      plStack_320 = plStack_2b0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        lVar18 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar14 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar14;
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*(longlong *)local_258._8_8_ + 8))(local_258._8_8_,1);
          }
        }
      }
    }
LAB_142c7e8e3:
    plVar8 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_2b0 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar14 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
        }
      }
    }
  }
  else if (local_347 == '\x03') {
    plVar8 = (longlong *)param_2[1];
    local_346 = -1;
    if ((char *)plVar8[1] < (char *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_346,1);
    }
    else {
      local_346 = *(char *)*plVar8;
      *plVar8 = *plVar8 + 1;
    }
    local_308._0_2_ = CONCAT11(local_346,(char)local_308);
    if (local_346 == '\x02') {
      plVar8 = (longlong *)param_2[1];
      if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_318,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_318,4);
        }
      }
      else {
        local_318 = *(int *)*plVar8;
        *plVar8 = *plVar8 + 4;
      }
      iVar20 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      if (0 < local_318) {
        do {
          lVar18 = *(longlong *)(param_3 + 0x20);
          local_238 = param_2[0x15];
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                    (lVar18 + 0x30,0);
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                    (lVar18 + 0x80,0);
          *(undefined1 *)(lVar18 + 0x29) = 1;
          cVar1 = FUN_142c79510(&local_208,param_2,*(undefined8 *)(param_3 + 0x20),&local_2c0);
          if (cVar1 == '\0') {
            local_358 = &local_238;
            local_350 = param_3;
            FUN_142c81880(param_1,2,param_2,&local_308);
          }
          puVar6 = (undefined8 *)FUN_142c6d300(local_328,&local_208,uStack_200 & 0xff);
          iVar20 = iVar20 + 1;
          *puVar6 = local_208;
          puVar6[1] = uStack_200;
          puVar6[2] = local_1f8;
          puVar6[3] = uStack_1f0;
          puVar6[4] = local_1e8;
          puVar6[5] = uStack_1e0;
          puVar6[6] = local_1d8;
        } while (iVar20 < local_318);
      }
      if (local_318 != 0) {
        lVar18 = *(longlong *)(param_3 + 0x20);
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                  (lVar18 + 0x30,0);
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                  (lVar18 + 0x80,0);
        *(undefined1 *)(lVar18 + 0x29) = 1;
        local_2a8 = (longlong *)0x0;
        local_2a0 = 0;
        local_290 = (longlong *)0x0;
        local_288 = 0;
        puVar6 = (undefined8 *)operator_new(0x28,&local_290);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &DAT_143f3ed00;
          puVar6[1] = local_328;
          puVar6[2] = &LAB_142c64dc8;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[4] = uVar7;
          *puVar6 = &PTR_GetPoolName_143f3ed48;
        }
        iVar20 = local_288;
        plVar8 = local_290;
        if ((local_288 == 0) || (local_290 == (longlong *)0x0)) {
          if ((local_2a0 != 0) && (local_2a8 != (longlong *)0x0)) {
            (**(code **)(*local_2a8 + 0x28))(local_2a8,0);
            if (local_2a8 != (longlong *)0x0) {
              local_2a8 = (longlong *)FMemory::Realloc(local_2a8,0,0);
            }
            local_2a0 = 0;
          }
        }
        else {
          (**(code **)(*local_290 + 0x30))(local_290,&local_2a8);
        }
        if (iVar20 == 0) {
LAB_142c7e431:
          if (plVar8 != (longlong *)0x0) {
            FMemory::Free(plVar8);
          }
        }
        else if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          plVar8 = (longlong *)FMemory::Realloc(plVar8,0,0);
          local_288 = 0;
          local_290 = plVar8;
          goto LAB_142c7e431;
        }
        uVar22 = local_2d0;
        lVar18 = (longlong)(int)(uint)local_2d0;
        iVar20 = (uint)local_2d0 + 1;
        local_2d0 = CONCAT44(local_2d0._4_4_,iVar20);
        if ((int)local_2d0._4_4_ < iVar20) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_2d8,uVar22 & 0xffffffff);
        }
        pplVar9 = (longlong **)(local_2d8 + lVar18 * 2);
        *pplVar9 = (longlong *)0x0;
        *(undefined4 *)(pplVar9 + 1) = 0;
        if (((&local_2a8 != pplVar9) && (local_2a0 != 0)) && (local_2a8 != (longlong *)0x0)) {
          (**(code **)(*local_2a8 + 0x30))();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2a8);
      }
    }
    else if (local_346 == '\x04') {
      plVar8 = (longlong *)param_2[1];
      if ((undefined1 *)plVar8[1] < (undefined1 *)*plVar8 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_345,1);
      }
      else {
        local_345 = *(undefined1 *)*plVar8;
        *plVar8 = *plVar8 + 1;
      }
      *(undefined1 *)(local_328 + 6) = local_345;
      uVar7 = TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
                        (local_b0,local_328,FUN_142c7b480);
      uVar22 = local_2d0;
      lVar18 = (longlong)(int)(uint)local_2d0;
      iVar20 = (uint)local_2d0 + 1;
      local_2d0 = CONCAT44(local_2d0._4_4_,iVar20);
      if ((int)local_2d0._4_4_ < iVar20) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_2d8,uVar22 & 0xffffffff);
      }
      plVar8 = local_2d8 + lVar18 * 2;
      *plVar8 = 0;
      *(undefined4 *)(plVar8 + 1) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar8,uVar7);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b0);
      TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x18,local_2e8[0]);
      FUN_142c80700(param_1,local_2e8[0]);
    }
    else {
      lVar18 = *(longlong *)(param_3 + 0x20);
      local_230 = param_2[0x15];
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                (lVar18 + 0x30,0);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                (lVar18 + 0x80,0);
      *(undefined1 *)(lVar18 + 0x29) = 1;
      cVar1 = (**(code **)(*local_328 + 0x90))(local_328,&local_308,param_3,param_2);
      if (cVar1 == '\0') {
        local_358 = &local_230;
        local_350 = param_3;
        FUN_142c81880(param_1,3,param_2,&local_308);
      }
    }
  }
  goto LAB_142c7f5f7;
  while (piVar14 = piVar14 + 0x30, piVar14 != piVar16) {
LAB_142c7ece0:
    if (*piVar14 == 0) goto LAB_142c7ecf6;
  }
LAB_142c7ecf1:
  cVar1 = '\0';
LAB_142c7ecf9:
  local_340 = uVar21 & 0xfffffffe;
  local_344 = cVar1;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_88 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    bVar3 = local_348;
    if ((int)lVar18 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar14 = (int *)((longlong)plVar8 + 0xc);
      iVar20 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      bVar3 = local_348;
      if (iVar20 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        bVar3 = local_348;
      }
    }
  }
  pcVar23 = (char *)0x0;
  if (((puVar6 == (undefined8 *)0x0) || (lVar10 == 0)) || ((bVar3 == 0 || (cVar1 != '\0')))) {
    (**(code **)(*param_2 + 0x1f0))
              (param_2,param_2[0x12],(int)param_2[0x15],(longlong)(local_33c + -0x20));
  }
  else {
    plVar8 = (longlong *)param_2[1];
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_314,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_314,4);
      }
    }
    else {
      local_314[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    lVar13 = local_2c8;
    lVar18 = local_330;
    iVar20 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    if (0 < local_314[0]) {
      do {
        lVar19 = *(longlong *)(lVar13 + 0x20);
        local_218 = param_2[0x15];
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                  (lVar19 + 0x30,0);
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                  (lVar19 + 0x80,0);
        *(undefined1 *)(lVar19 + 0x29) = 1;
        cVar1 = FUN_142c79510(&local_f8,param_2,*(undefined8 *)(lVar13 + 0x20),local_2bf);
        if (cVar1 == '\0') {
          local_358 = &local_218;
          local_350 = lVar13;
          FUN_142c81880(lVar18,2,param_2,&local_308);
        }
        lVar19 = (longlong)(int)local_1a0;
        iVar5 = (int)local_1a0 + 1;
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar5);
        if (local_1a0._4_4_ < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1a8);
        }
        iVar20 = iVar20 + 1;
        lVar19 = lVar19 * 0x38;
        *(undefined8 *)(lVar19 + local_1a8) = local_f8;
        ((undefined8 *)(lVar19 + local_1a8))[1] = uStack_f0;
        puVar15 = (undefined8 *)(lVar19 + 0x10 + local_1a8);
        *puVar15 = local_e8;
        puVar15[1] = uStack_e0;
        puVar15 = (undefined8 *)(lVar19 + 0x20 + local_1a8);
        *puVar15 = local_d8;
        puVar15[1] = uStack_d0;
        *(undefined8 *)(lVar19 + 0x30 + local_1a8) = local_c8;
        cVar1 = local_344;
      } while (iVar20 < local_314[0]);
    }
    if (*(int *)(lVar10 + 0x1d8) != *(int *)(lVar10 + 0x204)) {
      lVar18 = *(longlong *)(lVar10 + 0x210);
      if (*(longlong *)(lVar10 + 0x210) == 0) {
        lVar18 = lVar10 + 0x208;
      }
      iVar20 = *(int *)(lVar18 + ((longlong)*(int *)(lVar10 + 0x218) - 1U & (longlong)local_128[0])
                                 * 4);
      if (iVar20 != -1) {
        do {
          pcVar17 = (char *)((longlong)iVar20 * 0x20 + *(longlong *)(lVar10 + 0x1d0));
          if (*pcVar17 == local_128[0]) {
            if ((iVar20 != -1) && (pcVar17 != (char *)0x0)) {
              pcVar23 = pcVar17 + 8;
              if (pcVar23 == (char *)0x0) goto LAB_142c7ef4e;
              uVar21 = local_340 | 2;
              local_270 = *(longlong **)pcVar23;
              local_268 = *(longlong **)(pcVar17 + 0x10);
              if (local_268 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_268 + 1) = (int)local_268[1] + 1;
                UNLOCK();
              }
              pplVar9 = &local_270;
              local_340 = uVar21;
              goto LAB_142c7ef84;
            }
            break;
          }
          iVar20 = *(int *)(pcVar17 + 0x18);
        } while (iVar20 != -1);
      }
    }
    pcVar23 = (char *)0x0;
LAB_142c7ef4e:
    uVar21 = local_340 | 4;
    local_358 = (longlong *)((ulonglong)local_358 & 0xffffffffffffff00);
    local_340 = uVar21;
    pplVar9 = (longlong **)FUN_142c79d10(lVar10,local_78,puVar6,&local_1c8);
    if (&local_328 != pplVar9) {
LAB_142c7ef84:
      local_328 = *pplVar9;
      *pplVar9 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_320,pplVar9 + 1);
    }
    plVar8 = local_70;
    if (((uVar21 & 4) != 0) && (local_340 = uVar21 & 0xfffffffb, local_70 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_70 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar14 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = local_268;
    if (((local_340 & 2) != 0) && (local_340 = local_340 & 0xfffffffd, local_268 != (longlong *)0x0)
       ) {
      LOCK();
      plVar11 = local_268 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar14 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_268 + 8))(local_268,1);
        }
      }
    }
    plVar8 = local_328;
    *(int *)((longlong)local_328 + 0xa4) = local_2e8[0];
    local_210 = param_2[0x15];
    lVar18 = *(longlong *)(local_2c8 + 0x20);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x30,0);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x80,0);
    lVar13 = local_2c8;
    *(undefined1 *)(lVar18 + 0x29) = 1;
    cVar4 = (**(code **)(*plVar8 + 0x90))(plVar8,&local_308,local_2c8,param_2);
    if (cVar4 == '\0') {
      local_358 = &local_210;
      local_350 = lVar13;
      FUN_142c81880(local_330,3,param_2,&local_308);
    }
    lVar18 = *(longlong *)(lVar13 + 0x20);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x30,0);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(lVar18 + 0x80,0);
    *(undefined1 *)(lVar18 + 0x29) = 1;
  }
  param_1 = local_330;
  if (local_348 == 0) {
    local_343 = 0;
    if (local_338 == '\0') {
      local_350 = local_2c8;
      local_358 = &lStack_2f0;
      FUN_142c81880(local_330,0,param_2,&local_308);
    }
    goto LAB_142c7f574;
  }
  if (pcVar23 != (char *)0x0) {
    plVar11 = local_2d8 + (longlong)(int)(uint)local_2d0 * 2;
    for (plVar8 = local_2d8; local_330 = param_1, plVar8 != plVar11; plVar8 = plVar8 + 2) {
      if ((((int)plVar8[1] == 0) || ((longlong *)*plVar8 == (longlong *)0x0)) ||
         (cVar1 = (**(code **)(*(longlong *)*plVar8 + 0x18))(), cVar1 == '\0')) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      if (bVar24) {
        if ((int)plVar8[1] == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)*plVar8;
        }
        (**(code **)(*plVar12 + 0x40))();
      }
      param_1 = local_330;
    }
    goto LAB_142c7f574;
  }
  if (((puVar6 == (undefined8 *)0x0) || (lVar10 == 0)) ||
     ((local_328 == (longlong *)0x0 || (cVar1 != '\0')))) goto LAB_142c7f574;
  iVar20 = *(int *)(lVar10 + 0x230);
  *(int *)(lVar10 + 0x230) = iVar20 + 1;
  if (*(int *)(lVar10 + 0x234) < iVar20 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar10 + 0x228,iVar20);
  }
  puVar15 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)(lVar10 + 0x228));
  *puVar15 = local_328;
  puVar15[1] = plStack_320;
  if (plStack_320 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FUN_142c6ee30(lVar10,puVar6);
  local_337 = 2;
  local_280 = 0;
  local_240 = *plVar8;
  if (local_240 != 0) {
    plVar11 = *(longlong **)(lVar10 + 0x180);
    plVar8 = plVar11 + (longlong)*(int *)(lVar10 + 0x188) * 3;
    for (; plVar11 != plVar8; plVar11 = plVar11 + 3) {
      if (*plVar11 == local_240) {
        if (plVar11[1] != 0) {
          *(undefined1 *)(plVar11[1] + 0x30) = 2;
          local_c0 = plVar11[1];
          local_b8 = plVar11[2];
          if (local_b8 != 0) {
            LOCK();
            *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
            UNLOCK();
          }
          FUN_142c84e90(lVar10,&local_c0,&local_337);
        }
        break;
      }
    }
  }
  plVar8 = local_328;
  (**(code **)(*local_328 + 0x30))(local_328);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  lVar18 = *(longlong *)(lVar10 + 0x120);
  if (lVar18 == 0) {
    lVar18 = FUN_1423407b0(lVar10);
  }
  lVar18 = FUN_142c71720(lVar18);
  if (lVar18 == 0) {
    lVar18 = *(longlong *)(lVar10 + 0x120);
    if (lVar18 == 0) {
      lVar18 = FUN_1423407b0(lVar10);
    }
    puVar6 = (undefined8 *)FUN_142c86b70(local_328,local_68);
    FWeakObjectPtr::operator=(&local_278,lVar18);
    local_1d0 = local_278;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1466acd90,&local_298,&local_1d0);
    if ((local_298 == -1) || (lVar18 = (longlong)local_298 * 0x20 + _DAT_1466acd90, lVar18 == 0)) {
      local_248 = &local_278;
      FUN_142c60360(&DAT_1466acd90,&local_294,&local_248,0);
      lVar18 = (longlong)local_294 * 0x20 + _DAT_1466acd90;
    }
    iVar20 = *(int *)(lVar18 + 0x10);
    *(int *)(lVar18 + 0x10) = iVar20 + 1;
    if (*(int *)(lVar18 + 0x14) < iVar20 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(lVar18 + 8),iVar20);
    }
    puVar15 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)(lVar18 + 8));
    *puVar15 = *puVar6;
    lVar18 = puVar6[1];
    puVar15[1] = lVar18;
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)puVar6[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar14 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          lVar18 = *plVar8;
          goto LAB_142c7f501;
        }
      }
    }
  }
  else {
    AActor::SetActorTickEnabled(lVar18,1);
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
      UNLOCK();
    }
    iVar20 = *(int *)(lVar18 + 0x468);
    *(int *)(lVar18 + 0x468) = iVar20 + 1;
    if (*(int *)(lVar18 + 0x46c) < iVar20 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar18 + 0x460,iVar20);
    }
    plVar8 = plStack_320;
    puVar6 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)(lVar18 + 0x460));
    *puVar6 = local_328;
    puVar6[1] = plStack_320;
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_320 + 1) = (int)plStack_320[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plStack_320 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_320)(plStack_320);
        LOCK();
        piVar14 = (int *)((longlong)plVar8 + 0xc);
        iVar20 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          lVar18 = *plStack_320;
          plVar8 = plStack_320;
LAB_142c7f501:
          (**(code **)(lVar18 + 8))(plVar8,1);
        }
      }
    }
  }
  FUN_142c66b50(lVar10,&local_240,&local_328);
  plVar11 = local_2d8 + (longlong)(int)(uint)local_2d0 * 2;
  param_1 = local_330;
  for (plVar8 = local_2d8; local_330 = param_1, plVar8 != plVar11; plVar8 = plVar8 + 2) {
    if ((((int)plVar8[1] == 0) || ((longlong *)*plVar8 == (longlong *)0x0)) ||
       (cVar1 = (**(code **)(*(longlong *)*plVar8 + 0x18))(), cVar1 == '\0')) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if (bVar24) {
      plVar12 = (longlong *)0x0;
      if ((int)plVar8[1] != 0) {
        plVar12 = (longlong *)*plVar8;
      }
      (**(code **)(*plVar12 + 0x40))();
    }
    param_1 = local_330;
  }
LAB_142c7f574:
  local_1c8 = &PTR_FUN_143ff6170;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    piVar14 = (int *)((longlong)local_108 + 0xc);
    iVar20 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if ((iVar20 == 1) && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 8))(local_108,1);
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_140);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_158);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_170);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_188);
  bVar3 = local_348;
  if (local_1a8 != 0) {
    FMemory::Free();
    bVar3 = local_348;
  }
LAB_142c7f5f7:
  cVar1 = (**(code **)(*param_2 + 0xa0))();
  param_3 = local_2c8;
  goto joined_r0x000142c7e0e2;
}



// FUNCTION 142c7f720 FUN_142c7f720 body=519 status=ok
// SIG undefined FUN_142c7f720(void)

void FUN_142c7f720(longlong *param_1)

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
  char *pcVar11;
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
        if (bVar4) goto LAB_142c7f85f;
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
LAB_142c7f85f:
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
        pcVar11 = (char *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (int)*plVar2 - 1U & (int)*pcVar11;
        *(uint *)(pcVar11 + 0x1c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(pcVar11 + 0x18) =
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



// FUNCTION 142c7f930 FUN_142c7f930 body=339 status=ok
// SIG undefined FUN_142c7f930(void)

undefined8 FUN_142c7f930(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
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
  iVar6 = *(int *)((longlong)plVar7 + ((longlong)param_2 & uVar8) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while( true ) {
    lVar4 = (longlong)iVar6 * 0x20;
    if (*(char *)(lVar4 + lVar3) == param_2) break;
    iVar6 = *(int *)(lVar4 + 0x18 + lVar3);
    if (iVar6 == -1) {
      return 0;
    }
  }
  lVar4 = (longlong)iVar6 * 0x20;
  uVar8 = (longlong)*(int *)(lVar4 + 0x1c + lVar3) & uVar8;
  piVar5 = (int *)((longlong)plVar7 + uVar8 * 4);
  iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
  do {
    if (iVar2 == -1) {
LAB_142c7fa00:
      plVar7 = *(longlong **)(lVar4 + 0x10 + *param_1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar5 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      return 1;
    }
    if (iVar2 == iVar6) {
      *piVar5 = *(int *)(lVar4 + lVar3 + 0x18);
      goto LAB_142c7fa00;
    }
    piVar5 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
    iVar2 = *piVar5;
  } while( true );
}



// FUNCTION 142c7fa90 Remove body=247 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
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
      lVar3 = (longlong)iVar5 * 0x20;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x20;
        uVar7 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000142c7fb22;
      }
      iVar5 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000142c7fb22:
  if (iVar1 == -1) {
LAB_142c7fb50:
    FUN_142c63830(*param_1 + 8 + lVar3);
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_142c7fb50;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x000142c7fb22;
}



// FUNCTION 142c7fb90 FUN_142c7fb90 body=369 status=ok
// SIG undefined FUN_142c7fb90(void)

undefined8 FUN_142c7fb90(longlong *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar6 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar4 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + *param_1);
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar3 != '\0') break;
    iVar1 = puVar8[6];
    piVar7 = puVar8 + 6;
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x20;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x1c + lVar6));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x18 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar7;
    }
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>((longlong)iVar1 * 0x20 + 8 + *param_1);
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 142c7fd10 Remove body=355 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar9 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar7 + lVar9 * 4);
  iVar3 = *(int *)((longlong)plVar7 + lVar9 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    lVar8 = (longlong)iVar3;
    lVar5 = *param_1;
    local_res1c = *(undefined4 *)(lVar5 + 4 + lVar8 * 0x18);
    lVar9 = lVar5 + lVar8 * 0x18;
    local_res18 = *(undefined4 *)(lVar5 + lVar8 * 0x18);
    local_res8 = *param_2;
    local_resc = param_2[1];
    cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar6 != '\0') break;
    iVar3 = *(int *)(lVar9 + 0x10);
    piVar1 = (int *)(lVar9 + 0x10);
  }
  iVar3 = *piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar9 = lVar5 + (longlong)iVar3 * 0x18;
    lVar8 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x14));
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar7 + lVar8 * 4);
    iVar4 = *(int *)((longlong)plVar7 + lVar8 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar3) {
        *puVar2 = *(undefined4 *)(lVar9 + 0x10);
        break;
      }
      lVar8 = (longlong)iVar4 * 3 + 2;
      puVar2 = (undefined4 *)(lVar5 + lVar8 * 8);
      iVar4 = *(int *)(lVar5 + lVar8 * 8);
    }
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,(longlong)iVar3,1);
  return 1;
}



// FUNCTION 142c7fe80 FUN_142c7fe80 body=369 status=ok
// SIG undefined FUN_142c7fe80(void)

undefined8 FUN_142c7fe80(longlong *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar6 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar4 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar4 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + *param_1);
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar3 != '\0') break;
    iVar1 = puVar8[6];
    piVar7 = puVar8 + 6;
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x20;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar9 + 0x1c + lVar6));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x18 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar7;
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
            ((longlong)iVar1 * 0x20 + 8 + *param_1);
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 142c80000 FUN_142c80000 body=247 status=ok
// SIG undefined FUN_142c80000(void)

undefined8 FUN_142c80000(longlong *param_1,int *param_2)

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
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)*param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x20;
      if (*(int *)(lVar3 + lVar2) == *param_2) {
        lVar3 = (longlong)iVar5 * 0x20;
        uVar7 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000142c80092;
      }
      iVar5 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000142c80092:
  if (iVar1 == -1) {
LAB_142c800c0:
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(*param_1 + 8 + lVar3)
    ;
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_142c800c0;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x000142c80092;
}



// FUNCTION 142c80100 FUN_142c80100 body=1309 status=ok
// SIG undefined FUN_142c80100(void)

void FUN_142c80100(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined4 *local_118;
  undefined8 local_110;
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  undefined4 local_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int *local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*param_2 != 0) {
    iVar6 = FUN_142235230();
    lVar10 = *param_2;
    if ((*(char *)(lVar10 + 0x31) == '\x02') || (iVar6 == 3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((*(byte *)(lVar10 + 0x38) & 2) == 0) {
      if ((*(longlong *)(lVar10 + 0x18) != 0) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        FUN_142c80fd0(*(longlong *)(lVar10 + 0x18),*(longlong *)(lVar10 + 0x10) + 0x48);
        lVar10 = *param_2;
      }
      *(undefined1 *)(lVar10 + 0x30) = *param_3;
      if (iVar6 != 3) {
        (**(code **)(*(longlong *)*param_2 + 0x18))();
      }
      (**(code **)(*(longlong *)*param_2 + 0x20))();
      if (bVar4) {
        plVar15 = (longlong *)param_2[1];
        lVar10 = *param_2;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        if ((*(char *)(lVar10 + 0x31) == '\x02') || (iVar6 = FUN_142235230(param_1), iVar6 == 3)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((((*(float *)(lVar10 + 0xac) == 0.0) && (bVar4)) && (*(int *)(lVar10 + 0xa4) != -1)) &&
           ((lVar7 = FUN_1422325e0(param_1), lVar7 != 0 &&
            (lVar7 = FUN_1422325e0(param_1), *(int *)(lVar7 + 0xa0) != 0)))) {
          lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          *(undefined4 *)(lVar10 + 0xac) = *(undefined4 *)(lVar7 + 0x790);
          local_80 = (int *)(lVar10 + 0xa4);
          local_78 = FUN_142c86b70(lVar10,local_70);
          FUN_1406c2410(param_1 + 0x98,local_c0,&local_80,0);
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_68 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)local_68 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_68 + 8))(local_68,1);
              }
            }
          }
          (**(code **)(*param_1 + 0x260))(param_1);
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar15 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
      }
      if (*(longlong *)(*param_2 + 0x18) != 0) {
        TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
                  (*(longlong *)(*param_2 + 0x18) + 0x228,param_2);
        puVar12 = (undefined4 *)0x0;
        local_118 = (undefined4 *)0x0;
        local_110 = 0;
        local_108 = 0;
        lVar10 = *(longlong *)(*param_2 + 0x18);
        plVar15 = (longlong *)(lVar10 + 0x238);
        uStack_104 = 1;
        uVar3 = *(uint *)(lVar10 + 0x260);
        puStack_100 = (uint *)(lVar10 + 0x248);
        uStack_f4 = 0;
        uStack_f0 = 0;
        if (uVar3 != 0) {
          puVar14 = *(uint **)(lVar10 + 600);
          if (*(uint **)(lVar10 + 600) == (uint *)0x0) {
            puVar14 = puStack_100;
          }
          uVar9 = *puVar14;
          puVar8 = puVar12;
          puVar11 = puVar12;
          while (uVar9 == 0) {
            iVar6 = (int)puVar8;
            uStack_f0 = (int)puVar11 + 0x20;
            puVar11 = (undefined4 *)(ulonglong)uStack_f0;
            local_108 = iVar6 + 1;
            puVar8 = (undefined4 *)(ulonglong)local_108;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
            goto LAB_142c803d5;
            uVar9 = puVar14[(longlong)iVar6 + 1];
          }
          uStack_104 = -uVar9 & uVar9;
          local_bc = 0x1f;
          if (uStack_104 != 0) {
            for (; uStack_104 >> local_bc == 0; local_bc = local_bc + -1) {
            }
          }
          if (uStack_104 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - local_bc;
          }
          uStack_f4 = (uStack_f0 - iVar6) + 0x1f;
          if ((int)uVar3 < (int)uStack_f4) {
LAB_142c803d5:
            uStack_f4 = uVar3;
          }
        }
        local_f8 = 0xffffffff;
        uStack_cc = *(uint *)(lVar10 + 0x260);
        uStack_58 = CONCAT44(uStack_104,local_108);
        uStack_90 = CONCAT44(uStack_f4,0xffffffff);
        local_88 = CONCAT44(uStack_ec,uStack_f0);
        local_d0 = -1 << ((byte)uStack_cc & 0x1f);
        local_c8 = uStack_cc & 0xffffffe0;
        local_e0 = (int)uStack_cc >> 5;
        uStack_a0 = local_108;
        uStack_9c = uStack_104;
        if (uStack_cc != uVar3) {
          puVar14 = *(uint **)(lVar10 + 600);
          if (*(uint **)(lVar10 + 600) == (uint *)0x0) {
            puVar14 = puStack_100;
          }
          uVar9 = puVar14[local_e0] & local_d0;
          while (uVar9 == 0) {
            lVar7 = (longlong)local_e0;
            local_c8 = local_c8 + 0x20;
            iVar6 = local_e0 + 1;
            bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e0;
            local_e0 = iVar6;
            if (bVar4) goto LAB_142c804c1;
            uVar9 = puVar14[lVar7 + 1];
            local_d0 = 0xffffffff;
          }
          uVar9 = -uVar9 & uVar9;
          local_b8 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> local_b8 == 0; local_b8 = local_b8 + -1) {
            }
          }
          if (uVar9 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - local_b8;
          }
          uStack_cc = (local_c8 - iVar6) + 0x1f;
          if ((int)uVar3 < (int)uStack_cc) {
LAB_142c804c1:
            uStack_cc = uVar3;
          }
        }
        uVar3 = uStack_cc;
        local_110._4_4_ = 0;
        puVar8 = puVar12;
        iVar6 = local_110._4_4_;
        local_b0 = plVar15;
        local_98 = puStack_100;
        local_60 = plVar15;
        puStack_50 = puStack_100;
        uStack_48 = uStack_90;
        uStack_40 = local_88;
        local_a8 = plVar15;
        while( true ) {
          iVar13 = (int)puVar8;
          if (((uStack_90._4_4_ == uVar3) && (local_98 == (uint *)(lVar10 + 0x248))) &&
             (local_a8 == plVar15)) break;
          puVar11 = (undefined4 *)((longlong)(int)uStack_90._4_4_ * 0x20 + *local_a8);
          cVar5 = FWeakObjectPtr::IsValid(puVar11);
          if (cVar5 == '\0') {
            uVar9 = iVar13 + 1;
            local_110 = CONCAT44(local_110._4_4_,uVar9);
            if (iVar6 < (int)uVar9) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,puVar8);
              puVar12 = local_118;
              iVar6 = local_110._4_4_;
              uVar9 = (uint)local_110;
            }
            puVar8 = (undefined4 *)(ulonglong)uVar9;
            puVar12[(longlong)iVar13 * 2] = *puVar11;
            puVar12[(longlong)iVar13 * 2 + 1] = puVar11[1];
          }
          uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        }
        for (puVar8 = puVar12; puVar8 != puVar12 + (longlong)iVar13 * 2; puVar8 = puVar8 + 2) {
          local_e8 = *puVar8;
          local_e4 = puVar8[1];
          TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
          ::Remove(*(longlong *)(*param_2 + 0x18) + 0x238,&local_e8);
        }
        if (puVar12 != (undefined4 *)0x0) {
          FMemory::Free(puVar12);
        }
      }
    }
  }
  plVar15 = (longlong *)param_2[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return;
}



// FUNCTION 142c80620 FUN_142c80620 body=89 status=ok
// SIG undefined FUN_142c80620(void)

void FUN_142c80620(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_2);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      if (param_3 == '\0') {
        FAlphaBlend::SetBlendTime(lVar1 + 0x38,0);
      }
      *(undefined1 *)(lVar1 + 0x78) = 1;
      FUN_1422a6150(lVar1);
    }
  }
  return;
}



// FUNCTION 142c80680 FUN_142c80680 body=121 status=ok
// SIG undefined FUN_142c80680(void)

void FUN_142c80680(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0xa0);
    if (*(int *)(lVar2 + 0x1d8) != *(int *)(lVar2 + 0x204)) {
      lVar4 = *(longlong *)(lVar2 + 0x210);
      if (*(longlong *)(lVar2 + 0x210) == 0) {
        lVar4 = lVar2 + 0x208;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(lVar2 + 0x218) - 1U & (longlong)cVar1) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(lVar2 + 0x1d0);
        while (*(char *)((longlong)iVar3 * 0x20 + lVar4) != cVar1) {
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar4);
          if (iVar3 == -1) {
            return;
          }
        }
        if (iVar3 != -1) {
          FUN_142c7f930((longlong *)(lVar2 + 0x1d0),cVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142c80700 FUN_142c80700 body=1074 status=ok
// SIG undefined FUN_142c80700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c80700(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  byte bVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 auStack_118 [32];
  uint local_f8;
  int local_f4;
  int local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 *local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  uint *local_90;
  ulonglong local_88;
  longlong *local_80;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar9 = (longlong *)(param_1 + 0xb8);
  local_48 = (undefined1 *)0x0;
  puVar20 = (uint *)(param_1 + 200);
  local_40 = 0;
  uVar4 = *(uint *)(param_1 + 0xe0);
  local_f0 = 0;
  uStack_ec = 1;
  uStack_dc = 0;
  iStack_d8 = 0;
  if (uVar4 != 0) {
    puVar18 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar18 = puVar20;
    }
    uVar5 = *puVar18;
    while (uVar5 == 0) {
      lVar12 = (longlong)local_f0;
      iStack_d8 = iStack_d8 + 0x20;
      iVar11 = local_f0 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f0;
      local_f0 = iVar11;
      if (bVar7) goto LAB_142c80801;
      uVar5 = puVar18[lVar12 + 1];
    }
    uStack_ec = -uVar5 & uVar5;
    local_a0 = 0x1f;
    if (uStack_ec != 0) {
      for (; uStack_ec >> local_a0 == 0; local_a0 = local_a0 + -1) {
      }
    }
    if (uStack_ec == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_a0;
    }
    uStack_dc = (iStack_d8 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_dc) {
LAB_142c80801:
      uStack_dc = uVar4;
    }
  }
  local_e0 = 0xffffffff;
  uVar5 = *(uint *)(param_1 + 0xe0);
  uStack_c0 = CONCAT44(uStack_ec,local_f0);
  uStack_68 = 0xffffffff;
  uStack_64 = uStack_dc;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_c8 = (int)uVar5 >> 5;
  uStack_c4 = (undefined4)((ulonglong)plVar9 >> 0x20);
  uVar21 = -1 << ((byte)uVar5 & 0x1f);
  uStack_b0 = uVar5 & 0xffffffe0;
  uStack_b8 = CONCAT44(uVar5,uVar21);
  uStack_ac = uStack_dc;
  iStack_78 = local_f0;
  uStack_74 = uStack_ec;
  if (uVar5 != uVar4) {
    puVar18 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar18 = puVar20;
    }
    uVar21 = puVar18[local_c8] & uVar21;
    while (uVar21 == 0) {
      lVar12 = (longlong)local_c8;
      uStack_b0 = uStack_b0 + 0x20;
      iVar11 = local_c8 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar11;
      if (bVar7) goto LAB_142c808db;
      uVar21 = puVar18[lVar12 + 1];
      uStack_b8 = 0xffffffff;
    }
    uVar21 = -uVar21 & uVar21;
    local_9c = 0x1f;
    if (uVar21 != 0) {
      for (; uVar21 >> local_9c == 0; local_9c = local_9c + -1) {
      }
    }
    if (uVar21 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_9c;
    }
    iVar11 = (uStack_b0 - iVar11) + 0x1f;
    uStack_b8 = CONCAT44(iVar11,(undefined4)uStack_b8);
    if ((int)uVar4 < iVar11) {
LAB_142c808db:
      uStack_b8 = CONCAT44(uVar4,(undefined4)uStack_b8);
    }
  }
  local_88 = uStack_b8 >> 0x20;
  local_f4 = param_2;
  puStack_e8 = puVar20;
  local_98 = plVar9;
  local_90 = puVar20;
  local_70 = puVar20;
  local_60 = uStack_a8;
  local_80 = plVar9;
  do {
    puVar13 = (undefined1 *)0x0;
    if (((uStack_64 == (uint)local_88) && (local_70 == puVar20)) && (local_80 == plVar9)) {
      puVar22 = local_58;
      if (local_48 != (undefined1 *)0x0) {
        puVar22 = puVar13;
      }
      uVar15 = (ulonglong)puVar22 | (ulonglong)local_48;
      uVar3 = uVar15 + (longlong)(int)local_40 * 4;
      for (; uVar15 != uVar3; uVar15 = uVar15 + 4) {
        FUN_142c80000(plVar9,uVar15);
      }
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      return;
    }
    puVar14 = (undefined4 *)((longlong)(int)uStack_64 * 0x20 + *local_80);
    lVar12 = (longlong)(int)puVar14[4];
    local_d0 = puVar14;
    if (puVar14[4] != 0) {
      local_f8 = 0;
      puVar22 = puVar13;
      if ((**(longlong **)(puVar14 + 2) == 0) ||
         (*(int *)(**(longlong **)(puVar14 + 2) + 0xa4) == local_f4)) {
        bVar19 = 0;
        puVar23 = puVar13;
      }
      else {
        bVar19 = 1;
        puVar23 = puVar13;
      }
      do {
        iVar11 = (int)puVar23;
        puVar22 = puVar22 + 1;
        puVar23 = (undefined1 *)(ulonglong)(iVar11 + 1);
        if ((longlong)puVar22 < lVar12) {
          plVar9 = (longlong *)((longlong)puVar22 * 0x10 + *(longlong *)(puVar14 + 2));
          do {
            if ((*plVar9 == 0) || (*(int *)(*plVar9 + 0xa4) == local_f4)) {
              bVar10 = 0;
            }
            else {
              bVar10 = 1;
            }
            if (bVar19 != bVar10) break;
            puVar23 = (undefined1 *)(ulonglong)((int)puVar23 + 1);
            puVar22 = puVar22 + 1;
            plVar9 = plVar9 + 2;
          } while ((longlong)puVar22 < lVar12);
        }
        iVar16 = (int)puVar23 - iVar11;
        if (bVar19 == 0) {
          if (iVar16 != 0) {
            plVar9 = (longlong *)((longlong)iVar11 * 0x10 + 8 + *(longlong *)(puVar14 + 2));
            do {
              plVar6 = (longlong *)*plVar9;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar6 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  iVar11 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
              plVar9 = plVar9 + 2;
              iVar16 = iVar16 + -1;
              puVar14 = local_d0;
            } while (iVar16 != 0);
          }
        }
        else {
          iVar17 = (int)puVar13;
          if (iVar17 != iVar11) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar17 * 0x10 + *(longlong *)(puVar14 + 2)),
                       (void *)((longlong)iVar11 * 0x10 + *(longlong *)(puVar14 + 2)),
                       (longlong)iVar16 << 4);
          }
          local_f8 = iVar17 + iVar16;
        }
        puVar13 = (undefined1 *)(ulonglong)local_f8;
        bVar19 = bVar19 ^ 1;
      } while ((longlong)puVar22 < lVar12);
      puVar14[4] = local_f8;
      puVar20 = local_90;
      plVar9 = local_98;
    }
    uVar3 = local_40;
    if (puVar14[4] == 0) {
      lVar12 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (local_40._4_4_ < iVar11) {
        TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_58,uVar3 & 0xffffffff);
      }
      puVar13 = local_58;
      if (local_48 != (undefined1 *)0x0) {
        puVar13 = local_48;
      }
      *(undefined4 *)(puVar13 + lVar12 * 4) = *local_d0;
    }
    uStack_68 = uStack_68 & ~uStack_74;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
  } while( true );
}



// FUNCTION 142c80b40 FUN_142c80b40 body=609 status=ok
// SIG undefined FUN_142c80b40(void)

void FUN_142c80b40(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong *plVar12;
  int local_res20 [2];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  
  FWeakObjectPtr::operator=(&local_58);
  cVar3 = FWeakObjectPtr::IsValid(&local_58);
  if (cVar3 == '\0') {
    plVar12 = *(longlong **)(param_3 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        return;
      }
    }
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x390);
    local_50 = local_58;
    local_38 = plVar12;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar12,local_res20,&local_50);
    pwVar10 = (wchar_t *)0x0;
    pwVar5 = pwVar10;
    if (local_res20[0] != -1) {
      pwVar5 = (wchar_t *)((longlong)local_res20[0] * 0x20 + *plVar12);
    }
    pwVar9 = pwVar5 + 4;
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar9 = pwVar10;
    }
    if (pwVar9 != (wchar_t *)0x0) {
      iVar4 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(pwVar9,param_3);
      if (iVar4 != -1) {
        TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl(pwVar9,iVar4,1,1);
      }
      if (*(int *)(pwVar9 + 4) == 0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UGbxActionComponent::OnComponentUnregistered",L"::");
        while (pwVar9 = pwVar5, pwVar9 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar10 = pwVar9;
        }
        FName::FName(&local_48,pwVar10 + 2,1);
        plVar12 = (longlong *)(param_2 + 0x128);
        lVar2 = *plVar12;
        iVar4 = *(int *)(param_2 + 0x130);
        for (lVar11 = lVar2; lVar11 != (longlong)iVar4 * 0x10 + lVar2; lVar11 = lVar11 + 0x10) {
          if (((*(longlong *)(lVar11 + 8) == local_48) && (param_1 != 0)) &&
             (lVar6 = FWeakObjectPtr::GetEvenIfUnreachable(lVar11), param_1 == lVar6)) {
            iVar4 = (int)(lVar11 - lVar2 >> 4);
            if (iVar4 != -1) {
              iVar8 = *(int *)(param_2 + 0x130);
              iVar7 = (iVar8 - iVar4) + -1;
              if (0 < iVar7) {
                iVar7 = 1;
              }
              if (iVar7 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar4 * 0x10 + *plVar12),
                           (void *)((longlong)(iVar8 - iVar7) * 0x10 + *plVar12),
                           (longlong)iVar7 << 4);
                iVar8 = *(int *)(param_2 + 0x130);
              }
              *(int *)(param_2 + 0x130) = iVar8 + -1;
            }
            break;
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
        local_40 = local_58;
        FUN_142c7fb90(local_38,&local_40);
      }
    }
    plVar12 = *(longlong **)(param_3 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 142c80db0 FUN_142c80db0 body=534 status=ok
// SIG undefined FUN_142c80db0(void)

void FUN_142c80db0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar2 = UMaterialInstanceConstant::GetPrivateStaticClass();
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
      FWeakObjectPtr::operator=(&local_res10,param_1);
      local_res18 = local_res10;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::Remove(param_2 + 0x238,&local_res18);
      plVar3 = (longlong *)FUN_142274b30(param_1);
      lVar5 = *plVar3;
      lVar2 = lVar5 + (longlong)(int)plVar3[1] * 0x18;
      for (; lVar5 != lVar2; lVar5 = lVar5 + 0x18) {
        plVar3 = *(longlong **)(lVar5 + 8);
        plVar4 = plVar3 + (longlong)*(int *)(lVar5 + 0x10) * 4;
        for (; plVar3 != plVar4; plVar3 = plVar3 + 4) {
          if (*plVar3 != 0) {
            FWeakObjectPtr::operator=(&local_res10);
            local_res18 = local_res10;
            TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
            ::Remove(param_2 + 0x238,&local_res18);
          }
        }
      }
    }
    else {
      lVar2 = UBlendSpaceBase::GetPrivateStaticClass();
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
        plVar4 = *(longlong **)(param_1 + 200);
        plVar3 = plVar4 + (longlong)*(int *)(param_1 + 0xd0) * 3;
        if (plVar4 != plVar3) {
          do {
            if (*plVar4 != 0) {
              FWeakObjectPtr::operator=(&local_res10);
              local_res18 = local_res10;
              TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
              ::Remove(param_2 + 0x238,&local_res18);
            }
            plVar4 = plVar4 + 3;
          } while (plVar4 != plVar3);
          return;
        }
      }
      else {
        lVar2 = UAnimMontage::GetPrivateStaticClass();
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
          FWeakObjectPtr::operator=(&local_res10,param_1);
          local_res18 = local_res10;
          TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
          ::Remove(param_2 + 0x238,&local_res18);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142c80fd0 FUN_142c80fd0 body=203 status=ok
// SIG undefined FUN_142c80fd0(void)

void FUN_142c80fd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  if (*param_2 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x180);
    plVar2 = plVar5 + (longlong)*(int *)(param_1 + 0x188) * 3;
    if (plVar5 != plVar2) {
      while (*plVar5 != *param_2) {
        plVar5 = plVar5 + 3;
        if (plVar5 == plVar2) {
          return;
        }
      }
      local_10 = (longlong *)0x0;
      if (plVar5 + 1 != &local_18) {
        plVar5[1] = 0;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar5 + 2,&local_10);
        plVar2 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_10 + 1;
          lVar4 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c810a0 FUN_142c810a0 body=201 status=ok
// SIG undefined FUN_142c810a0(void)

void FUN_142c810a0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18,param_1);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1466acd40,local_res10,&local_res20);
  lVar2 = 0;
  if (local_res10[0] != -1) {
    lVar2 = DAT_1466acd40 + (longlong)local_res10[0] * 0x18;
  }
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if ((lVar3 != 0) && (lVar2 = FWeakObjectPtr::Get(), lVar2 != 0)) {
    FWeakObjectPtr::operator=(local_res10,param_1);
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1466acd40,&local_res18);
    cVar1 = UWorld::IsInSeamlessTravel(param_1);
    if ((cVar1 != '\0') && (*(byte *)(lVar2 + 0x128) < 3)) {
      FUN_142c871c0(lVar2);
    }
  }
  return;
}



// FUNCTION 142c81170 FUN_142c81170 body=310 status=ok
// SIG undefined FUN_142c81170(void)

void FUN_142c81170(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res20 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  FWeakObjectPtr::operator=(&local_38);
  cVar3 = FWeakObjectPtr::IsValid(&local_38,1,0);
  if (cVar3 != '\0') {
    local_30 = local_38;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x340,local_res20,&local_30);
    lVar5 = 0;
    if (local_res20[0] != -1) {
      lVar5 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x340);
    }
    lVar6 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      iVar4 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(lVar6,param_3);
      if (iVar4 != -1) {
        TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl(lVar6,iVar4,1,1);
      }
      if (*(int *)(lVar6 + 8) == 0) {
        FUN_140483870(param_2 + 0x3b0,param_1);
        FUN_140483870(param_2 + 0x3c8,param_1);
        FWeakObjectPtr::operator=(&local_28,param_2);
        local_20 = local_28;
        FUN_142c7fb90(param_1 + 0x340,&local_20);
      }
    }
  }
  plVar2 = *(longlong **)(param_3 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return;
}



// FUNCTION 142c812b0 FUN_142c812b0 body=122 status=ok
// SIG undefined FUN_142c812b0(void)

void FUN_142c812b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_18 [16];
  
  lVar1 = FUN_142c6d300(param_1,&DAT_146b2fd28,2);
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  uVar3 = *(uint *)(lVar1 + 0x10);
  uVar4 = uVar3 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  if (uVar4 != 1) {
    do {
      uVar3 = uVar3 + 1;
      uVar4 = uVar3 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
    } while (uVar4 != 1);
    *(uint *)(lVar1 + 0x10) = uVar3;
  }
  uVar2 = FUN_142c86b70(param_1,local_18);
  FUN_142c878b0(*(undefined8 *)(param_1 + 0x18),uVar2);
  return;
}



// FUNCTION 142c81330 FUN_142c81330 body=76 status=ok
// SIG undefined FUN_142c81330(void)

void FUN_142c81330(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 local_18 [16];
  
  lVar1 = FUN_142c6d300(param_1,&DAT_146b2fd28,2);
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  uVar3 = *(uint *)(lVar1 + 0x10);
  if ((uVar3 & 1) != 0) {
    do {
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 1) != 0);
    *(uint *)(lVar1 + 0x10) = uVar3;
  }
  uVar2 = FUN_142c86b70(param_1,local_18);
  FUN_142c878b0(*(undefined8 *)(param_1 + 0x18),uVar2);
  return;
}



// FUNCTION 142c81380 FUN_142c81380 body=235 status=ok
// SIG undefined FUN_142c81380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c81380(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x10) = local_res8;
  *(undefined4 *)(param_1 + 0x14) = local_resc;
  *(undefined8 *)(param_1 + 0x18) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x20) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x2c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x34) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x38) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x40) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x54) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x5c) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x60) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x68) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x84) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x88) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x90) = DAT_1468b5d98;
  return;
}



// FUNCTION 142c81470 ResizeGrow body=252 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x88);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)((longlong)param_1 + 0x8c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 << 5,0);
    uVar2 = uVar3 >> 5 & 0xffffffff;
    if ((int)(uVar3 >> 5) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  uVar1 = (uint)uVar2;
  *(uint *)((longlong)param_1 + 0x8c) = uVar1;
  pvVar4 = *(void **)((longlong)param_1 + 0x80);
  if (uVar1 < 5) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar1 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar1 << 5,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar1 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
  return;
}



// FUNCTION 142c81570 FUN_142c81570 body=224 status=ok
// SIG undefined FUN_142c81570(void)

void FUN_142c81570(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar2 = 4;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 == *(uint *)((longlong)param_1 + 0x4c)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x48);
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x40);
  if (uVar2 < 5) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)iVar1 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)iVar1 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
  return;
}



// FUNCTION 142c81650 FUN_142c81650 body=93 status=ok
// SIG undefined FUN_142c81650(void)

undefined8 FUN_142c81650(char *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (*param_1 == '\x01') {
    if (*(longlong *)(param_1 + 8) != 0) {
      *param_2 = *(longlong *)(param_1 + 8);
      return 1;
    }
  }
  else if ((*param_1 == '\x02') && (param_3 != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = FUN_1423b9120(param_3);
      *param_2 = lVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c816b0 FUN_142c816b0 body=194 status=ok
// SIG undefined FUN_142c816b0(void)

undefined8 FUN_142c816b0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar2 = (longlong *)FUN_142c6f640(param_1,2);
  if (plVar2 == (longlong *)0x0) {
    if (((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118), lVar4 != 0)) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar4 = FUN_142cc1670(lVar4);
        if (lVar4 != 0) {
          plVar2 = (longlong *)FUN_142ccd860(lVar4,param_1 + 0x490);
          if (plVar2 != (longlong *)0x0) goto LAB_142c8175e;
        }
      }
    }
    return 0;
  }
LAB_142c8175e:
                    /* WARNING: Could not recover jumptable at 0x000142c8176b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar2 + 0x280))();
  return uVar5;
}



// FUNCTION 142c81780 FUN_142c81780 body=156 status=ok
// SIG undefined FUN_142c81780(void)

longlong FUN_142c81780(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
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
      return *(longlong *)(param_1 + 0xa18);
    }
    lVar2 = FUN_142e5c1e0();
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



// FUNCTION 142c81820 FUN_142c81820 body=46 status=ok
// SIG undefined FUN_142c81820(void)

void FUN_142c81820(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14583fc30;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_142c6db40(param_1,&local_48);
  return;
}



// FUNCTION 142c81880 FUN_142c81880 body=1444 status=ok
// SIG undefined FUN_142c81880(void)

void FUN_142c81880(longlong param_1,int param_2,longlong param_3,longlong param_4,int *param_5,
                  longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  int local_res10 [2];
  longlong local_res18;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_6 + 0x20);
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar8 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar8 = param_1 + 0x50;
    }
    iVar4 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x60) - 1U &
                             (longlong)*(int *)(param_4 + 0x20)) * 4);
    if (iVar4 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar4 * 0x20 + *plVar1);
        if (*piVar7 == *(int *)(param_4 + 0x20)) {
          if ((iVar4 != -1) && (piVar7 != (int *)0x0)) goto LAB_142c81935;
          break;
        }
        iVar4 = piVar7[6];
      } while (iVar4 != -1);
    }
  }
  FUN_142c605c0(plVar1,local_res10);
  piVar7 = (int *)((longlong)local_res10[0] * 0x20 + *plVar1);
LAB_142c81935:
  if ((param_2 != 0) || (piVar7[4] == 0)) {
    iVar4 = FUN_142c65bd0(piVar7 + 2,1);
    piVar7 = (int *)((longlong)iVar4 * 0xc0 + *(longlong *)(piVar7 + 2));
    *piVar7 = param_2;
    plVar1 = (longlong *)(piVar7 + 0x16);
    *(undefined1 *)(piVar7 + 1) = *(undefined1 *)(param_4 + 1);
    if (piVar7[0x18] - piVar7[0x23] == *(int *)(lVar2 + 0x88) - *(int *)(lVar2 + 0xb4)) {
      uVar14 = piVar7[0x20];
      puStack_50 = (uint *)(piVar7 + 0x1a);
      uStack_84 = 1;
      local_88 = 0;
      local_78._4_4_ = 0;
      uStack_70 = 0;
      if (uVar14 != 0) {
        puVar11 = *(uint **)(piVar7 + 0x1e);
        if (*(uint **)(piVar7 + 0x1e) == (uint *)0x0) {
          puVar11 = puStack_50;
        }
        uVar9 = *puVar11;
        uStack_70 = 0;
        local_88 = 0;
        while (uVar9 == 0) {
          lVar8 = (longlong)local_88;
          uStack_70 = uStack_70 + 0x20;
          iVar4 = local_88 + 1;
          bVar3 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar4;
          if (bVar3) goto LAB_142c81a3c;
          uVar9 = puVar11[lVar8 + 1];
        }
        uStack_84 = -uVar9 & uVar9;
        iVar4 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
        if ((int)uVar14 < (int)local_78._4_4_) {
LAB_142c81a3c:
          local_78._4_4_ = uVar14;
        }
      }
      uVar14 = piVar7[0x20];
      uStack_58 = CONCAT44(uStack_84,local_88);
      uVar9 = piVar7[0x20];
      uStack_48 = CONCAT44(local_78._4_4_,0xffffffff);
      local_68 = CONCAT44(uStack_6c,uStack_70);
      uVar10 = uVar14 & 0xffffffe0;
      _iStack_80 = CONCAT44(uStack_84,local_88);
      uStack_70 = 0xffffffff;
      uStack_6c = local_78._4_4_;
      local_60 = plVar1;
      uStack_40 = local_68;
      local_78 = puStack_50;
      if (uVar14 != uVar9) {
        piVar13 = *(int **)(piVar7 + 0x1e);
        if (*(int **)(piVar7 + 0x1e) == (int *)0x0) {
          piVar13 = piVar7 + 0x1a;
        }
        uVar6 = piVar13[(int)uVar14 >> 5] & -1 << ((byte)uVar14 & 0x1f);
        iVar4 = (int)uVar14 >> 5;
        while (uVar6 == 0) {
          uVar10 = uVar10 + 0x20;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
          goto LAB_142c81afc;
          uVar6 = piVar13[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar4 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uVar6 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        uVar14 = (uVar10 - iVar4) + 0x1f;
        if ((int)uVar9 < (int)uVar14) {
LAB_142c81afc:
          uVar14 = uVar9;
        }
      }
      while( true ) {
        if ((uStack_6c == uVar14) && (local_78 == (uint *)(piVar7 + 0x1a))) goto LAB_142c81b8e;
        if (*(int *)(lVar2 + 0x88) == *(int *)(lVar2 + 0xb4)) break;
        iVar4 = *(int *)(*plVar1 + (longlong)(int)uStack_6c * 0xc);
        lVar8 = *(longlong *)(lVar2 + 0xc0);
        if (*(longlong *)(lVar2 + 0xc0) == 0) {
          lVar8 = lVar2 + 0xb8;
        }
        iVar5 = *(int *)(lVar8 + ((longlong)*(int *)(lVar2 + 200) - 1U & (longlong)iVar4) * 4);
        if (iVar5 == -1) break;
        lVar8 = *(longlong *)(lVar2 + 0x80);
        while (*(int *)(lVar8 + (longlong)iVar5 * 0xc) != iVar4) {
          iVar5 = *(int *)(lVar8 + 4 + (longlong)iVar5 * 0xc);
          if (iVar5 == -1) goto LAB_142c81b7b;
        }
        if (iVar5 == -1) break;
        uStack_70 = uStack_70 & ~uStack_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      }
    }
LAB_142c81b7b:
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
              (plVar1,(longlong *)(lVar2 + 0x80));
    *(undefined1 *)(param_6 + 0x44) = 1;
LAB_142c81b8e:
    plVar1 = (longlong *)(piVar7 + 2);
    if (piVar7[4] - piVar7[0xf] == *(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100)) {
      uVar14 = piVar7[0xc];
      puVar11 = (uint *)(piVar7 + 6);
      uStack_84 = 1;
      local_88 = 0;
      local_78._4_4_ = 0;
      uStack_70 = 0;
      if (uVar14 != 0) {
        puVar12 = *(uint **)(piVar7 + 10);
        if (*(uint **)(piVar7 + 10) == (uint *)0x0) {
          puVar12 = puVar11;
        }
        uVar9 = *puVar12;
        uStack_70 = 0;
        local_88 = 0;
        while (uVar9 == 0) {
          lVar8 = (longlong)local_88;
          uStack_70 = uStack_70 + 0x20;
          iVar4 = local_88 + 1;
          bVar3 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar4;
          if (bVar3) goto LAB_142c81c6b;
          uVar9 = puVar12[lVar8 + 1];
        }
        uStack_84 = -uVar9 & uVar9;
        iVar4 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
        if ((int)uVar14 < (int)local_78._4_4_) {
LAB_142c81c6b:
          local_78._4_4_ = uVar14;
        }
      }
      uVar9 = piVar7[0xc];
      uStack_58 = CONCAT44(uStack_84,local_88);
      uStack_48 = CONCAT44(local_78._4_4_,0xffffffff);
      local_68 = CONCAT44(uStack_6c,uStack_70);
      uVar10 = uVar9 & 0xffffffe0;
      _iStack_80 = CONCAT44(uStack_84,local_88);
      uStack_70 = 0xffffffff;
      uStack_6c = local_78._4_4_;
      local_60 = plVar1;
      puStack_50 = puVar11;
      uStack_40 = local_68;
      local_78 = puVar11;
      if (uVar9 != uVar14) {
        puVar12 = *(uint **)(piVar7 + 10);
        if (*(uint **)(piVar7 + 10) == (uint *)0x0) {
          puVar12 = puVar11;
        }
        uVar6 = puVar12[(int)uVar9 >> 5] & -1 << ((byte)uVar9 & 0x1f);
        iVar4 = (int)uVar9 >> 5;
        while (uVar6 == 0) {
          uVar10 = uVar10 + 0x20;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
          goto LAB_142c81d2c;
          uVar6 = puVar12[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar6 = -uVar6 & uVar6;
        iVar4 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uVar6 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        uVar9 = (uVar10 - iVar4) + 0x1f;
        if ((int)uVar14 < (int)uVar9) {
LAB_142c81d2c:
          uVar9 = uVar14;
        }
      }
      while( true ) {
        if ((uStack_6c == uVar9) && (local_78 == puVar11)) goto LAB_142c81ddb;
        if (*(int *)(lVar2 + 0x38) == *(int *)(lVar2 + 100)) break;
        iVar4 = *(int *)(*plVar1 + (longlong)(int)uStack_6c * 0xc);
        lVar8 = *(longlong *)(lVar2 + 0x70);
        if (*(longlong *)(lVar2 + 0x70) == 0) {
          lVar8 = lVar2 + 0x68;
        }
        iVar5 = *(int *)(lVar8 + ((longlong)*(int *)(lVar2 + 0x78) - 1U & (longlong)iVar4) * 4);
        if (iVar5 == -1) break;
        lVar8 = *(longlong *)(lVar2 + 0x30);
        while (*(int *)(lVar8 + (longlong)iVar5 * 0xc) != iVar4) {
          iVar5 = *(int *)(lVar8 + 4 + (longlong)iVar5 * 0xc);
          if (iVar5 == -1) goto LAB_142c81da7;
        }
        if (iVar5 == -1) break;
        uStack_70 = uStack_70 & ~uStack_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      }
    }
LAB_142c81da7:
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
              (plVar1,(longlong *)(lVar2 + 0x30));
    *(undefined1 *)(param_6 + 0x44) = 1;
LAB_142c81ddb:
    if (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100)) {
      *(undefined1 *)(param_6 + 0x43) = 1;
    }
    piVar7[0x2a] = *(int *)(local_res18 + 0xa8) - *param_5;
    FBitReaderMark::Copy(param_5,local_res18,piVar7 + 0x2c);
  }
  return;
}



// FUNCTION 142c81e30 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1466ace10);
  return;
}



// FUNCTION 142c81e60 FUN_142c81e60 body=52 status=ok
// SIG undefined FUN_142c81e60(void)

void FUN_142c81e60(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  FUN_142e21620(*(undefined8 *)(param_1 + 0x10),uVar1);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x70);
  return;
}



// FUNCTION 142c81ea0 FUN_142c81ea0 body=57 status=ok
// SIG undefined FUN_142c81ea0(void)

void FUN_142c81ea0(longlong *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0xe0))();
  uVar1 = 0;
  if (param_1[3] != 0) {
    uVar1 = *(undefined8 *)(param_1[3] + 0x118);
  }
  FUN_142e21620(param_1[2],uVar1);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xe);
  return;
}



// FUNCTION 142c81ee0 FUN_142c81ee0 body=69 status=ok
// SIG undefined FUN_142c81ee0(void)

void FUN_142c81ee0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142e21660(*(longlong *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x30),uVar1);
  }
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x88,*(undefined1 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142c81f30 FUN_142c81f30 body=94 status=ok
// SIG undefined FUN_142c81f30(void)

void FUN_142c81f30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[2];
  if (*(char *)(lVar1 + 0xb0) == '\0') {
    (**(code **)(*param_1 + 0xe8))(param_1);
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    if (param_1[3] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1[3] + 0x118);
    }
    FUN_142e21660(lVar1,(char)param_1[6],uVar2);
  }
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x11,(char)param_1[6]);
  return;
}



// FUNCTION 142c81f90 FUN_142c81f90 body=568 status=ok
// SIG undefined FUN_142c81f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c81f90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [64];
  undefined1 *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x230) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0();
    }
    lVar5 = FUN_142c71720(lVar5);
    if (lVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x230);
      puVar12 = (undefined1 *)0x0;
      local_30 = (undefined1 *)0x0;
      local_28 = 0;
      local_28._0_4_ = 0;
      puVar6 = puVar12;
      uVar13 = (uint)local_28;
      if (iVar3 != 0) {
        if (0 < iVar3) {
          FUN_142c81570(local_70,iVar3);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x228);
        puVar6 = local_70;
        if (local_30 != (undefined1 *)0x0) {
          puVar6 = puVar12;
        }
        puVar7 = (undefined8 *)
                 (((ulonglong)puVar6 | (ulonglong)local_30) + (longlong)(int)(uint)local_28 * 0x10);
        iVar14 = iVar3;
        do {
          *puVar7 = *puVar8;
          lVar4 = puVar8[1];
          puVar7[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 2;
          puVar8 = puVar8 + 2;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        uVar13 = (uint)local_28 + iVar3;
        puVar6 = (undefined1 *)(ulonglong)uVar13;
        local_28 = CONCAT44(local_28._4_4_,uVar13);
      }
      puVar9 = local_70;
      if (local_30 != (undefined1 *)0x0) {
        puVar9 = puVar12;
      }
      plVar10 = (longlong *)((ulonglong)puVar9 | (ulonglong)local_30);
      plVar11 = plVar10 + (longlong)(int)uVar13 * 2;
      if (plVar10 != plVar11) {
        do {
          lVar4 = *plVar10;
          if (lVar4 != 0) {
            local_78 = plVar10[1];
            local_88[0] = 3;
            if (local_78 != 0) {
              LOCK();
              *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
              UNLOCK();
            }
            local_80 = lVar4;
            FUN_142c80100(lVar5,&local_80,local_88);
          }
          plVar10 = plVar10 + 2;
        } while (plVar10 != plVar11);
        puVar6 = (undefined1 *)(local_28 & 0xffffffff);
      }
      puVar12 = local_70;
      if (local_30 != (undefined1 *)0x0) {
        puVar12 = local_30;
      }
      if ((int)puVar6 != 0) {
        plVar10 = (longlong *)(puVar12 + 8);
        do {
          plVar11 = (longlong *)*plVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          plVar10 = plVar10 + 2;
          uVar13 = (int)puVar6 - 1;
          puVar6 = (undefined1 *)(ulonglong)uVar13;
        } while (uVar13 != 0);
      }
      if (local_30 != (undefined1 *)0x0) {
        FMemory::Free(local_30);
      }
    }
  }
  return;
}



// FUNCTION 142c821d0 FUN_142c821d0 body=19 status=ok
// SIG undefined FUN_142c821d0(void)

void FUN_142c821d0(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142c821f0 FUN_142c821f0 body=8 status=ok
// SIG undefined FUN_142c821f0(void)

void FUN_142c821f0(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 142c82200 FUN_142c82200 body=113 status=ok
// SIG undefined FUN_142c82200(void)

void FUN_142c82200(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0xf8) & 1)) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) & 0xfffffffe | (uint)param_2;
  if ((param_2 & 1) != 0) {
    if (lVar2 != 0) {
      FUN_142d8e990(*(undefined8 *)(lVar2 + 0x118),uVar1,
                    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x69));
      return;
    }
    FUN_142d8e990(0,uVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x69));
    return;
  }
  if (lVar2 != 0) {
    FUN_142d8f260(*(undefined8 *)(lVar2 + 0x118),uVar1);
    return;
  }
  FUN_142d8f260(0,uVar1);
  return;
}



// FUNCTION 142c82280 FUN_142c82280 body=105 status=ok
// SIG undefined FUN_142c82280(void)

void FUN_142c82280(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0xf8) >> 6 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0xf8) = (uint)param_2 << 6 | *(uint *)(param_1 + 0xf8) & 0xffffffbf;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 << 6 & 0x40) != 0) {
    if (lVar1 != 0) {
      FUN_142d8ea20(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8ea20();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f2e0(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f2e0(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c822f0 M4MotionVectorMgr body=8 status=ok
// SIG undefined M4MotionVectorMgr(void)

longlong vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



// FUNCTION 142c82300 FUN_142c82300 body=122 status=ok
// SIG undefined FUN_142c82300(void)

void FUN_142c82300(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_res8;
  
  plVar3 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  lVar1 = (**(code **)(*plVar3 + 0x668))();
  if (lVar1 != 0) {
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_res8 = *(undefined8 *)(param_1 + 0xb0);
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_res8);
    }
  }
  return;
}



// FUNCTION 142c82380 FUN_142c82380 body=8 status=ok
// SIG undefined FUN_142c82380(void)

undefined4 * FUN_142c82380(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 142c82390 SetExpirationAge body=9 status=ok
// SIG undefined SetExpirationAge(void)

longlong FAIStimulus::SetExpirationAge(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return param_1;
}



// FUNCTION 142c823a0 FUN_142c823a0 body=538 status=ok
// SIG undefined FUN_142c823a0(void)

void FUN_142c823a0(longlong param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_68;
  undefined1 local_60;
  float local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_5c = *param_2;
  uVar6 = 0;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (local_5c == 0.0) {
    if (0 < *(int *)(param_1 + 0x28)) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar5 = uVar6;
      uVar7 = uVar6;
      do {
        if ((*plVar3 == *(longlong *)(lVar4 + 0x198)) && ((char)plVar3[1] == '\x01')) {
          if (*(longlong **)(param_1 + 0x20) + (longlong)(int)uVar7 * 7 != (longlong *)0x0)
          goto LAB_142c8242e;
          break;
        }
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar5 = uVar5 + 1;
        plVar3 = plVar3 + 7;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x28));
    }
    if (*(longlong *)(lVar4 + 0x198) == DAT_146b2fd18) goto LAB_142c824b3;
  }
LAB_142c8242e:
  local_68 = *(undefined8 *)(lVar4 + 0x198);
  local_60 = 1;
  local_50 = 0;
  local_48 = 0;
  lVar2 = FUN_142c6d300(param_1,&local_68,1);
  cVar1 = *(char *)(lVar2 + 8);
  if (cVar1 == '\x01') {
    *(float *)(lVar2 + 0xc) = local_5c;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(lVar2 + 0x10) = local_58;
  }
  else if (cVar1 == '\x03') {
    *(undefined8 *)(lVar2 + 0x18) = local_50;
  }
  else if (cVar1 == '\x04') {
    *(undefined8 *)(lVar2 + 0x20) = local_48;
  }
  else if (cVar1 == '\x05') {
    *(undefined8 *)(lVar2 + 0x28) = local_40;
    *(undefined4 *)(lVar2 + 0x30) = local_38;
  }
LAB_142c824b3:
  local_5c = param_2[1];
  if (local_5c == 0.0) {
    if (0 < *(int *)(param_1 + 0x28)) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar5 = uVar6;
      do {
        if ((*plVar3 == *(longlong *)(lVar4 + 0x1a0)) && ((char)plVar3[1] == '\x01')) {
          if (*(longlong **)(param_1 + 0x20) + (longlong)(int)uVar5 * 7 != (longlong *)0x0)
          goto LAB_142c8251b;
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar6 = uVar6 + 1;
        plVar3 = plVar3 + 7;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
    }
    if (*(longlong *)(lVar4 + 0x1a0) == DAT_146b2fd20) {
      return;
    }
  }
LAB_142c8251b:
  local_68 = *(undefined8 *)(lVar4 + 0x1a0);
  local_60 = 1;
  local_50 = 0;
  local_48 = 0;
  lVar4 = FUN_142c6d300(param_1,&local_68,1);
  cVar1 = *(char *)(lVar4 + 8);
  if (cVar1 == '\x01') {
    *(float *)(lVar4 + 0xc) = local_5c;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(lVar4 + 0x10) = local_58;
  }
  else if (cVar1 == '\x03') {
    *(undefined8 *)(lVar4 + 0x18) = local_50;
  }
  else if (cVar1 == '\x04') {
    *(undefined8 *)(lVar4 + 0x20) = local_48;
  }
  else if (cVar1 == '\x05') {
    *(undefined8 *)(lVar4 + 0x28) = local_40;
    *(undefined4 *)(lVar4 + 0x30) = local_38;
  }
  return;
}



// FUNCTION 142c825c0 FUN_142c825c0 body=241 status=ok
// SIG undefined FUN_142c825c0(void)

void FUN_142c825c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = FUN_142c81780(param_3);
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0xf6d) = *(byte *)(lVar5 + 0xf6d) | 1;
    puVar6 = (undefined8 *)FUN_142ca0620(lVar5,param_2);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      FUN_1422b49a0(puVar6,param_1 + 2);
      FUN_1422b4660(puVar6,(longlong)param_1 + 0x1c);
      FUN_1422b4680(puVar6,param_1 + 5);
      uVar4 = param_1[8];
      puVar6[7] = param_1[7];
      puVar6[8] = uVar4;
      uVar4 = param_1[10];
      puVar6[9] = param_1[9];
      puVar6[10] = uVar4;
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x5c);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uVar3 = *(undefined4 *)((longlong)param_1 + 100);
      *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(param_1 + 0xb);
      *(undefined4 *)((longlong)puVar6 + 0x5c) = uVar1;
      *(undefined4 *)(puVar6 + 0xc) = uVar2;
      *(undefined4 *)((longlong)puVar6 + 100) = uVar3;
      puVar6[0xd] = param_1[0xd];
      *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_1 + 0xe);
      *(undefined1 *)((longlong)puVar6 + 0x71) = *(undefined1 *)((longlong)param_1 + 0x71);
      *(undefined1 *)((longlong)puVar6 + 0x72) = *(undefined1 *)((longlong)param_1 + 0x72);
      *(undefined1 *)((longlong)puVar6 + 0x73) = *(undefined1 *)((longlong)param_1 + 0x73);
      *(undefined1 *)((longlong)puVar6 + 0x74) = *(undefined1 *)((longlong)param_1 + 0x74);
      *(undefined1 *)((longlong)puVar6 + 0x75) = *(undefined1 *)((longlong)param_1 + 0x75);
      *(undefined1 *)((longlong)puVar6 + 0x79) = *(undefined1 *)((longlong)param_1 + 0x79);
      *(undefined1 *)((longlong)puVar6 + 0x7a) = *(undefined1 *)((longlong)param_1 + 0x7a);
      if (param_4 != '\0') {
        FUN_1422a60f0(puVar6);
      }
    }
  }
  return;
}



// FUNCTION 142c826c0 FUN_142c826c0 body=84 status=ok
// SIG undefined FUN_142c826c0(void)

void FUN_142c826c0(undefined8 param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      if (param_2 != '\0') {
        FUN_1422a60f0();
        return;
      }
      FUN_1422a6150(lVar1);
    }
  }
  return;
}



// FUNCTION 142c82720 FUN_142c82720 body=89 status=ok
// SIG undefined FUN_142c82720(void)

void FUN_142c82720(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FUN_142c81780(param_3);
  if (lVar6 != 0) {
    lVar6 = FUN_142ca0620(lVar6,param_1);
    if (lVar6 != 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined8 *)(lVar6 + 0x38) = *param_2;
      *(undefined8 *)(lVar6 + 0x40) = uVar1;
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      *(undefined8 *)(lVar6 + 0x48) = uVar2;
      *(undefined8 *)(lVar6 + 0x50) = uVar3;
      uVar1 = param_2[6];
      *(undefined8 *)(lVar6 + 0x58) = uVar4;
      *(undefined8 *)(lVar6 + 0x60) = uVar5;
      *(undefined8 *)(lVar6 + 0x68) = uVar1;
    }
  }
  return;
}



// FUNCTION 142c82780 FUN_142c82780 body=69 status=ok
// SIG undefined FUN_142c82780(void)

void FUN_142c82780(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      FAlphaBlend::SetBlendTime(lVar1 + 0x38,param_2);
    }
  }
  return;
}



// FUNCTION 142c827d0 FUN_142c827d0 body=66 status=ok
// SIG undefined FUN_142c827d0(void)

void FUN_142c827d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    puVar2 = (undefined8 *)FUN_142ca0620(lVar1,param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_2;
    }
  }
  return;
}



// FUNCTION 142c82820 FUN_142c82820 body=60 status=ok
// SIG undefined FUN_142c82820(void)

void FUN_142c82820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = param_2;
    }
  }
  return;
}



// FUNCTION 142c82860 FUN_142c82860 body=67 status=ok
// SIG undefined FUN_142c82860(void)

void FUN_142c82860(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x74) = param_2;
    }
  }
  return;
}



// FUNCTION 142c828b0 FUN_142c828b0 body=67 status=ok
// SIG undefined FUN_142c828b0(void)

void FUN_142c828b0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x75) = param_2;
    }
  }
  return;
}



// FUNCTION 142c82900 FUN_142c82900 body=67 status=ok
// SIG undefined FUN_142c82900(void)

void FUN_142c82900(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x73) = param_2;
    }
  }
  return;
}



// FUNCTION 142c82950 FUN_142c82950 body=67 status=ok
// SIG undefined FUN_142c82950(void)

void FUN_142c82950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      FUN_1422b4660(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142c829a0 FUN_142c829a0 body=69 status=ok
// SIG undefined FUN_142c829a0(void)

void FUN_142c829a0(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x7a) = *param_2;
    }
  }
  return;
}



// FUNCTION 142c829f0 FUN_142c829f0 body=67 status=ok
// SIG undefined FUN_142c829f0(void)

void FUN_142c829f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      FUN_1422b4680(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142c82a40 FUN_142c82a40 body=88 status=ok
// SIG undefined FUN_142c82a40(void)

void FUN_142c82a40(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      local_28 = param_2;
      local_24 = param_2;
      local_20 = param_2;
      FUN_1422b4680(lVar1,&local_28);
    }
  }
  return;
}



// FUNCTION 142c82aa0 FUN_142c82aa0 body=189 status=ok
// SIG undefined FUN_142c82aa0(void)

void FUN_142c82aa0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      local_28 = param_2[4];
      local_24 = param_2[5];
      local_20 = param_2[6];
      FUN_1422b49a0(lVar1,&local_28);
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      uVar2 = FRotator::FRotator(&local_28,&local_18);
      FUN_1422b4660(lVar1,uVar2);
      local_28 = param_2[8];
      local_24 = param_2[9];
      local_20 = param_2[10];
      FUN_1422b4680(lVar1,&local_28);
    }
  }
  return;
}



// FUNCTION 142c82b60 FUN_142c82b60 body=67 status=ok
// SIG undefined FUN_142c82b60(void)

void FUN_142c82b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      FUN_1422b49a0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142c82bb0 FUN_142c82bb0 body=69 status=ok
// SIG undefined FUN_142c82bb0(void)

void FUN_142c82bb0(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x79) = *param_2;
    }
  }
  return;
}



// FUNCTION 142c82c00 FUN_142c82c00 body=67 status=ok
// SIG undefined FUN_142c82c00(void)

void FUN_142c82c00(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x71) = param_2;
    }
  }
  return;
}



// FUNCTION 142c82c50 FUN_142c82c50 body=67 status=ok
// SIG undefined FUN_142c82c50(void)

void FUN_142c82c50(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x72) = param_2;
    }
  }
  return;
}



// FUNCTION 142c82ca0 FUN_142c82ca0 body=67 status=ok
// SIG undefined FUN_142c82ca0(void)

void FUN_142c82ca0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | 1;
    lVar1 = FUN_142ca0620(lVar1,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x70) = param_2;
    }
  }
  return;
}



// FUNCTION 142c82cf0 FUN_142c82cf0 body=44 status=ok
// SIG undefined FUN_142c82cf0(void)

void FUN_142c82cf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_2);
  if (lVar1 != 0) {
    FUN_142cabeb0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142c82d20 FUN_142c82d20 body=71 status=ok
// SIG undefined FUN_142c82d20(void)

void FUN_142c82d20(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780(param_3);
  if (lVar1 != 0) {
    FUN_142cabfd0(lVar1,param_1,param_2,param_4);
  }
  return;
}



// FUNCTION 142c82d70 FUN_142c82d70 body=681 status=ok
// SIG undefined FUN_142c82d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c82d70(longlong *param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined1 local_108 [192];
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  undefined1 *puVar9;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (param_2 == '\0') {
    lVar10 = 0;
    if (param_1[3] != 0) {
      lVar10 = *(longlong *)(param_1[3] + 0x118);
    }
    pbVar7 = *(byte **)(param_1[2] + 0x78);
    pbVar13 = pbVar7 + *(int *)(param_1[2] + 0x80);
    local_118 = (undefined4 *)0x0;
    local_110 = 0;
    if (pbVar7 != pbVar13) {
      do {
        bVar2 = *pbVar7;
        cVar4 = (**(code **)(*param_1 + 0xf8))(param_1,bVar2);
        uVar12 = local_110;
        if (cVar4 == '\0') {
          if ((bVar2 == 2) && (cVar4 = (**(code **)(*param_1 + 0xf0))(param_1), cVar4 == '\0')) {
            FUN_142db7d10(param_1 + 0x88,lVar10,1,0);
          }
        }
        else {
          lVar11 = (longlong)(int)local_110;
          iVar5 = (int)local_110 + 1;
          local_110 = CONCAT44(local_110._4_4_,iVar5);
          if (local_110._4_4_ < iVar5) {
            FUN_1409e3b30(local_198,uVar12 & 0xffffffff);
          }
          puVar6 = local_198;
          if (local_118 != (undefined4 *)0x0) {
            puVar6 = local_118;
          }
          puVar6[lVar11] = (uint)bVar2;
        }
        pbVar7 = pbVar7 + 1;
      } while (pbVar7 != pbVar13);
      if (0 < (int)local_110) {
        local_3c = 0;
        local_48 = 0;
        local_40 = 0;
        if (lVar10 != 0) {
          FUN_140725150(lVar10,local_108,0);
        }
        puVar9 = local_108;
        if (local_48 != 0) {
          puVar9 = (undefined1 *)0x0;
        }
        plVar8 = (longlong *)((ulonglong)puVar9 | local_48);
        plVar1 = plVar8 + local_40;
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          uVar12 = 0;
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            FUN_142db9760(param_1 + 0x88,plVar3);
            puVar6 = (undefined4 *)(**(code **)(*plVar3 + 0x4d0))(plVar3);
            local_1b8 = *puVar6;
            uStack_1b4 = puVar6[1];
            uStack_1b0 = puVar6[2];
            uStack_1ac = puVar6[3];
            local_1a8 = *(undefined8 *)(puVar6 + 4);
            uStack_1a0 = *(undefined8 *)(puVar6 + 6);
            puVar6 = local_198;
            if (local_118 != (undefined4 *)0x0) {
              puVar6 = local_118;
            }
            uVar14 = (longlong)(int)local_110 & 0x3fffffffffffffff;
            if (puVar6 + (int)local_110 < puVar6) {
              uVar14 = 0;
            }
            if (uVar14 != 0) {
              do {
                FCollisionResponseContainer::SetResponse(&local_1b8,*puVar6,0);
                uVar12 = uVar12 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar12 != uVar14);
            }
            (**(code **)(*plVar3 + 0x840))(plVar3,&local_1b8);
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      if (local_118 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    FUN_142db61a0(param_1 + 0x88,1);
  }
  return;
}



// FUNCTION 142c83020 FUN_142c83020 body=106 status=ok
// SIG undefined FUN_142c83020(void)

void FUN_142c83020(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0x4f4) >> 3 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0x4f4) = (uint)param_2 * 8 | *(uint *)(param_1 + 0x4f4) & 0xfffffff7;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 * 8 & 8) != 0) {
    if (lVar1 != 0) {
      FUN_142d8ea70(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8ea70();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f330(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f330(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c83090 FUN_142c83090 body=101 status=ok
// SIG undefined FUN_142c83090(void)

void FUN_142c83090(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0x4f4) >> 1 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0x4f4) =
       (uint)param_2 + (uint)param_2 | *(uint *)(param_1 + 0x4f4) & 0xfffffffd;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 + (uint)param_2 & 2) != 0) {
    if (lVar1 != 0) {
      FUN_142d8eaf0(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8eaf0();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f3b0(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f3b0(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c83100 SetLockMouseToViewportBehavior body=7 status=ok
// SIG undefined SetLockMouseToViewportBehavior(void)

longlong FInputModeUIOnly::SetLockMouseToViewportBehavior(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return param_1;
}



// FUNCTION 142c83110 FUN_142c83110 body=195 status=ok
// SIG undefined FUN_142c83110(void)

longlong * FUN_142c83110(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    lVar5 = (longlong)iVar3 * 0x38;
    plVar1 = plVar6 + (longlong)iVar3 * 7;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 7) {
      if (*plVar6 == param_2) {
        *(undefined4 *)((longlong)plVar6 + 0xc) = param_3;
        *(undefined1 *)(plVar6 + 1) = 1;
        return param_1;
      }
    }
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar3);
    }
    lVar4 = *param_1;
    *(longlong *)(lVar4 + lVar5) = param_2;
    ((longlong *)(lVar4 + lVar5))[1] = CONCAT44(param_3,uStack_40);
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar2 = local_38;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    *puVar2 = 0;
    puVar2[1] = uStack_20;
    *(undefined8 *)(lVar4 + 0x30 + lVar5) = local_18;
  }
  return param_1;
}



// FUNCTION 142c831e0 FUN_142c831e0 body=106 status=ok
// SIG undefined FUN_142c831e0(void)

void FUN_142c831e0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0x4f4) >> 2 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0x4f4) = (uint)param_2 * 4 | *(uint *)(param_1 + 0x4f4) & 0xfffffffb;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 * 4 & 4) != 0) {
    if (lVar1 != 0) {
      FUN_142d8eb90(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8eb90();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f450(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f450(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c83250 FUN_142c83250 body=98 status=ok
// SIG undefined FUN_142c83250(void)

void FUN_142c83250(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0x4f4) & 1)) {
    return;
  }
  *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xfffffffe | (uint)param_2;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((param_2 & 1) != 0) {
    if (lVar1 != 0) {
      FUN_142d8ec30(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8ec30();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f4f0(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f4f0(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c832c0 FUN_142c832c0 body=105 status=ok
// SIG undefined FUN_142c832c0(void)

void FUN_142c832c0(longlong param_1,byte param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0xf8) >> 7 & 1)) {
    return;
  }
  uVar2 = (uint)param_2 << 7 | *(uint *)(param_1 + 0xf8) & 0xffffff7f;
  *(uint *)(param_1 + 0xf8) = uVar2;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((char)uVar2 < '\0') {
    if (lVar1 != 0) {
      FUN_142d8ed50(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8ed50();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f610(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f610(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c83330 FUN_142c83330 body=107 status=ok
// SIG undefined FUN_142c83330(void)

void FUN_142c83330(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0xf8) >> 8 & 1) == (uint)param_2) {
    return;
  }
  *(uint *)(param_1 + 0xf8) = (uint)param_2 << 8 | *(uint *)(param_1 + 0xf8) & 0xfffffeff;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 << 8 & 0x100) != 0) {
    if (lVar1 != 0) {
      FUN_142d8eda0(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8eda0();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f660(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f660(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c833a0 FUN_142c833a0 body=106 status=ok
// SIG undefined FUN_142c833a0(void)

void FUN_142c833a0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0xf8) >> 2 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0xf8) = (uint)param_2 * 4 | *(uint *)(param_1 + 0xf8) & 0xfffffffb;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 * 4 & 4) != 0) {
    if (lVar1 != 0) {
      FUN_142d6e060(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d6e060();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d6e0b0(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d6e0b0(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c83410 FUN_142c83410 body=192 status=ok
// SIG undefined FUN_142c83410(void)

longlong * FUN_142c83410(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined7 uStack_3f;
  undefined4 uStack_34;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    lVar5 = (longlong)iVar3 * 0x38;
    plVar1 = plVar6 + (longlong)iVar3 * 7;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 7) {
      if (*plVar6 == param_2) {
        *(undefined4 *)(plVar6 + 2) = param_3;
        *(undefined1 *)(plVar6 + 1) = 2;
        return param_1;
      }
    }
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar3);
    }
    lVar4 = *param_1;
    *(longlong *)(lVar4 + lVar5) = param_2;
    ((longlong *)(lVar4 + lVar5))[1] = CONCAT71(uStack_3f,2);
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar2 = CONCAT44(uStack_34,param_3);
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    *puVar2 = 0;
    puVar2[1] = uStack_20;
    *(undefined8 *)(lVar4 + 0x30 + lVar5) = local_18;
  }
  return param_1;
}



// FUNCTION 142c834e0 FUN_142c834e0 body=105 status=ok
// SIG undefined FUN_142c834e0(void)

void FUN_142c834e0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0xf8) >> 5 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0xf8) = (uint)param_2 << 5 | *(uint *)(param_1 + 0xf8) & 0xffffffdf;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 << 5 & 0x20) != 0) {
    if (lVar1 != 0) {
      FUN_142d8ef90(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8ef90();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f800(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f800(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c83550 FUN_142c83550 body=105 status=ok
// SIG undefined FUN_142c83550(void)

void FUN_142c83550(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((uint)param_2 == (*(uint *)(param_1 + 0x4f4) >> 4 & 1)) {
    return;
  }
  *(uint *)(param_1 + 0x4f4) = (uint)param_2 << 4 | *(uint *)(param_1 + 0x4f4) & 0xffffffef;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((uint)param_2 << 4 & 0x10) != 0) {
    if (lVar1 != 0) {
      FUN_142d8edf0(*(undefined8 *)(lVar1 + 0x118));
      return;
    }
    FUN_142d8edf0();
    return;
  }
  if (lVar1 != 0) {
    FUN_142d8f6b0(*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    return;
  }
  FUN_142d8f6b0(0,*(undefined8 *)(param_1 + 0xb0));
  return;
}



// FUNCTION 142c835c0 FUN_142c835c0 body=229 status=ok
// SIG undefined FUN_142c835c0(void)

void FUN_142c835c0(longlong param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((uint)param_2 != (*(uint *)(param_1 + 0xf8) >> 1 & 1)) {
    *(uint *)(param_1 + 0xf8) =
         *(uint *)(param_1 + 0xf8) & 0xfffffffd | (uint)param_2 + (uint)param_2;
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar4 != (longlong *)0x0) {
      if (((uint)param_2 + (uint)param_2 & 2) == 0) {
        FUN_142d8f7b0(plVar4,*(undefined8 *)(param_1 + 0xb0));
        FUN_142d8f800(plVar4,*(undefined8 *)(param_1 + 0xb0));
      }
      else {
        FUN_142d8eef0();
        lVar3 = FUN_1429d7ab0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (cVar2 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar2 == '\0')) {
          FUN_142d8ef90(plVar4,*(undefined8 *)(param_1 + 0xb0));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142c836b0 FUN_142c836b0 body=187 status=ok
// SIG undefined FUN_142c836b0(void)

longlong * FUN_142c836b0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined7 uStack_3f;
  undefined8 local_38;
  longlong lStack_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    lVar5 = (longlong)iVar3 * 0x38;
    plVar2 = plVar6 + (longlong)iVar3 * 7;
    for (; plVar6 != plVar2; plVar6 = plVar6 + 7) {
      if (*plVar6 == param_2) {
        plVar6[4] = param_3;
        *(undefined1 *)(plVar6 + 1) = 4;
        return param_1;
      }
    }
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar3);
    }
    lVar4 = *param_1;
    *(longlong *)(lVar4 + lVar5) = param_2;
    ((longlong *)(lVar4 + lVar5))[1] = CONCAT71(uStack_3f,4);
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = 0;
    plVar2 = (longlong *)(lVar4 + 0x20 + lVar5);
    *plVar2 = param_3;
    plVar2[1] = lStack_20;
    *(undefined8 *)(lVar4 + 0x30 + lVar5) = local_18;
  }
  return param_1;
}



// FUNCTION 142c83770 FUN_142c83770 body=187 status=ok
// SIG undefined FUN_142c83770(void)

longlong * FUN_142c83770(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined7 uStack_3f;
  undefined8 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    lVar5 = (longlong)iVar3 * 0x38;
    plVar1 = plVar6 + (longlong)iVar3 * 7;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 7) {
      if (*plVar6 == param_2) {
        plVar6[3] = param_3;
        *(undefined1 *)(plVar6 + 1) = 3;
        return param_1;
      }
    }
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar3);
    }
    lVar4 = *param_1;
    *(longlong *)(lVar4 + lVar5) = param_2;
    ((longlong *)(lVar4 + lVar5))[1] = CONCAT71(uStack_3f,3);
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar2 = local_38;
    puVar2[1] = param_3;
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    *puVar2 = 0;
    puVar2[1] = uStack_20;
    *(undefined8 *)(lVar4 + 0x30 + lVar5) = local_18;
  }
  return param_1;
}



// FUNCTION 142c83830 FUN_142c83830 body=126 status=ok
// SIG undefined FUN_142c83830(void)

void FUN_142c83830(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar1 = FUN_142e39920();
    lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
    if (lVar2 != 0) {
      if (param_2 != '\0') {
        FUN_142cff920(lVar2,1,*(undefined8 *)(param_1 + 0xb0));
        return;
      }
      FUN_142cf3f20(lVar2,1);
    }
  }
  return;
}



// FUNCTION 142c838b0 withMaximumError body=9 status=ok
// SIG undefined withMaximumError(void)

longlong hkgpMeshSimplify::withMaximumError(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



// FUNCTION 142c838c0 FUN_142c838c0 body=132 status=ok
// SIG undefined FUN_142c838c0(void)

longlong * FUN_142c838c0(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar4 = DAT_146b2fd50;
  iVar2 = (int)param_1[1];
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar5 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar5 + lVar3) = uVar4;
  ((undefined8 *)(lVar5 + lVar3))[1] = CONCAT44(param_2,uStack_40);
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar3);
  *puVar1 = 0;
  puVar1[1] = uStack_20;
  *(undefined8 *)(lVar5 + 0x30 + lVar3) = local_18;
  return param_1;
}



// FUNCTION 142c83950 FUN_142c83950 body=419 status=ok
// SIG undefined FUN_142c83950(void)

longlong * FUN_142c83950(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar5 = DAT_146b2fd38;
  if (param_2 == 0) {
    uVar2 = *param_3;
    iVar6 = (int)param_1[1];
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (uVar2,iVar6);
    }
    lVar3 = *param_1;
    uVar4 = CONCAT44(uVar2,uStack_40);
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    lVar7 = (longlong)iVar6 * 0x38;
    *(undefined8 *)(lVar7 + lVar3) = uVar5;
    ((undefined8 *)(lVar7 + lVar3))[1] = uVar4;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar3);
    *puVar1 = local_38;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar3);
    *puVar1 = 0;
    puVar1[1] = uStack_20;
    uVar2 = param_3[1];
    *(undefined8 *)(lVar7 + 0x30 + lVar3) = local_18;
    uVar5 = DAT_146b2fd40;
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    lVar3 = *param_1;
    uVar4 = CONCAT44(uVar2,uStack_40);
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    lStack_30 = 0;
    lVar7 = (longlong)iVar6 * 0x38;
    *(undefined8 *)(lVar7 + lVar3) = uVar5;
    ((undefined8 *)(lVar7 + lVar3))[1] = uVar4;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar3);
    *puVar1 = local_38;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar3);
    *puVar1 = 0;
    puVar1[1] = uStack_20;
    uStack_3c = param_3[2];
    *(undefined8 *)(lVar7 + 0x30 + lVar3) = local_18;
    uVar8 = (ulonglong)(int)param_1[1];
    local_48 = DAT_146b2fd48;
    iVar6 = (int)param_1[1] + 1;
    *(int *)(param_1 + 1) = iVar6;
    if (iVar6 <= *(int *)((longlong)param_1 + 0xc)) goto LAB_142c83aae;
  }
  else {
    uVar8 = (ulonglong)(int)param_1[1];
    local_48 = DAT_146b2fd30;
    uStack_40 = CONCAT31(uStack_40._1_3_,3);
    iVar6 = (int)param_1[1] + 1;
    *(int *)(param_1 + 1) = iVar6;
    lStack_30 = param_2;
    if (iVar6 <= *(int *)((longlong)param_1 + 0xc)) goto LAB_142c83aae;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
            (param_1,uVar8 & 0xffffffff);
LAB_142c83aae:
  lVar3 = *param_1;
  lVar7 = uVar8 * 0x38;
  *(undefined8 *)(lVar7 + lVar3) = local_48;
  ((undefined8 *)(lVar7 + lVar3))[1] = CONCAT44(uStack_3c,uStack_40);
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = lStack_30;
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar3);
  *puVar1 = 0;
  puVar1[1] = uStack_20;
  *(undefined8 *)(lVar7 + 0x30 + lVar3) = local_18;
  return param_1;
}



// FUNCTION 142c83b00 FUN_142c83b00 body=1877 status=ok
// SIG undefined FUN_142c83b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c83b00(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_5a8 [32];
  longlong *local_588;
  undefined4 *local_580;
  undefined1 *local_578;
  undefined4 *local_570;
  undefined1 *local_568;
  undefined *local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined1 local_548;
  char local_547 [7];
  undefined8 local_540;
  float local_538;
  undefined8 local_530;
  float local_528;
  float local_520;
  float fStack_51c;
  float local_518;
  undefined8 local_510;
  float local_508;
  undefined8 local_500;
  float local_4f8;
  float local_4f0 [2];
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined1 local_4c8 [72];
  longlong local_480;
  longlong local_460;
  undefined1 local_448 [912];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
  uVar4 = FWeakObjectPtr::Get(param_1);
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x10);
  uVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
  lVar8 = plVar3[0x2d];
  if (lVar8 == 0) {
    local_530._0_4_ = DAT_1468b5d90;
    local_530._4_4_ = DAT_1468b5d94;
    local_528 = DAT_1468b5d98;
  }
  else {
    local_530._0_4_ = *(float *)(lVar8 + 0x220);
    local_530._4_4_ = *(float *)(lVar8 + 0x224);
    local_528 = *(float *)(lVar8 + 0x228);
  }
  fVar15 = local_530._4_4_;
  fVar14 = (float)local_530;
  FUN_142cc0b00(plVar3,&local_520);
  local_520 = fVar14;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fStack_51c = fVar15;
  fVar13 = 0.0;
  local_540 = 0;
  fVar18 = 0.0;
  local_538 = 0.0;
  local_500 = 0;
  local_4f8 = 0.0;
  local_510 = 0;
  local_508 = 0.0;
  local_547[0] = '\0';
  local_548 = 0;
  local_530._0_4_ = fVar14;
  local_530._4_4_ = fVar15;
  FUN_142dc1ad0(local_448);
  cVar1 = FUN_142dd0170(uVar4,plVar5,local_448);
  if (cVar1 == '\0') {
    fVar14 = (float)local_540;
    fVar15 = (float)((ulonglong)local_540 >> 0x20);
  }
  else {
    puVar7 = (undefined8 *)FUN_142dcce50(local_448,&local_530,local_547,&local_548);
    local_540 = *puVar7;
    fVar14 = (float)local_540;
    fVar15 = (float)((ulonglong)local_540 >> 0x20);
    fVar13 = *(float *)(puVar7 + 1);
    fVar19 = fVar14;
    fVar20 = fVar15;
    local_538 = fVar13;
  }
  fVar10 = local_538;
  lVar8 = FUN_142dddd00(plVar5);
  if (lVar8 == 0) {
    fVar14 = (float)local_500;
    fVar15 = (float)((ulonglong)local_500 >> 0x20);
    fVar10 = local_4f8;
    fVar11 = local_528;
    fVar16 = (float)local_530;
    fVar17 = local_530._4_4_;
  }
  else {
    local_538 = fVar13 - local_518;
    fVar16 = fVar20 - fStack_51c;
    fVar17 = fVar19 - local_520;
    fVar11 = fVar17 * fVar17 + fVar16 * fVar16 + local_538 * local_538;
    if (fVar11 == 1.0) {
      local_540 = CONCAT44(fVar16,fVar17);
    }
    else if (1e-08 <= fVar11) {
      auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      local_4f0[0] = auVar12._0_4_;
      local_4f0[0] = local_4f0[0] +
                     local_4f0[0] * (0.5 - fVar11 * 0.5 * local_4f0[0] * local_4f0[0]);
      local_4f0[0] = local_4f0[0] +
                     local_4f0[0] * (0.5 - fVar11 * 0.5 * local_4f0[0] * local_4f0[0]);
      local_538 = local_4f0[0] * local_538;
      local_540 = CONCAT44(local_4f0[0] * fVar16,local_4f0[0] * fVar17);
    }
    else {
      local_538 = DAT_1468b5d98;
      local_540 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    fVar11 = fVar10;
    fVar16 = fVar14;
    fVar17 = fVar15;
    if (local_547[0] != '\0') {
      puVar7 = (undefined8 *)FUN_142dce5a0(lVar8,&local_530,&local_520,&local_540);
      fVar14 = (float)*puVar7;
      fVar15 = (float)((ulonglong)*puVar7 >> 0x20);
      fVar10 = *(float *)(puVar7 + 1);
      fVar11 = local_528;
      fVar16 = (float)local_530;
      fVar17 = local_530._4_4_;
    }
  }
  local_530._4_4_ = fVar17;
  local_530._0_4_ = fVar16;
  local_528 = fVar11;
  if (local_547[0] == '\0') {
    lVar8 = (**(code **)(*plVar5 + 0x688))(plVar5);
    if (lVar8 != 0) {
      fVar18 = *(float *)(lVar8 + 0x464);
    }
    local_508 = fVar13 + fVar18;
    local_510 = CONCAT44(fVar20,fVar19);
  }
  else {
    (**(code **)(*plVar5 + 0x610))(plVar5,&local_510,&local_530);
  }
  lVar8 = DAT_146b2fe10;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    lVar9 = 4;
  }
  else {
    lVar9 = 0;
  }
  local_528 = local_508 + *(float *)(lVar9 + lVar8);
  local_530 = local_510;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2ff10) && (_Init_thread_header(&DAT_146b2ff10), DAT_146b2ff10 == -1))
  {
    FName::FName(&DAT_146b2ff08,L"WeaponShotBlockageTest",1);
    _Init_thread_footer(&DAT_146b2ff10);
  }
  local_588 = plVar5;
  FUN_1422ffb20(local_4c8,DAT_146b2ff08,&local_548,1);
  (**(code **)(*plVar3 + 0xa78))(plVar3,local_4c8,1);
  *(ulonglong *)(param_1 + 0x2c) = CONCAT44(fStack_51c,local_520);
  *(undefined8 *)(param_1 + 0x38) = CONCAT44(fVar15,fVar14);
  *(float *)(param_1 + 0x34) = local_518;
  *(float *)(param_1 + 0x40) = fVar10;
  lVar8 = DAT_146b2fdb0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    lVar9 = 4;
  }
  else {
    lVar9 = 0;
  }
  local_4e4 = *(undefined4 *)(lVar8 + lVar9);
  local_550 = 0;
  local_558 = 0;
  local_560 = &DAT_146aefe68;
  local_568 = local_4c8;
  local_570 = &local_4e8;
  local_4e8 = 2;
  local_578 = (undefined1 *)CONCAT44(local_578._4_4_,3);
  local_580 = &DAT_1464aa810;
  local_588 = (undefined8 *)(param_1 + 0x38);
  puVar7 = (undefined8 *)FUN_142330490(uVar6,local_4f0,1,param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x48) = *puVar7;
  *(ulonglong *)(param_1 + 0x54) = CONCAT44(fStack_51c,local_520);
  *(float *)(param_1 + 0x5c) = local_518;
  *(undefined8 *)(param_1 + 0x60) = local_510;
  *(float *)(param_1 + 0x68) = local_508;
  lVar8 = DAT_146b2fdb0;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar2 = GetCurrentThreadId(), lVar9 = 4, DVar2 == DAT_1468c21c0)) {
    lVar9 = 0;
  }
  local_4d4 = *(undefined4 *)(lVar9 + lVar8);
  local_568 = local_4c8;
  local_550 = 0;
  local_558 = 0;
  local_560 = &DAT_146aefe68;
  local_570 = &local_4d8;
  local_578 = (undefined1 *)CONCAT44(local_578._4_4_,3);
  local_580 = &DAT_1464aa810;
  local_4d8 = 2;
  local_588 = (undefined8 *)(param_1 + 0x60);
  puVar7 = (undefined8 *)FUN_142330490(uVar6,&local_500,1,param_1 + 0x54);
  local_560 = (undefined *)((ulonglong)local_560 & 0xffffffff00000000);
  local_568 = (undefined1 *)0x0;
  local_570 = (undefined4 *)&DAT_146aefe68;
  *(undefined8 *)(param_1 + 0x70) = *puVar7;
  local_588 = (longlong *)(param_1 + 0x88);
  *(ulonglong *)(param_1 + 0x7c) = CONCAT44(fStack_51c,local_520);
  *(float *)(param_1 + 0x84) = local_518;
  *local_588 = local_530;
  *(float *)(param_1 + 0x90) = local_528;
  local_578 = local_4c8;
  local_580 = (undefined4 *)CONCAT44(local_580._4_4_,3);
  puVar7 = (undefined8 *)FUN_142330010(uVar6,&local_540,1);
  *(undefined8 *)(param_1 + 0x98) = *puVar7;
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (local_460 != 0) {
    FMemory::Free();
  }
  if (local_480 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c84260 FUN_142c84260 body=85 status=ok
// SIG undefined FUN_142c84260(void)

ulonglong FUN_142c84260(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  uVar1 = uVar3 + (longlong)*(int *)(param_1 + 0x18) * 8;
  for (uVar4 = uVar3; uVar4 != uVar1; uVar4 = uVar4 + 8) {
    if (*(char *)(uVar4 + 5) != '\0') {
      bVar2 = false;
      goto joined_r0x000142c84288;
    }
  }
  bVar2 = true;
joined_r0x000142c84288:
  do {
    if (uVar3 == uVar1) {
      uVar3 = uVar3 & 0xffffffffffffff00;
LAB_142c842a1:
      if ((!bVar2) && ((char)uVar3 == '\0')) {
        return uVar3;
      }
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (*(char *)(uVar3 + 5) == '\x04') {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      goto LAB_142c842a1;
    }
    uVar3 = uVar3 + 8;
  } while( true );
}



// FUNCTION 142c842c0 FUN_142c842c0 body=39 status=ok
// SIG undefined FUN_142c842c0(void)

undefined1 FUN_142c842c0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    cVar1 = FUN_142cd11b0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c842f0 FUN_142c842f0 body=431 status=ok
// SIG undefined FUN_142c842f0(void)

void FUN_142c842f0(longlong *param_1,undefined8 param_2,undefined2 param_3,longlong *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,float param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2fef0) {
    _Init_thread_header(&DAT_146b2fef0);
    if (DAT_146b2fef0 == -1) {
      FName::FName(&DAT_146b2fee8,L"FullBody",1);
      _Init_thread_footer(&DAT_146b2fef0);
    }
  }
  uVar1 = *param_5;
  uStack_40 = uStack_40 & 0xffffff00;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = param_6;
  uStack_34 = param_7;
  fStack_30 = 1.0;
  uStack_2c = uStack_4c;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_48 = uVar1;
  uVar2 = FUN_142c71560(param_1);
  uVar3 = FUN_142c715d0(param_1);
  local_60 = FUN_142c716b0(param_1);
  local_68 = CONCAT44(uVar3,uVar2);
  if (param_4 != (longlong *)0x0) {
    if (0.0 < param_8) {
      fStack_30 = (float)(**(code **)(*param_4 + 0x280))(param_4);
      fStack_30 = fStack_30 / param_8;
    }
  }
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,param_4,&local_38,&local_68);
  return;
}



// FUNCTION 142c844a0 FUN_142c844a0 body=121 status=ok
// SIG undefined FUN_142c844a0(void)

void FUN_142c844a0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong local_10;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar4;
    FUN_142c84e90(param_1,&local_18);
  }
  plVar5 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 142c84520 FUN_142c84520 body=69 status=ok
// SIG undefined FUN_142c84520(void)

void FUN_142c84520(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_142e27720();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      FUN_142c84570(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 142c84570 FUN_142c84570 body=211 status=ok
// SIG undefined FUN_142c84570(void)

void FUN_142c84570(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  lVar5 = FUN_142c71720(lVar5);
  if (lVar5 != 0) {
    FUN_142c6e090(lVar5,&local_28,param_2,param_1);
    plVar1 = plStack_20;
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      local_res8[0] = 3;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      FUN_142c84e90(param_1,&local_18,local_res8);
    }
    plVar4 = plStack_20;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar1 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142c84650 FUN_142c84650 body=241 status=ok
// SIG undefined FUN_142c84650(void)

void FUN_142c84650(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = FUN_142e27720();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,local_res10);
    if (lVar5 != 0) {
      plVar4 = (longlong *)param_1[1];
      local_18 = *param_1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_res8[0] = 3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_10 = plVar4;
      FUN_142c84e90(lVar5,&local_18,local_res8);
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
    }
  }
  plVar4 = (longlong *)param_1[1];
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



// FUNCTION 142c84750 FUN_142c84750 body=126 status=ok
// SIG undefined FUN_142c84750(void)

void FUN_142c84750(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res10 [24];
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  local_res10[0] = 3;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_142c84e90(param_1,&local_18,local_res10);
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



// FUNCTION 142c847d0 FUN_142c847d0 body=197 status=ok
// SIG undefined FUN_142c847d0(void)

void FUN_142c847d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_18;
  longlong local_10;
  
  if (param_2 != (longlong *)0x0) {
    local_res20 = FUN_142e27720();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,local_res20);
    if (lVar2 != 0) {
      local_res10[0] = 3;
      local_res18 = 0;
      if (param_1 != 0) {
        plVar3 = *(longlong **)(lVar2 + 0x180);
        plVar1 = plVar3 + (longlong)*(int *)(lVar2 + 0x188) * 3;
        if (plVar3 != plVar1) {
          while (*plVar3 != param_1) {
            plVar3 = plVar3 + 3;
            if (plVar3 == plVar1) {
              return;
            }
          }
          if (plVar3[1] != 0) {
            *(undefined1 *)(plVar3[1] + 0x30) = 3;
            local_18 = plVar3[1];
            local_10 = plVar3[2];
            if (local_10 != 0) {
              LOCK();
              *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
              UNLOCK();
            }
            FUN_142c84e90(lVar2,&local_18,local_res10);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c848a0 FUN_142c848a0 body=133 status=ok
// SIG undefined FUN_142c848a0(void)

void FUN_142c848a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_18;
  longlong local_10;
  
  local_res10[0] = 3;
  local_res18 = 0;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x180);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x188) * 3;
    if (plVar2 != plVar1) {
      while (*plVar2 != param_2) {
        plVar2 = plVar2 + 3;
        if (plVar2 == plVar1) {
          return;
        }
      }
      if (plVar2[1] != 0) {
        *(undefined1 *)(plVar2[1] + 0x30) = 3;
        local_18 = plVar2[1];
        local_10 = plVar2[2];
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        FUN_142c84e90(param_1,&local_18,local_res10);
      }
    }
  }
  return;
}



// FUNCTION 142c84930 FUN_142c84930 body=191 status=ok
// SIG undefined FUN_142c84930(void)

void FUN_142c84930(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong local_28;
  longlong local_20;
  
  if (param_1 != (longlong *)0x0) {
    local_res10 = FUN_142e27720();
    lVar1 = (**(code **)(*param_1 + 0x628))(param_1,local_res10);
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + 0x230) + -1;
      lVar4 = (longlong)iVar2;
      if (-1 < iVar2) {
        lVar3 = lVar4 << 4;
        do {
          if (iVar2 < *(int *)(lVar1 + 0x230)) {
            local_28 = *(longlong *)(*(longlong *)(lVar1 + 0x228) + lVar3);
            if (local_28 != 0) {
              local_res8[0] = 3;
              local_20 = *(longlong *)(*(longlong *)(lVar1 + 0x228) + 8 + lVar3);
              if (local_20 != 0) {
                LOCK();
                *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
                UNLOCK();
              }
              FUN_142c84e90(lVar1,&local_28,local_res8);
            }
          }
          iVar2 = iVar2 + -1;
          lVar3 = lVar3 + -0x10;
          lVar4 = lVar4 + -1;
        } while (-1 < lVar4);
      }
    }
  }
  return;
}



// FUNCTION 142c849f0 FUN_142c849f0 body=152 status=ok
// SIG undefined FUN_142c849f0(void)

void FUN_142c849f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_18;
  longlong local_10;
  
  iVar1 = *(int *)(param_1 + 0x230) + -1;
  lVar3 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar2 = lVar3 << 4;
    do {
      if (iVar1 < *(int *)(param_1 + 0x230)) {
        local_18 = *(longlong *)(*(longlong *)(param_1 + 0x228) + lVar2);
        if (local_18 != 0) {
          local_res8[0] = 3;
          local_10 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 8 + lVar2);
          if (local_10 != 0) {
            LOCK();
            *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
            UNLOCK();
          }
          FUN_142c84e90(param_1,&local_18,local_res8);
        }
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -0x10;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 142c84a90 FUN_142c84a90 body=369 status=ok
// SIG undefined FUN_142c84a90(void)

void FUN_142c84a90(longlong *param_1,longlong param_2,short param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (param_3 == 2)) {
    lVar2 = FUN_1423ac7e0(param_2);
    if (((*(float *)(param_1[2] + 0x158) != 0.0) || (*(float *)(param_1[2] + 0x15c) != 1.0)) &&
       ((lVar2 != 0 && (param_1[0x21] != 0)))) {
      plVar3 = (longlong *)FUN_142274b30();
      lVar6 = *plVar3;
      lVar4 = lVar6 + (longlong)(int)plVar3[1] * 0x18;
      for (; lVar6 != lVar4; lVar6 = lVar6 + 0x18) {
        FUN_14227d910(lVar2,lVar6);
      }
    }
  }
  FUN_142c84c10(param_1,param_2,param_3,param_4);
  if ((param_2 != 0) && (lVar2 = FUN_142c6f640(param_1,param_3), lVar2 != 0)) {
    lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_1423ac7e0(param_2);
      if (lVar4 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x138))(param_1,param_3);
        lVar4 = FUN_14225eb80(lVar4,lVar2,uVar5);
        if (lVar4 != 0) {
          FUN_1422b4b10(lVar4,param_4);
        }
      }
      FUN_142c80db0(lVar2,param_1[3]);
    }
  }
  return;
}



// FUNCTION 142c84c10 FUN_142c84c10 body=538 status=ok
// SIG undefined FUN_142c84c10(void)

void FUN_142c84c10(longlong param_1,longlong param_2,undefined2 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (0 < *(int *)(param_2 + 0x9f8)) {
      lVar5 = (longlong)*(int *)(param_2 + 0x9f8);
      iVar10 = 0;
      if (*(int *)(param_2 + 0x9f8) != 0) {
        iVar10 = 0;
        lVar9 = *(longlong *)(param_2 + 0x9f0);
        if (*(longlong *)(param_2 + 0x9f0) == 0) {
          lVar9 = param_2 + 0x9b0;
        }
        bVar11 = *(longlong *)(lVar9 + 8) != lVar3;
        lVar9 = 0;
        iVar7 = 0;
        do {
          lVar9 = lVar9 + 1;
          iVar8 = iVar7 + 1;
          if (lVar9 < lVar5) {
            lVar4 = *(longlong *)(param_2 + 0x9f0);
            if (*(longlong *)(param_2 + 0x9f0) == 0) {
              lVar4 = param_2 + 0x9b0;
            }
            plVar6 = (longlong *)(lVar9 * 0x10 + 8 + lVar4);
            do {
              if (bVar11 != (*plVar6 != lVar3)) break;
              iVar8 = iVar8 + 1;
              lVar9 = lVar9 + 1;
              plVar6 = plVar6 + 2;
            } while (lVar9 < lVar5);
          }
          if (bVar11 != false) {
            if (iVar10 != iVar7) {
              lVar4 = *(longlong *)(param_2 + 0x9f0);
              if (*(longlong *)(param_2 + 0x9f0) == 0) {
                lVar4 = param_2 + 0x9b0;
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar10 * 0x10 + lVar4),
                         (void *)((longlong)iVar7 * 0x10 + lVar4),(longlong)(iVar8 - iVar7) << 4);
            }
            iVar10 = iVar10 + (iVar8 - iVar7);
          }
          bVar11 = (bool)(bVar11 ^ 1);
          iVar7 = iVar8;
        } while (lVar9 < lVar5);
        *(int *)(param_2 + 0x9f8) = iVar10;
      }
      puVar2 = (undefined1 *)(param_2 + 0x9a0);
      if (*(undefined1 **)(param_2 + 0x9a8) != (undefined1 *)0x0) {
        if (*(int *)(param_2 + 0x9f8) != 0) {
          lVar3 = *(longlong *)(param_2 + 0x9f0);
          if (*(longlong *)(param_2 + 0x9f0) == 0) {
            lVar3 = param_2 + 0x9b0;
          }
          puVar2 = (undefined1 *)((longlong)iVar10 * 0x10 + -0x10 + lVar3);
        }
        **(undefined1 **)(param_2 + 0x9a8) = *puVar2;
      }
    }
    lVar3 = FUN_1423ac7e0(param_2);
    if ((lVar3 != 0) && (plVar6 = (longlong *)FUN_142c71cc0(param_1,param_3), *plVar6 != 0)) {
      cVar1 = UAnimInstance::Montage_IsActive(lVar3);
      if (cVar1 != '\0') {
        FUN_142279320(lVar3,param_4,*plVar6);
      }
      FUN_142c80db0(*plVar6,*(undefined8 *)(param_1 + 0x18));
      *plVar6 = 0;
    }
  }
  return;
}



// FUNCTION 142c84e30 FUN_142c84e30 body=86 status=ok
// SIG undefined FUN_142c84e30(void)

void FUN_142c84e30(longlong *param_1,undefined4 param_2,undefined2 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0xa0))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000142c84e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xb0))(param_1,uVar2,param_3,param_2);
  return;
}



// FUNCTION 142c84e90 FUN_142c84e90 body=991 status=ok
// SIG undefined FUN_142c84e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c84e90(longlong param_1,undefined1 (*param_2) [16],undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(longlong *)*param_2 == 0) goto LAB_142c851f1;
  FUN_142c6fe00(*(longlong *)*param_2,&local_98);
  if (local_98 != 0) {
    local_88._8_8_ = plStack_90;
    local_88._0_8_ = local_98;
    uVar4 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar5 = (undefined4)((ulonglong)plStack_90 >> 0x20);
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    if (&local_88 != param_2) {
      local_88 = *param_2;
      *(int *)*param_2 = (int)local_98;
      *(undefined4 *)(*param_2 + 4) = uVar4;
      *(int *)(*param_2 + 8) = (int)plStack_90;
      *(undefined4 *)(*param_2 + 0xc) = uVar5;
      local_58 = (int)local_98;
      uStack_54 = uVar4;
      uStack_50 = (int)plStack_90;
      uStack_4c = uVar5;
    }
    uVar6 = local_88._8_8_;
    if ((undefined8 *)local_88._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_88._8_8_ + 8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (*(code *)**(undefined8 **)local_88._8_8_)(local_88._8_8_);
        LOCK();
        piVar1 = (int *)(uVar6 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*(longlong *)local_88._8_8_ + 8))(local_88._8_8_,1);
        }
      }
    }
  }
  if (*(longlong *)*param_2 == 0) {
    plVar9 = (longlong *)0x0;
    local_a8 = 0;
    plVar10 = plVar9;
    if (*(longlong *)(_DAT_00000010 + 0x48) != 0) {
      plVar11 = *(longlong **)(param_1 + 0x180);
      plVar3 = plVar11 + (longlong)*(int *)(param_1 + 0x188) * 3;
      for (; plVar11 != plVar3; plVar11 = plVar11 + 3) {
        if (*plVar11 == *(longlong *)(_DAT_00000010 + 0x48)) {
          plVar9 = (longlong *)plVar11[2];
          plVar10 = (longlong *)plVar11[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          break;
        }
      }
    }
    plVar3 = *(longlong **)*param_2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (plVar3 == plVar10) {
      FUN_142c80fd0(param_1,*(longlong *)(*(longlong *)*param_2 + 0x10) + 0x48);
    }
    local_68 = *(longlong *)*param_2;
    local_60 = *(longlong *)(*param_2 + 8);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    plVar9 = &local_68;
LAB_142c85197:
    FUN_142c85520(param_1,plVar9,param_3);
  }
  else {
    *(undefined1 *)(*(longlong *)*param_2 + 0x30) = *param_3;
    iVar7 = FUN_14233f450(param_1);
    lVar8 = *(longlong *)*param_2;
    lVar2 = *(longlong *)(lVar8 + 0x10);
    if (iVar7 == 3) {
      if (lVar2 != 0) {
        FUN_142c80fd0(param_1,lVar2 + 0x48);
        lVar8 = *(longlong *)*param_2;
      }
      local_70 = *(longlong *)(*param_2 + 8);
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      plVar9 = &local_78;
      local_78 = lVar8;
      goto LAB_142c85197;
    }
    plVar9 = (longlong *)0x0;
    local_a8 = 0;
    plVar10 = plVar9;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      plVar11 = *(longlong **)(param_1 + 0x180);
      plVar3 = plVar11 + (longlong)*(int *)(param_1 + 0x188) * 3;
      for (; plVar11 != plVar3; plVar11 = plVar11 + 3) {
        if (*plVar11 == *(longlong *)(lVar2 + 0x48)) {
          plVar9 = (longlong *)plVar11[2];
          plVar10 = (longlong *)plVar11[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          break;
        }
      }
    }
    plVar3 = *(longlong **)*param_2;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (plVar3 == plVar10) {
      FUN_142c80fd0(param_1,*(longlong *)(*(longlong *)*param_2 + 0x10) + 0x48);
    }
    (**(code **)(**(longlong **)*param_2 + 0x20))();
    TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
              (param_1 + 0x228,param_2);
    if (local_98 != 0) {
      FUN_142c80680();
    }
    lVar8 = *(longlong *)*param_2;
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0xa4) != -1)) && (*(char *)(lVar8 + 0x31) != '\0')) {
      FUN_142e2b380(param_1,*(int *)(lVar8 + 0xa4),param_3);
    }
  }
  plVar9 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_90 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
LAB_142c851f1:
  plVar9 = *(longlong **)(*param_2 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142c85270 FUN_142c85270 body=82 status=ok
// SIG undefined FUN_142c85270(void)

void FUN_142c85270(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(char *)(param_1 + 0xa8) = *(char *)(param_1 + 0xa8) + '\x01';
  *(undefined1 *)(param_1 + 0x520) = 1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
  }
  plVar2 = (longlong *)FUN_142c71720(lVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c852b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x260))(plVar2);
    return;
  }
  return;
}



// FUNCTION 142c852d0 FUN_142c852d0 body=315 status=ok
// SIG undefined FUN_142c852d0(void)

void FUN_142c852d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_18;
  longlong *local_10;
  
  if (param_2 != (longlong *)0x0) {
    uVar6 = FUN_142e27720();
    lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x120);
      if (lVar8 == 0) {
        lVar8 = FUN_1423407b0(lVar7);
      }
      lVar8 = FUN_142c71720(lVar8);
      if (lVar8 != 0) {
        lVar12 = 0;
        lVar11 = lVar12;
        if (param_1 != 0) {
          lVar9 = UTreeView::GetPrivateStaticClass();
          lVar10 = param_1;
          do {
            lVar11 = param_1;
            if (lVar10 == lVar9) break;
            lVar10 = *(longlong *)(lVar10 + 0x30);
            lVar11 = lVar12;
          } while (lVar10 != 0);
        }
        FUN_142c6e090(lVar8,&local_18,lVar11,lVar7);
        if (local_18 != 0) {
          lVar7 = *(longlong *)(local_18 + 8);
          lVar8 = FUN_142e261f0();
          for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar8) {
              bVar4 = true;
              goto LAB_142c853a0;
            }
          }
          bVar4 = false;
LAB_142c853a0:
          if (bVar4) {
            lVar12 = local_18;
          }
          if (lVar12 != 0) {
            FUN_142c85270(lVar12);
          }
        }
        plVar5 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 142c85410 FUN_142c85410 body=267 status=ok
// SIG undefined FUN_142c85410(void)

void FUN_142c85410(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_18;
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  lVar6 = FUN_142c71720(lVar6);
  if (lVar6 != 0) {
    lVar10 = 0;
    lVar8 = lVar10;
    if (param_2 != 0) {
      lVar7 = UTreeView::GetPrivateStaticClass();
      lVar9 = param_2;
      do {
        lVar8 = param_2;
        if (lVar9 == lVar7) break;
        lVar9 = *(longlong *)(lVar9 + 0x30);
        lVar8 = lVar10;
      } while (lVar9 != 0);
    }
    FUN_142c6e090(lVar6,&local_18,lVar8,param_1);
    if (local_18 != 0) {
      lVar6 = *(longlong *)(local_18 + 8);
      lVar8 = FUN_142e261f0();
      for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar8) {
          bVar4 = true;
          goto LAB_142c854b0;
        }
      }
      bVar4 = false;
LAB_142c854b0:
      if (bVar4) {
        lVar10 = local_18;
      }
      if (lVar10 != 0) {
        FUN_142c85270(lVar10);
      }
    }
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 142c85520 FUN_142c85520 body=154 status=ok
// SIG undefined FUN_142c85520(void)

void FUN_142c85520(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  lVar5 = FUN_142c71720(lVar5);
  if (lVar5 != 0) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_142c80100(lVar5,&local_18,param_3);
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



// FUNCTION 142c855c0 FUN_142c855c0 body=240 status=ok
// SIG undefined FUN_142c855c0(void)

void FUN_142c855c0(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    lVar3 = FUN_142c71720(lVar3);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 0x460);
      plVar6 = plVar4 + (longlong)*(int *)(lVar3 + 0x468) * 2;
      for (; plVar4 != plVar6; plVar4 = plVar4 + 2) {
        plVar5 = (longlong *)*plVar4;
        if (*(int *)((longlong)plVar5 + 0xa4) == param_2) {
          plVar4 = (longlong *)plVar4[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          goto LAB_142c85638;
        }
      }
      plVar4 = (longlong *)0x0;
      plVar5 = plVar4;
LAB_142c85638:
      if (plVar5 != (longlong *)0x0) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_18 = plVar5;
        local_10 = plVar4;
        FUN_142c80100(lVar3,&local_18,param_3);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  return;
}



// FUNCTION 142c856b0 FUN_142c856b0 body=135 status=ok
// SIG undefined FUN_142c856b0(void)

void FUN_142c856b0(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18;
  longlong local_10;
  
  if (*param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x180);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x188) * 3;
    if (plVar2 != plVar1) {
      while (*plVar2 != *param_2) {
        plVar2 = plVar2 + 3;
        if (plVar2 == plVar1) {
          return;
        }
      }
      if (plVar2[1] != 0) {
        *(undefined1 *)(plVar2[1] + 0x30) = *param_3;
        local_18 = plVar2[1];
        local_10 = plVar2[2];
        if (local_10 != 0) {
          LOCK();
          *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
          UNLOCK();
        }
        FUN_142c84e90(param_1,&local_18,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142c85760 FUN_142c85760 body=320 status=ok
// SIG undefined FUN_142c85760(void)

longlong * FUN_142c85760(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_3 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142e20fc0();
    plVar5 = param_3;
    do {
      plVar7 = param_3;
      if (plVar5 == plVar3) goto LAB_142c857a4;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  plVar7 = (longlong *)0x0;
LAB_142c857a4:
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
  }
  uVar4 = FUN_142c6dec0();
  plVar5 = (longlong *)FUN_142c66ce0(uVar4,local_18,lVar6);
  *param_2 = *plVar5;
  lVar6 = plVar5[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (param_3 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142e20fc0();
    plVar5 = param_3;
    do {
      if (plVar5 == plVar3) goto LAB_142c85844;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  param_3 = (longlong *)0x0;
LAB_142c85844:
  lVar6 = param_3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*param_3 + 0x368))(param_3);
    lVar6 = param_3[0x1f];
  }
  *(longlong *)(*param_2 + 0x10) = lVar6;
  *(undefined8 *)(*param_2 + 0x18) = param_1;
  (**(code **)(*(longlong *)*param_2 + 0x30))();
  return param_2;
}



// FUNCTION 142c858a0 FUN_142c858a0 body=345 status=ok
// SIG undefined FUN_142c858a0(void)

longlong * FUN_142c858a0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_3 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142e20fc0();
    plVar5 = param_3;
    do {
      plVar7 = param_3;
      if (plVar5 == plVar3) goto LAB_142c858e5;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  plVar7 = (longlong *)0x0;
LAB_142c858e5:
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
  }
  uVar4 = FUN_142c6dec0();
  plVar5 = (longlong *)FUN_142c66ce0(uVar4,local_28,lVar6);
  *param_2 = *plVar5;
  lVar6 = plVar5[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  }
  if (param_3 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142e20fc0();
    plVar5 = param_3;
    do {
      if (plVar5 == plVar3) goto LAB_142c85985;
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  param_3 = (longlong *)0x0;
LAB_142c85985:
  lVar6 = param_3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*param_3 + 0x368))(param_3);
    lVar6 = param_3[0x1f];
  }
  *(longlong *)(*param_2 + 0x10) = lVar6;
  *(undefined8 *)(*param_2 + 0x18) = param_1;
  *(undefined1 *)(*param_2 + 0x31) = *(undefined1 *)(param_4 + 0x31);
  TArray<FObjectImport,FDefaultAllocator>::operator=(*param_2 + 0x20,param_4 + 0x20);
  (**(code **)(*(longlong *)*param_2 + 0x30))();
  return param_2;
}



// FUNCTION 142c85a00 FUN_142c85a00 body=34 status=ok
// SIG undefined FUN_142c85a00(void)

void FUN_142c85a00(undefined8 param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_142c86c80(param_1);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 142c85a30 FUN_142c85a30 body=350 status=ok
// SIG undefined FUN_142c85a30(void)

void FUN_142c85a30(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  while( true ) {
    lVar4 = param_1[3];
    if (lVar4 == 0) {
      return;
    }
    if (*(longlong *)(lVar4 + 0x118) == 0) break;
    cVar1 = (char)param_1[0x91];
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x91) = 1;
      (**(code **)(*param_1 + 0x110))(param_1);
    }
    else if (cVar1 == '\x02') {
      if ((((char)param_1[0xa4] == '\0') && (iVar3 = FUN_14233f450(lVar4), iVar3 == 3)) &&
         (cVar2 = (**(code **)(*param_1 + 0x128))(param_1), cVar2 != '\0')) {
        *(undefined1 *)(param_1 + 0xa4) = 1;
        FUN_142c76980(param_1);
      }
      if ((*(char *)(param_1[2] + 0x1d8) == '\0') && ((char)param_1[0xa4] != '\0')) {
        *(undefined1 *)(param_1 + 0x91) = 3;
        (**(code **)(*param_1 + 0x120))(param_1);
        if (param_1[3] == 0) {
          FUN_142e26000(param_1[2]);
        }
        else {
          FUN_142e26000(param_1[2],*(undefined8 *)(param_1[3] + 0x118));
        }
      }
    }
    else if ((cVar1 == '\x03') &&
            ((((param_1[0x20] == 0 ||
               (lVar4 = (**(code **)(*param_1 + 0xa0))(param_1,1), lVar4 == 0)) ||
              ((lVar4 = FUN_1423ac7e0(lVar4), lVar4 == 0 ||
               (cVar2 = UAnimInstance::Montage_IsActive(lVar4,param_1[0x20]), cVar2 == '\0')))) &&
             (cVar2 = FUN_142c73400(param_1,2,0), cVar2 == '\0')))) {
      *(undefined1 *)(param_1 + 0x91) = 4;
    }
    if ((char)param_1[0x91] == cVar1) {
      return;
    }
  }
  return;
}



// FUNCTION 142c85b90 FUN_142c85b90 body=308 status=ok
// SIG undefined FUN_142c85b90(void)

void FUN_142c85b90(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined **local_48;
  longlong local_40;
  undefined ***local_10;
  
  FUN_142c85cd0();
  lVar3 = FUN_142c71f80(param_1);
  if (lVar3 == 0) {
    return;
  }
  bVar1 = *(byte *)(lVar3 + 0x210);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((bVar1 & 0x10) == 0) {
    if (((bVar1 & 4) == 0) && (*(char *)(lVar2 + 0x1c0) == '\x01')) {
      FUN_142c81820(param_1);
      if ((*(byte *)(lVar3 + 0x210) & 0x10) == 0) {
        *(byte *)(lVar3 + 0x210) = *(byte *)(lVar3 + 0x210) | 0x10;
      }
    }
    if (*(char *)(lVar2 + 0x1c0) == '\x02') {
      if ((~(bVar1 | 0xe0) & *(byte *)(lVar2 + 0x1c1)) != *(byte *)(lVar2 + 0x1c1))
      goto LAB_142c85c68;
    }
    else if ((*(char *)(lVar2 + 0x1c0) != '\x03') ||
            ((*(byte *)(lVar2 + 0x1c1) & ~(bVar1 | 0xe0)) == 0)) goto LAB_142c85c68;
    local_48 = &PTR_LAB_14583fc30;
    local_10 = &local_48;
    local_40 = param_1;
    FUN_142c6db40(param_1,&local_48);
    if ((*(byte *)(lVar3 + 0x210) & 0x10) == 0) {
      *(byte *)(lVar3 + 0x210) = *(byte *)(lVar3 + 0x210) | 0x10;
    }
  }
LAB_142c85c68:
  if (*(char *)(lVar2 + 0x1c3) == '\x04') {
    if ((~(bVar1 | 0xe0) & *(byte *)(lVar2 + 0x1c2)) != *(byte *)(lVar2 + 0x1c2)) {
      return;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x1c3) != '\x05') {
      return;
    }
    if ((*(byte *)(lVar2 + 0x1c2) & ~(bVar1 | 0xe0)) == 0) {
      return;
    }
  }
  FUN_142db6cc0(lVar3,0,0);
  return;
}



// FUNCTION 142c85cd0 FUN_142c85cd0 body=592 status=ok
// SIG undefined FUN_142c85cd0(void)

void FUN_142c85cd0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [48];
  
  uVar11 = 0;
  lVar5 = param_1[2];
  if (((byte)(int)param_1[0x1f] & 0x18) == 0x18) {
    lVar6 = *param_1;
    uVar3 = (undefined4)param_1[0x1c];
    uVar9 = (**(code **)(lVar6 + 0xa0))(param_1,2);
    (**(code **)(lVar6 + 0xb0))(param_1,uVar9,2,uVar3);
    lVar6 = *param_1;
    uVar9 = (**(code **)(lVar6 + 0xa0))(param_1,1);
    (**(code **)(lVar6 + 0xb0))(param_1,uVar9,1,uVar3);
    lVar6 = *param_1;
    uVar9 = (**(code **)(lVar6 + 0xa0))(param_1,4);
    (**(code **)(lVar6 + 0xb0))(param_1,uVar9,4,uVar3);
    lVar6 = *param_1;
    uVar9 = (**(code **)(lVar6 + 0xa0))(param_1,8);
    (**(code **)(lVar6 + 0xb0))(param_1,uVar9,8,uVar3);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    if (0 < (int)param_1[0x85]) {
      do {
        lVar6 = *param_1;
        uVar9 = (**(code **)(lVar6 + 0xa0))(param_1,0x10);
        (**(code **)(lVar6 + 0xb0))(param_1,uVar9,0x10,uVar3);
        *(int *)(param_1 + 0x8c) = (int)param_1[0x8c] + 1;
      } while ((int)param_1[0x8c] < (int)param_1[0x85]);
    }
  }
  if ((*(char *)((longlong)param_1 + 0xfc) == '\0') &&
     (cVar8 = (**(code **)(*param_1 + 0x100))(param_1,param_2), cVar8 != '\0')) {
    if ((param_1[3] == 0) || (*(char *)(lVar5 + 0xb1) == '\0')) {
      (**(code **)(*param_1 + 0x108))(param_1);
    }
    else {
      local_res8[0] = 1;
      plVar10 = (longlong *)FUN_142c86b10(param_1,local_48);
      lVar6 = param_1[3];
      lVar7 = *plVar10;
      if (lVar7 != 0) {
        local_50 = plVar10[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_58 = lVar7;
        FUN_142c84e90(lVar6,&local_58,local_res8);
      }
      plVar10 = (longlong *)plVar10[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
  if (*(char *)(lVar5 + 0x88) != '\0') {
    do {
      FUN_142c85f20(param_1 + (longlong)(int)uVar11 * 0x18 + 0x24,param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
  }
  return;
}



// FUNCTION 142c85f20 FUN_142c85f20 body=458 status=ok
// SIG undefined FUN_142c85f20(void)

void FUN_142c85f20(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar4 = param_1 + 0x30;
    }
    plVar5 = (longlong *)(lVar4 + (longlong)*(int *)(param_1 + 0x2c) * 0x20);
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    uVar2 = FWeakObjectPtr::Get(param_1);
    plVar3 = (longlong *)UAnimInstance::Montage_GetCurrentSection(uVar2,&local_res8,uVar1);
    if (*plVar3 == *plVar5) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        uVar1 = FWeakObjectPtr::Get(param_1 + 8);
        uVar2 = FWeakObjectPtr::Get(param_1);
        uVar6 = UAnimInstance::Montage_GetPlayRate(uVar2,uVar1);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        uVar1 = FWeakObjectPtr::Get(param_1 + 8);
        uVar2 = FWeakObjectPtr::Get(param_1);
        UAnimInstance::Montage_SetPlayRate(uVar2,uVar1,(int)plVar5[3]);
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      else {
        param_2 = param_2 + *(float *)(param_1 + 0x20);
        *(float *)(param_1 + 0x20) = param_2;
        if (*(float *)(plVar5 + 2) <= param_2) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          if (*(float *)((longlong)plVar5 + 0x14) <= (float)*(int *)(param_1 + 0x24)) {
            lVar4 = plVar5[1];
            local_res8 = 0;
            uVar1 = FWeakObjectPtr::Get(param_1 + 8);
            if (lVar4 == 0) {
              lVar4 = FWeakObjectPtr::Get(param_1 + 8);
              uVar6 = *(undefined4 *)(lVar4 + 0x108);
              uVar2 = FWeakObjectPtr::Get(param_1);
              FUN_142279320(uVar2,uVar6,uVar1);
            }
            else {
              uVar2 = FWeakObjectPtr::Get(param_1);
              UAnimInstance::Montage_SetPlayRate(uVar2,uVar1,*(undefined4 *)(param_1 + 0x28));
              uVar1 = FWeakObjectPtr::Get(param_1 + 8);
              uVar2 = FWeakObjectPtr::Get(param_1);
              UAnimInstance::Montage_JumpToSection(uVar2,plVar5[1],uVar1);
            }
            *(undefined4 *)(param_1 + 0x24) = 0;
            *(undefined1 *)(param_1 + 0x1c) = 0;
            *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x2c) + 1) % *(int *)(param_1 + 0xb8);
          }
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 142c860f0 FUN_142c860f0 body=2579 status=ok
// SIG undefined FUN_142c860f0(void)

void FUN_142c860f0(longlong *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  uint uVar22;
  uint *puVar23;
  longlong *plVar24;
  bool bVar25;
  longlong *local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  uint local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  uint local_e0;
  uint uStack_dc;
  uint *puStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined8 local_90;
  uint uStack_88;
  uint uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  
  uVar18 = 0;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  uVar7 = uVar18;
  if (iVar6 < (int)DAT_1469e91c4) {
    uVar12 = iVar6 >> 0x1f & 0xffff;
    uVar5 = iVar6 + uVar12;
    uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18;
  }
  if (((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) &&
     (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
    iVar6 = FUN_142235230(param_1);
    if (iVar6 != 3) {
      lVar8 = FUN_1422325e0(param_1);
      if ((lVar8 == 0) || (lVar8 = FUN_1422325e0(param_1), *(int *)(lVar8 + 0xa0) == 0)) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Empty(param_1 + 0x98,0);
      }
      plVar24 = param_1 + 0x98;
      local_f0 = 0;
      uVar5 = *(uint *)(param_1 + 0x9d);
      puStack_d8 = (uint *)(param_1 + 0x9a);
      local_e8 = 0;
      local_e0 = 0;
      uStack_dc = 1;
      uStack_cc = 0;
      uStack_c8 = 0;
      if (uVar5 != 0) {
        puVar23 = (uint *)param_1[0x9c];
        if ((uint *)param_1[0x9c] == (uint *)0x0) {
          puVar23 = puStack_d8;
        }
        uVar12 = *puVar23;
        uVar7 = uVar18;
        uVar21 = uVar18;
        while (uVar12 == 0) {
          iVar6 = (int)uVar7;
          uStack_c8 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uStack_c8;
          local_e0 = iVar6 + 1;
          uVar7 = (ulonglong)local_e0;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_142c862b1;
          uVar12 = puVar23[(longlong)iVar6 + 1];
        }
        uStack_dc = -uVar12 & uVar12;
        local_98 = 0x1f;
        if (uStack_dc != 0) {
          for (; uStack_dc >> local_98 == 0; local_98 = local_98 + -1) {
          }
        }
        if (uStack_dc == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - local_98;
        }
        uStack_cc = (uStack_c8 - iVar6) + 0x1f;
        if ((int)uVar5 < (int)uStack_cc) {
LAB_142c862b1:
          uStack_cc = uVar5;
        }
      }
      local_d0 = 0xffffffff;
      uVar12 = *(uint *)(param_1 + 0x9d);
      uStack_b8 = CONCAT44(uStack_dc,local_e0);
      uStack_78 = CONCAT44(uStack_cc,0xffffffff);
      uStack_a0 = CONCAT44(uStack_c4,uStack_c8);
      local_110 = -1 << ((byte)uVar12 & 0x1f);
      local_c0._4_4_ = (undefined4)((ulonglong)plVar24 >> 0x20);
      iVar6 = (int)uVar12 >> 5;
      local_c0 = CONCAT44(local_c0._4_4_,iVar6);
      uVar22 = uVar12 & 0xffffffe0;
      uStack_b0 = CONCAT44(uVar12,local_110);
      uStack_a8 = CONCAT44(uStack_cc,uVar12) & 0xffffffffffffffe0;
      uStack_88 = local_e0;
      uStack_84 = uStack_dc;
      uVar7 = uVar18;
      uVar21 = uVar18;
      local_80 = puStack_d8;
      local_70 = uStack_a0;
      local_90 = plVar24;
      uVar3 = uStack_b0;
      if (uVar12 != uVar5) {
        puVar23 = (uint *)param_1[0x9c];
        if ((uint *)param_1[0x9c] == (uint *)0x0) {
          puVar23 = puStack_d8;
        }
        uVar12 = puVar23[iVar6] & local_110;
        while (uVar12 == 0) {
          uVar22 = uVar22 + 0x20;
          uVar15 = uStack_a8 >> 0x20;
          uStack_a8 = CONCAT44((int)uVar15,uVar22);
          local_c0._4_4_ = (undefined4)((ulonglong)local_c0 >> 0x20);
          local_c0 = CONCAT44(local_c0._4_4_,iVar6 + 1);
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_142c8639d;
          uVar12 = puVar23[(longlong)iVar6 + 1];
          uStack_b0 = 0xffffffff;
          iVar6 = iVar6 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        local_110 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> local_110 == 0; local_110 = local_110 - 1) {
          }
        }
        if (uVar12 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - local_110;
        }
        iVar6 = (uVar22 - iVar6) + 0x1f;
        uStack_b0 = CONCAT44(iVar6,(undefined4)uStack_b0);
        uVar3 = uStack_b0;
        if ((int)uVar5 < iVar6) {
LAB_142c8639d:
          uStack_b0 = CONCAT44(uVar5,(undefined4)uStack_b0);
          uVar3 = uStack_b0;
        }
      }
      while( true ) {
        iVar6 = (int)uVar18;
        if (((uStack_78._4_4_ == (int)((ulonglong)uVar3 >> 0x20)) &&
            (local_80 == (uint *)(param_1 + 0x9a))) && (local_90 == plVar24)) break;
        puVar19 = (undefined4 *)((longlong)uStack_78._4_4_ * 0x20 + *local_90);
        lVar8 = *(longlong *)(puVar19 + 2);
        fVar2 = *DAT_146b2fd98;
        lVar9 = (**(code **)(*param_1 + 0x148))();
        if (fVar2 + *(float *)(lVar8 + 0xac) < *(float *)(lVar9 + 0x790)) {
          uVar5 = iVar6 + 1;
          local_e8 = CONCAT44(local_e8._4_4_,uVar5);
          if ((int)uVar7 < (int)uVar5) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_f0);
            uVar7 = local_e8 >> 0x20;
            uVar21 = local_f0;
            uVar5 = (uint)local_e8;
          }
          uVar18 = (ulonglong)uVar5;
          *(undefined4 *)(uVar21 + (longlong)iVar6 * 4) = *puVar19;
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
      }
      uVar7 = uVar21 + (longlong)iVar6 * 4;
      uVar15 = 0;
      uVar18 = (uVar7 - uVar21) + 3 >> 2;
      if (uVar7 < uVar21) {
        uVar18 = uVar15;
      }
      if (uVar18 != 0) {
        do {
          FUN_1406cd900(plVar24);
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar18);
      }
      if (uVar21 != 0) {
        FMemory::Free(uVar21);
      }
    }
    plVar24 = (longlong *)param_1[0x8c];
    plVar10 = plVar24 + (longlong)(int)param_1[0x8d] * 2;
    local_130 = (longlong *)0x0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_f8 = plVar10;
    if (plVar24 != plVar10) {
      do {
        lVar9 = 0;
        plVar20 = (longlong *)plVar24[1];
        lVar8 = *plVar24;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
        }
        if (param_3 == 3) {
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
          }
          if (*(longlong *)(lVar8 + 0x18) != 0) {
            lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 0x118);
          }
          if (lVar9 == 0) {
LAB_142c86538:
            bVar25 = false;
          }
          else {
            cVar4 = AActor::GetTickableWhenPaused();
            if (cVar4 == '\0') goto LAB_142c86538;
            bVar25 = true;
          }
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar20 + 1;
            lVar9 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20);
              }
            }
          }
          if (bVar25) goto LAB_142c8657d;
LAB_142c866c4:
          if (*(longlong *)(lVar8 + 0x10) != 0) {
            plVar10 = *(longlong **)(lVar8 + 0xc0);
            plVar14 = (longlong *)0x0;
            plVar16 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              iVar6 = (int)plVar10[1];
              bVar25 = iVar6 == 0;
              if (bVar25) {
                *(int *)(plVar10 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (plVar14 = (longlong *)0x0, plVar16 = (longlong *)0x0, !bVar25) {
                LOCK();
                bVar25 = iVar6 == (int)plVar10[1];
                if (bVar25) {
                  *(int *)(plVar10 + 1) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar25) {
                  plVar16 = plVar10;
                  if (plVar10 != (longlong *)0x0) {
                    plVar14 = *(longlong **)(lVar8 + 0xb8);
                  }
                  break;
                }
                LOCK();
                iVar6 = (int)plVar10[1];
                bVar25 = iVar6 == 0;
                if (bVar25) {
                  *(int *)(plVar10 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            if ((char)plVar14[6] == '\0') {
LAB_142c8672d:
              bVar25 = false;
            }
            else {
              cVar4 = (**(code **)(*plVar14 + 0x40))(plVar14);
              if (cVar4 == '\0') goto LAB_142c8672d;
              bVar25 = true;
            }
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar16 + 1;
              lVar9 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar16 + 8))(plVar16);
                }
              }
            }
            uVar7 = local_118;
            plVar10 = local_f8;
            if (bVar25) {
              lVar9 = *(longlong *)(lVar8 + 0xc0);
              lVar17 = lVar9;
              lVar13 = 0;
              if (lVar9 != 0) {
                LOCK();
                iVar6 = *(int *)(lVar9 + 8);
                bVar25 = iVar6 == 0;
                if (bVar25) {
                  *(int *)(lVar9 + 8) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
                while (lVar17 = 0, lVar13 = 0, !bVar25) {
                  LOCK();
                  bVar25 = iVar6 == *(int *)(lVar9 + 8);
                  if (bVar25) {
                    *(int *)(lVar9 + 8) = iVar6 + 1;
                  }
                  UNLOCK();
                  if (bVar25) {
                    lVar17 = lVar9;
                    if (lVar9 != 0) {
                      lVar13 = *(longlong *)(lVar8 + 0xb8);
                    }
                    break;
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar9 + 8);
                  bVar25 = iVar6 == 0;
                  if (bVar25) {
                    *(int *)(lVar9 + 8) = 0;
                    iVar6 = 0;
                  }
                  UNLOCK();
                }
              }
              lVar8 = (longlong)(int)local_118;
              iVar6 = (int)local_118 + 1;
              local_118 = CONCAT44(local_118._4_4_,iVar6);
              if (local_118._4_4_ < iVar6) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_120,uVar7 & 0xffffffff);
              }
              plVar10 = (longlong *)(lVar8 * 0x10 + local_120);
              goto LAB_142c867de;
            }
          }
        }
        else {
LAB_142c8657d:
          uVar18 = local_100;
          uVar7 = local_128;
          lVar9 = 0;
          if (*(char *)(lVar8 + 0x30) != '\0') goto LAB_142c866c4;
          if (*(longlong *)(lVar8 + 0x18) == 0) {
LAB_142c86649:
            lVar13 = 0;
            lVar9 = *(longlong *)(lVar8 + 0xc0);
            lVar17 = lVar9;
            if (lVar9 != 0) {
              LOCK();
              iVar6 = *(int *)(lVar9 + 8);
              bVar25 = iVar6 == 0;
              if (bVar25) {
                *(int *)(lVar9 + 8) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (lVar17 = lVar13, !bVar25) {
                LOCK();
                bVar25 = iVar6 == *(int *)(lVar9 + 8);
                if (bVar25) {
                  *(int *)(lVar9 + 8) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar25) {
                  lVar17 = lVar9;
                  lVar13 = 0;
                  if (lVar9 != 0) {
                    lVar13 = *(longlong *)(lVar8 + 0xb8);
                  }
                  break;
                }
                LOCK();
                iVar6 = *(int *)(lVar9 + 8);
                bVar25 = iVar6 == 0;
                if (bVar25) {
                  *(int *)(lVar9 + 8) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            lVar8 = (longlong)(int)local_128;
            iVar6 = (int)local_128 + 1;
            local_128 = CONCAT44(local_128._4_4_,iVar6);
            if (local_128._4_4_ < iVar6) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_130,uVar7 & 0xffffffff);
            }
            local_130[lVar8 * 2] = lVar13;
            local_130[lVar8 * 2 + 1] = lVar17;
            *(undefined1 *)(local_130[lVar8 * 2] + 0x30) = 5;
            plVar10 = local_f8;
            goto LAB_142c867ea;
          }
          uVar5 = *(uint *)(*(longlong *)(lVar8 + 0x18) + 0xc);
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar12 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar12 = uVar12 - 0x10000;
            }
            lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar12 * 0x18;
          }
          lVar13 = 0;
          if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_142c86649;
          lVar9 = *(longlong *)(lVar8 + 0xc0);
          lVar17 = lVar9;
          if (lVar9 != 0) {
            LOCK();
            iVar6 = *(int *)(lVar9 + 8);
            bVar25 = iVar6 == 0;
            if (bVar25) {
              *(int *)(lVar9 + 8) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            while (lVar17 = lVar13, !bVar25) {
              LOCK();
              bVar25 = iVar6 == *(int *)(lVar9 + 8);
              if (bVar25) {
                *(int *)(lVar9 + 8) = iVar6 + 1;
              }
              UNLOCK();
              if (bVar25) {
                lVar17 = lVar9;
                lVar13 = 0;
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)(lVar8 + 0xb8);
                }
                break;
              }
              LOCK();
              iVar6 = *(int *)(lVar9 + 8);
              bVar25 = iVar6 == 0;
              if (bVar25) {
                *(int *)(lVar9 + 8) = 0;
                iVar6 = 0;
              }
              UNLOCK();
            }
          }
          lVar8 = (longlong)(int)local_100;
          iVar6 = (int)local_100 + 1;
          local_100 = CONCAT44(local_100._4_4_,iVar6);
          if (local_100._4_4_ < iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,uVar18 & 0xffffffff);
          }
          plVar10 = local_108 + lVar8 * 2;
LAB_142c867de:
          *plVar10 = lVar13;
          plVar10[1] = lVar17;
          plVar10 = local_f8;
        }
LAB_142c867ea:
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar20 + 1;
          lVar8 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        plVar24 = plVar24 + 2;
      } while (plVar24 != plVar10);
    }
    plVar10 = local_108 + (longlong)(int)local_100 * 2;
    for (plVar24 = local_108; plVar24 != plVar10; plVar24 = plVar24 + 2) {
      plVar20 = (longlong *)plVar24[1];
      plVar14 = (longlong *)*plVar24;
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x28))(plVar14,param_2);
      cVar4 = (**(code **)(*plVar14 + 0x38))(plVar14);
      uVar7 = local_128;
      if ((cVar4 != '\0') && (((char)param_1[0x25] == '\x03' || ((char)plVar14[0x14] == -1)))) {
        lVar8 = (longlong)(int)local_128;
        iVar6 = (int)local_128 + 1;
        local_128 = CONCAT44(local_128._4_4_,iVar6);
        if (local_128._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_130,uVar7 & 0xffffffff);
        }
        local_130[lVar8 * 2] = (longlong)plVar14;
        local_130[lVar8 * 2 + 1] = (longlong)plVar20;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
        }
        *(undefined1 *)(local_130[lVar8 * 2] + 0x30) = 1;
      }
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar20 + 1;
        lVar8 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
    }
    plVar10 = local_130 + (longlong)(int)local_128 * 2;
    for (plVar24 = local_130; plVar24 != plVar10; plVar24 = plVar24 + 2) {
      plVar14 = (longlong *)plVar24[1];
      plVar16 = (longlong *)*plVar24;
      plVar20 = plVar14 + 1;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar20 = (int)*plVar20 + 1;
        UNLOCK();
        LOCK();
        *(int *)plVar20 = (int)*plVar20 + 1;
        UNLOCK();
      }
      plVar20 = plVar14 + 1;
      local_68 = plVar16;
      local_60 = plVar14;
      FUN_142c80100(param_1,&local_68,plVar16 + 6);
      if (plVar16[2] == 0) {
LAB_142c86a22:
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          lVar8 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
      }
      else {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar20 = (int)*plVar20 + 1;
          UNLOCK();
        }
        if ((char)plVar16[6] == '\0') {
LAB_142c869a7:
          bVar25 = false;
        }
        else {
          cVar4 = (**(code **)(*plVar16 + 0x40))(plVar16);
          if (cVar4 == '\0') goto LAB_142c869a7;
          bVar25 = true;
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          lVar8 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        uVar7 = local_118;
        if (!bVar25) goto LAB_142c86a22;
        lVar8 = (longlong)(int)local_118;
        iVar6 = (int)local_118 + 1;
        local_118 = CONCAT44(local_118._4_4_,iVar6);
        if (local_118._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_120,uVar7 & 0xffffffff);
        }
        plVar11 = (longlong *)(lVar8 * 0x10 + local_120);
        *plVar11 = (longlong)plVar16;
        plVar11[1] = (longlong)plVar14;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)plVar20 = (int)*plVar20 + 1;
          UNLOCK();
          goto LAB_142c86a22;
        }
      }
    }
    FUN_142c6a450(param_1,&local_120);
    if (((int)param_1[0x8d] == 0) && ((int)param_1[0x99] == *(int *)((longlong)param_1 + 0x4f4))) {
      AActor::SetActorTickEnabled(param_1,0);
    }
    (**(code **)(*param_1 + 0x458))(param_1,param_2);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_108);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_120);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_130);
  }
  return;
}



// FUNCTION 142c86b10 FUN_142c86b10 body=88 status=ok
// SIG undefined FUN_142c86b10(void)

undefined8 * FUN_142c86b10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_142c86b4f;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_142c86b4f:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0xb8);
    }
  }
  return param_2;
}



// FUNCTION 142c86b70 FUN_142c86b70 body=184 status=ok
// SIG undefined FUN_142c86b70(void)

undefined8 * FUN_142c86b70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0xc0);
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
          plVar5 = *(longlong **)(param_1 + 0xb8);
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
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  return param_2;
}



// FUNCTION 142c86c30 FUN_142c86c30 body=69 status=ok
// SIG undefined FUN_142c86c30(void)

void FUN_142c86c30(longlong *param_1)

{
  *(undefined1 *)(param_1 + 0x91) = 3;
  (**(code **)(*param_1 + 0x120))();
  if (param_1[3] != 0) {
    FUN_142e26000(param_1[2],*(undefined8 *)(param_1[3] + 0x118));
    return;
  }
  FUN_142e26000(param_1[2]);
  return;
}



// FUNCTION 142c86c80 FUN_142c86c80 body=1075 status=ok
// SIG undefined FUN_142c86c80(void)

bool FUN_142c86c80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  uint uVar14;
  longlong local_68;
  float fStack_60;
  float fStack_5c;
  longlong local_58;
  float local_50;
  undefined1 local_48 [48];
  
  cVar1 = (char)param_1[0x98];
  lVar11 = param_1[2];
  if (cVar1 == '\0') {
    uVar10 = *(undefined8 *)(lVar11 + 0x228);
    plVar12 = (longlong *)0x0;
    local_68 = 0;
    fStack_60 = 0.0;
    puVar6 = (undefined4 *)FUN_142c62320(local_48);
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *puVar6 = *(undefined4 *)(lVar11 + 0x220);
    puVar6[1] = 0;
    FUN_142c7c510(param_1,lVar11 + 0xb8,puVar6,&local_68);
    *(undefined1 *)(param_1 + 0x98) = 1;
    if (param_1[3] != 0) {
      plVar12 = *(longlong **)(param_1[3] + 0x118);
    }
    if (plVar12 != (longlong *)0x0) {
      uVar10 = FUN_142e39920();
      lVar11 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar10);
      if (lVar11 != 0) {
        FUN_142cff920(lVar11,1,param_1[0x16]);
      }
    }
  }
  else if (cVar1 == '\x01') {
    cVar4 = FUN_142c73400(param_1,1,1);
    if (cVar4 != '\0') {
      lVar8 = param_1[0x20];
      if ((((lVar8 == 0) || (lVar7 = (**(code **)(*param_1 + 0xa0))(param_1,1), lVar7 == 0)) ||
          (lVar7 = FUN_1423ac7e0(lVar7), lVar7 == 0)) ||
         ((cVar4 = UAnimInstance::Montage_IsActive(lVar7,lVar8), cVar4 == '\0' ||
          (lVar8 = UAnimInstance::GetActiveInstanceForMontage(lVar7,lVar8), lVar8 == 0)))) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = (float)FUN_1422752f0(lVar8);
      }
      if (*(float *)(lVar11 + 0x238) <= fVar13 && fVar13 != *(float *)(lVar11 + 0x238)) {
        FUN_142c87c70(param_1);
        goto LAB_142c87087;
      }
    }
    lVar8 = param_1[3];
    plVar12 = (longlong *)0x0;
    if (((lVar8 != 0) && (param_1[0x8e] != 0)) &&
       ((lVar7 = param_1[2], 0.0 < *(float *)(lVar7 + 0x230) && (*(longlong *)(lVar8 + 0x118) != 0))
       )) {
      lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x118) + 0x168);
      if (lVar2 == 0) {
        fVar13 = (float)DAT_1468b5da0;
        uVar14 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_50 = DAT_1468b5da8;
      }
      else {
        fVar13 = *(float *)(lVar2 + 0x210);
        local_68 = *(longlong *)(lVar2 + 0x210);
        fStack_60 = *(float *)(lVar2 + 0x218);
        fStack_5c = *(float *)(lVar2 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != *(float *)(lVar2 + 0x214));
        auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != fVar13);
        auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_60);
        auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_5c);
        iVar5 = movmskps((int)lVar8,auVar3);
        if (iVar5 != 0) {
          *(float *)(lVar2 + 0x250) = fVar13;
          *(float *)(lVar2 + 0x254) = *(float *)(lVar2 + 0x214);
          *(float *)(lVar2 + 600) = fStack_60;
          *(float *)(lVar2 + 0x25c) = fStack_5c;
          puVar9 = (undefined8 *)FQuat::Rotator(&local_68,&local_58);
          *(undefined8 *)(lVar2 + 0x260) = *puVar9;
          *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar9 + 1);
        }
        fVar13 = (float)*(undefined8 *)(lVar2 + 0x260);
        uVar14 = (uint)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
        local_50 = *(float *)(lVar2 + 0x268);
      }
      local_58 = CONCAT44(uVar14,fVar13);
      if ((local_50 != 0.0) || (fVar13 != 0.0)) {
        local_68 = (ulonglong)uVar14 << 0x20;
        local_58 = local_68;
        fStack_60 = 0.0;
        local_50 = 0.0;
        FUN_142d85fe0(param_1[0x8e] + 0x2428,&local_58,*(undefined4 *)(lVar7 + 0x230),1,0,0);
      }
    }
    *(undefined1 *)(param_1 + 0x98) = 2;
    uVar10 = *(undefined8 *)(lVar11 + 0x228);
    local_68 = 0;
    fStack_60 = 0.0;
    puVar6 = (undefined4 *)FUN_142c62320(local_48);
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *puVar6 = *(undefined4 *)(lVar11 + 0x238);
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 6) = 2;
    FUN_142c7c510(param_1,lVar11 + 0x130,puVar6,&local_68);
    if (param_1[3] != 0) {
      plVar12 = *(longlong **)(param_1[3] + 0x118);
    }
    if (plVar12 != (longlong *)0x0) {
      uVar10 = FUN_142e39920();
      lVar11 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar10);
      if (lVar11 != 0) {
        FUN_142cf3f20(lVar11,1);
      }
    }
    plVar12 = (longlong *)param_1[0x8e];
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x5a0))(plVar12,3);
    }
  }
  else if (cVar1 == '\x02') {
    lVar8 = 0;
    if (param_1[3] != 0) {
      lVar8 = *(longlong *)(param_1[3] + 0x118);
    }
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x128) != '\x03')) {
      if ((char)param_1[0x8d] == '\0') goto LAB_142c87087;
    }
    else if (((longlong *)param_1[0x8e] != (longlong *)0x0) &&
            (cVar4 = (**(code **)(*(longlong *)param_1[0x8e] + 0x558))(), cVar4 != '\0'))
    goto LAB_142c87087;
    *(undefined1 *)(param_1 + 0x8d) = 1;
    FUN_142c76980(param_1);
    uVar10 = *(undefined8 *)(lVar11 + 0x228);
    local_68 = 0;
    fStack_60 = 0.0;
    puVar6 = (undefined4 *)FUN_142c62320(local_48);
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *puVar6 = 0;
    puVar6[1] = *(undefined4 *)(lVar11 + 0x224);
    FUN_142c7c510(param_1,lVar11 + 0x1a8,puVar6,&local_68);
    *(undefined1 *)(param_1 + 0x98) = 3;
  }
  else if ((cVar1 == '\x03') && (cVar4 = FUN_142c73400(param_1,1,1), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0x98) = 4;
  }
LAB_142c87087:
  return (char)param_1[0x98] != cVar1;
}



// FUNCTION 142c870c0 FUN_142c870c0 body=244 status=ok
// SIG undefined FUN_142c870c0(void)

bool FUN_142c870c0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  
  if ((param_1[3] == 0) || (*(longlong *)(param_1[3] + 0x118) == 0)) {
    return false;
  }
  cVar1 = (char)param_1[0x91];
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x91) = 1;
    (**(code **)(*param_1 + 0x110))(param_1);
  }
  else if (cVar1 == '\x02') {
    FUN_142c88140(param_1);
    if ((*(char *)(param_1[2] + 0x1d8) == '\0') && ((char)param_1[0xa4] != '\0')) {
      FUN_142c86c30(param_1);
      return (char)param_1[0x91] != '\x02';
    }
  }
  else if (cVar1 == '\x03') {
    cVar2 = FUN_142c73400(param_1,1,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_142c73400(param_1,2,0);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x91) = 4;
        return (char)param_1[0x91] != '\x03';
      }
    }
  }
  return (char)param_1[0x91] != cVar1;
}



// FUNCTION 142c871c0 FUN_142c871c0 body=679 status=ok
// SIG undefined FUN_142c871c0(void)

void FUN_142c871c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 local_res8 [16];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  
  plVar15 = *(longlong **)(param_1 + 0x460);
  lVar14 = 0;
  plVar13 = plVar15 + (longlong)*(int *)(param_1 + 0x468) * 2;
  local_68 = 0;
  local_60 = 0;
  do {
    if (plVar15 == plVar13) {
      FUN_142c6a450(param_1,&local_68);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
      return;
    }
    plVar2 = (longlong *)plVar15[1];
    lVar11 = *plVar15;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
    }
    if ((((lVar11 != 0) && ((*(byte *)(lVar11 + 0x38) & 1) != 0)) &&
        ((*(byte *)(lVar11 + 0x38) & 2) == 0)) && (*(longlong *)(lVar11 + 0x18) != 0)) {
      uVar5 = *(uint *)(*(longlong *)(lVar11 + 0x18) + 0xc);
      lVar7 = lVar14;
      if ((int)uVar5 < (int)DAT_1469e91c4) {
        uVar9 = uVar5 & 0xffff;
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xffff;
          uVar9 = uVar9 - 0x10000;
        }
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)uVar9 * 0x18;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        local_res8[0] = 3;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_48 = lVar11;
        local_40 = plVar2;
        FUN_142c80100(param_1,&local_48,local_res8);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (*(longlong *)(lVar11 + 0x10) != 0) {
      local_50 = *(longlong *)(lVar11 + 0xc0);
      local_58 = 0;
      if (local_50 != 0) {
        LOCK();
        iVar6 = *(int *)(local_50 + 8);
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(local_50 + 8) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar6 == *(int *)(local_50 + 8);
          if (bVar16) {
            *(int *)(local_50 + 8) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (local_50 != 0) {
              local_58 = *(undefined8 *)(lVar11 + 0xb8);
            }
            goto LAB_142c87361;
          }
          LOCK();
          iVar6 = *(int *)(local_50 + 8);
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(local_50 + 8) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_50 = 0;
      }
LAB_142c87361:
      cVar4 = FUN_142c6a040(param_1,&local_58);
      uVar3 = local_60;
      if (cVar4 != '\0') {
        lVar7 = *(longlong *)(lVar11 + 0xc0);
        lVar10 = lVar14;
        lVar12 = lVar7;
        if (lVar7 != 0) {
          LOCK();
          iVar6 = *(int *)(lVar7 + 8);
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(lVar7 + 8) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (lVar12 = lVar14, !bVar16) {
            LOCK();
            bVar16 = iVar6 == *(int *)(lVar7 + 8);
            if (bVar16) {
              *(int *)(lVar7 + 8) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar16) {
              lVar10 = 0;
              lVar12 = lVar7;
              if (lVar7 != 0) {
                lVar10 = *(longlong *)(lVar11 + 0xb8);
              }
              break;
            }
            LOCK();
            iVar6 = *(int *)(lVar7 + 8);
            bVar16 = iVar6 == 0;
            if (bVar16) {
              *(int *)(lVar7 + 8) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        lVar11 = (longlong)(int)local_60;
        iVar6 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar6);
        if (local_60._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
        }
        plVar8 = (longlong *)(lVar11 * 0x10 + local_68);
        *plVar8 = lVar10;
        plVar8[1] = lVar12;
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    plVar15 = plVar15 + 2;
  } while( true );
}



// FUNCTION 142c87470 FUN_142c87470 body=464 status=ok
// SIG undefined FUN_142c87470(void)

void FUN_142c87470(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar5 = (longlong *)0x0;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x118) != 0)) {
    if ((*(char *)(lVar1 + 0x160) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 4) != 0)) {
      *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xfffffffb;
      FUN_142d8f450(*(undefined8 *)(lVar3 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    }
    if ((*(char *)(lVar1 + 0x17c) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 8) != 0)) {
      *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xfffffff7;
      plVar4 = plVar5;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
      }
      FUN_142d8f330(plVar4,*(undefined8 *)(param_1 + 0xb0));
    }
    if ((*(char *)(lVar1 + 0x17d) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 0x10) != 0)) {
      *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xffffffef;
      plVar4 = plVar5;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
      }
      FUN_142d8f6b0(plVar4,*(undefined8 *)(param_1 + 0xb0));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x6a) != '\0') {
    FUN_142c835c0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6b) != '\0') {
    FUN_142c833a0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x72) != '\0') {
    plVar4 = plVar5;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8f850(plVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(lVar1 + 0x6c) != '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_142e39920();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if (lVar3 != 0) {
        FUN_142cf3f20(lVar3,1);
      }
    }
  }
  if (*(char *)(lVar1 + 0x73) != '\0') {
    FUN_142db61a0(param_1 + 0x440,1);
  }
  if (*(char *)(lVar1 + 0x6d) != '\0') {
    FUN_142c834e0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6e) != '\0') {
    FUN_142c82280(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6f) != '\0') {
    FUN_142c832c0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x70) != '\0') {
    FUN_142c83330(param_1,0);
  }
  return;
}



// FUNCTION 142c87640 FUN_142c87640 body=256 status=ok
// SIG undefined FUN_142c87640(void)

void FUN_142c87640(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x6a) != '\0') {
    FUN_142c835c0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6b) != '\0') {
    FUN_142c833a0(param_1,0);
  }
  plVar5 = (longlong *)0x0;
  if (*(char *)(lVar1 + 0x72) != '\0') {
    plVar4 = plVar5;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8f850(plVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(lVar1 + 0x6c) != '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_142e39920();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if (lVar3 != 0) {
        FUN_142cf3f20(lVar3,1);
      }
    }
  }
  if (*(char *)(lVar1 + 0x73) != '\0') {
    FUN_142db61a0(param_1 + 0x440,1);
  }
  if (*(char *)(lVar1 + 0x6d) != '\0') {
    FUN_142c834e0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6e) != '\0') {
    FUN_142c82280(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6f) != '\0') {
    FUN_142c832c0(param_1,0);
  }
  if (*(char *)(lVar1 + 0x70) != '\0') {
    FUN_142c83330(param_1,0);
  }
  return;
}



// FUNCTION 142c87740 FUN_142c87740 body=201 status=ok
// SIG undefined FUN_142c87740(void)

void FUN_142c87740(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = 0;
  if ((*(char *)(lVar1 + 0x17a) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 1) != 0)) {
    *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xfffffffe;
    uVar2 = uVar3;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8f4f0(uVar2,*(undefined8 *)(param_1 + 0xb0));
  }
  if ((*(char *)(lVar1 + 0x17b) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 2) != 0)) {
    *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xfffffffd;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8f3b0(uVar3,*(undefined8 *)(param_1 + 0xb0));
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x68) != '\0') {
    FUN_142c82200(param_1,0);
  }
  if (*(char *)(lVar1 + 0x71) != '\0') {
    FUN_142c82300(param_1,0);
  }
  return;
}



// FUNCTION 142c87810 FUN_142c87810 body=57 status=ok
// SIG undefined FUN_142c87810(void)

void FUN_142c87810(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x68) != '\0') {
    FUN_142c82200(param_1,0);
  }
  if (*(char *)(lVar1 + 0x71) != '\0') {
    FUN_142c82300(param_1,0);
  }
  return;
}



// FUNCTION 142c87850 FUN_142c87850 body=92 status=ok
// SIG undefined FUN_142c87850(void)

void FUN_142c87850(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1423ac7e0(param_2);
  }
  if (lVar1 != *(longlong *)(param_1 + 8)) {
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 0x260))(param_3);
    }
    FUN_142c6a680(param_1);
    *(longlong *)(param_1 + 8) = lVar1;
  }
  return;
}



// FUNCTION 142c878b0 FUN_142c878b0 body=314 status=ok
// SIG undefined FUN_142c878b0(void)

void FUN_142c878b0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_d8 [208];
  
  iVar3 = FUN_14233f450();
  plVar6 = (longlong *)*param_2;
  if (iVar3 == 3) {
    plVar2 = (longlong *)param_2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar6 + 0x80))(plVar6);
    *(char *)(plVar6 + 0x15) = (char)plVar6[0x15] + '\x01';
    if (plVar6[3] == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(plVar6[3] + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0();
      }
    }
    plVar6 = (longlong *)FUN_142c71720(lVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x260))(plVar6);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  else {
    (**(code **)(*plVar6 + 0x80))(plVar6);
    if (*(int *)(*param_2 + 0xa4) != -1) {
      uVar4 = FUN_1405e0fd0(local_d8);
      FUN_142e2b3d0(param_1,uVar4);
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 142c879f0 FUN_142c879f0 body=226 status=ok
// SIG undefined FUN_142c879f0(void)

void FUN_142c879f0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18;
  longlong local_10;
  
  plVar3 = (longlong *)*param_1;
  if ((plVar3 != (longlong *)0x0) && (plVar3[3] != 0)) {
    lVar7 = plVar3[1];
    lVar5 = FLobbyChatNode::StaticStruct();
    for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        bVar4 = true;
        goto LAB_142c87a3b;
      }
    }
    bVar4 = false;
LAB_142c87a3b:
    plVar6 = (longlong *)0x0;
    if (bVar4) {
      plVar6 = plVar3;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 200))(plVar6,param_2);
      local_10 = param_1[1];
      local_18 = *param_1;
      lVar7 = local_18;
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
        lVar7 = *param_1;
      }
      FUN_142c878b0(*(undefined8 *)(lVar7 + 0x18),&local_18);
    }
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return;
}



// FUNCTION 142c87ae0 FUN_142c87ae0 body=359 status=ok
// SIG undefined FUN_142c87ae0(void)

void FUN_142c87ae0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  lVar4 = FUN_142c71720(lVar4);
  if (lVar4 != 0) {
    plVar6 = *(longlong **)(lVar4 + 0x460);
    plVar5 = plVar6 + (longlong)*(int *)(lVar4 + 0x468) * 2;
    if (plVar6 != plVar5) {
      while (plVar3 = (longlong *)*plVar6,
            *(int *)((longlong)plVar3 + 0xa4) != *(int *)(param_2 + 0xa4)) {
        plVar6 = plVar6 + 2;
        if (plVar6 == plVar5) {
          FUN_142c63c50(param_2);
          return;
        }
      }
      plVar6 = (longlong *)plVar6[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_2 + 0x20);
        lVar7 = (longlong)*(int *)(param_2 + 0x28) * 0x38 + lVar4;
        for (; lVar4 != lVar7; lVar4 = lVar4 + 0x38) {
          FUN_142c67550(plVar3,lVar4);
        }
        (**(code **)(*plVar3 + 0x80))(plVar3);
        *(char *)(plVar3 + 0x15) = (char)plVar3[0x15] + '\x01';
        if (plVar3[3] == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(plVar3[3] + 0x120);
          if (lVar4 == 0) {
            lVar4 = FUN_1423407b0();
          }
        }
        plVar5 = (longlong *)FUN_142c71720(lVar4);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x260))(plVar5);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  FUN_142c63c50(param_2);
  return;
}



// FUNCTION 142c87c50 FUN_142c87c50 body=19 status=ok
// SIG undefined FUN_142c87c50(void)

undefined1 FUN_142c87c50(undefined8 param_1,undefined8 param_2)

{
  FUN_142c63c50(param_2);
  return 1;
}



// FUNCTION 142c87c70 FUN_142c87c70 body=1227 status=ok
// SIG undefined FUN_142c87c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c87c70(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  float fVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float fStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (*(longlong *)(param_1 + 0x478) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x18);
    if (lVar15 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(longlong *)(lVar15 + 0x118);
    }
    if (lVar19 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if ((lVar15 == 0) ||
         ((lVar15 = *(longlong *)(lVar15 + 0x120), lVar15 == 0 &&
          (lVar15 = FUN_1423407b0(), lVar15 == 0)))) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = *(float *)(lVar15 + 0x790);
      }
      if (fVar14 - *(float *)(param_1 + 0x480) < *(float *)(lVar1 + 0x234)) {
        lVar15 = *(longlong *)(param_1 + 0x478);
        fVar6 = *(float *)(lVar15 + 0x220);
        fVar7 = *(float *)(lVar15 + 0x224);
        fVar8 = *(float *)(lVar15 + 0x228);
        uVar9 = *(undefined4 *)(lVar15 + 0x22c);
        uVar5 = *(undefined8 *)(lVar15 + 0x210);
        uVar10 = *(undefined8 *)(lVar15 + 0x218);
        fVar33 = fVar6 - *(float *)(param_1 + 0x4a0);
        fVar31 = fVar7 - *(float *)(param_1 + 0x4a4);
        local_e8 = *(undefined8 *)(param_1 + 0x490);
        uStack_e0 = *(undefined8 *)(param_1 + 0x498);
        fVar32 = fVar8 - *(float *)(param_1 + 0x4a8);
        uVar11 = *(undefined8 *)(lVar15 + 0x230);
        uVar12 = *(undefined8 *)(lVar15 + 0x238);
        local_b8 = uVar5;
        uStack_b0 = uVar10;
        pfVar16 = (float *)FQuat::Rotator(&local_e8,&local_c8);
        pfVar17 = (float *)FQuat::Rotator(&local_b8,&local_d8);
        fVar14 = (float)DAT_146b2fbe0;
        fVar2 = DAT_146b2fbe0._4_4_;
        fVar3 = DAT_146b2fbe0._8_4_;
        fVar4 = DAT_146b2fbe0._12_4_;
        auVar20._4_4_ = pfVar17[1] - pfVar16[1];
        auVar20._0_4_ = *pfVar17 - *pfVar16;
        auVar20._8_4_ = pfVar17[2] - pfVar16[2];
        auVar20._12_4_ = 0;
        auVar20 = divps(auVar20,_DAT_146b2fbe0);
        fVar27 = (*pfVar17 - *pfVar16) - (float)(int)auVar20._0_4_ * fVar14;
        fVar28 = (pfVar17[1] - pfVar16[1]) - (float)(int)auVar20._4_4_ * fVar2;
        fVar29 = (pfVar17[2] - pfVar16[2]) - (float)(int)auVar20._8_4_ * fVar3;
        fVar30 = 0.0 - (float)(int)auVar20._12_4_ * fVar4;
        fVar27 = (float)(-(uint)(0.0 <= fVar27) & ((uint)(fVar27 + fVar14) ^ (uint)fVar27) ^
                        (uint)(fVar27 + fVar14));
        fVar28 = (float)(-(uint)(0.0 <= fVar28) & ((uint)(fVar28 + fVar2) ^ (uint)fVar28) ^
                        (uint)(fVar28 + fVar2));
        fVar29 = (float)(-(uint)(0.0 <= fVar29) & ((uint)(fVar29 + fVar3) ^ (uint)fVar29) ^
                        (uint)(fVar29 + fVar3));
        fVar30 = (float)(-(uint)(0.0 <= fVar30) & ((uint)(fVar30 + fVar4) ^ (uint)fVar30) ^
                        (uint)(fVar30 + fVar4));
        fVar27 = (float)(((uint)(fVar27 - fVar14) ^ (uint)fVar27) & -(uint)(_DAT_146b2fbd0 < fVar27)
                        ^ (uint)fVar27);
        fVar28 = (float)(((uint)(fVar28 - fVar2) ^ (uint)fVar28) &
                         -(uint)(fRam0000000146b2fbd4 < fVar28) ^ (uint)fVar28);
        fVar29 = (float)(((uint)(fVar29 - fVar3) ^ (uint)fVar29) &
                         -(uint)(fRam0000000146b2fbd8 < fVar29) ^ (uint)fVar29);
        uStack_bc = ((uint)(fVar30 - fVar4) ^ (uint)fVar30) & -(uint)(fRam0000000146b2fbdc < fVar30)
                    ^ (uint)fVar30;
        local_c8 = CONCAT44(fVar28,fVar27);
        if (((0.0001 < ABS(fVar33)) || (0.0001 < ABS(fVar31))) || (0.0001 < ABS(fVar32))) {
          auVar21._4_4_ = fVar28;
          auVar21._0_4_ = fVar27;
          auVar21._8_4_ = fVar29;
          auVar21._12_4_ = 0;
          auVar20 = divps(auVar21,_DAT_146b2fbe0);
          fVar30 = fVar27 - (float)(int)auVar20._0_4_ * fVar14;
          fVar24 = fVar28 - (float)(int)auVar20._4_4_ * fVar2;
          fVar25 = fVar29 - (float)(int)auVar20._8_4_ * fVar3;
          fVar26 = 0.0 - (float)(int)auVar20._12_4_ * fVar4;
          fVar30 = (float)(-(uint)(0.0 <= fVar30) & ((uint)(fVar30 + fVar14) ^ (uint)fVar30) ^
                          (uint)(fVar30 + fVar14));
          fVar24 = (float)(-(uint)(0.0 <= fVar24) & ((uint)(fVar24 + fVar2) ^ (uint)fVar24) ^
                          (uint)(fVar24 + fVar2));
          fVar25 = (float)(-(uint)(0.0 <= fVar25) & ((uint)(fVar25 + fVar3) ^ (uint)fVar25) ^
                          (uint)(fVar25 + fVar3));
          fVar26 = (float)(-(uint)(0.0 <= fVar26) & ((uint)(fVar26 + fVar4) ^ (uint)fVar26) ^
                          (uint)(fVar26 + fVar4));
          auVar22._4_4_ =
               -(uint)(0.0001 < (float)((((uint)(fVar24 - fVar2) ^ (uint)fVar24) &
                                         -(uint)(fRam0000000146b2fbd4 < fVar24) ^ (uint)fVar24) &
                                       uRam0000000146b2fc84));
          auVar22._0_4_ =
               -(uint)(0.0001 < (float)((((uint)(fVar30 - fVar14) ^ (uint)fVar30) &
                                         -(uint)(_DAT_146b2fbd0 < fVar30) ^ (uint)fVar30) &
                                       _DAT_146b2fc80));
          auVar22._8_4_ =
               -(uint)(0.0001 < (float)((((uint)(fVar25 - fVar3) ^ (uint)fVar25) &
                                         -(uint)(fRam0000000146b2fbd8 < fVar25) ^ (uint)fVar25) &
                                       uRam0000000146b2fc88));
          auVar22._12_4_ =
               -(uint)(0.0001 < (float)((((uint)(fVar26 - fVar4) ^ (uint)fVar26) &
                                         -(uint)(fRam0000000146b2fbdc < fVar26) ^ (uint)fVar26) &
                                       uRam0000000146b2fc8c));
          iVar13 = movmskps((int)pfVar17,auVar22);
          if (iVar13 != 0) {
            *(undefined8 *)(param_1 + 0x490) = uVar5;
            *(undefined8 *)(param_1 + 0x498) = uVar10;
            *(float *)(param_1 + 0x4a0) = fVar6;
            *(float *)(param_1 + 0x4a4) = fVar7;
            *(float *)(param_1 + 0x4a8) = fVar8;
            *(undefined4 *)(param_1 + 0x4ac) = uVar9;
            *(undefined8 *)(param_1 + 0x4b0) = uVar11;
            *(undefined8 *)(param_1 + 0x4b8) = uVar12;
            lVar15 = *(longlong *)(lVar19 + 0x168);
            if (lVar15 == 0) {
              local_e8 = _DAT_1468b5d90;
              local_d0 = DAT_1468b5d98;
            }
            else {
              local_e8 = *(undefined8 *)(lVar15 + 0x220);
              local_d0 = *(float *)(lVar15 + 0x228);
            }
            local_d8 = local_e8;
            local_e8 = CONCAT44((float)((ulonglong)local_e8 >> 0x20) + fVar31,
                                (float)local_e8 + fVar33);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,local_d0 + fVar32);
            fVar14 = DAT_1468b5da8;
            uVar5 = DAT_1468b5da0;
            if (lVar15 != 0) {
              fVar14 = *(float *)(lVar15 + 0x210);
              local_b8 = *(undefined8 *)(lVar15 + 0x210);
              fVar2 = *(float *)(lVar15 + 0x218);
              uStack_b0 = *(undefined8 *)(lVar15 + 0x218);
              auVar23._4_4_ = -(uint)(*(float *)(lVar15 + 0x254) != *(float *)(lVar15 + 0x214));
              auVar23._0_4_ = -(uint)(*(float *)(lVar15 + 0x250) != fVar14);
              auVar23._8_4_ = -(uint)(*(float *)(lVar15 + 600) != fVar2);
              auVar23._12_4_ = -(uint)(*(float *)(lVar15 + 0x25c) != *(float *)(lVar15 + 0x21c));
              iVar13 = movmskps(local_d0,auVar23);
              if (iVar13 != 0) {
                *(float *)(lVar15 + 0x250) = fVar14;
                *(float *)(lVar15 + 0x254) = *(float *)(lVar15 + 0x214);
                *(float *)(lVar15 + 600) = fVar2;
                *(float *)(lVar15 + 0x25c) = *(float *)(lVar15 + 0x21c);
                fStack_c0 = fVar29;
                puVar18 = (undefined8 *)FQuat::Rotator(&local_b8,&local_c8);
                *(undefined8 *)(lVar15 + 0x260) = *puVar18;
                *(undefined4 *)(lVar15 + 0x268) = *(undefined4 *)(puVar18 + 1);
              }
              fVar14 = *(float *)(lVar15 + 0x268);
              uVar5 = *(undefined8 *)(lVar15 + 0x260);
            }
            local_d0 = fVar29 + fVar14;
            local_d8 = CONCAT44(fVar28 + (float)((ulonglong)uVar5 >> 0x20),fVar27 + (float)uVar5);
            local_c8 = local_e8;
            fStack_c0 = (float)(undefined4)uStack_e0;
            FUN_14223ca30(lVar19,&local_c8,&local_d8,0,0,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c88140 FUN_142c88140 body=79 status=ok
// SIG undefined FUN_142c88140(void)

void FUN_142c88140(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((char)param_1[0xa4] == '\0') && (param_1[3] != 0)) {
    iVar2 = FUN_14233f450();
    if (iVar2 == 3) {
      cVar1 = (**(code **)(*param_1 + 0x128))(param_1);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0xa4) = 1;
        FUN_142c76980(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142c88190 FUN_142c88190 body=74 status=ok
// SIG undefined FUN_142c88190(void)

void FUN_142c88190(longlong param_1)

{
  char cVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                    (param_1 + 0x10,&local_res8);
  if (cVar1 != '\0') {
    FUN_142c81380(param_1);
    *(undefined4 *)(param_1 + 0x10) = local_res8;
    *(undefined4 *)(param_1 + 0x14) = local_resc;
  }
  return;
}



// FUNCTION 142c881e0 FUN_142c881e0 body=438 status=ok
// SIG undefined FUN_142c881e0(void)

void FUN_142c881e0(longlong *param_1,undefined1 param_2,longlong param_3)

{
  longlong *plVar1;
  int local_res10 [2];
  
  if (*(char *)(param_3 + 2) == '\0') {
    plVar1 = (longlong *)param_1[1];
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
    if ((ulonglong)plVar1[1] < *plVar1 + 1U) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res10,1);
    }
    else {
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = (longlong *)param_1[1];
    local_res10[0] = *(int *)(param_3 + 0x20);
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,*(undefined1 *)(param_3 + 3));
    (**(code **)(*param_1 + 8))(param_1,local_res10);
    *(undefined1 *)(param_3 + 2) = 1;
    *(longlong *)(param_3 + 0x10) = param_1[0x14];
    *(byte *)(param_3 + 8) = *(byte *)(param_1 + 5) >> 7;
    plVar1 = (longlong *)param_1[1];
    local_res10[0] = 0;
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res10,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
  }
  plVar1 = (longlong *)param_1[1];
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,3);
  if ((ulonglong)plVar1[1] < *plVar1 + 1U) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = (uint)local_res10[0]._1_3_ << 8;
    *plVar1 = *plVar1 + 1;
  }
  plVar1 = (longlong *)param_1[1];
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  if (*plVar1 + 1U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 1;
    return;
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_res10,1);
  return;
}



// FUNCTION 142c88560 FUN_142c88560 body=112 status=ok
// SIG undefined FUN_142c88560(void)

undefined8 FUN_142c88560(longlong param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 local_res8 [4];
  longlong local_res10;
  
  uVar1 = *param_2;
  local_res10 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))
                          (*(longlong **)(param_1 + 8),uVar1);
  if (local_res10 == 0) {
    return 1;
  }
  **(undefined1 **)(param_1 + 0x10) = 1;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  local_res8[0] = uVar1;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_res10,local_res8);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 142c885e0 FUN_142c885e0 body=137 status=ok
// SIG undefined FUN_142c885e0(void)

undefined8 FUN_142c885e0(longlong param_1,longlong *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *param_2;
  uVar1 = *param_3;
  cVar2 = UActorComponent::IsComponentTickEnabled(lVar3);
  if ((cVar2 != '\0') || ((*(byte *)(lVar3 + 0xb1c) & 8) != 0)) {
    lVar3 = FUN_1423ac7e0(lVar3);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),uVar1)
      ;
      cVar2 = FUN_142c72dc0(lVar3,uVar4);
      if (cVar2 != '\0') {
        **(undefined1 **)(param_1 + 0x10) = 1;
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142c88670 FUN_142c88670 body=179 status=ok
// SIG undefined FUN_142c88670(void)

undefined8 FUN_142c88670(longlong param_1,undefined8 *param_2,short *param_3)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  sVar1 = *param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  if (sVar1 == 0x10) {
    plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x420) + (longlong)*(int *)(lVar2 + 0x460) * 8);
  }
  else {
    if (sVar1 == 1) {
      lVar4 = 0x100;
    }
    else if (sVar1 == 2) {
      lVar4 = 0x108;
    }
    else if (sVar1 == 4) {
      lVar4 = 0x110;
    }
    else if (sVar1 == 8) {
      lVar4 = 0x118;
    }
    else {
      lVar4 = 0xf8;
    }
    plVar5 = (longlong *)(lVar4 + lVar2);
  }
  lVar2 = *plVar5;
  if (lVar2 != 0) {
    lVar4 = FUN_1423ac7e0(*param_2);
    if (lVar4 != 0) {
      cVar3 = UAnimInstance::Montage_IsActive(lVar4,lVar2);
      if (cVar3 != '\0') {
        UAnimInstance::Montage_Pause(lVar4,lVar2);
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 142c88730 FUN_142c88730 body=199 status=ok
// SIG undefined FUN_142c88730(void)

undefined8 FUN_142c88730(longlong param_1,longlong *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  float fVar7;
  
  uVar1 = *param_3;
  lVar2 = *param_2;
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x17e) == '\0') && (lVar2 != 0)) {
    lVar6 = FUN_142e5c1e0();
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_142c97c50(lVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    }
  }
  fVar7 = -1.0;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x14c) != '\0') {
    fVar7 = *(float *)((longlong)plVar4 + 0x46c);
  }
  if ((0.0 <= *(float *)(plVar4 + 0x1c)) && ((char)plVar4[6] != '\x01')) {
    fVar7 = *(float *)(plVar4 + 0x1c);
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4,lVar2,uVar1,fVar7);
  return 1;
}



// FUNCTION 142c88800 FUN_142c88800 body=65 status=ok
// SIG undefined FUN_142c88800(void)

undefined8 FUN_142c88800(longlong param_1,undefined8 *param_2,undefined2 *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))
                    (*(longlong **)(param_1 + 8),*param_2,*param_3,**(undefined4 **)(param_1 + 0x10)
                    );
  if (cVar1 == '\0') {
    **(undefined1 **)(param_1 + 0x18) = 0;
    return 0;
  }
  return 1;
}



// FUNCTION 142c88850 FUN_142c88850 body=245 status=ok
// SIG undefined FUN_142c88850(void)

undefined8 FUN_142c88850(longlong param_1,undefined8 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  uVar1 = *param_3;
  lVar4 = FUN_1423ac7e0(*param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_142c6f640(*(undefined8 *)(param_1 + 8),uVar1);
    if (lVar5 != 0) {
      lVar6 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))
                          (*(longlong **)(param_1 + 8),uVar1);
        lVar5 = FUN_14225eb80(lVar4,lVar5,uVar7);
        if (lVar5 != 0) {
          puVar2 = *(undefined4 **)(param_1 + 0x18);
          *(undefined4 *)(lVar5 + 0x10) = **(undefined4 **)(param_1 + 0x10);
          *(undefined4 *)(lVar5 + 0x14) = *puVar2;
        }
      }
    }
    if (**(char **)(param_1 + 0x20) != '\0') {
      lVar5 = *(longlong *)(param_1 + 8);
      plVar8 = (longlong *)FUN_142c71cc0(lVar5,uVar1);
      if (*plVar8 != 0) {
        UAnimInstance::Montage_SetPlayRate(lVar4,*plVar8,*(undefined4 *)(lVar5 + 0x4f0));
      }
    }
  }
  return 1;
}



// FUNCTION 142c88950 FUN_142c88950 body=49 status=ok
// SIG undefined FUN_142c88950(void)

undefined8 FUN_142c88950(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142c6f640(*(undefined8 *)(param_1 + 0x10),*param_2);
  **(byte **)(param_1 + 8) = **(byte **)(param_1 + 8) | lVar1 != 0;
  return CONCAT71((int7)((ulonglong)*(char **)(param_1 + 8) >> 8),**(char **)(param_1 + 8) == '\0');
}



// FUNCTION 142c889a0 FUN_142c889a0 body=179 status=ok
// SIG undefined FUN_142c889a0(void)

undefined8 FUN_142c889a0(longlong param_1,undefined8 *param_2,short *param_3)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  sVar1 = *param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  if (sVar1 == 0x10) {
    plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x420) + (longlong)*(int *)(lVar2 + 0x460) * 8);
  }
  else {
    if (sVar1 == 1) {
      lVar4 = 0x100;
    }
    else if (sVar1 == 2) {
      lVar4 = 0x108;
    }
    else if (sVar1 == 4) {
      lVar4 = 0x110;
    }
    else if (sVar1 == 8) {
      lVar4 = 0x118;
    }
    else {
      lVar4 = 0xf8;
    }
    plVar5 = (longlong *)(lVar4 + lVar2);
  }
  lVar2 = *plVar5;
  if (lVar2 != 0) {
    lVar4 = FUN_1423ac7e0(*param_2);
    if (lVar4 != 0) {
      cVar3 = UAnimInstance::Montage_IsActive(lVar4,lVar2);
      if (cVar3 != '\0') {
        UAnimInstance::Montage_Resume(lVar4,lVar2);
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 142c88a80 FUN_142c88a80 body=137 status=ok
// SIG undefined FUN_142c88a80(void)

undefined8 FUN_142c88a80(longlong param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  
  uVar1 = *param_2;
  if (**(char **)(param_1 + 8) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (*plVar2 != 0) {
      lVar5 = UAnimNotify::GetPrivateStaticClass();
      lVar8 = *plVar2;
      for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar5) goto LAB_142c88ac8;
      }
    }
    lVar8 = 0;
LAB_142c88ac8:
    uVar6 = FUN_142c6f640(*(undefined8 *)(param_1 + 0x10),uVar1);
    cVar4 = FUN_142c901a0(uVar6,lVar8);
    if (cVar4 == '\0') {
      uVar7 = 0;
      goto LAB_142c88aee;
    }
  }
  uVar7 = 1;
LAB_142c88aee:
  **(undefined1 **)(param_1 + 8) = uVar7;
  return CONCAT71((int7)((ulonglong)*(char **)(param_1 + 8) >> 8),**(char **)(param_1 + 8) == '\0');
}



// FUNCTION 142c88bf0 FUN_142c88bf0 body=160 status=ok
// SIG undefined FUN_142c88bf0(void)

void FUN_142c88bf0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x20);
    puVar3 = (undefined8 *)*param_1;
    do {
      uVar1 = puVar2[-3];
      *puVar3 = puVar2[-4];
      puVar3[1] = uVar1;
      uVar1 = puVar2[-1];
      puVar3[2] = puVar2[-2];
      puVar3[3] = uVar1;
      uVar1 = puVar2[1];
      puVar3[4] = *puVar2;
      puVar3[5] = uVar1;
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(puVar2 + 2);
      *(undefined4 *)((longlong)puVar3 + 0x34) = *(undefined4 *)((longlong)puVar2 + 0x14);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 8;
      puVar3 = puVar3 + 8;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142c88c90 FUN_142c88c90 body=782 status=ok
// SIG undefined FUN_142c88c90(void)

int * FUN_142c88c90(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  uint *_Src;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool local_res8;
  uint local_58 [8];
  
  iVar10 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_58[0] = 0;
  local_58[1] = 0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 2;
  local_58[5] = 0;
  _Src = (uint *)(*param_1 + (longlong)iVar8 * 0x28);
  *_Src = *(uint *)*param_3;
  puVar1 = _Src + 2;
  puVar1[0] = 0;
  puVar1[1] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 2;
  _Src[7] = 0;
  if (local_58 != puVar1) {
    FMulticastDelegateBase<FWeakObjectPtr>::Clear();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(local_58);
  _Src[8] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar11 != 1) {
    iVar8 = iVar12;
    if (uVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x28) == *_Src) break;
          iVar9 = *(int *)(*param_1 + 0x20 + (longlong)iVar9 * 0x28);
          iVar8 = iVar12;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x28);
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar10 = *param_2;
      bVar4 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + (longlong)iVar10 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + (longlong)iVar10 * 0x28) = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142c88f6c;
    }
  }
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar7 = '\0';
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar12;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar7 = '\x1f' - (char)iVar12;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *_Src;
    _Src[9] = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    _Src[8] = *(uint *)((longlong)plVar6 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c88f6c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142c88fa0 FUN_142c88fa0 body=782 status=ok
// SIG undefined FUN_142c88fa0(void)

uint * FUN_142c88fa0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong *_Src;
  uint *puVar19;
  undefined4 uVar20;
  bool bVar21;
  uint local_res8 [2];
  uint *local_res10;
  
  iVar15 = 1;
  uVar20 = 0xffffffff;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar14 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar14 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar14 = *(uint *)(param_1 + 6);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)(int)uVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = uVar14;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar10 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar19 = (uint *)((longlong)plVar11 + lVar10);
  *puVar19 = *puVar19 | 1 << ((byte)uVar14 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)(int)uVar14 * 0x28;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  *(undefined4 *)(_Src + 2) = uVar6;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar7;
  _Src[3] = *(ulonglong *)(puVar2 + 4);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar9 = local_res8[0];
    lVar13 = (longlong)(int)local_res8[0];
    bVar21 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar21);
    if (bVar21) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar13 * 0x28),_Src,0x20);
      bVar4 = (byte)uVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar14;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar1 + lVar13) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar20 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar13) = uVar20;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar14;
      plVar11 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar19 = (uint *)((longlong)plVar11 + lVar10);
      *local_res10 = uVar9;
      *puVar19 = *puVar19 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142c89282;
    }
  }
  if (3 < uVar18) {
    uVar9 = (uVar18 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar16 = 0x20;
    cVar12 = '\0';
    if (uVar9 != 0) {
      iVar16 = 0x1f - iVar15;
    }
    uVar9 = (uVar18 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    iVar15 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
    uVar17 = -(iVar15 + uVar9) ^ uVar9 >> 0xd;
    uVar18 = (iVar15 - uVar9) - uVar17 ^ uVar17 >> 0xc;
    uVar9 = (uVar9 - uVar18) - uVar17 ^ uVar18 << 0x10;
    uVar17 = (uVar17 - uVar9) - uVar18 ^ uVar9 >> 5;
    uVar18 = (uVar18 - uVar9) - uVar17 ^ uVar17 >> 3;
    uVar9 = (uVar9 - uVar18) - uVar17 ^ uVar18 << 10;
    uVar18 = ((uVar17 - uVar9) - uVar18 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar18;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         uVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142c89282:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return local_res10;
}



// FUNCTION 142c892b0 FUN_142c892b0 body=182 status=ok
// SIG undefined FUN_142c892b0(void)

longlong FUN_142c892b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0xe8 + lVar3;
  while( true ) {
    if (lVar3 == lVar4) {
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
      }
      return 0;
    }
    plVar1 = (longlong *)param_2[7];
    if (plVar1 == (longlong *)0x0) break;
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
    if (cVar2 != '\0') {
      plVar1 = (longlong *)param_2[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
        param_2[7] = 0;
      }
      return lVar3;
    }
    lVar3 = lVar3 + 0xe8;
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 142c89370 FUN_142c89370 body=1746 status=ok
// SIG undefined FUN_142c89370(void)

/* WARNING: Removing unreachable block (ram,0x000142c89991) */
/* WARNING: Removing unreachable block (ram,0x000142c899a0) */
/* WARNING: Removing unreachable block (ram,0x000142c89663) */
/* WARNING: Removing unreachable block (ram,0x000142c89670) */
/* WARNING: Removing unreachable block (ram,0x000142c8950d) */
/* WARNING: Removing unreachable block (ram,0x000142c89520) */
/* WARNING: Removing unreachable block (ram,0x000142c897ed) */
/* WARNING: Removing unreachable block (ram,0x000142c89800) */

longlong * FUN_142c89370(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  void *pvVar14;
  void *local_90;
  int local_88;
  int local_84;
  void *local_80;
  int local_78;
  int local_74;
  void *local_70;
  int local_68;
  int local_64;
  void *local_60;
  int local_58;
  int local_54;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar13 = (longlong *)*param_2;
  plVar1 = plVar13 + (int)param_2[1];
  if (plVar13 != plVar1) {
    do {
      lVar7 = *plVar13;
      if (lVar7 != 0) {
        lVar4 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar4 = *(longlong *)(lVar7 + 0x80);
          pvVar14 = (void *)0x0;
          iVar5 = 0;
          lVar8 = *param_3;
          iVar6 = 0;
          local_90 = (void *)0x0;
          lVar7 = (longlong)*(int *)(lVar7 + 0x88) * 0xa8 + lVar4;
          local_84 = 0;
          for (; lVar4 != lVar7; lVar4 = lVar4 + 0xa8) {
            if ((*(longlong *)(lVar4 + 0x48) == 0) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x10) != lVar8)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar9 = (longlong)iVar6;
              local_88 = iVar6 + 1;
              if (iVar5 < local_88) {
                TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(&local_90,iVar6);
                pvVar14 = local_90;
                iVar5 = local_84;
              }
              iVar6 = local_88;
              FAnimNotifyEvent::FAnimNotifyEvent((void *)(lVar9 * 0xa8 + (longlong)pvVar14),lVar4);
            }
          }
          if (iVar6 != 0) {
            iVar5 = (int)param_1[1];
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
              TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
              iVar5 = (int)param_1[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,(longlong)iVar6 * 0xa8);
            *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
            local_88 = 0;
          }
          if (pvVar14 != (void *)0x0) {
            FMemory::Free(pvVar14);
          }
        }
        else {
          lVar4 = UMaterialInstanceConstant::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar4 = *(longlong *)(lVar7 + 0x80);
            pvVar14 = (void *)0x0;
            iVar5 = 0;
            lVar8 = *param_3;
            iVar6 = 0;
            local_80 = (void *)0x0;
            lVar9 = (longlong)*(int *)(lVar7 + 0x88) * 0xa8 + lVar4;
            local_74 = 0;
            for (; lVar4 != lVar9; lVar4 = lVar4 + 0xa8) {
              if ((*(longlong *)(lVar4 + 0x48) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x10) != lVar8)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar10 = (longlong)iVar6;
                local_78 = iVar6 + 1;
                if (iVar5 < local_78) {
                  TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(&local_80,iVar6);
                  pvVar14 = local_80;
                  iVar5 = local_74;
                }
                iVar6 = local_78;
                FAnimNotifyEvent::FAnimNotifyEvent
                          ((void *)(lVar10 * 0xa8 + (longlong)pvVar14),lVar4);
              }
            }
            if (iVar6 != 0) {
              iVar5 = (int)param_1[1];
              if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
                TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
                iVar5 = (int)param_1[1];
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,(longlong)iVar6 * 0xa8)
              ;
              *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
              local_78 = 0;
            }
            if (pvVar14 != (void *)0x0) {
              FMemory::Free(pvVar14);
            }
            lVar4 = *(longlong *)(lVar7 + 0x168);
            lVar7 = (longlong)*(int *)(lVar7 + 0x170) * 0x58 + lVar4;
            for (; lVar4 != lVar7; lVar4 = lVar4 + 0x58) {
              lVar8 = *(longlong *)(lVar4 + 0x28);
              if (lVar8 != 0) {
                lVar9 = UAnimMontage::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  pvVar14 = (void *)0x0;
                  lVar9 = *(longlong *)(lVar8 + 0x80);
                  iVar5 = 0;
                  iVar6 = 0;
                  local_70 = (void *)0x0;
                  local_64 = 0;
                  lVar10 = *param_3;
                  lVar8 = (longlong)*(int *)(lVar8 + 0x88) * 0xa8 + lVar9;
                  for (; lVar9 != lVar8; lVar9 = lVar9 + 0xa8) {
                    if ((*(longlong *)(lVar9 + 0x48) == 0) ||
                       (*(longlong *)(*(longlong *)(lVar9 + 0x48) + 0x10) != lVar10)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar11 = (longlong)iVar6;
                      local_68 = iVar6 + 1;
                      if (iVar5 < local_68) {
                        TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow
                                  (&local_70,iVar6);
                        pvVar14 = local_70;
                        iVar5 = local_64;
                      }
                      iVar6 = local_68;
                      FAnimNotifyEvent::FAnimNotifyEvent
                                ((void *)(lVar11 * 0xa8 + (longlong)pvVar14),lVar9);
                    }
                  }
                  if (iVar6 != 0) {
                    iVar5 = (int)param_1[1];
                    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
                      TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
                      iVar5 = (int)param_1[1];
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,
                               (longlong)iVar6 * 0xa8);
                    *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
                    local_68 = 0;
                  }
                  if (pvVar14 != (void *)0x0) {
                    FMemory::Free(pvVar14);
                  }
                }
              }
            }
          }
          else {
            lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              plVar12 = *(longlong **)(lVar7 + 200);
              plVar2 = plVar12 + (longlong)*(int *)(lVar7 + 0xd0) * 3;
              for (; plVar12 != plVar2; plVar12 = plVar12 + 3) {
                lVar7 = *plVar12;
                if (lVar7 != 0) {
                  lVar4 = *(longlong *)(lVar7 + 0x80);
                  pvVar14 = (void *)0x0;
                  iVar5 = 0;
                  lVar8 = *param_3;
                  iVar6 = 0;
                  local_60 = (void *)0x0;
                  lVar7 = (longlong)*(int *)(lVar7 + 0x88) * 0xa8 + lVar4;
                  local_54 = 0;
                  for (; lVar4 != lVar7; lVar4 = lVar4 + 0xa8) {
                    if ((*(longlong *)(lVar4 + 0x48) == 0) ||
                       (*(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x10) != lVar8)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar9 = (longlong)iVar6;
                      local_58 = iVar6 + 1;
                      if (iVar5 < local_58) {
                        TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow
                                  (&local_60,iVar6);
                        pvVar14 = local_60;
                        iVar5 = local_54;
                      }
                      iVar6 = local_58;
                      FAnimNotifyEvent::FAnimNotifyEvent
                                ((void *)(lVar9 * 0xa8 + (longlong)pvVar14),lVar4);
                    }
                  }
                  if (iVar6 != 0) {
                    iVar5 = (int)param_1[1];
                    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
                      TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
                      iVar5 = (int)param_1[1];
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,
                               (longlong)iVar6 * 0xa8);
                    *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
                    local_58 = 0;
                  }
                  if (pvVar14 != (void *)0x0) {
                    FMemory::Free(pvVar14);
                  }
                }
              }
            }
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
    plVar13 = (longlong *)*param_2;
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return param_1;
}



// FUNCTION 142c89a50 FUN_142c89a50 body=1746 status=ok
// SIG undefined FUN_142c89a50(void)

/* WARNING: Removing unreachable block (ram,0x000142c8a071) */
/* WARNING: Removing unreachable block (ram,0x000142c8a080) */
/* WARNING: Removing unreachable block (ram,0x000142c89d43) */
/* WARNING: Removing unreachable block (ram,0x000142c89d50) */
/* WARNING: Removing unreachable block (ram,0x000142c89bed) */
/* WARNING: Removing unreachable block (ram,0x000142c89c00) */
/* WARNING: Removing unreachable block (ram,0x000142c89ecd) */
/* WARNING: Removing unreachable block (ram,0x000142c89ee0) */

longlong * FUN_142c89a50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  void *pvVar14;
  void *local_90;
  int local_88;
  int local_84;
  void *local_80;
  int local_78;
  int local_74;
  void *local_70;
  int local_68;
  int local_64;
  void *local_60;
  int local_58;
  int local_54;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar13 = (longlong *)*param_2;
  plVar1 = plVar13 + (int)param_2[1];
  if (plVar13 != plVar1) {
    do {
      lVar7 = *plVar13;
      if (lVar7 != 0) {
        lVar4 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar4 = *(longlong *)(lVar7 + 0x80);
          pvVar14 = (void *)0x0;
          iVar5 = 0;
          lVar8 = *param_3;
          iVar6 = 0;
          local_90 = (void *)0x0;
          lVar7 = (longlong)*(int *)(lVar7 + 0x88) * 0xa8 + lVar4;
          local_84 = 0;
          for (; lVar4 != lVar7; lVar4 = lVar4 + 0xa8) {
            if ((*(longlong *)(lVar4 + 0x50) == 0) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x10) != lVar8)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar9 = (longlong)iVar6;
              local_88 = iVar6 + 1;
              if (iVar5 < local_88) {
                TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(&local_90,iVar6);
                pvVar14 = local_90;
                iVar5 = local_84;
              }
              iVar6 = local_88;
              FAnimNotifyEvent::FAnimNotifyEvent((void *)(lVar9 * 0xa8 + (longlong)pvVar14),lVar4);
            }
          }
          if (iVar6 != 0) {
            iVar5 = (int)param_1[1];
            if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
              TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
              iVar5 = (int)param_1[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,(longlong)iVar6 * 0xa8);
            *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
            local_88 = 0;
          }
          if (pvVar14 != (void *)0x0) {
            FMemory::Free(pvVar14);
          }
        }
        else {
          lVar4 = UMaterialInstanceConstant::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar4 = *(longlong *)(lVar7 + 0x80);
            pvVar14 = (void *)0x0;
            iVar5 = 0;
            lVar8 = *param_3;
            iVar6 = 0;
            local_80 = (void *)0x0;
            lVar9 = (longlong)*(int *)(lVar7 + 0x88) * 0xa8 + lVar4;
            local_74 = 0;
            for (; lVar4 != lVar9; lVar4 = lVar4 + 0xa8) {
              if ((*(longlong *)(lVar4 + 0x50) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x10) != lVar8)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar10 = (longlong)iVar6;
                local_78 = iVar6 + 1;
                if (iVar5 < local_78) {
                  TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(&local_80,iVar6);
                  pvVar14 = local_80;
                  iVar5 = local_74;
                }
                iVar6 = local_78;
                FAnimNotifyEvent::FAnimNotifyEvent
                          ((void *)(lVar10 * 0xa8 + (longlong)pvVar14),lVar4);
              }
            }
            if (iVar6 != 0) {
              iVar5 = (int)param_1[1];
              if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
                TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
                iVar5 = (int)param_1[1];
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,(longlong)iVar6 * 0xa8)
              ;
              *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
              local_78 = 0;
            }
            if (pvVar14 != (void *)0x0) {
              FMemory::Free(pvVar14);
            }
            lVar4 = *(longlong *)(lVar7 + 0x168);
            lVar7 = (longlong)*(int *)(lVar7 + 0x170) * 0x58 + lVar4;
            for (; lVar4 != lVar7; lVar4 = lVar4 + 0x58) {
              lVar8 = *(longlong *)(lVar4 + 0x28);
              if (lVar8 != 0) {
                lVar9 = UAnimMontage::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  pvVar14 = (void *)0x0;
                  lVar9 = *(longlong *)(lVar8 + 0x80);
                  iVar5 = 0;
                  iVar6 = 0;
                  local_70 = (void *)0x0;
                  local_64 = 0;
                  lVar10 = *param_3;
                  lVar8 = (longlong)*(int *)(lVar8 + 0x88) * 0xa8 + lVar9;
                  for (; lVar9 != lVar8; lVar9 = lVar9 + 0xa8) {
                    if ((*(longlong *)(lVar9 + 0x50) == 0) ||
                       (*(longlong *)(*(longlong *)(lVar9 + 0x50) + 0x10) != lVar10)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar11 = (longlong)iVar6;
                      local_68 = iVar6 + 1;
                      if (iVar5 < local_68) {
                        TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow
                                  (&local_70,iVar6);
                        pvVar14 = local_70;
                        iVar5 = local_64;
                      }
                      iVar6 = local_68;
                      FAnimNotifyEvent::FAnimNotifyEvent
                                ((void *)(lVar11 * 0xa8 + (longlong)pvVar14),lVar9);
                    }
                  }
                  if (iVar6 != 0) {
                    iVar5 = (int)param_1[1];
                    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
                      TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
                      iVar5 = (int)param_1[1];
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,
                               (longlong)iVar6 * 0xa8);
                    *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
                    local_68 = 0;
                  }
                  if (pvVar14 != (void *)0x0) {
                    FMemory::Free(pvVar14);
                  }
                }
              }
            }
          }
          else {
            lVar4 = UBlendSpaceBase::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              plVar12 = *(longlong **)(lVar7 + 200);
              plVar2 = plVar12 + (longlong)*(int *)(lVar7 + 0xd0) * 3;
              for (; plVar12 != plVar2; plVar12 = plVar12 + 3) {
                lVar7 = *plVar12;
                if (lVar7 != 0) {
                  lVar4 = *(longlong *)(lVar7 + 0x80);
                  pvVar14 = (void *)0x0;
                  iVar5 = 0;
                  lVar8 = *param_3;
                  iVar6 = 0;
                  local_60 = (void *)0x0;
                  lVar7 = (longlong)*(int *)(lVar7 + 0x88) * 0xa8 + lVar4;
                  local_54 = 0;
                  for (; lVar4 != lVar7; lVar4 = lVar4 + 0xa8) {
                    if ((*(longlong *)(lVar4 + 0x50) == 0) ||
                       (*(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x10) != lVar8)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar9 = (longlong)iVar6;
                      local_58 = iVar6 + 1;
                      if (iVar5 < local_58) {
                        TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow
                                  (&local_60,iVar6);
                        pvVar14 = local_60;
                        iVar5 = local_54;
                      }
                      iVar6 = local_58;
                      FAnimNotifyEvent::FAnimNotifyEvent
                                ((void *)(lVar9 * 0xa8 + (longlong)pvVar14),lVar4);
                    }
                  }
                  if (iVar6 != 0) {
                    iVar5 = (int)param_1[1];
                    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar5) {
                      TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(param_1);
                      iVar5 = (int)param_1[1];
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar5 * 0xa8 + *param_1),pvVar14,
                               (longlong)iVar6 * 0xa8);
                    *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
                    local_58 = 0;
                  }
                  if (pvVar14 != (void *)0x0) {
                    FMemory::Free(pvVar14);
                  }
                }
              }
            }
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
    plVar13 = (longlong *)*param_2;
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return param_1;
}



// FUNCTION 142c8a130 FUN_142c8a130 body=714 status=ok
// SIG undefined FUN_142c8a130(void)

longlong FUN_142c8a130(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_1 != 0) {
    lVar3 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0xa8 + lVar3;
      while( true ) {
        if (lVar3 == lVar5) {
          return 0;
        }
        if ((*(longlong *)(lVar3 + 0x48) == 0) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x48) + 0x10) != *param_2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
        lVar3 = lVar3 + 0xa8;
      }
      return lVar3;
    }
    lVar3 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0xa8 + lVar3;
      for (; lVar3 != lVar5; lVar3 = lVar3 + 0xa8) {
        if ((*(longlong *)(lVar3 + 0x48) == 0) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x48) + 0x10) != *param_2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar3;
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x168);
      lVar5 = (longlong)*(int *)(param_1 + 0x170) * 0x58 + lVar3;
      for (; lVar3 != lVar5; lVar3 = lVar3 + 0x58) {
        lVar6 = *(longlong *)(lVar3 + 0x28);
        if (lVar6 != 0) {
          lVar4 = UAnimMontage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar4 = *(longlong *)(lVar6 + 0x80);
            lVar6 = (longlong)*(int *)(lVar6 + 0x88) * 0xa8 + lVar4;
            for (; lVar4 != lVar6; lVar4 = lVar4 + 0xa8) {
              if ((*(longlong *)(lVar4 + 0x48) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x10) != *param_2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                if (lVar4 != 0) {
                  return lVar4;
                }
                break;
              }
            }
          }
        }
      }
    }
    else {
      lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar7 = *(longlong **)(param_1 + 200);
        plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0xd0) * 3;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 3) {
          lVar3 = *plVar7;
          if (lVar3 != 0) {
            lVar5 = *(longlong *)(lVar3 + 0x80);
            lVar3 = (longlong)*(int *)(lVar3 + 0x88) * 0xa8 + lVar5;
            for (; lVar5 != lVar3; lVar5 = lVar5 + 0xa8) {
              if ((*(longlong *)(lVar5 + 0x48) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x10) != *param_2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c8a400 FUN_142c8a400 body=714 status=ok
// SIG undefined FUN_142c8a400(void)

longlong FUN_142c8a400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_1 != 0) {
    lVar3 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0xa8 + lVar3;
      while( true ) {
        if (lVar3 == lVar5) {
          return 0;
        }
        if ((*(longlong *)(lVar3 + 0x50) == 0) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x10) != *param_2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
        lVar3 = lVar3 + 0xa8;
      }
      return lVar3;
    }
    lVar3 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(param_1 + 0x80);
      lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0xa8 + lVar3;
      for (; lVar3 != lVar5; lVar3 = lVar3 + 0xa8) {
        if ((*(longlong *)(lVar3 + 0x50) == 0) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x10) != *param_2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar3;
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x168);
      lVar5 = (longlong)*(int *)(param_1 + 0x170) * 0x58 + lVar3;
      for (; lVar3 != lVar5; lVar3 = lVar3 + 0x58) {
        lVar6 = *(longlong *)(lVar3 + 0x28);
        if (lVar6 != 0) {
          lVar4 = UAnimMontage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar4 = *(longlong *)(lVar6 + 0x80);
            lVar6 = (longlong)*(int *)(lVar6 + 0x88) * 0xa8 + lVar4;
            for (; lVar4 != lVar6; lVar4 = lVar4 + 0xa8) {
              if ((*(longlong *)(lVar4 + 0x50) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x50) + 0x10) != *param_2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                if (lVar4 != 0) {
                  return lVar4;
                }
                break;
              }
            }
          }
        }
      }
    }
    else {
      lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar7 = *(longlong **)(param_1 + 200);
        plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0xd0) * 3;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 3) {
          lVar3 = *plVar7;
          if (lVar3 != 0) {
            lVar5 = *(longlong *)(lVar3 + 0x80);
            lVar3 = (longlong)*(int *)(lVar3 + 0x88) * 0xa8 + lVar5;
            for (; lVar5 != lVar3; lVar5 = lVar5 + 0xa8) {
              if ((*(longlong *)(lVar5 + 0x50) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x10) != *param_2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                return lVar5;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c8a6d0 FUN_142c8a6d0 body=442 status=ok
// SIG undefined FUN_142c8a6d0(void)

void FUN_142c8a6d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FSubmixEffectConvolutionReverbSettings::StaticStruct();
    lVar7 = *(longlong *)(param_1 + 0x28);
    if (lVar7 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      local_58 = 0;
      uStack_54 = 1;
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_20 = (uint *)(param_1 + 0x40);
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puStack_20;
        }
        uVar2 = *puVar8;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar7 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar6 = local_58 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar6;
          if (bVar4) goto LAB_142c8a7cf;
          uVar2 = puVar8[lVar7 + 1];
        }
        uStack_54 = -uVar2 & uVar2;
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
        local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
        if (iVar1 < local_48._4_4_) {
LAB_142c8a7cf:
          local_48._4_4_ = iVar1;
        }
      }
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      uStack_c = iStack_3c;
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_34 = iStack_3c;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar4 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x30);
      local_48 = puStack_20;
      if (bVar4) {
        do {
          iVar1 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iStack_3c * 0x18);
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return;
}



// FUNCTION 142c8a890 FUN_142c8a890 body=213 status=ok
// SIG undefined FUN_142c8a890(void)

longlong FUN_142c8a890(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1[0xe] != 0)) {
      lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
      for (lVar3 = plVar1[0xe]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) {
          lVar3 = (**(code **)(*plVar1 + 0x378))(plVar1,param_1[1]);
          if (lVar3 != 0) {
            lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              return lVar3;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c8a970 FUN_142c8a970 body=138 status=ok
// SIG undefined FUN_142c8a970(void)

longlong FUN_142c8a970(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x70) != 0)) {
      lVar3 = FUN_14294dfc0();
      for (lVar1 = *(longlong *)(lVar1 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar3) {
          return param_1[1];
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c8aa00 FUN_142c8aa00 body=411 status=ok
// SIG undefined FUN_142c8aa00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c8aa00(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  iVar13 = 0;
  puVar14 = *(undefined4 **)(param_1 + 0x300);
  if (*(undefined4 **)(param_1 + 0x300) == (undefined4 *)0x0) {
    puVar14 = param_1;
  }
  *param_2 = *puVar14;
  puVar12 = (undefined8 *)(param_2 + 2);
  uStack_30 = *(longlong **)(puVar14 + 4);
  local_38 = *(undefined8 *)(puVar14 + 2);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)uStack_30 + 0xc) = *(int *)((longlong)uStack_30 + 0xc) + 1;
    UNLOCK();
  }
  if (&local_38 != puVar12) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar12;
    plVar10 = *(longlong **)(param_2 + 4);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar12 = (undefined4)local_38;
    param_2[3] = local_38._4_4_;
    param_2[4] = (undefined4)uStack_30;
    param_2[5] = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar10;
  }
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)uStack_30 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*uStack_30 + 8))(uStack_30,1);
    }
  }
  FUN_142ca9390(param_1,0,1,param_4);
  iVar4 = param_1[0x302];
  puVar14 = *(undefined4 **)(param_1 + 0x300);
  if (*(undefined4 **)(param_1 + 0x300) == (undefined4 *)0x0) {
    puVar14 = param_1;
  }
  if (1 < iVar4) {
    do {
      iVar6 = iVar13 * 2;
      iVar11 = iVar6 + 1;
      if (iVar6 + 2 < iVar4) {
        if ((uint)puVar14[(longlong)iVar11 * 6] < (uint)puVar14[((longlong)iVar6 + 2) * 6]) {
          iVar11 = iVar6;
        }
        iVar11 = iVar11 + 1;
      }
      puVar2 = puVar14 + (longlong)iVar11 * 6;
      puVar3 = puVar14 + (longlong)iVar13 * 6;
      if ((uint)puVar14[(longlong)iVar13 * 6] <= *puVar2) {
        return;
      }
      if (puVar3 != puVar2) {
        uVar7 = *(undefined8 *)(puVar2 + 2);
        uVar8 = *(undefined8 *)puVar3;
        uVar9 = *(undefined8 *)(puVar3 + 2);
        uVar5 = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
        *(undefined8 *)(puVar3 + 2) = uVar7;
        *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)puVar2 = uVar8;
        *(undefined8 *)(puVar2 + 2) = uVar9;
        *(undefined8 *)(puVar2 + 4) = uVar5;
      }
      iVar13 = iVar11;
    } while (iVar11 * 2 + 1 < iVar4);
  }
  return;
}



// FUNCTION 142c8aba0 FUN_142c8aba0 body=478 status=ok
// SIG undefined FUN_142c8aba0(void)

void FUN_142c8aba0(undefined4 *param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar3 = iVar5;
    iVar7 = iVar4;
joined_r0x000142c8abe6:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          if (*(int *)((longlong)(int)param_1[(longlong)iVar5 + 2] * 0x20 + 8 +
                      *(longlong *)(*param_4 + 0x140)) <
              *(int *)((longlong)(int)param_1[iVar6] * 0x20 + 8 + *(longlong *)(*param_4 + 0x140)))
          {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        iVar1 = param_1[iVar4];
        if (*(int *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140)) <
            *(int *)((longlong)(int)param_1[iVar6] * 0x20 + 8 + *(longlong *)(*param_4 + 0x140))) {
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = iVar1;
          iVar4 = iVar6;
          goto joined_r0x000142c8abe6;
        }
      }
      iVar5 = iVar3 + -2;
      iVar4 = iVar7 + -1;
      iVar3 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar2 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar2;
      iVar4 = 0;
      if (1 < param_2) {
        do {
          iVar3 = iVar4 * 2;
          iVar5 = iVar3 + 1;
          if (iVar3 + 2 < param_2) {
            if (*(int *)((longlong)(int)param_1[(longlong)iVar3 + 2] * 0x20 + 8 +
                        *(longlong *)(*param_4 + 0x140)) <
                *(int *)((longlong)(int)param_1[iVar5] * 0x20 + 8 + *(longlong *)(*param_4 + 0x140))
               ) {
              iVar5 = iVar3;
            }
            iVar5 = iVar5 + 1;
          }
          iVar3 = param_1[iVar4];
          if (*(int *)((longlong)(int)param_1[iVar5] * 0x20 + 8 + *(longlong *)(*param_4 + 0x140))
              <= *(int *)((longlong)iVar3 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140))) break;
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = iVar3;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 142c8ad80 FUN_142c8ad80 body=521 status=ok
// SIG undefined FUN_142c8ad80(void)

void FUN_142c8ad80(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar3 = iVar11;
    iVar13 = iVar10;
joined_r0x000142c8adb5:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar12 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          iVar2 = *(int *)(param_1 + ((longlong)iVar11 + 2) * 4 + 3);
          iVar1 = *(int *)(param_1 + (longlong)iVar12 * 4 + 3);
          bVar17 = SBORROW4(iVar2,iVar1);
          iVar4 = iVar2 - iVar1;
          if (iVar2 == iVar1) {
            bVar17 = SBORROW4(*(int *)(param_1 + ((longlong)iVar11 + 2) * 4 + 1),
                              *(int *)(param_1 + (longlong)iVar12 * 4 + 1));
            iVar4 = *(int *)(param_1 + ((longlong)iVar11 + 2) * 4 + 1) -
                    *(int *)(param_1 + (longlong)iVar12 * 4 + 1);
          }
          if (bVar17 != iVar4 < 0) {
            iVar12 = iVar11;
          }
          iVar12 = iVar12 + 1;
        }
        puVar15 = param_1 + (longlong)iVar10 * 4;
        puVar14 = param_1 + (longlong)iVar12 * 4;
        iVar11 = *(int *)(puVar15 + 3);
        iVar10 = *(int *)(puVar14 + 3);
        bVar17 = SBORROW4(iVar11,iVar10);
        iVar1 = iVar11 - iVar10;
        if (iVar11 == iVar10) {
          bVar17 = SBORROW4(*(int *)(puVar15 + 1),*(int *)(puVar14 + 1));
          iVar1 = *(int *)(puVar15 + 1) - *(int *)(puVar14 + 1);
        }
        if (bVar17 != iVar1 < 0) {
          if (puVar15 != puVar14) {
            uVar5 = puVar14[1];
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar8 = puVar15[2];
            uVar9 = puVar15[3];
            *puVar15 = *puVar14;
            puVar15[1] = uVar5;
            uVar5 = puVar14[3];
            puVar15[2] = puVar14[2];
            puVar15[3] = uVar5;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar8;
            puVar14[3] = uVar9;
          }
          iVar11 = iVar12 * 2 + 1;
          iVar10 = iVar12;
          goto joined_r0x000142c8adb5;
        }
      }
      iVar11 = iVar3 + -2;
      iVar10 = iVar13 + -1;
      iVar3 = iVar11;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar14) {
        uVar5 = puVar14[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        *param_1 = *puVar14;
        param_1[1] = uVar5;
        uVar5 = puVar14[3];
        param_1[2] = puVar14[2];
        param_1[3] = uVar5;
        *puVar14 = uVar6;
        puVar14[1] = uVar7;
        puVar14[2] = uVar8;
        puVar14[3] = uVar9;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar3 = iVar10 * 2;
          iVar11 = iVar3 + 1;
          if (iVar3 + 2 < param_2) {
            iVar12 = *(int *)(param_1 + ((longlong)iVar3 + 2) * 4 + 3);
            iVar13 = *(int *)(param_1 + (longlong)iVar11 * 4 + 3);
            bVar17 = SBORROW4(iVar12,iVar13);
            iVar1 = iVar12 - iVar13;
            if (iVar12 == iVar13) {
              bVar17 = SBORROW4(*(int *)(param_1 + ((longlong)iVar3 + 2) * 4 + 1),
                                *(int *)(param_1 + (longlong)iVar11 * 4 + 1));
              iVar1 = *(int *)(param_1 + ((longlong)iVar3 + 2) * 4 + 1) -
                      *(int *)(param_1 + (longlong)iVar11 * 4 + 1);
            }
            if (bVar17 != iVar1 < 0) {
              iVar11 = iVar3;
            }
            iVar11 = iVar11 + 1;
          }
          puVar16 = param_1 + (longlong)iVar10 * 4;
          puVar15 = param_1 + (longlong)iVar11 * 4;
          iVar3 = *(int *)(puVar16 + 3);
          iVar10 = *(int *)(puVar15 + 3);
          bVar17 = SBORROW4(iVar3,iVar10);
          iVar13 = iVar3 - iVar10;
          if (iVar3 == iVar10) {
            bVar17 = SBORROW4(*(int *)(puVar16 + 1),*(int *)(puVar15 + 1));
            iVar13 = *(int *)(puVar16 + 1) - *(int *)(puVar15 + 1);
          }
          if (bVar17 == iVar13 < 0) break;
          if (puVar16 != puVar15) {
            uVar5 = puVar15[1];
            uVar6 = *puVar16;
            uVar7 = puVar16[1];
            uVar8 = puVar16[2];
            uVar9 = puVar16[3];
            *puVar16 = *puVar15;
            puVar16[1] = uVar5;
            uVar5 = puVar15[3];
            puVar16[2] = puVar15[2];
            puVar16[3] = uVar5;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar15[2] = uVar8;
            puVar15[3] = uVar9;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142c8af90 HeapSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_> body=417 status=ok
// SIG undefined HeapSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>(void)

void AlgoImpl::
     HeapSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x000142c8afba:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar8 * 4 + 9) <
              *(int *)(param_1 + (longlong)iVar9 * 4 + 1)) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        if (*(int *)(puVar12 + 1) < *(int *)(puVar11 + 1)) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000142c8afba;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar1 * 4 + 9) <
                *(int *)(param_1 + (longlong)iVar8 * 4 + 1)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if (*(int *)(puVar12 + 1) <= *(int *)(puVar13 + 1)) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142c8b140 FUN_142c8b140 body=691 status=ok
// SIG undefined FUN_142c8b140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c8b140(longlong param_1,ulonglong param_2,undefined1 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + (param_2 - 1) * 4;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_328 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar11 = &local_338;
    do {
      piVar3 = (int *)*plVar11;
      piVar6 = (int *)plVar11[1];
      lVar1 = plVar11[2];
      local_348._0_4_ = (int)lVar1;
      lVar4 = (longlong)piVar6 - (longlong)piVar3;
      piVar9 = piVar3;
      piVar10 = piVar6;
      if ((int)local_348 != 0) {
LAB_142c8b210:
        lVar5 = (lVar4 >> 2) + 1;
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = (lVar4 >> 2) + 2;
          }
          piVar8 = piVar10 + 1;
          iVar2 = piVar9[lVar5 >> 1];
          piVar9[lVar5 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar3 = piVar9;
LAB_142c8b240:
          piVar3 = piVar3 + 1;
          if (piVar3 <= piVar10) goto code_r0x000142c8b249;
          goto LAB_142c8b270;
        }
        if (piVar9 < piVar10) {
          do {
            piVar3 = piVar9;
            if (piVar9 + 1 <= piVar10) {
              piVar6 = piVar9;
              piVar8 = piVar9 + 1;
              do {
                piVar3 = piVar8;
                if (*(int *)((longlong)*piVar8 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140)) <=
                    *(int *)((longlong)*piVar6 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140))) {
                  piVar3 = piVar6;
                }
                piVar8 = piVar8 + 1;
                piVar6 = piVar3;
              } while (piVar8 <= piVar10);
            }
            iVar2 = *piVar3;
            *piVar3 = *piVar10;
            *piVar10 = iVar2;
            piVar10 = piVar10 + -1;
          } while (piVar9 < piVar10);
        }
        goto LAB_142c8b341;
      }
LAB_142c8b332:
      local_348 = lVar1;
      FUN_142c8aba0(piVar3,piVar6,param_3,param_4);
LAB_142c8b341:
      plVar11 = plVar11 + -3;
    } while (&local_338 <= plVar11);
  }
  return;
code_r0x000142c8b249:
  if (*(int *)((longlong)*piVar3 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140)) <=
      *(int *)((longlong)*piVar9 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140))) goto LAB_142c8b240;
LAB_142c8b270:
  do {
    piVar7 = piVar8;
    piVar8 = piVar7 + -1;
    if (piVar8 <= piVar9) break;
  } while (*(int *)((longlong)*piVar9 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140)) <=
           *(int *)((longlong)*piVar8 * 0x20 + 8 + *(longlong *)(*param_4 + 0x140)));
  if (piVar3 <= piVar8) {
    iVar2 = *piVar3;
    *piVar3 = *piVar8;
    *piVar8 = iVar2;
    goto LAB_142c8b240;
  }
  iVar2 = *piVar9;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar9 = *piVar8;
  *piVar8 = iVar2;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar10 - (longlong)piVar3 & 0xfffffffffffffffcU)) {
    if (piVar3 < piVar10) {
      *plVar11 = (longlong)piVar3;
      plVar11[1] = (longlong)piVar10;
      *(int *)(plVar11 + 2) = (int)local_348;
      plVar11 = plVar11 + 3;
    }
    if (piVar8 <= piVar9 + 1) goto LAB_142c8b341;
    piVar10 = piVar7 + -2;
    piVar3 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar8) {
      *plVar11 = (longlong)piVar9;
      plVar11[1] = (longlong)(piVar7 + -2);
      *(int *)(plVar11 + 2) = (int)local_348;
      plVar11 = plVar11 + 3;
    }
    if (piVar10 <= piVar3) goto LAB_142c8b341;
  }
  lVar4 = (longlong)piVar10 - (longlong)piVar3;
  piVar9 = piVar3;
  if ((int)local_348 == 0) goto LAB_142c8b332;
  goto LAB_142c8b210;
}



// FUNCTION 142c8b400 FUN_142c8b400 body=749 status=ok
// SIG undefined FUN_142c8b400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c8b400(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar26 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar26 = fVar26 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar26 = _guard_xfg_dispatch_icall_nop(fVar26);
    local_318 = (undefined4)(longlong)(fVar26 + fVar26);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar19 = &local_328;
    do {
      puVar24 = (undefined8 *)*plVar19;
      puVar22 = (undefined8 *)plVar19[1];
      lVar2 = plVar19[2];
      local_338._0_4_ = (int)lVar2;
      lVar17 = ((longlong)puVar22 - (longlong)puVar24 >> 5) + 1;
      puVar23 = puVar24;
      if ((int)local_338 != 0) {
LAB_142c8b4d0:
        if (8 < lVar17) {
          puVar24 = puVar23 + (lVar17 / 2) * 4;
          if (puVar24 != puVar23) {
            uVar5 = *(undefined4 *)((longlong)puVar23 + 4);
            uVar6 = *(undefined4 *)(puVar23 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar23 + 0xc);
            uVar8 = *(undefined4 *)puVar24;
            uVar9 = *(undefined4 *)((longlong)puVar24 + 4);
            uVar10 = *(undefined4 *)(puVar24 + 1);
            uVar11 = *(undefined4 *)((longlong)puVar24 + 0xc);
            uVar13 = puVar24[2];
            uVar14 = puVar24[3];
            *(undefined4 *)puVar24 = *(undefined4 *)puVar23;
            *(undefined4 *)((longlong)puVar24 + 4) = uVar5;
            *(undefined4 *)(puVar24 + 1) = uVar6;
            *(undefined4 *)((longlong)puVar24 + 0xc) = uVar7;
            uVar12 = puVar23[3];
            puVar24[2] = puVar23[2];
            puVar24[3] = uVar12;
            *(undefined4 *)puVar23 = uVar8;
            *(undefined4 *)((longlong)puVar23 + 4) = uVar9;
            *(undefined4 *)(puVar23 + 1) = uVar10;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uVar11;
            puVar23[2] = uVar13;
            puVar23[3] = uVar14;
          }
          puVar20 = puVar22 + 4;
          puVar24 = puVar23;
LAB_142c8b520:
          puVar18 = puVar24;
          puVar24 = puVar18 + 4;
          if (puVar24 <= puVar22) goto code_r0x000142c8b529;
          goto LAB_142c8b540;
        }
        for (; puVar20 = puVar23, puVar24 = puVar23, puVar23 < puVar22; puVar22 = puVar22 + -4) {
          while (puVar18 = puVar20, puVar24 = puVar24 + 4, puVar24 <= puVar22) {
            iVar1 = *(int *)(puVar24 + 3);
            iVar3 = *(int *)(puVar18 + 3);
            bVar25 = SBORROW4(iVar3,iVar1);
            iVar4 = iVar3 - iVar1;
            if (iVar3 == iVar1) {
              bVar25 = SBORROW4(*(int *)(puVar18 + 1),*(int *)(puVar24 + 1));
              iVar4 = *(int *)(puVar18 + 1) - *(int *)(puVar24 + 1);
            }
            puVar20 = puVar24;
            if (bVar25 == iVar4 < 0) {
              puVar20 = puVar18;
            }
          }
          if (puVar18 != puVar22) {
            uVar12 = puVar22[1];
            uVar13 = *puVar18;
            uVar14 = puVar18[1];
            uVar15 = puVar18[2];
            uVar16 = puVar18[3];
            *puVar18 = *puVar22;
            puVar18[1] = uVar12;
            uVar12 = puVar22[3];
            puVar18[2] = puVar22[2];
            puVar18[3] = uVar12;
            *puVar22 = uVar13;
            puVar22[1] = uVar14;
            puVar22[2] = uVar15;
            puVar22[3] = uVar16;
          }
        }
        goto LAB_142c8b640;
      }
LAB_142c8b631:
      local_338 = lVar2;
      FUN_142c8ad80(puVar24,lVar17,param_3,param_4);
LAB_142c8b640:
      plVar19 = plVar19 + -3;
    } while (&local_328 <= plVar19);
  }
  return;
code_r0x000142c8b529:
  iVar3 = *(int *)(puVar23 + 3);
  iVar1 = *(int *)(puVar18 + 7);
  bVar25 = SBORROW4(iVar3,iVar1);
  iVar4 = iVar3 - iVar1;
  if (iVar3 == iVar1) {
    bVar25 = SBORROW4(*(int *)(puVar23 + 1),*(int *)(puVar18 + 5));
    iVar4 = *(int *)(puVar23 + 1) - *(int *)(puVar18 + 5);
  }
  if (bVar25 == iVar4 < 0) goto LAB_142c8b520;
LAB_142c8b540:
  do {
    puVar21 = puVar20;
    puVar20 = puVar21 + -4;
    if (puVar20 <= puVar23) break;
    iVar3 = *(int *)(puVar21 + -1);
    iVar1 = *(int *)(puVar23 + 3);
    bVar25 = SBORROW4(iVar3,iVar1);
    iVar4 = iVar3 - iVar1;
    if (iVar3 == iVar1) {
      bVar25 = SBORROW4(*(int *)(puVar21 + -3),*(int *)(puVar23 + 1));
      iVar4 = *(int *)(puVar21 + -3) - *(int *)(puVar23 + 1);
    }
  } while (bVar25 == iVar4 < 0);
  if (puVar24 <= puVar20) {
    if (puVar24 != puVar20) {
      uVar5 = *(undefined4 *)((longlong)puVar21 + -0x1c);
      uVar6 = *(undefined4 *)(puVar21 + -3);
      uVar7 = *(undefined4 *)((longlong)puVar21 + -0x14);
      uVar8 = *(undefined4 *)puVar24;
      uVar9 = *(undefined4 *)((longlong)puVar18 + 0x24);
      uVar10 = *(undefined4 *)(puVar18 + 5);
      uVar11 = *(undefined4 *)((longlong)puVar18 + 0x2c);
      uVar13 = puVar18[6];
      uVar14 = puVar18[7];
      *(undefined4 *)puVar24 = *(undefined4 *)puVar20;
      *(undefined4 *)((longlong)puVar18 + 0x24) = uVar5;
      *(undefined4 *)(puVar18 + 5) = uVar6;
      *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar7;
      uVar12 = puVar21[-1];
      puVar18[6] = puVar21[-2];
      puVar18[7] = uVar12;
      *(undefined4 *)puVar20 = uVar8;
      *(undefined4 *)((longlong)puVar21 + -0x1c) = uVar9;
      *(undefined4 *)(puVar21 + -3) = uVar10;
      *(undefined4 *)((longlong)puVar21 + -0x14) = uVar11;
      puVar21[-2] = uVar13;
      puVar21[-1] = uVar14;
    }
    goto LAB_142c8b520;
  }
  if (puVar23 != puVar20) {
    uVar5 = *(undefined4 *)((longlong)puVar21 + -0x1c);
    uVar6 = *(undefined4 *)(puVar21 + -3);
    uVar7 = *(undefined4 *)((longlong)puVar21 + -0x14);
    uVar8 = *(undefined4 *)puVar23;
    uVar9 = *(undefined4 *)((longlong)puVar23 + 4);
    uVar10 = *(undefined4 *)(puVar23 + 1);
    uVar11 = *(undefined4 *)((longlong)puVar23 + 0xc);
    uVar13 = puVar23[2];
    uVar14 = puVar23[3];
    *(undefined4 *)puVar23 = *(undefined4 *)puVar20;
    *(undefined4 *)((longlong)puVar23 + 4) = uVar5;
    *(undefined4 *)(puVar23 + 1) = uVar6;
    *(undefined4 *)((longlong)puVar23 + 0xc) = uVar7;
    uVar12 = puVar21[-1];
    puVar23[2] = puVar21[-2];
    puVar23[3] = uVar12;
    *(undefined4 *)puVar20 = uVar8;
    *(undefined4 *)((longlong)puVar21 + -0x1c) = uVar9;
    *(undefined4 *)(puVar21 + -3) = uVar10;
    *(undefined4 *)((longlong)puVar21 + -0x14) = uVar11;
    puVar21[-2] = uVar13;
    puVar21[-1] = uVar14;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar20 + (-0x20 - (longlong)puVar23) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar22 - (longlong)puVar24 & 0xffffffffffffffe0U)) {
    if (puVar24 < puVar22) {
      *plVar19 = (longlong)puVar24;
      plVar19[1] = (longlong)puVar22;
      *(int *)(plVar19 + 2) = (int)local_338;
      plVar19 = plVar19 + 3;
    }
    if (puVar20 <= puVar23 + 4) goto LAB_142c8b640;
    puVar22 = puVar21 + -8;
    puVar24 = puVar23;
  }
  else {
    if (puVar23 + 4 < puVar20) {
      *plVar19 = (longlong)puVar23;
      plVar19[1] = (longlong)(puVar21 + -8);
      *(int *)(plVar19 + 2) = (int)local_338;
      plVar19 = plVar19 + 3;
    }
    if (puVar22 <= puVar24) goto LAB_142c8b640;
  }
  lVar17 = ((longlong)puVar22 - (longlong)puVar24 >> 5) + 1;
  puVar23 = puVar24;
  if ((int)local_338 == 0) goto LAB_142c8b631;
  goto LAB_142c8b4d0;
}



// FUNCTION 142c8b6f0 IntroSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_> body=705 status=ok
// SIG undefined IntroSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar22 = ::_guard_xfg_dispatch_icall_nop(fVar22);
    local_318 = (undefined4)(longlong)(fVar22 + fVar22);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      puVar21 = (undefined8 *)*plVar16;
      puVar19 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
      puVar20 = puVar21;
      if ((int)local_338 != 0) {
LAB_142c8b7c0:
        if (8 < lVar14) {
          puVar21 = puVar20 + (lVar14 / 2) * 4;
          if (puVar21 != puVar20) {
            uVar2 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar3 = *(undefined4 *)(puVar20 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar5 = *(undefined4 *)puVar21;
            uVar6 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar7 = *(undefined4 *)(puVar21 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            *(undefined4 *)puVar21 = *(undefined4 *)puVar20;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar2;
            *(undefined4 *)(puVar21 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar4;
            uVar9 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar9;
            *(undefined4 *)puVar20 = uVar5;
            *(undefined4 *)((longlong)puVar20 + 4) = uVar6;
            *(undefined4 *)(puVar20 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar20 + 0xc) = uVar8;
            puVar20[2] = uVar10;
            puVar20[3] = uVar11;
          }
          puVar17 = puVar19 + 4;
          puVar21 = puVar20;
LAB_142c8b810:
          puVar15 = puVar21;
          puVar21 = puVar15 + 4;
          if (puVar21 <= puVar19) goto code_r0x000142c8b819;
          goto LAB_142c8b822;
        }
        for (; puVar17 = puVar20, puVar21 = puVar20, puVar20 < puVar19; puVar19 = puVar19 + -4) {
          while (puVar15 = puVar17, puVar21 = puVar21 + 4, puVar21 <= puVar19) {
            puVar17 = puVar21;
            if (*(int *)(puVar21 + 1) <= *(int *)(puVar15 + 1)) {
              puVar17 = puVar15;
            }
          }
          if (puVar15 != puVar19) {
            uVar9 = puVar19[1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            uVar12 = puVar15[2];
            uVar13 = puVar15[3];
            *puVar15 = *puVar19;
            puVar15[1] = uVar9;
            uVar9 = puVar19[3];
            puVar15[2] = puVar19[2];
            puVar15[3] = uVar9;
            *puVar19 = uVar10;
            puVar19[1] = uVar11;
            puVar19[2] = uVar12;
            puVar19[3] = uVar13;
          }
        }
        goto LAB_142c8b913;
      }
LAB_142c8b904:
      local_338 = lVar1;
      HeapSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>
                (puVar21,lVar14,param_3,param_4);
LAB_142c8b913:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x000142c8b819:
  if (*(int *)(puVar15 + 5) <= *(int *)(puVar20 + 1)) goto LAB_142c8b810;
LAB_142c8b822:
  do {
    puVar18 = puVar17;
    puVar17 = puVar18 + -4;
    if (puVar17 <= puVar20) break;
  } while (*(int *)(puVar20 + 1) <= *(int *)(puVar18 + -3));
  if (puVar21 <= puVar17) {
    if (puVar21 != puVar17) {
      uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
      uVar3 = *(undefined4 *)(puVar18 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
      uVar5 = *(undefined4 *)puVar21;
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar7 = *(undefined4 *)(puVar15 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined4 *)puVar21 = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar2;
      *(undefined4 *)(puVar15 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
      uVar9 = puVar18[-1];
      puVar15[6] = puVar18[-2];
      puVar15[7] = uVar9;
      *(undefined4 *)puVar17 = uVar5;
      *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
      *(undefined4 *)(puVar18 + -3) = uVar7;
      *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
      puVar18[-2] = uVar10;
      puVar18[-1] = uVar11;
    }
    goto LAB_142c8b810;
  }
  if (puVar20 != puVar17) {
    uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
    uVar3 = *(undefined4 *)(puVar18 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
    uVar5 = *(undefined4 *)puVar20;
    uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar7 = *(undefined4 *)(puVar20 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar10 = puVar20[2];
    uVar11 = puVar20[3];
    *(undefined4 *)puVar20 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)puVar20 + 4) = uVar2;
    *(undefined4 *)(puVar20 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
    uVar9 = puVar18[-1];
    puVar20[2] = puVar18[-2];
    puVar20[3] = uVar9;
    *(undefined4 *)puVar17 = uVar5;
    *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
    *(undefined4 *)(puVar18 + -3) = uVar7;
    *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
    puVar18[-2] = uVar10;
    puVar18[-1] = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar17 + (-0x20 - (longlong)puVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar19 - (longlong)puVar21 & 0xffffffffffffffe0U)) {
    if (puVar21 < puVar19) {
      *plVar16 = (longlong)puVar21;
      plVar16[1] = (longlong)puVar19;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar17 <= puVar20 + 4) goto LAB_142c8b913;
    puVar19 = puVar18 + -8;
    puVar21 = puVar20;
  }
  else {
    if (puVar20 + 4 < puVar17) {
      *plVar16 = (longlong)puVar20;
      plVar16[1] = (longlong)(puVar18 + -8);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar19 <= puVar21) goto LAB_142c8b913;
  }
  lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
  puVar20 = puVar21;
  if ((int)local_338 == 0) goto LAB_142c8b904;
  goto LAB_142c8b7c0;
}



// FUNCTION 142c8b9c0 FUN_142c8b9c0 body=464 status=ok
// SIG undefined FUN_142c8b9c0(void)

undefined8 FUN_142c8b9c0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UNumericProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x370))(plVar1);
      if (cVar3 != '\0') {
        (**(code **)(*plVar1 + 0x398))(plVar1,param_1[1],(double)param_2);
        return 1;
      }
      (**(code **)(*plVar1 + 0x388))(plVar1,param_1[1],(longlong)param_2);
      return 1;
    }
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pbVar6 = (byte *)((ulonglong)*(byte *)(lVar4 + 0x71) + param_1[1]);
      if (param_2 != 0.0) {
        *pbVar6 = ~*(byte *)(lVar4 + 0x73) & *pbVar6 | *(byte *)(lVar4 + 0x72);
        return 0;
      }
      *pbVar6 = ~*(byte *)(lVar4 + 0x73) & *pbVar6;
      return 0;
    }
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = UEnum::IsValidEnumValue(*(undefined8 *)(lVar4 + 0x78),(longlong)param_2);
      if (cVar3 != '\0') {
        (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x388))
                  (*(longlong **)(lVar4 + 0x70),param_1[1],(longlong)param_2);
      }
    }
  }
  return 0;
}



// FUNCTION 142c8bb90 _Guess_median_unchecked<unsigned_short_*,std::less<void>_> body=393 status=ok
// SIG undefined _Guess_median_unchecked<unsigned_short_*,std::less<void>_>(void)

void std::_Guess_median_unchecked<unsigned_short_*,std::less<void>_>
               (ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 1;
  if (lVar2 < 0x29) {
    uVar4 = *param_2;
    if (uVar4 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = *param_3;
    if (uVar1 < uVar4) {
      *param_3 = uVar4;
      *param_2 = uVar1;
      if (uVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = uVar1;
        return;
      }
    }
  }
  else {
    lVar2 = lVar2 + 1 >> 3;
    uVar4 = param_1[lVar2];
    if (uVar4 < *param_1) {
      param_1[lVar2] = *param_1;
      *param_1 = uVar4;
      uVar4 = param_1[lVar2];
    }
    uVar1 = param_1[lVar2 * 2];
    if (uVar1 < uVar4) {
      param_1[lVar2 * 2] = uVar4;
      param_1[lVar2] = uVar1;
      if (uVar1 < *param_1) {
        param_1[lVar2] = *param_1;
        *param_1 = uVar1;
      }
    }
    uVar4 = *param_2;
    puVar3 = param_2 + -lVar2;
    if (uVar4 < *puVar3) {
      *param_2 = *puVar3;
      *puVar3 = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = param_2[lVar2];
    if (uVar1 < uVar4) {
      param_2[lVar2] = uVar4;
      *param_2 = uVar1;
      if (uVar1 < *puVar3) {
        *param_2 = *puVar3;
        *puVar3 = uVar1;
      }
    }
    puVar5 = param_3 + lVar2 * -2;
    puVar3 = param_3 + -lVar2;
    uVar4 = *puVar3;
    if (uVar4 < *puVar5) {
      *puVar3 = *puVar5;
      *puVar5 = uVar4;
      uVar4 = *puVar3;
    }
    uVar1 = *param_3;
    if (uVar1 < uVar4) {
      *param_3 = uVar4;
      *puVar3 = uVar1;
      if (uVar1 < *puVar5) {
        *puVar3 = *puVar5;
        *puVar5 = uVar1;
      }
    }
    uVar4 = *param_2;
    if (uVar4 < param_1[lVar2]) {
      *param_2 = param_1[lVar2];
      param_1[lVar2] = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = *puVar3;
    if (uVar1 < uVar4) {
      *puVar3 = uVar4;
      *param_2 = uVar1;
      if (uVar1 < param_1[lVar2]) {
        *param_2 = param_1[lVar2];
        param_1[lVar2] = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 142c8bd20 FUN_142c8bd20 body=1148 status=ok
// SIG undefined FUN_142c8bd20(void)

void FUN_142c8bd20(ushort *param_1,ushort *param_2,longlong param_3,undefined1 param_4)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar5 = lVar2 >> 1;
    if (lVar5 < 0x21) {
LAB_142c8bf4f:
      if ((1 < lVar5) && (param_1 != param_2)) {
        for (puVar7 = param_1 + 1; puVar7 != param_2; puVar7 = puVar7 + 1) {
          uVar3 = *puVar7;
          if (uVar3 < *param_1) {
            _guard_xfg_dispatch_icall_nop(param_1 + 1,param_1,(longlong)puVar7 - (longlong)param_1);
            *param_1 = uVar3;
          }
          else {
            uVar1 = puVar7[-1];
            puVar10 = puVar7;
            while (uVar3 < uVar1) {
              *puVar10 = uVar1;
              uVar1 = puVar10[-2];
              puVar10 = puVar10 + -1;
            }
            *puVar10 = uVar3;
          }
        }
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar5) {
        uVar12 = (longlong)param_2 - (longlong)param_1 >> 1;
        lVar2 = (longlong)param_2 - (longlong)param_1 >> 2;
        if (0 < lVar2) {
          lVar5 = (longlong)(uVar12 - 1) >> 1;
          do {
            uVar3 = param_1[lVar2 + -1];
            lVar2 = lVar2 + -1;
            lVar13 = lVar2;
            while (lVar13 < lVar5) {
              lVar11 = (2 - (ulonglong)(param_1[lVar13 * 2 + 2] < param_1[lVar13 * 2 + 1])) +
                       lVar13 * 2;
              param_1[lVar13] = param_1[lVar11];
              lVar13 = lVar11;
            }
            if ((lVar13 == lVar5) && ((uVar12 & 1) == 0)) {
              param_1[lVar13] = param_1[uVar12 - 1];
              lVar13 = uVar12 - 1;
            }
            while (lVar2 < lVar13) {
              lVar11 = lVar13 + -1 >> 1;
              if (uVar3 <= param_1[lVar11]) break;
              param_1[lVar13] = param_1[lVar11];
              lVar13 = lVar11;
            }
            param_1[lVar13] = uVar3;
          } while (0 < lVar2);
        }
        if ((longlong)uVar12 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (longlong)uVar12) {
            uVar3 = *param_2;
            uVar12 = (longlong)param_2 - (longlong)param_1 >> 1;
            lVar2 = 0;
            *param_2 = *param_1;
            lVar13 = (longlong)(uVar12 - 1) >> 1;
            lVar5 = lVar2;
            if (0 < lVar13) {
              do {
                lVar2 = (2 - (ulonglong)(param_1[lVar5 * 2 + 2] < param_1[lVar5 * 2 + 1])) +
                        lVar5 * 2;
                param_1[lVar5] = param_1[lVar2];
                lVar5 = lVar2;
              } while (lVar2 < lVar13);
            }
            if ((lVar2 == lVar13) && ((uVar12 & 1) == 0)) {
              param_1[lVar2] = param_1[uVar12 - 1];
              lVar2 = uVar12 - 1;
            }
            while (0 < lVar2) {
              lVar5 = lVar2 + -1 >> 1;
              if (uVar3 <= param_1[lVar5]) break;
              param_1[lVar2] = param_1[lVar5];
              lVar2 = lVar5;
            }
            param_1[lVar2] = uVar3;
          }
          param_2 = param_2 + -1;
          uVar12 = (2 - (longlong)param_1) + (longlong)param_2 >> 1;
          if ((longlong)uVar12 < 2) {
            return;
          }
        } while( true );
      }
      goto LAB_142c8bf4f;
    }
    puVar10 = param_1 + (lVar2 >> 2);
    std::_Guess_median_unchecked<unsigned_short_*,std::less<void>_>
              (param_1,puVar10,param_2 + -1,param_4);
    puVar7 = puVar10 + 1;
    if (param_1 < puVar10) {
      uVar3 = *puVar10;
      do {
        uVar1 = puVar10[-1];
        puVar9 = puVar10 + -1;
        if ((uVar1 < uVar3) || (uVar3 < uVar1)) break;
        puVar10 = puVar9;
        uVar3 = uVar1;
      } while (param_1 < puVar9);
    }
    puVar9 = puVar7;
    puVar6 = puVar10;
    if (puVar7 < param_2) {
      do {
        puVar9 = puVar7;
        if ((*puVar7 < *puVar10) || (*puVar10 < *puVar7)) break;
        puVar7 = puVar7 + 1;
        puVar9 = puVar7;
      } while (puVar7 < param_2);
    }
joined_r0x000142c8bdd4:
    puVar4 = puVar10;
    if (puVar7 < param_2) {
      uVar3 = *puVar7;
      puVar8 = puVar9;
      if (uVar3 <= *puVar6) {
        if (uVar3 < *puVar6) goto joined_r0x000142c8be11;
        puVar8 = puVar9 + 1;
        if (puVar9 != puVar7) {
          uVar1 = *puVar9;
          *puVar9 = uVar3;
          *puVar7 = uVar1;
        }
      }
      puVar7 = puVar7 + 1;
      puVar9 = puVar8;
      goto joined_r0x000142c8bdd4;
    }
joined_r0x000142c8be11:
    for (; param_1 < puVar10; puVar10 = puVar10 + -1) {
      puVar4 = puVar4 + -1;
      uVar3 = *puVar4;
      if (*puVar6 <= uVar3) {
        if (*puVar6 < uVar3) break;
        puVar6 = puVar6 + -1;
        if (puVar6 != puVar4) {
          uVar1 = *puVar6;
          *puVar6 = uVar3;
          *puVar4 = uVar1;
        }
      }
    }
    if (puVar10 != param_1) {
      puVar10 = puVar10 + -1;
      if (puVar7 == param_2) {
        puVar6 = puVar6 + -1;
        if (puVar10 == puVar6) {
          uVar3 = *puVar6;
          *puVar6 = puVar9[-1];
          puVar9[-1] = uVar3;
          puVar9 = puVar9 + -1;
        }
        else {
          puVar9 = puVar9 + -1;
          uVar3 = *puVar10;
          *puVar10 = *puVar6;
          *puVar6 = uVar3;
          *puVar6 = *puVar9;
          *puVar9 = uVar3;
        }
      }
      else {
        uVar3 = *puVar7;
        *puVar7 = *puVar10;
        puVar7 = puVar7 + 1;
        *puVar10 = uVar3;
      }
      goto joined_r0x000142c8bdd4;
    }
    if (puVar7 != param_2) {
      if (puVar9 != puVar7) {
        uVar3 = *puVar6;
        *puVar6 = *puVar9;
        *puVar9 = uVar3;
      }
      uVar3 = *puVar6;
      *puVar6 = *puVar7;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
      goto joined_r0x000142c8bdd4;
    }
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)puVar6 - (longlong)param_1 & 0xfffffffffffffffeU) <
        (longlong)((longlong)param_2 - (longlong)puVar9 & 0xfffffffffffffffeU)) {
      FUN_142c8bd20(param_1,puVar6,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar9;
    }
    else {
      FUN_142c8bd20(puVar9,param_2,param_3,param_4);
    }
    lVar2 = (longlong)puVar6 - (longlong)param_1;
    param_2 = puVar6;
  } while( true );
}



// FUNCTION 142c8c1a0 FUN_142c8c1a0 body=139 status=ok
// SIG undefined FUN_142c8c1a0(void)

undefined8 * FUN_142c8c1a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"SkeletalMeshComponent0");
  uVar1 = FUN_142e5c1e0();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SkeletalMeshComponent0",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_1422a1830(param_1,param_2);
  *param_1 = &PTR_FUN_145027170;
  param_1[0x8b] = &PTR_LAB_145027878;
  return param_1;
}



// FUNCTION 142c8c230 FUN_142c8c230 body=40 status=ok
// SIG undefined FUN_142c8c230(void)

undefined4 * FUN_142c8c230(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 2) = *param_2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0x3f800000;
  return param_1;
}



// FUNCTION 142c8c260 FUN_142c8c260 body=37 status=ok
// SIG undefined FUN_142c8c260(void)

undefined4 * FUN_142c8c260(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0x3f800000;
  return param_1;
}



// FUNCTION 142c8c290 FUN_142c8c290 body=109 status=ok
// SIG undefined FUN_142c8c290(void)

undefined8 * FUN_142c8c290(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 5);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 142c8c300 FUN_142c8c300 body=59 status=ok
// SIG undefined FUN_142c8c300(void)

undefined8 * FUN_142c8c300(undefined8 *param_1,undefined8 param_2)

{
  FUN_14084bd40();
  param_1[0xd8] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145845238;
  *(undefined1 *)(param_1 + 0xd7) = 1;
  return param_1;
}



// FUNCTION 142c8c340 FUN_142c8c340 body=51 status=ok
// SIG undefined FUN_142c8c340(void)

undefined8 * FUN_142c8c340(undefined8 *param_1)

{
  FUN_14084bd40();
  *(undefined1 *)(param_1 + 0xd7) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__145845238;
  param_1[0xd8] = 0;
  return param_1;
}



// FUNCTION 142c8c380 FUN_142c8c380 body=100 status=ok
// SIG undefined FUN_142c8c380(void)

undefined8 * FUN_142c8c380(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_1458442f8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x16a) = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 142c8c3f0 FUN_142c8c3f0 body=67 status=ok
// SIG undefined FUN_142c8c3f0(void)

undefined8 * FUN_142c8c3f0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_145843cc0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 142c8c440 FUN_142c8c440 body=63 status=ok
// SIG undefined FUN_142c8c440(void)

undefined8 * FUN_142c8c440(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_1458453e8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 142c8c480 FUN_142c8c480 body=544 status=ok
// SIG undefined FUN_142c8c480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8c480(undefined8 *param_1)

{
  uint uVar1;
  uint uStackX_c;
  
  uVar1 = uStackX_c;
  FUN_141206ee0();
  uStackX_c = uStackX_c & 0xfffffff0;
  *param_1 = &PTR_FUN_145845520;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xf0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  *(byte *)(param_1 + 0x67) = *(byte *)(param_1 + 0x67) & 0xf0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(uint *)((longlong)param_1 + 0x344) = *(uint *)((longlong)param_1 + 0x344) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x146) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x300;
  param_1[0x2e] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2f) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x17c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x184) = DAT_1468b5d98;
  param_1[0x61] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x62) = DAT_1468b5d98;
  *(undefined2 *)(param_1 + 0x3d) = 0x300;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 500) = DAT_1468b5da8;
  param_1[0x3f] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x40) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x314) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = DAT_1468b5da8;
  *(undefined2 *)(param_1 + 0x4d) = 0x300;
  *(undefined8 *)((longlong)param_1 + 0x26c) = DAT_1466acfa0;
  *(undefined4 *)((longlong)param_1 + 0x274) = DAT_1466acfa8;
  param_1[0x4f] = DAT_1466acfa0;
  *(undefined4 *)(param_1 + 0x50) = DAT_1466acfa8;
  param_1[100] = DAT_1466acfa0;
  *(undefined4 *)(param_1 + 0x65) = DAT_1466acfa8;
  *(ulonglong *)((longlong)param_1 + 0x32c) = (ulonglong)uStackX_c << 0x20;
  *(uint *)((longlong)param_1 + 0x344) = *(uint *)((longlong)param_1 + 0x344) & 0xfffffff9;
  *(ulonglong *)((longlong)param_1 + 0x334) = ((ulonglong)uVar1 & 0xfffffff0) << 0x20;
  *(ulonglong *)((longlong)param_1 + 0x33c) = ((ulonglong)uVar1 & 0xfffffff0) << 0x20;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  return param_1;
}



// FUNCTION 142c8c6a0 FUN_142c8c6a0 body=510 status=ok
// SIG undefined FUN_142c8c6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8c6a0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_141206ee0();
  *param_1 = &PTR_FUN_1458452b0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x31] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  FAxis::FAxis((longlong)param_1 + 0x1ec,&DAT_1466acfb0);
  FAxis::FAxis((longlong)param_1 + 0x1fc,&DAT_1466acfb0);
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  FAxis::FAxis(param_1 + 0x42,&DAT_1466acfc0);
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x47) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4b] = 0xffffffffffffffff;
  uVar2 = uRam0000000146b2ff7c;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(uint *)((longlong)param_1 + 0x26c) = uVar2;
  uVar2 = uRam0000000146b2ff74 & uRam0000000146b2ff84;
  uVar3 = uRam0000000146b2ff78 & uRam0000000146b2ff88;
  uVar4 = uRam0000000146b2ff7c & uRam0000000146b2ff8c;
  *(uint *)(param_1 + 0x50) = _DAT_146b2ff70 & _DAT_146b2ff80;
  *(uint *)((longlong)param_1 + 0x284) = uVar2;
  *(uint *)(param_1 + 0x51) = uVar3;
  *(uint *)((longlong)param_1 + 0x28c) = uVar4;
  uVar1 = uRam00000001468b5b78;
  param_1[0x54] = _DAT_1468b5b70;
  param_1[0x55] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0x56] = _DAT_1468b5b80;
  param_1[0x57] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0x58] = _DAT_1468b5b90;
  param_1[0x59] = uVar1;
  return param_1;
}



// FUNCTION 142c8c8a0 FUN_142c8c8a0 body=37 status=ok
// SIG undefined FUN_142c8c8a0(void)

undefined8 * FUN_142c8c8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14407afd8;
  FUN_142c62230(param_1 + 1);
  return param_1;
}



// FUNCTION 142c8c8f0 FUN_142c8c8f0 body=28 status=ok
// SIG undefined FUN_142c8c8f0(void)

longlong FUN_142c8c8f0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  return param_1;
}



// FUNCTION 142c8c910 FUN_142c8c910 body=120 status=ok
// SIG undefined FUN_142c8c910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142c8c910(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = param_2;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  param_1[1] = param_3[4];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FQuat::Rotator(&local_18,param_1 + 4);
  *(undefined8 *)(param_1 + 7) = _DAT_1468b5d90;
  param_1[9] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 10) = DAT_1468b5da0;
  param_1[0xc] = DAT_1468b5da8;
  return param_1;
}



// FUNCTION 142c8c990 FUN_142c8c990 body=162 status=ok
// SIG undefined FUN_142c8c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8c990(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 2;
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 6) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x43fa0000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  uVar1 = uRam0000000146b2ff7c;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = uRam0000000146b2ff74 & uRam0000000146b2ff84;
  uVar2 = uRam0000000146b2ff78 & uRam0000000146b2ff88;
  uVar3 = uRam0000000146b2ff7c & uRam0000000146b2ff8c;
  *(uint *)(param_1 + 0x12) = _DAT_146b2ff70 & _DAT_146b2ff80;
  *(uint *)((longlong)param_1 + 0x94) = uVar1;
  *(uint *)(param_1 + 0x13) = uVar2;
  *(uint *)((longlong)param_1 + 0x9c) = uVar3;
  return param_1;
}



// FUNCTION 142c8ca40 FUN_142c8ca40 body=532 status=ok
// SIG undefined FUN_142c8ca40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142c8ca40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar1;
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  param_1[8] = param_2[8];
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_1[10] = param_2[10];
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  lVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar1;
  lVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar1;
  lVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = lVar1;
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  lVar1 = lRam00000001468b5b78;
  param_1[0x1a] = _DAT_1468b5b70;
  param_1[0x1b] = lVar1;
  uVar11 = uRam00000001468b5b8c;
  uVar10 = uRam00000001468b5b88;
  uVar5 = uRam00000001468b5b84;
  *(undefined4 *)(param_1 + 0x1c) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar11;
  uVar11 = uRam00000001468b5b9c;
  uVar10 = uRam00000001468b5b98;
  uVar5 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 0x1e) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar5;
  *(undefined4 *)(param_1 + 0x1f) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar11;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((longlong *)param_1[1] != (longlong *)0x0)) {
      lVar3 = *(longlong *)(lVar1 + 0xa18);
      if (lVar3 != 0) {
        uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x280))();
        *(undefined4 *)(param_1 + 0x17) = uVar5;
        if (*(char *)((longlong)param_1 + 0x5c) == '\0') {
          if (*(longlong *)(lVar1 + 0x168) == 0) {
            puVar4 = (undefined4 *)&DAT_1468b5b70;
          }
          else {
            puVar4 = (undefined4 *)(*(longlong *)(lVar1 + 0x168) + 0x210);
          }
          uVar5 = puVar4[4];
          uVar10 = puVar4[5];
          uVar11 = puVar4[6];
          uVar12 = puVar4[7];
          uVar13 = puVar4[8];
          uVar14 = puVar4[9];
          uVar15 = puVar4[10];
          uVar16 = puVar4[0xb];
          uVar6 = *puVar4;
          uVar7 = puVar4[1];
          uVar8 = puVar4[2];
          uVar9 = puVar4[3];
        }
        else {
          uVar5 = (undefined4)param_1[0xe];
          uVar10 = *(undefined4 *)((longlong)param_1 + 0x74);
          uVar11 = (undefined4)param_1[0xf];
          uVar12 = *(undefined4 *)((longlong)param_1 + 0x7c);
          uVar13 = (undefined4)param_1[0x10];
          uVar14 = *(undefined4 *)((longlong)param_1 + 0x84);
          uVar15 = (undefined4)param_1[0x11];
          uVar16 = *(undefined4 *)((longlong)param_1 + 0x8c);
          uVar6 = (undefined4)param_1[0xc];
          uVar7 = *(undefined4 *)((longlong)param_1 + 100);
          uVar8 = (undefined4)param_1[0xd];
          uVar9 = *(undefined4 *)((longlong)param_1 + 0x6c);
        }
        *(undefined4 *)(param_1 + 0x1a) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0xd4) = uVar7;
        *(undefined4 *)(param_1 + 0x1b) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0xdc) = uVar9;
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
        *(undefined4 *)((longlong)param_1 + 0xe4) = uVar10;
        *(undefined4 *)(param_1 + 0x1d) = uVar11;
        *(undefined4 *)((longlong)param_1 + 0xec) = uVar12;
        *(undefined4 *)(param_1 + 0x1e) = uVar13;
        *(undefined4 *)((longlong)param_1 + 0xf4) = uVar14;
        *(undefined4 *)(param_1 + 0x1f) = uVar15;
        *(undefined4 *)((longlong)param_1 + 0xfc) = uVar16;
        if (*(char *)(lVar3 + 0xf30) != '\0') {
          *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(lVar3 + 0x230);
        }
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142c8cc60 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  UHoudiniLandscapePtr::UHoudiniLandscapePtr();
  *param_1 = &PTR_FUN_145847158;
  return param_1;
}



// FUNCTION 142c8cc90 FUN_142c8cc90 body=113 status=ok
// SIG undefined FUN_142c8cc90(void)

undefined8 * FUN_142c8cc90(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UAnimNotifyState::UAnimNotifyState();
  *param_1 = &PTR_FUN_145846928;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 3;
  FName::FName(local_res8,L"Partner",1);
  param_1[7] = local_res8[0];
  FName::FName(local_res8,L"FullBody",1);
  param_1[8] = local_res8[0];
  return param_1;
}



// FUNCTION 142c8cd10 FUN_142c8cd10 body=74 status=ok
// SIG undefined FUN_142c8cd10(void)

undefined8 * FUN_142c8cd10(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"StretchBonesState",1);
  FUN_142c62b70(param_1,local_res8);
  *param_1 = &PTR_FUN_145846c00;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142c8cd60 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_145845658;
  return param_1;
}



// FUNCTION 142c8cd90 FUN_142c8cd90 body=51 status=ok
// SIG undefined FUN_142c8cd90(void)

undefined8 * FUN_142c8cd90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *param_1 = &PTR_FUN_145845908;
  return param_1;
}



// FUNCTION 142c8cdd0 FUN_142c8cdd0 body=51 status=ok
// SIG undefined FUN_142c8cdd0(void)

undefined8 * FUN_142c8cdd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *param_1 = &PTR_FUN_145845bb8;
  return param_1;
}



// FUNCTION 142c8ce10 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_145845e68;
  return param_1;
}



// FUNCTION 142c8ce40 FUN_142c8ce40 body=55 status=ok
// SIG undefined FUN_142c8ce40(void)

undefined8 * FUN_142c8ce40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *(undefined4 *)(param_1 + 7) = 0x43fa0000;
  *param_1 = &PTR_FUN_145846118;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 142c8ce80 FUN_142c8ce80 body=90 status=ok
// SIG undefined FUN_142c8ce80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8ce80(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_1458463c8;
  uVar2 = uRam0000000146b2ff7c;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = uRam0000000146b2ff74 & uRam0000000146b2ff84;
  uVar3 = uRam0000000146b2ff78 & uRam0000000146b2ff88;
  uVar4 = uRam0000000146b2ff7c & uRam0000000146b2ff8c;
  *(uint *)(param_1 + 0xc) = _DAT_146b2ff70 & _DAT_146b2ff80;
  *(uint *)((longlong)param_1 + 100) = uVar2;
  *(uint *)(param_1 + 0xd) = uVar3;
  *(uint *)((longlong)param_1 + 0x6c) = uVar4;
  return param_1;
}



// FUNCTION 142c8cee0 FUN_142c8cee0 body=74 status=ok
// SIG undefined FUN_142c8cee0(void)

undefined8 * FUN_142c8cee0(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FName::FName(local_res8,L"StretchBones",1);
  FUN_142c62bf0(param_1,local_res8);
  *param_1 = &PTR_FUN_145846678;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 142c8cf30 UHoudiniLandscapePtr body=118 status=ok
// SIG undefined UHoudiniLandscapePtr(void)

undefined8 * UHoudiniLandscapePtr::UHoudiniLandscapePtr(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145846ed8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if ((undefined2 *)param_1[8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 142c8cfb0 FUN_142c8cfb0 body=152 status=ok
// SIG undefined FUN_142c8cfb0(void)

undefined8 * FUN_142c8cfb0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145847940;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 142c8d050 FUN_142c8d050 body=33 status=ok
// SIG undefined FUN_142c8d050(void)

undefined8 * FUN_142c8d050(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145847660;
  return param_1;
}



// FUNCTION 142c8d080 FUN_142c8d080 body=33 status=ok
// SIG undefined FUN_142c8d080(void)

undefined8 * FUN_142c8d080(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145847c30;
  return param_1;
}



// FUNCTION 142c8d0b0 FUN_142c8d0b0 body=103 status=ok
// SIG undefined FUN_142c8d0b0(void)

undefined8 * FUN_142c8d0b0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR__scalar_deleting_destructor__145843748;
  *(undefined2 *)(param_1 + 0x5a) = 0x301;
  param_1[5] = &PTR_LAB_145843c90;
  *(undefined2 *)((longlong)param_1 + 0x2d3) = 0x301;
  *(undefined1 *)((longlong)param_1 + 0x2d6) = 1;
  FAlphaBlend::FAlphaBlend(param_1 + 0x5b,0x3e4ccccd);
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(undefined1 *)(param_1 + 0x62) = 1;
  return param_1;
}



// FUNCTION 142c8d120 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  UHoudiniLandscapePtr::UHoudiniLandscapePtr();
  *param_1 = &PTR_FUN_145847f10;
  return param_1;
}



// FUNCTION 142c8d150 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  UHoudiniLandscapePtr::UHoudiniLandscapePtr();
  *param_1 = &PTR_FUN_145848190;
  return param_1;
}



// FUNCTION 142c8d180 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  UHoudiniLandscapePtr::UHoudiniLandscapePtr();
  *param_1 = &PTR_FUN_145848410;
  return param_1;
}



// FUNCTION 142c8d1b0 UAnimSequenceLevelSequenceLink body=55 status=ok
// SIG undefined UAnimSequenceLevelSequenceLink(void)

undefined8 * UAnimSequenceLevelSequenceLink::UAnimSequenceLevelSequenceLink(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145844fb8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 142c8d1f0 UAssetImportData body=33 status=ok
// SIG undefined UAssetImportData(void)

undefined8 * UAssetImportData::UAssetImportData(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458473d8;
  return param_1;
}



// FUNCTION 142c8d220 FUN_142c8d220 body=78 status=ok
// SIG undefined FUN_142c8d220(void)

undefined8 * FUN_142c8d220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145848720;
  param_1[5] = &PTR_LAB_14427f698;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  return param_1;
}



// FUNCTION 142c8d270 FUN_142c8d270 body=70 status=ok
// SIG undefined FUN_142c8d270(void)

undefined8 * FUN_142c8d270(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  param_1[7] = 0x1010101;
  *param_1 = &PTR__scalar_deleting_destructor__145843e00;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 142c8d2c0 FUN_142c8d2c0 body=1459 status=ok
// SIG undefined FUN_142c8d2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8d2c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  undefined8 local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_1423a01c0();
  *param_1 = &PTR_FUN_145844430;
  param_1[5] = &PTR_LAB_145844ee8;
  param_1[0x5a] = &PTR_LAB_145844f18;
  param_1[0x146] = &PTR_LAB_145844f70;
  param_1[0x1e4] = &PTR_LAB_145844fa0;
  *(undefined4 *)(param_1 + 0x1e5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf2c) = 0;
  *(undefined1 *)(param_1 + 0x1e6) = 1;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ea) = 0x100;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  *(undefined4 *)(param_1 + 0x1ed) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xf6c) = 1;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  *(undefined4 *)(param_1 + 499) = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 2;
  *(undefined1 *)(param_1 + 0x20a) = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  *(undefined4 *)(param_1 + 0x213) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x109c) = 0;
  param_1[0x215] = 0;
  *(undefined4 *)(param_1 + 0x216) = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  *(undefined1 *)(param_1 + 0x256) = 0;
  *(undefined4 *)(param_1 + 599) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12bc) = 0x3dcccccd;
  FName::FName(&local_res8,&DAT_14525c540,1);
  plVar1 = param_1 + 0x25b;
  param_1[600] = local_res8;
  *(undefined4 *)(param_1 + 0x259) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x12cc) = 0;
  *(undefined4 *)(param_1 + 0x25a) = 0xffffffff;
  *plVar1 = 0;
  param_1[0x25c] = 0;
  *(undefined4 *)(param_1 + 0x25d) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x12ec) = 0x3e99999a;
  plVar6 = (longlong *)FName::FName(&local_res8,L"L_Foot_to_Root",1);
  FName::FName(local_res18,L"L_Foot",1);
  local_38 = (code *)*plVar6;
  iVar4 = *(int *)(param_1 + 0x25c);
  uStack_30 = 0xffffffff;
  uStack_2c = uStack_2c & 0xffffff00;
  local_28 = 0xffffffff;
  uStack_20 = 0xbf800000;
  *(int *)(param_1 + 0x25c) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x12e4) < iVar4 + 1) {
    FUN_142937a60(plVar1,iVar4);
  }
  lVar7 = *plVar1;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + lVar7);
  *puVar2 = (undefined4)local_38;
  puVar2[1] = local_38._4_4_;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar7);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  plVar6 = (longlong *)FName::FName(&local_res8,L"R_Foot_to_Root",1);
  FName::FName(local_res18,L"R_Foot",1);
  local_38 = (code *)*plVar6;
  iVar4 = *(int *)(param_1 + 0x25c);
  uStack_30 = 0xffffffff;
  uStack_2c = uStack_2c & 0xffffff00;
  local_28 = 0xffffffff;
  uStack_20 = 0xbf800000;
  *(int *)(param_1 + 0x25c) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x12e4) < iVar4 + 1) {
    FUN_142937a60(plVar1,iVar4);
  }
  lVar7 = *plVar1;
  plVar1 = param_1 + 0x26f;
  plVar6 = (longlong *)((longlong)iVar4 * 0x20 + lVar7);
  *plVar6 = (longlong)local_38;
  plVar6[1] = CONCAT44(uStack_2c,uStack_30);
  puVar3 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar7);
  *puVar3 = CONCAT44(uStack_24,local_28);
  puVar3[1] = CONCAT44(uStack_1c,uStack_20);
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  *(undefined1 *)(param_1 + 0x261) = 1;
  *(undefined4 *)((longlong)param_1 + 0x130c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x262) = 0x41200000;
  uVar8 = uRam0000000146b2ff7c;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1324) = 0;
  *(undefined4 *)(param_1 + 0x265) = 0;
  *(uint *)((longlong)param_1 + 0x132c) = uVar8;
  uVar8 = uRam0000000146b2ff74 & uRam0000000146b2ff84;
  uVar9 = uRam0000000146b2ff78 & uRam0000000146b2ff88;
  uVar10 = uRam0000000146b2ff7c & uRam0000000146b2ff8c;
  *(uint *)(param_1 + 0x268) = _DAT_146b2ff70 & _DAT_146b2ff80;
  *(uint *)((longlong)param_1 + 0x1344) = uVar8;
  *(uint *)(param_1 + 0x269) = uVar9;
  *(uint *)((longlong)param_1 + 0x134c) = uVar10;
  param_1[0x26a] = 0;
  *(byte *)((longlong)param_1 + 0x135a) = *(byte *)((longlong)param_1 + 0x135a) & 0xe0;
  *(undefined2 *)(param_1 + 0x26b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x135c) = 1;
  param_1[0x26c] = 1;
  param_1[0x26d] = 0;
  *(undefined4 *)(param_1 + 0x26e) = 4;
  *(undefined4 *)((longlong)param_1 + 0x1374) = 6;
  *plVar1 = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x272] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  *(undefined4 *)(param_1 + 0x277) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13bc) = 0;
  param_1[0x279] = 0;
  *(undefined4 *)(param_1 + 0x27a) = 0;
  param_1[0x27b] = 0;
  iVar4 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x1384) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = 0x3c23d70a;
  iVar4 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x1384) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = 0x3a83126f;
  iVar4 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x1384) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = 0x3a03126f;
  iVar4 = *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x270) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x1384) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  param_1[0x27e] = 0;
  uStack_30 = 0;
  *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = 0x3983126f;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  plVar1 = param_1 + 0x11c;
  param_1[0x281] = 0;
  local_38 = FUN_142c95e20;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_30;
    *(uint *)((longlong)plVar6 + 0x1c) = uStack_2c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_143fcff08;
  }
  if (&local_38 != plVar1) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x11d) != 0) &&
         (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar1 != 0) {
          lVar7 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar7;
        }
        *(undefined4 *)(param_1 + 0x11d) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar1);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar7 = FMemory::Realloc(plVar6,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  *(undefined2 *)(param_1 + 0x184) = 0x604;
  *(undefined1 *)(param_1 + 0x1f5) = 1;
  if (*(char *)(param_1 + 0x20a) != '\0') {
    *(undefined1 *)(param_1 + 0x20a) = 0;
  }
  param_1[0x27d] = 0;
  return param_1;
}



// FUNCTION 142c8d880 FUN_142c8d880 body=97 status=ok
// SIG undefined FUN_142c8d880(void)

void * FUN_142c8d880(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 8) == 0) {
      _guard_xfg_dispatch_icall_nop(param_1,param_2,8);
    }
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_2 + 8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 142c8d8f0 FUN_142c8d8f0 body=199 status=ok
// SIG undefined FUN_142c8d8f0(void)

undefined8 FUN_142c8d8f0(float *param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*param_2 == *param_1) && (cVar1 = FUN_142de3fe0(param_1 + 2), cVar1 != '\0')) &&
     (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8))) {
    if (*(longlong *)(param_1 + 10) != 0) {
      lVar2 = UAnimNotifyState::GetPrivateStaticClass();
      lVar5 = *(longlong *)(param_1 + 10);
      for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar2) goto LAB_142c8d960;
      }
    }
    lVar5 = 0;
LAB_142c8d960:
    if (*(longlong *)(param_2 + 10) != 0) {
      lVar3 = UAnimNotifyState::GetPrivateStaticClass();
      lVar4 = *(longlong *)(param_2 + 10);
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_142c8d988;
      }
    }
    lVar4 = 0;
LAB_142c8d988:
    if ((lVar5 == lVar4) && (param_2[0xc] == param_1[0xc])) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c8d9c0 FUN_142c8d9c0 body=19 status=ok
// SIG undefined FUN_142c8d9c0(void)

bool FUN_142c8d9c0(void)

{
  char cVar1;
  
  cVar1 = FUN_142c8d8f0();
  return cVar1 == '\0';
}



// FUNCTION 142c8d9e0 FUN_142c8d9e0 body=340 status=ok
// SIG undefined FUN_142c8d9e0(void)

void FUN_142c8d9e0(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  cVar2 = FUN_1407c3030();
  if (cVar2 == '\0') {
    plVar5 = (longlong *)param_1[1];
  }
  else {
    plVar5 = (longlong *)*param_1;
  }
  iVar6 = (int)plVar5[1];
  if (1 < iVar6) {
    iVar3 = (3 - (uint)(iVar6 != 0)) + iVar6;
    *(int *)(plVar5 + 1) = iVar3;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5,iVar6);
    }
    puVar1 = (undefined4 *)(*plVar5 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    *puVar1 = 0x20002c;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  if (param_2 == 0) {
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res10 = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(&local_res10,&local_28);
  }
  _Src = local_28;
  iVar6 = 0;
  if ((int)local_20 != 0) {
    iVar6 = (int)local_20 + -1;
  }
  if (iVar6 != 0) {
    iVar3 = (int)plVar5[1];
    iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar6;
    *(int *)(plVar5 + 1) = iVar4;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5,iVar3);
    }
    _Dst = (void *)(*plVar5 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142c8db40 FUN_142c8db40 body=667 status=ok
// SIG undefined FUN_142c8db40(void)

void FUN_142c8db40(LARGE_INTEGER param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  LARGE_INTEGER LVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  LARGE_INTEGER local_res8;
  longlong *local_res10;
  longlong *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar15 = (longlong *)0x0;
  lVar8 = *(longlong *)param_1;
  local_68 = (longlong *)0x0;
  iVar17 = *(int *)(lVar8 + 0xfe0);
  lVar13 = *(longlong *)(lVar8 + 0xfd8);
  local_res8 = param_1;
  local_60 = iVar17;
  if (iVar17 != 0) {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_68,iVar17,0);
    plVar15 = local_68;
    puVar9 = (undefined1 *)(lVar13 + 0x10);
    lVar13 = (longlong)local_68 - lVar13;
    do {
      *(undefined8 *)(puVar9 + lVar13 + -0x10) = 0;
      iVar3 = *(int *)(puVar9 + -8);
      _Src = *(void **)(puVar9 + -0x10);
      *(int *)(puVar9 + lVar13 + -8) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(puVar9 + lVar13 + -4) = 0;
      }
      else {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar9 + lVar13 + -0x10,iVar3,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar9 + lVar13 + -0x10),_Src,(longlong)iVar3 << 5)
        ;
      }
      puVar9[lVar13] = *puVar9;
      puVar9 = puVar9 + 0x18;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    lVar8 = *(longlong *)local_res8;
  }
  iVar17 = local_60;
  LVar12 = local_res8;
  uVar6 = FUN_1422743b0(*(undefined8 *)(lVar8 + 0xa48));
  lVar8 = *(longlong *)(*(longlong *)LVar12 + 0xfc8);
  plVar14 = (longlong *)(lVar8 + 0x170);
  *(undefined4 *)(lVar8 + 0x178) = 0;
  if (*(int *)(lVar8 + 0x17c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar14,0);
  }
  plVar7 = plVar15 + (longlong)iVar17 * 3;
  plVar16 = plVar15;
  local_res10 = plVar7;
  if (plVar15 != plVar7) {
    do {
      puVar10 = (undefined4 *)*plVar16;
      lVar13 = plVar16[2];
      puVar11 = puVar10 + (longlong)(int)plVar16[1] * 8;
      LVar12 = local_res8;
      plVar15 = local_68;
      for (; local_res8 = LVar12, local_68 = plVar15, puVar10 != puVar11; puVar10 = puVar10 + 8) {
        local_48 = puVar10[4];
        uStack_44 = puVar10[5];
        uStack_3c = puVar10[6];
        local_58 = *puVar10;
        uStack_54 = puVar10[1];
        uStack_50 = puVar10[2];
        uStack_4c = puVar10[3];
        uVar5 = (uint)uStack_40 >> 8;
        uStack_40 = CONCAT31((int3)uVar5,(char)lVar13);
        FUN_1422f3ff0(&local_58,uVar6,1);
        if (((char)uStack_4c == '\0') && (local_48 != -1)) {
          iVar3 = *(int *)(lVar8 + 0x178);
          *(int *)(lVar8 + 0x178) = iVar3 + 1;
          if (*(int *)(lVar8 + 0x17c) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(plVar14,iVar3);
          }
          lVar4 = *plVar14;
          puVar1 = (undefined4 *)((longlong)iVar3 * 0x20 + lVar4);
          *puVar1 = local_58;
          puVar1[1] = uStack_54;
          puVar1[2] = uStack_50;
          puVar1[3] = uStack_4c;
          puVar2 = (undefined8 *)((longlong)iVar3 * 0x20 + 0x10 + lVar4);
          *puVar2 = CONCAT44(uStack_44,local_48);
          puVar2[1] = CONCAT44(uStack_3c,uStack_40);
        }
        plVar7 = local_res10;
        LVar12 = local_res8;
        plVar15 = local_68;
      }
      plVar16 = plVar16 + 3;
    } while (plVar16 != plVar7);
  }
  local_res8.QuadPart = local_res8.QuadPart & 0xffffffffffffff00;
  AlgoImpl::
  IntroSortInternal<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,FIdentityFunctor,TDereferenceWrapper<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TLess<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem>_>_>
            (*plVar14,(longlong)*(int *)(lVar8 + 0x178),0,&local_res8);
  plVar14 = plVar15;
  for (; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 3;
  }
  if (plVar15 != (longlong *)0x0) {
    FMemory::Free(plVar15);
  }
  QueryPerformanceCounter(&local_res8);
  *(double *)(*(longlong *)LVar12 + 0xfd0) =
       ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
  return;
}



// FUNCTION 142c8de20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAnimInstanceProxyFactory::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14083e560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6d0);
  }
  return param_1;
}



// FUNCTION 142c8de60 FUN_142c8de60 body=140 status=ok
// SIG undefined FUN_142c8de60(void)

undefined8 * FUN_142c8de60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 142c8def0 FUN_142c8def0 body=122 status=ok
// SIG undefined FUN_142c8def0(void)

undefined8 * FUN_142c8def0(undefined8 *param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 0x32) != '\0') {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 142c8df70 FUN_142c8df70 body=89 status=ok
// SIG undefined FUN_142c8df70(void)

undefined8 * FUN_142c8df70(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 142c8dfd0 FUN_142c8dfd0 body=89 status=ok
// SIG undefined FUN_142c8dfd0(void)

undefined8 * FUN_142c8dfd0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 142c8e030 FUN_142c8e030 body=102 status=ok
// SIG undefined FUN_142c8e030(void)

longlong FUN_142c8e030(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142c8e0a0 FUN_142c8e0a0 body=145 status=ok
// SIG undefined FUN_142c8e0a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8e0a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      _DAT_146b30d34 = _DAT_146b30d34 + -1;
      *param_1 = DAT_146b30d28;
      DAT_146b30d28 = param_1;
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142c8e140 FUN_142c8e140 body=145 status=ok
// SIG undefined FUN_142c8e140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142c8e140(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      _DAT_146b30d44 = _DAT_146b30d44 + -1;
      *param_1 = DAT_146b30d38;
      DAT_146b30d38 = param_1;
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142c8e1e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFileIoStore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142c8e220 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FCustomizationBackpackData::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FMovieSceneSegment,FDefaultAllocator>::~TArray<FMovieSceneSegment,FDefaultAllocator>
            (param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142c8e270 FUN_142c8e270 body=52 status=ok
// SIG undefined FUN_142c8e270(void)

undefined8 FUN_142c8e270(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f6250();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1410);
  }
  return param_1;
}



// FUNCTION 142c8e2b0 FUN_142c8e2b0 body=125 status=ok
// SIG undefined FUN_142c8e2b0(void)

undefined8 * FUN_142c8e2b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145844080;
  if (param_1 == DAT_146b2ff20) {
    DAT_146b2ff20 = (undefined8 *)0x0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 5);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142c8e330 FUN_142c8e330 body=134 status=ok
// SIG undefined FUN_142c8e330(void)

void FUN_142c8e330(longlong *param_1)

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
  if (param_1[0x72] == 0) {
    lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar3;
  }
  return;
}



// FUNCTION 142c8e3c0 FUN_142c8e3c0 body=101 status=ok
// SIG undefined FUN_142c8e3c0(void)

void FUN_142c8e3c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=();
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(param_1 + 0x18,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = param_1 + 0x18;
    }
    puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 142c8e430 FUN_142c8e430 body=60 status=ok
// SIG undefined FUN_142c8e430(void)

void FUN_142c8e430(longlong param_1,float param_2)

{
  float fVar1;
  
  param_2 = param_2 + *(float *)(param_1 + 0x300);
  fVar1 = *(float *)(param_1 + 0x2ec);
  *(float *)(param_1 + 0x300) = param_2;
  if ((0.0 < fVar1) && (fVar1 < param_2)) {
    *(float *)(param_1 + 0x300) = fVar1;
  }
  *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) & 0xfffffffb;
  *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | 2;
  return;
}



// FUNCTION 142c8e470 FUN_142c8e470 body=73 status=ok
// SIG undefined FUN_142c8e470(void)

void FUN_142c8e470(longlong param_1,float *param_2)

{
  float fVar1;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  fVar1 = *(float *)(param_1 + 0xffc);
  local_20 = fVar1 * param_2[2];
  local_28 = CONCAT44(fVar1 * param_2[1],fVar1 * *param_2);
  local_10 = local_20;
  FUN_1426f9db0(fVar1 * *param_2,&local_28);
  return;
}



// FUNCTION 142c8e4c0 FUN_142c8e4c0 body=97 status=ok
// SIG undefined FUN_142c8e4c0(void)

void FUN_142c8e4c0(longlong param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  local_38 = *param_3;
  local_30 = *(undefined4 *)(param_3 + 1);
  fVar1 = *(float *)(param_1 + 0xffc);
  local_20 = fVar1 * param_2[2];
  local_28 = CONCAT44(fVar1 * param_2[1],fVar1 * *param_2);
  local_10 = local_20;
  UPrimitiveComponent::AddImpulseAtLocation(local_28,&local_28,&local_38);
  return;
}



// FUNCTION 142c8e530 FUN_142c8e530 body=85 status=ok
// SIG undefined FUN_142c8e530(void)

void FUN_142c8e530(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  fVar1 = *(float *)(param_1 + 0xffc);
  local_20 = fVar1 * param_2[2];
  fVar2 = fVar1 * *param_2;
  local_28 = CONCAT44(fVar1 * param_2[1],fVar2);
  local_10 = local_20;
  FUN_1427d3440(fVar2,&local_28,fVar2,param_4,param_5);
  return;
}



// FUNCTION 142c8e590 FUN_142c8e590 body=386 status=ok
// SIG undefined FUN_142c8e590(void)

undefined8 *
FUN_142c8e590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,char param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
  if (param_6 == '\0') {
    pplVar5 = (longlong **)FUN_142c97a60(local_18);
    plVar6 = local_10;
    if (&local_38 != pplVar5) {
      local_38 = *pplVar5;
      *pplVar5 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_30,pplVar5 + 1);
      plVar6 = local_10;
    }
  }
  else {
    if (param_6 != '\x01') {
      plVar6 = (longlong *)0x0;
      goto LAB_142c8e6af;
    }
    pplVar5 = (longlong **)FUN_142c97890(local_28);
    plVar6 = local_20;
    if (&local_38 != pplVar5) {
      local_38 = *pplVar5;
      *pplVar5 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_30,pplVar5 + 1);
      plVar6 = local_20;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  }
  plVar6 = local_38;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))(local_38,param_3,param_4,param_5,param_7);
  }
LAB_142c8e6af:
  plVar1 = plStack_30;
  *param_1 = plVar6;
  param_1[1] = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plStack_30 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142c8e720 FUN_142c8e720 body=647 status=ok
// SIG undefined FUN_142c8e720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142c8e720(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *_Src;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar3 = (**(code **)(*param_1 + 0x280))();
  if ((cVar3 == '\0') || (FUN_142caaab0(param_1,&local_60,param_3), local_48 == '\0')) {
    FUN_14246da50(param_2,0);
    return param_2;
  }
  if ((*(byte *)(local_60 + 0x38) & 0x20) != 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1,local_50);
  }
  lVar4 = UStructProperty::GetPrivateStaticClass();
  lVar1 = local_58;
  if ((*(int *)(*(longlong *)(local_60 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_60 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (local_58 != 0)) {
    lVar4 = FUN_14294e020();
    if (*(longlong *)(local_60 + 0x70) == lVar4) {
      local_88 = param_6;
      FUN_142470da0(local_58,param_2,param_4,param_5);
      return param_2;
    }
    lVar4 = FUN_14294e080();
    if (*(longlong *)(local_60 + 0x70) == lVar4) {
      local_88 = param_6;
      FUN_142470e10(local_58,param_2,param_4,param_5);
      return param_2;
    }
  }
  else {
    lVar4 = FUN_142c8a890(&local_60);
    if (lVar4 != 0) {
      FUN_142cb2580(local_78,param_3);
      if (*(longlong *)(lVar4 + 0x30) != 0) {
        _Src = (undefined1 *)FUN_142ca0820(*(longlong *)(lVar4 + 0x30),&local_60,lVar4,param_3);
        if (local_78 != _Src) {
          if (*(longlong *)(_Src + 8) == 0) {
            _guard_xfg_dispatch_icall_nop(local_78,_Src,8);
          }
          if (local_70 != 0) {
            FMemory::Free();
          }
          local_70 = *(longlong *)(_Src + 8);
          *(undefined8 *)(_Src + 8) = 0;
          local_68 = *(undefined4 *)(_Src + 0x10);
          local_64 = *(undefined4 *)(_Src + 0x14);
          *(undefined8 *)(_Src + 0x10) = 0;
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong **)(lVar4 + 0x38) == (longlong *)0x0) {
        FUN_14246da50(param_2,0);
      }
      else {
        lVar1 = **(longlong **)(lVar4 + 0x38);
        uVar5 = FUN_142cc1650(local_78);
        local_80 = param_6;
        local_88 = CONCAT44(local_88._4_4_,param_5);
        (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(lVar4 + 0x38),param_2,uVar5,param_4);
      }
      if (local_70 == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
  }
  local_88 = CONCAT44(local_88._4_4_,param_5);
  FUN_142c8eb00(param_2,local_60,lVar1,param_4);
  return param_2;
}



// FUNCTION 142c8e9b0 FUN_142c8e9b0 body=28 status=ok
// SIG undefined FUN_142c8e9b0(void)

undefined8 FUN_142c8e9b0(undefined8 param_1,undefined8 param_2)

{
  FUN_14246da50(param_2,0);
  return param_2;
}



// FUNCTION 142c8e9d0 FUN_142c8e9d0 body=170 status=ok
// SIG undefined FUN_142c8e9d0(void)

void FUN_142c8e9d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  FWeakObjectPtr::operator=(&local_28);
  local_10 = param_3[4];
  iVar2 = *(int *)(param_1 + 0x58);
  local_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(int *)(param_1 + 0x5c) < iVar4) {
    FUN_142ca9f70(param_1 + 0x30);
  }
  lVar6 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar6 = param_1 + 0x30;
  }
  lVar5 = (longlong)iVar2 * 0x1c;
  *(undefined4 *)(lVar6 + lVar5) = local_28;
  *(undefined4 *)(lVar6 + 4 + lVar5) = local_24;
  puVar1 = (undefined4 *)(lVar6 + 8 + lVar5);
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  puVar1[3] = uStack_14;
  *(undefined4 *)(lVar6 + 0x18 + lVar5) = local_10;
  cVar3 = FUN_1407c3030(param_3);
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



// FUNCTION 142c8ea80 FUN_142c8ea80 body=128 status=ok
// SIG undefined FUN_142c8ea80(void)

longlong *
FUN_142c8ea80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 *param_6)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  local_18 = param_3;
  FUN_142c8e590(param_5,param_2,&local_18,param_4,param_5,0,local_res8);
  if (*param_1 != 0) {
    *param_6 = *(int *)(*param_1 + 0x20) < 1;
    return param_1;
  }
  *param_6 = 1;
  return param_1;
}



// FUNCTION 142c8eb00 FUN_142c8eb00 body=1043 status=ok
// SIG undefined FUN_142c8eb00(void)

undefined8
FUN_142c8eb00(undefined8 param_1,longlong *param_2,float *param_3,byte param_4,float param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  float fVar8;
  
  if (param_2 == (longlong *)0x0) {
LAB_142c8eeeb:
    uVar6 = 0;
    goto LAB_142c8eeed;
  }
  lVar5 = UFloatProperty::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    lVar5 = UIntProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      lVar5 = UInt16Property::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) {
        lVar5 = UByteProperty::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          lVar5 = UBoolProperty::GetPrivateStaticClass();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            lVar5 = UEnumProperty::GetPrivateStaticClass();
            if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_142c8eeeb;
            lVar5 = (**(code **)(*(longlong *)param_2[0xe] + 0x3a8))
                              ((longlong *)param_2[0xe],param_3);
            fVar8 = (float)lVar5;
            if (param_4 == 0) {
LAB_142c8eeb7:
              fVar8 = fVar8 * param_5;
            }
            else if (param_4 < 3) {
              fVar8 = fVar8 + param_5;
            }
            else {
              if (param_4 == 3) goto LAB_142c8eeb7;
              if (param_4 == 4) {
                fVar8 = param_5;
              }
            }
            cVar4 = UEnum::IsValidEnumValue(param_2[0xf],(longlong)(int)fVar8);
            if (cVar4 != '\0') {
              (**(code **)(*(longlong *)param_2[0xe] + 0x388))
                        ((longlong *)param_2[0xe],param_3,(longlong)(int)fVar8);
            }
            uVar6 = 1;
            goto LAB_142c8eeed;
          }
          uVar7 = (ulonglong)*(byte *)((longlong)param_2 + 0x71);
          bVar1 = *(byte *)((longlong)param_2 + 0x73);
          bVar2 = *(byte *)(uVar7 + (longlong)param_3);
          fVar8 = (float)((bVar2 & bVar1) != 0);
          if (param_4 == 0) {
LAB_142c8ee04:
            fVar8 = fVar8 * param_5;
          }
          else if (param_4 < 3) {
            fVar8 = fVar8 + param_5;
          }
          else {
            if (param_4 == 3) goto LAB_142c8ee04;
            if (param_4 == 4) {
              fVar8 = param_5;
            }
          }
          if (fVar8 == 0.0) {
            *(byte *)(uVar7 + (longlong)param_3) = ~bVar1 & bVar2;
            uVar6 = 1;
          }
          else {
            *(byte *)(uVar7 + (longlong)param_3) =
                 ~bVar1 & bVar2 | *(byte *)((longlong)param_2 + 0x72);
            uVar6 = 1;
          }
          goto LAB_142c8eeed;
        }
        fVar8 = (float)*(byte *)param_3;
        if (param_4 == 0) {
LAB_142c8ed53:
          fVar8 = fVar8 * param_5;
        }
        else if (param_4 < 3) {
          fVar8 = fVar8 + param_5;
        }
        else {
          if (param_4 == 3) goto LAB_142c8ed53;
          if (param_4 == 4) {
            fVar8 = param_5;
          }
        }
        cVar4 = (**(code **)(*param_2 + 0x378))(param_2);
        if (cVar4 == '\0') {
          uVar6 = 1;
          *(char *)param_3 = (char)(int)fVar8;
        }
        else {
          uVar6 = 1;
          *(char *)param_3 = (char)(int)fVar8;
        }
        goto LAB_142c8eeed;
      }
      fVar8 = (float)(int)*(short *)param_3;
      if (param_4 == 0) {
LAB_142c8ecb8:
        fVar8 = fVar8 * param_5;
      }
      else if (param_4 < 3) {
        fVar8 = fVar8 + param_5;
      }
      else {
        if (param_4 == 3) goto LAB_142c8ecb8;
        if (param_4 == 4) {
          fVar8 = param_5;
        }
      }
      cVar4 = (**(code **)(*param_2 + 0x378))(param_2);
      if (cVar4 == '\0') {
        uVar6 = 1;
        *(short *)param_3 = (short)(int)fVar8;
      }
      else {
        uVar6 = 1;
        *(short *)param_3 = (short)(int)fVar8;
      }
      goto LAB_142c8eeed;
    }
    fVar8 = (float)(int)*param_3;
    if (param_4 == 0) {
LAB_142c8ec1f:
      fVar8 = fVar8 * param_5;
    }
    else if (param_4 < 3) {
      fVar8 = fVar8 + param_5;
    }
    else {
      if (param_4 == 3) goto LAB_142c8ec1f;
      if (param_4 == 4) {
        fVar8 = param_5;
      }
    }
    cVar4 = (**(code **)(*param_2 + 0x378))(param_2);
    if (cVar4 == '\0') {
      uVar6 = 1;
      *param_3 = (float)(int)fVar8;
    }
    else {
      uVar6 = 1;
      *param_3 = (float)(int)fVar8;
    }
    goto LAB_142c8eeed;
  }
  fVar8 = *param_3;
  if (param_4 == 0) {
LAB_142c8eb8e:
    fVar8 = fVar8 * param_5;
  }
  else if (param_4 < 3) {
    fVar8 = fVar8 + param_5;
  }
  else {
    if (param_4 == 3) goto LAB_142c8eb8e;
    if (param_4 == 4) {
      fVar8 = param_5;
    }
  }
  cVar4 = (**(code **)(*param_2 + 0x378))(param_2);
  if (cVar4 != '\0') {
    fVar8 = (float)(int)fVar8;
  }
  *param_3 = fVar8;
  uVar6 = 1;
LAB_142c8eeed:
  FUN_14246da50(param_1,uVar6);
  return param_1;
}



// FUNCTION 142c8ef20 FUN_142c8ef20 body=2575 status=ok
// SIG undefined FUN_142c8ef20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c8ef20(longlong param_1,longlong param_2,undefined8 *param_3,float param_4,float param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
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
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [4];
  undefined1 auStack_1e4 [4];
  undefined8 uStack_1e0;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined8 local_168;
  undefined8 uStack_160;
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
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if ((*(char *)(*(longlong *)(param_2 + 0xa8) + 0x31) != '\0') ||
     (*(char *)(*(longlong *)(param_2 + 0xa8) + 0x30) != '\0')) {
    fVar7 = (float)FAnimLinkableElement::GetTime(param_2,0);
    local_200 = fVar7;
    fVar8 = (float)FAnimNotifyEvent::GetDuration(param_2);
    local_1fc = fVar8 + fVar7;
    FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_128,*(undefined4 *)(param_1 + 0xb0),fVar7);
    fVar19 = *(float *)(param_1 + 0xb4);
    local_118._4_4_ = (float)local_118._4_4_ * fVar19;
    local_118._0_4_ = (float)local_118._0_4_ * fVar19;
    fStack_110 = fStack_110 * fVar19;
    fStack_10c = 0.0;
    FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_f8,fVar7,fVar8 + fVar7);
    fVar19 = *(float *)(param_1 + 0xb4);
    puVar6 = *(undefined8 **)(param_2 + 0xa8);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    fVar7 = *(float *)(param_3 + 2);
    fVar8 = *(float *)((longlong)param_3 + 0x14);
    fVar41 = *(float *)(param_3 + 3);
    local_e8._4_4_ = (float)local_e8._4_4_ * fVar19;
    local_e8._0_4_ = (float)local_e8._0_4_ * fVar19;
    fStack_e0 = fStack_e0 * fVar19;
    unique0x10000108 = 0;
    fVar19 = DAT_1468b5d94;
    fVar11 = DAT_1468b5d90;
    fVar9 = DAT_1468b5d98;
    if (*(char *)((longlong)puVar6 + 0x31) != '\0') {
      fVar9 = (float)FAnimNotifyEvent::GetDuration(param_2);
      puVar6 = *(undefined8 **)(param_2 + 0xa8);
      fVar9 = fVar9 / param_4;
      fVar19 = fVar8 * fVar9;
      fVar11 = fVar7 * fVar9;
      fVar9 = fVar41 * fVar9;
    }
    if (*(char *)(puVar6 + 6) == '\0') {
      local_168 = _DAT_1464aa810;
      uStack_160 = _DAT_1464aa818;
    }
    else {
      fVar7 = (float)FAnimNotifyEvent::GetDuration(param_2);
      fVar7 = fVar7 / param_5;
      local_218 = uVar1;
      uStack_210 = uVar2;
      pfVar5 = (float *)FQuat::Rotator(&local_218,&local_168);
      local_1b0 = fVar7 * pfVar5[2];
      local_1b4 = fVar7 * pfVar5[1];
      local_1b8 = fVar7 * *pfVar5;
      puVar6 = (undefined8 *)FRotator::Quaternion(&local_1b8,&local_218);
      local_168 = *puVar6;
      uStack_160 = puVar6[1];
    }
    fVar30 = fRam0000000146b2ff78;
    fVar28 = fRam0000000146b2ff74;
    fVar26 = _DAT_146b2ff70;
    auVar3._4_4_ = fStack_104;
    auVar3._0_4_ = local_108;
    auVar3._8_4_ = fStack_100;
    auVar3._12_4_ = fStack_fc;
    auVar12 = *(undefined1 (*) [16])(param_1 + 0xf0);
    fVar7 = auVar12._0_4_;
    fVar8 = auVar12._4_4_;
    fVar41 = auVar12._8_4_;
    fVar10 = auVar12._12_4_;
    fVar15 = *(float *)(param_1 + 0xd0);
    fVar24 = *(float *)(param_1 + 0xd4);
    fVar17 = *(float *)(param_1 + 0xd8);
    fVar18 = *(float *)(param_1 + 0xdc);
    auVar12 = minps(auVar3,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146b2ffd4);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146b2ffd0);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146b2ffd8);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146b2ffdc);
    iVar4 = movmskps((int)puVar6,auVar13);
    if (iVar4 == 0) {
      fVar38 = fVar7 * (float)local_118._0_4_;
      fVar39 = fVar8 * (float)local_118._4_4_;
      fVar20 = fVar41 * fStack_110;
      fVar21 = fVar10 * fStack_10c;
      local_158 = fVar15 * fStack_11c * _DAT_146b2ffb0 + fVar18 * local_128 +
                  fVar24 * fStack_120 * _DAT_146b2ffa0 + fVar17 * fStack_124 * _DAT_146b2ff90;
      fStack_154 = fVar15 * fStack_120 * fRam0000000146b2ffb4 + fVar18 * fStack_124 +
                   fVar24 * fStack_11c * fRam0000000146b2ffa4 +
                   fVar17 * local_128 * fRam0000000146b2ff94;
      fStack_150 = fVar15 * fStack_124 * fRam0000000146b2ffb8 + fVar18 * fStack_120 +
                   fVar24 * local_128 * fRam0000000146b2ffa8 +
                   fVar17 * fStack_11c * fRam0000000146b2ff98;
      fStack_14c = fVar15 * local_128 * fRam0000000146b2ffbc + fVar18 * fStack_11c +
                   fVar24 * fStack_124 * fRam0000000146b2ffac +
                   fVar17 * fStack_120 * fRam0000000146b2ff9c;
      fVar26 = fVar20 * fVar24 - fVar39 * fVar17;
      fVar28 = fVar38 * fVar17 - fVar20 * fVar15;
      fVar30 = fVar39 * fVar15 - fVar38 * fVar24;
      fVar31 = fVar21 * fVar18 - fVar21 * fVar18;
      fVar26 = fVar26 + fVar26;
      fVar28 = fVar28 + fVar28;
      fVar30 = fVar30 + fVar30;
      fVar31 = fVar31 + fVar31;
      local_148 = (fVar30 * fVar24 - fVar28 * fVar17) + fVar26 * fVar18 + fVar38 +
                  *(float *)(param_1 + 0xe0);
      fStack_144 = (fVar26 * fVar17 - fVar30 * fVar15) + fVar28 * fVar18 + fVar39 +
                   *(float *)(param_1 + 0xe4);
      fStack_140 = (fVar28 * fVar15 - fVar26 * fVar24) + fVar30 * fVar18 + fVar20 +
                   *(float *)(param_1 + 0xe8);
      fStack_13c = (fVar31 * fVar18 - fVar31 * fVar18) + fVar31 * fVar18 + fVar21 +
                   *(float *)(param_1 + 0xec);
    }
    else {
      fVar31 = *(float *)(param_1 + 0xe0);
      fVar38 = *(float *)(param_1 + 0xe4);
      fVar39 = *(float *)(param_1 + 0xe8);
      fVar20 = fVar24 + fVar24;
      fVar22 = fVar17 + fVar17;
      fVar23 = (fVar15 + fVar15) * fVar15;
      fVar21 = (fVar15 + fVar15) * fVar18;
      fVar40 = (fVar22 * fVar18 + fVar20 * fVar15) * fVar7;
      fVar42 = (fVar21 + fVar22 * fVar24) * fVar8;
      fVar43 = (fVar20 * fVar18 + fVar22 * fVar15) * fVar41;
      fVar25 = fVar8 * (fVar20 * fVar15 - fVar22 * fVar18);
      fVar27 = fVar41 * (fVar22 * fVar24 - fVar21);
      fVar29 = fVar7 * (fVar22 * fVar15 - fVar20 * fVar18);
      fVar15 = (float)((uint)((_DAT_146b2ff70 - (fVar22 * fVar17 + fVar20 * fVar24)) * fVar7) &
                      _DAT_146b2ff80);
      fVar17 = (float)((uint)((fRam0000000146b2ff74 - (fVar22 * fVar17 + fVar23)) * fVar8) &
                      uRam0000000146b2ff84);
      fVar21 = (float)((uint)((fRam0000000146b2ff78 - (fVar20 * fVar24 + fVar23)) * fVar41) &
                      uRam0000000146b2ff88);
      fVar22 = (float)((uint)((fRam0000000146b2ff7c - (fVar23 + fVar23)) * fVar10) &
                      uRam0000000146b2ff8c);
      fVar18 = fStack_124 + fStack_124;
      fVar20 = fStack_120 + fStack_120;
      fVar23 = (local_128 + local_128) * local_128;
      fVar24 = fStack_11c * (local_128 + local_128);
      fVar35 = (fStack_11c * fVar20 + local_128 * fVar18) * local_108;
      fVar36 = (fVar24 + fStack_124 * fVar20) * fStack_104;
      fVar37 = (fStack_11c * fVar18 + local_128 * fVar20) * fStack_100;
      fVar32 = fStack_104 * (local_128 * fVar18 - fStack_11c * fVar20);
      fVar33 = fStack_100 * (fStack_124 * fVar20 - fVar24);
      fVar34 = local_108 * (local_128 * fVar20 - fStack_11c * fVar18);
      fVar24 = (float)((uint)((_DAT_146b2ff70 - (fVar20 * fStack_120 + fVar18 * fStack_124)) *
                             local_108) & _DAT_146b2ff80);
      fVar20 = (float)((uint)((fRam0000000146b2ff74 - (fVar20 * fStack_120 + fVar23)) * fStack_104)
                      & uRam0000000146b2ff84);
      fVar18 = (float)((uint)((fRam0000000146b2ff78 - (fVar18 * fStack_124 + fVar23)) * fStack_100)
                      & uRam0000000146b2ff88);
      fVar23 = (float)((uint)((fRam0000000146b2ff7c - (fVar23 + fVar23)) * fStack_fc) &
                      uRam0000000146b2ff8c);
      local_1f8._0_4_ = fVar35 * fVar25 + fVar24 * fVar15 + fVar34 * fVar43 + fVar23 * fVar31;
      local_1f8._4_4_ = fVar35 * fVar17 + fVar24 * fVar40 + fVar34 * fVar27 + fVar23 * fVar38;
      uStack_1f0._0_4_ = fVar35 * fVar42 + fVar24 * fVar29 + fVar34 * fVar21 + fVar23 * fVar39;
      uStack_1f0._4_4_ =
           fVar35 * fVar22 + fVar24 * fVar22 + fVar34 * fVar22 + fVar23 * fRam0000000146b2ff7c;
      auStack_1e4 = (undefined1  [4])
                    (fVar20 * fVar17 + fVar32 * fVar40 + fVar36 * fVar27 + fVar23 * fVar38);
      local_1e8 = (undefined1  [4])
                  (fVar20 * fVar25 + fVar32 * fVar15 + fVar36 * fVar43 + fVar23 * fVar31);
      uStack_1e0._0_4_ = fVar20 * fVar42 + fVar32 * fVar29 + fVar36 * fVar21 + fVar23 * fVar39;
      uStack_1e0._4_4_ =
           fVar20 * fVar22 + fVar32 * fVar22 + fVar36 * fVar22 + fVar23 * fRam0000000146b2ff7c;
      local_1d8._4_4_ = fVar33 * fVar17 + fVar37 * fVar40 + fVar18 * fVar27 + fVar23 * fVar38;
      local_1d8._0_4_ = fVar33 * fVar25 + fVar37 * fVar15 + fVar18 * fVar43 + fVar23 * fVar31;
      fStack_1d0 = fVar33 * fVar42 + fVar37 * fVar29 + fVar18 * fVar21 + fVar23 * fVar39;
      fStack_1cc = fVar33 * fVar22 + fVar37 * fVar22 + fVar18 * fVar22 +
                   fVar23 * fRam0000000146b2ff7c;
      local_1c8 = (float)local_118._4_4_ * fVar25 + (float)local_118._0_4_ * fVar15 +
                  fStack_110 * fVar43 + fRam0000000146b2ff7c * fVar31;
      fStack_1c4 = (float)local_118._4_4_ * fVar17 + (float)local_118._0_4_ * fVar40 +
                   fStack_110 * fVar27 + fRam0000000146b2ff7c * fVar38;
      fStack_1c0 = (float)local_118._4_4_ * fVar42 + (float)local_118._0_4_ * fVar29 +
                   fStack_110 * fVar21 + fRam0000000146b2ff7c * fVar39;
      fStack_1bc = (float)local_118._4_4_ * fVar22 + (float)local_118._0_4_ * fVar22 +
                   fStack_110 * fVar22 + fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      FMatrix::RemoveScaling(&local_1f8);
      fVar15 = (float)(-(uint)(_DAT_146b2ffd0 <= fVar7 * local_108) &
                       (_DAT_146b2ffc0 ^ (uint)fVar26) ^ _DAT_146b2ffc0);
      fVar24 = (float)(-(uint)(fRam0000000146b2ffd4 <= fVar8 * fStack_104) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar28) ^ uRam0000000146b2ffc4);
      fVar18 = (float)(-(uint)(fRam0000000146b2ffd8 <= fVar41 * fStack_100) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar30) ^ uRam0000000146b2ffc8);
      uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(float)uStack_1f0 * fVar15);
      local_1f8 = CONCAT44(local_1f8._4_4_ * fVar15,(float)local_1f8 * fVar15);
      fVar15 = (float)auStack_1e4 * fVar24;
      fVar17 = (float)local_1e8 * fVar24;
      uStack_1e0._0_4_ = (float)uStack_1e0 * fVar24;
      auStack_1e4 = (undefined1  [4])fVar15;
      fVar24 = (float)local_1d8._0_4_ * fVar18;
      fVar15 = (float)local_1d8._4_4_ * fVar18;
      fStack_1d0 = fStack_1d0 * fVar18;
      local_1e8 = (undefined1  [4])fVar17;
      local_1d8._4_4_ = fVar15;
      local_1d8._0_4_ = fVar24;
      FQuat::FQuat(&local_218,&local_1f8);
      local_208 = 0x322bcc77;
      auVar16._0_4_ = (float)local_218 * (float)local_218 + (float)uStack_210 * (float)uStack_210;
      auVar16._4_4_ = local_218._4_4_ * local_218._4_4_ + uStack_210._4_4_ * uStack_210._4_4_;
      auVar16._8_4_ = (float)uStack_210 * (float)uStack_210 + (float)local_218 * (float)local_218;
      auVar16._12_4_ = uStack_210._4_4_ * uStack_210._4_4_ + local_218._4_4_ * local_218._4_4_;
      fVar26 = auVar16._4_4_ + auVar16._0_4_;
      fVar28 = auVar16._8_4_ + auVar16._4_4_;
      fVar30 = auVar16._12_4_ + auVar16._8_4_;
      fVar31 = auVar16._0_4_ + auVar16._12_4_;
      auVar12._4_4_ = fVar28;
      auVar12._0_4_ = fVar26;
      auVar12._8_4_ = fVar30;
      auVar12._12_4_ = fVar31;
      auVar12 = rsqrtps(auVar16,auVar12);
      fVar15 = auVar12._0_4_;
      fVar24 = auVar12._4_4_;
      fVar17 = auVar12._8_4_;
      fVar18 = auVar12._12_4_;
      fVar15 = (_DAT_146b2ff60 - fVar15 * fVar15 * fVar26 * _DAT_146b2ff60) * fVar15 + fVar15;
      fVar24 = (fRam0000000146b2ff64 - fVar24 * fVar24 * fVar28 * fRam0000000146b2ff64) * fVar24 +
               fVar24;
      fVar17 = (fRam0000000146b2ff68 - fVar17 * fVar17 * fVar30 * fRam0000000146b2ff68) * fVar17 +
               fVar17;
      fVar18 = (fRam0000000146b2ff6c - fVar18 * fVar18 * fVar31 * fRam0000000146b2ff6c) * fVar18 +
               fVar18;
      fStack_13c = 0.0;
      local_158 = (float)(((uint)(((_DAT_146b2ff60 - fVar15 * fVar15 * fVar26 * _DAT_146b2ff60) *
                                   fVar15 + fVar15) * (float)local_218) ^ _DAT_146b2ff50) &
                          -(uint)(1e-08 <= fVar26) ^ _DAT_146b2ff50);
      fStack_154 = (float)(((uint)(((fRam0000000146b2ff64 -
                                    fVar24 * fVar24 * fVar28 * fRam0000000146b2ff64) * fVar24 +
                                   fVar24) * local_218._4_4_) ^ uRam0000000146b2ff54) &
                           -(uint)(1e-08 <= fVar28) ^ uRam0000000146b2ff54);
      fStack_150 = (float)(((uint)(((fRam0000000146b2ff68 -
                                    fVar17 * fVar17 * fVar30 * fRam0000000146b2ff68) * fVar17 +
                                   fVar17) * (float)uStack_210) ^ uRam0000000146b2ff58) &
                           -(uint)(1e-08 <= fVar30) ^ uRam0000000146b2ff58);
      fStack_14c = (float)(((uint)(((fRam0000000146b2ff6c -
                                    fVar18 * fVar18 * fVar31 * fRam0000000146b2ff6c) * fVar18 +
                                   fVar18) * uStack_210._4_4_) ^ uRam0000000146b2ff5c) &
                           -(uint)(1e-08 <= fVar31) ^ uRam0000000146b2ff5c);
      local_148 = local_1c8;
      fStack_144 = fStack_1c4;
      fStack_140 = fStack_1c0;
    }
    fStack_12c = fVar10 * fStack_fc;
    fStack_130 = fVar41 * fStack_100;
    fStack_134 = fVar8 * fStack_104;
    local_138 = fVar7 * local_108;
    local_218 = CONCAT44(fStack_154,local_158);
    uStack_210 = CONCAT44(fStack_14c,fStack_150);
    fVar8 = fStack_e0 * fStack_154 - (float)local_e8._4_4_ * fStack_150;
    fVar41 = (float)local_e8._0_4_ * fStack_150 - fStack_e0 * local_158;
    fVar8 = fVar8 + fVar8;
    fVar7 = (float)local_e8._4_4_ * local_158 - (float)local_e8._0_4_ * fStack_154;
    fVar41 = fVar41 + fVar41;
    fVar38 = fVar8 * fStack_150;
    fVar7 = fVar7 + fVar7;
    fVar31 = fVar8 * fStack_154;
    fVar24 = fVar8 * fStack_14c + (float)local_e8._0_4_;
    fVar10 = fVar41 * fStack_150;
    fVar39 = fVar7 * fStack_154;
    fVar11 = fVar11 + local_148;
    fVar20 = fVar41 * local_158;
    fVar15 = fVar7 * local_158;
    fVar17 = fVar41 * fStack_14c + (float)local_e8._4_4_;
    fVar19 = fVar19 + fStack_144;
    fVar30 = fVar7 * fStack_14c + fStack_e0;
    fVar9 = fVar9 + fStack_140;
    FQuat::Rotator(&local_218,&local_1a8);
    local_218 = local_168;
    uStack_210 = uStack_160;
    FQuat::Rotator(&local_218,&local_198);
    local_218 = local_f8;
    uStack_210 = uStack_f0;
    FQuat::Rotator(&local_218,&local_188);
    local_188 = local_188 + local_1a8 + local_198;
    local_184 = local_184 + local_1a4 + local_194;
    local_180 = local_180 + local_1a0 + local_190;
    fVar7 = (float)DAT_146b2ff40;
    fVar8 = DAT_146b2ff40._4_4_;
    fVar41 = DAT_146b2ff40._8_4_;
    auVar14._4_4_ = local_184;
    auVar14._0_4_ = local_188;
    auVar14._8_4_ = local_180;
    auVar14._12_4_ = 0;
    auVar12 = divps(auVar14,_DAT_146b2ff40);
    local_188 = local_188 - (float)(int)auVar12._0_4_ * fVar7;
    local_184 = local_184 - (float)(int)auVar12._4_4_ * fVar8;
    local_180 = local_180 - (float)(int)auVar12._8_4_ * fVar41;
    fVar18 = (float)(((uint)(local_188 + fVar7) ^ (uint)local_188) & -(uint)(0.0 <= local_188) ^
                    (uint)(local_188 + fVar7));
    fVar26 = (float)(((uint)(local_184 + fVar8) ^ (uint)local_184) & -(uint)(0.0 <= local_184) ^
                    (uint)(local_184 + fVar8));
    fVar28 = (float)(((uint)(local_180 + fVar41) ^ (uint)local_180) & -(uint)(0.0 <= local_180) ^
                    (uint)(local_180 + fVar41));
    local_178 = ((uint)(fVar18 - fVar7) ^ (uint)fVar18) & -(uint)(_DAT_146b2ff30 < fVar18) ^
                (uint)fVar18;
    local_174 = ((uint)(fVar26 - fVar8) ^ (uint)fVar26) & -(uint)(fRam0000000146b2ff34 < fVar26) ^
                (uint)fVar26;
    local_170 = ((uint)(fVar28 - fVar41) ^ (uint)fVar28) & -(uint)(fRam0000000146b2ff38 < fVar28) ^
                (uint)fVar28;
    FRotator::Quaternion(&local_178,&local_218);
    local_1f8 = local_218;
    uStack_1f0 = uStack_210;
    auStack_1e4 = (undefined1  [4])((fVar38 - fVar15) + fVar17 + fVar19);
    local_1e8 = (undefined1  [4])((fVar39 - fVar10) + fVar24 + fVar11);
    uStack_1e0._0_4_ = (fVar20 - fVar31) + fVar30 + fVar9;
    uStack_1e0._4_4_ = 0;
    local_1d8._4_4_ = DAT_1464aa788._4_4_;
    local_1d8._0_4_ = (undefined4)DAT_1464aa788;
    fStack_1d0 = (float)DAT_1464aa790;
    fStack_1cc = 0.0;
    FUN_142c8f930(param_1);
    FUN_142c8f930(param_1);
  }
  return;
}



// FUNCTION 142c8f930 FUN_142c8f930 body=2042 status=ok
// SIG undefined FUN_142c8f930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c8f930(longlong param_1,float param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  undefined1 auStack_198 [32];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
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
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(float *)(param_1 + 0xb0) < param_2) {
    uVar3 = FUN_142291ab0(*(undefined8 *)(param_1 + 8),&local_108);
    fVar22 = fRam0000000146b2ff78;
    fVar39 = fRam0000000146b2ff74;
    fVar21 = _DAT_146b2ff70;
    fVar26 = *(float *)(param_1 + 0xb4);
    auVar12 = *(undefined1 (*) [16])(param_1 + 0xf0);
    fVar29 = auVar12._0_4_;
    fVar30 = auVar12._4_4_;
    fVar28 = auVar12._8_4_;
    fVar25 = *(float *)(param_1 + 0xd0);
    fVar15 = *(float *)(param_1 + 0xd4);
    fVar14 = *(float *)(param_1 + 0xd8);
    fVar19 = *(float *)(param_1 + 0xdc);
    fVar23 = (float)local_f8._0_4_ * fVar26;
    fVar20 = (float)local_f8._4_4_ * fVar26;
    fVar26 = fVar26 * fStack_f0;
    auVar8._4_4_ = fStack_e4;
    auVar8._0_4_ = local_e8;
    auVar8._8_4_ = fStack_e0;
    auVar8._12_4_ = fStack_dc;
    auVar8 = minps(auVar8,auVar12);
    auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam0000000146b2ffd4);
    auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_146b2ffd0);
    auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam0000000146b2ffd8);
    auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam0000000146b2ffdc);
    iVar4 = movmskps(uVar3,auVar9);
    local_f8._4_4_ = fVar20;
    local_f8._0_4_ = fVar23;
    fStack_f0 = fVar26;
    unique0x10000266 = 0;
    if (iVar4 == 0) {
      fStack_174 = *(float *)(param_1 + 0xe0);
      fStack_170 = *(float *)(param_1 + 0xe4);
      fStack_16c = *(float *)(param_1 + 0xe8);
      fVar23 = fVar23 * fVar29;
      fVar20 = fVar20 * fVar30;
      fVar26 = fVar26 * fVar28;
      fVar38 = fStack_fc * fVar25 * _DAT_146b2ffb0 + local_108 * fVar19 +
               fStack_100 * fVar15 * _DAT_146b2ffa0 + fStack_104 * fVar14 * _DAT_146b2ff90;
      fVar28 = fStack_100 * fVar25 * fRam0000000146b2ffb4 + fStack_104 * fVar19 +
               fStack_fc * fVar15 * fRam0000000146b2ffa4 + local_108 * fVar14 * fRam0000000146b2ff94
      ;
      fVar39 = fStack_104 * fVar25 * fRam0000000146b2ffb8 + fStack_100 * fVar19 +
               local_108 * fVar15 * fRam0000000146b2ffa8 + fStack_fc * fVar14 * fRam0000000146b2ff98
      ;
      fVar40 = local_108 * fVar25 * fRam0000000146b2ffbc + fStack_fc * fVar19 +
               fStack_104 * fVar15 * fRam0000000146b2ffac +
               fStack_100 * fVar14 * fRam0000000146b2ff9c;
      fVar21 = fVar26 * fVar15 - fVar20 * fVar14;
      fVar22 = fVar23 * fVar14 - fVar26 * fVar25;
      fVar16 = fVar20 * fVar25 - fVar23 * fVar15;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar16 = fVar16 + fVar16;
      fVar29 = (fVar16 * fVar15 - fVar22 * fVar14) + fVar21 * fVar19 + fVar23 + fStack_174;
      fVar30 = (fVar21 * fVar14 - fVar16 * fVar25) + fVar22 * fVar19 + fVar20 + fStack_170;
      fVar26 = (fVar22 * fVar25 - fVar21 * fVar15) + fVar16 * fVar19 + fVar26 + fStack_16c;
    }
    else {
      fVar16 = *(float *)(param_1 + 0xe0);
      fVar38 = *(float *)(param_1 + 0xe4);
      fVar40 = *(float *)(param_1 + 0xe8);
      fVar13 = fVar15 + fVar15;
      fVar17 = fVar14 + fVar14;
      fVar24 = fVar25 * (fVar25 + fVar25);
      fVar32 = fVar19 * (fVar25 + fVar25);
      fVar41 = (fVar19 * fVar17 + fVar25 * fVar13) * fVar29;
      fVar42 = (fVar32 + fVar15 * fVar17) * fVar30;
      fVar43 = (fVar19 * fVar13 + fVar25 * fVar17) * fVar28;
      fVar10 = (float)((uint)((_DAT_146b2ff70 - (fVar14 * fVar17 + fVar15 * fVar13)) * fVar29) &
                      _DAT_146b2ff80);
      fVar14 = (float)((uint)((fRam0000000146b2ff74 - (fVar14 * fVar17 + fVar24)) * fVar30) &
                      uRam0000000146b2ff84);
      fVar18 = (float)((uint)((fRam0000000146b2ff78 - (fVar15 * fVar13 + fVar24)) * fVar28) &
                      uRam0000000146b2ff88);
      fVar24 = (float)((uint)((fRam0000000146b2ff7c - (fVar24 + fVar24)) * auVar12._12_4_) &
                      uRam0000000146b2ff8c);
      fVar27 = fVar30 * (fVar25 * fVar13 - fVar19 * fVar17);
      fVar32 = fVar28 * (fVar15 * fVar17 - fVar32);
      fVar17 = fVar29 * (fVar25 * fVar17 - fVar19 * fVar13);
      fVar15 = fStack_104 + fStack_104;
      fVar19 = fStack_100 + fStack_100;
      fVar13 = local_108 * (local_108 + local_108);
      fVar25 = fStack_fc * (local_108 + local_108);
      fVar35 = (fStack_fc * fVar19 + fVar15 * local_108) * local_e8;
      fVar36 = (fVar25 + fVar19 * fStack_104) * fStack_e4;
      fVar37 = (fStack_fc * fVar15 + fVar19 * local_108) * fStack_e0;
      fVar31 = fStack_e4 * (fVar15 * local_108 - fStack_fc * fVar19);
      fVar33 = fStack_e0 * (fVar19 * fStack_104 - fVar25);
      fVar34 = local_e8 * (fVar19 * local_108 - fStack_fc * fVar15);
      fVar25 = (float)((uint)((_DAT_146b2ff70 - (fStack_100 * fVar19 + fStack_104 * fVar15)) *
                             local_e8) & _DAT_146b2ff80);
      fVar19 = (float)((uint)((fRam0000000146b2ff74 - (fStack_100 * fVar19 + fVar13)) * fStack_e4) &
                      uRam0000000146b2ff84);
      fVar15 = (float)((uint)((fRam0000000146b2ff78 - (fStack_104 * fVar15 + fVar13)) * fStack_e0) &
                      uRam0000000146b2ff88);
      fVar13 = (float)((uint)((fRam0000000146b2ff7c - (fVar13 + fVar13)) * fStack_dc) &
                      uRam0000000146b2ff8c);
      local_178 = fVar35 * fVar27 + fVar25 * fVar10 + fVar34 * fVar43 + fVar13 * fVar16;
      fStack_174 = fVar35 * fVar14 + fVar25 * fVar41 + fVar34 * fVar32 + fVar13 * fVar38;
      fStack_170 = fVar35 * fVar42 + fVar25 * fVar17 + fVar34 * fVar18 + fVar13 * fVar40;
      fStack_16c = fVar35 * fVar24 + fVar25 * fVar24 + fVar34 * fVar24 +
                   fVar13 * fRam0000000146b2ff7c;
      local_168 = fVar19 * fVar27 + fVar31 * fVar10 + fVar36 * fVar43 + fVar13 * fVar16;
      fStack_164 = fVar19 * fVar14 + fVar31 * fVar41 + fVar36 * fVar32 + fVar13 * fVar38;
      fStack_160 = fVar19 * fVar42 + fVar31 * fVar17 + fVar36 * fVar18 + fVar13 * fVar40;
      fStack_15c = fVar19 * fVar24 + fVar31 * fVar24 + fVar36 * fVar24 +
                   fVar13 * fRam0000000146b2ff7c;
      local_158 = fVar33 * fVar27 + fVar37 * fVar10 + fVar15 * fVar43 + fVar13 * fVar16;
      fStack_154 = fVar33 * fVar14 + fVar37 * fVar41 + fVar15 * fVar32 + fVar13 * fVar38;
      fStack_150 = fVar33 * fVar42 + fVar37 * fVar17 + fVar15 * fVar18 + fVar13 * fVar40;
      fStack_14c = fVar33 * fVar24 + fVar37 * fVar24 + fVar15 * fVar24 +
                   fVar13 * fRam0000000146b2ff7c;
      local_148 = fVar20 * fVar27 + fVar23 * fVar10 + fVar26 * fVar43 +
                  fRam0000000146b2ff7c * fVar16;
      fStack_144 = fVar20 * fVar14 + fVar23 * fVar41 + fVar26 * fVar32 +
                   fRam0000000146b2ff7c * fVar38;
      fStack_140 = fVar20 * fVar42 + fVar23 * fVar17 + fVar26 * fVar18 +
                   fRam0000000146b2ff7c * fVar40;
      fStack_13c = fVar20 * fVar24 + fVar23 * fVar24 + fVar26 * fVar24 +
                   fRam0000000146b2ff7c * fRam0000000146b2ff7c;
      FMatrix::RemoveScaling(&local_178);
      fVar26 = (float)(-(uint)(_DAT_146b2ffd0 <= local_e8 * fVar29) &
                       (_DAT_146b2ffc0 ^ (uint)fVar21) ^ _DAT_146b2ffc0);
      fVar29 = (float)(-(uint)(fRam0000000146b2ffd4 <= fStack_e4 * fVar30) &
                       (uRam0000000146b2ffc4 ^ (uint)fVar39) ^ uRam0000000146b2ffc4);
      fVar30 = (float)(-(uint)(fRam0000000146b2ffd8 <= fStack_e0 * fVar28) &
                       (uRam0000000146b2ffc8 ^ (uint)fVar22) ^ uRam0000000146b2ffc8);
      local_178 = local_178 * fVar26;
      fStack_174 = fStack_174 * fVar26;
      fStack_170 = fStack_170 * fVar26;
      fStack_164 = fStack_164 * fVar29;
      fStack_160 = fStack_160 * fVar29;
      local_168 = local_168 * fVar29;
      fStack_154 = fStack_154 * fVar30;
      fStack_150 = fStack_150 * fVar30;
      local_158 = local_158 * fVar30;
      FQuat::FQuat(&local_128,&local_178);
      fStack_174 = *(float *)(param_1 + 0xe0);
      fStack_170 = *(float *)(param_1 + 0xe4);
      fStack_16c = *(float *)(param_1 + 0xe8);
      local_138 = 0x322bcc77;
      auVar11._0_4_ = (float)local_128 * (float)local_128 + (float)uStack_120 * (float)uStack_120;
      auVar11._4_4_ = local_128._4_4_ * local_128._4_4_ + uStack_120._4_4_ * uStack_120._4_4_;
      auVar11._8_4_ = (float)uStack_120 * (float)uStack_120 + (float)local_128 * (float)local_128;
      auVar11._12_4_ = uStack_120._4_4_ * uStack_120._4_4_ + local_128._4_4_ * local_128._4_4_;
      fVar28 = auVar11._4_4_ + auVar11._0_4_;
      fVar15 = auVar11._8_4_ + auVar11._4_4_;
      fVar14 = auVar11._12_4_ + auVar11._8_4_;
      fVar19 = auVar11._0_4_ + auVar11._12_4_;
      auVar12._4_4_ = fVar15;
      auVar12._0_4_ = fVar28;
      auVar12._8_4_ = fVar14;
      auVar12._12_4_ = fVar19;
      auVar12 = rsqrtps(auVar11,auVar12);
      fVar26 = auVar12._0_4_;
      fVar29 = auVar12._4_4_;
      fVar30 = auVar12._8_4_;
      fVar25 = auVar12._12_4_;
      fVar26 = (_DAT_146b2ff60 - fVar26 * fVar26 * fVar28 * _DAT_146b2ff60) * fVar26 + fVar26;
      fVar29 = (fRam0000000146b2ff64 - fVar29 * fVar29 * fVar15 * fRam0000000146b2ff64) * fVar29 +
               fVar29;
      fVar30 = (fRam0000000146b2ff68 - fVar30 * fVar30 * fVar14 * fRam0000000146b2ff68) * fVar30 +
               fVar30;
      fVar25 = (fRam0000000146b2ff6c - fVar25 * fVar25 * fVar19 * fRam0000000146b2ff6c) * fVar25 +
               fVar25;
      fVar38 = (float)(((uint)(((_DAT_146b2ff60 - fVar26 * fVar26 * fVar28 * _DAT_146b2ff60) *
                                fVar26 + fVar26) * (float)local_128) ^ _DAT_146b2ff50) &
                       -(uint)(1e-08 <= fVar28) ^ _DAT_146b2ff50);
      fVar28 = (float)(((uint)(((fRam0000000146b2ff64 -
                                fVar29 * fVar29 * fVar15 * fRam0000000146b2ff64) * fVar29 + fVar29)
                              * local_128._4_4_) ^ uRam0000000146b2ff54) & -(uint)(1e-08 <= fVar15)
                      ^ uRam0000000146b2ff54);
      fVar39 = (float)(((uint)(((fRam0000000146b2ff68 -
                                fVar30 * fVar30 * fVar14 * fRam0000000146b2ff68) * fVar30 + fVar30)
                              * (float)uStack_120) ^ uRam0000000146b2ff58) &
                       -(uint)(1e-08 <= fVar14) ^ uRam0000000146b2ff58);
      fVar40 = (float)(((uint)(((fRam0000000146b2ff6c -
                                fVar25 * fVar25 * fVar19 * fRam0000000146b2ff6c) * fVar25 + fVar25)
                              * uStack_120._4_4_) ^ uRam0000000146b2ff5c) & -(uint)(1e-08 <= fVar19)
                      ^ uRam0000000146b2ff5c);
      fVar29 = local_148;
      fVar30 = fStack_144;
      fVar26 = fStack_140;
    }
    fVar25 = param_3[4];
    fVar15 = param_3[5];
    fVar14 = param_3[6];
    fVar38 = -fVar38;
    fVar19 = *param_3;
    fVar21 = param_3[1];
    fVar22 = param_3[2];
    fVar20 = param_3[3];
    fVar28 = -fVar28;
    fVar39 = -fVar39;
    fVar18 = fVar20 * fVar38 * _DAT_146b2ffb0;
    fVar24 = fVar22 * fVar38 * fRam0000000146b2ffb4;
    fVar27 = fVar21 * fVar38 * fRam0000000146b2ffb8;
    fVar32 = fVar19 * fVar38 * fRam0000000146b2ffbc;
    local_178 = *(float *)(param_1 + 0xb0);
    fVar23 = fVar22 * fVar28 * _DAT_146b2ffa0;
    fVar16 = fVar20 * fVar28 * fRam0000000146b2ffa4;
    fVar38 = fVar19 * fVar28 * fRam0000000146b2ffa8;
    fVar28 = fVar21 * fVar28 * fRam0000000146b2ffac;
    local_128 = *(undefined8 *)(param_1 + 0xd0);
    uStack_120 = *(undefined8 *)(param_1 + 0xd8);
    fVar10 = fVar21 * fVar39 * _DAT_146b2ff90;
    fVar13 = fVar19 * fVar39 * fRam0000000146b2ff94;
    fVar17 = fVar20 * fVar39 * fRam0000000146b2ff98;
    fVar39 = fVar22 * fVar39 * fRam0000000146b2ff9c;
    FQuat::Rotator(&local_128,&local_168);
    fStack_15c = fVar25 - fVar29;
    local_158 = fVar15 - fVar30;
    fStack_154 = fVar14 - fVar26;
    local_118 = fVar18 + fVar40 * fVar19 + fVar23 + fVar10;
    fStack_114 = fVar24 + fVar40 * fVar21 + fVar16 + fVar13;
    fStack_110 = fVar27 + fVar40 * fVar22 + fVar38 + fVar17;
    fStack_10c = fVar32 + fVar40 * fVar20 + fVar28 + fVar39;
    FQuat::Rotator(&local_118);
    iVar4 = *(int *)(param_1 + 0x2a8);
    iVar5 = iVar4 + 1;
    *(int *)(param_1 + 0x2a8) = iVar5;
    if (*(int *)(param_1 + 0x2ac) < iVar5) {
      FUN_142caa0b0(param_1 + 0x100);
    }
    lVar7 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar7 = param_1 + 0x100;
    }
    lVar6 = (longlong)iVar4 * 0x34;
    *(undefined8 *)(lVar7 + lVar6) = CONCAT44(fStack_174,local_178);
    ((undefined8 *)(lVar7 + lVar6))[1] = CONCAT44(fStack_16c,fStack_170);
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar6);
    *puVar1 = CONCAT44(fStack_164,local_168);
    puVar1[1] = CONCAT44(fStack_15c,fStack_160);
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar6);
    *puVar1 = CONCAT44(fStack_154,local_158);
    puVar1[1] = CONCAT44(fStack_14c,fStack_150);
    *(float *)(lVar7 + 0x30 + lVar6) = local_148;
    *(float *)(param_1 + 0xb0) = param_2;
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    uVar2 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
  }
  return;
}



// FUNCTION 142c90130 FUN_142c90130 body=53 status=ok
// SIG undefined FUN_142c90130(void)

void FUN_142c90130(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_1427d3670(local_18,&local_18,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 142c90170 FUN_142c90170 body=41 status=ok
// SIG undefined FUN_142c90170(void)

void FUN_142c90170(longlong param_1,float param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    param_2 = param_2 * *(float *)(*(longlong *)(param_1 + 8) + 0x94);
  }
  param_2 = param_2 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x20) = param_2;
  *(float *)(param_1 + 0x1c) = param_2 + *(float *)(param_1 + 0x1c);
  return;
}



// FUNCTION 142c901a0 FUN_142c901a0 body=30 status=ok
// SIG undefined FUN_142c901a0(void)

bool FUN_142c901a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_142c8a130(param_1,local_res10);
  return lVar1 != 0;
}



// FUNCTION 142c901c0 FUN_142c901c0 body=30 status=ok
// SIG undefined FUN_142c901c0(void)

bool FUN_142c901c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_142c8a400(param_1,local_res10);
  return lVar1 != 0;
}



// FUNCTION 142c901e0 FUN_142c901e0 body=160 status=ok
// SIG undefined FUN_142c901e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142c901e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar1 = FUN_142caac20(param_1 + 2,&local_48);
    local_68 = FUN_142cc4350(uVar1,0);
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    local_58 = param_6;
    local_60 = param_5;
    FUN_142c8e590(param_2,*param_1,&local_48,(char)param_1[1]);
  }
  return param_2;
}



// FUNCTION 142c90280 FUN_142c90280 body=252 status=ok
// SIG undefined FUN_142c90280(void)

void FUN_142c90280(undefined8 *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x5c0) = *param_1;
    *(undefined4 *)(param_2 + 0x5c8) = *(undefined4 *)(param_1 + 1);
    *(undefined8 *)(param_2 + 0x5d0) = param_1[2];
    *(undefined4 *)(param_2 + 0x5d8) = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)(param_2 + 0x5dc) = *(undefined4 *)((longlong)param_1 + 0x1c);
    *(undefined4 *)(param_2 + 0x5e0) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0x5f0) = *(undefined4 *)((longlong)param_1 + 0x24);
    *(undefined4 *)(param_2 + 0x5e4) = *(undefined4 *)(param_1 + 5);
    *(undefined4 *)(param_2 + 0x5e8) = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(undefined1 *)(param_2 + 0x5f4) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)(param_2 + 0x5f5) = *(undefined1 *)((longlong)param_1 + 0x31);
    *(undefined8 *)(param_2 + 0x140) = param_1[7];
    *(undefined8 *)(param_2 + 0x148) = param_1[8];
    *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_1 + 9);
    *(undefined8 *)(param_2 + 0x154) = *(undefined8 *)((longlong)param_1 + 0x4c);
    *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)((longlong)param_1 + 0x54);
    *(undefined1 *)(param_2 + 0x184) = *(undefined1 *)(param_1 + 0xb);
    *(undefined1 *)(param_2 + 0x185) = *(undefined1 *)((longlong)param_1 + 0x59);
    *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)((longlong)param_1 + 0x5c);
    *(undefined1 *)(param_2 + 0x1a8) = *(undefined1 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 100);
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_2 + 0x1b1) = *(undefined1 *)((longlong)param_1 + 0x69);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)((longlong)param_1 + 0x6c);
    *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(param_1 + 0xe);
  }
  return;
}



// FUNCTION 142c90380 FUN_142c90380 body=356 status=ok
// SIG undefined FUN_142c90380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c90380(longlong *param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((int)param_1[0xb] < 1) {
    *(undefined4 *)(param_1 + 5) = param_4;
    *(undefined1 *)((longlong)param_1 + 0x24) = param_3;
    lVar2 = FWeakObjectPtr::Get(param_1 + 3);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x38) != 0)) {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      FUN_142caa8e0(&local_58,lVar2,&local_78);
      uVar3 = 0;
      puVar4 = &local_58;
      if (local_50 != (undefined8 *)0x0) {
        puVar4 = local_50;
      }
      uVar5 = (longlong)local_48 & 0x1fffffffffffffff;
      if (puVar4 + local_48 < puVar4) {
        uVar5 = uVar3;
      }
      if (uVar5 != 0) {
        do {
          local_90 = local_88;
          uVar1 = *puVar4;
          local_98 = (undefined4)param_1[5];
          (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x2b0))
                    (*(longlong **)(lVar2 + 0x38),&local_78,uVar1,
                     *(undefined1 *)((longlong)param_1 + 0x24));
          FUN_142c8e9d0(param_1,uVar1,&local_78);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar3 != uVar5);
      }
      if (local_50 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  return;
}



// FUNCTION 142c904f0 FUN_142c904f0 body=672 status=ok
// SIG undefined FUN_142c904f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c904f0(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 *local_f0;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d0 [2];
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [24];
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FWeakObjectPtr::operator=(&local_e4,*param_2);
  FWeakObjectPtr::operator=(&local_dc,param_2[1]);
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0xc) = local_e4;
  *(undefined4 *)((longlong)param_1 + 100) = local_e0;
  *(undefined4 *)(param_1 + 0xd) = local_dc;
  *(undefined4 *)((longlong)param_1 + 0x6c) = local_d8;
  if ((int)param_1[0xb] < 1) {
    *(undefined4 *)(param_1 + 5) = param_4;
    *(undefined1 *)((longlong)param_1 + 0x24) = param_3;
    lVar6 = FWeakObjectPtr::Get(param_1 + 3);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x38) != 0)) {
      local_b8 = *(undefined4 *)param_2;
      uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_b0 = *(undefined4 *)(param_2 + 1);
      uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_142caa8e0(&local_80,lVar6,&local_b8);
      puVar7 = &local_80;
      if (local_78 != (undefined8 *)0x0) {
        puVar7 = local_78;
      }
      uVar8 = (longlong)local_70 & 0x1fffffffffffffff;
      if (puVar7 + local_70 < puVar7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        do {
          local_f0 = local_e8;
          uVar5 = *puVar7;
          local_f8 = (undefined4)param_1[5];
          (**(code **)(**(longlong **)(lVar6 + 0x38) + 0x2b0))
                    (*(longlong **)(lVar6 + 0x38),local_98,uVar5,
                     *(undefined1 *)((longlong)param_1 + 0x24));
          FUN_142c8e9d0(param_1,uVar5,local_98);
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 != uVar8);
      }
      if (local_78 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4);
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_a8);
  plVar4 = (longlong *)puVar7[1];
  uVar5 = *puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_d0[0] = DAT_146b3000c + 5;
  local_c0 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_c0 = plVar4;
  }
  local_c8 = uVar5;
  FUN_142ca3900();
  FUN_142ca3800(&DAT_146b30118,local_d0);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_c0 + 8))(local_c0,1);
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
  return;
}



// FUNCTION 142c90790 FUN_142c90790 body=39 status=ok
// SIG undefined FUN_142c90790(void)

void FUN_142c90790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_142cab860(param_1,param_3,param_2,0);
  *(bool *)param_4 = cVar1 == '\0';
  return;
}



// FUNCTION 142c907c0 FUN_142c907c0 body=196 status=ok
// SIG undefined FUN_142c907c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142c907c0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  *param_5 = 1;
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_48 = param_4;
    uVar1 = FUN_142caac20(param_2 + 2,local_38);
    local_78 = FUN_142cc4350(uVar1,0);
    local_68 = local_58;
    local_70 = 0;
    FUN_142c8e590(param_1,*param_2,&local_48,(char)param_2[1]);
  }
  if ((*param_1 != 0) && (0 < *(int *)(*param_1 + 0x20))) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 142c90890 FUN_142c90890 body=566 status=ok
// SIG undefined FUN_142c90890(void)

void FUN_142c90890(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8;
  uint local_res10 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_64;
  undefined4 uStack_5c;
  
  *(longlong *)(param_1 + 0x140) = param_2;
  if (param_2 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(param_2 + 0x58);
  }
  plVar1 = (longlong *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) != iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (plVar2,iVar10);
  }
  lVar8 = *(longlong *)(param_1 + 0x140);
  if (lVar8 != 0) {
    local_res10[0] = 0;
    if (0 < *(int *)(lVar8 + 0x58)) {
      local_res8 = (undefined1)param_1;
      lVar12 = 0;
      do {
        uVar7 = local_res10[0];
        lVar8 = *(longlong *)(lVar8 + 0x50);
        iVar10 = 0;
        if (0 < *(int *)(lVar12 + 0x50 + lVar8)) {
          lVar11 = 0;
          do {
            iVar4 = *(int *)(param_1 + 0x160);
            uStack_64 = uStack_64 & 0xffffff00;
            uVar5 = *(undefined8 *)(lVar11 + *(longlong *)(lVar12 + 0x48 + lVar8));
            *(int *)(param_1 + 0x160) = iVar4 + 1;
            if (*(int *)(param_1 + 0x164) < iVar4 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar1,iVar4);
            }
            lVar6 = *plVar1;
            local_70 = (undefined4)uVar5;
            uStack_6c = (undefined4)((ulonglong)uVar5 >> 0x20);
            lVar9 = (longlong)iVar4 * 0x20;
            puVar3 = (undefined4 *)(lVar6 + lVar9);
            *puVar3 = local_70;
            puVar3[1] = uStack_6c;
            puVar3[2] = 0xffffffff;
            puVar3[3] = uStack_64;
            puVar3 = (undefined4 *)(lVar6 + 0x10 + lVar9);
            *puVar3 = 0xffffffff;
            puVar3[1] = uStack_5c;
            puVar3[2] = uVar7;
            puVar3[3] = iVar10;
            if (param_4 != 0) {
              FUN_1422f3ff0(lVar9 + *plVar1,param_4,0);
            }
            iVar10 = iVar10 + 1;
            lVar11 = lVar11 + 0x30;
          } while (iVar10 < *(int *)(lVar12 + 0x50 + lVar8));
        }
        uVar7 = local_res10[0];
        local_res10[0] = local_res10[0] & 0xffffff00;
        FUN_142c8b400(*plVar1,(longlong)*(int *)(param_1 + 0x160),local_res8,local_res10);
        iVar10 = *(int *)(param_1 + 0x150);
        *(int *)(param_1 + 0x150) = iVar10 + 1;
        if (*(int *)(param_1 + 0x154) < iVar10 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar2,iVar10);
        }
        FAlphaBlend::FAlphaBlend((longlong)iVar10 * 0x38 + *plVar2,0x3e4ccccd);
        lVar8 = *(longlong *)(param_1 + 0x140);
        local_res10[0] = uVar7 + 1;
        lVar12 = lVar12 + 0x58;
      } while ((int)local_res10[0] < *(int *)(lVar8 + 0x58));
    }
    *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(lVar8 + 0x38);
    *(undefined1 *)(param_1 + 0x169) = *(undefined1 *)(lVar8 + 0x39);
    *(undefined1 *)(param_1 + 0x16a) = *(undefined1 *)(lVar8 + 0x3a);
  }
  return;
}



// FUNCTION 142c90ad0 FUN_142c90ad0 body=473 status=ok
// SIG undefined FUN_142c90ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c90ad0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)*param_1;
  plVar3 = plVar9 + (longlong)(int)param_1[1] * 9;
  for (; plVar9 != plVar3; plVar9 = plVar9 + 9) {
    if (*plVar9 == 0) {
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
    }
    else {
      uVar7 = FUN_142caac20(plVar9 + 2,local_68,param_3);
      local_a8 = FUN_142cc4350(uVar7,0);
      switch(local_60) {
      case '\0':
        if (local_60 == '\0') {
          local_60 = -1;
        }
        break;
      case '\x01':
        if (local_60 == '\x01') {
          local_60 = -1;
        }
        break;
      case '\x02':
        if (local_60 == '\x02') {
          local_60 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_60 == '\x03') {
          local_60 = -1;
        }
        break;
      case '\x05':
        if (local_60 == '\x03') {
          local_60 = -1;
        }
      }
      local_78 = *param_4;
      uStack_74 = param_4[1];
      uStack_70 = param_4[2];
      uStack_6c = param_4[3];
      local_98 = param_6;
      local_a0 = param_5;
      FUN_142c8e590(&local_88,*plVar9,&local_78,(char)plVar9[1]);
    }
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
    }
    plVar6 = plStack_80;
    puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_2);
    *puVar8 = local_88;
    puVar8[1] = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  return;
}


