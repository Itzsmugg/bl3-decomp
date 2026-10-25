// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142596980 FUN_142596980 body=412 status=ok
// SIG undefined FUN_142596980(void)

ulonglong FUN_142596980(longlong param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar10 = 0x9d;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    uVar6 = 0x9d;
    if (DVar5 == DAT_1468c21c0) goto LAB_1425969d8;
  }
  else {
LAB_1425969d8:
    uVar6 = 0x9c;
  }
  if (*(char *)(param_1 + uVar6) != '\0') {
LAB_142596aff:
    return uVar6 & 0xffffffffffffff00;
  }
  uVar7 = (ulonglong)*(int *)(param_1 + 0x160);
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 0x160)) {
    puVar8 = *(uint **)(param_1 + 0x158);
    lVar9 = 0;
    do {
      if (((((char)puVar8[4] != '\0') && (uVar6 = (ulonglong)*param_2, *puVar8 == *param_2)) &&
          (uVar6 = (ulonglong)param_2[1], puVar8[1] == param_2[1])) &&
         ((uVar6 = 0, *(char *)((longlong)puVar8 + 0xb) == *(char *)((longlong)param_2 + 0xb) &&
          (uVar6 = (ulonglong)param_2[3], puVar8[3] == param_2[3])))) {
        uVar1 = puVar8[9];
        *param_3 = uVar1;
        uVar2 = *(undefined8 *)(puVar8 + 7);
        *param_4 = *(undefined8 *)(puVar8 + 5);
        param_4[1] = uVar2;
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
      lVar9 = lVar9 + 1;
      puVar8 = puVar8 + 0xc;
    } while (lVar9 < (longlong)uVar7);
  }
  if (*(longlong *)(param_1 + 0x90) == 0) goto LAB_142596aff;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar9 = 0x9d;
    if (DVar5 != DAT_1468c21c0) goto LAB_142596a94;
  }
  lVar9 = 0x9c;
LAB_142596a94:
  *(undefined1 *)(param_1 + lVar9) = 1;
  bVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x318))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar10 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar10) = 0;
  return (ulonglong)bVar4;
}



// FUNCTION 142596b20 FUN_142596b20 body=85 status=ok
// SIG undefined FUN_142596b20(void)

undefined1 FUN_142596b20(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1c5,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetTerrainLayerWeightParameterValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1c5,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetTerrainLayerWeightParameterValue");
  return 0;
}



// FUNCTION 142596b90 FUN_142596b90 body=80 status=ok
// SIG undefined FUN_142596b90(void)

void FUN_142596b90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  float fVar2;
  
  fVar2 = (float)UMaterialInterface::GetTextureDensity();
  if ((fVar2 == 0.0) && (plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x4f0))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 142596be0 FUN_142596be0 body=369 status=ok
// SIG undefined FUN_142596be0(void)

float FUN_142596be0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = (float)UMaterialInterface::GetTextureDensity();
  if ((fVar9 == 0.0) && (plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0)) {
    fVar9 = (float)(**(code **)(*plVar1 + 0x4f0))(plVar1,param_2,param_3);
  }
  puVar7 = (ulonglong *)0x0;
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    lVar4 = *(longlong *)(param_1 + 0x220);
    if (*(longlong *)(param_1 + 0x220) == 0) {
      lVar4 = param_1 + 0x218;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)(param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x228) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        puVar6 = (ulonglong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x1e0));
        if (*puVar6 == param_2) {
          if (iVar3 != -1) goto LAB_142596ca1;
          break;
        }
        iVar3 = (int)puVar6[3];
      } while (iVar3 != -1);
    }
  }
  puVar6 = puVar7;
LAB_142596ca1:
  puVar5 = puVar6 + 1;
  if (puVar6 == (ulonglong *)0x0) {
    puVar5 = puVar7;
  }
  if (puVar5 != (ulonglong *)0x0) {
    puVar8 = (undefined8 *)*puVar5;
    puVar6 = (ulonglong *)((longlong)(int)puVar5[1] & 0x1fffffffffffffff);
    if (puVar8 + (int)puVar5[1] < puVar8) {
      puVar6 = puVar7;
    }
    fVar10 = fVar9;
    if (puVar6 != (ulonglong *)0x0) {
      do {
        uVar2 = *puVar8;
        fVar9 = (float)UMaterialInterface::GetTextureDensity(param_1,uVar2,param_3);
        if ((fVar9 == 0.0) && (plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0))
        {
          fVar9 = (float)(**(code **)(*plVar1 + 0x4f0))(plVar1,uVar2,param_3);
        }
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        puVar8 = puVar8 + 1;
        puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        fVar10 = fVar9;
      } while (puVar7 != puVar6);
    }
  }
  return fVar9;
}



// FUNCTION 142596d60 GetTextureDensity body=511 status=ok
// SIG undefined GetTextureDensity(void)

float UMaterialInterface::GetTextureDensity(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  longlong local_res10;
  
  if ((*DAT_146b16ee0 != 0) && (*DAT_146b16ce8 != 0)) {
    uVar2 = (ulonglong)*(int *)(param_1 + 0x68);
    uVar10 = 0;
    lVar8 = *(longlong *)(param_1 + 0x60);
    iVar1 = 0;
    local_res10 = param_2;
    if (*(int *)(param_1 + 0x68) != 0) {
      do {
        uVar7 = uVar2 >> 1;
        iVar1 = FName::Compare(lVar8 + 8 + (uVar7 + uVar10) * 0x10,&local_res10);
        if (iVar1 < 0) {
          uVar10 = (ulonglong)((uint)uVar2 & 1) + uVar7 + uVar10;
        }
        uVar2 = uVar7;
      } while (uVar7 != 0);
      iVar1 = *(int *)(param_1 + 0x68);
    }
    uVar9 = (uint)uVar10;
    uVar2 = (ulonglong)(int)uVar9;
    if (uVar2 < (ulonglong)(longlong)iVar1) {
      lVar8 = uVar2 * 0x10;
      iVar1 = FName::Compare(&local_res10,*(longlong *)(param_1 + 0x60) + 8 + lVar8);
      if ((-1 < iVar1) && (uVar9 != 0xffffffff)) {
        iVar1 = uVar9 + 1;
        if (iVar1 < *(int *)(param_1 + 0x68)) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x18 + lVar8);
          do {
            uVar9 = (uint)uVar10;
            if (*plVar5 != local_res10) break;
            uVar9 = uVar9 + 1;
            uVar10 = (ulonglong)uVar9;
            iVar1 = iVar1 + 1;
            plVar5 = plVar5 + 2;
          } while (iVar1 < *(int *)(param_1 + 0x68));
        }
        lVar6 = (longlong)(int)uVar9;
        fVar13 = 0.0;
        if (lVar6 < (longlong)uVar2) {
          return 0.0;
        }
        if (3 < (longlong)((lVar6 - uVar2) + 1)) {
          lVar3 = ((lVar6 - uVar2) - 3 >> 2) + 1;
          uVar2 = uVar2 + lVar3 * 4;
          pfVar4 = (float *)(*(longlong *)(param_1 + 0x60) + 0x10 + lVar8);
          piVar11 = (int *)(*(longlong *)(param_1 + 0x60) + 0x24 + lVar8);
          do {
            fVar12 = *(float *)(param_3 + 4 + (longlong)(int)pfVar4[-3] * 4) / pfVar4[-4];
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar13 = *(float *)(param_3 + 4 + (longlong)piVar11[-4] * 4) / *pfVar4;
            if (fVar13 <= fVar12) {
              fVar13 = fVar12;
            }
            fVar12 = *(float *)(param_3 + 4 + (longlong)*piVar11 * 4) / pfVar4[4];
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar13 = *(float *)(param_3 + 4 + (longlong)piVar11[4] * 4) / pfVar4[8];
            if (fVar13 <= fVar12) {
              fVar13 = fVar12;
            }
            lVar3 = lVar3 + -1;
            pfVar4 = pfVar4 + 0x10;
            piVar11 = piVar11 + 0x10;
          } while (lVar3 != 0);
        }
        if (lVar6 < (longlong)uVar2) {
          return fVar13;
        }
        lVar8 = (lVar6 - uVar2) + 1;
        pfVar4 = (float *)(uVar2 * 0x10 + *(longlong *)(param_1 + 0x60));
        do {
          fVar12 = *(float *)(param_3 + 4 + (longlong)(int)pfVar4[1] * 4) / *pfVar4;
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          lVar8 = lVar8 + -1;
          pfVar4 = pfVar4 + 4;
          fVar13 = fVar12;
        } while (lVar8 != 0);
        return fVar12;
      }
    }
  }
  return 0.0;
}



// FUNCTION 142596f60 FUN_142596f60 body=944 status=ok
// SIG undefined FUN_142596f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142596f60(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  uint local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_80 = param_2;
  local_78 = param_1;
  local_70[0] = FUN_142597a60(param_2);
  local_70[1] = FUN_142597b30(param_2);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar13 = *(longlong *)(param_2 + 0x10);
  }
  else {
    lVar13 = *(longlong *)(param_2 + 8);
    if (lVar13 == 0) {
      lVar13 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_2);
    }
  }
  uVar8 = (ulonglong)_tls_index;
  if (lVar13 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
         DAT_146afef60) && (_Init_thread_header(&DAT_146afef60), DAT_146afef60 == -1)) {
      DAT_146afef50 = 0;
      _DAT_146afef58 = 0;
      atexit(FUN_143eb3b20);
      _Init_thread_footer(&DAT_146afef60);
    }
    local_60 = &DAT_146afef50;
  }
  else {
    local_60 = (undefined8 *)(lVar13 + 0x248);
  }
  cVar3 = FUN_1415ad720();
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar13 = *(longlong *)(param_2 + 0x10);
LAB_14259707d:
    if (lVar13 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
           DAT_146afef78) && (_Init_thread_header(), DAT_146afef78 == -1)) {
        DAT_146afef68 = 0;
        _DAT_146afef70 = 0;
        atexit(FUN_143eb3940);
        _Init_thread_footer();
      }
      local_58 = &DAT_146afef68;
      goto LAB_1425970ae;
    }
  }
  else {
    lVar13 = *(longlong *)(param_2 + 8);
    if (lVar13 == 0) {
      lVar13 = FMaterialShaderMap::GetShaderMapBeingCompiled();
      goto LAB_14259707d;
    }
  }
  local_58 = (undefined8 *)(lVar13 + 600);
LAB_1425970ae:
  if (param_4 != (longlong *)0x0) {
    iVar12 = 0;
    plVar10 = local_70;
    lVar13 = 4;
    do {
      if (*plVar10 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*plVar10 + 8);
      }
      iVar12 = iVar12 + iVar6;
      plVar10 = plVar10 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    TArray<FString,FDefaultAllocator>::Empty(param_4,iVar12);
  }
  local_88 = local_70;
  local_98 = 0;
  do {
    plVar10 = (longlong *)*local_88;
    iVar12 = 0;
    if (0 < (int)plVar10[1]) {
      lVar13 = 0;
      do {
        local_a8 = 1;
        plVar10 = *(longlong **)(lVar13 + *plVar10);
        local_90 = 0;
        (**(code **)(*plVar10 + 0x58))(plVar10,param_1,param_2,&local_90);
        if (local_90 != 0) {
          plVar1 = (longlong *)*param_3;
          iVar6 = (int)param_3[1];
          for (plVar9 = plVar1; plVar9 != plVar1 + iVar6; plVar9 = plVar9 + 1) {
            if (*plVar9 == local_90) {
              iVar7 = (int)((longlong)plVar9 - (longlong)plVar1 >> 3);
              if (iVar7 != -1) goto LAB_1425971b4;
              break;
            }
          }
          *(int *)(param_3 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
          }
          *(longlong *)((longlong)iVar6 * 8 + *param_3) = local_90;
          iVar7 = iVar6;
LAB_1425971b4:
          param_1 = local_78;
          param_2 = local_80;
          if (param_4 != (longlong *)0x0) {
            iVar6 = (int)param_4[1];
            if (iVar6 <= iVar7) {
              iVar11 = (iVar7 - iVar6) + 1;
              iVar5 = iVar6 + iVar11;
              *(int *)(param_4 + 1) = iVar5;
              if (*(int *)((longlong)param_4 + 0xc) < iVar5) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x10 + *param_4),0,(longlong)iVar11 << 4);
            }
            lVar2 = plVar10[2];
            plVar10 = (longlong *)((longlong)iVar7 * 0x10 + *param_4);
            iVar6 = (int)plVar10[1];
            *(int *)(plVar10 + 1) = iVar6 + 1;
            if (*(int *)((longlong)plVar10 + 0xc) < iVar6 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar6);
            }
            *(int *)(*plVar10 + (longlong)iVar6 * 4) = (int)lVar2;
            param_1 = local_78;
            param_2 = local_80;
          }
        }
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        plVar10 = (longlong *)*local_88;
      } while (iVar12 < (int)plVar10[1]);
    }
    local_98 = local_98 + 1;
    local_88 = local_88 + 1;
    if (3 < local_98) {
      return;
    }
  } while( true );
}



// FUNCTION 142597310 FUN_142597310 body=412 status=ok
// SIG undefined FUN_142597310(void)

undefined8 FUN_142597310(longlong param_1,int *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res10;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
    if (param_4 != '\0') {
      piVar6 = *(int **)(param_1 + 0xc0);
      piVar1 = piVar6 + (longlong)*(int *)(param_1 + 200) * 10;
      if (piVar6 != piVar1) {
        do {
          if ((((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) &&
              (*(char *)((longlong)piVar6 + 0xb) == '\x02')) && (piVar6[3] == param_2[3])) {
            *param_3 = *(undefined8 *)(piVar6 + 4);
            return 1;
          }
          piVar6 = piVar6 + 10;
        } while (piVar6 != piVar1);
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x168);
    lVar8 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x68) {
      if (*(char *)(lVar7 + 0x50) != '\0') {
        plVar9 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar2 = param_2[3];
          plVar9 = (longlong *)0x0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar7 + 0x18))) {
            lVar4 = *(longlong *)(lVar7 + 0x10);
LAB_14259739f:
            plVar9 = *(longlong **)(lVar4 + (longlong)iVar2 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar2 = param_2[3], -1 < iVar2)
                 ) && (iVar2 < *(int *)(lVar7 + 0x28))) {
          lVar4 = *(longlong *)(lVar7 + 0x20);
          goto LAB_14259739f;
        }
        local_res10 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar9 + 0x2f0))(plVar9,param_2,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
          cVar3 = FUN_14257ce50(plVar9,param_2,local_38,&local_res10);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*local_res10 + 0x2f0))(local_res10,param_2,param_3);
            if (cVar3 != '\0') {
              return 1;
            }
            FUN_142571b20(local_38[0],param_2,param_3);
            return 1;
          }
        }
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if (plVar9 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar9 + 0x380))(plVar9,param_2,param_3,1);
  }
  return uVar5;
}



// FUNCTION 1425974b0 GetStaticComponentMaskParameterDefaultValue body=85 status=ok
// SIG undefined GetStaticComponentMaskParameterDefaultValue(void)

undefined1 UMaterialInterface::GetStaticComponentMaskParameterDefaultValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1fe,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetTextureParameterDefaultValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1fe,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetTextureParameterDefaultValue");
  return 0;
}



// FUNCTION 142597510 FUN_142597510 body=669 status=ok
// SIG undefined FUN_142597510(void)

undefined1 FUN_142597510(longlong param_1,int *param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_res8;
  undefined8 local_38 [2];
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar11 = 0x9d;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x9d;
    if (DVar5 == DAT_1468c21c0) goto LAB_14259755f;
  }
  else {
LAB_14259755f:
    lVar6 = 0x9c;
  }
  if (*(char *)(lVar6 + param_1) != '\0') {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0xc0);
  piVar1 = piVar8 + (longlong)*(int *)(param_1 + 200) * 10;
  if (piVar8 != piVar1) {
    do {
      if ((((*piVar8 == *param_2) && (piVar8[1] == param_2[1])) &&
          (*(char *)((longlong)piVar8 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar8[3] == param_2[3])) {
        *param_3 = *(undefined8 *)(piVar8 + 4);
        return 1;
      }
      piVar8 = piVar8 + 10;
    } while (piVar8 != piVar1);
  }
  if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
    lVar6 = *(longlong *)(param_1 + 0x168);
    local_38[0] = 0;
    lVar9 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar6;
    for (; lVar6 != lVar9; lVar6 = lVar6 + 0x68) {
      if (*(char *)(lVar6 + 0x50) != '\0') {
        plVar10 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar2 = param_2[3];
          plVar10 = (longlong *)0x0;
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar6 + 0x18))) {
            lVar7 = *(longlong *)(lVar6 + 0x10);
LAB_142597650:
            plVar10 = *(longlong **)(lVar7 + (longlong)iVar2 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar2 = param_2[3], -1 < iVar2)
                 ) && (iVar2 < *(int *)(lVar6 + 0x28))) {
          lVar7 = *(longlong *)(lVar6 + 0x20);
          goto LAB_142597650;
        }
        local_res8 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar10 + 0x2f0))(plVar10,param_2,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
          cVar3 = FUN_14257ce50(plVar10,param_2,local_38,&local_res8);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*local_res8 + 0x2f0))(local_res8,param_2,param_3);
            if (cVar3 != '\0') {
              return 1;
            }
            FUN_142571b20(local_38[0],param_2,param_3);
            return 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x9d;
    if (DVar5 != DAT_1468c21c0) goto LAB_142597705;
  }
  lVar6 = 0x9c;
LAB_142597705:
  *(undefined1 *)(lVar6 + param_1) = 1;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x428))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar11 = 0x9c;
  }
  *(undefined1 *)(lVar11 + param_1) = 0;
  return uVar4;
}



// FUNCTION 1425977c0 FUN_1425977c0 body=292 status=ok
// SIG undefined FUN_1425977c0(void)

ulonglong FUN_1425977c0(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if ((*(byte *)(param_1 + 0x110) & 8) != 0) {
    sVar2 = (short)param_2[2];
    if (((((-1 < sVar2) && ((int)sVar2 < *(int *)(param_1 + 0x178))) &&
         (piVar4 = (int *)(*(longlong *)(param_1 + 0x170) + (longlong)sVar2 * 0x18),
         *piVar4 == *param_2)) &&
        ((piVar4[1] == param_2[1] &&
         (*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb))))) &&
       (piVar4[3] == param_2[3])) {
      if (*(char *)((longlong)piVar4 + 10) != '\x02') {
LAB_14259782f:
        plVar5 = (longlong *)(piVar4 + 4);
        piVar4 = (int *)0x0;
        if ((plVar5 != (longlong *)0x0) && (lVar3 = *plVar5, piVar4 = (int *)0x0, lVar3 != 0)) {
          *param_3 = lVar3;
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
      }
      goto LAB_142597896;
    }
  }
  piVar4 = *(int **)(param_1 + 0x170);
  piVar1 = piVar4 + (longlong)*(int *)(param_1 + 0x178) * 6;
  if (piVar4 != piVar1) {
    do {
      if (((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) &&
         ((*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb) &&
          (piVar4[3] == param_2[3])))) goto LAB_14259782f;
      piVar4 = piVar4 + 6;
    } while (piVar4 != piVar1);
  }
LAB_142597896:
  plVar5 = *(longlong **)(param_1 + 0x138);
  if (plVar5 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2a8))(plVar5,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001425978ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*plVar5 + 0x68))(plVar5,param_2,param_3,param_4);
    return uVar6;
  }
  return (ulonglong)piVar4 & 0xffffffffffffff00;
}



// FUNCTION 142597990 FUN_142597990 body=198 status=ok
// SIG undefined FUN_142597990(void)

undefined8 * FUN_142597990(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_1425979ca;
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
LAB_1425979ca:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_1425979e0;
    lVar3 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_1);
  }
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afef78) {
      _Init_thread_header(&DAT_146afef78);
      if (DAT_146afef78 == -1) {
        atexit(FUN_143eb3940);
        _Init_thread_footer(&DAT_146afef78);
        return &DAT_146afef68;
      }
    }
    return &DAT_146afef68;
  }
LAB_1425979e0:
  return (undefined8 *)(lVar3 + 600);
}



// FUNCTION 142597a60 FUN_142597a60 body=198 status=ok
// SIG undefined FUN_142597a60(void)

undefined8 * FUN_142597a60(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_142597a9a;
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
LAB_142597a9a:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_142597ab0;
    lVar3 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_1);
  }
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afef30) {
      _Init_thread_header(&DAT_146afef30);
      if (DAT_146afef30 == -1) {
        atexit(FUN_143eb39a0);
        _Init_thread_footer(&DAT_146afef30);
        return &DAT_146afef20;
      }
    }
    return &DAT_146afef20;
  }
LAB_142597ab0:
  return (undefined8 *)(lVar3 + 0x228);
}



// FUNCTION 142597b30 FUN_142597b30 body=198 status=ok
// SIG undefined FUN_142597b30(void)

undefined8 * FUN_142597b30(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_142597b6a;
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
LAB_142597b6a:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_142597b80;
    lVar3 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_1);
  }
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afef48) {
      _Init_thread_header(&DAT_146afef48);
      if (DAT_146afef48 == -1) {
        atexit(FUN_143eb3a00);
        _Init_thread_footer(&DAT_146afef48);
        return &DAT_146afef38;
      }
    }
    return &DAT_146afef38;
  }
LAB_142597b80:
  return (undefined8 *)(lVar3 + 0x238);
}



// FUNCTION 142597c00 FUN_142597c00 body=198 status=ok
// SIG undefined FUN_142597c00(void)

undefined8 * FUN_142597c00(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_142597c3a;
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
LAB_142597c3a:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_142597c50;
    lVar3 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_1);
  }
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afefa8) {
      _Init_thread_header(&DAT_146afefa8);
      if (DAT_146afefa8 == -1) {
        atexit(FUN_143eb3a60);
        _Init_thread_footer(&DAT_146afefa8);
        return &DAT_146afef98;
      }
    }
    return &DAT_146afef98;
  }
LAB_142597c50:
  return (undefined8 *)(lVar3 + 0x218);
}



// FUNCTION 142597cd0 FUN_142597cd0 body=198 status=ok
// SIG undefined FUN_142597cd0(void)

undefined8 * FUN_142597cd0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_142597d0a;
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
LAB_142597d0a:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_142597d20;
    lVar3 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_1);
  }
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afef90) {
      _Init_thread_header(&DAT_146afef90);
      if (DAT_146afef90 == -1) {
        atexit(FUN_143eb3ac0);
        _Init_thread_footer(&DAT_146afef90);
        return &DAT_146afef80;
      }
    }
    return &DAT_146afef80;
  }
LAB_142597d20:
  return (undefined8 *)(lVar3 + 0x208);
}



// FUNCTION 142597da0 FUN_142597da0 body=198 status=ok
// SIG undefined FUN_142597da0(void)

undefined8 * FUN_142597da0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 == DAT_1468c21c0) goto LAB_142597dda;
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
LAB_142597dda:
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) goto LAB_142597df0;
    lVar3 = FMaterialShaderMap::GetShaderMapBeingCompiled(param_1);
  }
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146afef60) {
      _Init_thread_header(&DAT_146afef60);
      if (DAT_146afef60 == -1) {
        atexit(FUN_143eb3b20);
        _Init_thread_footer(&DAT_146afef60);
        return &DAT_146afef50;
      }
    }
    return &DAT_146afef50;
  }
LAB_142597df0:
  return (undefined8 *)(lVar3 + 0x248);
}



// FUNCTION 142597e70 FUN_142597e70 body=446 status=ok
// SIG undefined FUN_142597e70(void)

void FUN_142597e70(longlong *param_1,longlong param_2,int param_3,char param_4,int param_5,
                  char param_6)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int local_res10;
  int local_48;
  
  local_48 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  local_res10 = 2;
  iVar8 = 0;
  if ((param_4 == '\0') && (iVar8 = param_3, local_res10 = param_3, param_3 == 3)) {
    lVar4 = FUN_1428742e0();
    iVar8 = *(int *)(lVar4 + 0xc);
    param_3 = iVar8;
    local_res10 = iVar8;
  }
  iVar7 = 3;
  if ((param_6 == '\0') && (iVar7 = param_5, local_48 = param_5, param_5 == 4)) {
    param_5 = DAT_1464c9c14;
    iVar7 = DAT_1464c9c14;
    local_48 = DAT_1464c9c14;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1);
  if ((plVar5 == (longlong *)0x0) ||
     (cVar3 = UMaterial::IsDefaultMaterial(plVar5), plVar6 = param_1, cVar3 != '\0')) {
    plVar5 = (longlong *)UMaterial::GetDefaultMaterial(0);
    (**(code **)(*plVar5 + 0x2b8))(plVar5,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    do {
      plVar9 = plVar6;
      if (((*(byte *)(plVar6 + 0x13) & 1) != 0) ||
         (plVar6 = (longlong *)plVar6[0x12], plVar9 = plVar5, plVar6 == (longlong *)0x0)) break;
      lVar4 = FUN_1429b6de0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    } while (bVar1);
    for (; iVar2 = local_48, iVar8 <= local_res10; iVar8 = iVar8 + 1) {
      for (; iVar2 <= iVar7; iVar2 = iVar2 + 1) {
        lVar4 = (**(code **)(*plVar9 + 0x2f8))(plVar9,iVar2,iVar8);
        if (lVar4 != 0) {
          FUN_142596f60(param_1,lVar4,param_2,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142598030 FUN_142598030 body=82 status=ok
// SIG undefined FUN_142598030(void)

void FUN_142598030(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x16e,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetUsedTextures");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x16e,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 142598090 FUN_142598090 body=358 status=ok
// SIG undefined FUN_142598090(void)

void FUN_142598090(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 local_res10;
  undefined4 local_res14;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar3 = (longlong *)*param_3;
  for (iVar4 = *(int *)(param_3 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  plVar3 = param_1;
  if (param_1 != (longlong *)0x0) {
    do {
      if ((*(byte *)(plVar3 + 0x13) & 1) != 0) {
        local_res14 = param_5;
        local_res10 = param_4;
        lVar2 = FUN_14256a620(plVar3 + 0x31,&local_res10);
        goto LAB_142598180;
      }
      plVar3 = (longlong *)plVar3[0x12];
      if (plVar3 == (longlong *)0x0) break;
      lVar2 = FUN_1429b6de0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    } while (bVar1);
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)UMaterial::GetDefaultMaterial(0);
    (**(code **)(*plVar3 + 0x2c0))(plVar3,param_2,param_3,param_4,param_5);
  }
  else {
    lVar2 = (**(code **)(*plVar3 + 0x2f8))(plVar3,param_5,param_4);
LAB_142598180:
    if (lVar2 != 0) {
      FUN_142596f60(param_1,lVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142598200 GetUsedTexturesAndIndices body=121 status=ok
// SIG undefined GetUsedTexturesAndIndices(void)

void UMaterialInterface::GetUsedTexturesAndIndices
               (longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_4,0,param_5,0);
  iVar1 = *(int *)(param_2 + 8);
  lVar2 = param_3[1];
  iVar3 = (int)lVar2 + iVar1;
  *(int *)(param_3 + 1) = iVar3;
  if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)lVar2 * 0x10 + *param_3),0,(longlong)iVar1 << 4);
  return;
}



// FUNCTION 142598280 FUN_142598280 body=454 status=ok
// SIG undefined FUN_142598280(void)

undefined8
FUN_142598280(longlong param_1,int *param_2,undefined8 *param_3,undefined1 param_4,char param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res10;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(char *)((longlong)param_2 + 0xb) == '\x02') {
    if (param_5 != '\0') {
      piVar5 = *(int **)(param_1 + 0xb0);
      piVar6 = piVar5 + (longlong)*(int *)(param_1 + 0xb8) * 0xc;
      if (piVar5 != piVar6) {
        do {
          if ((((*piVar5 == *param_2) && (piVar5[1] == param_2[1])) &&
              (*(char *)((longlong)piVar5 + 0xb) == '\x02')) && (piVar5[3] == param_2[3])) {
            uVar4 = *(undefined8 *)(piVar5 + 6);
            *param_3 = *(undefined8 *)(piVar5 + 4);
            param_3[1] = uVar4;
            return 1;
          }
          piVar5 = piVar5 + 0xc;
        } while (piVar5 != piVar6);
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x168);
    lVar8 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x68) {
      if (*(char *)(lVar7 + 0x50) != '\0') {
        plVar9 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar1 = param_2[3];
          plVar9 = (longlong *)0x0;
          if ((-1 < iVar1) && (iVar1 < *(int *)(lVar7 + 0x18))) {
            lVar3 = *(longlong *)(lVar7 + 0x10);
LAB_14259831f:
            plVar9 = *(longlong **)(lVar3 + (longlong)iVar1 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar1 = param_2[3], -1 < iVar1)
                 ) && (iVar1 < *(int *)(lVar7 + 0x28))) {
          lVar3 = *(longlong *)(lVar7 + 0x20);
          goto LAB_14259831f;
        }
        local_res10 = (longlong *)0x0;
        if (plVar9 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar9 + 0x2e8))(plVar9,param_2,param_3);
          if (cVar2 != '\0') {
            return 1;
          }
          cVar2 = FUN_14255a5b0(plVar9,param_2,local_38,&local_res10);
          if (cVar2 != '\0') {
            cVar2 = (**(code **)(*local_res10 + 0x2e8))(local_res10,param_2,param_3);
            if (cVar2 != '\0') {
              return 1;
            }
            UMaterialExpressionVectorParameter::IsNamedParameter(local_38[0],param_2,param_3);
            return 1;
          }
        }
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if (plVar9 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar9 + 0x378))(plVar9,param_2,param_3,param_4,1);
  }
  return uVar4;
}



// FUNCTION 142598450 Exec body=85 status=ok
// SIG undefined Exec(void)

undefined1 FExec::Exec(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1fc,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetVectorParameterDefaultValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1fc,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::GetVectorParameterDefaultValue");
  return 0;
}



// FUNCTION 1425984b0 FUN_1425984b0 body=676 status=ok
// SIG undefined FUN_1425984b0(void)

byte FUN_1425984b0(longlong param_1,int *param_2,undefined8 *param_3,byte param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *local_res8;
  undefined8 local_38 [2];
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 0x9d;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x9d;
    if (DVar5 == DAT_1468c21c0) goto LAB_1425984ff;
  }
  else {
LAB_1425984ff:
    lVar6 = 0x9c;
  }
  if (*(char *)(lVar6 + param_1) != '\0') {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0xb0);
  piVar9 = piVar8 + (longlong)*(int *)(param_1 + 0xb8) * 0xc;
  if (piVar8 != piVar9) {
    do {
      if ((((*piVar8 == *param_2) && (piVar8[1] == param_2[1])) &&
          (*(char *)((longlong)piVar8 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar8[3] == param_2[3])) {
        uVar2 = *(undefined8 *)(piVar8 + 6);
        *param_3 = *(undefined8 *)(piVar8 + 4);
        param_3[1] = uVar2;
        return 1;
      }
      piVar8 = piVar8 + 0xc;
    } while (piVar8 != piVar9);
  }
  if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
    lVar6 = *(longlong *)(param_1 + 0x168);
    local_38[0] = 0;
    lVar10 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar6;
    for (; lVar6 != lVar10; lVar6 = lVar6 + 0x68) {
      if (*(char *)(lVar6 + 0x50) != '\0') {
        plVar11 = (longlong *)0x0;
        if (*(char *)((longlong)param_2 + 0xb) == '\0') {
          iVar1 = param_2[3];
          plVar11 = (longlong *)0x0;
          if ((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x18))) {
            lVar7 = *(longlong *)(lVar6 + 0x10);
LAB_1425985f1:
            plVar11 = *(longlong **)(lVar7 + (longlong)iVar1 * 8);
          }
        }
        else if (((*(char *)((longlong)param_2 + 0xb) == '\x01') && (iVar1 = param_2[3], -1 < iVar1)
                 ) && (iVar1 < *(int *)(lVar6 + 0x28))) {
          lVar7 = *(longlong *)(lVar6 + 0x20);
          goto LAB_1425985f1;
        }
        local_res8 = (longlong *)0x0;
        if (plVar11 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar11 + 0x2e8))(plVar11,param_2,param_3);
          if (cVar3 != '\0') {
            return 1;
          }
          cVar3 = FUN_14255a5b0(plVar11,param_2,local_38,&local_res8);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*local_res8 + 0x2e8))(local_res8,param_2,param_3);
            if (cVar3 != '\0') {
              return 1;
            }
            UMaterialExpressionVectorParameter::IsNamedParameter(local_38[0],param_2,param_3);
            return param_4 ^ 1;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 0x9d;
    if (DVar5 != DAT_1468c21c0) goto LAB_1425986a2;
  }
  lVar6 = 0x9c;
LAB_1425986a2:
  *(undefined1 *)(lVar6 + param_1) = 1;
  bVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x400))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar12 = 0x9c;
  }
  *(undefined1 *)(lVar12 + param_1) = 0;
  return bVar4;
}



// FUNCTION 142598790 FUN_142598790 body=283 status=ok
// SIG undefined FUN_142598790(void)

ulonglong FUN_142598790(longlong param_1,int *param_2,undefined8 *param_3,undefined8 param_4)

{
  short sVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  longlong *plVar6;
  ulonglong uVar7;
  int *piVar5;
  
  if ((*(byte *)(param_1 + 0x110) & 8) != 0) {
    sVar1 = (short)param_2[2];
    if (((((-1 < sVar1) && ((int)sVar1 < *(int *)(param_1 + 0x158))) &&
         (piVar3 = (int *)((longlong)sVar1 * 0x20 + *(longlong *)(param_1 + 0x150)),
         *piVar3 == *param_2)) &&
        ((piVar3[1] == param_2[1] &&
         (*(char *)((longlong)piVar3 + 0xb) == *(char *)((longlong)param_2 + 0xb))))) &&
       (piVar3[3] == param_2[3])) {
      piVar4 = piVar3;
      if (*(char *)((longlong)piVar3 + 10) != '\x02') {
LAB_1425987fb:
        piVar5 = piVar4 + 4;
        piVar3 = (int *)0x0;
        if (piVar5 != (int *)0x0) {
          uVar2 = *(undefined8 *)(piVar4 + 6);
          *param_3 = *(undefined8 *)piVar5;
          param_3[1] = uVar2;
          return CONCAT71((int7)((ulonglong)piVar5 >> 8),1);
        }
      }
      goto LAB_14259885d;
    }
  }
  piVar3 = *(int **)(param_1 + 0x150);
  piVar5 = piVar3 + (longlong)*(int *)(param_1 + 0x158) * 8;
  if (piVar3 != piVar5) {
    do {
      if (((*piVar3 == *param_2) && (piVar3[1] == param_2[1])) &&
         ((*(char *)((longlong)piVar3 + 0xb) == *(char *)((longlong)param_2 + 0xb) &&
          (piVar4 = piVar3, piVar3[3] == param_2[3])))) goto LAB_1425987fb;
      piVar3 = piVar3 + 8;
    } while (piVar3 != piVar5);
  }
LAB_14259885d:
  plVar6 = *(longlong **)(param_1 + 0x138);
  if (plVar6 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2a8))(plVar6,0,0);
                    /* WARNING: Could not recover jumptable at 0x000142598895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x58))(plVar6,param_2,param_3,param_4);
    return uVar7;
  }
  return (ulonglong)piVar3 & 0xffffffffffffff00;
}



// FUNCTION 1425988d0 FUN_1425988d0 body=410 status=ok
// SIG undefined FUN_1425988d0(void)

undefined8 FUN_1425988d0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char local_res10 [8];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    return 0;
  }
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_142595aa0(param_2,&local_68);
  local_78 = 0;
  local_70 = 0;
  plVar1 = local_68 + (longlong)(int)local_60 * 5;
  plVar5 = local_68;
  do {
    if (plVar5 == plVar1) {
      uVar6 = 1;
LAB_142598a0b:
      TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
      ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(&local_38);
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      return uVar6;
    }
    if (param_4 != (longlong *)0x0) {
      plVar4 = (longlong *)*param_4;
      plVar2 = plVar4 + (int)param_4[1];
      if (plVar4 != plVar2) {
        do {
          if (*plVar4 == *plVar5) goto LAB_1425989fc;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
      }
    }
    if (param_3 == (longlong *)0x0) {
LAB_1425989c0:
      local_88 = *plVar5;
      local_80 = 0x202ffff;
      local_7c = 0xffffffff;
      cVar3 = (**(code **)(*param_1 + 0x308))(param_1,&local_88,local_res10,&local_78,0);
      if ((cVar3 != '\0') && (local_res10[0] != (char)plVar5[2])) {
        uVar6 = 0;
        goto LAB_142598a0b;
      }
    }
    else {
      plVar4 = (longlong *)*param_3;
      plVar2 = plVar4 + (int)param_3[1];
      if (plVar4 != plVar2) {
        do {
          if (*plVar4 == *plVar5) goto LAB_1425989c0;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
      }
    }
LAB_1425989fc:
    plVar5 = plVar5 + 5;
  } while( true );
}



// FUNCTION 142598aa0 FUN_142598aa0 body=56 status=ok
// SIG undefined FUN_142598aa0(void)

undefined8 FUN_142598aa0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1[5] + 0x128) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142598ae0 FUN_142598ae0 body=537 status=ok
// SIG undefined FUN_142598ae0(void)

undefined8 FUN_142598ae0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float extraout_XMM0_Da;
  
  lVar6 = (**(code **)(*param_1 + 0x288))();
  if (((param_1[0x12] != 0) && (lVar6 != 0)) && ((*(byte *)(lVar6 + 0x708) & 0x40) == 0)) {
    plVar1 = (longlong *)param_1[0x12];
    fVar7 = (float)(**(code **)(*param_1 + 0x448))(param_1);
    (**(code **)(*plVar1 + 0x448))(plVar1);
    if (ABS(fVar7 - extraout_XMM0_Da) <= 1e-08) {
      iVar4 = (**(code **)(*(longlong *)param_1[0x12] + 0x460))();
      iVar5 = (**(code **)(*param_1 + 0x460))(param_1);
      if (iVar5 == iVar4) {
        iVar4 = (**(code **)(*(longlong *)param_1[0x12] + 0x468))();
        iVar5 = (**(code **)(*param_1 + 0x468))(param_1);
        if (iVar5 == iVar4) {
          cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x470))();
          cVar3 = (**(code **)(*param_1 + 0x470))(param_1);
          if (cVar3 == cVar2) {
            plVar1 = (longlong *)param_1[0x12];
            cVar2 = (**(code **)(*param_1 + 0x478))(param_1);
            cVar3 = (**(code **)(*plVar1 + 0x478))(plVar1);
            if (cVar2 == cVar3) {
              cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x480))();
              cVar3 = (**(code **)(*param_1 + 0x480))(param_1);
              if (cVar3 == cVar2) {
                cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x488))();
                cVar3 = (**(code **)(*param_1 + 0x488))(param_1);
                if (cVar3 == cVar2) {
                  cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x490))();
                  cVar3 = (**(code **)(*param_1 + 0x490))(param_1);
                  if (cVar3 == cVar2) {
                    cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x498))();
                    cVar3 = (**(code **)(*param_1 + 0x498))(param_1);
                    if (cVar3 == cVar2) {
                      cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x4a0))();
                      cVar3 = (**(code **)(*param_1 + 0x4a0))(param_1);
                      if (cVar3 == cVar2) {
                        cVar2 = (**(code **)(*(longlong *)param_1[0x12] + 0x450))();
                        cVar3 = (**(code **)(*param_1 + 0x450))(param_1);
                        if (cVar3 == cVar2) {
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142598d00 FUN_142598d00 body=157 status=ok
// SIG undefined FUN_142598d00(void)

undefined8 FUN_142598d00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)0x0;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    if (param_2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x68);
    }
    lVar1 = *(longlong *)(param_1 + 200);
    if (*(longlong *)(param_1 + 200) == 0) {
      lVar1 = param_1 + 0xc0;
    }
    iVar4 = *(int *)(lVar1 + ((longlong)*(int *)(param_1 + 0xd0) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      do {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x18) == param_2) {
          if (iVar4 != -1) goto LAB_142598d83;
          break;
        }
        iVar4 = *(int *)(puVar3 + 2);
      } while (iVar4 != -1);
    }
  }
  puVar3 = puVar5;
LAB_142598d83:
  puVar2 = puVar3 + 1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = puVar5;
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar2;
  }
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),puVar5 != (undefined8 *)0x0);
}



// FUNCTION 142598da0 FUN_142598da0 body=215 status=ok
// SIG undefined FUN_142598da0(void)

void FUN_142598da0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar2 = DAT_1469f59d0;
  plVar1 = (longlong *)(param_1 + 0xf0);
  uVar5 = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != iVar2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    iVar3 = *(int *)(param_1 + 0xf8);
  }
  lVar6 = (longlong)DAT_1469f59d0;
  iVar2 = iVar3 + DAT_1469f59d0;
  *(int *)(param_1 + 0xf8) = iVar2;
  if (*(int *)(param_1 + 0xfc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar3 * 8),0,lVar6 << 3);
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar6 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0xe0));
      *(longlong *)(*plVar1 + (longlong)*(int *)(*(longlong *)(lVar6 + 0xd8) + 8) * 8) = lVar6;
      uVar7 = uVar7 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0xe8));
  }
  return;
}



// FUNCTION 142598e80 FUN_142598e80 body=540 status=ok
// SIG undefined FUN_142598e80(void)

void FUN_142598e80(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  
  plVar5 = (longlong *)param_1[0x12];
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar5 + 0x2a0))(plVar5,param_1);
    if (cVar3 == '\0') {
      lVar9 = FUN_1429ba110();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      plVar4 = plVar5;
      if (bVar2) {
        plVar4 = (longlong *)0x0;
      }
    }
    else {
      plVar4 = (longlong *)0x0;
    }
  }
  bVar1 = (byte)(int)param_1[0x13];
  uVar10 = (bVar1 & 0x30) == 0x30;
  uVar11 = (bVar1 & 0xc0) == 0xc0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)UMaterial::GetDefaultMaterial(0);
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x278))(param_1);
    uVar11 = (**(code **)(*param_1 + 0x278))(param_1);
  }
  plVar5 = param_1 + 0x22;
  do {
    if (*plVar5 != 0) {
      FUN_14258de30(*plVar5,plVar4,uVar10,uVar11);
    }
    uVar6 = (int)plVar7 + 1;
    plVar7 = (longlong *)(ulonglong)uVar6;
    plVar5 = plVar5 + 1;
  } while (uVar6 < 3);
  uVar6 = *(uint *)(param_1 + 1);
  if ((uVar6 >> 4 & 1) == 0) {
    lVar8 = param_1[0x14];
    lVar9 = lVar8 + (longlong)(int)param_1[0x15] * 0x28;
    if (lVar8 != lVar9) {
      do {
        FUN_14257c030(param_1,lVar8);
        lVar8 = lVar8 + 0x28;
      } while (lVar8 != lVar9);
      uVar6 = *(uint *)(param_1 + 1);
    }
  }
  if ((uVar6 >> 4 & 1) == 0) {
    lVar9 = param_1[0x16];
    lVar8 = (longlong)(int)param_1[0x17] * 0x30 + lVar9;
    if (lVar9 != lVar8) {
      do {
        FUN_14257c5e0(param_1,lVar9);
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != lVar8);
      uVar6 = *(uint *)(param_1 + 1);
    }
  }
  if ((uVar6 >> 4 & 1) == 0) {
    lVar8 = param_1[0x18];
    lVar9 = lVar8 + (longlong)(int)param_1[0x19] * 0x28;
    if (lVar8 != lVar9) {
      do {
        FUN_14257c310(param_1,lVar8);
        lVar8 = lVar8 + 0x28;
      } while (lVar8 != lVar9);
      uVar6 = *(uint *)(param_1 + 1);
    }
  }
  if ((uVar6 >> 4 & 1) == 0) {
    lVar9 = param_1[0x1a];
    lVar8 = (longlong)(int)param_1[0x1b] * 0x30 + lVar9;
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x30) {
      FUN_14257bd20(param_1,lVar9);
    }
  }
  FUN_14259e2d0(param_1);
  FUN_142587880(param_1);
  return;
}



// FUNCTION 1425990a0 FUN_1425990a0 body=256 status=ok
// SIG undefined FUN_1425990a0(void)

void FUN_1425990a0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_1425a46e0();
  if (((((int)param_1[0x28] == 0) && ((int)param_1[0x2a] == 0)) && ((int)param_1[0x2c] == 0)) &&
     ((int)param_1[0x2e] == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x508))();
    if (cVar1 != '\0') goto LAB_1425990e2;
  }
  else {
LAB_1425990e2:
    if (param_1[0x12] != 0) {
      uVar3 = 1;
      goto LAB_1425990f5;
    }
  }
  uVar3 = 0;
LAB_1425990f5:
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffffe | uVar3;
  if (uVar3 != 0) {
    FUN_1425a4ac0(param_1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar2 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar2,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    FUN_142587a20(param_1);
    return;
  }
  return;
}



// FUNCTION 1425991a0 FUN_1425991a0 body=8372 status=ok
// SIG undefined FUN_1425991a0(void)

void FUN_1425991a0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar6;
  undefined8 uVar5;
  longlong local_e8 [2];
  void *local_d8;
  ulonglong uStack_d0;
  undefined4 *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  *(undefined1 *)(param_1 + 0x80) = 1;
  TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
  ::Empty(param_1,0x23);
  uStack_d0 = 10;
  local_d8 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"BaseColor",0x14);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x16ed4d4969b8d336;
  local_e8[1] = 0x2f050f7a9aa49729;
  local_res8[0] = 5;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x16ed4d4969b8d336;
  uStack_b0 = 0x2f050f7a9aa49729;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 5;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x16ed4d4969b8d336;
  puVar1[1] = 0x2f050f7a9aa49729;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Metallic",0x12);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x7f06429657c3a161;
  local_e8[1] = 0xa496f34cb00b24a5;
  local_res8[0] = 6;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x7f06429657c3a161;
  uStack_b0 = 0xa496f34cb00b24a5;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 6;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x7f06429657c3a161;
  puVar1[1] = 0xa496f34cb00b24a5;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Specular",0x12);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x25564cc99fdab399;
  local_e8[1] = 0xc12c8fed8cd2d572;
  local_res8[0] = 7;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x25564cc99fdab399;
  uStack_b0 = 0xc12c8fed8cd2d572;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 7;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3f000000;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x25564cc99fdab399;
  puVar1[1] = 0xc12c8fed8cd2d572;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Roughness",0x14);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x4cad47d3d1dd967c;
  local_e8[1] = 0x8ecf2109e6346fb;
  local_res8[0] = 8;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x4cad47d3d1dd967c;
  uStack_b0 = 0x8ecf2109e6346fb;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 8;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3f000000;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x4cad47d3d1dd967c;
  puVar1[1] = 0x8ecf2109e6346fb;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"EmissiveColor",0x1c);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = -0x2f72bbbf48964ab3;
  local_e8[1] = 0xcd27d0e2abc21ba6;
  local_res8[0] = 0;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0xd08d4440b769b54d;
  uStack_b0 = 0xcd27d0e2abc21ba6;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 0;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0xd08d4440b769b54d;
  puVar1[1] = 0xcd27d0e2abc21ba6;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Opacity",0x10);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x2a754ec1b8f50fba;
  local_e8[1] = 0xeb27bf519ef672cf;
  local_res8[0] = 1;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x2a754ec1b8f50fba;
  uStack_b0 = 0xeb27bf519ef672cf;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 1;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3f800000;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x2a754ec1b8f50fba;
  puVar1[1] = 0xeb27bf519ef672cf;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"OpacityMask",0x18);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x2bb5422c679ffb17;
  local_e8[1] = 0x166e0c75ad520483;
  local_res8[0] = 2;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x2bb5422c679ffb17;
  uStack_b0 = 0x166e0c75ad520483;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 2;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3f800000;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x2bb5422c679ffb17;
  puVar1[1] = 0x166e0c75ad520483;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"Normal",0xe);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x200f4a4a0fa2821a;
  local_e8[1] = 0xc1259c64b719b789;
  local_res8[0] = 9;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x200f4a4a0fa2821a;
  uStack_b0 = 0xc1259c64b719b789;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 9;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0x3f800000;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x200f4a4a0fa2821a;
  puVar1[1] = 0xc1259c64b719b789;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"WorldPositionOffset",0x28);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = -0x2a7ebceb06fa076b;
  local_e8[1] = 0x8c40ce9e916d2434;
  local_res8[0] = 10;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0xd5814314f905f895;
  uStack_b0 = 0x8c40ce9e916d2434;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 10;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0xd5814314f905f895;
  puVar1[1] = 0x8c40ce9e916d2434;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"WorldDisplacement",0x24);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = -0x4a6db711df6e135e;
  local_e8[1] = 0xd371926d8e2cd578;
  local_res8[0] = 0xb;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0xb59248ee2091eca2;
  uStack_b0 = 0xd371926d8e2cd578;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 0xb;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 2;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0xb59248ee2091eca2;
  puVar1[1] = 0xd371926d8e2cd578;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"TessellationMultiplier",0x2e);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = -0x3ba9baf25fee62bc;
  local_e8[1] = 0x1f72d8d19c39c933;
  local_res8[0] = 0xc;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0xc456450da0119d44;
  uStack_b0 = 0x1f72d8d19c39c933;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 0xc;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3f800000;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0xc456450da0119d44;
  puVar1[1] = 0x1f72d8d19c39c933;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"SubsurfaceColor",0x20);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x51ce40825b8fc679;
  local_e8[1] = 0xf4f72c449d777bee;
  local_res8[0] = 0xd;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x51ce40825b8fc679;
  uStack_b0 = 0xf4f72c449d777bee;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 0xd;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0x3f8000003f800000;
  uStack_80 = 0x3f800000;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x51ce40825b8fc679;
  puVar1[1] = 0xf4f72c449d777bee;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  pvVar3 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"ClearCoat",0x14);
  lVar4 = (longlong)(int)uStack_d0;
  local_e8[0] = 0x3c8f48fa9e502e69;
  local_e8[1] = 0x28e5428d94645cfd;
  local_res8[0] = 0xe;
  local_a8 = (void *)0x0;
  local_a0 = (int)uStack_d0;
  local_b8 = 0x3c8f48fa9e502e69;
  uStack_b0 = 0x28e5428d94645cfd;
  if ((int)uStack_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,uStack_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar4 * 2);
  }
  local_c8 = local_res8;
  local_98 = 0xe;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3f800000;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x3c8f48fa9e502e69;
  puVar1[1] = 0x28e5428d94645cfd;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  local_e8[0] = 0;
  local_e8[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"ClearCoatRoughness",0x26);
  local_d8 = (void *)0x12fc4296be4f2ffd;
  uStack_d0 = 0x12c28d92b0124eea;
  local_res8[0] = 0xf;
  local_b8 = 0x12fc4296be4f2ffd;
  uStack_b0 = 0x12c28d92b0124eea;
  FString::FString(&local_a8,local_e8);
  local_c8 = local_res8;
  local_98 = 0xf;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0x3dcccccd;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar2 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x60,iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 0x10);
  *puVar1 = 0x12fc4296be4f2ffd;
  puVar1[1] = 0x12c28d92b0124eea;
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"AmbientOcclusion",0x22);
  uVar5 = CONCAT44(uVar6,0xf);
  local_c8 = (undefined4 *)0x3f800000;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xb1654cbee8ebd0ad;
  uStack_d0 = 0xb39b9f15b079c3a8;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x10,uVar5,&local_c8,3,0xffffffff,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"Refraction",0x16);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x3f800000;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x14d74455d0b0fa03;
  uStack_d0 = 0x81a0788ba851bac5;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x11,uVar5,&local_c8,3,0xffffffff,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"PixelDepthOffset",0x22);
  uVar5 = CONCAT44(uVar6,0xf);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xe3d047ba0ac97ec3;
  uStack_d0 = 0xc4d919ffb610167d;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x1a,uVar5,&local_c8,3,0xffffffff,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV0",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xe13a4160d30ec284;
  uStack_d0 = 0x2ed115dc87bb5230;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x12,uVar5,&local_c8,0,0,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV1",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x2a5249aac67b093c;
  uStack_d0 = 0x4a1f49c5abc97ade;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x13,uVar5,&local_c8,0,1,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV2",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xf3e047ca85c15b24;
  uStack_d0 = 0x1ae0f4f85856872;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x14,uVar5,&local_c8,0,2,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV3",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x31ae4676777819dc;
  uStack_d0 = 0xb807e873b864ef77;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x15,uVar5,&local_c8,0,3,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV4",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xddf44cadda63b233;
  uStack_d0 = 0x8dafdbccb93d867b;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x16,uVar5,&local_c8,0,4,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV5",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x4a034388c2f52b76;
  uStack_d0 = 0x2071b19089119528;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x17,uVar5,&local_c8,0,5,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV6",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xcb944cf8214a8ca;
  uStack_d0 = 0xe48bb55f9dfd78db;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x18,uVar5,&local_c8,0,6,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedUV7",0x1c);
  uVar5 = CONCAT44(uVar6,2);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0xc6f74715d8f8d01f;
  uStack_d0 = 0x9ef51faca3cfb4ff;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x19,uVar5,&local_c8,0,7,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"DiffuseColor",0x1a);
  local_d8 = (void *)0x70eb411b68934e1b;
  uStack_d0 = 0xdf2f626c86df5aa5;
  local_res8[0] = 3;
  local_b8 = 0x70eb411b68934e1b;
  uStack_b0 = 0xdf2f626c86df5aa5;
  FString::FString(&local_a8,local_e8);
  local_c8 = local_res8;
  local_98 = 3;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 1;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"SpecularColor",0x1c);
  local_d8 = (void *)0x62ea48bee89cbd84;
  uStack_d0 = 0x2b0c403c80f88521;
  local_res8[0] = 4;
  local_b8 = 0x62ea48bee89cbd84;
  uStack_b0 = 0x2b0c403c80f88521;
  FString::FString(&local_a8,local_e8);
  local_c8 = local_res8;
  local_98 = 4;
  puStack_c0 = &local_b8;
  local_94 = 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 1;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomDataGBX",0x1c);
  uVar5 = CONCAT44(uVar6,8);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x72ed4e65b286b306;
  uStack_d0 = 0xa07039abb99d0b47;
  FMaterialAttributeDefinitionMap::Add(param_1,&local_d8,local_e8,0x1b,uVar5,&local_c8,3,0,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedColor0",0x22);
  uVar5 = CONCAT44(uVar6,8);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x99724bc24039701e;
  uStack_d0 = 0x2c566cc0abcdd598;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x1c,uVar5,&local_c8,0,0xffffffff,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedColor1",0x22);
  uVar5 = CONCAT44(uVar6,8);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x952f4d66797ef70b;
  uStack_d0 = 0xad1a6a7884004249;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x1d,uVar5,&local_c8,0,0xffffffff,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedColor2",0x22);
  uVar5 = CONCAT44(uVar6,8);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x93df4e000816ae32;
  uStack_d0 = 0x915a15d9ad700d7a;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x1e,uVar5,&local_c8,0,0xffffffff,0,0);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"CustomizedColor3",0x22);
  local_c8 = (undefined4 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_d8 = (void *)0x675a4c7405773392;
  uStack_d0 = 0x4dfcee27b662ad48;
  FMaterialAttributeDefinitionMap::Add
            (param_1,&local_d8,local_e8,0x1f,CONCAT44(uVar6,8),&local_c8,0,0xffffffff,0,0);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"Missing",0x10);
  local_d8 = (void *)0xa32646295bf6ba94;
  uStack_d0 = 0xeabbb86a253a05b;
  local_res8[0] = 0x22;
  local_b8 = 0xa32646295bf6ba94;
  uStack_b0 = 0xeabbb86a253a05b;
  FString::FString(&local_a8,local_e8);
  local_c8 = local_res8;
  local_98 = 0x22;
  puStack_c0 = &local_b8;
  local_94 = 0xf;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 3;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 1;
  FUN_14257b480(param_1,local_res10,&local_c8,0);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_d8 = (void *)0x0;
  uStack_d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,0xe,"GetBentNormal",0xe,0x3f);
  local_e8[0] = 0;
  local_e8[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_e8[0],0xb,"BentNormal",0xb,0x3f);
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_c8 = (undefined4 *)0xb1234824fbd7b46e;
  puStack_c0 = (undefined8 *)0x609f984cbde76b23;
  FUN_142583400(&local_c8,local_e8,&local_d8,4,&local_58,0);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_e8[0],0x16,"ClearCoatBottomNormal",0x16,0x3f);
  local_d8 = (void *)0x0;
  uStack_d0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,0x16,"ClearCoatBottomNormal",0x16,0x3f);
  local_58 = 0;
  uStack_50 = 0x3f800000;
  local_c8 = (undefined4 *)0x16294716aa3d5c04;
  puStack_c0 = (undefined8 *)0x6a27dd72bbdec869;
  FUN_142583400(&local_c8,&local_d8,local_e8,4,&local_58,0);
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  local_e8[0] = 0;
  local_e8[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_e8[0],0x11,"GetTangentOutput",0x11,0x3f);
  local_d8 = (void *)0x0;
  uStack_d0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,0x11,"CustomEyeTangent",0x11,0x3f);
  local_58 = 0;
  uStack_50 = 0;
  local_c8 = (undefined4 *)0x73634a248eab2cb2;
  puStack_c0 = (undefined8 *)0x3f9c8e558cd14f47;
  FUN_142583400(&local_c8,&local_d8,local_e8,4,&local_58,0);
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14259b260 FUN_14259b260 body=100 status=ok
// SIG undefined FUN_14259b260(void)

void FUN_14259b260(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 0x10;
  puVar1 = (undefined8 *)(param_1 + 0x60);
  param_1 = param_1 + 0x30;
  lVar2 = 4;
  do {
    *(undefined1 *)(puVar1 + -1) = 0;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,0);
    param_1 = param_1 + 0x38;
    *puVar1 = 0;
    puVar1 = puVar1 + 7;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14259b2e0 FUN_14259b2e0 body=796 status=ok
// SIG undefined FUN_14259b2e0(void)

undefined8 FUN_14259b2e0(ulonglong param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int local_res8 [2];
  ulonglong local_res20;
  longlong *local_48;
  undefined4 local_40;
  ulonglong uVar12;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x35c) = *(int *)(param_1 + 0x35c) + 1;
  }
  local_res20 = param_1;
  TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146533c50,local_res8,&local_res20);
  plVar16 = (longlong *)0x0;
  plVar10 = plVar16;
  if (local_res8[0] != -1) {
    plVar10 = (longlong *)((longlong)local_res8[0] * 0x20 + DAT_146533c50);
  }
  plVar7 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar7 = plVar16;
  }
  if (param_1 != 0) {
    FUN_14259f650(param_1);
  }
  if (plVar7 == (longlong *)0x0) {
    puVar6 = (undefined8 *)FUN_1419f19e0();
    for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6
        ) {
      lVar2 = puVar6[2];
      if (((*(byte *)(lVar2 + 0x28) & 1) != 0) &&
         (cVar4 = FUN_1425c4410(*(undefined8 *)
                                 (*(longlong *)(param_1 + 0xf0) + (longlong)*(int *)(lVar2 + 8) * 8)
                                ,*(undefined4 *)(param_1 + 0x30),param_2,lVar2,param_3),
         cVar4 == '\0')) goto LAB_14259b5db;
    }
    puVar6 = (undefined8 *)FUN_1419f19d0();
    for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6
        ) {
      plVar10 = plVar16;
      if ((int)((longlong *)puVar6[2])[1] == 1) {
        plVar10 = (longlong *)puVar6[2];
      }
      if (plVar10 != (longlong *)0x0) {
        uVar1 = *(undefined4 *)(param_1 + 0x30);
        cVar4 = (*(code *)plVar10[0x27])(uVar1,param_2);
        if ((cVar4 != '\0') &&
           (cVar4 = (**(code **)(*param_2 + 8))(param_2,uVar1,plVar10,0), cVar4 != '\0')) {
          local_40 = 0;
          local_48 = plVar10;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x38,local_res8,&local_48);
          plVar10 = plVar16;
          if (local_res8[0] != -1) {
            plVar10 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x38));
          }
          plVar7 = plVar10 + 2;
          if (plVar10 == (longlong *)0x0) {
            plVar7 = plVar16;
          }
          if ((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) goto LAB_14259b5db;
        }
      }
    }
    iVar5 = (**(code **)(*param_2 + 0x178))(param_2);
    cVar4 = iVar5 != 0;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,cVar4);
    puVar6 = (undefined8 *)FUN_1419f19c0();
    for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6
        ) {
      uVar12 = 0;
      lVar2 = puVar6[2];
      uVar8 = uVar12;
      if (*(int *)(**(ulonglong **)(lVar2 + 0x10) + 8) == 1) {
        uVar8 = **(ulonglong **)(lVar2 + 0x10);
      }
      if ((uVar8 != 0) && ((*(longlong *)(lVar2 + 0x30) != 0) == (bool)cVar4)) {
        uVar15 = *(uint *)(lVar2 + 0x18);
        uVar11 = 0;
        uVar8 = uVar12;
        uVar17 = uVar12;
        if (0 < (int)uVar15) {
          do {
            uVar11 = (uint)uVar12;
            lVar3 = *(longlong *)(uVar17 + *(longlong *)(lVar2 + 0x10));
            local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(param_1 + 0x30));
            lVar13 = 0;
            if (*(int *)(lVar3 + 8) == 1) {
              lVar13 = lVar3;
            }
            cVar4 = (**(code **)(lVar13 + 0x138))(*(undefined4 *)(param_1 + 0x30),param_2);
            if ((cVar4 == '\0') ||
               (cVar4 = (**(code **)(*param_2 + 8))(param_2,local_res20 & 0xffffffff,lVar13,0),
               cVar4 == '\0')) {
              uVar15 = *(uint *)(lVar2 + 0x18);
              break;
            }
            uVar15 = *(uint *)(lVar2 + 0x18);
            uVar11 = uVar11 + 1;
            uVar12 = (ulonglong)uVar11;
            uVar14 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar14;
            uVar17 = uVar17 + 8;
          } while ((int)uVar14 < (int)uVar15);
        }
        uVar8 = 0;
        if ((uVar11 == uVar15) && (uVar12 = uVar8, 0 < (int)uVar15)) {
          do {
            uVar1 = *(undefined4 *)(param_1 + 0x30);
            lVar3 = *(longlong *)(uVar12 + *(longlong *)(lVar2 + 0x10));
            lVar13 = 0;
            if (*(int *)(lVar3 + 8) == 1) {
              lVar13 = lVar3;
            }
            cVar4 = (**(code **)(lVar13 + 0x138))(uVar1,param_2);
            if (((cVar4 != '\0') &&
                (cVar4 = (**(code **)(*param_2 + 8))(param_2,uVar1,lVar13), cVar4 != '\0')) &&
               (cVar4 = FUN_142598d00(param_1,lVar2), cVar4 == '\0')) goto LAB_14259b5db;
            uVar15 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar15;
            uVar12 = uVar12 + 8;
          } while ((int)uVar15 < *(int *)(lVar2 + 0x18));
        }
        cVar4 = (char)local_res8[0];
      }
    }
    uVar9 = 1;
  }
  else {
LAB_14259b5db:
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 14259b630 FUN_14259b630 body=324 status=ok
// SIG undefined FUN_14259b630(void)

undefined1 FUN_14259b630(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == param_1) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar5 = 0x9d;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 0x9d;
    if (DVar3 == DAT_1468c21c0) goto LAB_14259b68e;
  }
  else {
LAB_14259b68e:
    lVar4 = 0x9c;
  }
  if (*(char *)(param_1 + lVar4) != '\0') {
    return 1;
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 0x9d;
    if (DVar3 != DAT_1468c21c0) goto LAB_14259b6ee;
  }
  lVar4 = 0x9c;
LAB_14259b6ee:
  *(undefined1 *)(lVar4 + param_1) = 1;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2a0))
                    (*(longlong **)(param_1 + 0x90),param_2);
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
    lVar5 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar5) = 0;
  return uVar2;
}



// FUNCTION 14259b780 FUN_14259b780 body=66 status=ok
// SIG undefined FUN_14259b780(void)

undefined8 FUN_14259b780(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*(longlong *)param_1[5] + 0x498))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
    if (((uVar2 & 0xfffffffa) != 0) || (uVar2 == 5)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14259b8a0 FUN_14259b8a0 body=24 status=ok
// SIG undefined FUN_14259b8a0(void)

bool FUN_14259b8a0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x460))();
  return iVar1 == 1;
}



// FUNCTION 14259b8e0 FUN_14259b8e0 body=67 status=ok
// SIG undefined FUN_14259b8e0(void)

undefined8 FUN_14259b8e0(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1[5] + 0x6c8) & 2) != 0) {
    cVar1 = (**(code **)(*param_1 + 0xc0))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14259b990 FUN_14259b990 body=54 status=ok
// SIG undefined FUN_14259b990(void)

undefined1 FUN_14259b990(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x40);
  if (cVar1 != '\0') {
    cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x1d8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14259b9d0 IsReadyForFinishDestroy body=23 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool UMaterialInterface::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x40);
  return cVar1 != '\0';
}



// FUNCTION 14259ba00 FUN_14259ba00 body=1048 status=ok
// SIG undefined FUN_14259ba00(void)

undefined1
FUN_14259ba00(longlong param_1,int *param_2,char *param_3,undefined4 *param_4,undefined4 *param_5)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  bool bVar10;
  undefined1 uVar11;
  DWORD DVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  longlong lVar17;
  int *piVar18;
  longlong *plVar19;
  longlong *local_res8;
  longlong local_80 [2];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  
  cVar8 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  if (*(char *)((ulonglong)bVar9 + param_1 + 0x9c) == '\0') {
    pcVar5 = *(char **)(param_1 + 0xa0);
    if (pcVar5 != pcVar5 + (longlong)*(int *)(param_1 + 0xa8) * 0x28) {
      pcVar16 = pcVar5 + 0xb;
      do {
        if (*(int *)(pcVar16 + -0xb) == *param_2) {
          if (*(int *)(pcVar16 + -7) != param_2[1]) goto LAB_14259bab2;
          bVar10 = true;
        }
        else {
LAB_14259bab2:
          bVar10 = false;
        }
        if ((bVar10) && (*pcVar16 == *(char *)((longlong)param_2 + 0xb))) {
          if (*(int *)(pcVar16 + 1) != param_2[3]) goto LAB_14259bacc;
          bVar10 = true;
        }
        else {
LAB_14259bacc:
          bVar10 = false;
        }
        if (bVar10) break;
        pcVar1 = pcVar16 + 0x1d;
        pcVar16 = pcVar16 + 0x28;
      } while (pcVar1 != pcVar5 + (longlong)*(int *)(param_1 + 0xa8) * 0x28);
    }
    if (*(char *)((longlong)param_2 + 0xb) != '\x02') {
      piVar6 = *(int **)(param_1 + 0x168);
      iVar3 = *(int *)(param_1 + 0x170);
      local_res8 = (longlong *)0x0;
      if (piVar6 != piVar6 + (longlong)iVar3 * 0x1a) {
        piVar18 = piVar6 + 6;
        do {
          if ((char)piVar18[0xe] != '\0') {
            if (*(char *)((longlong)param_2 + 0xb) == '\0') {
              iVar4 = param_2[3];
              if ((iVar4 < 0) || (*piVar18 <= iVar4)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) {
                lVar17 = *(longlong *)(piVar18 + -2);
LAB_14259bb59:
                lVar17 = *(longlong *)(lVar17 + (longlong)iVar4 * 8);
                if ((lVar17 != 0) &&
                   (cVar8 = FUN_14255a0d0(lVar17,param_2,&local_res8,local_58), plVar7 = local_res8,
                   cVar8 != '\0')) {
                  cVar8 = (**(code **)(*local_res8 + 0x2a0))(local_res8);
                  *param_3 = cVar8;
                  if (cVar8 != '\0') {
                    lVar13 = FUN_1429acb70();
                    lVar17 = plVar7[2];
                    if ((*(int *)(lVar17 + 0x90) < *(int *)(lVar13 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(lVar17 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                        lVar13 + 0x88)) {
                      bVar10 = false;
                    }
                    else {
                      bVar10 = true;
                    }
                    plVar19 = (longlong *)0x0;
                    if (bVar10) {
                      plVar19 = plVar7;
                    }
                    uVar14 = UObjectBaseUtility::GetPathName(plVar19[0xe],local_58,0);
                    puVar15 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar14);
                    uVar14 = *puVar15;
                    FString::FString(local_80,puVar15 + 1);
                    if (puVar15[1] != 0) {
                      FMemory::Free();
                    }
                    *param_4 = 0xffffffff;
                    param_4[1] = 0;
                    param_4[2] = 0;
                    local_70 = uVar14;
                    FString::FString(local_68,local_80);
                    FSoftObjectPath::operator=(param_4 + 4,&local_70);
                    if (local_80[0] != 0) {
                      FMemory::Free();
                    }
                    uVar14 = UObjectBaseUtility::GetPathName(plVar19[0xf],local_58,0);
                    puVar15 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar14);
                    uVar14 = *puVar15;
                    FString::FString(local_80,puVar15 + 1);
                    if (puVar15[1] != 0) {
                      FMemory::Free();
                    }
                    *param_5 = 0xffffffff;
                    param_5[1] = 0;
                    param_5[2] = 0;
                    local_70 = uVar14;
                    FString::FString(local_68,local_80);
                    FSoftObjectPath::operator=(param_5 + 4,&local_70);
                    if (local_80[0] != 0) {
                      FMemory::Free();
                    }
                  }
                  return 1;
                }
              }
            }
            else if (*(char *)((longlong)param_2 + 0xb) == '\x01') {
              iVar4 = param_2[3];
              if ((iVar4 < 0) || (piVar18[4] <= iVar4)) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              if (bVar10) {
                lVar17 = *(longlong *)(piVar18 + 2);
                goto LAB_14259bb59;
              }
            }
          }
          piVar2 = piVar18 + 0x14;
          piVar18 = piVar18 + 0x1a;
        } while (piVar2 != piVar6 + (longlong)iVar3 * 0x1a);
      }
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      cVar8 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
        GetCurrentThreadId();
      }
      cVar8 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      *(undefined1 *)((ulonglong)bVar9 + 0x9c + param_1) = 1;
      uVar11 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x3f0))
                         (*(longlong **)(param_1 + 0x90),param_2,param_3,param_4,param_5);
      cVar8 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
        *(undefined1 *)(param_1 + 0x9d) = 0;
        return uVar11;
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
      return uVar11;
    }
  }
  return 0;
}



// FUNCTION 14259be60 FUN_14259be60 body=67 status=ok
// SIG undefined FUN_14259be60(void)

undefined8 FUN_14259be60(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1[5] + 0x6c8) & 1) != 0) {
    cVar1 = (**(code **)(*param_1 + 0xc0))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14259c0a0 FUN_14259c0a0 body=475 status=ok
// SIG undefined FUN_14259c0a0(void)

undefined1 FUN_14259c0a0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_res8;
  undefined1 local_res20 [8];
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar7 = 0x9d;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x9d;
    if (DVar4 == DAT_1468c21c0) goto LAB_14259c0e6;
  }
  else {
LAB_14259c0e6:
    lVar5 = 0x9c;
  }
  if (*(char *)(param_1 + lVar5) != '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0xb) != '\x02') {
    lVar5 = *(longlong *)(param_1 + 0x168);
    local_res8 = (longlong *)0x0;
    lVar8 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar5;
    for (; lVar5 != lVar8; lVar5 = lVar5 + 0x68) {
      if (*(char *)(lVar5 + 0x50) != '\0') {
        if (*(char *)(param_2 + 0xb) == '\0') {
          iVar1 = *(int *)(param_2 + 0xc);
          if ((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0x18))) {
            lVar6 = *(longlong *)(lVar5 + 0x10);
LAB_14259c16c:
            lVar6 = *(longlong *)(lVar6 + (longlong)iVar1 * 8);
            if ((lVar6 != 0) &&
               (cVar2 = FUN_14255a5b0(lVar6,param_2,&local_res8,local_res20), cVar2 != '\0')) {
              uVar3 = (**(code **)(*local_res8 + 0x2a0))();
              *param_3 = uVar3;
              return 1;
            }
          }
        }
        else if (((*(char *)(param_2 + 0xb) == '\x01') &&
                 (iVar1 = *(int *)(param_2 + 0xc), -1 < iVar1)) && (iVar1 < *(int *)(lVar5 + 0x28)))
        {
          lVar6 = *(longlong *)(lVar5 + 0x20);
          goto LAB_14259c16c;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x9d;
    if (DVar4 != DAT_1468c21c0) goto LAB_14259c1f7;
  }
  lVar5 = 0x9c;
LAB_14259c1f7:
  *(undefined1 *)(param_1 + lVar5) = 1;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x408))
                    (*(longlong **)(param_1 + 0x90),param_2,param_3);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar7 = 0x9c;
  }
  *(undefined1 *)(param_1 + lVar7) = 0;
  return uVar3;
}



// FUNCTION 14259c2b0 FUN_14259c2b0 body=344 status=ok
// SIG undefined FUN_14259c2b0(void)

undefined8 * FUN_14259c2b0(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  bVar1 = *(byte *)(param_2 + 0x778);
  iVar2 = *(int *)(param_2 + 0x77c);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    if ((*(int *)(lVar3 + 0x38) < DAT_146a29948) &&
       (_Init_thread_header(&DAT_146a29948), DAT_146a29948 == -1)) {
      FName::FName(&DAT_146a29940,L"FPostProcessMaterialNode",1);
      _Init_thread_footer(&DAT_146a29948);
    }
    lVar4 = DAT_146a29940;
    lVar5 = *param_3;
    do {
      if (lVar5 == 0) {
        lVar6 = *(longlong *)(param_1 + 0x798);
        lVar8 = lVar6;
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x798);
        lVar8 = (ulonglong)*(uint *)(lVar5 + 0x10) + 0x18 +
                (ulonglong)*(uint *)(lVar5 + 0x14) + lVar5;
      }
      lVar5 = 0;
      if (lVar8 != *(int *)(param_1 + 0x7a0) + lVar6) {
        lVar5 = lVar8;
      }
      *param_3 = lVar5;
      if (lVar5 == 0) {
        return (undefined8 *)0x0;
      }
    } while (*(longlong *)(lVar5 + 8) != lVar4);
    if ((lVar5 == 0) ||
       (puVar7 = (undefined8 *)(lVar5 + 0x18 + (ulonglong)*(uint *)(lVar5 + 0x14)),
       puVar7 == (undefined8 *)0x0)) {
      return (undefined8 *)0x0;
    }
  } while (((*(uint *)((longlong)puVar7 + 0xc) != (uint)bVar1) || (*(int *)(puVar7 + 2) != iVar2))
          || (lVar5 = (**(code **)(*(longlong *)*puVar7 + 0x290))(), lVar5 != param_2));
  return puVar7;
}



// FUNCTION 14259c410 FUN_14259c410 body=14 status=ok
// SIG undefined FUN_14259c410(void)

void FUN_14259c410(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uStack_58;
  uint uStack_50;
  uint uStack_4c;
  longlong lStack_48;
  undefined8 uStack_40;
  
  if (param_3 == '\0') {
    FUN_142589da0();
    return;
  }
  if ((param_2 != 0) && (param_2 != param_1)) {
    FUN_142588c20(param_1,1);
    uVar17 = 0;
    uStack_58 = 0;
    uStack_4c = 0;
    uVar19 = uVar17;
    uVar20 = uVar17;
    while( true ) {
      iVar16 = (int)uVar17;
      uStack_50 = iVar16 + 1;
      if ((int)uVar19 < (int)uStack_50) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&uStack_58,uVar17);
        uVar19 = (ulonglong)uStack_4c;
        uVar20 = uStack_58;
      }
      uVar18 = uStack_50;
      uVar17 = (ulonglong)uStack_50;
      *(longlong *)(uVar20 + (longlong)iVar16 * 8) = param_2;
      if (param_2 == 0) break;
      lVar7 = FUN_1429b6de0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((!bVar5) || (param_2 = *(longlong *)(param_2 + 0x90), param_2 == 0)) break;
    }
    lVar7 = (longlong)(int)(uVar18 - 1);
    if (-1 < (int)(uVar18 - 1)) {
      do {
        plVar2 = *(longlong **)(uVar20 + lVar7 * 8);
        if (plVar2 != (longlong *)0x0) {
          lVar8 = FUN_1429b6de0();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            plVar10 = (longlong *)plVar2[0x14];
            plVar9 = plVar10 + (longlong)(int)plVar2[0x15] * 5;
            for (; plVar10 != plVar9; plVar10 = plVar10 + 5) {
              plVar13 = *(longlong **)(param_1 + 0xa0);
              plVar15 = plVar13 + (longlong)*(int *)(param_1 + 0xa8) * 5;
              if (plVar13 != plVar15) {
                do {
                  if (*plVar13 == *plVar10) {
                    *(int *)(plVar13 + 2) = (int)plVar10[2];
                    break;
                  }
                  plVar13 = plVar13 + 5;
                } while (plVar13 != plVar15);
              }
            }
            plVar9 = (longlong *)plVar2[0x16];
            plVar10 = plVar9 + (longlong)(int)plVar2[0x17] * 6;
            if (plVar9 != plVar10) {
              plVar15 = plVar9 + 2;
              do {
                plVar13 = *(longlong **)(param_1 + 0xb0);
                plVar12 = plVar13 + (longlong)*(int *)(param_1 + 0xb8) * 6;
                if (plVar13 != plVar12) {
                  do {
                    if (*plVar13 == *plVar9) {
                      uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
                      lVar8 = plVar15[1];
                      uVar4 = *(undefined4 *)((longlong)plVar15 + 0xc);
                      *(int *)(plVar13 + 2) = (int)*plVar15;
                      *(undefined4 *)((longlong)plVar13 + 0x14) = uVar3;
                      *(int *)(plVar13 + 3) = (int)lVar8;
                      *(undefined4 *)((longlong)plVar13 + 0x1c) = uVar4;
                      break;
                    }
                    plVar13 = plVar13 + 6;
                  } while (plVar13 != plVar12);
                }
                plVar9 = plVar9 + 6;
                plVar15 = plVar15 + 6;
              } while (plVar9 != plVar10);
            }
            plVar9 = (longlong *)plVar2[0x18];
            plVar2 = plVar9 + (longlong)(int)plVar2[0x19] * 5;
            for (; plVar9 != plVar2; plVar9 = plVar9 + 5) {
              plVar15 = *(longlong **)(param_1 + 0xc0);
              plVar10 = plVar15 + (longlong)*(int *)(param_1 + 200) * 5;
              if (plVar15 != plVar10) {
                do {
                  if (*plVar15 == *plVar9) {
                    plVar15[2] = plVar9[2];
                    break;
                  }
                  plVar15 = plVar15 + 5;
                } while (plVar15 != plVar10);
              }
            }
          }
          else {
            lVar8 = ACineCameraActor::GetPrivateStaticClass();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) &&
               (((lVar8 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar8 != 0 &&
                 (plVar9 = (longlong *)
                           (**(code **)(*plVar2 + 0x300))(plVar2,*(undefined4 *)(lVar8 + 0x1c0),3),
                 plVar9 != (longlong *)0x0)) ||
                (plVar9 = (longlong *)(**(code **)(*plVar2 + 0x300))(plVar2,DAT_1464c9c14,3),
                plVar9 != (longlong *)0x0)))) {
              plVar10 = (longlong *)FUN_142597c00(plVar9);
              plVar15 = (longlong *)*plVar10;
              plVar10 = plVar15 + (int)plVar10[1];
              for (; plVar15 != plVar10; plVar15 = plVar15 + 1) {
                plVar13 = (longlong *)*plVar15;
                ppuVar11 = (undefined **)(**(code **)(*plVar13 + 8))(plVar13);
                if (ppuVar11 == &PTR_u_FMaterialUniformExpressionScalar_146533e58) {
                  iVar16 = *(int *)(param_1 + 0xa8);
                  *(int *)(param_1 + 0xa8) = iVar16 + 1;
                  if (*(int *)(param_1 + 0xac) < iVar16 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0xa0,iVar16);
                  }
                  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar16 * 0x28);
                  plVar14 = (longlong *)0x0;
                  if (plVar12 != (longlong *)0x0) {
                    *(undefined4 *)(plVar12 + 1) = 0x202ffff;
                    *(undefined4 *)((longlong)plVar12 + 0xc) = 0xffffffff;
                    *plVar12 = 0;
                    plVar12[2] = 0;
                    plVar12[3] = 0;
                    *(undefined4 *)(plVar12 + 4) = 0;
                    plVar14 = plVar12;
                  }
                  *plVar14 = plVar13[2];
                  *(int *)(plVar14 + 2) = (int)plVar13[4];
                }
              }
              plVar10 = (longlong *)FUN_142597cd0(plVar9);
              plVar15 = (longlong *)*plVar10;
              plVar10 = plVar15 + (int)plVar10[1];
              for (; plVar15 != plVar10; plVar15 = plVar15 + 1) {
                plVar13 = (longlong *)*plVar15;
                ppuVar11 = (undefined **)(**(code **)(*plVar13 + 8))(plVar13);
                if (ppuVar11 == &PTR_u_FMaterialUniformExpressionVector_146533e48) {
                  iVar16 = *(int *)(param_1 + 0xb8);
                  *(int *)(param_1 + 0xb8) = iVar16 + 1;
                  if (*(int *)(param_1 + 0xbc) < iVar16 + 1) {
                    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0xb0,iVar16);
                  }
                  plVar14 = (longlong *)((longlong)iVar16 * 0x30 + *(longlong *)(param_1 + 0xb0));
                  plVar12 = (longlong *)0x0;
                  if (plVar14 != (longlong *)0x0) {
                    *(undefined4 *)(plVar14 + 1) = 0x202ffff;
                    *(undefined4 *)((longlong)plVar14 + 0xc) = 0xffffffff;
                    *plVar14 = 0;
                    plVar14[2] = 0;
                    plVar14[3] = 0;
                    plVar14[4] = 0;
                    plVar14[5] = 0;
                    plVar12 = plVar14;
                  }
                  *plVar12 = plVar13[2];
                  uVar3 = *(undefined4 *)((longlong)plVar13 + 0x24);
                  lVar8 = plVar13[5];
                  uVar4 = *(undefined4 *)((longlong)plVar13 + 0x2c);
                  *(int *)(plVar12 + 2) = (int)plVar13[4];
                  *(undefined4 *)((longlong)plVar12 + 0x14) = uVar3;
                  *(int *)(plVar12 + 3) = (int)lVar8;
                  *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar4;
                }
              }
              lStack_48 = FUN_142597a60(plVar9);
              uStack_40 = FUN_142597b30(plVar9);
              uVar18 = 0;
              plVar10 = &lStack_48;
              do {
                plVar13 = *(longlong **)*plVar10;
                plVar15 = plVar13 + (int)((longlong *)*plVar10)[1];
                uVar20 = uStack_58;
                for (; uStack_58 = uVar20, plVar13 != plVar15; plVar13 = plVar13 + 1) {
                  plVar14 = (longlong *)0x0;
                  plVar12 = (longlong *)*plVar13;
                  ppuVar11 = (undefined **)(**(code **)(*plVar12 + 8))(plVar12);
                  if (ppuVar11 == &PTR_u_FMaterialUniformExpressionTextur_146533e68) {
                    iVar16 = *(int *)(param_1 + 200);
                    *(int *)(param_1 + 200) = iVar16 + 1;
                    if (*(int *)(param_1 + 0xcc) < iVar16 + 1) {
                      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0xc0,iVar16);
                    }
                    plVar1 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar16 * 0x28);
                    if (plVar1 != (longlong *)0x0) {
                      *(undefined4 *)(plVar1 + 1) = 0x202ffff;
                      *plVar1 = 0;
                      *(undefined4 *)((longlong)plVar1 + 0xc) = 0xffffffff;
                      plVar1[2] = 0;
                      plVar1[3] = 0;
                      plVar1[4] = 0;
                      plVar14 = plVar1;
                    }
                    plVar1 = plVar14 + 2;
                    *plVar14 = plVar12[3];
                    *plVar1 = 0;
                    cVar6 = FUN_1425b3950();
                    cVar6 = (**(code **)(*plVar2 + 0x428))(plVar2,plVar12 + 3,plVar1,cVar6 == '\0');
                    if (cVar6 == '\0') {
                      iVar16 = (int)plVar12[2];
                      plVar12 = (longlong *)(**(code **)(*plVar9 + 0x340))();
                      lVar8 = 0;
                      if ((iVar16 < 0) || ((int)plVar12[1] <= iVar16)) {
                        bVar5 = false;
                      }
                      else {
                        bVar5 = true;
                      }
                      if (bVar5) {
                        lVar8 = *(longlong *)(*plVar12 + (longlong)iVar16 * 8);
                      }
                      else if (DAT_146afeeec == '\0') {
                        DAT_146afeeec = '\x01';
                      }
                      *plVar1 = lVar8;
                    }
                  }
                  uVar20 = uStack_58;
                }
                uVar18 = uVar18 + 1;
                plVar10 = plVar10 + 1;
              } while (uVar18 < 2);
            }
          }
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_142598e80(param_1);
    if (uVar20 != 0) {
      FMemory::Free(uVar20);
    }
  }
  return;
}



// FUNCTION 14259c420 FUN_14259c420 body=64 status=ok
// SIG undefined FUN_14259c420(void)

undefined4 FUN_14259c420(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res10 [6];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10[0] = 0;
  local_c = 0xffffffff;
  local_10 = 0x202ffff;
  local_18 = param_2;
  FUN_142593530(0,&local_18,local_res10,0);
  return local_res10[0];
}



// FUNCTION 14259c460 FUN_14259c460 body=63 status=ok
// SIG undefined FUN_14259c460(void)

undefined8 FUN_14259c460(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_res10[0] = 0;
  local_c = 0xffffffff;
  local_10 = 0x202ffff;
  local_18 = param_2;
  FUN_142597510(param_1,&local_18,local_res10,0);
  return local_res10[0];
}



// FUNCTION 14259c4a0 FUN_14259c4a0 body=71 status=ok
// SIG undefined FUN_14259c4a0(void)

undefined8 * FUN_14259c4a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  local_c = 0xffffffff;
  local_10 = 0x202ffff;
  local_18 = param_3;
  FUN_1425984b0(param_1,&local_18,param_2,0);
  return param_2;
}



// FUNCTION 14259c4f0 FUN_14259c4f0 body=858 status=ok
// SIG undefined FUN_14259c4f0(void)

void FUN_14259c4f0(undefined8 param_1,longlong *param_2,longlong *param_3,float param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58 [8];
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x290))(param_2);
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x290))(param_3);
    if (plVar2 == plVar3) {
      lVar8 = 0;
      local_a0 = 0;
      local_98 = 0;
      GameThread_FindAllScalarParameterNames(param_2,&local_a0);
      GameThread_FindAllScalarParameterNames(param_3,&local_a0);
      if (0 < (int)local_98) {
        do {
          uVar1 = *(undefined8 *)(local_a0 + lVar8 * 8);
          lVar4 = FUN_14258dc70(param_2,uVar1);
          lVar5 = FUN_14258dc70(param_3,uVar1);
          if ((lVar4 != 0) || (lVar5 != 0)) {
            local_a8[0] = 0;
            if ((lVar4 == 0) || (lVar5 == 0)) {
              local_84 = 0xffffffff;
              local_88 = 0x202ffff;
              local_90 = uVar1;
              (**(code **)(*plVar2 + 1000))(plVar2,&local_90,local_a8,0);
            }
            local_78 = 0x202ffff;
            local_74 = 0xffffffff;
            local_80 = uVar1;
            FUN_1425a2780(param_1,&local_80);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)local_98);
      }
      lVar8 = 0;
      bVar9 = local_98._4_4_ != 0;
      local_98 = (ulonglong)local_98._4_4_ << 0x20;
      if (bVar9) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_a0,0);
      }
      GameThread_FindAllVectorParameterNames(param_2,&local_a0);
      GameThread_FindAllVectorParameterNames(param_3,&local_a0);
      if (0 < (int)local_98) {
        do {
          uVar1 = *(undefined8 *)(local_a0 + lVar8 * 8);
          lVar4 = FUN_14258dd50(param_2,uVar1);
          lVar5 = FUN_14258dd50(param_3,uVar1);
          if ((lVar4 != 0) || (lVar5 != 0)) {
            local_58[0] = 0.0;
            local_58[1] = 0.0;
            local_58[2] = 0.0;
            local_58[3] = 0.0;
            if ((lVar4 == 0) || (lVar5 == 0)) {
              local_74 = 0xffffffff;
              local_78 = 0x202ffff;
              local_80 = uVar1;
              (**(code **)(*plVar2 + 0x400))(plVar2,&local_80,local_58,0);
            }
            if (lVar4 == 0) {
              pfVar6 = local_58;
            }
            else {
              pfVar6 = (float *)(lVar4 + 0x10);
            }
            if (lVar5 == 0) {
              pfVar7 = local_58;
            }
            else {
              pfVar7 = (float *)(lVar5 + 0x10);
            }
            local_88 = 0x202ffff;
            local_84 = 0xffffffff;
            local_68 = (*pfVar7 - *pfVar6) * param_4 + *pfVar6;
            fStack_64 = (pfVar7[1] - pfVar6[1]) * param_4 + pfVar6[1];
            fStack_60 = (pfVar7[2] - pfVar6[2]) * param_4 + pfVar6[2];
            fStack_5c = (pfVar7[3] - pfVar6[3]) * param_4 + pfVar6[3];
            local_90 = uVar1;
            FUN_1425a2c20(param_1,&local_90,&local_68);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)local_98);
      }
      if (local_a0 != 0) {
        FMemory::Free(local_a0);
      }
    }
  }
  return;
}



// FUNCTION 14259c850 FUN_14259c850 body=569 status=ok
// SIG undefined FUN_14259c850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14259c850(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d7 [3];
  undefined4 local_d4;
  undefined4 local_d0 [2];
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((int)param_2[8] < 0x104) {
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    FUN_1415a1810(param_2,&local_c8);
    local_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    operator<<(param_2,&local_78);
    plVar1 = (longlong *)param_2[1];
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_d0,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_d0,4);
      }
    }
    else {
      local_d0[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *(undefined4 *)(param_1 + 0x20) = 2;
    *(undefined4 *)(param_1 + 0x18) = 1;
    local_98 = 0;
    local_90 = 0;
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_b8,param_2);
    local_a8 = &local_b8;
    local_a0 = &local_a8;
    FUN_141661f40(&local_a8,&local_98);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_b8);
    local_b8 = 0;
    local_b0 = 0;
    FUN_1408bdc30(param_2,&local_b8);
    (**(code **)(*param_2 + 8))(param_2,&local_d8);
    (**(code **)(*param_2 + 8))(param_2,local_d7);
    local_88 = 0;
    local_80 = 0;
    FUN_141e3dd50(param_2,&local_88);
    plVar1 = (longlong *)param_2[1];
    local_d4 = 0;
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_d4,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_d4,4);
      }
    }
    else {
      local_d4 = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_78);
    plVar1 = local_c8;
    for (iVar2 = (int)local_c0; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  FUN_1425a2020(param_1,param_2);
  return;
}



// FUNCTION 14259ca90 FUN_14259ca90 body=144 status=ok
// SIG undefined FUN_14259ca90(void)

void FUN_14259ca90(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  FUN_14259c850();
  if ((int)param_2[8] < 0x104) {
    plVar1 = (longlong *)param_2[1];
    local_res18[0] = 0;
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_res10[0] = 0;
    (**(code **)(*param_2 + 8))(param_2,local_res10);
    (**(code **)(*param_2 + 8))(param_2,local_res10);
  }
  return;
}



// FUNCTION 14259cb20 FUN_14259cb20 body=101 status=ok
// SIG undefined FUN_14259cb20(void)

undefined8 FUN_14259cb20(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1), cVar1 == '\0')) &&
     (iVar2 = (**(code **)(*param_1 + 0x178))(param_1), iVar2 == 0)) {
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    if ((iVar2 == 1) && (iVar2 = (**(code **)(*param_1 + 0x2b8))(param_1), iVar2 == 0xc)) {
      return 1;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 14259cb90 FUN_14259cb90 body=47 status=ok
// SIG undefined FUN_14259cb90(void)

undefined4 FUN_14259cb90(longlong *param_1)

{
  int iVar1;
  
  if ((param_1[1] == 0) || (*(char *)(param_1[1] + 0x351) == '\0')) {
    iVar1 = (**(code **)(*param_1 + 0x178))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14259cbc0 FUN_14259cbc0 body=47 status=ok
// SIG undefined FUN_14259cbc0(void)

undefined4 FUN_14259cbc0(longlong *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 0) || (*(char *)(param_1[2] + 0x351) == '\0')) {
    iVar1 = (**(code **)(*param_1 + 0x178))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14259cbf0 FUN_14259cbf0 body=18 status=ok
// SIG undefined FUN_14259cbf0(void)

undefined1 FUN_14259cbf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x355);
  }
  return 0;
}



// FUNCTION 14259cc10 FUN_14259cc10 body=18 status=ok
// SIG undefined FUN_14259cc10(void)

undefined1 FUN_14259cc10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x356);
  }
  return 0;
}



// FUNCTION 14259cc30 FUN_14259cc30 body=42 status=ok
// SIG undefined FUN_14259cc30(void)

ulonglong FUN_14259cc30(longlong param_1)

{
  if ((DAT_146ab62cc < 0x1a) && ((0x2002042U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
    return CONCAT71((uint7)(uint3)(DAT_146ab62cc >> 8),1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 0x353);
  }
  return 0;
}



// FUNCTION 14259cc60 FUN_14259cc60 body=44 status=ok
// SIG undefined FUN_14259cc60(void)

undefined8 FUN_14259cc60(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1[5] + 0x71c) & 2) != 0) {
    cVar1 = (**(code **)(*param_1 + 0xc0))();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14259cc90 OverrideVectorParameterDefault body=82 status=ok
// SIG undefined OverrideVectorParameterDefault(void)

void UMaterialInterface::OverrideVectorParameterDefault(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x185,L"Pure virtual not implemented (%s)",L"UMaterialInterface::OverrideTexture");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x185,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 14259ccf0 FUN_14259ccf0 body=83 status=ok
// SIG undefined FUN_14259ccf0(void)

void FUN_14259ccf0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x17d,L"Pure virtual not implemented (%s)",L"UMaterialInterface::OverrideTexture");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x17d,L"Pure virtual not implemented (%s)",L"UMaterialInterface::OverrideTexture");
  return;
}



// FUNCTION 14259cd50 FUN_14259cd50 body=82 status=ok
// SIG undefined FUN_14259cd50(void)

void FUN_14259cd50(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x184,L"Pure virtual not implemented (%s)",L"UMaterialInterface::OverrideTexture");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x184,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 14259cdb0 FUN_14259cdb0 body=140 status=ok
// SIG undefined FUN_14259cdb0(void)

void FUN_14259cdb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 != 0) {
      uVar3 = (undefined4)*(undefined8 *)(lVar1 + 0x7a0);
      uVar4 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x7a0) >> 0x20);
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x7a8);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x7a8) >> 0x20);
    }
    lVar2 = operator_new(0x180);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = FUN_14257ddf0(lVar2,param_1,0,0,CONCAT44(uVar4,uVar3),CONCAT44(uVar6,uVar5));
    }
    param_1[0x22] = lVar1;
  }
  return;
}



// FUNCTION 14259ce40 FUN_14259ce40 body=1026 status=ok
// SIG undefined FUN_14259ce40(void)

void FUN_14259ce40(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  int *piVar20;
  longlong local_res8;
  longlong local_res10;
  longlong *local_48;
  undefined8 local_40;
  
  local_res8 = param_1;
  UObject::PostLoad();
  if (DAT_1468c21ab == '\0') {
    UMaterialInterface::PostLoadDefaultMaterials();
  }
  iVar2 = 0x38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    iVar2 = 0x468509e4;
    _Init_thread_header();
    if (DAT_1468509e4 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
      iVar2 = 0x468509e4;
      _Init_thread_footer();
    }
  }
  uVar8 = 0;
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    lVar17 = param_1;
    FUN_142574140(param_1,param_1 + 0x178,param_1 + 0x188);
    iVar2 = (int)lVar17;
  }
  else {
    lVar17 = *(longlong *)(param_1 + 0x178);
    lVar16 = (longlong)*(int *)(param_1 + 0x180) * 0x38 + lVar17;
    for (; lVar17 != lVar16; lVar17 = lVar17 + 0x38) {
      lVar3 = 0;
      if (*(longlong **)(lVar17 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar17 + 8) + 0x10))();
        lVar3 = *(longlong *)(lVar17 + 8);
        *(undefined8 *)(lVar17 + 8) = 0;
        if (lVar3 != 0) {
          FUN_14259f650();
        }
      }
      iVar2 = (int)lVar3;
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0x178);
  puVar13 = (undefined8 *)*puVar5;
  for (iVar11 = *(int *)(param_1 + 0x180); iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = &PTR_FUN_1450f76b8;
    puVar4 = puVar13;
    FMaterialShaderMap::RemovePendingMaterial();
    iVar2 = (int)puVar4;
    AK::MemoryMgr::StartProfileThreadUsage(iVar2);
    lVar17 = puVar13[1];
    if (lVar17 != 0) {
      piVar20 = (int *)(lVar17 + 0x35c);
      *piVar20 = *piVar20 + -1;
      if (*piVar20 == 0) {
        if ((*(byte *)(lVar17 + 0x364) & 1) != 0) {
          TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
          ::Remove(&DAT_146afe420 + (longlong)*(int *)(lVar17 + 0x30) * 10,lVar17 + 0x100);
          *(uint *)(lVar17 + 0x364) = *(uint *)(lVar17 + 0x364) & 0xfffffffe;
        }
        iVar2 = (int)lVar17 + 0xd8;
        *(undefined1 *)(lVar17 + 0x360) = 1;
        BeginCleanup();
      }
    }
    puVar13 = puVar13 + 7;
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (puVar5,0);
    iVar2 = (int)puVar5;
  }
  AK::MemoryMgr::StartProfileThreadUsage(iVar2);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1417510e0();
  }
  uVar7 = uVar8;
  uVar14 = uVar8;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x10 + uVar14) != 0) {
        FUN_1417510e0();
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar14 = uVar14 + 0x28;
    } while ((int)uVar6 < *(int *)(param_1 + 200));
  }
  uVar7 = uVar8;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x10 + uVar7) != 0) {
        FUN_1417510e0();
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
      uVar7 = uVar7 + 0x30;
    } while ((int)uVar6 < *(int *)(param_1 + 0xd8));
  }
  lVar17 = *(longlong *)(param_1 + 0x168);
  lVar16 = (longlong)*(int *)(param_1 + 0x170) * 0x68 + lVar17;
  if (lVar17 != lVar16) {
    piVar20 = (int *)(lVar17 + 0x28);
    plVar10 = (longlong *)0x0;
    do {
      iVar2 = piVar20[-4];
      local_48 = (longlong *)0x0;
      iVar18 = 0;
      local_40 = (longlong *)0x0;
      plVar12 = plVar10;
      iVar11 = 0;
      if (iVar2 != 0) {
        iVar11 = 0;
        iVar18 = 0;
        if (0 < iVar2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48,iVar2);
          iVar11 = (int)local_40;
          iVar18 = local_40._4_4_;
        }
        plVar12 = local_48;
        _guard_xfg_dispatch_icall_nop
                  (local_48 + iVar11,*(void **)(piVar20 + -6),(longlong)iVar2 << 3);
        iVar11 = iVar11 + iVar2;
        local_40 = (longlong *)CONCAT44(local_40._4_4_,iVar11);
      }
      iVar2 = *piVar20;
      if (iVar2 != 0) {
        if (iVar18 < iVar11 + iVar2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_48);
          plVar12 = local_48;
          iVar11 = (int)local_40;
        }
        _guard_xfg_dispatch_icall_nop
                  (plVar12 + iVar11,*(void **)(piVar20 + -2),(longlong)iVar2 << 3);
        iVar11 = iVar11 + iVar2;
      }
      plVar19 = (longlong *)
                ((ulonglong)((longlong)(plVar12 + iVar11) + (7 - (longlong)plVar12)) >> 3);
      if (plVar12 + iVar11 < plVar12) {
        plVar19 = plVar10;
      }
      plVar9 = plVar12;
      plVar15 = plVar10;
      if (plVar19 != (longlong *)0x0) {
        do {
          if (*plVar9 != 0) {
            FUN_1417510e0();
          }
          plVar9 = plVar9 + 1;
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (plVar15 != plVar19);
      }
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
      lVar17 = lVar17 + 0x68;
      piVar20 = piVar20 + 0x1a;
      param_1 = local_res8;
    } while (lVar17 != lVar16);
  }
  FUN_14259e2d0(param_1);
  FUN_1425990a0(param_1);
  lVar17 = FUN_1417a53c0(param_1);
  if ((lVar17 != 0) && (lVar17 = FUN_1417a53c0(param_1), *(int *)(lVar17 + 0x240) < 0x132)) {
    uVar1 = FUN_14256c9d0(param_1);
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_146533750,&local_res8,uVar1);
    local_res10 = param_1;
    local_48 = (longlong *)FUN_14256c9d0(param_1);
    local_40 = &local_res10;
    FUN_142554f40(&DAT_146533750,&local_res8,&local_48,0);
  }
  return;
}



// FUNCTION 14259d260 PostLoad body=32 status=ok
// SIG undefined PostLoad(void)

void UMaterialInterface::PostLoad(void)

{
  UObject::PostLoad();
  if (DAT_1468c21ab == '\0') {
    PostLoadDefaultMaterials();
    return;
  }
  return;
}



// FUNCTION 14259d280 PreSave body=43 status=ok
// SIG undefined PreSave(void)

void UMaterialInstance::PreSave(long param_1,longlong *param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014259d29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa0))(param_2);
    return;
  }
  return;
}



// FUNCTION 14259d2b0 FUN_14259d2b0 body=3392 status=ok
// SIG undefined FUN_14259d2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14259d2b0(longlong param_1,LARGE_INTEGER *param_2,DWORD *param_3,float *param_4,
             longlong *param_5)

{
  uint uVar1;
  _struct_19 _Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  DWORD DVar7;
  LARGE_INTEGER LVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float *pfVar11;
  LARGE_INTEGER LVar12;
  float *pfVar13;
  longlong *plVar14;
  LARGE_INTEGER LVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  _struct_19 *p_Var19;
  LARGE_INTEGER LVar20;
  LARGE_INTEGER LVar21;
  longlong lVar22;
  LARGE_INTEGER *pLVar23;
  undefined2 *puVar24;
  int iVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  LARGE_INTEGER *pLVar32;
  longlong lVar33;
  uint uVar34;
  uint *puVar35;
  longlong *plVar36;
  uint uVar37;
  longlong *plVar38;
  float *pfVar39;
  longlong lVar41;
  float fVar42;
  double dVar43;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined8 local_250;
  LARGE_INTEGER local_248;
  LARGE_INTEGER *local_240;
  int local_238 [2];
  LARGE_INTEGER local_230;
  LARGE_INTEGER local_228;
  longlong local_220;
  float *local_218;
  int local_210 [2];
  LARGE_INTEGER local_208;
  longlong *local_200;
  DWORD *local_1f8;
  LARGE_INTEGER local_1f0;
  LARGE_INTEGER *local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  LARGE_INTEGER *local_1d0;
  int local_1c8;
  uint uStack_1c4;
  uint *puStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  float *local_1a8;
  LARGE_INTEGER local_1a0;
  longlong *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong local_178;
  LARGE_INTEGER local_170;
  int iStack_168;
  uint uStack_164;
  uint *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined **local_148 [18];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  ulonglong uVar40;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_200 = param_5;
  local_240 = param_2;
  local_220 = param_1;
  local_218 = param_4;
  local_1f8 = param_3;
  QueryPerformanceCounter(&local_1e0);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  dVar6 = (double)local_1e0.QuadPart * DAT_1468b02f8;
  FMaterialShaderMapId::GetMaterialHash(param_1 + 0x100,&local_98);
  DVar7 = *param_3;
  dVar6 = dVar6 + 16777216.0;
  do {
    uVar29 = 0;
    LVar8.QuadPart =
         (**(code **)(**(longlong **)(param_2->QuadPart + (longlong)(int)DVar7 * 8) + 0x10))();
    local_228.QuadPart = LVar8.QuadPart;
    if (LVar8.QuadPart == 0) {
      lVar41 = (**(code **)(**(longlong **)(param_2->QuadPart + (longlong)(int)*param_3 * 8) + 0x20)
               )();
      local_258 = 0;
      local_250 = 0;
      lVar22 = (**(code **)(*(longlong *)**(undefined8 **)(lVar41 + 0x18) + 0x10))();
      lVar33 = local_220;
      lVar22 = *(longlong *)(lVar22 + 0x18);
      uVar26 = uVar29;
      if (0 < *(int *)(lVar41 + 0x20)) {
        do {
          uVar10 = (**(code **)(**(longlong **)(uVar29 + *(longlong *)(lVar41 + 0x18)) + 0x10))();
          uVar10 = FUN_14259dff0(lVar33,uVar10,*(undefined8 *)(lVar41 + 0x30),&local_98);
          uVar40 = local_250;
          lVar30 = (longlong)(int)local_250;
          iVar17 = (int)local_250 + 1;
          local_250 = CONCAT44(local_250._4_4_,iVar17);
          if (local_250._4_4_ < iVar17) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_258,uVar40 & 0xffffffff);
          }
          uVar37 = (int)uVar26 + 1;
          uVar29 = uVar29 + 8;
          *(undefined8 *)(local_258 + lVar30 * 8) = uVar10;
          param_1 = local_220;
          uVar26 = (ulonglong)uVar37;
          param_4 = local_218;
          param_3 = local_1f8;
        } while ((int)uVar37 < *(int *)(lVar41 + 0x20));
      }
      lVar33 = 0;
      lVar30 = operator_new(0x30);
      if (lVar30 != 0) {
        LVar8.QuadPart =
             FShaderPipeline::FShaderPipeline(lVar30,*(undefined8 *)(lVar41 + 0x30),&local_258);
        if ((float *)LVar8.QuadPart != (float *)0x0) {
          if (lVar22 == 0) {
            local_228 = *(LARGE_INTEGER *)(lVar41 + 0x30);
            pLVar32 = &local_1f0;
            local_1f0.QuadPart = (LONGLONG)&local_228;
            pLVar23 = &local_1e0;
            local_1e8 = &local_230;
          }
          else {
            iVar17 = 0;
            lVar30 = 0;
            if (0 < *(int *)(param_1 + 0xe8)) {
              plVar28 = *(longlong **)(param_1 + 0xe0);
              do {
                if (*(longlong *)(*plVar28 + 0xd8) == lVar22) {
                  lVar33 = (*(longlong **)(param_1 + 0xe0))[lVar30];
                  break;
                }
                iVar17 = iVar17 + 1;
                lVar30 = lVar30 + 1;
                plVar28 = plVar28 + 1;
              } while (iVar17 < *(int *)(param_1 + 0xe8));
            }
            local_228 = *(LARGE_INTEGER *)(lVar41 + 0x30);
            pLVar32 = &local_1d8;
            local_1d8.QuadPart = (LONGLONG)&local_228;
            pLVar23 = &local_248;
            local_1d0 = &local_230;
            param_1 = lVar33;
          }
          local_230.QuadPart = LVar8.QuadPart;
          FUN_14257b080(param_1 + 0x88,pLVar23,pLVar32,0);
        }
      }
      if (local_258 != 0) {
        FMemory::Free();
      }
    }
    else {
      FUN_14259dff0(param_1,LVar8.QuadPart,0,&local_98);
      uStack_1c4 = 1;
      local_230.QuadPart = LVar8.QuadPart + 0x3f8;
      uVar37 = *(uint *)(LVar8.QuadPart + 0x420);
      puStack_1c0 = (uint *)(LVar8.QuadPart + 0x408);
      local_1c8 = 0;
      uStack_1b4 = 0;
      iStack_1b0 = 0;
      if (uVar37 != 0) {
        puVar35 = *(uint **)(LVar8.QuadPart + 0x418);
        if (*(uint **)(LVar8.QuadPart + 0x418) == (uint *)0x0) {
          puVar35 = puStack_1c0;
        }
        uVar1 = *puVar35;
        iStack_1b0 = 0;
        local_1c8 = 0;
        while (uVar1 == 0) {
          lVar22 = (longlong)local_1c8;
          iStack_1b0 = iStack_1b0 + 0x20;
          iVar17 = local_1c8 + 1;
          bVar5 = (int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1c8;
          local_1c8 = iVar17;
          if (bVar5) goto LAB_14259d45e;
          uVar1 = puVar35[lVar22 + 1];
        }
        uStack_1c4 = -uVar1 & uVar1;
        iVar17 = 0x1f;
        if (uStack_1c4 != 0) {
          for (; uStack_1c4 >> iVar17 == 0; iVar17 = iVar17 + -1) {
          }
        }
        if (uStack_1c4 == 0) {
          iVar17 = 0x20;
        }
        else {
          iVar17 = 0x1f - iVar17;
        }
        uStack_1b4 = (iStack_1b0 - iVar17) + 0x1f;
        if ((int)uVar37 < (int)uStack_1b4) {
LAB_14259d45e:
          uStack_1b4 = uVar37;
        }
      }
      local_1b8 = 0xffffffff;
      uVar1 = *(uint *)(LVar8.QuadPart + 0x420);
      plStack_198 = (longlong *)CONCAT44(uStack_1c4,local_1c8);
      uStack_188 = CONCAT44(uStack_1b4,0xffffffff);
      uStack_180 = CONCAT44(uStack_1ac,iStack_1b0);
      uVar31 = -1 << ((byte)uVar1 & 0x1f);
      uVar34 = uVar1 & 0xffffffe0;
      uStack_190 = CONCAT44(uVar1,uVar31);
      iStack_168 = local_1c8;
      uStack_164 = uStack_1c4;
      if (uVar1 != uVar37) {
        puVar35 = *(uint **)(LVar8.QuadPart + 0x418);
        if (*(uint **)(LVar8.QuadPart + 0x418) == (uint *)0x0) {
          puVar35 = puStack_1c0;
        }
        uVar31 = puVar35[(int)uVar1 >> 5] & uVar31;
        iVar17 = (int)uVar1 >> 5;
        while (uVar31 == 0) {
          uVar34 = uVar34 + 0x20;
          if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar17)
          goto LAB_14259d525;
          uVar31 = puVar35[(longlong)iVar17 + 1];
          uStack_190 = 0xffffffff;
          iVar17 = iVar17 + 1;
        }
        uVar31 = -uVar31 & uVar31;
        iVar17 = 0x1f;
        if (uVar31 != 0) {
          for (; uVar31 >> iVar17 == 0; iVar17 = iVar17 + -1) {
          }
        }
        if (uVar31 == 0) {
          iVar17 = 0x20;
        }
        else {
          iVar17 = 0x1f - iVar17;
        }
        iVar17 = (uVar34 - iVar17) + 0x1f;
        uStack_190 = CONCAT44(iVar17,(int)uStack_190);
        if ((int)uVar37 < iVar17) {
LAB_14259d525:
          uStack_190 = CONCAT44(uVar37,(int)uStack_190);
        }
      }
      local_1a8 = (float *)(uStack_190 >> 0x20);
      local_1a0.QuadPart = local_230.QuadPart;
      local_160 = puStack_1c0;
      uStack_158 = uStack_188;
      local_150 = uStack_180;
      local_170.QuadPart = local_230.QuadPart;
      while( true ) {
        plVar28 = (longlong *)0x0;
        if (((uStack_158._4_4_ == (int)local_1a8) && (local_160 == puStack_1c0)) &&
           (local_170.QuadPart == local_230.QuadPart)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        param_4 = local_218;
        param_3 = local_1f8;
        if (!bVar5) break;
        p_Var19 = (_struct_19 *)((longlong)uStack_158._4_4_ * 0x20 + *(longlong *)local_170);
        plStack_198 = (longlong *)0x0;
        DVar7 = p_Var19[2].LowPart;
        local_1a0.s = *p_Var19;
        _Src = p_Var19[1];
        uStack_190 = CONCAT44(uStack_190._4_4_,DVar7);
        plVar27 = plVar28;
        iVar17 = 0;
        if (DVar7 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&plStack_198,DVar7,0);
          plVar27 = plStack_198;
          _guard_xfg_dispatch_icall_nop(plStack_198,(void *)_Src,(longlong)(int)DVar7 << 3);
          iVar17 = (int)uStack_190;
        }
        plVar14 = local_200;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(local_200,local_238);
        if ((local_238[0] == -1) || (lVar22 = (longlong)local_238[0] * 0x20 + *plVar14, lVar22 == 0)
           ) {
          local_178 = LVar8.QuadPart + 0x18;
          TSet<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FVertexFactoryType_const_*_const_&>_>(plVar14,local_210);
          lVar22 = (longlong)local_210[0] * 0x20 + *plVar14;
        }
        plVar14 = (longlong *)(lVar22 + 8);
        plVar36 = (longlong *)
                  ((ulonglong)((longlong)(plVar27 + iVar17) + (7 - (longlong)plVar27)) >> 3);
        if (plVar27 + iVar17 < plVar27) {
          plVar36 = plVar28;
        }
        plVar38 = plVar27;
        if (plVar36 != (longlong *)0x0) {
          do {
            plVar2 = (longlong *)*plVar14;
            iVar17 = *(int *)(lVar22 + 0x10);
            lVar33 = *plVar38;
            for (plVar9 = plVar2; plVar9 != plVar2 + iVar17; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar33) {
                if ((int)((longlong)plVar9 - (longlong)plVar2 >> 3) != -1) goto LAB_14259d69a;
                break;
              }
            }
            *(int *)(lVar22 + 0x10) = iVar17 + 1;
            if (*(int *)(lVar22 + 0x14) < iVar17 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar17);
            }
            *(longlong *)(*plVar14 + (longlong)iVar17 * 8) = lVar33;
LAB_14259d69a:
            plVar28 = (longlong *)((longlong)plVar28 + 1);
            plVar38 = plVar38 + 1;
          } while (plVar28 != plVar36);
        }
        if (plVar27 != (longlong *)0x0) {
          FMemory::Free(plVar27);
        }
        uStack_158 = CONCAT44(uStack_158._4_4_,(uint)uStack_158 & ~uStack_164);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_168);
        LVar8 = local_228;
      }
    }
    *param_3 = *param_3 + 1;
    QueryPerformanceCounter(&local_208);
    dVar43 = (double)local_208.QuadPart * DAT_1468b02f8 + 16777216.0;
    fVar42 = (float)((double)*param_4 - (dVar43 - dVar6));
    *param_4 = fVar42;
    DVar7 = *param_3;
  } while ((0.0 < fVar42) &&
          (param_1 = local_220, param_2 = local_240, dVar6 = dVar43,
          (int)DVar7 < (int)local_240[1].s.LowPart));
  if (DVar7 == local_240[1].s.LowPart) {
    local_238[0] = 0;
    iVar17 = *(int *)(local_220 + 0xe8);
    lVar22 = local_220;
    if (0 < iVar17) {
      local_1f8 = (DWORD *)0x0;
      plVar28 = local_200;
      do {
        iVar17 = local_238[0];
        pfVar39 = (float *)0x0;
        LVar8 = (LARGE_INTEGER)
                ((LARGE_INTEGER *)((longlong)local_1f8 + *(longlong *)(lVar22 + 0xe0)))->QuadPart;
        lVar33 = *(longlong *)(LVar8.QuadPart + 0xd8);
        local_208 = LVar8;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(plVar28,local_210,lVar33);
        pfVar13 = pfVar39;
        if (local_210[0] != -1) {
          pfVar13 = (float *)((longlong)local_210[0] * 0x20 + *plVar28);
        }
        pfVar11 = pfVar13 + 2;
        if (pfVar13 == (float *)0x0) {
          pfVar11 = pfVar39;
        }
        if ((lVar33 != 0) && (pfVar11 != (float *)0x0)) {
          pLVar32 = *(LARGE_INTEGER **)pfVar11;
          local_218 = (float *)0x0;
          local_1a8 = (float *)((longlong)(int)pfVar11[2] & 0x1fffffffffffffff);
          if (pLVar32 + (int)pfVar11[2] < pLVar32) {
            local_1a8 = pfVar39;
          }
          plVar28 = local_200;
          local_240 = pLVar32;
          if (local_1a8 != (float *)0x0) {
            do {
              pfVar13 = local_218;
              uVar26 = 0;
              LVar21 = (LARGE_INTEGER)pLVar32->QuadPart;
              uVar29 = uVar26;
              if (*(int *)(**(ulonglong **)(LVar21.QuadPart + 0x10) + 8) == 2) {
                uVar29 = **(ulonglong **)(LVar21.QuadPart + 0x10);
              }
              LVar20 = LVar8;
              if (uVar29 != 0) {
                local_240 = pLVar32;
                lVar22 = FUN_1425945f0(LVar8.QuadPart,LVar21.QuadPart);
                if (lVar22 == 0) {
                  local_258 = 0;
                  local_250 = 0;
                  if (0 < *(int *)(LVar21.QuadPart + 0x18)) {
                    lVar22 = 0;
                    uVar29 = uVar26;
                    uVar40 = uVar26;
                    while( true ) {
                      LVar15.QuadPart = 0;
                      local_1e8 = (LARGE_INTEGER *)((ulonglong)local_1e8 & 0xffffffff00000000);
                      LVar20 = (LARGE_INTEGER)
                               ((LARGE_INTEGER *)(lVar22 + *(longlong *)(LVar21.QuadPart + 0x10)))->
                               QuadPart;
                      local_1f0.QuadPart = LVar15.QuadPart;
                      if ((((LARGE_INTEGER *)(LVar20.QuadPart + 8))->s).LowPart == 2) {
                        local_1f0 = LVar20;
                      }
                      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                      ::FindId((longlong *)(LVar8.QuadPart + 0x38),&local_248,&local_1f0);
                      LVar20.QuadPart = LVar15.QuadPart;
                      if (local_248.s.LowPart != 0xffffffff) {
                        LVar20.QuadPart =
                             (longlong)(int)local_248.s.LowPart * 0x20 +
                             *(longlong *)(LVar8.QuadPart + 0x38);
                      }
                      LVar12.QuadPart = LVar20.QuadPart + 0x10;
                      if ((longlong *)LVar20.QuadPart == (longlong *)0x0) {
                        LVar12.QuadPart = LVar15.QuadPart;
                      }
                      if ((LARGE_INTEGER *)LVar12.QuadPart != (LARGE_INTEGER *)0x0) {
                    /* WARNING: Load size is inaccurate */
                        LVar15.s = *LVar12.s;
                      }
                      iVar17 = (int)uVar26 + 1;
                      local_250 = CONCAT44(local_250._4_4_,iVar17);
                      if ((int)uVar29 < iVar17) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (&local_258,uVar26);
                      }
                      uVar37 = (int)uVar40 + 1;
                      uVar40 = (ulonglong)uVar37;
                      lVar22 = lVar22 + 8;
                      ((LARGE_INTEGER *)(local_258 + (longlong)(int)uVar26 * 8))->QuadPart =
                           (LONGLONG)LVar15;
                      pLVar32 = local_240;
                      LVar20 = local_208;
                      pfVar13 = local_218;
                      if (*(int *)(LVar21.QuadPart + 0x18) <= (int)uVar37) break;
                      uVar29 = local_250 >> 0x20;
                      uVar26 = local_250 & 0xffffffff;
                    }
                  }
                  lVar22 = operator_new(0x30);
                  if (lVar22 == 0) {
                    local_230.QuadPart = 0;
                  }
                  else {
                    local_230.QuadPart =
                         FShaderPipeline::FShaderPipeline(lVar22,LVar21.QuadPart,&local_258);
                  }
                  local_1d8.QuadPart = (LONGLONG)&local_228;
                  local_1d0 = &local_230;
                  local_228 = LVar21;
                  FUN_14257b080((longlong *)(LVar20.QuadPart + 0x88),&local_1e0,&local_1d8,0);
                  if (local_258 != 0) {
                    FMemory::Free();
                  }
                }
              }
              pLVar32 = pLVar32 + 1;
              local_218 = (float *)((longlong)pfVar13 + 1);
              plVar28 = local_200;
              lVar22 = local_220;
              LVar8 = LVar20;
              iVar17 = local_238[0];
              local_240 = pLVar32;
            } while (local_218 != local_1a8);
          }
        }
        local_238[0] = iVar17 + 1;
        iVar17 = *(int *)(lVar22 + 0xe8);
        local_1f8 = local_1f8 + 2;
      } while (local_238[0] < iVar17);
    }
    plVar28 = local_200;
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(local_200,&local_248,0);
    LVar8.QuadPart = 0;
    if (local_248.s.LowPart != 0xffffffff) {
      LVar8.QuadPart = (longlong)(int)local_248.s.LowPart * 0x20 + *plVar28;
    }
    pfVar13 = (float *)(LVar8.QuadPart + 8);
    if ((float *)LVar8.QuadPart == (float *)0x0) {
      pfVar13 = (float *)0x0;
    }
    if (pfVar13 != (float *)0x0) {
      pLVar32 = *(LARGE_INTEGER **)pfVar13;
      local_218 = (float *)0x0;
      local_230.QuadPart = (longlong)(int)pfVar13[2] & 0x1fffffffffffffff;
      if (pLVar32 + (int)pfVar13[2] < pLVar32) {
        local_230.QuadPart = 0;
      }
      local_240 = pLVar32;
      if ((float *)local_230.QuadPart != (float *)0x0) {
        do {
          lVar33 = local_220;
          plVar27 = (longlong *)0x0;
          LVar8 = (LARGE_INTEGER)pLVar32->QuadPart;
          plVar28 = plVar27;
          if ((int)((longlong *)**(longlong **)(LVar8.QuadPart + 0x10))[1] == 1) {
            plVar28 = (longlong *)**(longlong **)(LVar8.QuadPart + 0x10);
          }
          pfVar13 = local_218;
          if (plVar28 != (longlong *)0x0) {
            local_208.QuadPart = lVar22 + 0x88;
            if (*(int *)(lVar22 + 0x90) != *(int *)(lVar22 + 0xbc)) {
              lVar41 = *(longlong *)(lVar22 + 200);
              if (*(longlong *)(lVar22 + 200) == 0) {
                lVar41 = lVar22 + 0xc0;
              }
              iVar17 = *(int *)(lVar41 + ((longlong)*(int *)(lVar22 + 0xd0) - 1U &
                                         (longlong)*(int *)(LVar8.QuadPart + 0x68)) * 4);
              if (iVar17 != -1) {
                do {
                  plVar28 = (longlong *)(*(longlong *)local_208 + (longlong)iVar17 * 0x18);
                  if (*(longlong **)(*(longlong *)local_208 + (longlong)iVar17 * 0x18) ==
                      (longlong *)LVar8.QuadPart) {
                    if (iVar17 != -1) goto LAB_14259dc93;
                    break;
                  }
                  iVar17 = (int)plVar28[2];
                } while (iVar17 != -1);
              }
            }
            plVar28 = plVar27;
LAB_14259dc93:
            plVar14 = plVar28 + 1;
            if (plVar28 == (longlong *)0x0) {
              plVar14 = plVar27;
            }
            if ((plVar14 == (longlong *)0x0) || (*plVar14 == 0)) {
              local_258 = 0;
              local_250 = 0;
              local_240 = pLVar32;
              if (0 < *(int *)(LVar8.QuadPart + 0x18)) {
                lVar22 = 0;
                plVar28 = plVar27;
                plVar14 = plVar27;
                while( true ) {
                  LVar20.QuadPart = 0;
                  local_1e8 = (LARGE_INTEGER *)((ulonglong)local_1e8 & 0xffffffff00000000);
                  LVar21 = (LARGE_INTEGER)
                           ((LARGE_INTEGER *)(lVar22 + *(longlong *)(LVar8.QuadPart + 0x10)))->
                           QuadPart;
                  local_1f0.QuadPart = LVar20.QuadPart;
                  if ((((LARGE_INTEGER *)(LVar21.QuadPart + 8))->s).LowPart == 1) {
                    local_1f0 = LVar21;
                  }
                  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                  ::FindId(lVar33 + 0x38,&local_248,&local_1f0);
                  LVar21.QuadPart = LVar20.QuadPart;
                  if (local_248.s.LowPart != 0xffffffff) {
                    LVar21.QuadPart =
                         (longlong)(int)local_248.s.LowPart * 0x20 + *(longlong *)(lVar33 + 0x38);
                  }
                  LVar15.QuadPart = LVar21.QuadPart + 0x10;
                  if ((longlong *)LVar21.QuadPart == (longlong *)0x0) {
                    LVar15.QuadPart = LVar20.QuadPart;
                  }
                  if ((LARGE_INTEGER *)LVar15.QuadPart != (LARGE_INTEGER *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    LVar20.s = *LVar15.s;
                  }
                  iVar17 = (int)plVar27 + 1;
                  local_250 = CONCAT44(local_250._4_4_,iVar17);
                  if ((int)plVar28 < iVar17) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_258,plVar27);
                  }
                  uVar37 = (int)plVar14 + 1;
                  plVar14 = (longlong *)(ulonglong)uVar37;
                  lVar22 = lVar22 + 8;
                  ((LARGE_INTEGER *)(local_258 + (longlong)(int)plVar27 * 8))->QuadPart =
                       (LONGLONG)LVar20;
                  if (*(int *)(LVar8.QuadPart + 0x18) <= (int)uVar37) break;
                  plVar28 = (longlong *)(local_250 >> 0x20);
                  plVar27 = (longlong *)(local_250 & 0xffffffff);
                }
              }
              LVar21 = local_208;
              pfVar13 = local_218;
              pLVar32 = local_240;
              lVar22 = operator_new(0x30);
              if (lVar22 == 0) {
                local_228.QuadPart = 0;
              }
              else {
                local_228.QuadPart =
                     FShaderPipeline::FShaderPipeline(lVar22,LVar8.QuadPart,&local_258);
              }
              local_1d8.QuadPart = (LONGLONG)&local_208;
              local_1d0 = &local_228;
              local_208 = LVar8;
              FUN_14257b080(LVar21.QuadPart,&local_1e0,&local_1d8,0);
              lVar22 = local_220;
              if (local_258 != 0) {
                FMemory::Free();
                lVar22 = local_220;
              }
            }
          }
          pLVar32 = pLVar32 + 1;
          local_218 = (float *)((longlong)pfVar13 + 1);
        } while (local_218 != (float *)local_230.QuadPart);
        iVar17 = *(int *)(lVar22 + 0xe8);
        local_240 = pLVar32;
      }
    }
    iVar25 = iVar17 + -1;
    if (-1 < iVar25) {
      plVar28 = (longlong *)(lVar22 + 0xe0);
      lVar33 = (longlong)iVar25 * 8;
      lVar30 = (longlong)iVar17 << 3;
      lVar41 = lVar33;
      do {
        lVar3 = *plVar28;
        lVar4 = *(longlong *)(lVar3 + lVar41);
        if ((*(int *)(lVar4 + 0x40) == *(int *)(lVar4 + 0x6c)) &&
           (*(int *)(lVar4 + 0x90) == *(int *)(lVar4 + 0xbc))) {
          FUN_14257f410(*(undefined8 *)(lVar3 + lVar33));
          FMemory::Free(*(undefined8 *)(lVar3 + lVar33));
          iVar17 = *(int *)(lVar22 + 0xe8);
          iVar18 = (iVar17 - iVar25) + -1;
          if (iVar18 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar33 + *plVar28),(void *)(lVar30 + *plVar28),(longlong)iVar18 << 3
                      );
            iVar17 = *(int *)(lVar22 + 0xe8);
          }
          *(int *)(lVar22 + 0xe8) = iVar17 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar28);
        }
        lVar30 = lVar30 + -8;
        lVar33 = lVar33 + -8;
        lVar41 = lVar41 + -8;
        iVar25 = iVar25 + -1;
      } while (-1 < iVar25);
    }
    FUN_142598da0(lVar22);
    if ((*(byte *)(lVar22 + 0x364) & 8) != 0) {
      local_258 = 0;
      local_250 = 0;
      local_240 = (LARGE_INTEGER *)0x0;
      FArchive::FArchive(local_148);
      local_b8 = 0;
      local_148[0] = &PTR_FUN_143f4a100;
      local_b0 = &local_258;
      local_a8 = 0;
      FArchive::SetIsSaving(local_148,1);
      FArchive::SetIsPersistent(local_148,1);
      FUN_1425a0250(lVar22,local_148,1);
      plVar28 = (longlong *)GetDerivedDataCacheRef();
      puVar16 = (undefined8 *)
                GetMaterialShaderMapKeyString
                          (&local_1f0,lVar22 + 0x100,*(undefined4 *)(lVar22 + 0x30));
      if (*(int *)(puVar16 + 1) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = (undefined2 *)*puVar16;
      }
      (**(code **)(*plVar28 + 0x50))(plVar28,puVar24,&local_258,0);
      if ((LARGE_INTEGER *)local_1f0.QuadPart != (LARGE_INTEGER *)0x0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_148);
      if (local_258 != 0) {
        FMemory::Free();
      }
    }
    *(uint *)(lVar22 + 0x364) = *(uint *)(lVar22 + 0x364) | 2;
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 14259dff0 FUN_14259dff0 body=727 status=ok
// SIG undefined FUN_14259dff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14259dff0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  int local_178;
  longlong local_170 [2];
  undefined4 *local_160;
  ulonglong local_158;
  undefined4 local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar7 = 0;
  local_160 = param_4;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    uVar6 = *(ulonglong *)(param_2 + 0x20);
    lVar1 = param_2 + 0x328;
    uVar5 = uVar7;
    if (*(int *)(uVar6 + 8) == 1) {
      uVar5 = uVar6;
    }
    if (*(code **)(uVar6 + 0x40) == AK::MemoryMgr::StartProfileThreadUsage) {
      uVar6 = uVar7;
    }
    local_170[0] = FUN_1419ee150(lVar1,uVar6,0);
    lVar9 = param_3;
    if ((param_3 != 0) && (*(char *)(param_3 + 0x6c) == '\0')) {
      lVar9 = 0;
    }
    local_188 = *(undefined4 *)(param_2 + 0x30);
    local_198 = *(undefined8 *)(param_2 + 0x20);
    local_190 = (longlong *)((ulonglong)local_190._4_4_ << 0x20);
    uVar3 = FUN_1419d78c0(local_d8,param_4,lVar9,*(undefined8 *)(param_2 + 0x18));
    lVar2 = FShaderType::FindShaderById(*(undefined8 *)(param_2 + 0x20),uVar3);
    if (lVar2 == 0) {
      local_150 = *(undefined4 *)(param_2 + 0x398);
      plVar4 = (longlong *)(param_2 + 0x3a8);
      local_158 = uVar5;
      if (*(int *)(param_2 + 0x3a0) != -1) {
        *(int *)(param_2 + 0x3a0) = *(int *)(param_2 + 0x3a0) + 4;
        local_178 = *(int *)(param_2 + 0x3b0);
        *(int *)(param_2 + 0x3b0) = local_178 + 4;
        if (*(int *)(param_2 + 0x3b4) < local_178 + 4) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar4,local_178);
        }
        *(undefined4 *)((longlong)local_178 + *plVar4) = *(undefined4 *)(param_2 + 0x3a0);
        *(undefined4 *)(param_2 + 0x3a0) = 0xffffffff;
      }
      local_138 = param_2 + 0x3b8;
      local_130 = local_170[0];
      local_108 = 0;
      local_128 = *local_160;
      uStack_124 = local_160[1];
      uStack_120 = local_160[2];
      uStack_11c = local_160[3];
      local_118 = local_160[4];
      local_f8 = param_1 + 0x1f8;
      local_100 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_148 = plVar4;
      local_140 = lVar1;
      local_110 = lVar9;
      lVar2 = (**(code **)(uVar5 + 0x130))(&local_158);
      if (local_f0 != 0) {
        FMemory::Free();
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
    }
    if (param_3 == 0) {
      FUN_1425836d0(param_1,uVar5,0,lVar2);
    }
  }
  else {
    uVar6 = uVar7;
    if (0 < *(int *)(param_1 + 0xe8)) {
      plVar4 = *(longlong **)(param_1 + 0xe0);
      uVar5 = uVar7;
      uVar8 = uVar7;
      do {
        if (*(longlong *)(*plVar4 + 0xd8) == *(longlong *)(param_2 + 0x18)) {
          uVar6 = (*(longlong **)(param_1 + 0xe0))[(int)uVar8];
          break;
        }
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 1;
        uVar6 = 0;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0xe8));
    }
    local_170[0] = 0;
    local_170[1] = 0;
    if (*(int *)(*(ulonglong *)(param_2 + 0x20) + 8) == 2) {
      uVar7 = *(ulonglong *)(param_2 + 0x20);
    }
    local_190 = local_170;
    local_198 = param_3;
    lVar2 = FUN_1425bd9b0(uVar7,param_1 + 0x1f8,param_4,param_2);
    if (local_170[0] != 0) {
      FMemory::Free();
    }
    if (param_3 == 0) {
      FUN_1425836d0(uVar6,uVar7,0,lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 14259e2d0 FUN_14259e2d0 body=908 status=ok
// SIG undefined FUN_14259e2d0(void)

/* WARNING: Removing unreachable block (ram,0x00014259e55e) */
/* WARNING: Removing unreachable block (ram,0x00014259e56a) */
/* WARNING: Removing unreachable block (ram,0x00014259e579) */

void FUN_14259e2d0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 local_178 [2];
  undefined4 local_168;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  
  plVar13 = param_1 + 0x22;
  uVar14 = 0;
  do {
    plVar12 = (longlong *)0x0;
    lVar3 = *plVar13;
    if ((lVar3 != 0) &&
       (iVar5 = (**(code **)(*param_1 + 0x468))(param_1), (iVar5 - 5U & 0xfffffffb) == 0)) {
      uVar31 = 0x3fc66666;
      uVar32 = 0x3f400000;
      uVar33 = 0x3fa66666;
      uVar34 = 0x3f59999a;
      uStack_164 = 0x3ed1eb853ef5c28f;
      uStack_15c = 0x3f8000003e8f5c29;
      local_168 = 0x3f99999a;
      local_134 = 0x3f800000;
      local_154 = 0x3f800000;
      uStack_150 = 0x3ebd70a4;
      uStack_14c = 0x3e99999a;
      uStack_148 = 0x3f800000;
      local_12c = 0x3f6e147b;
      local_144 = DAT_1464aa6c0;
      uStack_140 = DAT_1464aa6c4;
      uStack_13c = DAT_1464aa6c8;
      uStack_138 = DAT_1464aa6cc;
      local_130 = 0x3da3d70a;
      lVar7 = (**(code **)(*param_1 + 0x4c8))(param_1);
      if (lVar7 == 0) {
        uVar15 = local_168;
        uVar16 = (undefined4)uStack_164;
        uVar17 = uStack_164._4_4_;
        uVar18 = (undefined4)uStack_15c;
        uVar19 = uStack_15c._4_4_;
        uVar20 = local_154;
        uVar21 = uStack_150;
        uVar22 = uStack_14c;
        uVar23 = uStack_148;
        uVar24 = local_144;
        uVar25 = uStack_140;
        uVar26 = uStack_13c;
        uVar27 = uStack_138;
        uVar28 = local_134;
        uVar29 = local_130;
        uVar30 = local_12c;
      }
      else {
        uVar31 = *(undefined4 *)(lVar7 + 0x68);
        uVar32 = *(undefined4 *)(lVar7 + 0x6c);
        uVar33 = *(undefined4 *)(lVar7 + 0x70);
        uVar34 = *(undefined4 *)(lVar7 + 0x74);
        uVar15 = *(undefined4 *)(lVar7 + 0x28);
        uVar16 = *(undefined4 *)(lVar7 + 0x2c);
        uVar17 = *(undefined4 *)(lVar7 + 0x30);
        uVar18 = *(undefined4 *)(lVar7 + 0x34);
        uVar19 = *(undefined4 *)(lVar7 + 0x38);
        uVar20 = *(undefined4 *)(lVar7 + 0x3c);
        uVar21 = *(undefined4 *)(lVar7 + 0x40);
        uVar22 = *(undefined4 *)(lVar7 + 0x44);
        uVar23 = *(undefined4 *)(lVar7 + 0x48);
        uVar24 = *(undefined4 *)(lVar7 + 0x4c);
        uVar25 = *(undefined4 *)(lVar7 + 0x50);
        uVar26 = *(undefined4 *)(lVar7 + 0x54);
        uVar27 = *(undefined4 *)(lVar7 + 0x58);
        uVar28 = *(undefined4 *)(lVar7 + 0x5c);
        uVar29 = *(undefined4 *)(lVar7 + 0x60);
        uVar30 = *(undefined4 *)(lVar7 + 100);
      }
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
        local_178[0] = 0;
        local_f8 = uVar15;
        uStack_f4 = uVar16;
        uStack_f0 = uVar17;
        uStack_ec = uVar18;
        local_e8 = uVar19;
        uStack_e4 = uVar20;
        uStack_e0 = uVar21;
        uStack_dc = uVar22;
        local_d8 = uVar23;
        uStack_d4 = uVar24;
        uStack_d0 = uVar25;
        uStack_cc = uVar26;
        local_c8 = uVar27;
        uStack_c4 = uVar28;
        uStack_c0 = uVar29;
        uStack_bc = uVar30;
        local_b8 = uVar31;
        uStack_b4 = uVar32;
        uStack_b0 = uVar33;
        uStack_ac = uVar34;
        local_a8 = lVar7;
        local_a0 = lVar3;
        FUN_14258b950(&local_f8,2,local_178);
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
            plVar12 = plVar9;
          }
          TlsSetValue(*pDVar8,plVar12);
          plVar9 = plVar12;
        }
        plVar12 = (longlong *)plVar9[1];
        if (plVar12 == (longlong *)0x0) {
          if (*plVar9 == 0) {
            lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
            plVar9[1] = lVar10;
            if (lVar10 == 0) {
              puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar9[1] = (longlong)puVar11;
              lVar10 = 0x1f;
              do {
                puVar2 = puVar11 + 0x20;
                *puVar11 = puVar2;
                lVar10 = lVar10 + -1;
                puVar11 = puVar2;
              } while (lVar10 != 0);
              *puVar2 = 0;
            }
          }
          else {
            plVar9[1] = *plVar9;
            *plVar9 = 0;
          }
          plVar12 = (longlong *)plVar9[1];
          iVar5 = 0x20;
          *(undefined4 *)(plVar9 + 2) = 0x20;
        }
        else {
          iVar5 = (int)plVar9[2];
        }
        plVar9[1] = *plVar12;
        *(int *)(plVar9 + 2) = iVar5 + -1;
        *plVar12 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar12 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
        *plVar12 = (longlong)&PTR_FUN_14510bf10;
        *(undefined1 *)(plVar12 + 0xe) = 0;
        plVar12[0xf] = 0;
        local_110 = 0;
        local_118 = 0;
        *(undefined4 *)(plVar12 + 2) = uVar15;
        *(undefined4 *)((longlong)plVar12 + 0x14) = uVar16;
        *(undefined4 *)(plVar12 + 3) = uVar17;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar18;
        plVar12[0xc] = lVar7;
        *(undefined4 *)(plVar12 + 4) = uVar19;
        *(undefined4 *)((longlong)plVar12 + 0x24) = uVar20;
        *(undefined4 *)(plVar12 + 5) = uVar21;
        *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar22;
        *(undefined4 *)(plVar12 + 6) = uVar23;
        *(undefined4 *)((longlong)plVar12 + 0x34) = uVar24;
        *(undefined4 *)(plVar12 + 7) = uVar25;
        *(undefined4 *)((longlong)plVar12 + 0x3c) = uVar26;
        plVar12[0xd] = lVar3;
        *(undefined4 *)(plVar12 + 8) = uVar27;
        *(undefined4 *)((longlong)plVar12 + 0x44) = uVar28;
        *(undefined4 *)(plVar12 + 9) = uVar29;
        *(undefined4 *)((longlong)plVar12 + 0x4c) = uVar30;
        *(undefined4 *)(plVar12 + 10) = uVar31;
        *(undefined4 *)((longlong)plVar12 + 0x54) = uVar32;
        *(undefined4 *)(plVar12 + 0xb) = uVar33;
        *(undefined4 *)((longlong)plVar12 + 0x5c) = uVar34;
        lVar3 = plVar12[0xf];
        piVar1 = (int *)(lVar3 + 0x48);
        if (lVar3 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_141c2c3c0(plVar12,0,0xff,1);
        if (lVar3 != 0) {
          LOCK();
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            FGraphEvent::Recycle(lVar3);
          }
        }
      }
    }
    uVar14 = uVar14 + 1;
    plVar13 = plVar13 + 1;
  } while (uVar14 < 3);
  return;
}



// FUNCTION 14259e660 FUN_14259e660 body=204 status=ok
// SIG undefined FUN_14259e660(void)

void FUN_14259e660(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar1 = UMaterialInterface::GetPrivateStaticClass();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  uVar2 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar2 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      (**(code **)(**(longlong **)(local_28 + (longlong)local_18 * 8) + 0x4d8))();
      uVar2 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 14259e740 FUN_14259e740 body=1025 status=ok
// SIG undefined FUN_14259e740(void)

void FUN_14259e740(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  longlong local_res18;
  undefined8 local_98;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((DAT_146b09450 != 0) && (*(int *)(param_1 + 0x30) == param_2)) {
    uVar14 = 0;
    plVar1 = (longlong *)(param_1 + 0x38);
    uVar8 = *(uint *)(param_1 + 0x60);
    puVar13 = (uint *)(param_1 + 0x48);
    local_98 = 0x100000000;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar8 != 0) {
      puVar12 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar12 = puVar13;
      }
      uVar3 = *puVar12;
      uVar5 = uVar14;
      uVar9 = uVar14;
      while (uVar3 == 0) {
        iVar4 = (int)uVar9;
        uStack_80 = (int)uVar5 + 0x20;
        uVar5 = (ulonglong)uStack_80;
        uVar9 = (ulonglong)(iVar4 + 1U);
        local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
        local_98 = CONCAT44(local_98._4_4_,iVar4 + 1U);
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_14259e82d;
        uVar3 = puVar12[(longlong)iVar4 + 1];
      }
      uVar3 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      local_98 = CONCAT44(uVar3,(undefined4)local_98);
      if (uVar3 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_84 = (uStack_80 - iVar4) + 0x1f;
      if ((int)uVar8 < (int)uStack_84) {
LAB_14259e82d:
        uStack_84 = uVar8;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x60);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,uStack_80);
    local_88 = -1 << ((byte)uVar3 & 0x1f);
    uStack_48 = local_98;
    uVar11 = uVar3 & 0xffffffe0;
    uStack_70 = local_98;
    puStack_90 = puVar13;
    uStack_84 = uVar3;
    local_78 = plVar1;
    local_68 = puVar13;
    local_50 = plVar1;
    puStack_40 = puVar13;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    if (uVar3 != uVar8) {
      puVar12 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar12 = puVar13;
      }
      uVar7 = puVar12[(int)uVar3 >> 5] & local_88;
      iVar4 = (int)uVar3 >> 5;
      while (uVar7 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_14259e905;
        uVar7 = puVar12[(longlong)iVar4 + 1];
        local_88 = 0xffffffff;
        iVar4 = iVar4 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar4 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_84 = (uVar11 - iVar4) + 0x1f;
      uVar3 = uStack_84;
      if ((int)uVar8 < (int)uStack_84) {
LAB_14259e905:
        uStack_84 = uVar8;
        uVar3 = uVar8;
      }
    }
    while( true ) {
      if (((uStack_60._4_4_ == uVar3) && (local_68 == puVar13)) && (local_78 == plVar1)) break;
      lVar2 = *(longlong *)((longlong)(int)uStack_60._4_4_ * 0x20 + 0x10 + *local_78);
      if (lVar2 != 0) {
        FUN_1419e2a40(lVar2);
        FUN_141edf270(*(undefined8 *)(lVar2 + 0x48));
        FShader::Release(lVar2);
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
    uVar5 = uVar14;
    uVar9 = uVar14;
    if (0 < *(int *)(param_1 + 0xe8)) {
      do {
        local_98 = 0x100000000;
        lVar2 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0xe0));
        local_78 = (longlong *)(lVar2 + 0x38);
        uStack_84 = 0;
        uStack_80 = 0;
        uVar8 = *(uint *)(lVar2 + 0x60);
        puStack_90 = (uint *)(lVar2 + 0x48);
        if (uVar8 != 0) {
          puVar13 = *(uint **)(lVar2 + 0x58);
          if (*(uint **)(lVar2 + 0x58) == (uint *)0x0) {
            puVar13 = puStack_90;
          }
          uVar3 = *puVar13;
          uVar6 = uVar14;
          uVar10 = uVar14;
          while (uVar3 == 0) {
            iVar4 = (int)uVar6;
            uStack_80 = (int)uVar10 + 0x20;
            uVar10 = (ulonglong)uStack_80;
            uVar6 = (ulonglong)(iVar4 + 1U);
            local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
            local_98 = CONCAT44(local_98._4_4_,iVar4 + 1U);
            if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
            goto LAB_14259ea2f;
            uVar3 = puVar13[(longlong)iVar4 + 1];
          }
          uVar3 = -uVar3 & uVar3;
          iVar4 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          local_98 = CONCAT44(uVar3,(undefined4)local_98);
          if (uVar3 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          uStack_84 = (uStack_80 - iVar4) + 0x1f;
          if ((int)uVar8 < (int)uStack_84) {
LAB_14259ea2f:
            uStack_84 = uVar8;
          }
        }
        local_88 = 0xffffffff;
        uStack_38 = CONCAT44(uStack_84,0xffffffff);
        uStack_30 = CONCAT44(uStack_7c,uStack_80);
        uStack_48 = local_98;
        uStack_70 = local_98;
        local_58 = CONCAT44(uStack_7c,uStack_80);
        uStack_60 = uStack_38;
        uVar3 = uStack_84;
        local_68 = puStack_90;
        local_50 = local_78;
        puStack_40 = puStack_90;
        if ((int)uStack_84 < (int)uVar8) {
          do {
            lVar2 = *(longlong *)((longlong)(int)uVar3 * 0x20 + 0x10 + *local_78);
            if (lVar2 != 0) {
              FUN_141edf270(*(undefined8 *)(lVar2 + 0x48));
            }
            uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_70._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
            uVar3 = uStack_60._4_4_;
          } while ((int)uStack_60._4_4_ < (int)local_68[6]);
        }
        uVar8 = (int)uVar9 + 1;
        uVar5 = uVar5 + 8;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0xe8));
    }
  }
  local_98 = param_1 + 0x100;
  puStack_90 = (uint *)&local_res18;
  local_res18 = param_1;
  TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMaterialShaderMapId_const_&,FMaterialShaderMap_*_&&>_>
            (&DAT_146afe420 + (longlong)*(int *)(param_1 + 0x30) * 10,local_res8,&local_98,0);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 1;
  return;
}



// FUNCTION 14259eb50 FUN_14259eb50 body=184 status=ok
// SIG undefined FUN_14259eb50(void)

void FUN_14259eb50(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    *(longlong **)(param_1 + 0x10) = *(longlong **)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014259ebae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014259ebbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  return;
}



// FUNCTION 14259ec10 FUN_14259ec10 body=746 status=ok
// SIG undefined FUN_14259ec10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14259ec10(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined8 **local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong **local_d0;
  undefined8 *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar8 = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  plVar7 = *(longlong **)(param_1 + 0x10);
  uVar12 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x18) < plVar7) {
    uVar12 = uVar8;
  }
  if (uVar12 != 0) {
    local_f8 = &local_e8;
    local_f0 = &local_108;
    do {
      puVar9 = (undefined8 *)*plVar7;
      FShader::RegisterSerializedResource(puVar9);
      uVar6 = puVar9[0x12];
      uVar3 = FUN_1419ef3f0(puVar9,local_b8);
      puVar4 = (undefined8 *)FShaderType::FindShaderById(uVar6,uVar3);
      if (puVar4 == (undefined8 *)0x0) {
        FShader::Register(puVar9);
      }
      else {
        (**(code **)*puVar9)(puVar9,1);
        puVar9 = puVar4;
      }
      uVar1 = *(undefined4 *)(puVar9 + 0x13);
      lVar5 = puVar9[0x12];
      local_108 = puVar9;
      FUN_1419e2a40(puVar9);
      local_e8 = lVar5;
      local_e0 = uVar1;
      FUN_14257abd0(param_1 + 0x38,local_100,&local_f8,0);
      if (local_108 != (undefined8 *)0x0) {
        FShader::Release();
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar12);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  local_e8 = param_1 + 0x20;
  puVar9 = puVar4 + *(int *)(param_1 + 0x28);
  local_108 = puVar9;
  if (puVar4 != puVar9) {
    local_d0 = &local_f8;
    local_c8 = &local_d8;
    do {
      plVar2 = (longlong *)*puVar4;
      plVar11 = (longlong *)plVar2[1];
      plVar7 = plVar11 + (int)plVar2[2];
      for (; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        lVar5 = *plVar11;
        if (lVar5 != 0) {
          FUN_1419e2a40(lVar5);
        }
        FShader::RegisterSerializedResource(lVar5);
        if (lVar5 != 0) {
          FShader::Release(lVar5);
        }
      }
      uVar6 = 0;
      lVar5 = operator_new(0x30);
      if (lVar5 != 0) {
        uVar6 = FShaderPipeline::FShaderPipeline(lVar5,*plVar2,plVar2 + 1);
      }
      local_f8 = (longlong *)*plVar2;
      local_d8 = uVar6;
      FUN_14257b080(param_1 + 0x88,local_100,&local_d0,0);
      iVar10 = (int)plVar2[2];
      plVar7 = (longlong *)plVar2[1];
      if (iVar10 != 0) {
        do {
          if (*plVar7 != 0) {
            FShader::Release();
          }
          plVar7 = plVar7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        plVar7 = (longlong *)plVar2[1];
      }
      if (plVar7 != (longlong *)0x0) {
        FMemory::Free(plVar7);
      }
      FMemory::operator_delete(plVar2,0x18);
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar9);
  }
  *(undefined4 *)(local_e8 + 8) = 0;
  if (*(int *)(local_e8 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_e8,0);
  }
  return;
}



// FUNCTION 14259ef00 FUN_14259ef00 body=351 status=ok
// SIG undefined FUN_14259ef00(void)

void FUN_14259ef00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar6;
  
  FUN_14259ec10();
  uVar6 = 0;
  plVar10 = *(longlong **)(param_1 + 0xf0);
  uVar11 = (longlong)*(int *)(param_1 + 0xf8) & 0x1fffffffffffffff;
  if (plVar10 + *(int *)(param_1 + 0xf8) < plVar10) {
    uVar11 = uVar6;
  }
  uVar8 = uVar6;
  if (uVar11 != 0) {
    do {
      plVar1 = (longlong *)*plVar10;
      if (plVar1 != (longlong *)0x0) {
        *(undefined1 *)(plVar1 + 1) = *(undefined1 *)(param_1 + 8);
        (**(code **)(*plVar1 + 8))();
      }
      plVar10 = plVar10 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
  }
  uVar11 = uVar6;
  if (0 < *(int *)(param_1 + 0xf8)) {
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + uVar11);
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x40) == *(int *)(lVar9 + 0x6c))) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + uVar11) = 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar11 = uVar11 + 8;
    } while ((int)uVar5 < *(int *)(param_1 + 0xf8));
  }
  iVar7 = *(int *)(param_1 + 0xe8) + -1;
  if (-1 < iVar7) {
    plVar10 = (longlong *)(param_1 + 0xe0);
    lVar9 = (longlong)iVar7 * 8;
    lVar13 = (longlong)*(int *)(param_1 + 0xe8) << 3;
    lVar12 = lVar9;
    do {
      lVar2 = *plVar10;
      if (*(int *)(*(longlong *)(lVar9 + lVar2) + 0x40) ==
          *(int *)(*(longlong *)(lVar9 + lVar2) + 0x6c)) {
        FUN_14257f410(*(undefined8 *)(lVar12 + lVar2));
        FMemory::Free(*(undefined8 *)(lVar12 + lVar2));
        iVar3 = *(int *)(param_1 + 0xe8);
        iVar4 = (iVar3 - iVar7) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar12 + *plVar10),(void *)(lVar13 + *plVar10),(longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0xe8);
        }
        *(int *)(param_1 + 0xe8) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar10);
      }
      lVar13 = lVar13 + -8;
      lVar12 = lVar12 + -8;
      lVar9 = lVar9 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  return;
}



// FUNCTION 14259f060 FUN_14259f060 body=979 status=ok
// SIG undefined FUN_14259f060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14259f060(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  char cVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  char local_118;
  undefined8 *local_110;
  undefined1 local_108 [8];
  longlong local_100;
  longlong *local_f8;
  undefined8 **local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 **local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (DAT_146afef1c == '\0') {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowDiscardLocalVertexFactory")
    ;
    if (DAT_146afef1c == '\0') {
      if (plVar4 == (longlong *)0x0) {
        DAT_146afef1c = '\x01';
        DAT_146afef1d = '\0';
      }
      else {
        iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4);
        DAT_146afef1c = '\x01';
        DAT_146afef1d = 0 < iVar3;
      }
    }
  }
  cVar11 = DAT_146afef1d;
  local_118 = DAT_146afef1d;
  FName::FName(&local_100,L"FLocalVertexFactory",1);
  uVar9 = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  plVar4 = *(longlong **)(param_1 + 0x10);
  uVar13 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x18) < plVar4) {
    uVar13 = uVar9;
  }
  if (uVar13 != 0) {
    do {
      puVar10 = (undefined8 *)*plVar4;
      FShader::RegisterSerializedResource(puVar10);
      uVar2 = puVar10[0x12];
      uVar5 = FUN_1419ef3f0(puVar10,local_b8);
      puVar6 = (undefined8 *)FShaderType::FindShaderById(uVar2,uVar5);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
        puVar10 = puVar6;
      }
      if ((((cVar11 == '\0') || (*(char *)(param_1 + 8) == '\0')) ||
          (*(longlong *)(puVar10[0xe] + 0x20) != local_100)) || (puVar6 != (undefined8 *)0x0)) {
        FShader::Register(puVar10);
        uVar1 = *(undefined4 *)(puVar10 + 0x13);
        lVar7 = puVar10[0x12];
        local_110 = puVar10;
        FUN_1419e2a40(puVar10);
        local_f8 = &local_e8;
        local_f0 = &local_110;
        local_e8 = lVar7;
        local_e0 = uVar1;
        FUN_14257abd0(param_1 + 0x38,local_108,&local_f8,0);
        cVar11 = local_118;
        if (local_110 != (undefined8 *)0x0) {
          FShader::Release();
          cVar11 = local_118;
        }
      }
      else {
        (**(code **)*puVar10)(puVar10,1);
      }
      plVar4 = plVar4 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar13);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  cVar11 = local_118;
  plVar4 = *(longlong **)(param_1 + 0x20);
  local_e8 = param_1 + 0x20;
  local_f8 = plVar4 + *(int *)(param_1 + 0x28);
  if (plVar4 != local_f8) {
    local_d0 = &local_d8;
    local_c8 = &local_110;
    do {
      puVar10 = (undefined8 *)*plVar4;
      plVar12 = (longlong *)puVar10[1];
      plVar8 = plVar12 + *(int *)(puVar10 + 2);
      for (; plVar12 != plVar8; plVar12 = plVar12 + 1) {
        lVar7 = *plVar12;
        if (lVar7 != 0) {
          FUN_1419e2a40(lVar7);
        }
        if (((cVar11 == '\0') || (*(char *)(param_1 + 8) == '\0')) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x20) != local_100)) {
          FShader::RegisterSerializedResource(lVar7);
        }
        if (lVar7 != 0) {
          FShader::Release(lVar7);
        }
      }
      lVar7 = operator_new(0x30);
      puVar6 = (undefined8 *)0x0;
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)FShaderPipeline::FShaderPipeline(lVar7,*puVar10,puVar10 + 1);
      }
      local_d8 = *puVar10;
      local_110 = puVar6;
      FUN_14257b080(param_1 + 0x88,local_108,&local_d0,0);
      iVar3 = *(int *)(puVar10 + 2);
      plVar8 = (longlong *)puVar10[1];
      if (iVar3 != 0) {
        do {
          if (*plVar8 != 0) {
            FShader::Release();
          }
          plVar8 = plVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar8 = (longlong *)puVar10[1];
      }
      if (plVar8 != (longlong *)0x0) {
        FMemory::Free(plVar8);
      }
      FMemory::operator_delete(puVar10,0x18);
      plVar4 = plVar4 + 1;
    } while (plVar4 != local_f8);
  }
  *(undefined4 *)(local_e8 + 8) = 0;
  if (*(int *)(local_e8 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_e8,0);
  }
  return;
}



// FUNCTION 14259f440 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<enum_EMaterialProperty,FMaterialAttributeDefintion>,TDefaultMapHashableKeyFuncs<enum_EMaterialProperty,FMaterialAttributeDefintion,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14259f57f;
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
LAB_14259f57f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x80 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x1d] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x1c] =
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



// FUNCTION 14259f650 FUN_14259f650 body=98 status=ok
// SIG undefined FUN_14259f650(void)

void FUN_14259f650(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x35c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if ((*(byte *)(param_1 + 0x364) & 1) != 0) {
      TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
      ::Remove(&DAT_146afe420 + (longlong)*(int *)(param_1 + 0x30) * 10,param_1 + 0x100);
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffe;
    }
    *(undefined1 *)(param_1 + 0x360) = 1;
    BeginCleanup(param_1 + 0xd8);
    return;
  }
  return;
}



// FUNCTION 14259f6c0 ReleaseDynamicRHI body=53 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FMaterialRenderProxy::ReleaseDynamicRHI(undefined8 param_1)

{
  undefined8 uVar1;
  
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(&DAT_146533cf0,param_1);
  FUN_14259b260(param_1);
  uVar1 = FExternalTextureRegistry::Get();
  FExternalTextureRegistry::RemoveMaterialRenderProxyReference(uVar1,param_1);
  return;
}



// FUNCTION 14259f700 FUN_14259f700 body=504 status=ok
// SIG undefined FUN_14259f700(void)

void FUN_14259f700(longlong param_1)

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
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar9 = (longlong *)0x0;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_14259f650();
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      return;
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
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
    *plVar9 = (longlong)&PTR_FUN_14510bf70;
    *(undefined1 *)(plVar9 + 3) = 0;
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
  }
  return;
}



// FUNCTION 14259f900 Remove body=333 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>,TDefaultMapHashableKeyFuncs<FMaterialShaderMapId,FMaterialShaderMap_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar5 = (longlong)(int)((int)param_1[9] - 1U & *param_2);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar6 = (int *)((longlong)plVar4 + lVar5 * 4);
  iVar1 = *(int *)((longlong)plVar4 + lVar5 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar5 = (longlong)iVar1 * 0x108 + *param_1;
    cVar3 = FMaterialShaderMapId::operator==(lVar5,param_2);
    if (cVar3 != '\0') break;
    piVar6 = (int *)(lVar5 + 0x100);
    iVar1 = *piVar6;
  }
  iVar1 = *piVar6;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar8 = (longlong)iVar1 * 0x108;
    lVar7 = (longlong)(int)(*(uint *)(lVar8 + 0x104 + lVar5) & (int)param_1[9] - 1U);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar4 + lVar7 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar7 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar6 = *(int *)(lVar8 + 0x100 + lVar5);
        break;
      }
      piVar6 = (int *)((longlong)iVar2 * 0x108 + 0x100 + lVar5);
      iVar2 = *piVar6;
    }
  }
  FMaterialShaderMapId::~FMaterialShaderMapId((longlong)iVar1 * 0x108 + *param_1);
  TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 14259fa50 RemovePendingMaterial body=658 status=ok
// SIG undefined RemovePendingMaterial(void)

void FMaterialShaderMap::RemovePendingMaterial(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  bool bVar10;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined4 local_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  undefined8 *local_68;
  undefined2 local_60;
  undefined8 *local_58;
  int iStack_50;
  uint uStack_4c;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 *local_30;
  
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  uStack_80 = 0;
  if (DAT_146533c78 != 0) {
    puVar8 = DAT_146533c70;
    if (DAT_146533c70 == (uint *)0x0) {
      puVar8 = (uint *)&DAT_146533c60;
    }
    uVar1 = *puVar8;
    uStack_80 = 0;
    local_98 = 0;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar2 = local_98 + 1;
      bVar10 = (int)(DAT_146533c78 + -1 + (DAT_146533c78 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar2;
      if (bVar10) goto LAB_14259fb0f;
      uVar1 = puVar8[lVar4 + 1];
    }
    uStack_94 = -uVar1 & uVar1;
    iVar2 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = 0x1f - iVar2;
    }
    iStack_84 = (uStack_80 - iVar2) + 0x1f;
    if (DAT_146533c78 < iStack_84) {
LAB_14259fb0f:
      iStack_84 = DAT_146533c78;
    }
  }
  iVar2 = iStack_84;
  auStack_40._4_4_ = iStack_84;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  local_60 = 0;
  local_58 = &DAT_146533c50;
  local_30 = &DAT_146533c50;
  iStack_50 = local_98;
  uStack_4c = uStack_94;
  puStack_48 = &DAT_146533c60;
  local_68 = &DAT_146533c50;
  local_88 = 0x46533c60;
  iStack_84 = 1;
  uStack_80 = 0xffffffff;
  iStack_7c = iVar2;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = 0x46533c50;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = 1;
  if (iVar2 < DAT_146533c78) {
    do {
      plVar7 = (longlong *)(DAT_146533c50 + 8 + (longlong)iStack_7c * 0x20);
      lVar4 = (longlong)(int)plVar7[1];
      if ((int)plVar7[1] != 0) {
        iVar9 = 0;
        lVar5 = 0;
        bVar10 = *(longlong *)*plVar7 != param_1;
        iVar2 = 0;
        do {
          lVar5 = lVar5 + 1;
          iVar6 = iVar2 + 1;
          if (lVar5 < lVar4) {
            plVar3 = (longlong *)(*plVar7 + lVar5 * 8);
            do {
              if (bVar10 != (*plVar3 != param_1)) break;
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + 1;
              plVar3 = plVar3 + 1;
            } while (lVar5 < lVar4);
          }
          if (bVar10 != false) {
            if (iVar9 != iVar2) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar7 + (longlong)iVar9 * 8),
                         (void *)(*plVar7 + (longlong)iVar2 * 8),(longlong)(iVar6 - iVar2) << 3);
            }
            iVar9 = iVar9 + (iVar6 - iVar2);
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar2 = iVar6;
        } while (lVar5 < lVar4);
        *(int *)(plVar7 + 1) = iVar9;
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < *(int *)(CONCAT44(iStack_84,local_88) + 0x18));
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,*(int *)(local_68 + 1) - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14259fcf0 RemoveUserDataOfClass body=254 status=ok
// SIG undefined RemoveUserDataOfClass(void)

void UMaterialInterface::RemoveUserDataOfClass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x40));
      if (lVar1 != 0) {
        if (param_2 != 0) {
          lVar4 = UAssetUserData::GetPrivateStaticClass();
          lVar7 = param_2;
          do {
            lVar5 = param_2;
            if (lVar7 == lVar4) goto LAB_14259fd50;
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
        lVar5 = 0;
LAB_14259fd50:
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar6 = *(int *)(param_1 + 0x48);
          iVar3 = (iVar6 - iVar9) + -1;
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 8),
                       (void *)(*(longlong *)(param_1 + 0x40) + (longlong)(iVar9 + 1) * 8),
                       (longlong)iVar3 << 3);
            iVar6 = *(int *)(param_1 + 0x48);
          }
          *(int *)(param_1 + 0x48) = iVar6 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
          return;
        }
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 14259fdf0 FUN_14259fdf0 body=72 status=ok
// SIG undefined FUN_14259fdf0(void)

undefined1 FUN_14259fdf0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = IsInParallelRenderingThread();
  if (((cVar1 == '\0') || (lVar2 = param_1[2], lVar2 == 0)) && (lVar2 = param_1[1], lVar2 == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x2e0))(param_1);
    return cVar1 != '\0';
  }
  return *(undefined1 *)(lVar2 + 0x34e);
}



// FUNCTION 14259fe40 FUN_14259fe40 body=247 status=ok
// SIG undefined FUN_14259fe40(void)

void FUN_14259fe40(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FArchive::FArchive(local_b8);
  local_b8[0] = &PTR_FUN_143f4a3a0;
  uVar1 = 0;
  local_18 = 0x7fffffffffffffff;
  local_28 = 0;
  local_20 = param_2;
  FArchive::SetIsLoading(local_b8,1);
  FArchive::SetIsPersistent(local_b8,0);
  uVar3 = uVar1;
  if (0 < (int)param_1[0x1d]) {
    do {
      FUN_1425a15a0(*(undefined8 *)(uVar1 + param_1[0x1c]),local_b8,1);
      (**(code **)(**(longlong **)(uVar1 + param_1[0x1c]) + 8))();
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_1[0x1d]);
  }
  FUN_1425a15a0(param_1,local_b8,1);
  (**(code **)(*param_1 + 8))(param_1);
  FArchive::~FArchive(local_b8);
  return;
}



// FUNCTION 14259ff40 FUN_14259ff40 body=83 status=ok
// SIG undefined FUN_14259ff40(void)

void FUN_14259ff40(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x20b,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::SaveShaderStableKeysInner");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x20b,L"Pure virtual not implemented (%s)",
             L"UMaterialInterface::SaveShaderStableKeysInner");
  return;
}



// FUNCTION 14259ffa0 FUN_14259ffa0 body=185 status=ok
// SIG undefined FUN_14259ffa0(void)

undefined8 FUN_14259ffa0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  byte local_res18 [16];
  
  cVar2 = FUN_1425a12f0(param_2,param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  local_res18[0] = *(byte *)(param_1 + 0x30) & 1;
  (**(code **)(*param_2 + 8))(param_2,local_res18);
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^ ((uint)local_res18[0] ^ *(uint *)(param_1 + 0x30)) & 1;
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x34,4);
  }
  return 1;
}



// FUNCTION 1425a0060 FUN_1425a0060 body=484 status=ok
// SIG undefined FUN_1425a0060(void)

void FUN_1425a0060(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  FUN_1425cd140();
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x150),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x150) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x151,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x151) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x152,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x152,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x152) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x154,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x154,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x154) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x156);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x157);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x158);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x159);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15a);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15b);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15c);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15d);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15e);
                    /* WARNING: Could not recover jumptable at 0x0001425a0240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15f);
  return;
}



// FUNCTION 1425a0250 FUN_1425a0250 body=1222 status=ok
// SIG undefined FUN_1425a0250(void)

void FUN_1425a0250(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined1 local_res8 [8];
  ulonglong local_res10;
  undefined1 local_res18;
  undefined4 local_res20 [2];
  ulonglong local_78;
  longlong *local_70;
  uint local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong *plVar6;
  
  local_res18 = param_3;
  FUN_1425a0720(param_1 + 0x100);
  plVar12 = (longlong *)param_2[1];
  local_res20[0] = *(undefined4 *)(param_1 + 0x30);
  if ((undefined4 *)plVar12[1] < (undefined4 *)*plVar12 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res20,4);
    }
  }
  else {
    local_res20[0] = *(undefined4 *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  plVar12 = (longlong *)0x0;
  local_60 = 0;
  local_58 = 0;
  *(undefined4 *)(param_1 + 0x30) = local_res20[0];
  FUN_14158ce90(param_2,&local_60);
  FUN_1425a0060(param_1 + 0x1f8,param_2);
  FUN_14158ce90(param_2,&local_60);
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    FUN_1425a15a0(param_1,param_2,param_3,0);
    uVar10 = (ulonglong)*(uint *)(param_1 + 0xf8);
    local_78 = local_78 & 0xffffffff00000000;
    if (0 < (int)*(uint *)(param_1 + 0xf8)) {
      plVar9 = *(longlong **)(param_1 + 0xf0);
      plVar6 = plVar12;
      do {
        if (*plVar9 != 0) {
          uVar5 = (int)plVar6 + 1;
          plVar6 = (longlong *)(ulonglong)uVar5;
          local_78 = CONCAT44(local_78._4_4_,uVar5);
        }
        plVar9 = plVar9 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    plVar9 = (longlong *)param_2[1];
    if ((undefined4 *)plVar9[1] < (undefined4 *)*plVar9 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_78,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_78,4);
      }
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)*plVar9);
      *plVar9 = *plVar9 + 4;
    }
    local_68 = 0;
    local_70 = (longlong *)0x0;
    local_64 = 0;
    plVar9 = plVar12;
    if ((*(int *)(param_1 + 0xe8) != 0) &&
       (TArray<void_*,FDefaultAllocator>::ResizeTo(&local_70,*(int *)(param_1 + 0xe8)),
       plVar9 = local_70, 0 < *(int *)(param_1 + 0xe8))) {
      lVar13 = 0;
      do {
        lVar11 = (longlong)(int)local_68;
        local_res10 = *(ulonglong *)(lVar13 + *(longlong *)(param_1 + 0xe0));
        uVar5 = local_68 + 1;
        if (local_64 < (int)uVar5) {
          uVar4 = local_68;
          local_68 = uVar5;
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_70,uVar4);
          plVar9 = local_70;
          uVar5 = local_68;
        }
        local_68 = uVar5;
        uVar5 = (int)plVar12 + 1;
        plVar12 = (longlong *)(ulonglong)uVar5;
        lVar13 = lVar13 + 8;
        plVar9[lVar11] = local_res10;
      } while ((int)uVar5 < *(int *)(param_1 + 0xe8));
    }
    uVar5 = local_68;
    FUN_14257d2c0(plVar9,(longlong)(int)local_68,local_res8[0],&local_res10);
    uVar3 = local_res18;
    if (0 < (int)uVar5) {
      uVar10 = (ulonglong)uVar5;
      plVar12 = plVar9;
      do {
        lVar13 = *plVar12;
        if (lVar13 != 0) {
          local_res10 = *(ulonglong *)(lVar13 + 0xd8);
          FUN_1419db920(param_2,&local_res10);
          FUN_1425a15a0(lVar13,param_2,uVar3,0);
        }
        plVar12 = plVar12 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_res8[0] = param_2[0xe] != 0;
    (**(code **)(*param_2 + 8))(param_2,local_res8);
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    plVar12 = (longlong *)(param_1 + 0xe0);
    puVar7 = (undefined8 *)*plVar12;
    for (iVar14 = *(int *)(param_1 + 0xe8); iVar14 != 0; iVar14 = iVar14 + -1) {
      FUN_14257f410(*puVar7);
      FMemory::Free(*puVar7);
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (*(int *)(param_1 + 0xec) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar12,0);
    }
    puVar7 = (undefined8 *)FUN_1419f19e0();
    for (puVar7 = (undefined8 *)*puVar7; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7
        ) {
      lVar13 = puVar7[2];
      if ((*(byte *)(lVar13 + 0x28) & 1) != 0) {
        uVar8 = FMemory::Malloc(0xe0,0);
        iVar14 = *(int *)(param_1 + 0xe8);
        *(int *)(param_1 + 0xe8) = iVar14 + 1;
        if (*(int *)(param_1 + 0xec) < iVar14 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar14);
        }
        *(undefined8 *)(*plVar12 + (longlong)iVar14 * 8) = uVar8;
        puVar2 = *(undefined8 **)(*plVar12 + (longlong)iVar14 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          *(undefined2 *)(puVar2 + 1) = 0x100;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          *(undefined4 *)(puVar2 + 6) = uVar1;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          *(undefined4 *)(puVar2 + 0xd) = 0xffffffff;
          *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
          puVar2[0xf] = 0;
          *(undefined4 *)(puVar2 + 0x10) = 0;
          puVar2[0x11] = 0;
          puVar2[0x12] = 0;
          puVar2[0x15] = 0;
          puVar2[0x16] = 0;
          *(undefined4 *)(puVar2 + 0x17) = 0xffffffff;
          *(undefined4 *)((longlong)puVar2 + 0xbc) = 0;
          puVar2[0x19] = 0;
          *(undefined4 *)(puVar2 + 0x1a) = 0;
          *puVar2 = &PTR__scalar_deleting_destructor__14510adf0;
          puVar2[0x1b] = lVar13;
        }
      }
    }
    iVar14 = 0;
    FUN_142598da0(param_1);
    uVar3 = local_res18;
    FUN_1425a15a0(param_1,param_2,local_res18,0);
    plVar12 = (longlong *)param_2[1];
    uVar10 = local_res10 >> 0x20;
    local_res10 = local_res10 & 0xffffffff00000000;
    if ((undefined4 *)plVar12[1] < (undefined4 *)*plVar12 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_res10,4);
      }
    }
    else {
      local_res10 = CONCAT44((int)uVar10,*(undefined4 *)*plVar12);
      *plVar12 = *plVar12 + 4;
    }
    if (0 < (int)local_res10) {
      do {
        local_78 = 0;
        FUN_1419db920(param_2,&local_78);
        FUN_1425a15a0(*(undefined8 *)
                       (*(longlong *)(param_1 + 0xf0) + (longlong)*(int *)(local_78 + 8) * 8),
                      param_2,uVar3,0);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)local_res10);
    }
    (**(code **)(*param_2 + 8))(param_2,local_res8);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425a0720 FUN_1425a0720 body=701 status=ok
// SIG undefined FUN_1425a0720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425a0720(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  longlong local_30 [2];
  longlong *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  plVar3 = (longlong *)param_2[1];
  local_34 = *(undefined4 *)(param_1 + 0x18);
  if ((undefined4 *)plVar3[1] < (undefined4 *)*plVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_34,4);
    }
  }
  else {
    local_34 = *(undefined4 *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  *(undefined4 *)(param_1 + 0x18) = local_34;
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_30,param_2);
  local_20 = local_30;
  local_18 = &local_20;
  FUN_141661f40(&local_20,param_1);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_30);
  plVar3 = (longlong *)param_2[1];
  puVar1 = (undefined4 *)*plVar3;
  if ((int)param_2[8] < 0x104) {
    if ((undefined4 *)plVar3[1] < (undefined4 *)((longlong)puVar1 + 1U)) {
      (**(code **)(*param_2 + 0x50))(param_2,local_38,1);
    }
    else {
      local_38[0] = *(undefined1 *)puVar1;
      *plVar3 = *plVar3 + 1;
    }
  }
  else {
    if ((undefined4 *)plVar3[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x10,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x14,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x14,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  FStaticParameterSet::Serialize(param_1 + 0x20,param_2);
  FUN_140910980(param_2,param_1 + 0x70);
  if (0xf2 < (int)param_2[8]) {
    FUN_140910980(param_2,param_1 + 0x80);
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0068);
  if (0x15 < iVar2) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_1464af950);
    if (iVar2 < 0xd) {
      local_30[0] = 0;
      local_30[1] = 0;
      FUN_140910980(param_2,local_30);
      if (local_30[0] != 0) {
        FMemory::Free();
      }
    }
  }
  FUN_142581460(param_2,param_1 + 0xa0);
  if (0x103 < (int)param_2[8]) {
    FUN_1425812a0(param_2,param_1 + 0xb0);
  }
  FUN_142581600(param_2,param_1 + 0xc0);
  if ((int)param_2[8] < 0x104) {
    plVar3 = local_30;
    local_30[0] = 0;
    local_30[1] = 0;
    local_20 = (longlong *)((ulonglong)local_20 & 0xffffffff00000000);
  }
  else {
    plVar3 = (longlong *)(param_1 + 0xd0);
  }
  FUN_141661e90(param_2,plVar3);
  if (0x12f < (int)param_2[8]) {
    FUN_141661e90(param_2,param_1 + 0xe4);
  }
  return;
}



// FUNCTION 1425a09e0 Serialize body=124 status=ok
// SIG undefined Serialize(void)

void FStaticParameterSet::Serialize(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  FUN_142580f00(param_2,param_1);
  FUN_142580a90(param_2,param_1 + 0x10);
  FUN_1425810d0(param_2,param_1 + 0x20);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464af950);
  if (10 < iVar1) {
    FUN_142580c60(param_2,param_1 + 0x30);
  }
  return;
}



// FUNCTION 1425a0a60 FUN_1425a0a60 body=260 status=ok
// SIG undefined FUN_1425a0a60(void)

undefined8 FUN_1425a0a60(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  byte local_res18 [16];
  
  cVar2 = FUN_1425a12f0(param_2,param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  local_res18[0] = *(byte *)(param_1 + 0x30) & 1;
  (**(code **)(*param_2 + 8))(param_2,local_res18);
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^ ((uint)local_res18[0] ^ *(uint *)(param_1 + 0x30)) & 1;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x34,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x38,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x38,4);
  }
  return 1;
}



// FUNCTION 1425a0b70 FUN_1425a0b70 body=345 status=ok
// SIG undefined FUN_1425a0b70(void)

undefined8 FUN_1425a0b70(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  byte local_res18 [16];
  
  cVar2 = FUN_1425a12f0(param_2,param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  local_res18[0] = *(byte *)(param_1 + 0x30) & 1;
  (**(code **)(*param_2 + 8))(param_2,local_res18);
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^ ((uint)local_res18[0] ^ *(uint *)(param_1 + 0x30)) & 1;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x34,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x38,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x3c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x3c,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x3c,4);
  }
  return 1;
}



// FUNCTION 1425a0cd0 FUN_1425a0cd0 body=1559 status=ok
// SIG undefined FUN_1425a0cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425a0cd0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  long lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  char local_188;
  byte local_187;
  byte local_186 [2];
  undefined4 local_184;
  undefined **local_180;
  longlong local_178;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
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
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FUN_141763960(param_1,param_2);
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    if ((int)param_2[8] < 0x104) {
      FMaterialResource::FMaterialResource(&local_180);
      FUN_14259c850(&local_180,param_2);
      if ((int)param_2[8] < 0x104) {
        plVar7 = (longlong *)param_2[1];
        local_184 = 0;
        if ((undefined4 *)plVar7[1] < (undefined4 *)*plVar7 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_184,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_184,4);
          }
        }
        else {
          local_184 = *(undefined4 *)*plVar7;
          *plVar7 = *plVar7 + 4;
        }
        local_188 = '\0';
        (**(code **)(*param_2 + 8))(param_2,&local_188);
        (**(code **)(*param_2 + 8))(param_2,&local_188);
      }
      local_148 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_140 = 0;
      local_138 = 1;
      local_134 = 2;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      FUN_1425a0720(&local_148,param_2);
      plVar7 = (longlong *)(param_1 + 0x138);
      if (plVar7 != &local_128) {
        local_198 = 0;
        FUN_14257a720(plVar7,local_128,local_120 & 0xffffffff,*(undefined4 *)(param_1 + 0x144));
      }
      if ((undefined8 *)(param_1 + 0x148) != &local_118) {
        local_198 = 0;
        FUN_14257a4c0((undefined8 *)(param_1 + 0x148),local_118,local_110 & 0xffffffff,
                      *(undefined4 *)(param_1 + 0x154));
      }
      if ((undefined8 *)(param_1 + 0x158) != &local_108) {
        local_198 = 0;
        FUN_14257a7e0((undefined8 *)(param_1 + 0x158),local_108,local_100 & 0xffffffff,
                      *(undefined4 *)(param_1 + 0x164));
      }
      iVar5 = *(int *)(param_1 + 0x140) + -1;
      if (-1 < iVar5) {
        lVar9 = (longlong)iVar5 * 0x28;
        lVar10 = (longlong)*(int *)(param_1 + 0x140) * 0x28;
        lVar11 = lVar9;
        do {
          lVar2 = *plVar7;
          if (*(char *)(lVar9 + 0x11 + lVar2) == '\0') {
            iVar1 = *(int *)(param_1 + 0x140);
            iVar6 = (iVar1 - iVar5) + -1;
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar2 + lVar11),(void *)(lVar10 + lVar2),(longlong)iVar6 * 0x28);
              iVar1 = *(int *)(param_1 + 0x140);
            }
            *(int *)(param_1 + 0x140) = iVar1 + -1;
            TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar7);
          }
          lVar10 = lVar10 + -0x28;
          lVar11 = lVar11 + -0x28;
          lVar9 = lVar9 + -0x28;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      iVar5 = *(int *)(param_1 + 0x150) + -1;
      if (-1 < iVar5) {
        lVar9 = (longlong)iVar5 * 0x28;
        lVar10 = (longlong)*(int *)(param_1 + 0x150) * 0x28;
        lVar11 = lVar9;
        do {
          lVar2 = *(longlong *)(param_1 + 0x148);
          if (*(char *)(lVar9 + 0x14 + lVar2) == '\0') {
            iVar1 = *(int *)(param_1 + 0x150);
            iVar6 = (iVar1 - iVar5) + -1;
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar2 + lVar11),(void *)(lVar10 + lVar2),(longlong)iVar6 * 0x28);
              iVar1 = *(int *)(param_1 + 0x150);
            }
            *(int *)(param_1 + 0x150) = iVar1 + -1;
            TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink
                      ((longlong *)(param_1 + 0x148));
          }
          lVar10 = lVar10 + -0x28;
          lVar11 = lVar11 + -0x28;
          lVar9 = lVar9 + -0x28;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      iVar5 = *(int *)(param_1 + 0x160) + -1;
      if (-1 < iVar5) {
        lVar9 = (longlong)iVar5 * 0x30;
        lVar10 = (longlong)*(int *)(param_1 + 0x160) * 0x30;
        lVar11 = lVar9;
        do {
          lVar2 = *(longlong *)(param_1 + 0x158);
          if (*(char *)(lVar9 + 0x10 + lVar2) == '\0') {
            iVar1 = *(int *)(param_1 + 0x160);
            iVar6 = (iVar1 - iVar5) + -1;
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar2 + lVar11),(void *)(lVar2 + lVar10),(longlong)iVar6 * 0x30);
              iVar1 = *(int *)(param_1 + 0x160);
            }
            *(int *)(param_1 + 0x160) = iVar1 + -1;
            TArray<FCloudFile,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x158));
          }
          lVar10 = lVar10 + -0x30;
          lVar11 = lVar11 + -0x30;
          lVar9 = lVar9 + -0x30;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      FMaterialShaderMapId::~FMaterialShaderMapId(&local_148);
      lVar8 = (long)&local_180;
      local_180 = &PTR_FUN_1450f76b8;
      FMaterialShaderMap::RemovePendingMaterial();
      AK::MemoryMgr::StartProfileThreadUsage(lVar8);
      if (local_178 != 0) {
        FUN_14259f650();
      }
    }
    else {
      iVar5 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
      if (iVar5 < 0x15) {
        FStaticParameterSet::Serialize(param_1 + 0x138,param_2);
      }
      FUN_142577fd0(0,param_2,param_1 + 0x178);
    }
  }
  if ((int)param_2[8] - 0x130U < 0x4e) {
    (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe0);
    local_188 = '\0';
    (**(code **)(*param_2 + 8))(param_2,&local_188);
    if (local_188 != '\0') {
      plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_1 + 0xe4);
      puVar3 = *(undefined4 **)plVar7[1];
      if ((undefined4 *)((undefined8 *)plVar7[1])[1] < puVar3 + 1) {
        (**(code **)(*plVar7 + 0x50))(plVar7,param_1 + 0xf4,4);
        if ((*(byte *)((longlong)plVar7 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar7,param_1 + 0xf4,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xf4) = *puVar3;
        *(longlong *)plVar7[1] = *(longlong *)plVar7[1] + 4;
      }
      if (0x139 < (int)param_2[8]) {
        plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_1 + 0xe5);
        puVar4 = *(undefined1 **)plVar7[1];
        if ((undefined1 *)((undefined8 *)plVar7[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar7 + 0x50))(plVar7,param_1 + 0xf8,1);
        }
        else {
          *(undefined1 *)(param_1 + 0xf8) = *puVar4;
          *(longlong *)plVar7[1] = *(longlong *)plVar7[1] + 1;
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,param_1 + 0xe6);
        puVar4 = *(undefined1 **)plVar7[1];
        if ((undefined1 *)((undefined8 *)plVar7[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar7 + 0x50))(plVar7,param_1 + 0xf9,1);
        }
        else {
          *(undefined1 *)(param_1 + 0xf9) = *puVar4;
          *(longlong *)plVar7[1] = *(longlong *)plVar7[1] + 1;
        }
        (**(code **)(*plVar7 + 8))(plVar7,param_1 + 0xe9);
        (**(code **)(*param_2 + 8))(param_2,&local_187);
        *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) & 0xfffffffe;
        *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) | local_187 & 1;
        iVar5 = (int)param_2[8];
        if (0x1c4 < iVar5) {
          (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe7);
          (**(code **)(*param_2 + 8))(param_2,local_186);
          *(uint *)(param_1 + 0xfc) =
               *(uint *)(param_1 + 0xfc) ^ ((uint)local_186[0] * 2 ^ *(uint *)(param_1 + 0xfc)) & 2;
          iVar5 = (int)param_2[8];
        }
        if (iVar5 < 0x17a) {
          if (*(char *)(param_1 + 0xf9) == '\0') {
            *(undefined1 *)(param_1 + 0xf9) = 1;
          }
          else if (*(char *)(param_1 + 0xf9) == '\x01') {
            *(undefined1 *)(param_1 + 0xf9) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1425a12f0 FUN_1425a12f0 body=680 status=ok
// SIG undefined FUN_1425a12f0(void)

undefined8 FUN_1425a12f0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 local_res18 [2];
  undefined2 *local_18;
  undefined8 local_10;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0058);
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0088);
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0058);
  if (iVar2 < 1) {
    return 0;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  iVar2 = FArchive::CustomVer(param_1,&DAT_1464b0088);
  if (iVar2 < 0x1f) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(param_1,&local_18);
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = local_18;
    }
    FName::FName(local_res18,puVar3,1);
    *(undefined8 *)(param_2 + 2) = local_res18[0];
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_2 + 2);
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,4);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 7,4);
    }
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (*(char *)((longlong)param_1 + 0x2a) < '\0') {
    (**(code **)(*param_1 + 0x40))(param_1,param_2 + 10);
  }
  return 1;
}



// FUNCTION 1425a15a0 FUN_1425a15a0 body=2684 status=ok
// SIG undefined FUN_1425a15a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425a15a0(longlong param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  longlong **pplVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  char local_258;
  undefined1 local_257;
  undefined1 local_256 [2];
  int local_254;
  int local_250;
  int local_24c;
  undefined8 local_248;
  longlong *local_240;
  ulonglong local_238;
  longlong local_230;
  longlong local_228;
  longlong *local_220;
  uint local_218;
  uint local_214;
  longlong *local_210;
  undefined8 uStack_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [24];
  longlong local_1d0;
  longlong local_1c0;
  longlong local_198;
  longlong local_180;
  longlong local_170;
  longlong local_148;
  longlong local_130;
  undefined1 local_118 [24];
  longlong local_100;
  longlong local_f0;
  longlong local_c8;
  longlong local_b0;
  longlong local_a0;
  longlong local_78;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_258 = param_4;
  local_257 = param_3;
  local_228 = param_1;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    plVar8 = (longlong *)(param_1 + 0x38);
    local_24c = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c);
    plVar11 = (longlong *)param_2[1];
    if ((int *)plVar11[1] < (int *)*plVar11 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_24c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_24c,4);
      }
    }
    else {
      local_24c = *(int *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    local_200 = (undefined8 *)0x0;
    local_1f8 = 0;
    TMapBase<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>_>
    ::GenerateKeyArray<FDefaultAllocator>(plVar8,&local_200);
    puVar12 = local_200;
    lVar9 = (longlong)(int)local_1f8;
    AlgoImpl::
    IntroSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>
              (local_200,lVar9,local_256[0],local_256);
    lVar13 = local_228;
    puVar10 = puVar12 + lVar9 * 2;
    puVar19 = puVar12;
    for (; puVar12 != puVar10; puVar12 = puVar12 + 2) {
      local_240 = (longlong *)*puVar12;
      local_210 = (longlong *)*puVar12;
      uStack_208 = puVar12[1];
      FUN_1419db7f0(param_2,&local_240);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar8,&local_238,&local_210);
      if ((int)local_238 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)(int)local_238 * 0x20 + *plVar8;
      }
      local_268 = param_3;
      FUN_141a0c900(lVar13,*(undefined8 *)(lVar9 + 0x10),param_2,param_4);
      puVar19 = local_200;
    }
    local_210 = (longlong *)0x0;
    uStack_208 = 0;
    FUN_1419f0970(local_228,&local_210,0);
    plVar8 = (longlong *)param_2[1];
    lVar13 = (longlong)(int)uStack_208;
    local_250 = (int)uStack_208;
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_250,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_250,4);
      }
    }
    else {
      local_250 = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    plVar8 = local_210;
    AlgoImpl::
    IntroSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>
              (local_210,lVar13,local_256[0],local_256);
    local_220 = plVar8 + lVar13;
    local_240 = plVar8;
    plVar11 = plVar8;
    if (plVar8 != local_220) {
      do {
        plVar11 = (longlong *)*plVar8;
        local_230 = *plVar11;
        local_240 = plVar8;
        FUN_1419db9e0(param_2,&local_230);
        lVar13 = local_230;
        plVar16 = (longlong *)param_2[1];
        local_254 = *(int *)(local_230 + 0x18);
        if ((int *)plVar16[1] < (int *)*plVar16 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_254,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_254,4);
          }
        }
        else {
          local_254 = *(int *)*plVar16;
          *plVar16 = *plVar16 + 4;
        }
        cVar6 = local_258;
        iVar17 = 0;
        if (0 < local_254) {
          lVar9 = 0;
          do {
            iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar9) + 0x30);
            if (iVar2 == 0) {
              lVar14 = plVar11[1];
            }
            else if (iVar2 == 1) {
              lVar14 = plVar11[2];
            }
            else if (iVar2 == 2) {
              lVar14 = plVar11[3];
            }
            else if (iVar2 == 3) {
              lVar14 = plVar11[5];
            }
            else if (iVar2 == 4) {
              lVar14 = plVar11[4];
            }
            else {
              lVar14 = 0;
            }
            local_1f0 = *(undefined8 *)(lVar14 + 0x90);
            FUN_1419db7f0(param_2,&local_1f0);
            local_238 = (**(code **)(*param_2 + 0x90))(param_2);
            plVar8 = (longlong *)param_2[1];
            if ((ulonglong *)plVar8[1] < (ulonglong *)*plVar8 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_238,8);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,&local_238,8);
              }
            }
            else {
              local_238 = *(ulonglong *)*plVar8;
              *plVar8 = *plVar8 + 8;
            }
            if (cVar6 != '\0') {
              uVar7 = FUN_1419ef3f0(lVar14,local_1e8);
              FUN_1419d5e80(local_118,uVar7);
              FUN_1419e0690(param_2,local_118);
              if (local_60 != 0) {
                FMemory::Free();
              }
              if (local_78 != 0) {
                FMemory::Free();
              }
              if (local_a0 != 0) {
                FMemory::Free();
              }
              if (local_b0 != 0) {
                FMemory::Free();
              }
              if (local_c8 != 0) {
                FMemory::Free();
              }
              if (local_f0 != 0) {
                FMemory::Free();
              }
              if (local_100 != 0) {
                FMemory::Free();
              }
            }
            FUN_141a0b300(lVar14,param_2,local_257);
            local_248 = (**(code **)(*param_2 + 0x90))(param_2);
            (**(code **)(*param_2 + 0xa8))(param_2,local_238);
            plVar8 = (longlong *)param_2[1];
            if ((undefined8 *)plVar8[1] < (undefined8 *)*plVar8 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_248,8);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,&local_248,8);
              }
            }
            else {
              local_248 = *(undefined8 *)*plVar8;
              *plVar8 = *plVar8 + 8;
            }
            (**(code **)(*param_2 + 0xa8))(param_2,local_248);
            iVar17 = iVar17 + 1;
            lVar9 = lVar9 + 8;
            plVar8 = local_240;
          } while (iVar17 < local_254);
        }
        plVar8 = plVar8 + 1;
        plVar11 = local_210;
        puVar19 = local_200;
        param_3 = local_257;
        local_240 = plVar8;
      } while (plVar8 != local_220);
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
    if (puVar19 != (undefined8 *)0x0) {
      FMemory::Free(puVar19);
    }
  }
  lVar13 = local_228;
  cVar6 = local_258;
  iVar17 = 0;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined1 *)(local_228 + 9) = 0;
    plVar8 = (longlong *)param_2[1];
    local_254 = 0;
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_254,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_254,4);
      }
    }
    else {
      local_254 = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    plVar8 = (longlong *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x1c) < local_254) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,local_254);
    }
    if (0 < local_254) {
      do {
        lVar9 = 0;
        local_240 = (longlong *)0x0;
        FUN_1419db7f0(param_2,&local_240);
        plVar16 = local_240;
        plVar11 = (longlong *)param_2[1];
        local_248 = 0;
        if ((undefined8 *)plVar11[1] < (undefined8 *)*plVar11 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_248,8);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_248,8);
          }
        }
        else {
          local_248 = *(undefined8 *)*plVar11;
          *plVar11 = *plVar11 + 8;
        }
        FUN_1419d6270(local_1e8);
        if (cVar6 != '\0') {
          FUN_1419e0690(param_2,local_1e8);
        }
        if ((plVar16 == (longlong *)0x0) ||
           ((cVar6 != '\0' && (cVar5 = FUN_1419fead0(local_1e8), cVar5 == '\0')))) {
          (**(code **)(*param_2 + 0xa8))(param_2,local_248);
        }
        else {
          lVar9 = FUN_1419e6880(plVar16);
          FUN_141a0b300(lVar9,param_2,param_3);
        }
        if (local_130 != 0) {
          FMemory::Free();
        }
        if (local_148 != 0) {
          FMemory::Free();
        }
        if (local_170 != 0) {
          FMemory::Free();
        }
        if (local_180 != 0) {
          FMemory::Free();
        }
        if (local_198 != 0) {
          FMemory::Free();
        }
        if (local_1c0 != 0) {
          FMemory::Free();
        }
        if (local_1d0 != 0) {
          FMemory::Free();
        }
        if (lVar9 != 0) {
          iVar2 = *(int *)(lVar13 + 0x18);
          *(int *)(lVar13 + 0x18) = iVar2 + 1;
          if (*(int *)(lVar13 + 0x1c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar2);
          }
          *(longlong *)(*plVar8 + (longlong)iVar2 * 8) = lVar9;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < local_254);
    }
    plVar8 = (longlong *)param_2[1];
    local_24c = 0;
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_24c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_24c,4);
      }
    }
    else {
      local_24c = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    local_238 = local_238 & 0xffffffff00000000;
    if (0 < local_24c) {
      do {
        plVar11 = (longlong *)0x0;
        local_230 = 0;
        FUN_1419db9e0(param_2,&local_230);
        plVar8 = (longlong *)param_2[1];
        local_250 = 0;
        if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_250,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_250,4);
          }
        }
        else {
          local_250 = *(int *)*plVar8;
          *plVar8 = *plVar8 + 4;
        }
        local_220 = (longlong *)0x0;
        local_214 = 0;
        plVar8 = plVar11;
        plVar16 = plVar11;
        plVar15 = plVar11;
        if (0 < local_250) {
          do {
            lVar13 = 0;
            local_240 = (longlong *)0x0;
            FUN_1419db7f0(param_2,&local_240);
            plVar4 = local_240;
            plVar3 = (longlong *)param_2[1];
            local_248 = 0;
            if ((undefined8 *)plVar3[1] < (undefined8 *)*plVar3 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_248,8);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,&local_248,8);
              }
            }
            else {
              local_248 = *(undefined8 *)*plVar3;
              *plVar3 = *plVar3 + 8;
            }
            FUN_1419d6270(local_1e8);
            if (local_258 != '\0') {
              FUN_1419e0690(param_2,local_1e8);
            }
            if ((plVar4 == (longlong *)0x0) ||
               ((local_258 != '\0' && (cVar6 = FUN_1419fead0(local_1e8), cVar6 == '\0')))) {
              (**(code **)(*param_2 + 0xa8))(param_2,local_248);
            }
            else {
              lVar13 = FUN_1419e6880(plVar4);
              FUN_141a0b300(lVar13,param_2,local_257);
            }
            if (local_130 != 0) {
              FMemory::Free();
            }
            if (local_148 != 0) {
              FMemory::Free();
            }
            if (local_170 != 0) {
              FMemory::Free();
            }
            if (local_180 != 0) {
              FMemory::Free();
            }
            if (local_198 != 0) {
              FMemory::Free();
            }
            if (local_1c0 != 0) {
              FMemory::Free();
            }
            if (local_1d0 != 0) {
              FMemory::Free();
            }
            if (lVar13 != 0) {
              FUN_1419e2a40(lVar13);
              iVar17 = (int)plVar11;
              local_218 = iVar17 + 1;
              if ((int)plVar8 < (int)local_218) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_220,plVar11);
                plVar8 = (longlong *)(ulonglong)local_214;
                plVar16 = local_220;
              }
              plVar11 = (longlong *)(ulonglong)local_218;
              plVar16[iVar17] = lVar13;
            }
            uVar18 = (int)plVar15 + 1;
            plVar15 = (longlong *)(ulonglong)uVar18;
          } while ((int)uVar18 < local_250);
        }
        if ((local_230 != 0) && ((int)plVar11 == *(int *)(local_230 + 0x18))) {
          plVar8 = (longlong *)operator_new(0x18);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            *plVar8 = 0;
            plVar8[1] = 0;
            plVar8[2] = 0;
          }
          pplVar1 = (longlong **)(plVar8 + 1);
          *plVar8 = local_230;
          if (pplVar1 != &local_220) {
            iVar17 = (int)plVar8[2];
            plVar15 = *pplVar1;
            if (iVar17 != 0) {
              do {
                if (*plVar15 != 0) {
                  FShader::Release();
                }
                plVar15 = plVar15 + 1;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
              plVar15 = *pplVar1;
            }
            if (plVar15 != (longlong *)0x0) {
              FMemory::Free(plVar15);
            }
            uVar18 = local_214;
            *pplVar1 = plVar16;
            plVar16 = (longlong *)0x0;
            *(int *)(plVar8 + 2) = (int)plVar11;
            plVar11 = (longlong *)0x0;
            local_214 = 0;
            *(uint *)((longlong)plVar8 + 0x14) = uVar18;
          }
          lVar13 = local_228;
          iVar17 = *(int *)(local_228 + 0x28);
          *(int *)(local_228 + 0x28) = iVar17 + 1;
          if (*(int *)(local_228 + 0x2c) < iVar17 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (local_228 + 0x20,iVar17);
          }
          *(longlong **)(*(longlong *)(lVar13 + 0x20) + (longlong)iVar17 * 8) = plVar8;
        }
        uVar18 = (uint)plVar11;
        plVar8 = plVar16;
        while (uVar18 != 0) {
          if (*plVar8 != 0) {
            FShader::Release();
          }
          plVar8 = plVar8 + 1;
          uVar18 = (int)plVar11 - 1;
          plVar11 = (longlong *)(ulonglong)uVar18;
        }
        if (plVar16 != (longlong *)0x0) {
          FMemory::Free(plVar16);
        }
        iVar17 = (int)local_238 + 1;
        local_238 = CONCAT44(local_238._4_4_,iVar17);
      } while (iVar17 < local_24c);
    }
  }
  return;
}



// FUNCTION 1425a2020 FUN_1425a2020 body=490 status=ok
// SIG undefined FUN_1425a2020(void)

void FUN_1425a2020(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  char local_res10 [8];
  char local_res18 [8];
  longlong local_18 [2];
  
  local_res10[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if (local_res10[0] == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_18);
    puVar3 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x382,
               L"This platform requires cooked packages, and shaders were not cooked into this material %s."
               ,puVar4);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_18);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar2;
    }
    FDebug::AssertFailed
              (&DAT_14510387c,"Unknown",0x382,
               L"This platform requires cooked packages, and shaders were not cooked into this material %s."
               ,puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_res10[0] == '\0') {
      return;
    }
  }
  if (param_2[0xe] == 0) {
    local_res18[0] = '\0';
    (**(code **)(*param_2 + 8))(param_2,local_res18);
    if (local_res18[0] != '\0') {
      puVar2 = (undefined8 *)operator_new(0x368);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        FUN_14257e1d0(puVar2,0x20);
        *puVar2 = &PTR_FUN_14510ae08;
        puVar2[0x1b] = &PTR_LAB_14510ae20;
        *(int *)((longlong)puVar2 + 0x35c) = *(int *)((longlong)puVar2 + 0x35c) + 1;
      }
      FUN_1425a0250(puVar2,param_2,1);
      lVar1 = param_1[1];
      param_1[1] = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(int *)((longlong)puVar2 + 0x35c) = *(int *)((longlong)puVar2 + 0x35c) + 1;
      }
      if (lVar1 != 0) {
        FUN_14259f650();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_14259f650(puVar2);
      }
    }
  }
  else {
    if ((param_1[1] == 0) || ((*(uint *)(param_1[1] + 0x364) >> 2 & 1) == 0)) {
      local_res18[0] = '\0';
    }
    else {
      local_res18[0] = '\x01';
    }
    (**(code **)(*param_2 + 8))(param_2,local_res18);
    if (local_res18[0] != '\0') {
      FUN_1425a0250(param_1[1],param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1425a2210 FUN_1425a2210 body=320 status=ok
// SIG undefined FUN_1425a2210(void)

void FUN_1425a2210(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  piVar5 = (int *)*plVar1;
  iVar3 = *(int *)(param_1 + 0xd8);
  piVar2 = piVar5 + (longlong)iVar3 * 0xc;
  if (piVar5 != piVar2) {
    do {
      if ((((*piVar5 == *param_2) && (piVar5[1] == param_2[1])) &&
          (*(char *)((longlong)piVar5 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar5[3] == param_2[3])) goto LAB_1425a2314;
      piVar5 = piVar5 + 0xc;
    } while (piVar5 != piVar2);
  }
  *(int *)(param_1 + 0xd8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xdc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  piVar5 = (int *)(*plVar1 + (longlong)iVar3 * 0x30);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5[2] = 0x202ffff;
    piVar5[0] = 0;
    piVar5[1] = 0;
    piVar5[3] = -1;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[7] = 0;
    piVar5[8] = 0;
    piVar5[9] = 0;
    piVar5[10] = 0;
  }
  *(undefined8 *)piVar5 = *(undefined8 *)param_2;
  *(short *)(piVar5 + 2) = (short)param_2[2];
  *(undefined1 *)((longlong)piVar5 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)piVar5 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  piVar5[3] = param_2[3];
  piVar5[9] = 0;
  piVar5[10] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  lVar4 = UEngine::GetTinyFont();
  if (*(longlong *)(piVar5 + 4) != lVar4) {
    UEngine::GetTinyFont();
  }
  piVar5[6] = param_4 + -1;
LAB_1425a2314:
  if ((*(longlong *)(piVar5 + 4) != param_3) || (piVar5[6] != param_4)) {
    *(longlong *)(piVar5 + 4) = param_3;
    piVar5[6] = param_4;
    FUN_14257bd20(param_1,piVar5);
    FUN_142587880(param_1);
  }
  return;
}



// FUNCTION 1425a2350 FUN_1425a2350 body=309 status=ok
// SIG undefined FUN_1425a2350(void)

void FUN_1425a2350(longlong *param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_5
                  )

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_38;
  undefined8 local_30;
  
  uVar4 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_38,3,0,4,1);
  uVar6 = uVar4;
  if (0 < (int)local_30) {
    do {
      plVar1 = *(longlong **)(uVar4 + local_38);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && ((**(code **)(*plVar1 + 0x2e8))(plVar1,param_4,param_5), param_2 != '\0')) {
          *(byte *)((longlong)plVar1 + 0xc4) = *(byte *)((longlong)plVar1 + 0xc4) & 0xf7;
          *(byte *)((longlong)plVar1 + 0xc4) = *(byte *)((longlong)plVar1 + 0xc4) | param_3 << 3;
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)local_30);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1425a2490 FUN_1425a2490 body=389 status=ok
// SIG undefined FUN_1425a2490(void)

void FUN_1425a2490(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0x90) == param_2)) {
    return;
  }
  if (param_2 != 0) {
    lVar2 = FUN_1429b6de0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_2;
    if (bVar1) {
      while (lVar2 != param_1) {
        if (lVar2 == 0) goto LAB_1425a2564;
        lVar3 = FUN_1429b6de0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar2 = *(longlong *)(lVar2 + 0x90);
        }
        else {
          lVar2 = 0;
        }
      }
      if (lVar2 != 0) goto LAB_1425a25f8;
    }
LAB_1425a2564:
    if (param_2 != 0) {
      lVar2 = ACineCameraActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar2 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_1425a25f8;
      }
    }
  }
  *(longlong *)(param_1 + 0x90) = param_2;
  if (param_2 != 0) {
    FUN_1417510e0(param_2);
  }
  if (param_3 != '\0') {
    FUN_1425990a0(param_1);
    return;
  }
LAB_1425a25f8:
  FUN_142598e80(param_1);
  return;
}



// FUNCTION 1425a2620 FUN_1425a2620 body=8 status=ok
// SIG undefined FUN_1425a2620(void)

void FUN_1425a2620(undefined8 param_1,undefined8 param_2)

{
  FUN_1425a2490(param_1,param_2,0);
  return;
}



// FUNCTION 1425a2630 FUN_1425a2630 body=280 status=ok
// SIG undefined FUN_1425a2630(void)

void FUN_1425a2630(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  
  *(uint *)(param_2 + 2) =
       *(uint *)(param_2 + 2) ^ (*(uint *)(param_2 + 2) ^ *(uint *)(param_1 + 2)) & 1;
  uVar1 = (*(uint *)(param_2 + 2) ^ *(uint *)(param_1 + 2)) & 2 ^ *(uint *)(param_2 + 2);
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_1 + 2)) & 4 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_1 + 2)) & 8 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_1 + 2)) & 0x10 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_1 + 2)) & 0x20 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_1 + 2)) & 0x40 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  *param_2 = *param_1;
  uVar1 = (*(uint *)(param_1 + 2) >> 2 ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (*(int *)(param_1 + 2) << 9 ^ uVar1) & 0x80000 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (*(int *)(param_1 + 2) << 10 ^ uVar1) & 0x200000 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (*(int *)(param_1 + 2) << 10 ^ uVar1) & 0x400000 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (*(int *)(param_1 + 2) << 10 ^ uVar1) & 0x800000 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_1 + 2)) & 0x4000 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar1 = (*(int *)(param_1 + 2) << 10 ^ uVar1) & 0x2000000 ^ uVar1;
  *(uint *)(param_2 + 2) = uVar1;
  *(uint *)(param_2 + 2) = (*(int *)(param_1 + 2) << 0xc ^ uVar1) & 0x10000000 ^ uVar1;
  return;
}



// FUNCTION 1425a2750 FUN_1425a2750 body=41 status=ok
// SIG undefined FUN_1425a2750(void)

void FUN_1425a2750(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10 = 0x202ffff;
  local_18 = param_2;
  FUN_1425a2780(param_1,&local_18);
  return;
}



// FUNCTION 1425a2780 FUN_1425a2780 body=303 status=ok
// SIG undefined FUN_1425a2780(void)

void FUN_1425a2780(longlong param_1,int *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  iVar3 = *(int *)(param_1 + 0xa8);
  piVar4 = (int *)*plVar1;
  piVar2 = piVar4 + (longlong)iVar3 * 10;
  if (piVar4 != piVar2) {
    do {
      if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) &&
          (*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar4[3] == param_2[3])) goto LAB_1425a287a;
      piVar4 = piVar4 + 10;
    } while (piVar4 != piVar2);
  }
  *(int *)(param_1 + 0xa8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xac) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  piVar4 = (int *)0x0;
  piVar2 = (int *)(*plVar1 + (longlong)iVar3 * 0x28);
  if (piVar2 != (int *)0x0) {
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 0x202ffff;
    piVar2[3] = -1;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    piVar2[8] = 0;
    piVar4 = piVar2;
  }
  *(undefined8 *)piVar4 = *(undefined8 *)param_2;
  *(short *)(piVar4 + 2) = (short)param_2[2];
  *(undefined1 *)((longlong)piVar4 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)piVar4 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  piVar4[3] = param_2[3];
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[4] = (int)(param_3 - 1.0);
LAB_1425a287a:
  if (param_3 != (float)piVar4[4]) {
    piVar4[4] = (int)param_3;
    FUN_14257c030(param_1);
    FUN_142587880(param_1);
  }
  return;
}



// FUNCTION 1425a28b0 FUN_1425a28b0 body=395 status=ok
// SIG undefined FUN_1425a28b0(void)

void FUN_1425a28b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = 0x202ffff;
  local_34 = 0xffffffff;
  local_res18 = 0;
  local_40 = param_2;
  FUN_142597510(param_1,&local_40,&local_res18,0);
  if ((param_3 != 0) && (local_res18 != 0)) {
    lVar2 = *(longlong *)(param_3 + 0x18);
    lVar3 = *(longlong *)(local_res18 + 0x18);
    if (lVar2 != lVar3) {
      plVar1 = (longlong *)(param_1 + 0x1e0);
      local_res20 = lVar2;
      if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
        lVar6 = *(longlong *)(param_1 + 0x220);
        if (*(longlong *)(param_1 + 0x220) == 0) {
          lVar6 = param_1 + 0x218;
        }
        iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                 (longlong)*(int *)(param_1 + 0x228) - 1U) * 4);
        if (iVar4 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar4 * 0x20 + *plVar1);
            if (*plVar7 == lVar2) {
              if ((iVar4 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_1425a29c2;
              break;
            }
            iVar4 = (int)plVar7[3];
          } while (iVar4 != -1);
        }
      }
      local_48 = &local_res20;
      FUN_140d1c9b0(plVar1,local_res10,&local_48,0);
      plVar7 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar1);
LAB_1425a29c2:
      iVar4 = (int)plVar7[2];
      plVar1 = (longlong *)plVar7[1];
      for (plVar5 = plVar1; plVar5 != plVar1 + iVar4; plVar5 = plVar5 + 1) {
        if (*plVar5 == lVar3) {
          if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) goto LAB_1425a2a22;
          break;
        }
      }
      *(int *)(plVar7 + 2) = iVar4 + 1;
      if (*(int *)((longlong)plVar7 + 0x14) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 1);
      }
      *(longlong *)((longlong)iVar4 * 8 + plVar7[1]) = lVar3;
    }
  }
LAB_1425a2a22:
  FUN_1425a2a40(param_1,&local_40,param_3);
  return;
}



// FUNCTION 1425a2a40 FUN_1425a2a40 body=406 status=ok
// SIG undefined FUN_1425a2a40(void)

void FUN_1425a2a40(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  iVar3 = *(int *)(param_1 + 200);
  piVar6 = (int *)*plVar1;
  piVar2 = piVar6 + (longlong)iVar3 * 10;
  if (piVar6 != piVar2) {
    do {
      if ((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((bVar4) && (*(char *)((longlong)piVar6 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar6[3] == param_2[3])) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_1425a2b65;
      piVar6 = piVar6 + 10;
    } while (piVar6 != piVar2);
  }
  *(int *)(param_1 + 200) = iVar3 + 1;
  if (*(int *)(param_1 + 0xcc) < iVar3 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  piVar6 = (int *)(*plVar1 + (longlong)iVar3 * 0x28);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6[2] = 0x202ffff;
    piVar6[0] = 0;
    piVar6[1] = 0;
    piVar6[3] = -1;
    piVar6[4] = 0;
    piVar6[5] = 0;
    piVar6[6] = 0;
    piVar6[7] = 0;
    piVar6[8] = 0;
    piVar6[9] = 0;
  }
  *(undefined8 *)piVar6 = *(undefined8 *)param_2;
  *(short *)(piVar6 + 2) = (short)param_2[2];
  *(undefined1 *)((longlong)piVar6 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)piVar6 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  piVar6[3] = param_2[3];
  piVar6[8] = 0;
  piVar6[9] = 0;
  piVar6[6] = 0;
  piVar6[7] = 0;
  lVar5 = *(longlong *)(DAT_146b17150 + 0x308);
  if (param_3 == *(longlong *)(DAT_146b17150 + 0x308)) {
    lVar5 = 0;
  }
  *(longlong *)(piVar6 + 4) = lVar5;
LAB_1425a2b65:
  if ((*(longlong *)(piVar6 + 4) != param_3) && (param_3 != 0)) {
    lVar5 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(longlong *)(piVar6 + 4) = param_3;
      FUN_14257c310(param_1,piVar6);
      FUN_142587880(param_1);
    }
  }
  return;
}



// FUNCTION 1425a2be0 FUN_1425a2be0 body=55 status=ok
// SIG undefined FUN_1425a2be0(void)

void FUN_1425a2be0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = 0x202ffff;
  local_1c = 0xffffffff;
  local_28 = param_2;
  FUN_1425a2c20(local_18,&local_28,&local_18);
  return;
}



// FUNCTION 1425a2c20 FUN_1425a2c20 body=339 status=ok
// SIG undefined FUN_1425a2c20(void)

void FUN_1425a2c20(longlong param_1,int *param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  piVar7 = (int *)*plVar1;
  iVar4 = *(int *)(param_1 + 0xb8);
  piVar2 = piVar7 + (longlong)iVar4 * 0xc;
  if (piVar7 != piVar2) {
    do {
      if ((((*piVar7 == *param_2) && (piVar7[1] == param_2[1])) &&
          (*(char *)((longlong)piVar7 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar7[3] == param_2[3])) goto LAB_1425a2d1e;
      piVar7 = piVar7 + 0xc;
    } while (piVar7 != piVar2);
  }
  *(int *)(param_1 + 0xb8) = iVar4 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar4 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  piVar7 = (int *)(*plVar1 + (longlong)iVar4 * 0x30);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7[2] = 0x202ffff;
    piVar7[0] = 0;
    piVar7[1] = 0;
    piVar7[3] = -1;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[10] = 0;
    piVar7[0xb] = 0;
  }
  fVar3 = param_3[2];
  *(undefined8 *)piVar7 = *(undefined8 *)param_2;
  *(short *)(piVar7 + 2) = (short)param_2[2];
  *(undefined1 *)((longlong)piVar7 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)piVar7 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  piVar7[3] = param_2[3];
  piVar7[10] = 0;
  piVar7[0xb] = 0;
  piVar7[8] = 0;
  piVar7[9] = 0;
  piVar7[6] = (int)(fVar3 - 1.0);
LAB_1425a2d1e:
  if (((*param_3 != (float)piVar7[4]) || (param_3[1] != (float)piVar7[5])) ||
     ((param_3[2] != (float)piVar7[6] || (param_3[3] != (float)piVar7[7])))) {
    fVar3 = param_3[1];
    fVar5 = param_3[2];
    fVar6 = param_3[3];
    piVar7[4] = (int)*param_3;
    piVar7[5] = (int)fVar3;
    piVar7[6] = (int)fVar5;
    piVar7[7] = (int)fVar6;
    FUN_14257c5e0(param_1);
    FUN_142587880(param_1);
  }
  return;
}



// FUNCTION 1425a2d80 FUN_1425a2d80 body=611 status=ok
// SIG undefined FUN_1425a2d80(void)

void FUN_1425a2d80(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x38) = 1;
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
          goto LAB_1425a2f37;
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
LAB_1425a2f37:
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



// FUNCTION 1425a2ff0 FUN_1425a2ff0 body=611 status=ok
// SIG undefined FUN_1425a2ff0(void)

void FUN_1425a2ff0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x48) = 1;
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
          goto LAB_1425a31a7;
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
LAB_1425a31a7:
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



// FUNCTION 1425a32e0 FUN_1425a32e0 body=64 status=ok
// SIG undefined FUN_1425a32e0(void)

uint FUN_1425a32e0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xea) == '\0')) {
    bVar2 = (**(code **)(*plVar1 + 0x478))(plVar1);
    return (uint)bVar2;
  }
  return ~(*(uint *)(param_1 + 0x108) >> 3) & 1;
}



// FUNCTION 1425a3340 FUN_1425a3340 body=62 status=ok
// SIG undefined FUN_1425a3340(void)

uint FUN_1425a3340(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xeb) == '\0')) {
    bVar2 = (**(code **)(*plVar1 + 0x480))(plVar1);
    return (uint)bVar2;
  }
  return *(uint *)(param_1 + 0x108) >> 4 & 1;
}



// FUNCTION 1425a33e0 FUN_1425a33e0 body=644 status=ok
// SIG undefined FUN_1425a33e0(void)

longlong * FUN_1425a33e0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  short *_Src;
  size_t _Size;
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  longlong lVar4;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FString::AppendInt(&local_68,*(undefined4 *)(param_1 + 0xc));
  local_78 = (void *)0x0;
  local_70 = 0;
  FString::AppendInt(&local_78,*(undefined1 *)(param_1 + 0xb));
  puVar1 = (undefined8 *)FName::ToString(param_1,local_48);
  pvVar8 = local_78;
  iVar2 = 0;
  iVar6 = (int)local_70;
  if (((*(int *)(puVar1 + 1) == 0) || (_Src = (short *)*puVar1, _Src == (short *)0x0)) ||
     (*_Src == 0)) {
    iVar7 = local_70._4_4_;
    local_78 = (void *)0x0;
    local_70 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (_Src[lVar3] != 0);
    if ((int)local_70 != 0) {
      iVar2 = (int)local_70 + -1;
    }
    local_50 = (int)lVar4 + 2 + iVar2;
    local_58 = (void *)0x0;
    local_4c = 0;
    if (0 < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    iVar7 = local_4c;
    iVar6 = local_50;
    pvVar8 = local_58;
    _Size = (longlong)(int)lVar3 * 2;
    _guard_xfg_dispatch_icall_nop(local_58,_Src,_Size);
    _guard_xfg_dispatch_icall_nop((void *)(_Size + (longlong)pvVar8),local_78,(longlong)iVar2 * 2);
    *(undefined2 *)((longlong)pvVar8 + ((longlong)iVar2 + (longlong)(int)lVar3) * 2) = 0;
  }
  if (iVar6 < 2) {
    *param_2 = (longlong)local_68;
    *(int *)(param_2 + 1) = (int)local_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  else {
    iVar2 = 0;
    if ((int)local_60 != 0) {
      iVar2 = (int)local_60 + -1;
    }
    if ((iVar6 != 0) || (iVar5 = 1, iVar2 == 0)) {
      iVar5 = 0;
    }
    local_58 = pvVar8;
    local_50 = iVar6;
    local_4c = iVar7;
    if (iVar7 < iVar6 + iVar5 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar6 = local_50;
    pvVar8 = local_68;
    pvVar9 = local_58;
    iVar7 = local_50;
    iVar5 = local_4c;
    if (iVar2 != 0) {
      lVar3 = (longlong)local_50;
      local_50 = local_50 + (uint)(local_50 == 0) + iVar2;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar6);
      }
      iVar5 = local_4c;
      iVar7 = local_50;
      pvVar9 = local_58;
      _Dst = (void *)((longlong)local_58 + (lVar3 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar8,(longlong)iVar2 * 2);
      *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = (longlong)pvVar9;
    *(int *)(param_2 + 1) = iVar7;
    *(int *)((longlong)param_2 + 0xc) = iVar5;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1425a3670 FUN_1425a3670 body=2637 status=ok
// SIG undefined FUN_1425a3670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425a3670(void)

{
  ulonglong *puVar1;
  int *piVar2;
  byte bVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  bool bVar23;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined1 local_res18 [8];
  int local_res20;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  int iStack_194;
  longlong local_190;
  int local_188;
  uint uStack_184;
  undefined *puStack_180;
  undefined4 local_178;
  undefined8 uStack_174;
  int iStack_16c;
  int local_168;
  uint uStack_164;
  undefined *puStack_160;
  undefined4 local_158;
  undefined8 uStack_154;
  int iStack_14c;
  undefined8 *local_148;
  undefined8 local_140;
  longlong local_138;
  char local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  int local_100;
  int iStack_fc;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  int local_dc;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong **local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined *local_a8;
  uint *puStack_a0;
  undefined1 *local_98;
  longlong ***ppplStack_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  if (DAT_146533cf8 == DAT_146533d24) {
    return;
  }
  iVar19 = 0;
  local_res18[0] = 0;
  for (uVar13 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0; uVar13 != 0;
      uVar13 = uVar13 ^ uVar11) {
    iVar19 = iVar19 + 1;
    uVar11 = -uVar13 & uVar13;
    local_res20 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
  }
  if ((DAT_146533c44 < 0) || (iVar19 != 1)) {
    uStack_164 = 1;
    uVar13 = 0;
    local_168 = 0;
    puStack_160 = &DAT_146533d00;
    uStack_154 = 0;
    if (DAT_146533d18 != 0) {
      puVar22 = DAT_146533d10;
      if (DAT_146533d10 == (uint *)0x0) {
        puVar22 = (uint *)&DAT_146533d00;
      }
      uVar11 = *puVar22;
      local_168 = 0;
      while (uVar11 == 0) {
        lVar8 = (longlong)local_168;
        uVar13 = uVar13 + 0x20;
        iVar19 = local_168 + 1;
        uStack_154 = (ulonglong)uVar13 << 0x20;
        bVar23 = (int)(DAT_146533d18 + -1 + (DAT_146533d18 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_168;
        local_168 = iVar19;
        if (bVar23) goto LAB_1425a3f4f;
        uVar11 = puVar22[lVar8 + 1];
      }
      uStack_164 = -uVar11 & uVar11;
      iVar19 = 0x1f;
      if (uStack_164 != 0) {
        for (; uStack_164 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      if (uStack_164 == 0) {
        iVar19 = 0x20;
      }
      else {
        iVar19 = 0x1f - iVar19;
      }
      iVar19 = (uVar13 - iVar19) + 0x1f;
      uStack_154._4_4_ = (int)((ulonglong)uStack_154 >> 0x20);
      uStack_154 = CONCAT44(uStack_154._4_4_,iVar19);
      if (DAT_146533d18 < iVar19) {
LAB_1425a3f4f:
        uStack_154 = CONCAT44(uStack_154._4_4_,DAT_146533d18);
      }
    }
    local_158 = 0xffffffff;
    uStack_1b0 = CONCAT44(uStack_164,local_168);
    local_120 = (longlong *)&DAT_146533cf0;
    local_110 = &DAT_146533d00;
    uStack_108 = CONCAT44((int)uStack_154,0xffffffff);
    local_100 = uStack_154._4_4_;
    iStack_fc = iStack_14c;
    local_1b8 = (longlong *)&DAT_146533cf0;
    iStack_198 = uStack_154._4_4_;
    iStack_194 = iStack_14c;
    puStack_1a8 = &DAT_146533d00;
    uStack_1a0 = uStack_108;
    iVar19 = (int)uStack_154;
    uStack_118 = uStack_1b0;
    if ((int)uStack_154 < DAT_146533d18) {
      do {
        local_d0 = *(undefined8 *)(*local_1b8 + (longlong)iVar19 * 0x10);
        FUN_14257d630(&local_d0);
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(uint)uStack_1a0 & ~uStack_1b0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
        iVar19 = uStack_1a0._4_4_;
      } while (uStack_1a0._4_4_ < *(int *)(puStack_1a8 + 0x18));
    }
    goto LAB_1425a3fea;
  }
  puStack_b0 = local_res8;
  local_b8 = &DAT_14060d670;
  local_78 = 0x4060d670;
  uStack_74 = 1;
  local_res8[0] = 0;
  uStack_70 = puStack_b0;
  lVar8 = FUN_1415d8310(&local_78,&DAT_146216a38);
  local_148 = (undefined8 *)(lVar8 + 0x18);
  uVar20 = 0;
  local_140 = *(undefined8 *)(lVar8 + 0x18);
  local_138 = *(longlong *)(lVar8 + 0x28);
  local_130 = '\0';
  local_128 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 ***)(lVar8 + 0x30) = &local_148;
  *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  if (0 < DAT_146533cf8 - DAT_146533d24) {
    FUN_141b15710();
    uVar20 = local_1c0 & 0xffffffff;
  }
  uStack_184 = 1;
  uVar13 = 0;
  local_188 = 0;
  puStack_180 = &DAT_146533d00;
  local_178 = 0xffffffff;
  uStack_174 = 0;
  if (DAT_146533d18 != 0) {
    puVar22 = DAT_146533d10;
    if (DAT_146533d10 == (uint *)0x0) {
      puVar22 = (uint *)&DAT_146533d00;
    }
    uVar11 = *puVar22;
    iVar19 = 0;
    while (uVar11 == 0) {
      uVar13 = uVar13 + 0x20;
      uStack_174 = (ulonglong)uVar13 << 0x20;
      local_188 = iVar19 + 1;
      if ((int)(DAT_146533d18 + -1 + (DAT_146533d18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar19)
      goto LAB_1425a3863;
      uVar11 = puVar22[(longlong)iVar19 + 1];
      local_178 = 0xffffffff;
      iVar19 = iVar19 + 1;
    }
    uStack_184 = -uVar11 & uVar11;
    local_e0 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> local_e0 == 0; local_e0 = local_e0 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - local_e0;
    }
    iVar6 = (uVar13 - iVar6) + 0x1f;
    uStack_174._4_4_ = (int)((ulonglong)uStack_174 >> 0x20);
    uStack_174 = CONCAT44(uStack_174._4_4_,iVar6);
    local_188 = iVar19;
    if (DAT_146533d18 < iVar6) {
LAB_1425a3863:
      uStack_174 = CONCAT44(uStack_174._4_4_,DAT_146533d18);
    }
  }
  local_178 = 0xffffffff;
  local_1b8 = (longlong *)&DAT_146533cf0;
  uStack_1b0 = CONCAT44(uStack_184,local_188);
  puStack_1a8 = &DAT_146533d00;
  uStack_1a0 = CONCAT44((int)uStack_174,0xffffffff);
  iStack_198 = uStack_174._4_4_;
  iStack_194 = iStack_16c;
  local_120 = (longlong *)&DAT_146533cf0;
  uStack_118 = CONCAT44(uStack_184,local_188);
  local_100 = uStack_174._4_4_;
  iStack_fc = iStack_16c;
  local_110 = &DAT_146533d00;
  uStack_108 = uStack_1a0;
  iVar19 = (int)uStack_174;
  if ((int)uStack_174 < DAT_146533d18) {
    do {
      uVar13 = 1 << ((byte)DAT_1464c9c14 & 0x1f) | _DAT_146afe3a0;
      if (uVar13 != 0) {
        local_190 = (longlong)iVar19 << 4;
        do {
          uVar11 = -uVar13 & uVar13;
          local_dc = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> local_dc == 0; local_dc = local_dc + -1) {
            }
          }
          iVar19 = 0;
          if (uVar11 != 0) {
            iVar19 = local_dc;
          }
          plVar17 = *(longlong **)(local_190 + *local_120);
          local_res10[0] = uVar13;
          lVar8 = (**(code **)(*plVar17 + 0x48))(plVar17,iVar19);
          if ((lVar8 != 0) && (puVar14 = *(undefined **)(lVar8 + 0x10), puVar14 != (undefined *)0x0)
             ) {
            local_f8 = 0;
            (**(code **)(*plVar17 + 0x40))(plVar17,iVar19,local_88,&local_f8);
            if (local_f8 == lVar8) {
              TRefCountPtr<FRHIIndexBuffer>::operator=(plVar17 + (longlong)iVar19 * 7 + 6,0);
              plVar17[(longlong)iVar19 * 7 + 0xc] = (longlong)puVar14;
              FUN_1408e22e0(plVar17 + (longlong)iVar19 * 7 + 9,puVar14 + 0x2a8);
              uVar20 = local_1c0;
              *(undefined1 *)(plVar17 + (longlong)iVar19 * 7 + 0xb) = 1;
              iVar6 = *(int *)(puVar14 + 0x2d8);
              if (iVar6 != 0) {
                lVar15 = (longlong)(int)local_1c0;
                iVar7 = (int)local_1c0 + 1;
                uStack_1a0 = 0;
                local_1c0 = CONCAT44(local_1c0._4_4_,iVar7);
                local_1b8 = plVar17;
                uStack_1b0 = lVar8;
                puStack_1a8 = puVar14;
                iStack_198 = iVar6;
                iStack_194 = iVar19;
                if (local_1c0._4_4_ < iVar7) {
                  TArray<FTransientDecalRenderData,TMemStackAllocator<0>_>::ResizeGrow
                            (&local_1c8,uVar20 & 0xffffffff);
                }
                local_1c8[lVar15 * 5] = (longlong)local_1b8;
                (local_1c8 + lVar15 * 5)[1] = uStack_1b0;
                local_1c8[lVar15 * 5 + 2] = (longlong)puStack_1a8;
                (local_1c8 + lVar15 * 5 + 2)[1] = uStack_1a0;
                local_1c8[lVar15 * 5 + 4] = CONCAT44(iStack_194,iStack_198);
              }
            }
          }
          uVar13 = uVar13 ^ uVar11;
        } while (uVar11 != local_res10[0]);
      }
      uStack_108 = CONCAT44(uStack_108._4_4_,(uint)uStack_108 & ~uStack_118._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_118);
      iVar19 = uStack_108._4_4_;
    } while (uStack_108._4_4_ < *(int *)(local_110 + 0x18));
    uVar20 = local_1c0 & 0xffffffff;
  }
  plVar17 = local_1c8 + (longlong)(int)uVar20 * 5;
  if (local_1c8 != plVar17) {
    plVar16 = local_1c8 + 4;
    do {
      if ((int)*plVar16 != 0) {
        puStack_a0 = local_res10;
        local_a8 = &DAT_14060d670;
        local_68 = 0x4060d670;
        uStack_64 = 1;
        local_res10[0] = local_res10[0] & 0xffffff00;
        uStack_60 = puStack_a0;
        lVar8 = FUN_1415d8310(&local_68,&DAT_146216a38);
        iVar19 = (int)*plVar16;
        uVar13 = 8;
        if (0xf < iVar19) {
          uVar13 = 0x10;
        }
        puVar1 = (ulonglong *)(lVar8 + 0x18);
        uVar20 = 0x10;
        if (0xf < iVar19) {
          uVar20 = (ulonglong)uVar13;
        }
        uVar12 = (*puVar1 - 1) + uVar20 & ~(uVar20 - 1);
        uVar21 = (longlong)iVar19 + uVar12;
        if (*(ulonglong *)(lVar8 + 0x20) < uVar21) {
          FMemStackBase::AllocateNewChunk(puVar1,iVar19 + (int)uVar20);
          uVar12 = (*puVar1 - 1) + uVar20 & ~(uVar20 - 1);
          uVar21 = (longlong)iVar19 + uVar12;
        }
        *puVar1 = uVar21;
        plVar16[-1] = uVar12;
      }
      plVar9 = plVar16 + 1;
      plVar16 = plVar16 + 5;
    } while (plVar9 != plVar17);
    uVar20 = local_1c0 & 0xffffffff;
  }
  iVar19 = (int)uVar20;
  local_c8 = &local_1c8;
  local_c0 = local_res18;
  if (DAT_146533c44 < iVar19) {
    ppplStack_90 = &local_c8;
    local_98 = &LAB_1425887c0;
    local_58 = 0x425887c0;
    uStack_54 = 1;
    uStack_50 = ppplStack_90;
    FUN_1406a7b10(uVar20,&local_58,0);
LAB_1425a3b99:
    iVar19 = (int)local_1c0;
  }
  else {
    iVar6 = 0;
    if (0 < iVar19) {
      lVar8 = 0;
      do {
        plVar17 = (longlong *)((longlong)*local_c8 + lVar8);
        local_e8 = plVar17[1];
        local_f0 = *plVar17;
        lVar15 = *plVar17;
        if ((*(byte *)(lVar15 + 0x110) & 8) != 0) {
          lVar10 = FUN_1428742e0();
          lVar15 = *plVar17;
          if (*(int *)(lVar10 + 0xc) != *(int *)(lVar15 + 0x130)) {
            bVar3 = *(byte *)(lVar15 + 0x110);
            if ((bVar3 & 8) != 0) {
              *(byte *)(lVar15 + 0x110) = bVar3 & 0xf7 | 0x10;
              lVar15 = *plVar17;
            }
          }
        }
        if ((((*(byte *)(lVar15 + 0x110) & 6) == 6) && ((*(byte *)(lVar15 + 0x110) & 8) == 0)) &&
           (DAT_146533c40 != 0)) {
          FUN_1425870c0(lVar15,&local_f0);
          lVar15 = *plVar17;
        }
        if ((*(byte *)(lVar15 + 0x110) & 0x18) == 0x18) {
          FUN_14258e0b0(lVar15,&local_f0);
        }
        FUN_1425bc8f0(plVar17[2] + 0x1f8,&local_f0,plVar17[3],(int)plVar17[4]);
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x28;
      } while (iVar6 < (int)local_1c0);
      goto LAB_1425a3b99;
    }
  }
  plVar17 = local_1c8 + (longlong)iVar19 * 5;
  if (local_1c8 != plVar17) {
    plVar16 = local_1c8 + 2;
    do {
      plVar18 = (longlong *)
                (plVar16[-2] + (longlong)*(int *)((longlong)plVar16 + 0x14) * 0x38 + 0x30);
      plVar9 = (longlong *)
               FUN_1425bb4e0(*plVar16 + 0x1f8,&local_d8,0,plVar18 + 1,plVar16[1],(int)plVar16[2]);
      if (plVar18 != plVar9) {
        puVar4 = (undefined8 *)*plVar18;
        *plVar18 = *plVar9;
        *plVar9 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar4 + 1);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            if (*(char *)(puVar4 + 2) == '\0') {
              if (DAT_146ab62f5 == '\0') {
                cVar5 = FOutputDevice::CanBeUsedOnAnyThread();
                if (cVar5 != '\0') goto LAB_1425a3d93;
              }
              LOCK();
              bVar23 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar23) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar23) {
                uVar13 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar13 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (&DAT_1468a81f8)[uVar13 >> 0xe] + (ulonglong)(uVar13 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
LAB_1425a3d93:
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
      }
      puVar4 = local_d8;
      if (local_d8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_d8 + 1);
        iVar19 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          if (*(char *)(local_d8 + 2) == '\0') {
            if (DAT_146ab62f5 == '\0') {
              cVar5 = FOutputDevice::CanBeUsedOnAnyThread();
              if (cVar5 != '\0') goto LAB_1425a3e19;
            }
            LOCK();
            bVar23 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar23) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar23) {
              uVar13 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar13 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = (&DAT_1468a81f8)[uVar13 >> 0xe] + (ulonglong)(uVar13 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar8 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
LAB_1425a3e19:
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      plVar9 = plVar16 + 3;
      plVar16 = plVar16 + 5;
    } while (plVar9 != plVar17);
  }
  if (local_130 == '\0') {
    local_130 = '\x01';
    *(int *)(local_148 + 4) = *(int *)(local_148 + 4) + -1;
    if (local_138 != local_148[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_148 = local_140;
    local_148[3] = local_128;
  }
LAB_1425a3fea:
  DAT_146533cf8 = 0;
  if ((DAT_146533cfc < 0) && (DAT_146533cfc != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533cf0,0);
  }
  _DAT_146533d20 = 0xffffffff;
  DAT_146533d24 = 0;
  puVar22 = DAT_146533d10;
  if (DAT_146533d10 == (uint *)0x0) {
    puVar22 = (uint *)&DAT_146533d00;
  }
  _guard_xfg_dispatch_icall_nop
            (puVar22,0,
             (longlong)((int)(DAT_146533d18 + 0x1f + (DAT_146533d18 + 0x1f >> 0x1f & 0x1fU)) >> 5)
             << 2);
  DAT_146533d18 = 0;
  if (0 < (int)DAT_146533d38) {
    uVar20 = 0;
    uVar21 = (ulonglong)DAT_146533d38;
    do {
      puVar14 = DAT_146533d30;
      if (DAT_146533d30 == (undefined *)0x0) {
        puVar14 = &DAT_146533d28;
      }
      uVar12 = (longlong)(int)(DAT_146533d38 - 1) & uVar20;
      uVar20 = uVar20 + 1;
      *(undefined4 *)(puVar14 + uVar12 * 4) = 0xffffffff;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}



// FUNCTION 1425a40c0 UpdateHash body=751 status=ok
// SIG undefined UpdateHash(void)

void FStaticParameterSet::UpdateHash(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    do {
      lVar4 = *param_1 + (longlong)iVar3 * 0x28;
      FUN_1425a33e0(lVar4,&local_28);
      puVar1 = local_28;
      if (local_20 == 0) {
        iVar5 = 0;
        puVar2 = &DAT_143f3eda8;
      }
      else {
        iVar5 = local_20 + -1;
        puVar2 = local_28;
      }
      FSHA1::Update(param_2,puVar2,iVar5 * 2);
      FSHA1::Update(param_2,lVar4 + 0x14,0x10);
      FSHA1::Update(param_2,lVar4 + 0x10);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[1]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[3]) {
    do {
      lVar4 = param_1[2] + (longlong)iVar3 * 0x28;
      FUN_1425a33e0(lVar4,&local_28);
      puVar1 = local_28;
      if (local_20 == 0) {
        iVar5 = 0;
        puVar2 = &DAT_143f3eda8;
      }
      else {
        iVar5 = local_20 + -1;
        puVar2 = local_28;
      }
      FSHA1::Update(param_2,puVar2,iVar5 * 2);
      FSHA1::Update(param_2,lVar4 + 0x18,0x10);
      FSHA1::Update(param_2,lVar4 + 0x10,1);
      FSHA1::Update(param_2,lVar4 + 0x11,1);
      FSHA1::Update(param_2,lVar4 + 0x12,1);
      FSHA1::Update(param_2,lVar4 + 0x13);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[3]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[5]) {
    do {
      lVar4 = (longlong)iVar3 * 0x30 + param_1[4];
      FUN_1425a33e0(lVar4,&local_28);
      puVar1 = local_28;
      if (local_20 == 0) {
        iVar5 = 0;
        puVar2 = &DAT_143f3eda8;
      }
      else {
        iVar5 = local_20 + -1;
        puVar2 = local_28;
      }
      FSHA1::Update(param_2,puVar2,iVar5 * 2);
      FSHA1::Update(param_2,lVar4 + 0x14,0x10);
      FSHA1::Update(param_2,lVar4 + 0x24);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[5]);
  }
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    do {
      lVar4 = (longlong)iVar3 * 0x68 + param_1[6];
      FUN_1425a33e0(lVar4,&local_18);
      FUN_14256e320(lVar4 + 0x10,&local_28);
      puVar1 = local_18;
      if (local_10 == 0) {
        iVar5 = 0;
        puVar2 = &DAT_143f3eda8;
      }
      else {
        iVar5 = local_10 + -1;
        puVar2 = local_18;
      }
      FSHA1::Update(param_2,puVar2,iVar5 * 2);
      FSHA1::Update(param_2,lVar4 + 0x54,0x10);
      if (local_20 == 0) {
        iVar5 = 0;
        puVar2 = &DAT_143f3eda8;
      }
      else {
        iVar5 = local_20 + -1;
        puVar2 = local_28;
      }
      FSHA1::Update(param_2,puVar2,iVar5 * 2);
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 1425a43b0 FUN_1425a43b0 body=809 status=ok
// SIG undefined FUN_1425a43b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425a43b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 local_res8 [8];
  undefined4 local_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_80;
  
  iVar4 = (**(code **)(*param_1 + 0x468))();
  if ((iVar4 - 5U & 0xfffffffb) == 0) {
    local_d8 = 0x3f99999a;
    uStack_c4 = 0x3ebd70a43f800000;
    uStack_bc = 0x3f8000003e99999a;
    local_b4 = _DAT_1464aa6c0;
    uStack_ac = _DAT_1464aa6c8;
    local_a4 = 0x3f800000;
    uStack_d4 = 0x3ed1eb853ef5c28f;
    uStack_cc = 0x3f8000003e8f5c29;
    uVar28 = 0x3fc66666;
    uVar29 = 0x3f400000;
    uVar30 = 0x3fa66666;
    uVar31 = 0x3f59999a;
    local_a0 = 0x3da3d70a;
    local_9c = 0x3f6e147b;
    lVar6 = (**(code **)(*param_1 + 0x4c8))(param_1);
    if (lVar6 == 0) {
      uVar12 = local_d8;
      uVar13 = (undefined4)uStack_d4;
      uVar14 = uStack_d4._4_4_;
      uVar15 = (undefined4)uStack_cc;
      uVar16 = uStack_cc._4_4_;
      uVar17 = (undefined4)uStack_c4;
      uVar18 = uStack_c4._4_4_;
      uVar19 = (undefined4)uStack_bc;
      uVar20 = uStack_bc._4_4_;
      uVar21 = (undefined4)local_b4;
      uVar22 = local_b4._4_4_;
      uVar23 = (undefined4)uStack_ac;
      uVar24 = uStack_ac._4_4_;
      uVar25 = local_a4;
      uVar26 = local_a0;
      uVar27 = local_9c;
    }
    else {
      uVar28 = *(undefined4 *)(lVar6 + 0x68);
      uVar29 = *(undefined4 *)(lVar6 + 0x6c);
      uVar30 = *(undefined4 *)(lVar6 + 0x70);
      uVar31 = *(undefined4 *)(lVar6 + 0x74);
      uVar12 = *(undefined4 *)(lVar6 + 0x28);
      uVar13 = *(undefined4 *)(lVar6 + 0x2c);
      uVar14 = *(undefined4 *)(lVar6 + 0x30);
      uVar15 = *(undefined4 *)(lVar6 + 0x34);
      uVar16 = *(undefined4 *)(lVar6 + 0x38);
      uVar17 = *(undefined4 *)(lVar6 + 0x3c);
      uVar18 = *(undefined4 *)(lVar6 + 0x40);
      uVar19 = *(undefined4 *)(lVar6 + 0x44);
      uVar20 = *(undefined4 *)(lVar6 + 0x48);
      uVar21 = *(undefined4 *)(lVar6 + 0x4c);
      uVar22 = *(undefined4 *)(lVar6 + 0x50);
      uVar23 = *(undefined4 *)(lVar6 + 0x54);
      uVar24 = *(undefined4 *)(lVar6 + 0x58);
      uVar25 = *(undefined4 *)(lVar6 + 0x5c);
      uVar26 = *(undefined4 *)(lVar6 + 0x60);
      uVar27 = *(undefined4 *)(lVar6 + 100);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      uStack_d4 = CONCAT44(uVar14,uVar13);
      uStack_cc = CONCAT44(uVar16,uVar15);
      uStack_c4 = CONCAT44(uVar18,uVar17);
      uStack_bc = CONCAT44(uVar20,uVar19);
      local_b4 = CONCAT44(uVar22,uVar21);
      uStack_ac = CONCAT44(uVar24,uVar23);
      local_d8 = uVar12;
      local_a4 = uVar25;
      local_a0 = uVar26;
      local_9c = uVar27;
      local_98 = uVar28;
      uStack_94 = uVar29;
      uStack_90 = uVar30;
      uStack_8c = uVar31;
      local_88 = lVar6;
      local_80 = param_2;
      FUN_14258b950(&local_d8,2,local_res8);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      plVar9 = (longlong *)0x0;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar9 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar9);
        plVar8 = plVar9;
      }
      plVar9 = (longlong *)plVar8[1];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)*plVar8;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = (longlong)plVar9;
          if (plVar9 == (longlong *)0x0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar11 = 0x1f;
            do {
              puVar2 = puVar10 + 0x20;
              *puVar10 = puVar2;
              lVar11 = lVar11 + -1;
              puVar10 = puVar2;
            } while (lVar11 != 0);
            *puVar2 = 0;
            plVar9 = (longlong *)plVar8[1];
          }
          iVar4 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar4 = 0x20;
          plVar8[1] = (longlong)plVar9;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar4 = (int)plVar8[2];
      }
      plVar8[1] = *plVar9;
      *(int *)(plVar8 + 2) = iVar4 + -1;
      *plVar9 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar9 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *(undefined1 *)(plVar9 + 0xe) = 0;
      *plVar9 = (longlong)&PTR_FUN_14510bf10;
      plVar9[0xf] = 0;
      *(undefined4 *)(plVar9 + 2) = uVar12;
      *(undefined4 *)((longlong)plVar9 + 0x14) = uVar13;
      *(undefined4 *)(plVar9 + 3) = uVar14;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar15;
      plVar9[0xc] = lVar6;
      *(undefined4 *)(plVar9 + 4) = uVar16;
      *(undefined4 *)((longlong)plVar9 + 0x24) = uVar17;
      *(undefined4 *)(plVar9 + 5) = uVar18;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar19;
      plVar9[0xd] = param_2;
      *(undefined4 *)(plVar9 + 6) = uVar20;
      *(undefined4 *)((longlong)plVar9 + 0x34) = uVar21;
      *(undefined4 *)(plVar9 + 7) = uVar22;
      *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar23;
      *(undefined4 *)(plVar9 + 8) = uVar24;
      *(undefined4 *)((longlong)plVar9 + 0x44) = uVar25;
      *(undefined4 *)(plVar9 + 9) = uVar26;
      *(undefined4 *)((longlong)plVar9 + 0x4c) = uVar27;
      *(undefined4 *)(plVar9 + 10) = uVar28;
      *(undefined4 *)((longlong)plVar9 + 0x54) = uVar29;
      *(undefined4 *)(plVar9 + 0xb) = uVar30;
      *(undefined4 *)((longlong)plVar9 + 0x5c) = uVar31;
      lVar6 = plVar9[0xf];
      piVar1 = (int *)(lVar6 + 0x48);
      if (lVar6 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_141c2c3c0(plVar9,0,0xff,1,0);
      if (lVar6 != 0) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 1425a46e0 FUN_1425a46e0 body=717 status=ok
// SIG undefined FUN_1425a46e0(void)

void FUN_1425a46e0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined2 *)(param_1 + 0x104) = 0x100;
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffe;
    *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) & 0xfffffffd;
    return;
  }
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x448))();
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xf4);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  if (*(char *)(param_1 + 0xe8) == '\0') {
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x450))();
    uVar4 = (uint)bVar3 << 2;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xfc);
  }
  *(uint *)(param_1 + 0x108) = (uVar4 ^ *(uint *)(param_1 + 0x108)) & 4 ^ *(uint *)(param_1 + 0x108)
  ;
  if (*(char *)(param_1 + 0xe5) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x460))();
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xf8);
  }
  *(undefined1 *)(param_1 + 0x104) = uVar1;
  if (*(char *)(param_1 + 0xe6) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x468))();
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xf9);
  }
  *(undefined1 *)(param_1 + 0x105) = uVar1;
  if (*(char *)(param_1 + 0xe9) == '\0') {
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x470))();
    uVar4 = (uint)bVar3;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xfc);
  }
  uVar4 = (uVar4 ^ *(uint *)(param_1 + 0x108)) & 1 ^ *(uint *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = uVar4;
  if (*(char *)(param_1 + 0xe7) == '\0') {
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x4a0))();
    uVar4 = ((uint)bVar3 * 2 ^ *(uint *)(param_1 + 0x108)) & 2 ^ *(uint *)(param_1 + 0x108);
  }
  else {
    uVar4 = (*(uint *)(param_1 + 0xfc) ^ uVar4) & 2 ^ uVar4;
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  if (*(char *)(param_1 + 0xea) == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x478))();
    uVar4 = 0;
    if (cVar2 == '\0') {
      uVar4 = 8;
    }
    uVar4 = uVar4 | *(uint *)(param_1 + 0x108) & 0xfffffff7;
  }
  else {
    uVar4 = (*(uint *)(param_1 + 0xfc) ^ uVar4) & 8 ^ uVar4;
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  if (*(char *)(param_1 + 0xeb) == '\0') {
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x480))();
    uVar4 = ((uint)bVar3 << 4 ^ *(uint *)(param_1 + 0x108)) & 0x10 ^ *(uint *)(param_1 + 0x108);
  }
  else {
    uVar4 = (*(uint *)(param_1 + 0xfc) ^ uVar4) & 0x10 ^ uVar4;
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  if (*(char *)(param_1 + 0xee) == '\0') {
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x488))();
    uVar4 = ((uint)bVar3 << 5 ^ *(uint *)(param_1 + 0x108)) & 0x20 ^ *(uint *)(param_1 + 0x108);
  }
  else {
    uVar4 = (*(uint *)(param_1 + 0xfc) >> 2 ^ uVar4) & 0x20 ^ uVar4;
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  if (*(char *)(param_1 + 0xef) == '\0') {
    bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x490))();
    uVar4 = ((uint)bVar3 << 6 ^ *(uint *)(param_1 + 0x108)) & 0x40 ^ *(uint *)(param_1 + 0x108);
  }
  else {
    uVar4 = (*(uint *)(param_1 + 0xfc) >> 2 ^ uVar4) & 0x40 ^ uVar4;
  }
  *(uint *)(param_1 + 0x108) = uVar4;
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(uint *)(param_1 + 0x108) = (*(uint *)(param_1 + 0xfc) >> 2 ^ uVar4) & 0x80 ^ uVar4;
    return;
  }
  bVar3 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x498))();
  *(uint *)(param_1 + 0x108) =
       *(uint *)(param_1 + 0x108) ^ ((uint)bVar3 << 7 ^ *(uint *)(param_1 + 0x108)) & 0x80;
  return;
}



// FUNCTION 1425a49b0 UpdateParameterSet body=260 status=ok
// SIG undefined UpdateParameterSet(void)

void FMaterialShaderMapId::UpdateParameterSet(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1425805a0(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x28) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    *(undefined1 *)(lVar2 + 0x11) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    *(undefined1 *)(lVar2 + 0x14) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = (longlong)*(int *)(param_1 + 0x48) * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    *(undefined1 *)(lVar1 + 0x10) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x68 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x68) {
    *(undefined1 *)(lVar1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar2 = (longlong)*(int *)(param_1 + 0x58) * 0x68 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x68) {
    FStaticMaterialLayersParameter::AppendKeyString(lVar1,param_1 + 0x60);
  }
  return;
}



// FUNCTION 1425a4ac0 FUN_1425a4ac0 body=750 status=ok
// SIG undefined FUN_1425a4ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425a4ac0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  int local_90;
  int local_8c;
  undefined8 local_88;
  int *local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined1 local_68 [8];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar3 = FShaderCodeLibrary::GetRuntimeShaderPlatform();
  plVar1 = param_1 + 0x31;
  uVar5 = (**(code **)(*param_1 + 0x290))(param_1);
  if (iVar3 == 0x20) {
    uVar9 = 0;
    local_70 = &DAT_1464c9c48;
    uVar12 = uVar9;
    do {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      FUN_14256d550(uVar5,local_50,*local_70);
      uVar8 = uVar9;
      uVar10 = uVar9;
      do {
        iVar3 = (int)uVar8;
        iVar11 = (int)uVar12;
        local_90 = iVar3;
        local_8c = iVar11;
        lVar6 = FUN_14256a620(plVar1,&local_90);
        if (lVar6 == 0) {
          local_88 = (**(code **)(*param_1 + 0x500))(param_1);
          local_80 = &local_90;
          local_78 = &local_88;
          FUN_142554c80(plVar1,local_98,&local_80,0);
          lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)local_98[0] * 0x18);
        }
        puVar7 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar7 = local_48;
        }
        uVar2 = puVar7[uVar10];
        uVar10 = uVar10 + 1;
        *(int *)(lVar6 + 0x18) = iVar3;
        uVar8 = (ulonglong)(iVar3 + 1U);
        *(undefined8 *)(lVar6 + 0x28) = uVar5;
        *(longlong **)(lVar6 + 0x30) = param_1;
        *(undefined1 *)(lVar6 + 0x1c) = uVar2;
        *(int *)(lVar6 + 0x20) = iVar11;
      } while ((int)(iVar3 + 1U) < 3);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      uVar12 = (ulonglong)(iVar11 + 1U);
      local_70 = local_70 + 1;
    } while ((int)(iVar11 + 1U) < 4);
  }
  else {
    uVar4 = FUN_1419ef5f0(iVar3);
    uVar9 = 0;
    local_60 = (undefined1 *)0x0;
    local_58 = 0;
    FUN_14256d550(uVar5,local_68,iVar3);
    lVar6 = FUN_1428742e0();
    uVar12 = uVar9;
    if (*(int *)(lVar6 + 0x10) == 1) {
      lVar6 = FUN_1428742e0();
      iVar3 = *(int *)(lVar6 + 0xc);
      local_90 = iVar3;
      local_8c = uVar4;
      lVar6 = FUN_14256a620(plVar1,&local_90);
      if (lVar6 == 0) {
        local_88 = (**(code **)(*param_1 + 0x500))(param_1);
        local_80 = &local_90;
        local_78 = &local_88;
        FUN_142554c80(plVar1,local_98,&local_80,0);
        lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)local_98[0] * 0x18);
      }
      puVar7 = local_68;
      if (local_60 != (undefined1 *)0x0) {
        puVar7 = local_60;
      }
      *(undefined1 *)(lVar6 + 0x1c) = puVar7[iVar3];
      *(undefined8 *)(lVar6 + 0x28) = uVar5;
      *(longlong **)(lVar6 + 0x30) = param_1;
      *(int *)(lVar6 + 0x18) = iVar3;
      *(undefined4 *)(lVar6 + 0x20) = uVar4;
    }
    else {
      do {
        iVar3 = (int)uVar9;
        local_90 = iVar3;
        local_8c = uVar4;
        lVar6 = FUN_14256a620(plVar1,&local_90);
        if (lVar6 == 0) {
          local_88 = (**(code **)(*param_1 + 0x500))(param_1);
          local_80 = &local_90;
          local_78 = &local_88;
          FUN_142554c80(plVar1,local_98,&local_80,0);
          lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)local_98[0] * 0x18);
        }
        puVar7 = local_68;
        if (local_60 != (undefined1 *)0x0) {
          puVar7 = local_60;
        }
        uVar2 = puVar7[uVar12];
        *(int *)(lVar6 + 0x18) = iVar3;
        uVar9 = (ulonglong)(iVar3 + 1U);
        *(undefined8 *)(lVar6 + 0x28) = uVar5;
        *(longlong **)(lVar6 + 0x30) = param_1;
        *(undefined1 *)(lVar6 + 0x1c) = uVar2;
        *(undefined4 *)(lVar6 + 0x20) = uVar4;
        uVar12 = uVar12 + 1;
      } while ((int)(iVar3 + 1U) < 3);
    }
    if (local_60 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1425a4de0 Serialize body=97 status=ok
// SIG undefined Serialize(void)

void FMaterialUniformExpressionAbs::Serialize(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1425a4e50 FUN_1425a4e50 body=235 status=ok
// SIG undefined FUN_1425a4e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425a4e50(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afefb0) && (_Init_thread_header(&DAT_146afefb0), DAT_146afefb0 == -1))
  {
    _DAT_146afefac = 0.4342945;
    _Init_thread_footer(&DAT_146afefb0);
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(local_18);
  *param_3 = fVar1 * _DAT_146afefac;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_14);
  param_3[1] = fVar1 * _DAT_146afefac;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_10);
  param_3[2] = fVar1 * _DAT_146afefac;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_c);
  param_3[3] = fVar1 * _DAT_146afefac;
  return;
}



// FUNCTION 1425a4f60 FUN_1425a4f60 body=75 status=ok
// SIG undefined FUN_1425a4f60(void)

ulonglong FUN_1425a4f60(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionLogari_146533f88) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a4fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a4fb0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FBatchingSPDI::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1425a5020 FUN_1425a5020 body=337 status=ok
// SIG undefined FUN_1425a5020(void)

void FUN_1425a5020(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong local_res8;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_res8 = *(longlong *)(param_1 + 0x18);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x24,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x24) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  iVar5 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (10 < iVar5) {
    puVar4 = *(undefined4 **)param_2[1];
    if (puVar4 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *(undefined4 *)(param_1 + 0x20) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      return;
    }
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x20,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x20,4);
    }
  }
  return;
}



// FUNCTION 1425a5180 FUN_1425a5180 body=940 status=ok
// SIG undefined FUN_1425a5180(void)

void FUN_1425a5180(longlong param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  local_48 = DAT_1464aa6e0;
  local_44 = DAT_1464aa6e4;
  local_40 = DAT_1464aa6e8;
  local_3c = DAT_1464aa6ec;
  local_38 = DAT_1464aa6e0;
  local_34 = DAT_1464aa6e4;
  local_30 = DAT_1464aa6e8;
  local_2c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),DAT_1464aa6e8,&local_48);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_2,&local_38);
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
    *param_3 = local_38 + local_48;
    param_3[1] = local_34 + local_44;
    param_3[2] = local_30 + local_40;
    param_3[3] = local_2c + local_3c;
    return;
  case 1:
    *param_3 = local_48 - local_38;
    param_3[1] = local_44 - local_34;
    param_3[2] = local_40 - local_30;
    param_3[3] = local_3c - local_2c;
    return;
  case 2:
    *param_3 = local_38 * local_48;
    param_3[1] = local_34 * local_44;
    param_3[2] = local_30 * local_40;
    param_3[3] = local_2c * local_3c;
    return;
  case 3:
    fVar3 = (float)FUN_1425c0930(local_38);
    *param_3 = local_48 / fVar3;
    fVar3 = (float)FUN_1425c0930(local_34);
    param_3[1] = local_44 / fVar3;
    fVar3 = (float)FUN_1425c0930(local_30);
    param_3[2] = local_40 / fVar3;
    fVar3 = (float)FUN_1425c0930(local_2c);
    param_3[3] = local_3c / fVar3;
    return;
  case 4:
    fVar3 = 0.0;
    uVar1 = *(uint *)(param_1 + 0x20);
    if (uVar1 < 2) {
      local_34 = 0.0;
    }
    else {
      local_34 = local_34 * local_44;
    }
    if (uVar1 < 4) {
      local_30 = 0.0;
    }
    else {
      local_30 = local_30 * local_40;
    }
    if (7 < uVar1) {
      fVar3 = local_2c * local_3c;
    }
    fVar3 = local_38 * local_48 + local_34 + local_30 + fVar3;
    *param_3 = fVar3;
    param_3[1] = fVar3;
    param_3[2] = fVar3;
    param_3[3] = fVar3;
    return;
  case 5:
    break;
  default:
    LowLevelFatalErrorHandler("Unknown",0x58e,L"Unknown folded math operation: %08x");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x58e,L"Unknown folded math operation: %08x",
               *(undefined1 *)(param_1 + 0x24));
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 1) {
    local_44 = 0.0;
    local_34 = 0.0;
  }
  else if (iVar2 != 2) {
    if (iVar2 == 0xf) {
      local_44 = local_48;
      local_40 = local_48;
      local_34 = local_38;
      local_30 = local_38;
    }
    goto LAB_1425a547f;
  }
  local_30 = 0.0;
  local_40 = 0.0;
LAB_1425a547f:
  param_3[3] = 0.0;
  *param_3 = local_30 * local_44 - local_40 * local_34;
  param_3[2] = local_34 * local_48 - local_44 * local_38;
  param_3[1] = local_40 * local_38 - local_30 * local_48;
  return;
}



// FUNCTION 1425a5550 FUN_1425a5550 body=57 status=ok
// SIG undefined FUN_1425a5550(void)

void FUN_1425a5550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001425a5585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),param_1 + 0x18,param_3);
  return;
}



// FUNCTION 1425a5590 IsChangingPerFrame body=53 status=ok
// SIG undefined IsChangingPerFrame(void)

undefined8 FMaterialUniformExpressionTrigMath::IsChangingPerFrame(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1425a55d0 FUN_1425a55d0 body=116 status=ok
// SIG undefined FUN_1425a55d0(void)

ulonglong FUN_1425a55d0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionFolded_146533f98) {
    ppuVar2 = (undefined **)
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),param_2[2]);
    if ((char)ppuVar2 != '\0') {
      ppuVar2 = (undefined **)
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                          (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (((char)ppuVar2 != '\0') &&
         (ppuVar2 = (undefined **)0x0,
         *(char *)(param_1 + 0x24) == *(char *)((longlong)param_2 + 0x24))) {
        uVar1 = *(uint *)(param_2 + 4);
        ppuVar2 = (undefined **)(ulonglong)uVar1;
        if (*(uint *)(param_1 + 0x20) == uVar1) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return (ulonglong)ppuVar2 & 0xffffffffffffff00;
}



// FUNCTION 1425a5650 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMaterialUniformExpressionAppendVector::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1425a56d0 GetNumberValue body=145 status=ok
// SIG undefined GetNumberValue(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMaterialUniformExpressionPeriodic::GetNumberValue
               (longlong param_1,undefined4 param_2,float *param_3)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = _DAT_1464aa6e0;
  uStack_10 = _DAT_1464aa6e8;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  *param_3 = (float)local_18 - (float)(int)(float)local_18;
  param_3[1] = local_18._4_4_ - (float)(int)local_18._4_4_;
  param_3[2] = (float)uStack_10 - (float)(int)(float)uStack_10;
  param_3[3] = uStack_10._4_4_ - (float)(int)uStack_10._4_4_;
  return;
}



// FUNCTION 1425a5770 FUN_1425a5770 body=75 status=ok
// SIG undefined FUN_1425a5770(void)

ulonglong FUN_1425a5770(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionPeriod_146533fa8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a57b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a57d0 FUN_1425a57d0 body=251 status=ok
// SIG undefined FUN_1425a57d0(void)

void FUN_1425a57d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_res8 = *(longlong *)(param_1 + 0x18);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar3 = *(undefined4 **)param_2[1];
  if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x20) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x20,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x20,4);
  }
  return;
}



// FUNCTION 1425a58d0 GetNumberValue body=276 status=ok
// SIG undefined GetNumberValue(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FMaterialUniformExpressionAppendVector::GetNumberValue
               (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  
  local_28 = DAT_1464aa6e0;
  local_24 = DAT_1464aa6e4;
  local_20 = DAT_1464aa6e8;
  local_1c = DAT_1464aa6ec;
  local_18[0] = DAT_1464aa6e0;
  local_18[1] = DAT_1464aa6e4;
  local_18[2] = DAT_1464aa6e8;
  local_18[3] = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),DAT_1464aa6e8,&local_28);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_2,local_18);
  if (*(int *)(param_1 + 0x20) != 0) {
    local_18[0] = local_28;
  }
  *param_3 = local_18[0];
  if (*(uint *)(param_1 + 0x20) < 2) {
    local_24 = local_18[1 - *(uint *)(param_1 + 0x20)];
  }
  param_3[1] = local_24;
  if (*(uint *)(param_1 + 0x20) < 3) {
    local_20 = local_18[2 - *(uint *)(param_1 + 0x20)];
  }
  param_3[2] = local_20;
  if (*(uint *)(param_1 + 0x20) < 4) {
    local_1c = local_18[3 - *(uint *)(param_1 + 0x20)];
  }
  param_3[3] = local_1c;
  return;
}



// FUNCTION 1425a59f0 FUN_1425a59f0 body=107 status=ok
// SIG undefined FUN_1425a59f0(void)

ulonglong FUN_1425a59f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionAppend_146533fb8) {
    ppuVar2 = (undefined **)
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),param_2[2]);
    if ((char)ppuVar2 != '\0') {
      ppuVar2 = (undefined **)
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                          (*(longlong **)(param_1 + 0x18),param_2[3]);
      if ((char)ppuVar2 != '\0') {
        uVar1 = *(uint *)(param_2 + 4);
        ppuVar2 = (undefined **)(ulonglong)uVar1;
        if (*(uint *)(param_1 + 0x20) == uVar1) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return (ulonglong)ppuVar2 & 0xffffffffffffff00;
}



// FUNCTION 1425a5a70 Serialize body=167 status=ok
// SIG undefined Serialize(void)

void FMaterialUniformExpressionFmod::Serialize(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_res8 = *(longlong *)(param_1 + 0x18);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1425a5b20 GetNumberValue body=213 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionMin::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_28 = DAT_1464aa6e0;
  local_24 = DAT_1464aa6e4;
  local_20 = DAT_1464aa6e8;
  local_1c = DAT_1464aa6ec;
  local_18 = DAT_1464aa6e0;
  local_14 = DAT_1464aa6e4;
  local_10 = DAT_1464aa6e8;
  local_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),DAT_1464aa6e8,&local_28);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_2,&local_18);
  if (local_18 <= local_28) {
    local_28 = local_18;
  }
  if (local_14 <= local_24) {
    local_24 = local_14;
  }
  *param_3 = local_28;
  if (local_10 <= local_20) {
    local_20 = local_10;
  }
  param_3[1] = local_24;
  if (local_c <= local_1c) {
    local_1c = local_c;
  }
  param_3[2] = local_20;
  param_3[3] = local_1c;
  return;
}



// FUNCTION 1425a5c00 FUN_1425a5c00 body=99 status=ok
// SIG undefined FUN_1425a5c00(void)

undefined8 FUN_1425a5c00(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionMin_146533fc8) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                        (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1425a5c70 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMaterialUniformExpressionFmod::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1425a5cf0 GetNumberValue body=213 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionMax::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_28 = DAT_1464aa6e0;
  local_24 = DAT_1464aa6e4;
  local_20 = DAT_1464aa6e8;
  local_1c = DAT_1464aa6ec;
  local_18 = DAT_1464aa6e0;
  local_14 = DAT_1464aa6e4;
  local_10 = DAT_1464aa6e8;
  local_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),DAT_1464aa6e8,&local_28);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_2,&local_18);
  if (local_28 <= local_18) {
    local_28 = local_18;
  }
  if (local_24 <= local_14) {
    local_24 = local_14;
  }
  *param_3 = local_28;
  if (local_20 <= local_10) {
    local_20 = local_10;
  }
  param_3[1] = local_24;
  if (local_1c <= local_c) {
    local_1c = local_c;
  }
  param_3[2] = local_20;
  param_3[3] = local_1c;
  return;
}



// FUNCTION 1425a5dd0 FUN_1425a5dd0 body=99 status=ok
// SIG undefined FUN_1425a5dd0(void)

undefined8 FUN_1425a5dd0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionMax_146533fd8) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                        (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1425a5e50 Serialize body=237 status=ok
// SIG undefined Serialize(void)

void FMaterialUniformExpressionClamp::Serialize(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_res8 = *(longlong *)(param_1 + 0x18);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_res8 = *(longlong *)(param_1 + 0x20);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x20) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1425a5f40 GetNumberValue body=308 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionClamp::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_28 = DAT_1464aa6e0;
  local_24 = DAT_1464aa6e4;
  local_20 = DAT_1464aa6e8;
  local_1c = DAT_1464aa6ec;
  local_18 = DAT_1464aa6e0;
  local_14 = DAT_1464aa6e4;
  local_10 = DAT_1464aa6e8;
  local_c = DAT_1464aa6ec;
  local_38 = DAT_1464aa6e0;
  local_34 = DAT_1464aa6e4;
  local_30 = DAT_1464aa6e8;
  local_2c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),DAT_1464aa6e8,&local_28);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
            (*(longlong **)(param_1 + 0x20),param_2,&local_18);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_38);
  if ((local_28 <= local_38) && (local_28 = local_38, local_18 <= local_38)) {
    local_28 = local_18;
  }
  *param_3 = local_28;
  if ((local_24 <= local_34) && (local_24 = local_34, local_14 <= local_34)) {
    local_24 = local_14;
  }
  param_3[1] = local_24;
  if ((local_20 <= local_30) && (local_20 = local_30, local_10 <= local_30)) {
    local_20 = local_10;
  }
  param_3[2] = local_20;
  if (local_1c <= local_2c) {
    if (local_c <= local_2c) {
      local_2c = local_c;
    }
    param_3[3] = local_2c;
  }
  else {
    param_3[3] = local_1c;
  }
  return;
}



// FUNCTION 1425a6080 FUN_1425a6080 body=74 status=ok
// SIG undefined FUN_1425a6080(void)

void FUN_1425a6080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001425a60c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
            (*(longlong **)(param_1 + 0x20),param_1 + 0x20,param_3);
  return;
}



// FUNCTION 1425a60d0 FUN_1425a60d0 body=67 status=ok
// SIG undefined FUN_1425a60d0(void)

undefined8 FUN_1425a60d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1425a6120 FUN_1425a6120 body=117 status=ok
// SIG undefined FUN_1425a6120(void)

undefined8 FUN_1425a6120(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionClamp_146533fe8) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                        (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
                          (*(longlong **)(param_1 + 0x20),param_2[4]);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1425a61a0 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMaterialUniformExpressionClamp::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1425a6240 GetNumberValue body=158 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionSaturate::GetNumberValue
               (longlong param_1,undefined4 param_2,float *param_3)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  if (0.0 <= local_18) {
    if (1.0 <= local_18) {
      local_18 = 1.0;
    }
  }
  else {
    local_18 = 0.0;
  }
  *param_3 = local_18;
  if (0.0 <= fStack_14) {
    if (1.0 <= fStack_14) {
      fStack_14 = 1.0;
    }
  }
  else {
    fStack_14 = 0.0;
  }
  param_3[1] = fStack_14;
  if (0.0 <= fStack_10) {
    if (1.0 <= fStack_10) {
      fStack_10 = 1.0;
    }
  }
  else {
    fStack_10 = 0.0;
  }
  param_3[2] = fStack_10;
  if (fStack_c < 0.0) {
    param_3[3] = 0.0;
    return;
  }
  if (1.0 <= fStack_c) {
    fStack_c = 1.0;
  }
  param_3[3] = fStack_c;
  return;
}



// FUNCTION 1425a62e0 FUN_1425a62e0 body=75 status=ok
// SIG undefined FUN_1425a62e0(void)

ulonglong FUN_1425a62e0(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionSatura_146533ff8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6340 FUN_1425a6340 body=361 status=ok
// SIG undefined FUN_1425a6340(void)

void FUN_1425a6340(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x19,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x19) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x1a,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x1a) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x1b,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x1b) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if (puVar3 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x1c) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a64a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x1c),1);
  return;
}



// FUNCTION 1425a64b0 FUN_1425a64b0 body=213 status=ok
// SIG undefined FUN_1425a64b0(void)

void FUN_1425a64b0(longlong param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  float local_18 [4];
  
  local_18[0] = *param_3;
  local_18[1] = param_3[1];
  local_18[2] = param_3[2];
  local_18[3] = param_3[3];
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,local_18);
  *param_3 = *param_3 * 0.0;
  param_3[1] = param_3[1] * 0.0;
  param_3[2] = param_3[2] * 0.0;
  param_3[3] = param_3[3] * 0.0;
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') {
          LowLevelFatalErrorHandler("Unknown",0x73b,L"Invalid number of swizzle elements: %d");
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x73b,L"Invalid number of swizzle elements: %d",
                     (int)*(char *)(param_1 + 0x1c));
          return;
        }
        param_3[3] = local_18[*(char *)(param_1 + 0x1b)];
      }
      param_3[2] = local_18[*(char *)(param_1 + 0x1a)];
    }
    param_3[1] = local_18[*(char *)(param_1 + 0x19)];
  }
  *param_3 = local_18[*(char *)(param_1 + 0x18)];
  return;
}



// FUNCTION 1425a6590 FUN_1425a6590 body=126 status=ok
// SIG undefined FUN_1425a6590(void)

ulonglong FUN_1425a6590(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 == &PTR_u_FMaterialUniformExpressionCompon_146534008) {
    ppuVar1 = (undefined **)
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (((((char)ppuVar1 != '\0') &&
         (ppuVar1 = (undefined **)0x0,
         *(char *)(param_1 + 0x1c) == *(char *)((longlong)param_2 + 0x1c))) &&
        (ppuVar1 = (undefined **)0x0, *(char *)(param_1 + 0x18) == (char)param_2[3])) &&
       (((ppuVar1 = (undefined **)0x0,
         *(char *)(param_1 + 0x19) == *(char *)((longlong)param_2 + 0x19) &&
         (ppuVar1 = (undefined **)0x0,
         *(char *)(param_1 + 0x1a) == *(char *)((longlong)param_2 + 0x1a))) &&
        (ppuVar1 = (undefined **)0x0,
        *(char *)(param_1 + 0x1b) == *(char *)((longlong)param_2 + 0x1b))))) {
      return 1;
    }
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a6610 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMaterialUniformExpressionComponentSwizzle::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1425a6680 GetNumberValue body=155 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionFloor::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  *param_3 = (float)((int)ROUND((*param_3 + *param_3) - 0.5) >> 1);
  param_3[1] = (float)((int)ROUND((param_3[1] + param_3[1]) - 0.5) >> 1);
  param_3[2] = (float)((int)ROUND((param_3[2] + param_3[2]) - 0.5) >> 1);
  param_3[3] = (float)((int)ROUND((param_3[3] + param_3[3]) - 0.5) >> 1);
  return;
}



// FUNCTION 1425a6720 FUN_1425a6720 body=75 status=ok
// SIG undefined FUN_1425a6720(void)

ulonglong FUN_1425a6720(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionFloor_146534018) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6780 GetNumberValue body=172 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionCeil::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  *param_3 = (float)-((int)ROUND(-0.5 - (*param_3 + *param_3)) >> 1);
  param_3[1] = (float)-((int)ROUND(-0.5 - (param_3[1] + param_3[1])) >> 1);
  param_3[2] = (float)-((int)ROUND(-0.5 - (param_3[2] + param_3[2])) >> 1);
  param_3[3] = (float)-((int)ROUND(-0.5 - (param_3[3] + param_3[3])) >> 1);
  return;
}



// FUNCTION 1425a6830 FUN_1425a6830 body=75 status=ok
// SIG undefined FUN_1425a6830(void)

ulonglong FUN_1425a6830(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionCeil_146534028) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6890 GetNumberValue body=155 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionRound::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  *param_3 = (float)((int)ROUND(*param_3 + *param_3 + 0.5) >> 1);
  param_3[1] = (float)((int)ROUND(param_3[1] + param_3[1] + 0.5) >> 1);
  param_3[2] = (float)((int)ROUND(param_3[2] + param_3[2] + 0.5) >> 1);
  param_3[3] = (float)((int)ROUND(param_3[3] + param_3[3] + 0.5) >> 1);
  return;
}



// FUNCTION 1425a6930 FUN_1425a6930 body=75 status=ok
// SIG undefined FUN_1425a6930(void)

ulonglong FUN_1425a6930(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionRound_146534038) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6990 GetNumberValue body=91 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionTruncate::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  *param_3 = (float)(int)*param_3;
  param_3[1] = (float)(int)param_3[1];
  param_3[2] = (float)(int)param_3[2];
  param_3[3] = (float)(int)param_3[3];
  return;
}



// FUNCTION 1425a69f0 FUN_1425a69f0 body=75 status=ok
// SIG undefined FUN_1425a69f0(void)

ulonglong FUN_1425a69f0(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionTrunca_146534048) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6a50 GetNumberValue body=171 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionSign::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  if (*param_3 <= 0.0) {
    if (0.0 <= *param_3) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = -1.0;
    }
  }
  else {
    fVar1 = 1.0;
  }
  *param_3 = fVar1;
  if (param_3[1] <= 0.0) {
    if (0.0 <= param_3[1]) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = -1.0;
    }
  }
  else {
    fVar1 = 1.0;
  }
  param_3[1] = fVar1;
  if (param_3[2] <= 0.0) {
    if (0.0 <= param_3[2]) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = -1.0;
    }
  }
  else {
    fVar1 = 1.0;
  }
  param_3[2] = fVar1;
  if (0.0 < param_3[3]) {
    param_3[3] = 1.0;
    return;
  }
  if (param_3[3] < 0.0) {
    param_3[3] = -1.0;
    return;
  }
  param_3[3] = 0.0;
  return;
}



// FUNCTION 1425a6b00 FUN_1425a6b00 body=75 status=ok
// SIG undefined FUN_1425a6b00(void)

ulonglong FUN_1425a6b00(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionSign_146534058) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6b60 GetNumberValue body=183 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionFrac::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  fVar1 = *param_3;
  fVar2 = param_3[2];
  *param_3 = fVar1 - (float)((int)ROUND((fVar1 + fVar1) - 0.5) >> 1);
  fVar1 = param_3[1];
  param_3[1] = fVar1 - (float)((int)ROUND((fVar1 + fVar1) - 0.5) >> 1);
  fVar1 = param_3[3];
  param_3[2] = fVar2 - (float)((int)ROUND((fVar2 + fVar2) - 0.5) >> 1);
  param_3[3] = fVar1 - (float)((int)ROUND((fVar1 + fVar1) - 0.5) >> 1);
  return;
}



// FUNCTION 1425a6c20 FUN_1425a6c20 body=75 status=ok
// SIG undefined FUN_1425a6c20(void)

ulonglong FUN_1425a6c20(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionFrac_146534068) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6c80 GetNumberValue body=561 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionFmod::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  longlong *plVar2;
  float fVar3;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  local_58 = DAT_1464aa6e0;
  local_54 = DAT_1464aa6e4;
  local_50 = DAT_1464aa6e8;
  local_4c = DAT_1464aa6ec;
  local_48 = DAT_1464aa6e0;
  local_44 = DAT_1464aa6e4;
  local_40 = DAT_1464aa6e8;
  local_3c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),DAT_1464aa6e8,&local_58);
  plVar2 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&local_48);
  lVar1 = (long)plVar2;
  if (1e-08 < ABS(local_48)) {
    fVar3 = (float)(int)(local_58 / local_48) * local_48;
    if (ABS(local_58) < ABS(fVar3)) {
      fVar3 = local_58;
    }
    fVar3 = local_58 - fVar3;
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage(lVar1);
    fVar3 = 0.0;
  }
  *param_3 = fVar3;
  if (1e-08 < ABS(local_44)) {
    fVar3 = (float)(int)(local_54 / local_44) * local_44;
    if (ABS(local_54) < ABS(fVar3)) {
      fVar3 = local_54;
    }
    fVar3 = local_54 - fVar3;
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage(lVar1);
    fVar3 = 0.0;
  }
  param_3[1] = fVar3;
  if (1e-08 < ABS(local_40)) {
    fVar3 = (float)(int)(local_50 / local_40) * local_40;
    if (ABS(local_50) < ABS(fVar3)) {
      fVar3 = local_50;
    }
    fVar3 = local_50 - fVar3;
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage(lVar1);
    fVar3 = 0.0;
  }
  param_3[2] = fVar3;
  if (1e-08 < ABS(local_3c)) {
    local_3c = (float)(int)(local_4c / local_3c) * local_3c;
    if (ABS(local_4c) < ABS(local_3c)) {
      local_3c = local_4c;
    }
    param_3[3] = local_4c - local_3c;
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage(lVar1);
    param_3[3] = 0.0;
  }
  return;
}



// FUNCTION 1425a6ec0 FUN_1425a6ec0 body=99 status=ok
// SIG undefined FUN_1425a6ec0(void)

undefined8 FUN_1425a6ec0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionFmod_146534078) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                        (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1425a6f40 GetNumberValue body=38 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionAbs::GetNumberValue
               (longlong param_1,undefined8 param_2,uint *param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  *param_3 = *param_3 & 0x7fffffff;
  param_3[1] = param_3[1] & 0x7fffffff;
  param_3[2] = param_3[2] & 0x7fffffff;
  param_3[3] = param_3[3] & 0x7fffffff;
  return;
}



// FUNCTION 1425a6f70 FUN_1425a6f70 body=75 status=ok
// SIG undefined FUN_1425a6f70(void)

ulonglong FUN_1425a6f70(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionAbs_146534088) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a6fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a6fd0 FUN_1425a6fd0 body=157 status=ok
// SIG undefined FUN_1425a6fd0(void)

void FUN_1425a6fd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar3 = *(undefined1 **)param_2[1];
  if (puVar3 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x18) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a7069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x18),1);
  return;
}



// FUNCTION 1425a7070 GetNumberValue body=244 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionTextureProperty::GetNumberValue
               (longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  local_res10 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
            (*(longlong **)(param_1 + 0x10),param_2,*(undefined8 *)(param_2 + 8),&local_res10,
             local_res8);
  if ((local_res10 != 0) && (plVar1 = *(longlong **)(local_res10 + 0x60), plVar1 != (longlong *)0x0)
     ) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x40))();
      plVar1 = *(longlong **)(local_res10 + 0x60);
      *param_3 = (float)uVar3;
      uVar3 = (**(code **)(*plVar1 + 0x48))();
      param_3[1] = (float)uVar3;
      return;
    }
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uVar3 = (**(code **)(*plVar1 + 0x40))();
      lVar2 = **(longlong **)(local_res10 + 0x60);
      *param_3 = 1.0 / (float)uVar3;
      uVar3 = (**(code **)(lVar2 + 0x48))();
      param_3[1] = 1.0 / (float)uVar3;
    }
  }
  return;
}



// FUNCTION 1425a7170 FUN_1425a7170 body=84 status=ok
// SIG undefined FUN_1425a7170(void)

ulonglong FUN_1425a7170(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if ((ppuVar1 == &PTR_u_FMaterialUniformExpressionTextur_146534098) &&
     (ppuVar1 = (undefined **)0x0, *(char *)(param_1 + 0x18) == (char)param_2[3])) {
                    /* WARNING: Could not recover jumptable at 0x0001425a71b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),param_2[2]);
    return uVar2;
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a71e0 FUN_1425a71e0 body=105 status=ok
// SIG undefined FUN_1425a71e0(void)

void FUN_1425a71e0(longlong param_1,longlong *param_2)

{
  char local_res8 [8];
  
  local_res8[0] = *(char *)(param_1 + 0x30);
  (**(code **)(*param_2 + 8))(param_2,local_res8);
  if (local_res8[0] != '\0') {
    if (*(char *)(param_1 + 0x30) == '\0') {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x28);
  }
  FUN_1425ccf80(param_1,param_2);
  return;
}



// FUNCTION 1425a7250 FUN_1425a7250 body=113 status=ok
// SIG undefined FUN_1425a7250(void)

ulonglong FUN_1425a7250(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 == &PTR_u_FMaterialUniformExpressionExtern_1465340a8) {
    ppuVar1 = (undefined **)
              FMaterialUniformExpressionExternalTextureBase::IsIdentical(param_1,param_2);
    if ((char)ppuVar1 != '\0') {
      ppuVar1 = (undefined **)0x0;
      if (*(char *)(param_1 + 0x30) == (char)param_2[6]) {
        if (*(char *)(param_1 + 0x30) == '\0') {
          return 1;
        }
        return CONCAT71((int7)((ulonglong)param_2[5] >> 8),
                        *(longlong *)(param_1 + 0x28) == param_2[5]);
      }
    }
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a72d0 GetNumberValue body=111 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionExternalTextureCoordinateScaleRotation::GetNumberValue
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = *(char *)(param_1 + 0x30) != '\0';
  if ((bool)local_10) {
    local_18 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1425cbcd0(param_1,&local_28,param_2,&local_18);
  if (((local_1c != 0 || local_20 != 0) || local_28 != 0) || local_24 != 0) {
    uVar2 = FExternalTextureRegistry::Get();
    cVar1 = FExternalTextureRegistry::GetExternalTextureCoordinateScaleRotation
                      (uVar2,&local_28,param_3);
    if (cVar1 != '\0') {
      return;
    }
  }
  *param_3 = 0x3f800000;
  param_3[1] = 0x3f80000000000000;
  return;
}



// FUNCTION 1425a7340 `scalar_deleting_destructor' body=53 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMaterialUniformExpressionExternalTextureCoordinateOffset::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 6) != '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1425a7390 FUN_1425a7390 body=113 status=ok
// SIG undefined FUN_1425a7390(void)

ulonglong FUN_1425a7390(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 == &PTR_u_FMaterialUniformExpressionExtern_1465340b8) {
    ppuVar1 = (undefined **)
              FMaterialUniformExpressionExternalTextureBase::IsIdentical(param_1,param_2);
    if ((char)ppuVar1 != '\0') {
      ppuVar1 = (undefined **)0x0;
      if (*(char *)(param_1 + 0x30) == (char)param_2[6]) {
        if (*(char *)(param_1 + 0x30) == '\0') {
          return 1;
        }
        return CONCAT71((int7)((ulonglong)param_2[5] >> 8),
                        *(longlong *)(param_1 + 0x28) == param_2[5]);
      }
    }
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a7410 GetNumberValue body=110 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionExternalTextureCoordinateOffset::GetNumberValue
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = *(char *)(param_1 + 0x30) != '\0';
  if ((bool)local_10) {
    local_18 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_1425cbcd0(param_1,&local_28,param_2,&local_18);
  if (((local_1c != 0 || local_20 != 0) || local_28 != 0) || local_24 != 0) {
    uVar2 = FExternalTextureRegistry::Get();
    cVar1 = FExternalTextureRegistry::GetExternalTextureCoordinateOffset(uVar2,&local_28,param_3);
    if (cVar1 != '\0') {
      return;
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 1425a7490 FUN_1425a7490 body=31 status=ok
// SIG undefined FUN_1425a7490(void)

bool FUN_1425a7490(undefined8 param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  return ppuVar1 == &PTR_u_FMaterialUniformExpressionOrigin_1465340c8;
}



// FUNCTION 1425a74b0 FUN_1425a74b0 body=200 status=ok
// SIG undefined FUN_1425a74b0(void)

void FUN_1425a74b0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar2 = (longlong *)param_2[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  return;
}



// FUNCTION 1425a7580 FUN_1425a7580 body=112 status=ok
// SIG undefined FUN_1425a7580(void)

void FUN_1425a7580(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  longlong *plVar2;
  
  *param_5 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  plVar2 = (longlong *)(**(code **)(*param_3 + 0x340))(param_3);
  if ((-1 < iVar1) && (iVar1 < (int)plVar2[1])) {
    *param_4 = *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8);
    return;
  }
  *param_4 = 0;
  if (DAT_146aff640 == '\0') {
    DAT_146aff640 = '\x01';
  }
  return;
}



// FUNCTION 1425a75f0 FUN_1425a75f0 body=102 status=ok
// SIG undefined FUN_1425a75f0(void)

void FUN_1425a75f0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  plVar2 = (longlong *)(**(code **)(*param_3 + 0x340))(param_3);
  if ((-1 < iVar1) && (iVar1 < (int)plVar2[1])) {
    *param_4 = *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8);
    return;
  }
  *param_4 = 0;
  if (DAT_146aff640 == '\0') {
    DAT_146aff640 = '\x01';
  }
  return;
}



// FUNCTION 1425a7660 IsIdentical body=91 status=ok
// SIG undefined IsIdentical(void)

ulonglong FMaterialUniformExpressionTexture::IsIdentical(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (uVar2 != uVar1) {
    return uVar2 & 0xffffffffffffff00;
  }
  return (ulonglong)CONCAT31((int3)((uint)(int)param_2[2] >> 8),(int)param_1[2] == (int)param_2[2]);
}



// FUNCTION 1425a76f0 FUN_1425a76f0 body=87 status=ok
// SIG undefined FUN_1425a76f0(void)

void FUN_1425a76f0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140da9f70(param_2,param_1 + 0x10);
  puVar1 = *(undefined1 **)plVar2[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)plVar2[1])[1]) {
    *(undefined1 *)(param_1 + 0x20) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a7743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2,(undefined1 *)(param_1 + 0x20),1);
  return;
}



// FUNCTION 1425a7760 FUN_1425a7760 body=116 status=ok
// SIG undefined FUN_1425a7760(void)

ulonglong FUN_1425a7760(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if ((((ppuVar1 == &PTR_u_FMaterialUniformExpressionConsta_146533e38) &&
       (ppuVar1 = (undefined **)0x0, (char)param_2[4] == *(char *)(param_1 + 0x20))) &&
      (*(float *)(param_1 + 0x10) == *(float *)(param_2 + 2))) &&
     (((*(float *)(param_1 + 0x14) == *(float *)((longlong)param_2 + 0x14) &&
       (*(float *)(param_1 + 0x18) == *(float *)(param_2 + 3))) &&
      (*(float *)(param_1 + 0x1c) == *(float *)((longlong)param_2 + 0x1c))))) {
    return 1;
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a77f0 Serialize body=41 status=ok
// SIG undefined Serialize(void)

void FMaterialUniformExpressionVectorParameter::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1425806b0(param_2,param_1 + 0x10);
  FUN_140da9f70(uVar1,param_1 + 0x20);
  return;
}



// FUNCTION 1425a7820 FUN_1425a7820 body=94 status=ok
// SIG undefined FUN_1425a7820(void)

void FUN_1425a7820(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_3[1] = 0;
  *param_3 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(plVar1 + 0x22) & 2) == 0) {
      if ((*(byte *)(plVar1 + 0x22) & 1) != 0) goto LAB_1425a786c;
      cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1 + 0x10,param_3,param_2);
    }
    else {
      cVar3 = FUN_142598790(plVar1,param_1 + 0x10);
    }
    if (cVar3 != '\0') {
      return;
    }
  }
LAB_1425a786c:
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *param_3 = *(undefined8 *)(param_1 + 0x20);
  param_3[1] = uVar2;
  return;
}



// FUNCTION 1425a7880 FUN_1425a7880 body=316 status=ok
// SIG undefined FUN_1425a7880(void)

void FUN_1425a7880(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar9 = *(longlong **)(param_3 + 0x10);
  plVar1 = (longlong *)(param_3 + 0x10);
  iVar8 = *(int *)(param_3 + 0x18);
  plVar3 = plVar9 + iVar8;
  if (plVar9 != plVar3) {
    do {
      lVar4 = *plVar9;
      ppuVar6 = (undefined **)(**(code **)(*param_1 + 8))(param_1);
      if ((((((ppuVar6 == &PTR_u_FMaterialUniformExpressionVector_146533e48) &&
             (*(int *)(lVar4 + 0x10) == (int)param_1[2])) &&
            (*(int *)(lVar4 + 0x14) == *(int *)((longlong)param_1 + 0x14))) &&
           ((*(char *)(lVar4 + 0x1b) == *(char *)((longlong)param_1 + 0x1b) &&
            (*(int *)(lVar4 + 0x1c) == *(int *)((longlong)param_1 + 0x1c))))) &&
          ((*(float *)(param_1 + 4) == *(float *)(lVar4 + 0x20) &&
           ((*(float *)((longlong)param_1 + 0x24) == *(float *)(lVar4 + 0x24) &&
            (*(float *)(param_1 + 5) == *(float *)(lVar4 + 0x28))))))) &&
         (*(float *)((longlong)param_1 + 0x2c) == *(float *)(lVar4 + 0x2c))) {
        puVar5 = (undefined8 *)*param_2;
        *param_2 = lVar4;
        if (lVar4 != 0) {
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        }
        if (puVar5 == (undefined8 *)0x0) {
          return;
        }
        piVar2 = (int *)(puVar5 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 != 0) {
          return;
        }
        (**(code **)*puVar5)(puVar5,1);
        return;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar3);
    iVar8 = *(int *)(param_3 + 0x18);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = puVar5;
  do {
    if (puVar7 == puVar5 + iVar8) {
LAB_1425a7981:
      *(int *)(param_3 + 0x18) = iVar8 + 1;
      if (*(int *)(param_3 + 0x1c) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong **)(*plVar1 + (longlong)iVar8 * 8) = param_1;
      return;
    }
    if ((longlong *)*puVar7 == param_1) {
      if ((int)((longlong)puVar7 - (longlong)puVar5 >> 3) != -1) {
        return;
      }
      goto LAB_1425a7981;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}



// FUNCTION 1425a79c0 FUN_1425a79c0 body=140 status=ok
// SIG undefined FUN_1425a79c0(void)

ulonglong FUN_1425a79c0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if ((((ppuVar2 == &PTR_u_FMaterialUniformExpressionVector_146533e48) &&
       (ppuVar2 = (undefined **)(ulonglong)*(uint *)(param_2 + 2),
       *(uint *)(param_1 + 0x10) == *(uint *)(param_2 + 2))) &&
      (ppuVar2 = (undefined **)(ulonglong)*(uint *)((longlong)param_2 + 0x14),
      *(uint *)(param_1 + 0x14) == *(uint *)((longlong)param_2 + 0x14))) &&
     (ppuVar2 = (undefined **)0x0, *(char *)(param_1 + 0x1b) == *(char *)((longlong)param_2 + 0x1b))
     ) {
    uVar1 = *(uint *)((longlong)param_2 + 0x1c);
    ppuVar2 = (undefined **)(ulonglong)uVar1;
    if (((*(uint *)(param_1 + 0x1c) == uVar1) &&
        (*(float *)(param_2 + 4) == *(float *)(param_1 + 0x20))) &&
       ((*(float *)((longlong)param_2 + 0x24) == *(float *)(param_1 + 0x24) &&
        ((*(float *)(param_2 + 5) == *(float *)(param_1 + 0x28) &&
         (*(float *)((longlong)param_2 + 0x2c) == *(float *)(param_1 + 0x2c))))))) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return (ulonglong)ppuVar2 & 0xffffffffffffff00;
}



// FUNCTION 1425a7a60 FUN_1425a7a60 body=124 status=ok
// SIG undefined FUN_1425a7a60(void)

void FUN_1425a7a60(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x20);
  plVar3 = (longlong *)FUN_1425806b0(param_2,param_1 + 0x10);
  puVar2 = *(undefined4 **)plVar3[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar3[1])[1]) {
    *puVar1 = *puVar2;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    return;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,4);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar3,puVar1,4);
  }
  return;
}



// FUNCTION 1425a7ae0 FUN_1425a7ae0 body=131 status=ok
// SIG undefined FUN_1425a7ae0(void)

void FUN_1425a7ae0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 local_res10 [6];
  
  plVar2 = (longlong *)*param_2;
  local_res10[0] = 0;
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)(plVar2 + 0x22) & 2) == 0) {
      if ((*(byte *)(plVar2 + 0x22) & 1) == 0) {
        cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1 + 0x10,local_res10,param_2);
      }
      else {
        cVar3 = FUN_14256dbf0();
      }
    }
    else {
      cVar3 = FUN_1425937e0();
    }
    if (cVar3 != '\0') {
      *param_3 = local_res10[0];
      param_3[1] = local_res10[0];
      param_3[2] = local_res10[0];
      param_3[3] = local_res10[0];
      return;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *param_3 = uVar1;
  param_3[1] = uVar1;
  param_3[2] = uVar1;
  param_3[3] = uVar1;
  return;
}



// FUNCTION 1425a7b70 FUN_1425a7b70 body=283 status=ok
// SIG undefined FUN_1425a7b70(void)

void FUN_1425a7b70(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_3;
  iVar7 = (int)param_3[1];
  plVar6 = plVar8 + iVar7;
  if (plVar8 != plVar6) {
    do {
      lVar2 = *plVar8;
      ppuVar5 = (undefined **)(**(code **)(*param_1 + 8))(param_1);
      if ((((ppuVar5 == &PTR_u_FMaterialUniformExpressionScalar_146533e58) &&
           (*(int *)(lVar2 + 0x10) == (int)param_1[2])) &&
          (*(int *)(lVar2 + 0x14) == *(int *)((longlong)param_1 + 0x14))) &&
         (((*(char *)(lVar2 + 0x1b) == *(char *)((longlong)param_1 + 0x1b) &&
           (*(int *)(lVar2 + 0x1c) == *(int *)((longlong)param_1 + 0x1c))) &&
          (*(float *)(param_1 + 4) == *(float *)(lVar2 + 0x20))))) {
        puVar3 = (undefined8 *)*param_2;
        *param_2 = lVar2;
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar6);
    iVar7 = (int)param_3[1];
    plVar8 = (longlong *)*param_3;
  }
  plVar6 = plVar8;
  do {
    if (plVar6 == plVar8 + iVar7) {
LAB_1425a7c4c:
      iVar4 = (int)param_3[1] + 1;
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
      }
      *(longlong **)(*param_3 + (longlong)iVar7 * 8) = param_1;
      return;
    }
    if ((longlong *)*plVar6 == param_1) {
      if ((int)((longlong)plVar6 - (longlong)plVar8 >> 3) != -1) {
        return;
      }
      goto LAB_1425a7c4c;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 1425a7c90 FUN_1425a7c90 body=107 status=ok
// SIG undefined FUN_1425a7c90(void)

ulonglong FUN_1425a7c90(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if ((((ppuVar2 == &PTR_u_FMaterialUniformExpressionScalar_146533e58) &&
       (ppuVar2 = (undefined **)(ulonglong)*(uint *)(param_2 + 2),
       *(uint *)(param_1 + 0x10) == *(uint *)(param_2 + 2))) &&
      (ppuVar2 = (undefined **)(ulonglong)*(uint *)((longlong)param_2 + 0x14),
      *(uint *)(param_1 + 0x14) == *(uint *)((longlong)param_2 + 0x14))) &&
     (ppuVar2 = (undefined **)0x0, *(char *)(param_1 + 0x1b) == *(char *)((longlong)param_2 + 0x1b))
     ) {
    uVar1 = *(uint *)((longlong)param_2 + 0x1c);
    ppuVar2 = (undefined **)(ulonglong)uVar1;
    if ((*(uint *)(param_1 + 0x1c) == uVar1) &&
       (*(float *)(param_2 + 4) == *(float *)(param_1 + 0x20))) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return (ulonglong)ppuVar2 & 0xffffffffffffff00;
}



// FUNCTION 1425a7d10 FUN_1425a7d10 body=212 status=ok
// SIG undefined FUN_1425a7d10(void)

void FUN_1425a7d10(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  
  FUN_1425806b0(param_2,param_1 + 0x18);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar2 = (longlong *)param_2[1];
  if ((undefined4 *)plVar2[1] < (undefined4 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  return;
}



// FUNCTION 1425a7df0 FUN_1425a7df0 body=192 status=ok
// SIG undefined FUN_1425a7df0(void)

void FUN_1425a7df0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  
  *param_5 = *(undefined4 *)(param_1 + 0x14);
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    if ((*(byte *)(plVar3 + 0x22) & 2) == 0) {
      if ((*(byte *)(plVar3 + 0x22) & 1) != 0) goto LAB_1425a7e4d;
      cVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1 + 0x18,param_4,param_2);
    }
    else {
      cVar2 = FUN_1425977c0(plVar3,param_1 + 0x18,param_4);
    }
    if (cVar2 != '\0') {
      return;
    }
  }
LAB_1425a7e4d:
  iVar1 = *(int *)(param_1 + 0x10);
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x340))(param_3);
  if ((-1 < iVar1) && (iVar1 < (int)plVar3[1])) {
    *param_4 = *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8);
    return;
  }
  *param_4 = 0;
  if (DAT_146aff640 == '\0') {
    DAT_146aff640 = '\x01';
  }
  return;
}



// FUNCTION 1425a7eb0 FUN_1425a7eb0 body=311 status=ok
// SIG undefined FUN_1425a7eb0(void)

void FUN_1425a7eb0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  
  plVar11 = *(longlong **)(param_3 + 0x20);
  plVar1 = (longlong *)(param_3 + 0x20);
  iVar10 = *(int *)(param_3 + 0x28);
  plVar3 = plVar11 + iVar10;
  if (plVar11 != plVar3) {
    do {
      plVar4 = (longlong *)*plVar11;
      ppuVar6 = (undefined **)(**(code **)(*param_1 + 8))(param_1);
      if ((((ppuVar6 == &PTR_u_FMaterialUniformExpressionTextur_146533e68) &&
           ((int)plVar4[3] == (int)param_1[3])) &&
          (*(int *)((longlong)plVar4 + 0x1c) == *(int *)((longlong)param_1 + 0x1c))) &&
         ((*(char *)((longlong)plVar4 + 0x23) == *(char *)((longlong)param_1 + 0x23) &&
          (*(int *)((longlong)plVar4 + 0x24) == *(int *)((longlong)param_1 + 0x24))))) {
        lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
        lVar8 = (**(code **)(*param_1 + 8))(param_1);
        if ((lVar7 == lVar8) && ((int)plVar4[2] == (int)param_1[2])) {
          puVar5 = (undefined8 *)*param_2;
          *param_2 = (longlong)plVar4;
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          if (puVar5 == (undefined8 *)0x0) {
            return;
          }
          piVar2 = (int *)(puVar5 + 1);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 != 0) {
            return;
          }
          (**(code **)*puVar5)(puVar5,1);
          return;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
    iVar10 = *(int *)(param_3 + 0x28);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar9 = puVar5;
  do {
    if (puVar9 == puVar5 + iVar10) {
LAB_1425a7fae:
      *(int *)(param_3 + 0x28) = iVar10 + 1;
      if (*(int *)(param_3 + 0x2c) < iVar10 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong **)((longlong)iVar10 * 8 + *plVar1) = param_1;
      return;
    }
    if ((longlong *)*puVar9 == param_1) {
      if ((int)((longlong)puVar9 - (longlong)puVar5 >> 3) != -1) {
        return;
      }
      goto LAB_1425a7fae;
    }
    puVar9 = puVar9 + 1;
  } while( true );
}



// FUNCTION 1425a7ff0 FUN_1425a7ff0 body=140 status=ok
// SIG undefined FUN_1425a7ff0(void)

ulonglong FUN_1425a7ff0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if ((((ppuVar2 == &PTR_u_FMaterialUniformExpressionTextur_146533e68) &&
       (ppuVar2 = (undefined **)(ulonglong)*(uint *)(param_2 + 3),
       *(uint *)(param_1 + 3) == *(uint *)(param_2 + 3))) &&
      (ppuVar2 = (undefined **)(ulonglong)*(uint *)((longlong)param_2 + 0x1c),
      *(uint *)((longlong)param_1 + 0x1c) == *(uint *)((longlong)param_2 + 0x1c))) &&
     ((ppuVar2 = (undefined **)0x0,
      *(char *)((longlong)param_1 + 0x23) == *(char *)((longlong)param_2 + 0x23) &&
      (ppuVar2 = (undefined **)(ulonglong)*(uint *)((longlong)param_2 + 0x24),
      *(uint *)((longlong)param_1 + 0x24) == *(uint *)((longlong)param_2 + 0x24))))) {
    ppuVar3 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
    ppuVar2 = (undefined **)(**(code **)(*param_1 + 8))(param_1);
    if (ppuVar2 == ppuVar3) {
      uVar1 = *(uint *)(param_2 + 2);
      ppuVar2 = (undefined **)(ulonglong)uVar1;
      if (*(uint *)(param_1 + 2) == uVar1) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return (ulonglong)ppuVar2 & 0xffffffffffffff00;
}



// FUNCTION 1425a80b0 FUN_1425a80b0 body=110 status=ok
// SIG undefined FUN_1425a80b0(void)

void FUN_1425a80b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a811a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 1425a8120 GetNumberValue body=183 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionSine::GetNumberValue
               (longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  if (*(char *)(param_1 + 0x18) == '\0') {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(local_18);
  }
  else {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(local_18);
  }
  *param_3 = fVar1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(fStack_14);
  }
  else {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(fStack_14);
  }
  param_3[1] = fVar1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(fStack_10);
  }
  else {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(fStack_10);
  }
  param_3[2] = fVar1;
  if (*(char *)(param_1 + 0x18) != '\0') {
    fVar1 = ::_guard_xfg_dispatch_icall_nop(fStack_c);
    param_3[3] = fVar1;
    return;
  }
  fVar1 = ::_guard_xfg_dispatch_icall_nop(fStack_c);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a81e0 FUN_1425a81e0 body=90 status=ok
// SIG undefined FUN_1425a81e0(void)

ulonglong FUN_1425a81e0(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 == &PTR_u_FMaterialUniformExpressionSine_146533e98) {
    ppuVar1 = (undefined **)
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (((char)ppuVar1 != '\0') &&
       (ppuVar1 = (undefined **)0x0, *(char *)(param_1 + 0x18) == (char)param_2[3])) {
      return 1;
    }
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a8250 FUN_1425a8250 body=198 status=ok
// SIG undefined FUN_1425a8250(void)

void FUN_1425a8250(longlong param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_38 = DAT_1464aa6e0;
  fStack_34 = DAT_1464aa6e4;
  fStack_30 = DAT_1464aa6e8;
  fStack_2c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_38);
  if (-1.0 <= local_38) {
    fVar1 = local_38;
    if (1.0 <= local_38) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  *param_3 = fVar1;
  if (-1.0 <= fStack_34) {
    fVar1 = fStack_34;
    if (1.0 <= fStack_34) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  param_3[1] = fVar1;
  if (-1.0 <= fStack_30) {
    fVar1 = fStack_30;
    if (1.0 <= fStack_30) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  param_3[2] = fVar1;
  fVar1 = -1.0;
  if ((-1.0 <= fStack_2c) && (fVar1 = fStack_2c, 1.0 <= fStack_2c)) {
    fVar1 = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a8320 FUN_1425a8320 body=75 status=ok
// SIG undefined FUN_1425a8320(void)

ulonglong FUN_1425a8320(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionArcSin_146533ea8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a8380 FUN_1425a8380 body=198 status=ok
// SIG undefined FUN_1425a8380(void)

void FUN_1425a8380(longlong param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_38 = DAT_1464aa6e0;
  fStack_34 = DAT_1464aa6e4;
  fStack_30 = DAT_1464aa6e8;
  fStack_2c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_38);
  if (-1.0 <= local_38) {
    fVar1 = local_38;
    if (1.0 <= local_38) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  *param_3 = fVar1;
  if (-1.0 <= fStack_34) {
    fVar1 = fStack_34;
    if (1.0 <= fStack_34) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  param_3[1] = fVar1;
  if (-1.0 <= fStack_30) {
    fVar1 = fStack_30;
    if (1.0 <= fStack_30) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = -1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  param_3[2] = fVar1;
  fVar1 = -1.0;
  if ((-1.0 <= fStack_2c) && (fVar1 = fStack_2c, 1.0 <= fStack_2c)) {
    fVar1 = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a8450 FUN_1425a8450 body=75 status=ok
// SIG undefined FUN_1425a8450(void)

ulonglong FUN_1425a8450(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionArcCos_146533eb8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a84b0 FUN_1425a84b0 body=105 status=ok
// SIG undefined FUN_1425a84b0(void)

void FUN_1425a84b0(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_18);
  *param_3 = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_14);
  param_3[1] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_10);
  param_3[2] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_c);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a8520 FUN_1425a8520 body=75 status=ok
// SIG undefined FUN_1425a8520(void)

ulonglong FUN_1425a8520(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionTangen_146533ec8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a8580 FUN_1425a8580 body=105 status=ok
// SIG undefined FUN_1425a8580(void)

void FUN_1425a8580(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_18);
  *param_3 = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_14);
  param_3[1] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_10);
  param_3[2] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_c);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a85f0 FUN_1425a85f0 body=75 status=ok
// SIG undefined FUN_1425a85f0(void)

ulonglong FUN_1425a85f0(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionArcTan_146533ed8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a8650 FUN_1425a8650 body=184 status=ok
// SIG undefined FUN_1425a8650(void)

void FUN_1425a8650(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = DAT_1464aa6e0;
  uStack_14 = DAT_1464aa6e4;
  uStack_10 = DAT_1464aa6e8;
  uStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  local_28 = DAT_1464aa6e0;
  uStack_24 = DAT_1464aa6e4;
  uStack_20 = DAT_1464aa6e8;
  uStack_1c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_2,&local_28);
  uVar1 = FGenericPlatformMath::Atan2(local_18,local_28);
  *param_3 = uVar1;
  uVar1 = FGenericPlatformMath::Atan2(uStack_14,uStack_24);
  param_3[1] = uVar1;
  uVar1 = FGenericPlatformMath::Atan2(uStack_10,uStack_20);
  param_3[2] = uVar1;
  uVar1 = FGenericPlatformMath::Atan2(uStack_c,uStack_1c);
  param_3[3] = uVar1;
  return;
}



// FUNCTION 1425a8710 FUN_1425a8710 body=99 status=ok
// SIG undefined FUN_1425a8710(void)

undefined8 FUN_1425a8710(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionArcTan_146533ee8) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                      (*(longlong **)(param_1 + 0x10),param_2[2]);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                        (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1425a8790 FUN_1425a8790 body=57 status=ok
// SIG undefined FUN_1425a8790(void)

void FUN_1425a8790(longlong param_1,undefined8 param_2,float *param_3)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  *param_3 = local_18 * 57.295776;
  param_3[1] = fStack_14 * 57.295776;
  param_3[2] = fStack_10 * 57.295776;
  param_3[3] = fStack_c * 57.295776;
  return;
}



// FUNCTION 1425a87d0 FUN_1425a87d0 body=75 status=ok
// SIG undefined FUN_1425a87d0(void)

ulonglong FUN_1425a87d0(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionDegree_146533ef8) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a8830 FUN_1425a8830 body=57 status=ok
// SIG undefined FUN_1425a8830(void)

void FUN_1425a8830(longlong param_1,undefined8 param_2,float *param_3)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  *param_3 = local_18 * 0.017453292;
  param_3[1] = fStack_14 * 0.017453292;
  param_3[2] = fStack_10 * 0.017453292;
  param_3[3] = fStack_c * 0.017453292;
  return;
}



// FUNCTION 1425a8870 FUN_1425a8870 body=75 status=ok
// SIG undefined FUN_1425a8870(void)

ulonglong FUN_1425a8870(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionRadian_146533f08) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a88b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a88d0 FUN_1425a88d0 body=105 status=ok
// SIG undefined FUN_1425a88d0(void)

void FUN_1425a88d0(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_18);
  *param_3 = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_14);
  param_3[1] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_10);
  param_3[2] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_c);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a8940 FUN_1425a8940 body=75 status=ok
// SIG undefined FUN_1425a8940(void)

ulonglong FUN_1425a8940(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionExpone_146533f18) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a89a0 FUN_1425a89a0 body=135 status=ok
// SIG undefined FUN_1425a89a0(void)

void FUN_1425a89a0(longlong param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_28 = DAT_1464aa6e0;
  fStack_24 = DAT_1464aa6e4;
  fStack_20 = DAT_1464aa6e8;
  fStack_1c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_28);
  fVar1 = _guard_xfg_dispatch_icall_nop(2.0,local_28);
  *param_3 = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(2.0,fStack_24);
  param_3[1] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(2.0,fStack_20);
  param_3[2] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(2.0,fStack_1c);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a8a30 FUN_1425a8a30 body=75 status=ok
// SIG undefined FUN_1425a8a30(void)

ulonglong FUN_1425a8a30(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionExpone_146533f28) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a8a90 FUN_1425a8a90 body=105 status=ok
// SIG undefined FUN_1425a8a90(void)

void FUN_1425a8a90(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_18);
  *param_3 = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_14);
  param_3[1] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_10);
  param_3[2] = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fStack_c);
  param_3[3] = fVar1;
  return;
}



// FUNCTION 1425a8b00 FUN_1425a8b00 body=75 status=ok
// SIG undefined FUN_1425a8b00(void)

ulonglong FUN_1425a8b00(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionLogari_146533f38) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a8b50 FUN_1425a8b50 body=262 status=ok
// SIG undefined FUN_1425a8b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425a8b50(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
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
  local_34 = 0;
  local_70 = &local_58;
  local_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_78 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x30);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_70 = (undefined8 *)CONCAT71(local_70._1_7_,1);
  local_78 = 0x10;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 1425a8c60 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FDummyPrevTransformBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FDummyPrevTransformBuffer",0x34);
  return param_2;
}



// FUNCTION 1425a8ca0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDummyPrevTransformBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145119938;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425a8d10 FUN_1425a8d10 body=227 status=ok
// SIG undefined FUN_1425a8d10(void)

void FUN_1425a8d10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  local_res8 = *(longlong *)(param_1 + 0x18);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar3 = *(undefined1 **)param_2[1];
  if (puVar3 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x20) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a8def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x20),1);
  return;
}



// FUNCTION 1425a8e00 FUN_1425a8e00 body=787 status=ok
// SIG undefined FUN_1425a8e00(void)

void FUN_1425a8e00(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  local_48 = DAT_1464aa6e0;
  local_44 = DAT_1464aa6e4;
  local_40 = DAT_1464aa6e8;
  local_3c = DAT_1464aa6ec;
  local_38 = DAT_1464aa6e0;
  local_34 = DAT_1464aa6e4;
  local_30 = DAT_1464aa6e8;
  local_2c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),DAT_1464aa6e8,&local_48);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_2,&local_38);
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 0:
    fVar1 = _guard_xfg_dispatch_icall_nop(local_48);
    *param_3 = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_44);
    param_3[1] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_40);
    param_3[2] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_3c);
    break;
  case 1:
    fVar1 = _guard_xfg_dispatch_icall_nop(local_48);
    *param_3 = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_44);
    param_3[1] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_40);
    param_3[2] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_3c);
    break;
  case 2:
    fVar1 = _guard_xfg_dispatch_icall_nop(local_48);
    *param_3 = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_44);
    param_3[1] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_40);
    param_3[2] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_3c);
    break;
  case 3:
    if (-1.0 <= local_48) {
      fVar1 = local_48;
      if (1.0 <= local_48) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    *param_3 = fVar1;
    if (-1.0 <= local_44) {
      fVar1 = local_44;
      if (1.0 <= local_44) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    param_3[1] = fVar1;
    if (-1.0 <= local_40) {
      fVar1 = local_40;
      if (1.0 <= local_40) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    param_3[2] = fVar1;
    fVar1 = -1.0;
    if ((-1.0 <= local_3c) && (fVar1 = local_3c, 1.0 <= local_3c)) {
      fVar1 = 1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    break;
  case 4:
    if (-1.0 <= local_48) {
      fVar1 = local_48;
      if (1.0 <= local_48) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    *param_3 = fVar1;
    if (-1.0 <= local_44) {
      fVar1 = local_44;
      if (1.0 <= local_44) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    param_3[1] = fVar1;
    if (-1.0 <= local_40) {
      fVar1 = local_40;
      if (1.0 <= local_40) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = -1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    param_3[2] = fVar1;
    fVar1 = -1.0;
    if ((-1.0 <= local_3c) && (fVar1 = local_3c, 1.0 <= local_3c)) {
      fVar1 = 1.0;
    }
    fVar1 = _guard_xfg_dispatch_icall_nop(fVar1);
    break;
  case 5:
    fVar1 = _guard_xfg_dispatch_icall_nop(local_48);
    *param_3 = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_44);
    param_3[1] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_40);
    param_3[2] = fVar1;
    fVar1 = _guard_xfg_dispatch_icall_nop(local_3c);
    break;
  case 6:
    fVar1 = (float)FGenericPlatformMath::Atan2(local_48,local_38);
    *param_3 = fVar1;
    fVar1 = (float)FGenericPlatformMath::Atan2(local_44,local_34);
    param_3[1] = fVar1;
    fVar1 = (float)FGenericPlatformMath::Atan2(local_40,local_30);
    param_3[2] = fVar1;
    fVar1 = (float)FGenericPlatformMath::Atan2(local_3c,local_2c);
    break;
  default:
    goto switchD_1425a8eb9_default;
  }
  param_3[3] = fVar1;
switchD_1425a8eb9_default:
  return;
}



// FUNCTION 1425a9130 FUN_1425a9130 body=108 status=ok
// SIG undefined FUN_1425a9130(void)

ulonglong FUN_1425a9130(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 == &PTR_u_FMaterialUniformExpressionTrigMa_146533f48) {
    ppuVar1 = (undefined **)
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),param_2[2]);
    if ((char)ppuVar1 != '\0') {
      ppuVar1 = (undefined **)
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                          (*(longlong **)(param_1 + 0x18),param_2[3]);
      if (((char)ppuVar1 != '\0') &&
         (ppuVar1 = (undefined **)0x0, *(char *)(param_1 + 0x20) == (char)param_2[4])) {
        return 1;
      }
    }
  }
  return (ulonglong)ppuVar1 & 0xffffffffffffff00;
}



// FUNCTION 1425a91a0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451199b0;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__145119938;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425a9220 GetNumberValue body=53 status=ok
// SIG undefined GetNumberValue(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FMaterialUniformExpressionSquareRoot::GetNumberValue
               (longlong param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = _DAT_1464aa6e0;
  uStack_10 = _DAT_1464aa6e8;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  auVar1._8_8_ = uStack_10;
  auVar1._0_8_ = local_18;
  auVar1 = sqrtps(auVar1,auVar1);
  *param_3 = auVar1;
  return;
}



// FUNCTION 1425a9260 FUN_1425a9260 body=75 status=ok
// SIG undefined FUN_1425a9260(void)

ulonglong FUN_1425a9260(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionSquare_146533f58) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a92a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a92c0 FUN_1425a92c0 body=216 status=ok
// SIG undefined FUN_1425a92c0(void)

void FUN_1425a92c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong local_res8;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  local_res8 = *(longlong *)(param_1 + 0x10);
  FUN_1425aef00(param_2,&local_res8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = local_res8;
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  iVar4 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (10 < iVar4) {
    puVar3 = *(undefined4 **)param_2[1];
    if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *(undefined4 *)(param_1 + 0x18) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      return;
    }
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x18,4);
    }
  }
  return;
}



// FUNCTION 1425a93a0 GetNumberValue body=150 status=ok
// SIG undefined GetNumberValue(void)

void FMaterialUniformExpressionLength::GetNumberValue
               (longlong param_1,undefined4 param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = DAT_1464aa6e0;
  fStack_14 = DAT_1464aa6e4;
  fStack_10 = DAT_1464aa6e8;
  fStack_c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_18);
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 2) {
    fStack_14 = 0.0;
  }
  else {
    fStack_14 = fStack_14 * fStack_14;
  }
  if (uVar1 < 4) {
    fStack_10 = 0.0;
  }
  else {
    fStack_10 = fStack_10 * fStack_10;
  }
  if (uVar1 < 8) {
    fStack_c = 0.0;
  }
  else {
    fStack_c = fStack_c * fStack_c;
  }
  fVar2 = SQRT(fStack_c + local_18 * local_18 + fStack_14 + fStack_10);
  *param_3 = fVar2;
  param_3[1] = fVar2;
  param_3[2] = fVar2;
  param_3[3] = fVar2;
  return;
}



// FUNCTION 1425a9440 FUN_1425a9440 body=89 status=ok
// SIG undefined FUN_1425a9440(void)

ulonglong FUN_1425a9440(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar2 == &PTR_u_FMaterialUniformExpressionLength_146533f68) {
    ppuVar2 = (undefined **)
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                        (*(longlong **)(param_1 + 0x10),param_2[2]);
    if ((char)ppuVar2 != '\0') {
      uVar1 = *(uint *)(param_2 + 3);
      ppuVar2 = (undefined **)(ulonglong)uVar1;
      if (*(uint *)(param_1 + 0x18) == uVar1) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return (ulonglong)ppuVar2 & 0xffffffffffffff00;
}



// FUNCTION 1425a94b0 FUN_1425a94b0 body=470 status=ok
// SIG undefined FUN_1425a94b0(void)

void FUN_1425a94b0(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_28 = DAT_1464aa6e0;
  fStack_24 = DAT_1464aa6e4;
  fStack_20 = DAT_1464aa6e8;
  fStack_1c = DAT_1464aa6ec;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,&local_28);
  fVar3 = local_28;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = fStack_24;
  *param_3 = fVar2 * DAT_1468509d8;
  if (*(int *)(lVar1 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = fStack_20;
  param_3[1] = fVar2 * DAT_1468509d8;
  if (*(int *)(lVar1 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar3);
  fVar3 = fStack_1c;
  param_3[2] = fVar2 * DAT_1468509d8;
  if (*(int *)(lVar1 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar3);
  param_3[3] = fVar3 * DAT_1468509d8;
  return;
}



// FUNCTION 1425a9690 FUN_1425a9690 body=75 status=ok
// SIG undefined FUN_1425a9690(void)

ulonglong FUN_1425a9690(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  
  ppuVar1 = (undefined **)(**(code **)(*param_2 + 8))(param_2);
  if (ppuVar1 != &PTR_u_FMaterialUniformExpressionLogari_146533f78) {
    return (ulonglong)ppuVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001425a96d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                    (*(longlong **)(param_1 + 0x10),param_2[2]);
  return uVar2;
}



// FUNCTION 1425a96e0 operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_> body=247 status=ok
// SIG undefined operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<FNetworkGUID_const_&>::
operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<TTuple<FGameplayTag,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x10,local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x12) = lVar1;
  param_2[0x14] = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1425a97e0 Append<FDefaultSetAllocator> body=543 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
     Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
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
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_1405effc0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar4) goto LAB_1425a98cd;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1425a98cd:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1425a9993;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1425a9993:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    Emplace<FObjectReplicator_*_const_&>
              (param_1,local_res8,(longlong)(int)uStack_5c * 0x10 + *param_2,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1425a9a00 FUN_1425a9a00 body=819 status=ok
// SIG undefined FUN_1425a9a00(void)

int * FUN_1425a9a00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_res8;
  uint local_resc;
  int *local_res10;
  undefined4 local_48;
  undefined4 local_44;
  uint *local_40;
  
  iVar8 = 1;
  iVar13 = -1;
  local_res10 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x14);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  local_40 = (uint *)(*param_1 + (longlong)iVar10 * 0x14);
  puVar1 = (uint *)*param_3;
  bVar14 = false;
  *local_40 = *puVar1;
  local_40[1] = puVar1[1];
  local_40[2] = 0;
  local_40[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    uVar12 = *local_40;
    uVar5 = local_40[1];
    iVar10 = iVar13;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar7 +
                       ((longlong)(int)(uVar5 ^ uVar12) & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        lVar9 = *param_1;
        do {
          lVar6 = (longlong)iVar11;
          local_48 = *(undefined4 *)(lVar9 + lVar6 * 0x14);
          local_44 = *(undefined4 *)(lVar9 + 4 + lVar6 * 0x14);
          local_res8 = uVar12;
          local_resc = uVar5;
          cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_48,&local_res8);
          iVar10 = iVar11;
          if (cVar3 != '\0') break;
          lVar9 = *param_1;
          iVar11 = *(int *)(lVar9 + 0xc + lVar6 * 0x14);
          iVar10 = iVar13;
        } while (iVar11 != -1);
      }
    }
    bVar14 = iVar10 != -1;
    param_2 = local_res10;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x14),local_40,0xc);
      iVar8 = *local_res10;
      bVar2 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar8;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)iVar8 * 0x14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar9 + 4 + (longlong)iVar8 * 0x14) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *local_res10 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1425a9cfc;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar3 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar13;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar3 = '\x1f' - (char)iVar13;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar3 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar12 = (*local_40 ^ local_40[1]) & (int)param_1[9] - 1U;
    local_40[4] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    local_40[3] = *(uint *)((longlong)plVar7 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
    local_res10 = param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res10 = param_2;
  }
LAB_1425a9cfc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return local_res10;
}



// FUNCTION 1425a9d40 FUN_1425a9d40 body=576 status=ok
// SIG undefined FUN_1425a9d40(void)

int * FUN_1425a9d40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  
  uVar12 = 0xffffffff;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar9 * 0x14);
  puVar3 = (uint *)*local_res18;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = 0;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    iVar9 = local_res8[0];
    lVar10 = (longlong)local_res8[0];
    bVar13 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar10 * 0x14),puVar1,0xc);
      iVar2 = *param_2;
      bVar4 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar2;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 0x14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)iVar2 * 0x14) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar8 = (undefined1)local_res8[0];
      goto LAB_1425a9f5f;
    }
  }
  uVar8 = 0;
  cVar5 = TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar11 = (puVar1[1] ^ *puVar1) & (int)param_1[9] - 1U;
    puVar1[4] = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1425a9f5f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar8;
  }
  return param_2;
}



// FUNCTION 1425a9f80 FUN_1425a9f80 body=1030 status=ok
// SIG undefined FUN_1425a9f80(void)

int * FUN_1425a9f80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int *_Src;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  
  iVar11 = 1;
  iVar20 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x14);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x14) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar6 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar21 = false;
  puVar19 = (uint *)((longlong)plVar8 + lVar6);
  *puVar19 = *puVar19 | 1 << ((byte)iVar14 & 0x1f);
  lVar1 = (longlong)iVar14 * 0x14;
  _Src = (int *)(*param_1 + lVar1);
  uVar2 = *(undefined8 *)*param_3;
  *(undefined8 *)_Src = uVar2;
  _Src[2] = 0;
  _Src[3] = -1;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    iVar13 = iVar20;
    if (uVar18 != 0) {
      uVar5 = _Src[1];
      iVar9 = (int)uVar2;
      uVar17 = iVar9 - uVar5 ^ uVar5 >> 0xd;
      uVar16 = (-0x61c88647 - uVar17) - uVar5 ^ uVar17 << 8;
      uVar10 = (uVar5 - uVar16) - uVar17 ^ uVar16 >> 0xd;
      uVar17 = (uVar17 - uVar16) - uVar10 ^ uVar10 >> 0xc;
      uVar16 = (uVar16 - uVar17) - uVar10 ^ uVar17 << 0x10;
      uVar10 = (uVar10 - uVar16) - uVar17 ^ uVar16 >> 5;
      uVar17 = (uVar17 - uVar16) - uVar10 ^ uVar10 >> 3;
      uVar16 = (uVar16 - uVar17) - uVar10 ^ uVar17 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       (((longlong)(int)((uVar10 - uVar16) - uVar17) ^ (ulonglong)(uVar16 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        lVar3 = *param_1;
        do {
          lVar7 = (longlong)iVar12;
          if ((*(int *)(lVar3 + lVar7 * 0x14) == iVar9) &&
             (*(uint *)(lVar3 + 4 + lVar7 * 0x14) == uVar5)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          iVar13 = iVar12;
        } while ((!bVar21) &&
                (iVar12 = *(int *)(lVar3 + 0xc + lVar7 * 0x14), iVar13 = iVar20, iVar12 != -1));
      }
    }
    bVar21 = iVar13 != -1;
    if (bVar21) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar13 * 0x14),_Src,0xc);
      bVar4 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = iVar14;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar20 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar20;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar19 = (uint *)((longlong)plVar8 + lVar6);
      *puVar19 = *puVar19 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1425aa35b;
    }
  }
  if (3 < uVar18) {
    uVar5 = (uVar18 >> 1) + 8;
    iVar20 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    iVar11 = 0x20;
    if (uVar5 != 0) {
      iVar11 = 0x1f - iVar20;
    }
    uVar5 = (uVar18 >> 1) + 7;
    iVar20 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x1f' - (char)iVar20;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar18 = _Src[1];
    uVar5 = *_Src - uVar18 ^ uVar18 >> 0xd;
    uVar10 = (-0x61c88647 - uVar5) - uVar18 ^ uVar5 << 8;
    uVar16 = (uVar18 - uVar10) - uVar5 ^ uVar10 >> 0xd;
    uVar18 = (uVar5 - uVar10) - uVar16 ^ uVar16 >> 0xc;
    uVar5 = (uVar10 - uVar18) - uVar16 ^ uVar18 << 0x10;
    uVar10 = (uVar16 - uVar5) - uVar18 ^ uVar5 >> 5;
    uVar18 = (uVar18 - uVar5) - uVar10 ^ uVar10 >> 3;
    uVar5 = (uVar5 - uVar18) - uVar10 ^ uVar18 << 10;
    uVar18 = ((uVar10 - uVar5) - uVar18 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    _Src[4] = uVar18;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[3] = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FObjectKey,int>,TDefaultMapHashableKeyFuncs<FObjectKey,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1425aa35b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar21;
  }
  return param_2;
}



// FUNCTION 1425aa390 FUN_1425aa390 body=477 status=ok
// SIG undefined FUN_1425aa390(void)

int * FUN_1425aa390(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar7 = (undefined8 *)((longlong)iVar6 * 0x60 + *param_1);
  TKeyInitializer<FName_const_&>::
  operator<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>_TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>
            (param_3,puVar7);
  *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    iVar6 = 0x20;
    cVar9 = '\0';
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)((ulonglong)*puVar7 >> 0x20) + (int)*puVar7 & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar7 + 0x5c) = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(puVar7 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1425aa570 FUN_1425aa570 body=957 status=ok
// SIG undefined FUN_1425aa570(void)

int * FUN_1425aa570(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *_Src;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar9 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar18 = false;
  puVar16 = (uint *)((longlong)plVar7 + lVar6);
  *puVar16 = *puVar16 | 1 << ((byte)iVar11 & 0x1f);
  lVar1 = (longlong)iVar11 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  *(undefined4 *)(_Src + 1) = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar10 = iVar17;
    if (uVar15 != 0) {
      iVar5 = (int)(uVar2 >> 4);
      uVar13 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
      uVar8 = -(uVar13 + iVar5) ^ uVar13 >> 0xd;
      uVar14 = (iVar5 - uVar13) - uVar8 ^ uVar8 >> 0xc;
      uVar13 = (uVar13 - uVar14) - uVar8 ^ uVar14 << 0x10;
      uVar8 = (uVar8 - uVar13) - uVar14 ^ uVar13 >> 5;
      uVar14 = (uVar14 - uVar13) - uVar8 ^ uVar8 >> 3;
      uVar13 = (uVar13 - uVar14) - uVar8 ^ uVar14 << 10;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (((longlong)(int)((uVar8 - uVar13) - uVar14) ^ (ulonglong)(uVar13 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar10 = iVar5;
          if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x18) == uVar2) break;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
          iVar10 = iVar17;
        } while (iVar5 != -1);
      }
    }
    bVar18 = iVar10 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),_Src,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar7 + lVar6);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1425aa902;
    }
  }
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar8 != 0) {
      iVar9 = 0x1f - iVar17;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar8 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar17;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar17 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar13 = -(uVar8 + iVar17) ^ uVar8 >> 0xd;
    uVar15 = (iVar17 - uVar8) - uVar13 ^ uVar13 >> 0xc;
    uVar8 = (uVar8 - uVar15) - uVar13 ^ uVar15 << 0x10;
    uVar13 = (uVar13 - uVar8) - uVar15 ^ uVar8 >> 5;
    uVar15 = (uVar15 - uVar8) - uVar13 ^ uVar13 >> 3;
    uVar8 = (uVar8 - uVar15) - uVar13 ^ uVar15 << 10;
    uVar15 = ((uVar13 - uVar8) - uVar15 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar15;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1425aa902:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1425aa930 FUN_1425aa930 body=765 status=ok
// SIG undefined FUN_1425aa930(void)

uint * FUN_1425aa930(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar11 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar7 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)uVar10 & 0x1f);
  lVar1 = (longlong)(int)uVar10 * 0x18;
  local_res10 = (ulonglong *)(*param_1 + lVar1);
  uVar2 = *(ulonglong *)*param_3;
  *local_res10 = uVar2;
  *(undefined1 *)(local_res10 + 1) = 0;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x18),local_res10,0x10);
      bVar3 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar10;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar1 + lVar9) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar9) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar7 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1425aabfe;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*local_res10 >> 4);
    uVar5 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar5) ^ uVar5 >> 0xd;
    uVar14 = (iVar11 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1425aabfe:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1425aac30 FUN_1425aac30 body=725 status=ok
// SIG undefined FUN_1425aac30(void)

int * FUN_1425aac30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  longlong local_res8;
  
  iVar7 = 1;
  iVar10 = -1;
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
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_res8 = 0;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  plVar12 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
  FUN_14217bd20(&local_res8);
  bVar14 = false;
  lVar2 = *(longlong *)*param_3;
  plVar12[1] = local_res8;
  *plVar12 = lVar2;
  *(undefined4 *)(plVar12 + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar8 = iVar10;
    if (uVar13 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar2) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar8 = iVar10;
        } while (iVar9 != -1);
      }
    }
    bVar14 = iVar8 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),plVar12,0x10);
      iVar7 = *param_2;
      bVar3 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar7;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar7 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar10 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar7 * 0x18) = iVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1425aaee0;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x14) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_1425cabe0(param_1);
  }
LAB_1425aaee0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 1425aaf10 FUN_1425aaf10 body=656 status=ok
// SIG undefined FUN_1425aaf10(void)

int * FUN_1425aaf10(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool local_res8;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar5 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x60 + *param_1);
  TKeyInitializer<FNetworkGUID_const_&>::
  operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
            (param_3,puVar9);
  puVar9[0x16] = 0xffffffff;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x60 + *param_1) == *puVar9) goto LAB_1425ab05f;
          iVar5 = *(int *)((longlong)iVar5 * 0x60 + 0x58 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1425ab05f:
    local_res8 = iVar5 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar5 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1425ab17b;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[0x17] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[0x16] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1425ab17b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1425ab1a0 FUN_1425ab1a0 body=575 status=ok
// SIG undefined FUN_1425ab1a0(void)

int * FUN_1425ab1a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar9 * 0x18);
  *puVar1 = *(uint *)*param_3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x18) == *puVar1) goto LAB_1425ab2eb;
          iVar7 = *(int *)(*param_1 + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_1425ab2eb:
    bVar10 = iVar7 != -1;
    if (bVar10) {
      lVar2 = *param_1;
      lVar3 = *(longlong *)(lVar2 + 8 + (longlong)iVar7 * 0x18);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x20) != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(lVar3,0x38);
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar7 * 0x18),puVar1,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1425ab3b6;
    }
  }
  cVar4 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *puVar1;
    puVar1[5] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1425ab3b6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1425ab3e0 FUN_1425ab3e0 body=588 status=ok
// SIG undefined FUN_1425ab3e0(void)

int * FUN_1425ab3e0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  void *_Dst;
  uint *_Src;
  bool bVar12;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
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
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (uint *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  _Src = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  *(undefined8 *)(_Src + 2) = *puVar6;
  lVar7 = puVar6[1];
  *(longlong *)(_Src + 4) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  _Src[6] = 0xffffffff;
  bVar12 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res10 = *_Src;
    local_res14 = _Src[1];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar10 = local_res8[0];
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar10 = local_res8[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar10 = local_res8[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_1425ab609;
    }
  }
  cVar8 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    uVar11 = (_Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[7] = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar9 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1425ab609:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1425ab630 FUN_1425ab630 body=709 status=ok
// SIG undefined FUN_1425ab630(void)

int * FUN_1425ab630(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  void *local_res10;
  
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar11 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  puVar3 = (ulonglong *)param_3[1];
  *_Src = uVar2;
  _Src[1] = *puVar3;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res10 = (void *)CONCAT44(local_res10._4_4_,iVar8);
  uVar9 = 1;
  if (iVar8 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    iVar8 = local_res8[0];
    lVar15 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      local_res10 = (void *)(*param_1 + lVar15 * 0x18);
      puVar4 = *(undefined8 **)((longlong)local_res10 + 8);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        iVar11 = *param_2;
      }
      _guard_xfg_dispatch_icall_nop(local_res10,_Src,0x10);
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + (longlong)iVar11 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar15 + 4 + (longlong)iVar11 * 0x18) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar14 = (undefined1)local_res8[0];
      goto LAB_1425ab8d1;
    }
    uVar9 = local_res10._0_4_;
  }
  uVar14 = 0;
  cVar6 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,uVar9,0);
  if (cVar6 == '\0') {
    iVar11 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar16 = -(iVar11 + uVar13) ^ uVar13 >> 0xd;
    uVar12 = (iVar11 - uVar13) - uVar16 ^ uVar16 >> 0xc;
    uVar13 = (uVar13 - uVar12) - uVar16 ^ uVar12 << 0x10;
    uVar16 = (uVar16 - uVar13) - uVar12 ^ uVar13 >> 5;
    uVar12 = (uVar12 - uVar13) - uVar16 ^ uVar16 >> 3;
    uVar13 = (uVar13 - uVar12) - uVar16 ^ uVar12 << 10;
    uVar12 = ((uVar16 - uVar13) - uVar12 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_1425ab8d1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar14;
  }
  return param_2;
}



// FUNCTION 1425ab900 FUN_1425ab900 body=691 status=ok
// SIG undefined FUN_1425ab900(void)

int * FUN_1425ab900(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  int *_Src;
  bool bVar12;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  piVar8 = (int *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  bVar12 = false;
  _Src = (int *)((longlong)iVar5 * 0x20 + *param_1);
  iVar5 = piVar8[1];
  iVar1 = piVar8[2];
  iVar3 = piVar8[3];
  *_Src = *piVar8;
  _Src[1] = iVar5;
  _Src[2] = iVar1;
  _Src[3] = iVar3;
  *(undefined8 *)(_Src + 4) = *puVar4;
  _Src[6] = -1;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FCrc::MemCrc_DEPRECATED(_Src,0x10,0);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        do {
          piVar8 = (int *)((longlong)iVar5 * 0x20 + *param_1);
          if (((piVar8[1] == _Src[1] && piVar8[2] == _Src[2]) && piVar8[3] == _Src[3]) &&
              *_Src == *piVar8) goto LAB_1425aba85;
          iVar5 = piVar8[6];
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1425aba85:
    bVar12 = iVar5 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1425abb8a;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    _Src[7] = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[6] = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1425abb8a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1425abbc0 FUN_1425abbc0 body=1114 status=ok
// SIG undefined FUN_1425abbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1425abbc0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_188 [32];
  char local_168;
  longlong *local_160;
  longlong *local_158;
  uint local_150;
  int local_14c;
  uint local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  uint uStack_120;
  uint uStack_11c;
  uint *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar4 = *(int *)(param_1 + 0x2b8);
  local_160 = (longlong *)(param_1 + 0x2b0);
  iVar15 = *(int *)(param_1 + 0x2e4);
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  local_168 = param_3;
  if (*(int *)(param_2 + 0x8c) < iVar4 - iVar15) {
    FUN_1407418a0(param_2);
  }
  puStack_140 = (uint *)(param_1 + 0x2c0);
  local_158 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  local_14c = 0;
  local_148 = 0;
  uStack_144 = 1;
  uStack_134 = 0;
  uStack_130 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_140;
    }
    uVar14 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar14 == 0) {
      iVar4 = (int)plVar6;
      uStack_130 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_130;
      local_148 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_148;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1425abcef;
      uVar14 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_144 = uVar14 - 1 & uVar14 ^ uVar14;
    iVar4 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_134 = (uStack_130 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_134) {
LAB_1425abcef:
      uStack_134 = uVar1;
    }
  }
  local_138 = 0xffffffff;
  uVar14 = *(uint *)(param_1 + 0x2d8);
  local_100 = (longlong *)(param_1 + 0x2b0);
  uStack_f8 = CONCAT44(uStack_144,local_148);
  uStack_110 = 0xffffffff;
  uStack_10c = uStack_134;
  local_108 = CONCAT44(uStack_12c,uStack_130);
  uVar11 = uVar14 & 0xffffffe0;
  uStack_120 = local_148;
  uStack_11c = uStack_144;
  plVar6 = local_100;
  if (uVar14 != uVar1) {
    lVar9 = *(longlong *)(param_1 + 0x2d0);
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      lVar9 = param_1 + 0x2c0;
    }
    uVar7 = *(uint *)(lVar9 + (longlong)((int)uVar14 >> 5) * 4) & -1 << ((byte)uVar14 & 0x1f);
    iVar4 = (int)uVar14 >> 5;
    while (plVar6 = local_160, uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1425abdcd;
      uVar7 = *(uint *)(lVar9 + 4 + (longlong)iVar4 * 4);
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uVar14 = (uVar11 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uVar14) {
LAB_1425abdcd:
      uVar14 = uVar1;
    }
  }
  iVar4 = 0;
  plVar10 = plVar13;
  local_118 = puStack_140;
  puStack_f0 = puStack_140;
  uStack_e0 = local_108;
  local_128 = local_100;
  uStack_e8 = uStack_110;
  uStack_e4 = uStack_10c;
  while( true ) {
    if ((uStack_10c == uVar14) && (local_118 == puStack_140)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_128 == plVar6)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar15 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_128 + (longlong)(int)uStack_10c * 0x10);
    if (lVar9 != 0) {
      iVar2 = *(int *)(param_2 + 0x88);
      *(int *)(param_2 + 0x88) = iVar2 + 1;
      if (*(int *)(param_2 + 0x8c) < iVar2 + 1) {
        TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
      }
      lVar5 = *(longlong *)(param_2 + 0x80);
      if (*(longlong *)(param_2 + 0x80) == 0) {
        lVar5 = param_2;
      }
      *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar9;
      if (local_168 != '\0') {
        lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_150 = iVar15 + 1;
          if (iVar4 < (int)local_150) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158,plVar10);
            plVar13 = local_158;
            iVar4 = local_14c;
          }
          plVar10 = (longlong *)(ulonglong)local_150;
          plVar13[iVar15] = lVar9;
        }
      }
    }
    uStack_110 = uStack_110 & ~uStack_11c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
    plVar6 = local_160;
  }
  if (local_168 != '\0') {
    uVar8 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar16 = (ulonglong)((longlong)(plVar13 + iVar15) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar15 < plVar13) {
      uVar16 = uVar8;
    }
    plVar6 = plVar13;
    if (uVar16 != 0) {
      do {
        if (*(longlong *)(*plVar6 + 0x2d8) != 0) {
          FUN_1425abbc0(*(longlong *)(*plVar6 + 0x2d8),local_d8,1);
          iVar4 = (int)local_50;
          lVar9 = (longlong)(int)local_50;
          if ((int)local_50 != 0) {
            iVar15 = *(int *)(param_2 + 0x88);
            if (*(int *)(param_2 + 0x8c) < (int)local_50 + iVar15) {
              FUN_1407418a0(param_2);
              iVar15 = *(int *)(param_2 + 0x88);
            }
            _Src = local_d8;
            if (local_58 != (undefined1 *)0x0) {
              _Src = local_58;
            }
            lVar5 = *(longlong *)(param_2 + 0x80);
            if (*(longlong *)(param_2 + 0x80) == 0) {
              lVar5 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)iVar15 * 8),_Src,lVar9 << 3);
            *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar4;
            local_50 = local_50 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 1;
      } while (uVar8 != uVar16);
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 1425ac020 FUN_1425ac020 body=424 status=ok
// SIG undefined FUN_1425ac020(void)

void FUN_1425ac020(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x0001425ac04a:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x14 + 0x30) <
              *(int *)((longlong)param_1 + (longlong)iVar12 * 0x14 + 8)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = (undefined8 *)((longlong)param_1 + (longlong)iVar12 * 0x14);
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar8 * 0x14);
        if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x14 + 8) < *(int *)(puVar11 + 1)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar3 = *(undefined4 *)(puVar1 + 2);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar11 + 2);
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            *(undefined4 *)(puVar11 + 2) = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x0001425ac04a;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0x14);
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar3 = *(undefined4 *)(param_1 + 2);
        uVar6 = *param_1;
        uVar7 = param_1[1];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar11 + 2);
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        *(undefined4 *)(puVar11 + 2) = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)((longlong)param_1 + (longlong)iVar4 * 0x14 + 0x30) <
                *(int *)((longlong)param_1 + (longlong)iVar9 * 0x14 + 8)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar9 * 0x14);
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar8 * 0x14);
          if (*(int *)(puVar1 + 1) <= *(int *)((longlong)param_1 + (longlong)iVar8 * 0x14 + 8))
          break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar3 = *(undefined4 *)(puVar2 + 2);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            *(undefined4 *)(puVar1 + 2) = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = (undefined8 *)((longlong)puVar11 + -0x14);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1425ac1d0 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_> body=448 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UClass_*,int>,TDefaultMapHashableKeyFuncs<UClass_*,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UClass_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x0001425ac1fa:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) <
              *(int *)(param_1 + (longlong)iVar9 * 3 + 7)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if (*(int *)(puVar11 + 1) < *(int *)(param_1 + (longlong)iVar8 * 3 + 1)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            puVar1[2] = puVar11[2];
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11[2] = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x0001425ac1fa;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar9 * 3 + 1) <
                *(int *)(param_1 + (longlong)iVar4 * 3 + 7)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if (*(int *)(param_1 + (longlong)iVar8 * 3 + 1) <= *(int *)(puVar1 + 1)) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1425ac390 FUN_1425ac390 body=208 status=ok
// SIG undefined FUN_1425ac390(void)

void FUN_1425ac390(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145119c68;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    FUN_1425ad780(puVar1 + 0x1b,puVar1);
    puVar1[0x61] = 0;
    *(undefined2 *)(puVar1 + 0x62) = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
  }
  return;
}



// FUNCTION 1425ac460 FUN_1425ac460 body=294 status=ok
// SIG undefined FUN_1425ac460(void)

undefined8 * FUN_1425ac460(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = USkeletalMesh::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR_FUN_145119c68;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xbc) = 0;
    puVar3[0x19] = 0;
    *(undefined4 *)(puVar3 + 0x1a) = 0;
    FUN_1425ad780(puVar3 + 0x1b,puVar3);
    puVar3[0x61] = 0;
    *(undefined2 *)(puVar3 + 0x62) = 0;
    puVar3[99] = 0;
    puVar3[100] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}


