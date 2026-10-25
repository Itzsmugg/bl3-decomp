// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142205470 FUN_142205470 body=1647 status=ok
// SIG undefined FUN_142205470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142205470(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  bool bVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar31;
  longlong local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  longlong local_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  longlong *local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  uint local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [464];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aee374) && (_Init_thread_header(&DAT_146aee374), DAT_146aee374 == -1))
  {
    DAT_146aee358 = _DAT_1468b5d90;
    DAT_146aee360 = DAT_1468b5d98;
    local_2b0 = 0x49800000;
    _DAT_146aee364 = 0x4980000049800000;
    _DAT_146aee36c = 0x49800000;
    _DAT_146aee370 = 0x49800000;
    _Init_thread_footer(&DAT_146aee374);
  }
  plVar27 = (longlong *)param_1[0x74];
  local_290 = 0;
  uVar19 = (longlong)(int)param_1[0x75] & 0x1fffffffffffffff;
  if (plVar27 + (int)param_1[0x75] < plVar27) {
    uVar19 = 0;
  }
  local_2c0 = uVar19;
  if (uVar19 != 0) {
    do {
      uVar25 = local_290;
      uVar23 = 0;
      lVar6 = *plVar27;
      if ((lVar6 != 0) &&
         (local_298 = plVar27,
         local_288 = (**(code **)(*(longlong *)param_1[0x76] + 0x2a8))
                               ((longlong *)param_1[0x76],0,0), uVar19 = local_2c0,
         0 < *(int *)(param_2 + 8))) {
        do {
          if ((param_4 >> (uVar23 & 0x1f) & 1) != 0) {
            iVar14 = FUN_1408bed80(param_5,1);
            lVar24 = (ulonglong)(uint)(iVar14 % 0x59) * 0xb8 +
                     *(longlong *)(*param_5 + (longlong)(iVar14 / 0x59) * 8);
            lVar26 = *(longlong *)(lVar24 + 0x78);
            if (*(longlong *)(lVar24 + 0x78) == 0) {
              lVar26 = lVar24;
            }
            *(longlong *)(lVar26 + 0x10) = lVar6 + 0x148;
            *(uint *)(lVar24 + 0x8c) = *(uint *)(lVar24 + 0x8c) & 0xfffffeff;
            *(longlong *)(lVar24 + 0xa0) = lVar6 + 400;
            *(undefined8 *)(lVar24 + 0xa8) = local_288;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x37c);
            lVar18 = param_1[0x6f];
            uVar15 = (**(code **)(*param_1 + 0x18))(param_1);
            dVar3 = (double)param_1[0x71];
            lVar16 = 0;
            local_278 = _DAT_1464aa7d0;
            uStack_270 = _DAT_1464aa7d8;
            local_268 = _DAT_1464aa7e0;
            uStack_260 = _DAT_1464aa7e8;
            dVar30 = 0.0;
            local_258 = _DAT_1464aa7f0;
            uStack_250 = _DAT_1464aa7f8;
            local_228 = (uint)((char)uVar15 != '\0');
            lVar20 = (longlong)dVar3;
            local_21c = 0;
            local_248 = _DAT_1464aa800;
            uStack_240 = uRam00000001464aa808;
            dVar4 = (double)param_1[0x72];
            local_238 = 0x3f80000000000000;
            uStack_230 = 0x3f8000003f800000;
            dVar10 = dVar3;
            if ((lVar20 != -0x8000000000000000) && (dVar30 = (double)lVar20, dVar30 != dVar3)) {
              auVar8._8_4_ = SUB84(dVar3,0);
              auVar8._0_8_ = dVar3;
              auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar15 = movmskpd(uVar15,auVar8);
              uVar15 = uVar15 & 1;
              dVar10 = (double)(longlong)(lVar20 - (ulonglong)uVar15);
            }
            lVar22 = (longlong)dVar10;
            dVar3 = (dVar3 - (double)lVar22) * 2147483647.0;
            lVar20 = (longlong)dVar3;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar3)) {
              auVar12._8_4_ = SUB84(dVar3,0);
              auVar12._0_8_ = dVar3;
              auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar15 = movmskpd(uVar15,auVar12);
              dVar3 = (double)(longlong)(lVar20 - (ulonglong)(uVar15 & 1));
            }
            lVar21 = (longlong)dVar3;
            lVar20 = lVar16;
            if ((-1 < lVar22) && (lVar20 = 0x7fffffff, lVar22 < 0x7fffffff)) {
              lVar20 = lVar22;
            }
            local_218 = (undefined4)lVar20;
            lVar20 = lVar16;
            if ((-1 < lVar21) && (lVar20 = 0x7fffffff, lVar21 < 0x7fffffff)) {
              lVar20 = lVar21;
            }
            lVar22 = (longlong)dVar4;
            local_214 = (uint)lVar20;
            uVar29 = 0;
            uVar15 = local_214;
            dVar3 = dVar4;
            if ((lVar22 != -0x8000000000000000) &&
               (uVar29 = SUB84((double)lVar22,0), (double)lVar22 != dVar4)) {
              auVar9._8_4_ = SUB84(dVar4,0);
              auVar9._0_8_ = dVar4;
              auVar9._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              uVar15 = movmskpd(local_214,auVar9);
              uVar15 = uVar15 & 1;
              dVar3 = (double)(longlong)(lVar22 - (ulonglong)uVar15);
            }
            lVar22 = (longlong)dVar3;
            dVar3 = (dVar4 - (double)lVar22) * 2147483647.0;
            lVar20 = (longlong)dVar3;
            if ((lVar20 != -0x8000000000000000) && ((double)lVar20 != dVar3)) {
              auVar11._8_4_ = SUB84(dVar3,0);
              auVar11._0_8_ = dVar3;
              auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
              uVar15 = movmskpd(uVar15,auVar11);
              dVar3 = (double)(longlong)(lVar20 - (ulonglong)(uVar15 & 1));
            }
            lVar21 = (longlong)dVar3;
            lVar20 = lVar16;
            if ((-1 < lVar22) && (lVar20 = 0x7fffffff, lVar22 < 0x7fffffff)) {
              lVar20 = lVar22;
            }
            local_210 = (undefined4)lVar20;
            if ((-1 < lVar21) && (lVar16 = 0x7fffffff, lVar21 < 0x7fffffff)) {
              lVar16 = lVar21;
            }
            local_20c = (undefined4)lVar16;
            local_2b0 = DAT_146aee360;
            local_2b8 = DAT_146aee358;
            uVar31 = 1;
            local_224 = (int)lVar18;
            local_220 = uVar2;
            uVar17 = FUN_1408c7250(local_208,param_1 + 0x10,uVar29,dVar30,&DAT_146aee358,1,0,0,0,0,0
                                   ,(byte)(*(uint *)((longlong)param_1 + 0x1c) >> 0x14) & 1,1,
                                   0x3f800000,&local_278);
            (**(code **)(*DAT_146ab6358 + 0x110))
                      (DAT_146ab6358,&local_2a8,uVar17,&DAT_146b09668,CONCAT44(uVar31,2));
            lVar18 = local_2a8;
            local_2c8 = local_2a8;
            if (local_2a8 != 0) {
              LOCK();
              *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
              UNLOCK();
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2a8);
            plVar27 = (longlong *)(lVar26 + 8);
            if (plVar27 != &local_2c8) {
              puVar7 = (undefined8 *)*plVar27;
              *plVar27 = lVar18;
              lVar18 = 0;
              local_2c8 = 0;
              if (puVar7 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar7 + 1);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  if ((*(char *)(puVar7 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar13 = FOutputDevice::CanBeUsedOnAnyThread(), cVar13 == '\0')))) {
                    LOCK();
                    bVar28 = *(int *)((longlong)puVar7 + 0xc) == 0;
                    if (bVar28) {
                      *(int *)((longlong)puVar7 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar28) {
                      uVar15 = FLockFreeLinkPolicy::AllocLockFreeLink();
                      if (uVar15 != 0) {
                        lVar18 = (&DAT_1468a81f8)[uVar15 >> 0xe] +
                                 (ulonglong)(uVar15 & 0x3fff) * 0x18;
                      }
                      *(undefined8 **)(lVar18 + 8) = puVar7;
                      FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                    }
                  }
                  else {
                    (**(code **)*puVar7)(puVar7,1);
                  }
                }
              }
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2c8);
            iVar14 = *(int *)(lVar26 + 0x38);
            iVar5 = *(int *)(lVar6 + 0x188);
            local_2a0 = 0;
            iStack_29c = iVar5 / 3 + (iVar5 >> 0x1f) +
                         (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >>
                              0x1f);
            *(int *)(lVar26 + 0x38) = iVar14 + 1;
            if (*(int *)(lVar26 + 0x3c) < iVar14 + 1) {
              TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
              ::ResizeGrow(lVar26 + 0x28,iVar14);
            }
            lVar18 = *(longlong *)(lVar26 + 0x30);
            if (*(longlong *)(lVar26 + 0x30) == 0) {
              lVar18 = lVar26 + 0x28;
            }
            *(ulonglong *)(lVar18 + (longlong)iVar14 * 8) = CONCAT44(iStack_29c,local_2a0);
            *(undefined4 *)(lVar26 + 0x48) = 0;
            *(int *)(lVar26 + 0x4c) = *(int *)(lVar6 + 0x40) + -1;
            *(uint *)(lVar24 + 0x8c) =
                 (*(byte *)(param_1 + 3) & 1) << 3 | *(uint *)(lVar24 + 0x8c) & 0xffc00ff7;
            FUN_142747330(param_5);
          }
          uVar23 = uVar23 + 1;
          uVar19 = local_2c0;
          uVar25 = local_290;
          plVar27 = local_298;
        } while ((int)uVar23 < *(int *)(param_2 + 8));
      }
      plVar27 = plVar27 + 1;
      local_290 = uVar25 + 1;
    } while (local_290 != uVar19);
  }
  return;
}



// FUNCTION 142205b00 FUN_142205b00 body=86 status=ok
// SIG undefined FUN_142205b00(void)

void FUN_142205b00(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x6f8);
  }
  return;
}



// FUNCTION 142205b60 FUN_142205b60 body=192 status=ok
// SIG undefined FUN_142205b60(void)

undefined8 * FUN_142205b60(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10;
  bVar1 = FUN_142730880(param_1,param_3);
  uVar2 = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff | (uint)bVar1 << 0xb | 0x200;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  uVar2 = ((*(uint *)(param_1 + 0x18) >> 0x15 & 0xff) << 0xd ^ uVar2) & 0x2000 ^ uVar2;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    uVar3 = 0x100000;
  }
  uVar3 = uVar3 | uVar2 & 0xffefffff;
  *(uint *)((longlong)param_2 + 4) = uVar3;
  *(uint *)((longlong)param_2 + 4) =
       ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar3) & 0x1000 ^ uVar3;
  return param_2;
}



// FUNCTION 142205c20 FUN_142205c20 body=422 status=ok
// SIG undefined FUN_142205c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142205c20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  void **local_90;
  longlong local_88;
  void *local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 1);
  local_90 = local_80;
  lVar7 = 0;
  local_80[0] = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = &local_68;
  local_58 = 1;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_a8 = *(int *)(param_2 + 1) << 2;
  local_a0 = 1;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,&local_88,&DAT_146ab6e78,4);
  if (plVar1 != &local_88) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = local_88;
    local_88 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  _guard_xfg_dispatch_icall_nop(local_80[0],(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 2);
  (**(code **)(*DAT_146ab6358 + 0x500))(DAT_146ab6358,&DAT_146ab6e78,*plVar1);
  return;
}



// FUNCTION 142205de0 FUN_142205de0 body=212 status=ok
// SIG undefined FUN_142205de0(void)

void FUN_142205de0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar2 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x718);
  uVar4 = (longlong)*(int *)(param_1 + 0x720) & 0x1fffffffffffffff;
  if (puVar3 + *(int *)(param_1 + 0x720) < puVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      uVar1 = *puVar3;
      FUN_1426a89c0(uVar1,param_1 + 0x210,param_3);
      local_28 = *(undefined4 *)(param_1 + 0x230);
      local_24 = *(undefined4 *)(param_1 + 0x234);
      local_20 = *(undefined4 *)(param_1 + 0x238);
      FUN_1426aef60(uVar1,&local_28,0);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 142205ec0 FUN_142205ec0 body=140 status=ok
// SIG undefined FUN_142205ec0(void)

void FUN_142205ec0(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1 + 8);
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x30))(param_1 + 0x48);
  (**(code **)(*(longlong *)(param_1 + 0x88) + 0x30))();
  for (plVar1 = (longlong *)(param_1 + 200); plVar1 != (longlong *)(param_1 + 0x148);
      plVar1 = plVar1 + 8) {
    (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  (**(code **)(*(longlong *)(param_1 + 0x148) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x000142205f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 400) + 0x30))();
  return;
}



// FUNCTION 142205f50 FUN_142205f50 body=350 status=ok
// SIG undefined FUN_142205f50(void)

void FUN_142205f50(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x730);
  lVar4 = (longlong)param_2;
  iVar3 = (iVar5 - param_2) + -1;
  if (0 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x728) + lVar4 * 8),
               (void *)(*(longlong *)(param_1 + 0x728) + (longlong)(iVar5 - iVar3) * 8),
               (longlong)iVar3 << 3);
    iVar5 = *(int *)(param_1 + 0x730);
  }
  *(int *)(param_1 + 0x730) = iVar5 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x728);
  iVar5 = *(int *)(param_1 + 0x710);
  iVar3 = (iVar5 - param_2) + -1;
  if (0 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x708) + lVar4 * 8),
               (void *)(*(longlong *)(param_1 + 0x708) + (longlong)(iVar5 - iVar3) * 8),
               (longlong)iVar3 << 3);
    iVar5 = *(int *)(param_1 + 0x710);
  }
  *(int *)(param_1 + 0x710) = iVar5 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x708);
  plVar1 = (longlong *)(param_1 + 0x718);
  FUN_1426adfd0(*(undefined8 *)(*plVar1 + lVar4 * 8));
  lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
  if (lVar2 != 0) {
    FUN_14061f570(lVar2);
    FMemory::operator_delete(lVar2,0x1b0);
  }
  iVar5 = *(int *)(param_1 + 0x720);
  iVar3 = (iVar5 - param_2) + -1;
  if (0 < iVar3) {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + lVar4 * 8),(void *)(*plVar1 + (longlong)(iVar5 - iVar3) * 8),
               (longlong)iVar3 << 3);
    iVar5 = *(int *)(param_1 + 0x720);
  }
  *(int *)(param_1 + 0x720) = iVar5 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
  return;
}



// FUNCTION 1422060b0 FUN_1422060b0 body=1947 status=ok
// SIG undefined FUN_1422060b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422060b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined8 *local_240;
  undefined8 *local_230;
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  int local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  int local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined **local_190;
  undefined8 local_188;
  int local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [32];
  undefined8 local_148;
  undefined ***local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined ***local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar10 = operator_new(0x928);
  lVar11 = 0;
  if (lVar10 != 0) {
    lVar11 = FUN_1422037a0(lVar10,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_1 + 0x3b8));
  }
  iVar3 = *(int *)(param_1 + 0x3a8);
  *(int *)(param_1 + 0x3a8) = iVar3 + 1;
  if (*(int *)(param_1 + 0x3ac) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3a0,iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar3 * 8) = lVar11;
  (**(code **)(*(longlong *)(lVar11 + 8) + 0x28))();
  puVar15 = *(undefined8 **)(param_2 + 0x18);
  local_240 = &local_148;
  local_1d8 = &PTR_GetBoundProgramCounterForTimerManager_145000428;
  local_148 = 0;
  *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(puVar15 + 1);
  local_138 = 1;
  local_124 = 0;
  local_120 = 0;
  local_1d0 = *puVar15;
  local_140 = &local_1d8;
  local_1c8 = *(int *)(puVar15 + 1) * 0xc;
  local_134 = _DAT_1468b5d78;
  uStack_130 = uRam00000001468b5d7c;
  uStack_12c = uRam00000001468b5d80;
  uStack_128 = uRam00000001468b5d84;
  local_118 = 0;
  local_110 = 0;
  local_248 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_228,&DAT_146ab6e78);
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar11 + 0x38,local_228);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_228);
  local_240 = (undefined8 *)CONCAT71(local_240._1_7_,0xd);
  local_248 = 4;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,local_220,&DAT_146ab6e78,*(undefined8 *)(lVar11 + 0x38));
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar11 + 0x900,local_220);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_220);
  (**(code **)(*(longlong *)(lVar11 + 0x48) + 0x28))(lVar11 + 0x48);
  puVar15 = *(undefined8 **)(param_2 + 0x20);
  if (*(int *)(puVar15 + 1) != 0) {
    *(int *)(lVar11 + 0x80) = *(int *)(puVar15 + 1);
    local_240 = &local_108;
    local_1b8 = *puVar15;
    local_100 = &local_1c0;
    local_1b0 = *(int *)(puVar15 + 1) << 3;
    local_1c0 = &PTR_GetBoundProgramCounterForTimerManager_145000428;
    local_108 = 0;
    local_f8 = 1;
    local_f4 = _DAT_1468b5d78;
    uStack_f0 = uRam00000001468b5d7c;
    uStack_ec = uRam00000001468b5d80;
    uStack_e8 = uRam00000001468b5d84;
    local_e4 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_248 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_218,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar11 + 0x78,local_218);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_218);
    local_240 = (undefined8 *)CONCAT71(local_240._1_7_,0x11);
    local_248 = 8;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_210,&DAT_146ab6e78,*(undefined8 *)(lVar11 + 0x78));
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar11 + 0x908,local_210);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_210);
  }
  (**(code **)(*(longlong *)(lVar11 + 0x88) + 0x28))();
  puVar15 = *(undefined8 **)(param_2 + 0x28);
  uVar16 = 0;
  if (*(int *)(puVar15 + 1) != 0) {
    *(int *)(lVar11 + 0xc0) = *(int *)(puVar15 + 1);
    local_240 = &local_c8;
    local_1a0 = *puVar15;
    local_c0 = &local_1a8;
    local_198 = *(int *)(puVar15 + 1) << 2;
    local_1a8 = &PTR_GetBoundProgramCounterForTimerManager_145000428;
    local_c8 = 0;
    local_b8 = 1;
    local_b4 = _DAT_1468b5d78;
    uStack_b0 = uRam00000001468b5d7c;
    uStack_ac = uRam00000001468b5d80;
    uStack_a8 = uRam00000001468b5d84;
    local_a4 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_248 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_208,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar11 + 0xb8,local_208);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_208);
  }
  if (((0x1d < DAT_146ab62cc) || ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) &&
     ((0x1b < DAT_146ab62cc ||
      (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) == 0 ||
       (uVar8 = RHIGetShaderLanguageVersion(), 1 < uVar8)))))) {
    local_240 = (undefined8 *)CONCAT71(local_240._1_7_,0x3d);
    local_248 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_200,&DAT_146ab6e78,*(undefined8 *)(lVar11 + 0xb8));
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar11 + 0x910,local_200);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_200);
  }
  ppuVar14 = (undefined8 **)(lVar11 + 0x918);
  puVar15 = (undefined8 *)(lVar11 + 0xf8);
  do {
    (**(code **)(puVar15[-6] + 0x28))((longlong)(int)uVar16 * 0x40 + 200 + lVar11);
    puVar4 = *(undefined8 **)(param_2 + 0x30);
    local_240 = &local_88;
    local_88 = 0;
    local_64 = 0;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar4 + 1);
    local_190 = &PTR_GetBoundProgramCounterForTimerManager_145000428;
    local_188 = *puVar4;
    local_80 = &local_190;
    local_180 = *(int *)(puVar4 + 1) << 2;
    local_78 = 1;
    local_74 = _DAT_1468b5d78;
    uStack_70 = uRam00000001468b5d7c;
    uStack_6c = uRam00000001468b5d80;
    uStack_68 = uRam00000001468b5d84;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_248 = 0x201;
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_1f8,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar15,local_1f8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1f8);
    local_240 = (undefined8 *)CONCAT71(local_240._1_7_,0x25);
    local_248 = 4;
    (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_230,&DAT_146ab6e78,*puVar15);
    if (ppuVar14 == &local_230) {
LAB_142206637:
      puVar4 = local_230;
      if (local_230 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_230 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(local_230 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
            LOCK();
            bVar17 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar17) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar17) {
              uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar8 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar10 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
    }
    else {
      puVar4 = *ppuVar14;
      *ppuVar14 = local_230;
      local_230 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
            LOCK();
            bVar17 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar17) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar17) {
              uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar8 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar10 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        goto LAB_142206637;
      }
    }
    uVar16 = uVar16 + 1;
    ppuVar14 = ppuVar14 + 1;
    puVar15 = puVar15 + 8;
    if (1 < uVar16) {
      (**(code **)(*(longlong *)(lVar11 + 0x148) + 0x28))(lVar11 + 0x148);
      FUN_142205c20(lVar11 + 0x148,*(undefined8 *)(param_2 + 0x38));
      local_1e8 = lVar11 + 400;
      uStack_1e0 = lVar11;
      if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
          local_178 = (undefined4)local_1e8;
          uStack_174 = local_1e8._4_4_;
          uStack_170 = (undefined4)uStack_1e0;
          uStack_16c = uStack_1e0._4_4_;
          uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_142204060(&local_178,uVar12);
        }
        else {
          plVar13 = (longlong *)FUN_142204ad0(local_168,0,0xff);
          lVar10 = *plVar13;
          *(undefined4 *)(lVar10 + 0x10) = (undefined4)local_1e8;
          *(undefined4 *)(lVar10 + 0x14) = local_1e8._4_4_;
          *(undefined4 *)(lVar10 + 0x18) = (undefined4)uStack_1e0;
          *(undefined4 *)(lVar10 + 0x1c) = uStack_1e0._4_4_;
          lVar10 = *plVar13;
          lVar6 = plVar13[2];
          lVar11 = plVar13[1];
          lVar5 = *(longlong *)(lVar10 + 0x28);
          piVar2 = (int *)(lVar5 + 0x48);
          if (lVar5 != 0) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          local_1f0 = lVar5;
          FUN_1409421c0(lVar10,lVar11,(int)lVar6,1);
          if (lVar5 != 0) {
            LOCK();
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle(local_1f0);
            }
          }
        }
      }
      else {
        uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_142204060(&local_1e8,uVar12);
      }
      plVar13 = *(longlong **)(param_2 + 8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 142206850 FUN_142206850 body=635 status=ok
// SIG undefined FUN_142206850(void)

void FUN_142206850(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong *local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  
  plVar13 = (longlong *)param_2[1];
  uVar4 = *param_2;
  local_b8 = FUN_142206ad0;
  uStack_b0 = 0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  uVar7 = param_2[4];
  local_d8 = param_2[5];
  local_d0 = param_2[6];
  local_c8 = param_2[7];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  plVar12 = (longlong *)FMemory::Realloc(0,0x70);
  local_e8[0] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_80 = local_d8;
    local_78 = local_d0;
    local_70 = local_c8;
    local_a8 = uVar4;
    local_a0 = plVar13;
    local_98 = uVar6;
    local_90 = uVar5;
    local_88 = uVar7;
    TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),IMRMesh::FSendBrickDataArgs>
    ::
    TBaseUObjectMethodDelegateInstance<0,UMRMeshComponent,void___cdecl(void),IMRMesh::FSendBrickDataArgs>
              (plVar12,param_1 + -0x6f0,&local_68,&local_a8);
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    plVar12 = local_e8[0];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar13 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = local_e8[0];
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = local_e8[0];
        }
      }
    }
  }
  plVar13 = (longlong *)FUN_141d29000(local_58,0,0xff);
  lVar10 = *plVar13;
  pplVar14 = (longlong **)(lVar10 + 0x10);
  *pplVar14 = (longlong *)0x0;
  *(undefined4 *)(lVar10 + 0x18) = 0;
  if ((local_e8 != pplVar14) && (plVar12 != (longlong *)0x0)) {
    (**(code **)(*plVar12 + 0x30))(plVar12,pplVar14);
  }
  *(undefined4 *)(lVar10 + 0x20) = 2;
  lVar10 = *plVar13;
  lVar11 = plVar13[2];
  lVar8 = plVar13[1];
  lVar9 = *(longlong *)(lVar10 + 0x30);
  piVar1 = (int *)(lVar9 + 0x48);
  if (lVar9 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar12 = local_e8[0];
  }
  FUN_1409691d0(lVar10,lVar8,(int)lVar11,1);
  if (lVar9 != 0) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar12 = local_e8[0];
    if (iVar3 == 1) {
      FGraphEvent::Recycle(lVar9);
      plVar12 = local_e8[0];
    }
  }
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))(plVar12,0);
    local_e8[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
    if (local_e8[0] != (longlong *)0x0) {
      FMemory::Free(local_e8[0]);
    }
  }
  plVar13 = (longlong *)param_2[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
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
  return;
}



// FUNCTION 142206ad0 FUN_142206ad0 body=2194 status=ok
// SIG undefined FUN_142206ad0(void)

void FUN_142206ad0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  DWORD DVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  DWORD *pDVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffd78;
  uint uVar25;
  undefined1 local_258 [16];
  longlong local_248;
  int local_240;
  int local_23c;
  uint local_218;
  undefined2 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  void *local_1e8;
  int local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined4 local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [72];
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  void *local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined4 local_e0;
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_98;
  longlong *local_88;
  int local_80;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  uVar25 = (uint)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  lVar12 = 0;
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  if (iVar10 < (int)DAT_1469e91c4) {
    uVar21 = iVar10 >> 0x1f & 0xffff;
    uVar9 = iVar10 + uVar21;
    lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
             (longlong)(int)((uVar9 & 0xffff) - uVar21) * 0x18;
  }
  if (((*(uint *)(lVar12 + 8) >> 0x1d & 1) == 0) &&
     (iVar10 = (**(code **)(*param_1 + 0x4e8))(param_1), iVar10 != 0)) {
    lVar12 = param_1[0x24];
    if (((lVar12 != 0) || (lVar12 = FUN_1423407b0(param_1), lVar12 != 0)) &&
       (*(longlong *)(lVar12 + 0x218) != 0)) {
      plVar19 = param_1 + 0xe5;
      plVar18 = (longlong *)*plVar19;
      iVar10 = (int)param_1[0xe6];
      if (plVar18 != plVar18 + iVar10) {
        plVar23 = plVar18;
        do {
          if (*plVar23 == param_2[2]) {
            iVar22 = (int)((longlong)plVar23 - (longlong)plVar18 >> 3);
            goto LAB_142206bd5;
          }
          plVar23 = plVar23 + 1;
        } while (plVar23 != plVar18 + iVar10);
      }
      iVar22 = -1;
LAB_142206bd5:
      if (*(int *)(param_2[7] + 8) < 1) {
        if (iVar22 != -1) {
          FUN_142205f50(param_1);
        }
      }
      else {
        if (iVar22 == -1) {
          *(int *)(param_1 + 0xe6) = iVar10 + 1;
          if (*(int *)((longlong)param_1 + 0x734) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar19,iVar10);
          }
          *(longlong *)(*plVar19 + (longlong)iVar10 * 8) = param_2[2];
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar13 = FUN_142909590();
          lVar14 = FUN_1417985e0(uVar13,param_1,0,0,(ulonglong)uVar25 << 0x20,0,0,0,0);
          puVar15 = (undefined4 *)FGuid::NewGuid(local_68);
          uVar4 = *puVar15;
          uVar5 = puVar15[1];
          uVar6 = puVar15[2];
          uVar7 = puVar15[3];
          *(byte *)(lVar14 + 0x99) = *(byte *)(lVar14 + 0x99) & 0xbf;
          *(byte *)(lVar14 + 0x9a) = *(byte *)(lVar14 + 0x9a) | 2;
          *(undefined4 *)(lVar14 + 0xf0) = uVar4;
          *(undefined4 *)(lVar14 + 0xf4) = uVar5;
          *(undefined4 *)(lVar14 + 0xf8) = uVar6;
          *(undefined4 *)(lVar14 + 0xfc) = uVar7;
          iVar10 = (int)param_1[0xe2];
          *(int *)(param_1 + 0xe2) = iVar10 + 1;
          if (*(int *)((longlong)param_1 + 0x714) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe1,iVar10)
            ;
          }
          *(longlong *)(param_1[0xe1] + (longlong)iVar10 * 8) = lVar14;
          lVar14 = operator_new(0x1b0);
          if (lVar14 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_1426852e0(lVar14);
          }
          iVar10 = (int)param_1[0xe4];
          *(int *)(param_1 + 0xe4) = iVar10 + 1;
          if (*(int *)((longlong)param_1 + 0x724) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe3,iVar10)
            ;
          }
          *(undefined8 *)(param_1[0xe3] + (longlong)iVar10 * 8) = uVar13;
          iVar22 = (int)param_1[0xe6] + -1;
        }
        plVar19 = *(longlong **)(param_1[0xe1] + (longlong)iVar22 * 8);
        *(byte *)((longlong)plVar19 + 0x9a) = *(byte *)((longlong)plVar19 + 0x9a) | 2;
        *(undefined1 *)((longlong)plVar19 + 0x9c) = 3;
        FCookBodySetupInfo::FCookBodySetupInfo(local_258);
        FUN_1426c5fa0(plVar19,local_258,3);
        local_218 = local_218 | 1;
        local_1d5 = 1;
        local_210 = 0x303;
        TArray<FVector,FDefaultAllocator>::operator=(local_258,param_2[3]);
        iVar10 = *(int *)(param_2[7] + 8) / 3;
        if (local_23c < iVar10) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&local_248,iVar10);
        }
        lVar14 = (longlong)iVar10;
        if (0 < iVar10) {
          lVar24 = 0;
          do {
            local_240 = local_240 + 1;
            if (local_23c < local_240) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_248);
            }
            *(undefined4 *)(local_248 + lVar24) = *(undefined4 *)(lVar24 + *(longlong *)param_2[7]);
            *(undefined4 *)(local_248 + 4 + lVar24) =
                 *(undefined4 *)(*(longlong *)param_2[7] + 4 + lVar24);
            *(undefined4 *)(local_248 + 8 + lVar24) =
                 *(undefined4 *)(*(longlong *)param_2[7] + lVar24 + 8);
            lVar24 = lVar24 + 0xc;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        uVar13 = GetPhysXCookingModule(1);
        FUN_1426d45e0(local_168,uVar13);
        FTriMeshCollisionData::operator=(local_168,local_258);
        local_120 = (undefined1)local_210;
        local_11f = local_210._1_1_;
        TArray<TArray<FVector,FDefaultAllocator>,FDefaultAllocator>::operator=(local_118,local_208);
        TArray<TArray<FVector,FDefaultAllocator>,FDefaultAllocator>::operator=(local_108,local_1f8);
        local_f0 = local_1e0;
        if ((local_1e0 != 0) || (local_ec != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_1e0);
          _guard_xfg_dispatch_icall_nop(local_f8,local_1e8,(longlong)local_1e0 * 2);
        }
        local_e8 = local_1d8;
        local_e7 = local_1d7;
        local_e6 = local_1d6;
        local_e5 = local_1d5;
        local_e4 = local_1d4;
        local_e3 = local_1d3;
        local_e0 = local_1d0;
        FUN_1426db690(local_168);
        (**(code **)(*plVar19 + 0x290))(plVar19);
        FUN_1426c08c0(plVar19,local_d8,local_c8,local_b8);
        uVar13 = *(undefined8 *)((longlong)iVar22 * 8 + param_1[0xe3]);
        FUN_1426adfd0(uVar13);
        uVar3 = *(undefined8 *)(lVar12 + 0x218);
        uVar16 = FUN_142685570(local_58,param_1);
        FUN_14269a1d0(uVar13,plVar19,param_1 + 0x42,param_1,uVar3,uVar16);
        plVar19 = local_88;
        for (; local_80 != 0; local_80 = local_80 + -1) {
          if (*plVar19 != 0) {
            FMemory::Free();
          }
          plVar19 = plVar19 + 2;
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free(local_88);
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
        FCookBodySetupInfo::~FCookBodySetupInfo(local_168);
        FCookBodySetupInfo::~FCookBodySetupInfo(local_258);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x701) != '\0') &&
       (*(char *)((longlong)param_1 + 0x301) != '\0')) {
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
    }
  }
  plVar19 = (longlong *)0x0;
  if ((((char)param_1[0xe0] != '\0') && (param_1[200] != 0)) && (DAT_1468b4ff8 != 0)) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)))) {
      local_1c0 = *param_2;
      local_1b8 = (longlong *)param_2[1];
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
        UNLOCK();
      }
      local_1b0 = param_2[2];
      local_1a8 = param_2[3];
      local_1a0 = param_2[4];
      local_198 = param_2[5];
      local_190 = param_2[6];
      local_188 = param_2[7];
      local_1c8 = param_1;
      FUN_142204e50(&local_1c8,2,local_res20);
      plVar19 = local_1b8;
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_1b8 + 1;
        lVar12 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
    }
    else {
      pDVar17 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar18 = TlsGetValue(*pDVar17);
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)operator_new(0x18);
        if (plVar18 != (longlong *)0x0) {
          *plVar18 = 0;
          plVar18[1] = 0;
          *(undefined4 *)(plVar18 + 2) = 0;
          plVar19 = plVar18;
        }
        TlsSetValue(*pDVar17,plVar19);
        plVar18 = plVar19;
      }
      plVar19 = (longlong *)plVar18[1];
      if (plVar19 == (longlong *)0x0) {
        plVar19 = (longlong *)*plVar18;
        if (plVar19 == (longlong *)0x0) {
          plVar19 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar17 + 2);
          plVar18[1] = (longlong)plVar19;
          if (plVar19 == (longlong *)0x0) {
            puVar20 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar18[1] = (longlong)puVar20;
            lVar12 = 0x1f;
            do {
              puVar2 = puVar20 + 0x20;
              *puVar20 = puVar2;
              lVar12 = lVar12 + -1;
              puVar20 = puVar2;
            } while (lVar12 != 0);
            *puVar2 = 0;
            plVar19 = (longlong *)plVar18[1];
          }
          iVar10 = 0x20;
          *(undefined4 *)(plVar18 + 2) = 0x20;
        }
        else {
          iVar10 = 0x20;
          plVar18[1] = (longlong)plVar19;
          *(undefined4 *)(plVar18 + 2) = 0x20;
          *plVar18 = 0;
        }
      }
      else {
        iVar10 = (int)plVar18[2];
      }
      plVar18[1] = *plVar19;
      *(int *)(plVar18 + 2) = iVar10 + -1;
      *plVar19 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar19 + 1) = 0xff;
      local_178 = 0;
      local_170 = 0;
      *(undefined4 *)((longlong)plVar19 + 0xc) = 1;
      *plVar19 = (longlong)&PTR__scalar_deleting_destructor__145000650;
      *(undefined1 *)(plVar19 + 0xb) = 0;
      plVar19[0xc] = 0;
      plVar19[2] = (longlong)param_1;
      plVar19[3] = *param_2;
      lVar12 = param_2[1];
      plVar19[4] = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      plVar19[5] = param_2[2];
      plVar19[6] = param_2[3];
      plVar19[7] = param_2[4];
      plVar19[8] = param_2[5];
      plVar19[9] = param_2[6];
      plVar19[10] = param_2[7];
      lVar12 = plVar19[0xc];
      piVar1 = (int *)(lVar12 + 0x48);
      if (lVar12 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1422073c0(plVar19,0,0xff,1);
      if (lVar12 != 0) {
        LOCK();
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle(lVar12);
        }
      }
    }
  }
  plVar19 = (longlong *)param_2[1];
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar19 + 1;
    lVar12 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19,1);
      }
    }
  }
  return;
}



