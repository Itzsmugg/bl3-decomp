// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14049c040 FUN_14049c040 body=602 status=ok
// SIG undefined FUN_14049c040(void)

void FUN_14049c040(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    lVar10 = 0;
    do {
      iVar7 = *(int *)(lVar10 + *(longlong *)(param_1 + 0x1d8));
      if (iVar7 == -1) {
        puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x208) + 0x50);
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if ((*(char *)(puVar8 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 == '\0')))) {
              LOCK();
              bVar11 = *(int *)((longlong)puVar8 + 0xc) == 0;
              if (bVar11) {
                *(int *)((longlong)puVar8 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar11) {
                uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar3 == 0) {
                  lVar4 = 0;
                }
                else {
LAB_14049c249:
                  lVar4 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
                }
LAB_14049c269:
                *(undefined8 **)(lVar4 + 8) = puVar8;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
LAB_14049c105:
              (**(code **)*puVar8)(puVar8,1);
            }
          }
        }
      }
      else {
        piVar1 = *(int **)(param_1 + 0x160);
        for (piVar6 = piVar1; piVar6 != piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4;
            piVar6 = piVar6 + 4) {
          if (*piVar6 == iVar7) {
            iVar5 = (int)((longlong)piVar6 - (longlong)piVar1 >> 4);
            if (iVar5 != -1) {
              puVar8 = *(undefined8 **)(*(longlong *)(piVar1 + (longlong)iVar5 * 4 + 2) + 0x50);
              if (puVar8 == (undefined8 *)0x0) goto LAB_14049c18d;
              LOCK();
              *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
              UNLOCK();
              if (puVar8 == (undefined8 *)0x0) goto LAB_14049c18d;
              LOCK();
              piVar1 = (int *)(puVar8 + 1);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 != 1) goto LAB_14049c18d;
              if ((*(char *)(puVar8 + 2) != '\0') ||
                 ((DAT_146ab62f5 == '\0' &&
                  (cVar2 = FOutputDevice::CanBeUsedOnAnyThread(), cVar2 != '\0'))))
              goto LAB_14049c105;
              LOCK();
              bVar11 = *(int *)((longlong)puVar8 + 0xc) == 0;
              if (bVar11) {
                *(int *)((longlong)puVar8 + 0xc) = 1;
              }
              UNLOCK();
              if (!bVar11) goto LAB_14049c18d;
              uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar3 != 0) goto LAB_14049c249;
              lVar4 = 0;
              goto LAB_14049c269;
            }
            break;
          }
        }
        piVar1 = *(int **)(param_1 + 0x150);
        for (piVar6 = piVar1; piVar6 != piVar1 + (longlong)*(int *)(param_1 + 0x158) * 0x14;
            piVar6 = piVar6 + 0x14) {
          if (*piVar6 == iVar7) {
            iVar7 = (int)(((longlong)piVar6 - (longlong)piVar1) / 0x50);
            goto LAB_14049c17e;
          }
        }
        iVar7 = -1;
LAB_14049c17e:
        puVar8 = *(undefined8 **)(piVar1 + (longlong)iVar7 * 0x14 + 0x10);
      }
LAB_14049c18d:
      FUN_1404a4ca0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),iVar9,puVar8);
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 4;
    } while (iVar9 < *(int *)(param_1 + 0x1e0));
  }
  return;
}



// FUNCTION 14049c2a0 FUN_14049c2a0 body=180 status=ok
// SIG undefined FUN_14049c2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14049c2a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8 [24];
  int local_1e8;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  FUN_1404999a0(local_2a8);
  FUN_141ebe4d0(param_2,local_2a8);
  *(int *)(param_1 + 0x98) = local_1e8;
  uVar5 = 0;
  if (local_1e8 != 0) {
    do {
      uVar4 = (int)uVar5 + 1;
      uVar3 = local_2a8[uVar5 * 3 + 1];
      uVar2 = local_2a8[uVar5 * 3 + 2];
      puVar1 = (undefined8 *)(param_1 + 0xa0 + uVar5 * 0x18);
      *puVar1 = local_2a8[uVar5 * 3];
      puVar1[1] = uVar3;
      *(undefined8 *)(param_1 + 0xb0 + uVar5 * 0x18) = uVar2;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x160) = local_118;
  *(undefined4 *)(param_1 + 0x164) = uStack_114;
  *(undefined4 *)(param_1 + 0x168) = uStack_110;
  *(undefined4 *)(param_1 + 0x16c) = uStack_10c;
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2a8);
  return;
}



// FUNCTION 14049c360 FUN_14049c360 body=1560 status=ok
// SIG undefined FUN_14049c360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14049c360(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined8 *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined ****local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined2 local_2ac;
  int local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  undefined2 local_280 [2];
  undefined8 local_27c;
  undefined2 local_274;
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined **local_258;
  undefined1 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined ***local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined1 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined ***local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined ***local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar1 = (longlong *)(param_1 + 0x188);
  piVar4 = (int *)*plVar1;
  iVar3 = *(int *)(param_1 + 400);
  lVar9 = (longlong)iVar3;
  local_290 = lVar9 * 9;
  piVar10 = piVar4;
  do {
    if (piVar10 == piVar4 + lVar9 * 0x12) {
LAB_14049c3c2:
      *(int *)(param_1 + 400) = iVar3 + 1;
      local_2a8 = param_2;
      local_288 = param_1;
      if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      lVar11 = 0;
      lVar8 = *plVar1 + lVar9 * 0x48;
      *(undefined4 *)(*plVar1 + lVar9 * 0x48) = 0;
      *(undefined8 *)(lVar8 + 8) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(undefined8 *)(lVar8 + 0x38) = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 8,0);
      *(undefined8 *)(lVar8 + 0x10) = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 0x18,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 0x20,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 0x28,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 0x30,0);
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 0x38,0);
      lVar9 = local_288;
      *(undefined1 *)(lVar8 + 0x40) = 0;
      *(undefined1 *)(lVar8 + 0x42) = 0;
      *(int *)(*(longlong *)(local_288 + 0x188) + local_290 * 8) = local_2a8;
      local_2c0 = &local_228;
      local_214 = CONCAT44(uRam00000001468b5d7c,_DAT_1468b5d78);
      uStack_20c = CONCAT44(uRam00000001468b5d84,uRam00000001468b5d80);
      plVar2 = (longlong *)(*(longlong *)(local_288 + 0x188) + (local_290 + 1) * 8);
      local_2c8 = 1;
      local_2d0 = 1;
      local_258 = &PTR_FUN_143f59b38;
      local_228 = &local_258;
      local_188 = &local_258;
      local_2d8 = 1;
      local_168 = local_238;
      local_250 = 0;
      local_220 = 0;
      local_218 = 1;
      local_204 = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_180 = 0;
      local_164 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_178 = 2;
      uStack_174 = 0x3f000000;
      uStack_170 = 0;
      uStack_16c = uStack_23c;
      local_2e0._0_1_ = 0x1b;
      local_248 = 2;
      uStack_244 = 0x3f000000;
      uStack_240 = 0;
      local_2e8 = 1;
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_270,&DAT_146ab6e78,1);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar2 + 2,local_270);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_270);
      local_2c0 = &local_188;
      local_2c8 = 4;
      local_2d0 = 1;
      local_2d8 = 1;
      local_2e0 = (undefined8 *)CONCAT71(local_2e0._1_7_,0xb);
      local_2e8 = 1;
      (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_268,&DAT_146ab6e78,1);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar2 + 3,local_268);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_268);
      local_2b8 = 0x7000000;
      local_2b0 = 7;
      local_2ac = 0xffff;
      (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,&local_2a0,&local_2b8);
      plVar1 = plVar2 + 4;
      if (plVar1 != &local_2a0) {
        puVar5 = (undefined8 *)*plVar1;
        *plVar1 = local_2a0;
        local_2a0 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar4 = (int *)(puVar5 + 1);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar5 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar12 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar12) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar12) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                lVar8 = lVar11;
                if (uVar7 != 0) {
                  lVar8 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar5;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2a0);
      local_280[0] = 0x102;
      local_27c = 0;
      local_274 = 0;
      (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_260,local_280);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar2 + 5,local_260);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_260);
      local_2e0 = &local_1e8;
      local_1a0 = 0x3f800000bf800000;
      uStack_198 = 0xc0400000bf800000;
      local_1a8 = &PTR_GetAddress_143f59b60;
      local_1e0 = &local_1a8;
      local_190 = 0x40400000;
      local_18c = 0x3f800000;
      local_1d4 = _DAT_1468b5d78;
      uStack_1d0 = uRam00000001468b5d7c;
      uStack_1cc = uRam00000001468b5d80;
      uStack_1c8 = uRam00000001468b5d84;
      local_1e8 = 0;
      local_1d8 = 1;
      local_1c4 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_2e8 = 1;
      (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_290,&DAT_146ab6e78,0x18);
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar2 + 6,&local_290);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_290);
      if (*(longlong *)(lVar9 + 0x108) == 0) {
        local_48 = 1;
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_148,0);
        local_148 = 0;
        local_146 = 0x80002;
        local_142 = 0;
        (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,&local_288,&DAT_146ab6e78,&local_148);
        TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(lVar9 + 0x108),&local_288);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_288);
      }
      (**(code **)(*DAT_146ab6358 + 0x670))(DAT_146ab6358,&local_298,&DAT_146ab6e78,1);
      if (plVar2 != &local_298) {
        puVar5 = (undefined8 *)*plVar2;
        *plVar2 = local_298;
        local_298 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar4 = (int *)(puVar5 + 1);
          iVar3 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar5 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar12 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar12) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar12) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar7 != 0) {
                  lVar11 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar11 + 8) = puVar5;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar7);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_298);
      return 1;
    }
    if (*piVar10 == param_2) {
      if ((int)(((longlong)piVar10 - (longlong)piVar4) / 0x48) != -1) {
        return 1;
      }
      goto LAB_14049c3c2;
    }
    piVar10 = piVar10 + 0x12;
  } while( true );
}



// FUNCTION 14049ca00 FUN_14049ca00 body=186 status=ok
// SIG undefined FUN_14049ca00(void)

ulonglong FUN_14049ca00(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong local_res8 [4];
  
  piVar1 = *(int **)(param_1 + 0x188);
  piVar6 = piVar1;
  do {
    piVar3 = piVar1 + (longlong)*(int *)(param_1 + 400) * 0x12;
    if (piVar6 == piVar1 + (longlong)*(int *)(param_1 + 400) * 0x12) {
LAB_14049ca32:
      return (ulonglong)piVar3 & 0xffffffffffffff00;
    }
    if (*piVar6 == param_2) {
      iVar2 = (int)(((longlong)piVar6 - (longlong)piVar1) / 0x48);
      piVar3 = (int *)0x0;
      if ((iVar2 != -1) &&
         (lVar4 = (longlong)iVar2, piVar3 = piVar1, (char)piVar1[lVar4 * 0x12 + 0x10] != '\0')) {
        if (*(longlong *)(piVar1 + lVar4 * 0x12 + 4) != *(longlong *)(piVar1 + lVar4 * 0x12 + 2)) {
          *(undefined1 *)(piVar1 + lVar4 * 0x12 + 0x10) = 0;
          return (ulonglong)piVar1 & 0xffffffffffffff00;
        }
        uVar5 = (**(code **)(*DAT_146ab6358 + 0x340))
                          (DAT_146ab6358,*(longlong *)(piVar1 + lVar4 * 0x12 + 2),local_res8,0);
        *(char *)((longlong)piVar1 + lVar4 * 0x48 + 0x41) = (char)uVar5;
        if ((char)uVar5 == '\0') {
          return uVar5;
        }
        *(bool *)((longlong)piVar1 + lVar4 * 0x48 + 0x42) = local_res8[0] == 0;
        return uVar5;
      }
      goto LAB_14049ca32;
    }
    piVar6 = piVar6 + 0x12;
  } while( true );
}



// FUNCTION 14049cac0 FUN_14049cac0 body=2277 status=ok
// SIG undefined FUN_14049cac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14049cac0(longlong param_1,int param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  wchar_t wVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  short *psVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int *piVar23;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  undefined8 local_2b8;
  int local_2b0;
  int local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  undefined *local_298;
  undefined4 local_290;
  undefined *local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  ulonglong local_22c;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8 [2];
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a0 [168];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  piVar3 = *(int **)(param_1 + 0x188);
  piVar23 = piVar3;
  while( true ) {
    if (piVar23 == piVar3 + (longlong)*(int *)(param_1 + 400) * 0x12) {
      return;
    }
    if (*piVar23 == param_2) break;
    piVar23 = piVar23 + 0x12;
  }
  iVar7 = (int)(((longlong)piVar23 - (longlong)piVar3) / 0x48);
  if (iVar7 == -1) {
    return;
  }
  lVar10 = (longlong)iVar7;
  if ((char)piVar3[lVar10 * 0x12 + 0x10] != '\0') {
    return;
  }
  local_2b8 = *(undefined8 *)(piVar3 + lVar10 * 0x12 + 8);
  *(undefined2 *)(piVar3 + lVar10 * 0x12 + 0x10) = 1;
  lVar11 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(piVar3 + lVar10 * 0x12 + 6);
  plVar19 = (longlong *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar14 = plVar19 + 1;
  local_2a8 = param_3;
  local_2a0 = lVar4;
  if (*(longlong **)(lVar11 + 0x38) < plVar14) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
    plVar19 = (longlong *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar14 = plVar19 + 1;
  }
  *(longlong **)(lVar11 + 0x30) = plVar14;
  *plVar19 = local_2a0;
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 5;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar15 + 2) = 1;
  puVar15[3] = plVar19;
  *(undefined4 *)(puVar15 + 4) = 1;
  *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
  local_d8 = 0xffffffffffffffff;
  uStack_d0 = 0xffffffffffffffff;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffff;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_e0 = 0;
  local_dc = 0xffffffff;
  local_b8 = 0;
  local_ab = 0;
  local_a9 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_a0 = 0;
  local_68 = 0;
  local_1b8[1] = 0;
  local_1a8 = 0xffffffff;
  local_1a4 = 0x900;
  local_f8 = local_2b8;
  local_60 = 1 < *(uint *)(lVar4 + 0x38);
  local_f0 = 0;
  local_e8 = 0x88;
  local_e4 = 0x22;
  local_1b8[0] = lVar4;
  _guard_xfg_dispatch_icall_nop(local_1a0,0,0xa8);
  uVar8 = DAT_1464aa760;
  lVar11 = *(longlong *)(param_1 + 0x28);
  local_ac = 1;
  local_b0 = 1;
  uVar21 = *(longlong *)(lVar11 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar12 = uVar21 + 0x40;
  if (*(ulonglong *)(lVar11 + 0x38) < uVar12) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x42);
    uVar21 = *(longlong *)(lVar11 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar12 = uVar21 + 0x40;
  }
  psVar16 = &DAT_143f56c40;
  *(ulonglong *)(lVar11 + 0x30) = uVar12;
  do {
    sVar1 = *psVar16;
    *(short *)((uVar21 - 0x143f56c40) + (longlong)psVar16) = sVar1;
    psVar16 = psVar16 + 1;
  } while (sVar1 != 0);
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 4;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x28);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 4;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  plVar20 = (longlong *)0x0;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f3ede8;
  puVar15[2] = uVar21;
  *(undefined4 *)(puVar15 + 3) = uVar8;
  lVar11 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_290 = 0;
  local_298 = &DAT_146851250;
  plVar14 = (longlong *)(lVar11 + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar14,&local_2b0,&local_298);
  plVar19 = plVar20;
  if (local_2b0 != -1) {
    plVar19 = (longlong *)((longlong)local_2b0 * 0x20 + *plVar14);
  }
  local_280 = 0;
  plVar22 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar22 = plVar20;
  }
  local_288 = &DAT_1468513a0;
  lVar11 = *plVar22;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar14,&local_2ac,&local_288);
  plVar19 = plVar20;
  if (local_2ac != -1) {
    plVar19 = (longlong *)((longlong)local_2ac * 0x20 + *plVar14);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  plVar14 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar14 = plVar20;
  }
  uVar21 = *(longlong *)(lVar4 + 0x30) + 1U & 0xfffffffffffffffe;
  lVar5 = *plVar14;
  uVar12 = uVar21 + 0x34;
  if (*(ulonglong *)(lVar4 + 0x38) < uVar12) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x36);
    uVar21 = *(longlong *)(lVar4 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar12 = uVar21 + 0x34;
  }
  pwVar17 = L"Coherent GT Click Through";
  *(ulonglong *)(lVar4 + 0x30) = uVar12;
  do {
    wVar2 = *pwVar17;
    *(wchar_t *)((uVar21 - 0x143f56c80) + (longlong)pwVar17) = wVar2;
    pwVar17 = pwVar17 + 1;
  } while (wVar2 != L'\0');
  uVar18 = *(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8;
  uVar12 = uVar18 + 0x178;
  if (*(ulonglong *)(lVar4 + 0x38) < uVar12) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x180);
    uVar18 = *(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8;
    uVar12 = uVar18 + 0x178;
  }
  *(ulonglong *)(lVar4 + 0x30) = uVar12;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(ulonglong **)(lVar4 + 8) = uVar18;
  *(ulonglong *)(lVar4 + 8) = uVar18 + 8;
  FUN_140499730(uVar18,local_1b8,uVar21);
  *(undefined1 *)(lVar4 + 0x1ac) = 1;
  FUN_14049c2a0(lVar4,local_1b8);
  *(undefined1 *)(lVar4 + 0x1ac) = 1;
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_2b8 = *(undefined8 *)(piVar3 + lVar10 * 0x12 + 2);
  puVar15 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 3;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x20);
    puVar15 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 3;
  }
  uVar9 = local_2b8;
  *(undefined8 **)(lVar4 + 0x30) = puVar13;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar15;
  *(undefined8 **)(lVar4 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59480;
  puVar15[2] = local_2b8;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_22c = 0x26;
  local_224 = 0;
  local_21c = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  FUN_14049afe0(*(undefined8 *)(param_1 + 0x28),&local_278);
  local_22c = local_22c & 0xffffffff00000000;
  local_248 = FUN_1404a0ce0();
  local_238 = *(undefined8 *)(piVar3 + lVar10 * 0x12 + 10);
  uStack_240 = *(undefined8 *)(piVar3 + lVar10 * 0x12 + 0xc);
  local_278 = *(undefined8 *)(param_1 + 0x108);
  lVar4 = *(longlong *)(lVar11 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uStack_270 = *(undefined8 *)(lVar4 + 0x38);
  lVar4 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_258 = *(undefined8 *)(lVar4 + 0x40);
  FUN_141ed6ac0(*(undefined8 *)(param_1 + 0x28),&local_278,2,1);
  if (local_2a8 != 0) {
    LOCK();
    *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
    UNLOCK();
  }
  local_2c8 = &local_2a8;
  local_2b8 = CONCAT44(param_6,param_5);
  FUN_1404a3390(lVar11,*(undefined8 *)(param_1 + 0x28),param_4,&local_2b8);
  lVar11 = *(longlong *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(piVar3 + lVar10 * 0x12 + 0xe);
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 5;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 5;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[3] = uVar6;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar15 + 4) = 0;
  *(undefined4 *)(puVar15 + 2) = 0;
  lVar11 = *(longlong *)(param_1 + 0x28);
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 4;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x28);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 4;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59410;
  puVar15[2] = 0;
  *(undefined4 *)(puVar15 + 3) = 1;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = 1;
  lVar11 = *(longlong *)(param_1 + 0x28);
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 3;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x20);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 3;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59490;
  puVar15[2] = uVar9;
  lVar11 = *(longlong *)(param_1 + 0x28);
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 2;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x18);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 2;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f3edf8;
  lVar11 = *(longlong *)(param_1 + 0x28);
  puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar15 + 2;
  if (*(undefined8 **)(lVar11 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(lVar11 + 0x30,0x18);
    puVar15 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar15 + 2;
  }
  *(undefined8 **)(lVar11 + 0x30) = puVar13;
  *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
  **(undefined8 **)(lVar11 + 8) = puVar15;
  *(undefined8 **)(lVar11 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_143f59460;
  *(undefined1 *)(lVar11 + 0x1ac) = 0;
  FUN_1404a3300(param_1 + -8);
  *(undefined8 *)(piVar3 + lVar10 * 0x12 + 4) = uVar9;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(local_1b8);
  return;
}



// FUNCTION 14049d3b0 FUN_14049d3b0 body=161 status=ok
// SIG undefined FUN_14049d3b0(void)

undefined8 FUN_14049d3b0(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1404a24d0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14049d460 FUN_14049d460 body=161 status=ok
// SIG undefined FUN_14049d460(void)

undefined8 FUN_14049d460(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1404a2700(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14049d510 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TGPUSkinCacheCS<1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140499370(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f59208;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d560 FUN_14049d560 body=77 status=ok
// SIG undefined FUN_14049d560(void)

undefined8 * FUN_14049d560(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140499480(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f591c0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d5b0 FUN_14049d5b0 body=77 status=ok
// SIG undefined FUN_14049d5b0(void)

undefined8 * FUN_14049d5b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f592a0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d600 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMobileDownsamplePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f59330;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd2) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"ThresholdParam",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"TexCoordsParam",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"TextureParam",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"TextureSamplerParam",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d700 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TGPUSkinCacheCS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140499400(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f59208;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d740 FUN_14049d740 body=80 status=ok
// SIG undefined FUN_14049d740(void)

undefined8 * FUN_14049d740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__143f591c0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d790 FUN_14049d790 body=57 status=ok
// SIG undefined FUN_14049d790(void)

undefined8 * FUN_14049d790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f592a0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d7d0 FUN_14049d7d0 body=79 status=ok
// SIG undefined FUN_14049d7d0(void)

undefined8 * FUN_14049d7d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f59330;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14049d820 FUN_14049d820 body=126 status=ok
// SIG undefined FUN_14049d820(void)

undefined8 FUN_14049d820(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack_44;
  uint uStack_34;
  undefined4 uStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  *(int *)(param_1 + 0x1a8) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1ac) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow((longlong *)(param_1 + 0x1a0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar3);
  *puVar1 = CONCAT44(uStack_2c,param_3);
  puVar1[1] = CONCAT44(uStack_44,param_2);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar3);
  *puVar1 = 0;
  puVar1[1] = (ulonglong)uStack_34 << 0x20;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 14049d8a0 FUN_14049d8a0 body=468 status=ok
// SIG undefined FUN_14049d8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14049d8a0(longlong param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 *local_a0;
  int *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  piVar2 = (int *)operator_new(0x18);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
    goto LAB_14049da19;
  }
  iVar1 = param_3[2];
  iVar5 = *param_3;
  piVar2[1] = param_3[1];
  piVar2[2] = iVar1;
  local_98 = piVar2 + 4;
  *piVar2 = iVar5;
  local_98[0] = 0;
  iVar5 = DAT_1464c9c64;
  local_98[1] = 0;
  iVar1 = *piVar2;
  if (iVar1 < 1) {
LAB_14049d927:
    iVar4 = 1;
LAB_14049d935:
    *piVar2 = iVar4;
    iVar1 = piVar2[1];
    if (iVar1 < 1) {
      iVar5 = 1;
    }
    else if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
    piVar2[1] = iVar5;
    iVar1 = *piVar2;
  }
  else {
    if (DAT_1464c9c64 < iVar1) {
LAB_14049d922:
      if (iVar1 < 1) goto LAB_14049d927;
      iVar4 = DAT_1464c9c64;
      if (iVar1 < DAT_1464c9c64) {
        iVar4 = iVar1;
      }
      goto LAB_14049d935;
    }
    if ((piVar2[1] < 1) || (DAT_1464c9c64 < piVar2[1])) goto LAB_14049d922;
  }
  local_38 = local_60;
  local_90 = &local_78;
  uVar6 = 1;
  if (0 < piVar2[2]) {
    uVar6 = (ulonglong)(uint)piVar2[2];
  }
  local_88 = (undefined4)uVar6;
  local_a0 = &local_58;
  local_a8 = 0;
  local_78 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_70 = 2;
  uStack_68 = 1;
  local_b0 = 4;
  local_b8 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 2;
  uStack_44 = 0;
  uStack_40 = 1;
  uStack_3c = uStack_64;
  FUN_1404a2100(iVar1,2,CONCAT71((int7)(uVar6 >> 8),0xb),1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
LAB_14049da19:
  iVar1 = *(int *)(param_1 + 0x148);
  *(int *)(param_1 + 0x148) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x140),iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x140));
  *puVar3 = param_2;
  *(int **)(puVar3 + 2) = piVar2;
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 14049da80 FUN_14049da80 body=242 status=ok
// SIG undefined FUN_14049da80(void)

undefined8
FUN_14049da80(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  puVar4 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      iVar3 = 1;
    }
    else if (param_2 == 1) {
      iVar3 = 2;
    }
    else if (param_2 == 2) {
      iVar3 = 4;
    }
    else {
      iVar3 = 0;
    }
    *(undefined4 *)(puVar1 + 1) = 4;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(int *)(puVar1 + 9) = iVar3;
    *puVar1 = &PTR_FUN_143f59a70;
    *(undefined1 *)(puVar1 + 8) = param_5;
    puVar1[10] = 0;
    *(int *)((longlong)puVar1 + 0x44) = iVar3 * param_3;
    FRenderResource::InitResource(puVar1);
    puVar4 = puVar1;
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar3 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x130),iVar3);
  }
  puVar2 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x130));
  *puVar2 = param_4;
  *(undefined8 **)(puVar2 + 2) = puVar4;
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}



// FUNCTION 14049db80 FUN_14049db80 body=1538 status=ok
// SIG undefined FUN_14049db80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14049db80(longlong param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_1a8 [32];
  int local_188 [2];
  undefined1 local_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  undefined1 uStack_17c;
  undefined1 uStack_17b;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined1 local_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined1 uStack_175;
  undefined1 uStack_174;
  undefined1 uStack_173;
  undefined2 uStack_172;
  longlong local_170;
  longlong local_168;
  int *local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined2 local_51;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_150 = *(undefined8 *)(param_2 + 2);
  uStack_148 = *(undefined8 *)(param_2 + 4);
  local_128 = param_2[0xc];
  plVar2 = (longlong *)(param_1 + 0x2b0);
  local_140 = param_2[6];
  iStack_13c = param_2[7];
  iStack_138 = param_2[8];
  iStack_134 = param_2[9];
  local_124 = param_2[0x1e];
  local_130 = *(undefined8 *)(param_2 + 10);
  local_170 = param_1;
  FUN_1404a09d0(plVar2,local_188,&local_150);
  lVar11 = 0;
  lVar10 = lVar11;
  if (local_188[0] != -1) {
    lVar10 = (longlong)local_188[0] * 0x40 + *plVar2;
  }
  lVar9 = lVar10 + 0x30;
  if (lVar10 == 0) {
    lVar9 = lVar11;
  }
  if (lVar9 == 0) {
    iVar4 = param_2[8];
    if (iVar4 == 1) {
LAB_14049dc5c:
      uVar7 = 0;
    }
    else if (iVar4 == 2) {
      uVar7 = 1;
    }
    else if (iVar4 == 3) {
      uVar7 = 4;
    }
    else if (iVar4 == 4) {
      uVar7 = 2;
    }
    else {
      if (iVar4 != 5) goto LAB_14049dc5c;
      uVar7 = 3;
    }
    uVar5 = FUN_1404a52e0(param_2[7]);
    local_188[0] = FUN_1404a52e0(param_2[6]);
    iVar4 = param_2[5];
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        lVar11 = 1;
      }
      else if (iVar4 == 3) {
        lVar11 = 4;
      }
      else if (iVar4 == 4) {
        lVar11 = 2;
      }
      else if (iVar4 == 5) {
        lVar11 = 3;
      }
    }
    uVar6 = FUN_1404a52e0(param_2[4]);
    local_87 = FUN_1404a52e0(param_2[3]);
    local_84 = (undefined1)local_188[0];
    local_82 = (undefined1)param_2[0x1e];
    local_81 = 0x100;
    local_7d = 0xf0001;
    local_79 = 0x1000001;
    local_75 = 0x1000f00;
    local_71 = 0x10000;
    local_6d = 0x1000f;
    local_69 = 0xf000100;
    local_65 = 0x100;
    local_61 = 0xf0001;
    local_5d = 0x1000001;
    local_59 = 0x1000f00;
    local_55 = 0x10000;
    local_51 = 0xf;
    local_88 = (undefined1)lVar11;
    local_86 = uVar6;
    local_85 = uVar7;
    local_83 = uVar5;
    (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,&local_168,&local_88);
    local_180 = SUB81(&local_150,0);
    uStack_17f = (undefined1)((ulonglong)&local_150 >> 8);
    uStack_17e = (undefined1)((ulonglong)&local_150 >> 0x10);
    uStack_17d = (undefined1)((ulonglong)&local_150 >> 0x18);
    uStack_17c = (undefined1)((ulonglong)&local_150 >> 0x20);
    uStack_17b = (undefined1)((ulonglong)&local_150 >> 0x28);
    uStack_17a = (undefined1)((ulonglong)&local_150 >> 0x30);
    uStack_179 = (undefined1)((ulonglong)&local_150 >> 0x38);
    local_178 = SUB81(&local_168,0);
    uStack_177 = (undefined1)((ulonglong)&local_168 >> 8);
    uStack_176 = (undefined1)((ulonglong)&local_168 >> 0x10);
    uStack_175 = (undefined1)((ulonglong)&local_168 >> 0x18);
    uStack_174 = (undefined1)((ulonglong)&local_168 >> 0x20);
    uStack_173 = (undefined1)((ulonglong)&local_168 >> 0x28);
    uStack_172 = (undefined2)((ulonglong)&local_168 >> 0x30);
    FUN_140497f20(plVar2,local_188,&local_180,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
    param_1 = local_170;
  }
  plVar2 = (longlong *)(param_1 + 0x260);
  piVar1 = param_2 + 0xd;
  FUN_1404a0900(plVar2,local_188,piVar1);
  lVar10 = 0;
  if (local_188[0] != -1) {
    lVar10 = *plVar2 + (longlong)local_188[0] * 0x48;
  }
  lVar11 = lVar10 + 0x38;
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  if (lVar11 != 0) goto LAB_14049dead;
  if (*(char *)((longlong)param_2 + 0x62) == '\0') {
    uStack_17f = 7;
LAB_14049de00:
    local_180 = 0;
  }
  else {
    uStack_17f = FUN_1404a5380(*piVar1);
    local_180 = 1;
    if (*(char *)((longlong)param_2 + 99) == '\0') goto LAB_14049de00;
  }
  iVar4 = param_2[0x19];
  uStack_174 = 0xff;
  uStack_173 = 0xff;
  uStack_179 = (char)iVar4;
  uVar7 = FUN_1404a53f0(param_2[0x10]);
  uStack_177 = uVar7;
  uVar5 = FUN_1404a53f0(param_2[0x12]);
  uStack_176 = 0;
  uStack_175 = uVar5;
  uStack_17d = FUN_1404a5380(param_2[0x13]);
  uStack_17b = 0;
  uStack_17e = (char)iVar4;
  uStack_17c = uVar7;
  uStack_17a = uVar5;
  local_178 = uStack_17d;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,&local_168,&local_180);
  local_158 = &local_168;
  local_160 = piVar1;
  FUN_140497c50(plVar2,local_188,&local_160,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
  param_1 = local_170;
LAB_14049dead:
  if (*(longlong *)(param_1 + 0x108) == 0) {
    local_180 = 2;
    uStack_17f = 0;
    uStack_17c = 0;
    uStack_17b = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    local_178 = 0;
    uStack_177 = 0;
    uStack_176 = 0;
    uStack_175 = 0;
    uStack_174 = 1 < (uint)param_2[0x1f];
    uStack_173 = 0;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_170,&local_180);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x108,&local_170);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
  }
  iVar4 = *param_2;
  if (*(int *)(param_1 + 0x358) != *(int *)(param_1 + 900)) {
    lVar10 = *(longlong *)(param_1 + 0x390);
    if (*(longlong *)(param_1 + 0x390) == 0) {
      lVar10 = param_1 + 0x388;
    }
    iVar8 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x398) - 1U & (longlong)iVar4) * 4);
    if (iVar8 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x350);
      do {
        lVar11 = lVar10 + (longlong)iVar8 * 0x18;
        if (*(int *)(lVar10 + (longlong)iVar8 * 0x18) == iVar4) {
          if (iVar8 != -1) goto LAB_14049df73;
          break;
        }
        iVar8 = *(int *)(lVar11 + 0x10);
      } while (iVar8 != -1);
    }
  }
  lVar11 = 0;
LAB_14049df73:
  lVar10 = lVar11 + 8;
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  if (lVar10 == 0) {
    local_170 = FUN_1404a1170(iVar4);
    local_158 = &local_170;
    local_160 = param_2;
    FUN_1404981d0((longlong *)(param_1 + 0x350),local_188,&local_160,0);
  }
  iVar4 = param_2[1];
  if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
    lVar10 = *(longlong *)(param_1 + 0x3e0);
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      lVar10 = param_1 + 0x3d8;
    }
    iVar8 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 1000) - 1U & (longlong)iVar4) * 4);
    if (iVar8 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x3a0);
      do {
        lVar11 = lVar10 + (longlong)iVar8 * 0x18;
        if (*(int *)(lVar10 + (longlong)iVar8 * 0x18) == iVar4) {
          if (iVar8 != -1) goto LAB_14049e023;
          break;
        }
        iVar8 = *(int *)(lVar11 + 0x10);
      } while (iVar8 != -1);
    }
  }
  lVar11 = 0;
LAB_14049e023:
  lVar10 = lVar11 + 8;
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  if (lVar10 == 0) {
    local_170 = FUN_1404a0f80(iVar4);
    local_158 = &local_170;
    local_160 = param_2 + 1;
    FUN_1404981d0((longlong *)(param_1 + 0x3a0),local_188,&local_160,0);
  }
  iStack_8c = param_2[0x24];
  iVar4 = *(int *)(param_1 + 0x188);
  uStack_11c = (undefined4)*(undefined8 *)param_2;
  uStack_118 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  uStack_114 = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_110 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  uStack_10c = (undefined4)*(undefined8 *)(param_2 + 4);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  uStack_104 = (undefined4)*(undefined8 *)(param_2 + 6);
  uStack_100 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20);
  local_fc = (undefined4)*(undefined8 *)(param_2 + 8);
  uStack_f8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
  uStack_f4 = (undefined4)*(undefined8 *)(param_2 + 10);
  uStack_f0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 10) >> 0x20);
  local_ec = (undefined4)*(undefined8 *)(param_2 + 0xc);
  uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  uStack_e4 = (undefined4)*(undefined8 *)(param_2 + 0xe);
  uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
  local_dc = (undefined4)*(undefined8 *)(param_2 + 0x10);
  uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  uStack_d4 = (undefined4)*(undefined8 *)(param_2 + 0x12);
  uStack_d0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x12) >> 0x20);
  local_cc = (undefined4)*(undefined8 *)(param_2 + 0x14);
  uStack_c8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  uStack_c4 = (undefined4)*(undefined8 *)(param_2 + 0x16);
  uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x16) >> 0x20);
  local_ac = param_2[0x1c];
  iStack_a8 = param_2[0x1d];
  iStack_a4 = param_2[0x1e];
  iStack_a0 = param_2[0x1f];
  local_bc = (undefined4)*(undefined8 *)(param_2 + 0x18);
  uStack_b8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  uStack_b4 = (undefined4)*(undefined8 *)(param_2 + 0x1a);
  uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
  local_9c = param_2[0x20];
  iStack_98 = param_2[0x21];
  iStack_94 = param_2[0x22];
  iStack_90 = param_2[0x23];
  *(int *)(param_1 + 0x188) = iVar4 + 1;
  local_120 = param_3;
  if (*(int *)(param_1 + 0x18c) < iVar4 + 1) {
    FUN_1404a2c10(param_1 + 0x180,iVar4);
  }
  lVar10 = *(longlong *)(param_1 + 0x180);
  lVar11 = (longlong)iVar4 * 0x98;
  *(undefined8 *)(lVar11 + lVar10) = CONCAT44(uStack_11c,local_120);
  ((undefined8 *)(lVar11 + lVar10))[1] = CONCAT44(uStack_114,uStack_118);
  puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar10);
  *puVar3 = CONCAT44(uStack_10c,uStack_110);
  puVar3[1] = CONCAT44(uStack_104,uStack_108);
  puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar10);
  *puVar3 = CONCAT44(local_fc,uStack_100);
  puVar3[1] = CONCAT44(uStack_f4,uStack_f8);
  puVar3 = (undefined8 *)(lVar11 + 0x30 + lVar10);
  *puVar3 = CONCAT44(local_ec,uStack_f0);
  puVar3[1] = CONCAT44(uStack_e4,uStack_e8);
  puVar3 = (undefined8 *)(lVar11 + 0x40 + lVar10);
  *puVar3 = CONCAT44(local_dc,uStack_e0);
  puVar3[1] = CONCAT44(uStack_d4,uStack_d8);
  puVar3 = (undefined8 *)(lVar11 + 0x50 + lVar10);
  *puVar3 = CONCAT44(local_cc,uStack_d0);
  puVar3[1] = CONCAT44(uStack_c4,uStack_c8);
  puVar3 = (undefined8 *)(lVar11 + 0x60 + lVar10);
  *puVar3 = CONCAT44(local_bc,uStack_c0);
  puVar3[1] = CONCAT44(uStack_b4,uStack_b8);
  puVar3 = (undefined8 *)(lVar11 + 0x70 + lVar10);
  *puVar3 = CONCAT44(local_ac,uStack_b0);
  puVar3[1] = CONCAT44(iStack_a4,iStack_a8);
  puVar3 = (undefined8 *)(lVar11 + 0x80 + lVar10);
  *puVar3 = CONCAT44(local_9c,iStack_a0);
  puVar3[1] = CONCAT44(iStack_94,iStack_98);
  *(ulonglong *)(lVar11 + 0x90 + lVar10) = CONCAT44(iStack_8c,iStack_90);
  return CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
}



