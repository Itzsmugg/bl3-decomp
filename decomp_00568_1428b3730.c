// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428b3730 FUN_1428b3730 body=402 status=ok
// SIG undefined FUN_1428b3730(void)

undefined8
FUN_1428b3730(longlong param_1,longlong *param_2,int param_3,longlong *param_4,longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_5 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
      lVar3 = *param_2;
      lVar5 = *(longlong *)(param_1 + 0x2a0);
      if (*(longlong *)(param_1 + 0x2a0) == 0) {
        lVar5 = param_1 + 0x298;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                               (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar4 * 0xf0 + *(longlong *)(param_1 + 0x260));
          if (*plVar6 == lVar3) {
            if (iVar4 != -1) goto LAB_1428b37e7;
            break;
          }
          iVar4 = (int)plVar6[0x1d];
        } while (iVar4 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1428b37e7:
    param_5 = plVar6 + 3;
    if (plVar6 == (longlong *)0x0) {
      param_5 = (longlong *)0x0;
    }
    if (param_5 == (longlong *)0x0) goto LAB_1428b3873;
  }
  if (0 < (int)param_5[(longlong)param_3 * 2 + 5]) {
    param_5 = param_5 + ((longlong)param_3 + 2) * 2;
    if (param_4 != param_5) {
      iVar4 = (int)param_5[1];
      _Src = (void *)*param_5;
      *(int *)(param_4 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_4 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0;
        FKey::~FKey(param_2);
        return 1;
      }
      TArray<int,FDefaultAllocator>::ResizeForCopy(param_4,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*param_4,_Src,(longlong)iVar4 << 2);
    }
    FKey::~FKey(param_2);
    return 1;
  }
LAB_1428b3873:
  plVar6 = (longlong *)param_2[2];
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
  return 0;
}



// FUNCTION 1428b38d0 LoadURLConfig body=183 status=ok
// SIG undefined LoadURLConfig(void)

void FURL::LoadURLConfig(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_18;
  undefined8 local_10;
  
  uVar5 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FConfigCacheIni::GetSection(DAT_1468b6148,param_2,&local_18,param_3);
  uVar6 = uVar5;
  iVar1 = (int)local_10;
  plVar2 = local_18;
  if (0 < (int)local_10) {
    do {
      if (*(int *)(uVar6 + 8 + (longlong)local_18) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(uVar6 + (longlong)local_18);
      }
      AddOption(param_1,puVar3);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x10;
      iVar1 = (int)local_10;
      plVar2 = local_18;
    } while ((int)uVar4 < (int)local_10);
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1428b3990 FUN_1428b3990 body=890 status=ok
// SIG undefined FUN_1428b3990(void)

undefined8 FUN_1428b3990(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  uint extraout_XMM0_Db;
  undefined8 uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  uVar13 = (uint)((ulonglong)param_3 >> 0x20);
  fVar12 = (float)param_3;
  FUN_1428a1120();
  pfVar8 = (float *)0x0;
  if ((int)param_1[0x2f] != *(int *)((longlong)param_1 + 0x1a4)) {
    lVar9 = *param_2;
    plVar6 = (longlong *)param_1[0x36];
    if ((longlong *)param_1[0x36] == (longlong *)0x0) {
      plVar6 = param_1 + 0x35;
    }
    fVar15 = *(float *)((longlong)plVar6 +
                       ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                       (longlong)(int)param_1[0x37] - 1U) * 4);
    if (fVar15 != -NAN) {
      do {
        pfVar7 = (float *)((longlong)(int)fVar15 * 0x30 + param_1[0x2e]);
        if (*(longlong *)pfVar7 == lVar9) {
          if (fVar15 != -NAN) goto LAB_1428b3a35;
          break;
        }
        fVar15 = pfVar7[10];
      } while (fVar15 != -NAN);
    }
  }
  pfVar7 = pfVar8;
LAB_1428b3a35:
  fVar15 = 1.0;
  pfVar10 = pfVar7 + 6;
  if (pfVar7 == (float *)0x0) {
    pfVar10 = pfVar8;
  }
  if (pfVar10 != (float *)0x0) {
    fVar3 = *pfVar10;
    fVar14 = 0.0;
    if (0.0 < fVar3) {
      if (fVar12 <= 0.0) {
        uVar13 = uVar13 ^ 0x80000000;
        fVar12 = -fVar12 - fVar3;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        fVar12 = fVar12 / (fVar3 - 1.0);
      }
      else {
        fVar12 = fVar12 - fVar3;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        fVar12 = fVar12 / (1.0 - fVar3);
      }
    }
    if (pfVar10[2] != 1.0) {
      if (fVar12 <= 0.0) {
        if (fVar12 < 0.0) {
          fVar14 = -1.0;
        }
      }
      else {
        fVar14 = 1.0;
      }
      fVar12 = _guard_xfg_dispatch_icall_nop(ABS(fVar12),pfVar10[2]);
      fVar12 = fVar12 * fVar14;
      uVar13 = extraout_XMM0_Db;
    }
    fVar12 = fVar12 * pfVar10[1];
    if (((uint)pfVar10[3] & 1) != 0) {
      fVar12 = -fVar12;
      uVar13 = uVar13 ^ 0x80000000;
    }
  }
  uVar11 = CONCAT44(uVar13,fVar12);
  if ((*param_2 == DAT_1469e97f0) || (*param_2 == DAT_1469e9808)) {
    plVar6 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar9 = plVar6[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar9 = plVar6[0x1f];
    }
    pfVar7 = pfVar8;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      pfVar7 = (float *)param_1[4];
    }
    if (((*(byte *)(lVar9 + 0x38) & 0x10) != 0) &&
       (*(longlong **)(pfVar7 + 0x14a) != (longlong *)0x0)) {
      fVar15 = (float)(**(code **)(**(longlong **)(pfVar7 + 0x14a) + 0x778))();
      fVar15 = fVar15 * *(float *)(lVar9 + 0x74);
    }
    fVar12 = fVar12 * fVar15;
    if (*param_2 == DAT_1469e97f0) {
      DAT_146b18a98 = DAT_146b18a98 + DAT_1465355a8 * fVar12;
    }
    else {
      DAT_146b18b38 = DAT_146b18b38 - DAT_1465355a8 * fVar12;
    }
    cVar5 = (**(code **)(*(longlong *)pfVar7 + 0xed8))(pfVar7);
    uVar11 = CONCAT44(uVar13,fVar12);
    if (cVar5 != '\0') {
      if ((int)param_1[0x4d] != *(int *)((longlong)param_1 + 0x294)) {
        lVar9 = *param_2;
        plVar6 = (longlong *)param_1[0x54];
        if ((longlong *)param_1[0x54] == (longlong *)0x0) {
          plVar6 = param_1 + 0x53;
        }
        fVar15 = *(float *)((longlong)plVar6 +
                           ((longlong)((int)((ulonglong)lVar9 >> 0x20) + (int)lVar9) &
                           (longlong)(int)param_1[0x55] - 1U) * 4);
        if (fVar15 != -NAN) {
          do {
            pfVar7 = (float *)((longlong)(int)fVar15 * 0xf0 + param_1[0x4c]);
            if (*(longlong *)pfVar7 == lVar9) {
              if (fVar15 != -NAN) goto LAB_1428b3c37;
              break;
            }
            fVar15 = pfVar7[0x3a];
          } while (fVar15 != -NAN);
        }
      }
      pfVar7 = pfVar8;
LAB_1428b3c37:
      pfVar10 = pfVar7 + 6;
      if (pfVar7 == (float *)0x0) {
        pfVar10 = pfVar8;
      }
      uVar11 = CONCAT44(uVar13,fVar12);
      if (pfVar10 != (float *)0x0) {
        uVar11 = (**(code **)(*param_1 + 0x280))
                           (param_1,fVar12,(longlong)pfVar10 + 0x1d,*param_2 != DAT_1469e97f0);
      }
    }
    fVar12 = DAT_1465355a8 * (float)uVar11;
    if (*param_2 == DAT_1469e97f0) {
      DAT_146b18a9c = DAT_146b18a9c + fVar12;
    }
    else {
      DAT_146b18b3c = DAT_146b18b3c - fVar12;
    }
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return uVar11;
}



// FUNCTION 1428b3d10 MeasureStringInternal body=703 status=ok
// SIG undefined MeasureStringInternal(void)

void UCanvas::MeasureStringInternal
               (longlong param_1,wint_t *param_2,int param_3,int param_4,int param_5,
               undefined4 *param_6)

{
  float fVar1;
  float fVar2;
  wint_t wVar3;
  longlong lVar4;
  wint_t *pwVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  wint_t *pwVar9;
  wint_t *pwVar10;
  wint_t *pwVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  float local_a8;
  float local_a4;
  float local_a0 [2];
  wint_t *local_98;
  
  *param_6 = 0xffffffff;
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar4 != 0) {
    FUN_14244e9c0(lVar4,0x30,&local_a4,local_a0);
    if (local_a4 == 0.0) {
      FUN_14244e9c0(lVar4,0x41,&local_a4,local_a0);
    }
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar14 = fVar1 * *(float *)(param_1 + 0x20);
    pwVar10 = param_2;
    if (*param_2 != 0) {
      local_98 = param_2 + param_3;
      pwVar5 = param_2;
      pwVar11 = (wint_t *)0x0;
      do {
        pwVar9 = pwVar5;
        pwVar10 = pwVar9;
        if (local_98 <= pwVar9) break;
        wVar3 = *pwVar9;
        FUN_14244e9c0(*(undefined8 *)(param_1 + 0x18),wVar3,local_res8,&local_a8);
        if ((local_a8 == 0.0) && (wVar3 == 10)) {
          local_a8 = local_a0[0];
        }
        fVar13 = fVar14;
        if (pwVar11 != (wint_t *)0x0) {
          cVar6 = FUN_14244e820(*(undefined8 *)(param_1 + 0x18),*pwVar11,wVar3);
          fVar13 = (float)(int)cVar6 * fVar1 + fVar14;
        }
        pwVar5 = pwVar9 + 1;
        local_res8[0] = local_res8[0] * fVar1;
        local_a8 = local_a8 * fVar2;
        iVar8 = iswspace(*pwVar5);
        if ((iVar8 == 0) && (*pwVar5 != 0)) {
          local_res8[0] = local_res8[0] + fVar13;
        }
        fVar12 = local_res8[0] + *(float *)(param_1 + 8);
        fVar13 = fVar2 * *(float *)(param_1 + 0x24) + local_a8;
        *(float *)(param_1 + 8) = fVar12;
        if (fVar13 <= *(float *)(param_1 + 0xc)) {
          fVar13 = *(float *)(param_1 + 0xc);
        }
        *(float *)(param_1 + 0xc) = fVar13;
        if (param_4 != -1) {
          if (param_5 == 1) {
            sVar7 = FUN_14244e680(*(undefined8 *)(param_1 + 0x18),wVar3);
            if ((float)param_4 < *(float *)(param_1 + 8) - ((float)(int)sVar7 + local_res8[0]) * 0.5
               ) break;
          }
          else if ((param_5 == 0) && ((float)param_4 < fVar12 - local_res8[0])) {
            pwVar10 = pwVar9 + -1;
            break;
          }
        }
        pwVar10 = pwVar5;
        pwVar11 = pwVar9;
      } while (*pwVar5 != 0);
    }
    *param_6 = (int)((longlong)pwVar10 - (longlong)param_2 >> 1);
  }
  return;
}



// FUNCTION 1428b3fd0 FUN_1428b3fd0 body=98 status=ok
// SIG undefined FUN_1428b3fd0(void)

void FUN_1428b3fd0(undefined8 param_1,undefined8 param_2)

{
  FUN_141a172f0(param_2,L"THREADS_X",8);
  FUN_141a172f0(param_2,L"THREADS_Y",8);
  FUN_141a172f0(param_2,L"THREADS_Z",8);
  FUN_141a172f0(param_2,L"COMPOSITE_ANIMATED",1);
  return;
}



// FUNCTION 1428b4040 FUN_1428b4040 body=8 status=ok
// SIG undefined FUN_1428b4040(void)

longlong FUN_1428b4040(longlong param_1)

{
  return param_1 + 0x370;
}



// FUNCTION 1428b4050 FUN_1428b4050 body=625 status=ok
// SIG undefined FUN_1428b4050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428b4050(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float local_48;
  uint uStack_44;
  float fStack_40;
  uint uStack_3c;
  float local_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  FUN_1423937b0();
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    if ((*(byte *)(param_1 + 0x700) & 1) != 0) {
      puVar13 = (undefined8 *)operator_new(0x110);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
        uVar8 = _DAT_1464aa7d8;
        puVar13[6] = _DAT_1464aa7d0;
        puVar13[7] = uVar8;
        uVar8 = _DAT_1464aa7e8;
        puVar13[8] = _DAT_1464aa7e0;
        puVar13[9] = uVar8;
        uVar8 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
        puVar13[10] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
        puVar13[0xb] = uVar8;
        uVar8 = uRam00000001464aa808;
        puVar13[0xc] = _DAT_1464aa800;
        puVar13[0xd] = uVar8;
        uVar8 = _DAT_1464aa7d8;
        puVar13[0xe] = _DAT_1464aa7d0;
        puVar13[0xf] = uVar8;
        uVar8 = _DAT_1464aa7e8;
        puVar13[0x10] = _DAT_1464aa7e0;
        puVar13[0x11] = uVar8;
        uVar8 = CONCAT44(uRam00000001464aa7fc,DAT_1464aa7f8);
        puVar13[0x12] = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
        puVar13[0x13] = uVar8;
        uVar8 = uRam00000001464aa808;
        puVar13[0x14] = _DAT_1464aa800;
        puVar13[0x15] = uVar8;
        uVar8 = _DAT_1464aa7d8;
        puVar13[0x16] = _DAT_1464aa7d0;
        puVar13[0x17] = uVar8;
        uVar8 = _DAT_1464aa7e8;
        puVar13[0x18] = _DAT_1464aa7e0;
        puVar13[0x19] = uVar8;
        uVar11 = uRam00000001464aa7fc;
        uVar10 = DAT_1464aa7f8;
        uVar9 = DAT_1464aa7f4;
        *(undefined4 *)(puVar13 + 0x1a) = DAT_1464aa7f0;
        *(undefined4 *)((longlong)puVar13 + 0xd4) = uVar9;
        *(undefined4 *)(puVar13 + 0x1b) = uVar10;
        *(undefined4 *)((longlong)puVar13 + 0xdc) = uVar11;
        uVar12 = uRam00000001464aa808;
        uVar8 = _DAT_1464aa800;
        *(uint *)((longlong)puVar13 + 0xfc) = *(uint *)((longlong)puVar13 + 0xfc) & 0xfffffff0;
        puVar13[0x1c] = uVar8;
        puVar13[0x1d] = uVar12;
        puVar13[0x1e] = 0;
        *(undefined4 *)(puVar13 + 0x1f) = 0xffffffff;
        *(undefined1 *)(puVar13 + 0x20) = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x278))
                (*(longlong **)(param_1 + 0x6f0),puVar13,1);
      fVar1 = *(float *)(param_1 + 0x210);
      fVar2 = *(float *)(param_1 + 0x214);
      fVar3 = *(float *)(param_1 + 0x218);
      fVar4 = *(float *)(param_1 + 0x21c);
      fVar17 = fVar2 + fVar2;
      fVar19 = fVar3 + fVar3;
      fVar20 = fVar1 * (fVar1 + fVar1);
      fVar18 = (fVar1 + fVar1) * fVar4;
      fVar5 = *(float *)(param_1 + 0x230);
      fVar6 = *(float *)(param_1 + 0x234);
      fVar7 = *(float *)(param_1 + 0x238);
      fStack_54 = (fVar19 * fVar4 + fVar17 * fVar1) * fVar5;
      fStack_40 = (fVar18 + fVar19 * fVar2) * fVar6;
      local_38 = (fVar17 * fVar4 + fVar19 * fVar1) * fVar7;
      local_48 = fVar6 * (fVar17 * fVar1 - fVar19 * fVar4);
      fStack_34 = fVar7 * (fVar19 * fVar2 - fVar18);
      fStack_50 = fVar5 * (fVar19 * fVar1 - fVar17 * fVar4);
      local_58 = (uint)((_DAT_146b18980 - (fVar3 * fVar19 + fVar2 * fVar17)) * fVar5) &
                 _DAT_146b18aa0;
      uStack_44 = (uint)((fRam0000000146b18984 - (fVar3 * fVar19 + fVar20)) * fVar6) &
                  uRam0000000146b18aa4;
      uStack_30 = (uint)((fRam0000000146b18988 - (fVar2 * fVar17 + fVar20)) * fVar7) &
                  uRam0000000146b18aa8;
      uStack_4c = (uint)((fRam0000000146b1898c - (fVar20 + fVar20)) * *(float *)(param_1 + 0x23c)) &
                  uRam0000000146b18aac;
      local_28 = *(undefined4 *)(param_1 + 0x220);
      uStack_24 = *(undefined4 *)(param_1 + 0x224);
      uStack_20 = *(undefined4 *)(param_1 + 0x228);
      fStack_1c = fRam0000000146b1898c;
      uStack_3c = uStack_4c;
      uStack_2c = uStack_4c;
      FUN_1428bf040(puVar13,&local_58);
      *(undefined8 **)(param_1 + 0x710) = puVar13;
      return;
    }
    lVar14 = *(longlong *)(param_1 + 0x120);
    if ((((lVar14 != 0) || (lVar14 = FUN_1423407b0(param_1), lVar14 != 0)) &&
        (*(longlong **)(lVar14 + 0x1b8) != (longlong *)0x0)) &&
       (lVar15 = (**(code **)(**(longlong **)(lVar14 + 0x1b8) + 0x230))(), lVar15 != 0)) {
      plVar16 = (longlong *)(**(code **)(**(longlong **)(lVar14 + 0x1b8) + 0x230))();
      *(longlong **)(param_1 + 0x708) = plVar16;
      (**(code **)(*plVar16 + 0x10))(plVar16,param_1);
    }
  }
  return;
}



// FUNCTION 1428b42d0 FUN_1428b42d0 body=594 status=ok
// SIG undefined FUN_1428b42d0(void)

void FUN_1428b42d0(longlong param_1)

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
  
  plVar9 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x710) != 0) {
    if ((*(uint *)(param_1 + 0x700) & 1) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x708) + 0x18))
                (*(longlong **)(param_1 + 0x708),param_1);
    }
    else if ((DAT_146ac3ac5 == '\0') &&
            (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
             (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      lVar7 = *(longlong *)(param_1 + 0x710);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      if (lVar7 != 0) {
        FUN_14289d270(lVar7);
        FMemory::operator_delete(lVar7,0x110);
      }
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      *(undefined8 *)(param_1 + 0x710) = 0;
    }
    else {
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
      *plVar9 = (longlong)&PTR_FUN_1451e4d60;
      *(undefined1 *)(plVar9 + 3) = 0;
      plVar9[4] = 0;
      plVar9[2] = *(longlong *)(param_1 + 0x710);
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
      *(undefined8 *)(param_1 + 0x710) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x708) = 0;
  FUN_142393f60(param_1);
  return;
}



// FUNCTION 1428b4530 FUN_1428b4530 body=819 status=ok
// SIG undefined FUN_1428b4530(void)

void FUN_1428b4530(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *_Dst;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_60 = *(uint *)(param_2 + 1);
  lVar7 = (longlong)(int)local_60;
  _Src = (void *)*param_2;
  local_68 = (wchar_t *)0x0;
  if (local_60 == 0) {
    local_5c = 0;
    iVar2 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar7 * 2);
    iVar2 = *(int *)(param_2 + 1);
  }
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  for (; 0 < iVar1; iVar1 = iVar1 + (-1 - iVar2)) {
    iVar2 = FUN_141592950(&local_68,&DAT_1451dfca0,0,0,0xffffffff);
    if (iVar2 == -1) {
      iVar2 = iVar1;
    }
    if (local_60 == 0) {
      pwVar12 = L"";
      iVar4 = 0;
    }
    else {
      iVar4 = local_60 - 1;
      pwVar12 = local_68;
    }
    iVar3 = 0;
    if ((-1 < iVar2) && (iVar3 = iVar4, iVar2 < iVar4)) {
      iVar3 = iVar2;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    iVar4 = iVar3 + 1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar9 = local_48;
    local_40 = iVar4;
    if ((0 < iVar4) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar4 = local_40,
       pwVar9 = local_48, 0 < local_40)) {
      wcsncpy(local_48,pwVar12,(longlong)iVar3);
      pwVar9[iVar3] = L'\0';
    }
    if (*(int *)(*(longlong *)(param_1 + 0x118) + 0x28) < *(int *)(param_1 + 0x58)) {
      _Dst = *(longlong **)(param_1 + 0x50);
      if (*_Dst != 0) {
        FMemory::Free(*_Dst);
        _Dst = *(longlong **)(param_1 + 0x50);
      }
      iVar3 = *(int *)(param_1 + 0x58);
      if (iVar3 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,_Dst + 2,(longlong)(iVar3 + -1) << 4);
        iVar3 = *(int *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x58) = iVar3 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x50);
      *(int *)(param_1 + 0x60) = *(int *)(*(longlong *)(param_1 + 0x118) + 0x28) + -1;
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    iVar3 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x50,iVar3);
    }
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x50));
    *puVar8 = 0;
    *(int *)(puVar8 + 1) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar4,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,pwVar9,(longlong)iVar4 * 2);
    }
    if (pwVar9 != (wchar_t *)0x0) {
      FMemory::Free(pwVar9);
    }
    uVar11 = iVar2 + 0x80000000;
    uVar10 = local_60 - 1;
    if (local_60 == 0) {
      uVar10 = 0;
    }
    uVar5 = local_60 - 1;
    if (iVar2 + 1U < uVar10) {
      uVar10 = iVar2 + 1U;
    }
    if (local_60 == 0) {
      uVar5 = 0;
    }
    uVar6 = uVar10;
    if ((uVar10 <= uVar11) && (uVar6 = uVar5, uVar11 < uVar5)) {
      uVar6 = uVar11;
    }
    local_58 = (wchar_t *)0x0;
    pwVar12 = L"";
    if (local_60 != 0) {
      pwVar12 = local_68;
    }
    iVar4 = uVar6 - uVar10;
    uVar11 = iVar4 + 1;
    if (iVar4 == 0) {
      uVar11 = 0;
    }
    local_50 = (ulonglong)uVar11;
    pwVar9 = local_58;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      pwVar9 = local_58;
      uVar11 = (uint)local_50;
      if (0 < (int)(uint)local_50) {
        wcsncpy(local_58,pwVar12 + (int)uVar10,(longlong)iVar4);
        pwVar9[iVar4] = L'\0';
      }
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_5c = local_50._4_4_;
    local_58 = (wchar_t *)0x0;
    local_50 = 0;
    local_68 = pwVar9;
    local_60 = uVar11;
  }
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 1428b4870 FUN_1428b4870 body=250 status=ok
// SIG undefined FUN_1428b4870(void)

ulonglong FUN_1428b4870(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  uVar3 = FTextFilterExpressionEvaluator::GetFilterType();
  if ((char)uVar3 == '\x01') {
    return uVar3;
  }
  *(undefined8 *)(param_1 + 0x40) = param_2;
  if (*(int *)(param_1 + 0x28) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  puVar1 = (undefined8 *)(param_1 + 0x48);
  (**(code **)(*plVar5 + 0x38))(plVar5,param_2,puVar1);
  bVar2 = FTextFilterExpressionEvaluator::TestTextFilter(param_1 + 0x58,param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar4 = *(int *)(param_1 + 0x54);
  plVar5 = (longlong *)*puVar1;
  iVar6 = *(int *)(param_1 + 0x50);
  if (iVar4 < 0) {
    if (iVar6 != 0) {
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar4 = *(int *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (iVar4 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar1,0);
    }
  }
  else {
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return (ulonglong)bVar2;
}



// FUNCTION 1428b4970 PopSafeZoneTransform body=128 status=ok
// SIG undefined PopSafeZoneTransform(void)

void UCanvas::PopSafeZoneTransform(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x80) != 0) || (*(int *)(param_1 + 0x84) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x260) + 0x30);
    *piVar1 = *piVar1 + -1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink();
    iVar2 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x78);
    iVar3 = *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x30) =
         (float)(*(int *)(param_1 + 0x78) - (int)((float)iVar2 - *(float *)(param_1 + 0x30)));
    *(float *)(param_1 + 0x34) =
         (float)(*(int *)(param_1 + 0x7c) - (int)((float)iVar3 - *(float *)(param_1 + 0x34)));
  }
  return;
}



// FUNCTION 1428b49f0 PopTransform body=12 status=ok
// SIG undefined PopTransform(void)

void FCanvas::PopTransform(longlong param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink();
  return;
}



// FUNCTION 1428b4a00 PopulateAxisConfigs body=549 status=ok
// SIG undefined PopulateAxisConfigs(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UInputSettings::PopulateAxisConfigs(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined1 local_a4 [4];
  longlong local_a0;
  uint *local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar7 = *(int *)(param_1 + 0x30);
  local_88 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  if (0 < iVar7) {
    local_98 = &local_a8;
    uVar4 = 0;
    do {
      local_a0 = *(longlong *)(param_1 + 0x28) + (longlong)(int)uVar4 * 0x18;
      FUN_1415ec610(&local_88,local_a4,&local_a0,0);
      iVar7 = *(int *)(param_1 + 0x30);
      local_a8 = local_a8 + 1;
      uVar4 = (ulonglong)local_a8;
    } while ((int)local_a8 < iVar7);
  }
  iVar7 = iVar7 + -1;
  puVar10 = local_48;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 0x18;
    lVar9 = local_88;
    lVar11 = lVar8;
    do {
      lVar3 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x28));
      if ((int)local_80 != local_54) {
        puVar5 = local_50;
        if (puVar10 != (undefined1 *)0x0) {
          puVar5 = puVar10;
        }
        iVar2 = *(int *)(puVar5 + (longlong)
                                  (int)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3 & local_40 - 1U
                                       ) * 4);
        while (iVar2 != -1) {
          lVar1 = (longlong)iVar2 * 0x18;
          if (*(longlong *)(lVar1 + lVar9) == lVar3) {
            uVar4 = lVar1 + lVar9;
            if (iVar2 != -1) goto LAB_1428b4b5d;
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x10 + lVar9);
        }
      }
      uVar4 = 0;
LAB_1428b4b5d:
      if (*(int *)(uVar4 + 8) != iVar7) {
        iVar2 = *(int *)(param_1 + 0x30);
        iVar6 = (iVar2 - iVar7) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + *(longlong *)(param_1 + 0x28)),
                     (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar2 - iVar6) * 0x18),
                     (longlong)iVar6 * 0x18);
          iVar2 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar2 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
        lVar9 = local_88;
        puVar10 = local_48;
      }
      lVar11 = lVar11 + -0x18;
      lVar8 = lVar8 + -0x18;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  local_40 = 0;
  if (puVar10 != (undefined1 *)0x0) {
    FMemory::Free(puVar10);
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 1428b4c30 FUN_1428b4c30 body=803 status=ok
// SIG undefined FUN_1428b4c30(void)

void FUN_1428b4c30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  HKL pHVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  undefined1 local_38 [16];
  longlong *local_28;
  undefined1 local_20 [16];
  longlong *local_10;
  
  FUN_1417931d0();
  cVar7 = FKey::IsValid(param_1 + 0xb8);
  if (cVar7 != '\0') {
    plVar3 = (longlong *)(param_1 + 0xd0);
    FUN_1406792d0(plVar3,1);
    iVar5 = *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar5 + 1;
    if (*(int *)(param_1 + 0xdc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar3,iVar5);
    }
    puVar4 = (undefined8 *)(*plVar3 + (longlong)iVar5 * 0x18);
    *puVar4 = *(undefined8 *)(param_1 + 0xb8);
    puVar4[1] = *(undefined8 *)(param_1 + 0xc0);
    lVar6 = *(longlong *)(param_1 + 200);
    puVar4[2] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  UInputSettings::PopulateAxisConfigs(param_1);
  if (*(int *)(param_1 + 0xd8) != 1) {
    return;
  }
  plVar3 = (longlong *)(param_1 + 0xd0);
  if (*(longlong *)*plVar3 != DAT_1469ea1f8) {
    return;
  }
  local_68 = DAT_1469ea1f8;
  local_60 = DAT_1469ea200;
  local_58 = DAT_1469ea208;
  if (DAT_1469ea208 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469ea208 + 1) = (int)DAT_1469ea208[1] + 1;
    UNLOCK();
  }
  pHVar8 = GetKeyboardLayout(0);
  switch((uint)pHVar8 & 0x3ff) {
  case 7:
    FKey::operator=(&local_68,&DAT_1469ea2e8);
  default:
    goto switchD_1428b4d59_caseD_8;
  case 10:
    uVar9 = FUN_1417ad0d0();
    plVar10 = (longlong *)FUN_1417ae260(uVar9,local_38,0xdc,0);
    local_68 = *plVar10;
    plVar1 = plVar10 + 1;
    plVar11 = local_28;
    if (&local_60 != plVar1) {
      local_60 = *plVar1;
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_58,plVar10 + 2);
      plVar11 = local_28;
    }
    break;
  case 0xc:
    uVar9 = FUN_1417ad0d0();
    plVar10 = (longlong *)FUN_1417ae260(uVar9,local_50,0xde,0);
    local_68 = *plVar10;
    plVar1 = plVar10 + 1;
    plVar11 = local_40;
    if (&local_60 != plVar1) {
      local_60 = *plVar1;
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_58,plVar10 + 2);
      plVar11 = local_40;
    }
    break;
  case 0x10:
    FKey::operator=(&local_68,&DAT_1469ea240);
    goto switchD_1428b4d59_caseD_8;
  case 0x11:
  case 0x19:
    uVar9 = FUN_1417ad0d0();
    plVar10 = (longlong *)FUN_1417ae260(uVar9,local_20,0xc0,0);
    local_68 = *plVar10;
    plVar1 = plVar10 + 1;
    plVar11 = local_10;
    if (&local_60 != plVar1) {
      local_60 = *plVar1;
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_58,plVar10 + 2);
      plVar11 = local_10;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
switchD_1428b4d59_caseD_8:
  if ((local_68 != DAT_1469ea1f8) && (cVar7 = FKey::IsValid(&local_68), cVar7 != '\0')) {
    iVar5 = *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar5 + 1;
    if (*(int *)(param_1 + 0xdc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar3,iVar5);
    }
    plVar3 = (longlong *)(*plVar3 + (longlong)iVar5 * 0x18);
    *plVar3 = local_68;
    plVar3[1] = local_60;
    plVar3[2] = (longlong)local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
  }
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_58)(local_58);
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



// FUNCTION 1428b4fa0 FUN_1428b4fa0 body=29 status=ok
// SIG undefined FUN_1428b4fa0(void)

void FUN_1428b4fa0(undefined8 param_1)

{
  FUN_1417931d0();
  FUN_1428ab3b0(param_1,1);
  return;
}



// FUNCTION 1428b4fc0 PostInitProperties body=761 status=ok
// SIG undefined PostInitProperties(void)

void UUserInterfaceSettings::PostInitProperties(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined8 *local_28;
  longlong *local_20;
  
  FUN_1417931d0();
  plVar1 = (longlong *)(param_1 + 0xe0);
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 1;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xf4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
    }
    if (*(undefined2 **)(param_1 + 0xe8) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0xe8) = 0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0xf8);
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 2;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x100,0);
    }
    if (*(undefined2 **)(param_1 + 0x100) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x100) = 0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x110);
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 8;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    if ((*(int *)(param_1 + 0x124) < 0) && (*(int *)(param_1 + 0x124) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x118,0);
    }
    if (*(undefined2 **)(param_1 + 0x118) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x118) = 0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x128);
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 9;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    if ((*(int *)(param_1 + 0x13c) < 0) && (*(int *)(param_1 + 0x13c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x130,0);
    }
    if (*(undefined2 **)(param_1 + 0x130) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x130) = 0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x140);
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 10;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    if ((*(int *)(param_1 + 0x154) < 0) && (*(int *)(param_1 + 0x154) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x148,0);
    }
    if (*(undefined2 **)(param_1 + 0x148) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x148) = 0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x158);
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 0xb;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    if ((*(int *)(param_1 + 0x16c) < 0) && (*(int *)(param_1 + 0x16c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x160,0);
    }
    if (*(undefined2 **)(param_1 + 0x160) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x160) = 0;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x170);
  local_res8 = 0;
  if (*plVar1 != 0) {
    local_28 = &local_res8;
    local_res8 = 0xc;
    local_20 = plVar1;
    FUN_142896930(param_1 + 0x90,local_res10,&local_28,0);
    local_res8 = 0;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    if ((*(int *)(param_1 + 0x184) < 0) && (*(int *)(param_1 + 0x184) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x178,0);
    }
    if (*(undefined2 **)(param_1 + 0x178) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x178) = 0;
    }
  }
  FUN_1428aaff0(param_1);
  return;
}



// FUNCTION 1428b52c0 FUN_1428b52c0 body=173 status=ok
// SIG undefined FUN_1428b52c0(void)

void FUN_1428b52c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b196a0) {
    _Init_thread_header(&DAT_146b196a0);
    if (DAT_146b196a0 == -1) {
      FName::FName(&DAT_146b19698,L"Intensity",1);
      _Init_thread_footer(&DAT_146b196a0);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x708);
  if (((plVar1 != (longlong *)0x0) && (param_2 != 0)) &&
     (*(longlong *)(param_2 + 0x18) == DAT_146b19698)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
  }
  FUN_142394530(param_1,param_2);
  return;
}



// FUNCTION 1428b5370 FUN_1428b5370 body=187 status=ok
// SIG undefined FUN_1428b5370(void)

void FUN_1428b5370(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  
  UObject::PostLoad();
  cVar4 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar4 == '\0') {
    puVar5 = (undefined8 *)operator_new(0x70);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 4;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      puVar5[6] = 0;
      *puVar5 = &PTR__scalar_deleting_destructor__1451e4b90;
      puVar5[0xd] = 0;
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)((longlong)puVar5 + 0x3c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)((longlong)puVar5 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      uVar1 = *(undefined4 *)(param_1 + 0x2c);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)((longlong)puVar5 + 0x4c) = uVar1;
      *(undefined4 *)(puVar5 + 10) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x54) = uVar3;
      puVar5[0xb] = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      FUntypedBulkData::GetCopy(param_1 + 0x60,puVar5 + 0xd,1);
    }
    *(undefined8 **)(param_1 + 0x58) = puVar5;
    FUN_141edf270(puVar5);
  }
  return;
}



// FUNCTION 1428b5460 FUN_1428b5460 body=1253 status=ok
// SIG undefined FUN_1428b5460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428b5460(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_378 [32];
  float *local_358;
  float local_348;
  float local_344;
  float fStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  float local_328 [2];
  longlong local_320;
  undefined8 local_318;
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  undefined **local_308;
  float local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined1 local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float local_2d0;
  float local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  float local_288 [4];
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [40];
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 local_118 [120];
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  fVar11 = *(float *)(param_2 + 0x34) * 0.75;
  fVar12 = *(float *)(param_2 + 0x30);
  fVar15 = 0.0;
  fVar14 = 0.0;
  fVar11 = (float)((int)ROUND((fVar11 + fVar11) - 0.5) >> 1);
  cVar6 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
  if (cVar6 != '\0') {
    fVar12 = fVar12 + -80.0;
    fVar15 = 30.0;
    fVar14 = 40.0;
  }
  cVar6 = FUN_142881000(DAT_146b17150,0);
  if (cVar6 != '\0') {
    fVar14 = fVar12 * 0.33333334;
    fVar12 = fVar12 - fVar14;
    fVar11 = *(float *)(param_2 + 0x34) * 0.6;
  }
  uVar7 = UEngine::GetSmallFont();
  local_318 = 2;
  local_320 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,0);
  lVar5 = local_320;
  FGenericPlatformString::Memcpy(local_320,&DAT_1451dfd04,4);
  local_358 = &local_348;
  FUN_1428bd2d0(param_2,uVar7,&local_320,local_310);
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  fVar13 = local_348;
  fVar15 = fVar15 + fVar11;
  local_2e0 = (float)DAT_146535592 * 0.003921569;
  fStack_2dc = (float)DAT_146535591 * 0.003921569;
  fStack_2d4 = *(float *)(*(longlong *)(param_1 + 0x118) + 0x50) * 0.01;
  fStack_2d8 = (float)DAT_146535590 * 0.003921569;
  local_2b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60);
  local_2cc = fVar15 - local_348;
  local_2b8 = 0x3f800000;
  local_2c8 = 0x3f800000;
  uStack_2c0 = 0x3f80000000000000;
  local_294 = (undefined4)DAT_1468b5d88;
  local_290 = DAT_1468b5d88._4_4_;
  local_2fc = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_308 = &PTR_FUN_1451e2200;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_338 = CONCAT44(fStack_2dc,local_2e0);
  uStack_330 = CONCAT44(fStack_2d4,fStack_2d8);
  local_2f4 = 10;
  local_300 = fVar14;
  local_2d0 = fVar12;
  FCanvas::DrawItem(*(undefined8 *)(param_2 + 0x260),&local_308,fStack_2dc,fStack_2d8);
  fVar11 = fVar11 - fVar13;
  iVar10 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x58) != 0) {
    FLinearColor::FLinearColor(local_288,*(longlong *)(param_1 + 0x118) + 0x58);
    local_338 = 0;
    uStack_330 = 0;
    fStack_340 = (fVar15 - 5.0) - fVar13;
    local_344 = fVar14;
    uVar8 = FUN_142875230();
    uVar9 = FText::FromString(local_278,&local_338);
    local_358 = local_288;
    FCanvasTextItem::FCanvasTextItem(local_248,&local_344,uVar9,uVar8);
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_270 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      fVar13 = local_348;
      if ((int)lVar5 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar2 = (int *)((longlong)local_270 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        fVar13 = local_348;
        if (iVar4 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
          fVar13 = local_348;
        }
      }
    }
    if (local_338 != 0) {
      FMemory::Free();
    }
    fVar12 = -fVar13;
    local_220 = DAT_1464aa6c0;
    uStack_21c = DAT_1464aa6c4;
    uStack_218 = DAT_1464aa6c8;
    uStack_214 = DAT_1464aa6cc;
    for (; (fVar12 < fVar11 && (-1 < iVar10)); iVar10 = iVar10 + -1) {
      if (iVar10 < *(int *)(param_1 + 0x58)) {
        local_358 = local_328;
        FUN_1428bd2d0(param_2,uVar7,*(longlong *)(param_1 + 0x50) + (longlong)iVar10 * 0x10,
                      local_30c);
        if (fVar13 < local_328[0]) {
          fVar11 = fVar11 - (local_328[0] - fVar13);
        }
        uVar8 = FText::FromString(local_260,*(longlong *)(param_1 + 0x50) + (longlong)iVar10 * 0x10)
        ;
        FText::operator=(local_118,uVar8);
        plVar1 = local_258;
        if (local_258 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_258 + 1;
          lVar5 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          fVar13 = local_348;
          if ((int)lVar5 == 1) {
            (**(code **)*local_258)(local_258);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            fVar13 = local_348;
            if (iVar4 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
              fVar13 = local_348;
            }
          }
        }
        FCanvas::DrawItem(*(undefined8 *)(param_2 + 0x260),local_248);
      }
      fVar11 = fVar11 - fVar13;
    }
    FUN_140c64b70(local_248);
  }
  local_344 = (float)(int)fVar14;
  fStack_340 = (float)(int)(fVar15 + 6.0);
  FUN_1428b5a10(param_1,param_2,CONCAT44(fStack_340,local_344));
  return;
}



// FUNCTION 1428b5950 FUN_1428b5950 body=192 status=ok
// SIG undefined FUN_1428b5950(void)

void FUN_1428b5950(undefined8 param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x34);
  fVar3 = 0.0;
  fVar4 = *(float *)(param_2 + 0x30);
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
  if (cVar1 != '\0') {
    fVar4 = fVar4 + -64.0;
    fVar2 = fVar2 + -32.0;
    fVar3 = 32.0;
  }
  cVar1 = FUN_142881000(DAT_146b17150,0);
  if (cVar1 != '\0') {
    fVar2 = fVar2 * 0.6;
    fVar3 = fVar4 * 0.33333334;
  }
  FUN_1428b5a10(param_1,param_2,CONCAT44((int)fVar2,(int)fVar3));
  return;
}



// FUNCTION 1428b5a10 FUN_1428b5a10 body=3509 status=ok
// SIG undefined FUN_1428b5a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428b5a10(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  short *psVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  wchar_t *pwVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_res18;
  undefined1 auStack_568 [32];
  float *local_548;
  float local_538;
  float local_534;
  longlong local_530;
  float local_528;
  float local_524;
  undefined8 *local_520;
  undefined8 local_518;
  float local_510;
  float local_50c;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  float local_4f0 [2];
  ulonglong local_4e8;
  ulonglong local_4e0;
  longlong local_4d8;
  ulonglong local_4d0;
  wchar_t *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  float local_4b8;
  float local_4b4;
  ulonglong local_4b0;
  int local_4a8;
  undefined4 local_4a4;
  undefined **local_498;
  float local_490;
  float local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined1 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  float local_460;
  float local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  float local_418;
  float local_414;
  ulonglong local_410 [3];
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  float fStack_3e4;
  longlong local_3e0 [2];
  longlong local_3d0 [3];
  longlong local_3b8;
  undefined ***local_3b0;
  float *local_3a8;
  float *local_3a0;
  longlong *local_398;
  undefined8 *local_390;
  float *local_388;
  float *local_380;
  undefined8 *local_378;
  float *local_370;
  undefined1 *local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  float local_348 [4];
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
  undefined **local_2b8;
  float local_2b0;
  float local_2ac;
  ulonglong local_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  float local_280;
  float local_27c;
  undefined4 local_278;
  longlong local_240;
  undefined8 local_238;
  undefined1 local_228 [40];
  undefined8 local_200;
  undefined8 uStack_1f8;
  uint local_1e8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_f8 [120];
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  uVar20 = 0;
  iVar6 = 0;
  local_50c = 0.0;
  if (*(int *)(param_1 + 0x80) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = *(undefined2 **)(param_1 + 0x78);
  }
  psVar15 = &DAT_143f3eda8;
  if (DAT_1465355a0 != 0) {
    psVar15 = DAT_146535598;
  }
  local_res18 = param_3;
  local_530 = param_2;
  FString::PrintfImpl(local_3e0,L"%s%s",psVar15,puVar18);
  if (*(int *)(param_1 + 0x98) < 2) {
    local_410[1] = 0;
    puVar8 = local_410;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    uVar17 = (ulonglong)(*(int *)(param_1 + 0x80) - 1);
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar17 = uVar20;
    }
    if (*(int *)(param_1 + 0x98) == 0) {
      puVar18 = &DAT_143f3eda8;
      iVar14 = iVar6;
    }
    else {
      puVar18 = *(undefined2 **)(param_1 + 0x90);
      iVar14 = *(int *)(param_1 + 0x98) + -1;
    }
    iVar9 = iVar14 - (int)uVar17;
    if ((-1 < iVar9) && (iVar6 = iVar14, iVar9 < iVar14)) {
      iVar6 = iVar9;
    }
    local_4e8 = 0;
    local_4e0 = 0;
    psVar15 = puVar18 + ((longlong)iVar14 - (longlong)iVar6);
    if ((psVar15 != (short *)0x0) && (*psVar15 != 0)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (psVar15[lVar11] != 0);
      uVar10 = (int)lVar11 + 1;
      local_4e0 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e8,0);
      }
      uVar20 = local_4e8;
      FGenericPlatformString::Memcpy(local_4e8,psVar15,(longlong)(int)uVar10 * 2);
    }
    puVar8 = &local_4e8;
    bVar4 = true;
    bVar3 = false;
  }
  *puVar8 = 0;
  local_4a8 = (int)puVar8[1];
  local_4a4 = *(undefined4 *)((longlong)puVar8 + 0xc);
  puVar8[1] = 0;
  local_4b0 = uVar20;
  if ((bVar3) && (local_410[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_4e8 != 0)) {
    FMemory::Free();
  }
  local_508 = UEngine::GetSmallFont();
  local_548 = &local_538;
  FUN_1428bd2d0(local_530,local_508,local_3e0,&local_534);
  fVar27 = *(float *)(local_530 + 0x30);
  cVar5 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
  if (cVar5 != '\0') {
    fVar27 = fVar27 + -64.0;
  }
  cVar5 = FUN_142881000(DAT_146b17150,0);
  if (cVar5 != '\0') {
    fVar27 = *(float *)(local_530 + 0x30) - (float)(int)local_res18;
  }
  fVar26 = *(float *)(*(longlong *)(param_1 + 0x118) + 0x50) * 0.01;
  fVar25 = (float)DAT_146535591 * 0.003921569;
  local_45c = local_538 + 6.0;
  local_48c = (float)(local_res18._4_4_ + -6) - local_538;
  local_440 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60);
  local_490 = (float)(int)local_res18;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_498 = &PTR_FUN_1451e2200;
  local_458 = 0x3f800000;
  uStack_450 = 0x3f80000000000000;
  local_424 = (undefined4)DAT_1468b5d88;
  local_420 = DAT_1468b5d88._4_4_;
  local_448 = 0x3f800000;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_470 = CONCAT44(fVar25,(float)DAT_146535592 * 0.003921569);
  uStack_468 = CONCAT44(fVar26,(float)DAT_146535590 * 0.003921569);
  local_484 = 10;
  local_500 = CONCAT44(fVar25,(float)DAT_146535592 * 0.003921569);
  uStack_4f8 = CONCAT44(fVar26,(float)DAT_146535590 * 0.003921569);
  local_460 = fVar27;
  FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),&local_498,local_530,fVar25);
  FLinearColor::FLinearColor(&local_358,&DAT_146535588);
  local_470 = local_358;
  uStack_468 = uStack_350;
  local_440 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x60);
  local_45c = 2.0;
  local_460 = fVar27;
  FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),&local_498);
  FText::FromString(local_308,local_3e0);
  FLinearColor::FLinearColor(local_348,*(longlong *)(param_1 + 0x118) + 0x58);
  local_4b8 = (float)(int)local_res18;
  local_4b4 = (float)(local_res18._4_4_ + -3) - local_538;
  uVar7 = FUN_142875230();
  local_548 = local_348;
  FCanvasTextItem::FCanvasTextItem(local_228,&local_4b8,local_308,uVar7);
  local_1e8 = local_1e8 | 2;
  local_1c0 = _DAT_1464aa6e0;
  uStack_1b8 = _DAT_1464aa6e8;
  local_1b0 = 0x3f800000;
  local_1ac = 0x3f800000;
  FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),local_228);
  if (1 < local_4a8) {
    FLinearColor::FLinearColor(&local_338,*(longlong *)(param_1 + 0x118) + 0x68);
    local_200 = local_338;
    uStack_1f8 = uStack_330;
    uVar7 = FText::FromString(local_2f0,&local_4b0);
    FText::operator=(local_f8,uVar7);
    if (local_2e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2e8 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_2e8)(local_2e8);
        LOCK();
        piVar2 = (int *)((longlong)local_2e8 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_2e8 + 8))(local_2e8,1);
        }
      }
    }
    FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),local_228,
                      (float)(int)local_res18 + local_534,
                      (float)(local_res18._4_4_ + -3) - local_538);
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    iVar6 = *(int *)(param_1 + 0xcc);
    if ((iVar6 < 0) && (iVar6 = *(int *)(param_1 + 0x110) + iVar6, iVar6 < 1)) {
      iVar6 = 0;
    }
    lVar11 = 0;
    local_4d8 = 0;
    psVar15 = &DAT_143f3eda8;
    if (DAT_1465355a0 != 0) {
      psVar15 = DAT_146535598;
    }
    local_4d0 = 0;
    if ((psVar15 != (short *)0x0) && (*psVar15 != 0)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (psVar15[lVar11] != 0);
      uVar10 = (int)lVar11 + 1;
      local_4d0 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
      }
      lVar11 = local_4d8;
      FGenericPlatformString::Memcpy(local_4d8,psVar15,(longlong)(int)uVar10 * 2);
    }
    uVar10 = 0;
    local_548 = &local_538;
    FUN_1428bd2d0(local_530,local_508,&local_4d8,&local_534);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
    local_524 = ((float)local_res18._4_4_ - 6.0) - local_538 * 2.0;
    FLinearColor::FLinearColor(&local_3f0,&DAT_146535590);
    local_520 = (undefined8 *)0x0;
    local_518 = 0;
    fStack_3e4 = *(float *)(*(longlong *)(param_1 + 0x118) + 0x50) * 0.01;
    uStack_468 = CONCAT44(fStack_3e4,uStack_3e8);
    local_440 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x60);
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_520,0x15);
    local_528 = 0.0;
    lVar11 = (longlong)iVar6 * 0x28;
    puVar21 = local_520;
    fVar27 = 0.0;
    iVar6 = (int)local_518;
    do {
      fVar25 = fVar27;
      if (*(int *)(param_1 + 0x110) <= (int)uVar10) break;
      lVar22 = (longlong)iVar6;
      lVar12 = *(longlong *)(param_1 + 0x108) + lVar11;
      iVar14 = iVar6 + 1;
      local_518 = CONCAT44(local_518._4_4_,iVar14);
      if (local_518._4_4_ < iVar14) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_520,iVar6);
        puVar21 = local_520;
        iVar14 = (int)local_518;
      }
      iVar6 = iVar14;
      puVar21[lVar22] = lVar12;
      cVar5 = FAutoCompleteCommand::IsHistory(lVar12);
      lVar22 = lVar12 + 0x10;
      if (cVar5 == '\0') {
        lVar22 = lVar12;
      }
      local_548 = &local_418;
      FUN_1428bd2d0(local_530,local_508,lVar22,local_4f0);
      if (local_528 < local_4f0[0]) {
        local_528 = local_4f0[0];
      }
      if (1 < *(int *)(lVar12 + 0x18)) {
        cVar5 = FAutoCompleteCommand::IsHistory(lVar12);
        if (cVar5 == '\0') {
          lVar12 = lVar12 + 0x10;
        }
        local_548 = &local_414;
        FUN_1428bd2d0(local_530,local_508,lVar12,&local_50c);
        fVar25 = local_50c + 6.0;
        if (local_50c + 6.0 <= fVar27) {
          fVar25 = fVar27;
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x28;
      fVar27 = fVar25;
    } while (uVar10 < 0x14);
    if (0x14 < *(uint *)(param_1 + 0x110)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b195c4) &&
         (_Init_thread_header(&DAT_146b195c4), DAT_146b195c4 == -1)) {
        atexit(FUN_143ebdb40);
        _Init_thread_footer(&DAT_146b195c4);
      }
      FString::PrintfImpl(local_410 + 2,L"[%i more matches]",*(int *)(param_1 + 0x110) + -0x14);
      if (DAT_146535650 != 0) {
        FMemory::Free();
      }
      DAT_146535650 = local_410[2];
      _DAT_146535658 = local_3f8;
      _DAT_14653565c = local_3f4;
      lVar11 = (longlong)iVar6;
      _DAT_146535670 = *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x68);
      iVar14 = iVar6 + 1;
      local_518 = CONCAT44(local_518._4_4_,iVar14);
      if (local_518._4_4_ < iVar14) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_520,iVar6);
        puVar21 = local_520;
        iVar14 = (int)local_518;
      }
      iVar6 = iVar14;
      puVar21[lVar11] = &DAT_146535650;
    }
    local_510 = fVar25 + local_528;
    local_470 = CONCAT44(uStack_3ec,local_3f0);
    uStack_468 = CONCAT44(fStack_3e4,uStack_3e8);
    local_460 = local_510 + 8.0;
    local_484 = 10;
    fVar27 = (float)iVar6 * local_538;
    local_45c = fVar27 + 8.0;
    FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),&local_498,
                      ((float)(int)local_res18 + local_534) - 4.0,
                      ((local_524 + local_538) - fVar27) - 4.0);
    local_280 = local_510 + 8.0;
    iVar14 = 0;
    local_2b0 = local_490;
    local_2a8 = 0;
    local_2ac = local_48c;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = _DAT_1464aa6c0;
    uStack_288 = _DAT_1464aa6c8;
    local_2b8 = &PTR_FUN_1444d5548;
    local_278 = 0;
    local_240 = 0;
    local_238 = 0;
    local_27c = fVar27 + 8.0;
    FLinearColor::FLinearColor(&local_328,&DAT_146535588);
    local_2a8 = local_2a8 & 0xffffffff;
    local_290 = local_328;
    uStack_288 = uStack_320;
    FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),&local_2b8,
                      ((float)(int)local_res18 + local_534) - 4.0,
                      ((local_524 + local_538) - fVar27) - 4.0);
    local_3b0 = &local_498;
    local_3a8 = &local_510;
    local_3a0 = &local_538;
    local_398 = &local_530;
    local_390 = &local_res18;
    local_388 = &local_534;
    local_380 = &local_524;
    local_378 = &local_508;
    local_370 = &local_528;
    local_368 = local_228;
    local_3b8 = param_1;
    if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x54) == '\0') {
      puVar23 = puVar21;
      if (0 < iVar6) {
        do {
          FUN_14289d8c0(&local_3b8,*puVar23,iVar14,iVar6);
          iVar14 = iVar14 + 1;
          puVar23 = puVar23 + 1;
        } while (iVar14 < iVar6);
      }
    }
    else {
      iVar14 = iVar6 + -1;
      if (-1 < iVar14) {
        puVar23 = puVar21 + iVar14;
        do {
          FUN_14289d8c0(&local_3b8,*puVar23,iVar14,iVar6);
          iVar14 = iVar14 + -1;
          puVar23 = puVar23 + -1;
        } while (-1 < iVar14);
      }
    }
    if (local_240 != 0) {
      FMemory::Free();
    }
    local_2b8 = &PTR_FUN_143f4c5f0;
    if (puVar21 != (undefined8 *)0x0) {
      FMemory::Free(puVar21);
    }
  }
  pwVar16 = (wchar_t *)0x0;
  iVar6 = *(int *)(param_1 + 0x80);
  iVar14 = *(int *)(param_1 + 0x88);
  if (iVar6 == 0) {
    pwVar24 = L"";
  }
  else {
    pwVar24 = *(wchar_t **)(param_1 + 0x78);
  }
  iVar19 = 0;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = iVar19;
  }
  if ((-1 < iVar14) && (iVar19 = iVar9, iVar14 < iVar9)) {
    iVar19 = iVar14;
  }
  local_4c8 = (wchar_t *)0x0;
  local_4bc = 0;
  pwVar13 = (wchar_t *)(ulonglong)(iVar19 + 1);
  if (iVar19 == 0) {
    pwVar13 = pwVar16;
  }
  iVar6 = (int)pwVar13;
  local_4c0 = iVar6;
  if ((0 < iVar6) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,0), iVar6 = local_4c0,
     pwVar16 = local_4c8, 0 < local_4c0)) {
    wcsncpy(local_4c8,pwVar24,(longlong)iVar19);
    pwVar16[iVar19] = L'\0';
  }
  pwVar24 = L"";
  if (iVar6 != 0) {
    pwVar24 = pwVar16;
  }
  psVar15 = &DAT_143f3eda8;
  if (DAT_1465355a0 != 0) {
    psVar15 = DAT_146535598;
  }
  FString::PrintfImpl(local_3d0,L"%s%s",psVar15,pwVar24);
  if (pwVar16 != (wchar_t *)0x0) {
    FMemory::Free(pwVar16);
  }
  local_548 = &local_538;
  FUN_1428bd2d0(local_530,local_508,local_3d0,&local_534);
  FLinearColor::FLinearColor(&local_318,&DAT_14653558c);
  local_500 = 0;
  uStack_4f8 = 2;
  local_200 = local_318;
  uStack_1f8 = uStack_310;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_500,0);
  FGenericPlatformString::Memcpy(local_500,&DAT_1451dfd1c,4);
  uVar7 = FText::FromString(local_2d8,&local_500);
  FText::operator=(local_f8,uVar7);
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2d0 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar2 = (int *)((longlong)local_2d0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  if (local_500 != 0) {
    FMemory::Free();
  }
  FCanvas::DrawItem(*(undefined8 *)(local_530 + 0x260),local_228,(float)(int)local_res18 + local_534
                    ,((float)local_res18._4_4_ - 1.0) - local_538);
  if (local_3d0[0] != 0) {
    FMemory::Free();
  }
  FUN_140c64b70(local_228);
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_300 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar2 = (int *)((longlong)local_300 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_300 + 8))(local_300,1);
      }
    }
  }
  local_498 = &PTR_FUN_143f4c5f0;
  if (local_4b0 != 0) {
    FMemory::Free();
  }
  if (local_3e0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428b67d0 FUN_1428b67d0 body=472 status=ok
// SIG undefined FUN_1428b67d0(void)

undefined8 FUN_1428b67d0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong local_28 [4];
  
  lVar4 = *param_2;
  if ((lVar4 == DAT_1469ea0c0) || (lVar4 == DAT_1469ea0d8)) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffffd;
    }
    else if (param_3 == 0) {
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 2;
    }
    plVar5 = (longlong *)param_2[2];
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
    return 1;
  }
  if (((*(byte *)(param_1 + 0x16) & 2) != 0) && (param_3 == 0)) {
    if (lVar4 == DAT_1469e9d60) {
      local_28[0] = 0;
      local_28[1] = 0;
      FWindowsPlatformApplicationMisc::ClipboardPaste(local_28);
      (**(code **)(*param_1 + 0x2b8))(param_1,local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      FKey::~FKey(param_2);
      return 1;
    }
    if (lVar4 == DAT_1469e9b98) {
      if ((int)param_1[0x10] != 0) {
        FUN_1416cf5b0(param_1[0xf]);
        FKey::~FKey(param_2);
        return 1;
      }
      FUN_1416cf5b0(&DAT_143f3eda8);
      FKey::~FKey(param_2);
      return 1;
    }
    if (lVar4 == DAT_1469e9d90) {
      if (1 < (int)param_1[0x10]) {
        if ((int)param_1[0x10] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)param_1[0xf];
        }
        FUN_1416cf5b0(puVar6);
        local_28[2] = 0;
        local_28[3] = 0;
        (**(code **)(*param_1 + 0x278))(param_1,local_28 + 2);
        if (local_28[2] != 0) {
          FMemory::Free();
        }
        (**(code **)(*param_1 + 0x280))(param_1,0);
      }
      FKey::~FKey(param_2);
      return 1;
    }
  }
  FKey::~FKey(param_2);
  return 0;
}



// FUNCTION 1428b69b0 FUN_1428b69b0 body=9089 status=ok
// SIG undefined FUN_1428b69b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428b69b0(longlong *param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong **pplVar24;
  longlong *plVar25;
  byte *pbVar26;
  int *piVar27;
  undefined4 *puVar28;
  uint *puVar29;
  byte *pbVar30;
  byte *pbVar31;
  longlong *plVar32;
  int *piVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined4 uVar36;
  undefined1 auStack_5d8 [32];
  longlong *local_5b8;
  undefined8 local_5b0;
  char local_5a8;
  undefined1 local_5a7;
  undefined1 local_5a6 [6];
  longlong *local_5a0;
  undefined1 local_598 [4];
  int local_594;
  longlong *local_590;
  int local_588;
  int local_584;
  longlong *local_580;
  longlong local_578;
  longlong *plStack_570;
  int local_568;
  int local_564;
  int local_560;
  undefined4 local_55c;
  int local_558;
  int local_554;
  longlong local_550;
  longlong *local_548;
  ulonglong uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_530 [16];
  uint local_520;
  uint uStack_51c;
  uint *puStack_518;
  undefined4 local_510;
  int iStack_50c;
  uint uStack_508;
  undefined4 uStack_504;
  longlong *local_500;
  int local_4f8;
  int local_4f0;
  int local_4ec;
  longlong *local_4e8;
  undefined1 local_4e0 [16];
  longlong local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  int local_498;
  int local_490;
  int local_48c;
  longlong *local_488;
  int local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  longlong *local_448;
  undefined8 uStack_440;
  uint *local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  longlong *local_418;
  undefined2 local_410;
  undefined8 local_408;
  int local_400;
  int local_3f8;
  longlong *local_3f0;
  undefined4 local_3e8;
  char local_3e4;
  undefined1 local_3e0 [4];
  longlong local_3dc;
  undefined4 local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c4;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined4 local_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  int local_390;
  undefined8 local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong local_360;
  int local_358;
  int local_354;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_330 [8];
  undefined8 local_328;
  undefined1 local_320;
  longlong local_310;
  longlong local_308;
  longlong *local_300;
  uint local_2f8;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [8];
  undefined8 local_2a0;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  undefined4 local_178;
  int local_174;
  undefined1 local_170 [16];
  undefined1 local_160 [48];
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  uint local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong *plStack_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  lVar34 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_5a8 = param_4;
  local_5a0 = param_1;
  local_580 = param_2;
  if ((*(int *)(lVar34 + 0x38) < DAT_146b195f8) &&
     (_Init_thread_header(&DAT_146b195f8), DAT_146b195f8 == -1)) {
    atexit(`UPlayerInput::ProcessInputStack'::`2'::_dynamic_atexit_destructor_for__AxisDelegates__);
    _Init_thread_footer(&DAT_146b195f8);
  }
  if ((*(int *)(lVar34 + 0x38) < DAT_146b19610) &&
     (_Init_thread_header(&DAT_146b19610), DAT_146b19610 == -1)) {
    atexit(`UPlayerInput::ProcessInputStack'::`2'::
           _dynamic_atexit_destructor_for__VectorAxisDelegates__);
    _Init_thread_footer(&DAT_146b19610);
  }
  if ((*(int *)(lVar34 + 0x38) < DAT_146b19628) &&
     (_Init_thread_header(&DAT_146b19628), DAT_146b19628 == -1)) {
    atexit((_func_5014 *)&LAB_143ebdb70);
    _Init_thread_footer(&DAT_146b19628);
  }
  if ((*(int *)(lVar34 + 0x38) < DAT_146b19640) &&
     (_Init_thread_header(&DAT_146b19640), DAT_146b19640 == -1)) {
    atexit((_func_5014 *)&LAB_143ebda70);
    _Init_thread_footer(&DAT_146b19640);
  }
  if ((*(int *)(lVar34 + 0x38) < DAT_146b19658) &&
     (_Init_thread_header(&DAT_146b19658), DAT_146b19658 == -1)) {
    atexit((_func_5014 *)&LAB_143ebd9c0);
    _Init_thread_footer(&DAT_146b19658);
  }
  if ((*(int *)(lVar34 + 0x38) < DAT_146b19670) &&
     (_Init_thread_header(&DAT_146b19670), DAT_146b19670 == -1)) {
    atexit(FUN_143ebda80);
    _Init_thread_footer(&DAT_146b19670);
  }
  if ((*(int *)(lVar34 + 0x38) < DAT_146b19688) &&
     (_Init_thread_header(&DAT_146b19688), DAT_146b19688 == -1)) {
    atexit(`UPlayerInput::ProcessInputStack'::`2'::
           _dynamic_atexit_destructor_for__PotentialActions__);
    _Init_thread_footer(&DAT_146b19688);
  }
  plVar25 = (longlong *)0x0;
  local_4a8 = plVar25;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    local_4a8 = (longlong *)param_1[4];
  }
  (**(code **)(*local_4a8 + 0xb98))(local_4a8,param_3,param_4);
  local_548 = param_1 + 0x4c;
  local_520 = 0;
  iVar8 = (int)param_1[0x51];
  uStack_538 = (uint *)(param_1 + 0x4e);
  uStack_51c = 1;
  iStack_50c = 0;
  uStack_508 = 0;
  if (iVar8 != 0) {
    puVar29 = (uint *)param_1[0x50];
    if ((uint *)param_1[0x50] == (uint *)0x0) {
      puVar29 = uStack_538;
    }
    uVar19 = *puVar29;
    plVar32 = plVar25;
    while (uVar19 == 0) {
      iVar7 = (int)plVar25;
      uStack_508 = (int)plVar32 + 0x20;
      plVar32 = (longlong *)(ulonglong)uStack_508;
      local_520 = iVar7 + 1;
      plVar25 = (longlong *)(ulonglong)local_520;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1428b6b75;
      uVar19 = puVar29[(longlong)iVar7 + 1];
    }
    uStack_51c = -uVar19 & uVar19;
    local_3f8 = 0x1f;
    if (uStack_51c != 0) {
      for (; uStack_51c >> local_3f8 == 0; local_3f8 = local_3f8 + -1) {
      }
    }
    if (uStack_51c == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - local_3f8;
    }
    iStack_50c = (uStack_508 - iVar7) + 0x1f;
    if (iVar8 < iStack_50c) {
LAB_1428b6b75:
      iStack_50c = iVar8;
    }
  }
  local_510 = 0xffffffff;
  uStack_430 = CONCAT44(iStack_50c,0xffffffff);
  auStack_530._8_4_ = uStack_508;
  auStack_530._0_8_ = uStack_430;
  auStack_530._12_4_ = uStack_504;
  uStack_540 = CONCAT44(uStack_51c,local_520);
  local_410 = 0;
  local_4e0._8_4_ = SUB84(local_548,0);
  local_4e0._12_4_ = (undefined4)((ulonglong)local_548 >> 0x20);
  local_4e0._0_8_ = auStack_530._8_8_;
  local_428._8_4_ = local_4e0._8_4_;
  local_428._0_8_ = auStack_530._8_8_;
  local_428._12_4_ = local_4e0._12_4_;
  iVar8 = iStack_50c;
  puStack_518 = uStack_538;
  local_448 = local_548;
  uStack_440 = uStack_540;
  local_438 = uStack_538;
  local_418 = local_548;
  if (iStack_50c < (int)param_1[0x51]) {
    do {
      bVar4 = false;
      lVar34 = 5;
      plVar32 = (longlong *)((longlong)iVar8 * 0xf0 + *local_448);
      pfVar1 = (float *)(plVar32 + 3);
      plVar25 = plVar32 + 7;
      do {
        *(undefined4 *)(plVar25 + 1) = 0;
        if ((*(int *)((longlong)plVar25 + 0xc) < 0) && (*(int *)((longlong)plVar25 + 0xc) != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar25,0);
        }
        plVar12 = plVar25 + 10;
        if (plVar25 != plVar12) {
          local_a8 = *plVar25;
          lStack_a0 = plVar25[1];
          *(int *)plVar25 = (int)*plVar12;
          *(undefined4 *)((longlong)plVar25 + 4) = *(undefined4 *)((longlong)plVar25 + 0x54);
          *(int *)(plVar25 + 1) = (int)plVar25[0xb];
          *(undefined4 *)((longlong)plVar25 + 0xc) = *(undefined4 *)((longlong)plVar25 + 0x5c);
          *plVar12 = local_a8;
          plVar25[0xb] = lStack_a0;
        }
        if ((!bVar4) && (0 < (int)plVar25[1])) {
          lVar20 = (longlong)DAT_146b19668;
          DAT_146b19668 = DAT_146b19668 + 1;
          if (DAT_146b1966c < DAT_146b19668) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&DAT_146b19660);
          }
          plVar12 = DAT_146b19660 + lVar20 * 4;
          *plVar12 = *plVar32;
          plVar12[1] = plVar32[1];
          lVar20 = plVar32[2];
          plVar12[2] = lVar20;
          if (lVar20 != 0) {
            LOCK();
            *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
            UNLOCK();
          }
          plVar12[3] = (longlong)pfVar1;
          bVar4 = true;
        }
        plVar25 = plVar25 + 2;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      if ((*(char *)((longlong)plVar32 + 0x35) != '\0') ||
         (cVar5 = FUN_1417c90e0(plVar32), cVar5 != '\0')) {
        *(longlong *)pfVar1 = plVar32[0x1b];
        *(int *)(plVar32 + 4) = (int)plVar32[0x1c];
        if (*(char *)((longlong)plVar32 + 0x35) == '\0') {
          *(int *)(param_1 + 0x74) = (int)param_1[0x74] + 1;
          iVar8 = (int)plVar32[10];
          *(int *)(plVar32 + 10) = iVar8 + 1;
          if (*(int *)((longlong)plVar32 + 0x54) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar32 + 9,iVar8);
          }
          *(int *)(plVar32[9] + (longlong)iVar8 * 4) = (int)param_1[0x74];
          iVar8 = DAT_146b19668;
          if (!bVar4) {
            lVar34 = (longlong)DAT_146b19668;
            DAT_146b19668 = DAT_146b19668 + 1;
            if (DAT_146b1966c < DAT_146b19668) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&DAT_146b19660,iVar8);
            }
            plVar25 = DAT_146b19660 + lVar34 * 4;
            *plVar25 = *plVar32;
            plVar25[1] = plVar32[1];
            lVar34 = plVar32[2];
            plVar25[2] = lVar34;
            if (lVar34 != 0) {
              LOCK();
              *(int *)(lVar34 + 8) = *(int *)(lVar34 + 8) + 1;
              UNLOCK();
            }
            plVar25[3] = (longlong)pfVar1;
          }
        }
      }
      local_198 = *plVar32;
      if (((local_198 == DAT_1469e97f0) && (*pfVar1 != 0.0)) && (*(float *)(param_1 + 0x21) != 0.0))
      {
        *(float *)((longlong)param_1 + 0x114) =
             (float)((double)*(float *)((longlong)param_1 + 0x114) + DAT_1464a97d0);
        *(uint *)(param_1 + 0x22) = (int)param_1[0x22] + (uint)*(byte *)((longlong)plVar32 + 0x35);
        local_198 = *plVar32;
      }
      plVar12 = (longlong *)plVar32[2];
      local_190 = plVar32[1];
      plVar25 = plVar12 + 1;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar25 = (int)*plVar25 + 1;
        UNLOCK();
        LOCK();
        *(int *)plVar25 = (int)*plVar25 + 1;
        UNLOCK();
      }
      local_188 = plVar12;
      uVar36 = (**(code **)(*param_1 + 0x290))(param_1,&local_198,*pfVar1);
      bVar14 = *(byte *)((longlong)plVar32 + 0x34);
      *(undefined4 *)((longlong)plVar32 + 0x24) = uVar36;
      iVar8 = (int)plVar32[8] - (int)plVar32[10];
      if (iVar8 < 0) {
        bVar14 = bVar14 & 0xfe;
      }
      else if (iVar8 < 1) {
        bVar14 = bVar14 ^ (bVar14 >> 1 ^ bVar14) & 1;
      }
      else {
        bVar14 = bVar14 | 1;
      }
      *(byte *)((longlong)plVar32 + 0x34) = bVar14;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        lVar34 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar34 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar33 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar33;
          *piVar33 = *piVar33 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      local_4c8 = 0;
      *(undefined1 *)((longlong)plVar32 + 0x35) = 0;
      plVar32[0x1b] = 0;
      *(undefined4 *)(plVar32 + 0x1c) = 0;
      uStack_430 = CONCAT44(uStack_430._4_4_,(uint)uStack_430 & ~uStack_440._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_440);
      iVar8 = uStack_430._4_4_;
    } while (uStack_430._4_4_ < (int)local_438[6]);
    param_4 = local_5a8;
    if (((char)local_410 != '\0') && (local_410._1_1_ != '\0')) {
      TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_418,(int)local_418[1] - *(int *)((longlong)local_418 + 0x34),1);
      param_4 = local_5a8;
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar8 = (int)local_580[1] + -1;
  local_4d0 = (longlong)iVar8;
  local_594 = iVar8;
  uVar18 = local_5a7;
  if (-1 < iVar8) {
    do {
      plVar25 = *(longlong **)(*local_580 + local_4d0 * 8);
      local_594 = iVar8;
      local_590 = plVar25;
      if (plVar25 != (longlong *)0x0) {
        local_3f0 = param_1;
        local_3e8 = param_3;
        local_3e4 = param_4;
        (**(code **)(*plVar25 + 0x3f8))(plVar25,&local_3f0,&DAT_146b19630);
        FUN_142365bc0(plVar25,param_1);
        plVar32 = DAT_146b19660 + (longlong)DAT_146b19668 * 4;
        if (DAT_146b19660 != plVar32) {
          plVar12 = DAT_146b19660 + 3;
          do {
            if ((*(byte *)(*plVar12 + 0x1c) & 4) == 0) {
              plVar9 = (longlong *)plVar12[-1];
              local_288 = plVar12[-3];
              local_280 = plVar12[-2];
              plVar17 = plVar9 + 1;
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                *(int *)plVar17 = (int)*plVar17 + 1;
                UNLOCK();
                LOCK();
                *(int *)plVar17 = (int)*plVar17 + 1;
                UNLOCK();
              }
              plVar17 = plVar9 + 1;
              local_278 = plVar9;
              FUN_142369070(plVar25,param_1,&local_288,&DAT_146b19678);
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                lVar34 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar34 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar33 = (int *)((longlong)plVar9 + 0xc);
                  iVar8 = *piVar33;
                  *piVar33 = *piVar33 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
            }
            plVar17 = plVar12 + 1;
            plVar12 = plVar12 + 4;
          } while (plVar17 != plVar32);
        }
        cVar5 = local_5a8;
        uVar21 = (ulonglong)(int)DAT_146b19680;
        puVar10 = DAT_146b19678 + uVar21 * 2;
        puVar15 = DAT_146b19678;
        if (DAT_146b19678 != puVar10) {
          do {
            local_5b8 = &DAT_146b19630;
            FUN_1428aca50(param_1,*puVar15,cVar5,&DAT_146b19648);
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar10);
          uVar21 = (ulonglong)DAT_146b19680;
        }
        if (DAT_146b19684 < 0) {
          if ((int)uVar21 != 0) {
            plVar32 = DAT_146b19678 + 1;
            do {
              plVar12 = (longlong *)*plVar32;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar17 = plVar12 + 1;
                lVar34 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar34 == 1) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar33 = (int *)((longlong)plVar12 + 0xc);
                  iVar8 = *piVar33;
                  *piVar33 = *piVar33 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12,1);
                  }
                }
              }
              plVar32 = plVar32 + 2;
              uVar19 = (int)uVar21 - 1;
              uVar21 = (ulonglong)uVar19;
            } while (uVar19 != 0);
          }
          DAT_146b19680 = 0;
          if (DAT_146b19684 != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146b19678,0);
          }
        }
        else {
          if ((int)uVar21 != 0) {
            plVar32 = DAT_146b19678 + 1;
            do {
              plVar12 = (longlong *)*plVar32;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar17 = plVar12 + 1;
                lVar34 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar34 == 1) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar33 = (int *)((longlong)plVar12 + 0xc);
                  iVar8 = *piVar33;
                  *piVar33 = *piVar33 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12,1);
                  }
                }
              }
              plVar32 = plVar32 + 2;
              uVar19 = (int)uVar21 - 1;
              uVar21 = (ulonglong)uVar19;
            } while (uVar19 != 0);
          }
          DAT_146b19680 = 0;
        }
        lVar34 = plVar25[0x2f];
        lVar20 = (longlong)(int)plVar25[0x30] * 0x60 + lVar34;
        for (; lVar34 != lVar20; lVar34 = lVar34 + 0x60) {
          local_5b0 = 0;
          local_5b8 = &DAT_146b19630;
          FUN_1428ac260(param_1,lVar34,cVar5,&DAT_146b19648);
          uVar18 = local_5a7;
        }
        AlgoImpl::
        IntroSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,_UPlayerInput::ProcessInputStack_::_2_::FDelegateDispatchDetailsSorter>_>
                  (DAT_146b19648,(longlong)DAT_146b19650,uVar18,local_598);
        uVar22 = 0;
        uVar21 = uVar22;
        if (0 < DAT_146b19650) {
          do {
            lVar34 = DAT_146b19648;
            lVar20 = *(longlong *)(uVar22 + 0x40 + DAT_146b19648);
            if ((lVar20 == 0) || ((*(byte *)(lVar20 + 1) & 1) == 0)) {
LAB_1428b7452:
              cVar5 = *(char *)(uVar22 + 0x38 + DAT_146b19648);
              if (cVar5 == '\x01') {
                if ((*(int *)(uVar22 + 0x10 + DAT_146b19648) != 0) &&
                   (plVar25 = *(longlong **)(uVar22 + 8 + DAT_146b19648), plVar25 != (longlong *)0x0
                   )) {
                  cVar5 = (**(code **)(*plVar25 + 0x18))();
joined_r0x0001428b74d2:
                  if (cVar5 != '\0') {
                    *(int *)(uVar22 + 4 + DAT_146b19648) = DAT_146b19620;
                    lVar34 = DAT_146b19648;
                    iVar8 = DAT_146b19620;
                    lVar20 = (longlong)DAT_146b19620;
                    DAT_146b19620 = DAT_146b19620 + 1;
                    if (DAT_146b19624 < DAT_146b19620) {
                      FUN_140ae1ad0(&DAT_146b19618,iVar8);
                    }
                    FUN_14289a6b0(DAT_146b19618 + lVar20 * 0x19,(longlong)(int)uVar21 * 200 + lVar34
                                 );
                  }
                }
              }
              else if (cVar5 == '\x02') {
                if ((*(int *)(uVar22 + 0x20 + DAT_146b19648) != 0) &&
                   (plVar25 = *(longlong **)(uVar22 + 0x18 + DAT_146b19648),
                   plVar25 != (longlong *)0x0)) {
                  cVar5 = (**(code **)(*plVar25 + 0x18))();
                  goto joined_r0x0001428b74d2;
                }
              }
              else if (cVar5 == '\x03') {
                local_4c0 = 0;
                lVar34 = uVar22 + DAT_146b19648;
                if ((*(longlong *)(lVar34 + 0x30) != 0) &&
                   (lVar20 = FWeakObjectPtr::Get(lVar34 + 0x28), lVar20 != 0)) {
                  lVar34 = UObject::FindFunction(lVar20,*(undefined8 *)(lVar34 + 0x30));
                  cVar5 = lVar34 != 0;
                  goto joined_r0x0001428b74d2;
                }
              }
            }
            else {
              lVar20 = *(longlong *)(lVar20 + 8);
              if ((int)param_1[0x39] != *(int *)((longlong)param_1 + 500)) {
                plVar25 = (longlong *)param_1[0x40];
                if ((longlong *)param_1[0x40] == (longlong *)0x0) {
                  plVar25 = param_1 + 0x3f;
                }
                iVar8 = *(int *)((longlong)plVar25 +
                                ((longlong)((int)((ulonglong)lVar20 >> 0x20) + (int)lVar20) &
                                (longlong)(int)param_1[0x41] - 1U) * 4);
                if (iVar8 != -1) {
                  do {
                    plVar25 = (longlong *)((longlong)iVar8 * 0x40 + param_1[0x38]);
                    if (*plVar25 == lVar20) {
                      if (iVar8 != -1) goto LAB_1428b72d1;
                      break;
                    }
                    iVar8 = (int)plVar25[7];
                  } while (iVar8 != -1);
                }
              }
              plVar25 = (longlong *)0x0;
LAB_1428b72d1:
              plVar32 = plVar25 + 3;
              cVar5 = FKey::IsValid(plVar32);
              if (cVar5 == '\0') {
LAB_1428b735a:
                if (*(char *)(*(longlong *)(uVar22 + 0x40 + lVar34) + 2) == '\0') {
                  lVar34 = uVar22 + lVar34;
                  FKey::operator=(plVar32,lVar34 + 0x48);
                  *(uint *)(plVar25 + 6) =
                       *(uint *)(plVar25 + 6) ^
                       (*(uint *)(plVar25 + 6) ^ *(uint *)(lVar34 + 0x60)) & 1;
                  uVar19 = (*(uint *)(plVar25 + 6) ^ *(uint *)(lVar34 + 0x60)) & 2 ^
                           *(uint *)(plVar25 + 6);
                  *(uint *)(plVar25 + 6) = uVar19;
                  uVar19 = (uVar19 ^ *(uint *)(lVar34 + 0x60)) & 4 ^ uVar19;
                  *(uint *)(plVar25 + 6) = uVar19;
                  *(uint *)(plVar25 + 6) = (uVar19 ^ *(uint *)(lVar34 + 0x60)) & 8 ^ uVar19;
                }
                else {
                  *plVar32 = DAT_1469eae28;
                  plVar32 = DAT_1469eae38;
                  lVar34 = DAT_1469eae30;
                  plVar12 = plVar25 + 4;
                  local_578 = DAT_1469eae30;
                  if (DAT_1469eae38 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
                    UNLOCK();
                  }
                  plVar17 = plVar32;
                  if (&local_578 != plVar12) {
                    local_578 = *plVar12;
                    plVar17 = (longlong *)plVar25[5];
                    local_98 = lVar34;
                    plStack_90 = plVar32;
                    *plVar12 = lVar34;
                    plVar25[5] = (longlong)plVar32;
                  }
                  plStack_570 = plVar17;
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    plVar25 = plVar17 + 1;
                    lVar34 = *plVar25;
                    *(int *)plVar25 = (int)*plVar25 + -1;
                    UNLOCK();
                    if ((int)lVar34 == 1) {
                      (**(code **)*plVar17)(plVar17);
                      LOCK();
                      piVar33 = (int *)((longlong)plVar17 + 0xc);
                      iVar8 = *piVar33;
                      *piVar33 = *piVar33 + -1;
                      UNLOCK();
                      if (iVar8 == 1) {
                        (**(code **)(*plStack_570 + 8))(plStack_570,1);
                      }
                    }
                  }
                }
                goto LAB_1428b7452;
              }
              lVar20 = *plVar32;
              if (lVar20 == *(longlong *)(uVar22 + 0x48 + lVar34)) {
                uVar19 = *(uint *)(uVar22 + 0x60 + lVar34);
                uVar3 = *(uint *)(plVar25 + 6);
                if ((((((uVar19 ^ uVar3) & 1) != 0) || (((uVar19 ^ uVar3) & 2) != 0)) ||
                    (((uVar19 ^ uVar3) & 4) != 0)) || (((uVar19 ^ uVar3) & 8) != 0))
                goto LAB_1428b7317;
                bVar4 = true;
              }
              else {
LAB_1428b7317:
                bVar4 = false;
              }
              if (bVar4) goto LAB_1428b735a;
              local_268 = plVar25[4];
              local_260 = plVar25[5];
              if (local_260 != 0) {
                LOCK();
                *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
                UNLOCK();
              }
              local_270 = lVar20;
              cVar5 = FUN_1428b2680(param_1,&local_270);
              if (cVar5 == '\0') goto LAB_1428b735a;
            }
            uVar19 = (int)uVar21 + 1;
            uVar22 = uVar22 + 200;
            uVar21 = (ulonglong)uVar19;
          } while ((int)uVar19 < DAT_146b19650);
        }
        local_584 = 0;
        if (0 < (int)local_590[0x32]) {
          plVar32 = param_1 + 0x72;
          local_550 = 0;
          plVar25 = local_5a0;
          do {
            lVar34 = local_590[0x31];
            local_4b0 = &DAT_1469ea750;
            local_588 = 0;
            lVar20 = local_550;
            local_4b8 = lVar34;
            do {
              plVar12 = local_4b0;
              iVar8 = local_588;
              if ((int)plVar25[0x4d] != *(int *)((longlong)plVar25 + 0x294)) {
                lVar23 = *local_4b0;
                plVar17 = (longlong *)plVar25[0x54];
                if ((longlong *)plVar25[0x54] == (longlong *)0x0) {
                  plVar17 = plVar25 + 0x53;
                }
                iVar7 = *(int *)((longlong)plVar17 +
                                ((longlong)((int)((ulonglong)lVar23 >> 0x20) + (int)lVar23) &
                                (longlong)(int)plVar25[0x55] - 1U) * 4);
                if (iVar7 != -1) {
                  do {
                    plVar17 = (longlong *)((longlong)iVar7 * 0xf0 + plVar25[0x4c]);
                    if (*plVar17 == lVar23) {
                      if (iVar7 != -1) goto LAB_1428b7647;
                      break;
                    }
                    iVar7 = (int)plVar17[0x1d];
                  } while (iVar7 != -1);
                }
              }
              plVar17 = (longlong *)0x0;
LAB_1428b7647:
              local_258 = *local_4b0;
              uVar18 = *(undefined1 *)(lVar20 + 1 + lVar34);
              local_250 = local_4b0[1];
              plVar9 = plVar17 + 3;
              if (plVar17 == (longlong *)0x0) {
                plVar9 = (longlong *)0x0;
              }
              local_248 = local_4b0[2];
              if (local_248 != 0) {
                LOCK();
                *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
                UNLOCK();
              }
              local_5b8 = plVar9;
              cVar5 = FUN_1428b3730(plVar25,&local_258,uVar18,plVar32);
              plVar17 = local_5a0;
              if (cVar5 != '\0') {
                local_240 = *plVar12;
                local_238 = plVar12[1];
                local_230 = plVar12[2];
                if (local_230 != 0) {
                  LOCK();
                  *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
                  UNLOCK();
                }
                cVar5 = FUN_1428b22c0(local_5a0,&local_240,plVar9);
                plVar25 = plVar17;
                if (cVar5 == '\0') {
                  bVar14 = *(byte *)(lVar20 + lVar34);
                  if (((bVar14 & 2) != 0) || (local_5a8 == '\0')) {
                    plVar25 = plVar17 + 0x16;
                    local_358 = *(int *)*plVar32;
                    if ((int)plVar17[0x17] != *(int *)((longlong)plVar17 + 0xe4)) {
                      plVar9 = (longlong *)plVar17[0x1e];
                      if ((longlong *)plVar17[0x1e] == (longlong *)0x0) {
                        plVar9 = plVar17 + 0x1d;
                      }
                      iVar7 = *(int *)((longlong)plVar9 +
                                      ((longlong)(int)plVar17[0x1f] - 1U & (longlong)local_358) * 4)
                      ;
                      if (iVar7 != -1) {
                        do {
                          puVar15 = (undefined8 *)(*plVar25 + (longlong)iVar7 * 0x18);
                          if (*(int *)(*plVar25 + (longlong)iVar7 * 0x18) == local_358) {
                            if (iVar7 != -1) goto LAB_1428b7773;
                            break;
                          }
                          iVar7 = *(int *)(puVar15 + 2);
                        } while (iVar7 != -1);
                      }
                    }
                    puVar15 = (undefined8 *)0x0;
LAB_1428b7773:
                    puVar10 = (undefined8 *)((longlong)puVar15 + 4);
                    if (puVar15 == (undefined8 *)0x0) {
                      puVar10 = (undefined8 *)0x0;
                    }
                    if (puVar10 == (undefined8 *)0x0) {
                      local_46c = 0xbf800000;
                      puVar15 = (undefined8 *)&local_46c;
                      uStack_468 = 0xbf800000;
                      local_464 = 0;
                    }
                    else {
                      local_3d0 = *puVar10;
                      puVar15 = &local_3d0;
                      local_3c8 = *(undefined4 *)(puVar10 + 1);
                    }
                    plVar17 = (longlong *)(local_4b8 + 8 + local_550);
                    local_354 = DAT_146b19620;
                    local_350 = 0;
                    local_348 = 0;
                    local_340 = 0;
                    local_338 = 0;
                    FWeakObjectPtr::operator=(local_330,0);
                    local_310 = DAT_1469eae28;
                    local_308 = DAT_1469eae30;
                    local_328 = 0;
                    local_320 = 0;
                    local_300 = DAT_1469eae38;
                    if (DAT_1469eae38 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
                      UNLOCK();
                    }
                    local_2f8 = local_2f8 & 0xfffffff0;
                    local_2e8 = 0;
                    local_2e0 = 0;
                    if (((plVar17 != &local_2e8) && ((int)plVar17[1] != 0)) &&
                       (plVar9 = (longlong *)*plVar17, plVar9 != (longlong *)0x0)) {
                      (**(code **)(*plVar9 + 0x30))(plVar9,&local_2e8);
                    }
                    local_2d8 = (undefined4)plVar17[2];
                    local_2c8 = *puVar15;
                    local_2d4 = *(undefined4 *)((longlong)plVar17 + 0x14);
                    local_2d0 = plVar17[3];
                    local_2c0 = *(undefined4 *)(puVar15 + 1);
                    local_2b8 = 0;
                    local_2b0 = 0;
                    local_2bc = iVar8;
                    FWeakObjectPtr::operator=(local_2a8,0);
                    iVar8 = DAT_146b19620;
                    lVar34 = (longlong)DAT_146b19620;
                    local_2a0 = 0;
                    DAT_146b19620 = DAT_146b19620 + 1;
                    if (DAT_146b19624 < DAT_146b19620) {
                      FUN_140ae1ad0(&DAT_146b19618,iVar8);
                    }
                    FUN_14289a6b0(DAT_146b19618 + lVar34 * 0x19,&local_358);
                    plVar17 = local_5a0;
                    iVar8 = 1;
                    if (1 < (int)local_5a0[0x73]) {
                      lVar34 = 4;
                      do {
                        local_358 = *(int *)(lVar34 + *plVar32);
                        FUN_141ec5c60(plVar25,&local_554);
                        iVar7 = DAT_146b19620;
                        puVar15 = (undefined8 *)0x0;
                        if (local_554 != -1) {
                          puVar15 = (undefined8 *)(*plVar25 + (longlong)local_554 * 0x18);
                        }
                        puVar10 = (undefined8 *)((longlong)puVar15 + 4);
                        if (puVar15 == (undefined8 *)0x0) {
                          puVar10 = (undefined8 *)0x0;
                        }
                        if (puVar10 == (undefined8 *)0x0) {
                          local_460 = 0xbf800000;
                          puVar15 = (undefined8 *)&local_460;
                          uStack_45c = 0xbf800000;
                          local_458 = 0;
                        }
                        else {
                          local_3bc = *(undefined4 *)(puVar10 + 1);
                          puVar15 = &local_3c4;
                          local_3c4 = *puVar10;
                        }
                        local_2c8 = *puVar15;
                        lVar20 = (longlong)DAT_146b19620;
                        local_2c0 = *(undefined4 *)(puVar15 + 1);
                        DAT_146b19620 = DAT_146b19620 + 1;
                        if (DAT_146b19624 < DAT_146b19620) {
                          FUN_140ae1ad0(&DAT_146b19618,iVar7);
                        }
                        FUN_14289a6b0(DAT_146b19618 + lVar20 * 0x19,&local_358);
                        iVar8 = iVar8 + 1;
                        lVar34 = lVar34 + 4;
                        plVar12 = local_4b0;
                      } while (iVar8 < (int)plVar17[0x73]);
                    }
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2b8);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2e8);
                    FKey::~FKey(&local_310);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_340);
                    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_350);
                    bVar14 = *(byte *)(local_550 + local_4b8);
                    lVar20 = local_550;
                    lVar34 = local_4b8;
                    iVar8 = local_588;
                  }
                  plVar25 = plVar17;
                  if ((bVar14 & 1) != 0) {
                    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                              (&DAT_146b19630,plVar12);
                  }
                }
              }
              local_588 = iVar8 + 1;
              local_4b0 = plVar12 + 3;
            } while (local_588 < 0xb);
            *(undefined4 *)(param_1 + 0x73) = 0;
            if ((*(int *)((longlong)param_1 + 0x39c) < 0) &&
               (*(int *)((longlong)param_1 + 0x39c) != 0)) {
              TArray<float,FDefaultAllocator>::ResizeTo(plVar32,0);
            }
            local_550 = lVar20 + 0x28;
            local_584 = local_584 + 1;
            uVar18 = local_5a7;
          } while (local_584 < (int)local_590[0x32]);
        }
        plVar25 = local_5a0;
        pbVar31 = (byte *)local_590[0x39];
        pbVar30 = pbVar31 + (longlong)(int)local_590[0x3a] * 0x40;
        if (pbVar31 != pbVar30) {
          pbVar26 = pbVar31 + 0x18;
          do {
            TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
            ::FindId(plVar25 + 0x4c,&local_568,pbVar26 + -0x10);
            if (local_568 == -1) {
              lVar34 = 0;
            }
            else {
              lVar34 = (longlong)local_568 * 0xf0 + plVar25[0x4c];
            }
            plVar32 = (longlong *)(lVar34 + 0x18);
            if (lVar34 == 0) {
              plVar32 = (longlong *)0x0;
            }
            local_228 = *(undefined8 *)(pbVar26 + -0x10);
            local_220 = *(undefined8 *)(pbVar26 + -8);
            local_218 = *(longlong *)pbVar26;
            if (local_218 != 0) {
              LOCK();
              *(int *)(local_218 + 8) = *(int *)(local_218 + 8) + 1;
              UNLOCK();
            }
            local_5b8 = plVar32;
            cVar5 = FUN_1428b3730(plVar25,&local_228,0,plVar25 + 0x72);
            if (cVar5 != '\0') {
              local_210 = *(undefined8 *)(pbVar26 + -0x10);
              local_208 = *(undefined8 *)(pbVar26 + -8);
              local_200 = *(longlong *)pbVar26;
              if (local_200 != 0) {
                LOCK();
                *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
                UNLOCK();
              }
              cVar5 = FUN_1428b22c0(plVar25,&local_210,plVar32);
              if ((cVar5 == '\0') && (plVar32 != (longlong *)0x0)) {
                uVar36 = *(undefined4 *)((longlong)plVar32 + 0xc);
                local_178 = *(undefined4 *)plVar25[0x72];
                local_174 = DAT_146b19620;
                FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(local_170);
                local_130 = DAT_1469eae28;
                local_128 = DAT_1469eae30;
                local_120 = DAT_1469eae38;
                if (DAT_1469eae38 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
                  UNLOCK();
                }
                local_118 = local_118 & 0xfffffff0;
                local_108 = 0;
                local_100 = 0;
                FWeakObjectPtr::operator=(local_f8,0);
                local_f0 = 0;
                local_d8 = 0;
                local_d0 = 0;
                TBaseDelegate<FSlateBrush_const_*>::operator=(&local_d8,pbVar26 + 8);
                iVar8 = DAT_146b19620;
                local_c8 = *(undefined4 *)(pbVar26 + 0x18);
                lVar34 = (longlong)DAT_146b19620;
                local_c4 = *(undefined4 *)(pbVar26 + 0x1c);
                local_c0 = *(undefined8 *)(pbVar26 + 0x20);
                DAT_146b19620 = DAT_146b19620 + 1;
                local_b8 = uVar36;
                if (DAT_146b19624 < DAT_146b19620) {
                  FUN_140ae1ad0(&DAT_146b19618,iVar8);
                }
                FUN_14289a6b0(DAT_146b19618 + lVar34 * 0x19,&local_178);
                if ((*pbVar31 & 1) != 0) {
                  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                            (&DAT_146b19630,pbVar26 + -0x10);
                }
                TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
                TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
                FKey::~FKey(&local_130);
                TBaseDelegate<FText>::~TBaseDelegate<FText>(local_160);
                TBaseDelegate<FText>::~TBaseDelegate<FText>(local_170);
              }
            }
            *(undefined4 *)(plVar25 + 0x73) = 0;
            if ((*(int *)((longlong)plVar25 + 0x39c) < 0) &&
               (*(int *)((longlong)plVar25 + 0x39c) != 0)) {
              TArray<float,FDefaultAllocator>::ResizeTo(plVar25 + 0x72,0);
            }
            pbVar31 = pbVar31 + 0x40;
            pbVar26 = pbVar26 + 0x40;
            uVar18 = local_5a7;
          } while (pbVar31 != pbVar30);
        }
        param_1 = local_5a0;
        cVar5 = local_5a8;
        lVar34 = local_590[0x33];
        lVar20 = (longlong)(int)local_590[0x34] * 0x38 + lVar34;
        if (lVar34 != lVar20) {
          puVar15 = (undefined8 *)(lVar34 + 0x28);
          do {
            uVar36 = FUN_1428a2650(param_1,lVar34,cVar5,&DAT_146b19630);
            *(undefined4 *)(puVar15 + 1) = uVar36;
            if (((*(int *)(puVar15 + -2) == 0) || ((longlong *)puVar15[-3] == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*(longlong *)puVar15[-3] + 0x18))(), cVar6 == '\0')) {
              cVar6 = TScriptDelegate<FWeakObjectPtr>::IsBound(puVar15 + -1);
              bVar4 = false;
              if (cVar6 != '\0') goto LAB_1428b7e33;
            }
            else {
LAB_1428b7e33:
              bVar4 = true;
            }
            if (bVar4) {
              iVar8 = *(int *)(puVar15 + 1);
              local_4a0 = (longlong *)0x0;
              local_498 = 0;
              TBaseDelegate<FSlateBrush_const_*>::operator=(&local_4a0,puVar15 + -3);
              iVar7 = DAT_146b195f0;
              local_490 = *(int *)(puVar15 + -1);
              lVar23 = (longlong)DAT_146b195f0;
              local_48c = *(int *)((longlong)puVar15 + -4);
              local_488 = (longlong *)*puVar15;
              DAT_146b195f0 = DAT_146b195f0 + 1;
              local_480 = iVar8;
              if (DAT_146b195f4 < DAT_146b195f0) {
                FUN_140d979d0(&DAT_146b195e8,iVar7);
              }
              piVar27 = DAT_146b195e8;
              piVar33 = DAT_146b195e8 + lVar23 * 10;
              piVar33[0] = 0;
              piVar33[1] = 0;
              piVar27[lVar23 * 10 + 2] = 0;
              pplVar24 = (longlong **)(piVar27 + lVar23 * 10);
              if (((&local_4a0 != pplVar24) && (local_498 != 0)) && (local_4a0 != (longlong *)0x0))
              {
                (**(code **)(*local_4a0 + 0x30))(local_4a0,pplVar24);
              }
              *(int *)(pplVar24 + 2) = local_490;
              *(int *)((longlong)pplVar24 + 0x14) = local_48c;
              pplVar24[3] = local_488;
              *(int *)(pplVar24 + 4) = local_480;
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4a0);
            }
            lVar34 = lVar34 + 0x38;
            puVar15 = puVar15 + 7;
            uVar18 = local_5a7;
          } while (lVar34 != lVar20);
        }
        pbVar31 = (byte *)local_590[0x35];
        pbVar30 = pbVar31 + (longlong)(int)local_590[0x36] * 0x40;
        if (pbVar31 != pbVar30) {
          pbVar26 = pbVar31 + 0x18;
          do {
            local_1f8 = *(undefined8 *)(pbVar26 + -0x10);
            local_1f0 = *(undefined8 *)(pbVar26 + -8);
            local_1e8 = *(longlong *)pbVar26;
            if (local_1e8 != 0) {
              LOCK();
              *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
              UNLOCK();
            }
            cVar6 = FUN_1428b22c0(param_1,&local_1f8,0);
            if (cVar6 == '\0') {
              if ((cVar5 == '\0') || ((*pbVar31 & 2) != 0)) {
                local_1e0 = *(undefined8 *)(pbVar26 + -0x10);
                local_1d8 = *(undefined8 *)(pbVar26 + -8);
                local_1d0 = *(longlong *)pbVar26;
                if (local_1d0 != 0) {
                  LOCK();
                  *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
                  UNLOCK();
                }
                uVar36 = FUN_1428ad940(param_1,&local_1e0);
              }
              else {
                uVar36 = 0;
              }
              *(undefined4 *)(pbVar26 + -0x14) = uVar36;
              if ((*pbVar31 & 1) != 0) {
                TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                          (&DAT_146b19630,pbVar26 + -0x10);
              }
            }
            if (((*(int *)(pbVar26 + 0x10) == 0) || (*(longlong **)(pbVar26 + 8) == (longlong *)0x0)
                ) || (cVar6 = (**(code **)(**(longlong **)(pbVar26 + 8) + 0x18))(), cVar6 == '\0'))
            {
              cVar6 = TScriptDelegate<FWeakObjectPtr>::IsBound(pbVar26 + 0x18);
              bVar4 = false;
              if (cVar6 != '\0') goto LAB_1428b8007;
            }
            else {
LAB_1428b8007:
              bVar4 = true;
            }
            if (bVar4) {
              uVar36 = *(undefined4 *)(pbVar26 + -0x14);
              local_548 = (longlong *)0x0;
              uStack_540 = uStack_540 & 0xffffffff00000000;
              TBaseDelegate<FSlateBrush_const_*>::operator=(&local_548,pbVar26 + 8);
              iVar8 = DAT_146b195f0;
              lVar34 = (longlong)DAT_146b195f0;
              uStack_538 = *(uint **)(pbVar26 + 0x18);
              DAT_146b195f0 = DAT_146b195f0 + 1;
              auStack_530._8_4_ = uVar36;
              auStack_530._0_8_ = *(undefined8 *)(pbVar26 + 0x20);
              if (DAT_146b195f4 < DAT_146b195f0) {
                FUN_140d979d0(&DAT_146b195e8,iVar8);
              }
              piVar27 = DAT_146b195e8;
              piVar33 = DAT_146b195e8 + lVar34 * 10;
              piVar33[0] = 0;
              piVar33[1] = 0;
              piVar27[lVar34 * 10 + 2] = 0;
              pplVar24 = (longlong **)(piVar27 + lVar34 * 10);
              if (((&local_548 != pplVar24) && ((int)uStack_540 != 0)) &&
                 (local_548 != (longlong *)0x0)) {
                (**(code **)(*local_548 + 0x30))(local_548,pplVar24);
              }
              *(int *)(pplVar24 + 2) = (int)uStack_538;
              *(int *)((longlong)pplVar24 + 0x14) = uStack_538._4_4_;
              pplVar24[3] = (longlong *)auStack_530._0_8_;
              *(undefined4 *)(pplVar24 + 4) = auStack_530._8_4_;
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_548);
            }
            pbVar31 = pbVar31 + 0x40;
            pbVar26 = pbVar26 + 0x40;
            uVar18 = local_5a7;
          } while (pbVar31 != pbVar30);
        }
        pbVar30 = (byte *)local_590[0x37];
        pbVar31 = pbVar30 + (longlong)(int)local_590[0x38] * 0x48;
        if (pbVar30 != pbVar31) {
          pbVar26 = pbVar30 + 0x20;
          do {
            local_1c8 = *(undefined8 *)(pbVar26 + -0x10);
            local_1c0 = *(undefined8 *)(pbVar26 + -8);
            local_1b8 = *(longlong *)pbVar26;
            if (local_1b8 != 0) {
              LOCK();
              *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
              UNLOCK();
            }
            cVar5 = FUN_1428b22c0(param_1,&local_1c8,0);
            if (cVar5 == '\0') {
              if ((local_5a8 == '\0') || ((*pbVar30 & 2) != 0)) {
                local_388 = *(undefined8 *)(pbVar26 + -0x10);
                local_380 = *(undefined8 *)(pbVar26 + -8);
                local_378 = *(longlong *)pbVar26;
                if (local_378 != 0) {
                  LOCK();
                  *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
                  UNLOCK();
                }
                TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
                ::FindId(param_1 + 0x4c,&local_564);
                if (local_564 == -1) {
                  lVar34 = 0;
                }
                else {
                  lVar34 = (longlong)local_564 * 0xf0 + param_1[0x4c];
                }
                puVar15 = (undefined8 *)(lVar34 + 0x18);
                if (lVar34 == 0) {
                  puVar15 = (undefined8 *)0x0;
                }
                if (puVar15 == (undefined8 *)0x0) {
                  local_478 = 0;
                  puVar10 = &local_478;
                  local_470 = 0;
                }
                else {
                  local_3b8 = *puVar15;
                  puVar10 = &local_3b8;
                  local_3b0 = *(undefined4 *)(puVar15 + 1);
                }
                FKey::~FKey(&local_388);
                uVar36 = *(undefined4 *)(puVar10 + 1);
                *(undefined8 *)(pbVar26 + -0x1c) = *puVar10;
              }
              else {
                *(undefined8 *)(pbVar26 + -0x1c) = _DAT_1468b5d90;
                uVar36 = DAT_1468b5d98;
              }
              bVar14 = *pbVar30;
              *(undefined4 *)(pbVar26 + -0x14) = uVar36;
              if ((bVar14 & 1) != 0) {
                TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                          (&DAT_146b19630,pbVar26 + -0x10);
              }
            }
            if (((*(int *)(pbVar26 + 0x10) == 0) || (*(longlong **)(pbVar26 + 8) == (longlong *)0x0)
                ) || (cVar5 = (**(code **)(**(longlong **)(pbVar26 + 8) + 0x18))(), cVar5 == '\0'))
            {
              cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(pbVar26 + 0x18);
              bVar4 = false;
              if (cVar5 != '\0') goto LAB_1428b8261;
            }
            else {
LAB_1428b8261:
              bVar4 = true;
            }
            if (bVar4) {
              uVar13 = *(undefined8 *)(pbVar26 + -0x1c);
              uVar36 = *(undefined4 *)(pbVar26 + -0x14);
              local_500 = (longlong *)0x0;
              local_4f8 = 0;
              if ((((longlong **)(pbVar26 + 8) != &local_500) && (*(int *)(pbVar26 + 0x10) != 0)) &&
                 (plVar25 = *(longlong **)(pbVar26 + 8), plVar25 != (longlong *)0x0)) {
                (**(code **)(*plVar25 + 0x30))(plVar25,&local_500);
              }
              iVar8 = DAT_146b19608;
              local_4f0 = *(int *)(pbVar26 + 0x18);
              local_4ec = *(int *)(pbVar26 + 0x1c);
              local_4e8 = *(longlong **)(pbVar26 + 0x20);
              local_4e0._8_4_ = uVar36;
              lVar34 = (longlong)DAT_146b19608;
              local_4e0._0_8_ = uVar13;
              DAT_146b19608 = DAT_146b19608 + 1;
              if (DAT_146b1960c < DAT_146b19608) {
                FUN_14067df60(&DAT_146b19600,iVar8);
              }
              pplVar24 = (longlong **)(DAT_146b19600 + lVar34 * 0xc);
              *pplVar24 = (longlong *)0x0;
              *(int *)(pplVar24 + 1) = 0;
              if (((&local_500 != pplVar24) && (local_4f8 != 0)) && (local_500 != (longlong *)0x0))
              {
                (**(code **)(*local_500 + 0x30))(local_500,pplVar24);
              }
              *(int *)(pplVar24 + 2) = local_4f0;
              *(int *)((longlong)pplVar24 + 0x14) = local_4ec;
              pplVar24[3] = local_4e8;
              pplVar24[4] = (longlong *)local_4e0._0_8_;
              *(undefined4 *)(pplVar24 + 5) = local_4e0._8_4_;
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_500);
            }
            pbVar30 = pbVar30 + 0x48;
            pbVar26 = pbVar26 + 0x48;
            uVar18 = local_5a7;
          } while (pbVar30 != pbVar31);
        }
        if ((*(byte *)((longlong)local_590 + 0x1fc) & 1) != 0) {
          iVar8 = local_594 + -1;
          FUN_1428bab10(&DAT_146b19630,0);
          FUN_1428ba990(&DAT_146b19648,0);
          break;
        }
        uVar35 = 0;
        uVar21 = uVar35;
        uVar22 = uVar35;
        if (0 < DAT_146b19638) {
          do {
            local_370 = *(undefined8 *)(uVar21 + DAT_146b19630);
            local_368 = *(undefined8 *)(uVar21 + 8 + DAT_146b19630);
            local_360 = *(longlong *)(uVar21 + 0x10 + DAT_146b19630);
            if (local_360 != 0) {
              LOCK();
              *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
              UNLOCK();
            }
            TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x4c,&local_560,&local_370);
            uVar11 = uVar35;
            if (local_560 != -1) {
              uVar11 = (longlong)local_560 * 0xf0 + param_1[0x4c];
            }
            uVar16 = uVar11 + 0x18;
            if (uVar11 == 0) {
              uVar16 = uVar35;
            }
            if (uVar16 != 0) {
              *(byte *)(uVar16 + 0x1c) = *(byte *)(uVar16 + 0x1c) | 4;
            }
            FKey::~FKey(&local_370);
            uVar19 = (int)uVar22 + 1;
            uVar21 = uVar21 + 0x18;
            uVar22 = (ulonglong)uVar19;
          } while ((int)uVar19 < DAT_146b19638);
        }
        if (DAT_146b1963c < 0) {
          FUN_1406792d0(&DAT_146b19630,0);
        }
        else {
          if (DAT_146b19638 != 0) {
            lVar34 = DAT_146b19630 + 8;
            iVar8 = DAT_146b19638;
            do {
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar34);
              lVar34 = lVar34 + 0x18;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          DAT_146b19638 = 0;
        }
        FUN_1428ba990(&DAT_146b19648,0);
      }
      iVar8 = local_594 + -1;
      local_4d0 = local_4d0 + -1;
      param_4 = local_5a8;
      local_594 = iVar8;
    } while (-1 < local_4d0);
  }
  lVar34 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      plVar25 = *(longlong **)(*local_580 + lVar34 * 8);
      if (plVar25 != (longlong *)0x0) {
        lVar20 = plVar25[0x33];
        lVar23 = (longlong)(int)plVar25[0x34] * 0x38 + lVar20;
        for (; lVar20 != lVar23; lVar20 = lVar20 + 0x38) {
          *(undefined4 *)(lVar20 + 0x30) = 0;
        }
        lVar20 = plVar25[0x35];
        lVar23 = (longlong)(int)plVar25[0x36] * 0x40 + lVar20;
        for (; lVar20 != lVar23; lVar20 = lVar20 + 0x40) {
          *(undefined4 *)(lVar20 + 4) = 0;
        }
        lVar23 = plVar25[0x37];
        lVar20 = lVar23 + (longlong)(int)plVar25[0x38] * 0x48;
        if (lVar23 != lVar20) {
          puVar15 = (undefined8 *)(lVar23 + 4);
          do {
            lVar23 = lVar23 + 0x48;
            *puVar15 = _DAT_1468b5d90;
            *(undefined4 *)(puVar15 + 1) = DAT_1468b5d98;
            puVar15 = puVar15 + 9;
          } while (lVar23 != lVar20);
        }
        (**(code **)(*plVar25 + 0x400))(plVar25);
      }
      lVar34 = lVar34 + -1;
    } while (-1 < lVar34);
  }
  AlgoImpl::
  IntroSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,_UPlayerInput::ProcessInputStack_::_2_::FDelegateDispatchDetailsSorter>_>
            (DAT_146b19618,(longlong)DAT_146b19620,local_5a6[0],local_5a6);
  plVar25 = DAT_146b19618 + (longlong)DAT_146b19620 * 0x19;
  if (DAT_146b19618 != plVar25) {
    plVar32 = DAT_146b19618 + 0xb;
    do {
      cVar5 = (char)plVar32[-4];
      if (cVar5 == '\x01') {
        if ((int)plVar32[-9] != 0) {
          plVar12 = (longlong *)plVar32[-10];
LAB_1428b8634:
          if ((plVar12 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar12 + 0x18))(), cVar5 != '\0')) {
            cVar5 = '\x01';
            goto LAB_1428b8649;
          }
        }
LAB_1428b8647:
        cVar5 = '\0';
      }
      else {
        if (cVar5 == '\x02') {
          if ((int)plVar32[-7] != 0) {
            plVar12 = (longlong *)plVar32[-8];
            goto LAB_1428b8634;
          }
          goto LAB_1428b8647;
        }
        if (cVar5 != '\x03') goto LAB_1428b8647;
        cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(plVar32 + -6);
      }
LAB_1428b8649:
      if (cVar5 == '\0') {
        if (((((int)plVar32[4] == 0) || ((longlong *)plVar32[3] == (longlong *)0x0)) ||
            (cVar5 = (**(code **)(*(longlong *)plVar32[3] + 0x18))(), cVar5 == '\0')) &&
           (cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(plVar32 + 5), cVar5 == '\0')) {
          if (((((int)plVar32[10] != 0) && ((longlong *)plVar32[9] != (longlong *)0x0)) &&
              (cVar5 = (**(code **)(*(longlong *)plVar32[9] + 0x18))(), cVar5 != '\0')) ||
             (cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(plVar32 + 0xb), cVar5 != '\0')) {
            uVar36 = (undefined4)plVar32[0xd];
            if ((((int)plVar32[10] == 0) || ((longlong *)plVar32[9] == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*(longlong *)plVar32[9] + 0x18))(), cVar5 == '\0')) {
              cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(plVar32 + 0xb);
              if (cVar5 != '\0') {
                local_55c = uVar36;
                plVar12 = (longlong *)FWeakObjectPtr::Get(plVar32 + 0xb);
                uVar13 = FUN_14178ac60(plVar12,plVar32[0xc]);
                puVar28 = &local_55c;
                goto LAB_1428b87f1;
              }
            }
            else if ((int)plVar32[10] == 0) {
              (**(code **)(_DAT_00000000 + 0x38))(0,uVar36);
            }
            else {
              (**(code **)(*(longlong *)plVar32[9] + 0x38))((longlong *)plVar32[9],uVar36);
            }
          }
        }
        else {
          lVar34 = plVar32[7];
          lVar20 = plVar32[8];
          uVar36 = *(undefined4 *)((longlong)plVar32 + 0x44);
          if ((((int)plVar32[4] == 0) || ((longlong *)plVar32[3] == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*(longlong *)plVar32[3] + 0x18))(), cVar5 == '\0')) {
            cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(plVar32 + 5);
            if (cVar5 != '\0') {
              local_3e0[0] = (undefined1)uVar36;
              local_3dc = lVar34;
              local_3d4 = (int)lVar20;
              plVar12 = (longlong *)FWeakObjectPtr::Get(plVar32 + 5);
              uVar13 = FUN_14178ac60(plVar12,plVar32[6]);
              puVar28 = (undefined4 *)local_3e0;
LAB_1428b87f1:
              (**(code **)(*plVar12 + 0x208))(plVar12,uVar13,puVar28);
            }
          }
          else {
            plVar12 = (longlong *)0x0;
            if ((int)plVar32[4] != 0) {
              plVar12 = (longlong *)plVar32[3];
            }
            local_3a8 = lVar34;
            local_3a0 = (int)lVar20;
            (**(code **)(*plVar12 + 0x38))(plVar12,uVar36,&local_3a8);
          }
        }
      }
      else {
        local_1b0 = plVar32[-2];
        local_1a8 = plVar32[-1];
        local_1a0 = *plVar32;
        if (local_1a0 != 0) {
          LOCK();
          *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
          UNLOCK();
        }
        FUN_1428a8e70(plVar32 + -10,&local_1b0);
      }
      plVar12 = plVar32 + 0xe;
      plVar32 = plVar32 + 0x19;
    } while (plVar12 != plVar25);
  }
  piVar33 = DAT_146b195e8 + (longlong)DAT_146b195f0 * 10;
  if (DAT_146b195e8 != piVar33) {
    piVar27 = DAT_146b195e8 + 2;
    do {
      if ((((*piVar27 != 0) && (*(longlong **)(piVar27 + -2) != (longlong *)0x0)) &&
          (cVar5 = (**(code **)(**(longlong **)(piVar27 + -2) + 0x18))(), cVar5 != '\0')) ||
         (cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(piVar27 + 2), cVar5 != '\0')) {
        iVar8 = piVar27[6];
        if (((*piVar27 == 0) || (*(longlong **)(piVar27 + -2) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(piVar27 + -2) + 0x18))(), cVar5 == '\0')) {
          cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(piVar27 + 2);
          if (cVar5 != '\0') {
            local_558 = iVar8;
            plVar25 = (longlong *)FWeakObjectPtr::Get(piVar27 + 2);
            uVar13 = FUN_14178ac60(plVar25,*(undefined8 *)(piVar27 + 4));
            (**(code **)(*plVar25 + 0x208))(plVar25,uVar13,&local_558);
          }
        }
        else if (*piVar27 == 0) {
          (**(code **)(_DAT_00000000 + 0x38))(0,iVar8);
        }
        else {
          (**(code **)(**(longlong **)(piVar27 + -2) + 0x38))(*(longlong **)(piVar27 + -2),iVar8);
        }
      }
      piVar2 = piVar27 + 8;
      piVar27 = piVar27 + 10;
    } while (piVar2 != piVar33);
  }
  piVar33 = DAT_146b19600 + (longlong)DAT_146b19608 * 0xc;
  if (DAT_146b19600 != piVar33) {
    piVar27 = DAT_146b19600 + 2;
    do {
      if ((((*piVar27 != 0) && (*(longlong **)(piVar27 + -2) != (longlong *)0x0)) &&
          (cVar5 = (**(code **)(**(longlong **)(piVar27 + -2) + 0x18))(), cVar5 != '\0')) ||
         (cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(piVar27 + 2), cVar5 != '\0')) {
        uVar13 = *(undefined8 *)(piVar27 + 6);
        iVar8 = piVar27[8];
        if (((*piVar27 == 0) || (*(longlong **)(piVar27 + -2) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(piVar27 + -2) + 0x18))(), cVar5 == '\0')) {
          cVar5 = TScriptDelegate<FWeakObjectPtr>::IsBound(piVar27 + 2);
          if (cVar5 != '\0') {
            local_408 = uVar13;
            local_400 = iVar8;
            plVar25 = (longlong *)FWeakObjectPtr::Get(piVar27 + 2);
            uVar13 = FUN_14178ac60(plVar25,*(undefined8 *)(piVar27 + 4));
            (**(code **)(*plVar25 + 0x208))(plVar25,uVar13,&local_408);
          }
        }
        else {
          plVar25 = (longlong *)0x0;
          if (*piVar27 != 0) {
            plVar25 = *(longlong **)(piVar27 + -2);
          }
          local_398 = uVar13;
          local_390 = iVar8;
          (**(code **)(*plVar25 + 0x38))(plVar25,&local_398);
        }
      }
      piVar2 = piVar27 + 10;
      piVar27 = piVar27 + 0xc;
    } while (piVar2 != piVar33);
  }
  (**(code **)(*local_4a8 + 0xba0))(local_4a8,param_3,local_5a8);
  FUN_1428a9fe0(param_1);
  piVar33 = DAT_146b195e8;
  iVar8 = DAT_146b195f0;
  if (DAT_146b195f4 < 0) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(piVar33);
      piVar33 = piVar33 + 10;
    }
    DAT_146b195f0 = 0;
    if (DAT_146b195f4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&DAT_146b195e8,0);
    }
  }
  else {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(piVar33);
      piVar33 = piVar33 + 10;
    }
    DAT_146b195f0 = 0;
  }
  piVar33 = DAT_146b19600;
  iVar8 = DAT_146b19608;
  if (DAT_146b1960c < 0) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(piVar33);
      piVar33 = piVar33 + 0xc;
    }
    DAT_146b19608 = 0;
    if (DAT_146b1960c != 0) {
      FUN_14067e080(&DAT_146b19600,0);
    }
  }
  else {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(piVar33);
      piVar33 = piVar33 + 0xc;
    }
    DAT_146b19608 = 0;
  }
  FUN_1428ba990(&DAT_146b19618,0);
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x16);
  plVar25 = DAT_146b19660;
  iVar8 = DAT_146b19668;
  if (DAT_146b1966c < 0) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      FKey::~FKey(plVar25);
      plVar25 = plVar25 + 4;
    }
    DAT_146b19668 = 0;
    if (DAT_146b1966c != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146b19660,0);
    }
  }
  else {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      FKey::~FKey(plVar25);
      plVar25 = plVar25 + 4;
    }
    DAT_146b19668 = 0;
  }
  return;
}



// FUNCTION 1428b8d40 ProcessLine body=1236 status=ok
// SIG undefined ProcessLine(void)

undefined1 * FCanvasWordWrapper::ProcessLine(undefined8 *param_1,longlong *param_2)

{
  short sVar1;
  wint_t wVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  wint_t *pwVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  wint_t *pwVar12;
  longlong lVar13;
  wint_t *pwVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  short *psVar19;
  wint_t *pwVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  
  iVar15 = (int)param_2[3];
  iVar10 = (int)param_2[1];
  lVar16 = (longlong)iVar10;
  if (iVar10 <= iVar15) {
    return &stack0x00000000;
  }
  iVar18 = iVar15 + 1;
  iVar11 = -1;
  local_res10[0] = 1.15355e-41;
  if (iVar18 < iVar10) {
    lVar13 = *param_2;
    lVar17 = (longlong)iVar18;
    psVar19 = (short *)(lVar13 + -2 + lVar17 * 2);
    do {
      sVar1 = *psVar19;
      if ((((ushort)(sVar1 - 10U) < 4) || (sVar1 == 0x85)) || ((ushort)(sVar1 + 0xdfd8U) < 2)) {
        pwVar12 = (wint_t *)0x0;
        if (lVar17 < lVar16) {
          pwVar12 = (wint_t *)(lVar13 + (longlong)iVar18 * 2);
        }
        if (((sVar1 != 0xd) || (pwVar12 == (wint_t *)0x0)) || (*pwVar12 != 10)) {
          iVar11 = iVar18;
          if (iVar18 != -1) goto LAB_1428b8e48;
          break;
        }
      }
      iVar18 = iVar18 + 1;
      lVar17 = lVar17 + 1;
      psVar19 = psVar19 + 1;
    } while (lVar17 < lVar16);
  }
  lVar13 = *param_2;
  sVar1 = *(short *)(lVar13 + -2 + lVar16 * 2);
  if ((((ushort)(sVar1 - 10U) < 4) || (sVar1 == 0x85)) ||
     (iVar18 = iVar11, (ushort)(sVar1 + 0xdfd8U) < 2)) {
    iVar18 = iVar10;
  }
  if (iVar18 != -1) {
LAB_1428b8e48:
    puVar3 = (undefined8 *)param_2[2];
    pwVar12 = (wint_t *)(lVar13 + (longlong)iVar15 * 2);
    local_e0 = puVar3[2];
    lVar16 = puVar3[3];
    local_f0 = *puVar3;
    uStack_e8 = puVar3[1];
    fVar27 = 0.0;
    fVar24 = 0.0;
    local_d0 = puVar3[4];
    lStack_d8 = lVar16;
    if (lVar16 != 0) {
      FUN_14244e9c0(lVar16,0x30,local_res20,local_f8);
      if (local_res20[0] == 0.0) {
        FUN_14244e9c0(lVar16,0x41,local_res20,local_f8);
      }
      fVar24 = 0.0;
      fVar5 = (float)local_e0;
      fVar26 = (float)local_e0 * (float)local_d0;
      if (*pwVar12 != 0) {
        fVar6 = local_e0._4_4_;
        fVar7 = local_d0._4_4_;
        pwVar8 = pwVar12;
        pwVar20 = (wint_t *)0x0;
        fVar24 = 0.0;
        do {
          pwVar14 = pwVar8;
          if (pwVar12 + (iVar18 - iVar15) <= pwVar14) break;
          wVar2 = *pwVar14;
          FUN_14244e9c0(lVar16,wVar2,local_res10,local_res18);
          if ((local_res18[0] == 0.0) && (wVar2 == 10)) {
            local_res18[0] = local_f8[0];
          }
          fVar25 = fVar26;
          if (pwVar20 != (wint_t *)0x0) {
            cVar9 = FUN_14244e820(lVar16,*pwVar20,wVar2);
            fVar25 = (float)(int)cVar9 * fVar5 + fVar26;
          }
          pwVar8 = pwVar14 + 1;
          local_res10[0] = local_res10[0] * fVar5;
          local_res18[0] = local_res18[0] * fVar6;
          iVar10 = iswspace(*pwVar8);
          if ((iVar10 == 0) && (*pwVar8 != 0)) {
            local_res10[0] = local_res10[0] + fVar25;
          }
          fVar24 = local_res10[0] + fVar24;
          fVar25 = fVar7 * fVar6 + local_res18[0];
          if (fVar27 < fVar25) {
            fVar27 = fVar25;
          }
          pwVar20 = pwVar14;
        } while (*pwVar8 != 0);
      }
    }
    if (fVar24 < *(float *)(param_2[2] + 8) || fVar24 == *(float *)(param_2[2] + 8)) {
      iVar15 = iVar18 + -1;
      goto LAB_1428b912e;
    }
  }
  puVar3 = (undefined8 *)param_2[2];
  local_res10[0] = -NAN;
  local_f0 = *puVar3;
  uStack_e8 = puVar3[1];
  local_e0 = puVar3[2];
  lStack_d8 = puVar3[3];
  local_d0 = puVar3[4];
  UCanvas::MeasureStringInternal
            (&local_f0,*param_2 + (longlong)(int)param_2[3] * 2,(int)param_2[1] - (int)param_2[3],
             (int)*(float *)(puVar3 + 1),1,local_res10);
  iVar10 = (int)param_2[3];
  iVar15 = (int)local_res10[0] + iVar10;
  iVar11 = -1;
  if (iVar15 == (int)param_2[1]) {
    iVar11 = iVar15;
  }
  bVar23 = SBORROW4(iVar11,iVar10);
  bVar22 = iVar11 - iVar10 < 0;
  bVar21 = iVar11 == iVar10;
  if (iVar11 <= iVar10) {
    iVar11 = (**(code **)(*(longlong *)param_1[2] + 0x50))((longlong *)param_1[2],iVar15 + 1);
    iVar18 = (int)param_2[3];
    if (iVar11 < iVar10) {
      iVar11 = -1;
    }
    bVar23 = SBORROW4(iVar11,iVar18);
    bVar22 = iVar11 - iVar18 < 0;
    bVar21 = iVar11 == iVar18;
    if (iVar11 <= iVar18) {
      iVar11 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,iVar15 + 1);
      iVar10 = (int)param_2[3];
      if (iVar11 < iVar18) {
        iVar11 = -1;
      }
      bVar23 = SBORROW4(iVar11,iVar10);
      bVar22 = iVar11 - iVar10 < 0;
      bVar21 = iVar11 == iVar10;
    }
  }
  iVar18 = iVar15;
  if (!bVar21 && bVar23 == bVar22) {
    iVar15 = iVar11;
    iVar18 = iVar11;
  }
LAB_1428b912e:
  lVar16 = (longlong)iVar15;
  if (0 < iVar15) {
    do {
      cVar9 = FText::IsWhitespace(*(undefined2 *)(*param_2 + -2 + lVar16 * 2));
      if (cVar9 == '\0') break;
      iVar15 = iVar15 + -1;
      lVar16 = lVar16 + -1;
    } while (0 < lVar16);
  }
  bVar21 = (int)param_2[3] <= iVar15;
  if (bVar21) {
    FUN_14289f1d0(param_1,param_2,iVar15);
  }
  if (iVar18 < (int)param_2[1]) {
    lVar16 = (longlong)iVar18 * 2;
    do {
      cVar9 = FText::IsWhitespace(*(undefined2 *)(*param_2 + lVar16));
      if (cVar9 == '\0') break;
      iVar18 = iVar18 + 1;
      lVar16 = lVar16 + 2;
    } while (iVar18 < (int)param_2[1]);
  }
  plVar4 = (longlong *)param_2[5];
  if (plVar4 != (longlong *)0x0) {
    iVar10 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar10);
    }
    lVar16 = *plVar4;
    *(int *)(lVar16 + (longlong)iVar10 * 8) = (int)param_2[3];
    *(int *)(lVar16 + 4 + (longlong)iVar10 * 8) = iVar15;
  }
  *(int *)(param_2 + 3) = iVar18;
  return (undefined1 *)(ulonglong)bVar21;
}



// FUNCTION 1428b9220 Project body=175 status=ok
// SIG undefined Project(void)

float * UCanvas::Project(longlong param_1,float *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 local_18 [16];
  
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    puVar1 = (undefined4 *)FUN_142759760(*(longlong *)(param_1 + 0x268),local_18);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    fVar4 = (float)puVar1[2];
    fVar5 = (float)puVar1[3];
  }
  *(ulonglong *)param_2 = CONCAT44(uVar3,uVar2);
  param_2[2] = fVar4;
  fVar4 = *(float *)(param_1 + 0x34);
  *param_2 = (*param_2 + 1.0) * *(float *)(param_1 + 0x30) * 0.5;
  param_2[1] = (1.0 - DAT_1464c9c24 * 1.0 * param_2[1]) * fVar4 * 0.5;
  if (fVar5 <= 0.0) {
    param_2[2] = 0.0;
  }
  return param_2;
}



// FUNCTION 1428b92d0 FUN_1428b92d0 body=474 status=ok
// SIG undefined FUN_1428b92d0(void)

/* WARNING: Removing unreachable block (ram,0x0001428b93f8) */

undefined8 * FUN_1428b92d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  wchar_t *_Dest;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined8 local_res18 [2];
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_res18[0] = param_3;
  FName::ToString(local_res18,&local_48);
  pwVar6 = local_48;
  pwVar4 = (wchar_t *)0x0;
  if ((local_40 != 0) && (uVar1 = local_40 - 1, 0x23 < (int)uVar1)) {
    uVar3 = local_40 - 0x22;
    uVar2 = 0;
    if ((-1 < (int)uVar3) && (uVar2 = uVar1, (int)uVar3 < (int)uVar1)) {
      uVar2 = uVar3;
    }
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    iVar5 = uVar2 + 1;
    if (uVar2 == 0) {
      iVar5 = 0;
    }
    local_30 = iVar5;
    if ((0 < iVar5) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar5 = local_30,
       pwVar4 = local_38, 0 < local_30)) {
      wcsncpy(local_38,pwVar6,(longlong)(int)uVar2);
      pwVar4[(int)uVar2] = L'\0';
    }
    pwVar6 = pwVar4 + iVar5;
    do {
      if (pwVar6 == pwVar4) goto LAB_1428b93a0;
      pwVar6 = pwVar6 + -1;
    } while (*pwVar6 != L'_');
    uVar1 = (uint)((longlong)pwVar6 - (longlong)pwVar4 >> 1);
    if (0 < (int)uVar1) {
      uVar3 = iVar5 - 1;
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
      *param_2 = 0;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      pwVar6 = L"";
      if (iVar5 != 0) {
        pwVar6 = pwVar4;
      }
      iVar5 = uVar3 + 1;
      if (uVar3 == 0) {
        iVar5 = 0;
      }
      *(int *)(param_2 + 1) = iVar5;
      if ((0 < iVar5) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0), 0 < *(int *)(param_2 + 1))) {
        _Dest = (wchar_t *)*param_2;
        wcsncpy(_Dest,pwVar6,(longlong)(int)uVar3);
        _Dest[(int)uVar3] = L'\0';
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FMemory::Free(pwVar4);
      }
      goto LAB_1428b9481;
    }
LAB_1428b93a0:
    if (pwVar4 != (wchar_t *)0x0) {
      FMemory::Free(pwVar4);
    }
  }
  pwVar6 = local_48;
  *param_2 = 0;
  *(int *)(param_2 + 1) = local_40;
  if (local_40 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,pwVar6,(longlong)local_40 * 2);
  }
LAB_1428b9481:
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1428b94b0 PushAbsoluteTransform body=522 status=ok
// SIG undefined PushAbsoluteTransform(void)

void FCanvas::PushAbsoluteTransform(longlong param_1,float *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lVar30;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) < 1) {
    local_a8 = *(undefined8 *)param_2;
    uStack_a0 = *(undefined8 *)(param_2 + 2);
    local_98 = *(undefined8 *)(param_2 + 4);
    uStack_90 = *(undefined8 *)(param_2 + 6);
    local_88 = param_2[8];
    fStack_84 = param_2[9];
    fStack_80 = param_2[10];
    fStack_7c = param_2[0xb];
    local_78 = param_2[0xc];
    fStack_74 = param_2[0xd];
    fStack_70 = param_2[0xe];
    fStack_6c = param_2[0xf];
    local_68 = FCrc::MemCrc_DEPRECATED(&local_a8,0x40);
  }
  else {
    fVar6 = *param_2;
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    fVar9 = param_2[3];
    pfVar4 = (float *)*plVar1;
    fVar10 = pfVar4[4];
    fVar11 = pfVar4[5];
    fVar12 = pfVar4[6];
    fVar13 = pfVar4[7];
    fVar14 = *pfVar4;
    fVar15 = pfVar4[1];
    fVar16 = pfVar4[2];
    fVar17 = pfVar4[3];
    fVar18 = pfVar4[8];
    fVar19 = pfVar4[9];
    fVar20 = pfVar4[10];
    fVar21 = pfVar4[0xb];
    fVar22 = pfVar4[0xc];
    fVar23 = pfVar4[0xd];
    fVar24 = pfVar4[0xe];
    fVar25 = pfVar4[0xf];
    fVar26 = param_2[4];
    fVar27 = param_2[5];
    fVar28 = param_2[6];
    fVar29 = param_2[7];
    local_a8 = CONCAT44(fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar19 + fVar9 * fVar23,
                        fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar18 + fVar9 * fVar22);
    uStack_a0 = CONCAT44(fVar6 * fVar17 + fVar7 * fVar13 + fVar8 * fVar21 + fVar9 * fVar25,
                         fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar20 + fVar9 * fVar24);
    fVar6 = param_2[8];
    fVar7 = param_2[9];
    fVar8 = param_2[10];
    fVar9 = param_2[0xb];
    local_98 = CONCAT44(fVar26 * fVar15 + fVar27 * fVar11 + fVar28 * fVar19 + fVar29 * fVar23,
                        fVar26 * fVar14 + fVar27 * fVar10 + fVar28 * fVar18 + fVar29 * fVar22);
    uStack_90 = CONCAT44(fVar26 * fVar17 + fVar27 * fVar13 + fVar28 * fVar21 + fVar29 * fVar25,
                         fVar26 * fVar16 + fVar27 * fVar12 + fVar28 * fVar20 + fVar29 * fVar24);
    local_88 = fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar18 + fVar9 * fVar22;
    fStack_84 = fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar19 + fVar9 * fVar23;
    fStack_80 = fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar20 + fVar9 * fVar24;
    fStack_7c = fVar6 * fVar17 + fVar7 * fVar13 + fVar8 * fVar21 + fVar9 * fVar25;
    fVar6 = param_2[0xc];
    fVar7 = param_2[0xd];
    fVar8 = param_2[0xe];
    fVar9 = param_2[0xf];
    local_78 = fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar18 + fVar9 * fVar22;
    fStack_74 = fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar19 + fVar9 * fVar23;
    fStack_70 = fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar20 + fVar9 * fVar24;
    fStack_6c = fVar6 * fVar17 + fVar7 * fVar13 + fVar8 * fVar21 + fVar9 * fVar25;
    local_68 = FCrc::MemCrc_DEPRECATED(&local_a8,0x40);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  lVar30 = (longlong)iVar3;
  *(int *)(param_1 + 0x30) = iVar3 + 1;
  if (*(int *)(param_1 + 0x34) < iVar3 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar5 = *plVar1;
  puVar2 = (undefined8 *)(lVar5 + lVar30 * 0x50);
  *puVar2 = local_a8;
  puVar2[1] = uStack_a0;
  puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar30 * 0x50);
  *puVar2 = local_98;
  puVar2[1] = uStack_90;
  puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar30 * 0x50);
  *puVar2 = CONCAT44(fStack_84,local_88);
  puVar2[1] = CONCAT44(fStack_7c,fStack_80);
  puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar30 * 0x50);
  *puVar2 = CONCAT44(fStack_74,local_78);
  puVar2[1] = CONCAT44(fStack_6c,fStack_70);
  puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar30 * 0x50);
  *puVar2 = CONCAT44(uStack_64,local_68);
  puVar2[1] = uStack_60;
  return;
}



// FUNCTION 1428b96c0 PushRelativeTransform body=459 status=ok
// SIG undefined PushRelativeTransform(void)

void FCanvas::PushRelativeTransform(longlong param_1,float *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float *pfVar3;
  int iVar4;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lVar25;
  longlong lVar26;
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
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar25 = (longlong)*(int *)(param_1 + 0x30);
  lVar26 = *plVar1;
  pfVar3 = (float *)(lVar26 + -0x40 + lVar25 * 0x50);
  fVar9 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar11 = pfVar3[2];
  fVar12 = pfVar3[3];
  pfVar3 = (float *)(lVar26 + -0x50 + lVar25 * 0x50);
  fVar13 = *pfVar3;
  fVar14 = pfVar3[1];
  fVar15 = pfVar3[2];
  fVar16 = pfVar3[3];
  pfVar3 = (float *)(lVar26 + -0x30 + lVar25 * 0x50);
  fVar17 = *pfVar3;
  fVar18 = pfVar3[1];
  fVar19 = pfVar3[2];
  fVar20 = pfVar3[3];
  pfVar3 = (float *)(lVar26 + -0x20 + lVar25 * 0x50);
  fVar21 = *pfVar3;
  fVar22 = pfVar3[1];
  fVar23 = pfVar3[2];
  fVar24 = pfVar3[3];
  local_a8 = fVar5 * fVar13 + fVar6 * fVar9 + fVar7 * fVar17 + fVar8 * fVar21;
  fStack_a4 = fVar5 * fVar14 + fVar6 * fVar10 + fVar7 * fVar18 + fVar8 * fVar22;
  fStack_a0 = fVar5 * fVar15 + fVar6 * fVar11 + fVar7 * fVar19 + fVar8 * fVar23;
  fStack_9c = fVar5 * fVar16 + fVar6 * fVar12 + fVar7 * fVar20 + fVar8 * fVar24;
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  local_98 = fVar5 * fVar13 + fVar6 * fVar9 + fVar7 * fVar17 + fVar8 * fVar21;
  fStack_94 = fVar5 * fVar14 + fVar6 * fVar10 + fVar7 * fVar18 + fVar8 * fVar22;
  fStack_90 = fVar5 * fVar15 + fVar6 * fVar11 + fVar7 * fVar19 + fVar8 * fVar23;
  fStack_8c = fVar5 * fVar16 + fVar6 * fVar12 + fVar7 * fVar20 + fVar8 * fVar24;
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar8 = param_2[0xb];
  local_88 = fVar5 * fVar13 + fVar6 * fVar9 + fVar7 * fVar17 + fVar8 * fVar21;
  fStack_84 = fVar5 * fVar14 + fVar6 * fVar10 + fVar7 * fVar18 + fVar8 * fVar22;
  fStack_80 = fVar5 * fVar15 + fVar6 * fVar11 + fVar7 * fVar19 + fVar8 * fVar23;
  fStack_7c = fVar5 * fVar16 + fVar6 * fVar12 + fVar7 * fVar20 + fVar8 * fVar24;
  fVar5 = param_2[0xc];
  fVar6 = param_2[0xd];
  fVar7 = param_2[0xe];
  fVar8 = param_2[0xf];
  local_78 = fVar5 * fVar13 + fVar6 * fVar9 + fVar7 * fVar17 + fVar8 * fVar21;
  fStack_74 = fVar5 * fVar14 + fVar6 * fVar10 + fVar7 * fVar18 + fVar8 * fVar22;
  fStack_70 = fVar5 * fVar15 + fVar6 * fVar11 + fVar7 * fVar19 + fVar8 * fVar23;
  fStack_6c = fVar5 * fVar16 + fVar6 * fVar12 + fVar7 * fVar20 + fVar8 * fVar24;
  local_68 = FCrc::MemCrc_DEPRECATED(&local_a8,0x40);
  iVar4 = *(int *)(param_1 + 0x30);
  lVar26 = (longlong)iVar4;
  *(int *)(param_1 + 0x30) = iVar4 + 1;
  if (*(int *)(param_1 + 0x34) < iVar4 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  lVar25 = *plVar1;
  puVar2 = (undefined8 *)(lVar25 + lVar26 * 0x50);
  *puVar2 = CONCAT44(fStack_a4,local_a8);
  puVar2[1] = CONCAT44(fStack_9c,fStack_a0);
  puVar2 = (undefined8 *)(lVar25 + 0x10 + lVar26 * 0x50);
  *puVar2 = CONCAT44(fStack_94,local_98);
  puVar2[1] = CONCAT44(fStack_8c,fStack_90);
  puVar2 = (undefined8 *)(lVar25 + 0x20 + lVar26 * 0x50);
  *puVar2 = CONCAT44(fStack_84,local_88);
  puVar2[1] = CONCAT44(fStack_7c,fStack_80);
  puVar2 = (undefined8 *)(lVar25 + 0x30 + lVar26 * 0x50);
  *puVar2 = CONCAT44(fStack_74,local_78);
  puVar2[1] = CONCAT44(fStack_6c,fStack_70);
  puVar2 = (undefined8 *)(lVar25 + 0x40 + lVar26 * 0x50);
  *puVar2 = CONCAT44(uStack_64,local_68);
  puVar2[1] = uStack_60;
  return;
}



// FUNCTION 1428b9890 RecursivelyPreload body=197 status=ok
// SIG undefined RecursivelyPreload(void)

void UUserDefinedStruct::RecursivelyPreload(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = FUN_1417a53c0();
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x58) == 0)) {
    uVar3 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_1417a5b30(param_1,&local_18,1,0,0);
    uVar4 = uVar3;
    if (0 < (int)local_10) {
      do {
        FUN_141740c00(lVar1 + 0x200,*(undefined8 *)(uVar4 + local_18));
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar4 = uVar4 + 8;
      } while ((int)uVar2 < (int)local_10);
    }
    FUN_141740c00(lVar1 + 0x200,param_1);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      FUN_141726e60(param_1,1);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428b9960 ReleaseRHI body=36 status=ok
// SIG undefined ReleaseRHI(void)

void FVectorFieldAnimatedResource::ReleaseRHI(longlong param_1)

{
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x68,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  return;
}



// FUNCTION 1428b9990 FUN_1428b9990 body=47 status=ok
// SIG undefined FUN_1428b9990(void)

void FUN_1428b9990(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x658,0);
  *(undefined8 *)(param_1 + 0x660) = 0;
  FUN_141a085f0(param_1);
  return;
}



// FUNCTION 1428b99c0 FUN_1428b99c0 body=546 status=ok
// SIG undefined FUN_1428b99c0(void)

void FUN_1428b99c0(longlong param_1)

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
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    plVar9 = *(longlong **)(param_1 + 0x58);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    (**(code **)(*plVar9 + 0x30))(plVar9);
    (**(code **)*plVar9)(plVar9,1);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    *(undefined8 *)(param_1 + 0x58) = 0;
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
  *plVar9 = (longlong)&PTR_FUN_144510a60;
  *(undefined1 *)(plVar9 + 3) = 0;
  plVar9[4] = 0;
  plVar9[2] = *(longlong *)(param_1 + 0x58);
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
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1428b9bf0 RemoveActionMapping body=231 status=ok
// SIG undefined RemoveActionMapping(void)

void UInputSettings::RemoveActionMapping(longlong param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x88) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x28;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x80) + lVar5);
      if ((*plVar3 == *param_2) && (plVar3[2] == param_2[2])) {
        bVar1 = *(byte *)(plVar3 + 1);
        bVar2 = *(byte *)(param_2 + 1);
        if ((((bVar2 ^ bVar1) & 1) == 0) &&
           (((((bVar2 ^ bVar1) & 2) == 0 && (((bVar2 ^ bVar1) & 4) == 0)) &&
            (((bVar2 ^ bVar1) & 8) == 0)))) {
          TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_1 + 0x80,iVar4,1,1);
        }
      }
      lVar5 = lVar5 + -0x28;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (param_3 == '\0') {
    return;
  }
  ForceRebuildKeymaps(param_1);
  return;
}



// FUNCTION 1428b9ce0 RemoveAtImpl body=128 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FCanvasUVTri,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x60 + *param_1),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar2 * 0x60);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1428b9d60 RemoveAtImpl body=255 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x28);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar5 * 0x28);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1428b9e60 FUN_1428b9e60 body=311 status=ok
// SIG undefined FUN_1428b9e60(void)

void FUN_1428b9e60(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_3 != 0) {
    lVar6 = *param_1 + 0xa0 + (longlong)param_2 * 200;
    iVar5 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6 + -0x30);
      plVar3 = *(longlong **)(lVar6 + -0x48);
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
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6 + -0x88);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar6 + -0x98);
      lVar6 = lVar6 + 200;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar7 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar7) {
      iVar7 = param_3;
    }
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 200),
                 (void *)((longlong)(iVar5 - iVar7) * 200 + *param_1),(longlong)iVar7 * 200);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<FRemnantQuestEntry,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1428b9fa0 RemoveAxisMapping body=172 status=ok
// SIG undefined RemoveAxisMapping(void)

void UInputSettings::RemoveAxisMapping(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x98) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1 * 0x28;
    do {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x90) + lVar2) == *param_2) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10 + lVar2) == param_2[2])) {
        TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1 + 0x90,iVar1,1,1);
      }
      lVar2 = lVar2 + -0x28;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  if (param_3 == '\0') {
    return;
  }
  ForceRebuildKeymaps(param_1);
  return;
}



// FUNCTION 1428ba050 FUN_1428ba050 body=619 status=ok
// SIG undefined FUN_1428ba050(void)

void FUN_1428ba050(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  longlong local_res10;
  undefined1 local_50 [8];
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  
  if (param_2 != 0) {
    iVar11 = *(int *)(param_1 + 0x50) + -1;
    if (-1 < iVar11) {
      plVar1 = (longlong *)(param_1 + 0x48);
      local_res10 = (longlong)*(int *)(param_1 + 0x50) << 4;
      lVar6 = (longlong)iVar11 << 4;
      lVar10 = lVar6;
      do {
        pwVar7 = (wchar_t *)0x0;
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (*(short *)(param_2 + lVar3 * 2) != 0);
        iVar2 = *(int *)((undefined8 *)(lVar6 + *plVar1) + 1);
        if (iVar2 == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(lVar6 + *plVar1);
        }
        iVar5 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        iVar2 = (int)lVar3;
        if (iVar2 < 0) {
          iVar5 = 0;
        }
        else if (iVar2 < iVar5) {
          iVar5 = iVar2;
        }
        local_48 = (wchar_t *)0x0;
        local_3c = 0;
        pwVar9 = (wchar_t *)(ulonglong)(iVar5 + 1);
        if (iVar5 == 0) {
          pwVar9 = pwVar7;
        }
        iVar2 = (int)pwVar9;
        local_40 = iVar2;
        if ((0 < iVar2) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar2 = local_40,
           pwVar7 = local_48, 0 < local_40)) {
          wcsncpy(local_48,pwVar8,(longlong)iVar5);
          pwVar7[iVar5] = L'\0';
        }
        pwVar8 = L"";
        if (iVar2 != 0) {
          pwVar8 = pwVar7;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar8,param_2);
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free(pwVar7);
        }
        if (iVar2 == 0) {
          pwVar7 = L"DefaultPlayer";
          if (param_3 != (wchar_t *)0x0) {
            pwVar7 = param_3;
          }
          lVar3 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,pwVar7,0,0,param_4);
          if (lVar3 != 0) {
            puVar4 = (undefined8 *)FName::FName(local_50,param_2,1);
            iVar2 = TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                    ::Remove(lVar3,*puVar4);
            if (0 < iVar2) {
              FConfigCacheIni::Flush(DAT_1468b6148,0,param_4);
            }
          }
          if (*(longlong *)(*plVar1 + lVar10) != 0) {
            FMemory::Free();
          }
          iVar2 = *(int *)(param_1 + 0x50);
          iVar5 = (iVar2 - iVar11) + -1;
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar10),(void *)(local_res10 + *plVar1),
                       (longlong)iVar5 << 4);
            iVar2 = *(int *)(param_1 + 0x50);
          }
          *(int *)(param_1 + 0x50) = iVar2 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
        }
        lVar10 = lVar10 + -0x10;
        local_res10 = local_res10 + -0x10;
        lVar6 = lVar6 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  return;
}



// FUNCTION 1428ba2c0 FUN_1428ba2c0 body=483 status=ok
// SIG undefined FUN_1428ba2c0(void)

void FUN_1428ba2c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  
  lVar11 = FUN_1428add20(param_2,*(undefined4 *)
                                  (*(longlong *)(param_2 + 0x18) + -4 +
                                  (longlong)*(int *)(param_2 + 0x20) * 4));
  lVar15 = (longlong)*(int *)(param_2 + 0x30) * 0x50 + *(longlong *)(param_2 + 0x28);
  if (0 < *(int *)(lVar11 + 0x10)) {
    lVar12 = (**(code **)(**(longlong **)
                            (*(longlong *)(lVar11 + 8) + -8 + (longlong)*(int *)(lVar11 + 0x10) * 8)
                         + 0x20))();
    if (((lVar12 != 0) &&
        (*(longlong *)(*(longlong *)(lVar12 + 8) + 0xa68) == *(longlong *)(param_1 + 0x60))) &&
       (*(int *)(*(longlong *)(lVar12 + 8) + 0xab0) == *(int *)(lVar15 + -0x10)))
    goto LAB_1428ba39d;
  }
  lVar12 = operator_new(0x18);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = FUN_14289a420(lVar12,*(undefined4 *)(param_2 + 0x90),*(undefined8 *)(param_1 + 0x60),
                           lVar15 + -0x50,*(undefined1 *)(param_1 + 0x18));
  }
  iVar6 = *(int *)(lVar11 + 0x10);
  *(int *)(lVar11 + 0x10) = iVar6 + 1;
  if (*(int *)(lVar11 + 0x14) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar11 + 8,iVar6);
  }
  *(longlong *)(*(longlong *)(lVar11 + 8) + (longlong)iVar6 * 8) = lVar12;
LAB_1428ba39d:
  if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
  }
  puVar13 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0x28,local_res8,1);
  uVar8 = *param_3;
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x44);
  uVar7 = *puVar13;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  fVar4 = *(float *)(param_1 + 0x4c);
  fVar5 = *(float *)(param_1 + 0x50);
  lVar11 = *(longlong *)(lVar12 + 8);
  iVar6 = *(int *)(lVar11 + 0xac8);
  lVar15 = (longlong)iVar6;
  *(int *)(lVar11 + 0xac8) = iVar6 + 1;
  if (*(int *)(lVar11 + 0xacc) < iVar6 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar11 + 0xac0,iVar6);
  }
  lVar11 = *(longlong *)(lVar11 + 0xac0);
  puVar1 = (undefined8 *)(lVar11 + lVar15 * 0x28);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar15 * 0x28);
  *puVar1 = uVar10;
  puVar1[1] = CONCAT44(fVar5 - fVar3,fVar4 - fVar2);
  *(ulonglong *)(lVar11 + 0x20 + lVar15 * 0x28) = CONCAT44(uVar7,uVar14);
  return;
}



// FUNCTION 1428ba4b0 FUN_1428ba4b0 body=672 status=ok
// SIG undefined FUN_1428ba4b0(void)

undefined8 FUN_1428ba4b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  float fStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  float fStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined8 local_58;
  
  lVar5 = *(longlong *)(param_1 + 8);
  uVar15 = 0;
  if (((((*(int *)(lVar5 + 0x10) != 0) || (*(int *)(lVar5 + 0x20) != 0)) ||
       (*(int *)(lVar5 + 0x60) != 0)) ||
      ((*(int *)(lVar5 + 0x138) != 0 || (*(int *)(lVar5 + 0x50) != 0)))) ||
     (0 < *(int *)(lVar5 + 0x30))) {
    uVar15 = 1;
    plVar14 = *(longlong **)(param_2 + 0x58);
    fVar16 = (float)(**(code **)(*plVar14 + 0x28))(plVar14);
    local_c8 = *(longlong *)(param_1 + 8);
    fVar16 = 1.0 / fVar16;
    if ((*(longlong *)(local_c8 + 0x210) != 0) &&
       (*(char *)(*(longlong *)(local_c8 + 0x210) + 0x65) != '\0')) {
      fVar16 = 1.0;
    }
    if ((((&DAT_1464c9c48)[*(int *)(param_2 + 0x90)] - 8 < 3) ||
        ((&DAT_1464c9c48)[*(int *)(param_2 + 0x90)] == 0x18)) && (*(char *)(param_2 + 0x8d) == '\0')
       ) {
      uStack_c0 = 2;
    }
    else {
      uStack_c0 = 0;
    }
    uStack_c0 = *(longlong *)(param_2 + 0x60) != 0 | uStack_c0;
    puVar11 = (undefined4 *)(**(code **)(*plVar14 + 0x20))(plVar14,local_res8);
    uStack_bc = *puVar11;
    lVar12 = (**(code **)(*plVar14 + 0x20))(plVar14,local_res10);
    lVar5 = local_c8;
    uVar13 = CONCAT44(uStack_bc,uStack_c0);
    uVar2 = *(undefined4 *)(lVar12 + 4);
    uVar3 = *(undefined4 *)(param_2 + 0x78);
    iVar4 = *(int *)(param_2 + 0x90);
    local_a8 = (&DAT_1464c9c48)[iVar4];
    uVar7 = CONCAT44(uStack_a4,local_a8);
    local_a0 = local_c8;
    local_b8 = uVar2;
    fStack_b4 = fVar16;
    uStack_b0 = uVar3;
    iStack_ac = iVar4;
    uStack_98 = uVar13;
    local_90 = uVar2;
    fStack_8c = fVar16;
    uStack_88 = uVar3;
    iStack_84 = iVar4;
    local_80 = uVar7;
    if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
        local_78 = lVar5;
        uStack_70 = uVar13;
        local_68 = uVar2;
        fStack_64 = fVar16;
        uStack_60 = uVar3;
        iStack_5c = iVar4;
        local_58 = uVar7;
        uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14289dc50(&local_78,uVar13);
      }
      else {
        plVar14 = (longlong *)FUN_1428a2120(&local_c8,0,0xff);
        lVar12 = *plVar14;
        *(longlong *)(lVar12 + 0x10) = lVar5;
        *(undefined8 *)(lVar12 + 0x18) = uVar13;
        *(undefined4 *)(lVar12 + 0x20) = uVar2;
        *(float *)(lVar12 + 0x24) = fVar16;
        *(undefined4 *)(lVar12 + 0x28) = uVar3;
        *(int *)(lVar12 + 0x2c) = iVar4;
        *(undefined8 *)(lVar12 + 0x30) = uVar7;
        lVar5 = *plVar14;
        lVar8 = plVar14[2];
        lVar12 = plVar14[1];
        lVar6 = *(longlong *)(lVar5 + 0x40);
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
          UNLOCK();
        }
        FUN_14048a8b0(lVar5,lVar12,(int)lVar8,1);
        if (lVar6 != 0) {
          LOCK();
          piVar1 = (int *)(lVar6 + 0x48);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FGraphEvent::Recycle(lVar6);
          }
        }
      }
    }
    else {
      uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14289dc50(&local_a0,uVar13);
    }
  }
  if ((*(byte *)(param_2 + 0x78) & 2) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar15;
}



// FUNCTION 1428ba750 FUN_1428ba750 body=564 status=ok
// SIG undefined FUN_1428ba750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1428ba750(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined1 auStack_1b88 [32];
  undefined1 local_1b68;
  undefined8 local_1b60;
  undefined1 local_1b58;
  float local_1b50;
  undefined4 local_1b48;
  undefined8 local_1b38;
  undefined4 local_1b30;
  undefined4 local_1b2c;
  undefined8 local_1b28;
  undefined1 local_1b20 [8];
  undefined1 local_1b18 [16];
  undefined1 local_1b08 [6816];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1b88;
  lVar4 = *(longlong *)(param_1 + 8);
  uVar10 = 0;
  if ((((*(int *)(lVar4 + 0x10) != 0) || (*(int *)(lVar4 + 0x20) != 0)) ||
      (*(int *)(lVar4 + 0x60) != 0)) ||
     (((*(int *)(lVar4 + 0x138) != 0 || (*(int *)(lVar4 + 0x50) != 0)) ||
      (0 < *(int *)(lVar4 + 0x30))))) {
    plVar5 = *(longlong **)(param_4 + 0x58);
    uVar10 = 1;
    local_1b28 = param_3;
    local_1b50 = (float)(**(code **)(*plVar5 + 0x28))(plVar5);
    local_1b50 = 1.0 / local_1b50;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x210);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x65) != '\0')) {
      local_1b50 = 1.0;
    }
    if ((((&DAT_1464c9c48)[*(int *)(param_4 + 0x90)] - 8 < 3) ||
        ((&DAT_1464c9c48)[*(int *)(param_4 + 0x90)] == 0x18)) && (*(char *)(param_4 + 0x8d) == '\0')
       ) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    lVar4 = *(longlong *)(param_4 + 0x60);
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,local_1b20);
    uVar2 = *(undefined4 *)(lVar7 + 4);
    puVar8 = (undefined4 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_1b18);
    local_1b30 = *puVar8;
    uVar3 = *(undefined4 *)(param_4 + 0x90);
    local_1b38 = 0;
    local_1b2c = uVar2;
    local_1b60 = FUN_1422e88a0(local_1b08,*(longlong *)(param_1 + 8) + 0x220,&local_1b38);
    local_1b48 = 3;
    local_1b68 = uVar9;
    local_1b58 = lVar4 != 0;
    FUN_1422e9400(*(undefined8 *)(param_1 + 8),param_2,local_1b28,uVar3);
    FUN_142745bf0(local_1b08);
    if (((*(byte *)(param_4 + 0x78) & 2) != 0) && (lVar4 = *(longlong *)(param_1 + 8), lVar4 != 0))
    {
      puVar6 = *(undefined8 **)(lVar4 + 0x208);
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      FUN_141d5b530(lVar4);
      FMemory::operator_delete(lVar4,0x2a0);
    }
  }
  if ((*(byte *)(param_4 + 0x78) & 2) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar10;
}



// FUNCTION 1428ba990 FUN_1428ba990 body=375 status=ok
// SIG undefined FUN_1428ba990(void)

void FUN_1428ba990(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar6 != 0) {
      lVar7 = *param_1 + 0xa0;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x30);
        plVar3 = *(longlong **)(lVar7 + -0x48);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x88);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x98);
        lVar7 = lVar7 + 200;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar6 != 0) {
      lVar7 = *param_1 + 0xa0;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x30);
        plVar3 = *(longlong **)(lVar7 + -0x48);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x88);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x98);
        lVar7 = lVar7 + 200;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1428bab10 FUN_1428bab10 body=158 status=ok
// SIG undefined FUN_1428bab10(void)

void FUN_1428bab10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1406792d0();
    return;
  }
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1428babb0 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1428bac60 FUN_1428bac60 body=326 status=ok
// SIG undefined FUN_1428bac60(void)

void FUN_1428bac60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar3 = *(longlong **)((longlong)local_1c * 0x30 + *local_38 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar4 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar6 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar7;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar5 + uVar6 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1428badb0 FUN_1428badb0 body=272 status=ok
// SIG undefined FUN_1428badb0(void)

void FUN_1428badb0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
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
      UPlayerInput::FActionKeyDetails::~FActionKeyDetails((longlong)local_1c * 0x40 + 8 + *local_38)
      ;
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
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



// FUNCTION 1428baec0 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
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
      TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
      ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>
                (*local_38 + (longlong)local_1c * 0x28 + 8);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
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



// FUNCTION 1428bafd0 Reset body=155 status=ok
// SIG undefined Reset(void)

void UCanvas::Reset(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar2 = plVar3[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar2 = plVar3[0x1f];
      plVar3 = *(longlong **)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
    lVar2 = plVar3[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar2 = plVar3[0x1f];
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c);
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar3[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar2 = plVar3[0x1f];
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x38);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff8;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



// FUNCTION 1428bb080 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCanvasTriangleRendererItem::FRenderData::FTriangleInst,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 100,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 6);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 100,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1428bb120 ResizeTo body=124 status=ok
// SIG undefined ResizeTo(void)

void TArray<FCanvasTriangleRendererItem::FRenderData::FTriangleInst,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 100,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 6);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 100,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1428bb1a0 FUN_1428bb1a0 body=118 status=ok
// SIG undefined FUN_1428bb1a0(void)

void FUN_1428bb1a0(longlong param_1,uint param_2)

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
  if (iVar2 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar2;
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<FSectionEvaluationData>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x38),iVar2,0xc);
  }
  return;
}



// FUNCTION 1428bb220 SaveKeyMappings body=97 status=ok
// SIG undefined SaveKeyMappings(void)

void UInputSettings::SaveKeyMappings(longlong param_1)

{
  undefined1 local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_>
            (*(undefined8 *)(param_1 + 0x80),(longlong)*(int *)(param_1 + 0x88),local_res8[0],
             local_res8);
  AlgoImpl::
  IntroSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_>
            (*(undefined8 *)(param_1 + 0x90),(longlong)*(int *)(param_1 + 0x98),local_res8[0],
             local_res8);
  FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
  return;
}



// FUNCTION 1428bb290 FUN_1428bb290 body=47 status=ok
// SIG undefined FUN_1428bb290(void)

void FUN_1428bb290(longlong param_1)

{
  longlong *plVar1;
  
  FUN_142396490();
  plVar1 = *(longlong **)(param_1 + 0x708);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001428bb2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1428bb2c0 Serialize body=50 status=ok
// SIG undefined Serialize(void)

void FVectorFieldVisualizationVertexFactoryShaderParameters::Serialize
               (longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0b60(param_2,param_1 + 0xc);
  return;
}



// FUNCTION 1428bb300 FUN_1428bb300 body=569 status=ok
// SIG undefined FUN_1428bb300(void)

void FUN_1428bb300(longlong param_1,short *param_2,byte param_3,longlong *param_4)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  longlong local_18;
  ulonglong local_10;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146b195d0) && (_Init_thread_header(&DAT_146b195d0), DAT_146b195d0 == -1)) {
    FName::FName(&DAT_146b195c8,"LogConsoleResponse",1);
    _Init_thread_footer(&DAT_146b195d0);
  }
  if (*param_4 == DAT_146b195c8) {
    local_18 = 0;
    local_10 = 0;
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) goto LAB_1428bb445;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
  }
  else {
    if ((*piVar6 < DAT_146b195e0) && (_Init_thread_header(&DAT_146b195e0), DAT_146b195e0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"con.MinLogVerbosity");
      lVar7 = 0;
      if (plVar3 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146b195d8 = lVar7;
      _Init_thread_footer(&DAT_146b195e0);
    }
    lVar7 = DAT_146b195d8;
    if (DAT_146b195d8 == 0) {
      return;
    }
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      lVar4 = 4;
      if (DVar2 == DAT_1468c21c0) goto LAB_1428bb3e1;
    }
    else {
LAB_1428bb3e1:
      lVar4 = 0;
    }
    if (*(int *)(lVar4 + lVar7) < (int)(uint)param_3) {
      return;
    }
    local_18 = 0;
    local_10 = 0;
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) goto LAB_1428bb445;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != 0);
  }
  local_18 = 0;
  uVar5 = (int)lVar7 + 1;
  local_10 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  }
  FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar5 * 2);
LAB_1428bb445:
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x298))(param_1 + -0x28,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428bb540 FUN_1428bb540 body=168 status=ok
// SIG undefined FUN_1428bb540(void)

void FUN_1428bb540(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  FUN_141763960();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
  uVar2 = FUN_1415a1810(param_2,param_1 + 0x38);
  FUN_1415a1810(uVar2,param_1 + 0x48);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0x58) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x58,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0x58,4);
  }
  return;
}



// FUNCTION 1428bb5f0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141746320();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  return;
}



// FUNCTION 1428bb620 FUN_1428bb620 body=221 status=ok
// SIG undefined FUN_1428bb620(void)

void FUN_1428bb620(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_141723660();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
    iVar3 = FArchive::CustomVer(param_2,&DAT_1464b0088);
    if (((0x1f < iVar3) && (*(char *)(param_1 + 0x98) == '\0')) &&
       ((*(uint *)(param_2 + 0x30) >> 0xc & 1) == 0)) {
      plVar1 = (longlong *)(param_1 + 0xb0);
      cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
      if ((cVar2 == '\0') && ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        FWeakObjectPtr::operator=(param_1 + 0xb8,param_1);
        (**(code **)*plVar1)(plVar1);
      }
      uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_14174d5d0(local_res8,uVar4);
      FUN_141725e50(param_1,param_2,uVar4,0);
      FUN_14174db00(local_res8);
    }
  }
  return;
}



// FUNCTION 1428bb700 Serialize body=83 status=ok
// SIG undefined Serialize(void)

void UVectorFieldStatic::Serialize(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUntypedBulkData::SetBulkDataFlags(param_1 + 0x60,0x48);
  }
  FUN_1417225e0(param_1 + 0x60,param_2,param_1,0xffffffff);
  return;
}



// FUNCTION 1428bb770 FUN_1428bb770 body=379 status=ok
// SIG undefined FUN_1428bb770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428bb770(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x10) == DAT_146b184b1) {
    FString::operator=(&DAT_146b188c8,param_1);
    DAT_146b188d8 = *(undefined1 *)(param_1 + 0x10);
    bVar2 = false;
    DAT_14653556c = DAT_14653556c + 1;
    lVar7 = (longlong)(DAT_146535560 + -1);
    if (-1 < DAT_146535560 + -1) {
      lVar6 = lVar7 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar6 + 8 + DAT_146535558) == 0) ||
            (plVar1 = *(longlong **)(lVar6 + DAT_146535558), plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,&DAT_146b188c8), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar6 = lVar6 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar3 = DAT_146535560;
    DAT_14653556c = DAT_14653556c + -1;
    if ((bVar2) && (DAT_14653556c < 1)) {
      iVar5 = 0;
      if (0 < DAT_146535560) {
        lVar7 = 0;
        do {
          if (((*(int *)(lVar7 + 8 + DAT_146535558) == 0) ||
              (*(longlong **)(lVar7 + DAT_146535558) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)(lVar7 + DAT_146535558) + 0x10))(), cVar4 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535558,iVar5,1,1);
          }
          else {
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + 0x10;
          }
        } while (iVar5 < DAT_146535560);
      }
      _DAT_146535568 = DAT_146535560 * 2;
      if (_DAT_146535568 < 3) {
        _DAT_146535568 = 2;
      }
      if ((_DAT_146535568 < iVar3) && (DAT_146535564 != DAT_146535560)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535558);
      }
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464af628,&DAT_146b188c8);
  }
  return;
}



// FUNCTION 1428bb8f0 FUN_1428bb8f0 body=428 status=ok
// SIG undefined FUN_1428bb8f0(void)

void FUN_1428bb8f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  void *_Src;
  int iVar4;
  void **ppvVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  void *local_58;
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  plVar1 = (longlong *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0xcc) = 0;
  TArray<FAutoCompleteCommand,FDefaultAllocator>::Empty(plVar1,0);
  iVar4 = *(int *)(param_1 + 0x70) + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar8 = lVar7 << 4;
    do {
      ppvVar5 = (void **)(*(longlong *)(param_1 + 0x68) + lVar8);
      local_58 = (void *)0x0;
      local_50 = 0;
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      local_38 = 0xffb4b4b4;
      iVar4 = 0;
      if (&local_58 != ppvVar5) {
        uVar3 = *(uint *)(ppvVar5 + 1);
        _Src = *ppvVar5;
        local_50 = (ulonglong)uVar3;
        iVar4 = 0;
        if (uVar3 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,uVar3);
          _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)(int)uVar3 * 2);
          iVar4 = local_40._4_4_;
        }
      }
      local_38 = *(undefined4 *)(*(longlong *)(param_1 + 0x118) + 0x5c);
      if (local_48 != (undefined4 *)&DAT_144d66ac8) {
        local_40 = local_40 & 0xffffffff00000000;
        iVar6 = 0;
        if (iVar4 != 2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,2);
          iVar4 = local_40._4_4_;
          iVar6 = (int)local_40;
        }
        local_40 = CONCAT44(local_40._4_4_,iVar6 + 2);
        if (iVar4 < iVar6 + 2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        }
        *local_48 = 0x3e;
      }
      iVar4 = *(int *)(param_1 + 0x110);
      *(int *)(param_1 + 0x110) = iVar4 + 1;
      if (*(int *)(param_1 + 0x114) < iVar4 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      lVar2 = *plVar1 + (longlong)iVar4 * 0x28;
      FString::FString(lVar2,&local_58);
      FString::FString(lVar2 + 0x10,&local_48);
      *(undefined4 *)(lVar2 + 0x20) = local_38;
      if (local_48 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}



// FUNCTION 1428bbaa0 FUN_1428bbaa0 body=160 status=ok
// SIG undefined FUN_1428bbaa0(void)

void FUN_1428bbaa0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x130);
  plVar3 = plVar8 + (longlong)*(int *)(param_1 + 0x138) * 3;
  if (plVar8 != plVar3) {
    plVar9 = plVar8 + 1;
    do {
      if (*plVar8 == *param_2) {
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        *(undefined4 *)plVar9 = *param_3;
        *(undefined4 *)((longlong)plVar9 + 4) = uVar4;
        *(undefined4 *)(plVar9 + 1) = uVar5;
        *(undefined4 *)((longlong)plVar9 + 0xc) = uVar6;
      }
      plVar8 = plVar8 + 3;
      plVar9 = plVar9 + 3;
    } while (plVar8 != plVar3);
  }
  FUN_1428bac60(param_1 + 0x170);
  plVar3 = (longlong *)param_2[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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



// FUNCTION 1428bbb70 SetColor body=67 status=ok
// SIG undefined SetColor(void)

void FCanvasTriangleItem::SetColor(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar3 = 0;
    do {
      uVar2 = param_2[1];
      lVar3 = lVar3 + 0x60;
      iVar4 = iVar4 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + -0x50 + lVar3);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + -0x30 + lVar3);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + -0x10 + lVar3);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
    } while (iVar4 < *(int *)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 1428bbbd0 FUN_1428bbbd0 body=6 status=ok
// SIG undefined FUN_1428bbbd0(void)

void FUN_1428bbbd0(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  return;
}



// FUNCTION 1428bbbe0 FUN_1428bbbe0 body=923 status=ok
// SIG undefined FUN_1428bbbe0(void)

undefined8 FUN_1428bbbe0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined2 *local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined2 *local_68;
  int local_60;
  void *local_58 [2];
  longlong local_48 [2];
  
  uVar13 = 0;
  local_res18 = 0;
  local_res10 = param_2;
  if (0 < (int)param_1[9]) {
    UEnum::RemoveNamesFromMasterList();
  }
  plVar6 = param_1 + 8;
  if (plVar6 != param_2) {
    iVar14 = (int)param_2[1];
    pvVar1 = (void *)*param_2;
    *(int *)(param_1 + 9) = iVar14;
    if ((iVar14 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar6,iVar14);
      _guard_xfg_dispatch_icall_nop((void *)*plVar6,pvVar1,(longlong)iVar14 << 4);
    }
  }
  *(undefined4 *)(param_1 + 10) = param_3;
  FUN_141736a40(param_1,&local_68);
  uVar9 = uVar13;
  uVar15 = uVar13;
  while( true ) {
    puVar12 = local_68;
    iVar14 = (int)uVar15;
    if (iVar14 == 0) {
      lVar11 = (longlong)local_60;
      uVar9 = (ulonglong)((uint)uVar9 | 1);
      local_78 = (void *)0x0;
      local_70 = local_60;
      if (local_60 == 0) {
        uStack_6c = 0;
        ppvVar3 = &local_78;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_60,0);
        _guard_xfg_dispatch_icall_nop(local_78,puVar12,lVar11 * 2);
        ppvVar3 = &local_78;
      }
    }
    else {
      uVar9 = (ulonglong)((uint)uVar9 | 2);
      puVar12 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar12 = local_68;
      }
      FString::PrintfImpl(local_58,L"%s_%d",puVar12,iVar14 + -1);
      ppvVar3 = local_58;
    }
    pvVar1 = *ppvVar3;
    *ppvVar3 = (void *)0x0;
    iVar2 = *(int *)(ppvVar3 + 1);
    ppvVar3[1] = (void *)0x0;
    if (((uVar9 & 2) != 0) &&
       (uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffd), local_58[0] != (void *)0x0)) {
      FMemory::Free();
    }
    if (((uVar9 & 1) != 0) &&
       (uVar9 = (ulonglong)((uint)uVar9 & 0xfffffffe), local_78 != (void *)0x0)) {
      FMemory::Free();
    }
    local_88 = (undefined2 *)0x0;
    local_80._0_4_ = iVar2;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,(5 - (uint)(iVar2 != 0)) + iVar2,0);
    puVar12 = local_88;
    _guard_xfg_dispatch_icall_nop(local_88,pvVar1,(longlong)iVar2 * 2);
    iVar2 = (int)local_80;
    lVar11 = (longlong)(int)local_80;
    iVar7 = (5 - (uint)((int)local_80 != 0)) + (int)local_80;
    local_80 = CONCAT44(local_80._4_4_,iVar7);
    if (local_80._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar2);
      puVar12 = local_88;
      iVar7 = (int)local_80;
    }
    local_88 = (undefined2 *)0x0;
    local_80 = 0;
    puVar8 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar8 = puVar12;
    }
    builtin_wcsncpy(puVar12 + (lVar11 - (ulonglong)(iVar2 != 0)),L"_MAX",5);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,local_48,puVar8);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    FName::FName(&local_res8,puVar8);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (puVar12 != (undefined2 *)0x0) {
      FMemory::Free(puVar12);
    }
    lVar11 = UEnum::GetValueByName(param_1);
    if (lVar11 == -1) break;
LAB_1428bbec8:
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    uVar15 = (ulonglong)(iVar14 + 1U);
    if (0x3ff < (int)(iVar14 + 1U)) {
      uVar10 = 0;
LAB_1428bbee7:
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return uVar10;
    }
  }
  if (DAT_1464b4cb8 != DAT_1464b4ce4) {
    puVar5 = DAT_1464b4cf0;
    if (DAT_1464b4cf0 == (undefined *)0x0) {
      puVar5 = &DAT_1464b4ce8;
    }
    iVar2 = *(int *)(puVar5 + (longlong)
                              (int)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8 &
                                   DAT_1464b4cf8 - 1U) * 4);
    if (iVar2 != -1) {
      while (lVar11 = (longlong)iVar2, *(longlong *)(DAT_1464b4cb0 + lVar11 * 0x18) != local_res8) {
        iVar2 = *(int *)(DAT_1464b4cb0 + 0x10 + lVar11 * 0x18);
        if (iVar2 == -1) goto LAB_1428bbf14;
      }
      if ((((iVar2 != -1) && (lVar11 = DAT_1464b4cb0 + lVar11 * 0x18, lVar11 != 0)) &&
          (lVar11 = *(longlong *)(lVar11 + 8), lVar11 != 0)) &&
         (lVar11 = UEnum::GetValueByName(lVar11), lVar11 != -1)) goto LAB_1428bbec8;
    }
  }
LAB_1428bbf14:
  if ((int)local_res10[1] != 0) {
    lVar11 = UEnum::GetMaxEnumValue(param_1);
    uVar13 = lVar11 + 1;
  }
  iVar14 = (int)param_1[9];
  *(int *)(param_1 + 9) = iVar14 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar14 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar14);
  }
  plVar6 = (longlong *)((longlong)iVar14 * 0x10 + param_1[8]);
  *plVar6 = local_res8;
  plVar6[1] = uVar13;
  FUN_14172c970(param_1);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  uVar10 = 1;
  goto LAB_1428bbee7;
}



// FUNCTION 1428bbf80 SetHitProxy body=86 status=ok
// SIG undefined SetHitProxy(void)

void FCanvas::SetHitProxy(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(longlong *)(param_1 + 0x68) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if ((puVar2 != (undefined8 *)0x0) && (param_2 != 0)) {
    (**(code **)*puVar2)(puVar2,param_2);
  }
  return;
}



// FUNCTION 1428bbfe0 SetInputLineFromAutoComplete body=160 status=ok
// SIG undefined SetInputLineFromAutoComplete(void)

void UConsole::SetInputLineFromAutoComplete(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (0 < (int)param_1[0x22]) {
    iVar2 = (int)param_1[0x1a];
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    lVar1 = param_1[0x21] + (longlong)(iVar2 + *(int *)((longlong)param_1 + 0xcc)) * 0x28;
    FString::operator=(param_1 + 0xf,lVar1);
    iVar2 = (int)param_1[0x10] + -1;
    if ((int)param_1[0x10] == 0) {
      iVar2 = 0;
    }
    (**(code **)(*param_1 + 0x280))(param_1,iVar2);
    *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | 1;
    FString::operator=(param_1 + 0x12,lVar1);
    FString::operator=(param_1 + 0x14,lVar1);
  }
  return;
}



// FUNCTION 1428bc0c0 FUN_1428bc0c0 body=635 status=ok
// SIG undefined FUN_1428bc0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428bc0c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  uVar5 = FUN_1404a0e20();
  uVar7 = 0;
  uVar4 = *(undefined8 *)(param_4 + 0x658);
  if (0 < *(int *)(param_3 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar9 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_3 + 8) + uVar7 * 8) == &DAT_146b18c90) {
        if (iVar9 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar9 * 8);
          *puVar11 = *(undefined4 *)(param_3 + 0xb8);
          goto LAB_1428bc172;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_3 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b196c0) {
    _Init_thread_header(&DAT_146b196c0);
    if (DAT_146b196c0 == -1) {
      _DAT_146b196b8 = 0;
      DAT_146b196bc = 0;
      DAT_146b196be = 0;
      _Init_thread_footer(&DAT_146b196c0);
    }
  }
  puVar11 = (undefined4 *)&DAT_146b196b8;
LAB_1428bc172:
  if (*(char *)((longlong)puVar11 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar11 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb388;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x660);
  if (*(short *)(param_1 + 10) != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c50;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c60;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  return;
}



// FUNCTION 1428bc340 FUN_1428bc340 body=334 status=ok
// SIG undefined FUN_1428bc340(void)

void FUN_1428bc340(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  byte local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_7c = local_7c & 0xfe;
  local_78 = DAT_1469e97f0;
  local_70 = DAT_1469e97f8;
  local_88 = 0x3e4ccccd;
  local_80 = 0x3f800000;
  local_68 = DAT_1469e9800;
  if (DAT_1469e9800 != 0) {
    LOCK();
    *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428abbf0(0x3e4ccccd,&local_78,&local_88);
  if (cVar1 != '\0') {
    local_60 = DAT_1469e97f0;
    local_58 = DAT_1469e97f8;
    local_50 = DAT_1469e9800;
    if (DAT_1469e9800 != 0) {
      LOCK();
      *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
      UNLOCK();
    }
    local_84 = param_2;
    FUN_1428bbaa0(param_1,&local_60,&local_88);
  }
  local_48 = DAT_1469e9808;
  local_40 = DAT_1469e9810;
  local_38 = DAT_1469e9818;
  if (DAT_1469e9818 != 0) {
    LOCK();
    *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428abbf0(param_1,&local_48,&local_88);
  if (cVar1 != '\0') {
    local_30 = DAT_1469e9808;
    local_28 = DAT_1469e9810;
    local_20 = DAT_1469e9818;
    if (DAT_1469e9818 != 0) {
      LOCK();
      *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
      UNLOCK();
    }
    local_84 = param_2;
    FUN_1428bbaa0(param_1,&local_30,&local_88);
  }
  return;
}



// FUNCTION 1428bc490 SetNum body=116 status=ok
// SIG undefined SetNum(void)

void TArray<FCanvasUVTri,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow();
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 * 0x60 + *param_1),0,(longlong)(iVar2 - iVar1) * 0x60);
    return;
  }
  if (iVar2 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar2,param_3);
  }
  return;
}



// FUNCTION 1428bc510 FUN_1428bc510 body=872 status=ok
// SIG undefined FUN_1428bc510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428bc510(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  uVar5 = FUN_141a156e0();
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar10 = uVar7;
    do {
      iVar9 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar7 * 8) == &DAT_146b18ab0) {
        if (iVar9 != -1) {
          puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *puVar11 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_1428bc5b7;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b196b0) {
    _Init_thread_header(&DAT_146b196b0);
    if (DAT_146b196b0 == -1) {
      _DAT_146b196a8 = 0;
      DAT_146b196ac = 0;
      DAT_146b196ae = 0;
      _Init_thread_footer(&DAT_146b196b0);
    }
  }
  puVar11 = (undefined4 *)&DAT_146b196a8;
LAB_1428bc5b7:
  if (*(char *)((longlong)puVar11 + 6) != '\0') {
    uVar4 = *param_3;
    uVar1 = *(ushort *)(puVar11 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144dcb3c8;
    puVar8[2] = uVar3;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = param_4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[4] = param_5;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  return;
}



// FUNCTION 1428bc880 SetRenderTargetRect body=24 status=ok
// SIG undefined SetRenderTargetRect(void)

void FCanvas::SetRenderTargetRect(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_2[1];
  *(undefined4 *)(param_1 + 0x40) = param_2[2];
  *(undefined4 *)(param_1 + 0x44) = param_2[3];
  return;
}



// FUNCTION 1428bc8b0 FUN_1428bc8b0 body=195 status=ok
// SIG undefined FUN_1428bc8b0(void)

void FUN_1428bc8b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0x268) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x270) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x284) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x298) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
    return;
  }
  plVar1 = *(longlong **)(DAT_146b17150 + 0xab8);
  if ((plVar1 != (longlong *)0x0) && (*(int *)(param_2 + 0xf60) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001428bc8e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_1);
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x598);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x590);
  *(undefined8 *)(param_1 + 0x278) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x5a8);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x288) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x5b8);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x5b0);
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x5c8);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x5c0);
  *(undefined8 *)(param_1 + 0x2a8) = uVar2;
  return;
}



// FUNCTION 1428bc980 FUN_1428bc980 body=838 status=ok
// SIG undefined FUN_1428bc980(void)

void FUN_1428bc980(longlong param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar6 = 0;
  pfVar1 = (float *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1428bb1a0(pfVar1,0);
    iVar6 = *(int *)(param_1 + 0x80);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  lVar3 = (longlong)iVar6;
  for (pfVar4 = pfVar5; pfVar4 != pfVar5 + lVar3 * 3; pfVar4 = pfVar4 + 3) {
    if (((*(float *)(param_1 + 8) == *pfVar4) && (*(float *)(param_1 + 0xc) == pfVar4[1])) &&
       (pfVar4[2] == 0.0)) {
      if ((int)(((longlong)pfVar4 - (longlong)pfVar5) / 0xc) != -1) goto LAB_1428bca82;
      break;
    }
  }
  *(int *)(param_1 + 0x80) = iVar6 + 1;
  if (*(int *)(param_1 + 0x84) < iVar6 + 1) {
    TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(pfVar1,iVar6);
  }
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  *(undefined8 *)(pfVar5 + lVar3 * 3) = uVar2;
  pfVar5[lVar3 * 3 + 2] = 0.0;
LAB_1428bca82:
  iVar6 = *(int *)(param_1 + 0x80);
  lVar3 = (longlong)iVar6;
  fVar7 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0xc);
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  for (pfVar4 = pfVar5; pfVar4 != pfVar5 + lVar3 * 3; pfVar4 = pfVar4 + 3) {
    if (((fVar7 == *pfVar4) && (fVar8 == pfVar4[1])) && (pfVar4[2] == 0.0)) {
      if ((int)(((longlong)pfVar4 - (longlong)pfVar5) / 0xc) != -1) goto LAB_1428bcb38;
      break;
    }
  }
  *(int *)(param_1 + 0x80) = iVar6 + 1;
  if (*(int *)(param_1 + 0x84) < iVar6 + 1) {
    TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(pfVar1,iVar6);
  }
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  *(ulonglong *)(pfVar5 + lVar3 * 3) = CONCAT44(fVar8,fVar7);
  pfVar5[lVar3 * 3 + 2] = 0.0;
LAB_1428bcb38:
  iVar6 = *(int *)(param_1 + 0x80);
  lVar3 = (longlong)iVar6;
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  fVar8 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3c);
  for (pfVar4 = pfVar5; pfVar4 != pfVar5 + lVar3 * 3; pfVar4 = pfVar4 + 3) {
    if (((fVar8 == *pfVar4) && (fVar7 == pfVar4[1])) && (pfVar4[2] == 0.0)) {
      if ((int)(((longlong)pfVar4 - (longlong)pfVar5) / 0xc) != -1) goto LAB_1428bcbf3;
      break;
    }
  }
  *(int *)(param_1 + 0x80) = iVar6 + 1;
  if (*(int *)(param_1 + 0x84) < iVar6 + 1) {
    TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(pfVar1,iVar6);
  }
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  *(ulonglong *)(pfVar5 + lVar3 * 3) = CONCAT44(fVar7,fVar8);
  pfVar5[lVar3 * 3 + 2] = 0.0;
LAB_1428bcbf3:
  iVar6 = *(int *)(param_1 + 0x80);
  lVar3 = (longlong)iVar6;
  fVar7 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3c);
  fVar8 = *(float *)(param_1 + 8);
  pfVar5 = *(float **)(param_1 + 0x78);
  if (*(float **)(param_1 + 0x78) == (float *)0x0) {
    pfVar5 = pfVar1;
  }
  pfVar4 = pfVar5;
  do {
    if (pfVar4 == pfVar5 + lVar3 * 3) {
LAB_1428bcc6e:
      *(int *)(param_1 + 0x80) = iVar6 + 1;
      if (*(int *)(param_1 + 0x84) < iVar6 + 1) {
        TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(pfVar1,iVar6);
      }
      pfVar5 = *(float **)(param_1 + 0x78);
      if (*(float **)(param_1 + 0x78) == (float *)0x0) {
        pfVar5 = pfVar1;
      }
      *(ulonglong *)(pfVar5 + lVar3 * 3) = CONCAT44(fVar7,fVar8);
      pfVar5[lVar3 * 3 + 2] = 0.0;
      return;
    }
    if (((fVar8 == *pfVar4) && (fVar7 == pfVar4[1])) && (pfVar4[2] == 0.0)) {
      if ((int)(((longlong)pfVar4 - (longlong)pfVar5) / 0xc) != -1) {
        return;
      }
      goto LAB_1428bcc6e;
    }
    pfVar4 = pfVar4 + 3;
  } while( true );
}



// FUNCTION 1428bccd0 SetupPosition body=531 status=ok
// SIG undefined SetupPosition(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCanvasNGonItem::SetupPosition(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  iVar8 = 1;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  lVar7 = 0;
  fVar10 = *param_2 + *param_3;
  fVar11 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x40) + 1;
  if (1 < iVar1) {
    do {
      *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x38)) = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      puVar6 = (undefined8 *)(lVar7 + 0x10 + *(longlong *)(param_1 + 0x38));
      *puVar6 = *(undefined8 *)(param_1 + 0x28);
      puVar6[1] = uVar9;
      lVar3 = *(longlong *)(param_1 + 0x38);
      *(float *)(lVar7 + 0x20 + lVar3) = fVar10;
      *(float *)(lVar7 + 0x24 + lVar3) = fVar11;
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      puVar6 = (undefined8 *)(lVar7 + 0x30 + *(longlong *)(param_1 + 0x38));
      *puVar6 = *(undefined8 *)(param_1 + 0x28);
      puVar6[1] = uVar9;
      uVar9 = __libm_sse2_sincosf_();
      lVar3 = *(longlong *)(param_1 + 0x38);
      iVar8 = iVar8 + 1;
      fVar10 = (float)((ulonglong)uVar9 >> 0x20) * *param_3 + *param_2;
      fVar11 = (float)uVar9 * param_3[1] + param_2[1];
      *(float *)(lVar7 + 0x40 + lVar3) = fVar10;
      *(float *)(lVar7 + 0x44 + lVar3) = fVar11;
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      puVar6 = (undefined8 *)(lVar7 + 0x50 + *(longlong *)(param_1 + 0x38));
      *puVar6 = *(undefined8 *)(param_1 + 0x28);
      puVar6[1] = uVar9;
      lVar7 = lVar7 + 0x60;
    } while (iVar8 < iVar1);
  }
  puVar6 = (undefined8 *)operator_new(0x60);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = puVar6 + 10;
    *puVar6 = &PTR_FUN_143f4c5f0;
    puVar6[1] = DAT_1468b5d88;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    uVar5 = _DAT_1464aa6c8;
    uVar4 = _DAT_1464aa6c0;
    *puVar6 = &PTR__scalar_deleting_destructor__1450861e0;
    puVar6[7] = uVar9;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[5] = uVar4;
    puVar6[6] = uVar5;
    *puVar2 = 0;
    puVar6[0xb] = 0;
    if (puVar2 != (undefined8 *)(param_1 + 0x38)) {
      iVar8 = *(int *)(param_1 + 0x40);
      _Src = *(void **)(param_1 + 0x38);
      *(int *)(puVar6 + 0xb) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
      }
      else {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(puVar2,iVar8,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar8 * 0x60);
      }
    }
    puVar6[1] = *(undefined8 *)*puVar2;
    *(undefined8 **)(param_1 + 0x48) = puVar6;
  }
  return;
}



// FUNCTION 1428bcef0 FUN_1428bcef0 body=245 status=ok
// SIG undefined FUN_1428bcef0(void)

void FUN_1428bcef0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 0x48);
  iVar5 = 0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar7 = __libm_sse2_sincosf_();
      lVar4 = *(longlong *)(param_1 + 0x40);
      iVar5 = iVar5 + 1;
      *(ulonglong *)(lVar6 + lVar4) =
           CONCAT44((float)uVar7 * param_3[1] + fVar2,
                    (float)((ulonglong)uVar7 >> 0x20) * *param_3 + fVar1);
      *(undefined4 *)(lVar6 + 8 + lVar4) = 0;
      lVar6 = lVar6 + 0xc;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 1428bcff0 FUN_1428bcff0 body=102 status=ok
// SIG undefined FUN_1428bcff0(void)

undefined8 FUN_1428bcff0(uint param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_1424866d0(param_1,1);
    if ((cVar1 != '\0') || ((param_1 < 0x1c && ((0x8dfc1ebU >> (param_1 & 0x1f) & 1) != 0)))) {
      cVar1 = FUN_1424866d0(param_1,2);
      if ((cVar1 != '\0') || ((param_1 < 0x1c && ((0x8dfc0ebU >> (param_1 & 0x1f) & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1428bd060 FUN_1428bd060 body=364 status=ok
// SIG undefined FUN_1428bd060(void)

void FUN_1428bd060(longlong *param_1,float param_2,byte *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = (longlong)param_4;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = UWorld::GetWorldSettings(lVar1,0,1);
    fVar3 = *(float *)(lVar1 + 0x5e4) * *(float *)(lVar1 + 0x5e0) * *(float *)(lVar1 + 0x5e8);
    if (fVar3 != *(float *)((longlong)param_1 + 0x3a4)) {
      *(float *)((longlong)param_1 + 0x3a4) = fVar3;
      UPlayerInput::ClearSmoothing(param_1);
    }
  }
  fVar3 = (float)DAT_1464a97d0;
  if (0.25 <= fVar3) {
    UPlayerInput::ClearSmoothing(param_1);
  }
  else {
    fVar4 = *(float *)((longlong)param_1 + 0x114) / (float)(int)param_1[0x22];
    if (param_2 == 0.0) {
      fVar3 = fVar3 + *(float *)((longlong)param_1 + lVar2 * 4 + 0x100);
      *(float *)((longlong)param_1 + lVar2 * 4 + 0x100) = fVar3;
      if (fVar4 <= fVar3) {
        *(undefined4 *)((longlong)param_1 + lVar2 * 4 + 0x108) = 0;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + lVar2 * 4 + 0x100) = 0;
      if (*(float *)((longlong)param_1 + lVar2 * 4 + 0x108) != 0.0) {
        if ((float)(*param_3 + 1) * fVar4 <= fVar3) {
          *param_3 = (byte)(int)(fVar3 / fVar4);
        }
        else {
          param_2 = (fVar3 * param_2) / ((float)*param_3 * fVar4);
        }
      }
      *(float *)((longlong)param_1 + lVar2 * 4 + 0x108) = param_2 / (float)*param_3;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1428bd1d0 FUN_1428bd1d0 body=186 status=ok
// SIG undefined FUN_1428bd1d0(void)

void FUN_1428bd1d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b195c0) {
    _Init_thread_header(&DAT_146b195c0);
    if (DAT_146b195c0 == -1) {
      FName::FName(&DAT_146b195b8,L"Typing",1);
      _Init_thread_footer(&DAT_146b195c0);
    }
  }
  (**(code **)(*param_1 + 0x340))(param_1,DAT_146b195b8);
  (**(code **)(*param_1 + 0x278))(param_1,param_2);
  iVar1 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001428bd244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x280))(param_1,iVar1);
  return;
}



// FUNCTION 1428bd290 `dynamic_initializer_for_'ModuleRegistrantAudioCapture'' body=28 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAudioCapture''(void)

void _dynamic_initializer_for__ModuleRegistrantAudioCapture__(void)

{
  FUN_141658220(&DAT_146b188e0);
  DAT_146b184b2 = 0;
  return;
}



// FUNCTION 1428bd2b0 `dynamic_initializer_for_'ModuleRegistrantAudioCapture'' body=28 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAudioCapture''(void)

void _dynamic_initializer_for__ModuleRegistrantAudioCapture__(void)

{
  FUN_14164fd40(&DAT_146b188e0);
  DAT_146b184b2 = 1;
  return;
}



// FUNCTION 1428bd2d0 FUN_1428bd2d0 body=459 status=ok
// SIG undefined FUN_1428bd2d0(void)

void FUN_1428bd2d0(undefined8 param_1,longlong param_2,undefined8 *param_3,float *param_4,
                  float *param_5)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  float local_68;
  float local_64;
  float local_60 [18];
  
  if (param_2 != 0) {
    if (*(int *)(param_3 + 1) == 0) {
      psVar5 = &DAT_143f3eda8;
    }
    else {
      psVar5 = (short *)*param_3;
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar5[lVar8] != 0);
    fVar11 = 0.0;
    fVar10 = 0.0;
    FUN_14244e9c0(param_2,0x30,&local_64,local_60);
    if (local_64 == 0.0) {
      FUN_14244e9c0(param_2,0x41,&local_64,local_60);
    }
    if (*psVar5 != 0) {
      psVar2 = psVar5;
      psVar7 = (short *)0x0;
      do {
        psVar6 = psVar2;
        if (psVar5 + (int)lVar8 <= psVar6) break;
        sVar1 = *psVar6;
        FUN_14244e9c0(param_2,sVar1,local_res10,&local_68);
        if ((local_68 == 0.0) && (sVar1 == 10)) {
          local_68 = local_60[0];
        }
        fVar9 = 0.0;
        if (psVar7 != (short *)0x0) {
          cVar3 = FUN_14244e820(param_2,*psVar7,sVar1);
          fVar9 = (float)(int)cVar3;
        }
        psVar2 = psVar6 + 1;
        iVar4 = iswspace(psVar6[1]);
        if ((iVar4 == 0) && (*psVar2 != 0)) {
          local_res10[0] = local_res10[0] + fVar9;
        }
        fVar11 = fVar11 + local_res10[0];
        if (fVar10 < local_68) {
          fVar10 = local_68;
        }
        psVar7 = psVar6;
      } while (*psVar2 != 0);
    }
    *param_4 = fVar11;
    *param_5 = fVar10;
  }
  return;
}



// FUNCTION 1428bd4a0 StringSize body=445 status=ok
// SIG undefined StringSize(void)

void StringSize(longlong param_1,int *param_2,int *param_3,short *param_4)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [4];
  float local_88 [20];
  
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_4[lVar7] != 0);
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (param_1 != 0) {
    FUN_14244e9c0(param_1,0x30,local_res18,local_88);
    if (local_res18[0] == 0.0) {
      FUN_14244e9c0(param_1,0x41,local_res18,local_88);
    }
    if (*param_4 != 0) {
      psVar2 = param_4;
      psVar6 = (short *)0x0;
      do {
        psVar5 = psVar2;
        if (param_4 + (int)lVar7 <= psVar5) break;
        sVar1 = *psVar5;
        FUN_14244e9c0(param_1,sVar1,local_res8,local_res10);
        if ((local_res10[0] == 0.0) && (sVar1 == 10)) {
          local_res10[0] = local_88[0];
        }
        fVar8 = 0.0;
        if (psVar6 != (short *)0x0) {
          cVar3 = FUN_14244e820(param_1,*psVar6,sVar1);
          fVar8 = (float)(int)cVar3;
        }
        psVar2 = psVar5 + 1;
        iVar4 = iswspace(psVar5[1]);
        if ((iVar4 == 0) && (*psVar2 != 0)) {
          local_res8[0] = local_res8[0] + fVar8;
        }
        fVar10 = fVar10 + local_res8[0];
        if (fVar9 < local_res10[0]) {
          fVar9 = local_res10[0];
        }
        psVar6 = psVar5;
      } while (*psVar2 != 0);
    }
  }
  *param_2 = (int)fVar10;
  *param_3 = (int)fVar9;
  return;
}



// FUNCTION 1428bd660 SupportsObject body=158 status=ok
// SIG undefined SupportsObject(void)

ulonglong UExporter::SupportsObject(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    in_RAX = UObject::GetPrivateStaticClass();
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    for (uVar2 = uVar3; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
      if (uVar2 == in_RAX) {
        if (uVar3 != 0) {
          uVar1 = UObject::GetPrivateStaticClass();
          uVar2 = uVar3;
          goto LAB_1428bd6b3;
        }
        break;
      }
    }
  }
  goto LAB_1428bd696;
  while (uVar2 = *(ulonglong *)(uVar2 + 0x30), uVar2 != 0) {
LAB_1428bd6b3:
    if (uVar2 == uVar1) goto LAB_1428bd6c3;
  }
  uVar3 = 0;
LAB_1428bd6c3:
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  if ((*(int *)(uVar2 + 0x90) < *(int *)(uVar3 + 0x90)) ||
     (uVar2 = *(ulonglong *)(uVar2 + 0x88),
     *(longlong *)(uVar2 + (longlong)*(int *)(uVar3 + 0x90) * 8) != uVar3 + 0x88)) {
    in_RAX = uVar2 & 0xffffffffffffff00;
  }
  else {
    in_RAX = CONCAT71((int7)(uVar2 >> 8),1);
  }
  if ((char)in_RAX != '\0') {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_1428bd696:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428bd700 TestBasicStringExpression body=159 status=ok
// SIG undefined TestBasicStringExpression(void)

undefined1
TTextFilter<FAutoCompleteCommand_const_&>::FTextFilterExpressionContext::TestBasicStringExpression
          (longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x10 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    FTextFilterString::FTextFilterString(local_18,lVar2);
    cVar1 = TextFilterUtils::TestBasicStringExpression(local_18,param_2,param_3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') break;
    lVar2 = lVar2 + 0x10;
  }
  return 1;
}



// FUNCTION 1428bd7a0 TestComplexExpression body=135 status=ok
// SIG undefined TestComplexExpression(void)

ulonglong TTextFilter<FAutoCompleteCommand_const_&>::FTextFilterExpressionContext::
          TestComplexExpression
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                    undefined1 param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  
  if ((((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
      (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), (char)in_RAX != '\0')) {
    if (*(int *)(param_1 + 0x20) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    uVar1 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428bd830 TextSize body=112 status=ok
// SIG undefined TextSize(void)

void UCanvas::TextSize(undefined8 param_1,longlong param_2,undefined8 *param_3,float *param_4,
                      float *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined2 *puVar1;
  int local_res10 [6];
  int local_18 [4];
  
  if (param_2 != 0) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*param_3;
    }
    ClippedStrLen(param_2,param_2,param_7,local_res10,local_18,puVar1);
    *param_4 = (float)local_res10[0];
    *param_5 = (float)local_18[0];
  }
  return;
}



// FUNCTION 1428bd8a0 Tick body=109 status=ok
// SIG undefined Tick(void)

void UPlayerInput::Tick(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1428a1120();
  plVar1 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if ((*(byte *)(lVar2 + 0x39) & 2) != 0) {
    FUN_1424c0800(param_1 + 0x2b8,param_1 + 0x28,param_1,param_2);
  }
  return;
}



// FUNCTION 1428bd910 FUN_1428bd910 body=1384 status=ok
// SIG undefined FUN_1428bd910(void)

longlong * FUN_1428bd910(undefined8 *param_1,longlong *param_2,char param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar13;
  ulonglong uVar14;
  void *local_38;
  int local_30;
  ulonglong uVar12;
  
  uVar12 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  cVar4 = FUN_1428b2240();
  puVar11 = &DAT_143f3eda8;
  iVar13 = 0;
  if ((cVar4 == '\0') || (param_3 != '\0')) {
    pvVar3 = (void *)*param_1;
    iVar7 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar7 = iVar13;
    }
    if (iVar7 != 0) {
      iVar6 = (int)param_2[1];
      iVar5 = (uint)(iVar6 == 0) + iVar7 + iVar6;
      *(int *)(param_2 + 1) = iVar5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    iVar7 = (int)param_2[1];
    iVar6 = (2 - (uint)(iVar7 != 0)) + iVar7;
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    puVar9 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar9 = 0x3a;
    puVar9[1] = 0;
    puVar9 = &DAT_143f3eda8;
    if ((int)DAT_146b18908 != 0) {
      puVar9 = DAT_146b18900;
    }
    if (*(int *)(param_1 + 3) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)param_1[2];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar7 != 0) {
      iVar7 = (int)param_2[1];
      iVar6 = (3 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar2 = (undefined4 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar2 = 0x2f002f;
      *(undefined2 *)(puVar2 + 1) = 0;
    }
  }
  puVar9 = &DAT_143f3eda8;
  if ((int)DAT_146b18908 != 0) {
    puVar9 = DAT_146b18900;
  }
  if (*(int *)(param_1 + 3) != 0) {
    puVar11 = (undefined2 *)param_1[2];
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar9);
  if ((iVar7 != 0) || (*(int *)(param_1 + 4) != DAT_146b18930)) {
    pvVar3 = (void *)param_1[2];
    iVar7 = *(int *)(param_1 + 3) + -1;
    if (*(int *)(param_1 + 3) == 0) {
      iVar7 = iVar13;
    }
    if (iVar7 != 0) {
      iVar6 = (int)param_2[1];
      iVar5 = (uint)(iVar6 == 0) + iVar7 + iVar6;
      *(int *)(param_2 + 1) = iVar5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (*(int *)(param_1 + 4) != DAT_146b18930) {
      iVar7 = (int)param_2[1];
      iVar6 = (2 - (uint)(iVar7 != 0)) + iVar7;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar11 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      *puVar11 = 0x3a;
      puVar11[1] = 0;
      FString::PrintfImpl(&local_38,&DAT_1451e04b0,*(undefined4 *)(param_1 + 4));
      pvVar3 = local_38;
      iVar7 = iVar13;
      if (local_30 != 0) {
        iVar7 = local_30 + -1;
      }
      if (iVar7 != 0) {
        iVar6 = (int)param_2[1];
        iVar5 = (uint)(iVar6 == 0) + iVar6 + iVar7;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
    }
    iVar7 = (int)param_2[1];
    iVar6 = (2 - (uint)(iVar7 != 0)) + iVar7;
    *(int *)(param_2 + 1) = iVar6;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
    }
    puVar11 = (undefined2 *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar11 = 0x2f;
    puVar11[1] = 0;
  }
  iVar7 = *(int *)(param_1 + 6);
  iVar6 = iVar7 + -1;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = -1;
    iVar5 = iVar13;
  }
  if (0 < iVar5) {
    pvVar3 = (void *)param_1[5];
    if (iVar7 == 0) {
      iVar6 = iVar13;
    }
    if (iVar6 != 0) {
      iVar13 = (int)param_2[1];
      iVar7 = (uint)(iVar13 == 0) + iVar13 + iVar6;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
  }
  uVar14 = uVar12;
  if (0 < *(int *)(param_1 + 10)) {
    do {
      iVar13 = (int)param_2[1];
      iVar7 = (2 - (uint)(iVar13 != 0)) + iVar13;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
      }
      puVar11 = (undefined2 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
      *puVar11 = 0x3f;
      puVar11[1] = 0;
      iVar7 = *(int *)(param_1[9] + 8 + uVar14);
      iVar13 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar13 = 0;
      }
      pvVar3 = *(void **)(param_1[9] + uVar14);
      if (iVar13 != 0) {
        iVar7 = (int)param_2[1];
        iVar6 = (uint)(iVar7 == 0) + iVar13 + iVar7;
        *(int *)(param_2 + 1) = iVar6;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar13 * 2);
        *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar1) = 0;
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      uVar14 = uVar14 + 0x10;
    } while ((int)uVar10 < *(int *)(param_1 + 10));
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (0 < *(int *)(param_1 + 0xc) + -1)) {
    iVar13 = (int)param_2[1];
    iVar7 = (2 - (uint)(iVar13 != 0)) + iVar13;
    *(int *)(param_2 + 1) = iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
    }
    puVar11 = (undefined2 *)(*param_2 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
    *puVar11 = 0x23;
    puVar11[1] = 0;
    pvVar3 = (void *)param_1[0xb];
    iVar13 = *(int *)(param_1 + 0xc) + -1;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar13 = 0;
    }
    if (iVar13 != 0) {
      iVar7 = (int)param_2[1];
      iVar6 = (uint)(iVar7 == 0) + iVar13 + iVar7;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar13 * 2);
      *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar1) = 0;
    }
  }
  return param_2;
}



// FUNCTION 1428bde80 FUN_1428bde80 body=1635 status=ok
// SIG undefined FUN_1428bde80(void)

void FUN_1428bde80(longlong param_1,longlong param_2,float param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff48;
  longlong local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined *local_48;
  undefined4 local_40;
  
  iVar5 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar5 = DAT_1464c9c14;
  }
  if ((((iVar5 == 3) && (lVar7 = *(longlong *)(param_1 + 0x70), lVar7 != 0)) &&
      (*(longlong *)(lVar7 + 0x48) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x60) != 0)) {
    local_5c = param_3 * *(float *)(lVar7 + 0x6c) + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x78) = local_5c;
    iVar2 = *(int *)(lVar7 + 0x68);
    iVar6 = (int)local_5c;
    iVar5 = iVar2 + -1;
    uVar14 = *(uint *)(lVar7 + 0x70) & 1;
    if (uVar14 == 0) {
      iVar12 = iVar5;
      if (iVar6 <= iVar5) {
        iVar12 = iVar6;
      }
    }
    else {
      iVar12 = iVar6 % iVar2;
    }
    iVar6 = *(int *)(lVar7 + 0x60);
    iVar13 = iVar12 + 1;
    if (uVar14 == 0) {
      if (iVar13 <= iVar5) {
        iVar5 = iVar13;
      }
    }
    else {
      iVar5 = iVar13 % iVar2;
    }
    fVar18 = 1.0 / (float)*(int *)(lVar7 + 0x60);
    fVar17 = 1.0 / (float)*(int *)(lVar7 + 100);
    _local_88 = CONCAT44(fVar17,fVar18);
    _fStack_80 = CONCAT44((float)(iVar12 / iVar6) * fVar17,(float)(iVar12 % iVar6) * fVar18);
    _local_78 = CONCAT44(fVar17,fVar18);
    _fStack_70 = CONCAT44((float)(iVar5 / iVar6) * fVar17,(float)(iVar5 % iVar6) * fVar18);
    local_60 = 1.0 / (float)*(int *)(param_1 + 0x40);
    local_68 = CONCAT44(1.0 / (float)*(int *)(param_1 + 0x3c),1.0 / (float)*(int *)(param_1 + 0x38))
    ;
    local_5c = local_5c - (float)(int)local_5c;
    local_58 = *(undefined4 *)(lVar7 + 0x80);
    local_54 = *(undefined4 *)(lVar7 + 0x84);
    local_50 = (uint)*(byte *)(lVar7 + 0x50);
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_res20,&local_88,&DAT_146b18ad8,
               in_stack_ffffffffffffff48 & 0xffffffff00000000);
    local_98 = local_res20;
    if (local_res20 != 0) {
      LOCK();
      *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
    local_48 = &DAT_146b18b40;
    local_40 = 0;
    iVar5 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) == 4) {
      iVar5 = DAT_1464c9c14;
    }
    lVar7 = FUN_1419ef210((&DAT_1464c9c48)[iVar5]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar7 + 0x38,&local_res8,&local_48);
    plVar10 = (longlong *)0x0;
    if ((int)local_res8 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar7 + 0x38));
    }
    plVar11 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    uVar15 = *(undefined8 *)(DAT_146ac3e30 + 0x30);
    lVar7 = *plVar11;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x78);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x58), lVar3 != 0)) {
      uVar15 = *(undefined8 *)(lVar3 + 0x30);
    }
    local_90 = *(undefined8 *)(param_1 + 0x68);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar16 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *puVar16 = local_90;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar16;
    puVar9[4] = 2;
    puVar9[5] = 0;
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x60);
    FRHIComputeShader::UpdateStats(uVar4);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar16 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar16;
    *(undefined8 **)(param_2 + 8) = puVar16 + 1;
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_144d91e50;
    puVar16[2] = uVar4;
    lVar3 = *(longlong *)(lVar7 + 0x48);
    local_res8 = *(undefined8 *)(param_1 + 0x68);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x60);
    if (*(short *)(lVar7 + 0xd2) != 0) {
      uVar1 = *(ushort *)(lVar7 + 0xd0);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar16 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar16;
      *(undefined8 **)(param_2 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_144d91e40;
      *(uint *)(puVar16 + 3) = (uint)uVar1;
      puVar16[4] = local_res8;
      puVar16[2] = uVar4;
    }
    FUN_1428bc510(lVar7,param_2,&local_98,
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x48) + 0x60) + 0x30
                   ),uVar15);
    DispatchComputeShader
              (param_2,lVar7,
               (int)((*(int *)(param_1 + 0x38) >> 0x1f & 7U) + *(int *)(param_1 + 0x38)) >> 3,
               (int)((*(int *)(param_1 + 0x3c) >> 0x1f & 7U) + *(int *)(param_1 + 0x3c)) >> 3,
               (int)((*(int *)(param_1 + 0x40) >> 0x1f & 7U) + *(int *)(param_1 + 0x40)) >> 3);
    lVar3 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar15 = *(undefined8 *)(lVar3 + 0x60);
    if (*(short *)(lVar7 + 0xd2) != 0) {
      uVar1 = *(ushort *)(lVar7 + 0xd0);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar16 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar16;
      *(undefined8 **)(param_2 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_144d91e40;
      puVar16[2] = uVar15;
      *(uint *)(puVar16 + 3) = (uint)uVar1;
      puVar16[4] = 0;
    }
    uVar15 = *(undefined8 *)(param_1 + 0x68);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar16 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *puVar16 = uVar15;
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e60;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar16;
    *(undefined4 *)(puVar9 + 4) = 0;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 1;
    puVar9[5] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_98);
  }
  return;
}



// FUNCTION 1428be4f0 FUN_1428be4f0 body=145 status=ok
// SIG undefined FUN_1428be4f0(void)

void FUN_1428be4f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (**(code **)(*param_1 + 0x278))(param_1,0);
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  lVar2 = param_1[0x4c];
  fVar4 = (float)(int)param_1[8];
  fVar5 = (float)iVar1;
  *(float *)(param_1 + 6) = fVar4;
  *(float *)((longlong)param_1 + 0x34) = fVar5;
  if (lVar2 != 0) {
    fVar3 = 1.0;
    if (*(char *)(lVar2 + 0x94) == '\0') {
      fVar6 = *(float *)(lVar2 + 0x138);
    }
    else {
      fVar6 = 1.0;
    }
    *(float *)(param_1 + 6) = fVar4 / fVar6;
    if (*(char *)(lVar2 + 0x94) == '\0') {
      fVar3 = *(float *)(lVar2 + 0x138);
    }
    *(float *)((longlong)param_1 + 0x34) = fVar5 / fVar3;
    *(int *)(lVar2 + 300) = (int)param_1[8];
    *(int *)(lVar2 + 0x130) = iVar1;
  }
  return;
}



// FUNCTION 1428be590 UpdateAllCanvasSafeZoneData body=188 status=ok
// SIG undefined UpdateAllCanvasSafeZoneData(void)

void UCanvas::UpdateAllCanvasSafeZoneData(void)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar1 = GetPrivateStaticClass();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_1428beee0(*(undefined8 *)(local_28 + (longlong)local_18 * 8));
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 1428be650 UpdateCache body=113 status=ok
// SIG undefined UpdateCache(void)

void FEngineFontServices::UpdateCache(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong *local_10;
  
  if (*param_1 != 0) {
    FUN_1418375f0(*param_1,&local_18);
    FSlateFontCache::UpdateCache(local_18);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return;
}



// FUNCTION 1428be6d0 FUN_1428be6d0 body=2064 status=ok
// SIG undefined FUN_1428be6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428be6d0(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int *piVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  int iVar22;
  uint *puVar23;
  longlong *local_res8;
  undefined1 local_res10 [8];
  undefined4 in_stack_ffffffffffffff58;
  undefined2 uVar25;
  undefined4 uVar24;
  ushort *local_98;
  undefined8 local_90;
  longlong *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ushort *local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong uVar13;
  ulonglong uVar21;
  
  uVar25 = (undefined2)((uint)in_stack_ffffffffffffff58 >> 0x10);
  if ((*(byte *)((longlong)param_1 + 0xd4) & 1) == 0) {
    (**(code **)(*param_1 + 0x2c0))(param_1,1);
  }
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar14 < DAT_146b1921c) && (_Init_thread_header(&DAT_146b1921c), DAT_146b1921c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146535630,0);
    uVar24 = CONCAT22(uVar25,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(DAT_146535630,2,&DAT_1451e06d4,2,uVar24);
    uVar25 = (undefined2)((uint)uVar24 >> 0x10);
    atexit((_func_5014 *)&LAB_143ebdc70);
    _Init_thread_footer(&DAT_146b1921c);
  }
  if ((*piVar14 < DAT_146b19220) && (_Init_thread_header(&DAT_146b19220), DAT_146b19220 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146535640,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (DAT_146535640,2,&DAT_1451e08dc,2,CONCAT22(uVar25,0x3f));
    atexit((_func_5014 *)&LAB_143ebdc50);
    _Init_thread_footer(&DAT_146b19220);
  }
  local_98 = (ushort *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  cVar4 = FUN_1404e14f0(param_1 + 0xf,&DAT_146535630,&local_98,&local_78,1,0);
  puVar6 = &DAT_143f3eda8;
  if (cVar4 == '\0') {
    puVar20 = &DAT_143f3eda8;
    if (DAT_146535648 != 0) {
      puVar20 = DAT_146535640;
    }
    if ((int)param_1[0x10] != 0) {
      puVar6 = (ushort *)param_1[0xf];
    }
    lVar19 = (longlong)puVar20 - (longlong)puVar6;
    do {
      uVar12 = (uint)*(ushort *)((longlong)puVar6 + lVar19);
      iVar11 = *puVar6 - uVar12;
      if (iVar11 != 0) break;
      puVar6 = puVar6 + 1;
    } while (uVar12 != 0);
  }
  else {
    puVar20 = &DAT_143f3eda8;
    if (DAT_146535648 != 0) {
      puVar20 = DAT_146535640;
    }
    if ((int)local_90 != 0) {
      puVar6 = local_98;
    }
    lVar19 = (longlong)puVar20 - (longlong)puVar6;
    do {
      uVar12 = (uint)*(ushort *)((longlong)puVar6 + lVar19);
      iVar11 = *puVar6 - uVar12;
      if (iVar11 != 0) break;
      puVar6 = puVar6 + 1;
    } while (uVar12 != 0);
  }
  if (iVar11 == 0) {
    if ((*piVar14 < DAT_146b195b0) && (_Init_thread_header(&DAT_146b195b0), DAT_146b195b0 == -1)) {
      local_88 = (longlong *)0x0;
      local_80 = 0;
      puVar8 = (undefined8 *)operator_new(0x20,&local_88);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_143fca720;
        puVar8[1] = CommandToStringArray;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar8[3] = uVar7;
        *puVar8 = &PTR_GetPoolName_143fca768;
      }
      _DAT_146b19228 = &PTR_FUN_1451e3870;
      _DAT_146b19240 = &PTR_TestBasicStringExpression_1451e3858;
      _DAT_146b19230 = 0;
      DAT_146b19238 = 0;
      DAT_146b19248 = (longlong *)0x0;
      DAT_146b19250 = 0;
      if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
        (**(code **)(*local_88 + 0x30))(local_88,&DAT_146b19248);
      }
      _DAT_146b19258 = 0;
      _DAT_146b19260 = 0;
      _DAT_146b19278 = 0;
      _DAT_146b19268 = 0;
      DAT_146b19270 = (longlong *)0x0;
      FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator(&DAT_146b19280,0);
      _DAT_146b195a0 = 0;
      uRam0000000146b195a8 = 2;
      DAT_146b19598 = 0;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      atexit(`UConsole::UpdateCompleteIndices'::`43'::_dynamic_atexit_destructor_for__Filter__);
      _Init_thread_footer(&DAT_146b195b0);
    }
    uVar7 = FText::FromString(local_58,&local_78);
    cVar4 = FUN_14167fb80(&DAT_146b19280,uVar7);
    if (cVar4 != '\0') {
      bVar3 = false;
      iVar11 = DAT_146b195ac + 1;
      uRam0000000146b195a8 = CONCAT44(iVar11,(undefined4)uRam0000000146b195a8);
      lVar19 = (longlong)(DAT_146b195a0 + -1);
      if (-1 < DAT_146b195a0 + -1) {
        lVar17 = lVar19 << 4;
        bVar3 = false;
        do {
          if (((*(int *)(DAT_146b19598 + 8 + lVar17) == 0) ||
              (*(longlong **)(DAT_146b19598 + lVar17) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)(DAT_146b19598 + lVar17) + 0x40))(), cVar4 == '\0'
             )) {
            bVar3 = true;
          }
          lVar17 = lVar17 + -0x10;
          lVar19 = lVar19 + -1;
        } while (-1 < lVar19);
        iVar11 = DAT_146b195ac;
      }
      uRam0000000146b195a8 = CONCAT44(iVar11 + -1,(undefined4)uRam0000000146b195a8);
      if (bVar3) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146b19598,0);
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_50 + 1;
      lVar19 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar14 = (int *)((longlong)local_50 + 0xc);
        iVar11 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar15 = param_1 + 0x21;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    if (*(int *)((longlong)param_1 + 0x114) < 0) {
      TArray<FAutoCompleteCommand,FDefaultAllocator>::Empty(plVar15,0);
    }
    else {
      plVar9 = (longlong *)*plVar15;
      for (iVar11 = (int)param_1[0x22]; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (plVar9[2] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 5;
      }
      *(undefined4 *)(param_1 + 0x22) = 0;
    }
    lVar17 = param_1[0x17];
    lVar19 = lVar17 + (longlong)(int)param_1[0x18] * 0x28;
    for (; lVar17 != lVar19; lVar17 = lVar17 + 0x28) {
      cVar4 = FTextFilterExpressionEvaluator::GetFilterType(&DAT_146b19280);
      if (cVar4 == '\x01') {
LAB_1428bea4d:
        iVar11 = (int)param_1[0x22];
        *(int *)(param_1 + 0x22) = iVar11 + 1;
        if (*(int *)((longlong)param_1 + 0x114) < iVar11 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar15,iVar11);
        }
        lVar1 = *plVar15 + (longlong)iVar11 * 0x28;
        FString::FString(lVar1,lVar17);
        FString::FString(lVar1 + 0x10,lVar17 + 0x10);
        *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar17 + 0x20);
      }
      else {
        plVar9 = (longlong *)0x0;
        if (DAT_146b19250 != 0) {
          plVar9 = DAT_146b19248;
        }
        _DAT_146b19268 = lVar17;
        (**(code **)(*plVar9 + 0x38))(plVar9,lVar17,&DAT_146b19270);
        cVar4 = FTextFilterExpressionEvaluator::TestTextFilter(&DAT_146b19280,&DAT_146b19240);
        _DAT_146b19268 = 0;
        iVar11 = DAT_146b19278;
        plVar9 = DAT_146b19270;
        if ((longlong)_DAT_146b19278 < 0) {
          iVar11 = DAT_146b1927c;
          iVar16 = DAT_146b19278;
          if (DAT_146b19278 != 0) {
            do {
              if (*plVar9 != 0) {
                FMemory::Free();
              }
              plVar9 = plVar9 + 2;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            iVar11 = DAT_146b1927c;
          }
          _DAT_146b19278 = _DAT_146b19278 & 0xffffffff00000000;
          if (iVar11 != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146b19270,0);
          }
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            plVar9 = plVar9 + 2;
          }
          _DAT_146b19278 = _DAT_146b19278 & 0xffffffff00000000;
        }
        if (cVar4 != '\0') goto LAB_1428bea4d;
      }
    }
    AlgoImpl::
    IntroSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>
              (*plVar15,(longlong)(int)param_1[0x22],(ulonglong)local_res8 & 0xff,&local_res8);
  }
  else {
    plVar15 = param_1 + 0x21;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    local_res8 = plVar15;
    TArray<FAutoCompleteCommand,FDefaultAllocator>::Empty(plVar15,0);
    FString::ToLower(param_1 + 0xf,local_68);
    iVar11 = (int)param_1[0x10];
    iVar16 = 0;
    puVar6 = local_68[0];
    puVar23 = (uint *)(param_1 + 0x1c);
    while( true ) {
      uVar10 = 0;
      uVar18 = 0;
      uVar12 = iVar11 - 1;
      if (iVar11 == 0) {
        uVar12 = uVar18;
      }
      iVar22 = -1;
      if ((int)uVar12 <= iVar16) goto LAB_1428beb95;
      if ((int)puVar23[8] < 1) break;
      uVar13 = uVar10;
      uVar21 = uVar10;
      while( true ) {
        puVar2 = *(uint **)(*(longlong *)(puVar23 + 6) + uVar10 * 8);
        uVar18 = (int)uVar21 + puVar2[8];
        uVar21 = (ulonglong)uVar18;
        if (*puVar2 == (uint)*puVar6) break;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar10 = uVar10 + 1;
        if ((int)puVar23[8] <= (int)uVar12) goto LAB_1428beb5d;
      }
      iVar16 = iVar16 + 1;
      puVar6 = puVar6 + 1;
      puVar23 = puVar2;
    }
LAB_1428beb5d:
    if (((*(byte *)(param_1 + 0x19) & 1) != 0) || ((int)uVar18 < 1)) {
      iVar5 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar5 = 0;
      }
      if ((iVar5 <= iVar16) ||
         (iVar22 = iVar16, *(short *)(param_1[0xf] + (longlong)iVar16 * 2) == 0x20)) {
LAB_1428beb95:
        uVar12 = 0;
        if (puVar23 != (uint *)(param_1 + 0x1c)) {
          uVar18 = puVar23[4];
          if (uVar18 != 0) {
            do {
              if (iVar22 < 0) {
LAB_1428bebee:
                lVar19 = param_1[0x17] +
                         (longlong)*(int *)(*(longlong *)(puVar23 + 2) + (longlong)(int)uVar12 * 4)
                         * 0x28;
                iVar11 = (int)param_1[0x22];
                *(int *)(param_1 + 0x22) = iVar11 + 1;
                if (*(int *)((longlong)param_1 + 0x114) < iVar11 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x21,iVar11);
                }
                lVar17 = param_1[0x21] + (longlong)iVar11 * 0x28;
                FString::FString(lVar17,lVar19);
                FString::FString(lVar17 + 0x10,lVar19 + 0x10);
                *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(lVar19 + 0x20);
              }
              else {
                iVar16 = *(int *)(param_1[0x17] + 8 +
                                 (longlong)
                                 *(int *)(*(longlong *)(puVar23 + 2) + (longlong)(int)uVar12 * 4) *
                                 0x28);
                iVar11 = iVar16 + -1;
                if (iVar16 == 0) {
                  iVar11 = 0;
                }
                if (iVar11 == iVar22) goto LAB_1428bebee;
              }
              uVar12 = uVar12 + 1;
              plVar15 = local_res8;
            } while (uVar12 < uVar18);
          }
          AlgoImpl::
          IntroSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>
                    (*plVar15,(longlong)(int)plVar15[1],(ulonglong)local_res8 & 0xff,local_res10);
        }
      }
    }
    if (local_68[0] != (ushort *)0x0) {
      FMemory::Free(local_68[0]);
    }
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98 != (ushort *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}



// FUNCTION 1428beee0 FUN_1428beee0 body=344 status=ok
// SIG undefined FUN_1428beee0(void)

void FUN_1428beee0(longlong param_1)

{
  char cVar1;
  undefined1 local_res10 [24];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_146b17150 != 0) {
    cVar1 = FUN_142881000(DAT_146b17150,0);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x40))
                (*(longlong **)(DAT_146b17150 + 0xab8),local_res10);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x8c);
      return;
    }
  }
  if (DAT_1469f4590 != 0) {
    local_60 = 0;
    local_58 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    FUN_1416d23c0(DAT_1469f4590,&local_68);
    *(int *)(param_1 + 0x80) = -((int)ROUND(-0.5 - (float)local_28 * 2.0) >> 1);
    *(int *)(param_1 + 0x84) = -((int)ROUND(-0.5 - local_28._4_4_ * 2.0) >> 1);
    *(int *)(param_1 + 0x88) = -((int)ROUND(-0.5 - (float)uStack_20 * 2.0) >> 1);
    *(int *)(param_1 + 0x8c) = -((int)ROUND(-0.5 - uStack_20._4_4_ * 2.0) >> 1);
    *(undefined4 *)(param_1 + 0x90) = local_68;
    *(undefined4 *)(param_1 + 0x94) = local_64;
    FUN_141189610(&local_60);
  }
  return;
}



// FUNCTION 1428bf040 FUN_1428bf040 body=1047 status=ok
// SIG undefined FUN_1428bf040(void)

void FUN_1428bf040(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  longlong *plVar15;
  float fVar16;
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
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong lStack_130;
  longlong local_128;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  ulonglong uStack_110;
  float local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [48];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  
  lVar4 = *param_1;
  lStack_130 = *(longlong *)(param_2 + 6);
  fVar1 = *(float *)(lVar4 + 0x48);
  fVar2 = *(float *)(lVar4 + 0x4c);
  fVar3 = *(float *)(lVar4 + 0x50);
  fVar20 = *(float *)(lVar4 + 0x54);
  fVar21 = *(float *)(lVar4 + 0x58);
  fVar26 = *(float *)(lVar4 + 0x5c);
  uStack_138 = (undefined4)*(undefined8 *)(param_2 + 4);
  uStack_134 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  local_118 = *(undefined8 *)(param_2 + 0xc);
  uStack_110 = *(ulonglong *)(param_2 + 0xe);
  local_f8 = *(undefined8 *)(lVar4 + 0x48);
  fVar31 = (float)((ulonglong)local_f8 >> 0x20);
  local_100 = *(float *)(lVar4 + 0x50);
  local_148 = (undefined4)*(undefined8 *)param_2;
  uStack_144 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  uStack_140 = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_13c = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  local_128 = *(longlong *)(param_2 + 8);
  fStack_120 = param_2[10];
  fStack_11c = param_2[0xb];
  uStack_f0 = 0;
  FMatrix::RemoveScaling(&local_148,0x322bcc77);
  fVar21 = fVar21 - fVar2;
  fVar20 = fVar20 - fVar1;
  fVar26 = fVar26 - fVar3;
  param_1[6] = CONCAT44(uStack_144,local_148);
  param_1[7] = CONCAT44(uStack_13c,uStack_140);
  uStack_144 = 0;
  uStack_140 = 0;
  param_1[8] = CONCAT44(uStack_134,uStack_138);
  param_1[9] = lStack_130;
  uStack_13c = 0;
  uStack_138 = 0;
  param_1[10] = local_128;
  param_1[0xb] = CONCAT44(fStack_11c,fStack_120);
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  param_1[0xc] = 0;
  param_1[0xd] = uStack_110;
  lStack_130 = 0;
  local_128 = 0;
  fStack_11c = 0.0;
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fVar3 = param_2[0xe];
  fVar5 = param_2[0xf];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  local_b8 = (float)local_f8;
  fStack_b0 = local_100;
  uStack_ac = 0x3f800000;
  fVar30 = fVar20 * 1.0 + 0.0 + 0.0 + (float)local_f8 * 0.0;
  fVar32 = fVar20 * 0.0 + 0.0 + 0.0 + fVar31 * 0.0;
  fVar33 = fVar20 * 0.0 + 0.0 + 0.0 + local_100 * 0.0;
  fVar34 = fVar20 * 0.0 + 0.0 + 0.0 + 0.0;
  fVar16 = fVar21 * 0.0 + 0.0 + 0.0 + (float)local_f8 * 0.0;
  fVar17 = fVar21 * 1.0 + 0.0 + 0.0 + fVar31 * 0.0;
  fVar18 = fVar21 * 0.0 + 0.0 + 0.0 + local_100 * 0.0;
  fVar19 = fVar21 * 0.0 + 0.0 + 0.0 + 0.0;
  fVar22 = fVar26 * 0.0 + 0.0 + (float)local_f8 * 0.0;
  fVar23 = fVar26 * 0.0 + 0.0 + fVar31 * 0.0;
  fVar24 = fVar26 * 1.0 + 0.0 + local_100 * 0.0;
  fVar25 = fVar26 * 0.0 + 0.0 + 0.0;
  fVar20 = param_2[8];
  fVar21 = param_2[9];
  fVar26 = param_2[10];
  fVar10 = param_2[0xb];
  fVar27 = (float)local_f8 * 1.0 + 0.0;
  fVar28 = fVar31 * 1.0 + 0.0;
  fVar29 = local_100 * 1.0 + 0.0;
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[6];
  fVar14 = param_2[7];
  *(float *)(param_1 + 0x16) = fVar30 * fVar6 + fVar32 * fVar11 + fVar33 * fVar20 + fVar34 * fVar1;
  *(float *)((longlong)param_1 + 0xb4) =
       fVar30 * fVar7 + fVar32 * fVar12 + fVar33 * fVar21 + fVar34 * fVar2;
  *(float *)(param_1 + 0x17) = fVar30 * fVar8 + fVar32 * fVar13 + fVar33 * fVar26 + fVar34 * fVar3;
  *(float *)((longlong)param_1 + 0xbc) =
       fVar30 * fVar9 + fVar32 * fVar14 + fVar33 * fVar10 + fVar34 * fVar5;
  *(float *)(param_1 + 0x18) = fVar16 * fVar6 + fVar17 * fVar11 + fVar18 * fVar20 + fVar19 * fVar1;
  *(float *)((longlong)param_1 + 0xc4) =
       fVar16 * fVar7 + fVar17 * fVar12 + fVar18 * fVar21 + fVar19 * fVar2;
  *(float *)(param_1 + 0x19) = fVar16 * fVar8 + fVar17 * fVar13 + fVar18 * fVar26 + fVar19 * fVar3;
  *(float *)((longlong)param_1 + 0xcc) =
       fVar16 * fVar9 + fVar17 * fVar14 + fVar18 * fVar10 + fVar19 * fVar5;
  *(float *)(param_1 + 0x1a) = fVar22 * fVar6 + fVar23 * fVar11 + fVar24 * fVar20 + fVar25 * fVar1;
  *(float *)((longlong)param_1 + 0xd4) =
       fVar22 * fVar7 + fVar23 * fVar12 + fVar24 * fVar21 + fVar25 * fVar2;
  *(float *)(param_1 + 0x1b) = fVar22 * fVar8 + fVar23 * fVar13 + fVar24 * fVar26 + fVar25 * fVar3;
  *(float *)((longlong)param_1 + 0xdc) =
       fVar22 * fVar9 + fVar23 * fVar14 + fVar24 * fVar10 + fVar25 * fVar5;
  *(float *)(param_1 + 0x1c) = fVar27 * fVar6 + fVar28 * fVar11 + fVar29 * fVar20 + fVar1 * 1.0;
  *(float *)((longlong)param_1 + 0xe4) =
       fVar27 * fVar7 + fVar28 * fVar12 + fVar29 * fVar21 + fVar2 * 1.0;
  *(float *)(param_1 + 0x1d) = fVar27 * fVar8 + fVar28 * fVar13 + fVar29 * fVar26 + fVar3 * 1.0;
  *(float *)((longlong)param_1 + 0xec) =
       fVar27 * fVar9 + fVar28 * fVar14 + fVar29 * fVar10 + fVar5 * 1.0;
  fStack_b4 = fVar31;
  plVar15 = (longlong *)FMatrix::Inverse(param_1 + 0x16,local_e8);
  lVar4 = plVar15[1];
  param_1[0xe] = *plVar15;
  param_1[0xf] = lVar4;
  lVar4 = plVar15[3];
  param_1[0x10] = plVar15[2];
  param_1[0x11] = lVar4;
  lVar4 = plVar15[5];
  param_1[0x12] = plVar15[4];
  param_1[0x13] = lVar4;
  lVar4 = plVar15[7];
  param_1[0x14] = plVar15[6];
  param_1[0x15] = lVar4;
  return;
}



// FUNCTION 1428bf460 FUN_1428bf460 body=841 status=ok
// SIG undefined FUN_1428bf460(void)

bool FUN_1428bf460(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar12 = *param_2;
  plVar9 = (longlong *)0x0;
  if (lVar12 == DAT_1469e97d8) {
    uVar3 = *(uint *)(param_1 + 0x288);
    puVar1 = (uint *)(param_1 + 0x270);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = *puVar14;
      plVar10 = plVar9;
      while (uVar13 == 0) {
        iVar6 = (int)plVar9;
        uStack_80 = (int)plVar10 + 0x20;
        plVar10 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar6 + 1;
        plVar9 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1428bf53f;
        uVar13 = puVar14[(longlong)iVar6 + 1];
      }
      uStack_94 = -uVar13 & uVar13;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uStack_80 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1428bf53f:
        uStack_84 = uVar3;
      }
    }
    uStack_64 = *(uint *)(param_1 + 0x288);
    uStack_38 = CONCAT44(uStack_84,0xffffffff);
    local_30 = CONCAT44(uStack_7c,uStack_80);
    uVar13 = uStack_64 & 0xffffffe0;
    uStack_48 = local_98;
    uStack_44 = uStack_94;
    local_40 = puVar1;
    if (uStack_64 != uVar3) {
      puVar14 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar11 = puVar14[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
      iVar6 = (int)uStack_64 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1428bf61d;
        uVar11 = puVar14[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar6 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_64 = (uVar13 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_64) {
LAB_1428bf61d:
        uStack_64 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_38._4_4_ == uStack_64) && (local_40 == puVar1)) goto LAB_1428bf759;
      lVar12 = (longlong)(int)uStack_38._4_4_ * 0xf0 + *(longlong *)(param_1 + 0x260);
      cVar4 = FKey::IsFloatAxis(lVar12);
      if ((cVar4 == '\0') &&
         ((cVar4 = FKey::IsVectorAxis(lVar12), cVar4 == '\0' && (0 < *(int *)(lVar12 + 0x40)))))
      break;
      uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_44);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
    }
    plVar9 = (longlong *)param_2[2];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    bVar5 = true;
  }
  else {
    if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
      lVar7 = *(longlong *)(param_1 + 0x2a0);
      if (*(longlong *)(param_1 + 0x2a0) == 0) {
        lVar7 = param_1 + 0x298;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                               (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
      if (iVar6 != -1) {
        do {
          plVar10 = (longlong *)((longlong)iVar6 * 0xf0 + *(longlong *)(param_1 + 0x260));
          if (*plVar10 == lVar12) {
            if (iVar6 != -1) goto LAB_1428bf737;
            break;
          }
          iVar6 = (int)plVar10[0x1d];
        } while (iVar6 != -1);
      }
    }
    plVar10 = plVar9;
LAB_1428bf737:
    plVar8 = plVar10 + 3;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar9;
    }
    if (plVar8 == (longlong *)0x0) {
LAB_1428bf759:
      plVar9 = (longlong *)param_2[2];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      bVar5 = false;
    }
    else {
      lVar12 = plVar8[5];
      FKey::~FKey(param_2);
      bVar5 = 0 < (int)lVar12;
    }
  }
  return bVar5;
}



// FUNCTION 1428bf7b0 FUN_1428bf7b0 body=841 status=ok
// SIG undefined FUN_1428bf7b0(void)

bool FUN_1428bf7b0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar12 = *param_2;
  plVar9 = (longlong *)0x0;
  if (lVar12 == DAT_1469e97d8) {
    uVar3 = *(uint *)(param_1 + 0x288);
    puVar1 = (uint *)(param_1 + 0x270);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = *puVar14;
      plVar10 = plVar9;
      while (uVar13 == 0) {
        iVar6 = (int)plVar9;
        uStack_80 = (int)plVar10 + 0x20;
        plVar10 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar6 + 1;
        plVar9 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1428bf88f;
        uVar13 = puVar14[(longlong)iVar6 + 1];
      }
      uStack_94 = -uVar13 & uVar13;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uStack_80 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1428bf88f:
        uStack_84 = uVar3;
      }
    }
    uStack_64 = *(uint *)(param_1 + 0x288);
    uStack_38 = CONCAT44(uStack_84,0xffffffff);
    local_30 = CONCAT44(uStack_7c,uStack_80);
    uVar13 = uStack_64 & 0xffffffe0;
    uStack_48 = local_98;
    uStack_44 = uStack_94;
    local_40 = puVar1;
    if (uStack_64 != uVar3) {
      puVar14 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar11 = puVar14[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
      iVar6 = (int)uStack_64 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1428bf96d;
        uVar11 = puVar14[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar6 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_64 = (uVar13 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_64) {
LAB_1428bf96d:
        uStack_64 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_38._4_4_ == uStack_64) && (local_40 == puVar1)) goto LAB_1428bfaa9;
      lVar12 = (longlong)(int)uStack_38._4_4_ * 0xf0 + *(longlong *)(param_1 + 0x260);
      cVar4 = FKey::IsFloatAxis(lVar12);
      if ((cVar4 == '\0') &&
         ((cVar4 = FKey::IsVectorAxis(lVar12), cVar4 == '\0' && (0 < *(int *)(lVar12 + 0x50)))))
      break;
      uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_44);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
    }
    plVar9 = (longlong *)param_2[2];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    bVar5 = true;
  }
  else {
    if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
      lVar7 = *(longlong *)(param_1 + 0x2a0);
      if (*(longlong *)(param_1 + 0x2a0) == 0) {
        lVar7 = param_1 + 0x298;
      }
      iVar6 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                               (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
      if (iVar6 != -1) {
        do {
          plVar10 = (longlong *)((longlong)iVar6 * 0xf0 + *(longlong *)(param_1 + 0x260));
          if (*plVar10 == lVar12) {
            if (iVar6 != -1) goto LAB_1428bfa87;
            break;
          }
          iVar6 = (int)plVar10[0x1d];
        } while (iVar6 != -1);
      }
    }
    plVar10 = plVar9;
LAB_1428bfa87:
    plVar8 = plVar10 + 3;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar9;
    }
    if (plVar8 == (longlong *)0x0) {
LAB_1428bfaa9:
      plVar9 = (longlong *)param_2[2];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        lVar12 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      bVar5 = false;
    }
    else {
      lVar12 = plVar8[7];
      FKey::~FKey(param_2);
      bVar5 = 0 < (int)lVar12;
    }
  }
  return bVar5;
}



// FUNCTION 1428bfb00 FUN_1428bfb00 body=606 status=ok
// SIG undefined FUN_1428bfb00(void)

void FUN_1428bfb00(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined8 **ppuVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  int local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  
  plVar9 = (longlong *)0x0;
  ppuVar1 = (undefined8 **)(param_1 + 8);
  uVar12 = 0xffffffffffffffff;
  if (*ppuVar1 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x20);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1415d4630(local_68);
      *puVar5 = *puVar6;
      lVar3 = puVar6[1];
      puVar5[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_60 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      puVar6 = (undefined8 *)FBreakIterator::CreateLineBreakIterator(local_58);
      puVar5[2] = *puVar6;
      lVar3 = puVar6[1];
      puVar5[3] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar7 = (longlong *)operator_new(0x18);
    plVar10 = plVar9;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_1451e4e78;
      plVar7[2] = (longlong)puVar5;
      plVar10 = plVar7;
    }
    local_78 = puVar5;
    local_70 = plVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_78,puVar5,puVar5);
    if (ppuVar1 != &local_78) {
      *ppuVar1 = puVar5;
      local_78 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_70);
      plVar10 = local_70;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  puVar5 = *ppuVar1;
  do {
    uVar12 = uVar12 + 1;
  } while (*(short *)(param_4 + uVar12 * 2) != 0);
  iVar11 = (int)uVar12;
  local_30 = 0;
  local_28 = param_5;
  local_20 = param_6;
  local_48 = param_4;
  local_40 = iVar11;
  local_38 = param_2;
  if ((param_6 != 0) && (*(undefined4 *)(param_6 + 8) = 0, *(int *)(param_6 + 0xc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_6,0);
  }
  if (0 < iVar11) {
    (**(code **)(*(longlong *)*puVar5 + 8))((longlong *)*puVar5,param_4,uVar12 & 0xffffffff);
    (**(code **)(*(longlong *)puVar5[2] + 8))((longlong *)puVar5[2],param_4,uVar12 & 0xffffffff);
    do {
      cVar4 = FCanvasWordWrapper::ProcessLine(puVar5,&local_48);
      if (cVar4 == '\0') {
        return;
      }
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
    } while ((int)uVar8 < local_40);
  }
  return;
}



// FUNCTION 1428bfd60 FUN_1428bfd60 body=1025 status=ok
// SIG undefined FUN_1428bfd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1428bfd60(longlong param_1,char param_2,float param_3,float param_4,int *param_5,
                       int *param_6,longlong param_7,undefined4 param_8,float param_9,char param_10,
                       char param_11,undefined8 param_12,undefined8 *param_13)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_318 [32];
  longlong **local_2f8;
  undefined2 *local_2f0;
  longlong *local_2e8;
  ulonglong local_2e0;
  int local_2d8;
  undefined1 local_2d4 [4];
  int *local_2d0;
  int *local_2c8;
  undefined8 local_2c0;
  float local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  float local_2ac;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_270 [20];
  undefined4 local_25c;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  float local_1f0;
  undefined4 local_1d0;
  float local_1cc;
  undefined1 local_140 [120];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  fVar12 = 0.0;
  local_2d0 = param_5;
  local_2c8 = param_6;
  if (((*(float *)(param_1 + 0x30) < 0.0) ||
      (*(float *)(param_1 + 0x34) <= 0.0 && *(float *)(param_1 + 0x34) != 0.0)) || (param_7 == 0)) {
    uVar7 = 0;
  }
  else {
    local_2f0 = (undefined2 *)0x0;
    local_2e8 = (longlong *)0x0;
    local_2e0 = 0;
    local_2f8 = &local_2e8;
    local_2b8 = *(float *)(param_1 + 0x30) - (param_3 + *(float *)(param_1 + 0x28));
    local_2b0 = param_8;
    local_2ac = param_9;
    local_2c0 = 0;
    local_2b4 = 0;
    local_2a8 = param_7;
    local_2a0 = 0;
    FUN_1428bfb00(*(undefined8 *)(param_1 + 0x260),&local_2c0,0,param_12);
    param_3 = param_3 + *(float *)(param_1 + 0x28);
    param_4 = param_4 + *(float *)(param_1 + 0x2c);
    if (param_11 != '\0') {
      auVar10 = ZEXT816(0);
      for (plVar5 = local_2e8; plVar5 != local_2e8 + (longlong)(int)local_2e0 * 3;
          plVar5 = plVar5 + 3) {
        auVar10._0_4_ = auVar10._0_4_ + *(float *)((longlong)plVar5 + 0x14);
      }
      param_4 = param_4 + auVar10._0_4_ * -0.5;
    }
    fVar13 = 0.0;
    FLinearColor::FLinearColor(local_298,param_1 + 0x38);
    uVar6 = FUN_1404b03b0();
    local_2f8 = (longlong **)local_298;
    FCanvasTextItem::FCanvasTextItem(local_270,&DAT_1468b5d88,uVar6,param_7);
    local_230 = *param_13;
    uStack_228 = param_13[1];
    uVar7 = (ulonglong)(int)local_2e0;
    local_220 = param_13[2];
    uStack_218 = param_13[3];
    local_25c = 2;
    local_210 = param_13[4];
    plVar5 = local_2e8 + uVar7 * 3;
    local_1d0 = param_8;
    local_1cc = param_9;
    plVar9 = local_2e8;
    if (local_2e8 != plVar5) {
      do {
        fVar11 = param_3;
        if (param_10 != '\0') {
          fVar11 = param_3 - *(float *)(plVar9 + 2) * 0.5;
        }
        if (param_2 == '\0') {
          if ((int)plVar9[1] == 0) {
            local_2f0 = &DAT_143f3eda8;
          }
          else {
            local_2f0 = (undefined2 *)*plVar9;
          }
          local_2f8 = (longlong **)local_2d4;
          UCanvas::ClippedStrLen(param_7,param_8,param_9,&local_2d8);
          fVar11 = (float)local_2d8;
        }
        else {
          uVar6 = FText::FromString(local_288,plVar9);
          FText::operator=(local_140,uVar6);
          plVar4 = local_280;
          if (local_280 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_280 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_280)(local_280);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),local_270,fVar11,param_4);
          fVar11 = local_1f0;
        }
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        fVar12 = fVar11;
        fVar11 = (float)FUN_14244fa00(param_7);
        param_4 = param_4 + fVar11 * param_9;
        fVar11 = (float)FUN_14244fa00(param_7);
        plVar9 = plVar9 + 3;
        fVar13 = fVar13 + fVar11 * param_9;
      } while (plVar9 != plVar5);
      uVar7 = local_2e0 & 0xffffffff;
    }
    *local_2d0 = (int)fVar12;
    *local_2c8 = (int)fVar13;
    FUN_140c64b70(local_270);
    plVar5 = local_2e8;
    for (iVar8 = (int)local_2e0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
    }
    if (local_2e8 != (longlong *)0x0) {
      FMemory::Free(local_2e8);
    }
    uVar7 = uVar7 & 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 1428c0170 FUN_1428c0170 body=868 status=ok
// SIG undefined FUN_1428c0170(void)

void FUN_1428c0170(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *_Source;
  byte bVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float local_resc;
  longlong *local_res10 [2];
  undefined4 local_res20;
  wchar_t *local_c0;
  ulonglong local_b8;
  wchar_t *local_b0;
  int local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  if ((int)param_2[1] == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*param_2;
  }
  lVar2 = param_1[0x35];
  local_res20 = 0;
  fVar11 = 0.0;
  local_c0 = (wchar_t *)0x0;
  local_b8 = 1;
  local_a0 = (float)(DAT_1464aa730 >> 0x10 & 0xff) * 0.003921569;
  local_9c = (float)(DAT_1464aa730 >> 8 & 0xff) * 0.003921569;
  local_98 = (float)(DAT_1464aa730 & 0xff) * 0.003921569;
  local_94 = (float)(DAT_1464aa730 >> 0x18) * 0.003921569;
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x20))(param_1);
  uVar5 = 1;
  bVar9 = 1;
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_c0);
  pwVar3 = local_c0;
  local_res8 = (float)((uint)local_res8 & 0xffffff00);
  *(uint *)local_c0 = DAT_1464aa730;
  _Source = pwVar7;
LAB_1428c0284:
  pwVar8 = pwVar7;
  if ((int)param_2[1] == 0) {
    puVar6 = &DAT_143f3eda8;
    iVar4 = 0;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
    iVar4 = (int)param_2[1] + -1;
  }
  if (puVar6 + iVar4 <= pwVar8) {
    if ((local_res8._0_1_ != '\0') && (_Source < pwVar8)) {
      local_c0 = (wchar_t *)0x0;
      iVar4 = (int)((longlong)pwVar8 - (longlong)_Source >> 1);
      uVar5 = iVar4 + 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      local_b8 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
        pwVar7 = local_c0;
        if (0 < (int)local_b8) {
          wcsncpy(local_c0,_Source,(longlong)iVar4);
          pwVar7[iVar4] = L'\0';
        }
      }
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x1ac);
      FUN_1428adeb0(param_1,&local_res8,&local_c0);
      local_res10[0] = (longlong *)((ulonglong)local_res10[0] & 0xffffffff00000000);
      FUN_1428a6fb0(param_1,&local_c0,local_res10);
      *(float *)(param_1 + 0x35) = local_res8 + *(float *)(param_1 + 0x35);
      *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar1;
      if (fVar11 < local_resc) {
        fVar11 = local_resc;
      }
      if (local_c0 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    *(int *)(param_1 + 0x35) = (int)lVar2;
    *(float *)((longlong)param_1 + 0x1ac) = fVar11 + *(float *)((longlong)param_1 + 0x1ac);
    if (pwVar3 != (wchar_t *)0x0) {
      FMemory::Free(pwVar3);
    }
    return;
  }
  if ((bVar9 < 2) || (*pwVar8 != L' ')) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar9) {
    case 0:
      if (*pwVar8 == L'{') {
        if (_Source < pwVar8) {
          local_b0 = (wchar_t *)0x0;
          local_a4 = 0;
          iVar4 = (int)((longlong)pwVar8 - (longlong)_Source >> 1);
          local_a8 = iVar4 + 1;
          if (iVar4 == 0) {
            local_a8 = 0;
          }
          if ((0 < local_a8) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0), pwVar7 = local_b0,
             0 < local_a8)) {
            wcsncpy(local_b0,_Source,(longlong)iVar4);
            pwVar7[iVar4] = L'\0';
          }
          fVar10 = (float)FUN_1428c0790(param_1);
          if (fVar11 < fVar10) {
            fVar11 = fVar10;
          }
          param_2 = local_res10[0];
          if (local_b0 != (wchar_t *)0x0) {
            FMemory::Free();
            param_2 = local_res10[0];
          }
        }
        local_res8 = (float)((uint)local_res8 & 0xffffff00);
        uVar5 = 2;
        bVar9 = 2;
        pwVar7 = pwVar8 + 1;
        goto LAB_1428c0284;
      }
      break;
    case 1:
      goto switchD_1428c02d4_caseD_1;
    }
    bVar9 = uVar5 != 0;
    uVar5 = (uint)bVar9;
  }
  pwVar7 = pwVar8 + 1;
  goto LAB_1428c0284;
switchD_1428c02d4_caseD_1:
  if (*pwVar8 == L'{') {
    uVar5 = 2;
    bVar9 = 2;
    pwVar7 = pwVar8 + 1;
  }
  else {
    local_res8 = (float)CONCAT31(local_res8._1_3_,1);
    uVar5 = 0;
    bVar9 = 0;
    pwVar7 = pwVar8 + 1;
    _Source = pwVar8;
  }
  goto LAB_1428c0284;
}



// FUNCTION 1428c0790 FUN_1428c0790 body=119 status=ok
// SIG undefined FUN_1428c0790(void)

undefined4 FUN_1428c0790(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  float local_res18;
  undefined4 local_res1c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1ac);
  FUN_1428adeb0(param_1,&local_res18,param_2);
  local_res8[0] = 0;
  FUN_1428a6fb0(param_1,param_2,local_res8);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  *(float *)(param_1 + 0x1a8) = local_res18 + *(float *)(param_1 + 0x1a8);
  return local_res1c;
}



// FUNCTION 1428c0810 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FCompositeAnimatedVectorFieldUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"FrameA";
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
  *puVar3 = L"FrameB";
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
  *puVar3 = L"VoxelSize";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
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
  *puVar3 = L"FrameLerp";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x2c;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
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
  *puVar3 = L"NoiseScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000030;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 1428c0a70 FUN_1428c0a70 body=361 status=ok
// SIG undefined FUN_1428c0a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428c0a70(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 **local_78;
  undefined1 local_68 [8];
  undefined4 *local_60;
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
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_60;
  local_60 = (undefined4 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_88 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x40);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_60[1] = DAT_1464c9c24 ^ 0x80000000;
  *local_60 = 0x3f800000;
  local_60[2] = 0x3f800000;
  local_60[3] = 0x3f800000;
  local_60[5] = DAT_1464c9c24;
  local_60[4] = 0x3f800000;
  *(undefined8 *)(local_60 + 6) = 0x3f800000;
  local_60[9] = DAT_1464c9c24 ^ 0x80000000;
  local_60[8] = 0xbf800000;
  local_60[10] = 0;
  local_60[0xb] = 0x3f800000;
  local_60[0xd] = DAT_1464c9c24;
  local_60[0xc] = 0xbf800000;
  *(undefined8 *)(local_60 + 0xe) = 0;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1428c0be0 FUN_1428c0be0 body=89 status=ok
// SIG undefined FUN_1428c0be0(void)

undefined8 * FUN_1428c0be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451ed548;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1428c0c40 Append<FDefaultSetAllocator> body=550 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TSet<ULevelStreaming_*,DefaultKeyFuncs<ULevelStreaming_*,0>,FDefaultSetAllocator>::
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
      if (bVar4) goto LAB_1428c0d2d;
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
LAB_1428c0d2d:
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
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1428c0df3;
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
LAB_1428c0df3:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>
              (param_1,local_res8,(longlong)(int)uStack_5c * 0x10 + *param_2,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset(param_2);
  return;
}



// FUNCTION 1428c0e70 Emplace<TKeyInitializer<FName_const_&>_> body=419 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_const_&>_>(void)

int * TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TKeyInitializer<FName_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar3 = (longlong *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  lVar1 = *plVar3;
  *local_30 = lVar1;
  *(undefined4 *)(local_30 + 1) = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
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
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_1428c0f3c;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1428c0f3c:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_1428c0feb;
    }
  }
  cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1428c0feb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1428c1020 FUN_1428c1020 body=666 status=ok
// SIG undefined FUN_1428c1020(void)

int * FUN_1428c1020(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *_Src;
  undefined8 *_Dst;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
  lVar9 = *param_3;
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar9 + 8);
  lVar9 = *(longlong *)(lVar9 + 0x10);
  _Src[2] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  _Src[3] = 0;
  bVar12 = false;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = iVar11;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = GetTypeHash(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar9 = *param_1;
        do {
          cVar4 = FUniqueNetIdWrapper::operator==((longlong)iVar6 * 0x28 + lVar9,_Src);
          iVar10 = iVar6;
          if (cVar4 != '\0') break;
          lVar9 = *param_1;
          iVar6 = *(int *)((longlong)iVar6 * 0x28 + 0x20 + lVar9);
          iVar10 = iVar11;
        } while (iVar6 != -1);
      }
    }
    bVar12 = iVar10 != -1;
    if (bVar12) {
      _Dst = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
      *_Dst = &PTR_FUN_143f73d18;
      plVar8 = (longlong *)_Dst[2];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_1428c128d;
    }
  }
  cVar4 = FUN_1428c7950(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar11 = *param_2;
    uVar7 = GetTypeHash(_Src);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x24) = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar11;
  }
LAB_1428c128d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1428c12c0 FUN_1428c12c0 body=462 status=ok
// SIG undefined FUN_1428c12c0(void)

int * FUN_1428c12c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  
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
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  param_3 = (undefined8 *)*param_3;
  puVar10 = (undefined8 *)((longlong)iVar9 * 0x30 + *param_1);
  *puVar10 = 0;
  *puVar10 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  puVar10[2] = 0;
  puVar10[2] = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar3 + 2);
  *(undefined4 *)(puVar10 + 5) = 0xffffffff;
  cVar4 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar9 = *param_2;
    if (*(int *)(puVar10 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar10;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)puVar10 + 0x2c) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(puVar10 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar9
    ;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1428c1490 FUN_1428c1490 body=880 status=ok
// SIG undefined FUN_1428c1490(void)

int * FUN_1428c1490(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  ulonglong *_Src;
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  bool local_res8;
  
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
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar15 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  lVar7 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar9 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (undefined4 *)param_3[1];
  lVar8 = (longlong)iVar11;
  _Src = (ulonglong *)(*param_1 + lVar8 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  *(undefined4 *)(_Src + 1) = *puVar1;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    iVar6 = iVar17;
    if (iVar15 != 0) {
      iVar13 = (int)(uVar2 >> 4);
      uVar12 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
      uVar10 = -(uVar12 + iVar13) ^ uVar12 >> 0xd;
      uVar14 = (iVar13 - uVar12) - uVar10 ^ uVar10 >> 0xc;
      uVar12 = (uVar12 - uVar14) - uVar10 ^ uVar14 << 0x10;
      uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar12 >> 5;
      uVar14 = (uVar14 - uVar12) - uVar10 ^ uVar10 >> 3;
      uVar12 = (uVar12 - uVar14) - uVar10 ^ uVar14 << 10;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar9 +
                       (((longlong)(int)((uVar10 - uVar12) - uVar14) ^ (ulonglong)(uVar12 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar13 != -1) {
        do {
          iVar6 = iVar13;
          if (*(ulonglong *)(*param_1 + (longlong)iVar13 * 0x18) == uVar2) break;
          iVar13 = *(int *)(*param_1 + 0x10 + (longlong)iVar13 * 0x18);
          iVar6 = iVar17;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),_Src,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + lVar8 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + lVar8 * 0x18) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar9 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1428c17d1;
    }
  }
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar5 == '\0') {
    iVar17 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar14 = -(uVar12 + iVar17) ^ uVar12 >> 0xd;
    uVar10 = (iVar17 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar10 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar12) - uVar10 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1428c17d1:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1428c1800 IsA<ULevelStreamingPersistent> body=69 status=ok
// SIG undefined IsA<ULevelStreamingPersistent>(void)

ulonglong UObjectBaseUtility::IsA<ULevelStreamingPersistent>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = ULevelStreamingPersistent::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1428c1850 MultiFind<FDefaultAllocator> body=548 status=ok
// SIG undefined MultiFind<FDefaultAllocator>(void)

void TMultiMap<FString,FPackageNameAndLODIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPackageNameAndLODIndex,1>_>
     ::MultiFind<FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_2;
    }
    iVar8 = FUN_140438070(puVar13);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar8) * 4);
    do {
      iVar15 = iVar8;
      iVar8 = iVar15;
      if (iVar15 == -1) break;
      lVar11 = (longlong)iVar15;
      lVar3 = *param_1;
      iVar8 = *(int *)(lVar3 + 0x28 + lVar11 * 0x30);
      if (*(int *)(param_2 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar3 + 8 + lVar11 * 0x30) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(lVar3 + lVar11 * 0x30);
      }
      iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
    } while (iVar9 != 0);
joined_r0x0001428c192a:
    if (iVar15 != -1) {
      iVar9 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar9);
      }
      lVar3 = *param_3 + (longlong)iVar9 * 0x18;
      if (lVar3 != 0) {
        lVar11 = (longlong)iVar15 * 0x30 + *param_1;
        FString::FString(lVar3,lVar11 + 0x10);
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar11 + 0x20);
      }
      iVar15 = iVar8;
      if (iVar8 == -1) goto LAB_1428c19ff;
      do {
        lVar11 = (longlong)iVar15;
        lVar3 = *param_1;
        iVar8 = *(int *)(lVar3 + 0x28 + lVar11 * 0x30);
        if (*(int *)(param_2 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*param_2;
        }
        if (*(int *)(lVar3 + 8 + lVar11 * 0x30) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(lVar3 + lVar11 * 0x30);
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      } while ((iVar9 != 0) && (iVar15 = iVar8, iVar8 != -1));
      goto joined_r0x0001428c192a;
    }
  }
LAB_1428c19ff:
  if (param_4 != '\0') {
    iVar8 = (int)param_3[1];
    puVar4 = (undefined8 *)*param_3;
    if (0 < iVar8 / 2) {
      uVar16 = (ulonglong)(uint)(iVar8 / 2);
      puVar14 = puVar4;
      do {
        iVar8 = iVar8 + -1;
        puVar1 = puVar4 + (longlong)iVar8 * 3;
        if (puVar14 != puVar1) {
          uVar5 = puVar1[1];
          uVar6 = *puVar14;
          uVar7 = puVar14[1];
          uVar2 = puVar14[2];
          *puVar14 = *puVar1;
          puVar14[1] = uVar5;
          puVar14[2] = puVar1[2];
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar2;
        }
        puVar14 = puVar14 + 3;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  return;
}



// FUNCTION 1428c1a80 FUN_1428c1a80 body=207 status=ok
// SIG undefined FUN_1428c1a80(void)

undefined8 * FUN_1428c1a80(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_1422dfa10();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1440f1c20;
  *(byte *)(param_1[0x8e] + 0x2f8) = *(byte *)(param_1[0x8e] + 0x2f8) | 0x10;
  *(byte *)(param_1[0x8e] + 0x2f8) = *(byte *)(param_1[0x8e] + 0x2f8) | 0x20;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b19b58) {
    _Init_thread_header(&DAT_146b19b58);
    if (DAT_146b19b58 == -1) {
      FName::FName(&DAT_146b19b50,L"OverlapAll",1);
      _Init_thread_footer(&DAT_146b19b58);
    }
  }
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146b19b50);
  FUN_1423974f0(param_1[0x8e],1);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  return param_1;
}



// FUNCTION 1428c1b50 FUN_1428c1b50 body=437 status=ok
// SIG undefined FUN_1428c1b50(void)

undefined8 * FUN_1428c1b50(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_res8;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  FUN_1428c1a80();
  *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) & 0xfffffffd;
  *(uint *)(param_1 + 0x92) = *(uint *)(param_1 + 0x92) | 0x1d;
  *(uint *)((longlong)param_1 + 0x4ac) = *(uint *)((longlong)param_1 + 0x4ac) | 1;
  *param_1 = &PTR_FUN_1451ee038;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  local_10 = 0x43480000;
  local_28 = 0x4348000043480000;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  local_20 = 0x43480000;
  AActor::SetActorScale3D(param_1,&local_28);
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  lVar2 = DAT_146b19a20;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_1428c1c1e;
  }
  lVar5 = 0;
LAB_1428c1c1e:
  local_res8 = CONCAT44(local_res8._4_4_,0xff00ffff);
  pbVar1 = (byte *)(param_1[0x8e] + 0x24c);
  *pbVar1 = *pbVar1 ^ (*(char *)(lVar5 + lVar2) << 5 ^ *(byte *)(param_1[0x8e] + 0x24c)) & 0x20;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xff00ffff;
  *(undefined8 *)((longlong)param_1 + 0x50c) = *(undefined8 *)(param_1[0x2d] + 0x204);
  *(undefined4 *)((longlong)param_1 + 0x514) = *(undefined4 *)(param_1[0x2d] + 0x20c);
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  puVar6 = (undefined8 *)FName::FName(&local_res8,L"VLMComponent0",1);
  uVar8 = *puVar6;
  uVar7 = UInputKeySelector::GetPrivateStaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar7,uVar7,1,0,0);
  param_1[0xa3] = uVar8;
  local_res8 = 0;
  FUN_142399e30(uVar8,param_1[0x2d],0);
  return param_1;
}



// FUNCTION 1428c1d10 FUN_1428c1d10 body=134 status=ok
// SIG undefined FUN_1428c1d10(void)

undefined8 * FUN_1428c1d10(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_144ee25c0;
  *(undefined4 *)(param_1 + 0x92) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x80000000;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  param_1[0x92] = 0x300000001;
  *(undefined2 *)((longlong)param_1 + 0x45d) = 0x9bb9;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0x19;
  *(undefined1 *)((longlong)param_1 + 0x45f) = 0xff;
  return param_1;
}



// FUNCTION 1428c1da0 FUN_1428c1da0 body=119 status=ok
// SIG undefined FUN_1428c1da0(void)

undefined8 * FUN_1428c1da0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1424de090();
  *param_1 = &PTR_FUN_1450c60c0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WindDirectionalSourceComponent0",1);
  uVar3 = *puVar1;
  uVar2 = USoundWaveProcedural::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1428c1e20 FUN_1428c1e20 body=498 status=ok
// SIG undefined FUN_1428c1e20(void)

/* WARNING: Removing unreachable block (ram,0x0001428c1fbd) */

longlong * FUN_1428c1e20(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  *param_1 = param_2;
  lVar6 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar4 = lVar6;
  if (param_3 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar7 = param_3;
    do {
      lVar4 = param_3;
      if (lVar7 == lVar2) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar4 = lVar6;
    } while (lVar7 != 0);
  }
  param_1[8] = lVar4;
  param_1[9] = 0;
  lVar4 = lVar6;
  if (param_3 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar7 = param_3;
    do {
      lVar4 = param_3;
      if (lVar7 == lVar2) break;
      lVar7 = *(longlong *)(lVar7 + 0x30);
      lVar4 = lVar6;
    } while (lVar7 != 0);
  }
  FUN_1417a5560(lVar4,param_1 + 1,1,0x10,0x20000000);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = (longlong)param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FActorIteratorState::OnActorSpawned;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  lVar4 = *param_1;
  plVar9 = (longlong *)(lVar4 + 0x3e0);
  if (plVar3 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      plVar5 = (longlong *)(**(code **)(*local_28 + 0x20))(local_28,local_res8);
      lVar6 = *plVar5;
    }
    iVar1 = *(int *)(lVar4 + 1000);
    *(int *)(lVar4 + 1000) = iVar1 + 1;
    if (*(int *)(lVar4 + 0x3ec) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar9);
    *puVar8 = 0;
    *puVar8 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar8 + 1) = local_20;
    local_20 = 0;
  }
  param_1[9] = lVar6;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar6 = FMemory::Realloc(plVar3,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return param_1;
}



// FUNCTION 1428c2020 FActorSpawnParameters body=44 status=ok
// SIG undefined FActorSpawnParameters(void)

undefined8 * FActorSpawnParameters::FActorSpawnParameters(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(ushort *)((longlong)param_1 + 0x2a) = *(ushort *)((longlong)param_1 + 0x2a) & 0xfff0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  return param_1;
}



// FUNCTION 1428c2050 FUN_1428c2050 body=676 status=ok
// SIG undefined FUN_1428c2050(void)

undefined4 * FUN_1428c2050(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
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
  
  plVar1 = (longlong *)(param_1 + 10);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(plVar1,param_2 + 10);
  if (*(longlong *)(param_2 + 0x1a) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x18,param_2 + 0x18,4);
  }
  if (*(longlong *)(param_1 + 0x1a) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = 0;
  puVar2 = param_1 + 0xe;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  uVar3 = param_1[0x14];
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar9 = *(uint **)(param_1 + 0x12);
    if (*(uint **)(param_1 + 0x12) == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar4 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1428c21bd;
      uVar4 = puVar9[lVar8 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1428c21bd:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0x14];
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
    puVar9 = *(uint **)(param_1 + 0x12);
    if (*(uint **)(param_1 + 0x12) == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar7 = puVar9[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1428c2282;
      uVar7 = puVar9[(longlong)iVar6 + 1];
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
    uStack_84 = (uVar10 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1428c2282:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar8 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
    if (lVar8 != 0) {
      *(undefined4 **)(lVar8 + 600) = param_1;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return param_1;
}



// FUNCTION 1428c2340 FScopedLevelCollectionContextSwitch body=56 status=ok
// SIG undefined FScopedLevelCollectionContextSwitch(void)

longlong *
FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_3;
  if (param_3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x180);
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  if (param_3 != 0) {
    FUN_1428d77b0(param_3);
  }
  return param_1;
}



// FUNCTION 1428c2380 FUN_1428c2380 body=132 status=ok
// SIG undefined FUN_1428c2380(void)

longlong * FUN_1428c2380(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *param_1 = param_3;
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x180);
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 0x170);
    for (lVar3 = lVar1; lVar3 != (longlong)*(int *)(param_3 + 0x178) * 0x80 + lVar1;
        lVar3 = lVar3 + 0x80) {
      if (lVar3 == param_2) {
        FUN_1428d77b0(param_3,lVar3 - lVar1 >> 7 & 0xffffffff);
        return param_1;
      }
    }
    FUN_1428d77b0(param_3,0xffffffff);
  }
  return param_1;
}



// FUNCTION 1428c2410 FUN_1428c2410 body=615 status=ok
// SIG undefined FUN_1428c2410(void)

undefined8 * FUN_1428c2410(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  
  *(undefined4 *)(param_1 + 1) = 4;
  uVar11 = (ulonglong)param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xc7efffffe0000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_1451edfd8;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  uVar6 = uVar10;
  if (*(uint **)(param_2 + 0xb8) != (uint *)0x0) {
    uVar6 = **(uint **)(param_2 + 0xb8);
  }
  *(uint *)(param_1 + 0xf) = uVar6;
  uVar6 = uVar10;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar6 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 4);
  }
  *(uint *)((longlong)param_1 + 0x7c) = uVar6;
  uVar6 = uVar10;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar6 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 8) & 0x7fffffff;
  }
  *(uint *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  uVar6 = uVar10;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar6 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 0x18);
  }
  *(uint *)(param_1 + 0x11) = uVar6;
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    uVar10 = *(uint *)(*(longlong *)(param_2 + 0xb8) + 0xc);
  }
  *(char *)((longlong)param_1 + 0x8c) = (char)uVar10;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2 + 0x68;
  param_1[0x16] = &PTR__scalar_deleting_destructor__1451edfb0;
  *(int *)(param_1 + 0x2c) = param_3;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x17,0,0xa8);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x12) = (*(byte *)(param_2 + 0x4b) & 5) << 4 | 0x80008;
  uVar9 = FUN_14240d6a0(0);
  uVar9 = AAIController::GetPerceptionComponent(uVar9);
  uVar9 = FArchive::operator<<(uVar9);
  bVar3 = UTextureLODSettings::GetSamplerFilter(uVar9,param_2);
  *(uint *)(param_1 + 0x13) = (uint)bVar3;
  if ((*(char *)((longlong)param_1 + 0x8c) == '\x03') ||
     (*(char *)((longlong)param_1 + 0x8c) == '\'')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 100) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (lVar1 == 0) {
    return param_1;
  }
  lVar12 = uVar11 * 8;
  cVar5 = FUN_14285b570(lVar1,param_3,param_1 + uVar11 + 0x17);
  if ((cVar5 != '\0') && (param_3 < *(int *)(param_1 + 0x11))) {
    piVar13 = (int *)((longlong)param_1 + uVar11 * 4 + 0x128);
    do {
      lVar2 = *(longlong *)(lVar12 + *(longlong *)(lVar1 + 0x10));
      iVar7 = CalcTextureMipMapSize3D
                        (*(undefined4 *)(param_1 + 0xf),*(undefined4 *)((longlong)param_1 + 0x7c),
                         *(undefined4 *)(param_1 + 0x10),*(undefined1 *)((longlong)param_1 + 0x8c),
                         (int)uVar11);
      iVar8 = FUntypedBulkData::GetBulkDataSize(lVar2 + 8);
      lVar12 = lVar12 + 8;
      if (iVar7 <= iVar8) {
        iVar7 = iVar8;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      *piVar13 = iVar7;
      piVar13 = piVar13 + 1;
    } while ((int)uVar10 < *(int *)(param_1 + 0x11));
  }
  return param_1;
}



// FUNCTION 1428c2680 FVorbisAudioInfo body=135 status=ok
// SIG undefined FVorbisAudioInfo(void)

undefined8 * FVorbisAudioInfo::FVorbisAudioInfo(undefined8 *param_1)

{
  void *_Dst;
  void *pvVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451ef240;
  _Dst = (void *)operator_new(0x348);
  pvVar1 = (void *)0x0;
  if (_Dst != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x348);
    pvVar1 = _Dst;
  }
  param_1[1] = pvVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1428c2710 FWeightedRandomSampler body=35 status=ok
// SIG undefined FWeightedRandomSampler(void)

undefined8 * FWeightedRandomSampler::FWeightedRandomSampler(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451abc48;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1428c2740 FWorldCompositionTile body=56 status=ok
// SIG undefined FWorldCompositionTile(void)

undefined8 * FWorldCompositionTile::FWorldCompositionTile(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FWorldTileInfo::FWorldTileInfo(param_1 + 3);
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 1428c2780 FWorldTileInfo body=257 status=ok
// SIG undefined FWorldTileInfo(void)

undefined8 * FWorldTileInfo::FWorldTileInfo(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FString::FString(param_1 + 7,param_2 + 7);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FString::FString(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1409b7fb0(param_1 + 0xf,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xf],_Src,(longlong)iVar1 * 0x14);
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  return param_1;
}



// FUNCTION 1428c2890 FWorldTileInfo body=179 status=ok
// SIG undefined FWorldTileInfo(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FWorldTileInfo::FWorldTileInfo(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5d98;
  param_1[3] = *(undefined8 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],L"Uncategorized",0x1c);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 50000;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1428c2950 FUN_1428c2950 body=119 status=ok
// SIG undefined FUN_1428c2950(void)

undefined8 * FUN_1428c2950(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_1451ed890;
  param_1[5] = &PTR_LAB_1451edca8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = &PTR_FUN_143f73d18;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) & 0xfe;
  *(undefined4 *)(param_1 + 0x35) = 0;
  return param_1;
}



// FUNCTION 1428c29d0 FUN_1428c29d0 body=107 status=ok
// SIG undefined FUN_1428c29d0(void)

undefined8 * FUN_1428c29d0(undefined8 *param_1)

{
  FUN_14284de20();
  *param_1 = &PTR__scalar_deleting_destructor__1451edcd8;
  param_1[5] = &PTR_LAB_1451c82d0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(byte *)((longlong)param_1 + 0x4b) = *(byte *)((longlong)param_1 + 0x4b) | 1;
  return param_1;
}



// FUNCTION 1428c2a40 FUN_1428c2a40 body=144 status=ok
// SIG undefined FUN_1428c2a40(void)

undefined8 * FUN_1428c2a40(undefined8 *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_14237eb90();
  lVar1 = param_1[0x23];
  *param_1 = &PTR__scalar_deleting_destructor__1451ee758;
  param_1[5] = &PTR_LAB_1451ef040;
  param_1[0x5a] = &PTR_LAB_1451ef070;
  if (lVar1 != 0) {
    lVar3 = AGeometryCollectionActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = 0;
    if (bVar2) {
      lVar3 = lVar1;
    }
    param_1[0xde] = lVar3;
  }
  return param_1;
}



// FUNCTION 1428c2ad0 FUN_1428c2ad0 body=91 status=ok
// SIG undefined FUN_1428c2ad0(void)

undefined8 * FUN_1428c2ad0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *param_1 = &PTR_FUN_1451ef2b0;
  param_1[5] = &PTR_LAB_14504f3d8;
  *(undefined4 *)(param_1 + 0x5a) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x5b) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 1428c2b30 FUN_1428c2b30 body=1623 status=ok
// SIG undefined FUN_1428c2b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1428c2b30(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_668 [32];
  undefined8 *local_648;
  undefined8 local_640;
  undefined1 local_638;
  undefined2 *local_628;
  undefined8 local_620;
  undefined1 local_618 [1496];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  FUN_141781840();
  lVar6 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451ed5d0;
  param_1[5] = &PTR_FUN_1451ed870;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x38) = DAT_1464c9c14;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  FWorldAsyncTraceState::FWorldAsyncTraceState(param_1 + 0x58);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d9) = 1;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 2;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 2;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 2;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 2;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 2;
  FURL::FURL(param_1 + 0xac,0);
  param_1[0xba] = 0;
  plVar2 = (longlong *)thunk_FUN_142873fe0();
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  *(undefined1 *)((longlong)param_1 + 0x5e1) = 0;
  param_1[0xbb] = uVar3;
  FTickFunction::FTickFunction(param_1 + 0xbd);
  param_1[0xbd] = &PTR__scalar_deleting_destructor__1451ed588;
  FTickFunction::FTickFunction(param_1 + 200);
  param_1[200] = &PTR__scalar_deleting_destructor__1451ed5a0;
  FTickFunction::FTickFunction(param_1 + 0xd3);
  param_1[0xd3] = &PTR__scalar_deleting_destructor__1451ed5b8;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x764) = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7ec) = 2;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 2;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  FWorldPSCPool::FWorldPSCPool(param_1 + 0x10e);
  *(undefined4 *)(param_1 + 0x119) = 0;
  FUN_14255b410(param_1 + 0x11a);
  FUN_14255b410(param_1 + 0x123);
  param_1[300] = 0;
  param_1[0x12d] = 0;
  lVar4 = operator_new(0xf0);
  lVar5 = lVar6;
  if (lVar4 != 0) {
    lVar5 = FTimerManager::FTimerManager(lVar4);
  }
  param_1[0x7f] = lVar5;
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146535730,param_1);
  lVar4 = operator_new(0x90);
  lVar5 = lVar6;
  if (lVar4 != 0) {
    lVar5 = FWorldInGamePerformanceTrackers::FWorldInGamePerformanceTrackers(lVar4);
  }
  param_1[0x107] = lVar5;
  local_628 = (undefined2 *)0x0;
  local_620 = 0;
  lVar5 = operator_new(0x600);
  if (lVar5 != 0) {
    lVar6 = FUN_142741540(lVar5);
  }
  param_1[0x12d] = lVar6;
  if (lVar6 != 0) {
    local_648 = &DAT_1468e2360;
    cVar1 = FConfigCacheIni::GetString
                      (DAT_1468b6148,L"GbxRenderingSettings",L"PostProcessSettingsMaster",&local_628
                      );
    if ((cVar1 != '\0') && (1 < (int)local_620)) {
      lVar5 = param_1[0x12d];
      uVar3 = FUN_142741540(local_618);
      FUN_140e6c260(lVar5,uVar3);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(lVar5 + 0x310) = 0;
      *(undefined4 *)(lVar5 + 0x4bc) = 0;
      *(undefined4 *)(lVar5 + 0x4d0) = 0;
      puVar7 = &DAT_143f3eda8;
      if ((int)local_620 != 0) {
        puVar7 = local_628;
      }
      uVar3 = FUN_14171bfe0();
      local_638 = 1;
      local_640 = 0;
      local_648 = (undefined8 *)((ulonglong)local_648 & 0xffffffff00000000);
      plVar2 = (longlong *)FUN_141799c90(uVar3,0,puVar7,0);
      param_1[300] = plVar2;
      if (plVar2 != (longlong *)0x0) {
        lVar5 = plVar2[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar5 = plVar2[0x1f];
          if (lVar5 == 0) goto LAB_1428c3150;
        }
        FUN_140a296b0(param_1[0x12d],lVar5 + 0x30);
      }
    }
  }
LAB_1428c3150:
  if (local_628 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1428c3190 UWorldComposition body=86 status=ok
// SIG undefined UWorldComposition(void)

undefined8 * UWorldComposition::UWorldComposition(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451ef800;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x48fffff0;
  return param_1;
}



// FUNCTION 1428c31f0 ~TArray<FWorldCompositionTile,FDefaultAllocator> body=143 status=ok
// SIG undefined ~TArray<FWorldCompositionTile,FDefaultAllocator>(void)

void TArray<FWorldCompositionTile,FDefaultAllocator>::
     ~TArray<FWorldCompositionTile,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x80);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xf] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x16;
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



// FUNCTION 1428c3280 FUN_1428c3280 body=538 status=ok
// SIG undefined FUN_1428c3280(void)

void FUN_1428c3280(longlong param_1)

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
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x50);
  puVar2 = (uint *)(param_1 + 0x38);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar10 = puVar2;
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
      if (bVar5) goto LAB_1428c334c;
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
LAB_1428c334c:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = plVar1;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1428c3412;
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
LAB_1428c3412:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar8 = *(longlong *)(*plVar1 + (longlong)(int)uStack_4c * 0x10);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 600) = 0;
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  return;
}



// FUNCTION 1428c34a0 ~FScopedLevelCollectionContextSwitch body=20 status=ok
// SIG undefined ~FScopedLevelCollectionContextSwitch(void)

void FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1428d77b0(*param_1,(int)param_1[1]);
    return;
  }
  return;
}



// FUNCTION 1428c34c0 ~FVolumeTextureBulkData body=123 status=ok
// SIG undefined ~FVolumeTextureBulkData(void)

void FVolumeTextureBulkData::~FVolumeTextureBulkData(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = (longlong)&PTR__scalar_deleting_destructor__1451edfb0;
  plVar3 = param_1 + 0xf;
  lVar2 = 0xe;
  plVar1 = param_1;
  do {
    plVar1 = plVar1 + 1;
    if (*plVar1 != 0) {
      FMemory::Free();
      *plVar1 = 0;
    }
    *(undefined4 *)plVar3 = 0;
    plVar3 = (longlong *)((longlong)plVar3 + 4);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = (longlong)&PTR_FUN_143f593e8;
  return;
}



// FUNCTION 1428c3540 ~FWorldAsyncTraceState body=264 status=ok
// SIG undefined ~FWorldAsyncTraceState(void)

void FWorldAsyncTraceState::~FWorldAsyncTraceState(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar7 = (undefined8 *)(param_1 + 0xc0);
  lVar8 = 2;
  piVar5 = (int *)(param_1 + 0x118);
  do {
    iVar6 = piVar5[-0x18];
    puVar7 = puVar7 + -0xc;
    lVar8 = lVar8 + -1;
    plVar3 = *(longlong **)(piVar5 + -0x1a);
    if (*(longlong **)(piVar5 + -0x1a) == (longlong *)0x0) {
      plVar3 = (longlong *)(piVar5 + -0x22);
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar3 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar3 = plVar3 + 1;
    }
    if (*(longlong *)(piVar5 + -0x1a) != 0) {
      FMemory::Free();
    }
    iVar6 = piVar5[-0x28];
    puVar4 = *(undefined8 **)(piVar5 + -0x2a);
    if (iVar6 != 0) {
      do {
        FUN_14232b850(puVar4,*puVar4);
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar4 = *(undefined8 **)(piVar5 + -0x2a);
    }
    if (puVar4 != (undefined8 *)0x0) {
      FMemory::Free(puVar4);
    }
    iVar6 = piVar5[-0x2c];
    puVar4 = (undefined8 *)*puVar7;
    if (iVar6 != 0) {
      do {
        FUN_14232b8f0(puVar4,*puVar4);
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar4 = (undefined8 *)*puVar7;
    }
    if (puVar4 != (undefined8 *)0x0) {
      FMemory::Free(puVar4);
    }
    piVar5 = piVar5 + -0x18;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 1428c3650 ~FWorldTilesGatherer body=211 status=ok
// SIG undefined ~FWorldTilesGatherer(void)

void FWorldTilesGatherer::~FWorldTilesGatherer(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FResourceTableEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 5,0);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 4);
  plVar1 = (longlong *)param_1[3];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[3];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
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
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1428c3730 FUN_1428c3730 body=820 status=ok
// SIG undefined FUN_1428c3730(void)

void FUN_1428c3730(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x107];
  *param_1 = &PTR__scalar_deleting_destructor__1451ed5d0;
  param_1[5] = &PTR_FUN_1451ed870;
  if (lVar2 != 0) {
    FWorldInGamePerformanceTrackers::~FWorldInGamePerformanceTrackers(lVar2);
    FMemory::operator_delete(lVar2,0x90);
  }
  lVar2 = param_1[0x12d];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x5e8) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar2 + 0x5d8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar2,0x600);
  }
  FWorldPSCPool::~FWorldPSCPool(param_1 + 0x10e);
  if (param_1[0x10b] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x108);
  if (param_1[0x101] != 0) {
    FMemory::Free();
  }
  if (param_1[0xfe] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xef) = 0;
  if (param_1[0xee] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe6);
  if (param_1[0xe4] != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0xd3);
  FTickFunction::~FTickFunction(param_1 + 200);
  FTickFunction::~FTickFunction(param_1 + 0xbd);
  FURL::~FURL(param_1 + 0xac);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa9);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa6);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa3);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa0);
  FUN_142512170(param_1 + 0x80);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x71);
  FWorldAsyncTraceState::~FWorldAsyncTraceState(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x44);
  if (param_1[0x41] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x39] != 0) {
    FMemory::Free();
  }
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x2f);
  lVar2 = param_1[0x2e];
  if (iVar1 != 0) {
    do {
      FUN_1428c3280(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = param_1[0x2e];
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x13);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1428c3a70 FUN_1428c3a70 body=230 status=ok
// SIG undefined FUN_1428c3a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1428c3a70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
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
  if (param_2 != param_1) {
    local_38 = *(undefined8 *)(param_2 + 8);
    puVar1 = (undefined8 *)(param_1 + 8);
    uStack_30 = *(longlong **)(param_2 + 0x10);
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
      UNLOCK();
    }
    if (&local_38 != puVar1) {
      local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
      uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
      uVar5 = *puVar1;
      plVar6 = *(longlong **)(param_1 + 0x10);
      local_28 = (undefined4)local_38;
      uStack_24 = local_38._4_4_;
      uStack_20 = (undefined4)uStack_30;
      uStack_1c = uStack_30._4_4_;
      *(undefined4 *)puVar1 = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0xc) = local_38._4_4_;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x14) = uStack_30._4_4_;
      local_38 = uVar5;
      uStack_30 = plVar6;
    }
    plVar6 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_30 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*uStack_30)(uStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*uStack_30 + 8))(uStack_30,1);
        }
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1428c3b60 operator= body=273 status=ok
// SIG undefined operator=(void)

undefined4 * FWorldTileInfo::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  FString::operator=(param_1 + 0xe,param_2 + 0xe);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FString::operator=(param_1 + 0x1a,param_2 + 0x1a);
  puVar1 = (undefined8 *)(param_1 + 0x1e);
  if (puVar1 != (undefined8 *)(param_2 + 0x1e)) {
    iVar2 = param_2[0x20];
    _Src = *(void **)(param_2 + 0x1e);
    param_1[0x20] = iVar2;
    if ((iVar2 == 0) && (param_1[0x21] == 0)) {
      param_1[0x21] = 0;
    }
    else {
      FUN_1409b7fb0(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x14);
    }
  }
  param_1[0x22] = param_2[0x22];
  return param_1;
}



// FUNCTION 1428c3c80 FUN_1428c3c80 body=597 status=ok
// SIG undefined FUN_1428c3c80(void)

longlong * FUN_1428c3c80(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
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
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (*(undefined1 *)(param_2 + 7) = 1, (float)param_2[6] == 0.0)) {
    param_2[6] = 0x461c4000;
  }
  return param_1;
}



// FUNCTION 1428c3ee0 FUN_1428c3ee0 body=450 status=ok
// SIG undefined FUN_1428c3ee0(void)

longlong * FUN_1428c3ee0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int local_res8 [2];
  ulonglong uVar9;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xb0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xb0);
  uVar7 = 0;
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
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1745e)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar6 = (longlong)(int)uVar7 * 0xb0 + *param_2;
          uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
          uVar5 = FUN_1416e71d0(uVar5,lVar6 + 0x18);
          FUN_14172b230(uVar5,lVar6 + 8);
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
    }
    else {
      TArray<FWorldCompositionTile,FDefaultAllocator>::Empty(param_2,local_res8[0]);
      uVar9 = uVar7;
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          uVar4 = uVar7;
          if ((longlong)iVar2 * 0xb0 + *param_2 != 0) {
            uVar4 = FWorldCompositionTile::FWorldCompositionTile();
          }
          uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
          uVar5 = FUN_1416e71d0(uVar5,uVar4 + 0x18);
          FUN_14172b230(uVar5,uVar4 + 8);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1428c40b0 FUN_1428c40b0 body=213 status=ok
// SIG undefined FUN_1428c40b0(void)

longlong FUN_1428c40b0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 local_res8 [8];
  
  if (*param_2 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(*param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar4 = FUN_142a2f930();
      cVar2 = UObjectBaseUtility::IsInA(*param_2,uVar4);
      if (cVar2 == '\0') {
        return param_1;
      }
    }
    piVar5 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0x90,local_res8,*param_2);
    if (*piVar5 == -1) {
      FUN_14058cbf0(param_1 + 0x90,local_res8,param_2,0);
      lVar3 = UObjectBaseUtility::GetOutermost(*param_2);
      if ((lVar3 == 0) || ((*(uint *)(lVar3 + 0x50) >> 0x14 & 1) != 0)) {
        (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,param_1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1428c4190 operator<< body=80 status=ok
// SIG undefined operator<<(void)

undefined8 FFixupSmartPointersForPIEArchive::operator<<(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_28 = param_2[3];
  uStack_24 = param_2[4];
  uStack_20 = param_2[5];
  uStack_1c = param_2[6];
  puVar3 = (undefined8 *)FUniqueObjectGuid::FixupForPIE(&local_28,local_18,DAT_1464aaa88);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 3) = uVar1;
  *(undefined8 *)(param_2 + 5) = uVar2;
  return param_1;
}



// FUNCTION 1428c41e0 operator== body=411 status=ok
// SIG undefined operator==(void)

ulonglong FWorldTileInfo::operator==(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  uVar1 = (ulonglong)*param_2;
  if (((((*param_1 == *param_2) && (uVar1 = (ulonglong)param_2[1], param_1[1] == param_2[1])) &&
       (uVar1 = (ulonglong)param_2[2], param_1[2] == param_2[2])) &&
      (((ABS((float)param_1[6] - (float)param_2[6]) <= 0.5 &&
        (ABS((float)param_1[7] - (float)param_2[7]) <= 0.5)) &&
       ((ABS((float)param_1[8] - (float)param_2[8]) <= 0.5 &&
        ((ABS((float)param_1[9] - (float)param_2[9]) <= 0.5 &&
         (ABS((float)param_1[10] - (float)param_2[10]) <= 0.5)))))))) &&
     (ABS((float)param_1[0xb] - (float)param_2[0xb]) <= 0.5)) {
    puVar6 = &DAT_143f3eda8;
    if (param_2[0x1c] == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_2 + 0x1a);
    }
    if (param_1[0x1c] == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0x1a);
    }
    uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar5);
    if ((int)uVar1 == 0) {
      if (param_2[0x10] == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_2 + 0xe);
      }
      if (param_1[0x10] != 0) {
        puVar6 = *(undefined2 **)(param_1 + 0xe);
      }
      uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
      if ((((((int)uVar1 == 0) && (uVar1 = (ulonglong)param_2[0x15], param_1[0x15] == param_2[0x15])
            ) && (uVar1 = 0, (char)param_1[0x16] == (char)param_2[0x16])) &&
          ((uVar1 = 0, (char)param_1[0x18] == (char)param_2[0x18] &&
           (uVar1 = (ulonglong)param_2[0x22], param_1[0x22] == param_2[0x22])))) &&
         (uVar4 = param_1[0x20], uVar4 == param_2[0x20])) {
        puVar3 = *(uint **)(param_2 + 0x1e);
        if (uVar4 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x1e) - (longlong)puVar3;
          do {
            uVar1 = (ulonglong)*puVar3;
            if (*(uint *)(lVar7 + (longlong)puVar3) != *puVar3) goto LAB_1428c4369;
            puVar3 = puVar3 + 5;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
    }
  }
LAB_1428c4369:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1428c4380 FUN_1428c4380 body=525 status=ok
// SIG undefined FUN_1428c4380(void)

void FUN_1428c4380(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar2 = *(longlong *)(param_1 + 2);
  uVar13 = param_1[8] + 1;
  uVar8 = param_1[6];
  if ((int)uVar13 < (int)(param_1[0x10] + uVar8)) {
    lVar15 = (longlong)(int)uVar13 * 8;
    do {
      if ((int)uVar13 < (int)uVar8) {
        lVar14 = *(longlong *)(lVar15 + *(longlong *)(param_1 + 4));
      }
      else {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xe) + (longlong)(int)(uVar13 - uVar8) * 8);
      }
      param_1[10] = param_1[10] + 1;
      if ((lVar14 != 0) && (lVar9 = AActor::GetLevel(lVar14), lVar9 != 0)) {
        if ((*param_1 & 1) != 0) {
          iVar1 = *(int *)(lVar14 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar12 = iVar1 >> 0x1f & 0xffff;
            uVar8 = iVar1 + uVar12;
            lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)((uVar8 & 0xffff) - uVar12) * 0x18;
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1428c4549;
        }
        if (((*param_1 >> 1 & 1) == 0) ||
           (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar14), cVar7 != '\0')) {
          if ((*param_1 >> 2 & 1) != 0) {
            if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) && ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)
               ) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            lVar10 = *(longlong *)(lVar9 + 0xc0);
            piVar3 = *(int **)(lVar9 + 600);
            if (lVar10 == 0) {
LAB_1428c44c2:
              piVar11 = (int *)0x0;
            }
            else {
              iVar1 = *(int *)(lVar10 + 0x180);
              if ((iVar1 < 0) || (*(int *)(lVar10 + 0x178) <= iVar1)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_1428c44c2;
              piVar11 = (int *)((longlong)iVar1 * 0x80 + *(longlong *)(lVar10 + 0x170));
            }
            if ((piVar11 == (int *)0x0) || (piVar3 == piVar11)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar4) || (bVar4 = false, bVar5)) {
              bVar4 = true;
            }
            if ((!bVar6) || (!bVar4)) goto LAB_1428c4549;
          }
          lVar9 = ULevel::GetWorld(lVar9);
          if (lVar9 == lVar2) {
            lVar9 = AActor::GetLevel(lVar14);
            if (lVar9 == *(longlong *)(lVar2 + 0x30)) {
LAB_1428c4584:
              param_1[8] = uVar13;
              *(longlong *)(param_1 + 0xc) = lVar14;
              return;
            }
            lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_1428c4584;
          }
        }
      }
LAB_1428c4549:
      uVar13 = uVar13 + 1;
      uVar8 = param_1[6];
      lVar15 = lVar15 + 8;
    } while ((int)uVar13 < (int)(param_1[0x10] + uVar8));
  }
  *(byte *)(param_1 + 9) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1428c45c0 FUN_1428c45c0 body=73 status=ok
// SIG undefined FUN_1428c45c0(void)

longlong FUN_1428c45c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x520);
  }
  return param_1;
}



// FUNCTION 1428c4610 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FFixupSmartPointersForPIEArchive::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1428c4680 FUN_1428c4680 body=126 status=ok
// SIG undefined FUN_1428c4680(void)

undefined8 * FUN_1428c4680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451edfd8;
  FVolumeTextureBulkData::~FVolumeTextureBulkData(param_1 + 0x16);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x14);
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1428c4700 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVolumeTextureBulkData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FVolumeTextureBulkData();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1428c4740 FUN_1428c4740 body=62 status=ok
// SIG undefined FUN_1428c4740(void)

undefined8 * FUN_1428c4740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451ef0c8;
  FUN_14271e9f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 1428c4780 `scalar_deleting_destructor' body=202 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVorbisAudioInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  BOOL BVar2;
  bool bVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451ef240;
  LOCK();
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(param_1 + 4) = 0;
  }
  UNLOCK();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    LOCK();
    bVar3 = DAT_146b196d4 == 0;
    if (bVar3) {
      DAT_146b196d4 = 0;
    }
    UNLOCK();
    if (!bVar3) {
      ::_guard_xfg_dispatch_icall_nop(lVar1);
    }
    FMemory::operator_delete(lVar1,0x348);
  }
  param_1[1] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *param_1 = &PTR_FUN_145010830;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1428c4850 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FWorldTilesGatherer();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1428c4890 FUN_1428c4890 body=205 status=ok
// SIG undefined FUN_1428c4890(void)

undefined8 * FUN_1428c4890(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1451ed890;
  param_1[5] = &PTR_LAB_1451edca8;
  if ((*(byte *)((longlong)param_1 + 0x1ac) & 1) != 0) {
    FUN_1428d4280(&DAT_146535880,param_1 + 0x32);
    *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) & 0xfe;
  }
  param_1[0x32] = &PTR_FUN_143f73d18;
  plVar4 = (longlong *)param_1[0x34];
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
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1428c4960 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FDockTabStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x700);
  }
  return param_1;
}



// FUNCTION 1428c49a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UTTLCatchableActorComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1428c3730();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x988);
  }
  return param_1;
}



// FUNCTION 1428c49e0 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UWorldComposition::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TArray<FWorldCompositionTile,FDefaultAllocator>::~TArray<FWorldCompositionTile,FDefaultAllocator>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1428c4a40 FUN_1428c4a40 body=74 status=ok
// SIG undefined FUN_1428c4a40(void)

void FUN_1428c4a40(longlong param_1)

{
  longlong lVar1;
  
  FUN_14232c410();
  if ((*(byte *)(param_1 + 0xb8) & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001428c4a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x1a0))(*(longlong **)(lVar1 + 0x1b8),param_1);
    return;
  }
  return;
}



// FUNCTION 1428c4a90 AddController body=430 status=ok
// SIG undefined AddController(void)

void UWorld::AddController(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  plVar1 = (longlong *)(param_1 + 0x1c8);
  lVar6 = *plVar1;
  iVar3 = *(int *)(param_1 + 0x1d0);
  for (lVar7 = lVar6; lVar7 != lVar6 + (longlong)iVar3 * 8; lVar7 = lVar7 + 8) {
    cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res8);
    if (cVar5 != '\0') {
      if ((int)(lVar7 - lVar6 >> 3) != -1) goto LAB_1428c4b28;
      break;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1d0);
  *(int *)(param_1 + 0x1d0) = iVar3 + 1;
  if (*(int *)(param_1 + 0x1d4) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar6 = *plVar1;
  *(undefined4 *)(lVar6 + (longlong)iVar3 * 8) = local_res8;
  *(undefined4 *)(lVar6 + (longlong)iVar3 * 8 + 4) = local_resc;
LAB_1428c4b28:
  if (param_2 != 0) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        param_2 = 0;
      }
      FWeakObjectPtr::operator=(&local_res8,param_2);
      plVar1 = (longlong *)(param_1 + 0x1d8);
      lVar6 = *plVar1;
      iVar3 = *(int *)(param_1 + 0x1e0);
      for (lVar7 = lVar6; lVar7 != lVar6 + (longlong)iVar3 * 8; lVar7 = lVar7 + 8) {
        cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res8);
        if (cVar5 != '\0') {
          if ((int)(lVar7 - lVar6 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      iVar3 = *(int *)(param_1 + 0x1e0);
      *(int *)(param_1 + 0x1e0) = iVar3 + 1;
      if (*(int *)(param_1 + 0x1e4) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 8);
      *puVar2 = local_res8;
      puVar2[1] = local_resc;
    }
  }
  return;
}



// FUNCTION 1428c4c40 FUN_1428c4c40 body=60 status=ok
// SIG undefined FUN_1428c4c40(void)

void FUN_1428c4c40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  iVar1 = TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x858,local_res10);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x704) = 1;
    FUN_1428ca870(param_1);
    return;
  }
  return;
}



// FUNCTION 1428c4c80 FUN_1428c4c80 body=66 status=ok
// SIG undefined FUN_1428c4c80(void)

void FUN_1428c4c80(longlong param_1,longlong param_2)

{
  longlong local_res10;
  undefined1 local_res18 [16];
  
  if (param_2 != 0) {
    local_res10 = param_2;
    FUN_141b1d480(param_1 + 0x28,local_res18,&local_res10,0);
    *(longlong *)(param_2 + 600) = param_1;
  }
  return;
}



// FUNCTION 1428c4cd0 AddLevel body=63 status=ok
// SIG undefined AddLevel(void)

undefined1 UWorld::AddLevel(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x160,local_res10);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x548);
    return 1;
  }
  return 0;
}



// FUNCTION 1428c4d10 FUN_1428c4d10 body=353 status=ok
// SIG undefined FUN_1428c4d10(void)

void FUN_1428c4d10(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      lVar3 = AActor::GetLevel(param_2);
      plVar6 = *(longlong **)(param_1 + 0x160);
      plVar5 = plVar6;
      if (plVar6 != plVar6 + *(int *)(param_1 + 0x168)) {
        while (*plVar5 != lVar3) {
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar6 + *(int *)(param_1 + 0x168)) {
            return;
          }
        }
        if (((((int)((longlong)plVar5 - (longlong)plVar6 >> 3) != -1) && (DAT_146b17150 != 0)) &&
            (param_1 != 0)) && (lVar3 = FUN_1428761d0(DAT_146b17150,param_1), lVar3 != 0)) {
          plVar6 = *(longlong **)(lVar3 + 0x248);
          plVar5 = plVar6 + (longlong)*(int *)(lVar3 + 0x250) * 2;
          for (; plVar6 != plVar5; plVar6 = plVar6 + 2) {
            if (*plVar6 != 0) {
              FUN_1425b24c0(*plVar6,param_2);
            }
          }
          plVar6 = *(longlong **)(lVar3 + 0x290);
          plVar5 = plVar6 + (longlong)*(int *)(lVar3 + 0x298) * 2;
          for (; plVar6 != plVar5; plVar6 = plVar6 + 2) {
            if (*plVar6 != 0) {
              FUN_1425b24c0(*plVar6,param_2);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1428c4e80 AddOnActorSpawnedHandler body=234 status=ok
// SIG undefined AddOnActorSpawnedHandler(void)

/* WARNING: Removing unreachable block (ram,0x0001428c4f59) */

undefined8 *
UWorld::AddOnActorSpawnedHandler(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  uVar5 = 0;
  plVar1 = (longlong *)(param_1 + 0x3e0);
  *param_2 = 0;
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res8);
      uVar5 = *puVar4;
    }
    iVar2 = *(int *)(param_1 + 1000);
    *(int *)(param_1 + 1000) = iVar2 + 1;
    if (*(int *)(param_1 + 0x3ec) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *param_2 = uVar5;
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    *(int *)(puVar4 + 1) = local_20;
  }
  return param_2;
}



// FUNCTION 1428c4f70 FUN_1428c4f70 body=480 status=ok
// SIG undefined FUN_1428c4f70(void)

void FUN_1428c4f70(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  
  plVar2 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar6 = plVar2[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar6 = plVar2[0x1f];
  }
  FUN_140c124f0(lVar6 + 0x50,&local_38);
  puVar3 = (undefined8 *)FUN_1428cc8c0(param_1,local_28);
  puVar7 = &DAT_143f3eda8;
  puVar8 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar8 = local_38;
  }
  if (*(int *)(puVar3 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar3;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (iVar1 != 0) {
    uVar9 = 0;
    iVar1 = -1;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      plVar2 = *(longlong **)(param_1 + 0x198);
      uVar10 = uVar9;
      do {
        iVar1 = (int)uVar10;
        if (*(longlong *)(*plVar2 + 0x30) == param_2) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar9 = uVar9 + 1;
        plVar2 = plVar2 + 1;
        iVar1 = -1;
      } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x1a0));
    }
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
    uVar4 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
    UMaterialParameterCollectionInstance::SetCollection(uVar4,param_2,param_1);
    plVar2 = (longlong *)(param_1 + 0x198);
    if (iVar1 == -1) {
      iVar1 = *(int *)(param_1 + 0x1a0);
      *(int *)(param_1 + 0x1a0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x1a4) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar4;
    }
    else {
      *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = uVar4;
    }
    if (param_3 != '\0') {
      FUN_1428dba00(param_1,0,0);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 1428c5150 AddPawn body=171 status=ok
// SIG undefined AddPawn(void)

void UWorld::AddPawn(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  plVar6 = (longlong *)(param_1 + 0x1e8);
  lVar3 = *plVar6;
  iVar2 = *(int *)(param_1 + 0x1f0);
  lVar5 = lVar3;
  do {
    if (lVar5 == lVar3 + (longlong)iVar2 * 8) {
LAB_1428c51b8:
      iVar2 = *(int *)(param_1 + 0x1f0);
      *(int *)(param_1 + 0x1f0) = iVar2 + 1;
      if (*(int *)(param_1 + 500) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      return;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res8);
    if (cVar4 != '\0') {
      if ((int)(lVar5 - lVar3 >> 3) != -1) {
        return;
      }
      goto LAB_1428c51b8;
    }
    lVar5 = lVar5 + 8;
  } while( true );
}



// FUNCTION 1428c5200 AddPhysicsVolume body=152 status=ok
// SIG undefined AddPhysicsVolume(void)

void UWorld::AddPhysicsVolume(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    lVar4 = FUN_142923b20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return;
    }
  }
  FWeakObjectPtr::operator=(&local_res10,param_2);
  iVar2 = *(int *)(param_1 + 0x210);
  *(int *)(param_1 + 0x210) = iVar2 + 1;
  if (*(int *)(param_1 + 0x214) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x208),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar2 * 8);
  *puVar1 = local_res10;
  puVar1[1] = local_res14;
  return;
}



// FUNCTION 1428c52a0 AddStreamingLevel body=169 status=ok
// SIG undefined AddStreamingLevel(void)

void UWorld::AddStreamingLevel(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  if (((param_2 != 0) &&
      (local_res10 = param_2, lVar3 = ULevelStreaming::GetWorld(param_2), lVar3 == param_1)) &&
     (*(char *)(param_2 + 0xb4) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = iVar1 + 1;
    if (*(int *)(param_1 + 0x94) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = param_2;
    ULevelStreaming::OnLevelAdded(param_2);
    cVar2 = FUN_142543c80(param_2);
    if (cVar2 != '\0') {
      FUN_14058c900(param_1 + 0x98,local_res18,&local_res10,0);
    }
  }
  return;
}



// FUNCTION 1428c5350 AddStreamingLevels body=254 status=ok
// SIG undefined AddStreamingLevels(void)

void UWorld::AddStreamingLevels(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  uVar5 = 0;
  plVar7 = (longlong *)*param_2;
  uVar6 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar7 + (int)param_2[1] < plVar7) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      lVar2 = *plVar7;
      if (((lVar2 != 0) &&
          (local_res18 = lVar2, lVar4 = ULevelStreaming::GetWorld(lVar2), lVar4 == param_1)) &&
         (*(char *)(lVar2 + 0xb4) == '\0')) {
        iVar1 = *(int *)(param_1 + 0x90);
        *(int *)(param_1 + 0x90) = iVar1 + 1;
        if (*(int *)(param_1 + 0x94) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x88,iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = lVar2;
        ULevelStreaming::OnLevelAdded(lVar2);
        cVar3 = FUN_142543c80(lVar2);
        if (cVar3 != '\0') {
          FUN_14058c900(param_1 + 0x98,local_res10,&local_res18,0);
        }
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 1428c5450 FUN_1428c5450 body=1420 status=ok
// SIG undefined FUN_1428c5450(void)

void FUN_1428c5450(longlong param_1,LARGE_INTEGER param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined1 local_res20 [8];
  longlong *local_78;
  int local_70;
  
  *(byte *)(param_2.QuadPart + 0x205) = *(byte *)(param_2.QuadPart + 0x205) | 0x10;
  local_res10 = param_2;
  QueryPerformanceCounter(&local_res8);
  lVar8 = *(longlong *)(param_1 + 0xf8);
  dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
  if ((lVar8 == param_2.QuadPart) || (lVar8 == 0)) {
    bVar3 = true;
    if ((lVar8 == 0) && (*(longlong *)(param_1 + 0x100) != param_2.QuadPart)) {
      *(longlong *)(param_2.QuadPart + 0xc0) = param_1;
      ((LARGE_INTEGER *)(param_1 + 0xf8))->QuadPart = (LONGLONG)param_2;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x160,&local_res10);
    }
  }
  else {
    bVar3 = false;
  }
  if ((((*(byte *)(param_1 + 0x830) & 0x40) == 0) || (6 < *(uint *)(param_1 + 0x708))) ||
     ((0x6aU >> (*(uint *)(param_1 + 0x708) & 0x1f) & 1) == 0)) {
    param_4 = '\0';
  }
  dVar1 = (double)DAT_146531e9c;
  if (((param_4 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
     ((lVar8 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),0), lVar8 != 0 &&
      (((*(byte *)(lVar8 + 0x608) & 3) != 0 ||
       (pcVar9 = (char *)FUN_14288cc20(DAT_146b17150,param_1), *pcVar9 != '\0')))))) {
    dVar1 = dVar1 + (double)DAT_146531ea0;
  }
  if (bVar3) {
    bVar6 = *(byte *)(param_2.QuadPart + 0x204);
    if ((bVar6 & 0x20) == 0) {
      FUN_142540020(param_2.QuadPart,param_3,0);
      *(byte *)(param_2.QuadPart + 0x204) = *(byte *)(param_2.QuadPart + 0x204) | 0x20;
      if ((param_4 == '\0') ||
         (QueryPerformanceCounter(&local_res10),
         ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0 <= dVar1)) {
        bVar6 = *(byte *)(param_2.QuadPart + 0x204);
        bVar3 = true;
        goto LAB_1428c55d3;
      }
LAB_1428c572e:
      bVar3 = false;
    }
    else {
LAB_1428c55d3:
      if ((bVar6 & 0x40) == 0) {
        if (*(longlong *)(param_1 + 0x7e0) != 0) {
          UWorldComposition::OnLevelAddedToWorld(*(longlong *)(param_1 + 0x7e0),param_2.QuadPart);
          bVar6 = *(byte *)(param_2.QuadPart + 0x204);
        }
        *(byte *)(param_2.QuadPart + 0x204) = bVar6 | 0x40;
        if ((param_4 != '\0') &&
           (QueryPerformanceCounter(&local_res10),
           dVar1 < ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0))
        goto LAB_1428c572e;
        bVar6 = *(byte *)(param_2.QuadPart + 0x204);
        bVar3 = true;
      }
      if (-1 < (char)bVar6) {
        local_res20[0] = 1;
        *(byte *)(param_2.QuadPart + 0x204) = bVar6 & 0xfe;
        FConfigCacheIni::GetBool
                  (DAT_1468b6148,L"Kismet",L"bRerunConstructionDuringEditorStreaming",local_res20,
                   &DAT_1468e2360);
        uVar5 = DAT_146531ea4;
        do {
          cVar7 = UWorld::IsGameWorld(param_1);
          if ((cVar7 == '\0') || (uVar13 = uVar5, DAT_1468b616c != '\0')) {
            uVar13 = 0;
          }
          FUN_14252b270(param_2.QuadPart,uVar13,0);
          bVar6 = *(byte *)(param_2.QuadPart + 0x204);
          if ((bVar6 & 1) != 0) goto LAB_1428c56e7;
        } while ((param_4 == '\0') ||
                (QueryPerformanceCounter(&local_res10),
                ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0 <= dVar1));
        bVar6 = *(byte *)(param_2.QuadPart + 0x204);
LAB_1428c56e7:
        *(byte *)(param_2.QuadPart + 0x204) = bVar6 & 0x7f | bVar6 << 7;
        if (((bVar6 & 1) == 0) ||
           ((param_4 != '\0' &&
            (QueryPerformanceCounter(&local_res10),
            dVar1 < ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0))))
        goto LAB_1428c572e;
        bVar3 = true;
      }
    }
  }
  if ((((*(uint *)(param_1 + 0x708) < 7) &&
       ((0x6aU >> (*(uint *)(param_1 + 0x708) & 0x1f) & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x830) & 0x10) != 0)) &&
     ((*(longlong *)(param_1 + 0x30) != 0 && (*(int *)(*(longlong *)(param_1 + 0x30) + 0xa8) != 0)))
     ) {
    bVar4 = false;
    if (bVar3) {
      if ((*(byte *)(param_2.QuadPart + 0x205) & 2) == 0) {
        FUN_14252b9f0(param_2.QuadPart);
        *(byte *)(param_2.QuadPart + 0x205) = *(byte *)(param_2.QuadPart + 0x205) | 2;
        if ((param_4 != '\0') &&
           (QueryPerformanceCounter(&local_res10),
           dVar1 < ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0)) {
          bVar4 = false;
          goto LAB_1428c5852;
        }
      }
      if ((*(byte *)(param_2.QuadPart + 0x205) & 4) == 0) {
        *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) | 0x200;
        FUN_142535db0(param_2.QuadPart);
        *(byte *)(param_2.QuadPart + 0x205) = *(byte *)(param_2.QuadPart + 0x205) | 4;
        *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xfffffdff;
        if ((param_4 != '\0') &&
           (QueryPerformanceCounter(&local_res10),
           dVar1 < ((double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0)) {
          bVar4 = false;
          goto LAB_1428c5852;
        }
      }
      bVar4 = false;
      if ((*(byte *)(param_2.QuadPart + 0x205) & 8) == 0) {
        FUN_1425399c0(param_2.QuadPart);
        *(byte *)(param_2.QuadPart + 0x205) = *(byte *)(param_2.QuadPart + 0x205) | 8;
        if (param_4 != '\0') {
          QueryPerformanceCounter(&local_res10);
        }
        goto LAB_1428c5850;
      }
    }
  }
  else {
LAB_1428c5850:
    bVar4 = true;
  }
LAB_1428c5852:
  *(byte *)(param_2.QuadPart + 0x205) = *(byte *)(param_2.QuadPart + 0x205) & 0xef;
  if (!bVar4) {
    return;
  }
  *(byte *)(param_2.QuadPart + 0x204) = *(byte *)(param_2.QuadPart + 0x204) & 0x3f;
  *(byte *)(param_2.QuadPart + 0x205) = *(byte *)(param_2.QuadPart + 0x205) & 0xf1;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if ((*(byte *)(param_2.QuadPart + 0x205) & 0x40) == 0) {
    UEngine::GetLocalPlayerIterator(DAT_146b17150,&local_78,param_1);
    for (; -1 < local_70; local_70 = local_70 + 1) {
      if (((int)local_78[1] <= local_70) || (*(longlong *)(*local_78 + (longlong)local_70 * 8) != 0)
         ) goto LAB_1428c58c1;
    }
  }
LAB_1428c595e:
  *(byte *)(param_2.QuadPart + 0x204) = *(byte *)(param_2.QuadPart + 0x204) | 0x10;
  FUN_14252bcf0(param_2.QuadPart);
  plVar12 = (longlong *)IStreamingManager::Get();
  (**(code **)(*plVar12 + 0x48))(plVar12,param_2.QuadPart);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
            (&DAT_1465357f0,param_2.QuadPart,param_1);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x548);
  lVar8 = UObjectBaseUtility::GetOutermost(param_2.QuadPart);
  FUN_142540ff0(param_1,*(undefined8 *)(lVar8 + 0x18),1);
  return;
LAB_1428c58c1:
  while ((-1 < local_70 && (local_70 < (int)local_78[1]))) {
    lVar8 = UPlayer::GetPlayerController
                      (*(undefined8 *)(*local_78 + (longlong)local_70 * 8),param_1);
    if (lVar8 != 0) {
      if (*(longlong *)(param_2.QuadPart + 0xc0) == 0) {
        local_res10.QuadPart = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*(longlong *)(param_2.QuadPart + 0xc0) + 0x18);
      }
      lVar10 = UObjectBaseUtility::GetOutermost(param_2.QuadPart);
      puVar11 = (undefined8 *)
                APlayerController::NetworkRemapPath
                          (lVar8,&local_res8,*(undefined8 *)(lVar10 + 0x18),0);
      FUN_1429e20c0(lVar8,*puVar11,uVar14);
    }
    do {
      local_70 = local_70 + 1;
      if (local_70 < 0) goto LAB_1428c595e;
    } while ((local_70 < (int)local_78[1]) &&
            (*(longlong *)(*local_78 + (longlong)local_70 * 8) == 0));
  }
  goto LAB_1428c595e;
}



// FUNCTION 1428c59e0 FUN_1428c59e0 body=157 status=ok
// SIG undefined FUN_1428c59e0(void)

void FUN_1428c59e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar3 + 1;
    if (*(int *)(param_1 + 0x74) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x68),iVar3);
    }
    plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x68));
    *plVar5 = *param_2;
    lVar4 = param_2[1];
    plVar5[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
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



// FUNCTION 1428c5a80 AddWeighted body=111 status=ok
// SIG undefined AddWeighted(void)

void FWindData::AddWeighted(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  *param_1 = param_3 * *param_2 + *param_1;
  param_1[1] = param_3 * param_2[1] + param_1[1];
  param_1[2] = param_3 * param_2[2] + param_1[2];
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  param_1[3] = param_3 * param_2[3] + param_1[3];
  param_1[4] = fVar1 * param_3 + param_1[4];
  param_1[5] = fVar2 * param_3 + param_1[5];
  return;
}



// FUNCTION 1428c5af0 FUN_1428c5af0 body=12 status=ok
// SIG undefined FUN_1428c5af0(void)

uint FUN_1428c5af0(longlong param_1)

{
  return *(uint *)(param_1 + 0x830) >> 0xe & 0xffffff01;
}



// FUNCTION 1428c5b00 FUN_1428c5b00 body=376 status=ok
// SIG undefined FUN_1428c5b00(void)

ulonglong FUN_1428c5b00(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint7 uVar8;
  ulonglong *puVar7;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  puVar7 = (ulonglong *)(ulonglong)uVar1;
  if (((6 < uVar1) || ((0x6aU >> (uVar1 & 0x1f) & 1) == 0)) || (*(int *)(param_1 + 0x7e8) == 1))
  goto LAB_1428c5c66;
  if ((DAT_146531eb4 == 0) || (DAT_146b19a78 < 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar4 = FUN_1428761d0(DAT_146b17150,param_1);
  uVar10 = 0;
  iVar11 = 0;
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x238) == 0)) {
LAB_1428c5bb6:
    bVar2 = false;
  }
  else {
    lVar4 = FUN_1428761d0(DAT_146b17150,param_1);
    uVar5 = uVar10;
    if (lVar4 != 0) {
      uVar5 = *(ulonglong *)(lVar4 + 0x238);
    }
    if (((*(byte *)(uVar5 + 0x7c) & 4) != 0) || (*(float *)(param_1 + 0x790) <= 1.0))
    goto LAB_1428c5bb6;
    bVar2 = true;
  }
  uVar6 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
  uVar8 = (uint7)((ulonglong)uVar6 >> 8);
  if (((char)uVar6 == '\0') || (!bVar2)) {
    puVar7 = (ulonglong *)((ulonglong)uVar8 << 8);
  }
  else {
    puVar7 = (ulonglong *)CONCAT71(uVar8,1);
  }
  if (((!bVar3) && (*(int *)(param_1 + 0x7e8) != 2)) &&
     (((char)puVar7 == '\0' || (DAT_146531ebc != 0)))) {
    if ((0 < DAT_146af1034) && (bVar2)) {
      puVar9 = *(ulonglong **)(param_1 + 0x88);
      puVar7 = puVar9 + *(int *)(param_1 + 0x90);
      uVar5 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
      if (puVar7 < puVar9) {
        uVar5 = uVar10;
      }
      uVar12 = uVar10;
      if (uVar5 != 0) {
        do {
          puVar7 = (ulonglong *)*puVar9;
          if ((puVar7 != (ulonglong *)0x0) && (*(char *)((longlong)puVar7 + 0xb4) == '\x03')) {
            uVar12 = (ulonglong)((int)uVar12 + 1);
          }
          iVar11 = (int)uVar12;
          puVar9 = puVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar5);
      }
      if (DAT_146af1034 <= iVar11) goto LAB_1428c5c54;
    }
LAB_1428c5c66:
    return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
  }
LAB_1428c5c54:
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 1428c5c80 ApplyWorldOffset body=49 status=ok
// SIG undefined ApplyWorldOffset(void)

void FWindSourceSceneProxy::ApplyWorldOffset(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0xb) != '\0') {
    fVar1 = param_2[1];
    *param_1 = *param_2 + *param_1;
    fVar2 = param_2[2];
    param_1[1] = fVar1 + param_1[1];
    param_1[2] = fVar2 + param_1[2];
  }
  return;
}



// FUNCTION 1428c5cc0 FUN_1428c5cc0 body=33 status=ok
// SIG undefined FUN_1428c5cc0(void)

ulonglong FUN_1428c5cc0(longlong param_1)

{
  ulonglong in_RAX;
  
  if ((((*(byte *)(param_1 + 0x830) & 0x10) != 0) &&
      (in_RAX = *(ulonglong *)(param_1 + 0x30), in_RAX != 0)) && (*(int *)(in_RAX + 0xa8) != 0)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428c5cf0 FUN_1428c5cf0 body=158 status=ok
// SIG undefined FUN_1428c5cf0(void)

undefined8 FUN_1428c5cf0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x88);
  plVar1 = plVar6 + *(int *)(param_1 + 0x90);
  while( true ) {
    if (plVar6 == plVar1) {
      return 1;
    }
    plVar2 = (longlong *)*plVar6;
    if (((plVar2 != (longlong *)0x0) &&
        (cVar4 = (**(code **)(*plVar2 + 0x290))(plVar2), cVar4 != '\0')) &&
       ((*(char *)((longlong)plVar2 + 0xb4) == '\x03' ||
        ((lVar3 = plVar2[0x24], lVar3 == 0 ||
         (bVar5 = (**(code **)(*plVar2 + 0x288))(plVar2),
         (*(byte *)(lVar3 + 0x204) >> 4 & 1) != bVar5)))))) break;
    plVar6 = plVar6 + 1;
  }
  return 0;
}



// FUNCTION 1428c5d90 FUN_1428c5d90 body=588 status=ok
// SIG undefined FUN_1428c5d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428c5d90(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  int local_e8;
  uint uStack_e4;
  uint *puStack_e0;
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
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  uint local_68 [4];
  uint *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_1417502d0();
  lVar5 = *(longlong *)(param_1 + 0x170);
  lVar8 = (longlong)*(int *)(param_1 + 0x178) * 0x80 + lVar5;
  if (lVar5 != lVar8) {
    lVar6 = lVar5 + 0x28;
    do {
      local_78[0] = 0;
      local_78[1] = 0;
      local_58 = (uint *)0x0;
      local_50 = 0;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      operator=(local_78,lVar6);
      iVar3 = (int)local_50;
      puStack_e0 = local_68;
      local_e8 = 0;
      uStack_e4 = 1;
      iStack_d4 = 0;
      iStack_d0 = 0;
      if ((int)local_50 != 0) {
        puVar7 = local_68;
        if (local_58 != (uint *)0x0) {
          puVar7 = local_58;
        }
        uVar1 = *puVar7;
        iStack_d0 = 0;
        local_e8 = 0;
        while (uVar1 == 0) {
          iStack_d0 = iStack_d0 + 0x20;
          if ((int)((int)local_50 + -1 + ((int)local_50 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_e8) {
            iStack_d4 = (int)local_50;
            local_e8 = local_e8 + 1;
            goto LAB_1428c5ed9;
          }
          uVar1 = puVar7[(longlong)local_e8 + 1];
          local_e8 = local_e8 + 1;
        }
        uStack_e4 = -uVar1 & uVar1;
        iVar4 = 0x1f;
        if (uStack_e4 != 0) {
          for (; uStack_e4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_e4 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        iStack_d4 = (iStack_d0 - iVar4) + 0x1f;
        if ((int)local_50 < iStack_d4) {
          iStack_d4 = (int)local_50;
        }
      }
LAB_1428c5ed9:
      uStack_b0 = CONCAT44(iStack_d4,0xffffffff);
      local_a8 = CONCAT44(uStack_cc,iStack_d0);
      local_a0 = local_78;
      uStack_98 = CONCAT44(uStack_e4,local_e8);
      iStack_d4 = (int)local_50;
      local_d8 = -1 << ((byte)local_50 & 0x1f);
      iStack_c0 = local_e8;
      uStack_bc = uStack_e4;
      local_b8 = puStack_e0;
      puStack_90 = puStack_e0;
      uStack_88 = uStack_b0;
      uStack_80 = local_a8;
      local_c8 = local_a0;
      while( true ) {
        if (((uStack_b0._4_4_ == iVar3) && (local_b8 == local_68)) && (local_c8 == local_78)) break;
        lVar2 = *(longlong *)(*local_c8 + (longlong)uStack_b0._4_4_ * 0x10);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 600) = 0;
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar6);
        }
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
      }
      local_30 = 0;
      if (local_38 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_78);
      lVar5 = lVar5 + 0x80;
      lVar6 = lVar6 + 0x80;
    } while (lVar5 != lVar8);
  }
  return;
}



// FUNCTION 1428c5fe0 FUN_1428c5fe0 body=182 status=ok
// SIG undefined FUN_1428c5fe0(void)

void FUN_1428c5fe0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x978) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar1 = UMobileInstalledContent::GetPrivateStaticClass();
    uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x978) = uVar1;
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146535868,param_1);
  if (DAT_146b17150 != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(DAT_146b17150 + 0xba8,param_1);
  }
  if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x770))();
  }
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_1 + 0x790);
  return;
}



// FUNCTION 1428c60a0 FUN_1428c60a0 body=697 status=ok
// SIG undefined FUN_1428c60a0(void)

undefined8 * FUN_1428c60a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar13;
  uint uVar14;
  wchar_t *pwVar15;
  wchar_t *_Src_00;
  wchar_t *pwVar16;
  bool bVar17;
  wchar_t *local_78;
  ulonglong local_70;
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  void *local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  int iVar11;
  wchar_t *pwVar12;
  
  local_50 = *(uint *)(param_3 + 1);
  lVar8 = (longlong)(int)local_50;
  pwVar12 = (wchar_t *)0x0;
  iVar11 = 0;
  uVar10 = 0;
  iVar4 = 0;
  _Src = (void *)*param_3;
  local_58 = (void *)0x0;
  if (local_50 == 0) {
    local_4c = 0;
    pwVar15 = pwVar12;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 * 2);
    pwVar15 = (wchar_t *)(ulonglong)local_4c;
  }
  uVar14 = (uint)pwVar15;
  local_48 = 0;
  iVar2 = FUN_141592950(param_3,L"_LOD",1,1,0xffffffff);
  if (iVar2 != -1) {
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      pwVar16 = L"";
      iVar3 = iVar4;
    }
    else {
      pwVar16 = (wchar_t *)*param_3;
      iVar11 = iVar3 + -1;
      iVar3 = iVar3 + -1;
    }
    iVar3 = (iVar11 - iVar3) + iVar2;
    if ((-1 < iVar3) && (iVar4 = iVar11, iVar3 < iVar11)) {
      iVar4 = iVar3;
    }
    local_78 = (wchar_t *)0x0;
    uVar9 = iVar4 + 1;
    if (iVar4 == 0) {
      uVar9 = uVar10;
    }
    local_70 = (ulonglong)uVar9;
    _Src_00 = pwVar12;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      _Src_00 = local_78;
      uVar9 = (uint)local_70;
      if (0 < (int)(uint)local_70) {
        wcsncpy(local_78,pwVar16,(longlong)iVar4);
        _Src_00[iVar4] = L'\0';
      }
    }
    local_78 = (wchar_t *)0x0;
    local_70 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"_LOD",10);
    pwVar16 = (wchar_t *)(ulonglong)((uint)local_70 - 1);
    if ((uint)local_70 == 0) {
      pwVar16 = pwVar12;
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
      uVar5 = uVar10;
    }
    else {
      puVar13 = (undefined2 *)*param_3;
      uVar5 = *(int *)(param_3 + 1) - 1;
    }
    uVar6 = (uVar5 - (int)pwVar16) - iVar2;
    uVar7 = uVar10;
    if ((-1 < (int)uVar6) && (uVar7 = uVar5, (int)uVar6 < (int)uVar5)) {
      uVar7 = uVar6;
    }
    local_68 = (wchar_t *)0x0;
    local_5c = 0;
    psVar1 = puVar13 + ((longlong)(int)uVar5 - (longlong)(int)uVar7);
    uVar5 = uVar10;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar1[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_60 = uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      uVar5 = local_60;
      pwVar12 = local_68;
      FGenericPlatformString::Memcpy(local_68,psVar1,(longlong)(int)uVar7 * 2);
    }
    if (local_78 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar16 = L"";
    if (uVar5 != 0) {
      pwVar16 = pwVar12;
    }
    iVar4 = _wtoi(pwVar16);
    if (iVar4 - 1U < 4) {
      local_50 = uVar9;
      if ((uVar9 != 0) || (bVar17 = uVar14 != 0, uVar14 = uVar10, bVar17)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,uVar9,pwVar15);
        _guard_xfg_dispatch_icall_nop(local_58,_Src_00,(longlong)(int)uVar9 * 2);
        uVar14 = local_4c;
      }
    }
    else {
      iVar4 = -1;
    }
    if (pwVar12 != (wchar_t *)0x0) {
      FMemory::Free(pwVar12);
    }
    if (_Src_00 != (wchar_t *)0x0) {
      FMemory::Free(_Src_00);
    }
  }
  *param_2 = local_58;
  *(uint *)(param_2 + 1) = local_50;
  *(uint *)((longlong)param_2 + 0xc) = uVar14;
  *(int *)(param_2 + 2) = iVar4;
  return param_2;
}



// FUNCTION 1428c6360 Broadcast body=180 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,UWorld_*,UWorld::InitializationValues_const_>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1428c63c7:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1428c63c7;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1428c6420 Broadcast body=198 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,UWorld_*,bool,bool>::Broadcast
               (longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1428c6498:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1428c6498;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1428c64f0 FUN_1428c64f0 body=222 status=ok
// SIG undefined FUN_1428c64f0(void)

void FUN_1428c64f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x9fc) = *(int *)(param_1 + 0x9fc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x9fc);
  iVar5 = *(int *)(param_1 + 0x9f0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x9e8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1428c657b:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1428c657b;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x9fc);
  }
  *(int *)(param_1 + 0x9fc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x9e8),0);
    return;
  }
  return;
}



// FUNCTION 1428c65d0 BuildPIEPackagePrefix body=40 status=ok
// SIG undefined BuildPIEPackagePrefix(void)

undefined8 UWorld::BuildPIEPackagePrefix(undefined8 param_1,undefined4 param_2)

{
  FString::PrintfImpl(param_1,L"%s_%d_",L"UEDPIE",param_2);
  return param_1;
}



// FUNCTION 1428c6600 FUN_1428c6600 body=1155 status=ok
// SIG undefined FUN_1428c6600(void)

void FUN_1428c6600(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined8 local_res10;
  longlong local_res18;
  void *local_res20;
  undefined2 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined2 *local_100;
  int local_f8;
  int local_f4;
  longlong local_f0 [2];
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_70;
  
  uVar6 = FPlatformFileManager::Get();
  plVar7 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar6);
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  (**(code **)(*plVar7 + 0x128))(plVar7,puVar10,param_1);
  uVar6 = FUN_1422ca050();
  local_118 = (longlong *)UAssetManager::GetAssetRegistry(uVar6);
  (**(code **)(*local_118 + 0xf0))(local_118,param_1 + 8,0);
  lVar12 = *(longlong *)(param_1 + 8);
  local_108 = (longlong)*(int *)(param_1 + 0x10) * 0x10 + lVar12;
  if (lVar12 != local_108) {
    local_res10 = 0;
    do {
      local_res18 = lVar12;
      FUN_1416f4630(&local_128,lVar12);
      _Src = local_128;
      lVar11 = (longlong)(int)local_120;
      local_148 = (undefined2 *)0x0;
      local_140._0_4_ = (int)local_120;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_148,(2 - (uint)((int)local_120 != 0)) + (int)local_120,0);
      puVar10 = local_148;
      _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar11 * 2);
      iVar5 = (int)local_140;
      lVar11 = (longlong)(int)local_140;
      local_140._0_4_ = (2 - (uint)((int)local_140 != 0)) + (int)local_140;
      iVar13 = local_140._4_4_;
      iVar3 = (int)local_140;
      if (local_140._4_4_ < (int)local_140) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar5);
        puVar10 = local_148;
        iVar13 = local_140._4_4_;
        iVar3 = (int)local_140;
      }
      local_148 = (undefined2 *)0x0;
      lVar11 = lVar11 - (ulonglong)(iVar5 != 0);
      local_140 = 0;
      puVar10[lVar11] = 0x2e;
      puVar10[lVar11 + 1] = 0;
      local_100 = puVar10;
      local_f8 = iVar3;
      local_f4 = iVar13;
      puVar8 = (undefined8 *)FPackageName::GetLongPackageAssetName(local_b8,&local_128);
      if (iVar3 < 2) {
        puVar14 = (undefined2 *)*puVar8;
        *puVar8 = 0;
        iVar13 = *(int *)(puVar8 + 1);
        puVar8[1] = 0;
        puVar9 = puVar10;
      }
      else {
        iVar5 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          iVar5 = 0;
        }
        if ((iVar3 != 0) || (iVar4 = 1, iVar5 == 0)) {
          iVar4 = 0;
        }
        puVar9 = (undefined2 *)0x0;
        local_100 = (undefined2 *)0x0;
        local_138 = puVar10;
        local_130._4_4_ = iVar13;
        if (iVar13 < iVar4 + iVar3 + iVar5) {
          local_130._0_4_ = iVar3;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo();
          iVar3 = (int)local_130;
        }
        local_res20 = (void *)*puVar8;
        puVar14 = local_138;
        iVar13 = iVar3;
        if (iVar5 != 0) {
          iVar13 = iVar5 + (uint)(iVar3 == 0) + iVar3;
          local_130 = CONCAT44(local_130._4_4_,iVar13);
          if (local_130._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,iVar3);
            iVar13 = (int)local_130;
          }
          puVar14 = local_138;
          puVar10 = local_138 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0));
          _guard_xfg_dispatch_icall_nop(puVar10,local_res20,(longlong)iVar5 * 2);
          puVar10[iVar5] = 0;
        }
        local_138 = (undefined2 *)0x0;
        local_130 = 0;
        lVar12 = local_res18;
      }
      puVar10 = &DAT_143f3eda8;
      if (iVar13 != 0) {
        puVar10 = puVar14;
      }
      FName::FName(&local_110,puVar10,1);
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      if (puVar9 != (undefined2 *)0x0) {
        FMemory::Free(puVar9);
      }
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      (**(code **)(*local_118 + 0x48))(local_118,local_a8,local_110,0);
      if ((local_a8[0] != 0) &&
         (lVar11 = UObjectRedirector::GetPrivateStaticClass(),
         local_88 != *(longlong *)(lVar11 + 0x18))) {
        FUN_1428c60a0(param_1);
        if (local_e0 != -1) {
          if (local_e0 == 0) {
            iVar3 = *(int *)(param_1 + 0x20);
            iVar5 = iVar3 + 1;
            *(int *)(param_1 + 0x20) = iVar5;
            if (*(int *)(param_1 + 0x24) < iVar5) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18);
            }
            puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x18));
            *puVar8 = 0;
            *puVar8 = local_128;
            local_128 = (void *)0x0;
            *(int *)(puVar8 + 1) = (int)local_120;
            *(undefined4 *)((longlong)puVar8 + 0xc) = local_120._4_4_;
            local_120 = 0;
          }
          else {
            FUN_1416f9e30(local_c8,local_f0);
            local_d8 = local_c8;
            local_d0 = local_f0;
            FUN_1428c12c0(param_1 + 0x28,&local_res10);
            if (local_c8[0] != 0) {
              FMemory::Free();
            }
          }
        }
        if (local_f0[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      plVar7 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_78)(local_78);
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
      if (local_128 != (void *)0x0) {
        FMemory::Free();
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != local_108);
  }
  return;
}



// FUNCTION 1428c6a90 FUN_1428c6a90 body=757 status=ok
// SIG undefined FUN_1428c6a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428c6a90(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int *piVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar12 = *(longlong **)(param_1 + 0x38);
  local_a0 = plVar12 + (longlong)*(int *)(param_1 + 0x40) * 0x16;
  if (plVar12 == local_a0) {
    return;
  }
  piVar13 = (int *)((longlong)plVar12 + 0x2c);
LAB_1428c6af0:
  piVar13[-2] = DAT_1468b5ca8;
  piVar13[-1] = DAT_1468b5cac;
  *piVar13 = DAT_1468b5cb0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  plVar7 = plVar12;
LAB_1428c6b40:
  uVar9 = 0;
  piVar13[-2] = piVar13[-2] + (int)plVar7[3];
  piVar13[-1] = piVar13[-1] + *(int *)((longlong)plVar7 + 0x1c);
  *piVar13 = *piVar13 + (int)plVar7[4];
  FUN_140800100(&local_88,local_b0,plVar7,0);
  plVar1 = plVar7 + 0x10;
  if ((int)plVar7[0x11] == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*plVar1;
  }
  FName::FName(&local_a8,puVar5,1);
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar8 = *(longlong **)(param_1 + 0x38);
    uVar11 = uVar9;
    do {
      iVar10 = (int)uVar11;
      if (*plVar8 == local_a8) {
LAB_1428c6c7a:
        if (iVar10 != -1) {
          plVar8 = *(longlong **)(param_1 + 0x38) + (longlong)iVar10 * 0x16;
          if ((plVar8 == (longlong *)0x0) || ((int)local_80 == local_54)) goto LAB_1428c6bfa;
          puVar3 = local_50;
          if (local_48 != (undefined1 *)0x0) {
            puVar3 = local_48;
          }
          iVar10 = *(int *)(puVar3 + (longlong)
                                     (int)((int)((ulonglong)local_a8 >> 0x20) + (int)local_a8 &
                                          local_40 - 1U) * 4);
          if (iVar10 == -1) goto LAB_1428c6bfa;
          goto LAB_1428c6cf0;
        }
        break;
      }
      plVar2 = (longlong *)plVar8[1];
      plVar4 = plVar2 + (int)plVar8[2];
      for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
        if (*plVar2 == local_a8) goto LAB_1428c6c7a;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar9 = uVar9 + 1;
      plVar8 = plVar8 + 0x16;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x40));
  }
  plVar8 = (longlong *)0x0;
  goto LAB_1428c6bfa;
  while (iVar10 = *(int *)(local_88 + lVar6 * 0x10 + 8), iVar10 != -1) {
LAB_1428c6cf0:
    lVar6 = (longlong)iVar10;
    if (*(longlong *)(local_88 + lVar6 * 0x10) == local_a8) {
      if ((iVar10 != -1) && (local_88 + lVar6 * 0x10 != 0)) {
        local_b8 = 0;
        plVar8 = (longlong *)0x0;
        plVar4 = (longlong *)FName::ToString(&local_b8,local_98);
        if (plVar1 != plVar4) {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          *plVar1 = *plVar4;
          *plVar4 = 0;
          *(int *)(plVar7 + 0x11) = (int)plVar4[1];
          *(undefined4 *)((longlong)plVar7 + 0x8c) = *(undefined4 *)((longlong)plVar4 + 0xc);
          plVar4[1] = 0;
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
      break;
    }
  }
LAB_1428c6bfa:
  plVar7 = plVar8;
  if (plVar8 == (longlong *)0x0) goto code_r0x0001428c6c03;
  goto LAB_1428c6b40;
code_r0x0001428c6c03:
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  plVar12 = plVar12 + 0x16;
  piVar13 = piVar13 + 0x2c;
  if (plVar12 == local_a0) {
    return;
  }
  goto LAB_1428c6af0;
}



// FUNCTION 1428c6d90 FUN_1428c6d90 body=204 status=ok
// SIG undefined FUN_1428c6d90(void)

undefined8 * FUN_1428c6d90(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x6f0);
  fVar1 = *(float *)(lVar3 + 0x4f8);
  fVar2 = *(float *)(lVar3 + 0x4ec);
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((*(float *)(lVar3 + 0x4f4) - *(float *)(lVar3 + 0x4e8)) * 0.5,
                (*(float *)(lVar3 + 0x4f0) - *(float *)(lVar3 + 0x4e4)) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fVar1 - fVar2) * 0.5;
  fVar1 = *(float *)(lVar3 + 0x4ec);
  *param_2 = CONCAT44(*(float *)(param_2 + 2) + *(float *)(lVar3 + 0x4e8),
                      *(float *)((longlong)param_2 + 0xc) + *(float *)(lVar3 + 0x4e4));
  *(float *)(param_2 + 1) = *(float *)((longlong)param_2 + 0x14) + fVar1;
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 1428c6e60 FUN_1428c6e60 body=218 status=ok
// SIG undefined FUN_1428c6e60(void)

undefined8 FUN_1428c6e60(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  puVar3 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar3 != (undefined4 *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x4b);
    uVar2 = puVar3[3];
    local_res20[0] = 0;
    local_res18[0] = 0;
    local_res8[0] = 0;
    iVar4 = puVar3[6] - param_2;
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    CalcMipMapExtent3D(*puVar3,puVar3[1],puVar3[2] & 0x7fffffff,uVar2,iVar4,local_res20,local_res18,
                       local_res8);
    local_28[0] = 0;
    uVar5 = (**(code **)(*DAT_146ab6358 + 0x1e0))
                      (DAT_146ab6358,local_res20[0],local_res18[0],local_res8[0],uVar2 & 0xff,
                       param_2,(bVar1 & 5 | 0x8000) << 4,local_28);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1428c6f40 CalcTextureMemorySizeEnum body=111 status=ok
// SIG undefined CalcTextureMemorySizeEnum(void)

void UVolumeTexture::CalcTextureMemorySizeEnum(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if ((param_2 & 0xfffffffd) == 0) {
    if (lVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar1 + 0x18);
    }
    iVar2 = UGameUserSettings::GetFoliageQuality();
    FUN_1428c6e60(param_1,iVar3 - iVar2);
    return;
  }
  if (lVar1 != 0) {
    FUN_1428c6e60(param_1,*(undefined4 *)(lVar1 + 0x18));
    return;
  }
  FUN_1428c6e60(param_1,0);
  return;
}



// FUNCTION 1428c7000 FUN_1428c7000 body=40 status=ok
// SIG undefined FUN_1428c7000(void)

void FUN_1428c7000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_146b17150;
  uVar2 = FUN_142876210(DAT_146b17150,param_1);
  FUN_142867c60(uVar1,uVar2);
  return;
}



// FUNCTION 1428c7030 FUN_1428c7030 body=336 status=ok
// SIG undefined FUN_1428c7030(void)

void FUN_1428c7030(char *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x95] = '\0';
  param_1[0x96] = '\0';
  param_1[0x97] = '\0';
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar5 = iVar6 >> 0x1f & 0xffff;
      uVar2 = iVar6 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xbfffffff;
    *(uint *)(*(longlong *)(param_1 + 0xa0) + 8) =
         *(uint *)(*(longlong *)(param_1 + 0xa0) + 8) & 0xfffffffd;
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0xa4] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa7] = '\0';
  }
  if (*param_1 != '\0') {
    if ((*(longlong *)(param_1 + 0x98) != 0) &&
       (lVar3 = UObjectBaseUtility::GetOutermost(), lVar3 != 0)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x38);
      if ((lVar3 != 0) && (iVar6 = 0, 0 < *(int *)(lVar3 + 0xa0))) {
        lVar8 = 0;
        do {
          plVar7 = *(longlong **)(lVar8 + *(longlong *)(lVar3 + 0x98));
          if (plVar7 != (longlong *)0x0) {
            lVar4 = (**(code **)(*plVar7 + 0x280))(plVar7);
            if (lVar4 != 0) {
              plVar7 = *(longlong **)(lVar4 + 0x1970);
            }
            FUN_1425d0d80(plVar7,uVar1);
          }
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 8;
        } while (iVar6 < *(int *)(lVar3 + 0xa0));
      }
    }
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[0x9c] = '\0';
    param_1[0x9d] = '\0';
    param_1[0x9e] = '\0';
    param_1[0x9f] = '\0';
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 1428c7180 CancelUnloadRequest body=247 status=ok
// SIG undefined CancelUnloadRequest(void)

void FLevelStreamingGCHelper::CancelUnloadRequest(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  
  FWeakObjectPtr::operator=(local_res10,param_1);
  iVar2 = DAT_146b19a78;
  iVar5 = DAT_146b19a78;
  if (DAT_146b19a78 != 0) {
    iVar5 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(DAT_146b19a70,local_res10);
    bVar6 = cVar3 == '\0';
    iVar4 = 0;
    do {
      iVar1 = iVar4;
      do {
        iVar1 = iVar1 + 1;
        if (iVar2 <= iVar1) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (DAT_146b19a70 + (longlong)iVar1 * 8,local_res10);
      } while (bVar6 == (cVar3 == '\0'));
      if (bVar6 != false) {
        if (iVar5 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146b19a70 + (longlong)iVar5 * 8),
                     (void *)(DAT_146b19a70 + (longlong)iVar4 * 8),(longlong)(iVar1 - iVar4) << 3);
        }
        iVar5 = iVar5 + (iVar1 - iVar4);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar4 = iVar1;
    } while (iVar1 < iVar2);
  }
  DAT_146b19a78 = iVar5;
  return;
}



// FUNCTION 1428c7280 CleanUp body=48 status=ok
// SIG undefined CleanUp(void)

void UVoiceChannel::CleanUp(longlong param_1,undefined1 param_2)

{
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x68,0);
  FUN_1423e85e0(param_1,param_2);
  return;
}



// FUNCTION 1428c72b0 FUN_1428c72b0 body=1175 status=ok
// SIG undefined FUN_1428c72b0(void)

void FUN_1428c72b0(longlong param_1,undefined1 param_2,char param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FPhysScene::WaitPhysScenes();
  }
  TBaseMulticastDelegate<void,UWorld_*,bool,bool>::Broadcast(&DAT_1465357a8,param_1,param_2,param_3)
  ;
  plVar14 = *(longlong **)(param_1 + 0x150);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x288))(plVar14,param_2,param_3,param_4);
  }
  uVar11 = 0;
  if (param_3 == '\x01') {
    plVar14 = *(longlong **)(param_1 + 0x138);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x280))(plVar14,0);
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(longlong *)(param_1 + 0x970) != 0) {
    ULandscapeSubsystem::Deinitialize();
  }
  if ((DAT_146b17150 != 0) && (lVar4 = FUN_1428761d0(DAT_146b17150,param_1), lVar4 != 0)) {
    plVar14 = *(longlong **)(lVar4 + 0x248);
    plVar9 = plVar14 + (longlong)*(int *)(lVar4 + 0x250) * 2;
    for (; plVar14 != plVar9; plVar14 = plVar14 + 2) {
      if (*plVar14 != 0) {
        FNetworkObjectList::Reset(*(undefined8 *)(*plVar14 + 0x528));
      }
    }
    plVar14 = *(longlong **)(lVar4 + 0x290);
    plVar9 = plVar14 + (longlong)*(int *)(lVar4 + 0x298) * 2;
    for (; plVar14 != plVar9; plVar14 = plVar14 + 2) {
      if (*plVar14 != 0) {
        FNetworkObjectList::Reset(*(undefined8 *)(*plVar14 + 0x528));
      }
    }
  }
  FUN_1415b52e0();
  uVar10 = uVar11;
  uVar13 = uVar11;
  if (0 < *(int *)(param_1 + 0x168)) {
    do {
      FUN_14251b150(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x160)));
      uVar12 = (int)uVar13 + 1;
      uVar10 = uVar10 + 8;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0x168));
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0xb8) & 1) != 0)) {
    FUN_142359580();
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x48) + 0xb8) & 1) != 0)) {
    FUN_142359580();
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xb8) & 1) != 0)) {
    FUN_142359580();
  }
  if (((param_3 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (FUN_142534f40(), DAT_1469f4590 != 0)) {
    FUN_14189a860();
  }
  plVar14 = *(longlong **)(param_1 + 0x88);
  uVar10 = (longlong)*(int *)(param_1 + 0x90) & 0x1fffffffffffffff;
  if (plVar14 + *(int *)(param_1 + 0x90) < plVar14) {
    uVar10 = uVar11;
  }
  if (uVar10 != 0) {
    do {
      if (*(longlong *)(*plVar14 + 0x120) != 0) {
        FUN_1428c72b0(*(undefined8 *)(*(longlong *)(*plVar14 + 0x120) + 0x20),param_2,param_3,
                      param_4);
      }
      plVar14 = plVar14 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  piVar5 = *(int **)(param_1 + 0x170);
  piVar7 = piVar5 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
  for (; piVar5 != piVar7; piVar5 = piVar5 + 0x20) {
    if (*piVar5 == 1) {
      plVar14 = (longlong *)(piVar5 + 10);
      uStack_a4 = 1;
      uVar12 = piVar5[0x14];
      puVar1 = (uint *)(piVar5 + 0xe);
      local_a8 = 0;
      uStack_94 = 0;
      iStack_90 = 0;
      if (uVar12 == 0) goto LAB_1428c761f;
      puVar16 = *(uint **)(piVar5 + 0x12);
      if (*(uint **)(piVar5 + 0x12) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar2 = *puVar16;
      goto joined_r0x0001428c75c6;
    }
  }
  goto LAB_1428c752e;
joined_r0x0001428c75c6:
  if (uVar2 != 0) goto LAB_1428c75f4;
  lVar4 = (longlong)local_a8;
  iStack_90 = iStack_90 + 0x20;
  iVar6 = local_a8 + 1;
  bVar3 = (int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
  local_a8 = iVar6;
  if (bVar3) goto LAB_1428c761c;
  uVar2 = puVar16[lVar4 + 1];
  goto joined_r0x0001428c75c6;
LAB_1428c75f4:
  uStack_a4 = -uVar2 & uVar2;
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
  if ((int)uVar12 < (int)uStack_94) {
LAB_1428c761c:
    uStack_94 = uVar12;
  }
LAB_1428c761f:
  uVar2 = piVar5[0x14];
  uStack_70 = CONCAT44(uStack_94,0xffffffff);
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar15 = uVar2 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar14;
  puStack_50 = puVar1;
  uStack_48 = uStack_70;
  uStack_40 = local_68;
  uStack_94 = uVar2;
  if (uVar2 != uVar12) {
    puVar16 = *(uint **)(piVar5 + 0x12);
    if (*(uint **)(piVar5 + 0x12) == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar8 = puVar16[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
    iVar6 = (int)uVar2 >> 5;
    while (uVar8 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
      goto LAB_1428c76e3;
      uVar8 = puVar16[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (uVar15 - iVar6) + 0x1f;
    if ((int)uVar12 < (int)uStack_94) {
LAB_1428c76e3:
      uStack_94 = uVar12;
    }
  }
  while( true ) {
    if ((uStack_70._4_4_ == uStack_94) && (local_78 == puVar1)) break;
    lVar4 = *(longlong *)(*plVar14 + (longlong)(int)uStack_70._4_4_ * 0x10);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != param_1)) {
      FUN_1428c72b0(lVar4,param_2,param_3,param_4);
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
LAB_1428c752e:
  FWorldPSCPool::Cleanup(param_1 + 0x870);
  TBaseMulticastDelegate<void,UWorld_*,bool,bool>::Broadcast(&DAT_1465357c0,param_1,param_2,param_3)
  ;
  return;
}



// FUNCTION 1428c7750 ClearStreamingLevels body=53 status=ok
// SIG undefined ClearStreamingLevels(void)

void UWorld::ClearStreamingLevels(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x94)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x88,0);
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x98);
  return;
}



// FUNCTION 1428c7790 CommitMapChange body=75 status=ok
// SIG undefined CommitMapChange(void)

void UWorld::CommitMapChange(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar2 = DAT_146b17150;
  uVar1 = FUN_142876210(DAT_146b17150,param_1);
  cVar3 = UEngine::IsPreparingMapChange(uVar2,uVar1);
  if (cVar3 != '\0') {
    FUN_14288e1d0(DAT_146b17150,param_1,1);
  }
  return;
}



// FUNCTION 1428c77e0 FUN_1428c77e0 body=355 status=ok
// SIG undefined FUN_1428c77e0(void)

undefined8
FUN_1428c77e0(longlong param_1,longlong param_2,int param_3,char param_4,byte param_5,byte param_6,
             int param_7)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  LARGE_INTEGER local_28 [2];
  
  if ((param_3 < 0) || (*(int *)(param_1 + 0x40) <= param_3)) {
LAB_1428c7922:
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x48) + (longlong)param_3 * 8);
    lVar4 = (longlong)param_3 * 0xb0 + *(longlong *)(param_1 + 0x38);
    if (((*(byte *)((longlong)plVar1 + 0xb6) >> 6 & 1) == param_6) &&
       (((int)plVar1[0x16] == param_7 && ((*(byte *)((longlong)plVar1 + 0xb6) >> 2 & 1) == param_5))
       )) {
      cVar2 = (**(code **)(*plVar1 + 0x280))(plVar1);
      if (cVar2 == param_4) goto LAB_1428c7922;
    }
    if ((((*(uint *)(param_2 + 0x708) < 7) &&
         ((0x6aU >> (*(uint *)(param_2 + 0x708) & 0x1f) & 1) != 0)) &&
        (*(int *)(param_2 + 0x7e8) == 0)) && (0.0 < *(double *)(param_1 + 0x58))) {
      QueryPerformanceCounter(local_28);
      dVar5 = (double)local_28[0].QuadPart * DAT_1468b02f8 + 16777216.0;
      if (dVar5 - *(double *)(lVar4 + 0xa8) < *(double *)(param_1 + 0x58)) goto LAB_1428c7922;
      *(double *)(lVar4 + 0xa8) = dVar5;
    }
    *(byte *)((longlong)plVar1 + 0xb6) = *(byte *)((longlong)plVar1 + 0xb6) & 0xbf;
    *(byte *)((longlong)plVar1 + 0xb6) = *(byte *)((longlong)plVar1 + 0xb6) | param_6 << 6;
    (**(code **)(*plVar1 + 0x278))(plVar1,param_4);
    ULevelStreaming::SetShouldBeVisible(plVar1,param_5);
    ULevelStreaming::SetLevelLODIndex(plVar1,param_7);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1428c7950 FUN_1428c7950 body=161 status=ok
// SIG undefined FUN_1428c7950(void)

undefined8 FUN_1428c7950(longlong param_1,uint param_2,char param_3)

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
      FUN_1428d3ed0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428c7a00 FUN_1428c7a00 body=468 status=ok
// SIG undefined FUN_1428c7a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428c7a00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x170);
  piVar6 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x178);
  for (piVar5 = piVar6; piVar3 = piVar6, piVar5 != piVar6 + (longlong)iVar2 * 0x20;
      piVar5 = piVar5 + 0x20) {
    if (*piVar5 == 0) goto LAB_1428c7b75;
  }
  do {
    if (piVar3 == piVar6 + (longlong)iVar2 * 0x20) {
LAB_1428c7a90:
      local_40 = 0xffffffff;
      local_90 = 0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_3c = 0;
      local_30 = 0;
      local_28 = 0;
      local_98[0] = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_20 = 1;
      *(int *)(param_1 + 0x178) = iVar2 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                  (plVar1,iVar2);
      }
      FUN_1428c2050(*plVar1 + (longlong)iVar2 * 0x80,local_98);
      FUN_1428c3280(local_98);
      iVar4 = iVar2;
LAB_1428c7b19:
      *(int *)(param_1 + 0x180) = iVar4;
      *(undefined8 *)((longlong)iVar4 * 0x80 + 0x20 + *plVar1) = *(undefined8 *)(param_1 + 0x30);
      lVar7 = *(longlong *)(param_1 + 0x30);
      if ((*(longlong *)(lVar7 + 600) == 0) &&
         (lVar8 = (longlong)*(int *)(param_1 + 0x180) * 0x80 + *plVar1, local_a0 = lVar7, lVar7 != 0
         )) {
        FUN_141b1d480(lVar8 + 0x28,local_a8,&local_a0,0);
        *(longlong *)(lVar7 + 600) = lVar8;
      }
LAB_1428c7b75:
      piVar6 = (int *)*plVar1;
      piVar5 = piVar6 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
      while( true ) {
        if (piVar6 == piVar5) {
          lVar7 = UWorld::FindOrAddCollectionByType(param_1,2);
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(param_1 + 0x30);
          return;
        }
        if (*piVar6 == 2) break;
        piVar6 = piVar6 + 0x20;
      }
      return;
    }
    if (*piVar3 == 0) {
      iVar4 = (int)((longlong)piVar3 - (longlong)piVar6 >> 7);
      if (iVar4 != -1) goto LAB_1428c7b19;
      goto LAB_1428c7a90;
    }
    piVar3 = piVar3 + 0x20;
  } while( true );
}



// FUNCTION 1428c7be0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FWriteToSliceGS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"MinZ",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428c7c50 FUN_1428c7c50 body=200 status=ok
// SIG undefined FUN_1428c7c50(void)

undefined8 * FUN_1428c7c50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e826c8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"UVScaleBias",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"MinZ",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SubRegionTransformMode",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428c7d20 ContainsActor body=47 status=ok
// SIG undefined ContainsActor(void)

undefined8 UWorld::ContainsActor(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 == param_1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428c7d50 ContainsLevel body=71 status=ok
// SIG undefined ContainsLevel(void)

undefined8 UWorld::ContainsLevel(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x160);
  plVar2 = plVar1;
  while( true ) {
    if (plVar2 == plVar1 + *(int *)(param_1 + 0x168)) {
      return 0xffffff00;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71((int7)((longlong)plVar2 - (longlong)plVar1 >> 0xb),
                  (int)((longlong)plVar2 - (longlong)plVar1 >> 3) != -1);
}



// FUNCTION 1428c7da0 ConvertToPIEPackageName body=244 status=ok
// SIG undefined ConvertToPIEPackageName(void)

undefined8 UWorld::ConvertToPIEPackageName(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  FPackageName::GetLongPackageAssetName(&local_38);
  cVar1 = FString::StartsWith(&local_38,L"UEDPIE",1);
  if (cVar1 == '\0') {
    FUN_1416f9840(&local_18,param_2);
    FString::PrintfImpl(&local_28,L"%s_%d_",L"UEDPIE",param_3);
    puVar2 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar2 = local_38;
    }
    puVar4 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar4 = local_28;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    FString::PrintfImpl(param_1,L"%s/%s%s",puVar3,puVar4,puVar2);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FString::FString(param_1);
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1428c7ea0 FUN_1428c7ea0 body=644 status=ok
// SIG undefined FUN_1428c7ea0(void)

void FUN_1428c7ea0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x98);
  piVar10 = (int *)0x0;
  piVar7 = *(int **)(lVar9 + 0x170);
  piVar6 = piVar7 + (longlong)*(int *)(lVar9 + 0x178) * 0x20;
  for (piVar8 = piVar7; (piVar4 = piVar10, piVar8 != piVar6 && (piVar4 = piVar8, *piVar8 != 0));
      piVar8 = piVar8 + 0x20) {
  }
  for (; (piVar8 = piVar10, piVar7 != piVar6 && (piVar8 = piVar7, *piVar7 != 2));
      piVar7 = piVar7 + 0x20) {
  }
  piVar7 = *(int **)(*(longlong *)(param_1 + 0xa0) + 0x170);
  piVar3 = piVar7 + (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x178) * 0x20;
  for (piVar6 = piVar7; (piVar5 = piVar10, piVar6 != piVar3 && (piVar5 = piVar6, *piVar6 != 0));
      piVar6 = piVar6 + 0x20) {
  }
  for (; (piVar6 = piVar10, piVar7 != piVar3 && (piVar6 = piVar7, *piVar7 != 2));
      piVar7 = piVar7 + 0x20) {
  }
  if (*(longlong *)(lVar9 + 0x108) != 0) {
    cVar2 = FUN_142416ee0();
    lVar9 = *(longlong *)(param_1 + 0x98);
    plVar1 = *(longlong **)(lVar9 + 0x108);
    if ((cVar2 != '\0') || ((char)plVar1[0x113] != '\0')) {
      *(undefined8 *)(lVar9 + 0x108) = 0;
      (**(code **)(*plVar1 + 0x380))(plVar1,*(undefined8 *)(param_1 + 0xa0));
      *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x108) = plVar1;
      if ((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(longlong **)(piVar5 + 6) = plVar1;
        piVar4[6] = 0;
        piVar4[7] = 0;
      }
      goto LAB_1428c7fda;
    }
  }
  FUN_1428c8ca0(lVar9);
  if (piVar4 != (int *)0x0) {
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
LAB_1428c7fda:
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x38);
  *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x38) = plVar1;
  if ((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) {
    *(longlong **)(piVar5 + 4) = plVar1;
    piVar4[4] = 0;
    piVar4[5] = 0;
  }
  if ((piVar8 != (int *)0x0) && (piVar6 != (int *)0x0)) {
    *(longlong **)(piVar6 + 4) = plVar1;
    piVar8[4] = 0;
    piVar8[5] = 0;
  }
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x38) = 0;
    (**(code **)(*plVar1 + 0x380))(plVar1,*(undefined8 *)(param_1 + 0xa0));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x708) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x708);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 400) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 400);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x790) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x790);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x8c8) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x8c8);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x794) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x794);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x798) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x798);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x79c) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x79c);
  if (plVar1 != (longlong *)0x0) {
    *(int *)(*(longlong *)(param_1 + 0xa0) + 0x800) = (int)plVar1[0xd];
  }
  return;
}



// FUNCTION 1428c8130 FUN_1428c8130 body=186 status=ok
// SIG undefined FUN_1428c8130(void)

undefined8 FUN_1428c8130(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_res8;
  int iStackX_c;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    return *(undefined8 *)(param_1 + 0x150);
  }
  uVar2 = FUN_1428cf800();
  cVar1 = FUN_14223f4e0(uVar2);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_14222d940(&local_res8);
    lVar3 = FUN_14203ac20(*(undefined8 *)(param_1 + 0x30),0);
    if ((((local_res8 != 0) || (iStackX_c != 0)) && (lVar3 != 0)) &&
       ((*(byte *)(lVar3 + 0x460) & 4) != 0)) {
      uVar4 = FUN_14168dc80();
      plVar5 = (longlong *)FUN_141690010(uVar4,CONCAT44(iStackX_c,local_res8));
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5,param_1);
        *(undefined8 *)(param_1 + 0x150) = uVar4;
      }
    }
    return *(undefined8 *)(param_1 + 0x150);
  }
  return *(undefined8 *)(param_1 + 0x150);
}



// FUNCTION 1428c81f0 FUN_1428c81f0 body=110 status=ok
// SIG undefined FUN_1428c81f0(void)

void FUN_1428c81f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (DAT_1468b616c == '\0') {
    uVar2 = FFXSystemInterface::Create
                      (*(undefined4 *)(param_1 + 0x1c0),(&DAT_1464c9c48)[(int)plVar1[1]]);
    *(undefined8 *)(param_1 + 0x5d0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001428c823b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x228))(*(longlong **)(param_1 + 0x1b8),uVar2);
    return;
  }
  *(undefined8 *)(param_1 + 0x5d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001428c8257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x228))(plVar1,0);
  return;
}



// FUNCTION 1428c8260 FUN_1428c8260 body=59 status=ok
// SIG undefined FUN_1428c8260(void)

void FUN_1428c8260(longlong param_1)

{
  longlong lVar1;
  
  FUN_142338230();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001428c8294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x1a0))(*(longlong **)(lVar1 + 0x1b8),param_1);
  return;
}



// FUNCTION 1428c82a0 FUN_1428c82a0 body=210 status=ok
// SIG undefined FUN_1428c82a0(void)

undefined8 FUN_1428c82a0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xb8);
  uVar5 = 0;
  iVar2 = 0;
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0xc);
  }
  if ((&DAT_1464ca1d0)[(longlong)iVar2 * 0x28] == '\0') {
switchD_1428c8304_caseD_1:
    bVar1 = false;
  }
  else {
    if (1 < (int)(&DAT_1464ca1b8)[(longlong)iVar2 * 10]) {
      switch(DAT_146ab62cc) {
      case 0:
      case 2:
      case 4:
      case 5:
      case 0x13:
      case 0x14:
      case 0x1c:
      case 0x1e:
      case 0x1f:
        break;
      default:
        goto switchD_1428c8304_caseD_1;
      }
    }
    bVar1 = true;
  }
  if ((((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) && (DAT_1464c9c20 != '\0')) && (bVar1)) {
    lVar4 = operator_new(0x168);
    if (lVar4 != 0) {
      uVar3 = UGameUserSettings::GetFoliageQuality(param_1);
      uVar5 = FUN_1428c2410(lVar4,param_1,uVar3);
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 1428c83a0 FUN_1428c83a0 body=664 status=ok
// SIG undefined FUN_1428c83a0(void)

undefined8 * FUN_1428c83a0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)operator_new(0x410);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_14271d7c0(puVar3,param_1,0);
  *puVar3 = &PTR_FUN_1451ef0c8;
  lVar2 = *(longlong *)(param_1 + 0x6f0);
  *(uint *)((longlong)puVar3 + 0x1c) = *(uint *)((longlong)puVar3 + 0x1c) & 0xfffffffd;
  *(byte *)(puVar3 + 0x74) = (byte)(*(uint *)(lVar2 + 0x490) >> 2) & 1;
  *(byte *)((longlong)puVar3 + 0x3a1) = (byte)(*(uint *)(lVar2 + 0x490) >> 3) & 1;
  *(byte *)((longlong)puVar3 + 0x3a2) = (byte)(*(uint *)(lVar2 + 0x490) >> 4) & 1;
  *(undefined4 *)((longlong)puVar3 + 0x3a4) = *(undefined4 *)(lVar2 + 0x494);
  *(undefined4 *)(puVar3 + 0x75) = *(undefined4 *)(lVar2 + 0x498);
  *(undefined4 *)((longlong)puVar3 + 0x3ac) = *(undefined4 *)(lVar2 + 0x49c);
  *(undefined4 *)(puVar3 + 0x76) = *(undefined4 *)(lVar2 + 0x4a0);
  *(undefined4 *)((longlong)puVar3 + 0x3b4) = *(undefined4 *)(lVar2 + 0x4a4);
  *(undefined4 *)(puVar3 + 0x77) = *(undefined4 *)(lVar2 + 0x4a8);
  *(undefined4 *)((longlong)puVar3 + 0x3bc) = *(undefined4 *)(lVar2 + 0x4b0);
  *(undefined4 *)(puVar3 + 0x78) = *(undefined4 *)(lVar2 + 0x4b4);
  *(undefined4 *)((longlong)puVar3 + 0x3c4) = *(undefined4 *)(lVar2 + 0x4b8);
  *(undefined4 *)(puVar3 + 0x79) = *(undefined4 *)(lVar2 + 0x4bc);
  *(undefined4 *)((longlong)puVar3 + 0x3cc) = *(undefined4 *)(lVar2 + 0x4c0);
  *(undefined4 *)(puVar3 + 0x7a) = *(undefined4 *)(lVar2 + 0x4c4);
  *(undefined4 *)((longlong)puVar3 + 0x3d4) = *(undefined4 *)(lVar2 + 0x4c8);
  *(undefined4 *)(puVar3 + 0x7b) = *(undefined4 *)(lVar2 + 0x4cc);
  *(undefined4 *)((longlong)puVar3 + 0x3dc) = *(undefined4 *)(lVar2 + 0x4d0);
  *(undefined4 *)(puVar3 + 0x7c) = *(undefined4 *)(lVar2 + 0x4d4);
  *(undefined4 *)((longlong)puVar3 + 0x3e4) = *(undefined4 *)(lVar2 + 0x4d8);
  *(undefined4 *)(puVar3 + 0x7d) = *(undefined4 *)(lVar2 + 0x4dc);
  *(undefined4 *)((longlong)puVar3 + 0x3ec) = *(undefined4 *)(lVar2 + 0x4e0);
  FUN_14222da00(lVar2,0,local_18,local_28);
  FUN_14222dc90(lVar2,&local_48);
  fVar4 = local_40;
  if ((*(byte *)(lVar2 + 0x4ac) & 1) == 0) {
    fVar4 = local_44;
    if (local_44 <= local_48) {
      fVar4 = local_48;
    }
    local_48 = fVar4;
    fVar4 = local_48;
    local_44 = local_48;
    if (local_48 <= local_40) {
      local_48 = local_40;
      fVar4 = local_40;
      local_44 = local_40;
    }
  }
  *(ulonglong *)((longlong)puVar3 + 0x3fc) = CONCAT44(local_44 * 100.0,local_48 * 100.0);
  *(float *)((longlong)puVar3 + 0x404) = fVar4 * 100.0;
  fVar4 = *(float *)(lVar2 + 0x4f8);
  fVar1 = *(float *)(lVar2 + 0x4ec);
  puVar3[0x7e] = CONCAT44((*(float *)(lVar2 + 0x4f4) - *(float *)(lVar2 + 0x4e8)) * 0.5,
                          (*(float *)(lVar2 + 0x4f0) - *(float *)(lVar2 + 0x4e4)) * 0.5);
  *(float *)(puVar3 + 0x7f) = (fVar4 - fVar1) * 0.5;
  return puVar3;
}



// FUNCTION 1428c8640 FUN_1428c8640 body=384 status=ok
// SIG undefined FUN_1428c8640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1428c8640(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(uint *)(param_1 + 0x2e4);
  puVar11 = (undefined8 *)operator_new(0x30);
  if ((uVar2 & 1) == 0) {
    if (puVar11 != (undefined8 *)0x0) {
      fVar5 = *(float *)(param_1 + 0x210);
      fVar6 = *(float *)(param_1 + 0x214);
      fVar7 = *(float *)(param_1 + 0x218);
      fVar8 = *(float *)(param_1 + 0x21c);
      fVar12 = fVar6 * 0.0 - fVar7 * 0.0;
      fVar13 = fVar7 * 1.0 - fVar5 * 0.0;
      fVar14 = fVar5 * 0.0 - fVar6 * 1.0;
      fVar12 = fVar12 + fVar12;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
      uVar9 = *(undefined8 *)(param_1 + 0x2d0);
      uVar10 = *(undefined8 *)(param_1 + 0x2d8);
      *puVar11 = _DAT_1468b5d90;
      *(undefined4 *)(puVar11 + 1) = DAT_1468b5d98;
      *(ulonglong *)((longlong)puVar11 + 0xc) =
           CONCAT44((fVar12 * fVar7 - fVar14 * fVar5) + fVar8 * fVar13 + 0.0,
                    (fVar14 * fVar6 - fVar13 * fVar7) + fVar8 * fVar12 + 1.0);
      *(float *)((longlong)puVar11 + 0x14) =
           (fVar13 * fVar5 - fVar12 * fVar6) + fVar8 * fVar14 + 0.0;
      puVar11[3] = uVar9;
      puVar11[4] = uVar10;
      *(undefined4 *)(puVar11 + 5) = 0;
      *(undefined1 *)((longlong)puVar11 + 0x2c) = 0;
      return puVar11;
    }
  }
  else if (puVar11 != (undefined8 *)0x0) {
    uVar3 = *(undefined4 *)(param_1 + 0x224);
    uVar4 = *(undefined4 *)(param_1 + 0x228);
    uVar9 = *(undefined8 *)(param_1 + 0x2d0);
    uVar10 = *(undefined8 *)(param_1 + 0x2d8);
    uVar1 = *(undefined4 *)(param_1 + 0x2e0);
    *(undefined4 *)puVar11 = *(undefined4 *)(param_1 + 0x220);
    *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
    *(undefined4 *)(puVar11 + 1) = uVar4;
    *(undefined8 *)((longlong)puVar11 + 0xc) = _DAT_1468b5d90;
    uVar3 = DAT_1468b5d98;
    *(undefined4 *)(puVar11 + 5) = uVar1;
    *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
    puVar11[3] = uVar9;
    puVar11[4] = uVar10;
    *(undefined1 *)((longlong)puVar11 + 0x2c) = 1;
    return puVar11;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428c87c0 FUN_1428c87c0 body=349 status=ok
// SIG undefined FUN_1428c87c0(void)

longlong FUN_1428c87c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res10;
  longlong local_res18 [2];
  
  uVar3 = GetTransientPackage();
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar6 = 0;
  local_res10 = 0;
  uVar4 = FUN_142a2a990();
  lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + 0x1ac) & 1) != 0) {
      FUN_1428d4280(&DAT_146535880,lVar5 + 400);
      *(byte *)(lVar5 + 0x1ac) = *(byte *)(lVar5 + 0x1ac) & 0xfe;
    }
    lVar1 = param_1 + 0x4b0;
    if ((*(longlong **)(param_1 + 0x4b8) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x20))(), cVar2 != '\0')) {
      TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_146535880,&local_res10,lVar1);
      if (((int)local_res10 == -1) || (DAT_146535880 + (longlong)(int)local_res10 * 0x28 == 0)) {
        local_res18[0] = lVar1;
        FUN_1428c1020(&DAT_146535880,&local_res10,local_res18,0);
      }
      TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_146535880,&local_res10,lVar1);
      if ((int)local_res10 != -1) {
        lVar6 = DAT_146535880 + (longlong)(int)local_res10 * 0x28;
      }
      *(longlong *)(lVar6 + 0x18) = lVar5;
      FUN_1428c3a70(lVar5 + 400,lVar1);
      *(byte *)(lVar5 + 0x1ac) = *(byte *)(lVar5 + 0x1ac) | 1;
    }
  }
  return lVar5;
}



// FUNCTION 1428c8920 FUN_1428c8920 body=210 status=ok
// SIG undefined FUN_1428c8920(void)

undefined8 FUN_1428c8920(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = (**(code **)(*plVar1 + 0x6e8))(plVar1);
      if (lVar3 != 0) {
        lVar4 = operator_new(0x30);
        if (lVar4 != 0) {
          local_10 = *(undefined4 *)(lVar3 + 0x48);
          local_28 = *(undefined4 *)(lVar3 + 0x30);
          uStack_24 = *(undefined4 *)(lVar3 + 0x34);
          uStack_20 = *(undefined4 *)(lVar3 + 0x38);
          uStack_1c = *(undefined4 *)(lVar3 + 0x3c);
          local_18 = *(undefined8 *)(lVar3 + 0x40);
          uVar5 = FUN_142745730(lVar4,&local_28,lVar3);
          *(undefined8 *)(param_1 + 0x2f0) = uVar5;
          return uVar5;
        }
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1428c8a00 FUN_1428c8a00 body=592 status=ok
// SIG undefined FUN_1428c8a00(void)

longlong FUN_1428c8a00(int param_1,char param_2,longlong param_3,longlong param_4,uint param_5,
                      int param_6)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res18 [2];
  longlong local_58 [4];
  
  lVar9 = 0;
  if (3 < param_6) {
    param_6 = DAT_1464c9c14;
  }
  local_res18[0] = param_3;
  if (param_4 == 0) {
    param_4 = FUN_1417894a0(0,0);
  }
  if (param_1 == 3) {
    *(uint *)(param_4 + 0x50) = *(uint *)(param_4 + 0x50) | 0x100000;
  }
  lVar4 = GetTransientPackage();
  if (param_4 != lVar4) {
    *(uint *)(param_4 + 0x50) = *(uint *)(param_4 + 0x50) | 0x20000;
  }
  local_res18[1] = 0;
  bVar10 = local_res18[0] == 0;
  if (bVar10) {
    local_58[0] = 0;
    local_58[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"Untitled",0x12);
    plVar5 = local_58;
  }
  else {
    plVar5 = (longlong *)FName::ToString(local_res18,local_58 + 2);
  }
  puVar2 = (undefined2 *)*plVar5;
  *plVar5 = 0;
  lVar4 = plVar5[1];
  plVar5[1] = 0;
  if (bVar10) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar10) && (local_58[2] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)lVar4 != 0) {
    puVar8 = puVar2;
  }
  plVar5 = (longlong *)FName::FName(local_58,puVar8,1);
  local_res18[1] = 0;
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    FUN_1417846f0(param_4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = FUN_142a2f930();
  lVar4 = FUN_1417985e0(uVar6,param_4,lVar4,0,0,0,0,0,0);
  *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 8;
  *(int *)(lVar4 + 0x708) = param_1;
  *(int *)(lVar4 + 0x1c0) = param_6;
  FUN_1428cf500(lVar4,((uint)(param_1 == 2) * 2 | (uint)(param_1 == 2)) << 4 | param_5 & 0xffffff8f
                      | 0x38f);
  FUN_141764920(param_4,0);
  if ((char)param_5 != '\0') {
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
  }
  if ((DAT_146b17150 != (longlong *)0x0) && (param_2 == '\x01')) {
    (**(code **)(*DAT_146b17150 + 0x278))(DAT_146b17150,lVar4);
  }
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return lVar4;
}



// FUNCTION 1428c8c50 FUN_1428c8c50 body=75 status=ok
// SIG undefined FUN_1428c8c50(void)

void FUN_1428c8c50(longlong param_1)

{
  longlong lVar1;
  
  FUN_142338f40();
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001428c8c8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x1a8))(*(longlong **)(lVar1 + 0x1b8),param_1);
    return;
  }
  return;
}



// FUNCTION 1428c8ca0 FUN_1428c8ca0 body=96 status=ok
// SIG undefined FUN_1428c8ca0(void)

void FUN_1428c8ca0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x120);
    FUN_142423360();
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x380))(*(longlong **)(param_1 + 0x108),0);
    FUN_14286cbe0(DAT_146b17150,param_1,uVar1);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 1428c8d00 FUN_1428c8d00 body=59 status=ok
// SIG undefined FUN_1428c8d00(void)

void FUN_1428c8d00(longlong param_1)

{
  longlong lVar1;
  
  UActorComponent::DestroyRenderState_Concurrent();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001428c8d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x1b8) + 0x1a8))(*(longlong **)(lVar1 + 0x1b8),param_1);
  return;
}



// FUNCTION 1428c8d40 FUN_1428c8d40 body=135 status=ok
// SIG undefined FUN_1428c8d40(void)

undefined8 FUN_1428c8d40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x1e0) <= iVar2)) {
      return 0;
    }
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar2 * 8);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x508) == 0)) &&
       (*(longlong *)(lVar1 + 0x680) == param_2)) break;
    iVar2 = iVar2 + 1;
  }
  FUN_142543860(param_1,lVar1,0,1);
  return 1;
}



// FUNCTION 1428c8dd0 FUN_1428c8dd0 body=285 status=ok
// SIG undefined FUN_1428c8dd0(void)

void FUN_1428c8dd0(longlong param_1,char param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *(undefined1 *)(param_1 + 0x700) = 0;
  if (*(char *)(param_1 + 0x701) != '\x01') {
    *(undefined1 *)(param_1 + 0x701) = 1;
    UWorld::PopulateStreamingLevelsToConsider();
  }
  FUN_1428caf60(param_1,1);
  FUN_1428c72b0(param_1,1,1,param_3);
  if (((DAT_146b17150 != (longlong *)0x0) &&
      (FUN_1428761d0(DAT_146b17150,param_1), DAT_146b17150 != (longlong *)0x0)) &&
     (param_2 == '\x01')) {
    (**(code **)(*DAT_146b17150 + 0x280))(DAT_146b17150,param_1);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  uVar6 = 0;
  uVar4 = uVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) & 0xbfffffff;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  uVar4 = uVar6;
  if (0 < *(int *)(param_1 + 0x168)) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + uVar6) + 0x20);
      if ((lVar2 != param_1) && (lVar2 != param_3)) {
        *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) & 0xfffffffd;
      }
      uVar3 = (int)uVar4 + 1;
      uVar6 = uVar6 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x168));
  }
  return;
}



// FUNCTION 1428c8ef0 Discard body=88 status=ok
// SIG undefined Discard(void)

void FVolumeTextureBulkData::Discard(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0xf;
  lVar1 = 0xe;
  do {
    param_1 = param_1 + 1;
    if (*param_1 != 0) {
      FMemory::Free();
      *param_1 = 0;
    }
    *(undefined4 *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 4);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1428c8f50 FUN_1428c8f50 body=598 status=ok
// SIG undefined FUN_1428c8f50(void)

void FUN_1428c8f50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
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
  uint *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (param_1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x170);
    lVar9 = (longlong)*(int *)(param_1 + 0x178) * 0x80 + lVar10;
    if (lVar10 != lVar9) {
      puVar11 = (uint *)(lVar10 + 0x38);
      do {
        uVar1 = puVar11[6];
        local_98 = 0;
        uStack_94 = 1;
        uStack_84 = 0;
        iStack_80 = 0;
        if (uVar1 != 0) {
          puVar8 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            puVar8 = puVar11;
          }
          uVar2 = *puVar8;
          iStack_80 = 0;
          local_98 = 0;
          while (uVar2 == 0) {
            lVar4 = (longlong)local_98;
            iStack_80 = iStack_80 + 0x20;
            iVar6 = local_98 + 1;
            bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
            local_98 = iVar6;
            if (bVar3) goto LAB_1428c9051;
            uVar2 = puVar8[lVar4 + 1];
          }
          uStack_94 = -uVar2 & uVar2;
          iVar6 = 0x1f;
          if (uStack_94 != 0) {
            for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          if (uStack_94 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          uStack_84 = (iStack_80 - iVar6) + 0x1f;
          if ((int)uVar1 < (int)uStack_84) {
LAB_1428c9051:
            uStack_84 = uVar1;
          }
        }
        uStack_60 = 0xffffffff;
        uStack_5c = uStack_84;
        local_58 = CONCAT44(uStack_7c,iStack_80);
        local_50 = puVar11 + -4;
        uStack_48 = CONCAT44(uStack_94,local_98);
        uVar2 = puVar11[6];
        uVar7 = uVar1 & 0xffffffe0;
        iStack_70 = local_98;
        uStack_6c = uStack_94;
        local_68 = puVar11;
        puStack_40 = puVar11;
        uStack_30 = local_58;
        uStack_38 = uStack_60;
        uStack_34 = uStack_5c;
        uStack_84 = uVar1;
        if (uVar1 != uVar2) {
          puVar8 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            puVar8 = puVar11;
          }
          uVar5 = puVar8[(int)uVar1 >> 5] & -1 << ((byte)uVar1 & 0x1f);
          iVar6 = (int)uVar1 >> 5;
          while (uVar5 == 0) {
            uVar7 = uVar7 + 0x20;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
            goto LAB_1428c9125;
            uVar5 = puVar8[(longlong)iVar6 + 1];
            iVar6 = iVar6 + 1;
          }
          uVar5 = -uVar5 & uVar5;
          iVar6 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          if (uVar5 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          uStack_84 = (uVar7 - iVar6) + 0x1f;
          if ((int)uVar2 < (int)uStack_84) {
LAB_1428c9125:
            uStack_84 = uVar2;
          }
        }
        while ((uStack_5c != uStack_84 || (local_68 != puVar11))) {
          uStack_60 = uStack_60 & ~uStack_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
        }
        lVar10 = lVar10 + 0x80;
        puVar11 = puVar11 + 0x20;
      } while (lVar10 != lVar9);
    }
  }
  return;
}



// FUNCTION 1428c91b0 FUN_1428c91b0 body=702 status=ok
// SIG undefined FUN_1428c91b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428c91b0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_a8 [32];
  uint local_88 [2];
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_68;
  char local_64;
  int local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar9 = FUN_1428dfc70();
  local_88[0] = 5;
  local_30 = 0;
  TOptional<FActorIteratorState>::Reset(&local_80);
  FUN_1428c1e20(&local_80,param_1,uVar9);
  local_30 = 1;
  FUN_14045a130(local_88);
  iVar16 = local_68;
  plVar15 = local_58;
joined_r0x0001428c920d:
  local_58 = plVar15;
  local_68 = iVar16;
  if (local_64 == '\0') {
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x5f0))(local_58);
    }
    lVar6 = local_80;
    iVar16 = local_68 + 1;
    if (iVar16 < local_48 + local_70) {
      lVar18 = (longlong)iVar16 * 8;
      iVar17 = local_48;
      iVar13 = local_70;
      do {
        if (iVar16 < iVar13) {
          plVar15 = *(longlong **)(local_78 + lVar18);
        }
        else {
          plVar15 = *(longlong **)(local_50 + (longlong)(iVar16 - iVar13) * 8);
        }
        local_60 = local_60 + 1;
        if ((plVar15 != (longlong *)0x0) &&
           (lVar10 = AActor::GetLevel(plVar15), iVar17 = local_48, iVar13 = local_70, lVar10 != 0))
        {
          if ((local_88[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar15 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar14 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar14;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_1428c9405;
          }
          if (((local_88[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar15), iVar17 = local_48,
             iVar13 = local_70, cVar7 != '\0')) {
            if ((local_88[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              lVar11 = *(longlong *)(lVar10 + 0xc0);
              piVar2 = *(int **)(lVar10 + 600);
              if (lVar11 == 0) {
LAB_1428c9374:
                piVar12 = (int *)0x0;
              }
              else {
                iVar17 = *(int *)(lVar11 + 0x180);
                if ((iVar17 < 0) || (*(int *)(lVar11 + 0x178) <= iVar17)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_1428c9374;
                piVar12 = (int *)((longlong)iVar17 * 0x80 + *(longlong *)(lVar11 + 0x170));
              }
              if ((piVar12 == (int *)0x0) || (piVar2 == piVar12)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar17 = local_48;
              iVar13 = local_70;
              if ((!bVar5) || (!bVar3)) goto LAB_1428c9405;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar17 = local_48;
            iVar13 = local_70;
            if (lVar10 == lVar6) {
              lVar10 = AActor::GetLevel(plVar15);
              if (lVar10 == *(longlong *)(lVar6 + 0x30)) goto joined_r0x0001428c920d;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                  lVar10 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar17 = local_48;
              iVar13 = local_70;
              if (!bVar5) goto joined_r0x0001428c920d;
            }
          }
        }
LAB_1428c9405:
        iVar16 = iVar16 + 1;
        lVar18 = lVar18 + 8;
        if (iVar17 + iVar13 <= iVar16) break;
      } while( true );
    }
    local_58 = (longlong *)0x0;
    local_64 = '\x01';
  }
  TOptional<FActorIteratorState>::Reset(&local_80);
  return;
}



// FUNCTION 1428c9470 FUN_1428c9470 body=713 status=ok
// SIG undefined FUN_1428c9470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1428c9470(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 local_180;
  LARGE_INTEGER local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined2 *local_160;
  int local_158;
  undefined8 *local_150;
  LARGE_INTEGER *local_148;
  longlong local_140 [3];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((param_1 == 0) || (lVar5 = UObjectBaseUtility::GetOutermost(), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    QueryPerformanceCounter(&local_178);
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar6 = UObjectBaseUtility::GetOutermost(param_1);
    local_170 = *(undefined8 *)(lVar6 + 0x18);
    FName::ToString(&local_170,local_140);
    UWorld::ConvertToPIEPackageName(&local_160,local_140,param_2);
    puVar8 = &DAT_143f3eda8;
    if (local_158 != 0) {
      puVar8 = local_160;
    }
    lVar7 = FUN_1417894a0(0,puVar8);
    *(uint *)(lVar7 + 0x50) = *(uint *)(lVar7 + 0x50) | 0x100000;
    *(undefined4 *)(lVar7 + 0x54) = param_2;
    *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(lVar6 + 0x58);
    uVar1 = *(undefined4 *)(lVar6 + 0x30);
    uVar2 = *(undefined4 *)(lVar6 + 0x34);
    uVar3 = *(undefined4 *)(lVar6 + 0x38);
    uVar4 = *(undefined4 *)(lVar6 + 0x3c);
    *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) | 2;
    *(undefined4 *)(lVar7 + 0x30) = uVar1;
    *(undefined4 *)(lVar7 + 0x34) = uVar2;
    *(undefined4 *)(lVar7 + 0x38) = uVar3;
    *(undefined4 *)(lVar7 + 0x3c) = uVar4;
    FSoftObjectPath::AddPIEPackageName(*(undefined8 *)(lVar7 + 0x18));
    local_180 = 0;
    local_188 = 0;
    DAT_1464aaa88 = param_2;
    lVar6 = FUN_14243bbf0(lVar7,*(undefined8 *)(lVar5 + 0x18),0,0);
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 8;
    *(undefined4 *)(lVar6 + 0x708) = 1;
    *(undefined4 *)(lVar6 + 0x1c0) = 4;
    FWeakObjectPtr::operator=(&local_178,lVar5);
    local_168 = *(undefined8 *)(lVar7 + 0x18);
    local_150 = &local_168;
    local_148 = &local_178;
    FUN_141fc8710(&DAT_1465332d0,&local_170,&local_150,0);
    FUN_1417812e0(local_128,param_1,lVar6);
    local_118 = *(undefined8 *)(param_1 + 0x18);
    local_f0 = *(undefined8 *)(param_1 + 0x10);
    local_110 = 0xefffffff;
    local_10c = 0xff800000;
    local_100 = 0x400000;
    local_f8 = 2;
    lVar5 = FUN_141798990(local_128);
    TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1465332d0,*(undefined8 *)(lVar7 + 0x18));
    if (((*(longlong *)(lVar5 + 200) != 0) &&
        (*(longlong *)(lVar5 + 200) == *(longlong *)(param_1 + 200))) &&
       (*(int *)(lVar5 + 0xd8) == *(int *)(param_1 + 0xd8))) {
      FUN_1425b6470();
      iVar9 = 0;
      if (0 < *(int *)(lVar5 + 0xd8)) {
        lVar6 = 0;
        do {
          FUN_142366510(*(undefined8 *)(lVar6 + *(longlong *)(lVar5 + 0xd0)),
                        *(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0xd0)));
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar9 < *(int *)(lVar5 + 0xd8));
      }
    }
    QueryPerformanceCounter(&local_178);
    DAT_1464aaa88 = 0xffffffff;
    local_48 = 0;
    if (local_50 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_90);
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_e8);
    if (local_160 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_140[0] != 0) {
      FMemory::Free();
    }
  }
  return lVar5;
}



// FUNCTION 1428c9740 FUN_1428c9740 body=452 status=ok
// SIG undefined FUN_1428c9740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428c9740(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar3 = (**(code **)(*DAT_146b17150 + 0x398))();
  if (cVar3 != '\0') {
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_a8[0] = 1;
    local_30 = 0;
    lVar4 = FUN_1428c9470(*(undefined8 *)(param_1 + 0x30),1);
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x205) = *(byte *)(lVar4 + 0x205) | 0x40;
      local_b0 = lVar4;
      local_88 = lVar4;
      FUN_141b1d480(&uStack_80,local_b8,&local_b0,0);
      *(undefined4 **)(lVar4 + 600) = local_a8;
      plVar5 = *(longlong **)(param_1 + 0x88);
      plVar1 = plVar5 + *(int *)(param_1 + 0x90);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        lVar4 = *plVar5;
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xb6) & 0x20) == 0)) {
          lVar4 = FUN_1428c9470(*(undefined8 *)(lVar4 + 0x120),1);
          if (lVar4 == 0) goto LAB_1428c98cc;
          *(byte *)(lVar4 + 0x205) = *(byte *)(lVar4 + 0x205) | 0x40;
          local_b0 = lVar4;
          FUN_141b1d480(&uStack_80,local_b8,&local_b0,0);
          *(undefined4 **)(lVar4 + 600) = local_a8;
        }
      }
      iVar2 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar2 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar2 + 1) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                  (param_1 + 0x170,iVar2);
      }
      FUN_1428c2050((longlong)iVar2 * 0x80 + *(longlong *)(param_1 + 0x170),local_a8);
    }
LAB_1428c98cc:
    FUN_1428c3280(local_a8);
  }
  return;
}



// FUNCTION 1428c9910 FUN_1428c9910 body=1305 status=ok
// SIG undefined FUN_1428c9910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1428c9910(undefined8 *param_1,longlong param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  int *piVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  int local_188 [2];
  undefined8 local_180;
  float local_178;
  int local_170;
  int iStack_16c;
  longlong local_160;
  longlong local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined2 *local_140;
  int local_138;
  undefined **local_128 [5];
  byte local_ff;
  byte local_fe;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_1;
  }
  local_160 = param_2;
  puVar5 = (undefined8 *)FName::FName(&local_170,puVar12,1);
  uVar3 = *puVar5;
  uVar6 = UPackage::GetPrivateStaticClass();
  uVar15 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = local_1a8 & 0xffffffffffffff00;
  lVar7 = FUN_141799680(uVar6,0,uVar3,0);
  if (lVar7 == 0) {
LAB_1428c9e00:
    lVar7 = 0;
  }
  else {
    lVar8 = UWorld::FindWorldInPackage(lVar7);
    if (lVar8 == 0) {
      lVar8 = FUN_1428cb040(lVar7,0);
      if (lVar8 == 0) goto LAB_1428c9e00;
      lVar7 = UObjectBaseUtility::GetOutermost(lVar8);
    }
    uVar13 = 0xffffffff;
    lVar9 = FUN_1428761d0(DAT_146b17150,local_160);
    if (lVar9 == 0) {
      if (local_160 != 0) {
        lVar9 = UObjectBaseUtility::GetOutermost();
        uVar13 = *(undefined4 *)(lVar9 + 0x54);
      }
    }
    else {
      uVar13 = *(undefined4 *)(lVar9 + 600);
    }
    DAT_1464aaa88 = uVar13;
    UWorld::ConvertToPIEPackageName(&local_140,param_1,uVar13);
    puVar12 = &DAT_143f3eda8;
    if (local_138 != 0) {
      puVar12 = local_140;
    }
    FName::FName(&local_158,puVar12,1);
    FSoftObjectPath::AddPIEPackageName(local_158);
    if (DAT_1465356b8 != DAT_1465356e4) {
      puVar10 = DAT_1465356f0;
      if (DAT_1465356f0 == (undefined *)0x0) {
        puVar10 = &DAT_1465356e8;
      }
      iVar2 = *(int *)(puVar10 +
                      ((longlong)((int)((ulonglong)local_158 >> 0x20) + (int)local_158) &
                      (longlong)DAT_1465356f8 - 1U) * 4);
      while (iVar2 != -1) {
        lVar9 = (longlong)iVar2;
        if (*(longlong *)(DAT_1465356b0 + lVar9 * 0x18) == local_158) {
          if ((iVar2 != -1) && (lVar9 = DAT_1465356b0 + lVar9 * 0x18, lVar9 != 0))
          goto LAB_1428c9afe;
          break;
        }
        iVar2 = *(int *)(DAT_1465356b0 + 0x10 + lVar9 * 0x18);
      }
    }
    local_180 = &local_158;
    FUN_14253ceb0(&DAT_1465356b0,local_188,&local_180,0);
    lVar9 = DAT_1465356b0 + (longlong)local_188[0] * 0x18;
LAB_1428c9afe:
    *(undefined4 *)(lVar9 + 8) = 3;
    puVar12 = &DAT_143f3eda8;
    if (local_138 != 0) {
      puVar12 = local_140;
    }
    lVar9 = FUN_1417894a0(0,puVar12);
    *(uint *)(lVar9 + 0x50) = *(uint *)(lVar9 + 0x50) | 0x100000;
    *(undefined4 *)(lVar9 + 0x54) = uVar13;
    uVar3 = *(undefined8 *)(lVar7 + 0x30);
    uVar6 = *(undefined8 *)(lVar7 + 0x38);
    *(byte *)(lVar9 + 0x28) = *(byte *)(lVar9 + 0x28) | 2;
    *(undefined8 *)(lVar9 + 0x30) = uVar3;
    *(undefined8 *)(lVar9 + 0x38) = uVar6;
    FWeakObjectPtr::operator=(&local_170,local_160);
    local_180 = *(longlong **)(lVar9 + 0x18);
    local_150 = &local_180;
    local_148 = &local_170;
    FUN_141fc8710(&DAT_1465332d0,local_188,&local_150,0);
    local_198 = 0xff800000;
    local_1a0 = 2;
    local_1a8 = 0;
    lVar7 = FUN_1417987a0(lVar8,lVar9,*(undefined8 *)(lVar8 + 0x18),0xefffffff);
    FArchive::FArchive(local_128);
    local_fe = local_fe | 0x18;
    local_128[0] = &PTR__scalar_deleting_destructor__1451efa78;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FArchive::SetIsPersistent(local_128,0);
    local_ff = local_ff | 0x20;
    (*(code *)local_128[0][6])(local_128,&local_160);
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    FArchive::~FArchive(local_128);
    *(undefined4 *)(lVar7 + 0x1c0) = *(undefined4 *)(lVar8 + 0x1c0);
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Remove(&DAT_1465356b0,local_158);
    TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1465332d0,*(undefined8 *)(lVar9 + 0x18));
    FString::PrintfImpl(&local_150,L"%s_%d_",L"UEDPIE",uVar13);
    ppuVar1 = (undefined8 **)(lVar7 + 0xe8);
    if (ppuVar1 == &local_150) {
      if (local_150 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppuVar1 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      *ppuVar1 = local_150;
      *(undefined4 *)(lVar7 + 0xf0) = (undefined4)local_148;
      *(undefined4 *)(lVar7 + 0xf4) = local_148._4_4_;
    }
    lVar9 = *(longlong *)(lVar7 + 0x30);
    lVar8 = *(longlong *)(lVar8 + 0x30);
    *(byte *)(lVar9 + 0x204) =
         *(byte *)(lVar9 + 0x204) ^ (*(byte *)(lVar9 + 0x204) ^ *(byte *)(lVar8 + 0x204)) & 0x20;
    *(byte *)(lVar9 + 0x206) =
         *(byte *)(lVar9 + 0x206) ^ (*(byte *)(lVar8 + 0x206) ^ *(byte *)(lVar9 + 0x206)) & 2;
    if ((((*(longlong *)(lVar9 + 200) != 0) &&
         (*(longlong *)(lVar9 + 200) == *(longlong *)(lVar8 + 200))) &&
        (*(int *)(lVar9 + 0xd8) == *(int *)(lVar8 + 0xd8))) &&
       (FUN_1425b6470(), uVar16 = uVar15, 0 < *(int *)(lVar9 + 0xd8))) {
      do {
        FUN_142366510(*(undefined8 *)(uVar16 + *(longlong *)(lVar9 + 0xd0)),
                      *(undefined8 *)(uVar16 + *(longlong *)(lVar8 + 0xd0)));
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        uVar16 = uVar16 + 8;
      } while ((int)uVar14 < *(int *)(lVar9 + 0xd8));
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0xc0) + 0x7e0);
    if ((lVar4 != 0) && ((*(byte *)(lVar8 + 0x204) & 0x10) != 0)) {
      piVar11 = (int *)FUN_1428cc620(lVar4,&local_150,lVar8);
      _local_170 = CONCAT44(DAT_1468b5cac - piVar11[1],DAT_1468b5ca8 - *piVar11);
      local_180 = (longlong *)
                  CONCAT44((float)(DAT_1468b5cac - piVar11[1]),(float)(DAT_1468b5ca8 - *piVar11));
      local_178 = (float)(DAT_1468b5cb0 - piVar11[2]);
      FUN_1425157e0(lVar9,&local_180,0);
    }
    *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) & 0xfffffffd;
    if (local_140 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return lVar7;
}



// FUNCTION 1428c9e30 Empty body=149 status=ok
// SIG undefined Empty(void)

void TArray<FWorldCompositionTile,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x80);
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-6] != 0) {
        FMemory::Free();
      }
      if (plVar1[-0xf] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1428c9ed0 FUN_1428c9ed0 body=510 status=ok
// SIG undefined FUN_1428c9ed0(void)

void FUN_1428c9ed0(longlong *param_1,int param_2)

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
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = *puVar10;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar9 = local_78 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar9;
      if (bVar6) goto LAB_1428c9fa4;
      uVar7 = puVar10[lVar8 + 1];
    }
    uStack_74 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    iStack_64 = (iStack_60 - iVar9) + 0x1f;
    if (iVar4 < iStack_64) {
LAB_1428c9fa4:
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
      lVar8 = *param_1;
      *(undefined ***)(lVar8 + (longlong)iStack_3c * 0x28) = &PTR_FUN_143f73d18;
      plVar5 = *(longlong **)(lVar8 + 0x10 + (longlong)iStack_3c * 0x28);
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
  uVar7 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar7) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1428ca0d0 EnableHalfRate body=119 status=ok
// SIG undefined EnableHalfRate(void)

ulonglong FVorbisAudioInfo::EnableHalfRate(longlong param_1,undefined1 param_2)

{
  BOOL BVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  bool bVar3;
  
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_146b196d4 == 0;
  if (bVar3) {
    DAT_146b196d4 = 0;
  }
  else {
    uVar2 = (ulonglong)DAT_146b196d4;
  }
  UNLOCK();
  if (!bVar3) {
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 1;
    UNLOCK();
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    ::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 8),param_2);
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 0;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    uVar2 = extraout_RAX;
  }
  return uVar2;
}



// FUNCTION 1428ca150 FUN_1428ca150 body=128 status=ok
// SIG undefined FUN_1428ca150(void)

undefined8 FUN_1428ca150(longlong param_1,undefined4 param_2,float param_3,float *param_4)

{
  longlong *plVar1;
  char cVar2;
  float local_res8 [8];
  undefined1 local_28 [32];
  
  plVar1 = *(longlong **)(param_1 + 0x470);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x6d8))(plVar1,param_2,local_res8,local_28);
    if (cVar2 == '\0') {
      if (param_4 != (float *)0x0) {
        *param_4 = -1.0;
      }
    }
    else {
      if (param_4 != (float *)0x0) {
        *param_4 = SQRT(local_res8[0]);
      }
      if ((0.0 <= local_res8[0]) && (local_res8[0] <= param_3 * param_3)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1428ca1d0 EnsureCollisionTreeIsBuilt body=60 status=ok
// SIG undefined EnsureCollisionTreeIsBuilt(void)

void UWorld::EnsureCollisionTreeIsBuilt(longlong param_1)

{
  if ((*(char *)(param_1 + 0x5e0) == '\0') && (*(char *)(param_1 + 0x5e1) == '\0')) {
    if (*(longlong *)(param_1 + 0x218) != 0) {
      FUN_1426deee0(*(longlong *)(param_1 + 0x218),param_1);
    }
    *(undefined1 *)(param_1 + 0x5e1) = 1;
  }
  return;
}



// FUNCTION 1428ca210 FUN_1428ca210 body=1284 status=ok
// SIG undefined FUN_1428ca210(void)

undefined1 FUN_1428ca210(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  double dVar12;
  undefined8 local_res18 [2];
  undefined8 local_48;
  longlong *local_40;
  int local_38;
  wchar_t *local_30;
  undefined8 local_28;
  
  local_res18[0] = param_3;
  cVar3 = FParse::Command(local_res18,L"TRACETAG",1);
  if (cVar3 != '\0') {
    local_48 = local_res18[0];
    local_30 = (wchar_t *)0x0;
    local_28 = 0;
    FParse::Token(&local_48,&local_30,0);
    pwVar11 = L"";
    if ((int)local_28 != 0) {
      pwVar11 = local_30;
    }
    puVar7 = (undefined8 *)FName::FName(&local_40,pwVar11,1);
    *(undefined8 *)(param_1 + 0x710) = *puVar7;
    goto LAB_1428ca6d3;
  }
  cVar3 = FParse::Command(local_res18,L"TRACETAGALL",1);
  if (cVar3 != '\0') {
    *(bool *)(param_1 + 0x718) = *(char *)(param_1 + 0x718) == '\0';
    return 1;
  }
  cVar3 = FParse::Command(local_res18,L"FLUSHPERSISTENTDEBUGLINES",1);
  if (cVar3 != '\0') {
    FUN_142368cd0(*(undefined8 *)(param_1 + 0x48));
    return 1;
  }
  cVar3 = FParse::Command(local_res18,L"LOGACTORCOUNTS",1);
  if (cVar3 == '\0') {
    cVar3 = FParse::Command(local_res18,L"DEMOREC",1);
    if (cVar3 != '\0') {
      uVar4 = FUN_1428cd900(param_1,local_res18[0],param_4,param_2);
      return uVar4;
    }
    cVar3 = FParse::Command(local_res18,L"DEMOPLAY",1);
    if (cVar3 != '\0') {
      uVar4 = FUN_1428cd5d0(param_1,local_res18[0],param_4,param_2);
      return uVar4;
    }
    cVar3 = FParse::Command(local_res18,L"DEMOSTOP",1);
    if (cVar3 != '\0') {
      if (param_2 == 0) {
        return 1;
      }
      if (*(longlong **)(param_2 + 400) == (longlong *)0x0) {
        return 1;
      }
      (**(code **)(**(longlong **)(param_2 + 400) + 0x2e0))();
      return 1;
    }
    cVar3 = FParse::Command(local_res18,L"DEMOSCRUB",1);
    if (cVar3 == '\0') {
      cVar3 = FParse::Command(local_res18,L"DEMOPAUSE",1);
      if (cVar3 != '\0') {
        lVar9 = 0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar9 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),1);
        }
        if (*(longlong *)(lVar9 + 0x600) != 0) {
          *(undefined8 *)(lVar9 + 0x600) = 0;
          return 1;
        }
        if (*(longlong *)(param_1 + 0x108) == 0) {
          return 1;
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x90);
        if (lVar1 == 0) {
          return 1;
        }
        lVar1 = *(longlong *)(lVar1 + 0x98);
        if (lVar1 == 0) {
          return 1;
        }
        lVar10 = FUN_1429e18b0();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return 1;
        }
        *(undefined8 *)(lVar9 + 0x600) = *(undefined8 *)(lVar1 + 0x460);
        return 1;
      }
      cVar3 = FParse::Command(local_res18,L"DEMOSPEED",1);
      if (cVar3 == '\0') {
        cVar3 = FUN_1426dfd60(local_res18[0],param_4,param_2);
        if (cVar3 == '\0') {
          return 0;
        }
        goto LAB_1428ca30d;
      }
      lVar9 = 0;
      local_48 = local_res18[0];
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar9 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),1);
      }
      local_30 = (wchar_t *)0x0;
      local_28 = 0;
      cVar3 = FParse::Token(&local_48,&local_30,0);
      if (cVar3 == '\0') {
        FOutputDevice::Log(param_4,L"You must specify a speed in the form of a float");
      }
      else {
        pwVar11 = L"";
        if ((int)local_28 != 0) {
          pwVar11 = local_30;
        }
        dVar12 = _wtof(pwVar11);
        *(float *)(lVar9 + 0x5e8) = (float)dVar12;
      }
    }
    else {
      lVar9 = 0;
      local_48 = local_res18[0];
      local_30 = (wchar_t *)0x0;
      local_28 = 0;
      cVar3 = FParse::Token(&local_48,&local_30,0);
      if (cVar3 == '\0') {
        FOutputDevice::Log(param_4,L"You must specify a time");
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x108);
        if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x568) != 0)) &&
            (*(longlong *)(lVar1 + 0x90) != 0)) &&
           (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x98), lVar1 != 0)) {
          lVar8 = FUN_1429e18b0();
          lVar10 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (*(longlong *)(param_1 + 0x30) != 0) {
              lVar9 = FUN_14203ac20(*(longlong *)(param_1 + 0x30),
                                    CONCAT71((int7)((ulonglong)lVar10 >> 8),1));
            }
            *(undefined8 *)(lVar9 + 0x600) = *(undefined8 *)(lVar1 + 0x460);
            pwVar11 = L"";
            if ((int)local_28 != 0) {
              pwVar11 = local_30;
            }
            uVar6 = _wtoi(pwVar11);
            local_40 = (longlong *)0x0;
            local_38 = 0;
            FUN_142412840(*(undefined8 *)(param_1 + 0x108),(float)uVar6,&local_40);
            if (local_38 != 0) {
              if (local_40 == (longlong *)0x0) goto LAB_1428ca6d3;
              (**(code **)(*local_40 + 0x28))(local_40,0);
              if (local_40 != (longlong *)0x0) {
                local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
              }
              local_38 = 0;
            }
            if (local_40 != (longlong *)0x0) {
              FMemory::Free(local_40);
            }
          }
        }
      }
    }
LAB_1428ca6d3:
    if (local_30 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
LAB_1428ca30d:
  uVar5 = UWorld::GetActorCount(param_2);
  FOutputDevice::LogfImpl(param_4,L"Num Actors: %i",uVar5);
  return 1;
}



// FUNCTION 1428ca720 ExpandFile body=209 status=ok
// SIG undefined ExpandFile(void)

ulonglong FVorbisAudioInfo::ExpandFile(longlong param_1,void *param_2,longlong param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  uVar4 = 0;
  LOCK();
  bVar6 = DAT_146b196d4 == 0;
  if (bVar6) {
    DAT_146b196d4 = 0;
  }
  else {
    uVar4 = (ulonglong)DAT_146b196d4;
  }
  UNLOCK();
  if (!bVar6) {
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 1;
    UNLOCK();
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    uVar1 = *(uint *)(param_3 + 0xc);
    if (uVar1 != 0) {
      do {
        iVar3 = ::_guard_xfg_dispatch_icall_nop
                          (*(undefined8 *)(param_1 + 8),param_2,uVar1 - uVar5,0,2,1,0);
        if (iVar3 < 0) {
          ::_guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)(uVar1 - uVar5));
          break;
        }
        uVar5 = uVar5 + iVar3;
        param_2 = (void *)((longlong)param_2 + (longlong)iVar3);
      } while (uVar5 < uVar1);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 0;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    uVar4 = extraout_RAX;
  }
  return uVar4;
}



// FUNCTION 1428ca800 FindCollectionByType body=48 status=ok
// SIG undefined FindCollectionByType(void)

int * UWorld::FindCollectionByType(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x170);
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 0x178) * 0x20;
  while( true ) {
    if (piVar1 == piVar2) {
      return (int *)0x0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 0x20;
  }
  return piVar1;
}



// FUNCTION 1428ca830 FindCollectionIndexByType body=59 status=ok
// SIG undefined FindCollectionIndexByType(void)

longlong UWorld::FindCollectionIndexByType(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x170);
  piVar2 = piVar1;
  while( true ) {
    if (piVar2 == piVar1 + (longlong)*(int *)(param_1 + 0x178) * 0x20) {
      return 0xffffffff;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 0x20;
  }
  return (longlong)piVar2 - (longlong)piVar1 >> 7;
}



// FUNCTION 1428ca870 FUN_1428ca870 body=222 status=ok
// SIG undefined FUN_1428ca870(void)

void FUN_1428ca870(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined1 local_38 [24];
  float local_20;
  
  iVar5 = 0;
  fVar8 = -1.0;
  iVar6 = -1;
  if (0 < *(int *)(param_1 + 0x860)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x858));
      if (lVar3 != 0) {
        uVar2 = *(uint *)(lVar3 + 0x4a8);
        plVar4 = *(longlong **)(lVar3 + 0x470);
        *(uint *)(lVar3 + 0x4a8) = uVar2 & 0xfffffffd;
        if (((plVar4 != (longlong *)0x0) && (*(int *)(lVar3 + 0x4a0) != 0)) && ((uVar2 & 1) != 0)) {
          (**(code **)(*plVar4 + 0x4a8))(plVar4,local_38,plVar4 + 0x42);
          if (fVar8 < local_20) {
            fVar8 = local_20;
            iVar6 = iVar5;
          }
        }
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x860));
    if (-1 < iVar6) {
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x858) + (longlong)iVar6 * 8) + 0x4a8)
      ;
      *puVar1 = *puVar1 | 2;
    }
  }
  return;
}



// FUNCTION 1428ca950 FindId body=181 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FUniqueNetIdWrapper,UVOIPTalker_*>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,UVOIPTalker_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUniqueNetIdWrapper::operator==((longlong)iVar2 * 0x28 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x28 + 0x20 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1428caa10 FindOrAddCollectionByType body=260 status=ok
// SIG undefined FindOrAddCollectionByType(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * UWorld::FindOrAddCollectionByType(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x170);
  piVar5 = (int *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x178);
  piVar2 = piVar5 + (longlong)iVar3 * 0x20;
  while( true ) {
    if (piVar5 == piVar2) {
      local_40 = 0xffffffff;
      local_90 = 0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_3c = 0;
      local_30 = 0;
      local_28 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_20 = 1;
      *(int *)(param_1 + 0x178) = iVar3 + 1;
      local_98[0] = param_2;
      if (*(int *)(param_1 + 0x17c) < iVar3 + 1) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                  (plVar1,iVar3);
      }
      FUN_1428c2050(*plVar1 + (longlong)iVar3 * 0x80,local_98);
      iVar3 = *(int *)(param_1 + 0x178);
      lVar4 = *plVar1;
      FUN_1428c3280(local_98);
      return (int *)((longlong)(iVar3 + -1) * 0x80 + lVar4);
    }
    if (*piVar5 == param_2) break;
    piVar5 = piVar5 + 0x20;
  }
  return piVar5;
}



// FUNCTION 1428cab20 FindWorldInPackage body=182 status=ok
// SIG undefined FindWorldInPackage(void)

ulonglong UWorld::FindWorldInPackage(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_1417a5b30(param_1,&local_18,0,0,0);
  lVar2 = local_18;
  uVar4 = 0;
  while( true ) {
    iVar3 = (int)uVar4;
    if ((iVar3 < 0) || ((int)local_10 <= iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar4 = 0;
    if (!bVar1) break;
    uVar4 = *(ulonglong *)(lVar2 + (longlong)iVar3 * 8);
    if (uVar4 != 0) {
      lVar2 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar2 = local_18;
      if (bVar1) break;
    }
    uVar4 = (ulonglong)(iVar3 + 1);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1428cabe0 FUN_1428cabe0 body=517 status=ok
// SIG undefined FUN_1428cabe0(void)

void FUN_1428cabe0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x6f8) != '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1465357d8,param_1);
    UWorld::WaitForAllAsyncTraceTasks(param_1);
    plVar4 = *(longlong **)(param_1 + 0x138);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x280))(plVar4,0);
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(longlong *)(param_1 + 0x5d0) != 0) {
      FUN_1425e13b0();
      *(undefined8 *)(param_1 + 0x5d0) = 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x218);
    if (lVar5 != 0) {
      FUN_1426d5850(lVar5);
      FMemory::operator_delete(lVar5,0x518);
      *(undefined8 *)(param_1 + 0x218) = 0;
      if (DAT_146b08410 != 0) {
        FPhysCommandHandler::Flush();
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if (plVar4 != (longlong *)0x0) {
      if ((DAT_1469f4590 != 0) &&
         (plVar7 = *(longlong **)(DAT_1469f4590 + 0x18), plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x170))(plVar7);
        plVar4 = *(longlong **)(param_1 + 0x1b8);
      }
      (**(code **)(*plVar4 + 0x1f0))();
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
  }
  if (DAT_146b19a68 == param_1) {
    DAT_146b19a68 = 0;
  }
  plVar4 = (longlong *)thunk_FUN_142873fe0();
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_1 + 0x5d8));
  puVar1 = *(undefined8 **)(param_1 + 0x3f8);
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar5 = UObjectBaseUtility::GetOutermost(param_1);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_1417a5b30(lVar5,&local_18,0,0,0);
  plVar4 = local_18 + (int)local_10;
  for (plVar7 = local_18; plVar7 != plVar4; plVar7 = plVar7 + 1) {
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      lVar6 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar2 != param_1)) goto LAB_1428cadb4;
    }
  }
  *(uint *)(lVar5 + 0x50) = *(uint *)(lVar5 + 0x50) & 0xfffdffff;
LAB_1428cadb4:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 1428cadf0 FixupForPIE body=353 status=ok
// SIG undefined FixupForPIE(void)

void UWorldComposition::FixupForPIE(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = 0;
    do {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar7);
      uVar1 = FName::ToString(puVar6,local_48);
      UWorld::ConvertToPIEPackageName(&local_58,uVar1,param_2);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      puVar4 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar4 = local_58;
      }
      puVar2 = (undefined8 *)FName::FName(local_res8,puVar4,1);
      *puVar6 = *puVar2;
      FSoftObjectPath::AddPIEPackageName();
      puVar2 = (undefined8 *)puVar6[1];
      puVar6 = puVar2 + *(int *)(puVar6 + 2);
      for (; puVar2 != puVar6; puVar2 = puVar2 + 1) {
        uVar1 = FName::ToString(puVar2,local_38);
        UWorld::ConvertToPIEPackageName(&local_68,uVar1,param_2);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        puVar4 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar4 = local_68;
        }
        puVar3 = (undefined8 *)FName::FName(local_res18,puVar4,1);
        *puVar2 = *puVar3;
        FSoftObjectPath::AddPIEPackageName();
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0xb0;
    } while (iVar5 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 1428caf60 FUN_1428caf60 body=210 status=ok
// SIG undefined FUN_1428caf60(void)

void FUN_1428caf60(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_1415bac00();
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14203ac20(*(longlong *)(param_1 + 0x30),1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7e8) = param_2;
  FUN_1428db6c0(param_1);
  do {
    FUN_1416f7d70(0xffffffff);
    do {
      FUN_1428db6c0(param_1);
      cVar2 = FUN_1415bac00();
      if ((cVar2 == '\0') ||
         ((*(longlong *)(param_1 + 0xf8) == 0 && (*(longlong *)(param_1 + 0x100) == 0)))) {
        if ((*(char *)(param_1 + 0x5e0) == '\0') && (*(char *)(param_1 + 0x5e1) == '\0')) {
          if (*(longlong *)(param_1 + 0x218) != 0) {
            FUN_1426deee0(*(longlong *)(param_1 + 0x218),param_1);
          }
          *(undefined1 *)(param_1 + 0x5e1) = 1;
        }
        if (*(int *)(param_1 + 0x7e8) == 1) {
          *(uint *)(param_1 + 0x830) = *(uint *)(param_1 + 0x830) & 0xfffffff7;
        }
        *(undefined4 *)(param_1 + 0x7e8) = uVar1;
        return;
      }
    } while (*(int *)(param_1 + 0x7e8) != 1);
  } while( true );
}



// FUNCTION 1428cb040 FUN_1428cb040 body=445 status=ok
// SIG undefined FUN_1428cb040(void)

ulonglong FUN_1428cb040(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_1417a5b30(param_1,&local_18,0,0,0);
  uVar6 = 0;
  do {
    iVar5 = (int)uVar6;
    if ((iVar5 < 0) || ((int)local_10 <= iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar6 = 0;
    if (!bVar2) goto LAB_1428cb1d1;
    lVar1 = *(longlong *)(local_18 + (longlong)iVar5 * 8);
    if (lVar1 != 0) {
      lVar3 = UObjectRedirector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (uVar6 = *(ulonglong *)(lVar1 + 0x28), uVar6 != 0)) {
        lVar3 = FUN_142a2f930();
        if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) break;
      }
    }
    uVar6 = (ulonglong)(iVar5 + 1);
  } while( true );
  lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18);
  if (DAT_1465356b8 != DAT_1465356e4) {
    puVar8 = DAT_1465356f0;
    if (DAT_1465356f0 == (undefined *)0x0) {
      puVar8 = &DAT_1465356e8;
    }
    iVar5 = *(int *)(puVar8 + (longlong)
                              (int)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3 &
                                   DAT_1465356f8 - 1U) * 4);
    while (iVar5 != -1) {
      lVar7 = (longlong)iVar5;
      if (*(longlong *)(DAT_1465356b0 + lVar7 * 0x18) == lVar3) {
        if (((iVar5 != -1) && (lVar3 = DAT_1465356b0 + lVar7 * 0x18, lVar3 != 0)) &&
           (puVar4 = (undefined4 *)(lVar3 + 8), puVar4 != (undefined4 *)0x0)) {
          *(undefined4 *)(uVar6 + 0x708) = *puVar4;
        }
        break;
      }
      iVar5 = *(int *)(DAT_1465356b0 + 0x10 + lVar7 * 0x18);
    }
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar1;
  }
LAB_1428cb1d1:
  if (local_18 != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1428cb200 ForceBuildStreamingData body=222 status=ok
// SIG undefined ForceBuildStreamingData(void)

void ForceBuildStreamingData(void)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar2 = FUN_142a2f930();
  FUN_1417a5560(uVar2,&local_28,1,0x10,0);
  uVar3 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar4 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar3 <= local_18)) {
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
        return;
      }
      lVar1 = *(longlong *)(lVar4 + (longlong)local_18 * 8);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0xc0) == lVar1)) {
        FUN_142518300(lVar1,0,0);
        uVar3 = local_20 & 0xffffffff;
        lVar4 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar3 <= local_18);
    do {
      if (*(longlong *)(lVar4 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar3);
  } while( true );
}



// FUNCTION 1428cb2e0 GetActiveLevelCollection body=34 status=ok
// SIG undefined GetActiveLevelCollection(void)

longlong UWorld::GetActiveLevelCollection(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x180);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x178))) {
    return (longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x170);
  }
  return 0;
}



// FUNCTION 1428cb310 GetActorCount body=134 status=ok
// SIG undefined GetActorCount(void)

int UWorld::GetActorCount(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = (longlong)*(int *)(param_1 + 0x168);
  iVar4 = 0;
  iVar6 = 0;
  iVar3 = 0;
  lVar1 = 0;
  if (1 < lVar7) {
    lVar5 = (lVar7 - 2U >> 1) + 1;
    lVar1 = lVar5 * 2;
    plVar2 = *(longlong **)(param_1 + 0x160);
    do {
      iVar4 = iVar4 + *(int *)(*plVar2 + 0xa8);
      iVar6 = iVar6 + *(int *)(plVar2[1] + 0xa8);
      lVar5 = lVar5 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar5 != 0);
  }
  if (lVar1 < lVar7) {
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + lVar1 * 8) + 0xa8);
  }
  return iVar6 + iVar4 + iVar3;
}



// FUNCTION 1428cb3a0 GetAddressURL body=65 status=ok
// SIG undefined GetAddressURL(void)

undefined8 UWorld::GetAddressURL(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_1 + 0x578) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x570);
  }
  FString::PrintfImpl(param_2,L"%s:%i",puVar1,*(undefined4 *)(param_1 + 0x580));
  return param_2;
}



// FUNCTION 1428cb3f0 GetAssetRegistryTags body=578 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UVolumeTexture::GetAssetRegistryTags(longlong param_1,longlong *param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  undefined1 local_res10 [8];
  void *local_68;
  void *local_60;
  int local_58;
  int local_54;
  void *local_48;
  ulonglong local_40;
  void *pvVar8;
  
  pvVar8 = (void *)0x0;
  FString::PrintfImpl(&local_48,L"%dx%dx%d",0,0,0);
  puVar4 = (undefined8 *)FName::FName(local_res10,"Dimensions",1);
  pvVar11 = local_48;
  local_60 = (void *)0x0;
  local_68 = (void *)*puVar4;
  iVar9 = (int)local_40;
  local_58 = iVar9;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_40 & 0xffffffff,0);
    pvVar8 = local_60;
    ::_guard_xfg_dispatch_icall_nop(local_60,pvVar11,(longlong)iVar9 * 2);
    iVar9 = local_54;
  }
  iVar3 = local_58;
  pvVar11 = local_68;
  iVar7 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar7);
  }
  puVar4 = (undefined8 *)((longlong)iVar7 * 0x20 + *param_2);
  *puVar4 = pvVar11;
  puVar4[1] = pvVar8;
  *(int *)((longlong)puVar4 + 0x14) = iVar9;
  iVar7 = 0;
  pvVar8 = (void *)0x0;
  *(int *)(puVar4 + 2) = iVar3;
  puVar4[3] = 3;
  iVar9 = iVar7;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0xc);
  }
  local_68 = (void *)0x0;
  local_60 = (void *)((ulonglong)local_60 & 0xffffffff);
  psVar1 = (short *)(&PTR_u_unknown_1464ca1b0)[(longlong)iVar9 * 5];
  pvVar10 = pvVar8;
  pvVar11 = pvVar8;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_60 = (void *)(ulonglong)uVar5;
    uVar2 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      uVar2 = (uint)local_60;
    }
    pvVar11 = local_68;
    pvVar10 = (void *)(ulonglong)uVar2;
    FGenericPlatformString::Memcpy(local_68,psVar1,(longlong)(int)uVar5 * 2);
  }
  puVar4 = (undefined8 *)FName::FName(local_res10,"Format",1);
  local_60 = (void *)0x0;
  iVar9 = (int)pvVar10;
  local_68 = (void *)*puVar4;
  local_58 = iVar9;
  if (iVar9 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,pvVar10,0);
    pvVar8 = local_60;
    ::_guard_xfg_dispatch_icall_nop(local_60,pvVar11,(longlong)iVar9 * 2);
    iVar7 = local_54;
  }
  iVar3 = local_58;
  pvVar10 = local_68;
  iVar9 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar9 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar9);
  }
  puVar4 = (undefined8 *)((longlong)iVar9 * 0x20 + *param_2);
  *puVar4 = pvVar10;
  puVar4[1] = pvVar8;
  *(int *)(puVar4 + 2) = iVar3;
  *(int *)((longlong)puVar4 + 0x14) = iVar7;
  puVar4[3] = 1;
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  FUN_1417557f0(param_1,param_2);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428cb640 FUN_1428cb640 body=21 status=ok
// SIG undefined FUN_1428cb640(void)

longlong * FUN_1428cb640(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x1f8;
  return param_2;
}