// FUNCTION 142207370 FUN_142207370 body=32 status=ok
// SIG undefined FUN_142207370(void)

void FUN_142207370(longlong param_1,undefined8 param_2)

{
  FUN_142398770(param_1 + -0x6f0,param_2,0,0,0);
  return;
}



// FUNCTION 1422073c0 FUN_1422073c0 body=611 status=ok
// SIG undefined FUN_1422073c0(void)

void FUN_1422073c0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_142207577;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_142207577:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 142207630 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMeshReconstructorBase::GetPrivateStaticClass(void)

{
  if (DAT_146aee410 == 0) {
    FUN_14171ccd0(L"/Script/MRMesh",L"MeshReconstructorBase",&DAT_146aee410,
                  StaticRegisterNativesUMeshReconstructorBase,0x28,0x10000000,0,L"Engine",
                  FUN_142207a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aee410;
}



// FUNCTION 1422076d0 FUN_1422076d0 body=47 status=ok
// SIG undefined FUN_1422076d0(void)

longlong FUN_1422076d0(void)

{
  if (DAT_146aee418 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aee418,&PTR_s__Script_MRMesh_145001150);
  }
  return DAT_146aee418;
}



// FUNCTION 142207700 FUN_142207700 body=47 status=ok
// SIG undefined FUN_142207700(void)

longlong FUN_142207700(void)

{
  if (DAT_146aee408 == 0) {
    FUN_141786440(&DAT_146aee408,&PTR_GetPrivateStaticClass_1450009b0);
  }
  return DAT_146aee408;
}



// FUNCTION 142207730 FUN_142207730 body=47 status=ok
// SIG undefined FUN_142207730(void)

longlong FUN_142207730(void)

{
  if (DAT_146aee3d0 == 0) {
    FUN_141786a30(&DAT_146aee3d0,&PTR_FUN_146531140);
  }
  return DAT_146aee3d0;
}



// FUNCTION 142207760 FUN_142207760 body=47 status=ok
// SIG undefined FUN_142207760(void)

longlong FUN_142207760(void)

{
  if (DAT_146aee3d8 == 0) {
    FUN_141786a30(&DAT_146aee3d8,&PTR_FUN_146531180);
  }
  return DAT_146aee3d8;
}



// FUNCTION 142207790 FUN_142207790 body=47 status=ok
// SIG undefined FUN_142207790(void)

longlong FUN_142207790(void)

{
  if (DAT_146aee3e0 == 0) {
    FUN_141786a30(&DAT_146aee3e0,&PTR_FUN_146531240);
  }
  return DAT_146aee3e0;
}



// FUNCTION 1422077c0 FUN_1422077c0 body=47 status=ok
// SIG undefined FUN_1422077c0(void)

longlong FUN_1422077c0(void)

{
  if (DAT_146aee3e8 == 0) {
    FUN_141786a30(&DAT_146aee3e8,&PTR_FUN_1465312f0);
  }
  return DAT_146aee3e8;
}



// FUNCTION 1422077f0 FUN_1422077f0 body=47 status=ok
// SIG undefined FUN_1422077f0(void)

longlong FUN_1422077f0(void)

{
  if (DAT_146aee3f0 == 0) {
    FUN_141786a30(&DAT_146aee3f0,&PTR_FUN_146531330);
  }
  return DAT_146aee3f0;
}



// FUNCTION 142207820 FUN_142207820 body=47 status=ok
// SIG undefined FUN_142207820(void)

longlong FUN_142207820(void)

{
  if (DAT_146aee3f8 == 0) {
    FUN_141786a30(&DAT_146aee3f8,&PTR_FUN_146531370);
  }
  return DAT_146aee3f8;
}



// FUNCTION 142207850 FUN_142207850 body=47 status=ok
// SIG undefined FUN_142207850(void)

longlong FUN_142207850(void)

{
  if (DAT_146aee400 == 0) {
    FUN_141786a30(&DAT_146aee400,&PTR_FUN_1465313b0);
  }
  return DAT_146aee400;
}



// FUNCTION 1422078a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGButton::GetPrivateStaticClass(void)

{
  if (DAT_146aee440 == 0) {
    FUN_14171ccd0(L"/Script/MRMesh",L"MRMeshComponent",&DAT_146aee440,FUN_142207a80,0x740,0x10000000
                  ,0,L"Engine",&LAB_142207a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146aee440;
}



// FUNCTION 142207950 FUN_142207950 body=47 status=ok
// SIG undefined FUN_142207950(void)

longlong FUN_142207950(void)

{
  if (DAT_146aee438 == 0) {
    FUN_141786440(&DAT_146aee438,&PTR_GetPrivateStaticClass_145000c30);
  }
  return DAT_146aee438;
}



// FUNCTION 142207980 FUN_142207980 body=47 status=ok
// SIG undefined FUN_142207980(void)

longlong FUN_142207980(void)

{
  if (DAT_146aee420 == 0) {
    FUN_141786a30(&DAT_146aee420,&PTR_FUN_1465313f0);
  }
  return DAT_146aee420;
}



// FUNCTION 1422079b0 FUN_1422079b0 body=47 status=ok
// SIG undefined FUN_1422079b0(void)

longlong FUN_1422079b0(void)

{
  if (DAT_146aee428 == 0) {
    FUN_141786a30(&DAT_146aee428,&PTR_FUN_146531430);
  }
  return DAT_146aee428;
}



// FUNCTION 1422079e0 FUN_1422079e0 body=47 status=ok
// SIG undefined FUN_1422079e0(void)

longlong FUN_1422079e0(void)

{
  if (DAT_146aee430 == 0) {
    FUN_141786a30(&DAT_146aee430,&PTR_FUN_1465314c0);
  }
  return DAT_146aee430;
}



// FUNCTION 142207a40 FUN_142207a40 body=41 status=ok
// SIG undefined FUN_142207a40(void)

void FUN_142207a40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145000e08;
  }
  return;
}



// FUNCTION 142207a70 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC(void)

{
  return 0x6cacb55b;
}



// FUNCTION 142207a80 FUN_142207a80 body=34 status=ok
// SIG undefined FUN_142207a80(void)

void FUN_142207a80(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Clear_145001178,3);
  return;
}



// FUNCTION 142207ab0 StaticRegisterNativesUMeshReconstructorBase body=34 status=ok
// SIG undefined StaticRegisterNativesUMeshReconstructorBase(void)

void UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ConnectMRMesh_1450010e0,7);
  return;
}



// FUNCTION 142207ae0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMRMeshConfiguration::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aee3c0 == 0) {
    if (DAT_146aee418 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aee418,&PTR_s__Script_MRMesh_145001150);
    }
    lVar1 = DAT_146aee418;
    uVar2 = Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC();
    DAT_146aee3c0 = GetStaticStruct(FUN_142207b60,lVar1,L"MRMeshConfiguration",1,uVar2);
  }
  return;
}



// FUNCTION 142207b60 FUN_142207b60 body=47 status=ok
// SIG undefined FUN_142207b60(void)

longlong FUN_142207b60(void)

{
  if (DAT_146aee3c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aee3c8,&PTR_FUN_146531090);
  }
  return DAT_146aee3c8;
}



// FUNCTION 142207bc0 FUN_142207bc0 body=132 status=ok
// SIG undefined FUN_142207bc0(void)

void FUN_142207bc0(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_res8);
  return;
}



// FUNCTION 142207c90 FUN_142207c90 body=51 status=ok
// SIG undefined FUN_142207c90(void)

void FUN_142207c90(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x6f0) + 8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142207cd0 FUN_142207cd0 body=47 status=ok
// SIG undefined FUN_142207cd0(void)

void FUN_142207cd0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x298))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142207d30 FUN_142207d30 body=97 status=ok
// SIG undefined FUN_142207d30(void)

undefined8 * FUN_142207d30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145001620;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142207da0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FBackgroundView::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__1450014e0;
  lVar2 = param_1[1] + 0x10;
  if (param_1[1] == 0) {
    lVar2 = 0;
  }
  FUN_141ee4fb0(lVar2);
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  *param_1 = &PTR_FUN_144175158;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142207e10 `scalar_deleting_destructor' body=85 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateRenderTargetRHI::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_141edd2d0(param_1 + 2);
  *param_1 = &PTR__purecall_144f96210;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142207e70 FUN_142207e70 body=259 status=ok
// SIG undefined FUN_142207e70(void)

undefined8 * FUN_142207e70(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 9);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[4];
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
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142207f80 FUN_142207f80 body=4209 status=ok
// SIG undefined FUN_142207f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142207f80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 **ppuVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  DWORD *pDVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  longlong **pplVar21;
  undefined1 auStack_7e8 [32];
  ulonglong local_7c8;
  ulonglong local_7c0;
  undefined4 local_7b8;
  longlong local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  undefined1 local_798;
  undefined1 local_790;
  longlong local_788;
  undefined1 local_778;
  undefined1 local_777;
  undefined1 local_776 [6];
  longlong local_770;
  int local_768;
  int iStack_764;
  longlong *local_760;
  longlong *local_758;
  longlong local_750;
  undefined8 local_748;
  longlong local_740;
  longlong *local_738;
  undefined8 *local_730;
  longlong *local_728;
  longlong *local_720;
  longlong *local_718;
  longlong *plStack_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined1 local_6fc;
  undefined8 local_6fb;
  longlong local_6f0;
  longlong **local_6e8;
  undefined8 local_6e0;
  longlong *local_6d8;
  LARGE_INTEGER local_6d0;
  LARGE_INTEGER local_6c8;
  longlong local_6c0;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined4 local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  longlong *local_690;
  longlong *local_688;
  longlong *local_680;
  longlong *local_678;
  undefined4 local_670;
  undefined4 local_668;
  undefined1 local_664;
  undefined8 local_660;
  undefined4 local_658;
  longlong *local_650;
  longlong *local_648;
  undefined1 *local_640;
  longlong *local_638;
  longlong *local_630;
  undefined1 *local_628;
  longlong *local_620;
  longlong *local_618;
  undefined1 *local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined1 local_5f8;
  longlong local_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined1 local_5c8 [272];
  longlong *local_4b8;
  undefined1 local_4a8 [32];
  longlong *local_488;
  undefined1 local_470 [24];
  undefined1 local_458 [264];
  longlong local_350;
  undefined1 local_338 [432];
  undefined1 local_188 [288];
  ulonglong local_68;
  
  if (param_2 != (longlong *)0x0) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_7e8;
    local_770 = param_1;
    local_748 = param_2;
    plVar8 = (longlong *)GetMoviePlayer();
    cVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (cVar5 == '\0') {
      lVar9 = FUN_14200e4c0(local_5c8);
      *(undefined1 *)(lVar9 + 0x131) = 0;
      plVar8 = (longlong *)operator_new(0x370);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_FUN_144f65c70;
        if (plVar8 != (longlong *)0xfffffffffffffff0) {
          SViewport::SViewport();
        }
      }
      plVar10 = plVar8 + 2;
      local_650 = plVar10;
      local_648 = plVar8;
      FUN_14044f790(&local_650,plVar10);
      local_640 = &local_778;
      local_7c8 = 0x360;
      SWidget::SetDebugInfo
                (plVar10,"SViewport",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
                 ,0x6e);
      local_7b8 = *(undefined4 *)(lVar9 + 0x90);
      local_788 = lVar9 + 0xf8;
      local_7a0 = lVar9 + 0xe8;
      local_790 = *(undefined1 *)(lVar9 + 0xf1);
      local_7a8 = lVar9 + 200;
      local_7b0 = lVar9 + 0x98;
      local_798 = *(undefined1 *)(lVar9 + 0xf0);
      local_7c0 = lVar9 + 0x78;
      local_7c8 = lVar9 + 0x60;
      SWidget::SWidgetConstruct(plVar10,lVar9,lVar9 + 0x30,lVar9 + 0x40);
      FUN_141978d50(plVar10,lVar9);
      if (((char)plVar8[5] < '\0') ||
         (cVar5 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar5 != '\0')) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_6e8 = (longlong **)(param_1 + 0x18);
      local_760 = plVar10;
      local_758 = plVar8;
      if (local_6e8 != &local_760) {
        *local_6e8 = plVar10;
        local_760 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_758);
      }
      plVar10 = local_758;
      if (local_758 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_758 + 1;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_758)(local_758);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_758 + 8))(local_758,1);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar8 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        LOCK();
        plVar10 = plVar8 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_470);
      if (local_488 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_488 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_488)(local_488);
          LOCK();
          piVar1 = (int *)((longlong)local_488 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_488 + 8))(local_488,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_4a8);
      if (local_4b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_4b8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_4b8)(local_4b8);
          LOCK();
          piVar1 = (int *)((longlong)local_4b8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_4b8 + 8))(local_4b8,1);
          }
        }
      }
      FUN_140456c70(local_5c8);
      plVar10 = (longlong *)FUN_140c61d80();
      plVar8 = plVar10 + 2;
      local_638 = plVar8;
      local_630 = plVar10;
      FUN_14044f790(&local_638,plVar8);
      local_628 = &local_777;
      local_7c8 = 0x3a8;
      SWidget::SetDebugInfo
                (plVar8,"SThrobber",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
                 ,0x79);
      lVar9 = SThrobber::FArguments::FArguments(local_188);
      local_7b8 = *(undefined4 *)(lVar9 + 0x90);
      local_788 = lVar9 + 0xf8;
      local_7a0 = lVar9 + 0xe8;
      local_790 = *(undefined1 *)(lVar9 + 0xf1);
      local_7a8 = lVar9 + 200;
      local_7b0 = lVar9 + 0x98;
      local_798 = *(undefined1 *)(lVar9 + 0xf0);
      local_7c0 = lVar9 + 0x78;
      local_7c8 = lVar9 + 0x60;
      SWidget::SWidgetConstruct(plVar8,lVar9,lVar9 + 0x30,lVar9 + 0x40);
      FUN_141935a10(plVar8,lVar9);
      if (((char)plVar10[5] < '\0') ||
         (cVar5 = (**(code **)(*plVar8 + 0x1e8))(plVar8), cVar5 != '\0')) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      puVar17 = (undefined8 *)0x0;
      local_5f0 = 0;
      local_608 = 0x4120000041200000;
      uStack_600 = 0x4120000041200000;
      local_5e8 = 0;
      local_5f8 = 1;
      local_6a0 = plVar8;
      local_698 = plVar10;
      puVar11 = (undefined8 *)operator_new(0x88);
      if (puVar11 != (undefined8 *)0x0) {
        FSlotBase::FSlotBase(puVar11);
        local_6b8 = 0x3f800000;
        *puVar11 = &PTR__scalar_deleting_destructor__144042bf8;
        *(undefined2 *)(puVar11 + 4) = 0;
        *(undefined4 *)(puVar11 + 5) = 1;
        *(undefined4 *)(puVar11 + 6) = 0x3f800000;
        *(undefined1 *)((longlong)puVar11 + 0x34) = 1;
        puVar11[7] = 0;
        *(undefined4 *)(puVar11 + 8) = 0;
        local_6b4 = 1;
        local_6b0 = 0;
        local_6a8 = 0;
        local_670 = 1;
        local_668 = 0x3f800000;
        local_664 = 1;
        local_660 = 0;
        local_658 = 0;
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_660);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6b0);
        *(undefined1 *)(puVar11 + 0xb) = 1;
        puVar11[0xc] = 0;
        *(undefined4 *)(puVar11 + 0xd) = 0;
        *(undefined4 *)(puVar11 + 0xe) = 0;
        *(undefined1 *)((longlong)puVar11 + 0x74) = 1;
        puVar11[0xf] = 0;
        *(undefined4 *)(puVar11 + 0x10) = 0;
        *puVar11 = &PTR__scalar_deleting_destructor__144042bf8;
        puVar17 = puVar11;
      }
      *(undefined2 *)(puVar17 + 4) = 0x303;
      plVar8 = puVar17 + 0xc;
      *(undefined1 *)(puVar17 + 0xb) = 1;
      puVar17[9] = 0x4120000041200000;
      puVar17[10] = 0x4120000041200000;
      if (((&local_5f0 != plVar8) && (*(int *)(puVar17 + 0xd) != 0)) &&
         (plVar14 = (longlong *)*plVar8, plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        if (*plVar8 != 0) {
          lVar9 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar9;
        }
        *(undefined4 *)(puVar17 + 0xd) = 0;
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_5f0);
      uVar12 = FUN_1417f9c30(puVar17,&local_6a0);
      lVar9 = SCanvas::FArguments::FArguments(local_458);
      iVar20 = *(int *)(lVar9 + 0x110);
      *(int *)(lVar9 + 0x110) = iVar20 + 1;
      if (*(int *)(lVar9 + 0x114) < iVar20 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 0x108,iVar20);
      }
      *(undefined8 *)(*(longlong *)(lVar9 + 0x108) + (longlong)iVar20 * 8) = uVar12;
      plVar8 = (longlong *)operator_new(0x248);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
        *plVar8 = (longlong)&PTR_DestroyObject_144d503e8;
        if (plVar8 != (longlong *)0xfffffffffffffff0) {
          FUN_1417f4670();
        }
      }
      plVar14 = plVar8 + 2;
      local_620 = plVar14;
      local_618 = plVar8;
      FUN_14044f790(&local_620,plVar14);
      local_610 = local_776;
      local_7c8 = 0x238;
      SWidget::SetDebugInfo
                (plVar14,"SVerticalBox",
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\StreamingPauseRendering\\Private\\StreamingPauseRendering.cpp"
                 ,0x73);
      local_7b8 = *(undefined4 *)(lVar9 + 0x90);
      local_788 = lVar9 + 0xf8;
      local_7a0 = lVar9 + 0xe8;
      local_790 = *(undefined1 *)(lVar9 + 0xf1);
      local_7a8 = lVar9 + 200;
      local_7b0 = lVar9 + 0x98;
      local_798 = *(undefined1 *)(lVar9 + 0xf0);
      local_7c0 = lVar9 + 0x78;
      local_7c8 = lVar9 + 0x60;
      SWidget::SWidgetConstruct(plVar14,lVar9,lVar9 + 0x30,lVar9 + 0x40);
      SHorizontalBox::Construct(plVar14,lVar9);
      if (((char)plVar8[5] < '\0') ||
         (cVar5 = (**(code **)(*plVar14 + 0x1e8))(plVar14), cVar5 != '\0')) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      pplVar21 = local_6e8;
      *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_690 = plVar14;
      local_688 = plVar8;
      FUN_1419a0d60(*local_6e8,&local_690);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar8 + 1;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        LOCK();
        plVar14 = plVar8 + 1;
        lVar9 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_350 != 0) {
        FMemory::Free();
      }
      FUN_140456c70(local_458);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
        LOCK();
        plVar8 = plVar10 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      FUN_140456c70(local_188);
      plVar8 = local_748;
      (**(code **)(*local_748 + 0x20))(local_748);
      if ((*DAT_146aee540 == 0) ||
         ((*(longlong *)(DAT_146b17150 + 0xab8) != 0 &&
          (cVar5 = (**(code **)(*plVar8 + 0x188))(plVar8), cVar5 != '\0')))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      lVar9 = local_770;
      if (((0 < local_768) && (0 < iStack_764)) && (bVar4)) {
        plVar8 = (longlong *)plVar8[10];
        lVar9 = operator_new(0x3a8);
        if (lVar9 == 0) {
          lVar13 = 0;
        }
        else {
          local_680 = *pplVar21;
          local_678 = pplVar21[1];
          if (local_678 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_678 + 1) = (int)local_678[1] + 1;
            UNLOCK();
          }
          lVar13 = FUN_1427ede60(lVar9,plVar8,&local_680);
        }
        plVar10 = (longlong *)0x0;
        plVar14 = (longlong *)operator_new(0x18);
        lVar9 = local_770;
        if (plVar14 != (longlong *)0x0) {
          *(undefined4 *)(plVar14 + 1) = 1;
          *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
          *plVar14 = (longlong)&PTR_FUN_144fb23d8;
          plVar14[2] = lVar13;
          plVar10 = plVar14;
        }
        plVar14 = (longlong *)(local_770 + 8);
        local_740 = lVar13;
        local_738 = plVar10;
        SharedPointerInternals::EnableSharedFromThis(&local_740,lVar13,lVar13);
        if (plVar14 != &local_740) {
          *plVar14 = lVar13;
          local_740 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x10,&local_738);
          plVar10 = local_738;
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        local_7c0 = local_7c0 & 0xffffffff00000000;
        local_7c8 = local_7c8 & 0xffffffff00000000;
        (**(code **)(*(longlong *)(*plVar14 + 8) + 0x198))
                  ((longlong *)(*plVar14 + 8),0,local_768,iStack_764);
        (**(code **)(*(longlong *)(*plVar14 + 8) + 0x130))((longlong *)(*plVar14 + 8),0);
        lVar19 = *plVar14;
        lVar15 = (**(code **)(*plVar8 + 0x30))(plVar8);
        uVar12 = (**(code **)(*plVar8 + 0x30))(plVar8);
        lVar13 = lVar19 + 8;
        local_7b8 = 0x3f800000;
        if (lVar19 == 0) {
          lVar13 = 0;
        }
        local_7c0 = local_7c0 & 0xffffffff00000000;
        local_7c8 = CONCAT44(local_7c8._4_4_,*(undefined4 *)(lVar15 + 0x1c0));
        FUN_142899f20(local_338,lVar13,0,uVar12);
        lVar13 = *plVar14 + 8;
        if (*plVar14 == 0) {
          lVar13 = 0;
        }
        (**(code **)(*plVar8 + 0x20))(plVar8,lVar13,local_338);
        FUN_1428aa700(local_338,0);
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
          plVar8 = (longlong *)(*plVar14 + 8);
          if (*plVar14 == 0) {
            plVar8 = (longlong *)0x0;
          }
          uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
          QueryPerformanceCounter(&local_6c8);
          (**(code **)(*plVar8 + 0x140))(plVar8,uVar12,0,0);
          QueryPerformanceCounter(&local_6d0);
          DAT_146ac3af4 = DAT_146ac3af4 + (local_6d0.s.LowPart - local_6c8._0_4_);
        }
        else {
          lVar13 = *plVar14;
          pDVar16 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar8 = TlsGetValue(*pDVar16);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)operator_new(0x18);
            if (plVar8 != (longlong *)0x0) {
              *plVar8 = 0;
              plVar8[1] = 0;
              *(undefined4 *)(plVar8 + 2) = 0;
            }
            TlsSetValue(*pDVar16,plVar8);
          }
          plVar10 = (longlong *)plVar8[1];
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)*plVar8;
            if (plVar10 == (longlong *)0x0) {
              plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar16 + 2);
              plVar8[1] = (longlong)plVar10;
              if (plVar10 == (longlong *)0x0) {
                puVar17 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar8[1] = (longlong)puVar17;
                lVar19 = 0x1f;
                do {
                  puVar11 = puVar17 + 0x20;
                  *puVar17 = puVar11;
                  lVar19 = lVar19 + -1;
                  puVar17 = puVar11;
                } while (lVar19 != 0);
                *puVar11 = 0;
                plVar10 = (longlong *)plVar8[1];
              }
              iVar20 = 0x20;
              *(undefined4 *)(plVar8 + 2) = 0x20;
            }
            else {
              plVar8[1] = (longlong)plVar10;
              iVar20 = 0x20;
              *plVar8 = 0;
              *(undefined4 *)(plVar8 + 2) = 0x20;
            }
          }
          else {
            iVar20 = (int)plVar8[2];
          }
          plVar8[1] = *plVar10;
          *(int *)(plVar8 + 2) = iVar20 + -1;
          *(undefined4 *)(plVar10 + 1) = 0xff;
          *plVar10 = (longlong)&PTR_FUN_143f3edd8;
          local_5e0 = 0;
          local_5d8 = 0;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_145001620;
          *(undefined1 *)(plVar10 + 3) = 0;
          lVar19 = lVar13 + 8;
          if (lVar13 == 0) {
            lVar19 = 0;
          }
          plVar10[4] = 0;
          plVar10[2] = lVar19;
          lVar13 = plVar10[4];
          piVar1 = (int *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_6f0 = lVar13;
          FUN_140445100(plVar10,0,0xff,1);
          if (lVar13 != 0) {
            LOCK();
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              FGraphEvent::Recycle(local_6f0);
            }
          }
        }
        puVar17 = (undefined8 *)operator_new(0x18);
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
        }
        else {
          plVar8 = (longlong *)(**(code **)(*(longlong *)(*plVar14 + 8) + 8))();
          lVar13 = *plVar8;
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
          *puVar17 = &PTR__scalar_deleting_destructor__1450014e0;
          local_750 = lVar13;
          local_748 = (longlong *)CONCAT44(iStack_764,local_768);
          puVar11 = (undefined8 *)operator_new(0x48);
          if (puVar11 != (undefined8 *)0x0) {
            lVar19 = lVar13;
            if (lVar13 != 0) {
              LOCK();
              *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
              UNLOCK();
              lVar19 = local_750;
            }
            *puVar11 = &PTR__purecall_144f96210;
            puVar11[1] = lVar19;
            if (lVar13 != 0) {
              LOCK();
              *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
              UNLOCK();
            }
            *(undefined4 *)(puVar11 + 3) = 4;
            puVar11[4] = 0;
            puVar11[5] = 0;
            *(undefined1 *)(puVar11 + 7) = 0;
            *puVar11 = &PTR_FUN_145001480;
            puVar11[2] = &PTR_LAB_1450014a0;
            *(undefined4 *)((longlong)puVar11 + 0x44) = local_748._4_4_;
            *(int *)(puVar11 + 8) = local_768;
            local_6c0 = lVar13;
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_6c0);
          }
          puVar17[1] = puVar11;
          puVar18 = puVar11 + 2;
          puVar17[2] = (longlong *)CONCAT44(iStack_764,local_768);
          if (puVar11 == (undefined8 *)0x0) {
            puVar18 = (undefined8 *)0x0;
          }
          FUN_141edf270(puVar18);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_750);
          pplVar21 = local_6e8;
        }
        plVar8 = (longlong *)0x0;
        plVar10 = (longlong *)operator_new(0x18);
        if (plVar10 != (longlong *)0x0) {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
          plVar10[2] = (longlong)puVar17;
          plVar8 = plVar10;
        }
        ppuVar3 = (undefined8 **)(lVar9 + 0x28);
        local_730 = puVar17;
        local_728 = plVar8;
        SharedPointerInternals::EnableSharedFromThis(&local_730,puVar17,puVar17);
        if (ppuVar3 != &local_730) {
          *ppuVar3 = puVar17;
          local_730 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x30);
          plVar8 = local_728;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          lVar13 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
        }
        plVar8 = *(longlong **)(lVar9 + 0x30);
        puVar17 = *ppuVar3;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
        }
        plVar10 = *pplVar21;
        plVar10[0x5e] = (longlong)puVar17;
        plVar14 = (longlong *)plVar10[0x5f];
        if (plVar8 != plVar14) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar14 = (longlong *)plVar10[0x5f];
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar14 + 8))();
            }
          }
          plVar10[0x5f] = (longlong)plVar8;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar8 + 1;
          lVar13 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar8 + 1;
            lVar13 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8);
              }
            }
          }
        }
        FUN_14289d030(local_338);
      }
      local_6d8 = pplVar21[1];
      local_720 = *pplVar21;
      local_708 = 0;
      local_6fb = 1;
      local_6fc = 1;
      local_718 = (longlong *)0x0;
      plStack_710 = (longlong *)0x0;
      local_700 = 0xbf800000;
      if (local_6d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_6d8 + 1) = (int)local_6d8[1] + 1;
        UNLOCK();
      }
      local_6e0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_718,&local_6d8);
      plVar8 = local_6d8;
      if (local_6d8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_6d8 + 1;
        lVar13 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_6d8)(local_6d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*local_6d8 + 8))(local_6d8,1);
          }
        }
      }
      plVar8 = (longlong *)GetMoviePlayer();
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_720);
      plVar8 = (longlong *)GetMoviePlayer();
      (**(code **)(*plVar8 + 0x40))(plVar8);
      *(undefined1 *)(lVar9 + 0x58) = 1;
      plVar8 = plStack_710;
      for (iVar20 = (int)local_708; iVar20 != 0; iVar20 = iVar20 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (plStack_710 != (longlong *)0x0) {
        FMemory::Free(plStack_710);
      }
      plVar8 = local_718;
      if (local_718 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_718 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_718)(local_718);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar20 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142209000 EndStreamingPause body=393 status=ok
// SIG undefined EndStreamingPause(void)

void FStreamingPauseRenderingModule::EndStreamingPause(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    plVar5 = (longlong *)GetMoviePlayer();
    (**(code **)(*plVar5 + 0x50))(plVar5,0);
    local_30 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x18) != &local_38) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_30);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 8) != &local_28) {
      *(undefined8 *)(param_1 + 8) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_20);
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x28) != &local_18) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_10);
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
    }
    FUN_141ee24f0(0);
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 142209190 FUN_142209190 body=272 status=ok
// SIG undefined FUN_142209190(void)

void FUN_142209190(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  (**(code **)(*(longlong *)param_1[2] + 0x140))((longlong *)param_1[2],uVar3,0,0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_145001620;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1422092a0 FUN_1422092a0 body=4 status=ok
// SIG undefined FUN_1422092a0(void)

undefined4 FUN_1422092a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 1422092b0 InitializeModule body=86 status=ok
// SIG undefined InitializeModule(void)

undefined8 *
FStaticallyLinkedModuleRegistrant<FStreamingPauseRenderingModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145001430;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142209310 ShutdownModule body=159 status=ok
// SIG undefined ShutdownModule(void)

void FStreamingPauseRenderingModule::ShutdownModule(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x38),0,0);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if ((*(int *)(param_1 + 0x50) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x48), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x48),0,0);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (DAT_146b17150 != 0) {
    FUN_142886b00(DAT_146b17150,0);
    FUN_142886b10(DAT_146b17150,0);
    return;
  }
  return;
}



// FUNCTION 1422093b0 FUN_1422093b0 body=455 status=ok
// SIG undefined FUN_1422093b0(void)

void FUN_1422093b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x38);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)&LAB_140623ed0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x40) != 0) &&
         (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  plVar3 = (longlong *)(param_1 + 0x48);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_140623ed8;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar4;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (local_18 != plVar3) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x50) != 0) &&
         (plVar2 = (longlong *)*plVar3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar3 != 0) {
          lVar4 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar3);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar4 = FMemory::Realloc(plVar5,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  FUN_142886b00(DAT_146b17150,plVar1);
  FUN_142886b10(DAT_146b17150,plVar3);
  return;
}



// FUNCTION 142209580 GetPlayerFactory body=114 status=ok
// SIG undefined GetPlayerFactory(void)

longlong * FMediaModule::GetPlayerFactory(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  puVar1 = puVar4 + *(int *)(param_1 + 0x60);
  while( true ) {
    if (puVar4 == puVar1) {
      return (longlong *)0x0;
    }
    plVar2 = (longlong *)*puVar4;
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,local_res8);
    if (*plVar3 == *param_2) break;
    puVar4 = puVar4 + 1;
  }
  return plVar2;
}



// FUNCTION 142209610 RegisterCaptureSupport body=120 status=ok
// SIG undefined RegisterCaptureSupport(void)

void FMediaModule::RegisterCaptureSupport(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + iVar1) {
LAB_14220965e:
      *(int *)(param_1 + 0x10) = iVar1 + 1;
      if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 8))
        ;
      }
      *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 8)) = param_2;
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) != -1) {
        return;
      }
      goto LAB_14220965e;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 142209690 RegisterPlayerFactory body=120 status=ok
// SIG undefined RegisterPlayerFactory(void)

void FMediaModule::RegisterPlayerFactory(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x60);
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + iVar1) {
LAB_1422096de:
      *(int *)(param_1 + 0x60) = iVar1 + 1;
      if (*(int *)(param_1 + 100) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x58));
      }
      *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x58)) = param_2;
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) != -1) {
        return;
      }
      goto LAB_1422096de;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 142209710 SetTimeSource body=191 status=ok
// SIG undefined SetTimeSource(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMediaModule::SetTimeSource(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
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
  puVar3 = (undefined8 *)(param_1 + 0xe8);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar3;
    plVar6 = *(longlong **)(param_1 + 0xf0);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0xec) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1422097d0 TickPostEngine body=495 status=ok
// SIG undefined TickPostEngine(void)

void FMediaModule::TickPostEngine(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar9 = *(int *)(param_1 + 0x38);
  iVar8 = iVar9 + -1;
  if (-1 < iVar8) {
    lVar7 = (longlong)iVar8 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      plVar6 = *(longlong **)(lVar2 + 8 + lVar7);
      plVar5 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar9 = (int)plVar6[1];
        bVar10 = iVar9 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        while (plVar5 = (longlong *)0x0, !bVar10) {
          LOCK();
          bVar10 = iVar9 == (int)plVar6[1];
          if (bVar10) {
            *(int *)(plVar6 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar5 = plVar6;
            if ((plVar6 != (longlong *)0x0) &&
               (puVar3 = *(undefined8 **)(lVar2 + lVar7), puVar3 != (undefined8 *)0x0)) {
              (**(code **)*puVar3)
                        (puVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
              goto LAB_14220985f;
            }
            break;
          }
          LOCK();
          iVar9 = (int)plVar6[1];
          bVar10 = iVar9 == 0;
          if (bVar10) {
            *(int *)(plVar6 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x30,iVar8,1,1);
      plVar6 = plVar5;
LAB_14220985f:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      lVar7 = lVar7 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar9 = *(int *)(param_1 + 0x38);
  }
  iVar9 = iVar9 + -1;
  if (-1 < iVar9) {
    lVar7 = (longlong)iVar9 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      plVar6 = *(longlong **)(lVar2 + 8 + lVar7);
      plVar5 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar6[1];
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(plVar6 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar5 = (longlong *)0x0, !bVar10) {
          LOCK();
          bVar10 = iVar8 == (int)plVar6[1];
          if (bVar10) {
            *(int *)(plVar6 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar5 = plVar6;
            if ((plVar6 != (longlong *)0x0) &&
               (plVar4 = *(longlong **)(lVar2 + lVar7), plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 0x18))
                        (plVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
              goto LAB_14220990f;
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar6[1];
          bVar10 = iVar8 == 0;
          if (bVar10) {
            *(int *)(plVar6 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x30,iVar9,1,1);
      plVar6 = plVar5;
LAB_14220990f:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      lVar7 = lVar7 + -0x10;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}



// FUNCTION 1422099c0 TickPostRender body=277 status=ok
// SIG undefined TickPostRender(void)

void FMediaModule::TickPostRender(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar8) {
    lVar7 = (longlong)iVar8 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      plVar6 = *(longlong **)(lVar2 + 8 + lVar7);
      plVar5 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = (longlong *)0x0, !bVar9) {
          LOCK();
          bVar9 = iVar4 == (int)plVar6[1];
          if (bVar9) {
            *(int *)(plVar6 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar5 = plVar6;
            if ((plVar6 != (longlong *)0x0) &&
               (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x10))
                        (plVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
              goto LAB_142209a4f;
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar6 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x30,iVar8,1,1);
      plVar6 = plVar5;
LAB_142209a4f:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      }
      lVar7 = lVar7 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 142209ae0 FUN_142209ae0 body=710 status=ok
// SIG undefined FUN_142209ae0(void)

void FUN_142209ae0(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined1 local_res10 [8];
  
  puVar3 = *(undefined8 **)(param_1 + 0xe8);
  plVar18 = (longlong *)0x0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_142209bdd;
  uVar2 = *(undefined1 *)(param_1 + 0xe0);
  plVar11 = (longlong *)(**(code **)*puVar3)(puVar3,local_res10);
  lVar19 = *plVar11;
  if (*(longlong *)(param_1 + 0x40) == -0x8000000000000000) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar17 = lVar19 - *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x20) = lVar17;
    if ((double)DAT_1465316b0 <= (double)lVar17 * 0.0001) {
      dVar7 = (double)DAT_1465316b0 * 10000.0 + 0.5;
      lVar14 = (longlong)dVar7;
      uVar21 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if (0.0 <= dVar7) {
        if ((lVar14 != -0x8000000000000000) && ((double)lVar14 != dVar7)) {
          auVar6._8_4_ = SUB84(dVar7,0);
          auVar6._0_8_ = dVar7;
          auVar6._12_4_ = uVar21;
          uVar12 = movmskpd((int)lVar17,auVar6);
          uVar13 = -(ulonglong)(uVar12 & 1);
          goto LAB_142209bc5;
        }
      }
      else if ((lVar14 != -0x8000000000000000) && ((double)lVar14 != dVar7)) {
        auVar5._8_4_ = SUB84(dVar7,0);
        auVar5._0_8_ = dVar7;
        auVar5._12_4_ = uVar21;
        uVar12 = movmskpd((int)lVar17,auVar5);
        uVar13 = (ulonglong)(uVar12 & 1 ^ 1);
LAB_142209bc5:
        dVar7 = (double)(longlong)(lVar14 + uVar13);
      }
      *(longlong *)(param_1 + 0x20) = (longlong)dVar7;
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar19;
  *(undefined1 *)(param_1 + 0x48) = uVar2;
LAB_142209bdd:
  iVar16 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar16) {
    lVar19 = (longlong)iVar16 << 4;
    do {
      lVar17 = *(longlong *)(param_1 + 0x30);
      plVar11 = *(longlong **)(lVar19 + 8 + lVar17);
      plVar15 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        iVar9 = (int)plVar11[1];
        bVar20 = iVar9 == 0;
        if (bVar20) {
          *(int *)(plVar11 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        while (plVar15 = plVar18, !bVar20) {
          LOCK();
          bVar20 = iVar9 == (int)plVar11[1];
          if (bVar20) {
            *(int *)(plVar11 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar20) {
            plVar15 = plVar11;
            if ((plVar11 != (longlong *)0x0) &&
               (plVar4 = *(longlong **)(lVar19 + lVar17), plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 8))
                        (plVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
              goto LAB_142209c4e;
            }
            break;
          }
          LOCK();
          iVar9 = (int)plVar11[1];
          bVar20 = iVar9 == 0;
          if (bVar20) {
            *(int *)(plVar11 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x30,iVar16,1,1);
      plVar11 = plVar15;
LAB_142209c4e:
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar11 + 1;
        lVar17 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      lVar19 = lVar19 + -0x10;
      iVar16 = iVar16 + -1;
    } while (-1 < iVar16);
  }
  plVar11 = (longlong *)(param_1 + 200);
  bVar20 = false;
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  iVar16 = *(int *)(param_1 + 0xdc);
  iVar9 = *(int *)(param_1 + 0xd0) + -1;
  lVar19 = (longlong)iVar9;
  if (-1 < iVar9) {
    lVar17 = lVar19 << 4;
    bVar20 = false;
    do {
      if (((*(int *)(lVar17 + 8 + *plVar11) == 0) ||
          (plVar15 = *(longlong **)(lVar17 + *plVar11), plVar15 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar15 + 0x40))(), cVar8 == '\0')) {
        bVar20 = true;
      }
      lVar17 = lVar17 + -0x10;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
    iVar16 = *(int *)(param_1 + 0xdc);
  }
  *(int *)(param_1 + 0xdc) = iVar16 + -1;
  if ((bVar20) && (iVar16 + -1 < 1)) {
    iVar16 = *(int *)(param_1 + 0xd0);
    plVar15 = plVar18;
    iVar9 = iVar16;
    if (0 < iVar16) {
      do {
        if (((*(int *)((longlong)plVar18 + *plVar11 + 8) == 0) ||
            (plVar4 = *(longlong **)((longlong)plVar18 + *plVar11), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x10))(), cVar8 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar11,plVar15,1,1);
        }
        else {
          plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
          plVar18 = plVar18 + 2;
        }
        iVar9 = *(int *)(param_1 + 0xd0);
      } while ((int)plVar15 < iVar9);
    }
    iVar10 = iVar9 * 2;
    if (iVar10 < 3) {
      iVar10 = 2;
    }
    *(int *)(param_1 + 0xd8) = iVar10;
    if ((iVar10 < iVar16) && (*(int *)(param_1 + 0xd4) != iVar9)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar11);
    }
  }
  return;
}



// FUNCTION 142209db0 UnregisterCaptureSupport body=235 status=ok
// SIG undefined UnregisterCaptureSupport(void)

void FMediaModule::UnregisterCaptureSupport(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 8) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x10) = iVar6;
  }
  return;
}



// FUNCTION 142209ea0 FUN_142209ea0 body=56 status=ok
// SIG undefined FUN_142209ea0(void)

void FUN_142209ea0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1415d42a0(param_1 + 0x68,L"FMediaTicker",0,0xffffffff,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return;
}



// FUNCTION 142209ee0 FUN_142209ee0 body=128 status=ok
// SIG undefined FUN_142209ee0(void)

void FUN_142209ee0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((*(int *)(param_1 + 100) < 0) && (*(int *)(param_1 + 100) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x58,0);
    return;
  }
  return;
}



// FUNCTION 142209f60 `scalar_deleting_destructor' body=286 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0x1e];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  param_1[0xd] = &PTR_IsPromotedBuild_145001850;
  param_1[0xe] = &PTR_AddTickable_145001880;
  FUN_1415b5910(param_1[0x17]);
  param_1[0x17] = 0;
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x15);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  param_1[0xe] = &PTR__purecall_143f9a338;
  param_1[0xd] = &PTR_IsPromotedBuild_143f60558;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 6);
  param_1[3] = &PTR__purecall_144159598;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14220a090 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaClock::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 3);
  *param_1 = &PTR__purecall_144159598;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14220a0e0 `scalar_deleting_destructor' body=125 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaTicker::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_145001850;
  param_1[1] = &PTR_AddTickable_145001880;
  FUN_1415b5910(param_1[10]);
  param_1[10] = 0;
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  param_1[1] = &PTR__purecall_143f9a338;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14220a160 AddSink body=172 status=ok
// SIG undefined AddSink(void)

void FMediaClock::AddSink(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)param_2[1];
  uVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  local_18 = uVar4;
  local_10 = plVar3;
  iVar5 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(plVar1,&local_18);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar5 + 1;
    if (*(int *)(param_1 + 0x24) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar5);
    }
    puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar1);
    *puVar6 = uVar4;
    puVar6[1] = plVar3;
  }
  else if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 14220a210 AddTickable body=231 status=ok
// SIG undefined AddTickable(void)

void FMediaTicker::AddTickable(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  BOOL BVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = uVar2;
  local_20 = plVar3;
  iVar5 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(param_1 + 0x38,&local_28);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar5 + 1;
    if (*(int *)(param_1 + 0x44) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar5);
    }
    puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x38));
    *puVar6 = uVar2;
    puVar6[1] = plVar3;
  }
  else if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014220a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14220a300 InitializeModule body=269 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FMediaModule>::InitializeModule(void)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  
  _Dst = (undefined8 *)operator_new(0xf8);
  if (_Dst != (undefined8 *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0xf8);
    *_Dst = &PTR__scalar_deleting_destructor__145001748;
    _Dst[2] = 0;
    _Dst[3] = &PTR_FUN_145001828;
    _Dst[4] = 0;
    _Dst[6] = 0;
    _Dst[7] = 0;
    _Dst[8] = 0x8000000000000000;
    _Dst[0xb] = 0;
    _Dst[0xc] = 0;
    _Dst[0xd] = &PTR_IsPromotedBuild_145001850;
    _Dst[0xe] = &PTR_AddTickable_145001880;
    InitializeCriticalSection((LPCRITICAL_SECTION)(_Dst + 0xf));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(_Dst + 0xf),4000);
    *(undefined1 *)(_Dst + 0x14) = 0;
    _Dst[0x15] = 0;
    _Dst[0x16] = 0;
    uVar1 = FUN_1415ab270(1);
    _Dst[0x17] = uVar1;
    _Dst[0x19] = 0;
    _Dst[0x1a] = 0;
    _Dst[0x1b] = 2;
    _Dst[0x1d] = 0;
    _Dst[0x1e] = 0;
    return _Dst;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14220a410 RemoveAtSwapImpl body=220 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x10);
    iVar5 = param_3;
    do {
      plVar2 = (longlong *)*plVar4;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar3 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(iVar5 - iVar3) * 0x10 + *param_1),(longlong)iVar3 << 4);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14220a4f0 RemoveSink body=100 status=ok
// SIG undefined RemoveSink(void)

void FMediaClock::RemoveSink(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *local_res8 [4];
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_res8[0] = &local_18;
  TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
  RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(param_1 + 0x18,local_res8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_10 != (longlong *)0x0)) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
  return;
}



// FUNCTION 14220a560 RemoveTickable body=162 status=ok
// SIG undefined RemoveTickable(void)

void FMediaTicker::RemoveTickable(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined8 *local_res8;
  undefined8 local_18;
  longlong *local_10;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_res8 = &local_18;
  TArray<TWeakPtr<IBusListener,1>,FDefaultAllocator>::
  RemoveAll<<lambda_75c4bb420badbf6619ba8f8d778f9e7f>_>(param_1 + 0x38,&local_res8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_10 != (longlong *)0x0)) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014220a5fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14220a610 Run body=154 status=ok
// SIG undefined Run(void)

undefined8 FMediaTicker::Run(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  while( true ) {
    LOCK();
    bVar2 = *(char *)(param_1 + 0x38) == '\0';
    if (bVar2) {
      *(char *)(param_1 + 0x38) = '\0';
    }
    UNLOCK();
    if (!bVar2) break;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))
                      (*(longlong **)(param_1 + 0x50),0x346dc5d638865,0);
    if (cVar1 != '\0') {
      TickTickables(param_1);
      FUN_1416b1760(0x3ba3d70a);
    }
  }
  return 0;
}



// FUNCTION 14220a6d0 TickTickables body=713 status=ok
// SIG undefined TickTickables(void)

void FMediaTicker::TickTickables(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  BOOL BVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  iVar10 = *(int *)(param_1 + 0x48) + -1;
  if (-1 < iVar10) {
    lVar13 = (longlong)iVar10 << 4;
    do {
      uVar6 = local_30;
      lVar3 = *(longlong *)(param_1 + 0x40);
      plVar9 = *(longlong **)(lVar3 + 8 + lVar13);
      plVar12 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar9[1];
        bVar14 = iVar8 == 0;
        if (bVar14) {
          *(int *)(plVar9 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar12 = (longlong *)0x0, !bVar14) {
          LOCK();
          bVar14 = iVar8 == (int)plVar9[1];
          if (bVar14) {
            *(int *)(plVar9 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar14) {
            plVar12 = plVar9;
            if ((plVar9 != (longlong *)0x0) && (lVar3 = *(longlong *)(lVar3 + lVar13), lVar3 != 0))
            {
              LOCK();
              *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
              UNLOCK();
              lVar11 = (longlong)(int)local_30;
              iVar8 = (int)local_30 + 1;
              local_30 = CONCAT44(local_30._4_4_,iVar8);
              if (local_30._4_4_ < iVar8) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar6 & 0xffffffff);
              }
              local_38[lVar11 * 2] = lVar3;
              (local_38 + lVar11 * 2)[1] = (longlong)plVar9;
              goto LAB_14220a78e;
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar9[1];
          bVar14 = iVar8 == 0;
          if (bVar14) {
            *(int *)(plVar9 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x40,iVar10,1,1);
      plVar9 = plVar12;
LAB_14220a78e:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        lVar3 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      lVar13 = lVar13 + -0x10;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((int)local_30 < 1) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  }
  else {
    plVar12 = local_38 + (longlong)(int)local_30 * 2;
    for (plVar9 = local_38; plVar9 != plVar12; plVar9 = plVar9 + 2) {
      plVar4 = (longlong *)plVar9[1];
      puVar5 = (undefined8 *)*plVar9;
      if (plVar4 == (longlong *)0x0) {
LAB_14220a8a1:
        if (plVar4 != (longlong *)0x0) {
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5);
          }
          LOCK();
          plVar2 = plVar4 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        LOCK();
        iVar10 = (int)plVar4[1];
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(plVar4 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar10 == (int)plVar4[1];
          if (bVar14) {
            *(int *)(plVar4 + 1) = iVar10 + 1;
          }
          UNLOCK();
          if (bVar14) goto LAB_14220a8a1;
          LOCK();
          iVar10 = (int)plVar4[1];
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(plVar4 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  if ((int)local_30 != 0) {
    plVar9 = local_38 + 1;
    iVar10 = (int)local_30;
    do {
      plVar12 = (longlong *)*plVar9;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      plVar9 = plVar9 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_38 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(local_38);
  return;
}



// FUNCTION 14220a9b0 FUN_14220a9b0 body=356 status=ok
// SIG undefined FUN_14220a9b0(void)

undefined8 * FUN_14220a9b0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *local_18;
  longlong *plStack_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aee570) && (_Init_thread_header(&DAT_146aee570), DAT_146aee570 == -1))
  {
    local_18 = (undefined8 *)operator_new(8);
    if (local_18 == (undefined8 *)0x0) {
      local_18 = (undefined8 *)0x0;
    }
    else {
      *local_18 = 0;
    }
    plStack_10 = (longlong *)operator_new(0x18);
    if (plStack_10 != (longlong *)0x0) {
      *(undefined4 *)(plStack_10 + 1) = 1;
      *plStack_10 = (longlong)&PTR_FUN_144d50338;
      *(undefined4 *)((longlong)plStack_10 + 0xc) = 1;
      plStack_10[2] = (longlong)local_18;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    plVar1 = plStack_10;
    DAT_146aee560 = local_18;
    DAT_146aee568 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_10 + 1) = (int)plStack_10[1] + 1;
      UNLOCK();
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_10 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
    }
    atexit(FUN_143ea7c50);
    _Init_thread_footer(&DAT_146aee570);
  }
  *param_2 = DAT_146aee560;
  plVar1 = DAT_146aee568;
  param_2[1] = DAT_146aee568;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14220ab20 `scalar_deleting_destructor' body=118 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateNullShaderResourceManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR__scalar_deleting_destructor__144f95e10;
  FUN_1420a45f0(param_1 + 1);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  *param_1 = &PTR_FUN_143fca6f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14220aba0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FSlateFontTextureNull::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FSlateFontTextureNull",0x2c);
  return param_2;
}