// FUNCTION 14049e190 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x100;
  local_84 = 0xf0001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 14049e260 FUN_14049e260 body=356 status=ok
// SIG undefined FUN_14049e260(void)

undefined8 FUN_14049e260(longlong param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong local_res8;
  undefined8 local_res18;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 local_20;
  
  iVar1 = param_3[2];
  if (iVar1 == 0) {
LAB_14049e296:
    local_36 = 0;
  }
  else if (iVar1 == 1) {
    local_36 = 2;
  }
  else {
    if (iVar1 != 2) goto LAB_14049e296;
    local_36 = 1;
  }
  iVar1 = param_3[1];
  if (iVar1 == 0) {
LAB_14049e2b4:
    local_37 = 0;
  }
  else if (iVar1 == 1) {
    local_37 = 2;
  }
  else {
    if (iVar1 != 2) goto LAB_14049e2b4;
    local_37 = 1;
  }
  iVar1 = *param_3;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_38 = 1;
      goto LAB_14049e2d1;
    }
    if (iVar1 == 2) {
      local_38 = 2;
      goto LAB_14049e2d1;
    }
  }
  local_38 = 0;
LAB_14049e2d1:
  local_2c = 0x7f7fffff;
  local_35 = 1;
  local_34 = 0;
  local_28 = 1;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_res8,&local_38);
  local_50 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  lVar3 = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
    lVar3 = local_50;
  }
  local_res18 = 0;
  local_48 = param_2;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  iVar1 = *(int *)(param_1 + 0x178);
  *(int *)(param_1 + 0x178) = iVar1 + 1;
  if (*(int *)(param_1 + 0x17c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x170,iVar1);
  }
  local_40 = 0;
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x170));
  *puVar2 = param_2;
  *(longlong *)(puVar2 + 2) = lVar3;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_50);
  return 1;
}



// FUNCTION 14049e3d0 FUN_14049e3d0 body=332 status=ok
// SIG undefined FUN_14049e3d0(void)

undefined8 * FUN_14049e3d0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_143f59c00;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14049e520 FUN_14049e520 body=153 status=ok
// SIG undefined FUN_14049e520(void)

undefined8
FUN_14049e520(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  lVar2 = operator_new(0x58);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140499690(lVar2,param_3,param_4,param_5);
  }
  iVar1 = *(int *)(param_1 + 0x168);
  *(int *)(param_1 + 0x168) = iVar1 + 1;
  if (*(int *)(param_1 + 0x16c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x160,iVar1);
  }
  puVar4 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x160));
  *puVar4 = param_2;
  *(undefined8 *)(puVar4 + 2) = uVar3;
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



// FUNCTION 14049e5c0 FUN_14049e5c0 body=259 status=ok
// SIG undefined FUN_14049e5c0(void)

ulonglong FUN_14049e5c0(longlong param_1,uint param_2,int param_3,undefined4 param_4,
                       undefined1 param_5)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 < 2) {
    puVar3 = (undefined8 *)operator_new(0x50);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 4;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      *puVar3 = &PTR_FUN_143f59ab0;
      *(undefined1 *)(puVar3 + 7) = param_5;
      puVar3[8] = 0;
      *(uint *)(puVar3 + 9) = param_2;
      if (param_2 == 0) {
        *(int *)((longlong)puVar3 + 0x3c) = param_3 * 0x30;
        FRenderResource::InitResource(puVar3);
      }
      else if (param_2 == 1) {
        *(int *)((longlong)puVar3 + 0x3c) = param_3 * 0x10;
        FRenderResource::InitResource(puVar3);
      }
    }
    iVar1 = *(int *)(param_1 + 0x128);
    *(int *)(param_1 + 0x128) = iVar1 + 1;
    if (*(int *)(param_1 + 300) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x120,iVar1);
    }
    puVar4 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x120));
    *puVar4 = param_4;
    *(undefined8 **)(puVar4 + 2) = puVar3;
    uVar2 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  else {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  return uVar2;
}



// FUNCTION 14049e6d0 FUN_14049e6d0 body=155 status=ok
// SIG undefined FUN_14049e6d0(void)

void FUN_14049e6d0(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x1a0);
  iVar5 = *(int *)(param_1 + 0x1a8);
  piVar3 = piVar1;
  if (piVar1 != piVar1 + (longlong)iVar5 * 8) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 8;
      if (piVar3 == piVar1 + (longlong)iVar5 * 8) {
        return;
      }
    }
    iVar2 = (int)((longlong)piVar3 - (longlong)piVar1 >> 5);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (piVar1 + (longlong)iVar2 * 8,piVar1 + (longlong)(iVar5 - iVar4) * 8,
                   (longlong)iVar4 << 5);
        iVar5 = *(int *)(param_1 + 0x1a8);
      }
      *(int *)(param_1 + 0x1a8) = iVar5 + -1;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink((undefined8 *)(param_1 + 0x1a0));
      return;
    }
  }
  return;
}



// FUNCTION 14049e7e0 FUN_14049e7e0 body=209 status=ok
// SIG undefined FUN_14049e7e0(void)

void FUN_14049e7e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  plVar1 = (longlong *)(param_1 + 0x130);
  piVar2 = (int *)*plVar1;
  piVar7 = piVar2;
  if (piVar2 != piVar2 + (longlong)*(int *)(param_1 + 0x138) * 4) {
    while (*piVar7 != param_2) {
      piVar7 = piVar7 + 4;
      if (piVar7 == piVar2 + (longlong)*(int *)(param_1 + 0x138) * 4) {
        return;
      }
    }
    iVar6 = (int)((longlong)piVar7 - (longlong)piVar2 >> 4);
    if (iVar6 != -1) {
      puVar3 = *(undefined8 **)(piVar2 + (longlong)iVar6 * 4 + 2);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      iVar4 = *(int *)(param_1 + 0x138);
      iVar5 = (iVar4 - iVar6) + -1;
      if (0 < iVar5) {
        iVar5 = 1;
      }
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar6 * 0x10),
                   (void *)((longlong)(iVar4 - iVar5) * 0x10 + *plVar1),(longlong)iVar5 << 4);
        iVar4 = *(int *)(param_1 + 0x138);
      }
      *(int *)(param_1 + 0x138) = iVar4 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 14049e8c0 FUN_14049e8c0 body=205 status=ok
// SIG undefined FUN_14049e8c0(void)

void FUN_14049e8c0(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x180);
  iVar6 = *(int *)(param_1 + 0x188);
  piVar3 = piVar1;
  if (piVar1 != piVar1 + (longlong)iVar6 * 0x26) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 0x26;
      if (piVar3 == piVar1 + (longlong)iVar6 * 0x26) {
        return;
      }
    }
    lVar4 = ((longlong)piVar3 - (longlong)piVar1) / 0x26 +
            ((longlong)piVar3 - (longlong)piVar1 >> 0x3f);
    iVar5 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
    if (iVar5 != -1) {
      iVar2 = (iVar6 - iVar5) + -1;
      if (0 < iVar2) {
        iVar2 = 1;
      }
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (piVar1 + (longlong)iVar5 * 0x26,piVar1 + (longlong)(iVar6 - iVar2) * 0x26,
                   (longlong)iVar2 * 0x98);
        iVar6 = *(int *)(param_1 + 0x188);
      }
      *(int *)(param_1 + 0x188) = iVar6 + -1;
      TArray<FPakPrecacher::FPakData,FDefaultAllocator>::ResizeShrink
                ((undefined8 *)(param_1 + 0x180));
      return;
    }
  }
  return;
}



// FUNCTION 14049e990 FUN_14049e990 body=195 status=ok
// SIG undefined FUN_14049e990(void)

void FUN_14049e990(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  plVar1 = (longlong *)(param_1 + 0x170);
  piVar3 = (int *)*plVar1;
  piVar6 = piVar3;
  if (piVar3 != piVar3 + (longlong)*(int *)(param_1 + 0x178) * 4) {
    while (*piVar6 != param_2) {
      piVar6 = piVar6 + 4;
      if (piVar6 == piVar3 + (longlong)*(int *)(param_1 + 0x178) * 4) {
        return;
      }
    }
    iVar5 = (int)((longlong)piVar6 - (longlong)piVar3 >> 4);
    if (iVar5 != -1) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                (piVar3 + (longlong)iVar5 * 4 + 2);
      iVar2 = *(int *)(param_1 + 0x178);
      iVar4 = (iVar2 - iVar5) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar5 * 0x10 + *plVar1),
                   (void *)((longlong)(iVar2 - iVar4) * 0x10 + *plVar1),(longlong)iVar4 << 4);
        iVar2 = *(int *)(param_1 + 0x178);
      }
      *(int *)(param_1 + 0x178) = iVar2 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 14049ea60 FUN_14049ea60 body=553 status=ok
// SIG undefined FUN_14049ea60(void)

void FUN_14049ea60(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  
  piVar1 = *(int **)(param_1 + 0x150);
  iVar4 = *(int *)(param_1 + 0x158);
  piVar9 = piVar1 + (longlong)iVar4 * 0x14;
  for (piVar7 = piVar1; piVar7 != piVar9; piVar7 = piVar7 + 0x14) {
    if (*piVar7 == param_2) {
      if ((int)(((longlong)piVar7 - (longlong)piVar1) / 0x50) != -1) {
        piVar7 = piVar1;
        if (piVar1 == piVar9) {
          return;
        }
        do {
          if (*piVar7 == param_2) {
            iVar2 = (int)(((longlong)piVar7 - (longlong)piVar1) / 0x50);
            if (iVar2 == -1) {
              return;
            }
            iVar6 = (iVar4 - iVar2) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (piVar1 + (longlong)iVar2 * 0x14,piVar1 + (longlong)(iVar4 - iVar6) * 0x14,
                         (longlong)iVar6 * 0x50);
              iVar4 = *(int *)(param_1 + 0x158);
            }
            *(int *)(param_1 + 0x158) = iVar4 + -1;
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x150);
            return;
          }
          piVar7 = piVar7 + 0x14;
        } while (piVar7 != piVar9);
        return;
      }
      break;
    }
  }
  piVar1 = *(int **)(param_1 + 0x160);
  piVar7 = piVar1;
  do {
    if (piVar7 == piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4) {
      iVar4 = -1;
LAB_14049eae6:
      if ((((1 < *(int *)(*(longlong *)(piVar1 + (longlong)iVar4 * 4 + 2) + 8)) &&
           (*(int *)(param_1 + 0x18) != 0)) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0))
         && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(), cVar3 != '\0')) {
        if (*(int *)(param_1 + 0x18) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(param_1 + 0x10);
        }
        (**(code **)(*plVar8 + 0x38))(plVar8,*(undefined8 *)(piVar1 + (longlong)iVar4 * 4 + 2));
      }
      piVar1 = *(int **)(param_1 + 0x160);
      piVar7 = piVar1;
      while( true ) {
        if (piVar7 == piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4) {
          return;
        }
        if (*piVar7 == param_2) break;
        piVar7 = piVar7 + 4;
      }
      uVar5 = (longlong)piVar7 - (longlong)piVar1 >> 4;
      if ((int)uVar5 == -1) {
        return;
      }
      FUN_1404a2a40(param_1 + 0x160,uVar5 & 0xffffffff,1,1);
      return;
    }
    if (*piVar7 == param_2) {
      iVar4 = (int)((longlong)piVar7 - (longlong)piVar1 >> 4);
      goto LAB_14049eae6;
    }
    piVar7 = piVar7 + 4;
  } while( true );
}



// FUNCTION 14049ec90 FUN_14049ec90 body=209 status=ok
// SIG undefined FUN_14049ec90(void)

void FUN_14049ec90(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  plVar1 = (longlong *)(param_1 + 0x120);
  piVar2 = (int *)*plVar1;
  piVar7 = piVar2;
  if (piVar2 != piVar2 + (longlong)*(int *)(param_1 + 0x128) * 4) {
    while (*piVar7 != param_2) {
      piVar7 = piVar7 + 4;
      if (piVar7 == piVar2 + (longlong)*(int *)(param_1 + 0x128) * 4) {
        return;
      }
    }
    iVar6 = (int)((longlong)piVar7 - (longlong)piVar2 >> 4);
    if (iVar6 != -1) {
      puVar3 = *(undefined8 **)(piVar2 + (longlong)iVar6 * 4 + 2);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      iVar4 = *(int *)(param_1 + 0x128);
      iVar5 = (iVar4 - iVar6) + -1;
      if (0 < iVar5) {
        iVar5 = 1;
      }
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar6 * 0x10),
                   (void *)((longlong)(iVar4 - iVar5) * 0x10 + *plVar1),(longlong)iVar5 << 4);
        iVar4 = *(int *)(param_1 + 0x128);
      }
      *(int *)(param_1 + 0x128) = iVar4 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 14049ed70 FUN_14049ed70 body=924 status=ok
// SIG undefined FUN_14049ed70(void)

void FUN_14049ed70(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar15;
  
  if (*(char *)(param_1 + 0x3f0) != '\0') {
    lVar12 = *(longlong *)(param_1 + 600);
    uVar15 = 0;
    uVar14 = 0;
    if (lVar12 != *(longlong *)(param_1 + 0x218)) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      *(longlong *)(param_1 + 0x218) = lVar12;
      uVar5 = *(undefined8 *)(lVar12 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
      if (*(undefined8 **)(lVar4 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 5;
      }
      *(undefined8 **)(lVar4 + 0x30) = puVar7;
      *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
      **(undefined8 **)(lVar4 + 8) = puVar10;
      *(undefined8 **)(lVar4 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f489e0;
      *(undefined4 *)(puVar10 + 2) = 0;
      puVar10[3] = uVar5;
      *(undefined4 *)(puVar10 + 4) = 0;
    }
    if (*(char *)(param_1 + 0x1d0) != '\0') {
      FUN_14049bcd0(param_1);
      *(undefined1 *)(param_1 + 0x1d0) = 0;
    }
    if (*(char *)(param_1 + 0x1e8) != '\0') {
      FUN_14049c040(param_1);
      *(undefined1 *)(param_1 + 0x1e8) = 0;
    }
    if (*(char *)(param_1 + 0x200) != '\0') {
      uVar16 = uVar15;
      if (0 < *(int *)(param_1 + 0x1f8)) {
        do {
          iVar9 = *(int *)(uVar16 + *(longlong *)(param_1 + 0x1f0));
          if (iVar9 != -1) {
            piVar6 = *(int **)(param_1 + 0x170);
            for (piVar11 = piVar6; piVar11 != piVar6 + (longlong)*(int *)(param_1 + 0x178) * 4;
                piVar11 = piVar11 + 4) {
              if (*piVar11 == iVar9) {
                iVar9 = (int)((longlong)piVar11 - (longlong)piVar6 >> 4);
                if (iVar9 != -1) {
                  lVar12 = (longlong)iVar9;
                  FUN_1404a4bd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
                                uVar15,*(undefined8 *)(piVar6 + lVar12 * 4 + 2));
                  if (((DAT_146ab62cc < 0x1e) && ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) != 0))
                     && ((int)uVar15 == 0)) {
                    FUN_1404a4bd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),1,
                                  *(undefined8 *)
                                   (*(longlong *)(param_1 + 0x170) + 8 + lVar12 * 0x10));
                    FUN_1404a4bd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),2,
                                  *(undefined8 *)
                                   (*(longlong *)(param_1 + 0x170) + 8 + lVar12 * 0x10));
                    FUN_1404a4bd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),3,
                                  *(undefined8 *)
                                   (*(longlong *)(param_1 + 0x170) + 8 + lVar12 * 0x10));
                  }
                }
                break;
              }
            }
          }
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
          uVar16 = uVar16 + 4;
        } while ((int)uVar13 < *(int *)(param_1 + 0x1f8));
      }
      *(undefined1 *)(param_1 + 0x200) = 0;
    }
    uVar13 = *param_2;
    if (param_2[4] == 0) {
      uVar14 = uVar13 / 3;
    }
    lVar12 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(&DAT_143f59b90 + (longlong)(int)param_2[4] * 4);
    if (uVar13 == 0) {
      uVar13 = param_2[2];
      puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 4;
      if (*(undefined8 **)(lVar12 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar12 + 0x30,0x28);
        puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 4;
      }
      *(undefined8 **)(lVar12 + 0x30) = puVar7;
      *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
      **(undefined8 **)(lVar12 + 8) = puVar10;
      *(undefined8 **)(lVar12 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      ppuVar8 = &PTR_LAB_143f59410;
      *(undefined4 *)(puVar10 + 2) = uVar1;
      *(uint *)((longlong)puVar10 + 0x14) = uVar13;
      *(uint *)(puVar10 + 3) = uVar14;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = 1;
    }
    else {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x30);
      if (lVar4 == 0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x8d8,
                   L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
      }
      puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 7;
      if (*(undefined8 **)(lVar12 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(lVar12 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 7;
      }
      *(undefined8 **)(lVar12 + 0x30) = puVar7;
      *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
      **(undefined8 **)(lVar12 + 8) = puVar10;
      *(undefined8 **)(lVar12 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      ppuVar8 = &PTR_LAB_143f489d0;
      *(uint *)((longlong)puVar10 + 0x24) = uVar13 * 3;
      puVar10[2] = lVar4;
      *(undefined4 *)(puVar10 + 3) = uVar1;
      *(uint *)((longlong)puVar10 + 0x1c) = uVar3;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(uint *)(puVar10 + 5) = uVar2;
      *(uint *)((longlong)puVar10 + 0x2c) = uVar14;
      *(undefined4 *)(puVar10 + 6) = 1;
    }
    *puVar10 = ppuVar8;
  }
  return;
}



// FUNCTION 14049f110 FUN_14049f110 body=117 status=ok
// SIG undefined FUN_14049f110(void)

void FUN_14049f110(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_14049f2d0();
  cVar1 = FUN_14049d3b0(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
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



// FUNCTION 14049f190 FUN_14049f190 body=117 status=ok
// SIG undefined FUN_14049f190(void)

void FUN_14049f190(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_14049f470();
  cVar1 = FUN_14049d460(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
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



// FUNCTION 14049f210 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14049f2d0 FUN_14049f2d0 body=404 status=ok
// SIG undefined FUN_14049f2d0(void)

void FUN_14049f2d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14049f3a1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_14049f3a1:
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
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                (*param_1 + ((longlong)iStack_1c * 9 + 7) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14049f470 FUN_14049f470 body=400 status=ok
// SIG undefined FUN_14049f470(void)

void FUN_14049f470(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14049f541;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_14049f541:
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
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x40 + 0x30 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14049f600 FUN_14049f600 body=425 status=ok
// SIG undefined FUN_14049f600(void)

void FUN_14049f600(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  FUN_1404a3300();
  lVar1 = *(longlong *)(param_1 + 0x228);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar4 = plVar6 + 1;
    if (*(longlong **)(lVar2 + 0x38) < plVar4) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
      plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar4 = plVar6 + 1;
    }
    *(longlong **)(lVar2 + 0x30) = plVar4;
    *plVar6 = lVar1;
    puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar3;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar5;
    *(undefined8 **)(lVar2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar5 + 2) = 1;
    puVar5[3] = plVar6;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x24) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 2;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x18);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 2;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar5;
  *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f3edf8;
  lVar1 = *(longlong *)(param_1 + 0x30);
  puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 2;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x18);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 2;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar3;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar5;
  *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f594a0;
  return;
}



// FUNCTION 14049f7b0 FUN_14049f7b0 body=244 status=ok
// SIG undefined FUN_14049f7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14049f7b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_178 [32];
  undefined **local_158;
  undefined8 *local_150;
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  puVar1 = (undefined8 *)(param_1 + 8);
  plVar4 = (longlong *)*puVar1;
  for (iVar6 = *(int *)(param_1 + 0x10); iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_158 = &PTR_FUN_143f59638;
  local_150 = puVar1;
  uVar3 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar3);
  lVar5 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_148,param_2);
  uVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4,*(undefined8 *)(lVar5 + 0x108),&local_158);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14049f910 FUN_14049f910 body=28 status=ok
// SIG undefined FUN_14049f910(void)

void FUN_14049f910(longlong param_1)

{
  FUN_141ec3020();
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 0x10);
  return;
}



// FUNCTION 14049f9b0 FUN_14049f9b0 body=2547 status=ok
// SIG undefined FUN_14049f9b0(void)

void FUN_14049f9b0(longlong param_1,longlong param_2,uint param_3,int *param_4,uint param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int *piVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  undefined8 local_res8;
  longlong local_res10;
  uint local_res18;
  longlong local_298;
  longlong local_250 [11];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8 [4];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  
  local_res8 = 0;
  local_250[0] = 0;
  local_250[1] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FScopedGPUStatEvent::Begin(local_250,*(undefined8 *)(param_1 + 0x30),&DAT_146851240,&local_res8);
  if (param_5 != 0) {
    uVar20 = (ulonglong)param_5;
    do {
      piVar10 = *(int **)(param_1 + 0x1a0);
      for (piVar16 = piVar10; piVar16 != piVar10 + (longlong)*(int *)(param_1 + 0x1a8) * 8;
          piVar16 = piVar16 + 8) {
        if (*piVar16 == *param_4) {
          iVar15 = (int)((longlong)piVar16 - (longlong)piVar10 >> 5);
          goto LAB_14049fa66;
        }
      }
      iVar15 = -1;
LAB_14049fa66:
      piVar16 = param_4 + 2;
      param_4 = param_4 + 6;
      *(undefined8 *)(piVar10 + (longlong)iVar15 * 8 + 4) = *(undefined8 *)piVar16;
      piVar10[(longlong)iVar15 * 8 + 6] = 0;
      *(undefined1 *)(param_1 + 0x1d0) = 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  param_5 = 0;
  if (param_3 != 0) {
    local_298 = 0;
    do {
      uVar19 = 0;
      uVar20 = uVar19;
      uVar22 = uVar19;
      if (0 < *(int *)(param_1 + 0x1e0)) {
        do {
          uVar18 = (int)uVar22 + 1;
          *(undefined4 *)(uVar20 + *(longlong *)(param_1 + 0x1d8)) = 0xffffffff;
          uVar20 = uVar20 + 4;
          uVar22 = (ulonglong)uVar18;
        } while ((int)uVar18 < *(int *)(param_1 + 0x1e0));
      }
      FUN_1404a2b40(param_1);
      uVar20 = uVar19;
      uVar22 = uVar19;
      if (0 < *(int *)(param_1 + 0x1f8)) {
        do {
          uVar18 = (int)uVar22 + 1;
          *(undefined4 *)(uVar20 + *(longlong *)(param_1 + 0x1f0)) = 0xffffffff;
          uVar20 = uVar20 + 4;
          uVar22 = (ulonglong)uVar18;
        } while ((int)uVar18 < *(int *)(param_1 + 0x1f8));
      }
      local_1e8 = *(undefined8 *)(param_2 + 0x10 + local_298 * 0x18);
      plVar1 = (longlong *)(param_2 + local_298 * 0x18);
      local_1f8 = (undefined4)*plVar1;
      uStack_1f4 = *(undefined4 *)((longlong)plVar1 + 4);
      lVar12 = *plVar1;
      uStack_1f0 = (undefined4)plVar1[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar1 + 0xc);
      lVar13 = plVar1[1];
      local_res8 = CONCAT44(local_res8._4_4_,(int)local_1e8);
      if ((int)local_1e8 != 0) {
        do {
          uVar18 = 0;
          uVar20 = *(ulonglong *)(lVar12 + uVar19 * 8);
          uVar22 = uVar20 >> 0x20;
          switch((int)uVar20) {
          case 0:
            FUN_1404a3b80(param_1);
            break;
          case 1:
            uVar8 = *(uint *)(uVar22 + 4 + lVar13);
            puVar21 = (undefined4 *)(lVar13 + 8 + uVar22);
            if (uVar8 == 0) goto LAB_14049fca4;
            do {
              iVar15 = *(int *)(uVar22 + lVar13) + uVar18;
              uVar18 = uVar18 + 1;
              *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar15 * 4) = *puVar21;
              puVar21 = puVar21 + 1;
            } while (uVar18 < uVar8);
            *(undefined1 *)(param_1 + 0x1d0) = 1;
            break;
          case 2:
            uVar8 = *(uint *)(uVar22 + 4 + lVar13);
            puVar21 = (undefined4 *)(lVar13 + 8 + uVar22);
            if (uVar8 != 0) {
              do {
                iVar15 = *(int *)(uVar22 + lVar13) + uVar18;
                uVar18 = uVar18 + 1;
                *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iVar15 * 4) = *puVar21;
                puVar21 = puVar21 + 1;
              } while (uVar18 < uVar8);
            }
LAB_14049fca4:
            *(undefined1 *)(param_1 + 0x1d0) = 1;
            break;
          case 3:
            piVar10 = *(int **)(param_1 + 0x1a0);
            for (piVar16 = piVar10; piVar16 != piVar10 + (longlong)*(int *)(param_1 + 0x1a8) * 8;
                piVar16 = piVar16 + 8) {
              if (*piVar16 == *(int *)(uVar22 + lVar13)) {
                iVar15 = (int)((longlong)piVar16 - (longlong)piVar10 >> 5);
                goto LAB_14049fce3;
              }
            }
            iVar15 = -1;
LAB_14049fce3:
            piVar10[(longlong)iVar15 * 8 + 6] = *(int *)(uVar22 + 4 + lVar13);
            *(undefined1 *)(param_1 + 0x1d0) = 1;
            break;
          case 4:
            piVar10 = *(int **)(param_1 + 0x120);
            for (piVar16 = piVar10; piVar16 != piVar10 + (longlong)*(int *)(param_1 + 0x128) * 4;
                piVar16 = piVar16 + 4) {
              if (*piVar16 == *(int *)(uVar22 + lVar13)) {
                iVar15 = (int)((longlong)piVar16 - (longlong)piVar10 >> 4);
                if (iVar15 != -1) {
                  *(undefined8 *)(param_1 + 600) =
                       *(undefined8 *)(piVar10 + (longlong)iVar15 * 4 + 2);
                }
                break;
              }
            }
            break;
          case 5:
            piVar10 = *(int **)(param_1 + 0x130);
            for (piVar16 = piVar10; piVar16 != piVar10 + (longlong)*(int *)(param_1 + 0x138) * 4;
                piVar16 = piVar16 + 4) {
              if (*piVar16 == *(int *)(uVar22 + lVar13)) {
                iVar15 = (int)((longlong)piVar16 - (longlong)piVar10 >> 4);
                if (iVar15 != -1) {
                  *(undefined8 *)(param_1 + 0x220) =
                       *(undefined8 *)(piVar10 + (longlong)iVar15 * 4 + 2);
                }
                break;
              }
            }
            break;
          case 6:
            FUN_14049ed70(param_1);
            break;
          case 7:
            plVar1 = *(longlong **)(uVar22 + 200 + lVar13);
            if (plVar1 != (longlong *)0x0) {
              puVar21 = (undefined4 *)(uVar22 + 0x84 + lVar13);
              local_168 = *puVar21;
              local_158 = puVar21[1];
              local_148 = puVar21[2];
              local_138 = puVar21[3];
              local_1b8[0] = *(undefined4 *)(uVar22 + 0x14 + lVar13);
              auVar6 = *(undefined1 (*) [16])(uVar22 + 0xa4 + lVar13);
              uStack_160 = auVar6._0_4_;
              uStack_150 = auVar6._4_4_;
              uStack_140 = auVar6._8_4_;
              uStack_130 = auVar6._12_4_;
              puVar21 = (undefined4 *)(uVar22 + 0xb4 + lVar13);
              uStack_15c = *puVar21;
              uStack_14c = puVar21[1];
              uStack_13c = puVar21[2];
              uStack_12c = puVar21[3];
              puVar14 = (undefined8 *)(uVar22 + 0x4c + lVar13);
              local_1a8 = *puVar14;
              uStack_1a0 = puVar14[1];
              puVar14 = (undefined8 *)(uVar22 + 0x5c + lVar13);
              local_198 = *puVar14;
              uStack_190 = puVar14[1];
              local_188 = (int)*(float *)(uVar22 + 0x6c + lVar13);
              local_184 = (int)*(float *)(uVar22 + 0x70 + lVar13);
              local_178 = (int)*(float *)(uVar22 + 0x7c + lVar13);
              local_180 = (int)*(float *)(uVar22 + 0x74 + lVar13);
              local_128 = *(undefined4 *)(param_1 + 0x100);
              local_17c = (int)*(float *)(uVar22 + 0x78 + lVar13);
              local_174 = (int)*(float *)(uVar22 + 0x80 + lVar13);
              puVar21 = (undefined4 *)(uVar22 + 0x94 + lVar13);
              uStack_164 = *puVar21;
              uStack_154 = puVar21[1];
              uStack_144 = puVar21[2];
              uStack_134 = puVar21[3];
              local_120 = *(undefined8 *)(uVar22 + 0xd0 + lVar13);
              (**(code **)(*plVar1 + 8))
                        (plVar1,*(undefined8 *)(param_1 + 0x30),param_1 + 0x48,local_1b8);
              *(undefined8 *)(param_1 + 0x218) = 0;
              *(undefined8 *)(param_1 + 0x220) = 0;
              local_1d0 = CONCAT31(local_1d0._1_3_,1);
              uStack_1cc = 0;
              uStack_1c8 = 0;
              uStack_1c4 = 0x46800000;
              uStack_1c0 = 0x46800000;
              local_f8 = 0;
              uStack_f0 = (ulonglong)local_1d0;
              uStack_e0 = 0x46800000;
              *(undefined8 *)(param_1 + 0x228) = 0;
              *(undefined8 *)(param_1 + 0x230) = 0;
              *(undefined4 *)(param_1 + 0x238) = 0;
              *(undefined4 *)(param_1 + 0x23c) = 0;
              *(uint *)(param_1 + 0x240) = local_1d0;
              *(undefined4 *)(param_1 + 0x244) = 0;
              uStack_e8 = 0x4680000000000000;
              *(undefined4 *)(param_1 + 0x248) = 0;
              *(undefined4 *)(param_1 + 0x24c) = 0x46800000;
              *(undefined4 *)(param_1 + 0x250) = 0x46800000;
              *(undefined4 *)(param_1 + 0x254) = uStack_1bc;
            }
            break;
          case 8:
            FUN_1404a0ac0(param_1,&local_1e0,*(undefined4 *)(uVar22 + lVar13),
                          *(undefined4 *)(uVar22 + 4 + lVar13));
            FUN_1404a4140(param_1,local_1e0,local_1d8);
            break;
          case 10:
            FUN_1404a4a30(param_1);
            break;
          case 0xb:
            fVar2 = *(float *)(uVar22 + 4 + lVar13);
            lVar11 = *(longlong *)(param_1 + 0x30);
            fVar3 = *(float *)(uVar22 + 0xc + lVar13);
            fVar4 = *(float *)(uVar22 + lVar13);
            puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            fVar5 = *(float *)(uVar22 + 8 + lVar13);
            puVar14 = puVar17 + 5;
            if (*(undefined8 **)(lVar11 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
              puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar17 + 5;
            }
            *(undefined8 **)(lVar11 + 0x30) = puVar14;
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            **(undefined8 **)(lVar11 + 8) = puVar17;
            *(undefined8 **)(lVar11 + 8) = puVar17 + 1;
            puVar17[1] = 0;
            *puVar17 = &PTR_LAB_143f59420;
            *(int *)(puVar17 + 2) = (int)(longlong)fVar4;
            *(int *)((longlong)puVar17 + 0x1c) = (int)(longlong)(fVar4 + fVar5);
            *(int *)((longlong)puVar17 + 0x14) = (int)(longlong)fVar2;
            *(undefined4 *)(puVar17 + 3) = 0;
            *(int *)(puVar17 + 4) = (int)(longlong)(fVar2 + fVar3);
            *(undefined4 *)((longlong)puVar17 + 0x24) = 0x3f800000;
            break;
          case 0xc:
            FUN_1404a30a0(param_1);
            break;
          case 0xd:
            uVar8 = *(uint *)(uVar22 + 4 + lVar13);
            puVar21 = (undefined4 *)(lVar13 + 8 + uVar22);
            if (uVar8 != 0) {
              do {
                uVar9 = *puVar21;
                puVar21 = puVar21 + 1;
                iVar15 = *(int *)(uVar22 + lVar13) + uVar18;
                uVar18 = uVar18 + 1;
                *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar15 * 4) = uVar9;
              } while (uVar18 < uVar8);
            }
            *(undefined1 *)(param_1 + 0x200) = 1;
            break;
          case 0xe:
            uVar8 = *(uint *)(uVar22 + 4 + lVar13);
            puVar21 = (undefined4 *)(lVar13 + 8 + uVar22);
            if (uVar8 != 0) {
              do {
                uVar9 = *puVar21;
                puVar21 = puVar21 + 1;
                iVar15 = *(int *)(uVar22 + lVar13) + uVar18;
                uVar18 = uVar18 + 1;
                *(undefined4 *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar15 * 4) = uVar9;
              } while (uVar18 < uVar8);
            }
            *(undefined1 *)(param_1 + 0x1e8) = 1;
            break;
          case 0xf:
            bVar7 = *(byte *)(uVar22 + lVar13);
            if (*(uint *)(param_1 + 0x100) != (uint)bVar7) {
              lVar11 = *(longlong *)(param_1 + 0x30);
              puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar17 + 3;
              if (*(undefined8 **)(lVar11 + 0x38) < puVar14) {
                FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
                puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar14 = puVar17 + 3;
              }
              *(undefined8 **)(lVar11 + 0x30) = puVar14;
              *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
              **(undefined8 **)(lVar11 + 8) = puVar17;
              *(undefined8 **)(lVar11 + 8) = puVar17 + 1;
              puVar17[1] = 0;
              *puVar17 = &PTR_LAB_143f489c0;
              *(uint *)(puVar17 + 2) = (uint)bVar7;
              *(uint *)(param_1 + 0x100) = (uint)bVar7;
            }
            break;
          case 0x16:
            FUN_1404a1f60(param_1);
            break;
          case 0x17:
            lVar11 = *(longlong *)(param_1 + 0x30);
            puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar14 = puVar17 + 2;
            if (*(undefined8 **)(lVar11 + 0x38) < puVar14) {
              FMemStackBase::AllocateNewChunk(lVar11 + 0x30);
              puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar14 = puVar17 + 2;
            }
            *(undefined8 **)(lVar11 + 0x30) = puVar14;
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            **(undefined8 **)(lVar11 + 8) = puVar17;
            *(undefined8 **)(lVar11 + 8) = puVar17 + 1;
            puVar17[1] = 0;
            *puVar17 = &PTR_LAB_143f3edf8;
          }
          uVar18 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
          param_3 = local_res18;
        } while (uVar18 < (uint)local_res8);
      }
      local_298 = local_298 + 1;
      param_5 = param_5 + 1;
      param_2 = local_res10;
    } while (param_5 < param_3);
  }
  if (local_250[0] != 0) {
    FScopedGPUStatEvent::End(local_250);
  }
  return;
}



// FUNCTION 1404a0410 ExecuteTask body=237 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FInitStaticResourceRenderThreadTask>::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  (*(code *)param_1[2])();
  (**(code **)(**(longlong **)param_1[3] + 0x10))();
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_143f59c00;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1404a0500 FUN_1404a0500 body=701 status=ok
// SIG undefined FUN_1404a0500(void)

void FUN_1404a0500(undefined8 param_1,undefined4 *param_2)

{
  *(undefined1 *)((longlong)param_2 + 0xf) = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 5,0,0x10c);
  *(undefined8 *)(param_2 + 0x4a) = 0;
  *(undefined2 *)((longlong)param_2 + 0xd) = 0;
  *param_2 = 0x1000101;
  *(undefined2 *)((longlong)param_2 + 7) = 0x100;
  *(undefined2 *)(param_2 + 1) = 0x100;
  *(undefined1 *)((longlong)param_2 + 6) = 1;
  *(undefined4 *)((longlong)param_2 + 9) = 0x1000000;
  param_2[4] = 1;
  param_2[0x49] = 1;
  param_2[0x48] = 1;
  param_2[0x4a] = DAT_1464c9c64;
  param_2[0x4b] = DAT_1464c9c64;
  param_2[5] = 0;
  param_2[0x14] = 0;
  param_2[6] = 0x21;
  param_2[7] = 0x21;
  param_2[10] = 0x21;
  *(undefined8 *)(param_2 + 0xb) = 0x21;
  param_2[8] = 0x21;
  param_2[9] = 0x21;
  param_2[0x38] = 0x33;
  param_2[0x39] = 0x33;
  param_2[0x3e] = 0x21;
  param_2[0xe] = 9;
  param_2[0xf] = 0x22;
  param_2[0x10] = 0x22;
  param_2[0x11] = 9;
  *(undefined8 *)(param_2 + 0x12) = 0xd;
  param_2[0x15] = 0x21;
  param_2[0x3a] = 0xd;
  param_2[0x3b] = 0xd;
  param_2[0x22] = 0x1d;
  param_2[0x23] = 0x1d;
  param_2[0x24] = 0x1d;
  param_2[0x25] = 0x1d;
  param_2[0x16] = 0x21;
  param_2[0x17] = 0x21;
  param_2[0x18] = 0x21;
  param_2[0x19] = 0x21;
  param_2[0x1a] = 0x21;
  param_2[0x1b] = 0x21;
  param_2[0x1c] = 0x21;
  param_2[0x1d] = 0x21;
  param_2[0x1e] = 0x21;
  param_2[0x1f] = 0x21;
  param_2[0x20] = 0x21;
  param_2[0x21] = 0x21;
  param_2[0x26] = 0x21;
  param_2[0x27] = 0x22;
  param_2[0x28] = 0x23;
  param_2[0x29] = 0x24;
  param_2[0x2a] = 0x24;
  param_2[0x2b] = 0x24;
  param_2[0x2c] = 0x24;
  param_2[0x2d] = 0x24;
  param_2[0x2e] = 0x24;
  param_2[0x2f] = 0x24;
  param_2[0x30] = 0x24;
  param_2[0x31] = 0x24;
  param_2[0x32] = 0x24;
  param_2[0x33] = 0x24;
  param_2[0x34] = 0x24;
  param_2[0x35] = 0x24;
  param_2[0x36] = 0x24;
  param_2[0x37] = 0x24;
  param_2[0xd] = 0x21;
  param_2[0x3f] = 0x3a;
  param_2[0x3c] = 0x21;
  param_2[0x3d] = 0x21;
  param_2[0x40] = 0x3b;
  param_2[0x41] = 0x21;
  param_2[0x42] = 0x21;
  param_2[0x43] = 0x21;
  param_2[0x44] = 0x1d;
  param_2[0x45] = 0x21;
  param_2[0x46] = 0x21;
  param_2[0x47] = 0x1d;
  return;
}



// FUNCTION 1404a07c0 FUN_1404a07c0 body=305 status=ok
// SIG undefined FUN_1404a07c0(void)

void FUN_1404a07c0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  
  uVar4 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar4) {
    iVar10 = *(int *)(param_1 + 0x48);
    uVar7 = (ulonglong)uVar4;
    piVar9 = *(int **)(param_1 + 0x38);
    do {
      iVar5 = *piVar9;
      iVar6 = 0;
      if (iVar5 == 1) {
LAB_1404a081b:
        iVar6 = 4;
      }
      else if (iVar5 == 2) {
        iVar6 = 8;
      }
      else if (iVar5 == 3) {
        iVar6 = 0xc;
      }
      else if (iVar5 == 4) {
        iVar6 = 0x10;
      }
      else if (iVar5 == 6) goto LAB_1404a081b;
      iVar10 = iVar10 + iVar6;
      piVar9 = piVar9 + 2;
      *(int *)(param_1 + 0x48) = iVar10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  iVar10 = 0;
  if (0 < (int)uVar4) {
    do {
      iVar5 = *(int *)(param_2 + 0x100);
      lVar8 = (longlong)iVar5;
      uVar3 = *(undefined2 *)(param_1 + 0x48);
      uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 4 + (longlong)iVar10 * 8);
      uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar10 * 8);
      *(int *)(param_2 + 0x100) = iVar5 + 1;
      if (*(int *)(param_2 + 0x104) < iVar5 + 1) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar5);
      }
      *(undefined1 *)(param_2 + lVar8 * 8) = 0;
      *(undefined1 *)(param_2 + 1 + lVar8 * 8) = uVar1;
      *(undefined1 *)(param_2 + 2 + lVar8 * 8) = uVar2;
      *(char *)(param_2 + 3 + lVar8 * 8) = (char)iVar10;
      iVar10 = iVar10 + 1;
      *(undefined2 *)(param_2 + 4 + lVar8 * 8) = uVar3;
      *(undefined2 *)(param_2 + 6 + lVar8 * 8) = 0;
    } while (iVar10 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1404a0900 FUN_1404a0900 body=202 status=ok
// SIG undefined FUN_1404a0900(void)

int * FUN_1404a0900(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)((((uint)*(byte *)(param_3 + 0x30) << 8 | *(uint *)(param_3 + 0xc)) << 8 |
                           *(uint *)(param_3 + 0x14)) << 8 | *(uint *)(param_3 + 0x18)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        cVar3 = FUN_14049a9a0(lVar1,param_3);
        if (cVar3 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1404a09d0 FUN_1404a09d0 body=237 status=ok
// SIG undefined FUN_1404a09d0(void)

int * FUN_1404a09d0(longlong *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = *(int *)(param_3 + 0x2c);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((*(int *)(param_3 + 0x18) << 8 | *(uint *)(param_3 + 0x10)) << 8 |
                           *(uint *)(param_3 + 0x14)) * 0x40b7 +
                           ((*(int *)(param_3 + 0xc) << 8 | *(uint *)(param_3 + 4)) << 8 |
                           *(uint *)(param_3 + 8)) * 0x75 + (uint)*param_3 + (uint)*param_3 * 4 +
                          iVar1 * 0x4b1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar5 * 0x40 + lVar2;
        cVar3 = FUN_14049a8d0(lVar6,param_3);
        if ((cVar3 != '\0') && (*(int *)(lVar6 + 0x2c) == iVar1)) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar6 + 0x38);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1404a0ac0 FUN_1404a0ac0 body=542 status=ok
// SIG undefined FUN_1404a0ac0(void)

longlong * FUN_1404a0ac0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_res10;
  
  piVar1 = *(int **)(param_1 + 0x150);
  for (piVar9 = piVar1; piVar9 != piVar1 + (longlong)*(int *)(param_1 + 0x158) * 0x14;
      piVar9 = piVar9 + 0x14) {
    if (*piVar9 == param_3) {
      iVar3 = (int)(((longlong)piVar9 - (longlong)piVar1) / 0x50);
      goto LAB_1404a0b13;
    }
  }
  iVar3 = -1;
LAB_1404a0b13:
  lVar8 = 0;
  if (iVar3 == -1) {
    piVar1 = *(int **)(param_1 + 0x160);
    for (piVar9 = piVar1; piVar9 != piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4;
        piVar9 = piVar9 + 4) {
      if (*piVar9 == param_3) {
        iVar3 = (int)((longlong)piVar9 - (longlong)piVar1 >> 4);
        if (iVar3 != -1) {
          lVar8 = *(longlong *)(*(longlong *)(piVar1 + (longlong)iVar3 * 4 + 2) + 0x48);
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
          local_res8 = lVar8;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
        }
        break;
      }
    }
    piVar1 = *(int **)(param_1 + 0x140);
    for (piVar9 = piVar1; lVar10 = 0, piVar9 != piVar1 + (longlong)*(int *)(param_1 + 0x148) * 4;
        piVar9 = piVar9 + 4) {
      if (*piVar9 == param_4) {
        iVar3 = (int)((longlong)piVar9 - (longlong)piVar1 >> 4);
        lVar10 = 0;
        if (iVar3 != -1) {
          lVar10 = *(longlong *)(piVar1 + (longlong)iVar3 * 4 + 2);
        }
        break;
      }
    }
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x40 + (longlong)iVar3 * 0x50);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x48 + (longlong)iVar3 * 0x50);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar5 = plVar7 + 1;
  local_res10 = lVar8;
  if (*(longlong **)(lVar2 + 0x38) < plVar5) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
    plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar5 = plVar7 + 1;
  }
  *(longlong **)(lVar2 + 0x30) = plVar5;
  *plVar7 = local_res10;
  puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar4;
  puVar4 = *(undefined8 **)(lVar2 + 8);
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  *param_2 = lVar8;
  param_2[1] = lVar10;
  *puVar4 = puVar6;
  *(undefined8 **)(lVar2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f59470;
  puVar6[3] = plVar7;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)(puVar6 + 4) = 1;
  *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
  return param_2;
}



// FUNCTION 1404a0ce0 FUN_1404a0ce0 body=320 status=ok
// SIG undefined FUN_1404a0ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404a0ce0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146852b40 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1404a0f60;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146852b40 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146852b40 = 0;
        return _DAT_00000030;
      }
      DAT_146852b40 =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146852b40 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146852b40 != 0) {
      lVar7 = DAT_146852b40;
    }
    DAT_146852b40 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146852b40 + 0x30);
}



// FUNCTION 1404a0e20 FUN_1404a0e20 body=320 status=ok
// SIG undefined FUN_1404a0e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404a0e20(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146852b48 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_1404a0f70;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146852b48 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146852b48 = 0;
        return _DAT_00000030;
      }
      DAT_146852b48 =
           TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146852b48 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146852b48 != 0) {
      lVar7 = DAT_146852b48;
    }
    DAT_146852b48 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146852b48 + 0x30);
}



// FUNCTION 1404a0f80 FUN_1404a0f80 body=369 status=ok
// SIG undefined FUN_1404a0f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1404a0f80(undefined4 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar4 = (longlong *)0x0;
  plVar2 = plVar4;
  switch(param_1) {
  case 0:
    local_18 = &DAT_146851cd0;
    break;
  default:
    goto switchD_1404a0fd1_caseD_1;
  case 9:
    local_18 = &DAT_146852210;
    break;
  case 0xd:
    local_18 = &DAT_1468524b0;
    break;
  case 0x1d:
    local_18 = &DAT_146851e20;
    break;
  case 0x21:
  case 0x3c:
    local_18 = &DAT_146851f70;
    break;
  case 0x22:
    local_18 = &DAT_146852360;
    break;
  case 0x23:
    local_18 = &DAT_1468528a0;
    break;
  case 0x24:
    local_18 = &DAT_146852600;
    break;
  case 0x33:
    local_18 = &DAT_1468520c0;
    break;
  case 0x3a:
    local_18 = &DAT_146852750;
    break;
  case 0x3b:
    local_10 = 0;
    local_18 = &DAT_1468529f0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar1 + 0x38),local_res8,&local_18);
    if (local_res8[0] != -1) {
      plVar2 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar3 = plVar2 + 2;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    plVar2 = (longlong *)*plVar3;
    goto switchD_1404a0fd1_caseD_1;
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar1 + 0x38),local_res8,&local_18);
  plVar2 = _DAT_00000000;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38);
    plVar2 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar2 = plVar4;
    }
    plVar2 = (longlong *)*plVar2;
  }
switchD_1404a0fd1_caseD_1:
  return plVar2;
}



// FUNCTION 1404a1170 FUN_1404a1170 body=303 status=ok
// SIG undefined FUN_1404a1170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1404a1170(undefined4 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  plVar4 = (longlong *)0x0;
  plVar2 = plVar4;
  switch(param_1) {
  case 0:
  case 0x3b:
    local_18 = &DAT_1468514f0;
    break;
  default:
    goto switchD_1404a11c1_caseD_1;
  case 9:
  case 0x21:
  case 0x22:
  case 0x3a:
  case 0x3c:
    local_18 = &DAT_146851790;
    break;
  case 0xd:
  case 0x33:
    local_18 = &DAT_1468518e0;
    break;
  case 0x1d:
    local_18 = &DAT_146851640;
    break;
  case 0x23:
    local_10 = 0;
    local_18 = &DAT_146851b80;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar1 + 0x38),local_res8,&local_18);
    if (local_res8[0] != -1) {
      plVar2 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar3 = plVar2 + 2;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    return (longlong *)*plVar3;
  case 0x24:
    local_18 = &DAT_146851a30;
  }
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar1 + 0x38),local_res8,&local_18);
  plVar2 = _DAT_00000000;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38);
    plVar2 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar2 = plVar4;
    }
    plVar2 = (longlong *)*plVar2;
  }
switchD_1404a11c1_caseD_1:
  return plVar2;
}



// FUNCTION 1404a1300 GetCallbackSizeBytes body=6 status=ok
// SIG undefined GetCallbackSizeBytes(void)

undefined8 CCallbackImpl<24>::GetCallbackSizeBytes(void)

{
  return 0x18;
}



// FUNCTION 1404a1310 FUN_1404a1310 body=53 status=ok
// SIG undefined FUN_1404a1310(void)

undefined8 FUN_1404a1310(longlong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*param_1 + 0x160);
  piVar2 = piVar1 + (longlong)*(int *)(*param_1 + 0x168) * 4;
  while( true ) {
    if (piVar1 == piVar2) {
      return 0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 4;
  }
  return *(undefined8 *)(piVar1 + 2);
}



// FUNCTION 1404a1350 GetTexture2DRHI body=20 status=ok
// SIG undefined GetTexture2DRHI(void)

longlong * FTexture2DDynamicResource::GetTexture2DRHI(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1404a1370 FUN_1404a1370 body=356 status=ok
// SIG undefined FUN_1404a1370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a1370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_80;
  undefined8 *local_78;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_34 = 0;
  local_78 = &local_58;
  lVar7 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = (*(char *)(param_1 + 0x40) != '\0') + 1;
  local_48 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_88 = *(undefined4 *)(param_1 + 0x44);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x4f0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x48));
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_68) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = local_68[0];
    local_68[0] = 0;
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
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 1404a14e0 FUN_1404a14e0 body=561 status=ok
// SIG undefined FUN_1404a14e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a14e0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c0;
  uint local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined4 local_98;
  undefined1 local_88 [16];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  iVar9 = (*(uint *)(param_1 + 0x20) & 8) << 5;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_68 = 1;
  local_54 = 0;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  if (((((0x1a < DAT_146ab62cc) || ((0x700a74aU >> (DAT_146ab62cc & 0x1f) & 1) == 0)) ||
       (iVar1 = *(int *)(param_1 + 0x28), 0x30 < iVar1)) ||
      (*(int *)(&DAT_1461faf24 + (longlong)iVar1 * 0x10) *
       *(int *)(&DAT_1461faf28 + (longlong)iVar1 * 0x10) < 2)) && (param_2 != 0)) {
    puVar7 = (undefined8 *)operator_new(0x18);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = param_2;
      *puVar7 = &PTR_FUN_143f59b98;
      *(undefined4 *)(puVar7 + 2) = param_3;
      local_78 = puVar7;
    }
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    (**(code **)(*DAT_146ab6358 + 0x380))();
  }
  plVar4 = DAT_146ab6358;
  uVar3 = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
  }
  uVar8 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x18);
  }
  if (*(char *)(param_1 + 0x25) == '\0') {
    lVar2 = *DAT_146ab6358;
    uVar5 = FUN_1404a5460(*(undefined4 *)(param_1 + 0x28));
    local_a0 = &local_78;
    local_a8 = CONCAT44(local_a8._4_4_,iVar9) | 8;
    local_b0 = (undefined8 **)CONCAT44(local_b0._4_4_,uVar3);
    local_c0 = CONCAT31(local_c0._1_3_,uVar5);
    local_c8 = *(undefined4 *)(param_1 + 0x14);
    local_b8 = uVar8;
    (**(code **)(lVar2 + 0x5e0))(plVar4,local_88,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x10));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x50,local_88);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  }
  else {
    uVar6 = FUN_1404a5460(*(undefined4 *)(param_1 + 0x28));
    local_b0 = &local_78;
    local_b8 = local_b8 & 0xffffff00;
    local_c0 = 0x2000001;
    local_c8 = iVar9;
    local_a8 = param_1 + 0x48;
    local_a0 = (undefined8 **)(param_1 + 0x50);
    local_98 = uVar3;
    FUN_1404a2100(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),uVar6,uVar8);
  }
  return;
}



// FUNCTION 1404a1720 FUN_1404a1720 body=183 status=ok
// SIG undefined FUN_1404a1720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a1720(longlong param_1)

{
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_48 = 1;
  local_30 = 0;
  local_70 = &local_58;
  local_28 = 0;
  local_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = (*(char *)(param_1 + 0x38) != '\0') + 1;
  local_34 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  (**(code **)(*DAT_146ab6358 + 0x490))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x3c));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 1404a17e0 FUN_1404a17e0 body=133 status=ok
// SIG undefined FUN_1404a17e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404a17e0(longlong *param_1)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [256];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,local_128);
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 1404a1870 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1404a18a0 InitRHI body=107 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_1c = 0x7f7fffff;
  local_28 = 0x1010100;
  local_24 = 0;
  local_18 = 1;
  local_10 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 1404a1910 FUN_1404a1910 body=569 status=ok
// SIG undefined FUN_1404a1910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404a1910(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  IRenderingLibrary *pIVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 *_Dst;
  int iVar8;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  int local_100;
  undefined4 local_fc;
  RenderingLibraryParams local_f8;
  undefined2 local_f7;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  puVar2 = (undefined8 *)operator_new(8);
  _Dst = (undefined8 *)0x0;
  puVar3 = _Dst;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_LAB_143f59a40;
    puVar3 = puVar2;
  }
  plVar4 = *(longlong **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,1);
  }
  puVar2 = (undefined8 *)operator_new(8);
  puVar3 = _Dst;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f59a28;
    puVar3 = puVar2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar3 = _Dst;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f59618;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar3 = puVar2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar4 = (longlong *)UOculusHMDRuntimeSettings::GetPrivateStaticClass();
  lVar6 = plVar4[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar6 = plVar4[0x1f];
  }
  local_d0 = *(undefined8 *)(param_1 + 0x10);
  local_f4 = 0x40200000;
  local_f7 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = (undefined8 *)0x0;
  local_d8 = (uint)*(byte *)(lVar6 + 0x28);
  local_c8 = *(undefined8 *)(param_1 + 0x28);
  local_e0 = *(undefined8 *)(param_1 + 8);
  local_f8 = (RenderingLibraryParams)0x1;
  local_108 = (undefined8 *)0x0;
  local_fc = 0;
  if (1 < *(int *)(lVar6 + 0x38)) {
    if (*(int *)(lVar6 + 0x38) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(lVar6 + 0x30);
    }
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_b8,puVar7);
    iVar1 = local_28 + 1;
    if (iVar1 < 1) {
      iVar8 = 0;
      if ((iVar1 < 0) && (iVar1 != 0)) {
        local_100 = iVar1;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_108);
        _Dst = local_108;
        iVar8 = local_100;
      }
    }
    else {
      local_100 = iVar1;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_108,0);
      _Dst = local_108;
      iVar8 = local_100;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,local_30,(longlong)local_28);
    *(undefined1 *)((longlong)(iVar8 + -1) + (longlong)_Dst) = 0;
    local_c0 = _Dst;
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  pIVar5 = renoir::IRenderingLibrary::Initialize(&local_f8);
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(IRenderingLibrary **)(param_1 + 0x20) = pIVar5;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if (_Dst != (undefined8 *)0x0) {
    FMemory::Free(_Dst);
  }
  return;
}



// FUNCTION 1404a1b50 FUN_1404a1b50 body=75 status=ok
// SIG undefined FUN_1404a1b50(void)

undefined8 * FUN_1404a1b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_143f59238;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404a1ba0 FUN_1404a1ba0 body=141 status=ok
// SIG undefined FUN_1404a1ba0(void)

undefined8 FUN_1404a1ba0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar1 = *(int **)(param_1 + 0x130);
  piVar4 = piVar1;
  while( true ) {
    if (piVar4 == piVar1 + (longlong)*(int *)(param_1 + 0x138) * 4) {
      return 0;
    }
    if (*piVar4 == param_2) break;
    piVar4 = piVar4 + 4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar1 >> 4);
  if (iVar3 == -1) {
    return 0;
  }
  lVar2 = *(longlong *)(piVar1 + (longlong)iVar3 * 4 + 2);
  uVar5 = (**(code **)(*DAT_146ab6358 + 0x4f8))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x30),0,
                     *(undefined4 *)(lVar2 + 0x44),1);
  *(undefined8 *)(lVar2 + 0x50) = uVar5;
  return uVar5;
}



// FUNCTION 1404a1c30 FUN_1404a1c30 body=141 status=ok
// SIG undefined FUN_1404a1c30(void)

undefined8 FUN_1404a1c30(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar1 = *(int **)(param_1 + 0x120);
  piVar4 = piVar1;
  while( true ) {
    if (piVar4 == piVar1 + (longlong)*(int *)(param_1 + 0x128) * 4) {
      return 0;
    }
    if (*piVar4 == param_2) break;
    piVar4 = piVar4 + 4;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar1 >> 4);
  if (iVar3 == -1) {
    return 0;
  }
  lVar2 = *(longlong *)(piVar1 + (longlong)iVar3 * 4 + 2);
  uVar5 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                    (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x30),0,
                     *(undefined4 *)(lVar2 + 0x3c),1);
  *(undefined8 *)(lVar2 + 0x40) = uVar5;
  return uVar5;
}



// FUNCTION 1404a1ce0 FUN_1404a1ce0 body=249 status=ok
// SIG undefined FUN_1404a1ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1404a1ce0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_e8 [48];
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x10)) {
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    puVar4 = (undefined8 *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(param_1 + 8));
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_b8,puVar6);
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = local_28 + 1;
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x28) = iVar3;
      if (*(int *)(param_1 + 0x2c) < iVar3) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar2);
      }
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_1 + 0x28) = iVar3;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
    }
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),local_30,(longlong)local_28);
    *(undefined1 *)((longlong)*(int *)(param_1 + 0x28) + -1 + *(longlong *)(param_1 + 0x20)) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1404a1de0 FUN_1404a1de0 body=380 status=ok
// SIG undefined FUN_1404a1de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1404a1de0(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  puVar6 = (undefined8 *)0x0;
  local_158 = 0;
  puVar2 = (undefined8 *)operator_new(0x98);
  puVar4 = puVar6;
  puVar7 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_148,param_2);
    psVar1 = *(short **)(lVar3 + 0x108);
    *puVar2 = &PTR_FUN_143f595f8;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 1));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 1),4000);
    puVar2[6] = 0;
    puVar2[7] = 0;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (psVar1[lVar3] != 0);
      iVar5 = (int)lVar3 + 1;
      *(int *)(puVar2 + 7) = iVar5;
      if (0 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2 + 6,0);
      }
      FGenericPlatformString::Memcpy(puVar2[6],psVar1,(longlong)iVar5 * 2);
    }
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
    puVar2[0x11] = 0;
    *(undefined4 *)(puVar2 + 0x12) = 0;
    FUN_14046df90(puVar2);
    puVar4 = (undefined8 *)0x1;
    puVar7 = puVar2;
  }
  if ((puVar4 != (undefined8 *)0x0) && (local_48 != 0)) {
    FMemory::Free();
  }
  lVar3 = FUN_14046df90(puVar7);
  puVar4 = puVar7;
  if ((lVar3 == 0) && (puVar4 = puVar6, puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)(puVar7,1);
  }
  return puVar4;
}



// FUNCTION 1404a1f60 FUN_1404a1f60 body=410 status=ok
// SIG undefined FUN_1404a1f60(void)

void FUN_1404a1f60(longlong param_1,char *param_2)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  short *psVar10;
  longlong lVar11;
  short *psVar12;
  short *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar12 = (short *)0x0;
  local_38 = (short *)0x0;
  iVar8 = 0;
  local_2c = 0;
  lVar11 = -1;
  if ((param_2 != (char *)0x0) && (lVar7 = lVar11, *param_2 != '\0')) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != '\0');
    iVar6 = (int)lVar7 + 1;
    local_30 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar8 = local_30;
    psVar12 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>(local_38,iVar6,param_2,iVar6,0x3f);
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  psVar10 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    psVar10 = psVar12;
  }
  do {
    lVar2 = lVar11 + 1;
    lVar11 = lVar11 + 1;
  } while (psVar10[lVar2] != 0);
  iVar8 = (int)lVar11 * 2;
  lVar11 = (longlong)(iVar8 + 2);
  uVar9 = *(longlong *)(lVar7 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar3 = lVar11 + uVar9;
  if (*(ulonglong *)(lVar7 + 0x38) < uVar3) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,iVar8 + 4);
    uVar9 = *(longlong *)(lVar7 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar3 = lVar11 + uVar9;
  }
  *(ulonglong *)(lVar7 + 0x30) = uVar3;
  lVar11 = uVar9 - (longlong)psVar10;
  do {
    sVar1 = *psVar10;
    *(short *)(lVar11 + (longlong)psVar10) = sVar1;
    psVar10 = psVar10 + 1;
  } while (sVar1 != 0);
  puVar5 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 4;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x28);
    puVar5 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar4;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar5;
  *(undefined8 **)(lVar7 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f3ede8;
  puVar5[2] = uVar9;
  *(undefined4 *)(puVar5 + 3) = 0xffc80aa0;
  if (psVar12 != (short *)0x0) {
    FMemory::Free(psVar12);
  }
  return;
}



// FUNCTION 1404a2100 FUN_1404a2100 body=502 status=ok
// SIG undefined FUN_1404a2100(void)

void FUN_1404a2100(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                  uint param_5,uint param_6,char param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,uint param_11)

{
  undefined8 *puVar1;
  undefined1 local_28 [16];
  
  if (param_11 < 2) {
    if (param_7 == '\0') goto LAB_1404a2262;
  }
  else if ((DAT_146ab62cc < 0x1e) && ((0x313a1900U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
LAB_1404a2262:
    (**(code **)(*DAT_146ab6358 + 0x5e0))
              (DAT_146ab6358,local_28,&DAT_146ab6e78,param_1,param_2,param_3,param_4,param_11,
               param_5 | param_6 | 8,param_8);
    puVar1 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(param_10,local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_9,*puVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_28);
    return;
  }
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_28,&DAT_146ab6e78,param_1,param_2,param_3,param_4,param_11,
             param_5 | param_6,param_8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_9,local_28);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_28);
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_28,&DAT_146ab6e78,param_1,param_2,param_3,param_4,1,
             (param_6 & 4) << 0x18 | param_5 | 10,param_8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_10,local_28);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_28);
  return;
}



// FUNCTION 1404a2300 FUN_1404a2300 body=452 status=ok
// SIG undefined FUN_1404a2300(void)

ulonglong FUN_1404a2300(longlong param_1,int param_2,int *param_3,void *param_4)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  void *_Src;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong _Size;
  ulonglong uVar10;
  uint local_res8 [2];
  longlong local_res10;
  
  piVar2 = *(int **)(param_1 + 0x160);
  piVar6 = piVar2;
  do {
    if (piVar6 == piVar2 + (longlong)*(int *)(param_1 + 0x168) * 4) {
LAB_1404a2335:
      return (ulonglong)piVar6 & 0xffffffffffffff00;
    }
    if (*piVar6 == param_2) {
      piVar6 = (int *)((longlong)piVar6 - (longlong)piVar2 >> 4);
      iVar5 = (int)piVar6;
      if ((((iVar5 != -1) &&
           (lVar3 = *(longlong *)(piVar2 + (longlong)iVar5 * 4 + 2), piVar6 = piVar2, *param_3 == 0)
           ) && (param_3[1] == 0)) &&
         ((piVar6 = (int *)(ulonglong)*(uint *)(lVar3 + 0x10), param_3[2] == *(uint *)(lVar3 + 0x10)
          && (piVar6 = (int *)(ulonglong)*(uint *)(lVar3 + 0x14),
             param_3[3] == *(uint *)(lVar3 + 0x14))))) {
        lVar4 = *(longlong *)(lVar3 + 0x50);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        local_res10 = lVar4;
        _Src = (void *)(**(code **)(*DAT_146ab6358 + 0x298))(DAT_146ab6358,lVar4,0,0,local_res8,0);
        if (_Src == (void *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar7 = (longlong)*(int *)(lVar3 + 0x28);
          uVar10 = 0;
          uVar9 = uVar10;
          _Size = uVar10;
          if (*(int *)(lVar3 + 0x28) < 0x31) {
            uVar1 = *(uint *)(&DAT_1461faf24 + lVar7 * 0x10);
            _Size = ((ulonglong)(*(int *)(lVar3 + 0x10) + -1 + uVar1) / (ulonglong)uVar1) *
                    (longlong)*(int *)(&DAT_1461faf2c + lVar7 * 0x10);
            uVar9 = (ulonglong)(*(int *)(lVar3 + 0x14) + -1 + uVar1) /
                    (ulonglong)*(uint *)(&DAT_1461faf28 + lVar7 * 0x10);
          }
          uVar8 = (ulonglong)local_res8[0];
          if (uVar8 == _Size) {
            _guard_xfg_dispatch_icall_nop(param_4,_Src,uVar9 * _Size);
          }
          else if (uVar9 != 0) {
            while( true ) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(uVar10 * _Size + (longlong)param_4),
                         (void *)((ulonglong)(uint)((int)uVar8 * (int)uVar10) + (longlong)_Src),
                         _Size);
              uVar10 = (ulonglong)((int)uVar10 + 1);
              if (uVar9 <= uVar10) break;
              uVar8 = (ulonglong)local_res8[0];
            }
          }
          (**(code **)(*DAT_146ab6358 + 0x2a0))(DAT_146ab6358,lVar4,0,0);
          uVar9 = 1;
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
        return uVar9;
      }
      goto LAB_1404a2335;
    }
    piVar6 = piVar6 + 4;
  } while( true );
}



// FUNCTION 1404a24d0 FUN_1404a24d0 body=548 status=ok
// SIG undefined FUN_1404a24d0(void)

void FUN_1404a24d0(longlong *param_1)

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
        if (bVar4) goto LAB_1404a260f;
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
LAB_1404a260f:
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
        lVar5 = *param_1 + (longlong)iStack_1c * 0x48;
        uVar8 = ((((uint)*(byte *)(lVar5 + 0x30) << 8 | *(uint *)(lVar5 + 0xc)) << 8 |
                 *(uint *)(lVar5 + 0x14)) << 8 | *(uint *)(lVar5 + 0x18)) & (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x44) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x40) =
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



// FUNCTION 1404a2700 FUN_1404a2700 body=584 status=ok
// SIG undefined FUN_1404a2700(void)

void FUN_1404a2700(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte *pbVar12;
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
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar9;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar6 = (longlong)(int)*plVar2 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar6 * 4) = 0xffffffff;
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
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1404a283f;
        uVar9 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_1404a283f:
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
        pbVar12 = (byte *)((longlong)iStack_1c * 0x40 + *param_1);
        uVar9 = ((*(int *)(pbVar12 + 0x18) << 8 | *(uint *)(pbVar12 + 0x10)) << 8 |
                *(uint *)(pbVar12 + 0x14)) * 0x40b7 +
                ((*(int *)(pbVar12 + 0xc) << 8 | *(uint *)(pbVar12 + 4)) << 8 |
                *(uint *)(pbVar12 + 8)) * 0x75 + (uint)*pbVar12 + (uint)*pbVar12 * 4 +
                *(int *)(pbVar12 + 0x2c) * 0x4b1 & (int)*plVar2 - 1U;
        *(uint *)(pbVar12 + 0x3c) = uVar9;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(pbVar12 + 0x38) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1404a2950 FUN_1404a2950 body=225 status=ok
// SIG undefined FUN_1404a2950(void)

void FUN_1404a2950(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x10);
    iVar3 = param_3;
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x10);
        FMemory::operator_delete(lVar1,0x18);
      }
      plVar4 = plVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar2 = (iVar3 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(iVar3 - iVar2) * 0x10 + *param_1),(longlong)iVar2 << 4);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404a2a40 FUN_1404a2a40 body=247 status=ok
// SIG undefined FUN_1404a2a40(void)

void FUN_1404a2a40(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x10);
    iVar3 = param_3;
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar1 + 10);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar1 + 9);
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x58);
      }
      plVar4 = plVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar2 = (iVar3 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(iVar3 - iVar2) * 0x10 + *param_1),(longlong)iVar2 << 4);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404a2b40 FUN_1404a2b40 body=195 status=ok
// SIG undefined FUN_1404a2b40(void)

void FUN_1404a2b40(longlong param_1)

{
  **(undefined4 **)(param_1 + 0x1c0) = 0xffffffff;
  **(undefined4 **)(param_1 + 0x1b0) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 4) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 4) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 8) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 8) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0xc) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0xc) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x10) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x10) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x14) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x14) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x18) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x18) = 0xffffffff;
  return;
}



// FUNCTION 1404a2c10 FUN_1404a2c10 body=138 status=ok
// SIG undefined FUN_1404a2c10(void)

void FUN_1404a2c10(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x98,0);
  iVar4 = (int)(uVar3 / 0x98);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x98,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404a2ca0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x50,0);
  iVar4 = (int)(uVar3 / 0x50);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x50,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404a2d30 ResizeGrow body=11 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x104) = 0x20;
  return;
}



// FUNCTION 1404a2d40 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 5)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 5,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 5);
      }
      goto LAB_1404a2d9d;
    }
    if (iVar3 == 0) goto LAB_1404a2d9d;
  }
  iVar3 = iVar4;
LAB_1404a2d9d:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 5,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404a2dd0 ResizeShrink body=165 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FPakPrecacher::FPakData,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x98) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x98,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xd79435e50d79435f) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x98);
      }
      goto LAB_1404a2e44;
    }
    if (iVar4 == 0) goto LAB_1404a2e44;
  }
  iVar4 = iVar5;
LAB_1404a2e44:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x98,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1404a2e80 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x50) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x50,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x50);
      }
      goto LAB_1404a2ef6;
    }
    if (iVar4 == 0) goto LAB_1404a2ef6;
  }
  iVar4 = iVar5;
LAB_1404a2ef6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x50,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1404a2f30 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 6,0);
    iVar1 = (int)(uVar2 >> 6);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 6,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1404a2fa0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<152,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x98,0);
    iVar3 = (int)(uVar1 / 0x98);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x98,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404a3020 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x50,0);
    iVar3 = (int)(uVar1 / 0x50);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x50,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404a30a0 FUN_1404a30a0 body=606 status=ok
// SIG undefined FUN_1404a30a0(void)

void FUN_1404a30a0(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  longlong *local_res18;
  longlong local_res20;
  
  piVar1 = *(int **)(param_1 + 0x160);
  for (piVar9 = piVar1; piVar9 != piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4;
      piVar9 = piVar9 + 4) {
    if (*piVar9 == *param_2) {
      iVar8 = (int)((longlong)piVar9 - (longlong)piVar1 >> 4);
      goto LAB_1404a30e8;
    }
  }
  iVar8 = -1;
LAB_1404a30e8:
  piVar9 = piVar1;
  do {
    if (piVar9 == piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4) {
      iVar6 = -1;
LAB_1404a3116:
      if ((iVar8 != -1) && (iVar6 != -1)) {
        lVar5 = *(longlong *)(*(longlong *)(piVar1 + (longlong)iVar6 * 4 + 2) + 0x50);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(*(longlong *)(piVar1 + (longlong)iVar8 * 4 + 2) + 0x48);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar7 + 10;
        local_res18 = plVar2;
        local_res20 = lVar5;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar4) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x58);
          puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar4 = puVar7 + 10;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar4;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar7;
        *(undefined8 **)(lVar3 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f489f0;
        *(undefined4 *)(puVar7 + 2) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x14) = 0xffffffff;
        *(undefined4 *)(puVar7 + 3) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0xffffffff;
        *(undefined4 *)(puVar7 + 4) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x24) = 0xffffffff;
        *(undefined4 *)(puVar7 + 5) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 0xffffffff;
        *(undefined4 *)(puVar7 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
        *(undefined4 *)(puVar7 + 7) = 0;
        *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
        puVar7[8] = plVar2;
        puVar7[9] = lVar5;
        lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar7[8] + 0x18))(), lVar5 == 0)) {
          (**(code **)(*(longlong *)puVar7[8] + 0x20))();
        }
        lVar5 = (**(code **)(*(longlong *)puVar7[9] + 8))();
        if ((lVar5 == 0) && (lVar5 = (**(code **)(*(longlong *)puVar7[9] + 0x18))(), lVar5 == 0)) {
          (**(code **)(*(longlong *)puVar7[9] + 0x20))();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
      }
      return;
    }
    if (*piVar9 == param_2[1]) {
      iVar6 = (int)((longlong)piVar9 - (longlong)piVar1 >> 4);
      goto LAB_1404a3116;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 1404a3300 FUN_1404a3300 body=135 status=ok
// SIG undefined FUN_1404a3300(void)

void FUN_1404a3300(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 5;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
    puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar2;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar3;
  *(undefined8 **)(lVar1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f59430;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 0x4000;
  *(undefined4 *)(puVar3 + 4) = 0x4000;
  return;
}



// FUNCTION 1404a3390 FUN_1404a3390 body=820 status=ok
// SIG undefined FUN_1404a3390(void)

void FUN_1404a3390(longlong param_1,longlong param_2,undefined4 param_3,void *param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined4 local_res18 [2];
  void *local_res20;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  uVar6 = (uint)*(ushort *)(param_1 + 0xc4);
  if (3 < *(ushort *)(param_1 + 0xc4)) {
    uVar6 = 4;
  }
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    uVar2 = *(ushort *)(param_1 + 0xc2);
    pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar12 = (longlong)pvVar11 + (ulonglong)uVar6;
    if (*(ulonglong *)(param_2 + 0x38) < uVar12) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar12 = (longlong)pvVar11 + (ulonglong)uVar6;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar12;
    _guard_xfg_dispatch_icall_nop(pvVar11,local_res18,(ulonglong)uVar6);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f4d340;
    *(uint *)(puVar10 + 4) = (uint)uVar1;
    puVar10[2] = uVar4;
    puVar10[3] = pvVar11;
    *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar2;
    *(uint *)(puVar10 + 5) = uVar6;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0xca);
  if (7 < *(ushort *)(param_1 + 0xca)) {
    uVar6 = 8;
  }
  uVar12 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    uVar2 = *(ushort *)(param_1 + 0xc6);
    pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = uVar12 + (longlong)pvVar11;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      pvVar11 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = uVar12 + (longlong)pvVar11;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(pvVar11,local_res20,uVar12);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f4d340;
    *(uint *)(puVar10 + 4) = (uint)uVar2;
    puVar10[2] = uVar4;
    puVar10[3] = pvVar11;
    *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
    *(uint *)(puVar10 + 5) = uVar6;
  }
  uVar5 = *param_5;
  uVar8 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c50;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar5;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c60;
    puVar10[2] = uVar4;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_5);
  return;
}