// FUNCTION 14220abe0 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateFontTextureNull::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 7);
  FUN_141edd2d0(param_1 + 1);
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14220ac80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSlateFontAtlasNull::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FSlateFontAtlas::~FSlateFontAtlas();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14220acc0 CreateFontAtlas body=173 status=ok
// SIG undefined CreateFontAtlas(void)

undefined8 * FSlateNullFontAtlasFactory::CreateFontAtlas(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FSlateFontAtlas::FSlateFontAtlas
              (puVar1,(longlong)(float)*(int *)(param_1 + 8) & 0xffffffff,
               (longlong)(float)*(int *)(param_1 + 8) & 0xffffffff);
    *puVar1 = &PTR__scalar_deleting_destructor__145001998;
    puVar1[1] = &PTR_LAB_1450019b8;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 14220ad70 FUN_14220ad70 body=43 status=ok
// SIG undefined FUN_14220ad70(void)

undefined8 * FUN_14220ad70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_1450019c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14220ada0 FUN_14220ada0 body=573 status=ok
// SIG undefined FUN_14220ada0(void)

undefined8 * FUN_14220ada0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uStackX_14;
  
  puVar9 = (undefined8 *)0x0;
  FUN_14220b130();
  puVar7 = (undefined8 *)operator_new(0xf8);
  if (puVar7 == (undefined8 *)0x0) {
    plVar12 = (longlong *)((ulonglong)uStackX_14 << 0x20);
    plVar11 = (longlong *)((ulonglong)uStackX_14 << 0x20);
    puVar10 = puVar9;
    puVar7 = puVar9;
  }
  else {
    plVar11 = *(longlong **)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    plVar12 = *(longlong **)(param_1 + 0x10);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    *puVar7 = &PTR__scalar_deleting_destructor__144f95e40;
    puVar7[1] = uVar5;
    puVar7[2] = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 2;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 2;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 2;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 2;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 2;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0x12));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar7 + 0x12),4000);
    *(undefined2 *)(puVar7 + 0x17) = 0;
    *puVar7 = &PTR_FUN_145001a50;
    puVar7[0x18] = uVar4;
    puVar7[0x19] = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0x1a));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar7 + 0x1a),4000);
    puVar10 = (undefined8 *)0x3;
  }
  puVar8 = (undefined8 *)operator_new(0x18);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = puVar7;
    puVar9 = puVar8;
  }
  *param_2 = puVar7;
  param_2[1] = puVar9;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar7,puVar7);
  if ((((ulonglong)puVar10 & 2) != 0) &&
     (puVar10 = (undefined8 *)(ulonglong)((uint)puVar10 & 0xfffffffd), plVar12 != (longlong *)0x0))
  {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if ((((ulonglong)puVar10 & 1) != 0) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 14220afe0 CreateSlateFontAtlasFactory body=130 status=ok
// SIG undefined CreateSlateFontAtlasFactory(void)

undefined8 *
FSlateNullRendererModule::CreateSlateFontAtlasFactory(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x800;
    *puVar1 = &PTR_LAB_1450019c8;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143fd0100;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 14220b090 FUN_14220b090 body=148 status=ok
// SIG undefined FUN_14220b090(void)

longlong FUN_14220b090(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  plVar4 = *(longlong **)(param_1 + 200);
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
  FUN_14209f2a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14220b130 FUN_14220b130 body=886 status=ok
// SIG undefined FUN_14220b130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14220b130(longlong param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar9 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 8);
  if (*pplVar1 == (longlong *)0x0) {
    lVar4 = operator_new(0x170);
    plVar5 = plVar9;
    if (lVar4 != 0) {
      plVar5 = (longlong *)operator_new(0x10);
      local_48 = plVar9;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 0x800;
        *plVar5 = (longlong)&PTR_LAB_1450019c8;
        local_48 = plVar5;
      }
      plVar5 = (longlong *)operator_new(0x18);
      local_40 = plVar9;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_FUN_143fd0100;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = (longlong)local_48;
        local_40 = plVar5;
      }
      SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
      plVar5 = (longlong *)FUN_1417ef550(lVar4,&local_48);
    }
    plVar6 = (longlong *)operator_new(0x18);
    plVar7 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      plVar6[2] = (longlong)plVar5;
      plVar7 = plVar6;
    }
    local_58 = SUB84(plVar5,0);
    uStack_54 = (undefined4)((ulonglong)plVar5 >> 0x20);
    uStack_50 = SUB84(plVar7,0);
    uStack_4c = (undefined4)((ulonglong)plVar7 >> 0x20);
    SharedPointerInternals::EnableSharedFromThis(&local_58,plVar5,plVar5);
    lVar4 = operator_new(0x40);
    plVar5 = plVar9;
    if (lVar4 != 0) {
      local_38._4_4_ = uStack_54;
      local_38._0_4_ = local_58;
      local_38._8_4_ = uStack_50;
      local_38._12_4_ = uStack_4c;
      lVar8 = 0;
      if (local_38._8_8_ != 0) {
        LOCK();
        piVar2 = (int *)(local_38._8_8_ + 8);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        lVar8 = CONCAT44(uStack_4c,uStack_50);
      }
      uStack_1c = uStack_4c;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      local_28 = local_58;
      uStack_24 = uStack_54;
      uStack_20 = uStack_50;
      plVar5 = (longlong *)FUN_1417f00e0(lVar4,&local_28,local_38);
    }
    plVar6 = (longlong *)operator_new(0x18);
    plVar7 = plVar9;
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_144f95618;
      plVar6[2] = (longlong)plVar5;
      plVar7 = plVar6;
    }
    local_68 = plVar5;
    local_60 = plVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_68,plVar5,plVar5);
    if (pplVar1 != &local_68) {
      *pplVar1 = plVar5;
      local_68 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_60);
      plVar7 = local_60;
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
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar5 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
  }
  pplVar1 = (longlong **)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar7 = (longlong *)operator_new(0x60);
    plVar5 = plVar9;
    if (plVar7 != (longlong *)0x0) {
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      *(undefined4 *)(plVar7 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)plVar7 + 0x44) = 0;
      plVar7[10] = 0;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      *plVar7 = (longlong)&PTR__scalar_deleting_destructor__145001898;
      plVar7[1] = (longlong)&PTR_LAB_1450018c0;
      plVar5 = plVar7;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
      plVar7[2] = (longlong)plVar5;
      plVar9 = plVar7;
    }
    if (plVar5 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
    }
    else {
      local_78 = plVar5 + 1;
    }
    plVar7 = local_78;
    local_70 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_78,plVar5,plVar5);
    if (pplVar1 != &local_78) {
      *pplVar1 = plVar7;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_70);
      plVar9 = local_70;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    _DAT_1469eaf18 = *pplVar1;
  }
  return;
}



// FUNCTION 14220b4b0 DrawWindows body=60 status=ok
// SIG undefined DrawWindows(void)

void FSlateNullRenderer::DrawWindows(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = puVar1 + (longlong)(int)param_2[1] * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    FUN_141852230(*puVar1);
  }
  return;
}



// FUNCTION 14220b4f0 FUN_14220b4f0 body=110 status=ok
// SIG undefined FUN_14220b4f0(void)

undefined * FUN_14220b4f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aee5a8) {
    _Init_thread_header(&DAT_146aee5a8);
    if (DAT_146aee5a8 == -1) {
      atexit((_func_5014 *)&LAB_143ea7ca0);
      _Init_thread_footer(&DAT_146aee5a8);
    }
  }
  FUN_141804c70(&DAT_146aee578);
  return &DAT_146aee578;
}



// FUNCTION 14220b560 FUN_14220b560 body=259 status=ok
// SIG undefined FUN_14220b560(void)

undefined8 * FUN_14220b560(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar4 = *(longlong **)(param_1 + 0xc0);
  uVar7 = 0;
  bVar8 = plVar4 == (longlong *)0x0;
  if (bVar8) {
    puVar6 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,local_18);
    uVar7 = *puVar6;
  }
  *param_2 = uVar7;
  param_2[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  plVar4 = plStack_20;
  if (bVar8) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
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
  if ((!bVar8) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 14220b670 FUN_14220b670 body=63 status=ok
// SIG undefined FUN_14220b670(void)

undefined8 * FUN_14220b670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__1450019e8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14220b6b0 PrepareToTakeScreenshot body=127 status=ok
// SIG undefined PrepareToTakeScreenshot(void)

void FSlateNullRenderer::PrepareToTakeScreenshot(undefined8 param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_3 + 0xc);
    iVar2 = 0;
    iVar3 = (param_2[3] - param_2[1]) * (param_2[2] - *param_2);
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar1 != iVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_3);
      iVar1 = *(int *)((longlong)param_3 + 0xc);
      iVar2 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar2 + iVar3;
    if (iVar1 < iVar2 + iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(*param_3 + (longlong)iVar2 * 4),0,(longlong)iVar3 << 2)
    ;
  }
  return;
}



// FUNCTION 14220b730 CreateReplayStreamer body=303 status=ok
// SIG undefined CreateReplayStreamer(void)

undefined8 *
FNullNetworkReplayStreamingFactory::CreateReplayStreamer(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)operator_new(0x80);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_145002d20;
    puVar5 = puVar2 + 1;
    *puVar5 = &PTR__purecall_143f740d8;
    plVar3 = (longlong *)FUN_1404cfca0();
    iVar1 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
    }
    *(undefined8 **)(*plVar3 + (longlong)iVar1 * 8) = puVar5;
    *puVar2 = &PTR__scalar_deleting_destructor__145002fe8;
    *puVar5 = &PTR_FUN_1450031d8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = &PTR_FUN_145002f10;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x74) = 0;
    puVar2[0xf] = 0;
  }
  puVar5 = (undefined8 *)0x0;
  *param_2 = puVar2;
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar2;
    puVar5 = puVar4;
  }
  param_2[1] = puVar5;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar2,puVar2);
  return param_2;
}



// FUNCTION 14220b860 ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(void)

void TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
     ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14220b8d0 ~TArray<FReplayEventListItem,FDefaultAllocator> body=168 status=ok
// SIG undefined ~TArray<FReplayEventListItem,FDefaultAllocator>(void)

void TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__145002c38;
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_144050e60;
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 14220b980 ~FEnumerateStreamsResult body=106 status=ok
// SIG undefined ~FEnumerateStreamsResult(void)

void FEnumerateStreamsResult::~FEnumerateStreamsResult(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 5);
  plVar1 = (longlong *)param_1[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
  ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 14220ba00 `scalar_deleting_destructor' body=88 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FEnumerateEventsResult::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  param_1[2] = &PTR__scalar_deleting_destructor__145002cb8;
  TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
            (param_1 + 3);
  param_1[2] = &PTR_FUN_144050e60;
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14220ba60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FEnumerateStreamsResult::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FEnumerateStreamsResult();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14220baa0 FUN_14220baa0 body=72 status=ok
// SIG undefined FUN_14220baa0(void)

undefined8 * FUN_14220baa0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14220baf0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNullCheckpointListItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14220bb50 `scalar_deleting_destructor' body=163 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNullNetworkReplayStreamer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144050e60;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1404bf750(param_1 + 1);
  *param_1 = &PTR_FUN_145002d20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14220bc00 FUN_14220bc00 body=72 status=ok
// SIG undefined FUN_14220bc00(void)

undefined8 * FUN_14220bc00(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14220bc50 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FReplayEventList::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145002cb8;
  TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
            (param_1 + 1);
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14220bca0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FReplayEventListItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145002c38;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14220bd10 FUN_14220bd10 body=72 status=ok
// SIG undefined FUN_14220bd10(void)

undefined8 * FUN_14220bd10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14220bd60 FUN_14220bd60 body=43 status=ok
// SIG undefined FUN_14220bd60(void)

undefined8 * FUN_14220bd60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145002d20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14220bd90 FUN_14220bd90 body=110 status=ok
// SIG undefined FUN_14220bd90(void)

void FUN_14220bd90(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145003380;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1450033c8;
  }
  return;
}



// FUNCTION 14220be00 FUN_14220be00 body=110 status=ok
// SIG undefined FUN_14220be00(void)

void FUN_14220be00(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1450034a0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1450034e8;
  }
  return;
}



// FUNCTION 14220be70 FUN_14220be70 body=110 status=ok
// SIG undefined FUN_14220be70(void)

void FUN_14220be70(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145003410;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_145003458;
  }
  return;
}



// FUNCTION 14220bee0 FUN_14220bee0 body=110 status=ok
// SIG undefined FUN_14220bee0(void)

void FUN_14220bee0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1450032f0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_145003338;
  }
  return;
}



// FUNCTION 14220bf50 FUN_14220bf50 body=110 status=ok
// SIG undefined FUN_14220bf50(void)

void FUN_14220bf50(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145003260;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_1450032a8;
  }
  return;
}



// FUNCTION 14220bfc0 DeleteFinishedStream body=302 status=ok
// SIG undefined DeleteFinishedStream(void)

void FNullNetworkReplayStreamer::DeleteFinishedStream
               (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined **local_28;
  undefined4 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_20 = 6;
  local_28 = &PTR_FUN_1440104c8;
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar3 = (undefined8 *)GetFinalFilename(&local_18,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar5);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)0x0;
  if (cVar1 != '\0') {
    GetStreamDirectory(&local_18,param_2);
    cVar1 = FPaths::DirectoryExists(&local_18);
    if (cVar1 == '\0') {
      local_20 = 2;
    }
    else {
      plVar4 = (longlong *)FUN_1415c3d50();
      puVar5 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar5 = local_18;
      }
      cVar1 = (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0,1);
      if (cVar1 != '\0') {
        local_20 = 0;
      }
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar1 != '\0')) {
    if ((int)param_3[1] != 0) {
      plVar2 = (longlong *)*param_3;
    }
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_28);
  }
  return;
}



// FUNCTION 14220c100 FUN_14220c100 body=364 status=ok
// SIG undefined FUN_14220c100(void)

void FUN_14220c100(longlong *param_1,undefined8 param_2,longlong **param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_3 + 1) == 0) || (*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_3 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_3 != &local_18) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003380;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1450033c8;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0x170))(param_1,param_2,&local_28);
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
  return;
}



// FUNCTION 14220c270 DownloadHeader body=46 status=ok
// SIG undefined DownloadHeader(void)

void FNullNetworkReplayStreamer::DownloadHeader(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined **local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)0x0;
  local_18 = &PTR_FUN_1440104c8;
  local_10 = 0;
  if (*(int *)(param_2 + 1) != 0) {
    plVar1 = (longlong *)*param_2;
  }
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}



// FUNCTION 14220c2a0 FUN_14220c2a0 body=347 status=ok
// SIG undefined FUN_14220c2a0(void)

void FUN_14220c2a0(longlong *param_1,longlong **param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_2 + 1) == 0) || (*param_2 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_2 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_2 != &local_18) && (*(int *)(param_2 + 1) != 0)) &&
       (plVar2 = *param_2, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003380;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1450033c8;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0x108))(param_1,&local_28);
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
  return;
}



// FUNCTION 14220c400 DownloadHeader body=121 status=ok
// SIG undefined DownloadHeader(void)

void INetworkReplayStreamer::DownloadHeader(longlong *param_1)

{
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x108))(param_1,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14220c4b0 FUN_14220c4b0 body=91 status=ok
// SIG undefined FUN_14220c4b0(void)

void FUN_14220c4b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar1 = (longlong *)0x0;
  local_30 = 1;
  local_20 = 0;
  local_38 = &PTR__scalar_deleting_destructor__145002d08;
  local_28 = &PTR__scalar_deleting_destructor__145002cb8;
  local_18 = 0;
  if (*(int *)(param_3 + 1) != 0) {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  local_28 = &PTR__scalar_deleting_destructor__145002cb8;
  TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
            (&local_20);
  return;
}



// FUNCTION 14220c510 FUN_14220c510 body=380 status=ok
// SIG undefined FUN_14220c510(void)

void FUN_14220c510(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_4 + 1) == 0) || (*param_4 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_4 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_4 != &local_18) && (*(int *)(param_4 + 1) != 0)) &&
       (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_1450034a0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1450034e8;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,&local_28);
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
  return;
}



// FUNCTION 14220c690 FUN_14220c690 body=364 status=ok
// SIG undefined FUN_14220c690(void)

void FUN_14220c690(longlong *param_1,undefined8 param_2,longlong **param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_3 + 1) == 0) || (*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_3 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_3 != &local_18) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_1450034a0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1450034e8;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,&local_28);
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
  return;
}



// FUNCTION 14220c800 FUN_14220c800 body=146 status=ok
// SIG undefined FUN_14220c800(void)

void FUN_14220c800(void)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *in_R9;
  undefined **local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)0x0;
  local_30 = 1;
  local_28 = 0;
  local_38 = &PTR__scalar_deleting_destructor__145002d00;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if (*(int *)(in_R9 + 1) != 0) {
    plVar1 = (longlong *)*in_R9;
  }
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
  ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_28);
  return;
}



// FUNCTION 14220c8a0 EnumerateRecentStreams body=50 status=ok
// SIG undefined EnumerateRecentStreams(void)

void FNullNetworkReplayStreamer::EnumerateRecentStreams(longlong *param_1,undefined8 param_2)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*param_1 + 0x1b0))(param_1,param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14220c8e0 FUN_14220c8e0 body=380 status=ok
// SIG undefined FUN_14220c8e0(void)

void FUN_14220c8e0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_4 + 1) == 0) || (*param_4 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_4 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_4 != &local_18) && (*(int *)(param_4 + 1) != 0)) &&
       (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003410;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_145003458;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0x1b0))(param_1,param_2,param_3,&local_28);
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
  return;
}



// FUNCTION 14220ca60 FUN_14220ca60 body=1528 status=ok
// SIG undefined FUN_14220ca60(void)