// FUNCTION 1404a36d0 FUN_1404a36d0 body=348 status=ok
// SIG undefined FUN_1404a36d0(void)

void FUN_1404a36d0(longlong param_1,int param_2,char *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong local_res8;
  longlong local_res20;
  undefined2 *local_28;
  ulonglong local_20;
  
  piVar1 = *(int **)(param_1 + 0x140);
  piVar4 = piVar1;
  if (piVar1 != piVar1 + (longlong)*(int *)(param_1 + 0x148) * 4) {
    while (*piVar4 != param_2) {
      piVar4 = piVar4 + 4;
      if (piVar4 == piVar1 + (longlong)*(int *)(param_1 + 0x148) * 4) {
        return;
      }
    }
    iVar3 = (int)((longlong)piVar4 - (longlong)piVar1 >> 4);
    if (iVar3 != -1) {
      puVar5 = (undefined2 *)0x0;
      local_28 = (undefined2 *)0x0;
      local_20 = 0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (param_3[lVar7] != '\0');
        uVar6 = (int)lVar7 + 1;
        local_20 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        }
        puVar5 = local_28;
        FGenericPlatformString::Convert<char,wchar_t>(local_28,uVar6,param_3,uVar6,0x3f);
      }
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 8 + (longlong)iVar3 * 0x10);
      lVar2 = *(longlong *)(lVar7 + 0x10);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        puVar5 = local_28;
      }
      local_res20 = lVar2;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
      if (lVar2 != 0) {
        local_res8 = *(longlong *)(lVar7 + 0x10);
        puVar8 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar8 = puVar5;
        }
        if (local_res8 != 0) {
          LOCK();
          *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
          UNLOCK();
          puVar5 = local_28;
        }
        (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,local_res8,puVar8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      }
      if (puVar5 != (undefined2 *)0x0) {
        FMemory::Free(puVar5);
      }
    }
  }
  return;
}



// FUNCTION 1404a3830 FUN_1404a3830 body=524 status=ok
// SIG undefined FUN_1404a3830(void)

void FUN_1404a3830(longlong param_1,int param_2,char *param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res8;
  undefined4 local_res10;
  longlong local_res20;
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  ulonglong local_30;
  
  puVar7 = (undefined2 *)0x0;
  local_res10 = 0;
  piVar1 = *(int **)(param_1 + 0x160);
  piVar6 = piVar1;
  if (piVar1 == piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4) {
    return;
  }
  while (*piVar6 != param_2) {
    piVar6 = piVar6 + 4;
    if (piVar6 == piVar1 + (longlong)*(int *)(param_1 + 0x168) * 4) {
      return;
    }
  }
  iVar5 = (int)((longlong)piVar6 - (longlong)piVar1 >> 4);
  if (iVar5 == -1) {
    return;
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  puVar8 = puVar7;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (param_3[lVar10] != '\0');
    uVar9 = (int)lVar10 + 1;
    local_30 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    puVar8 = local_38;
    FGenericPlatformString::Convert<char,wchar_t>(local_38,uVar9,param_3,uVar9,0x3f);
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 8 + (longlong)iVar5 * 0x10);
  if (*(char *)(lVar10 + 0x25) == '\0') {
LAB_1404a3940:
    bVar3 = false;
  }
  else {
    local_48 = *(longlong *)(lVar10 + 0x48);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
      puVar8 = local_38;
    }
    puVar7 = (undefined2 *)0x1;
    if (local_48 == 0) goto LAB_1404a3940;
    bVar3 = true;
  }
  if (puVar7 != (undefined2 *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
  }
  if (bVar3) {
    local_res8 = *(longlong *)(lVar10 + 0x48);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = puVar8;
    }
    if (local_res8 != 0) {
      LOCK();
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      UNLOCK();
      puVar8 = local_38;
    }
    (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,local_res8,puVar7);
    plVar4 = &local_res8;
  }
  else {
    lVar2 = *(longlong *)(lVar10 + 0x50);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      puVar8 = local_38;
    }
    local_40 = lVar2;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_40);
    if (lVar2 == 0) goto LAB_1404a3a17;
    local_res20 = *(longlong *)(lVar10 + 0x50);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = puVar8;
    }
    if (local_res20 != 0) {
      LOCK();
      *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
      UNLOCK();
      puVar8 = local_38;
    }
    (**(code **)(*DAT_146ab6358 + 0x300))(DAT_146ab6358,local_res20,puVar7);
    plVar4 = &local_res20;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar4);
LAB_1404a3a17:
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  return;
}



// FUNCTION 1404a3a40 FUN_1404a3a40 body=320 status=ok
// SIG undefined FUN_1404a3a40(void)

void FUN_1404a3a40(longlong param_1,short *param_2,short *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = 0;
  local_38 = 0;
  lVar1 = -1;
  if ((param_3 != (short *)0x0) && (lVar3 = lVar1, *param_3 != 0)) {
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_3,(longlong)(int)uVar2 * 2);
  }
  local_48 = 0;
  local_40 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != 0);
    uVar2 = (int)lVar1 + 1;
    local_40 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar2 * 2);
  }
  local_28 = &local_48;
  local_20 = &local_38;
  FUN_140497620(param_1 + 0x200,local_res8,&local_28,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404a3b80 FUN_1404a3b80 body=1461 status=ok
// SIG undefined FUN_1404a3b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404a3b80(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_168 [32];
  int local_148;
  int local_144;
  longlong local_140;
  longlong local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  piVar2 = *(int **)(param_1 + 0x180);
  local_130 = *param_2;
  uVar16 = 0;
  for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)*(int *)(param_1 + 0x188) * 0x26;
      piVar13 = piVar13 + 0x26) {
    if (*piVar13 == local_130) {
      iVar5 = (int)(((longlong)piVar13 - (longlong)piVar2) / 0x98);
      if (iVar5 != -1) {
        local_128 = *(undefined8 *)(piVar2 + (longlong)iVar5 * 0x26 + 3);
        uStack_120 = *(undefined8 *)(piVar2 + (longlong)iVar5 * 0x26 + 5);
        local_100 = piVar2[(longlong)iVar5 * 0x26 + 0xd];
        local_118 = piVar2[(longlong)iVar5 * 0x26 + 7];
        iStack_114 = piVar2[(longlong)iVar5 * 0x26 + 8];
        iStack_110 = piVar2[(longlong)iVar5 * 0x26 + 9];
        iStack_10c = piVar2[(longlong)iVar5 * 0x26 + 10];
        local_fc = piVar2[(longlong)iVar5 * 0x26 + 0x1f];
        local_108 = *(undefined8 *)(piVar2 + (longlong)iVar5 * 0x26 + 0xb);
        FUN_1404a09d0(param_1 + 0x2b0,&local_148,&local_128);
        uVar11 = uVar16;
        if (local_148 != -1) {
          uVar11 = (longlong)local_148 * 0x40 + *(longlong *)(param_1 + 0x2b0);
        }
        local_138 = *(longlong *)(uVar11 + 0x30);
        if (local_138 != 0) {
          LOCK();
          *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
          UNLOCK();
        }
        FUN_1404a0900(param_1 + 0x260,&local_144,piVar2 + (longlong)iVar5 * 0x26 + 0xe);
        uVar11 = uVar16;
        if (local_144 != -1) {
          uVar11 = *(longlong *)(param_1 + 0x260) + (longlong)local_144 * 0x48;
        }
        lVar3 = *(longlong *)(uVar11 + 0x38);
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        iVar7 = piVar2[(longlong)iVar5 * 0x26 + 1];
        if (*(int *)(param_1 + 0x358) == *(int *)(param_1 + 900)) goto LAB_1404a3d70;
        lVar8 = *(longlong *)(param_1 + 0x390);
        if (*(longlong *)(param_1 + 0x390) == 0) {
          lVar8 = param_1 + 0x388;
        }
        iVar6 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x398) - 1U & (longlong)iVar7) * 4);
        if (iVar6 == -1) goto LAB_1404a3d70;
        goto LAB_1404a3d50;
      }
      break;
    }
  }
  goto LAB_1404a40e5;
LAB_1404a3eac:
  if (iVar7 == -1) goto LAB_1404a3eb1;
  goto LAB_1404a3eb4;
  while (iVar6 = *(int *)(uVar11 + 0x10), iVar6 != -1) {
LAB_1404a3d50:
    uVar11 = *(longlong *)(param_1 + 0x350) + (longlong)iVar6 * 0x18;
    if (*(int *)(*(longlong *)(param_1 + 0x350) + (longlong)iVar6 * 0x18) == iVar7) {
      if (iVar6 != -1) goto LAB_1404a3d73;
      break;
    }
  }
LAB_1404a3d70:
  uVar11 = uVar16;
LAB_1404a3d73:
  lVar8 = *(longlong *)(uVar11 + 8);
  if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
    lVar9 = *(longlong *)(param_1 + 0x3e0);
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      lVar9 = param_1 + 0x3d8;
    }
    iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 1000) - 1U &
                             (longlong)piVar2[(longlong)iVar5 * 0x26 + 2]) * 4);
    if (iVar6 != -1) {
      do {
        uVar11 = *(longlong *)(param_1 + 0x3a0) + (longlong)iVar6 * 0x18;
        if (*(int *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar6 * 0x18) ==
            piVar2[(longlong)iVar5 * 0x26 + 2]) {
          if (iVar6 != -1) goto LAB_1404a3de3;
          break;
        }
        iVar6 = *(int *)(uVar11 + 0x10);
      } while (iVar6 != -1);
    }
  }
  uVar11 = uVar16;
LAB_1404a3de3:
  lVar9 = *(longlong *)(uVar11 + 8);
  if ((iVar7 == 0x33) || (iVar7 == 0xd)) {
    if (*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x334)) {
      lVar14 = *(longlong *)(param_1 + 0x340);
      if (*(longlong *)(param_1 + 0x340) == 0) {
        lVar14 = param_1 + 0x338;
      }
      iVar7 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x348) - 1U & 1) * 4);
      if (iVar7 != -1) {
        do {
          uVar11 = *(longlong *)(param_1 + 0x300) + (longlong)iVar7 * 0x18;
          if (*(int *)(*(longlong *)(param_1 + 0x300) + (longlong)iVar7 * 0x18) == 1)
          goto LAB_1404a3eac;
          iVar7 = *(int *)(uVar11 + 0x10);
        } while (iVar7 != -1);
      }
    }
  }
  else if (*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x334)) {
    piVar13 = *(int **)(param_1 + 0x340);
    if (*(int **)(param_1 + 0x340) == (int *)0x0) {
      piVar13 = (int *)(param_1 + 0x338);
    }
    iVar7 = *piVar13;
    if (iVar7 != -1) {
      do {
        uVar11 = *(longlong *)(param_1 + 0x300) + (longlong)iVar7 * 0x18;
        if (*(int *)(*(longlong *)(param_1 + 0x300) + (longlong)iVar7 * 0x18) == 0)
        goto LAB_1404a3eac;
        iVar7 = *(int *)(uVar11 + 0x10);
      } while (iVar7 != -1);
    }
  }
LAB_1404a3eb1:
  uVar11 = uVar16;
LAB_1404a3eb4:
  lVar14 = *(longlong *)(uVar11 + 8);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x26;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_140 = lVar3;
  FUN_14049afe0(*(undefined8 *)(param_1 + 0x30),&local_f8);
  local_c8 = local_138;
  uStack_c0 = *(undefined8 *)(param_1 + 0x108);
  lVar4 = *(longlong *)(lVar8 + 0x48);
  uStack_ac = 0;
  local_f8 = *(undefined8 *)(lVar14 + 0x30);
  local_b8 = lVar3;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uStack_f0 = *(undefined8 *)(lVar4 + 0x38);
  lVar3 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_d8 = *(undefined8 *)(lVar3 + 0x40);
  *(longlong *)(param_1 + 0x40) = lVar8;
  *(longlong *)(param_1 + 0x38) = lVar9;
  *(undefined8 *)(param_1 + 0x48) = local_f8;
  *(undefined8 *)(param_1 + 0x50) = uStack_f0;
  *(undefined8 *)(param_1 + 0x58) = local_e8;
  *(undefined8 *)(param_1 + 0x60) = uStack_e0;
  *(undefined8 *)(param_1 + 0x68) = local_d8;
  *(undefined8 *)(param_1 + 0x70) = uStack_d0;
  *(longlong *)(param_1 + 0x78) = local_c8;
  *(undefined8 *)(param_1 + 0x80) = uStack_c0;
  *(longlong *)(param_1 + 0x88) = local_b8;
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_ac,uStack_b0);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_a4,uStack_a8);
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 *)(param_1 + 0xa8) = local_98;
  *(undefined8 *)(param_1 + 0xb0) = uStack_90;
  *(undefined8 *)(param_1 + 0xb8) = local_88;
  *(undefined8 *)(param_1 + 0xc0) = uStack_80;
  *(undefined8 *)(param_1 + 200) = local_78;
  *(undefined8 *)(param_1 + 0xd0) = uStack_70;
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0xdc) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0xe4) = uStack_60._4_4_;
  *(undefined4 *)(param_1 + 0xe8) = local_58;
  *(undefined4 *)(param_1 + 0xec) = (undefined4)uStack_54;
  *(undefined4 *)(param_1 + 0xf0) = uStack_54._4_4_;
  *(undefined4 *)(param_1 + 0xf4) = uStack_4c;
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uStack_44,uStack_48);
  *(char *)(param_1 + 0x104) = (char)piVar2[(longlong)iVar5 * 0x26 + 0x1a];
  FUN_141ed6ac0(*(undefined8 *)(param_1 + 0x30),&local_f8,2,1);
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x100);
  puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar10;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar12;
  *(undefined8 **)(lVar3 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar12 + 2) = uVar1;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined1 *)(param_1 + 0x200) = 1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
LAB_1404a40e5:
  if ((DAT_146ab62cc < 0x1c) && ((0x8c51804U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
    do {
      FUN_1404a4bd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),uVar16,
                    *(undefined8 *)(param_1 + 0x210));
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < 4);
  }
  return;
}



// FUNCTION 1404a4140 FUN_1404a4140 body=2284 status=ok
// SIG undefined FUN_1404a4140(void)

void FUN_1404a4140(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x228);
  uVar12 = 0;
  iVar11 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    plVar13 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar7 = plVar13 + 1;
    local_res18 = lVar1;
    if (*(longlong **)(lVar2 + 0x38) < plVar7) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x10);
      plVar13 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar7 = plVar13 + 1;
    }
    *(longlong **)(lVar2 + 0x30) = plVar7;
    *plVar13 = local_res18;
    puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar8;
    *(undefined8 **)(lVar2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = plVar13;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
  }
  iVar5 = 0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      *(undefined4 *)(lVar1 + 0x98) = 0;
      *(undefined4 *)(lVar1 + 0x160) = 0;
      *(undefined4 *)(lVar1 + 0x164) = 0;
      *(undefined4 *)(lVar1 + 0x168) = 0;
      *(undefined4 *)(lVar1 + 0x16c) = 0;
      puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x26;
      if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x138);
        puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 0x26;
      }
      *(undefined8 **)(lVar1 + 0x30) = puVar6;
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
      **(undefined8 **)(lVar1 + 8) = puVar8;
      *(undefined8 **)(lVar1 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f59440;
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
      *(undefined2 *)(puVar8 + 5) = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 8) = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x54) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xb) = 0;
      puVar8[0xc] = 0;
      *(undefined4 *)(puVar8 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xe) = 0;
      puVar8[0xf] = 0;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x11) = 0;
      puVar8[0x12] = 0;
      *(undefined4 *)(puVar8 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x9c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x14) = 0;
      puVar8[0x15] = 0;
      *(undefined4 *)(puVar8 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xb4) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x17) = 0;
      puVar8[0x18] = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xcc) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x1a) = 0;
      puVar8[0x1b] = 0;
      *(undefined4 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0xe4) = 0;
      uVar10 = uVar12;
      if (*(int *)(puVar8 + 2) != 0) {
        do {
          uVar9 = (int)uVar10 + 1;
          uVar4 = ((undefined8 *)(uVar10 * 0x18))[1];
          puVar8[uVar10 * 3 + 3] = *(undefined8 *)(uVar10 * 0x18);
          (puVar8 + uVar10 * 3 + 3)[1] = uVar4;
          puVar8[uVar10 * 3 + 5] = *(undefined8 *)(uVar10 * 0x18 + 0x10);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 2));
        iVar5 = *(int *)(puVar8 + 0x1d);
      }
      if (iVar5 != 0) {
        do {
          uVar9 = (int)uVar12 + 1;
          puVar8[uVar12 + 0x1e] = *(undefined8 *)(uVar12 * 8);
          uVar12 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 0x1d));
      }
    }
    else {
      lVar1 = *(longlong *)(param_3 + 0x10);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      local_res10 = lVar1;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
      lVar2 = *(longlong *)(param_1 + 0x30);
      *(undefined4 *)(lVar2 + 0x98) = 0;
      local_88 = (undefined4)lVar1;
      uStack_84 = (undefined4)((ulonglong)lVar1 >> 0x20);
      *(undefined4 *)(lVar2 + 0x160) = local_88;
      *(undefined4 *)(lVar2 + 0x164) = uStack_84;
      *(undefined4 *)(lVar2 + 0x168) = 0x1010101;
      *(undefined4 *)(lVar2 + 0x16c) = 0x22;
      puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x26;
      if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x138);
        puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 0x26;
      }
      *(undefined8 **)(lVar2 + 0x30) = puVar6;
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
      **(undefined8 **)(lVar2 + 8) = puVar8;
      *(undefined8 **)(lVar2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f59440;
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
      *(undefined2 *)(puVar8 + 5) = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 8) = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x54) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xb) = 0;
      puVar8[0xc] = 0;
      *(undefined4 *)(puVar8 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xe) = 0;
      puVar8[0xf] = 0;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x11) = 0;
      puVar8[0x12] = 0;
      *(undefined4 *)(puVar8 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x9c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x14) = 0;
      puVar8[0x15] = 0;
      *(undefined4 *)(puVar8 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xb4) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x17) = 0;
      puVar8[0x18] = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xcc) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x1a) = 0;
      puVar8[0x1b] = 0;
      *(undefined4 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0xe4) = 0;
      uVar10 = uVar12;
      if (*(int *)(puVar8 + 2) != 0) {
        do {
          uVar9 = (int)uVar10 + 1;
          uVar4 = ((undefined8 *)(uVar10 * 0x18))[1];
          puVar8[uVar10 * 3 + 3] = *(undefined8 *)(uVar10 * 0x18);
          (puVar8 + uVar10 * 3 + 3)[1] = uVar4;
          puVar8[uVar10 * 3 + 5] = *(undefined8 *)(uVar10 * 0x18 + 0x10);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 2));
        iVar5 = *(int *)(puVar8 + 0x1d);
      }
      if (iVar5 != 0) {
        do {
          uVar9 = (int)uVar12 + 1;
          puVar8[uVar12 + 0x1e] = *(undefined8 *)(uVar12 * 8);
          uVar12 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 0x1d));
      }
      puVar8[0x1b] = lVar1;
      puVar8[0x1c] = 0x2201010101;
    }
  }
  else {
    local_58 = param_2;
    local_50 = 0;
    local_4c = 0xffffffff;
    local_48[0] = 0x101;
    if (param_3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      *(undefined4 *)(lVar1 + 0x98) = 1;
      uVar10 = uVar12;
      do {
        uVar9 = (int)uVar10 + 1;
        lVar2 = *(longlong *)(&local_50 + uVar10 * 6);
        plVar7 = (longlong *)(lVar1 + 0xa0 + uVar10 * 0x18);
        *plVar7 = (&local_58)[uVar10 * 3];
        plVar7[1] = lVar2;
        *(undefined8 *)(lVar1 + 0xb0 + uVar10 * 0x18) = *(undefined8 *)(local_48 + uVar10 * 0xc);
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(lVar1 + 0x98));
      *(undefined4 *)(lVar1 + 0x160) = 0;
      *(undefined4 *)(lVar1 + 0x164) = 0;
      *(undefined4 *)(lVar1 + 0x168) = 0;
      *(undefined4 *)(lVar1 + 0x16c) = 0;
      puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x26;
      if (*(undefined8 **)(lVar1 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x138);
        puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 0x26;
      }
      *(undefined8 **)(lVar1 + 0x30) = puVar6;
      *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
      **(undefined8 **)(lVar1 + 8) = puVar8;
      *(undefined8 **)(lVar1 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f59440;
      *(undefined4 *)(puVar8 + 2) = 1;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
      *(undefined2 *)(puVar8 + 5) = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 8) = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x54) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xb) = 0;
      puVar8[0xc] = 0;
      *(undefined4 *)(puVar8 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xe) = 0;
      puVar8[0xf] = 0;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x11) = 0;
      puVar8[0x12] = 0;
      *(undefined4 *)(puVar8 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x9c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x14) = 0;
      puVar8[0x15] = 0;
      *(undefined4 *)(puVar8 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xb4) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x17) = 0;
      puVar8[0x18] = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xcc) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x1a) = 0;
      puVar8[0x1b] = 0;
      *(undefined4 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0xe4) = 0;
      uVar10 = uVar12;
      if (*(int *)(puVar8 + 2) != 0) {
        do {
          uVar9 = (int)uVar10 + 1;
          lVar1 = *(longlong *)(&local_50 + uVar10 * 6);
          puVar8[uVar10 * 3 + 3] = (&local_58)[uVar10 * 3];
          (puVar8 + uVar10 * 3 + 3)[1] = lVar1;
          puVar8[uVar10 * 3 + 5] = *(undefined8 *)(local_48 + uVar10 * 0xc);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 2));
        iVar11 = *(int *)(puVar8 + 0x1d);
      }
      if (iVar11 != 0) {
        do {
          uVar9 = (int)uVar12 + 1;
          puVar8[uVar12 + 0x1e] = *(undefined8 *)(uVar12 * 8);
          uVar12 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 0x1d));
      }
    }
    else {
      lVar1 = *(longlong *)(param_3 + 0x10);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      local_res8 = lVar1;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      lVar2 = *(longlong *)(param_1 + 0x30);
      *(undefined4 *)(lVar2 + 0x98) = 1;
      uVar10 = uVar12;
      do {
        uVar9 = (int)uVar10 + 1;
        lVar3 = *(longlong *)(&local_50 + uVar10 * 6);
        plVar7 = (longlong *)(lVar2 + 0xa0 + uVar10 * 0x18);
        *plVar7 = (&local_58)[uVar10 * 3];
        plVar7[1] = lVar3;
        *(undefined8 *)(lVar2 + 0xb0 + uVar10 * 0x18) = *(undefined8 *)(local_48 + uVar10 * 0xc);
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(lVar2 + 0x98));
      local_98 = (undefined4)lVar1;
      uStack_94 = (undefined4)((ulonglong)lVar1 >> 0x20);
      *(undefined4 *)(lVar2 + 0x160) = local_98;
      *(undefined4 *)(lVar2 + 0x164) = uStack_94;
      *(undefined4 *)(lVar2 + 0x168) = 0x1010101;
      *(undefined4 *)(lVar2 + 0x16c) = 0x22;
      puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x26;
      if (*(undefined8 **)(lVar2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x138);
        puVar8 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar8 + 0x26;
      }
      *(undefined8 **)(lVar2 + 0x30) = puVar6;
      *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
      **(undefined8 **)(lVar2 + 8) = puVar8;
      *(undefined8 **)(lVar2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_143f59440;
      *(undefined4 *)(puVar8 + 2) = 1;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
      *(undefined2 *)(puVar8 + 5) = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 8) = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x54) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xb) = 0;
      puVar8[0xc] = 0;
      *(undefined4 *)(puVar8 + 0xd) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x6c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0xe) = 0;
      puVar8[0xf] = 0;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x84) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x11) = 0;
      puVar8[0x12] = 0;
      *(undefined4 *)(puVar8 + 0x13) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x9c) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x14) = 0;
      puVar8[0x15] = 0;
      *(undefined4 *)(puVar8 + 0x16) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xb4) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x17) = 0;
      puVar8[0x18] = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xcc) = 0xffffffff;
      *(undefined2 *)(puVar8 + 0x1a) = 0;
      puVar8[0x1b] = 0;
      *(undefined4 *)(puVar8 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0xe4) = 0;
      uVar10 = uVar12;
      if (*(int *)(puVar8 + 2) != 0) {
        do {
          uVar9 = (int)uVar10 + 1;
          lVar2 = *(longlong *)(&local_50 + uVar10 * 6);
          puVar8[uVar10 * 3 + 3] = (&local_58)[uVar10 * 3];
          (puVar8 + uVar10 * 3 + 3)[1] = lVar2;
          puVar8[uVar10 * 3 + 5] = *(undefined8 *)(local_48 + uVar10 * 0xc);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 2));
        iVar5 = *(int *)(puVar8 + 0x1d);
      }
      if (iVar5 != 0) {
        do {
          uVar9 = (int)uVar12 + 1;
          puVar8[uVar12 + 0x1e] = *(undefined8 *)(uVar12 * 8);
          uVar12 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(puVar8 + 0x1d));
      }
      puVar8[0x1b] = lVar1;
      puVar8[0x1c] = 0x2201010101;
    }
  }
  *(longlong *)(param_1 + 0x228) = param_2;
  *(longlong *)(param_1 + 0x230) = param_3;
  return;
}



// FUNCTION 1404a4a30 FUN_1404a4a30 body=411 status=ok
// SIG undefined FUN_1404a4a30(void)

void FUN_1404a4a30(longlong param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  bVar6 = *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0x10) != 0.0;
  *(bool *)(param_1 + 0x3f0) = bVar6;
  if (bVar6) {
    if (*param_2 == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x30);
      puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
      if (*(undefined8 **)(lVar5 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30);
        puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar8;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar9;
      puVar8 = puVar9 + 1;
      *(undefined8 **)(lVar5 + 8) = puVar8;
      *(undefined1 *)(puVar9 + 2) = 0;
      *(undefined8 *)((longlong)puVar9 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = 0x4000;
      *(undefined4 *)(puVar9 + 4) = 0x4000;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x30);
      fVar1 = *(float *)(param_2 + 8);
      fVar2 = *(float *)(param_2 + 4);
      fVar3 = *(float *)(param_2 + 0x10);
      puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
      fVar4 = *(float *)(param_2 + 0xc);
      if (*(undefined8 **)(lVar5 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(lVar5 + 0x30);
        puVar9 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
      }
      *(undefined8 **)(lVar5 + 0x30) = puVar8;
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      **(undefined8 **)(lVar5 + 8) = puVar9;
      puVar8 = puVar9 + 1;
      *(undefined8 **)(lVar5 + 8) = puVar8;
      *(int *)((longlong)puVar9 + 0x14) = (int)(longlong)fVar2;
      *(int *)(puVar9 + 3) = (int)(longlong)fVar1;
      *(int *)((longlong)puVar9 + 0x1c) = (int)(longlong)(fVar2 + fVar4);
      *(undefined1 *)(puVar9 + 2) = 1;
      *(int *)(puVar9 + 4) = (int)(longlong)(fVar1 + fVar3);
    }
    *puVar8 = 0;
    *puVar9 = &PTR_LAB_143f59430;
    uVar7 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x248) = uVar7;
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// FUNCTION 1404a4bd0 FUN_1404a4bd0 body=207 status=ok
// SIG undefined FUN_1404a4bd0(void)

void FUN_1404a4bd0(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  param_1 = param_1 + (longlong)param_3 * 4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0x10e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10c);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c70;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_4;
  }
  return;
}



// FUNCTION 1404a4ca0 FUN_1404a4ca0 body=207 status=ok
// SIG undefined FUN_1404a4ca0(void)

void FUN_1404a4ca0(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  param_1 = param_1 + (longlong)param_3 * 4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xfe) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xfc);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f59c80;
    puVar5[2] = uVar3;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = param_4;
  }
  return;
}



// FUNCTION 1404a4d70 FUN_1404a4d70 body=611 status=ok
// SIG undefined FUN_1404a4d70(void)

void FUN_1404a4d70(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x11) = 1;
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
          goto LAB_1404a4f27;
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
LAB_1404a4f27:
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



// FUNCTION 1404a4fe0 FUN_1404a4fe0 body=611 status=ok
// SIG undefined FUN_1404a4fe0(void)

void FUN_1404a4fe0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8214;
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
          goto LAB_1404a5197;
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
LAB_1404a5197:
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



// FUNCTION 1404a52e0 FUN_1404a52e0 body=98 status=ok
// SIG undefined FUN_1404a52e0(void)

undefined8 FUN_1404a52e0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 5;
  case 7:
    return 6;
  case 8:
    return 7;
  case 9:
    return 8;
  case 10:
    return 9;
  case 0xe:
    return 10;
  case 0xf:
    return 0xb;
  }
}



// FUNCTION 1404a5380 FUN_1404a5380 body=72 status=ok
// SIG undefined FUN_1404a5380(void)

undefined8 FUN_1404a5380(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 6;
  default:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 5;
  case 7:
    return 7;
  }
}



// FUNCTION 1404a53f0 FUN_1404a53f0 body=72 status=ok
// SIG undefined FUN_1404a53f0(void)

undefined8 FUN_1404a53f0(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 5;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 6;
  case 7:
    return 7;
  }
}



// FUNCTION 1404a5460 FUN_1404a5460 body=126 status=ok
// SIG undefined FUN_1404a5460(void)

undefined8 FUN_1404a5460(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x25;
  case 1:
    return 0x1b;
  case 2:
    return 5;
  case 3:
    return 6;
  case 4:
    return 7;
  case 5:
    return 0x27;
  case 6:
    return 0x17;
  case 7:
    return 0x37;
  case 8:
    return 0x38;
  default:
    return 0;
  case 10:
    return 0x2e;
  case 0xb:
    return 0x2f;
  case 0x14:
    return 0x32;
  case 0x18:
    return 0x33;
  case 0x1b:
    return 0x34;
  case 0x1f:
    return 0x35;
  case 0x21:
    return 0x36;
  }
}



// FUNCTION 1404a5570 FUN_1404a5570 body=124 status=ok
// SIG undefined FUN_1404a5570(void)

void FUN_1404a5570(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x130);
  piVar4 = piVar1;
  if (piVar1 != piVar1 + (longlong)*(int *)(param_1 + 0x138) * 4) {
    while (*piVar4 != param_2) {
      piVar4 = piVar4 + 4;
      if (piVar4 == piVar1 + (longlong)*(int *)(param_1 + 0x138) * 4) {
        return;
      }
    }
    iVar3 = (int)((longlong)piVar4 - (longlong)piVar1 >> 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(piVar1 + (longlong)iVar3 * 4 + 2);
      (**(code **)(*DAT_146ab6358 + 0x500))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x30));
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
  }
  return;
}



// FUNCTION 1404a55f0 FUN_1404a55f0 body=124 status=ok
// SIG undefined FUN_1404a55f0(void)

void FUN_1404a55f0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x120);
  piVar4 = piVar1;
  if (piVar1 != piVar1 + (longlong)*(int *)(param_1 + 0x128) * 4) {
    while (*piVar4 != param_2) {
      piVar4 = piVar4 + 4;
      if (piVar4 == piVar1 + (longlong)*(int *)(param_1 + 0x128) * 4) {
        return;
      }
    }
    iVar3 = (int)((longlong)piVar4 - (longlong)piVar1 >> 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(piVar1 + (longlong)iVar3 * 4 + 2);
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar2 + 0x30));
      *(undefined8 *)(lVar2 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 1404a5670 FUN_1404a5670 body=397 status=ok
// SIG undefined FUN_1404a5670(void)

void FUN_1404a5670(longlong param_1,int param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,uint param_6)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar5;
  int local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  int local_24;
  
  piVar5 = *(int **)(param_1 + 0x160);
  piVar3 = piVar5;
  if (piVar5 != piVar5 + (longlong)*(int *)(param_1 + 0x168) * 4) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 4;
      if (piVar3 == piVar5 + (longlong)*(int *)(param_1 + 0x168) * 4) {
        return;
      }
    }
    iVar2 = (int)((longlong)piVar3 - (longlong)piVar5 >> 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(piVar5 + (longlong)iVar2 * 4 + 2);
      iVar2 = *(int *)(lVar1 + 0x28);
      if ((0x30 < iVar2) ||
         (*(int *)(&DAT_1461faf24 + (longlong)iVar2 * 0x10) *
          *(int *)(&DAT_1461faf28 + (longlong)iVar2 * 0x10) < 2)) {
        iVar2 = 0;
        switch(*(undefined4 *)(param_3 + 0x18)) {
        case 0:
          iVar2 = 0x20;
          break;
        case 1:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 0xb:
        case 0xe:
        case 0x10:
        case 0x13:
          iVar2 = 8;
          break;
        case 2:
        case 5:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0xf:
        case 0x11:
        case 0x12:
          iVar2 = 4;
        }
        if (param_6 != 0) {
          uVar4 = (ulonglong)param_6;
          piVar5 = (int *)(param_4 + 8);
          do {
            local_38 = piVar5[-1];
            local_34 = piVar5[-2];
            local_28 = *piVar5 - local_38;
            local_24 = piVar5[1] - local_34;
            local_30 = 0;
            (**(code **)(*DAT_146ab6358 + 0x590))
                      (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(lVar1 + 0x50),0,&local_38,
                       (uint)(iVar2 * local_28) >> 3,*param_5);
            piVar5 = piVar5 + 4;
            param_5 = param_5 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404a5850 FUN_1404a5850 body=335 status=ok
// SIG undefined FUN_1404a5850(void)

undefined8 FUN_1404a5850(longlong param_1,short *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  if (param_3 == '\0') {
    local_20 = 0;
    local_28 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_20 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar6 * 2);
    }
    cVar3 = FString::EndsWith(&local_28,L".ttf",1);
    if (((cVar3 != '\0') || (cVar3 = FString::EndsWith(&local_28,L".otf",1), cVar3 != '\0')) ||
       (cVar3 = FString::EndsWith(&local_28,L".ttc",1), cVar3 != '\0')) {
      puVar4 = (undefined8 *)FUN_141671d50(local_18,&local_28);
      plVar2 = *(longlong **)(param_1 + 8);
      iVar1 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
      *puVar5 = 0;
      *puVar5 = *puVar4;
      *puVar4 = 0;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
      puVar4[1] = 0;
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1404a59a0 FUN_1404a59a0 body=203 status=ok
// SIG undefined FUN_1404a59a0(void)

void FUN_1404a59a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uStack_a4;
  undefined4 uStack_24;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  iVar2 = *(int *)(param_1 + 0x158);
  lVar11 = (longlong)iVar2;
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar3 = *(undefined4 *)(param_3 + 6);
  *(int *)(param_1 + 0x158) = iVar2 + 1;
  if (*(int *)(param_1 + 0x15c) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x150),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x150);
  puVar1 = (undefined8 *)(lVar4 + lVar11 * 0x50);
  *puVar1 = CONCAT44(uStack_a4,param_4);
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar11 * 0x50);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar11 * 0x50);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar11 * 0x50);
  *puVar1 = uVar10;
  puVar1[1] = CONCAT44(uStack_24,uVar3);
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar11 * 0x50);
  *puVar1 = param_2;
  puVar1[1] = param_5;
  return;
}



// FUNCTION 1404a5a70 FUN_1404a5a70 body=437 status=ok
// SIG undefined FUN_1404a5a70(void)

void FUN_1404a5a70(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  
  plVar8 = (longlong *)operator_new(0x58);
  plVar13 = (longlong *)0x0;
  plVar11 = plVar13;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar2 = *(longlong *)(param_2 + 0x40);
    plVar8[2] = *(longlong *)(param_2 + 0x38);
    plVar8[3] = lVar2;
    uVar3 = *(undefined4 *)(param_2 + 0x4c);
    uVar4 = *(undefined4 *)(param_2 + 0x50);
    uVar5 = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(plVar8 + 4) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((longlong)plVar8 + 0x24) = uVar3;
    *(undefined4 *)(plVar8 + 5) = uVar4;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)(param_2 + 0x5c);
    uVar4 = *(undefined4 *)(param_2 + 0x60);
    uVar5 = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)((longlong)plVar8 + 0x34) = uVar3;
    *(undefined4 *)(plVar8 + 7) = uVar4;
    *(undefined4 *)((longlong)plVar8 + 0x3c) = uVar5;
    *(undefined4 *)(plVar8 + 8) = *(undefined4 *)(param_2 + 0x68);
    plVar8[9] = 0;
    plVar8[10] = 0;
    lVar2 = *(longlong *)(param_2 + 0x70);
    plVar11 = *(longlong **)(lVar2 + 0x60);
    if ((char)plVar11[5] == '\0') {
      (**(code **)(*plVar11 + 0x28))();
      plVar11 = *(longlong **)(lVar2 + 0x60);
    }
    uVar9 = (**(code **)(*(longlong *)plVar11[6] + 8))();
    TRefCountPtr<FRHIIndexBuffer>::operator=(plVar8 + 10,uVar9);
    plVar11 = plVar8;
  }
  if (plVar11 != (longlong *)(param_2 + 0x28)) {
    iVar1 = *(int *)(param_2 + 0x30);
    _Src = *(void **)(param_2 + 0x28);
    *(int *)(plVar11 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)plVar11 + 0xc) == 0)) {
      *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar11,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*plVar11,_Src,(longlong)iVar1 * 2);
    }
  }
  iVar1 = *(int *)(param_2 + 0xc);
  plVar8 = plVar13;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar12 = iVar1 >> 0x1f & 0xffff;
    uVar7 = iVar1 + uVar12;
    plVar8 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
             (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18);
  }
  *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) & 0xbfffffff;
  iVar1 = *(int *)(param_1 + 0x168);
  *(int *)(param_1 + 0x168) = iVar1 + 1;
  if (*(int *)(param_1 + 0x16c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x160,iVar1);
  }
  puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x160));
  *puVar10 = param_4;
  *(longlong **)(puVar10 + 2) = plVar11;
  if ((((1 < (int)plVar11[1]) && (*(int *)(param_1 + 0x28) != 0)) &&
      (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x28) != 0) {
      plVar13 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0001404a5c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x38))(plVar13,plVar11);
    return;
  }
  return;
}



// FUNCTION 1404a5c30 FUN_1404a5c30 body=47 status=ok
// SIG undefined FUN_1404a5c30(void)

longlong FUN_1404a5c30(void)

{
  if (DAT_146852b58 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146852b58,&PTR_s__Script_CoherentRenderingPlugin_143f5a260);
  }
  return DAT_146852b58;
}



// FUNCTION 1404a5c60 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UOculusHMDRuntimeSettings::GetPrivateStaticClass(void)

{
  if (DAT_146852b78 == 0) {
    FUN_14171ccd0(L"/Script/CoherentRenderingPlugin",L"CoherentRenderingSettings",&DAT_146852b78,
                  FUN_140447710,0x40,0x10000006,0,L"Engine",&LAB_1404a5e30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146852b78;
}



// FUNCTION 1404a5d20 FUN_1404a5d20 body=151 status=ok
// SIG undefined FUN_1404a5d20(void)

longlong FUN_1404a5d20(void)

{
  if (DAT_146852b88 == 0) {
    FUN_14171ccd0(L"/Script/CoherentRenderingPlugin",L"CohTextureUserWrapData",&DAT_146852b88,
                  FUN_140447710,0x78,0x10000000,0,L"Engine",FUN_1404a5dd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146852b88;
}



// FUNCTION 1404a5dd0 FUN_1404a5dd0 body=86 status=ok
// SIG undefined FUN_1404a5dd0(void)

void FUN_1404a5dd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar1);
    *puVar1 = &PTR_FUN_143f5a330;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 1;
    *(undefined2 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
  }
  return;
}



// FUNCTION 1404a5e50 FUN_1404a5e50 body=80 status=ok
// SIG undefined FUN_1404a5e50(void)

undefined8 * FUN_1404a5e50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f5a330;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1404a5ea0 FUN_1404a5ea0 body=85 status=ok
// SIG undefined FUN_1404a5ea0(void)

void FUN_1404a5ea0(void)

{
  if (DAT_146852b50 == 0) {
    if (DAT_146852b58 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146852b58,&PTR_s__Script_CoherentRenderingPlugin_143f5a260);
    }
    DAT_146852b50 = GetStaticEnum(FUN_1404a5f70,DAT_146852b58,L"ECoherentRenderingSettingsSeverity")
    ;
  }
  return;
}



// FUNCTION 1404a5f10 FUN_1404a5f10 body=47 status=ok
// SIG undefined FUN_1404a5f10(void)

longlong FUN_1404a5f10(void)

{
  if (DAT_146852b80 == 0) {
    FUN_141786440(&DAT_146852b80,&PTR_FUN_143f5a110);
  }
  return DAT_146852b80;
}



// FUNCTION 1404a5f40 FUN_1404a5f40 body=47 status=ok
// SIG undefined FUN_1404a5f40(void)

longlong FUN_1404a5f40(void)

{
  if (DAT_146852b70 == 0) {
    FUN_141786440(&DAT_146852b70,&PTR_GetPrivateStaticClass_143f59f60);
  }
  return DAT_146852b70;
}



// FUNCTION 1404a5f70 FUN_1404a5f70 body=47 status=ok
// SIG undefined FUN_1404a5f70(void)

longlong FUN_1404a5f70(void)

{
  if (DAT_146852b68 == 0) {
    FUN_1417866a0(&DAT_146852b68,&PTR_FUN_1461fb230);
  }
  return DAT_146852b68;
}



// FUNCTION 1404a5fa0 FUN_1404a5fa0 body=392 status=ok
// SIG undefined FUN_1404a5fa0(void)

void FUN_1404a5fa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 200);
  iVar2 = *(int *)(param_1 + 0xf0);
  puStack_28 = (uint *)(param_1 + 0xd8);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar5 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_1404a605f;
      uVar5 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1404a605f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xf0);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      (**(code **)(**(longlong **)((longlong)iStack_5c * 0x20 + 8 + *plVar1) + 0x108))();
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1404a6130 FUN_1404a6130 body=828 status=ok
// SIG undefined FUN_1404a6130(void)

void FUN_1404a6130(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  undefined8 local_res8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  longlong *local_28;
  undefined2 local_20;
  
  uVar6 = FUN_14168dc80();
  iVar10 = 0;
  plVar1 = (longlong *)(param_1 + 200);
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 1;
  iVar8 = *(int *)(param_1 + 0xf0);
  puStack_78 = (uint *)(param_1 + 0xd8);
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar8 != 0) {
    puVar12 = *(uint **)(param_1 + 0xe8);
    if (*(uint **)(param_1 + 0xe8) == (uint *)0x0) {
      puVar12 = puStack_78;
    }
    uVar5 = *puVar12;
    local_c8._0_4_ = iVar10;
    uStack_b0 = iVar10;
    while (uVar5 == 0) {
      lVar9 = (longlong)(int)local_c8;
      uStack_b0 = uStack_b0 + 0x20;
      iVar11 = (int)local_c8 + 1;
      bVar2 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
      local_c8._0_4_ = iVar11;
      if (bVar2) goto LAB_1404a620a;
      uVar5 = puVar12[lVar9 + 1];
    }
    local_c8._4_4_ = -uVar5 & uVar5;
    iVar11 = 0x1f;
    if (local_c8._4_4_ != 0) {
      for (; local_c8._4_4_ >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (local_c8._4_4_ == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    local_b8._4_4_ = (uStack_b0 - iVar11) + 0x1f;
    if (iVar8 < local_b8._4_4_) {
LAB_1404a620a:
      local_b8._4_4_ = iVar8;
    }
  }
  uStack_70 = CONCAT44(local_b8._4_4_,0xffffffff);
  auVar3._8_4_ = uStack_b0;
  auVar3._0_8_ = uStack_70;
  auVar3._12_4_ = iStack_ac;
  local_60._0_4_ = SUB84(plVar1,0);
  local_60._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80._0_4_ = (int)local_c8;
  uStack_80._4_4_ = local_c8._4_4_;
  local_90 = 0;
  uStack_b0 = 0xffffffff;
  iStack_ac = local_b8._4_4_;
  uStack_c0._0_4_ = (int)local_c8;
  uStack_c0._4_4_ = local_c8._4_4_;
  uStack_68 = auVar3._8_8_;
  local_a8._8_4_ = (undefined4)local_60;
  local_a8._0_8_ = uStack_68;
  local_a8._12_4_ = local_60._4_4_;
  bVar2 = local_b8._4_4_ < *(int *)(param_1 + 0xf0);
  local_c8 = plVar1;
  local_98 = plVar1;
  local_88 = plVar1;
  local_b8 = puStack_78;
  local_60 = plVar1;
  if (bVar2) {
    do {
      (**(code **)(**(longlong **)((longlong)iStack_ac * 0x20 + 8 + *local_c8) + 0x110))();
      uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    } while (iStack_ac < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  local_88 = (longlong *)(param_1 + 0x78);
  iVar8 = *(int *)(param_1 + 0xa0);
  uStack_c0 = (uint *)(param_1 + 0x88);
  local_c8 = (longlong *)0x100000000;
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  if (iVar8 != 0) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = uStack_c0;
    }
    uVar5 = *puVar12;
    uStack_b0 = iVar10;
    while (uVar5 == 0) {
      uStack_b0 = uStack_b0 + 0x20;
      local_c8._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,iVar10 + 1);
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_1404a6366;
      uVar5 = puVar12[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    local_c8 = (longlong *)CONCAT44(uVar5,(int)local_c8);
    if (uVar5 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    local_b8._4_4_ = (uStack_b0 - iVar10) + 0x1f;
    if (iVar8 < local_b8._4_4_) {
LAB_1404a6366:
      local_b8._4_4_ = iVar8;
    }
  }
  local_b8._0_4_ = 0xffffffff;
  uStack_70 = CONCAT44(local_b8._4_4_,0xffffffff);
  auVar4._8_4_ = uStack_b0;
  auVar4._0_8_ = uStack_70;
  auVar4._12_4_ = iStack_ac;
  local_60._0_4_ = SUB84(local_88,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_68 = auVar4._8_8_;
  uStack_80 = (longlong)local_c8;
  local_20 = 0;
  uStack_50 = (longlong)local_c8;
  local_38._8_4_ = (undefined4)local_60;
  local_38._0_8_ = uStack_68;
  local_38._12_4_ = local_60._4_4_;
  iVar8 = local_b8._4_4_;
  puStack_78 = uStack_c0;
  local_58 = local_88;
  local_48 = uStack_c0;
  uStack_40 = uStack_70;
  local_28 = local_88;
  local_60 = local_88;
  if (local_b8._4_4_ < *(int *)(param_1 + 0xa0)) {
    do {
      uVar7 = FName::ToString(*local_58 + (longlong)iVar8 * 0x18,&local_c8);
      GetOnlineModuleName(&local_res8,uVar7);
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free();
      }
      FModuleManager::UnloadModule(uVar6,local_res8,1);
      uStack_40 = CONCAT44(uStack_40._4_4_,(uint)uStack_40 & ~uStack_50._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      iVar8 = uStack_40._4_4_;
    } while (uStack_40._4_4_ < (int)local_48[6]);
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_28,(int)local_28[1] - *(int *)((longlong)local_28 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1404a6470 FUN_1404a6470 body=1060 status=ok
// SIG undefined FUN_1404a6470(void)

longlong * FUN_1404a6470(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong local_50 [3];
  
  uVar2 = DAT_146852c30;
  local_res10 = param_2;
  plVar7 = (longlong *)0x0;
  local_res18 = 0;
  if (param_2 == 0) {
    plVar8 = (longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_res10;
  }
  local_90 = *plVar8;
  local_res18 = 0;
  if (local_90 == 0) {
    return (longlong *)0x0;
  }
  plVar8 = (longlong *)(param_1 + 200);
  iVar4 = (int)((ulonglong)local_90 >> 0x20);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar6 = *(longlong *)(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar6 = param_1 + 0x100;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)(iVar4 + (int)local_90) &
                             (longlong)*(int *)(param_1 + 0x110) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar3 * 0x20 + *plVar8);
        if (*plVar11 == local_90) {
          if (iVar3 != -1) goto LAB_1404a6542;
          break;
        }
        iVar3 = (int)plVar11[3];
      } while (iVar3 != -1);
    }
  }
  plVar11 = plVar7;
LAB_1404a6542:
  plVar10 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar10 = plVar7;
  }
  if (plVar10 != (longlong *)0x0) goto LAB_1404a6861;
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar6 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar6 = param_1 + 0xb0;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)(iVar4 + (int)local_90) &
                             (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x18) == local_90) {
          if (iVar4 != -1) goto LAB_1404a65d3;
          break;
        }
        iVar4 = (int)plVar11[2];
      } while (iVar4 != -1);
    }
  }
  plVar11 = plVar7;
LAB_1404a65d3:
  plVar9 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar7;
  }
  local_88 = local_90;
  if (plVar9 == (longlong *)0x0) {
    uVar5 = FName::ToString(&local_88,local_50);
    lVar6 = LoadSubsystemModule(uVar5);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
        lVar6 = *(longlong *)(param_1 + 0xb8);
        if (*(longlong *)(param_1 + 0xb8) == 0) {
          lVar6 = param_1 + 0xb0;
        }
        iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_88 >> 0x20) + (int)local_88) &
                                 (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
        if (iVar4 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x18;
            if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x18) == local_88) {
              if ((iVar4 != -1) && (plVar9 = (longlong *)(lVar6 + 8), lVar6 != 0))
              goto LAB_1404a669c;
              break;
            }
            iVar4 = *(int *)(lVar6 + 0x10);
          } while (iVar4 != -1);
        }
      }
      plVar9 = plVar7;
    }
  }
LAB_1404a669c:
  if (plVar9 == (longlong *)0x0) goto LAB_1404a6861;
  (**(code **)(*(longlong *)*plVar9 + 8))((longlong *)*plVar9,&local_80,uVar2);
  if (local_80 == 0) {
    if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
      lVar6 = *(longlong *)(param_1 + 0x158);
      if (*(longlong *)(param_1 + 0x158) == 0) {
        lVar6 = param_1 + 0x150;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_90 >> 0x20) + (int)local_90) &
                               (longlong)*(int *)(param_1 + 0x160) - 1U) * 4);
      if (iVar4 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x118);
        do {
          plVar8 = (longlong *)(lVar6 + (longlong)iVar4 * 0x18);
          if (*(longlong *)(lVar6 + (longlong)iVar4 * 0x18) == local_90) {
            if (iVar4 != -1) goto LAB_1404a67e3;
            break;
          }
          iVar4 = (int)plVar8[2];
        } while (iVar4 != -1);
      }
    }
    plVar8 = plVar7;
LAB_1404a67e3:
    plVar11 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar11 = plVar7;
    }
    if ((plVar11 == (longlong *)0x0) || ((char)*plVar11 == '\0')) {
      local_60 = &local_90;
      local_res18 = CONCAT71(local_res18._1_7_,1);
      local_58 = &local_res18;
      FUN_1404a8630((longlong *)(param_1 + 0x118),local_98,&local_60,0);
    }
  }
  else {
    local_70 = &local_90;
    local_68 = &local_80;
    FUN_1404a8cf0(plVar8,local_res20,&local_70,0);
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
      lVar6 = *(longlong *)(param_1 + 0x108);
      if (*(longlong *)(param_1 + 0x108) == 0) {
        lVar6 = param_1 + 0x100;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_90 >> 0x20) + (int)local_90) &
                               (longlong)*(int *)(param_1 + 0x110) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar11 = (longlong *)((longlong)iVar4 * 0x20 + *plVar8);
          if (*plVar11 == local_90) {
            if (iVar4 != -1) goto LAB_1404a6763;
            goto LAB_1404a6760;
          }
          iVar4 = (int)plVar11[3];
        } while (iVar4 != -1);
        plVar10 = (longlong *)0x0;
        goto LAB_1404a6822;
      }
    }
LAB_1404a6760:
    plVar11 = plVar7;
LAB_1404a6763:
    plVar10 = plVar11 + 1;
    if (plVar11 == (longlong *)0x0) {
      plVar10 = plVar7;
    }
  }
LAB_1404a6822:
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_78 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
LAB_1404a6861:
  if (plVar10 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar10;
  }
  return plVar7;
}



// FUNCTION 1404a68a0 FUN_1404a68a0 body=106 status=ok
// SIG undefined FUN_1404a68a0(void)

undefined8 FUN_1404a68a0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x24) == 0)) {
LAB_1404a68ca:
    cVar1 = IOnlineSubsystem::IsLoaded(param_1 + 8);
    if (cVar1 != '\0') {
      uVar2 = FUN_1404b0000(param_1 + 8);
      return uVar2;
    }
    return 0;
  }
  if (param_2 == '\0') {
    cVar1 = IOnlineSubsystem::IsLoaded(param_1 + 0x20);
    if (cVar1 == '\0') goto LAB_1404a68ca;
  }
  uVar2 = FUN_1404b0000(param_1 + 0x20);
  return uVar2;
}



// FUNCTION 1404a6910 FUN_1404a6910 body=134 status=ok
// SIG undefined FUN_1404a6910(void)

undefined8 FUN_1404a6910(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x28),local_res8,param_2);
  piVar3 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar3 = (int *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x28));
  }
  piVar4 = piVar3 + 4;
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (((piVar4 != (int *)0x0) && ((*piVar4 != 0 || (piVar4[1] != 0)))) &&
     ((param_3 != '\0' || (cVar1 = IOnlineSubsystem::IsLoaded(piVar4), cVar1 != '\0')))) {
    uVar2 = FUN_1404b0000(piVar4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1404a69a0 FUN_1404a69a0 body=382 status=ok
// SIG undefined FUN_1404a69a0(void)

void FUN_1404a69a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong **pplVar6;
  int iVar7;
  longlong local_res10 [3];
  longlong *local_28;
  longlong *plStack_20;
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)(param_1 + 8);
  local_res10[1] = 0;
  if (param_2 != 0) {
    plVar3 = local_res10;
  }
  local_res10[2] = *plVar3;
  local_res10[1] = 0;
  if (local_res10[2] != 0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
      lVar4 = *(longlong *)(param_1 + 0x108);
      if (*(longlong *)(param_1 + 0x108) == 0) {
        lVar4 = param_1 + 0x100;
      }
      iVar7 = *(int *)(lVar4 + ((longlong)
                                ((int)((ulonglong)local_res10[2] >> 0x20) + (int)local_res10[2]) &
                               (longlong)*(int *)(param_1 + 0x110) - 1U) * 4);
      if (iVar7 != -1) {
        lVar4 = *(longlong *)(param_1 + 200);
        while( true ) {
          lVar5 = (longlong)iVar7 * 0x20;
          if (*(longlong *)(lVar5 + lVar4) == local_res10[2]) break;
          iVar7 = *(int *)(lVar5 + 0x18 + lVar4);
          if (iVar7 == -1) {
            return;
          }
        }
        if (iVar7 != -1) {
          pplVar6 = (longlong **)((longlong)iVar7 * 0x20 + 8 + lVar4);
          if (&local_28 != pplVar6) {
            local_28 = *pplVar6;
            *pplVar6 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_20,pplVar6 + 1);
          }
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove((longlong *)(param_1 + 200),iVar7);
          if (local_28 != (longlong *)0x0) {
            (**(code **)(*local_28 + 0x110))();
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x118,local_res10[2]);
          }
          plVar3 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_20 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_20)(plStack_20);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plStack_20 + 8))(plStack_20,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1404a6b20 FUN_1404a6b20 body=158 status=ok
// SIG undefined FUN_1404a6b20(void)

bool FUN_1404a6b20(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong local_res10;
  longlong local_res18 [2];
  longlong local_18 [2];
  
  local_res10 = param_2;
  plVar2 = (longlong *)(param_1 + 8);
  local_res18[0] = 0;
  if (param_2 != 0) {
    plVar2 = &local_res10;
  }
  local_res18[0] = *plVar2;
  local_res10 = 0;
  if (local_res18[0] != 0) {
    uVar3 = FName::ToString(local_res18,local_18);
    puVar4 = (undefined8 *)GetOnlineModuleName(&local_res10,uVar3);
    uVar3 = FUN_14168dc80();
    cVar1 = FModuleManager::IsModuleLoaded(uVar3,*puVar4);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 1404a6bc0 FUN_1404a6bc0 body=157 status=ok
// SIG undefined FUN_1404a6bc0(void)

void FUN_1404a6bc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined8 local_res18 [2];
  longlong *local_18;
  undefined8 *local_10;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar2 = param_1 + 0xb0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) {
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_18 = &local_res10;
  local_10 = local_res18;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_1404a88c0((longlong *)(param_1 + 0x78),local_res8,&local_18,0);
  return;
}



// FUNCTION 1404a6cd0 FUN_1404a6cd0 body=306 status=ok
// SIG undefined FUN_1404a6cd0(void)

void FUN_1404a6cd0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 local_res8 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar2 = FUN_14168dc80();
  cVar1 = FModuleManager::ModuleExists(uVar2,L"HTTP");
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"HTTP",1);
    uVar2 = FUN_14168dc80();
    FUN_141690010(uVar2,*puVar3);
  }
  uVar2 = FUN_14168dc80();
  cVar1 = FModuleManager::ModuleExists(uVar2,L"XMPP");
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"XMPP",1);
    uVar2 = FUN_14168dc80();
    FUN_141690010(uVar2,*puVar3);
  }
  FUN_1404b1c90(param_1);
  FUN_1404b1f50(param_1);
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"OnlineSubsystem",L"NativePlatformService",&local_18,&DAT_1468e2360);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar4 = local_18;
  }
  puVar3 = (undefined8 *)FName::FName(local_res8,puVar4,1);
  *(undefined8 *)(param_1 + 0x20) = *puVar3;
  FUN_1404b4320(param_1);
  FUN_1404b02e0(1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404a6e30 FUN_1404a6e30 body=268 status=ok
// SIG undefined FUN_1404a6e30(void)

undefined8 * FUN_1404a6e30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f60040;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x19,0);
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 5);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1404a6f40 FUN_1404a6f40 body=4079 status=ok
// SIG undefined FUN_1404a6f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1404a6f40(longlong *param_1,int *param_2)

{
  int *piVar1;
  void **ppvVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  void *pvVar16;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *plStack_170;
  longlong local_168;
  undefined8 local_160;
  void *local_158;
  int local_150;
  int local_14c;
  longlong *local_148;
  longlong *plStack_140;
  undefined4 local_138 [2];
  longlong local_130;
  longlong *plStack_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  int *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_168 = 0;
  local_160 = 0;
  local_178 = (longlong *)0x0;
  plStack_170 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  plStack_140 = (longlong *)0x0;
  local_60 = param_2;
  cVar4 = FUN_1404b4a60(*param_1,local_138);
  plVar8 = local_178;
  if (cVar4 != '\0') {
    do {
      plVar9 = (longlong *)0x0;
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 8))();
      local_158 = (void *)0x0;
      local_150 = *(int *)(puVar6 + 1);
      lVar14 = (longlong)local_150;
      pvVar16 = (void *)*puVar6;
      if (local_150 == 0) {
        local_14c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
        _guard_xfg_dispatch_icall_nop(local_158,pvVar16,lVar14 * 2);
      }
      local_108 = (longlong *)0x0;
      local_148 = (longlong *)0x0;
      local_110 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_108);
      plVar7 = local_108;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_108 + 1;
        lVar14 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_178;
        if ((int)lVar14 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar8 = local_178;
          if (iVar13 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
            plVar8 = local_178;
          }
        }
      }
      uVar3 = local_160;
      plVar7 = plStack_170;
      switch(local_138[0]) {
      case 0:
        if (plVar8 != (longlong *)0x0) {
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
            plVar8 = local_178;
          }
          lVar14 = (longlong)(int)local_160;
          local_160._0_4_ = (int)local_160 + 1;
          if (local_160._4_4_ < (int)local_160) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_168,uVar3 & 0xffffffff);
          }
          plVar11 = plStack_170;
          puVar6 = (undefined8 *)(lVar14 * 0x10 + local_168);
          *puVar6 = plVar8;
          puVar6[1] = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar7 + 1;
            lVar14 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
        }
        plVar7 = (longlong *)operator_new(0x38);
        plVar8 = plVar9;
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[4] = 0;
          plVar7[5] = 0;
          plVar7[6] = 0;
          plVar8 = plVar7;
        }
        plVar7 = (longlong *)operator_new(0x18);
        local_d8 = plVar9;
        if (plVar7 != (longlong *)0x0) {
          *(int *)(plVar7 + 1) = 1;
          *(int *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_FUN_143f60d38;
          plVar7[2] = (longlong)plVar8;
          local_d8 = plVar7;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_e0,plVar8,plVar8);
        local_e0 = 0;
        local_178 = plVar8;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_d8);
        plVar8 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_d8 + 1;
          lVar14 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        pvVar16 = local_158;
        plVar8 = local_178;
        ppvVar2 = (void **)(local_178 + 1);
        *(int *)local_178 = 6;
        if (ppvVar2 != &local_158) {
          lVar14 = (longlong)local_150;
          *(int *)(local_178 + 2) = local_150;
          if ((local_150 == 0) && (*(int *)((longlong)local_178 + 0x14) == 0)) {
            *(int *)((longlong)local_178 + 0x14) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_150);
            _guard_xfg_dispatch_icall_nop(*ppvVar2,pvVar16,lVar14 * 2);
          }
        }
        plVar11 = (longlong *)operator_new(0x50);
        plVar7 = plVar9;
        if (plVar11 != (longlong *)0x0) {
          plVar11[2] = 0;
          plVar11[3] = 0;
          plVar11[7] = 0;
          plVar11[9] = 0;
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[4] = 0;
          plVar11[5] = 0;
          *(int *)(plVar11 + 6) = -1;
          *(int *)((longlong)plVar11 + 0x34) = 0;
          plVar11[8] = 0;
          plVar7 = plVar11;
        }
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 1;
          *(int *)((longlong)plVar11 + 0xc) = 1;
          *plVar11 = (longlong)&PTR_FUN_143f60d28;
          plVar11[2] = (longlong)plVar7;
          plVar9 = plVar11;
        }
        local_120 = plVar7;
        local_118 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_120,plVar7);
        if ((longlong **)(plVar8 + 5) != &local_120) {
          plVar8[5] = (longlong)plVar7;
          local_120 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar8 + 6,&local_118);
          plVar9 = local_118;
        }
        if (plVar9 == (longlong *)0x0) goto switchD_1404a708a_default;
        LOCK();
        plVar8 = plVar9 + 1;
        lVar14 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_178;
        if ((int)lVar14 != 1) goto switchD_1404a708a_default;
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_178;
        if (iVar13 != 1) goto switchD_1404a708a_default;
        lVar14 = *plVar9;
        goto LAB_1404a7c83;
      case 1:
        if ((int)local_160 < 1) goto switchD_1404a708a_default;
        if (&local_158 != (void **)(plVar8 + 1)) {
          local_150 = (int)plVar8[2];
          lVar14 = (longlong)local_150;
          pvVar16 = (void *)plVar8[1];
          if ((local_150 == 0) && (local_14c == 0)) {
            local_14c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150);
            _guard_xfg_dispatch_icall_nop(local_158,pvVar16,lVar14 * 2);
          }
        }
        plVar11 = (longlong *)operator_new(0x20);
        plVar7 = plVar9;
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 0;
          *plVar11 = (longlong)&PTR_AsObject_143f606d8;
          plVar11[2] = plVar8[5];
          lVar14 = plVar8[6];
          plVar11[3] = lVar14;
          if (lVar14 != 0) {
            LOCK();
            *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
            UNLOCK();
          }
          *(int *)(plVar11 + 1) = 6;
          plVar7 = plVar11;
        }
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *(int *)(plVar8 + 1) = 1;
          *plVar8 = (longlong)&PTR_FUN_143f60d18;
          *(int *)((longlong)plVar8 + 0xc) = 1;
          plVar8[2] = (longlong)plVar7;
          plVar9 = plVar8;
        }
        local_c8 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_d0,plVar7);
        local_d0 = 0;
        local_148 = plVar7;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_c8);
        plVar8 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_c8 + 1;
          lVar14 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        iVar13 = (int)local_160;
        iVar15 = (int)local_160 + -1;
        puVar6 = (undefined8 *)((longlong)iVar15 * 0x10 + local_168);
        plVar9 = (longlong *)puVar6[1];
        plVar8 = (longlong *)*puVar6;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        pvVar16 = (void *)(local_168 + (longlong)iVar15 * 0x10);
        plVar7 = *(longlong **)((longlong)pvVar16 + 8);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar7 + 1;
          lVar14 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
        iVar5 = ((int)local_160 - iVar15) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (pvVar16,(void *)((longlong)iVar13 * 0x10 + local_168),(longlong)iVar5 << 4);
        }
        local_160 = CONCAT44(local_160._4_4_,iVar15);
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_168);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_100 = 0;
        local_178 = plVar8;
        local_f8 = plVar9;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_f8);
        plVar8 = local_f8;
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_f8 + 1;
          lVar14 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        plVar8 = local_178;
        if (plVar9 == (longlong *)0x0) goto switchD_1404a708a_default;
        goto LAB_1404a7c57;
      case 2:
        if (plVar8 != (longlong *)0x0) {
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
            UNLOCK();
            plVar8 = local_178;
          }
          lVar14 = (longlong)(int)local_160;
          local_160._0_4_ = (int)local_160 + 1;
          if (local_160._4_4_ < (int)local_160) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_168,uVar3 & 0xffffffff);
          }
          plVar11 = plStack_170;
          puVar6 = (undefined8 *)(lVar14 * 0x10 + local_168);
          *puVar6 = plVar8;
          puVar6[1] = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar7 + 1;
            lVar14 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
        }
        plVar7 = (longlong *)operator_new(0x38);
        plVar8 = plVar9;
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          plVar7[4] = 0;
          plVar7[5] = 0;
          plVar7[6] = 0;
          plVar8 = plVar7;
        }
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *(int *)(plVar7 + 1) = 1;
          *(int *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_FUN_143f60d38;
          plVar7[2] = (longlong)plVar8;
          plVar9 = plVar7;
        }
        local_b8 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_c0,plVar8);
        local_c0 = 0;
        local_178 = plVar8;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_b8);
        plVar8 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_b8 + 1;
          lVar14 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        pvVar16 = local_158;
        plVar8 = local_178;
        ppvVar2 = (void **)(local_178 + 1);
        *(int *)local_178 = 5;
        if (ppvVar2 != &local_158) {
          lVar14 = (longlong)local_150;
          *(int *)(local_178 + 2) = local_150;
          if ((local_150 == 0) && (*(int *)((longlong)local_178 + 0x14) == 0)) {
            *(int *)((longlong)local_178 + 0x14) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_150);
            _guard_xfg_dispatch_icall_nop(*ppvVar2,pvVar16,lVar14 * 2);
          }
        }
        goto switchD_1404a708a_default;
      case 3:
        if (0 < (int)local_160) {
          if (&local_158 != (void **)(plVar8 + 1)) {
            local_150 = (int)plVar8[2];
            lVar14 = (longlong)local_150;
            pvVar16 = (void *)plVar8[1];
            if ((local_150 == 0) && (local_14c == 0)) {
              local_14c = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150);
              _guard_xfg_dispatch_icall_nop(local_158,pvVar16,lVar14 * 2);
            }
          }
          plVar11 = (longlong *)operator_new(0x20);
          plVar7 = plVar9;
          if (plVar11 != (longlong *)0x0) {
            *(int *)(plVar11 + 1) = 0;
            *plVar11 = (longlong)&PTR_AsObject_143f60698;
            plVar11[2] = 0;
            iVar13 = (int)plVar8[4];
            puVar6 = (undefined8 *)plVar8[3];
            *(int *)(plVar11 + 3) = iVar13;
            plVar7 = plVar11;
            if (iVar13 == 0) {
              *(int *)((longlong)plVar11 + 0x1c) = 0;
              *(int *)(plVar11 + 1) = 5;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar11 + 2,iVar13,0);
              puVar12 = (undefined8 *)plVar11[2];
              do {
                *puVar12 = *puVar6;
                lVar14 = puVar6[1];
                puVar12[1] = lVar14;
                if (lVar14 != 0) {
                  LOCK();
                  *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
                  UNLOCK();
                }
                puVar12 = puVar12 + 2;
                puVar6 = puVar6 + 2;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              *(int *)(plVar11 + 1) = 5;
            }
          }
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 != (longlong *)0x0) {
            *(int *)(plVar8 + 1) = 1;
            *plVar8 = (longlong)&PTR_FUN_143f60d18;
            *(int *)((longlong)plVar8 + 0xc) = 1;
            plVar8[2] = (longlong)plVar7;
            plVar9 = plVar8;
          }
          local_a8 = plVar9;
          SharedPointerInternals::EnableSharedFromThis(&local_b0,plVar7);
          local_b0 = 0;
          local_148 = plVar7;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_a8);
          plVar8 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_a8 + 1;
            lVar14 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          iVar13 = (int)local_160;
          iVar15 = (int)local_160 + -1;
          puVar6 = (undefined8 *)((longlong)iVar15 * 0x10 + local_168);
          plVar9 = (longlong *)puVar6[1];
          plVar8 = (longlong *)*puVar6;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          pvVar16 = (void *)(local_168 + (longlong)iVar15 * 0x10);
          plVar7 = *(longlong **)((longlong)pvVar16 + 8);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar7 + 1;
            lVar14 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
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
          iVar5 = ((int)local_160 - iVar15) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (pvVar16,(void *)((longlong)iVar13 * 0x10 + local_168),(longlong)iVar5 << 4);
          }
          local_160 = CONCAT44(local_160._4_4_,iVar15);
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_168);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_f0 = 0;
          local_178 = plVar8;
          local_e8 = plVar9;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_170,&local_e8);
          plVar7 = local_e8;
          plVar8 = local_178;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_e8 + 1;
            lVar14 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar8 = local_178;
              if (iVar13 == 1) {
                (**(code **)(*local_e8 + 8))(local_e8,1);
                plVar8 = local_178;
              }
            }
          }
          break;
        }
        goto switchD_1404a708a_default;
      case 4:
        plVar11 = (longlong *)operator_new(0x18);
        plVar7 = plVar9;
        if (plVar11 != (longlong *)0x0) {
          *(undefined1 *)(plVar11 + 2) = *(undefined1 *)(*param_1 + 0x68);
          *plVar11 = (longlong)&PTR_AsObject_143f60658;
          *(int *)(plVar11 + 1) = 4;
          plVar7 = plVar11;
        }
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 1;
          *plVar11 = (longlong)&PTR_FUN_143f60d18;
          *(int *)((longlong)plVar11 + 0xc) = 1;
          plVar11[2] = (longlong)plVar7;
          plVar9 = plVar11;
        }
        local_98 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_a0,plVar7);
        local_a0 = 0;
        local_148 = plVar7;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_98);
        plVar9 = local_98;
        break;
      case 5:
        plVar11 = (longlong *)operator_new(0x20);
        plVar7 = plVar9;
        if (plVar11 != (longlong *)0x0) {
          uVar10 = (**(code **)(*(longlong *)*param_1 + 0x10))();
          *(int *)(plVar11 + 1) = 0;
          *plVar11 = (longlong)&PTR_AsObject_143f605c8;
          FString::FString(plVar11 + 2,uVar10);
          *(int *)(plVar11 + 1) = 2;
          plVar7 = plVar11;
        }
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 1;
          *plVar11 = (longlong)&PTR_FUN_143f60d18;
          *(int *)((longlong)plVar11 + 0xc) = 1;
          plVar11[2] = (longlong)plVar7;
          plVar9 = plVar11;
        }
        local_88 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_90,plVar7);
        local_90 = 0;
        local_148 = plVar7;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_88);
        plVar9 = local_88;
        break;
      case 6:
        plVar11 = (longlong *)operator_new(0x18);
        plVar7 = plVar9;
        if (plVar11 != (longlong *)0x0) {
          plVar11[2] = *(longlong *)(*param_1 + 0x58);
          *plVar11 = (longlong)&PTR_AsObject_143f60608;
          *(int *)(plVar11 + 1) = 3;
          plVar7 = plVar11;
        }
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 1;
          *plVar11 = (longlong)&PTR_FUN_143f60d18;
          *(int *)((longlong)plVar11 + 0xc) = 1;
          plVar11[2] = (longlong)plVar7;
          plVar9 = plVar11;
        }
        local_78 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_80,plVar7);
        local_80 = 0;
        local_148 = plVar7;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_78);
        plVar9 = local_78;
        break;
      case 7:
        plVar11 = (longlong *)operator_new(0x10);
        plVar7 = plVar9;
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 1;
          *plVar11 = (longlong)&PTR_AsObject_143f60718;
          plVar7 = plVar11;
        }
        plVar11 = (longlong *)operator_new(0x18);
        if (plVar11 != (longlong *)0x0) {
          *(int *)(plVar11 + 1) = 1;
          *plVar11 = (longlong)&PTR_FUN_143f60d18;
          *(int *)((longlong)plVar11 + 0xc) = 1;
          plVar11[2] = (longlong)plVar7;
          plVar9 = plVar11;
        }
        local_68 = plVar9;
        SharedPointerInternals::EnableSharedFromThis(&local_70,plVar7);
        local_70 = 0;
        local_148 = plVar7;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_140,&local_68);
        plVar9 = local_68;
        break;
      case 8:
        if (local_158 != (void *)0x0) {
          FMemory::Free();
        }
        goto LAB_1404a7df9;
      default:
        goto switchD_1404a708a_default;
      }
      if (plVar9 != (longlong *)0x0) {
LAB_1404a7c57:
        LOCK();
        plVar8 = plVar9 + 1;
        lVar14 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_178;
        if ((int)lVar14 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar8 = local_178;
          if (iVar13 == 1) {
            lVar14 = *plVar9;
LAB_1404a7c83:
            (**(code **)(lVar14 + 8))(plVar9,1);
            plVar8 = local_178;
          }
        }
      }