void FUN_14220ca60(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *_Src;
  ulonglong uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong **pplVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong **pplVar17;
  longlong *in_stack_00000030;
  longlong **local_158;
  undefined8 local_150;
  longlong **local_148;
  int local_140;
  int local_13c;
  longlong **local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  int local_ec;
  undefined1 local_e8;
  longlong **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  int local_c0;
  void *local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  char local_a4;
  undefined2 *local_a0;
  wchar_t *local_98;
  undefined **local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40 [3];
  
  puVar7 = (undefined8 *)FUN_14167d0d0(&local_50);
  if (*(int *)(puVar7 + 1) == 0) {
    local_a0 = &DAT_143f3eda8;
  }
  else {
    local_a0 = (undefined2 *)*puVar7;
  }
  plVar15 = (longlong *)0x0;
  local_158 = (longlong **)0x0;
  local_98 = L"Demos/";
  local_150 = 0;
  FPaths::CombineInternal(&local_158,&local_a0,2);
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar14 = (int)local_150;
  iVar4 = local_150._4_4_;
  local_d8 = local_158;
  local_148 = local_158;
  local_158 = (longlong **)0x0;
  local_140 = (int)local_150;
  local_13c = local_150._4_4_;
  iVar10 = (2 - (uint)((int)local_150 != 0)) + (int)local_150;
  local_150 = 0;
  if (iVar4 < iVar10) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_148);
    iVar14 = local_140;
  }
  local_140 = (2 - (uint)(iVar14 != 0)) + iVar14;
  local_d8 = local_148;
  if (local_13c < local_140) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar14);
    local_d8 = local_148;
  }
  pplVar17 = local_d8;
  iVar4 = local_140;
  puVar1 = (undefined2 *)((longlong)local_d8 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
  *puVar1 = 0x2a;
  puVar1[1] = 0;
  local_148 = local_d8;
  if (local_158 != (longlong **)0x0) {
    FMemory::Free();
  }
  local_138 = (longlong **)0x0;
  local_130 = 0;
  plVar8 = (longlong *)FUN_1415c3d50();
  pplVar13 = (longlong **)&DAT_143f3eda8;
  if (iVar4 != 0) {
    pplVar13 = pplVar17;
  }
  (**(code **)(*plVar8 + 0x78))(plVar8,&local_138,pplVar13,0,1);
  local_90 = &PTR__scalar_deleting_destructor__145002d00;
  local_158 = local_138 + (longlong)(int)local_130 * 2;
  local_88 = 6;
  local_80 = 0;
  local_78 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  pplVar13 = local_138;
  if (local_138 != local_158) {
    do {
      GetDemoFilename(&local_a0,pplVar13);
      local_128 = (longlong *)0x0;
      local_120 = 0;
      local_118 = (longlong *)0x0;
      local_110 = 0;
      local_108 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 0;
      local_e8 = 0;
      plVar8 = (longlong *)FUN_1415c3d50();
      puVar1 = local_a0;
      puVar12 = &DAT_143f3eda8;
      if ((int)local_98 != 0) {
        puVar12 = local_a0;
      }
      local_100 = (**(code **)(*plVar8 + 0xe8))(plVar8,puVar12);
      local_d0 = &PTR_FUN_145002f10;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8 = 0;
      local_a4 = '\0';
      GetInfoFilename(&local_50,pplVar13);
      plVar8 = (longlong *)FUN_1415c3d50();
      puVar12 = local_50;
      puVar11 = &DAT_143f3eda8;
      if (local_48 != 0) {
        puVar11 = local_50;
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,puVar11,0);
      if (plVar8 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar8 + 0x98))(plVar8);
        if (lVar9 != 0) {
          local_60 = 0;
          local_58 = 0;
          FUN_14158ce90(plVar8,&local_60);
          FUN_1406c6fc0(&local_d0,&local_60);
          local_a4 = '\x01';
          if (local_60 != 0) {
            FMemory::Free();
          }
        }
        (**(code **)*plVar8)(plVar8);
      }
      if (puVar12 != (undefined2 *)0x0) {
        FMemory::Free(puVar12);
      }
      if (local_a4 == '\0') {
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        local_d0 = &PTR_FUN_144050e60;
      }
      else {
        if ((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == local_c8._4_4_)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x14) == local_c0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        plVar8 = plVar15;
        plVar16 = plVar15;
        if ((bVar2) && (bVar3)) {
          if (&local_128 != pplVar13) {
            iVar14 = *(int *)(pplVar13 + 1);
            plVar8 = *pplVar13;
            local_120 = CONCAT44(local_120._4_4_,iVar14);
            if (iVar14 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar14,0);
              _guard_xfg_dispatch_icall_nop(local_128,plVar8,(longlong)iVar14 * 2);
            }
          }
          plVar8 = (longlong *)FUN_1415c3d50();
          puVar12 = &DAT_143f3eda8;
          if ((int)local_98 != 0) {
            puVar12 = puVar1;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0xb0))(plVar8,&local_148,puVar12);
          local_108 = *puVar7;
          plVar8 = (longlong *)FUN_1415c3d50();
          puVar7 = (undefined8 *)GetFinalFilename(local_40,pplVar13);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar7;
          }
          cVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar12);
          if (local_40[0] != 0) {
            FMemory::Free();
          }
          _Src = local_b8;
          lVar9 = (longlong)(int)local_b0;
          local_ec = local_c0;
          local_f8 = CONCAT44(local_f8._4_4_,(undefined4)local_c8);
          local_110 = CONCAT44(local_110._4_4_,(int)local_b0);
          local_f0 = cVar6 == '\0';
          if (((int)local_b0 == 0) && (local_110._4_4_ == 0)) {
            local_110 = local_b0 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_b0 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop(local_118,_Src,lVar9 * 2);
          }
          uVar5 = local_78;
          lVar9 = (longlong)(int)local_78;
          iVar14 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar14);
          if (local_78._4_4_ < iVar14) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_80,uVar5 & 0xffffffff)
            ;
          }
          lVar9 = local_80 + lVar9 * 0x48;
          FString::FString(lVar9,&local_128);
          FString::FString(lVar9 + 0x10,&local_118);
          *(undefined8 *)(lVar9 + 0x20) = local_108;
          *(undefined8 *)(lVar9 + 0x28) = local_100;
          *(undefined4 *)(lVar9 + 0x30) = (undefined4)local_f8;
          *(undefined4 *)(lVar9 + 0x34) = local_f8._4_4_;
          *(undefined1 *)(lVar9 + 0x38) = local_f0;
          *(int *)(lVar9 + 0x3c) = local_ec;
          *(undefined1 *)(lVar9 + 0x40) = local_e8;
          plVar8 = local_118;
          plVar16 = local_128;
        }
        if (local_b8 != (void *)0x0) {
          FMemory::Free();
        }
        local_d0 = &PTR_FUN_144050e60;
        if (plVar8 != (longlong *)0x0) {
          FMemory::Free(plVar8);
        }
        if (plVar16 != (longlong *)0x0) {
          FMemory::Free(plVar16);
        }
      }
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      pplVar13 = pplVar13 + 2;
      pplVar17 = local_d8;
    } while (pplVar13 != local_158);
  }
  local_88 = 0;
  if ((((int)in_stack_00000030[1] != 0) && ((longlong *)*in_stack_00000030 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)*in_stack_00000030 + 0x18))(), cVar6 != '\0')) {
    if ((int)in_stack_00000030[1] != 0) {
      plVar15 = (longlong *)*in_stack_00000030;
    }
    (**(code **)(*plVar15 + 0x40))(plVar15,&local_90);
  }
  plVar15 = local_70;
  for (iVar14 = (int)local_68; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free();
  }
  TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
  ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_80);
  local_90 = &PTR_FUN_1440104c8;
  pplVar13 = local_138;
  for (iVar14 = (int)local_130; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*pplVar13 != (longlong *)0x0) {
      FMemory::Free();
    }
    pplVar13 = pplVar13 + 2;
  }
  if (local_138 != (longlong **)0x0) {
    FMemory::Free(local_138);
  }
  if (pplVar17 != (longlong **)0x0) {
    FMemory::Free(pplVar17);
  }
  return;
}



// FUNCTION 14220d060 EnumerateStreams body=116 status=ok
// SIG undefined EnumerateStreams(void)

/* WARNING: Removing unreachable block (ram,0x00014220d0a1) */
/* WARNING: Removing unreachable block (ram,0x00014220d0a9) */
/* WARNING: Removing unreachable block (ram,0x00014220d0ae) */
/* WARNING: Removing unreachable block (ram,0x00014220d0b7) */
/* WARNING: Removing unreachable block (ram,0x00014220d0c1) */

void FNullNetworkReplayStreamer::EnumerateStreams(longlong *param_1)

{
  (**(code **)(*param_1 + 0x188))();
  return;
}



// FUNCTION 14220d0e0 EnumerateStreams body=71 status=ok
// SIG undefined EnumerateStreams(void)

void FNullNetworkReplayStreamer::EnumerateStreams
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  (**(code **)(*param_1 + 0x188))(param_1,param_2,local_18,param_4,param_5,param_6);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14220d130 FUN_14220d130 body=419 status=ok
// SIG undefined FUN_14220d130(void)

void FUN_14220d130(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong **param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if (((*(int *)(param_6 + 1) == 0) || (*param_6 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_6 + 0x18))(), cVar1 == '\0')) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  else {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (((param_6 != &local_28) && (*(int *)(param_6 + 1) != 0)) &&
       (plVar2 = *param_6, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    }
    local_38 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_30 = 3;
    local_38 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003410;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_28 != (longlong **)(plVar2 + 1)) && (local_20 != 0)) &&
         (local_28 != (longlong *)0x0)) {
        (**(code **)(*local_28 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_145003458;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  (**(code **)(*param_1 + 0x188))(param_1,param_2,param_3,param_4,param_5,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 14220d2e0 FUN_14220d2e0 body=405 status=ok
// SIG undefined FUN_14220d2e0(void)

void FUN_14220d2e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong **param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if (((*(int *)(param_5 + 1) == 0) || (*param_5 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_5 + 0x18))(), cVar1 == '\0')) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  else {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (((param_5 != &local_28) && (*(int *)(param_5 + 1) != 0)) &&
       (plVar2 = *param_5, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    }
    local_38 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_30 = 3;
    local_38 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003410;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_28 != (longlong **)(plVar2 + 1)) && (local_20 != 0)) &&
         (local_28 != (longlong *)0x0)) {
        (**(code **)(*local_28 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_145003458;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  (**(code **)(*param_1 + 0x198))(param_1,param_2,param_3,param_4,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 14220d490 Execute body=98 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(FEnumerateEventsResult_const_&),<lambda_f7f2c97a28b88045a188502507c208c4>_>
     ::Execute(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2 + 0x10,iVar1 == 0);
    }
  }
  return;
}



// FUNCTION 14220d510 Execute body=98 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(FGotoResult_const_&),<lambda_50036913911643db32081175621525ff>_>
     ::Execute(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,iVar1 == 0,uVar2);
    }
  }
  return;
}



// FUNCTION 14220d580 Execute body=99 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(FStartStreamingResult_const_&),<lambda_0cdf3c1352e077a6562d28a4af453481>_>
     ::Execute(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x10);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,iVar2 == 0,uVar1);
    }
  }
  return;
}



// FUNCTION 14220d5f0 ExecuteIfSafe body=27 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseFunctorDelegateInstance<void___cdecl(FDeleteFinishedStreamResult_const_&),<lambda_dc273765281679b313db620d342612bf>_>
::ExecuteIfSafe(longlong param_1,longlong param_2)

{
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 8,*(int *)(param_2 + 8) == 0);
  return 1;
}



// FUNCTION 14220d610 ExecuteIfSafe body=100 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateEventsResult_const_&),<lambda_f7f2c97a28b88045a188502507c208c4>_>
::ExecuteIfSafe(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2 + 0x10,iVar1 == 0);
    }
  }
  return 1;
}



// FUNCTION 14220d680 ExecuteIfSafe body=24 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),<lambda_4445d8ec7177a15c11f3a8a4a4d2adfb>_>
::ExecuteIfSafe(longlong param_1,longlong param_2)

{
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 8,param_2 + 0x10);
  return 1;
}



// FUNCTION 14220d6a0 ExecuteIfSafe body=100 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseFunctorDelegateInstance<void___cdecl(FGotoResult_const_&),<lambda_50036913911643db32081175621525ff>_>
::ExecuteIfSafe(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,iVar1 == 0,uVar2);
    }
  }
  return 1;
}



// FUNCTION 14220d710 ExecuteIfSafe body=101 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseFunctorDelegateInstance<void___cdecl(FStartStreamingResult_const_&),<lambda_0cdf3c1352e077a6562d28a4af453481>_>
::ExecuteIfSafe(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x10);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,iVar2 == 0,uVar1);
    }
  }
  return 1;
}



// FUNCTION 14220d780 FUN_14220d780 body=436 status=ok
// SIG undefined FUN_14220d780(void)

void FUN_14220d780(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 *local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar3 = (undefined8 *)GetEventFilename(local_48,param_1 + 0x30,*(undefined4 *)(param_1 + 0x40));
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,puVar5,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_30 = (undefined4 *)0x0;
    local_38 = &PTR__scalar_deleting_destructor__145003220;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_30,0xb);
    iVar1 = (int)local_28 + 0xb;
    local_28 = CONCAT44(local_28._4_4_,iVar1);
    if (local_28._4_4_ < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30);
    }
    *local_30 = 0x680063;
    local_30[1] = 0x630065;
    local_30[2] = 0x70006b;
    local_30[3] = 0x69006f;
    local_30[4] = 0x74006e;
    *(undefined2 *)(local_30 + 5) = 0;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))();
    FString::PrintfImpl(local_68,&DAT_1450026d8,uVar4);
    if (local_20 != 0) {
      FMemory::Free();
    }
    local_20 = local_68[0];
    local_10 = CONCAT44(param_2,param_2);
    FUN_1406d2150(&local_38,local_58,1);
    FUN_14158ce90(puVar3,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_20 != 0) {
      FMemory::Free();
    }
    if (local_30 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return;
}



// FUNCTION 14220d940 GetAutomaticDemoName body=932 status=ok
// SIG undefined GetAutomaticDemoName(void)

void ** GetAutomaticDemoName(void **param_1)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong local_res10;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  wchar_t *local_80;
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  undefined2 *local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  iVar1 = FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays();
  lVar4 = 0x2bca2875f4373fff;
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  iVar8 = 1;
  while( true ) {
    if ((iVar1 != 0) && (iVar1 < iVar8)) {
      return param_1;
    }
    FString::PrintfImpl(&local_c8,L"demo%i",iVar8);
    puVar2 = (undefined8 *)GetStreamBaseFilename(local_48,&local_c8);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    GetStreamBaseFilename(&local_98,&local_c8);
    puVar7 = &DAT_143f3eda8;
    if (local_90 != 0) {
      puVar7 = local_98;
    }
    puVar2 = (undefined8 *)FUN_14167d0d0(local_58);
    if (*(int *)(puVar2 + 1) == 0) {
      local_88 = &DAT_143f3eda8;
    }
    else {
      local_88 = (undefined2 *)*puVar2;
    }
    local_b8 = (undefined2 *)0x0;
    local_80 = L"Demos/";
    local_b0 = 0;
    FPaths::CombineInternal(&local_b8,&local_88,2);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    local_78 = &DAT_143f3eda8;
    if ((int)local_b0 != 0) {
      local_78 = local_b8;
    }
    local_a8 = (undefined2 *)0x0;
    local_a0 = 0;
    local_70 = puVar7;
    FPaths::CombineInternal(&local_a8,&local_78,2);
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_68 = &DAT_143f3eda8;
    if ((int)local_a0 != 0) {
      local_68 = local_a8;
    }
    local_d8 = (undefined2 *)0x0;
    local_d0 = 0;
    local_60 = puVar5;
    FPaths::CombineInternal(&local_d8,&local_68,2);
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    iVar6 = (int)local_d0;
    iVar9 = local_d0._4_4_;
    bVar10 = (int)local_d0 != 0;
    local_e8 = local_d8;
    local_d8 = (undefined2 *)0x0;
    local_e0._0_4_ = (int)local_d0;
    local_e0._4_4_ = local_d0._4_4_;
    local_d0 = 0;
    if (iVar9 < (int)((6 - (uint)bVar10) + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
      iVar6 = (int)local_e0;
    }
    iVar9 = (6 - (uint)(iVar6 != 0)) + iVar6;
    local_e0 = CONCAT44(local_e0._4_4_,iVar9);
    puVar5 = local_e8;
    if (local_e0._4_4_ < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8);
      puVar5 = local_e8;
      iVar9 = (int)local_e0;
    }
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0;
    puVar2 = (undefined8 *)(puVar5 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)));
    *puVar2 = 0x6d00650064002e;
    *(undefined2 *)(puVar2 + 1) = 0x6f;
    *(undefined2 *)((longlong)puVar2 + 10) = 0;
    if (local_d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar3 = (longlong *)FUN_1415c3d50();
    puVar7 = &DAT_143f3eda8;
    if (iVar9 != 0) {
      puVar7 = puVar5;
    }
    (**(code **)(*plVar3 + 0xb0))(plVar3,&local_res10,puVar7);
    _Src = local_c8;
    iVar6 = (int)local_c0;
    if (local_res10 == 0) break;
    if (((iVar1 != 0) && (local_res10 < lVar4)) && (lVar4 = local_res10, param_1 != &local_c8)) {
      *(int *)(param_1 + 1) = iVar6;
      if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_c0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_1,_Src,(longlong)iVar6 * 2);
        lVar4 = local_res10;
      }
    }
    iVar8 = iVar8 + 1;
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (param_1 != &local_c8) {
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_c0 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*param_1,_Src,(longlong)iVar6 * 2);
    }
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220dcf0 GetCheckpointArchive body=180 status=ok
// SIG undefined GetCheckpointArchive(void)

undefined8 FNullNetworkReplayStreamer::GetCheckpointArchive(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FString::PrintfImpl(local_18,L"checkpoint%d",*(undefined4 *)(param_1 + 0x40));
    plVar1 = (longlong *)FUN_1415c3d50();
    puVar2 = (undefined8 *)
             GetCheckpointFilename(local_28,param_1 + 0x30,*(undefined4 *)(param_1 + 0x40));
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,puVar4,0);
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return *(undefined8 *)(param_1 + 0x20);
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14220ddb0 GetCheckpointFilename body=203 status=ok
// SIG undefined GetCheckpointFilename(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * GetCheckpointFilename(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  wchar_t *local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FString::PrintfImpl(&local_58,L"checkpoint%d");
  local_38 = &DAT_143f3eda8;
  local_28 = &DAT_143f3eda8;
  if (local_50 != 0) {
    local_28 = local_58;
  }
  puVar1 = (undefined8 *)GetStreamDirectory(local_48,param_2);
  if (*(int *)(puVar1 + 1) != 0) {
    local_38 = (undefined2 *)*puVar1;
  }
  local_30 = L"checkpoints";
  *param_1 = 0;
  param_1[1] = 0;
  FPaths::CombineInternal(param_1,&local_38,3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220de80 GetDemoFilename body=239 status=ok
// SIG undefined GetDemoFilename(void)

longlong * GetDemoFilename(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)GetStreamFullBaseFilename(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((6 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (6 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  *(undefined8 *)(local_28 + lVar2 * 2) = 0x6d00650064002e;
  lVar2 = local_28 + lVar2 * 2;
  *(undefined2 *)(lVar2 + 8) = 0x6f;
  *(undefined2 *)(lVar2 + 10) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220df70 GetDemoPath body=176 status=ok
// SIG undefined GetDemoPath(void)

undefined8 FNullNetworkReplayStreamer::GetDemoPath(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong local_38;
  undefined8 local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_14167d0d0(local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar1;
  }
  local_20 = L"Demos/";
  local_38 = 0;
  local_30 = 0;
  FPaths::CombineInternal(&local_38,&local_28,2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (param_2 != &local_38) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
    return 0;
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 14220e020 GetEventFilename body=203 status=ok
// SIG undefined GetEventFilename(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * GetEventFilename(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  wchar_t *local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FString::PrintfImpl(&local_58,L"event%d");
  local_38 = &DAT_143f3eda8;
  local_28 = &DAT_143f3eda8;
  if (local_50 != 0) {
    local_28 = local_58;
  }
  puVar1 = (undefined8 *)GetStreamDirectory(local_48,param_2);
  if (*(int *)(puVar1 + 1) != 0) {
    local_38 = (undefined2 *)*puVar1;
  }
  local_30 = L"events";
  *param_1 = 0;
  param_1[1] = 0;
  FPaths::CombineInternal(param_1,&local_38,3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220e0f0 GetFinalFilename body=237 status=ok
// SIG undefined GetFinalFilename(void)

longlong * GetFinalFilename(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)GetStreamFullBaseFilename(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((7 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (7 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L".fin",4);
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 8) = 0x6c0061;
  *(undefined2 *)(lVar2 + 0xc) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220e1e0 GetInfoFilename body=246 status=ok
// SIG undefined GetInfoFilename(void)

longlong * GetInfoFilename(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)GetStreamFullBaseFilename(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0xc - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0xc - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L".replayi",8);
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 0x10) = 0x66006e;
  *(undefined2 *)(lVar2 + 0x14) = 0x6f;
  *(undefined2 *)(lVar2 + 0x16) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220e2e0 GetStreamBaseFilename body=563 status=ok
// SIG undefined GetStreamBaseFilename(void)

undefined8 GetStreamBaseFilename(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined4 local_res8 [4];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  int *piVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  longlong local_30 [3];
  
  piVar5 = &local_58;
  FWindowsPlatformTime::SystemTime
            (local_res8,local_res20,local_48,local_res18,piVar5,&local_54,&local_50,&local_4c);
  uVar1 = (undefined4)((ulonglong)piVar5 >> 0x20);
  FString::FString(param_1,param_2);
  uVar2 = FDateTime::Now(&local_40);
  puVar3 = (undefined8 *)FDateTime::ToString(uVar2,local_30);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  FString::ReplaceInline(param_1,&DAT_1450028b0,puVar4,1);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_40,L"%i-%i-%i",local_res20[0],local_res18[0],
                      CONCAT44(uVar1,local_res8[0]));
  puVar4 = &DAT_143f3eda8;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FString::ReplaceInline(param_1,&DAT_1450028cc,puVar4,1);
  if (local_40 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_40,&DAT_1450028d4,
                      ((local_58 * 0x3c + local_54) * 0x3c + local_50) * 1000 + local_4c);
  puVar4 = &DAT_143f3eda8;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FString::ReplaceInline(param_1,&DAT_1450028dc,puVar4,1);
  if (local_40 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar2 = FEngineVersion::Current();
  uVar1 = FEngineVersionBase::GetChangelist(uVar2);
  FString::PrintfImpl(&local_40,&DAT_1450028e4,uVar1);
  puVar4 = &DAT_143f3eda8;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FString::ReplaceInline(param_1,&DAT_1450028ec,puVar4,1);
  if (local_40 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::ReplaceInline(param_1,&DAT_14500244c,&DAT_14500239c,1);
  FString::ReplaceInline(param_1,&DAT_1450026b4,&DAT_145002634,1);
  FString::ReplaceInline(param_1,&DAT_14500286c,&DAT_14500279c,1);
  FString::ReplaceInline(param_1,&DAT_1450028ac,&DAT_14500287c,1);
  FString::ReplaceInline(param_1,&DAT_1450028f8,&DAT_1450028f4,1);
  return param_1;
}



// FUNCTION 14220e520 GetStreamDirectory body=244 status=ok
// SIG undefined GetStreamDirectory(void)

undefined8 * GetStreamDirectory(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  GetStreamBaseFilename(&local_38);
  puVar2 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  puVar1 = (undefined8 *)FUN_14167d0d0(local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)*puVar1;
  }
  local_48 = (undefined2 *)0x0;
  local_20 = L"Demos/";
  local_40 = 0;
  FPaths::CombineInternal(&local_48,&local_28,2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *param_1 = 0;
  local_28 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    local_28 = local_48;
  }
  param_1[1] = 0;
  local_20 = puVar2;
  FPaths::CombineInternal(param_1,&local_28,2);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220e620 GetStreamFullBaseFilename body=169 status=ok
// SIG undefined GetStreamFullBaseFilename(void)

undefined8 * GetStreamFullBaseFilename(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *local_38;
  undefined2 *local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)GetStreamBaseFilename(local_18);
  local_38 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)GetStreamDirectory(local_28,param_2);
  if (*(int *)(puVar1 + 1) != 0) {
    local_38 = (undefined2 *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = puVar2;
  FPaths::CombineInternal(param_1,&local_38,2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14220e6e0 FUN_14220e6e0 body=359 status=ok
// SIG undefined FUN_14220e6e0(void)

void FUN_14220e6e0(longlong *param_1,undefined4 param_2,longlong **param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_3 + 1) == 0) || (*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_3 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_3 != &local_18) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_1450032f0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_145003338;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_28);
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
  return;
}



// FUNCTION 14220e850 FUN_14220e850 body=766 status=ok
// SIG undefined FUN_14220e850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14220e850(longlong param_1,int param_2,longlong *param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  wchar_t *_Str;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined2 *local_a0;
  int local_98;
  longlong local_90 [2];
  undefined **local_80;
  wchar_t *local_78;
  undefined2 *local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b0 = 6;
  local_b8 = &PTR_FUN_1440104d0;
  local_a8 = -1;
  if (param_2 == -1) {
    lVar2 = operator_new(0x90);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FArchive::FArchive(lVar2);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))(*(longlong **)(param_1 + 0x18),0);
    local_b0 = 0;
    local_a8 = (longlong)param_4;
  }
  else {
    GetCheckpointFilename(&local_a0,param_1 + 0x30,param_2);
    plVar4 = (longlong *)FUN_1415c3d50();
    puVar6 = &DAT_143f3eda8;
    if (local_98 != 0) {
      puVar6 = local_a0;
    }
    lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,puVar6,0);
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x20) = lVar2;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    if (lVar2 != 0) {
      local_b0 = 0;
      local_a8 = (longlong)param_4;
      FString::PrintfImpl(&local_d8,L"event%d",param_2);
      local_70 = &DAT_143f3eda8;
      if ((int)local_d0 != 0) {
        local_70 = local_d8;
      }
      puVar5 = (undefined8 *)GetStreamDirectory(local_90,param_1 + 0x30);
      if (*(int *)(puVar5 + 1) == 0) {
        local_80 = (undefined **)&DAT_143f3eda8;
      }
      else {
        local_80 = (undefined **)*puVar5;
      }
      local_78 = L"events";
      local_c8 = (undefined2 *)0x0;
      local_c0 = 0;
      FPaths::CombineInternal(&local_c8,&local_80,3);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
      if (local_d8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)FUN_1415c3d50();
      puVar6 = &DAT_143f3eda8;
      if ((int)local_c0 != 0) {
        puVar6 = local_c8;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,puVar6,0);
      if (puVar5 != (undefined8 *)0x0) {
        local_d8 = (undefined2 *)0x0;
        local_d0 = 0;
        FUN_14158ce90(puVar5,&local_d8);
        local_78 = (wchar_t *)0x0;
        local_80 = &PTR__scalar_deleting_destructor__145003220;
        local_70 = (undefined2 *)0x0;
        local_68 = (wchar_t *)0x0;
        local_60 = 0;
        local_58 = 0;
        FUN_1406c6fc0(&local_80,&local_d8);
        FUN_14220f470(param_1);
        plVar4 = *(longlong **)(param_1 + 0x18);
        _Str = L"";
        if ((int)local_60 != 0) {
          _Str = local_68;
        }
        lVar2 = _wtoi64(_Str);
        (**(code **)(*plVar4 + 0xa8))(plVar4,lVar2);
        if (local_68 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_78 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_80 = &PTR_FUN_144050e60;
        if (local_d8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        (**(code **)*puVar5)(puVar5,1);
      }
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_a0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar4 = (longlong *)0x0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar1 != '\0')) {
    if ((int)param_3[1] != 0) {
      plVar4 = (longlong *)*param_3;
    }
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_b8);
  }
  return;
}



// FUNCTION 14220eb50 FUN_14220eb50 body=1012 status=ok
// SIG undefined FUN_14220eb50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14220eb50(longlong param_1,uint param_2,undefined8 param_3)

{
  void *_Src;
  undefined8 *puVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  uint local_d0;
  longlong local_c8;
  uint local_c0;
  int local_bc;
  longlong local_b8 [2];
  void *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  longlong local_90 [4];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined2 *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar9 = (undefined2 *)0x0;
  local_c8 = 0;
  iVar8 = 0;
  local_bc = 0;
  local_d0 = param_2;
  local_68 = param_3;
  local_60 = param_1;
  puVar1 = (undefined8 *)GetStreamDirectory(local_b8,param_1 + 0x30);
  if (*(int *)(puVar1 + 1) == 0) {
    local_58 = &DAT_143f3eda8;
  }
  else {
    local_58 = (undefined2 *)*puVar1;
  }
  local_a8 = (void *)0x0;
  local_50 = L"events";
  local_a0 = 0;
  local_48 = L"event";
  FPaths::CombineInternal(&local_a8,&local_58,3);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  local_e8 = 0;
  puVar5 = puVar9;
  puVar16 = puVar9;
  while( true ) {
    local_58 = (undefined2 *)0x0;
    local_50 = (wchar_t *)0x0;
    FString::AppendInt(&local_58,puVar5);
    puVar11 = local_58;
    _Src = local_a8;
    lVar14 = (longlong)(int)local_a0;
    iVar13 = (int)local_50;
    if ((int)local_a0 < 2) {
      local_58 = (undefined2 *)0x0;
      local_50 = (wchar_t *)0x0;
      uVar10 = (uint)puVar5;
    }
    else {
      iVar6 = iVar8;
      if ((int)local_50 != 0) {
        iVar6 = (int)local_50 + -1;
      }
      if (((int)local_a0 != 0) || (iVar13 = 1, iVar6 == 0)) {
        iVar13 = iVar8;
      }
      local_e0 = (undefined2 *)0x0;
      local_d8 = CONCAT44(local_d8._4_4_,(int)local_a0);
      if (((int)local_a0 == 0) && (iVar13 + iVar6 == 0)) {
        local_d8 = 0;
        uVar15 = 0;
        puVar11 = puVar9;
        iVar4 = iVar8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,(int)local_a0 + iVar13 + iVar6,0)
        ;
        puVar11 = local_e0;
        _guard_xfg_dispatch_icall_nop(local_e0,_Src,lVar14 * 2);
        uVar15 = local_d8 & 0xffffffff;
        iVar4 = local_d8._4_4_;
      }
      puVar5 = local_58;
      iVar12 = (int)uVar15;
      iVar13 = iVar12;
      if (iVar6 != 0) {
        iVar13 = iVar12 + (uint)(iVar12 == 0) + iVar6;
        local_d8 = CONCAT44(local_d8._4_4_,iVar13);
        if (iVar4 < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,uVar15);
          puVar11 = local_e0;
          iVar13 = (int)local_d8;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar11 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)),puVar5,
                   (longlong)iVar6 * 2);
        (puVar11 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)))[iVar6] = 0;
      }
      local_e0 = (undefined2 *)0x0;
      local_d8 = 0;
      uVar10 = local_e8;
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free(local_58);
        uVar10 = local_e8;
      }
    }
    plVar2 = (longlong *)FUN_1415c3d50();
    puVar5 = &DAT_143f3eda8;
    if (iVar13 != 0) {
      puVar5 = puVar11;
    }
    puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar5);
    iVar13 = (int)puVar16;
    if (puVar1 == (undefined8 *)0x0) break;
    local_b8[0] = 0;
    local_b8[1] = 0;
    FUN_14158ce90(puVar1,local_b8);
    local_98 = &PTR__scalar_deleting_destructor__145003220;
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    local_70 = 0;
    FUN_1406c6fc0(&local_98,local_b8);
    local_c0 = iVar13 + 1;
    if (local_bc < (int)local_c0) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c8,puVar16);
    }
    puVar16 = (undefined2 *)(ulonglong)local_c0;
    puVar7 = (undefined8 *)((longlong)iVar13 * 0x30 + local_c8);
    *puVar7 = &PTR__scalar_deleting_destructor__145003220;
    FString::FString(puVar7 + 1,local_90);
    FString::FString(puVar7 + 3,local_90 + 2);
    *(undefined4 *)(puVar7 + 5) = (undefined4)local_70;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = local_70._4_4_;
    if (local_90[2] != 0) {
      FMemory::Free();
    }
    if (local_90[0] != 0) {
      FMemory::Free();
    }
    local_98 = &PTR_FUN_144050e60;
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    local_e8 = uVar10 + 1;
    puVar5 = (undefined2 *)(ulonglong)local_e8;
    (**(code **)*puVar1)(puVar1,1);
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  lVar14 = local_c8;
  iVar6 = -1;
  iVar8 = iVar6;
  if (((0 < iVar13) &&
      (iVar8 = iVar13 + -1, local_d0 < *(uint *)(local_c8 + 0x28 + (longlong)(iVar13 + -1) * 0x30)))
     && (iVar8 = iVar6, 0 < iVar13)) {
    puVar3 = (uint *)(local_c8 + 0x28);
    do {
      if (local_d0 < *puVar3) {
        iVar8 = (int)puVar9 + -1;
        break;
      }
      uVar10 = (int)puVar9 + 1;
      puVar9 = (undefined2 *)(ulonglong)uVar10;
      puVar3 = puVar3 + 0xc;
    } while ((int)uVar10 < iVar13);
  }
  uVar10 = local_d0;
  if (-1 < iVar8) {
    uVar10 = local_d0 - *(int *)(local_c8 + 0x28 + (longlong)iVar8 * 0x30);
  }
  FUN_14220e850(local_60,iVar8,local_68,uVar10);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (iVar13 != 0) {
    plVar2 = (longlong *)(lVar14 + 8);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2[-1] = (longlong)&PTR_FUN_144050e60;
      plVar2 = plVar2 + 6;
      uVar10 = (int)puVar16 - 1;
      puVar16 = (undefined2 *)(ulonglong)uVar10;
    } while (uVar10 != 0);
  }
  if (lVar14 != 0) {
    FMemory::Free(lVar14);
  }
  return;
}



// FUNCTION 14220ef50 FUN_14220ef50 body=359 status=ok
// SIG undefined FUN_14220ef50(void)

void FUN_14220ef50(longlong *param_1,undefined4 param_2,longlong **param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_3 + 1) == 0) || (*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_3 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_3 != &local_18) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_1450032f0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_145003338;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_28);
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
  return;
}



// FUNCTION 14220f0c0 FUN_14220f0c0 body=39 status=ok
// SIG undefined FUN_14220f0c0(void)

void FUN_14220f0c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145002bf0;
    return;
  }
  return;
}



// FUNCTION 14220f0f0 FUN_14220f0f0 body=52 status=ok
// SIG undefined FUN_14220f0f0(void)

undefined8 FUN_14220f0f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))();
    if (lVar1 < *(int *)(param_1 + 0x70)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14220f130 IsLive body=96 status=ok
// SIG undefined IsLive(void)

bool FNullNetworkReplayStreamer::IsLive(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar3 = (undefined8 *)GetFinalFilename(local_18,param_1 + 0x30);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return cVar1 == '\0';
}



// FUNCTION 14220f190 KeepReplay body=238 status=ok
// SIG undefined KeepReplay(void)

void FNullNetworkReplayStreamer::KeepReplay
               (undefined8 param_1,void **param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar4 = (longlong *)0x0;
  local_38 = &PTR_FUN_145002d18;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  uVar3 = GetStreamDirectory(local_48);
  cVar2 = FPaths::DirectoryExists(uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 == '\0') {
    local_30 = 2;
  }
  else {
    local_30 = 0;
    if (&local_28 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      _Src = *param_2;
      local_20 = CONCAT44(local_20._4_4_,iVar1);
      if ((iVar1 != 0) || (local_20._4_4_ != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1);
        ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  if (*(int *)(param_4 + 1) != 0) {
    plVar4 = (longlong *)*param_4;
  }
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_38);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14220f290 KeepReplay body=121 status=ok
// SIG undefined KeepReplay(void)

/* WARNING: Removing unreachable block (ram,0x00014220f2c4) */
/* WARNING: Removing unreachable block (ram,0x00014220f2ba) */
/* WARNING: Removing unreachable block (ram,0x00014220f2d6) */
/* WARNING: Removing unreachable block (ram,0x00014220f2e8) */
/* WARNING: Removing unreachable block (ram,0x00014220f2fc) */

void INetworkReplayStreamer::KeepReplay(longlong *param_1)

{
  (**(code **)(*param_1 + 0x128))();
  return;
}



// FUNCTION 14220f310 FUN_14220f310 body=226 status=ok
// SIG undefined FUN_14220f310(void)

undefined8 * FUN_14220f310(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  undefined2 *local_18;
  int local_10;
  
  *param_1 = &PTR_FUN_145002f10;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  GetInfoFilename(local_28 + 2);
  plVar1 = (longlong *)FUN_1415c3d50();
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1,puVar3,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
    if (lVar2 != 0) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_14158ce90(plVar1,local_28);
      FUN_1406c6fc0(param_1,local_28);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    (**(code **)*plVar1)(plVar1,1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free(local_18);
  }
  return param_1;
}



// FUNCTION 14220f400 RenameReplay body=68 status=ok
// SIG undefined RenameReplay(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FNullNetworkReplayStreamer::RenameReplay(void)

{
  undefined8 *in_R9;
  undefined **local_18;
  undefined4 local_10;
  
  local_18 = &PTR_FUN_1440104c8;
  local_10 = 1;
  if (*(int *)(in_R9 + 1) != 0) {
    (**(code **)(*(longlong *)*in_R9 + 0x38))((longlong *)*in_R9,&local_18);
    return;
  }
  (**(code **)(_DAT_00000000 + 0x38))(0,&local_18);
  return;
}



// FUNCTION 14220f470 FUN_14220f470 body=142 status=ok
// SIG undefined FUN_14220f470(void)

void FUN_14220f470(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *local_18;
  int local_10;
  
  GetDemoFilename(&local_18,param_1 + 0x30);
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar4 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar4 = local_18;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar4,4);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    plVar2 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x98))();
    *(undefined8 *)(param_1 + 0x78) = uVar3;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free(local_18);
    return;
  }
  return;
}



// FUNCTION 14220f530 RequestEventData body=76 status=ok
// SIG undefined RequestEventData(void)

void FNullNetworkReplayStreamer::RequestEventData
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined **local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)0x0;
  local_20 = 1;
  local_18 = 0;
  local_28 = &PTR_FUN_145002d10;
  local_10 = 0;
  if (*(int *)(param_3 + 1) != 0) {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14220f580 FUN_14220f580 body=364 status=ok
// SIG undefined FUN_14220f580(void)

void FUN_14220f580(longlong *param_1,undefined8 param_2,longlong **param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_3 + 1) == 0) || (*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_3 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_3 != &local_18) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_1450034a0;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1450034e8;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0xe0))(param_1,param_2,&local_28);
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
  return;
}