switchD_1404a708a_default:
      if ((local_148 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
        if ((int)*plVar8 == 6) {
          FJsonObject::SetField(plVar8[5],&local_158);
        }
        else {
          iVar13 = (int)plVar8[4];
          *(int *)(plVar8 + 4) = iVar13 + 1;
          if (*(int *)((longlong)plVar8 + 0x24) < iVar13 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 3,iVar13);
          }
          puVar6 = (undefined8 *)((longlong)iVar13 * 0x10 + plVar8[3]);
          *puVar6 = local_148;
          puVar6[1] = plStack_140;
          if (plStack_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
            UNLOCK();
            plVar8 = local_178;
          }
        }
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free();
      }
      cVar4 = FUN_1404b4a60(*param_1,local_138);
      piVar1 = local_60;
    } while (cVar4 != '\0');
    if ((plVar8 != (longlong *)0x0) && (*(int *)(*param_1 + 0x40) < 2)) {
      *local_60 = (int)*plVar8;
      FString::operator=(local_60 + 2,plVar8 + 1);
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(piVar1 + 6,plVar8 + 3);
      plVar7 = (longlong *)plVar8[6];
      plVar9 = (longlong *)(piVar1 + 10);
      lVar14 = plVar8[5];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_130 = lVar14;
      plStack_128 = plVar7;
      if (&local_130 != plVar9) {
        local_130 = *plVar9;
        plStack_128 = *(longlong **)(piVar1 + 0xc);
        *plVar9 = lVar14;
        *(longlong **)(piVar1 + 0xc) = plVar7;
        local_58 = lVar14;
        plStack_50 = plVar7;
      }
      plVar8 = plStack_128;
      if (plStack_128 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_128 + 1;
        lVar14 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_128)(plStack_128);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plStack_128 + 8))(plStack_128,1);
          }
        }
      }
      uVar10 = 1;
      goto LAB_1404a7dfc;
    }
  }
LAB_1404a7df9:
  uVar10 = 0;
LAB_1404a7dfc:
  plVar8 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_140 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_170 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_170 + 8))(plStack_170,1);
      }
    }
  }
  if ((int)local_160 != 0) {
    plVar8 = (longlong *)(local_168 + 8);
    iVar13 = (int)local_160;
    do {
      plVar9 = (longlong *)*plVar8;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar9 + 1;
        lVar14 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar8 = plVar8 + 2;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 1404a7f60 FUN_1404a7f60 body=354 status=ok
// SIG undefined FUN_1404a7f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1404a7f60(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  cVar5 = FUN_1404a6f40(param_1,local_68);
  if ((cVar5 == '\0') || (local_40 == 0)) {
    uVar7 = 0;
  }
  else {
    local_78 = local_40;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    plVar6 = local_38;
    if (&local_78 != param_2) {
      local_78 = *param_2;
      plVar6 = (longlong *)param_2[1];
      local_30 = local_40;
      plStack_28 = local_38;
      *param_2 = local_40;
      param_2[1] = (longlong)local_38;
    }
    plStack_70 = plVar6;
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
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    uVar7 = 1;
  }
  plVar6 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_50);
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1404a80d0 FUN_1404a80d0 body=542 status=ok
// SIG undefined FUN_1404a80d0(void)

int * FUN_1404a80d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (undefined4 *)param_3[1];
  bVar11 = false;
  *param_2 = local_38[0];
  *local_30 = *(longlong *)*param_3;
  *(undefined4 *)(local_30 + 1) = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar3;
  *(undefined4 *)(local_30 + 2) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar5;
  local_30[3] = *(longlong *)(puVar1 + 4);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 *)(local_30 + 4) = puVar1[6];
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    lVar2 = *local_30;
    if (iVar10 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x30) == lVar2) goto LAB_1404a81df;
          iVar8 = *(int *)(*param_1 + 0x28 + (longlong)iVar8 * 0x30);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_1404a81df:
    bVar11 = iVar8 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      iVar10 = *(int *)((longlong)_Dst + 8);
      if (((iVar10 == 6) || (iVar10 == 8)) || (iVar10 == 10)) {
        FMemory::operator_delete(*(undefined8 *)((longlong)_Dst + 0x10));
      }
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x10) = 0;
      *(undefined8 *)((longlong)_Dst + 0x18) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1404a82c4;
    }
  }
  cVar6 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar6 == '\0') {
    uVar9 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x2c) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_1404a82c4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1404a82f0 FUN_1404a82f0 body=820 status=ok
// SIG undefined FUN_1404a82f0(void)

int * FUN_1404a82f0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

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
  int iVar13;
  void *_Dst;
  char cVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  bool local_res8;
  
  iVar10 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)((longlong)iVar13 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar13;
  local_res8 = false;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar16 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  puVar8 = (undefined4 *)param_3[1];
  plVar16 = (longlong *)((longlong)iVar13 * 0x38 + *param_1);
  *plVar16 = *(longlong *)*param_3;
  *(undefined4 *)(plVar16 + 1) = 0;
  plVar16[2] = 0;
  plVar16[3] = 0;
  uVar4 = puVar8[1];
  uVar5 = puVar8[2];
  uVar6 = puVar8[3];
  *(undefined4 *)(plVar16 + 1) = *puVar8;
  *(undefined4 *)((longlong)plVar16 + 0xc) = uVar4;
  *(undefined4 *)(plVar16 + 2) = uVar5;
  *(undefined4 *)((longlong)plVar16 + 0x14) = uVar6;
  plVar16[3] = *(longlong *)(puVar8 + 4);
  *puVar8 = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined4 *)(plVar16 + 4) = puVar8[6];
  plVar16[5] = *(longlong *)(puVar8 + 8);
  *(undefined4 *)(plVar16 + 6) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    lVar2 = *plVar16;
    iVar12 = iVar17;
    if (uVar15 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        do {
          iVar12 = iVar11;
          if (*(longlong *)((longlong)iVar11 * 0x38 + *param_1) == lVar2) break;
          iVar11 = *(int *)((longlong)iVar11 * 0x38 + 0x30 + *param_1);
          iVar12 = iVar17;
        } while (iVar11 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar12 * 0x38 + *param_1);
      iVar10 = *(int *)((longlong)_Dst + 8);
      if (((iVar10 == 6) || (iVar10 == 8)) || (iVar10 == 10)) {
        FMemory::operator_delete(*(undefined8 *)((longlong)_Dst + 0x10));
      }
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x10) = 0;
      *(undefined8 *)((longlong)_Dst + 0x18) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,plVar16,0x30);
      iVar10 = *param_2;
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar10;
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x38 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      puVar8[1] = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar16 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1404a85fb;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar17;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar17;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*plVar16 >> 0x20) + (int)*plVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x34) = uVar15;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 6) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1404a85fb:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1404a8630 FUN_1404a8630 body=644 status=ok
// SIG undefined FUN_1404a8630(void)

int * FUN_1404a8630(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  bVar13 = false;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  plVar11 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
  puVar3 = (undefined1 *)param_3[1];
  lVar4 = *(longlong *)*param_3;
  *plVar11 = lVar4;
  *(undefined1 *)(plVar11 + 1) = *puVar3;
  *(undefined4 *)(plVar11 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x18) == lVar4) goto LAB_1404a878c;
          iVar7 = *(int *)(*param_1 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_1404a878c:
    bVar13 = iVar7 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),plVar11,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar8,1);
      *param_2 = iVar7;
      goto LAB_1404a888b;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_1404b4e10(param_1);
  }
LAB_1404a888b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1404a88c0 FUN_1404a88c0 body=566 status=ok
// SIG undefined FUN_1404a88c0(void)

int * FUN_1404a88c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  plVar7 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
  plVar5 = (longlong *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *plVar7 = lVar2;
  plVar7[1] = *plVar5;
  *(undefined4 *)(plVar7 + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar2) goto LAB_1404a8a1c;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1404a8a1c:
    bVar10 = iVar4 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),plVar7,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar4;
      goto LAB_1404a8acd;
    }
  }
  cVar3 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar3 == '\0') {
    uVar8 = (int)((ulonglong)*plVar7 >> 0x20) + (int)*plVar7 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar7 + 0x14) = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar7 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1404a8acd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1404a8b00 FUN_1404a8b00 body=483 status=ok
// SIG undefined FUN_1404a8b00(void)

int * FUN_1404a8b00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  lVar1 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(longlong *)*param_3;
  FVariantData::FVariantData(local_30 + 1,lVar1);
  bVar7 = false;
  *(undefined4 *)(local_30 + 4) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    lVar1 = *local_30;
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
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x30) == lVar1) goto LAB_1404a8bdf;
          iVar4 = *(int *)(*param_1 + 0x28 + (longlong)iVar4 * 0x30);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1404a8bdf:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x30 + *param_1);
      iVar6 = *(int *)((longlong)_Dst + 8);
      if (((iVar6 == 6) || (iVar6 == 8)) || (iVar6 == 10)) {
        FMemory::operator_delete(*(undefined8 *)((longlong)_Dst + 0x10));
      }
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x10) = 0;
      *(undefined8 *)((longlong)_Dst + 0x18) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1404a8cba;
    }
  }
  cVar2 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x2c) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1404a8cba:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1404a8cf0 FUN_1404a8cf0 body=648 status=ok
// SIG undefined FUN_1404a8cf0(void)

int * FUN_1404a8cf0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *_Src;
  void *_Dst;
  bool bVar12;
  
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar6;
  lVar4 = plVar6[1];
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar12 = false;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    lVar4 = *_Src;
    iVar8 = iVar9;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar4) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar12 = iVar8 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1404a8f50;
    }
  }
  cVar5 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar10 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1404a8f50:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1404a8f80 FUN_1404a8f80 body=781 status=ok
// SIG undefined FUN_1404a8f80(void)

int * FUN_1404a8f80(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  bool local_res8;
  
  iVar11 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar12 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
  uVar3 = param_3[1];
  *plVar12 = *(longlong *)*param_3;
  FVariantData::FVariantData(plVar12 + 1,uVar3);
  *(undefined4 *)(plVar12 + 4) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    lVar4 = *plVar12;
    iVar9 = iVar14;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x28) == lVar4) break;
          iVar10 = *(int *)(*param_1 + 0x20 + (longlong)iVar10 * 0x28);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar9 * 0x28);
      iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar9 * 0x28);
      if (((iVar11 == 6) || (iVar11 == 8)) || (iVar11 == 10)) {
        FMemory::operator_delete(*(undefined8 *)((longlong)_Dst + 0x10));
      }
      *(undefined4 *)((longlong)_Dst + 8) = 0;
      *(undefined8 *)((longlong)_Dst + 0x10) = 0;
      *(undefined8 *)((longlong)_Dst + 0x18) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,plVar12,0x20);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar4 + 4 + (longlong)iVar11 * 0x28) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1404a9264;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar8 = '\0';
    if (uVar6 != 0) {
      iVar11 = 0x1f - iVar14;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar8 = '\x1f' - (char)iVar14;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x24) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1404a9264:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1404a9290 FUN_1404a9290 body=706 status=ok
// SIG undefined FUN_1404a9290(void)

uint * FUN_1404a9290(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *_Src;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  longlong *plVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar11 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x20 + *param_1);
  puVar3 = (undefined8 *)param_3[1];
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar3;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      plVar14 = (longlong *)(lVar9 * 0x20 + *param_1);
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x18);
      uVar5 = *param_2;
      bVar4 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar5;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar5 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar14 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1404a952d;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar7);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x1c) = uVar5;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(uint *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_1404a952d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1404a9560 FUN_1404a9560 body=165 status=ok
// SIG undefined FUN_1404a9560(void)

undefined8 FUN_1404a9560(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 8));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1404a95d1;
          break;
        }
        iVar1 = (int)plVar4[6];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404a95d1:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((int)*plVar3 == 1) {
    iVar5 = (int)plVar3[1];
  }
  *param_3 = iVar5;
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}



// FUNCTION 1404a9610 FUN_1404a9610 body=169 status=ok
// SIG undefined FUN_1404a9610(void)

undefined8 FUN_1404a9610(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar2 = param_1 + 0x60;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x28));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1404a9685;
          break;
        }
        iVar1 = (int)plVar4[5];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404a9685:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((int)*plVar3 == 1) {
    iVar5 = (int)plVar3[1];
  }
  *param_3 = iVar5;
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}



// FUNCTION 1404a96c0 FUN_1404a96c0 body=168 status=ok
// SIG undefined FUN_1404a96c0(void)

undefined8 FUN_1404a96c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar2 = param_1 + 0x60;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x28));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1404a9735;
          break;
        }
        iVar1 = (int)plVar4[5];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404a9735:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  FUN_1404b0a70(plVar3,param_3);
  return 1;
}



// FUNCTION 1404a9770 FUN_1404a9770 body=183 status=ok
// SIG undefined FUN_1404a9770(void)

undefined8 FUN_1404a9770(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined7 uVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 8));
        if (*plVar5 == param_2) {
          if (iVar1 != -1) goto LAB_1404a97e1;
          break;
        }
        iVar1 = (int)plVar5[6];
      } while (iVar1 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1404a97e1:
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = (undefined7)((ulonglong)plVar3 >> 8);
  if ((int)*plVar3 != 9) {
    *param_3 = 0;
    return CONCAT71(uVar4,1);
  }
  *param_3 = (char)plVar3[1];
  return CONCAT71(uVar4,1);
}



// FUNCTION 1404a9830 FUN_1404a9830 body=226 status=ok
// SIG undefined FUN_1404a9830(void)

undefined8 * FUN_1404a9830(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x38);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = &PTR_LAB_143f614f8;
  puVar6[2] = 0;
  puVar6[3] = 0;
  local_10 = (longlong *)FUN_1404a9990(param_1);
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  puVar6[4] = local_18;
  puVar6[5] = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  *(undefined1 *)(puVar6 + 6) = 0;
  return puVar6;
}



// FUNCTION 1404a9920 FUN_1404a9920 body=112 status=ok
// SIG undefined FUN_1404a9920(void)

undefined8 * FUN_1404a9920(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_DestroyObject_143f614e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404a9990 FUN_1404a9990 body=203 status=ok
// SIG undefined FUN_1404a9990(void)

undefined8 * FUN_1404a9990(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)operator_new(0x30);
  if (puVar7 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar7 + 1) = 1;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
  *puVar7 = &PTR_FUN_143f60818;
  uVar4 = *param_1;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar7 + 3) = 0;
  puVar7[2] = &PTR_AsObject_143f606d8;
  puVar7[4] = uVar4;
  puVar7[5] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar7 + 3) = 6;
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
  return puVar7;
}



// FUNCTION 1404a9a60 FUN_1404a9a60 body=5324 status=ok
// SIG undefined FUN_1404a9a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1404a9a60(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  undefined8 uVar26;
  undefined1 auStack_d48 [32];
  longlong *local_d28;
  undefined8 local_d20;
  char local_d18;
  undefined2 local_d10 [4];
  undefined2 local_d08 [4];
  undefined2 local_d00 [4];
  undefined2 local_cf8 [4];
  undefined2 local_cf0 [4];
  undefined2 local_ce8 [4];
  undefined2 local_ce0 [4];
  undefined2 local_cd8 [4];
  undefined2 local_cd0 [4];
  undefined2 local_cc8 [4];
  undefined2 local_cc0 [4];
  undefined2 local_cb8 [4];
  undefined2 local_cb0 [4];
  undefined2 local_ca8 [4];
  undefined2 local_ca0 [4];
  undefined2 local_c98 [4];
  undefined2 local_c90 [4];
  undefined2 local_c88 [4];
  undefined2 local_c80 [4];
  undefined2 local_c78 [4];
  undefined2 local_c70 [4];
  undefined2 local_c68 [4];
  undefined2 local_c60 [4];
  undefined2 local_c58 [4];
  undefined2 local_c50 [4];
  undefined2 local_c48 [4];
  undefined2 local_c40 [4];
  undefined2 local_c38 [4];
  undefined2 local_c30 [4];
  undefined2 local_c28 [4];
  undefined2 local_c20 [4];
  undefined2 local_c18 [4];
  undefined2 local_c10 [4];
  undefined2 local_c08 [4];
  undefined2 local_c00 [4];
  undefined2 local_bf8 [4];
  undefined2 local_bf0 [4];
  undefined2 local_be8 [4];
  undefined2 local_be0 [4];
  undefined2 local_bd8 [4];
  undefined2 local_bd0 [4];
  undefined2 local_bc8 [4];
  undefined2 local_bc0 [4];
  undefined2 local_bb8 [4];
  undefined2 local_bb0 [4];
  undefined2 local_ba8 [4];
  longlong local_ba0;
  int local_b98;
  undefined4 local_b94;
  undefined8 *local_b90;
  longlong local_b88;
  char local_b80;
  longlong local_b78;
  int iStack_b70;
  uint uStack_b6c;
  uint *puStack_b68;
  undefined8 uStack_b60;
  uint uStack_b58;
  undefined4 uStack_b54;
  int local_b50;
  uint uStack_b4c;
  uint *puStack_b48;
  undefined4 local_b40;
  undefined8 uStack_b3c;
  undefined4 uStack_b34;
  undefined2 *local_b30;
  undefined8 local_b28;
  undefined2 *local_b20;
  undefined8 local_b18;
  undefined2 *local_b10;
  int local_b08;
  undefined2 *local_b00;
  int local_af8;
  int local_af0;
  undefined1 local_ae8 [16];
  undefined8 local_ad8;
  uint uStack_ad0;
  int iStack_acc;
  uint local_ac8;
  undefined4 uStack_ac4;
  longlong local_ac0 [2];
  longlong local_ab0 [2];
  longlong local_aa0 [2];
  undefined1 local_a90 [16];
  undefined1 local_a80 [2560];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_d48;
  lVar16 = *param_1;
  local_d28 = (longlong *)0x0;
  local_d20 = 1;
  local_d18 = param_3;
  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_d28,0);
  plVar13 = local_d28;
  FString::FString(local_d28,lVar16);
  plVar13[2] = *(longlong *)(lVar16 + 0x10);
  lVar17 = *(longlong *)(lVar16 + 0x18);
  plVar13[3] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(plVar13 + 4) = *(undefined1 *)(lVar16 + 0x20);
  do {
    if ((int)local_d20 < 1) {
      if (local_d18 == '\0') {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)(*(longlong *)*param_2 + 8))();
      }
      plVar13 = local_d28;
      for (iVar21 = (int)local_d20; iVar21 != 0; iVar21 = iVar21 + -1) {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(plVar13 + 2);
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 5;
      }
      if (local_d28 != (longlong *)0x0) {
        FMemory::Free(local_d28);
      }
      return uVar10;
    }
    iVar21 = (int)local_d20;
    iVar20 = (int)local_d20 + -1;
    lVar16 = (longlong)iVar20;
    local_ba0 = local_d28[lVar16 * 5];
    local_d28[lVar16 * 5] = 0;
    local_b98 = (int)local_d28[lVar16 * 5 + 1];
    local_b94 = *(undefined4 *)((longlong)local_d28 + lVar16 * 0x28 + 0xc);
    local_d28[lVar16 * 5 + 1] = 0;
    local_b90 = (undefined8 *)local_d28[lVar16 * 5 + 2];
    local_b88 = local_d28[lVar16 * 5 + 3];
    local_d28[lVar16 * 5 + 3] = 0;
    local_d28[lVar16 * 5 + 2] = 0;
    local_b80 = (char)local_d28[lVar16 * 5 + 4];
    plVar12 = (longlong *)local_d28[lVar16 * 5 + 3];
    plVar13 = local_d28 + lVar16 * 5;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar12 + 1;
      lVar16 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    iVar11 = ((int)local_d20 - iVar20) + -1;
    if (iVar11 != 0) {
      _guard_xfg_dispatch_icall_nop
                (plVar13,local_d28 + (longlong)iVar21 * 5,(longlong)iVar11 * 0x28);
    }
    local_d20 = CONCAT44(local_d20._4_4_,iVar20);
    iVar11 = 0;
    uVar24 = 0;
    switch(*(undefined4 *)(local_b90 + 1)) {
    case 1:
      plVar13 = (longlong *)*param_2;
      if (local_b98 < 2) {
        iVar21 = (int)plVar13[4];
        if (((iVar21 != 2) && (iVar21 != 4)) && (iVar21 != 0xc)) {
          local_cb0[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_cb0,2);
          iVar21 = (int)plVar13[4];
        }
        if ((iVar21 == 4) || (iVar21 - 8U < 4)) {
          local_ca0[0] = 0x20;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_ca0,2);
        }
        else {
          FUN_1404b7a80(plVar13[1]);
          plVar12 = (longlong *)plVar13[1];
          if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
            uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
            do {
              local_ca8[0] = 9;
              (**(code **)(*plVar12 + 0x50))(plVar12,local_ca8,2);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        local_b30 = (undefined2 *)0x0;
        local_b28 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b30,0);
        puVar18 = local_b30;
        FGenericPlatformString::Memcpy(local_b30,L"null",10);
        plVar12 = (longlong *)plVar13[1];
        puVar19 = puVar18;
        if ((int)local_b28 == 0) {
LAB_1404aa289:
          puVar18 = &DAT_143f3eda8;
        }
        else {
          iVar11 = (int)local_b28 + -1;
        }
      }
      else {
        if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
          local_c98[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c98,2);
        }
        FUN_1404b7a80(plVar13[1]);
        plVar12 = (longlong *)plVar13[1];
        if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
          uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
          do {
            local_c90[0] = 9;
            (**(code **)(*plVar12 + 0x50))(plVar12,local_c90,2);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_ba0);
        local_c88[0] = 0x3a;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c88,2);
        local_c80[0] = 0x20;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c80,2);
        local_b20 = (undefined2 *)0x0;
        local_b18 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b20,0);
        puVar18 = local_b20;
        FGenericPlatformString::Memcpy(local_b20,L"null",10);
        plVar12 = (longlong *)plVar13[1];
        puVar19 = puVar18;
        if ((int)local_b18 == 0) goto LAB_1404aa289;
        iVar11 = (int)local_b18 + -1;
      }
      (**(code **)(*plVar12 + 0x50))(plVar12,puVar18,(longlong)iVar11 * 2);
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      *(undefined4 *)(plVar13 + 4) = 0xb;
      break;
    case 2:
      plVar13 = (longlong *)*param_2;
      if (local_b98 < 2) {
        uVar26 = FJsonValue::AsString(local_b90,local_ac0);
        if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
          local_ce0[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_ce0,2);
        }
        FUN_1404b7a80(plVar13[1]);
        plVar12 = (longlong *)plVar13[1];
        if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
          uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
          do {
            local_cd8[0] = 9;
            (**(code **)(*plVar12 + 0x50))(plVar12,local_cd8,2);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar26);
        *(undefined4 *)(plVar13 + 4) = 7;
        if (local_ac0[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        plVar12 = (longlong *)FJsonValue::AsString(local_b90,local_a90);
        if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
          local_cd0[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_cd0,2);
        }
        FUN_1404b7a80(plVar13[1]);
        plVar4 = (longlong *)plVar13[1];
        if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
          uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
          do {
            local_cc8[0] = 9;
            (**(code **)(*plVar4 + 0x50))(plVar4,local_cc8,2);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_ba0);
        local_cc0[0] = 0x3a;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_cc0,2);
        local_cb8[0] = 0x20;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_cb8,2);
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar12);
        *(undefined4 *)(plVar13 + 4) = 7;
        if (*plVar12 != 0) {
          FMemory::Free();
        }
      }
      break;
    case 3:
      plVar13 = (longlong *)*param_2;
      if (local_b98 < 2) {
        uVar26 = FJsonValue::AsNumber();
        iVar21 = (int)plVar13[4];
        if (((iVar21 != 2) && (iVar21 != 4)) && (iVar21 != 0xc)) {
          local_ba8[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_ba8,2);
          iVar21 = (int)plVar13[4];
        }
        if ((iVar21 == 4) || (iVar21 - 8U < 4)) {
          local_d08[0] = 0x20;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_d08,2);
        }
        else {
          FUN_1404b7a80(plVar13[1]);
          plVar12 = (longlong *)plVar13[1];
          if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
            uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
            do {
              local_d10[0] = 9;
              (**(code **)(*plVar12 + 0x50))(plVar12,local_d10,2);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        FString::PrintfImpl(&local_b10,L"%.17g",uVar26);
        if (local_b08 == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          iVar11 = local_b08 + -1;
          puVar18 = local_b10;
        }
        (**(code **)(*(longlong *)plVar13[1] + 0x50))
                  ((longlong *)plVar13[1],puVar18,(longlong)iVar11 * 2);
        puVar18 = local_b10;
      }
      else {
        uVar26 = FJsonValue::AsNumber();
        if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
          local_d00[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_d00,2);
        }
        FUN_1404b7a80(plVar13[1]);
        plVar12 = (longlong *)plVar13[1];
        if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
          uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
          do {
            local_cf8[0] = 9;
            (**(code **)(*plVar12 + 0x50))(plVar12,local_cf8,2);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_ba0);
        local_cf0[0] = 0x3a;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_cf0,2);
        local_ce8[0] = 0x20;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_ce8,2);
        FString::PrintfImpl(&local_b00,L"%.17g",uVar26);
        if (local_af8 == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          iVar11 = local_af8 + -1;
          puVar18 = local_b00;
        }
        (**(code **)(*(longlong *)plVar13[1] + 0x50))
                  ((longlong *)plVar13[1],puVar18,(longlong)iVar11 * 2);
        puVar18 = local_b00;
      }
      if (puVar18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *(undefined4 *)(plVar13 + 4) = 8;
      break;
    case 4:
      lVar16 = *param_2;
      if (local_b98 < 2) {
        uVar10 = FJsonValue::AsBool();
        FUN_1404ab950(lVar16,uVar10);
      }
      else {
        uVar10 = FJsonValue::AsBool();
        FUN_1404ab790(lVar16,&local_ba0,uVar10);
      }
      break;
    case 5:
      if (local_b80 == '\0') {
        local_b80 = '\x01';
        local_d20 = CONCAT44(local_d20._4_4_,iVar21);
        if (local_d20._4_4_ < iVar21) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_d28,iVar20);
        }
        plVar13 = local_d28 + (longlong)iVar20 * 5;
        FString::FString(plVar13,&local_ba0);
        plVar13[2] = (longlong)local_b90;
        plVar13[3] = local_b88;
        if (local_b88 != 0) {
          LOCK();
          *(int *)(local_b88 + 8) = *(int *)(local_b88 + 8) + 1;
          UNLOCK();
        }
        *(char *)(plVar13 + 4) = local_b80;
        plVar13 = (longlong *)*param_2;
        if (local_b98 < 2) {
          iVar21 = (int)plVar13[4];
          if (((iVar21 != 0) && (iVar21 != 2)) && ((iVar21 != 4 && (iVar21 != 0xc)))) {
            local_c60[0] = 0x2c;
            (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c60,2);
            iVar21 = (int)plVar13[4];
          }
          if (iVar21 != 0) {
            FUN_1404b7a80(plVar13[1]);
            plVar12 = (longlong *)plVar13[1];
            if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
              uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
              do {
                local_c58[0] = 9;
                (**(code **)(*plVar12 + 0x50))(plVar12,local_c58,2);
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
          }
          puVar18 = local_c50;
          local_c50[0] = 0x5b;
        }
        else {
          if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
            local_c48[0] = 0x2c;
            (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c48,2);
          }
          FUN_1404b7a80(plVar13[1]);
          plVar12 = (longlong *)plVar13[1];
          if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
            uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
            do {
              local_c40[0] = 9;
              (**(code **)(*plVar12 + 0x50))(plVar12,local_c40,2);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,&local_ba0);
          local_c38[0] = 0x3a;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c38,2);
          local_c30[0] = 0x20;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c30,2);
          puVar18 = local_c28;
          local_c28[0] = 0x5b;
        }
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],puVar18,2);
        *(int *)((longlong)plVar13 + 0x24) = *(int *)((longlong)plVar13 + 0x24) + 1;
        lVar16 = plVar13[3];
        iVar21 = (int)lVar16 + 1;
        *(int *)(plVar13 + 3) = iVar21;
        if (*(int *)((longlong)plVar13 + 0x1c) < iVar21) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar13 + 2);
        }
        *(undefined4 *)(plVar13[2] + (longlong)(int)lVar16 * 4) = 5;
        *(undefined4 *)(plVar13 + 4) = 4;
        plVar13 = (longlong *)FJsonValue::AsArray(local_b90);
        iVar21 = (int)plVar13[1] + -1;
        lVar16 = (longlong)iVar21;
        if (-1 < iVar21) {
          lVar17 = lVar16 << 4;
          do {
            lVar2 = *(longlong *)(lVar17 + 8 + *plVar13);
            lVar5 = *(longlong *)(lVar17 + *plVar13);
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            lVar23 = (longlong)(int)local_d20;
            iVar21 = (int)local_d20 + 1;
            local_d20 = CONCAT44(local_d20._4_4_,iVar21);
            if (local_d20._4_4_ < iVar21) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_d28);
            }
            lVar17 = lVar17 + -0x10;
            lVar16 = lVar16 + -1;
            local_d28[lVar23 * 5] = 0;
            local_d28[lVar23 * 5 + 1] = 0;
            local_d28[lVar23 * 5 + 2] = lVar5;
            local_d28[lVar23 * 5 + 3] = lVar2;
            *(undefined1 *)(local_d28 + lVar23 * 5 + 4) = 0;
          } while (-1 < lVar16);
        }
      }
      else {
        lVar16 = *param_2;
        iVar21 = *(int *)(lVar16 + 0x20);
        *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + -1;
        if (((iVar21 - 3U & 0xfffffff9) == 0) && (iVar21 != 9)) {
          FUN_1404b7a80(*(undefined8 *)(lVar16 + 8));
          plVar13 = *(longlong **)(lVar16 + 8);
          if (0 < (int)*(uint *)(lVar16 + 0x24)) {
            uVar22 = (ulonglong)*(uint *)(lVar16 + 0x24);
            do {
              local_c78[0] = 9;
              (**(code **)(*plVar13 + 0x50))(plVar13,local_c78,2);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        else if (iVar21 != 4) {
          local_c70[0] = 0x20;
          (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))(*(longlong **)(lVar16 + 8),local_c70,2);
        }
        local_c68[0] = 0x5d;
        (**(code **)(**(longlong **)(lVar16 + 8) + 0x50))(*(longlong **)(lVar16 + 8),local_c68,2);
        *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
        *(undefined4 *)(lVar16 + 0x20) = 5;
      }
      break;
    case 6:
      if (local_b80 == '\0') {
        local_b80 = '\x01';
        local_d20 = CONCAT44(local_d20._4_4_,iVar21);
        if (local_d20._4_4_ < iVar21) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_d28,iVar20);
        }
        plVar13 = local_d28 + (longlong)iVar20 * 5;
        FString::FString(plVar13,&local_ba0);
        plVar13[2] = (longlong)local_b90;
        plVar13[3] = local_b88;
        if (local_b88 != 0) {
          LOCK();
          *(int *)(local_b88 + 8) = *(int *)(local_b88 + 8) + 1;
          UNLOCK();
        }
        *(char *)(plVar13 + 4) = local_b80;
        plVar13 = (longlong *)*param_2;
        if (local_b98 < 2) {
          iVar21 = (int)plVar13[4];
          if ((((iVar21 != 0) && (iVar21 != 2)) && (iVar21 != 4)) && (iVar21 != 0xc)) {
            local_c10[0] = 0x2c;
            (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_c10,2);
            iVar21 = (int)plVar13[4];
          }
          if (iVar21 != 0) {
            FUN_1404b7a80(plVar13[1]);
            plVar12 = (longlong *)plVar13[1];
            if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
              uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
              do {
                local_c08[0] = 9;
                (**(code **)(*plVar12 + 0x50))(plVar12,local_c08,2);
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
          }
          plVar12 = (longlong *)plVar13[1];
          puVar18 = local_c00;
          local_c00[0] = 0x7b;
          lVar16 = *plVar12;
        }
        else {
          if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
            local_bf8[0] = 0x2c;
            (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_bf8,2);
          }
          FUN_1404b7a80(plVar13[1]);
          plVar12 = (longlong *)plVar13[1];
          if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
            uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
            do {
              local_bf0[0] = 9;
              (**(code **)(*plVar12 + 0x50))(plVar12,local_bf0,2);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,&local_ba0);
          local_be8[0] = 0x3a;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_be8,2);
          FUN_1404b7a80(plVar13[1]);
          plVar12 = (longlong *)plVar13[1];
          if (0 < (int)*(uint *)((longlong)plVar13 + 0x24)) {
            uVar22 = (ulonglong)*(uint *)((longlong)plVar13 + 0x24);
            do {
              local_be0[0] = 9;
              (**(code **)(*plVar12 + 0x50))(plVar12,local_be0,2);
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
            plVar12 = (longlong *)plVar13[1];
          }
          puVar18 = local_bd8;
          local_bd8[0] = 0x7b;
          lVar16 = *plVar12;
        }
        (**(code **)(lVar16 + 0x50))(plVar12,puVar18,2);
        *(int *)((longlong)plVar13 + 0x24) = *(int *)((longlong)plVar13 + 0x24) + 1;
        iVar21 = (int)plVar13[3];
        *(int *)(plVar13 + 3) = iVar21 + 1;
        if (*(int *)((longlong)plVar13 + 0x1c) < iVar21 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar13 + 2,iVar21);
        }
        *(undefined4 *)(plVar13[2] + (longlong)iVar21 * 4) = 6;
        *(undefined4 *)(plVar13 + 4) = 2;
        plVar13 = (longlong *)(**(code **)*local_b90)();
        local_80 = (undefined1 *)0x0;
        local_78 = 0;
        lVar16 = *plVar13;
        if (0 < *(int *)(lVar16 + 8) - *(int *)(lVar16 + 0x34)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>
          ::ResizeTo(local_a80);
          lVar16 = *plVar13;
        }
        iVar21 = *(int *)(lVar16 + 0x28);
        puStack_b68 = (uint *)(lVar16 + 0x10);
        uStack_b4c = 1;
        local_b50 = 0;
        uStack_b3c = 0;
        if (iVar21 != 0) {
          puVar25 = *(uint **)(lVar16 + 0x20);
          if (*(uint **)(lVar16 + 0x20) == (uint *)0x0) {
            puVar25 = puStack_b68;
          }
          uVar3 = *puVar25;
          while (uVar3 == 0) {
            lVar17 = (longlong)local_b50;
            uVar24 = uVar24 + 0x20;
            iVar20 = local_b50 + 1;
            uStack_b3c = (ulonglong)uVar24 << 0x20;
            bVar6 = (int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b50;
            local_b50 = iVar20;
            if (bVar6) goto LAB_1404aaa43;
            uVar3 = puVar25[lVar17 + 1];
          }
          uStack_b4c = -uVar3 & uVar3;
          local_af0 = 0x1f;
          if (uStack_b4c != 0) {
            for (; uStack_b4c >> local_af0 == 0; local_af0 = local_af0 + -1) {
            }
          }
          if (uStack_b4c == 0) {
            iVar20 = 0x20;
          }
          else {
            iVar20 = 0x1f - local_af0;
          }
          iVar20 = (uVar24 - iVar20) + 0x1f;
          uStack_b3c._4_4_ = (uint)((ulonglong)uStack_b3c >> 0x20);
          uStack_b3c = CONCAT44(uStack_b3c._4_4_,iVar20);
          if (iVar21 < iVar20) {
LAB_1404aaa43:
            uStack_b3c = CONCAT44(uStack_b3c._4_4_,iVar21);
          }
        }
        local_b40 = 0xffffffff;
        uStack_b60 = CONCAT44((int)uStack_b3c,0xffffffff);
        uStack_b58 = uStack_b3c._4_4_;
        uStack_b54 = uStack_b34;
        iStack_b70 = local_b50;
        uStack_b6c = uStack_b4c;
        local_ae8._8_4_ = local_b50;
        local_ae8._0_8_ = lVar16;
        local_ae8._12_4_ = uStack_b4c;
        local_ac8 = uStack_b3c._4_4_;
        uStack_ac4 = uStack_b34;
        uStack_ad0 = 0xffffffff;
        iStack_acc = (int)uStack_b3c;
        local_b78 = lVar16;
        puStack_b48 = puStack_b68;
        local_ad8 = puStack_b68;
        puVar25 = puStack_b68;
        if ((int)uStack_b3c < iVar21) {
          do {
            uVar22 = local_78;
            uVar9 = uStack_ac4;
            uVar3 = local_ac8;
            iVar21 = iStack_acc;
            uVar24 = uStack_ad0;
            auVar8 = local_ae8;
            lVar16 = (longlong)(int)local_78;
            iVar20 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar20);
            local_ad8 = puVar25;
            if (local_78._4_4_ < iVar20) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>
              ::ResizeGrow(local_a80,uVar22 & 0xffffffff);
            }
            puVar15 = local_a80;
            if (local_80 != (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            *(undefined1 (*) [16])(puVar15 + lVar16 * 0x28) = auVar8;
            plVar13 = (longlong *)(puVar15 + lVar16 * 0x28 + 0x10);
            *plVar13 = (longlong)puVar25;
            *(uint *)(plVar13 + 1) = uVar24;
            *(int *)((longlong)plVar13 + 0xc) = iVar21;
            *(ulonglong *)(puVar15 + lVar16 * 0x28 + 0x20) = CONCAT44(uVar9,uVar3);
            uStack_ad0 = uVar24 & ~auVar8._12_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_ae8 + 8);
            puVar25 = local_ad8;
          } while (iStack_acc < (int)local_ad8[6]);
        }
        lVar16 = (longlong)((int)local_78 + -1);
        if (-1 < (int)local_78 + -1) {
          lVar17 = lVar16 * 0x28;
          do {
            puVar15 = local_a80;
            if (local_80 != (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            lVar2 = **(longlong **)(puVar15 + lVar17) +
                    (longlong)*(int *)(puVar15 + lVar17 + 0x1c) * 0x28;
            FString::FString(&local_b78,lVar2);
            uVar22 = local_d20;
            lVar5 = *(longlong *)(lVar2 + 0x10);
            lVar2 = *(longlong *)(lVar2 + 0x18);
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            lVar23 = (longlong)(int)local_d20;
            uStack_b58 = uStack_b58 & 0xffffff00;
            iVar21 = (int)local_d20 + 1;
            local_d20 = CONCAT44(local_d20._4_4_,iVar21);
            if (local_d20._4_4_ < iVar21) {
              puStack_b68 = (uint *)lVar5;
              uStack_b60 = lVar2;
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_d28,uVar22 & 0xffffffff);
            }
            lVar7 = local_b78;
            local_b78 = 0;
            uStack_b60 = 0;
            local_d28[lVar23 * 5] = lVar7;
            *(int *)(local_d28 + lVar23 * 5 + 1) = iStack_b70;
            *(uint *)((longlong)local_d28 + lVar23 * 0x28 + 0xc) = uStack_b6c;
            local_d28[lVar23 * 5 + 2] = lVar5;
            local_d28[lVar23 * 5 + 3] = lVar2;
            *(undefined1 *)(local_d28 + lVar23 * 5 + 4) = 0;
            iStack_b70 = 0;
            uStack_b6c = 0;
            puStack_b68 = (uint *)0x0;
            UE4Tuple_Private::
            TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            ::
            ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                      (&local_b78);
            lVar17 = lVar17 + -0x28;
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
        }
        if (local_80 != (undefined1 *)0x0) {
          FMemory::Free(local_80);
        }
      }
      else {
        lVar16 = *param_2;
        FUN_1404b7a80(*(undefined8 *)(lVar16 + 8));
        *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + -1;
        plVar13 = *(longlong **)(lVar16 + 8);
        if (0 < (int)*(uint *)(lVar16 + 0x24)) {
          uVar22 = (ulonglong)*(uint *)(lVar16 + 0x24);
          do {
            local_c20[0] = 9;
            (**(code **)(*plVar13 + 0x50))(plVar13,local_c20,2);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          plVar13 = *(longlong **)(lVar16 + 8);
        }
        local_c18[0] = 0x7d;
        (**(code **)(*plVar13 + 0x50))(plVar13,local_c18,2);
        *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
        *(undefined4 *)(lVar16 + 0x20) = 3;
      }
      break;
    case 7:
      plVar13 = (longlong *)*param_2;
      if (local_b98 < 2) {
        puVar14 = (undefined8 *)FJsonValue::AsString(local_b90,local_ab0);
        iVar21 = (int)plVar13[4];
        if (((iVar21 != 2) && (iVar21 != 4)) && (iVar21 != 0xc)) {
          local_bd0[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_bd0,2);
          iVar21 = (int)plVar13[4];
        }
        if ((iVar21 - 9U < 2) || (iVar21 == 4)) {
          local_bc8[0] = 0x20;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_bc8,2);
        }
        else {
          FUN_1404b7a80(plVar13[1]);
          FUN_1404b7fc0(plVar13[1],*(undefined4 *)((longlong)plVar13 + 0x24));
        }
        if (*(int *)(puVar14 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar14;
          uVar24 = *(int *)(puVar14 + 1) - 1;
        }
        (**(code **)(*(longlong *)plVar13[1] + 0x50))
                  ((longlong *)plVar13[1],puVar18,(longlong)(int)uVar24 * 2);
        *(undefined4 *)(plVar13 + 4) = 7;
        if (local_ab0[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        puVar14 = (undefined8 *)FJsonValue::AsString(local_b90,local_aa0);
        if ((((int)plVar13[4] - 2U & 0xfffffff5) != 0) || ((int)plVar13[4] == 10)) {
          local_bc0[0] = 0x2c;
          (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_bc0,2);
        }
        FUN_1404b7a80(plVar13[1]);
        FUN_1404b7fc0(plVar13[1],*(undefined4 *)((longlong)plVar13 + 0x24));
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_ba0);
        local_bb8[0] = 0x3a;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_bb8,2);
        local_bb0[0] = 0x20;
        (**(code **)(*(longlong *)plVar13[1] + 0x50))((longlong *)plVar13[1],local_bb0,2);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar14;
          uVar24 = *(int *)(puVar14 + 1) - 1;
        }
        (**(code **)(*(longlong *)plVar13[1] + 0x50))
                  ((longlong *)plVar13[1],puVar18,(longlong)(int)uVar24 * 2);
        *(undefined4 *)(plVar13 + 4) = 7;
        if (local_aa0[0] != 0) {
          FMemory::Free();
        }
      }
      break;
    default:
      LowLevelFatalErrorHandler("Unknown",0x24a,L"Could not print Json Value, unrecognized type.");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x24a,L"Could not print Json Value, unrecognized type.");
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b90);
    if (local_ba0 != 0) {
      FMemory::Free();
    }
  } while( true );
}



// FUNCTION 1404aaf50 FUN_1404aaf50 body=348 status=ok
// SIG undefined FUN_1404aaf50(void)

void FUN_1404aaf50(longlong param_1,longlong param_2,uint *param_3,int param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_58;
  int *local_50;
  int local_48 [2];
  ulonglong local_40;
  undefined8 local_38;
  int local_30;
  longlong local_28;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 8));
        if (*plVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1404aafd1;
          break;
        }
        iVar2 = (int)plVar4[6];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404aafd1:
  uVar1 = *param_3;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (plVar5 == (longlong *)0x0) {
    local_48[0] = 1;
    local_38 = 0;
    local_28 = param_5;
    local_58 = &local_res10;
    local_40 = (ulonglong)uVar1;
    local_50 = local_48;
    local_30 = param_4;
    FUN_1404a82f0((longlong *)(param_1 + 8),local_res8,&local_58,0);
    if (((local_48[0] == 6) || (local_48[0] == 8)) || (local_48[0] == 10)) {
      FMemory::operator_delete(local_40);
    }
  }
  else {
    iVar2 = (int)*plVar5;
    if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
      FMemory::operator_delete(plVar5[1]);
    }
    plVar5[1] = 0;
    plVar5[2] = 0;
    *(int *)plVar5 = 1;
    *(uint *)(plVar5 + 1) = uVar1;
    plVar5[4] = param_5;
    *(int *)(plVar5 + 3) = param_4;
  }
  return;
}



// FUNCTION 1404ab0b0 FUN_1404ab0b0 body=343 status=ok
// SIG undefined FUN_1404ab0b0(void)

void FUN_1404ab0b0(longlong param_1,longlong param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_58;
  int *local_50;
  int local_48 [2];
  ulonglong local_40;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 8));
        if (*plVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1404ab131;
          break;
        }
        iVar2 = (int)plVar4[6];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404ab131:
  uVar1 = *param_3;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (plVar5 == (longlong *)0x0) {
    local_48[0] = 1;
    local_38 = 0;
    local_58 = &local_res10;
    local_40 = (ulonglong)uVar1;
    local_50 = local_48;
    local_28 = 0;
    local_30 = param_4;
    FUN_1404a82f0((longlong *)(param_1 + 8),local_res8,&local_58,0);
    if (((local_48[0] == 6) || (local_48[0] == 8)) || (local_48[0] == 10)) {
      FMemory::operator_delete(local_40);
    }
  }
  else {
    iVar2 = (int)*plVar5;
    if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
      FMemory::operator_delete(plVar5[1]);
    }
    plVar5[1] = 0;
    plVar5[2] = 0;
    *(int *)plVar5 = 1;
    *(uint *)(plVar5 + 1) = uVar1;
    plVar5[4] = 0;
    *(int *)(plVar5 + 3) = param_4;
  }
  return;
}



// FUNCTION 1404ab210 FUN_1404ab210 body=321 status=ok
// SIG undefined FUN_1404ab210(void)

void FUN_1404ab210(longlong param_1,longlong param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_48;
  int *local_40;
  int local_38 [2];
  ulonglong local_30;
  undefined8 local_28;
  int local_20;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar3 = param_1 + 0x60;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x28));
        if (*plVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1404ab295;
          break;
        }
        iVar2 = (int)plVar4[5];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404ab295:
  uVar1 = *param_3;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (plVar5 == (longlong *)0x0) {
    local_38[0] = 1;
    local_28 = 0;
    local_48 = &local_res10;
    local_30 = (ulonglong)uVar1;
    local_40 = local_38;
    local_20 = param_4;
    FUN_1404a80d0((longlong *)(param_1 + 0x28),local_res8,&local_48,0);
    if (((local_38[0] == 6) || (local_38[0] == 8)) || (local_38[0] == 10)) {
      FMemory::operator_delete(local_30);
    }
  }
  else {
    iVar2 = (int)*plVar5;
    if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
      FMemory::operator_delete(plVar5[1]);
    }
    plVar5[1] = 0;
    plVar5[2] = 0;
    *(int *)plVar5 = 1;
    *(uint *)(plVar5 + 1) = uVar1;
    *(int *)(plVar5 + 3) = param_4;
  }
  return;
}



// FUNCTION 1404ab360 FUN_1404ab360 body=350 status=ok
// SIG undefined FUN_1404ab360(void)

void FUN_1404ab360(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_58;
  int *local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 8));
        if (*plVar3 == param_2) {
          if (iVar1 != -1) goto LAB_1404ab3e1;
          break;
        }
        iVar1 = (int)plVar3[6];
      } while (iVar1 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1404ab3e1:
  plVar5 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (plVar5 == (longlong *)0x0) {
    local_48[0] = 0;
    local_40 = 0;
    local_38 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    FVariantData::SetValue(local_48,puVar4);
    local_58 = &local_res10;
    local_50 = local_48;
    local_28 = 0;
    local_30 = param_4;
    FUN_1404a82f0((longlong *)(param_1 + 8),local_res8,&local_58,0);
    if (((local_48[0] == 6) || (local_48[0] == 8)) || (local_48[0] == 10)) {
      FMemory::operator_delete(local_40);
    }
    return;
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  FVariantData::SetValue(plVar5,puVar4);
  *(undefined4 *)(plVar5 + 3) = param_4;
  plVar5[4] = 0;
  return;
}



// FUNCTION 1404ab4c0 FUN_1404ab4c0 body=353 status=ok
// SIG undefined FUN_1404ab4c0(void)

void FUN_1404ab4c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_48;
  int *local_40;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar2 = param_1 + 0x60;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x70) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x28));
        if (*plVar3 == param_2) {
          if (iVar1 != -1) goto LAB_1404ab545;
          break;
        }
        iVar1 = (int)plVar3[5];
      } while (iVar1 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1404ab545:
  plVar5 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (plVar5 == (longlong *)0x0) {
    local_38[0] = 0;
    local_30 = 0;
    local_28 = 0;
    if (*(int *)(param_3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    FVariantData::SetValue(local_38,puVar4);
    local_48 = &local_res10;
    local_40 = local_38;
    local_20 = param_4;
    FUN_1404a80d0((longlong *)(param_1 + 0x28),local_res8,&local_48,0);
    if (((local_38[0] == 6) || (local_38[0] == 8)) || (local_38[0] == 10)) {
      FMemory::operator_delete(local_30);
    }
    return;
  }
  if (*(int *)(param_3 + 1) == 0) {
    FVariantData::SetValue(plVar5,&DAT_143f3eda8);
    *(undefined4 *)(plVar5 + 3) = param_4;
    return;
  }
  FVariantData::SetValue(plVar5,*param_3);
  *(undefined4 *)(plVar5 + 3) = param_4;
  return;
}



// FUNCTION 1404ab630 FUN_1404ab630 body=346 status=ok
// SIG undefined FUN_1404ab630(void)

void FUN_1404ab630(longlong param_1,longlong param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_58;
  int *local_50;
  int local_48 [2];
  ulonglong local_40;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x40;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 8));
        if (*plVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1404ab6b1;
          break;
        }
        iVar2 = (int)plVar4[6];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404ab6b1:
  bVar1 = *param_3;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (plVar5 == (longlong *)0x0) {
    local_48[0] = 9;
    local_38 = 0;
    local_58 = &local_res10;
    local_40 = (ulonglong)bVar1;
    local_50 = local_48;
    local_28 = 0;
    local_30 = param_4;
    FUN_1404a82f0((longlong *)(param_1 + 8),local_res8,&local_58,0);
    if (((local_48[0] == 6) || (local_48[0] == 8)) || (local_48[0] == 10)) {
      FMemory::operator_delete(local_40);
    }
  }
  else {
    iVar2 = (int)*plVar5;
    if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
      FMemory::operator_delete(plVar5[1]);
    }
    plVar5[1] = 0;
    plVar5[2] = 0;
    *(int *)plVar5 = 9;
    *(byte *)(plVar5 + 1) = bVar1;
    plVar5[4] = 0;
    *(int *)(plVar5 + 3) = param_4;
  }
  return;
}



// FUNCTION 1404ab790 FUN_1404ab790 body=439 status=ok
// SIG undefined FUN_1404ab790(void)

void FUN_1404ab790(longlong *param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 local_res18 [8];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res18[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res18[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  local_res18[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  pwVar7 = L"false";
  if (param_3 != 0) {
    pwVar7 = L"true";
  }
  puVar8 = (undefined2 *)0x0;
  iVar9 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  iVar6 = iVar9;
  if (*pwVar7 != L'\0') {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar7[lVar5] != L'\0');
    iVar3 = (int)lVar5 + 1;
    local_30 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar6 = local_30;
    puVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar7,(longlong)iVar3 * 2);
  }
  if (iVar6 == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    iVar9 = iVar6 + -1;
    puVar2 = puVar8;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],puVar2,(longlong)iVar9 * 2);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  *(uint *)(param_1 + 4) = (param_3 ^ 1) + 9;
  return;
}



// FUNCTION 1404ab950 FUN_1404ab950 body=411 status=ok
// SIG undefined FUN_1404ab950(void)

void FUN_1404ab950(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 local_res10 [4];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (((iVar6 != 2) && (iVar6 != 4)) && (iVar6 != 0xc)) {
    local_res10[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res10,2);
    iVar6 = *(int *)(param_1 + 0x20);
  }
  if ((iVar6 == 4) || (iVar6 - 8U < 4)) {
    local_res10[0] = 0x20;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res10,2);
  }
  else {
    FUN_1404b7a80(*(undefined8 *)(param_1 + 8));
    plVar1 = *(longlong **)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        local_res10[0] = 9;
        (**(code **)(*plVar1 + 0x50))(plVar1,local_res10,2);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  pwVar7 = L"false";
  if (param_2 != 0) {
    pwVar7 = L"true";
  }
  puVar8 = (undefined2 *)0x0;
  iVar9 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  iVar6 = iVar9;
  if (*pwVar7 != L'\0') {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar7[lVar5] != L'\0');
    iVar3 = (int)lVar5 + 1;
    local_30 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar6 = local_30;
    puVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar7,(longlong)iVar3 * 2);
  }
  if (iVar6 == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    iVar9 = iVar6 + -1;
    puVar2 = puVar8;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
            (*(longlong **)(param_1 + 8),puVar2,(longlong)iVar9 * 2);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  *(uint *)(param_1 + 0x20) = (param_2 ^ 1) + 9;
  return;
}



// FUNCTION 1404abaf0 FBufferReader body=139 status=ok
// SIG undefined FBufferReader(void)

undefined8 *
FBufferReader::FBufferReader
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
          undefined1 param_5)

{
  FArchive::FArchive();
  param_1[0x12] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__143f600f0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  *(undefined1 *)(param_1 + 0x15) = param_4;
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,param_5);
  *param_1 = &PTR__scalar_deleting_destructor__143f60308;
  return param_1;
}



// FUNCTION 1404abb80 FJsonStringReader body=382 status=ok
// SIG undefined FJsonStringReader(void)

undefined8 * FJsonStringReader::FJsonStringReader(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong local_res8;
  
  puVar6 = (undefined8 *)0x0;
  param_1[1] = 0;
  plVar1 = param_1 + 0x10;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f60780;
  param_1[0xe] = 0;
  param_1[0xe] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *plVar1 = 0;
  iVar2 = *(int *)(param_1 + 0xf);
  if (iVar2 < 2) {
    return param_1;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (iVar2 == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)param_1[0xe];
  }
  lVar5 = operator_new(0xb0);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FBufferReader::FBufferReader(lVar5,puVar7,(longlong)iVar4 * 2,0,0);
  }
  if (plVar1 == &local_res8) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_1404abce1;
    *puVar6 = &PTR__scalar_deleting_destructor__143f600f0;
    if (*(char *)(puVar6 + 0x15) != '\0') {
      FMemory::Free(puVar6[0x12]);
      puVar6[0x12] = 0;
    }
    FArchive::~FArchive(puVar6);
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)puVar6;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1404abce1;
    *puVar3 = &PTR__scalar_deleting_destructor__143f600f0;
    if (*(char *)(puVar3 + 0x15) != '\0') {
      FMemory::Free(puVar3[0x12]);
      puVar3[0x12] = 0;
    }
    FArchive::~FArchive(puVar3);
    puVar6 = puVar3;
  }
  FMemory::operator_delete(puVar6,0xb0);
LAB_1404abce1:
  param_1[4] = *plVar1;
  return param_1;
}



// FUNCTION 1404abd00 FJsonStringReader body=360 status=ok
// SIG undefined FJsonStringReader(void)

undefined8 * FJsonStringReader::FJsonStringReader(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong local_res8;
  
  puVar6 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f60780;
  FString::FString(param_1 + 0xe);
  plVar1 = param_1 + 0x10;
  *plVar1 = 0;
  iVar2 = *(int *)(param_1 + 0xf);
  if (iVar2 < 2) {
    return param_1;
  }
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (iVar2 == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)param_1[0xe];
  }
  lVar5 = operator_new(0xb0);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FBufferReader::FBufferReader(lVar5,puVar7,(longlong)iVar4 * 2,0,0);
  }
  if (plVar1 == &local_res8) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_1404abe4b;
    *puVar6 = &PTR__scalar_deleting_destructor__143f600f0;
    if (*(char *)(puVar6 + 0x15) != '\0') {
      FMemory::Free(puVar6[0x12]);
      puVar6[0x12] = 0;
    }
    FArchive::~FArchive(puVar6);
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)puVar6;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1404abe4b;
    *puVar3 = &PTR__scalar_deleting_destructor__143f600f0;
    if (*(char *)(puVar3 + 0x15) != '\0') {
      FMemory::Free(puVar3[0x12]);
      puVar3[0x12] = 0;
    }
    FArchive::~FArchive(puVar3);
    puVar6 = puVar3;
  }
  FMemory::operator_delete(puVar6,0xb0);
LAB_1404abe4b:
  param_1[4] = *plVar1;
  return param_1;
}



// FUNCTION 1404abe70 FUN_1404abe70 body=519 status=ok
// SIG undefined FUN_1404abe70(void)

undefined8 * FUN_1404abe70(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  longlong *local_48;
  undefined8 local_40;
  
  *(undefined4 *)(param_1 + 1) = 0x36b1;
  *param_1 = &PTR_FUN_143f60df0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x40a00000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  local_res8[0] = 0;
  cVar1 = FConfigCacheIni::GetInt
                    (DAT_1468b6148,L"LANSession",L"LanAnnouncePort",local_res8,&DAT_1468e2360);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 1) = local_res8[0];
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FConfigCacheIni::GetArray
            (DAT_1468b6148,L"LANSession",L"LanPacketSubsystems",&local_48,&DAT_1468e2360);
  plVar6 = local_48 + (longlong)(int)local_40 * 2;
  for (plVar4 = local_48; plVar4 != plVar6; plVar4 = plVar4 + 2) {
    if ((int)plVar4[1] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*plVar4;
    }
    puVar2 = (undefined8 *)FName::FName(local_res18,puVar3,1);
    iVar5 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar5);
    }
    *(undefined8 *)(param_1[2] + (longlong)iVar5 * 8) = *puVar2;
  }
  local_res10[0] = 0;
  cVar1 = FConfigCacheIni::GetFloat
                    (DAT_1468b6148,L"LANSession",L"LanQueryTimeout",local_res10,&DAT_1468e2360);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 4) = local_res10[0];
  }
  plVar4 = local_48;
  for (iVar5 = (int)local_40; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 1404ac080 FUN_1404ac080 body=103 status=ok
// SIG undefined FUN_1404ac080(void)

undefined8 * FUN_1404ac080(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1404abe70();
  *param_1 = &PTR_FUN_143f60df0;
  param_1[9] = param_2;
  if (*(int *)(param_1 + 3) == 0) {
    iVar1 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    *(undefined8 *)(param_1[2] + (longlong)iVar1 * 8) = param_1[9];
  }
  return param_1;
}



// FUNCTION 1404ac0f0 FUN_1404ac0f0 body=88 status=ok
// SIG undefined FUN_1404ac0f0(void)

undefined8 * FUN_1404ac0f0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = FName::FName(local_res8,L"WINDOWS",1);
  plVar2 = (longlong *)FUN_1419c6b80(uVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1 + 5,0,0);
  return param_1;
}



// FUNCTION 1404ac150 FOnlineAsyncTaskManager body=238 status=ok
// SIG undefined FOnlineAsyncTaskManager(void)

undefined8 * FOnlineAsyncTaskManager::FOnlineAsyncTaskManager(undefined8 *param_1)

{
  *param_1 = &PTR_Init_143f61308;
  param_1[2] = 0;
  param_1[1] = &PTR_LAB_143f61340;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x18),4000);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x32;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 1404ac240 FUN_1404ac240 body=318 status=ok
// SIG undefined FUN_1404ac240(void)

undefined8 * FUN_1404ac240(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_143f61350;
  param_1[4] = param_2;
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  puVar2 = (undefined8 *)operator_new(0x18);
  puVar6 = puVar5;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar6 = puVar2;
  }
  param_1[9] = puVar6;
  param_1[8] = puVar6;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1404b6a50(param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&PTR_GetPoolName_143f61570;
    plVar3[2] = (longlong)FUN_1404b27c0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f615b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = DAT_146533138;
    lVar4 = (longlong)DAT_146533138;
    puVar5 = (undefined8 *)*puVar5;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar6 = (undefined8 *)(lVar4 * 0x10 + DAT_146533130);
    *puVar6 = plVar3;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  param_1[0xd] = puVar5;
  return param_1;
}



// FUNCTION 1404ac380 FVariantData body=47 status=ok
// SIG undefined FVariantData(void)

undefined8 * FVariantData::FVariantData(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined4 *)param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



// FUNCTION 1404ac3b0 FVariantData body=307 status=ok
// SIG undefined FVariantData(void)

undefined8 * FVariantData::FVariantData(undefined8 *param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *local_18;
  ulonglong local_10;
  
  *(undefined4 *)param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = *param_2;
  if (iVar1 == 6) {
    SetValue(param_1,*(undefined8 *)(param_2 + 2));
    return param_1;
  }
  if (iVar1 != 10) {
    if (iVar1 != 8) {
      uVar3 = *(undefined8 *)(param_2 + 2);
      *param_1 = *(undefined8 *)param_2;
      param_1[1] = uVar3;
      param_1[2] = *(undefined8 *)(param_2 + 4);
      return param_1;
    }
    SetValue(param_1,param_2[4],*(undefined8 *)(param_2 + 2));
    return param_1;
  }
  psVar2 = *(short **)(param_2 + 2);
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  puVar5 = (undefined2 *)0x0;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar2[lVar7] != 0);
    uVar6 = (int)lVar7 + 1;
    local_10 = (ulonglong)uVar6;
    uVar8 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      uVar8 = (uint)local_10;
    }
    puVar4 = local_18;
    FGenericPlatformString::Memcpy(local_18,psVar2,(longlong)(int)uVar6 * 2);
    puVar5 = puVar4;
    if (uVar8 != 0) goto LAB_1404ac478;
  }
  puVar4 = &DAT_143f3eda8;
LAB_1404ac478:
  SetValue(param_1,puVar4);
  *(undefined4 *)param_1 = 10;
  if (puVar5 == (undefined2 *)0x0) {
    return param_1;
  }
  FMemory::Free(puVar5);
  return param_1;
}



// FUNCTION 1404ac4f0 UNamedInterfaces body=67 status=ok
// SIG undefined UNamedInterfaces(void)

undefined8 * UNamedInterfaces::UNamedInterfaces(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__143f61090;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  return param_1;
}



// FUNCTION 1404ac540 ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=396 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1404ac601;
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
LAB_1404ac601:
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
      if (*(longlong *)((longlong)iStack_1c * 0x20 + *param_1) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1404ac6d0 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_> body=114 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1404ac750 FUN_1404ac750 body=146 status=ok
// SIG undefined FUN_1404ac750(void)

void FUN_1404ac750(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[3];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR_AsObject_143f60588;
    return;
  }
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
    *param_1 = &PTR_AsObject_143f60588;
    return;
  }
  *param_1 = &PTR_AsObject_143f60588;
  return;
}



// FUNCTION 1404ac7f0 ~FOnlineAsyncTaskManager body=148 status=ok
// SIG undefined ~FOnlineAsyncTaskManager(void)

void FOnlineAsyncTaskManager::~FOnlineAsyncTaskManager(undefined8 *param_1)

{
  *param_1 = &PTR_Init_143f61308;
  param_1[1] = &PTR_LAB_143f61340;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  return;
}



// FUNCTION 1404ac890 FUN_1404ac890 body=488 status=ok
// SIG undefined FUN_1404ac890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404ac890(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  lVar5 = param_1[0xd];
  uVar4 = 0;
  *param_1 = &PTR_FUN_143f61350;
  uVar7 = uVar4;
  uVar10 = uVar4;
  iVar8 = DAT_146533138;
  if (0 < DAT_146533138) {
    do {
      plVar9 = (longlong *)(DAT_146533130 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar8 = DAT_146533138, *plVar2 == lVar5)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar5 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar5;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar8 = DAT_146533138;
        }
        break;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar6 < iVar8);
  }
  if (DAT_146533144 < 1) {
    uVar7 = uVar4;
    iVar3 = iVar8;
    if (0 < iVar8) {
      do {
        if (((*(int *)(uVar4 + 8 + DAT_146533130) == 0) ||
            (*(longlong **)(uVar4 + DAT_146533130) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar4 + DAT_146533130) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533130,uVar7,1,1);
        }
        else {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar4 = uVar4 + 0x10;
        }
        iVar3 = DAT_146533138;
      } while ((int)uVar7 < DAT_146533138);
    }
    _DAT_146533140 = iVar3 * 2;
    if (_DAT_146533140 < 3) {
      _DAT_146533140 = 2;
    }
    if ((_DAT_146533140 < iVar8) && (DAT_14653313c != iVar3)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533130);
    }
  }
  iVar8 = *(int *)(param_1 + 0xb);
  lVar5 = param_1[10];
  if (iVar8 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
      lVar5 = lVar5 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar5 = param_1[10];
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  lVar5 = param_1[9];
  while (lVar5 != 0) {
    param_1[9] = *(undefined8 *)param_1[9];
    if (lVar5 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5 + 8);
      FMemory::operator_delete(lVar5,0x18);
    }
    lVar5 = param_1[9];
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f60e58;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 1404aca80 ~StackState body=124 status=ok
// SIG undefined ~StackState(void)

void FJsonSerializer::StackState::~StackState(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1404acb00 operator= body=237 status=ok
// SIG undefined operator=(void)

longlong *
TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  
  if (param_1 != param_2) {
    iVar8 = (int)param_1[1];
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*param_1 + 8);
      do {
        plVar4 = (longlong *)*plVar9;
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
        plVar9 = plVar9 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_2[1];
    puVar7 = (undefined8 *)*param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar8);
      puVar6 = (undefined8 *)*param_1;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = *puVar7;
        lVar5 = puVar7[1];
        puVar6[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 1404acbf0 FUN_1404acbf0 body=644 status=ok
// SIG undefined FUN_1404acbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1404acbf0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  void *_Dst;
  int iVar11;
  int iVar12;
  undefined1 auStack_198 [32];
  uint local_178 [2];
  short *local_170;
  short local_168 [128];
  short *local_68;
  short *local_60;
  uint local_58;
  ulonglong local_48;
  ulonglong uVar10;
  
  puVar7 = auStack_198;
  puVar8 = auStack_198;
  local_48 = DAT_1468387a8 ^ (ulonglong)local_178;
  if ((char)param_1[2] == '\0') {
    lVar3 = (longlong)*(int *)((longlong)param_1 + 0xc);
    iVar4 = *(int *)((longlong)param_1 + 0xc) + 4;
    if (iVar4 <= (int)param_1[1]) {
      lVar5 = *param_1;
      iVar11 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar5 + lVar3),
                                          *(undefined1 *)(lVar5 + 1 + lVar3)),
                                 *(undefined1 *)(lVar5 + lVar3 + 2)),
                        *(undefined1 *)(lVar5 + lVar3 + 3));
      *(int *)((longlong)param_1 + 0xc) = iVar4;
      if (iVar4 + iVar11 <= (int)param_1[1]) {
        pvVar6 = (void *)0x0;
        iVar12 = 0;
        if (iVar11 < 1) {
          *(undefined4 *)(param_2 + 1) = 0;
          puVar8 = auStack_198;
          if (*(int *)((longlong)param_2 + 0xc) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
            puVar8 = auStack_198;
          }
          goto LAB_1404ace48;
        }
        _Dst = pvVar6;
        if (iVar11 != -1) {
          uVar9 = (longlong)(iVar11 + 0x10) + 0xf;
          if (uVar9 <= (ulonglong)(longlong)(iVar11 + 0x10)) {
            uVar9 = 0xffffffffffffff0;
          }
          puVar7 = auStack_198 + -(uVar9 & 0xfffffffffffffff0);
          _Dst = (void *)((longlong)local_168 + -(uVar9 & 0xfffffffffffffff0) + -8);
        }
        *(undefined8 *)(puVar7 + -8) = 0x1404acce2;
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)(iVar4 + lVar5),(longlong)iVar11);
        *(undefined1 *)((longlong)iVar11 + (longlong)_Dst) = 0;
        lVar3 = -1;
        local_68 = (short *)0x0;
        if (_Dst == (void *)0x0) {
          local_60 = (short *)0x0;
          local_58 = 0;
        }
        else {
          uVar9 = 0xffffffffffffffff;
          do {
            uVar10 = uVar9;
            uVar9 = uVar10 + 1;
          } while (*(char *)((longlong)_Dst + uVar9) != '\0');
          local_178[0] = 0;
          *(undefined8 *)(puVar7 + -8) = 0x1404acd21;
          FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (local_178,0x7fffffff,_Dst,uVar9 & 0xffffffff);
          psVar2 = local_68;
          local_58 = local_178[0];
          local_178[0] = local_178[0] + 1;
          if (local_178[0] < 0x81) {
            if (local_68 != (short *)0x0) {
              lVar5 = 0;
LAB_1404acd55:
              *(undefined8 *)(puVar7 + -8) = 0x1404acd5d;
              local_68 = (short *)FMemory::Realloc(psVar2,lVar5,0);
            }
          }
          else if ((local_68 != (short *)0x0) || (local_178[0] != 0)) {
            lVar5 = (longlong)(int)local_178[0] * 2;
            goto LAB_1404acd55;
          }
          uVar1 = local_178[0];
          local_170 = local_168;
          if (local_68 != (short *)0x0) {
            local_170 = local_68;
          }
          local_60 = local_170;
          *(undefined8 *)(puVar7 + -8) = 0x1404acd93;
          FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_170,uVar1,_Dst,(int)uVar10 + 2);
        }
        psVar2 = local_60;
        if ((short *)*param_2 != local_60) {
          if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
            do {
              lVar3 = lVar3 + 1;
            } while (local_60[lVar3] != 0);
            pvVar6 = (void *)(ulonglong)((int)lVar3 + 1);
          }
          *(undefined4 *)(param_2 + 1) = 0;
          iVar4 = (int)pvVar6;
          if (*(int *)((longlong)param_2 + 0xc) != iVar4) {
            *(undefined8 *)(puVar7 + -8) = 0x1404acde5;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,pvVar6);
            iVar12 = *(int *)(param_2 + 1);
          }
          *(int *)(param_2 + 1) = iVar12 + iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar12 + iVar4) {
            *(undefined8 *)(puVar7 + -8) = 0x1404ace02;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar12);
          }
          if (iVar4 != 0) {
            pvVar6 = (void *)*param_2;
            *(undefined8 *)(puVar7 + -8) = 0x1404ace17;
            _guard_xfg_dispatch_icall_nop(pvVar6,psVar2,(longlong)iVar4 * 2);
          }
        }
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + iVar11;
        puVar8 = puVar7;
        if (local_68 != (short *)0x0) {
          *(undefined8 *)(puVar7 + -8) = 0x1404ace2c;
          FMemory::Free();
        }
        goto LAB_1404ace48;
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
LAB_1404ace48:
  *(undefined8 *)(puVar8 + -8) = 0x1404ace5a;
  return param_1;
}



// FUNCTION 1404ace80 FUN_1404ace80 body=282 status=ok
// SIG undefined FUN_1404ace80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1404ace80(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  void *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FName::ToString(param_2,&local_c8);
  puVar1 = &DAT_143f3eda8;
  if (local_c0 != 0) {
    puVar1 = local_c8;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_b8,puVar1);
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
     ((int)param_1[2] + 4U <= *(uint *)(param_1 + 1))) {
    *(char *)((longlong)(int)param_1[2] + *param_1) = (char)((uint)local_28 >> 0x18);
    *(char *)((longlong)(int)param_1[2] + 1 + *param_1) = (char)((uint)local_28 >> 0x10);
    *(char *)((longlong)(int)param_1[2] + 2 + *param_1) = (char)((uint)local_28 >> 8);
    *(char *)((longlong)(int)param_1[2] + 3 + *param_1) = (char)local_28;
    *(int *)(param_1 + 2) = (int)param_1[2] + 4;
    if ((*(char *)((longlong)param_1 + 0x14) == '\0') &&
       ((uint)((int)param_1[2] + local_28) <= *(uint *)(param_1 + 1))) {
      if (0 < local_28) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)param_1[2] + *param_1),local_30,(longlong)local_28);
        *(int *)(param_1 + 2) = (int)param_1[2] + local_28;
      }
      goto LAB_1404acf55;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
LAB_1404acf55:
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1404acfc0 FUN_1404acfc0 body=43 status=ok
// SIG undefined FUN_1404acfc0(void)

undefined8 * FUN_1404acfc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404acff0 FUN_1404acff0 body=43 status=ok
// SIG undefined FUN_1404acff0(void)

undefined8 * FUN_1404acff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404ad020 `scalar_deleting_destructor' body=114 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TJsonReader<wchar_t>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f60768;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404ad0a0 `scalar_deleting_destructor' body=115 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f607b8;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f60798;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404ad120 FUN_1404ad120 body=72 status=ok
// SIG undefined FUN_1404ad120(void)