// FUNCTION 14220f6f0 FUN_14220f6f0 body=146 status=ok
// SIG undefined FUN_14220f6f0(void)

void FUN_14220f6f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined **local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)0x0;
  local_30 = 1;
  local_28 = 0;
  local_38 = &PTR__scalar_deleting_destructor__145002d00;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if (*(int *)(param_3 + 1) != 0) {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
  ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_28);
  return;
}



// FUNCTION 14220f790 FUN_14220f790 body=364 status=ok
// SIG undefined FUN_14220f790(void)

void FUN_14220f790(longlong *param_1,undefined8 param_2,longlong **param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_3 + 1) == 0) || (*param_3 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_3 + 0x18))(), cVar1 == '\0')) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    if (((param_3 != &local_18) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_18);
    }
    local_28 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_20 = 3;
    local_28 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003410;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_18 != (longlong **)(plVar2 + 1)) && (local_10 != 0)) &&
         (local_18 != (longlong *)0x0)) {
        (**(code **)(*local_18 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_145003458;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,&local_28);
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
  return;
}



// FUNCTION 14220f900 Serialize body=149 status=ok
// SIG undefined Serialize(void)

void FNullCheckpointListItem::Serialize(longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x60))(param_2,L"group",param_1 + 8);
  (**(code **)(*param_2 + 0x60))(param_2,L"meta",param_1 + 0x18);
  (**(code **)(*param_2 + 0x78))(param_2,L"time1",param_1 + 0x28);
  (**(code **)(*param_2 + 0x78))(param_2,L"time2",param_1 + 0x2c);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14220f9a0 Serialize body=175 status=ok
// SIG undefined Serialize(void)

void FNullReplayInfo::Serialize(longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x80))(param_2,L"LengthInMS",param_1 + 8);
  (**(code **)(*param_2 + 0x78))(param_2,L"NetworkVersion",param_1 + 0xc);
  (**(code **)(*param_2 + 0x78))(param_2,L"Changelist",param_1 + 0x10);
  (**(code **)(*param_2 + 0x60))(param_2,L"FriendlyName",param_1 + 0x18);
  (**(code **)(*param_2 + 0x80))(param_2,L"DemoFileLastOffset",param_1 + 0x28);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14220fa50 FUN_14220fa50 body=880 status=ok
// SIG undefined FUN_14220fa50(void)

void FUN_14220fa50(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int local_res10 [2];
  char local_res18;
  longlong local_98 [7];
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res18 = param_3;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  cVar5 = (**(code **)*param_2)(param_2);
  plVar9 = (longlong *)0x0;
  if (cVar5 == '\0') {
    local_98[4] = 0;
    local_98[5] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 4,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_98[4],7,"events",7,0x3f);
    (**(code **)(*param_2 + 0x28))(param_2,local_98 + 4);
    if (local_98[4] != 0) {
      FMemory::Free();
    }
    while ((iVar11 = (int)plVar9, -1 < iVar11 && (iVar11 < *(int *)(param_1 + 0x10)))) {
      plVar9 = (longlong *)((longlong)iVar11 * 0x40 + *(longlong *)(param_1 + 8));
      (**(code **)(*plVar9 + 0x38))(plVar9,param_2,0);
      plVar9 = (longlong *)(ulonglong)(iVar11 + 1);
    }
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    local_98[0] = 0;
    local_98[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    lVar12 = local_98[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_98[0],7,"events",7,0x3f);
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xb0))(param_2,local_58);
    plVar7 = (longlong *)*puVar6;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res10,local_98);
    plVar8 = plVar9;
    if (local_res10[0] != -1) {
      plVar8 = (longlong *)(*plVar7 + (longlong)local_res10[0] * 0x28);
    }
    plVar7 = plVar8 + 2;
    if (plVar8 == (longlong *)0x0) {
      plVar7 = plVar9;
    }
    if (((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) || (*(int *)(*plVar7 + 8) != 5)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      lVar12 = local_98[0];
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar12 = local_98[0];
        if (iVar11 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          lVar12 = local_98[0];
        }
      }
    }
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
    if (bVar3) {
      local_98[2] = 0;
      local_98[3] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 2,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_98[2],7,"events",7,0x3f);
      puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xb0))(param_2,local_48);
      plVar7 = (longlong *)FUN_1416b2a60(*puVar6,local_98 + 2);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar12 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar8 = plVar9;
      if (local_98[2] != 0) {
        FMemory::Free();
        plVar8 = (longlong *)0x0;
      }
      while ((iVar11 = (int)plVar8, -1 < iVar11 && (iVar11 < (int)plVar7[1]))) {
        iVar2 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar2 + 1;
        if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 8,iVar2);
        }
        plVar10 = (longlong *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 8));
        plVar8 = plVar9;
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)&PTR__scalar_deleting_destructor__145002c38;
          plVar10[1] = 0;
          plVar10[2] = 0;
          plVar10[3] = 0;
          plVar10[4] = 0;
          plVar10[5] = 0;
          plVar10[6] = 0;
          plVar8 = plVar10;
        }
        puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(*plVar7 + (longlong)iVar11 * 0x10))();
        local_98[6] = *puVar6;
        local_60 = puVar6[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar8 + 0x20))(plVar8,local_98 + 6);
        plVar8 = (longlong *)(ulonglong)(iVar11 + 1);
      }
    }
  }
  if (local_res18 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14220fdc0 Serialize body=169 status=ok
// SIG undefined Serialize(void)

void FReplayEventListItem::Serialize(longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x60))(param_2,&DAT_144faa880,param_1 + 8);
  (**(code **)(*param_2 + 0x60))(param_2,L"group",param_1 + 0x18);
  (**(code **)(*param_2 + 0x60))(param_2,L"meta",param_1 + 0x28);
  (**(code **)(*param_2 + 0x78))(param_2,L"time1",param_1 + 0x38);
  (**(code **)(*param_2 + 0x78))(param_2,L"time2",param_1 + 0x3c);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14220fe70 StartStreaming body=136 status=ok
// SIG undefined StartStreaming(void)

/* WARNING: Removing unreachable block (ram,0x00014220fec5) */
/* WARNING: Removing unreachable block (ram,0x00014220fecd) */
/* WARNING: Removing unreachable block (ram,0x00014220fed2) */
/* WARNING: Removing unreachable block (ram,0x00014220fedb) */
/* WARNING: Removing unreachable block (ram,0x00014220fee5) */

void FNullNetworkReplayStreamer::StartStreaming(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 14220ff00 FUN_14220ff00 body=1584 status=ok
// SIG undefined FUN_14220ff00(void)

void FUN_14220ff00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,longlong param_6,longlong *param_7)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong *_Src_00;
  undefined2 *puVar12;
  bool bVar13;
  longlong *local_148;
  int local_140;
  undefined4 local_13c;
  undefined2 *local_138;
  int local_130;
  int local_12c;
  undefined2 *local_128;
  undefined8 local_120;
  undefined2 *local_118;
  int local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  char local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  wchar_t *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined1 local_70 [24];
  longlong local_58;
  
  plVar9 = (longlong *)0x0;
  local_140 = *(int *)(param_2 + 1);
  lVar11 = (longlong)local_140;
  _Src = (void *)*param_2;
  local_148 = (longlong *)0x0;
  if (local_140 == 0) {
    local_13c = 0;
    iVar10 = 0;
    _Src_00 = plVar9;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_140,0);
    _Src_00 = local_148;
    _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar11 * 2);
    iVar10 = *(int *)(param_2 + 1);
  }
  local_d0 = 6;
  local_d8 = &PTR_FUN_1440104d0;
  local_c8 = param_5;
  if (iVar10 < 2) {
    if (param_5 == '\0') {
      local_d0 = 2;
      if ((((int)param_7[1] != 0) && ((longlong *)*param_7 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*(longlong *)*param_7 + 0x18))(), cVar3 != '\0')) {
        if ((int)param_7[1] != 0) {
          plVar9 = (longlong *)*param_7;
        }
        (**(code **)(*plVar9 + 0x40))(plVar9,&local_d8);
      }
      goto LAB_1422104e5;
    }
    pplVar4 = (longlong **)GetAutomaticDemoName(&local_c0);
    if (&local_148 != pplVar4) {
      if (_Src_00 != (longlong *)0x0) {
        FMemory::Free(_Src_00);
      }
      local_148 = *pplVar4;
      *pplVar4 = (longlong *)0x0;
      local_140 = *(int *)(pplVar4 + 1);
      local_13c = *(undefined4 *)((longlong)pplVar4 + 0xc);
      pplVar4[1] = (longlong *)0x0;
    }
    if (local_c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  GetStreamDirectory(&local_e8,&local_148);
  puVar5 = (undefined8 *)GetStreamBaseFilename(local_80,&local_148);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar5;
  }
  GetStreamBaseFilename(&local_118,&local_148);
  puVar8 = &DAT_143f3eda8;
  if (local_110 != 0) {
    puVar8 = local_118;
  }
  puVar5 = (undefined8 *)FUN_14167d0d0(local_90);
  if (*(int *)(puVar5 + 1) == 0) {
    local_b0 = &DAT_143f3eda8;
  }
  else {
    local_b0 = (undefined2 *)*puVar5;
  }
  local_108 = (undefined2 *)0x0;
  local_a8 = L"Demos/";
  local_100 = 0;
  FPaths::CombineInternal(&local_108,&local_b0,2);
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  local_a0 = &DAT_143f3eda8;
  if ((int)local_100 != 0) {
    local_a0 = local_108;
  }
  local_f8 = (undefined2 *)0x0;
  local_f0 = 0;
  local_98 = puVar8;
  FPaths::CombineInternal(&local_f8,&local_a0,2);
  if (local_108 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_c0 = &DAT_143f3eda8;
  if ((int)local_f0 != 0) {
    local_c0 = local_f8;
  }
  local_128 = (undefined2 *)0x0;
  local_120 = 0;
  local_b8 = puVar12;
  FPaths::CombineInternal(&local_128,&local_c0,2);
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  iVar10 = (int)local_120;
  iVar2 = local_120._4_4_;
  bVar13 = (int)local_120 != 0;
  local_138 = local_128;
  local_128 = (undefined2 *)0x0;
  local_130 = (int)local_120;
  local_12c = local_120._4_4_;
  local_120 = 0;
  if (iVar2 < (int)((8 - (uint)bVar13) + iVar10)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138);
    iVar10 = local_130;
  }
  local_130 = (8 - (uint)(iVar10 != 0)) + iVar10;
  if (local_12c < local_130) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,iVar10);
  }
  iVar2 = local_130;
  puVar12 = local_138;
  builtin_wcsncpy(local_138 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)),L".header",8);
  if (local_128 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  GetDemoFilename(&local_118,&local_148);
  _Src_00 = local_148;
  pplVar4 = (longlong **)(param_1 + 0x30);
  if (pplVar4 != &local_148) {
    *(int *)(param_1 + 0x38) = local_140;
    if ((local_140 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pplVar4,local_140);
      _guard_xfg_dispatch_icall_nop(*pplVar4,_Src_00,(longlong)local_140 * 2);
    }
  }
  if (param_5 == '\0') {
    lVar11 = FUN_14220f310(local_70,pplVar4);
    plVar6 = (longlong *)(lVar11 + 0x18);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar11 + 8);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar11 + 0xc);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar11 + 0x10);
    if ((longlong *)(param_1 + 0x60) != plVar6) {
      lVar1 = *(longlong *)(param_1 + 0x60);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
      *(longlong *)(param_1 + 0x60) = *plVar6;
      *plVar6 = 0;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar11 + 0x20);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(lVar11 + 0x24);
      *(undefined8 *)(lVar11 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar11 + 0x28);
    *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(lVar11 + 0x2c);
    if (local_58 != 0) {
      FMemory::Free();
    }
    FUN_14220f470(param_1);
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar8 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar8 = puVar12;
    }
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,puVar8,4);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  else {
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar8 = &DAT_143f3eda8;
    if (local_e0 != 0) {
      puVar8 = local_e8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,puVar8,0,1);
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar8 = &DAT_143f3eda8;
    if (local_e0 != 0) {
      puVar8 = local_e8;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,puVar8,1);
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar8 = &DAT_143f3eda8;
    if (local_110 != 0) {
      puVar8 = local_118;
    }
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,puVar8,0x10);
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar8 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar8 = puVar12;
    }
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,puVar8,0x10);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_6 + 0x10);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_6 + 0x14);
    FString::operator=(param_1 + 0x60,param_3);
    WriteReplayInfo(pplVar4,param_1 + 0x48);
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    local_d0 = 0;
  }
  if ((((int)param_7[1] != 0) && ((longlong *)*param_7 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)*param_7 + 0x18))(), cVar3 != '\0')) {
    if ((int)param_7[1] != 0) {
      plVar9 = (longlong *)*param_7;
    }
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_d8);
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free(local_118);
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (local_e8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1422104e5:
  local_d8 = &PTR_FUN_1440104c8;
  if (_Src_00 != (longlong *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 142210530 FUN_142210530 body=434 status=ok
// SIG undefined FUN_142210530(void)

void FUN_142210530(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,longlong **param_7)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if (((*(int *)(param_7 + 1) == 0) || (*param_7 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**param_7 + 0x18))(), cVar1 == '\0')) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  else {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (((param_7 != &local_28) && (*(int *)(param_7 + 1) != 0)) &&
       (plVar2 = *param_7, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
    }
    local_38 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_30 = 3;
    local_38 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_145003260;
      plVar2[1] = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
      if (((&local_28 != (longlong **)(plVar2 + 1)) && (local_20 != 0)) &&
         (local_28 != (longlong *)0x0)) {
        (**(code **)(*local_28 + 0x30))();
      }
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1450032a8;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 1422106f0 StopStreaming body=219 status=ok
// SIG undefined StopStreaming(void)

void FNullNetworkReplayStreamer::StopStreaming(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0x28) == 1) {
    WriteReplayInfo(param_1 + 0x30,param_1 + 0x48);
  }
  plVar2 = (longlong *)FUN_1415c3d50();
  puVar3 = (undefined8 *)GetFinalFilename(local_18,param_1 + 0x30);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,puVar4,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return;
}



// FUNCTION 1422107d0 FUN_1422107d0 body=269 status=ok
// SIG undefined FUN_1422107d0(void)

void FUN_1422107d0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  longlong local_20 [2];
  undefined4 local_10;
  char local_c;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    FUN_14220f310(local_38,param_1 + 0x28);
    if (local_c != '\0') {
      *(undefined4 *)(param_1 + 0x48) = local_30;
      *(undefined4 *)(param_1 + 0x4c) = local_2c;
      *(undefined4 *)(param_1 + 0x50) = local_28;
      FString::operator=(param_1 + 0x58,local_20);
      *(undefined4 *)(param_1 + 0x68) = local_10;
      *(char *)(param_1 + 0x6c) = local_c;
    }
    if (local_20[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x70) < (longlong)*(int *)(param_1 + 0x68)) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
      FUN_14220f470(param_1 + -8);
      plVar1 = *(longlong **)(param_1 + 0x10);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xa8))(plVar1,uVar3);
      }
    }
  }
  else if (((*(int *)(param_1 + 0x20) == 1) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0))
          && (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(),
             *(int *)(param_1 + 0x68) < lVar4)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))();
    WriteReplayInfo(param_1 + 0x28,param_1 + 0x40);
    return;
  }
  return;
}



// FUNCTION 1422108e0 WriteReplayInfo body=169 status=ok
// SIG undefined WriteReplayInfo(void)

void WriteReplayInfo(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_1415c3d50();
  puVar2 = (undefined8 *)GetInfoFilename(local_18,param_1);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,puVar3,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0x18))(param_2,local_28,1);
    FUN_14158ce90(puVar2,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}



// FUNCTION 1422109a0 FUN_1422109a0 body=291 status=ok
// SIG undefined FUN_1422109a0(void)

longlong * FUN_1422109a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = operator_new(0x3b8);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FHttpNetworkReplayStreamer::FHttpNetworkReplayStreamer(lVar4);
  }
  local_18 = lVar4;
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = lVar4;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,lVar4,lVar4);
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x10),iVar2);
  }
  plVar3 = local_10;
  plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
  *plVar5 = local_18;
  plVar5[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  *param_2 = local_18;
  param_2[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
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
  return param_2;
}



// FUNCTION 142210ad0 FUN_142210ad0 body=691 status=ok
// SIG undefined FUN_142210ad0(void)

void FUN_142210ad0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  LARGE_INTEGER local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  iVar9 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar9) {
    plVar1 = (longlong *)(param_1 + 8);
    lVar10 = (longlong)iVar9 << 4;
    do {
      lVar4 = *(longlong *)(lVar10 + *plVar1);
      FUN_14221a3c0(lVar4);
      if (*(char *)(lVar4 + 0x25c) == '\0') {
        if (*(int *)(lVar4 + 600) == 1) {
          if (((*(longlong *)(lVar4 + 0x2f8) == 0) && (*(int *)(lVar4 + 0x2f0) < 1)) &&
             (fVar3 = *DAT_146aee5d8, QueryPerformanceCounter(local_res8),
             (double)fVar3 <
             ((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) -
             *(double *)(lVar4 + 0x240))) {
            FUN_142216150(lVar4);
          }
        }
        else if (*(int *)(lVar4 + 600) == 2) {
          plVar7 = *(longlong **)(lVar4 + 0x2e8);
          plVar8 = plVar7 + (longlong)*(int *)(lVar4 + 0x2f0) * 2;
          for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
            if (*(int *)(*plVar7 + 8) == 4) goto LAB_142210cff;
          }
          lVar5 = *(longlong *)(lVar4 + 0x2f8);
          if ((lVar5 == 0) || (*(int *)(lVar5 + 8) != 4)) {
            if ((*(uint *)(lVar4 + 0x298) != 0) &&
               (*(uint *)(lVar4 + 0x298) <= *(uint *)(lVar4 + 0x280))) {
              *(undefined4 *)(lVar4 + 0x298) = 0;
            }
            if ((*(int *)(lVar4 + 0x270) <= *(int *)(lVar4 + 0x238)) &&
               (*(char *)(lVar4 + 0x25d) == '\0')) {
              *(undefined1 *)(lVar4 + 0x154) = 1;
            }
            if (((lVar5 == 0) && (*(int *)(lVar4 + 0x2f0) < 1)) &&
               (QueryPerformanceCounter(&local_res18),
               10.0 < ((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0) -
                      *(double *)(lVar4 + 0x248))) {
              FUN_14221a800(lVar4,0);
            }
            FUN_142213930(lVar4);
            if (((*(longlong *)(lVar4 + 0x2f8) == 0) && (*(int *)(lVar4 + 0x2f0) < 1)) &&
               ((*(char *)(lVar4 + 0x25d) != '\0' &&
                (QueryPerformanceCounter(&local_res20),
                30.0 < ((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0) -
                       *(double *)(lVar4 + 0x250))))) {
              FUN_1422144b0(lVar4);
            }
          }
        }
      }
LAB_142210cff:
      lVar4 = *(longlong *)(*plVar1 + 8 + lVar10);
      if (lVar4 != 0) {
        piVar2 = (int *)(lVar4 + 8);
        LOCK();
        iVar6 = *piVar2;
        if (iVar6 == 0) {
          *piVar2 = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (((iVar6 == 1) && (*(longlong *)(*(longlong *)(lVar10 + *plVar1) + 0x2f8) == 0)) &&
           (*(int *)(*(longlong *)(lVar10 + *plVar1) + 0x2f0) < 1)) {
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (plVar1,iVar9,1,1);
        }
      }
      lVar10 = lVar10 + -0x10;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}



// FUNCTION 142210d90 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLocalFileNetworkReplayStreamingFactory::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 2);
  FUN_1404bf750(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142210de0 FUN_142210de0 body=84 status=ok
// SIG undefined FUN_142210de0(void)

void FUN_142210de0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
      iVar2 = (int)param_1[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar2 + *param_1),(void *)*param_2,(longlong)iVar1);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 142210e40 FUN_142210e40 body=382 status=ok
// SIG undefined FUN_142210e40(void)

void FUN_142210e40(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (((param_4 != &local_58) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_58);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x30))(local_58,&local_48);
  }
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    local_30 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x30))(local_48,&local_38);
    }
    FUN_142211960(plVar1,param_2,param_3,&local_38);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  if (local_28 != param_1) {
    if (plVar1 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar2 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar2;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
      goto LAB_142210f6c;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
LAB_142210f6c:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return;
}



// FUNCTION 142210fc0 FUN_142210fc0 body=492 status=ok
// SIG undefined FUN_142210fc0(void)

void FUN_142210fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38 [2];
  
  local_98 = (longlong *)0x0;
  local_90 = 0;
  if (((param_4 != &local_98) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_98);
  }
  plVar1 = (longlong *)FString::FString(local_68,param_5);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  if ((local_90 != 0) && (local_98 != (longlong *)0x0)) {
    (**(code **)(*local_98 + 0x30))(local_98,&local_88);
  }
  plVar2 = (longlong *)FString::FString(local_58,plVar1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x40);
  if (plVar3 != (longlong *)0x0) {
    local_78 = 0;
    local_70 = 0;
    if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x30))(local_88,&local_78);
    }
    uVar4 = FString::FString(local_48,plVar2);
    FUN_142211a40(plVar3,param_2,param_3,&local_78,uVar4);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  if (local_38 != param_1) {
    if (plVar3 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar5 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar5;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
      goto LAB_142211141;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar5 = FMemory::Realloc(plVar3,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_142211141:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422111b0 FUN_1422111b0 body=546 status=ok
// SIG undefined FUN_1422111b0(void)

int * FUN_1422111b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  void *_Dst;
  undefined8 *_Src;
  bool bVar11;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  bVar11 = false;
  _Src = (undefined8 *)((longlong)iVar10 * 0x30 + *param_1);
  *_Src = 0;
  *_Src = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  _Src[2] = *puVar4;
  _Src[3] = puVar4[1];
  puVar4[1] = 0;
  _Src[4] = puVar4[2];
  *puVar4 = 0;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)local_res8[0] * 0x30 + *param_1);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1422113af;
    }
  }
  cVar5 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar10 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*_Src;
    }
    uVar7 = FUN_140438070(puVar9);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x2c) = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar10;
  }
LAB_1422113af:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1422113e0 HeapSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,`FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished'::`18'::FCompareCheckpointTime>_> body=540 status=ok
// SIG undefined HeapSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,`FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished'::`18'::FCompareCheckpointTime>_>(void)

void AlgoImpl::
     HeapSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,_FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished_::_18_::FCompareCheckpointTime>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar1 = iVar12;
    iVar14 = iVar11;
joined_r0x00014221140a:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar13 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(uint *)(param_1 + (longlong)iVar12 * 8 + 0x17) <
              *(uint *)(param_1 + (longlong)iVar13 * 8 + 7)) {
            iVar13 = iVar12;
          }
          iVar13 = iVar13 + 1;
        }
        puVar15 = param_1 + (longlong)iVar13 * 8;
        puVar16 = param_1 + (longlong)iVar11 * 8;
        if (*(uint *)(puVar16 + 7) < *(uint *)(puVar15 + 7)) {
          if (puVar16 != puVar15) {
            uVar2 = puVar15[1];
            uVar3 = *puVar16;
            uVar4 = puVar16[1];
            uVar5 = puVar16[2];
            uVar6 = puVar16[3];
            uVar7 = puVar16[4];
            uVar8 = puVar16[5];
            uVar9 = puVar16[6];
            uVar10 = puVar16[7];
            *puVar16 = *puVar15;
            puVar16[1] = uVar2;
            uVar2 = puVar15[3];
            puVar16[2] = puVar15[2];
            puVar16[3] = uVar2;
            uVar2 = puVar15[5];
            puVar16[4] = puVar15[4];
            puVar16[5] = uVar2;
            uVar2 = puVar15[7];
            puVar16[6] = puVar15[6];
            puVar16[7] = uVar2;
            *puVar15 = uVar3;
            puVar15[1] = uVar4;
            puVar15[2] = uVar5;
            puVar15[3] = uVar6;
            puVar15[4] = uVar7;
            puVar15[5] = uVar8;
            puVar15[6] = uVar9;
            puVar15[7] = uVar10;
          }
          iVar12 = iVar13 * 2 + 1;
          iVar11 = iVar13;
          goto joined_r0x00014221140a;
        }
      }
      iVar12 = iVar1 + -2;
      iVar11 = iVar14 + -1;
      iVar1 = iVar12;
      iVar14 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar15) {
        uVar2 = puVar15[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        *param_1 = *puVar15;
        param_1[1] = uVar2;
        uVar2 = puVar15[3];
        param_1[2] = puVar15[2];
        param_1[3] = uVar2;
        uVar2 = puVar15[5];
        param_1[4] = puVar15[4];
        param_1[5] = uVar2;
        uVar2 = puVar15[7];
        param_1[6] = puVar15[6];
        param_1[7] = uVar2;
        *puVar15 = uVar3;
        puVar15[1] = uVar4;
        puVar15[2] = uVar5;
        puVar15[3] = uVar6;
        puVar15[4] = uVar7;
        puVar15[5] = uVar8;
        puVar15[6] = uVar9;
        puVar15[7] = uVar10;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar11 * 2;
          iVar12 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(uint *)(param_1 + (longlong)iVar1 * 8 + 0x17) <
                *(uint *)(param_1 + (longlong)iVar12 * 8 + 7)) {
              iVar12 = iVar1;
            }
            iVar12 = iVar12 + 1;
          }
          puVar16 = param_1 + (longlong)iVar12 * 8;
          puVar17 = param_1 + (longlong)iVar11 * 8;
          if (*(uint *)(puVar16 + 7) <= *(uint *)(puVar17 + 7)) break;
          if (puVar17 != puVar16) {
            uVar2 = puVar16[1];
            uVar3 = *puVar17;
            uVar4 = puVar17[1];
            uVar5 = puVar17[2];
            uVar6 = puVar17[3];
            uVar7 = puVar17[4];
            uVar8 = puVar17[5];
            uVar9 = puVar17[6];
            uVar10 = puVar17[7];
            *puVar17 = *puVar16;
            puVar17[1] = uVar2;
            uVar2 = puVar16[3];
            puVar17[2] = puVar16[2];
            puVar17[3] = uVar2;
            uVar2 = puVar16[5];
            puVar17[4] = puVar16[4];
            puVar17[5] = uVar2;
            uVar2 = puVar16[7];
            puVar17[6] = puVar16[6];
            puVar17[7] = uVar2;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar16[2] = uVar5;
            puVar16[3] = uVar6;
            puVar16[4] = uVar7;
            puVar16[5] = uVar8;
            puVar16[6] = uVar9;
            puVar16[7] = uVar10;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142211600 IntroSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,`FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished'::`18'::FCompareCheckpointTime>_> body=861 status=ok
// SIG undefined IntroSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,`FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished'::`18'::FCompareCheckpointTime>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,_FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished_::_18_::FCompareCheckpointTime>_>
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
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
    lStack_320 = param_2 * 0x40 + -0x40 + param_1;
    fVar26 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar26 = fVar26 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar26 = ::_guard_xfg_dispatch_icall_nop(fVar26);
    local_318 = (undefined4)(longlong)(fVar26 + fVar26);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar20 = &local_328;
    do {
      puVar25 = (undefined8 *)*plVar20;
      puVar23 = (undefined8 *)plVar20[1];
      lVar1 = plVar20[2];
      local_338._0_4_ = (int)lVar1;
      lVar18 = ((longlong)puVar23 - (longlong)puVar25 >> 6) + 1;
      puVar24 = puVar25;
      if ((int)local_338 != 0) {
LAB_1422116d0:
        if (8 < lVar18) {
          puVar25 = puVar24 + (lVar18 / 2) * 8;
          if (puVar25 != puVar24) {
            uVar9 = puVar24[1];
            uVar2 = *(undefined4 *)puVar25;
            uVar3 = *(undefined4 *)((longlong)puVar25 + 4);
            uVar4 = *(undefined4 *)(puVar25 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar25 + 0xc);
            uVar10 = puVar25[2];
            uVar11 = puVar25[3];
            uVar12 = puVar25[4];
            uVar13 = puVar25[5];
            uVar14 = puVar25[6];
            uVar15 = puVar25[7];
            *puVar25 = *puVar24;
            puVar25[1] = uVar9;
            uVar9 = puVar24[3];
            puVar25[2] = puVar24[2];
            puVar25[3] = uVar9;
            uVar6 = *(undefined4 *)((longlong)puVar24 + 0x24);
            uVar7 = *(undefined4 *)(puVar24 + 5);
            uVar8 = *(undefined4 *)((longlong)puVar24 + 0x2c);
            *(undefined4 *)(puVar25 + 4) = *(undefined4 *)(puVar24 + 4);
            *(undefined4 *)((longlong)puVar25 + 0x24) = uVar6;
            *(undefined4 *)(puVar25 + 5) = uVar7;
            *(undefined4 *)((longlong)puVar25 + 0x2c) = uVar8;
            uVar9 = puVar24[7];
            puVar25[6] = puVar24[6];
            puVar25[7] = uVar9;
            *(undefined4 *)puVar24 = uVar2;
            *(undefined4 *)((longlong)puVar24 + 4) = uVar3;
            *(undefined4 *)(puVar24 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar24 + 0xc) = uVar5;
            puVar24[2] = uVar10;
            puVar24[3] = uVar11;
            puVar24[4] = uVar12;
            puVar24[5] = uVar13;
            puVar24[6] = uVar14;
            puVar24[7] = uVar15;
          }
          puVar21 = puVar23 + 8;
          puVar25 = puVar24;
LAB_142211740:
          puVar19 = puVar25;
          puVar25 = puVar19 + 8;
          if (puVar25 <= puVar23) goto code_r0x000142211749;
          goto LAB_142211752;
        }
        for (; puVar21 = puVar24, puVar25 = puVar24, puVar24 < puVar23; puVar23 = puVar23 + -8) {
          while (puVar19 = puVar21, puVar25 = puVar25 + 8, puVar25 <= puVar23) {
            puVar21 = puVar25;
            if (*(uint *)(puVar25 + 7) <= *(uint *)(puVar19 + 7)) {
              puVar21 = puVar19;
            }
          }
          if (puVar19 != puVar23) {
            uVar9 = puVar23[1];
            uVar10 = *puVar19;
            uVar11 = puVar19[1];
            uVar12 = puVar19[2];
            uVar13 = puVar19[3];
            uVar14 = puVar19[4];
            uVar15 = puVar19[5];
            uVar16 = puVar19[6];
            uVar17 = puVar19[7];
            *puVar19 = *puVar23;
            puVar19[1] = uVar9;
            uVar9 = puVar23[3];
            puVar19[2] = puVar23[2];
            puVar19[3] = uVar9;
            uVar9 = puVar23[5];
            puVar19[4] = puVar23[4];
            puVar19[5] = uVar9;
            uVar9 = puVar23[7];
            puVar19[6] = puVar23[6];
            puVar19[7] = uVar9;
            *puVar23 = uVar10;
            puVar23[1] = uVar11;
            puVar23[2] = uVar12;
            puVar23[3] = uVar13;
            puVar23[4] = uVar14;
            puVar23[5] = uVar15;
            puVar23[6] = uVar16;
            puVar23[7] = uVar17;
          }
        }
        goto LAB_14221188f;
      }
LAB_142211880:
      local_338 = lVar1;
      HeapSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,_FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished_::_18_::FCompareCheckpointTime>_>
                (puVar25,lVar18,param_3,param_4);
LAB_14221188f:
      plVar20 = plVar20 + -3;
    } while (&local_328 <= plVar20);
  }
  return;
code_r0x000142211749:
  if (*(uint *)(puVar19 + 0xf) <= *(uint *)(puVar24 + 7)) goto LAB_142211740;
LAB_142211752:
  do {
    puVar22 = puVar21;
    puVar21 = puVar22 + -8;
    if (puVar21 <= puVar24) break;
  } while (*(uint *)(puVar24 + 7) <= *(uint *)(puVar22 + -1));
  if (puVar25 <= puVar21) {
    if (puVar25 != puVar21) {
      uVar9 = puVar22[-7];
      uVar2 = *(undefined4 *)puVar25;
      uVar3 = *(undefined4 *)((longlong)puVar19 + 0x44);
      uVar4 = *(undefined4 *)(puVar19 + 9);
      uVar5 = *(undefined4 *)((longlong)puVar19 + 0x4c);
      uVar10 = puVar19[10];
      uVar11 = puVar19[0xb];
      uVar12 = puVar19[0xc];
      uVar13 = puVar19[0xd];
      uVar14 = puVar19[0xe];
      uVar15 = puVar19[0xf];
      *puVar25 = *puVar21;
      puVar19[9] = uVar9;
      uVar9 = puVar22[-5];
      puVar19[10] = puVar22[-6];
      puVar19[0xb] = uVar9;
      uVar6 = *(undefined4 *)((longlong)puVar22 + -0x1c);
      uVar7 = *(undefined4 *)(puVar22 + -3);
      uVar8 = *(undefined4 *)((longlong)puVar22 + -0x14);
      *(undefined4 *)(puVar19 + 0xc) = *(undefined4 *)(puVar22 + -4);
      *(undefined4 *)((longlong)puVar19 + 100) = uVar6;
      *(undefined4 *)(puVar19 + 0xd) = uVar7;
      *(undefined4 *)((longlong)puVar19 + 0x6c) = uVar8;
      uVar9 = puVar22[-1];
      puVar19[0xe] = puVar22[-2];
      puVar19[0xf] = uVar9;
      *(undefined4 *)puVar21 = uVar2;
      *(undefined4 *)((longlong)puVar22 + -0x3c) = uVar3;
      *(undefined4 *)(puVar22 + -7) = uVar4;
      *(undefined4 *)((longlong)puVar22 + -0x34) = uVar5;
      puVar22[-6] = uVar10;
      puVar22[-5] = uVar11;
      puVar22[-4] = uVar12;
      puVar22[-3] = uVar13;
      puVar22[-2] = uVar14;
      puVar22[-1] = uVar15;
    }
    goto LAB_142211740;
  }
  if (puVar24 != puVar21) {
    uVar9 = puVar22[-7];
    uVar2 = *(undefined4 *)puVar24;
    uVar3 = *(undefined4 *)((longlong)puVar24 + 4);
    uVar4 = *(undefined4 *)(puVar24 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar24 + 0xc);
    uVar10 = puVar24[2];
    uVar11 = puVar24[3];
    uVar12 = puVar24[4];
    uVar13 = puVar24[5];
    uVar14 = puVar24[6];
    uVar15 = puVar24[7];
    *puVar24 = *puVar21;
    puVar24[1] = uVar9;
    uVar9 = puVar22[-5];
    puVar24[2] = puVar22[-6];
    puVar24[3] = uVar9;
    uVar6 = *(undefined4 *)((longlong)puVar22 + -0x1c);
    uVar7 = *(undefined4 *)(puVar22 + -3);
    uVar8 = *(undefined4 *)((longlong)puVar22 + -0x14);
    *(undefined4 *)(puVar24 + 4) = *(undefined4 *)(puVar22 + -4);
    *(undefined4 *)((longlong)puVar24 + 0x24) = uVar6;
    *(undefined4 *)(puVar24 + 5) = uVar7;
    *(undefined4 *)((longlong)puVar24 + 0x2c) = uVar8;
    uVar9 = puVar22[-1];
    puVar24[6] = puVar22[-2];
    puVar24[7] = uVar9;
    *(undefined4 *)puVar21 = uVar2;
    *(undefined4 *)((longlong)puVar22 + -0x3c) = uVar3;
    *(undefined4 *)(puVar22 + -7) = uVar4;
    *(undefined4 *)((longlong)puVar22 + -0x34) = uVar5;
    puVar22[-6] = uVar10;
    puVar22[-5] = uVar11;
    puVar22[-4] = uVar12;
    puVar22[-3] = uVar13;
    puVar22[-2] = uVar14;
    puVar22[-1] = uVar15;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar21 + (-0x40 - (longlong)puVar24) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar23 - (longlong)puVar25 & 0xffffffffffffffc0U)) {
    if (puVar25 < puVar23) {
      *plVar20 = (longlong)puVar25;
      plVar20[1] = (longlong)puVar23;
      *(int *)(plVar20 + 2) = (int)local_338;
      plVar20 = plVar20 + 3;
    }
    if (puVar21 <= puVar24 + 8) goto LAB_14221188f;
    puVar23 = puVar22 + -0x10;
    puVar25 = puVar24;
  }
  else {
    if (puVar24 + 8 < puVar21) {
      *plVar20 = (longlong)puVar24;
      plVar20[1] = (longlong)(puVar22 + -0x10);
      *(int *)(plVar20 + 2) = (int)local_338;
      plVar20 = plVar20 + 3;
    }
    if (puVar23 <= puVar25) goto LAB_14221188f;
  }
  lVar18 = ((longlong)puVar23 - (longlong)puVar25 >> 6) + 1;
  puVar24 = puVar25;
  if ((int)local_338 == 0) goto LAB_142211880;
  goto LAB_1422116d0;
}



// FUNCTION 142211960 FUN_142211960 body=214 status=ok
// SIG undefined FUN_142211960(void)

undefined8 *
FUN_142211960(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  local_10 = 0;
  local_18 = (longlong *)0x0;
  if (((param_4 != &local_18) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar1 = *param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
  }
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_14500c3d0;
  param_1[2] = param_3;
  param_1[3] = (longlong *)0x0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (((&local_18 != (longlong **)(param_1 + 3)) && (local_10 != 0)) &&
     (local_18 != (longlong *)0x0)) {
    (**(code **)(*local_18 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  *param_1 = &PTR_GetPoolName_14500c418;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_1;
}



// FUNCTION 142211a40 FUN_142211a40 body=283 status=ok
// SIG undefined FUN_142211a40(void)

undefined8 *
FUN_142211a40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4,
             longlong *param_5)

{
  longlong **pplVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [16];
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if (((param_4 != &local_38) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
  }
  plVar2 = (longlong *)FString::FString(local_28,param_5);
  param_1[2] = param_3;
  pplVar1 = (longlong **)(param_1 + 3);
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_14500c4f0;
  *pplVar1 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (((&local_38 != pplVar1) && (local_30 != 0)) && (local_38 != (longlong *)0x0)) {
    (**(code **)(*local_38 + 0x30))(local_38,pplVar1);
  }
  FString::FString(param_1 + 5,plVar2);
  uVar3 = FDelegateHandle::GenerateNewID();
  param_1[7] = uVar3;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_GetPoolName_14500c538;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142211b60 FHttpNetworkReplayStreamer body=601 status=ok
// SIG undefined FHttpNetworkReplayStreamer(void)

undefined8 * FHttpNetworkReplayStreamer::FHttpNetworkReplayStreamer(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14500be98;
  FArchive::FArchive(param_1 + 1);
  param_1[1] = &PTR__scalar_deleting_destructor__14500bc68;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  FArchive::FArchive(param_1 + 0x16);
  param_1[0x16] = &PTR__scalar_deleting_destructor__14500bc68;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  FArchive::FArchive(param_1 + 0x2b);
  param_1[0x2b] = &PTR__scalar_deleting_destructor__14500bc68;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  param_1[0x59] = 0xffffffffffffffff;
  param_1[0x5a] = &PTR__scalar_deleting_destructor__145002cb8;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"HttpNetworkReplayStreaming",L"ServerURL",param_1 + 0x45,&DAT_1468e2360)
  ;
  return param_1;
}



// FUNCTION 142211dc0 FQueuedHttpRequest body=156 status=ok
// SIG undefined FQueuedHttpRequest(void)

undefined8 *
FQueuedHttpRequest::FQueuedHttpRequest(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__14500be58;
  param_1[2] = *param_3;
  lVar4 = param_3[1];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  plVar5 = (longlong *)param_3[1];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142211e60 FUN_142211e60 body=480 status=ok
// SIG undefined FUN_142211e60(void)

undefined8 *
FUN_142211e60(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_68 [7];
  longlong local_30;
  
  local_68[6] = *param_7;
  local_30 = param_7[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FQueuedHttpRequest::FQueuedHttpRequest(param_1,0xd,local_68 + 6);
  local_68[1] = 5;
  *param_1 = &PTR__scalar_deleting_destructor__14500be68;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_68[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"POST",10);
  (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],local_68);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[5] = 0x19;
  local_68[4] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
  FGenericPlatformString::Memcpy(local_68[4],L"application/octet-stream",0x32);
  local_68[3] = 0xd;
  local_68[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"Content-Type",0x1a);
  (**(code **)(*(longlong *)param_1[2] + 0x68))((longlong *)param_1[2],local_68 + 2,local_68 + 4);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)param_1[2] + 0x58))((longlong *)param_1[2],param_6);
  FString::operator=(param_1 + 7,param_2);
  *(undefined4 *)(param_1 + 9) = param_3;
  FString::operator=(param_1 + 10,param_4);
  FString::operator=(param_1 + 0xc,param_5);
  plVar4 = (longlong *)param_7[1];
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
  return param_1;
}



// FUNCTION 142212040 FUN_142212040 body=529 status=ok
// SIG undefined FUN_142212040(void)

undefined8 * FUN_142212040(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48 [2];
  undefined **local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_58 = *param_3;
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FQueuedHttpRequest::FQueuedHttpRequest(param_1,0xc,&local_58);
  local_28 = 1;
  *param_1 = &PTR__scalar_deleting_destructor__14500be78;
  local_38 = &PTR_FUN_14500c208;
  local_30 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_30,0);
  FString::FString(local_30,param_2);
  FUN_1406d2150(&local_38,local_48,1);
  local_88 = 0;
  local_80 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"POST",10);
  (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],&local_88);
  if (local_88 != 0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)param_1[2] + 0x60))((longlong *)param_1[2],local_48);
  local_68 = 0;
  local_60 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"application/json",0x22);
  local_78 = 0;
  local_70 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"Content-Type",0x1a);
  (**(code **)(*(longlong *)param_1[2] + 0x68))((longlong *)param_1[2],&local_78,&local_68);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_38 = &PTR_FUN_14500c208;
  plVar4 = local_30;
  for (iVar5 = (int)local_28; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  plVar4 = (longlong *)param_3[1];
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
  }
  return param_1;
}



// FUNCTION 142212260 ~TArray<FNetworkReplayListItem,FDefaultAllocator> body=168 status=ok
// SIG undefined ~TArray<FNetworkReplayListItem,FDefaultAllocator>(void)

void TArray<FNetworkReplayListItem,FDefaultAllocator>::
     ~TArray<FNetworkReplayListItem,FDefaultAllocator>(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__14500c0c8;
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_144050e60;
      puVar1 = puVar1 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142212310 FUN_142212310 body=455 status=ok
// SIG undefined FUN_142212310(void)

void FUN_142212310(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x74] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x61,0);
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x60];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x5d);
  param_1[0x5a] = &PTR__scalar_deleting_destructor__145002cb8;
  TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
            (param_1 + 0x5b);
  param_1[0x5a] = &PTR_FUN_144050e60;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x56);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x54);
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x45] != 0) {
    FMemory::Free();
  }
  if (param_1[0x42] != 0) {
    FMemory::Free();
  }
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x2b);
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 0x16);
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1 + 1);
  *param_1 = &PTR_FUN_145002d20;
  return;
}



// FUNCTION 1422124e0 FUN_1422124e0 body=104 status=ok
// SIG undefined FUN_1422124e0(void)

void FUN_1422124e0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14500c208;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *param_1 = &PTR_FUN_144050e60;
  return;
}



// FUNCTION 142212550 FUN_142212550 body=458 status=ok
// SIG undefined FUN_142212550(void)

void FUN_142212550(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined **local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar1 != '\0')) {
    plVar3 = (longlong *)0x0;
    local_48 = &PTR__scalar_deleting_destructor__145002d00;
    local_40 = *(undefined4 *)(param_2 + 8);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_28,param_2 + 0x20);
    if (&local_38 != (longlong **)(param_2 + 0x10)) {
      plVar5 = local_38;
      for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (plVar5[2] != 0) {
          FMemory::Free();
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 9;
      }
      iVar4 = *(int *)(param_2 + 0x18);
      plVar5 = *(longlong **)(param_2 + 0x10);
      local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20);
      local_30 = CONCAT44(local_30._4_4_,iVar4);
      if ((iVar4 == 0) && (local_30._4_4_ == 0)) {
        local_30 = 0;
      }
      else {
        TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4);
        if (iVar4 != 0) {
          plVar2 = local_38 + 4;
          plVar5 = plVar5 + 4;
          do {
            FString::FString(plVar2 + -4,plVar5 + -4);
            FString::FString(plVar2 + -2,plVar5 + -2);
            *plVar2 = *plVar5;
            plVar2[1] = plVar5[1];
            *(int *)(plVar2 + 2) = (int)plVar5[2];
            *(undefined4 *)((longlong)plVar2 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x14);
            *(char *)(plVar2 + 3) = (char)plVar5[3];
            *(undefined4 *)((longlong)plVar2 + 0x1c) = *(undefined4 *)((longlong)plVar5 + 0x1c);
            *(char *)(plVar2 + 4) = (char)plVar5[4];
            iVar4 = iVar4 + -1;
            plVar2 = plVar2 + 9;
            plVar5 = plVar5 + 9;
          } while (iVar4 != 0);
        }
      }
    }
    if ((int)param_1[1] != 0) {
      plVar3 = (longlong *)*param_1;
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_48);
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
    TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
    ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_38);
  }
  return;
}



// FUNCTION 142212720 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FHttpNetworkReplayStreamer,TTypeWrapper<void>___cdecl(TSharedPtr<IHttpRequest,0>,TSharedPtr<IHttpResponse,1>,bool),TBaseDelegate<void,FKeepReplayResult_const_&>,FString>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142212780 FUN_142212780 body=52 status=ok
// SIG undefined FUN_142212780(void)

undefined8 FUN_142212780(undefined8 param_1,ulonglong param_2)

{
  FUN_142212310();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b8);
  }
  return param_1;
}



// FUNCTION 1422127c0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FHttpStreamFArchive::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142212810 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FNetworkReplayList::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14500c1c0;
  TArray<FNetworkReplayListItem,FDefaultAllocator>::
  ~TArray<FNetworkReplayListItem,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142212860 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayListItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14500c0c8;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1422128d0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartDownloadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14500c2b0;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142212940 FUN_142212940 body=82 status=ok
// SIG undefined FUN_142212940(void)