undefined8 * FUN_1404ad120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f60798;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404ad170 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FBufferReader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f600f0;
  if (*(char *)(param_1 + 0x15) != '\0') {
    FMemory::Free(param_1[0x12]);
    param_1[0x12] = 0;
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1404ad1e0 `scalar_deleting_destructor' body=213 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FJsonStringReader::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__143f600f0;
    if (*(char *)(puVar1 + 0x15) != '\0') {
      FMemory::Free(puVar1[0x12]);
      puVar1[0x12] = 0;
    }
    FArchive::~FArchive(puVar1);
    FMemory::operator_delete(puVar1,0xb0);
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f60768;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1404ad2c0 FUN_1404ad2c0 body=43 status=ok
// SIG undefined FUN_1404ad2c0(void)

undefined8 * FUN_1404ad2c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_AsObject_143f60588;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404ad2f0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FJsonValueArray::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 2);
  *param_1 = &PTR_AsObject_143f60588;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404ad340 FUN_1404ad340 body=43 status=ok
// SIG undefined FUN_1404ad340(void)

undefined8 * FUN_1404ad340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_AsObject_143f60588;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404ad370 FUN_1404ad370 body=52 status=ok
// SIG undefined FUN_1404ad370(void)

undefined8 FUN_1404ad370(undefined8 param_1,ulonglong param_2)

{
  FUN_1404ac750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404ad3b0 FUN_1404ad3b0 body=72 status=ok
// SIG undefined FUN_1404ad3b0(void)

undefined8 * FUN_1404ad3b0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_AsObject_143f60588;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404ad400 FUN_1404ad400 body=107 status=ok
// SIG undefined FUN_1404ad400(void)

undefined8 * FUN_1404ad400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f60df0;
  FUN_1404b6bd0();
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1404ad470 `scalar_deleting_destructor' body=181 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOnlineAsyncTaskManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Init_143f61308;
  param_1[1] = &PTR_LAB_143f61340;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1404ad530 FUN_1404ad530 body=52 status=ok
// SIG undefined FUN_1404ad530(void)

undefined8 FUN_1404ad530(undefined8 param_1,ulonglong param_2)

{
  FUN_1404ac890();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404ad570 FUN_1404ad570 body=43 status=ok
// SIG undefined FUN_1404ad570(void)

undefined8 * FUN_1404ad570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404ad5a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateCanvasRenderTarget::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f60e58;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404ad5f0 `scalar_deleting_destructor' body=88 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNamedInterfaces::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404ad650 AddOnAchievementUnlockedDelegate_Handle body=258 status=ok
// SIG undefined AddOnAchievementUnlockedDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ad717) */

undefined8 *
IOnlineAchievements::AddOnAchievementUnlockedDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 8);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar2 + 1;
    if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ad760 AddOnLoginFlowLogoutDelegate_Handle body=261 status=ok
// SIG undefined AddOnLoginFlowLogoutDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ad82a) */

undefined8 *
IOnlineIdentity::AddOnLoginFlowLogoutDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar2 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ad870 AddOnValidResponsePacketDelegate_Handle body=258 status=ok
// SIG undefined AddOnValidResponsePacketDelegate_Handle(void)

/* WARNING: Removing unreachable block (ram,0x0001404ad937) */

undefined8 *
FLANSession::AddOnValidResponsePacketDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ad980 FUN_1404ad980 body=258 status=ok
// SIG undefined FUN_1404ad980(void)

/* WARNING: Removing unreachable block (ram,0x0001404ada47) */

undefined8 * FUN_1404ad980(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar2 + 1;
    if (*(int *)(param_1 + 0x74) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404ada90 AddToInQueue body=115 status=ok
// SIG undefined AddToInQueue(void)

void FOnlineAsyncTaskManager::AddToInQueue(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar1 + 1;
  if (*(int *)(param_1 + 0x4c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x40,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001404adafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 1404adb10 AddToOutQueue body=139 status=ok
// SIG undefined AddToOutQueue(void)

void FOnlineAsyncTaskManager::AddToOutQueue(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001404adb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  return;
}



// FUNCTION 1404adba0 FUN_1404adba0 body=144 status=ok
// SIG undefined FUN_1404adba0(void)

void FUN_1404adba0(longlong param_1,longlong *param_2)

{
  int iVar1;
  BOOL BVar2;
  
  (**(code **)(*param_2 + 0x20))(param_2);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  iVar1 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar1 + 1;
  if (*(int *)(param_1 + 0x84) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x78,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001404adc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  return;
}



// FUNCTION 1404adc30 AddUninitialized body=220 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1404add30 BeginDestroy body=41 status=ok
// SIG undefined BeginDestroy(void)

void UNamedInterfaces::BeginDestroy(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x48);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1404add60 FUN_1404add60 body=76 status=ok
// SIG undefined FUN_1404add60(void)

undefined8 FUN_1404add60(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x48))();
    if ((cVar1 != '\0') && (param_3 == 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404addb0 Clear body=132 status=ok
// SIG undefined Clear(void)

void FMulticastDelegateBase<FWeakObjectPtr>::Clear(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if (((int)plVar3[1] != 0) && (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*plVar3 != 0) {
        lVar2 = FMemory::Realloc(*plVar3,0,0);
        *plVar3 = lVar2;
      }
      *(undefined4 *)(plVar3 + 1) = 0;
    }
  }
  CompactInvocationList(param_1,0);
  return;
}



// FUNCTION 1404ade40 ClearOnAchievementUnlockedDelegate_Handle body=190 status=ok
// SIG undefined ClearOnAchievementUnlockedDelegate_Handle(void)

void IOnlineAchievements::ClearOnAchievementUnlockedDelegate_Handle
               (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404adf10 ClearOnLoginFlowLogoutDelegate_Handle body=190 status=ok
// SIG undefined ClearOnLoginFlowLogoutDelegate_Handle(void)

void IOnlineIdentity::ClearOnLoginFlowLogoutDelegate_Handle(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x80) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x88));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x80),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404adfe0 ClearOnValidResponsePacketDelegate_Handle body=190 status=ok
// SIG undefined ClearOnValidResponsePacketDelegate_Handle(void)

void FLANSession::ClearOnValidResponsePacketDelegate_Handle(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x50) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x58));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x50),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ae0b0 FUN_1404ae0b0 body=190 status=ok
// SIG undefined FUN_1404ae0b0(void)

void FUN_1404ae0b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x68) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x70));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x68),0);
  *param_2 = 0;
  return;
}



// FUNCTION 1404ae180 FUN_1404ae180 body=357 status=ok
// SIG undefined FUN_1404ae180(void)

undefined8 FUN_1404ae180(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong local_38;
  int local_30;
  int local_2c;
  ulonglong uVar7;
  
  iVar4 = *(int *)(param_1 + 0x30);
  local_30 = 0;
  local_38 = 0;
  local_2c = 0;
  iVar3 = (int)((ulonglong)(longlong)iVar4 >> 1) + 2;
  if (0 < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar3);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uVar7 = 0;
  lVar8 = local_38;
  uVar11 = uVar7;
  iVar3 = local_30;
  iVar10 = local_2c;
  if (0 < iVar4) {
    do {
      sVar1 = *(short *)(uVar11 + *(longlong *)(param_1 + 0x28));
      if (sVar1 != 0) {
        iVar4 = iVar3 + -1;
        if (iVar3 < 1) {
          iVar4 = 0;
        }
        local_30 = (iVar3 < 1) + 1 + iVar3;
        if (iVar10 < local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
          lVar8 = local_38;
          iVar10 = local_2c;
        }
        *(short *)(lVar8 + (longlong)iVar4 * 2) = sVar1;
        *(undefined2 *)(lVar8 + 2 + (longlong)iVar4 * 2) = 0;
        iVar3 = local_30;
      }
      uVar6 = (int)uVar7 + 2;
      uVar7 = (ulonglong)uVar6;
      uVar11 = uVar11 + 2;
    } while ((int)uVar6 < *(int *)(param_1 + 0x30));
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  lVar9 = lVar8;
  if (plVar2 != &local_38) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    lVar9 = 0;
    *plVar2 = lVar8;
    *(int *)(plVar2 + 1) = iVar3;
    *(int *)((longlong)plVar2 + 0xc) = iVar10;
  }
  if (((*(uint *)(param_1 + 0x20) < 6) && ((0x29U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0))
     && (*(int *)(param_1 + 0x18) == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  if (lVar9 != 0) {
    FMemory::Free(lVar9);
  }
  return uVar5;
}



// FUNCTION 1404ae310 Close body=56 status=ok
// SIG undefined Close(void)

byte FBufferReaderBase::Close(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) != '\0') {
    FMemory::Free(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return (byte)~*(byte *)(param_1 + 0x28) >> 7;
}



// FUNCTION 1404ae350 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1404b4e10(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404ae400 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404ae4b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404ae560 Create body=238 status=ok
// SIG undefined Create(void)

longlong * TJsonReaderFactory<wchar_t>::Create(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = operator_new(0x88);
  if (lVar5 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FJsonStringReader::FJsonStringReader(lVar5,param_2);
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar4 = local_10;
  *param_1 = local_18;
  param_1[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1404ae650 Create body=238 status=ok
// SIG undefined Create(void)

longlong * TJsonReaderFactory<wchar_t>::Create(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = operator_new(0x88);
  if (lVar5 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FJsonStringReader::FJsonStringReader(lVar5,param_2);
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar4 = local_10;
  *param_1 = local_18;
  param_1[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1404ae740 FUN_1404ae740 body=397 status=ok
// SIG undefined FUN_1404ae740(void)

longlong * FUN_1404ae740(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *local_38;
  longlong *local_30;
  
  puVar4 = (undefined8 *)operator_new(0x40);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0xa8);
    puVar8 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FArchive::FArchive(puVar5);
      puVar5[0x12] = 0;
      puVar5[0x14] = 0;
      *puVar5 = &PTR_FUN_143f4a100;
      puVar5[0x13] = puVar4 + 5;
      FArchive::SetIsSaving(puVar5,1);
      FArchive::SetIsPersistent(puVar5,0);
      puVar8 = puVar5;
    }
    puVar4[1] = puVar8;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = param_3;
    *puVar4 = &PTR__scalar_deleting_destructor__143f607b8;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = param_2;
  }
  plVar7 = (longlong *)0x0;
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)puVar4;
    plVar7 = plVar6;
  }
  local_38 = puVar4;
  local_30 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_38,puVar4,puVar4);
  plVar7 = local_30;
  *param_1 = (longlong)local_38;
  param_1[1] = (longlong)local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  }
  return param_1;
}



// FUNCTION 1404ae8d0 FUN_1404ae8d0 body=486 status=ok
// SIG undefined FUN_1404ae8d0(void)

void FUN_1404ae8d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  
  uVar3 = FUN_1404b0120();
  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
    lVar2 = param_2[2];
    uVar5 = (int)lVar2 + 1;
    if (uVar5 <= *(uint *)(param_2 + 1)) {
      *(uint *)(param_2 + 2) = uVar5;
      *(undefined1 *)((longlong)(int)lVar2 + *param_2) = 0xb;
      if (*(char *)((longlong)param_2 + 0x14) == '\0') {
        lVar2 = param_2[2];
        uVar5 = (int)lVar2 + 1;
        if (uVar5 <= *(uint *)(param_2 + 1)) {
          *(uint *)(param_2 + 2) = uVar5;
          *(undefined1 *)((longlong)(int)lVar2 + *param_2) = 1;
          goto LAB_1404ae938;
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x14) = 1;
LAB_1404ae938:
  plVar4 = (longlong *)FUN_1404ace80(param_2,param_1 + 0x48);
  if ((*(char *)((longlong)plVar4 + 0x14) == '\0') && ((int)plVar4[2] + 4U <= *(uint *)(plVar4 + 1))
     ) {
    *(char *)((longlong)(int)plVar4[2] + *plVar4) = (char)((uint)uVar3 >> 0x18);
    *(char *)((longlong)(int)plVar4[2] + 1 + *plVar4) = (char)((uint)uVar3 >> 0x10);
    *(char *)((longlong)(int)plVar4[2] + 2 + *plVar4) = (char)((uint)uVar3 >> 8);
    *(char *)((longlong)(int)plVar4[2] + 3 + *plVar4) = (char)uVar3;
    iVar1 = (int)plVar4[2];
    *(int *)(plVar4 + 2) = iVar1 + 4;
    if ((*(char *)((longlong)plVar4 + 0x14) == '\0') && (iVar1 + 5U <= *(uint *)(plVar4 + 1))) {
      *(uint *)(plVar4 + 2) = iVar1 + 5U;
      *(undefined1 *)((longlong)iVar1 + 4 + *plVar4) = 0x53;
      if (*(char *)((longlong)plVar4 + 0x14) == '\0') {
        lVar2 = plVar4[2];
        uVar5 = (int)lVar2 + 1;
        if (uVar5 <= *(uint *)(plVar4 + 1)) {
          *(uint *)(plVar4 + 2) = uVar5;
          *(undefined1 *)((longlong)(int)lVar2 + *plVar4) = 0x51;
          if ((*(char *)((longlong)plVar4 + 0x14) == '\0') &&
             ((int)plVar4[2] + 8U <= *(uint *)(plVar4 + 1))) {
            *(char *)((longlong)(int)plVar4[2] + *plVar4) = (char)((ulonglong)param_3 >> 0x38);
            *(char *)((longlong)(int)plVar4[2] + 1 + *plVar4) = (char)((ulonglong)param_3 >> 0x30);
            *(char *)((longlong)(int)plVar4[2] + 2 + *plVar4) = (char)((ulonglong)param_3 >> 0x28);
            *(char *)((longlong)(int)plVar4[2] + 3 + *plVar4) = (char)((ulonglong)param_3 >> 0x20);
            *(char *)((longlong)(int)plVar4[2] + 4 + *plVar4) = (char)((ulonglong)param_3 >> 0x18);
            *(char *)((longlong)(int)plVar4[2] + 5 + *plVar4) = (char)((ulonglong)param_3 >> 0x10);
            *(char *)((longlong)(int)plVar4[2] + 6 + *plVar4) = (char)((ulonglong)param_3 >> 8);
            *(char *)((longlong)(int)plVar4[2] + 7 + *plVar4) = (char)param_3;
            *(int *)(plVar4 + 2) = (int)plVar4[2] + 8;
            return;
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)plVar4 + 0x14) = 1;
  return;
}



// FUNCTION 1404aeac0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f61570;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_143f615b8;
  }
  return;
}



// FUNCTION 1404aeb10 FUN_1404aeb10 body=486 status=ok
// SIG undefined FUN_1404aeb10(void)

void FUN_1404aeb10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  
  uVar3 = FUN_1404b0120();
  if (*(char *)((longlong)param_2 + 0x14) == '\0') {
    lVar2 = param_2[2];
    uVar5 = (int)lVar2 + 1;
    if (uVar5 <= *(uint *)(param_2 + 1)) {
      *(uint *)(param_2 + 2) = uVar5;
      *(undefined1 *)((longlong)(int)lVar2 + *param_2) = 0xb;
      if (*(char *)((longlong)param_2 + 0x14) == '\0') {
        lVar2 = param_2[2];
        uVar5 = (int)lVar2 + 1;
        if (uVar5 <= *(uint *)(param_2 + 1)) {
          *(uint *)(param_2 + 2) = uVar5;
          *(undefined1 *)((longlong)(int)lVar2 + *param_2) = 1;
          goto LAB_1404aeb78;
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x14) = 1;
LAB_1404aeb78:
  plVar4 = (longlong *)FUN_1404ace80(param_2,param_1 + 0x48);
  if ((*(char *)((longlong)plVar4 + 0x14) == '\0') && ((int)plVar4[2] + 4U <= *(uint *)(plVar4 + 1))
     ) {
    *(char *)((longlong)(int)plVar4[2] + *plVar4) = (char)((uint)uVar3 >> 0x18);
    *(char *)((longlong)(int)plVar4[2] + 1 + *plVar4) = (char)((uint)uVar3 >> 0x10);
    *(char *)((longlong)(int)plVar4[2] + 2 + *plVar4) = (char)((uint)uVar3 >> 8);
    *(char *)((longlong)(int)plVar4[2] + 3 + *plVar4) = (char)uVar3;
    iVar1 = (int)plVar4[2];
    *(int *)(plVar4 + 2) = iVar1 + 4;
    if ((*(char *)((longlong)plVar4 + 0x14) == '\0') && (iVar1 + 5U <= *(uint *)(plVar4 + 1))) {
      *(uint *)(plVar4 + 2) = iVar1 + 5U;
      *(undefined1 *)((longlong)iVar1 + 4 + *plVar4) = 0x53;
      if (*(char *)((longlong)plVar4 + 0x14) == '\0') {
        lVar2 = plVar4[2];
        uVar5 = (int)lVar2 + 1;
        if (uVar5 <= *(uint *)(plVar4 + 1)) {
          *(uint *)(plVar4 + 2) = uVar5;
          *(undefined1 *)((longlong)(int)lVar2 + *plVar4) = 0x52;
          if ((*(char *)((longlong)plVar4 + 0x14) == '\0') &&
             ((int)plVar4[2] + 8U <= *(uint *)(plVar4 + 1))) {
            *(char *)((longlong)(int)plVar4[2] + *plVar4) = (char)((ulonglong)param_3 >> 0x38);
            *(char *)((longlong)(int)plVar4[2] + 1 + *plVar4) = (char)((ulonglong)param_3 >> 0x30);
            *(char *)((longlong)(int)plVar4[2] + 2 + *plVar4) = (char)((ulonglong)param_3 >> 0x28);
            *(char *)((longlong)(int)plVar4[2] + 3 + *plVar4) = (char)((ulonglong)param_3 >> 0x20);
            *(char *)((longlong)(int)plVar4[2] + 4 + *plVar4) = (char)((ulonglong)param_3 >> 0x18);
            *(char *)((longlong)(int)plVar4[2] + 5 + *plVar4) = (char)((ulonglong)param_3 >> 0x10);
            *(char *)((longlong)(int)plVar4[2] + 6 + *plVar4) = (char)((ulonglong)param_3 >> 8);
            *(char *)((longlong)(int)plVar4[2] + 7 + *plVar4) = (char)param_3;
            *(int *)(plVar4 + 2) = (int)plVar4[2] + 8;
            return;
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)plVar4 + 0x14) = 1;
  return;
}



// FUNCTION 1404aed00 DecrementFloatStat body=187 status=ok
// SIG undefined DecrementFloatStat(void)

void FOnlineStats::DecrementFloatStat(longlong param_1,undefined8 param_2,float param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  undefined8 local_48;
  int *local_40;
  int local_38 [2];
  ulonglong local_30;
  undefined8 local_28;
  
  piVar1 = (int *)FindStatByName();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 7)) {
    piVar1[2] = (int)((float)piVar1[2] - param_3);
    return;
  }
  local_38[0] = 7;
  local_28 = 0;
  local_40 = local_38;
  local_30 = (ulonglong)(uint)param_3 ^ 0x80000000;
  local_48 = param_2;
  FUN_1404a8f80(param_1 + 8,local_res20,&local_48,0);
  if ((local_38[0] == 6) || ((local_38[0] == 8 || (local_38[0] == 10)))) {
    FMemory::operator_delete(local_30);
  }
  return;
}



// FUNCTION 1404aedc0 DecrementIntStat body=166 status=ok
// SIG undefined DecrementIntStat(void)

void FOnlineStats::DecrementIntStat(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  undefined8 local_38;
  int *local_30;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  piVar1 = (int *)FindStatByName();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    piVar1[2] = piVar1[2] - param_3;
    return;
  }
  local_28[0] = 1;
  local_18 = 0;
  local_30 = local_28;
  local_20 = (ulonglong)(uint)-param_3;
  local_38 = param_2;
  FUN_1404a8f80(param_1 + 8,local_res20,&local_38,0);
  if ((local_28[0] == 6) || ((local_28[0] == 8 || (local_28[0] == 10)))) {
    FMemory::operator_delete(local_20);
  }
  return;
}



// FUNCTION 1404aee80 DestroyObject body=79 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FJsonObject>::DestroyObject
               (longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_1404af4a0((longlong *)(param_1 + 0x10),0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404aeed0 FUN_1404aeed0 body=9 status=ok
// SIG undefined FUN_1404aeed0(void)

void FUN_1404aeed0(longlong param_1)

{
  FUN_1404ac750(param_1 + 0x10);
  return;
}



// FUNCTION 1404aeee0 FUN_1404aeee0 body=47 status=ok
// SIG undefined FUN_1404aeee0(void)

void FUN_1404aeee0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FJsonSerializer::StackState::~StackState(lVar1);
    FMemory::operator_delete(lVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 1404aef10 FUN_1404aef10 body=97 status=ok
// SIG undefined FUN_1404aef10(void)

void FUN_1404aef10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = 0;
    if (plVar1[8] != 0) {
      FMemory::Free();
    }
    FUN_1404af4a0(plVar1,0);
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 1404aef80 FUN_1404aef80 body=22 status=ok
// SIG undefined FUN_1404aef80(void)

void FUN_1404aef80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404aef91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1404aefa0 FUN_1404aefa0 body=320 status=ok
// SIG undefined FUN_1404aefa0(void)

ulonglong FUN_1404aefa0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  puVar2 = (undefined8 *)FName::FName(local_res10,"OnlineSubsystem",1);
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FModuleManager::IsModuleLoaded(uVar3,*puVar2);
  if ((char)plVar4 != '\0') {
    puVar2 = (undefined8 *)FName::FName(local_res18,"OnlineSubsystem",1);
    uVar3 = *puVar2;
    uVar5 = FUN_14168dc80();
    plVar4 = (longlong *)FModuleManager::GetModule(uVar5,uVar3);
    lVar7 = *param_1;
    if (lVar7 == 0) {
      lVar7 = plVar4[1];
    }
    if (lVar7 != 0) {
      if ((int)plVar4[0x1a] != *(int *)((longlong)plVar4 + 0xfc)) {
        plVar6 = (longlong *)plVar4[0x21];
        if ((longlong *)plVar4[0x21] == (longlong *)0x0) {
          plVar6 = plVar4 + 0x20;
        }
        iVar1 = *(int *)((longlong)plVar6 +
                        ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                        (longlong)(int)plVar4[0x22] - 1U) * 4);
        if (iVar1 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar1 * 0x20 + plVar4[0x19]);
            if (*plVar6 == lVar7) {
              if (iVar1 != -1) goto LAB_1404af0b1;
              break;
            }
            iVar1 = (int)plVar6[3];
          } while (iVar1 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_1404af0b1:
      plVar4 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
        return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 1404af0e0 FUN_1404af0e0 body=323 status=ok
// SIG undefined FUN_1404af0e0(void)

void FUN_1404af0e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  if ((param_1 != 0) && (param_1 != -0x28)) {
    local_30 = param_1 + 0x50;
    iVar1 = *(int *)(param_1 + 0x78);
    puStack_20 = (uint *)(param_1 + 0x60);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar1 != 0) {
      puVar6 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      uStack_40 = 0;
      local_58 = 0;
      while (uVar2 == 0) {
        lVar5 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar4 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar4;
        if (bVar3) goto LAB_1404af1af;
        uVar2 = puVar6[lVar5 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_1404af1af:
        local_48._4_4_ = iVar1;
      }
    }
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_40 = 0xffffffff;
    iStack_3c = local_48._4_4_;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    if (bVar3) {
      do {
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return;
}



// FUNCTION 1404af230 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
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



// FUNCTION 1404af2b0 Empty body=481 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar4 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar6) goto LAB_1404af384;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_64 = -uVar7 & uVar7;
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
    if (iVar4 < iStack_54) {
LAB_1404af384:
      iStack_54 = iVar4;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar4) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x20 + *param_1 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1404af4a0 FUN_1404af4a0 body=526 status=ok
// SIG undefined FUN_1404af4a0(void)

void FUN_1404af4a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar4 != 0) {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = *puVar12;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar8 == 0) {
      lVar10 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar11 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar11;
      if (bVar6) goto LAB_1404af574;
      uVar8 = puVar12[lVar10 + 1];
    }
    uStack_74 = -uVar8 & uVar8;
    iVar11 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_64 = (iStack_60 - iVar11) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_1404af574:
      iStack_64 = iVar4;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar4) {
    do {
      lVar9 = (longlong)iStack_3c;
      lVar10 = *param_1;
      plVar5 = *(longlong **)(lVar10 + 0x18 + lVar9 * 0x28);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
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
      if (*(longlong *)(lVar10 + lVar9 * 0x28) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar8 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1404af6b0 Empty body=478 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_1404af781;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1404af781:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x30 + *param_1);
      iVar2 = (int)plVar6[2];
      if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
        FMemory::operator_delete(plVar6[3]);
      }
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar6[3] = 0;
      plVar6[4] = 0;
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1404af890 Empty body=57 status=ok
// SIG undefined Empty(void)

void FVariantData::Empty(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 == 6) || (iVar1 == 8)) || (iVar1 == 10)) {
    FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 1404af8d0 FUN_1404af8d0 body=209 status=ok
// SIG undefined FUN_1404af8d0(void)

ulonglong FUN_1404af8d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 local_res18 [2];
  undefined8 local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_res18[0] = param_3;
  uVar6 = FParse::Command(local_res18,L"SESSION",1);
  if ((char)uVar6 == '\0') {
    return uVar6 & 0xffffffffffffff00;
  }
  local_28 = local_res18[0];
  uVar6 = 0;
  cVar5 = FParse::Command(&local_28,L"DUMPSESSIONS",1);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,&local_20);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x348))();
    }
    uVar6 = 1;
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
  }
  return uVar6;
}



// FUNCTION 1404af9c0 ExecuteIfSafe body=42 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FVulkanPipelineStateCacheManager,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&)>
::ExecuteIfSafe(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1404af9f0 Exit body=48 status=ok
// SIG undefined Exit(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FOnlineAsyncTaskManager::Exit(longlong param_1)

{
  FUN_1415b5910(*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  _DAT_146852b90 = _DAT_146852b90 + -1;
  return;
}



// FUNCTION 1404afa20 FindId body=239 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar7);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar5 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if (*(int *)(param_3 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar5 + 8 + lVar4 * 0x30) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar5 + lVar4 * 0x30);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar5 = *param_1;
        iVar1 = *(int *)(lVar5 + 0x28 + lVar4 * 0x30);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1404afb10 FindStatByName body=140 status=ok
// SIG undefined FindStatByName(void)

longlong FOnlineStats::FindStatByName(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar1 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28,
            *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28) != lVar3) {
        iVar1 = *(int *)(lVar2 + 0x20);
        if (iVar1 == -1) {
          return 0;
        }
      }
      if (iVar1 != -1) goto LAB_1404afb90;
    }
  }
  lVar2 = 0;
LAB_1404afb90:
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1404afba0 FUN_1404afba0 body=606 status=ok
// SIG undefined FUN_1404afba0(void)

undefined8 FUN_1404afba0(int *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  double dVar8;
  undefined2 *local_18;
  undefined8 local_10;
  
  switch(*param_1 + -1) {
  case 0:
    if (*(int *)(param_2 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_2;
    }
    iVar2 = _wtoi(pwVar5);
    FVariantData::SetValue(param_1,iVar2);
    return 1;
  case 1:
    if (*(int *)(param_2 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_2;
    }
    uVar4 = _wcstoui64(pwVar5,(wchar_t **)0x0,10);
    FVariantData::SetValue(param_1,uVar4 & 0xffffffff);
    return 1;
  case 2:
    if (*(int *)(param_2 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_2;
    }
    lVar3 = _wtoi64(pwVar5);
    iVar2 = *param_1;
    if (((iVar2 == 6) || (iVar2 == 8)) || (iVar2 == 10)) {
      FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 3;
    *(longlong *)(param_1 + 2) = lVar3;
    return 1;
  case 3:
    if (*(int *)(param_2 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_2;
    }
    uVar4 = _wcstoui64(pwVar5,(wchar_t **)0x0,10);
    FVariantData::SetValue(param_1,uVar4);
    return 1;
  case 4:
    if (*(int *)(param_2 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_2;
    }
    dVar8 = wcstod(pwVar5,(wchar_t **)0x0);
    FVariantData::SetValue(param_1,SUB84(dVar8,0));
    return 1;
  case 5:
    break;
  case 6:
    if (*(int *)(param_2 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*param_2;
    }
    dVar8 = _wtof(pwVar5);
    FVariantData::SetValue(param_1,(float)dVar8);
    return 1;
  default:
    return 0;
  case 8:
    local_18 = (undefined2 *)0x0;
    local_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    puVar1 = local_18;
    FGenericPlatformString::Memcpy(local_18,L"true",10);
    puVar6 = &DAT_143f3eda8;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar7 = puVar1;
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    FVariantData::SetValue(param_1,iVar2 == 0);
    return 1;
  }
  if (*(int *)(param_2 + 1) != 0) {
    FVariantData::SetValue(param_1,*param_2);
    return 1;
  }
  FVariantData::SetValue(param_1,&DAT_143f3eda8);
  return 1;
}



// FUNCTION 1404afe30 FUN_1404afe30 body=455 status=ok
// SIG undefined FUN_1404afe30(void)

void FUN_1404afe30(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  plVar5 = (longlong *)0x0;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    iVar4 = *(int *)(param_1 + 0xb8);
    puVar1 = *(undefined8 **)(param_1 + 0xb0);
    plVar5 = (longlong *)*puVar1;
    if (iVar4 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop(puVar1,puVar1 + 1,(longlong)(iVar4 + -1) << 3);
      iVar4 = *(int *)(param_1 + 0xb8);
    }
    *(int *)(param_1 + 0xb8) = iVar4 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xb0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)*plVar5)(plVar5,1);
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  }
  iVar4 = *(int *)(param_1 + 0x48);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar6 = iVar4 + 1;
  if (lVar2 == 0) {
    iVar6 = iVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((lVar2 == 0) && (0 < iVar6)) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    }
    iVar4 = *(int *)(param_1 + 0x48);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    plVar5 = (longlong *)*puVar1;
    if (iVar4 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop(puVar1,puVar1 + 1,(longlong)(iVar4 + -1) << 3);
      iVar4 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar4 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    (**(code **)(*plVar5 + 0x20))(plVar5);
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    *(longlong **)(param_1 + 0x10) = plVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
  }
  return;
}



// FUNCTION 1404b0000 FUN_1404b0000 body=154 status=ok
// SIG undefined FUN_1404b0000(void)

void FUN_1404b0000(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar1 = DAT_146852c58;
  uVar2 = FUN_14168dc80();
  plVar3 = (longlong *)FModuleManager::GetModule(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001404b005a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x50))(plVar3,*param_1);
  return;
}



// FUNCTION 1404b00a0 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FBufferReader::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FBufferReader",0x1c);
  return param_2;
}



// FUNCTION 1404b00e0 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FBufferReaderBase::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FBufferReaderBase",0x24);
  return param_2;
}



// FUNCTION 1404b0120 FUN_1404b0120 body=438 status=ok
// SIG undefined FUN_1404b0120(void)

uint FUN_1404b0120(void)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_28;
  uint local_20;
  undefined8 local_1c;
  char local_14;
  
  if (DAT_146852c74 == '\0') {
    uVar5 = FCommandLine::Get();
    cVar2 = FParse::Value(uVar5,L"BuildIdOverride=",&DAT_146852c78);
    if ((cVar2 == '\0') || (DAT_146852c78 == 0)) {
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"OnlineSubsystem",L"bUseBuildIdOverride",&DAT_146852c75,
                 &DAT_1468e2360);
      FConfigCacheIni::GetInt
                (DAT_1468b6148,L"OnlineSubsystem",L"BuildIdOverride",&DAT_146852c78,&DAT_1468e2360);
    }
    else {
      DAT_146852c75 = '\x01';
    }
    DAT_146852c74 = '\x01';
  }
  uVar3 = FUN_1416727f0(1);
  if (DAT_146852c75 == '\0') {
    local_28 = 0;
    local_1c = 0;
    local_14 = '\0';
    local_20 = 0;
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_28);
    lVar7 = (longlong)(int)local_20;
    local_20 = local_20 + 0x40;
    if ((int)local_1c < (int)local_20) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    lVar1 = local_28;
    puVar6 = (undefined8 *)(lVar7 + local_28);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    if (local_14 == '\0') {
      uVar8 = (ulonglong)(int)local_1c._4_4_;
      if (local_1c._4_4_ + 4 <= local_20) {
        *(char *)(uVar8 + local_28) = (char)((uint)uVar3 >> 0x18);
        *(char *)((int)(local_1c._4_4_ + 1) + local_28) = (char)((uint)uVar3 >> 0x10);
        uVar8 = (ulonglong)(local_1c._4_4_ + 4);
        *(char *)((int)(local_1c._4_4_ + 2) + local_28) = (char)((uint)uVar3 >> 8);
        *(char *)((int)(local_1c._4_4_ + 3) + local_28) = (char)uVar3;
      }
    }
    else {
      uVar8 = (ulonglong)local_1c._4_4_;
    }
    uVar4 = FCrc::MemCrc32(local_28,uVar8 & 0xffffffff,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    return uVar4 & 0x7fffffff;
  }
  return DAT_146852c78;
}



// FUNCTION 1404b02e0 FUN_1404b02e0 body=196 status=ok
// SIG undefined FUN_1404b02e0(void)

undefined8 FUN_1404b02e0(char param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c70) {
    _Init_thread_header(&DAT_146852c70);
    if (DAT_146852c70 == -1) {
      FName::FName(&DAT_146852c68,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c70);
    }
  }
  if (param_1 == '\0') {
    uVar2 = FUN_14168dc80();
    cVar1 = FModuleManager::IsModuleLoaded(uVar2,DAT_146852c68);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar2 = DAT_146852c68;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FModuleManager::GetModule(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001404b0361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  return uVar2;
}



// FUNCTION 1404b03b0 FUN_1404b03b0 body=125 status=ok
// SIG undefined FUN_1404b03b0(void)

undefined * FUN_1404b03b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c50) {
    _Init_thread_header(&DAT_146852c50);
    if (DAT_146852c50 == -1) {
      FText::FText(&DAT_146852c38,0);
      atexit(FUN_143e3e8f0);
      _Init_thread_footer(&DAT_146852c50);
      return &DAT_146852c38;
    }
  }
  return &DAT_146852c38;
}



// FUNCTION 1404b0430 ToText body=5 status=ok
// SIG undefined ToText(void)

longlong IMessageToken::ToText(longlong param_1)

{
  return param_1 + 0x28;
}



// FUNCTION 1404b0440 FUN_1404b0440 body=11 status=ok
// SIG undefined FUN_1404b0440(void)

undefined8 * FUN_1404b0440(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  return param_2;
}



// FUNCTION 1404b0450 FUN_1404b0450 body=208 status=ok
// SIG undefined FUN_1404b0450(void)

undefined8 *
FUN_1404b0450(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)FUN_1404b02e0(1);
  if ((plVar4 != (longlong *)0x0) && (plVar4 != param_1)) {
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x28))(plVar4,local_18,param_3,param_4);
    if (param_2 != puVar5) {
      *param_2 = *puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar5 + 1);
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
  return param_2;
}



// FUNCTION 1404b0520 FUN_1404b0520 body=106 status=ok
// SIG undefined FUN_1404b0520(void)

longlong FUN_1404b0520(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
    FUN_1404b1110();
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (lVar3 == 0) {
      return 0;
    }
  }
  plVar1 = *(longlong **)(lVar3 + 0x28);
  plVar2 = plVar1 + (longlong)*(int *)(lVar3 + 0x30) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return plVar1[1];
}



// FUNCTION 1404b0590 GetOnlineModuleName body=569 status=ok
// SIG undefined GetOnlineModuleName(void)

undefined8 * GetOnlineModuleName(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  void *local_res8;
  undefined1 local_res18 [16];
  undefined2 *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  
  puVar5 = (undefined2 *)0x0;
  local_40 = 0x10;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"OnlineSubsystem",0x20);
  *param_1 = 0;
  cVar1 = FString::StartsWith(param_2,&local_48,0);
  if (cVar1 == '\0') {
    lVar6 = (longlong)(int)local_40;
    local_50 = *(int *)(param_2 + 1);
    lVar8 = (longlong)local_50;
    if ((int)local_40 < 2) {
      _Src = (void *)*param_2;
      local_58 = (undefined2 *)0x0;
      iVar7 = local_50;
      if (local_50 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        puVar5 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 * 2);
        iVar7 = local_50;
      }
    }
    else {
      iVar9 = local_50 + -1;
      if (local_50 == 0) {
        iVar9 = 0;
      }
      if (((int)local_40 != 0) || (iVar2 = 1, iVar9 == 0)) {
        iVar2 = 0;
      }
      local_58 = (undefined2 *)0x0;
      local_res8 = local_48;
      local_50 = (int)local_40;
      if (((int)local_40 == 0) && (iVar9 + iVar2 == 0)) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,(int)local_40 + iVar9 + iVar2,0);
        puVar5 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,local_res8,lVar6 * 2);
      }
      iVar2 = local_50;
      local_res8 = (void *)*param_2;
      iVar7 = local_50;
      if (iVar9 != 0) {
        lVar6 = (longlong)local_50;
        local_50 = iVar9 + (uint)(local_50 == 0) + local_50;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
          puVar5 = local_58;
        }
        iVar7 = local_50;
        _guard_xfg_dispatch_icall_nop
                  (puVar5 + (lVar6 - (ulonglong)(iVar2 != 0)),local_res8,(longlong)iVar9 * 2);
        (puVar5 + (lVar6 - (ulonglong)(iVar2 != 0)))[iVar9] = 0;
      }
    }
    puVar4 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar4 = puVar5;
    }
    puVar3 = (undefined8 *)FName::FName(local_res18,puVar4,1);
    *param_1 = *puVar3;
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    puVar3 = (undefined8 *)FName::FName(&local_res8,puVar5,1);
    *param_1 = *puVar3;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1404b07e0 GetType body=62 status=ok
// SIG undefined GetType(void)

undefined8 * FJsonValueArray::GetType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Array",0xc);
  return param_2;
}



// FUNCTION 1404b0820 GetType body=62 status=ok
// SIG undefined GetType(void)

undefined8 * FJsonValueBoolean::GetType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Boolean",0x10);
  return param_2;
}



// FUNCTION 1404b0860 GetType body=62 status=ok
// SIG undefined GetType(void)

undefined8 * FJsonValueNull::GetType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,&DAT_143f60758,10);
  return param_2;
}



// FUNCTION 1404b08a0 GetType body=62 status=ok
// SIG undefined GetType(void)

undefined8 * FJsonValueNumber::GetType(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Number",0xe);
  return param_2;
}