undefined8 * FUN_142212940(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14500c258;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144050e60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1422129a0 FUN_1422129a0 body=52 status=ok
// SIG undefined FUN_1422129a0(void)

undefined8 FUN_1422129a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1422124e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1422129e0 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FQueuedGotoFakeCheckpoint::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__14500be58;
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
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142212a70 `scalar_deleting_destructor' body=186 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FQueuedHttpRequestAddEvent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__14500be68;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14500be58;
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
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142212b30 FUN_142212b30 body=154 status=ok
// SIG undefined FUN_142212b30(void)

void FUN_142212b30(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  iVar3 = *(int *)(param_1 + 0x2f0);
  *(int *)(param_1 + 0x2f0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x2f4) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x2e8),iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x2e8));
  *puVar6 = *param_2;
  lVar4 = param_2[1];
  puVar6[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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



// FUNCTION 142212bd0 AddEvent body=200 status=ok
// SIG undefined AddEvent(void)

void FHttpNetworkReplayStreamer::AddEvent
               (longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int *piVar1;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  if ((int)param_1[0x4b] == 1) {
    piVar1 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0x61,local_res8);
    if (*piVar1 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1 + 0x61,local_res8,param_3,0);
      (**(code **)(*param_1 + 0x1c8))(param_1,param_3);
    }
  }
  else if ((int)param_1[0x4b] != 2) {
    return;
  }
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0xa0))(param_1,local_28,param_2,param_3,param_4,param_5);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142212ca0 FUN_142212ca0 body=369 status=ok
// SIG undefined FUN_142212ca0(void)

void FUN_142212ca0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if (*(int *)(param_1 + 600) - 1U < 2) {
    plVar3 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_28);
    uVar4 = (**(code **)(*local_28 + 0x80))();
    FUN_1406c1b60(uVar4,param_1,FUN_142219570);
    lVar5 = operator_new(0x70);
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_142211e60(lVar5,param_2,param_3,param_4,param_5,param_6,&local_18);
    }
    local_38 = uVar4;
    local_30 = (undefined8 *)operator_new(0x18);
    if (local_30 != (undefined8 *)0x0) {
      *(undefined4 *)(local_30 + 1) = 1;
      *local_30 = &PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_30 + 0xc) = 1;
      local_30[2] = uVar4;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_38,uVar4,uVar4);
    FUN_142212b30(param_1,&local_38);
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plStack_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142212e20 FUN_142212e20 body=421 status=ok
// SIG undefined FUN_142212e20(void)

void FUN_142212e20(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *local_28;
  undefined8 *local_20;
  
  puVar7 = (undefined8 *)operator_new(0x38);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar4 = (longlong *)param_3[1];
    uVar5 = *param_3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar7 + 1) = param_2;
    *puVar7 = &PTR__scalar_deleting_destructor__14500be58;
    puVar7[2] = uVar5;
    puVar7[3] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar7 + 5) = param_5;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = param_4;
    puVar7[6] = 0;
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
  }
  local_28 = puVar7;
  local_20 = (undefined8 *)operator_new(0x18);
  if (local_20 != (undefined8 *)0x0) {
    *(undefined4 *)(local_20 + 1) = 1;
    *local_20 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_20 + 0xc) = 1;
    local_20[2] = puVar7;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_28,puVar7,puVar7);
  iVar3 = *(int *)(param_1 + 0x2f0);
  *(int *)(param_1 + 0x2f0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x2f4) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x2e8,iVar3);
  }
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x2e8));
  *puVar7 = local_28;
  puVar7[1] = local_20;
  plVar4 = (longlong *)param_3[1];
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



// FUNCTION 142212fd0 FUN_142212fd0 body=471 status=ok
// SIG undefined FUN_142212fd0(void)

void FUN_142212fd0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res10 [16];
  LARGE_INTEGER local_res20;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48;
  longlong *local_40;
  double local_38;
  
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 == (undefined8 *)0x0) {
    plVar5 = (longlong *)param_2[1];
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
    plVar5 = (longlong *)param_3[1];
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
  }
  else {
    if (*param_3 != 0) {
      QueryPerformanceCounter(&local_res20);
      plVar5 = (longlong *)param_3[1];
      local_48 = *param_3;
      local_38 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
      local_40 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
      local_68 = (**(code **)*puVar4)(puVar4,local_58);
      local_60 = &local_48;
      FUN_1422111b0(param_1 + 0x360,local_res10,&local_68,0);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      plVar5 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
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
      FHttpNetworkReplayStreamer::CleanupResponseCache(param_1);
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  }
  return;
}



// FUNCTION 1422131b0 FUN_1422131b0 body=308 status=ok
// SIG undefined FUN_1422131b0(void)

void FUN_1422131b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined8 *local_30;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if ((*(int *)(param_1 + 600) == 1) && (1 < *(int *)(param_2 + 8))) {
    plVar3 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_28);
    uVar4 = (**(code **)(*local_28 + 0x80))();
    FUN_1406c1b60(uVar4,param_1,FHttpNetworkReplayStreamer::HttpAddUserFinished);
    lVar5 = operator_new(0x38);
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_142212040(lVar5,param_2,&local_18);
    }
    local_38 = uVar4;
    local_30 = (undefined8 *)operator_new(0x18);
    if (local_30 != (undefined8 *)0x0) {
      *(undefined4 *)(local_30 + 1) = 1;
      *local_30 = &PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_30 + 0xc) = 1;
      local_30[2] = uVar4;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_38,uVar4,uVar4);
    FUN_142212b30(param_1,&local_38);
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar1 = (int *)((longlong)plStack_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142213310 FUN_142213310 body=434 status=ok
// SIG undefined FUN_142213310(void)

void FUN_142213310(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong local_28;
  longlong *local_20;
  
  plVar8 = (longlong *)(param_1 + 0x2f8);
  if (*plVar8 != 0) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(*plVar8 + 0x10) + 0x80))();
    if (((int)plVar5[1] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x18))();
      if (cVar4 != '\0') {
        plVar5 = (longlong *)(**(code **)(**(longlong **)(*plVar8 + 0x10) + 0x80))();
        if (((int)plVar5[1] != 0) && (plVar3 = (longlong *)*plVar5, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar5 != 0) {
            lVar6 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar6;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
        }
      }
    }
    (**(code **)(**(longlong **)(*plVar8 + 0x10) + 0x98))();
    local_20 = (longlong *)0x0;
    if (plVar8 != &local_28) {
      *plVar8 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x300,&local_20);
      plVar8 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x2f0);
  if (iVar7 != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x2e8) + 8);
    do {
      plVar5 = (longlong *)*plVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar8 = plVar8 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x2e8,0);
  }
  *(undefined1 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  return;
}



// FUNCTION 1422134d0 CleanupResponseCache body=769 status=ok
// SIG undefined CleanupResponseCache(void)

void FHttpNetworkReplayStreamer::CleanupResponseCache(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  void *_Src;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  void **ppvVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  void *pvVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  void *local_118;
  int local_110;
  int iStack_10c;
  int local_108;
  uint uStack_104;
  uint *puStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined2 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 local_60 [16];
  
  if (*(int *)(param_1 + 0x368) != *(int *)(param_1 + 0x394)) {
    plVar2 = (longlong *)(param_1 + 0x360);
    puVar1 = (uint *)(param_1 + 0x370);
    do {
      iVar4 = *(int *)(param_1 + 0x388);
      pvVar15 = (void *)0x0;
      local_108 = 0;
      iVar12 = 0;
      local_118 = (void *)0x0;
      iVar11 = 0;
      local_110 = 0;
      iStack_10c = 0;
      uVar16 = 0;
      uStack_104 = 1;
      uVar17 = 0;
      uVar18 = 0;
      iStack_f4 = 0;
      iStack_f0 = 0;
      if (iVar4 != 0) {
        puVar14 = *(uint **)(param_1 + 0x380);
        if (*(uint **)(param_1 + 0x380) == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar5 = *puVar14;
        local_108 = 0;
        while (uVar5 == 0) {
          lVar10 = (longlong)local_108;
          iStack_f0 = iStack_f0 + 0x20;
          iVar8 = local_108 + 1;
          bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_108;
          local_108 = iVar8;
          if (bVar6) goto LAB_1422135f4;
          uVar5 = puVar14[lVar10 + 1];
        }
        uStack_104 = -uVar5 & uVar5;
        iVar8 = 0x1f;
        if (uStack_104 != 0) {
          for (; uStack_104 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_104 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        iStack_f4 = (iStack_f0 - iVar8) + 0x1f;
        if (iVar4 < iStack_f4) {
LAB_1422135f4:
          iStack_f4 = iVar4;
        }
      }
      local_f8 = 0xffffffff;
      uStack_d0 = CONCAT44(iStack_f4,0xffffffff);
      auStack_90._8_4_ = iStack_f0;
      auStack_90._0_8_ = uStack_d0;
      auStack_90._12_4_ = uStack_ec;
      uStack_e0 = CONCAT44(uStack_104,local_108);
      local_b0 = 0;
      local_60._8_4_ = SUB84(plVar2,0);
      local_60._12_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
      local_c8._8_4_ = local_60._8_4_;
      local_c8._0_8_ = auStack_90._8_8_;
      local_c8._12_4_ = local_60._12_4_;
      local_60._0_8_ = auStack_90._8_8_;
      iVar8 = iStack_f4;
      puStack_100 = puVar1;
      local_e8 = plVar2;
      local_d8 = puVar1;
      local_b8 = plVar2;
      local_a8 = plVar2;
      uStack_a0 = uStack_e0;
      puStack_98 = puVar1;
      if (iStack_f4 < iVar4) {
        do {
          plVar7 = local_e8;
          if ((iVar12 < 2) ||
             (lVar10 = (longlong)iVar8 * 0x30, pdVar3 = (double *)(lVar10 + 0x20 + *local_e8),
             *pdVar3 <= (double)CONCAT44(uVar18,uVar17) &&
             (double)CONCAT44(uVar18,uVar17) != *pdVar3)) {
            lVar10 = (longlong)iVar8 * 0x30;
            ppvVar9 = (void **)(*local_e8 + lVar10);
            uVar17 = SUB84(ppvVar9[4],0);
            uVar18 = (undefined4)((ulonglong)ppvVar9[4] >> 0x20);
            if (&local_118 != ppvVar9) {
              local_110 = *(int *)(ppvVar9 + 1);
              lVar13 = (longlong)local_110;
              _Src = *ppvVar9;
              if ((local_110 == 0) && (iVar11 == 0)) {
                iStack_10c = iVar11;
                iVar12 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,iVar11);
                pvVar15 = local_118;
                ::_guard_xfg_dispatch_icall_nop(local_118,_Src,lVar13 * 2);
                iVar11 = iStack_10c;
                iVar12 = local_110;
              }
            }
          }
          lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x10 + *plVar7) + 0x30))();
          uVar16 = uVar16 + *(int *)(lVar10 + 8);
          uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
          iVar8 = uStack_d0._4_4_;
        } while (uStack_d0._4_4_ < (int)local_d8[6]);
        if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
          TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34));
        }
      }
      if (uVar16 <= *DAT_146aee5f0) {
        if (pvVar15 == (void *)0x0) {
          return;
        }
        FMemory::Free(pvVar15);
        return;
      }
      TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
      ::Remove(plVar2,&local_118);
      if (pvVar15 != (void *)0x0) {
        FMemory::Free();
      }
    } while (*(int *)(param_1 + 0x368) != *(int *)(param_1 + 0x394));
  }
  return;
}



// FUNCTION 1422137e0 FUN_1422137e0 body=330 status=ok
// SIG undefined FUN_1422137e0(void)

undefined8 FUN_1422137e0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined **local_b8 [18];
  longlong local_28 [2];
  undefined4 local_18;
  undefined1 local_14;
  
  cVar6 = (**(code **)(*param_1 + 0x200))();
  if (cVar6 == '\0') {
    (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,param_3);
  }
  else {
    QueryPerformanceCounter(&local_res8);
    FArchive::FArchive(local_b8);
    local_b8[0] = &PTR__scalar_deleting_destructor__14500bc68;
    local_28[0] = 0;
    local_28[1] = 0;
    local_18 = 0;
    local_14 = 0;
    cVar6 = (**(code **)(*param_1 + 0x208))(param_1,param_3,local_b8);
    if (cVar6 == '\0') {
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_b8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return 0;
    }
    QueryPerformanceCounter(&local_res20);
    (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_b8);
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
  return 1;
}



// FUNCTION 142213930 FUN_142213930 body=1006 status=ok
// SIG undefined FUN_142213930(void)

void FUN_142213930(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  double dVar12;
  float fVar13;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  longlong local_78 [2];
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58 [2];
  longlong local_48 [2];
  longlong *local_38;
  longlong *plStack_30;
  
  if (((*(int *)(param_1 + 0x2b8) == 0) || (*(longlong **)(param_1 + 0x2b0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x18))(), cVar5 == '\0')) {
    plVar6 = *(longlong **)(param_1 + 0x2e8);
    plVar9 = plVar6 + (longlong)*(int *)(param_1 + 0x2f0) * 2;
    for (; plVar6 != plVar9; plVar6 = plVar6 + 2) {
      if (*(int *)(*plVar6 + 8) == 6) {
        return;
      }
    }
    if ((*(longlong *)(param_1 + 0x2f8) == 0) || (*(int *)(*(longlong *)(param_1 + 0x2f8) + 8) != 6)
       ) {
      if ((*(int *)(param_1 + 0x238) < *(int *)(param_1 + 0x270)) ||
         (*(char *)(param_1 + 0x25d) != '\0')) {
        if (((*(uint *)(param_1 + 0x298) == 0) ||
            (*(uint *)(param_1 + 0x298) <= *(uint *)(param_1 + 0x280))) ||
           (*(int *)(param_1 + 0x270) <= *(int *)(param_1 + 0x238))) {
          QueryPerformanceCounter(&local_res8);
          dVar12 = ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                   *(double *)(param_1 + 0x240);
          if (dVar12 < 5.0) {
            return;
          }
          if (dVar12 < 30.0) {
            if (((*(uint *)(param_1 + 0x27c) < *(uint *)(param_1 + 0x280)) &&
                (0 < *(int *)(param_1 + 0x148))) &&
               (fVar13 = (float)(*(uint *)(param_1 + 0x280) - *(uint *)(param_1 + 0x27c)) * 0.001,
               *DAT_146aee5d8 * 0.5 <
               fVar13 - fVar13 * ((float)*(int *)(param_1 + 0x150) /
                                 (float)*(int *)(param_1 + 0x148)))) {
              return;
            }
          }
        }
        plVar6 = (longlong *)FHttpModule::Get();
        (**(code **)(*plVar6 + 0x40))(plVar6,&local_68);
        puVar10 = &DAT_143f3eda8;
        if (*(int *)(param_1 + 0x208) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = *(undefined2 **)(param_1 + 0x200);
        }
        if (*(int *)(param_1 + 0x230) != 0) {
          puVar10 = *(undefined2 **)(param_1 + 0x228);
        }
        FString::PrintfImpl(local_48,L"%sreplay/%s/file/stream.%i",puVar10,puVar11,
                            *(undefined4 *)(param_1 + 0x238));
        (**(code **)(*local_68 + 0x50))(local_68,local_48);
        local_78[0] = 0;
        local_78[1] = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
        FGenericPlatformString::Memcpy(local_78[0],&DAT_14500b150,8);
        (**(code **)(*local_68 + 0x48))(local_68,local_78);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        uVar3 = *(undefined1 *)(param_1 + 0x25d);
        uVar4 = *(undefined4 *)(param_1 + 0x238);
        pplVar7 = (longlong **)(**(code **)(*local_68 + 0x80))();
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        local_58[0] = plVar6;
        if (plVar6 != (longlong *)0x0) {
          plVar6[1] = param_1;
          *plVar6 = (longlong)&PTR_GetPoolName_14500c460;
          plVar6[2] = (longlong)FUN_142217230;
          *(undefined4 *)(plVar6 + 3) = uVar4;
          *(undefined1 *)((longlong)plVar6 + 0x1c) = uVar3;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar8;
          *plVar6 = (longlong)&PTR_GetPoolName_14500c4a8;
        }
        if (local_58 != pplVar7) {
          if (plVar6 == (longlong *)0x0) {
            if ((*(int *)(pplVar7 + 1) != 0) && (plVar9 = *pplVar7, plVar9 != (longlong *)0x0)) {
              (**(code **)(*plVar9 + 0x28))(plVar9,0);
              if (*pplVar7 != (longlong *)0x0) {
                plVar9 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
                *pplVar7 = plVar9;
              }
              *(undefined4 *)(pplVar7 + 1) = 0;
            }
          }
          else {
            (**(code **)(*plVar6 + 0x30))(plVar6,pplVar7);
          }
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          local_58[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
          if (local_58[0] != (longlong *)0x0) {
            FMemory::Free(local_58[0]);
          }
        }
        local_38 = local_68;
        plStack_30 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        FUN_142212e20(param_1,6,&local_38,0,0);
        QueryPerformanceCounter(&local_res10);
        *(double *)(param_1 + 0x240) = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_60 + 1;
          lVar8 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar1 = (int *)((longlong)plStack_60 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plStack_60 + 8))(plStack_60,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142213d20 FUN_142213d20 body=110 status=ok
// SIG undefined FUN_142213d20(void)

void FUN_142213d20(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14500c340;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14500c388;
  }
  return;
}



// FUNCTION 142213d90 FUN_142213d90 body=82 status=ok
// SIG undefined FUN_142213d90(void)

void FUN_142213d90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14500c460;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_14500c4a8;
  }
  return;
}



// FUNCTION 142213df0 FUN_142213df0 body=126 status=ok
// SIG undefined FUN_142213df0(void)

void FUN_142213df0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14500c3d0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    if ((((longlong *)(param_1 + 0x18) != puVar2 + 3) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_14500c418;
  }
  return;
}



// FUNCTION 142213e70 FUN_142213e70 body=162 status=ok
// SIG undefined FUN_142213e70(void)

void FUN_142213e70(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_14500c4f0;
    plVar1 = puVar3 + 3;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    *plVar1 = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    if ((((longlong *)(param_1 + 0x18) != plVar1) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
    }
    FString::FString(puVar3 + 5,param_1 + 0x28);
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_14500c538;
  }
  return;
}



// FUNCTION 142213f20 FUN_142213f20 body=528 status=ok
// SIG undefined FUN_142213f20(void)

undefined8 FUN_142213f20(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  void **ppvVar8;
  undefined8 *puVar9;
  size_t _Size;
  void *local_d8;
  undefined8 local_d0;
  undefined **local_c8 [18];
  void *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  cVar6 = (**(code **)(*param_1 + 0x200))();
  if (cVar6 == '\0') {
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x30))();
    iVar3 = *(int *)(puVar9 + 1);
    if (iVar3 != 0) {
      iVar7 = (int)param_3[1];
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + iVar3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3);
        iVar7 = (int)param_3[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 + *param_3),(void *)*puVar9,(longlong)iVar3);
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar3;
    }
  }
  else {
    FArchive::FArchive(local_c8);
    local_c8[0] = &PTR__scalar_deleting_destructor__14500bc68;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    ppvVar8 = (void **)(**(code **)(*(longlong *)*param_2 + 0x30))();
    if (&local_38 != ppvVar8) {
      iVar3 = *(int *)(ppvVar8 + 1);
      _Src = *ppvVar8;
      local_30 = CONCAT44(local_30._4_4_,iVar3);
      if ((iVar3 == 0) && (local_30._4_4_ == 0)) {
        local_30 = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3);
      }
    }
    local_d8 = (void *)0x0;
    local_d0 = 0;
    cVar6 = (**(code **)(*param_1 + 0x210))(param_1,local_c8,&local_d8);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3,0);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_c8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return 0;
    }
    iVar3 = (int)local_d0;
    _Size = (size_t)(int)local_d0;
    if ((int)local_d0 != 0) {
      iVar7 = (int)param_3[1];
      if (*(int *)((longlong)param_3 + 0xc) < iVar7 + (int)local_d0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3);
        iVar7 = (int)param_3[1];
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 + *param_3),local_d8,_Size);
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar3;
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_c8);
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
  return 1;
}



// FUNCTION 142214130 DeleteFinishedStream body=99 status=ok
// SIG undefined DeleteFinishedStream(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FHttpNetworkReplayStreamer::DeleteFinishedStream
               (undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined **local_18;
  undefined4 local_10;
  
  local_18 = &PTR_FUN_1440104c8;
  local_10 = 1;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_3[1] != 0) {
        (**(code **)(*(longlong *)*param_3 + 0x40))((longlong *)*param_3,&local_18);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,&local_18);
    }
  }
  return;
}



// FUNCTION 1422141a0 FUN_1422141a0 body=770 status=ok
// SIG undefined FUN_1422141a0(void)

void FUN_1422141a0(longlong param_1,longlong **param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong **pplVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_98 [2];
  longlong *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  longlong *local_28 [2];
  longlong *local_18;
  longlong *plStack_10;
  
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_58);
  plVar5 = local_58;
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x290) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 0x288);
  }
  if (*(int *)(param_1 + 0x208) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x200);
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    puVar8 = *(undefined2 **)(param_1 + 0x228);
  }
  FString::PrintfImpl(local_38,L"%sreplay/%s/file/replay.header",puVar8,puVar9,puVar6);
  (**(code **)(*plVar5 + 0x50))(plVar5,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_98[1] = 4;
  local_98[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],&DAT_14500ad60,8);
  (**(code **)(*local_58 + 0x48))(local_58,local_98);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_58;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  if (((param_2 != &local_88) && (*(int *)(param_2 + 1) != 0)) &&
     (plVar3 = *param_2, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
  }
  pplVar7 = (longlong **)(**(code **)(*plVar5 + 0x80))(plVar5);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
    (**(code **)(*local_88 + 0x30))(local_88,&local_68);
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  if ((local_60 != 0) && (local_68 != (longlong *)0x0)) {
    (**(code **)(*local_68 + 0x30))(local_68,&local_78);
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    local_48 = 0;
    local_40 = 0;
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x30))(local_78,&local_48);
    }
    FUN_142211960(plVar5,param_1,FUN_142217880,&local_48);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  if (local_28 != pplVar7) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(pplVar7 + 1) != 0) && (plVar5 = *pplVar7, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*pplVar7 != (longlong *)0x0) {
          plVar5 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
          *pplVar7 = plVar5;
        }
        *(undefined4 *)(pplVar7 + 1) = 0;
      }
      goto LAB_1422143d1;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,pplVar7);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_1422143d1:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  local_18 = local_58;
  plStack_10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  FUN_142212e20(param_1,5,&local_18,0,(ulonglong)puVar6 & 0xffffffff00000000);
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plStack_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  return;
}



// FUNCTION 1422144b0 FUN_1422144b0 body=422 status=ok
// SIG undefined FUN_1422144b0(void)

void FUN_1422144b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  LARGE_INTEGER local_res8;
  longlong local_48 [2];
  longlong *local_38;
  longlong *plStack_30;
  longlong local_28 [2];
  longlong *local_18;
  longlong *plStack_10;
  
  plVar4 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_38);
  plVar4 = local_38;
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x208) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x200);
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    puVar6 = *(undefined2 **)(param_1 + 0x228);
  }
  FString::PrintfImpl(local_28,L"%sreplay/%s/event?group=checkpoint",puVar6,puVar7);
  (**(code **)(*plVar4 + 0x50))(plVar4,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_48[1] = 4;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],&DAT_145003a38,8);
  (**(code **)(*local_38 + 0x48))(local_38,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  uVar5 = (**(code **)(*local_38 + 0x80))();
  FUN_1406c1b60(uVar5,param_1,FUN_142217ac0);
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_142212e20(param_1,9,&local_18,0,0);
  QueryPerformanceCounter(&local_res8);
  *(double *)(param_1 + 0x250) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_30 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142214660 FUN_142214660 body=869 status=ok
// SIG undefined FUN_142214660(void)

void FUN_142214660(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong **param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong **pplVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_d8 [2];
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  longlong *local_40 [3];
  longlong *local_28;
  longlong *plStack_20;
  
  if (*(int *)(param_1 + 0x230) < 2) {
    plVar6 = (longlong *)0x0;
    local_70 = 6;
    local_60 = 0;
    local_78 = &PTR__scalar_deleting_destructor__145002d08;
    local_68 = &PTR__scalar_deleting_destructor__145002cb8;
    local_58 = 0;
    if (((*(int *)(param_4 + 1) != 0) && (*param_4 != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**param_4 + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_4 + 1) != 0) {
        plVar6 = *param_4;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_78);
    }
    local_68 = &PTR__scalar_deleting_destructor__145002cb8;
    TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
              (&local_60);
    return;
  }
  plVar6 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_98);
  plVar6 = local_98;
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    puVar9 = *(undefined2 **)(param_1 + 0x228);
  }
  FString::PrintfImpl(local_50,L"%sreplay/%s/event?group=%s",puVar9,puVar10,puVar7);
  (**(code **)(*plVar6 + 0x50))(plVar6,local_50);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  local_d8[1] = 4;
  local_d8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
  FGenericPlatformString::Memcpy(local_d8[0],&DAT_145003bd8,8);
  (**(code **)(*local_98 + 0x48))(local_98,local_d8);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  plVar6 = local_98;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  if (((param_4 != &local_c8) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar3 = *param_4, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
  }
  pplVar8 = (longlong **)(**(code **)(*plVar6 + 0x80))(plVar6);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
    (**(code **)(*local_c8 + 0x30))(local_c8,&local_a8);
  }
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x30))(local_a8,&local_b8);
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_40[0] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    local_88 = 0;
    local_80 = 0;
    if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
      (**(code **)(*local_b8 + 0x30))(local_b8,&local_88);
    }
    FUN_142211960(plVar6,param_1,FUN_142217d80,&local_88);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (local_40 != pplVar8) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(pplVar8 + 1) != 0) && (plVar6 = *pplVar8, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar8 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar8,0,0);
          *pplVar8 = plVar6;
        }
        *(undefined4 *)(pplVar8 + 1) = 0;
      }
      goto LAB_1422148fb;
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,pplVar8);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_40[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_40[0] != (longlong *)0x0) {
      FMemory::Free(local_40[0]);
    }
  }
LAB_1422148fb:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
  local_28 = local_98;
  plStack_20 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  FUN_142212e20(param_1,0xe,&local_28,0,(ulonglong)puVar7 & 0xffffffff00000000);
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_90 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return;
}



// FUNCTION 142214a00 FUN_142214a00 body=635 status=ok
// SIG undefined FUN_142214a00(void)

void FUN_142214a00(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_98 [2];
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68 [2];
  longlong *local_58;
  longlong *plStack_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  if (*(int *)(param_1 + 0x230) < 2) {
    plVar4 = (longlong *)0x0;
    local_40 = 6;
    local_38 = 0;
    local_48 = &PTR__scalar_deleting_destructor__145002d00;
    local_30 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if ((((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)*param_4 + 0x18))(), cVar3 != '\0')) {
      if ((int)param_4[1] != 0) {
        plVar4 = (longlong *)*param_4;
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
    }
    plVar4 = local_28;
    for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
    ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_38);
  }
  else {
    plVar4 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_88);
    plVar4 = local_88;
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x230) != 0) {
      puVar8 = *(undefined2 **)(param_1 + 0x228);
    }
    FString::PrintfImpl(local_68,L"%sreplay?app=%s&version=%u&cl=%u&recent=%s",puVar8,puVar9,
                        *(undefined4 *)(param_2 + 2),*(undefined4 *)((longlong)param_2 + 0x14),
                        puVar5);
    (**(code **)(*plVar4 + 0x50))(plVar4,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    local_98[1] = 4;
    local_98[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],&DAT_1450036e8,8);
    (**(code **)(*local_88 + 0x48))(local_88,local_98);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    plVar4 = local_88;
    local_78 = 0;
    local_70 = 0;
    if (((param_4 != &local_78) && ((int)param_4[1] != 0)) &&
       (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)) {
      (**(code **)(*param_4 + 0x30))(param_4,&local_78);
    }
    uVar6 = (**(code **)(*plVar4 + 0x80))(plVar4);
    FUN_142210e40(uVar6,param_1,FUN_142217f80,&local_78);
    local_58 = local_88;
    plStack_50 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    FUN_142212e20(param_1,8,&local_58,0,0);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_80 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plStack_80 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142214c80 EnumerateRecentStreams body=99 status=ok
// SIG undefined EnumerateRecentStreams(void)

void FHttpNetworkReplayStreamer::EnumerateRecentStreams
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  lVar1 = *param_1;
  uVar2 = FUN_142216540(local_18,param_3);
  (**(code **)(lVar1 + 0x1b0))(param_1,param_2,uVar2,param_4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142214cf0 FUN_142214cf0 body=1957 status=ok
// SIG undefined FUN_142214cf0(void)

void FUN_142214cf0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong **pplVar20;
  longlong local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int local_150;
  undefined4 local_14c;
  longlong *local_148;
  int local_140;
  undefined4 local_13c;
  longlong local_138 [2];
  undefined2 *local_128;
  int local_120;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  int local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  void *local_b0;
  int local_a8;
  void *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  void *local_70;
  int local_68;
  longlong local_60 [3];
  longlong *local_48;
  longlong *plStack_40;
  
  plVar14 = (longlong *)0x0;
  iVar11 = 0;
  local_b8 = 0;
  if (*(int *)(param_1 + 0x230) < 2) {
    local_e0 = 6;
    local_e8 = &PTR__scalar_deleting_destructor__145002d00;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    if ((((int)param_6[1] != 0) && ((longlong *)*param_6 != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(*(longlong *)*param_6 + 0x18))(), cVar7 != '\0')) {
      if ((int)param_6[1] != 0) {
        plVar14 = (longlong *)*param_6;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,&local_e8);
    }
    plVar14 = local_c8;
    for (iVar11 = (int)local_c0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
    ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_d8);
    return;
  }
  plVar8 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar8 + 0x40))(plVar8,&local_118);
  if (*(int *)(param_2 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 0x230) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = *(undefined2 **)(param_1 + 0x228);
  }
  FString::PrintfImpl(&local_168,L"%sreplay?app=%s",puVar17,puVar18);
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    FString::PrintfImpl(&local_b0,L"&cl=%u");
    pvVar4 = local_b0;
    iVar3 = local_160;
    iVar12 = iVar11;
    if (local_a8 != 0) {
      iVar12 = local_a8 + -1;
    }
    if (iVar12 != 0) {
      lVar15 = (longlong)local_160;
      local_160 = (uint)(local_160 == 0) + local_160 + iVar12;
      if (local_15c < local_160) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
      }
      pvVar2 = (void *)(local_168 + (lVar15 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
  }
  if (*(int *)(param_2 + 2) != 0) {
    FString::PrintfImpl(&local_a0,L"&version=%u");
    pvVar4 = local_a0;
    iVar3 = local_160;
    iVar12 = iVar11;
    if (local_98 != 0) {
      iVar12 = local_98 + -1;
    }
    if (iVar12 != 0) {
      lVar15 = (longlong)local_160;
      local_160 = (uint)(local_160 == 0) + local_160 + iVar12;
      if (local_15c < local_160) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
      }
      pvVar2 = (void *)(local_168 + (lVar15 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
  }
  local_108 = (longlong *)0x0;
  local_100 = *(int *)(DAT_146aee5c0 + 1);
  lVar15 = (longlong)local_100;
  pvVar4 = (void *)*DAT_146aee5c0;
  plVar8 = plVar14;
  if (local_100 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
    plVar8 = local_108;
    _guard_xfg_dispatch_icall_nop(local_108,pvVar4,lVar15 * 2);
  }
  if (local_100 < 2) {
    iVar3 = *(int *)(param_4 + 1);
    pvVar4 = (void *)*param_4;
    local_158 = (longlong *)0x0;
    local_150 = iVar3;
    if (iVar3 == 0) {
      local_14c = 0;
      plVar13 = plVar14;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,iVar3,0);
      plVar13 = local_158;
      _guard_xfg_dispatch_icall_nop(local_158,pvVar4,(longlong)iVar3 * 2);
    }
    pplVar20 = &local_158;
    bVar6 = false;
    bVar5 = true;
    plVar16 = local_148;
  }
  else {
    iVar3 = *(int *)(DAT_146aee5c0 + 1);
    pvVar4 = (void *)*DAT_146aee5c0;
    local_148 = (longlong *)0x0;
    local_140 = iVar3;
    if (iVar3 == 0) {
      bVar6 = true;
      bVar5 = false;
      local_13c = 0;
      pplVar20 = &local_148;
      plVar13 = local_158;
      plVar16 = plVar14;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,iVar3,0);
      plVar16 = local_148;
      _guard_xfg_dispatch_icall_nop(local_148,pvVar4,(longlong)iVar3 * 2);
      pplVar20 = &local_148;
      bVar6 = true;
      bVar5 = false;
      plVar13 = local_158;
    }
  }
  local_120 = *(int *)(pplVar20 + 1);
  lVar15 = (longlong)local_120;
  local_128 = (undefined2 *)0x0;
  if (local_120 == 0) {
    puVar18 = (undefined2 *)0x0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_120,0);
    puVar18 = local_128;
    _guard_xfg_dispatch_icall_nop(local_128,*pplVar20,lVar15 * 2);
  }
  iVar3 = local_120;
  if ((bVar5) && (plVar13 != (longlong *)0x0)) {
    FMemory::Free(plVar13);
  }
  if ((bVar6) && (plVar16 != (longlong *)0x0)) {
    FMemory::Free(plVar16);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (1 < iVar3) {
    puVar17 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar17 = puVar18;
    }
    FString::PrintfImpl(&local_90,L"&meta=%s",puVar17);
    pvVar4 = local_90;
    iVar3 = local_160;
    iVar12 = iVar11;
    if (local_88 != 0) {
      iVar12 = local_88 + -1;
    }
    if (iVar12 != 0) {
      lVar15 = (longlong)local_160;
      local_160 = (uint)(local_160 == 0) + local_160 + iVar12;
      if (local_15c < local_160) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
      }
      pvVar2 = (void *)(local_168 + (lVar15 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
  }
  if (1 < *(int *)(param_3 + 8)) {
    puVar9 = (undefined8 *)FUN_141f2eb00(local_60,param_3);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar9;
    }
    FString::PrintfImpl(&local_80,L"&user=%s",puVar18);
    pvVar4 = local_80;
    iVar3 = local_160;
    iVar12 = iVar11;
    if (local_78 != 0) {
      iVar12 = local_78 + -1;
    }
    if (iVar12 != 0) {
      lVar15 = (longlong)local_160;
      local_160 = (uint)(local_160 == 0) + iVar12 + local_160;
      if (local_15c < local_160) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
      }
      pvVar2 = (void *)(local_168 + (lVar15 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
    }
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
    if (local_60[0] != 0) {
      FMemory::Free();
    }
  }
  plVar8 = plVar14;
  if (0 < (int)param_5[1]) {
    do {
      if (*(int *)((longlong)plVar8 + *param_5 + 8) == 0) {
        puVar18 = &DAT_143f3eda8;
      }
      else {
        puVar18 = *(undefined2 **)((longlong)plVar8 + *param_5);
      }
      FString::PrintfImpl(&local_70,&DAT_14500bbc8,puVar18);
      pvVar4 = local_70;
      iVar3 = local_160;
      iVar12 = iVar11;
      if (local_68 != 0) {
        iVar12 = local_68 + -1;
      }
      if (iVar12 != 0) {
        lVar15 = (longlong)local_160;
        local_160 = (uint)(local_160 == 0) + iVar12 + local_160;
        if (local_15c < local_160) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,iVar3);
        }
        pvVar2 = (void *)(local_168 + (lVar15 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar2) = 0;
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      uVar19 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar19;
      plVar8 = plVar8 + 2;
    } while ((int)uVar19 < (int)param_5[1]);
  }
  (**(code **)(*local_118 + 0x50))(local_118,&local_168);
  local_138[0] = 0;
  local_138[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
  FGenericPlatformString::Memcpy(local_138[0],&DAT_14500bbd0,8);
  (**(code **)(*local_118 + 0x48))(local_118,local_138);
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  plVar14 = local_118;
  local_f8 = 0;
  local_f0 = 0;
  if (((param_6 != &local_f8) && ((int)param_6[1] != 0)) &&
     (param_6 = (longlong *)*param_6, param_6 != (longlong *)0x0)) {
    (**(code **)(*param_6 + 0x30))(param_6,&local_f8);
  }
  uVar10 = (**(code **)(*plVar14 + 0x80))(plVar14);
  FUN_142210e40(uVar10,param_1,FUN_142217f80,&local_f8);
  local_48 = local_118;
  plStack_40 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  FUN_142212e20(param_1,8,&local_48,0,0);
  if (local_128 != (undefined2 *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_110 + 1;
    lVar15 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  return;
}



// FUNCTION 1422154a0 EnumerateStreams body=119 status=ok
// SIG undefined EnumerateStreams(void)

void FHttpNetworkReplayStreamer::EnumerateStreams
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  lVar1 = *param_1;
  uVar2 = FUN_142216540(local_18,param_3);
  (**(code **)(lVar1 + 0x188))(param_1,param_2,uVar2,param_4,param_5,param_6);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142215530 FUN_142215530 body=236 status=ok
// SIG undefined FUN_142215530(void)

void FUN_142215530(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar5 = *(code **)(param_1 + 0x10);
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(uVar4,&local_18,&local_28,param_4,*(undefined4 *)(param_1 + 0x18),
            *(undefined1 *)(param_1 + 0x1c));
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 142215620 FUN_142215620 body=307 status=ok
// SIG undefined FUN_142215620(void)

void FUN_142215620(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar5 = *(code **)(param_1 + 0x10);
  local_38 = 0;
  local_30 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_38) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar6 = *(longlong **)(param_1 + 0x18), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_38);
  }
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(uVar4,&local_18,&local_28,param_4,&local_38);
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 142215760 FUN_142215760 body=327 status=ok
// SIG undefined FUN_142215760(void)

void FUN_142215760(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar5 = *(code **)(param_1 + 0x10);
  local_58 = 0;
  local_50 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_58) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar6 = *(longlong **)(param_1 + 0x18), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_58);
  }
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  uVar8 = FString::FString(local_28,param_1 + 0x28);
  (*pcVar5)(uVar4,&local_38,&local_48,param_4,&local_58,uVar8);
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 1422158b0 FUN_1422158b0 body=20 status=ok
// SIG undefined FUN_1422158b0(void)

undefined1 FUN_1422158b0(longlong param_1)

{
  FUN_142212550(param_1 + 8);
  return 1;
}



// FUNCTION 1422158d0 FUN_1422158d0 body=379 status=ok
// SIG undefined FUN_1422158d0(void)

undefined8
FUN_1422158d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_3[1];
  local_38 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  pcVar7 = *(code **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  local_20 = plVar5;
  (*pcVar7)(uVar6,&local_28,&local_38,param_4,*(undefined4 *)(param_1 + 0x18),
            *(undefined1 *)(param_1 + 0x1c));
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return 1;
}



// FUNCTION 142215a50 FUN_142215a50 body=444 status=ok
// SIG undefined FUN_142215a50(void)

undefined8 FUN_142215a50(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  plVar3 = (longlong *)param_3[1];
  uVar4 = *param_3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  uVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  pcVar8 = *(code **)(param_1 + 0x10);
  local_58 = 0;
  local_50 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_58) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar9 = *(longlong **)(param_1 + 0x18), plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_58);
    param_4 = param_4 & 0xff;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = uVar4;
  local_40 = plVar3;
  local_38 = uVar6;
  local_30 = plVar5;
  (*pcVar8)(uVar7,&local_38,&local_48,param_4,&local_58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return 1;
}



// FUNCTION 142215c10 FUN_142215c10 body=461 status=ok
// SIG undefined FUN_142215c10(void)

undefined8
FUN_142215c10(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  
  plVar3 = (longlong *)param_3[1];
  uVar10 = *param_3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
  uVar5 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  pcVar6 = *(code **)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 8);
  local_78 = 0;
  local_70 = 0;
  if ((((longlong *)(param_1 + 0x18) != &local_78) && (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar8 = *(longlong **)(param_1 + 0x18), plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_78);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_68 = uVar10;
  local_60 = plVar3;
  local_58 = uVar5;
  local_50 = plVar4;
  uVar10 = FString::FString(local_48,param_1 + 0x28);
  (*pcVar6)(uVar7,&local_58,&local_68,param_4,&local_78,uVar10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return 1;
}



// FUNCTION 142215de0 FlushCheckpoint body=50 status=ok
// SIG undefined FlushCheckpoint(void)

void FHttpNetworkReplayStreamer::FlushCheckpoint(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1f0) != 0) {
    FUN_142216150();
    FUN_142215e20(param_1,param_2);
  }
  return;
}



// FUNCTION 142215e20 FUN_142215e20 body=805 status=ok
// SIG undefined FUN_142215e20(void)

void FUN_142215e20(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  if ((((int)param_1[0x41] < 2) || ((int)param_1[0x4b] != 1)) || ((int)param_1[0x3e] == 0)) {
    *(undefined4 *)(param_1 + 0x3e) = 0;
    iVar2 = *(int *)((longlong)param_1 + 500);
  }
  else {
    QueryPerformanceCounter(&local_res8);
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_98);
    uVar6 = (**(code **)(*local_98 + 0x80))();
    FUN_1406c1b60(uVar6,param_1,FUN_142219390);
    plVar5 = local_98;
    puVar7 = &DAT_143f3eda8;
    if ((int)param_1[0x41] == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)param_1[0x40];
    }
    if ((int)param_1[0x46] != 0) {
      puVar7 = (undefined2 *)param_1[0x45];
    }
    FString::PrintfImpl(local_58,
                        L"%sreplay/%s/event?group=checkpoint&time1=%i&time2=%i&meta=%i&incrementSize=false"
                        ,puVar7,puVar8,param_2,param_2,(int)param_1[0x47]);
    (**(code **)(*plVar5 + 0x50))(plVar5,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    local_80 = 5;
    local_88 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"POST",10);
    (**(code **)(*local_98 + 0x48))(local_98,&local_88);
    if (local_88 != 0) {
      FMemory::Free();
    }
    local_68 = 0;
    local_60 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"application/octet-stream",0x32);
    local_78 = 0;
    local_70 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"Content-Type",0x1a);
    (**(code **)(*local_98 + 0x68))(local_98,&local_78,&local_68);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    local_48 = local_98;
    plStack_40 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*param_1 + 0x228))(param_1,&local_48,param_1 + 0x3d);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_90 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plStack_90 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
      QueryPerformanceCounter(&local_res18);
      return;
    }
    local_38 = local_98;
    plStack_30 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    FUN_142212e20(param_1,10,&local_38,2,0x40000000);
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_90 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plStack_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_90 + 8))(plStack_90,1);
        }
      }
    }
    QueryPerformanceCounter(&local_res20);
    *(undefined4 *)(param_1 + 0x3e) = 0;
    iVar2 = *(int *)((longlong)param_1 + 500);
  }
  if (iVar2 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x3d,0);
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return;
}



// FUNCTION 142216150 FUN_142216150 body=823 status=ok
// SIG undefined FUN_142216150(void)

void FUN_142216150(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  LARGE_INTEGER local_res8;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68 [8];
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if ((1 < (int)param_1[0x41]) && ((int)param_1[0x29] != 0)) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_78);
    uVar6 = (**(code **)(*local_78 + 0x80))();
    FUN_1406c1b60(uVar6,param_1,FUN_142219680);
    local_28 = local_78;
    plStack_20 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    cVar3 = (**(code **)(*param_1 + 0x228))(param_1,&local_28,param_1 + 0x28);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
    }
    else {
      iVar4 = (**(code **)(*local_78 + 0x28))();
      plVar5 = local_78;
      puVar7 = &DAT_143f3eda8;
      iVar4 = (int)param_1[0x6b] + iVar4;
      *(int *)(param_1 + 0x6b) = iVar4;
      if ((int)param_1[0x41] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x40];
      }
      if ((int)param_1[0x46] != 0) {
        puVar7 = (undefined2 *)param_1[0x45];
      }
      FString::PrintfImpl(local_68 + 6,
                          L"%sreplay/%s/file/stream.%i?numChunks=%i&time=%i&mTime1=%i&mTime2=%i&absSize=%i"
                          ,puVar7,puVar8,(int)param_1[0x47],(int)param_1[0x47] + 1,
                          *(undefined4 *)((longlong)param_1 + 0x274),
                          *(undefined4 *)((longlong)param_1 + 0x27c),(int)param_1[0x50],iVar4);
      (**(code **)(*plVar5 + 0x50))(plVar5,local_68 + 6);
      if (local_68[6] != 0) {
        FMemory::Free();
      }
      local_68[1] = 5;
      local_68[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],L"POST",10);
      (**(code **)(*local_78 + 0x48))(local_78,local_68);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      local_68[4] = 0;
      local_68[5] = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
      FGenericPlatformString::Memcpy(local_68[4],L"application/octet-stream",0x32);
      local_68[2] = 0;
      local_68[3] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
      FGenericPlatformString::Memcpy(local_68[2],L"Content-Type",0x1a);
      (**(code **)(*local_78 + 0x68))(local_78,local_68 + 2,local_68 + 4);
      if (local_68[2] != 0) {
        FMemory::Free();
      }
      if (local_68[4] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(param_1 + 0x29) = 0;
      if (*(int *)((longlong)param_1 + 0x14c) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
      }
      *(int *)(param_1 + 0x47) = (int)param_1[0x47] + 1;
      local_18 = local_78;
      plStack_10 = plStack_70;
      *(int *)((longlong)param_1 + 0x27c) = (int)param_1[0x50];
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      FUN_142212e20(param_1,2,&local_18,2,0x40000000);
      QueryPerformanceCounter(&local_res8);
      param_1[0x48] = (longlong)((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0);
    }
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_70 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plStack_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1422164c0 GetRecordingMetadata body=53 status=ok
// SIG undefined GetRecordingMetadata(void)

undefined8 *
FHttpNetworkReplayStreamer::GetRecordingMetadata(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FCommandLine::Get();
  FParse::Value(uVar1,L"ReplayMeta=",param_2,1);
  return param_2;
}



// FUNCTION 142216500 GetReplayID body=33 status=ok
// SIG undefined GetReplayID(void)

undefined8 FHttpNetworkReplayStreamer::GetReplayID(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x200);
  return param_2;
}



// FUNCTION 142216540 FUN_142216540 body=337 status=ok
// SIG undefined FUN_142216540(void)

longlong * FUN_142216540(longlong *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_58 [4];
  undefined1 local_38 [48];
  
  if (((param_2 == -1) || (DAT_146b19a68 == 0)) || (DAT_146b17150 == 0)) {
LAB_142216679:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  lVar4 = UEngine::GetLocalPlayerFromControllerId(DAT_146b17150,DAT_146b19a68,param_2);
  if (lVar4 == 0) goto LAB_142216679;
  lVar4 = FUN_142547b50(lVar4,local_38);
  if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))();
    if (cVar3 != '\0') {
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(lVar4 + 8) + 0x28))
                         (*(longlong **)(lVar4 + 8),local_58 + 2);
      bVar2 = true;
      bVar1 = false;
      goto LAB_14221660d;
    }
  }
  local_58[0] = 0;
  local_58[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"INVALID",0x10);
  plVar5 = local_58;
  bVar2 = false;
  bVar1 = true;
LAB_14221660d:
  *param_1 = 0;
  *param_1 = *plVar5;
  *plVar5 = 0;
  *(int *)(param_1 + 1) = (int)plVar5[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
  plVar5[1] = 0;
  if (bVar1) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_58[2] != 0)) {
    FMemory::Free();
  }
  FUN_1404bf980(local_38);
  return param_1;
}



// FUNCTION 1422166a0 FUN_1422166a0 body=952 status=ok
// SIG undefined FUN_1422166a0(void)

void FUN_1422166a0(longlong *param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_28;
  longlong *plStack_20;
  
  if (((((int)param_1[0x57] == 0) || ((longlong *)param_1[0x56] == (longlong *)0x0)) ||
      (cVar4 = (**(code **)(*(longlong *)param_1[0x56] + 0x18))(), cVar4 == '\0')) &&
     ((int)param_1[0x58] == -1)) {
    if ((int)param_1[0x46] < 2) {
      plVar7 = (longlong *)0x0;
      local_90 = 6;
      local_98 = &PTR_FUN_1440104d0;
      local_88 = 0xffffffffffffffff;
      if ((int)param_3[1] == 0) {
        return;
      }
      if ((longlong *)*param_3 == (longlong *)0x0) {
        return;
      }
      cVar4 = (**(code **)(*(longlong *)*param_3 + 0x18))();
      if (cVar4 == '\0') {
        return;
      }
      if ((int)param_3[1] != 0) {
        plVar7 = (longlong *)*param_3;
      }
      pppuVar9 = &local_98;
    }
    else {
      if (param_2 == -1) {
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x56,param_3);
        (**(code **)(*param_1 + 0x80))(param_1,0,(int)param_1[0x59]);
        puVar6 = (undefined8 *)0x0;
        param_1[0x48] = 0;
        puVar5 = (undefined8 *)operator_new(0x38);
        puVar10 = puVar6;
        if (puVar5 != (undefined8 *)0x0) {
          local_40 = 0;
          uStack_38 = 0;
          FQueuedHttpRequest::FQueuedHttpRequest(puVar5,0xd,&local_40);
          *puVar5 = &PTR__scalar_deleting_destructor__14500be88;
          puVar10 = puVar5;
        }
        local_a8 = puVar10;
        puVar5 = (undefined8 *)operator_new(0x18);
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar5 + 1) = 1;
          *puVar5 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
          puVar5[2] = puVar10;
          puVar6 = puVar5;
        }
        local_a0 = puVar6;
        SharedPointerInternals::EnableSharedFromThis(&local_a8,puVar10,puVar10);
        FUN_142212b30(param_1,&local_a8);
        return;
      }
      if ((-1 < param_2) && (param_2 < (int)param_1[0x5c])) {
        plVar7 = (longlong *)FHttpModule::Get();
        (**(code **)(*plVar7 + 0x40))(plVar7,&local_b8);
        plVar7 = local_b8;
        puVar11 = &DAT_143f3eda8;
        if (*(int *)((longlong)param_2 * 0x40 + 0x10 + param_1[0x5b]) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)((longlong)param_2 * 0x40 + 8 + param_1[0x5b]);
        }
        if ((int)param_1[0x46] != 0) {
          puVar11 = (undefined2 *)param_1[0x45];
        }
        FString::PrintfImpl(local_50,L"%sevent/%s",puVar11,puVar12);
        (**(code **)(*plVar7 + 0x50))(plVar7,local_50);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        local_c8[1] = 4;
        local_c8[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
        FGenericPlatformString::Memcpy(local_c8[0],&DAT_145009ab0,8);
        (**(code **)(*local_b8 + 0x48))(local_b8,local_c8);
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        uVar8 = (**(code **)(*local_b8 + 0x80))();
        FUN_1406c1b60(uVar8,param_1,FUN_142216cc0);
        TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x56,param_3);
        local_28 = local_b8;
        plStack_20 = plStack_b0;
        *(int *)(param_1 + 0x58) = param_2;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
        }
        FUN_142212e20(param_1,0xb,&local_28,0,0);
        if (plStack_b0 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar7 = plStack_b0 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        return;
      }
      plVar7 = (longlong *)0x0;
      local_78 = 6;
      local_80 = &PTR_FUN_1440104d0;
      local_70 = 0xffffffffffffffff;
      if ((int)param_3[1] == 0) {
        return;
      }
      if ((longlong *)*param_3 == (longlong *)0x0) {
        return;
      }
      cVar4 = (**(code **)(*(longlong *)*param_3 + 0x18))();
      if (cVar4 == '\0') {
        return;
      }
      if ((int)param_3[1] != 0) {
        plVar7 = (longlong *)*param_3;
      }
      pppuVar9 = &local_80;
    }
  }
  else {
    plVar7 = (longlong *)0x0;
    local_60 = 6;
    local_68 = &PTR_FUN_1440104d0;
    local_58 = 0xffffffffffffffff;
    if ((int)param_3[1] == 0) {
      return;
    }
    if ((longlong *)*param_3 == (longlong *)0x0) {
      return;
    }
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x18))();
    if (cVar4 == '\0') {
      return;
    }
    if ((int)param_3[1] != 0) {
      plVar7 = (longlong *)*param_3;
    }
    pppuVar9 = &local_68;
  }
  (**(code **)(*plVar7 + 0x40))(plVar7,pppuVar9);
  return;
}



// FUNCTION 142216a60 FUN_142216a60 body=388 status=ok
// SIG undefined FUN_142216a60(void)

void FUN_142216a60(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_1[0x59] == -1) && ((int)param_1[0x58] == -1)) {
    if ((((int)param_1[0x57] == 0) || ((longlong *)param_1[0x56] == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)param_1[0x56] + 0x18))(), cVar3 == '\0')) {
      uVar6 = 0xffffffffffffffff;
      iVar1 = (int)param_1[0x5c];
      uVar2 = *(uint *)((longlong)param_1 + 0x274);
      if (param_2 <= *(uint *)((longlong)param_1 + 0x274)) {
        uVar2 = param_2;
      }
      param_1[0x59] = (ulonglong)uVar2;
      if ((0 < iVar1) && (*(uint *)((longlong)iVar1 * 0x40 + -8 + param_1[0x5b]) <= param_2)) {
        (**(code **)(*param_1 + 0x48))(param_1,iVar1 + -1,param_3);
        return;
      }
      iVar7 = 0;
      if (0 < iVar1) {
        puVar4 = (uint *)(param_1[0x5b] + 0x38);
        while (*puVar4 <= param_2) {
          iVar7 = iVar7 + 1;
          puVar4 = puVar4 + 0x10;
          if (iVar1 <= iVar7) {
            (**(code **)(*param_1 + 0x48))(param_1,0xffffffffffffffff,param_3);
            return;
          }
        }
        uVar6 = (ulonglong)(iVar7 - 1);
      }
      (**(code **)(*param_1 + 0x48))(param_1,uVar6,param_3);
      return;
    }
    if (*(int *)(param_3 + 1) == 0) {
      return;
    }
    plVar5 = (longlong *)*param_3;
  }
  else {
    if (*(int *)(param_3 + 1) == 0) {
      return;
    }
    plVar5 = (longlong *)*param_3;
  }
  local_18 = 0xffffffffffffffff;
  local_20 = 6;
  local_28 = &PTR_FUN_1440104d0;
  plVar8 = (longlong *)0x0;
  if ((plVar5 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar5 + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_3 + 1) != 0) {
      plVar8 = (longlong *)*param_3;
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_28);
  }
  return;
}



// FUNCTION 142216bf0 HttpAddUserFinished body=208 status=ok
// SIG undefined HttpAddUserFinished(void)

void FHttpNetworkReplayStreamer::HttpAddUserFinished
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,1,0xc,&local_18);
  if (param_4 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x40))();
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
  plVar4 = (longlong *)param_3[1];
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



// FUNCTION 142216cc0 FUN_142216cc0 body=1391 status=ok
// SIG undefined FUN_142216cc0(void)

void FUN_142216cc0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  wchar_t *_Str;
  longlong *plVar6;
  undefined ***pppuVar7;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined **local_78;
  undefined4 local_70;
  ulonglong local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  longlong local_30 [3];
  
  local_b8 = *param_2;
  local_b0 = param_2[1];
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,2,0xb,&local_b8);
  if (*(char *)((longlong)param_1 + 0x25c) == '\0') {
    if ((param_4 == '\0') || (iVar3 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar3 != 200))
    {
      plVar6 = (longlong *)0x0;
      local_c8 = 6;
      local_c0 = 0xffffffffffffffff;
      local_d0 = &PTR_FUN_1440104d0;
      if ((((int)param_1[0x57] != 0) &&
          (plVar5 = (longlong *)param_1[0x56], plVar5 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*plVar5 + 0x18))(), cVar2 != '\0')) {
        if ((int)param_1[0x57] != 0) {
          plVar6 = (longlong *)param_1[0x56];
        }
        pppuVar7 = &local_d0;
LAB_142217150:
        (**(code **)(*plVar6 + 0x40))(plVar6,pppuVar7);
      }
    }
    else {
      lVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
      if (*(int *)(lVar4 + 8) == 0) {
        plVar5 = param_1 + 0x56;
        local_f8 = 6;
        plVar6 = (longlong *)0x0;
        local_100 = &PTR_FUN_1440104d0;
        local_f0 = 0xffffffffffffffff;
        if ((((int)param_1[0x57] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x18))(), cVar2 != '\0')) {
          if ((int)param_1[0x57] != 0) {
            plVar6 = (longlong *)*plVar5;
          }
          (**(code **)(*plVar6 + 0x40))(plVar6,&local_100);
        }
        if (((local_50 != plVar5) && ((int)param_1[0x57] != 0)) &&
           (plVar6 = (longlong *)*plVar5, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*plVar5 != 0) {
            lVar4 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar4;
          }
          *(undefined4 *)(param_1 + 0x57) = 0;
        }
LAB_142216e5b:
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
        return;
      }
      local_a8 = *param_3;
      local_a0 = param_3[1];
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      local_98 = *param_2;
      local_90 = param_2[1];
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      FUN_142212fd0(param_1,&local_98,&local_a8);
      plVar6 = (longlong *)0x0;
      *(undefined4 *)(param_1 + 0x3e) = 0;
      if (*(int *)((longlong)param_1 + 500) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x3d,0);
      }
      local_88 = *param_3;
      local_80 = param_3[1];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      cVar2 = (**(code **)(*param_1 + 0x220))(param_1,&local_88,param_1 + 0x3d);
      if (cVar2 == '\0') {
        plVar5 = param_1 + 0x56;
        local_e0 = 6;
        local_e8 = &PTR_FUN_1440104d0;
        local_d8 = 0xffffffffffffffff;
        if ((((int)param_1[0x57] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x18))(), cVar2 != '\0')) {
          if ((int)param_1[0x57] != 0) {
            plVar6 = (longlong *)*plVar5;
          }
          (**(code **)(*plVar6 + 0x40))(plVar6,&local_e8);
        }
        if (((local_40 != plVar5) && ((int)param_1[0x57] != 0)) &&
           (plVar6 = (longlong *)*plVar5, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*plVar5 != 0) {
            lVar4 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar4;
          }
          *(undefined4 *)(param_1 + 0x57) = 0;
        }
        *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
        param_1[0x59] = -1;
        goto LAB_142216e5b;
      }
      *(undefined4 *)(param_1 + 0x3f) = 0;
      *(undefined4 *)(param_1 + 0x29) = 0;
      if (*(int *)((longlong)param_1 + 0x14c) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
      }
      lVar4 = (longlong)(int)param_1[0x58] * 0x40;
      *(undefined4 *)(param_1 + 0x2a) = 0;
      *(undefined1 *)((longlong)param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x53) = 0;
      *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
      if (*(int *)(lVar4 + 0x30 + param_1[0x5b]) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(lVar4 + 0x28 + param_1[0x5b]);
      }
      iVar3 = _wtoi(_Str);
      local_68 = param_1[0x59];
      *(int *)(param_1 + 0x47) = iVar3;
      if (-1 < (longlong)local_68) {
        if ((int)param_1[0x4e] <= iVar3) {
          lVar4 = (longlong)(int)param_1[0x58] * 0x40 + param_1[0x5b];
          *(undefined4 *)((longlong)param_1 + 0x27c) = *(undefined4 *)(lVar4 + 0x38);
          local_68 = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar4 + 0x38);
          param_1[0x59] = -1;
        }
        if (-1 < (longlong)local_68) {
          (**(code **)(*param_1 + 0x80))
                    (param_1,*(undefined4 *)
                              ((longlong)(int)param_1[0x58] * 0x40 + 0x38 + param_1[0x5b]),
                     local_68 & 0xffffffff);
          param_1[0x59] =
               param_1[0x59] -
               (ulonglong)*(uint *)((longlong)(int)param_1[0x58] * 0x40 + 0x38 + param_1[0x5b]);
          local_68 = param_1[0x59];
        }
      }
      local_70 = 0;
      local_78 = &PTR_FUN_1440104d0;
      if ((((int)param_1[0x57] != 0) &&
          (plVar5 = (longlong *)param_1[0x56], plVar5 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*plVar5 + 0x18))(), cVar2 != '\0')) {
        if ((int)param_1[0x57] == 0) {
          pppuVar7 = &local_78;
        }
        else {
          plVar6 = (longlong *)param_1[0x56];
          pppuVar7 = &local_78;
        }
        goto LAB_142217150;
      }
    }
    if (local_30 == param_1 + 0x56) goto LAB_14221718f;
    iVar3 = (int)param_1[0x57];
  }
  else {
    plVar5 = (longlong *)0x0;
    local_110 = 6;
    plVar6 = param_1 + 0x56;
    local_108 = 0xffffffffffffffff;
    local_118 = &PTR_FUN_1440104d0;
    if ((((int)param_1[0x57] != 0) && ((longlong *)*plVar6 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar2 != '\0')) {
      if ((int)param_1[0x57] != 0) {
        plVar5 = (longlong *)*plVar6;
      }
      (**(code **)(*plVar5 + 0x40))(plVar5,&local_118);
    }
    if (local_60 == plVar6) goto LAB_14221718f;
    iVar3 = (int)param_1[0x57];
  }
  plVar6 = param_1 + 0x56;
  if ((iVar3 != 0) && (plVar5 = (longlong *)*plVar6, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    if (*plVar6 != 0) {
      lVar4 = FMemory::Realloc(*plVar6,0,0);
      *plVar6 = lVar4;
    }
    *(undefined4 *)(param_1 + 0x57) = 0;
  }
LAB_14221718f:
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  param_1[0x59] = -1;
  plVar6 = (longlong *)param_2[1];
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
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



// FUNCTION 142217230 FUN_142217230 body=1602 status=ok
// SIG undefined FUN_142217230(void)

void FUN_142217230(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  int param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  wint_t *pwVar14;
  longlong local_128 [13];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_128[0xc] = *param_2;
  local_c0 = param_2[1];
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,2,6,local_128 + 0xc);
  if ((param_4 != '\0') && (iVar7 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar7 == 200)) {
    iVar7 = 0;
    if (param_5 == (int)param_1[0x47]) {
      local_128[0] = 0;
      local_128[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
      FGenericPlatformString::Memcpy(local_128[0],L"NumChunks",0x14);
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_88,local_128)
      ;
      if (*(int *)(puVar10 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar10;
      }
      pwVar14 = &DAT_1450037cc;
      do {
        wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa2801be6) + (longlong)pwVar14);
        if ((wVar5 == 0) && (iVar8 = iVar7, *pwVar14 == 0)) goto LAB_1422173a6;
        if (wVar5 != *pwVar14) {
          wVar5 = towlower(wVar5);
          wVar6 = towlower(*pwVar14);
          if (wVar5 != wVar6) goto LAB_14221739d;
        }
        pwVar14 = pwVar14 + 1;
      } while( true );
    }
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (*(int *)((longlong)param_1 + 0x14c) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
    goto LAB_1422172d7;
  }
  if (*(char *)((longlong)param_1 + 0x25d) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x25d) = 0;
    goto LAB_1422177de;
  }
  goto LAB_1422177b0;
LAB_14221739d:
  iVar8 = (uint)wVar5 - (uint)wVar6;
LAB_1422173a6:
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  if (iVar8 != 0) {
    local_128[2] = 0;
    local_128[3] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 2,0);
    FGenericPlatformString::Memcpy(local_128[2],L"NumChunks",0x14);
    puVar10 = (undefined8 *)
              (**(code **)(*(longlong *)*param_3 + 0x10))
                        ((longlong *)*param_3,local_78,local_128 + 2);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)*puVar10;
    }
    iVar8 = _wtoi(pwVar12);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_128[2] != 0) {
      FMemory::Free();
    }
    local_128[4] = 0;
    local_128[5] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 4,0);
    FGenericPlatformString::Memcpy(local_128[4],L"Time",10);
    puVar10 = (undefined8 *)
              (**(code **)(*(longlong *)*param_3 + 0x10))
                        ((longlong *)*param_3,local_68,local_128 + 4);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)*puVar10;
    }
    uVar9 = _wtoi(pwVar12);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    if (local_128[4] != 0) {
      FMemory::Free();
    }
    if ((int)param_1[0x4e] < iVar8) {
      *(int *)(param_1 + 0x4e) = iVar8;
    }
    if (*(uint *)((longlong)param_1 + 0x274) < uVar9) {
      *(uint *)((longlong)param_1 + 0x274) = uVar9;
    }
    local_128[6] = 0;
    local_128[7] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 6,0);
    FGenericPlatformString::Memcpy(local_128[6],L"State",0xc);
    puVar10 = (undefined8 *)
              (**(code **)(*(longlong *)*param_3 + 0x10))
                        ((longlong *)*param_3,local_58,local_128 + 6);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar10;
    }
    pwVar14 = &DAT_145005868;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa2802c34) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_142217581;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_142217578;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
  goto LAB_1422172ed;
LAB_142217578:
  iVar7 = (uint)wVar5 - (uint)wVar6;
LAB_142217581:
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_128[6] != 0) {
    FMemory::Free();
  }
  if ((*(char *)((longlong)param_1 + 0x25d) != '\0') && (iVar7 != 0)) {
    *(bool *)((longlong)param_1 + 0x25d) = iVar7 == 0;
  }
  lVar11 = (**(code **)(*(longlong *)*param_3 + 0x30))();
  if ((0 < *(int *)(lVar11 + 8)) || (*(char *)((longlong)param_1 + 0x25d) != '\0')) {
    lVar11 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (*(int *)(lVar11 + 8) < 1) {
      if ((int)param_1[0x53] != 0) {
        *(undefined4 *)(param_1 + 0x53) = 0;
      }
      goto LAB_1422177de;
    }
    if ((int)param_1[0x29] == 0) {
      local_128[8] = 0;
      local_128[9] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 8,0);
      FGenericPlatformString::Memcpy(local_128[8],L"MTime1",0xe);
      puVar10 = (undefined8 *)
                (**(code **)(*(longlong *)*param_3 + 0x10))
                          ((longlong *)*param_3,local_48,local_128 + 8);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      iVar7 = _wtoi(pwVar12);
      *(int *)((longlong)param_1 + 0x27c) = iVar7;
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_128[8] != 0) {
        FMemory::Free();
      }
    }
    pwVar12 = L"";
    local_128[10] = 0;
    local_128[0xb] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128 + 10,0);
    FGenericPlatformString::Memcpy(local_128[10],L"MTime2",0xe);
    puVar10 = (undefined8 *)
              (**(code **)(*(longlong *)*param_3 + 0x10))
                        ((longlong *)*param_3,local_38,local_128 + 10);
    if (*(int *)(puVar10 + 1) != 0) {
      pwVar12 = (wchar_t *)*puVar10;
    }
    iVar7 = _wtoi(pwVar12);
    *(int *)(param_1 + 0x50) = iVar7;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_128[10] != 0) {
      FMemory::Free();
    }
    local_b8 = *param_3;
    local_b0 = param_3[1];
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    local_a8 = *param_2;
    local_a0 = param_2[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    FUN_142212fd0(param_1,&local_a8,&local_b8);
    local_98 = *param_3;
    local_90 = param_3[1];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*param_1 + 0x220))(param_1,&local_98,param_1 + 0x28);
    if (cVar4 != '\0') {
      *(int *)(param_1 + 0x47) = (int)param_1[0x47] + 1;
      goto LAB_1422177de;
    }
LAB_1422172d7:
    (**(code **)(*param_1 + 0x1f0))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
LAB_1422172ed:
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    return;
  }
  if (param_6 != '\0') goto LAB_1422177de;
LAB_1422177b0:
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  (**(code **)(*param_1 + 0x1f0))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
LAB_1422177de:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142217880 FUN_142217880 body=561 status=ok
// SIG undefined FUN_142217880(void)

void FUN_142217880(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined **local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,2,5,&local_48);
  local_50 = 6;
  local_58 = &PTR_FUN_1440104c8;
  if ((param_4 == '\0') || (iVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar4 != 200)) {
    plVar7 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (*(int *)((longlong)param_1 + 0x14c) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
    plVar2 = param_1 + 0x54;
    local_28 = &PTR_FUN_1440104d0;
    local_20 = 6;
    local_18 = 0;
    if ((((int)param_1[0x55] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)*plVar2 + 0x18))(), cVar3 != '\0')) {
      if ((int)param_1[0x55] != 0) {
        plVar7 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_28);
    }
    if (((local_38 != plVar2) && ((int)param_1[0x55] != 0)) &&
       (plVar7 = (longlong *)*plVar2, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      if (*plVar2 != 0) {
        lVar6 = FMemory::Realloc(*plVar2,0,0);
        *plVar2 = lVar6;
      }
      *(undefined4 *)(param_1 + 0x55) = 0;
    }
    (**(code **)(*param_1 + 0x1f0))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
  }
  else {
    local_50 = 0;
    uVar5 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    FUN_142210de0(param_1 + 0x13,uVar5);
  }
  plVar7 = (longlong *)0x0;
  if ((((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)*param_5 + 0x18))(), cVar3 != '\0')) {
    if ((int)param_5[1] != 0) {
      plVar7 = (longlong *)*param_5;
    }
    (**(code **)(*plVar7 + 0x40))(plVar7,&local_58);
  }
  plVar7 = (longlong *)param_2[1];
  local_58 = &PTR_FUN_1440104c8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 142217ac0 FUN_142217ac0 body=692 status=ok
// SIG undefined FUN_142217ac0(void)

void FUN_142217ac0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined1 local_38;
  
  local_78 = *param_2;
  local_70 = param_2[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,2,9,&local_78);
  local_40 = 6;
  local_38 = 0;
  local_48 = &PTR_FUN_1440104d0;
  if ((param_4 == '\0') || (iVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar4 != 200)) {
    (**(code **)(*param_1 + 0x1f0))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_68);
    plVar2 = param_1 + 0x5b;
    puVar7 = (undefined8 *)*plVar2;
    for (iVar4 = (int)param_1[0x5c]; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = &PTR__scalar_deleting_destructor__145002c38;
      if (puVar7[5] != 0) {
        FMemory::Free();
      }
      if (puVar7[3] != 0) {
        FMemory::Free();
      }
      if (puVar7[1] != 0) {
        FMemory::Free();
      }
      *puVar7 = &PTR_FUN_144050e60;
      puVar7 = puVar7 + 8;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)((longlong)param_1 + 0x2e4) != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar2,0);
    }
    cVar3 = (**(code **)(param_1[0x5a] + 0x30))(param_1 + 0x5a,local_68);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
    }
    else {
      AlgoImpl::
      IntroSortInternal<FReplayEventListItem,FIdentityFunctor,TDereferenceWrapper<FReplayEventListItem,_FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished_::_18_::FCompareCheckpointTime>_>
                (*plVar2,(longlong)(int)param_1[0x5c],local_res20[0],local_res20);
      local_40 = 0;
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  plVar6 = (longlong *)0x0;
  plVar2 = param_1 + 0x54;
  if ((((int)param_1[0x55] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)*plVar2 + 0x18))(), cVar3 != '\0')) {
    if ((int)param_1[0x55] != 0) {
      plVar6 = (longlong *)*plVar2;
    }
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_48);
  }
  if (((local_58 != plVar2) && ((int)param_1[0x55] != 0)) &&
     (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    if (*plVar2 != 0) {
      lVar5 = FMemory::Realloc(*plVar2,0,0);
      *plVar2 = lVar5;
    }
    *(undefined4 *)(param_1 + 0x55) = 0;
  }
  plVar2 = (longlong *)param_2[1];
  local_48 = &PTR_FUN_1440104c8;
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
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar2 = (longlong *)param_3[1];
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



// FUNCTION 142217d80 FUN_142217d80 body=501 status=ok
// SIG undefined FUN_142217d80(void)

void FUN_142217d80(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined4 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_78 = *param_2;
  local_70 = param_2[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,(int)param_1[0x4b],0xe,&local_78);
  plVar6 = (longlong *)0x0;
  local_38 = 6;
  local_28 = 0;
  local_40 = &PTR__scalar_deleting_destructor__145002d08;
  local_30 = &PTR__scalar_deleting_destructor__145002cb8;
  local_20 = 0;
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 == 200) {
      local_50 = 0;
      local_48 = 0;
      (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_68);
      cVar4 = FUN_1406c6fc0(&local_30,local_68);
      if (cVar4 == '\0') {
        (**(code **)(*param_1 + 0x1f0))(param_1);
        *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      }
      else {
        local_38 = 0;
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      local_58 = &PTR__scalar_deleting_destructor__145002cb8;
      TArray<FReplayEventListItem,FDefaultAllocator>::
      ~TArray<FReplayEventListItem,FDefaultAllocator>(&local_50);
      goto LAB_142217e8d;
    }
  }
  (**(code **)(*param_1 + 0x1f0))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
LAB_142217e8d:
  if (((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_5 + 0x18))();
    if (cVar4 != '\0') {
      if ((int)param_5[1] != 0) {
        plVar6 = (longlong *)*param_5;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_40);
    }
  }
  local_30 = &PTR__scalar_deleting_destructor__145002cb8;
  TArray<FReplayEventListItem,FDefaultAllocator>::~TArray<FReplayEventListItem,FDefaultAllocator>
            (&local_28);
  plVar6 = (longlong *)param_2[1];
  local_30 = &PTR_FUN_144050e60;
  local_40 = &PTR_FUN_1440104c8;
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 142217f80 FUN_142217f80 body=1021 status=ok
// SIG undefined FUN_142217f80(void)

void FUN_142217f80(longlong param_1,longlong param_2,undefined8 *param_3,char param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  void *pvVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  void **ppvVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  void *local_e8;
  ulonglong local_e0;
  void *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined **local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined **local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  plVar7 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2f8) != &local_80) {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    local_80 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x300,&local_78);
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_78 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  local_68 = 6;
  local_70 = &PTR__scalar_deleting_destructor__145002d00;
  local_60 = 0;
  local_58 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  if ((param_4 != '\0') && (iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar5 == 200)) {
    (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_40);
    local_90 = 0;
    local_98 = &PTR__scalar_deleting_destructor__14500c1c0;
    local_88 = 0;
    cVar4 = FUN_1406c6fc0(&local_98,local_40);
    if (cVar4 != '\0') {
      local_68 = 0;
      plVar8 = plVar7;
      plVar12 = plVar7;
      if (0 < (int)local_88) {
        do {
          local_e8 = (void *)0x0;
          local_e0 = 0;
          local_d8 = (void *)0x0;
          local_d0 = 0;
          ppvVar6 = (void **)(local_90 + 0x18 + (longlong)plVar8);
          local_c8 = 0;
          lStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          plVar10 = plVar7;
          if (&local_e8 != ppvVar6) {
            uVar11 = *(uint *)(ppvVar6 + 1);
            pvVar2 = *ppvVar6;
            local_e0 = (ulonglong)uVar11;
            plVar10 = (longlong *)0x0;
            if (uVar11 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,uVar11);
              _guard_xfg_dispatch_icall_nop(local_e8,pvVar2,(longlong)(int)uVar11 * 2);
              plVar10 = (longlong *)(local_d0 >> 0x20);
            }
          }
          ppvVar6 = (void **)((longlong)plVar8 + local_90 + 0x28);
          if (&local_d8 != ppvVar6) {
            iVar5 = *(int *)(ppvVar6 + 1);
            pvVar2 = *ppvVar6;
            local_d0 = CONCAT44(local_d0._4_4_,iVar5);
            if ((iVar5 == 0) && ((int)plVar10 == 0)) {
              local_d0 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar5);
              _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,(longlong)iVar5 * 2);
            }
          }
          uVar3 = local_58;
          local_c8 = *(undefined8 *)(local_90 + 0x38 + (longlong)plVar8);
          lVar9 = (longlong)(int)local_58;
          lStack_c0 = (longlong)*(int *)(local_90 + 0x40 + (longlong)plVar8);
          local_b8 = CONCAT44(*(undefined4 *)(local_90 + 0x48 + (longlong)plVar8),
                              *(undefined4 *)(local_90 + 0x44 + (longlong)plVar8));
          local_b0 = *(undefined1 *)(local_90 + 0x4c + (longlong)plVar8);
          local_ac = *(undefined4 *)(local_90 + 0x50 + (longlong)plVar8);
          local_a8 = *(undefined1 *)(local_90 + 0x54 + (longlong)plVar8);
          iVar5 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar5);
          if (local_58._4_4_ < iVar5) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_60,uVar3 & 0xffffffff)
            ;
          }
          lVar9 = local_60 + lVar9 * 0x48;
          FString::FString(lVar9,&local_e8);
          FString::FString(lVar9 + 0x10,&local_d8);
          *(undefined8 *)(lVar9 + 0x20) = local_c8;
          *(longlong *)(lVar9 + 0x28) = lStack_c0;
          *(undefined4 *)(lVar9 + 0x30) = (undefined4)local_b8;
          *(undefined4 *)(lVar9 + 0x34) = local_b8._4_4_;
          *(undefined1 *)(lVar9 + 0x38) = local_b0;
          *(undefined4 *)(lVar9 + 0x3c) = local_ac;
          *(undefined1 *)(lVar9 + 0x40) = local_a8;
          if (local_d8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_e8 != (void *)0x0) {
            FMemory::Free();
          }
          uVar11 = (int)plVar12 + 1;
          plVar8 = plVar8 + 0xb;
          plVar12 = (longlong *)(ulonglong)uVar11;
        } while ((int)uVar11 < (int)local_88);
      }
    }
    local_98 = &PTR__scalar_deleting_destructor__14500c1c0;
    TArray<FNetworkReplayListItem,FDefaultAllocator>::
    ~TArray<FNetworkReplayListItem,FDefaultAllocator>(&local_90);
    local_98 = &PTR_FUN_144050e60;
    if (local_40[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_5 + 1) != 0) {
    plVar7 = (longlong *)*param_5;
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,&local_70);
  plVar7 = local_50;
  for (iVar5 = (int)local_48; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
  ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_60);
  plVar7 = *(longlong **)(param_2 + 8);
  local_70 = &PTR_FUN_1440104c8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 142218380 FUN_142218380 body=649 status=ok
// SIG undefined FUN_142218380(void)

void FUN_142218380(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined1 local_38;
  
  plVar2 = (longlong *)param_1[0x60];
  lVar5 = param_1[0x5f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_88 = *param_2;
  local_80 = param_2[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,1,1,&local_88);
  local_40 = 6;
  local_48 = &PTR_FUN_1440104d0;
  local_38 = 1;
  if (param_4 == '\0') {
LAB_142218446:
    plVar7 = plVar2 + 1;
    local_78 = *param_3;
    local_70 = param_3[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_68 = lVar5;
    local_60 = plVar2;
    cVar3 = FUN_14221afe0(param_1,&local_68,&local_78,0);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      goto LAB_1422184c8;
    }
    local_48 = &PTR_FUN_1440104c8;
    if (plVar2 == (longlong *)0x0) goto LAB_14221857f;
    LOCK();
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
  }
  else {
    iVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar4 != 0xcc) goto LAB_142218446;
    if ((longlong *)*param_2 != (longlong *)0x0) {
      iVar4 = (**(code **)(*(longlong *)*param_2 + 0x28))();
      *(int *)(param_1 + 0x6b) = (int)param_1[0x6b] + iVar4;
    }
    local_40 = 0;
LAB_1422184c8:
    plVar7 = param_1 + 0x54;
    if (((int)param_1[0x55] != 0) && ((longlong *)*plVar7 != (longlong *)0x0)) {
      cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x18))();
      if (cVar3 != '\0') {
        if ((int)param_1[0x55] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        (**(code **)(*plVar6 + 0x40))(plVar6,&local_48);
      }
    }
    if (((local_58 != plVar7) && ((int)param_1[0x55] != 0)) &&
       (plVar6 = (longlong *)*plVar7, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      if (*plVar7 != 0) {
        lVar5 = FMemory::Realloc(*plVar7,0,0);
        *plVar7 = lVar5;
      }
      *(undefined4 *)(param_1 + 0x55) = 0;
    }
    local_48 = &PTR_FUN_1440104c8;
    if (plVar2 == (longlong *)0x0) goto LAB_14221857f;
    LOCK();
    plVar7 = plVar2 + 1;
    iVar4 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
  }
  local_48 = &PTR_FUN_1440104c8;
  if (iVar4 == 1) {
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
LAB_14221857f:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 142218610 FUN_142218610 body=372 status=ok
// SIG undefined FUN_142218610(void)

void FUN_142218610(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_28;
  longlong local_20;
  
  plVar2 = (longlong *)param_1[0x60];
  plVar3 = plVar2 + 1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar3 = (int)*plVar3 + 1;
    UNLOCK();
  }
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,2,7,&local_28);
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 == 0xcc) {
      *(undefined4 *)(param_1 + 0x76) = 0;
      goto LAB_1422186c7;
    }
  }
  *(int *)(param_1 + 0x76) = (int)param_1[0x76] + 1;
  if (6 < (int)param_1[0x76]) {
    (**(code **)(*param_1 + 0x1f0))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
  }
LAB_1422186c7:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142218790 FUN_142218790 body=442 status=ok
// SIG undefined FUN_142218790(void)

void FUN_142218790(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void **ppvVar6;
  longlong *plVar7;
  undefined8 local_38;
  longlong local_30;
  undefined **local_28;
  undefined4 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,*(undefined4 *)(param_1 + 600),0xf,&local_38);
  plVar7 = (longlong *)0x0;
  local_20 = 6;
  local_18 = (void *)0x0;
  local_28 = &PTR_FUN_145002d10;
  local_10 = 0;
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 == 200) {
      ppvVar6 = (void **)(**(code **)(*(longlong *)*param_3 + 0x30))();
      if (&local_18 != ppvVar6) {
        iVar5 = *(int *)(ppvVar6 + 1);
        _Src = *ppvVar6;
        local_10 = CONCAT44(local_10._4_4_,iVar5);
        if ((iVar5 == 0) && (local_10._4_4_ == 0)) {
          local_10 = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_18,iVar5);
          _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar5);
        }
      }
      local_20 = 0;
    }
  }
  if (((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_5 + 0x18))();
    if (cVar4 != '\0') {
      if ((int)param_5[1] != 0) {
        plVar7 = (longlong *)*param_5;
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_28);
    }
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)param_2[1];
  local_28 = &PTR_FUN_1440104c8;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 142218950 FUN_142218950 body=1275 status=ok
// SIG undefined FUN_142218950(void)

void FUN_142218950(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  void **ppvVar2;
  void *pvVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  wint_t *pwVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined **local_108;
  void *local_100;
  ulonglong local_f8;
  void *local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  int local_dc;
  void *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  int local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  longlong local_80 [2];
  undefined8 local_70;
  longlong local_68;
  longlong local_60 [2];
  longlong local_50 [3];
  
  local_70 = *param_2;
  local_68 = param_2[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,2,4,&local_70);
  if ((param_4 != '\0') && (iVar7 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar7 == 200)) {
    (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_80);
    plVar9 = (longlong *)0x0;
    local_108 = &PTR__scalar_deleting_destructor__14500c2b0;
    local_100 = (void *)0x0;
    local_f8 = 0;
    local_f0 = (void *)0x0;
    local_e8 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    cVar4 = FUN_1406c6fc0(&local_108,local_80);
    pvVar3 = local_100;
    if (cVar4 == '\0') {
      local_108 = &PTR__scalar_deleting_destructor__14500c2b0;
      if (local_d8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_f0 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_100 != (void *)0x0) {
        FMemory::Free();
      }
      local_108 = &PTR_FUN_144050e60;
      if (local_80[0] != 0) {
        FMemory::Free();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      return;
    }
    lVar13 = (longlong)(int)local_f8;
    local_c8 = (longlong *)0x0;
    local_c0 = (int)local_f8;
    plVar10 = plVar9;
    if ((int)local_f8 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_f8 & 0xffffffff,0);
      plVar10 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar3,lVar13 * 2);
    }
    iVar7 = local_c0;
    ppvVar2 = (void **)(param_1 + 0x51);
    iVar8 = 0;
    if (ppvVar2 != &local_f0) {
      lVar13 = (longlong)(int)local_e8;
      local_88 = local_f0;
      *(int *)(param_1 + 0x52) = (int)local_e8;
      if (((int)local_e8 == 0) && (*(int *)((longlong)param_1 + 0x294) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x294) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_e8 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar2,local_88,lVar13 * 2);
      }
    }
    pwVar11 = &DAT_145004c90;
    plVar12 = (longlong *)&DAT_143f3eda8;
    if (iVar7 != 0) {
      plVar12 = plVar10;
    }
    do {
      wVar5 = *(wint_t *)((longlong)pwVar11 + (longlong)(plVar12 + -0x28a00992));
      if ((wVar5 == 0) && (*pwVar11 == 0)) goto LAB_142218b90;
      if (wVar5 != *pwVar11) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar11);
        if (wVar5 != wVar6) goto LAB_142218b87;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  plVar9 = param_1 + 0x54;
  plVar10 = (longlong *)0x0;
  local_a0 = &PTR_FUN_1440104d0;
  local_98 = 6;
  local_90 = 0;
  if ((((int)param_1[0x55] != 0) && ((longlong *)*plVar9 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), cVar4 != '\0')) {
    if ((int)param_1[0x55] != 0) {
      plVar10 = (longlong *)*plVar9;
    }
    (**(code **)(*plVar10 + 0x40))(plVar10,&local_a0);
  }
  if (((local_50 != plVar9) && ((int)param_1[0x55] != 0)) &&
     (plVar10 = (longlong *)*plVar9, plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    if (*plVar9 != 0) {
      lVar13 = FMemory::Realloc(*plVar9,0,0);
      *plVar9 = lVar13;
    }
    *(undefined4 *)(param_1 + 0x55) = 0;
  }
  (**(code **)(*param_1 + 0x1f0))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
LAB_142218d1e:
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
LAB_142218b87:
  iVar8 = (uint)wVar5 - (uint)wVar6;
LAB_142218b90:
  pvVar3 = local_d8;
  ppvVar2 = (void **)(param_1 + 0x4c);
  *(bool *)((longlong)param_1 + 0x25d) = iVar8 == 0;
  if (ppvVar2 != &local_d8) {
    lVar13 = (longlong)(int)local_d0;
    *(int *)(param_1 + 0x4d) = (int)local_d0;
    if (((int)local_d0 == 0) && (*(int *)((longlong)param_1 + 0x26c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_d0 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar2,pvVar3,lVar13 * 2);
    }
  }
  *(int *)(param_1 + 0x4e) = local_dc;
  *(undefined4 *)((longlong)param_1 + 0x274) = local_e0;
  if (local_dc == 0) {
    plVar12 = param_1 + 0x54;
    local_b8 = &PTR_FUN_1440104d0;
    local_b0 = 6;
    local_a8 = 0;
    if ((((int)param_1[0x55] != 0) && ((longlong *)*plVar12 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)*plVar12 + 0x18))(), cVar4 != '\0')) {
      if ((int)param_1[0x55] != 0) {
        plVar9 = (longlong *)*plVar12;
      }
      (**(code **)(*plVar9 + 0x40))(plVar9,&local_b8);
    }
    if (((local_60 != plVar12) && ((int)param_1[0x55] != 0)) &&
       (plVar9 = (longlong *)*plVar12, plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      if (*plVar12 != 0) {
        lVar13 = FMemory::Realloc(*plVar12,0,0);
        *plVar12 = lVar13;
      }
      *(undefined4 *)(param_1 + 0x55) = 0;
    }
    (**(code **)(*param_1 + 0x1f0))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  local_108 = &PTR__scalar_deleting_destructor__14500c2b0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_100 != (void *)0x0) {
    FMemory::Free();
  }
  local_108 = &PTR_FUN_144050e60;
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  goto LAB_142218d1e;
}



// FUNCTION 142218e50 FUN_142218e50 body=769 status=ok
// SIG undefined FUN_142218e50(void)

void FUN_142218e50(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  void **ppvVar2;
  longlong *plVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_88 [2];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined **local_48;
  void *local_40;
  ulonglong local_38;
  
  plVar3 = (longlong *)param_1[0x60];
  lVar6 = param_1[0x5f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_78 = *param_2;
  local_70 = param_2[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,1,0,&local_78);
  if ((param_4 == '\0') || (iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar5 != 200)) {
    plVar7 = plVar3 + 1;
    local_68 = *param_3;
    local_60 = param_3[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_58 = lVar6;
    local_50 = plVar3;
    cVar4 = FUN_14221afe0(param_1,&local_58,&local_68,0);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      goto LAB_14221908e;
    }
    if (plVar3 == (longlong *)0x0) goto LAB_1422190c6;
    LOCK();
    iVar5 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_88);
    local_40 = (void *)0x0;
    local_38 = 0;
    local_48 = &PTR_FUN_14500c258;
    cVar4 = FUN_1406c6fc0(&local_48,local_88);
    _Src = local_40;
    if (cVar4 == '\0') {
      local_48 = &PTR_FUN_14500c258;
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      local_48 = &PTR_FUN_144050e60;
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      return;
    }
    ppvVar2 = (void **)(param_1 + 0x40);
    if (ppvVar2 != &local_40) {
      lVar6 = (longlong)(int)local_38;
      *(int *)(param_1 + 0x41) = (int)local_38;
      if (((int)local_38 == 0) && (*(int *)((longlong)param_1 + 0x20c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_38 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar2,_Src,lVar6 * 2);
      }
    }
    (**(code **)(*param_1 + 0x1c8))(param_1,ppvVar2);
    local_48 = &PTR_FUN_14500c258;
    if (local_40 != (void *)0x0) {
      FMemory::Free();
    }
    local_48 = &PTR_FUN_144050e60;
    if (local_88[0] != 0) {
      FMemory::Free();
    }
LAB_14221908e:
    if (plVar3 == (longlong *)0x0) goto LAB_1422190c6;
    LOCK();
    plVar7 = plVar3 + 1;
    iVar5 = (int)*plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
  }
  if (iVar5 == 1) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
LAB_1422190c6:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142219160 FUN_142219160 body=549 status=ok
// SIG undefined FUN_142219160(void)

void FUN_142219160(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar2 = (longlong *)param_1[0x60];
  lVar3 = param_1[0x5f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,1,3,&local_58);
  if (param_4 == '\0') {
LAB_1422191e9:
    plVar6 = plVar2 + 1;
    local_48 = *param_3;
    local_40 = param_3[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar6 = (int)*plVar6 + 1;
      UNLOCK();
    }
    local_38 = lVar3;
    local_30 = plVar2;
    cVar4 = FUN_14221afe0(param_1,&local_38,&local_48,0);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      goto LAB_14221925f;
    }
    if (plVar2 == (longlong *)0x0) goto LAB_1422192fd;
    LOCK();
    iVar5 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  else {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 != 0xcc) goto LAB_1422191e9;
LAB_14221925f:
    (**(code **)(param_1[0x16] + 0x170))(param_1 + 0x16,0);
    (**(code **)(param_1[0x16] + 0x178))(param_1 + 0x16,0);
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (*(int *)((longlong)param_1 + 0x14c) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
    *(undefined4 *)(param_1 + 0x2a) = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
    if (*(int *)((longlong)param_1 + 0x20c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
    }
    if (plVar2 == (longlong *)0x0) goto LAB_1422192fd;
    LOCK();
    plVar6 = plVar2 + 1;
    iVar5 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  if (iVar5 == 1) {
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
LAB_1422192fd:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142219390 FUN_142219390 body=478 status=ok
// SIG undefined FUN_142219390(void)

void FUN_142219390(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar2 = (longlong *)param_1[0x60];
  lVar3 = param_1[0x5f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,1,10,&local_58);
  if (param_4 == '\0') {
LAB_142219440:
    plVar6 = plVar2 + 1;
    local_48 = *param_3;
    local_40 = param_3[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar6 = (int)*plVar6 + 1;
      UNLOCK();
    }
    local_38 = lVar3;
    local_30 = plVar2;
    cVar4 = FUN_14221afe0(param_1,&local_38,&local_48,0);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      goto LAB_1422194af;
    }
    if (plVar2 == (longlong *)0x0) goto LAB_1422194e7;
    LOCK();
    iVar5 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  else {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 != 200) {
      iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
      if (iVar5 != 0xcc) goto LAB_142219440;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      iVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
      *(int *)(param_1 + 0x6b) = (int)param_1[0x6b] + iVar5;
    }
LAB_1422194af:
    if (plVar2 == (longlong *)0x0) goto LAB_1422194e7;
    LOCK();
    plVar6 = plVar2 + 1;
    iVar5 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  if (iVar5 == 1) {
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
LAB_1422194e7:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142219570 FUN_142219570 body=267 status=ok
// SIG undefined FUN_142219570(void)

void FUN_142219570(longlong param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,*(undefined4 *)(param_1 + 600),0xd,&local_18);
  if (param_4 != '\0') {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 != 200) {
      iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
      if (iVar5 != 0xcc) goto LAB_1422195fa;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      iVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
      *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + iVar5;
    }
  }
LAB_1422195fa:
  plVar3 = (longlong *)param_2[1];
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
  plVar3 = (longlong *)param_3[1];
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
  return;
}



// FUNCTION 142219680 FUN_142219680 body=440 status=ok
// SIG undefined FUN_142219680(void)

void FUN_142219680(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  
  plVar2 = (longlong *)param_1[0x60];
  lVar3 = param_1[0x5f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,1,2,&local_58);
  if (param_4 == '\0') {
LAB_14221970a:
    plVar6 = plVar2 + 1;
    local_48 = *param_3;
    local_40 = param_3[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar6 = (int)*plVar6 + 1;
      UNLOCK();
    }
    local_38 = lVar3;
    local_30 = plVar2;
    cVar4 = FUN_14221afe0(param_1,&local_38,&local_48,0);
    if (cVar4 == '\0') {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x29c) = 1;
      goto LAB_142219779;
    }
    if (plVar2 == (longlong *)0x0) goto LAB_1422197b1;
    LOCK();
    iVar5 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  else {
    iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if (iVar5 != 0xcc) goto LAB_14221970a;
LAB_142219779:
    if (plVar2 == (longlong *)0x0) goto LAB_1422197b1;
    LOCK();
    plVar6 = plVar2 + 1;
    iVar5 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  if (iVar5 == 1) {
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
LAB_1422197b1:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142219840 InitializeModule body=192 status=ok
// SIG undefined InitializeModule(void)

undefined8 *
FStaticallyLinkedModuleRegistrant<FHttpNetworkReplayStreamingFactory>::InitializeModule(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)operator_new(0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3 + 1;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_144136b50;
    *puVar1 = &PTR__purecall_143f740d8;
    plVar4 = (longlong *)FUN_1404cfca0();
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
    *puVar3 = &PTR__scalar_deleting_destructor__14500bbd8;
    *puVar1 = &PTR_FUN_14500bc20;
    puVar3[2] = 0;
    puVar3[3] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142219900 IsDataAvailable body=109 status=ok
// SIG undefined IsDataAvailable(void)

ulonglong FHttpNetworkReplayStreamer::IsDataAvailable(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x1c0))();
  if ((int)uVar2 == 0) {
    if (((int)param_1[0x57] != 0) && ((longlong *)param_1[0x56] != (longlong *)0x0)) {
      uVar2 = (**(code **)(*(longlong *)param_1[0x56] + 0x18))();
      if ((char)uVar2 != '\0') goto LAB_142219965;
    }
    if (((int)param_1[0x53] == 0) && ((*(byte *)(param_1 + 0x1b) & 1) != 0)) {
      uVar1 = *(uint *)(param_1 + 0x29);
      uVar2 = (ulonglong)uVar1;
      if (((int)param_1[0x2a] < (int)uVar1) && (0 < (int)param_1[0x4e])) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
LAB_142219965:
  return uVar2 & 0xffffffffffffff00;
}


