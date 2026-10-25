// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a78bc0 FUN_140a78bc0 body=112 status=ok
// SIG undefined FUN_140a78bc0(void)

ulonglong FUN_140a78bc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_18;
  longlong local_10;
  
  if ((((*(byte *)(param_1 + 0x2ac0) & 4) != 0) && (*param_2 != 0)) &&
     (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
    if ((char)uVar2 != '\0') {
      return uVar2 & 0xffffffffffffff00;
    }
  }
  local_18 = *param_2;
  local_10 = 0;
  if (local_18 != 0) {
    local_10 = param_2[1];
  }
  uVar2 = FUN_142d082f0(param_1,&local_18);
  return uVar2;
}



// FUNCTION 140a78c40 FUN_140a78c40 body=145 status=ok
// SIG undefined FUN_140a78c40(void)

ulonglong FUN_140a78c40(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  
  uVar2 = FUN_140a5ace0();
  if (((char)uVar2 != '\0') &&
     (uVar1 = *(uint *)(param_1 + 0x2ac0) >> 2, uVar2 = (ulonglong)uVar1, (uVar1 & 1) != 0)) {
    if (*(longlong *)(param_1 + 0x2928) != 0) {
      if ((*(longlong *)(param_1 + 0x2b78) == 0) ||
         (uVar2 = 0x28dc, *(char *)(*(longlong *)(param_1 + 0x2b78) + 0xec0) != '\x03')) {
        uVar2 = 0x28d0;
      }
      fVar3 = *(float *)(uVar2 + param_1) * *(float *)(param_1 + 0x1130);
      if (*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
          *(float *)(param_1 + 400) * *(float *)(param_1 + 400) <
          fVar3 * fVar3 * *(float *)(*(longlong *)(param_1 + 0x2928) + 0x30)) goto LAB_140a78cc9;
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_140a78cc9:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140a78ce0 FUN_140a78ce0 body=333 status=ok
// SIG undefined FUN_140a78ce0(void)

undefined8 FUN_140a78ce0(longlong *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  if (*(ulonglong *)(lVar8 + 0x20) < *(longlong *)(lVar8 + 0x18) + (ulonglong)(param_3 * 6 + 2)) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar8);
    lVar8 = *param_1;
  }
  puVar3 = *(undefined1 **)(lVar8 + 0x18);
  *(undefined1 **)(lVar8 + 0x18) = puVar3 + 1;
  *puVar3 = 0x22;
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar7 = uVar7 + 1;
      cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
      pbVar4 = *(byte **)(*param_1 + 0x18);
      *(byte **)(*param_1 + 0x18) = pbVar4 + 1;
      if (cVar2 == '\0') {
        *pbVar4 = bVar1;
      }
      else {
        *pbVar4 = 0x5c;
        cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
        pcVar5 = *(char **)(*param_1 + 0x18);
        *(char **)(*param_1 + 0x18) = pcVar5 + 1;
        *pcVar5 = cVar2;
        if ("uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(uint)bVar1] == 'u') {
          puVar3 = *(undefined1 **)(*param_1 + 0x18);
          *(undefined1 **)(*param_1 + 0x18) = puVar3 + 1;
          *puVar3 = 0x30;
          puVar3 = *(undefined1 **)(*param_1 + 0x18);
          *(undefined1 **)(*param_1 + 0x18) = puVar3 + 1;
          *puVar3 = 0x30;
          pcVar5 = *(char **)(*param_1 + 0x18);
          cVar2 = "0123456789ABCDEF"[bVar1 >> 4];
          *(char **)(*param_1 + 0x18) = pcVar5 + 1;
          *pcVar5 = cVar2;
          cVar2 = "0123456789ABCDEF"[bVar1 & 0xf];
          pcVar5 = *(char **)(*param_1 + 0x18);
          *(char **)(*param_1 + 0x18) = pcVar5 + 1;
          *pcVar5 = cVar2;
        }
      }
    } while (uVar7 < param_3);
  }
  puVar6 = *(undefined1 **)(*param_1 + 0x18);
  puVar3 = puVar6 + 1;
  *(undefined1 **)(*param_1 + 0x18) = puVar3;
  *puVar6 = 0x22;
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 140a78e40 u32toa body=578 status=ok
// SIG undefined u32toa(void)

char * rapidjson::internal::u32toa(uint param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < 10000) {
    uVar5 = (param_1 / 100) * 2;
    uVar4 = (param_1 % 100) * 2;
    if (999 < param_1) {
      *param_2 = (&DAT_144213a50)[uVar5];
      param_2 = param_2 + 1;
    }
    if (99 < param_1) {
      *param_2 = (&DAT_144213a50)[uVar5 + 1];
      param_2 = param_2 + 1;
    }
    if (9 < param_1) {
      *param_2 = (&DAT_144213a50)[uVar4];
      param_2 = param_2 + 1;
    }
    *param_2 = (&DAT_144213a50)[uVar4 + 1];
    return param_2 + 1;
  }
  if (param_1 < 100000000) {
    uVar1 = ((param_1 / 10000) / 100) * 2;
    uVar4 = ((param_1 / 10000) % 100) * 2;
    uVar2 = ((param_1 % 10000) / 100) * 2;
    uVar5 = ((param_1 % 10000) % 100) * 2;
    if (9999999 < param_1) {
      *param_2 = (&DAT_144213a50)[uVar1];
      param_2 = param_2 + 1;
    }
    if (999999 < param_1) {
      *param_2 = (&DAT_144213a50)[uVar1 + 1];
      param_2 = param_2 + 1;
    }
    if (99999 < param_1) {
      *param_2 = (&DAT_144213a50)[uVar4];
      param_2 = param_2 + 1;
    }
    *param_2 = (&DAT_144213a50)[uVar4 + 1];
    param_2[1] = (&DAT_144213a50)[uVar2];
    param_2[2] = (&DAT_144213a50)[uVar2 + 1];
    param_2[3] = (&DAT_144213a50)[uVar5];
    param_2[4] = (&DAT_144213a50)[uVar5 + 1];
    return param_2 + 5;
  }
  pcVar3 = param_2 + 1;
  uVar4 = (uint)((ulonglong)param_1 / 100000000);
  uVar5 = param_1 + uVar4 * -100000000;
  if (uVar4 < 10) {
    *param_2 = (char)((ulonglong)param_1 / 100000000) + '0';
  }
  else {
    *param_2 = (&DAT_144213a50)[uVar4 * 2];
    *pcVar3 = (&DAT_144213a50)[uVar4 * 2 + 1];
    pcVar3 = param_2 + 2;
  }
  uVar4 = uVar5 / 10000;
  uVar5 = uVar5 % 10000;
  uVar1 = (uVar4 / 100) * 2;
  uVar4 = (uVar4 % 100) * 2;
  uVar2 = (uVar5 / 100) * 2;
  *pcVar3 = (&DAT_144213a50)[uVar1];
  uVar5 = (uVar5 % 100) * 2;
  pcVar3[1] = (&DAT_144213a50)[uVar1 + 1];
  pcVar3[2] = (&DAT_144213a50)[uVar4];
  pcVar3[3] = (&DAT_144213a50)[uVar4 + 1];
  pcVar3[4] = (&DAT_144213a50)[uVar2];
  pcVar3[5] = (&DAT_144213a50)[uVar2 + 1];
  pcVar3[6] = (&DAT_144213a50)[uVar5];
  pcVar3[7] = (&DAT_144213a50)[uVar5 + 1];
  return pcVar3 + 8;
}



// FUNCTION 140a79090 FUN_140a79090 body=278 status=ok
// SIG undefined FUN_140a79090(void)

void FUN_140a79090(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *_Dst;
  void *_Src;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x108) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    return;
  }
  FUN_140a95eb0(param_1,param_3 + param_5,param_4);
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  if (param_3 != 0) {
    param_2 = param_2 - lVar2;
    puVar3 = (undefined8 *)(lVar2 + 0x10);
    do {
      puVar3[-2] = *(undefined8 *)(param_2 + -0x10 + (longlong)puVar3);
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 8 + (longlong)puVar3);
      _Src = *(void **)(param_2 + (longlong)puVar3);
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_140a95dc0(puVar3 + -1,iVar1,0);
        if (_Src == (void *)0x0) {
          _Src = (void *)(param_2 + -8 + (longlong)puVar3);
        }
        _Dst = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
          _Dst = puVar3 + -1;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1);
      }
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140a791b0 FUN_140a791b0 body=186 status=ok
// SIG undefined FUN_140a791b0(void)

longlong * FUN_140a791b0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)*param_1;
  plVar6 = plVar5 + (longlong)(int)param_1[1] * 4;
  if (plVar5 != plVar6) {
    do {
      if ((*plVar5 == *(longlong *)*param_2) && (lVar1 = plVar5[1], lVar1 != 0)) {
        uVar2 = *(uint *)(lVar1 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar3 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && (lVar1 == *(longlong *)param_2[1])) {
          return plVar5;
        }
      }
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar6);
  }
  return (longlong *)0x0;
}



// FUNCTION 140a79270 FUN_140a79270 body=35 status=ok
// SIG undefined FUN_140a79270(void)

void FUN_140a79270(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e27720();
                    /* WARNING: Could not recover jumptable at 0x000140a7928c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  return;
}



// FUNCTION 140a792a0 FUN_140a792a0 body=442 status=ok
// SIG undefined FUN_140a792a0(void)

void FUN_140a792a0(longlong param_1,undefined8 param_2,longlong *param_3)

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
    lVar5 = FMovieSceneActorReferenceKey::StaticStruct();
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
          if (bVar4) goto LAB_140a7939f;
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
LAB_140a7939f:
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



// FUNCTION 140a79460 FUN_140a79460 body=367 status=ok
// SIG undefined FUN_140a79460(void)

void FUN_140a79460(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar10 = iVar5 * 2 + 1;
    iVar8 = iVar10;
    iVar11 = iVar5;
joined_r0x000140a7948a:
    do {
      if (iVar10 < param_2) {
        iVar6 = iVar5 * 2 + 1;
        iVar10 = iVar5 * 2 + 2;
        iVar7 = iVar6;
        if ((iVar10 < param_2) &&
           (iVar7 = iVar10,
           *(float *)((longlong)param_1 + (longlong)iVar6 * 8 + 4) <=
           *(float *)((longlong)param_1 + (longlong)iVar10 * 8 + 4))) {
          iVar7 = iVar6;
        }
        puVar9 = param_1 + iVar5;
        fVar3 = *(float *)((longlong)param_1 + (longlong)iVar7 * 8 + 4);
        puVar1 = param_1 + iVar7;
        if (fVar3 < *(float *)((longlong)puVar9 + 4) || fVar3 == *(float *)((longlong)puVar9 + 4)) {
          if (puVar9 != puVar1) {
            uVar4 = *puVar9;
            *puVar9 = *puVar1;
            *puVar1 = uVar4;
          }
          iVar10 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000140a7948a;
        }
      }
      iVar10 = iVar8 + -2;
      iVar5 = iVar11 + -1;
      iVar8 = iVar10;
      iVar11 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar4 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar4;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar10 = iVar5 * 2 + 1;
          iVar11 = iVar5 * 2 + 2;
          iVar8 = iVar10;
          if ((iVar11 < param_2) &&
             (iVar8 = iVar11,
             *(float *)((longlong)param_1 + (longlong)iVar10 * 8 + 4) <=
             *(float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4))) {
            iVar8 = iVar10;
          }
          puVar1 = param_1 + iVar5;
          fVar3 = *(float *)((longlong)param_1 + (longlong)iVar8 * 8 + 4);
          puVar2 = param_1 + iVar8;
          if (*(float *)((longlong)puVar1 + 4) <= fVar3 && fVar3 != *(float *)((longlong)puVar1 + 4)
             ) break;
          if (puVar1 != puVar2) {
            uVar4 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar4;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140a795d0 FUN_140a795d0 body=619 status=ok
// SIG undefined FUN_140a795d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a795d0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_140a79690:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_140a796c7:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x000140a796d0;
          goto LAB_140a796e0;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar7 + 1, puVar5 <= puVar8) {
            pfVar1 = (float *)((longlong)puVar7 + 0xc);
            puVar7 = puVar5;
            if (*pfVar1 < *(float *)((longlong)puVar10 + 4) ||
                *pfVar1 == *(float *)((longlong)puVar10 + 4)) {
              puVar10 = puVar5;
            }
          }
          if (puVar10 != puVar8) {
            uVar3 = *puVar10;
            *puVar10 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_140a797b6;
      }
LAB_140a797a7:
      local_338 = lVar2;
      FUN_140a79460(puVar10,lVar4,param_3,param_4);
LAB_140a797b6:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x000140a796d0:
  pfVar1 = (float *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*(float *)((longlong)puVar9 + 4) <= *pfVar1 && *pfVar1 != *(float *)((longlong)puVar9 + 4))
  goto LAB_140a796c7;
LAB_140a796e0:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(float *)((longlong)puVar5 + -4) <= *(float *)((longlong)puVar9 + 4) &&
           *(float *)((longlong)puVar9 + 4) != *(float *)((longlong)puVar5 + -4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_140a796c7;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_140a797b6;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_140a797b6;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_140a797a7;
  goto LAB_140a79690;
}



// FUNCTION 140a79840 FUN_140a79840 body=69 status=ok
// SIG undefined FUN_140a79840(void)

ulonglong FUN_140a79840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142e0ceb0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a79890 FUN_140a79890 body=69 status=ok
// SIG undefined FUN_140a79890(void)

ulonglong FUN_140a79890(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1429ba110();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a798e0 FUN_140a798e0 body=69 status=ok
// SIG undefined FUN_140a798e0(void)

ulonglong FUN_140a798e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = USkeleton::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a79930 FUN_140a79930 body=69 status=ok
// SIG undefined FUN_140a79930(void)

ulonglong FUN_140a79930(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UNodeMappingContainer::StaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a79980 FUN_140a79980 body=89 status=ok
// SIG undefined FUN_140a79980(void)

void FUN_140a79980(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142a232e0();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140a799e0 FUN_140a799e0 body=198 status=ok
// SIG undefined FUN_140a799e0(void)

undefined8 FUN_140a799e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (longlong *)0x0) && (iVar1 = (int)param_2[1], 0 < iVar1)) {
    iVar2 = rand();
    iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar1);
    iVar2 = iVar1 + -1;
    if (iVar3 <= iVar1 + -1) {
      iVar2 = iVar3;
    }
    return *(undefined8 *)(*param_2 + (longlong)iVar2 * 8);
  }
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    iVar2 = rand();
    iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar1);
    iVar2 = iVar1 + -1;
    if (iVar3 <= iVar1 + -1) {
      iVar2 = iVar3;
    }
    return *(undefined8 *)(*param_1 + (longlong)iVar2 * 8);
  }
  return 0;
}



// FUNCTION 140a79ab0 FUN_140a79ab0 body=99 status=ok
// SIG undefined FUN_140a79ab0(void)

undefined8 FUN_140a79ab0(float param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint local_res8 [8];
  
  uVar2 = 1;
  local_res8[0] = ((int)ROUND(param_1 * 32767.0 + param_1 * 32767.0 + 0.5) >> 1) + 0x8000;
  if (0xffff < local_res8[0]) {
    bVar1 = 0 < (int)local_res8[0];
    local_res8[0] = 0;
    if (bVar1) {
      local_res8[0] = 0xffff;
    }
    uVar2 = 0;
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x10000);
  return uVar2;
}



// FUNCTION 140a79b20 FUN_140a79b20 body=613 status=ok
// SIG undefined FUN_140a79b20(void)

ulonglong FUN_140a79b20(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_60;
  
  fVar1 = *param_1;
  iVar5 = _finite((double)fVar1);
  if (iVar5 != 0) {
    fVar2 = param_1[1];
    iVar5 = _finite((double)fVar2);
    if (iVar5 != 0) {
      fVar3 = param_1[2];
      iVar5 = _finite((double)fVar3);
      if (iVar5 != 0) {
        iVar13 = (int)ROUND(fVar3 + fVar3 + 0.5);
        iVar5 = (int)ROUND(fVar2 + fVar2 + 0.5);
        uVar14 = iVar13 >> 1;
        uVar7 = iVar13 >> 0x1f;
        uVar7 = (uVar14 ^ uVar7) - uVar7;
        iVar13 = (int)ROUND(fVar1 + fVar1 + 0.5);
        uVar11 = iVar5 >> 1;
        uVar8 = iVar5 >> 0x1f;
        uVar8 = (uVar11 ^ uVar8) - uVar8;
        uVar12 = iVar13 >> 1;
        uVar9 = iVar13 >> 0x1f;
        uVar9 = (uVar12 ^ uVar9) - uVar9;
        if ((int)uVar8 <= (int)uVar9) {
          uVar8 = uVar9;
        }
        if ((int)uVar7 <= (int)uVar8) {
          uVar7 = uVar8;
        }
        uVar8 = uVar7 + 1;
        iVar5 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar10 = 0x20;
        iVar13 = iVar10;
        if (uVar8 != 0) {
          iVar13 = 0x1f - iVar5;
        }
        iVar5 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uVar7 != 0) {
          iVar10 = 0x1f - iVar5;
        }
        uVar8 = 0x20U - iVar10 & ~((iVar13 << 0x1a) >> 0x1f);
        uVar7 = 1;
        if ((uVar8 != 0) && (uVar7 = 0x14, uVar8 < 0x14)) {
          uVar7 = uVar8;
        }
        local_res8[0] = uVar7 - 1;
        (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x14);
        iVar5 = 1 << ((char)local_res8[0] + 1U & 0x1f);
        uVar8 = 1 << ((char)local_res8[0] + 2U & 0x1f);
        local_res18[0] = iVar5 + uVar12;
        local_res20[0] = iVar5 + uVar11;
        local_88[0] = iVar5 + uVar14;
        uVar7 = 0;
        if (local_res18[0] < uVar8) {
          uVar6 = 1;
        }
        else {
          bVar4 = (int)local_res18[0] < 1;
          local_res18[0] = uVar8 - 1;
          if (bVar4) {
            local_res18[0] = uVar7;
          }
          uVar6 = 0;
        }
        if (uVar8 <= local_res20[0]) {
          bVar4 = (int)local_res20[0] < 1;
          local_res20[0] = uVar8 - 1;
          if (bVar4) {
            local_res20[0] = uVar7;
          }
          uVar6 = 0;
        }
        if (uVar8 <= local_88[0]) {
          bVar4 = (int)local_88[0] < 1;
          local_88[0] = uVar8 - 1;
          if (bVar4) {
            local_88[0] = uVar7;
          }
          uVar6 = 0;
        }
        (**(code **)(*param_2 + 0x60))(param_2,local_res18,uVar8);
        (**(code **)(*param_2 + 0x60))(param_2,local_res20,uVar8);
        (**(code **)(*param_2 + 0x60))(param_2,local_88,uVar8);
        return uVar6;
      }
    }
  }
  local_60 = 0;
  local_70 = 0;
  local_78 = 0;
  uVar6 = FUN_140a79b20(&local_78,param_2);
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 140a79d90 FUN_140a79d90 body=142 status=ok
// SIG undefined FUN_140a79d90(void)

undefined8 * FUN_140a79d90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar9 = *(undefined4 *)(param_3 + 5);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar11 = *(undefined4 *)(param_3 + 6);
  uVar12 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar13 = *(undefined4 *)(param_3 + 7);
  uVar14 = *(undefined4 *)((longlong)param_3 + 0x3c);
  uVar15 = *(undefined4 *)(param_3 + 8);
  uVar16 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar17 = *(undefined4 *)(param_3 + 9);
  uVar18 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar19 = param_3[10];
  uVar2 = *(undefined4 *)(param_3 + 0xb);
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x5c);
  uVar6 = param_3[0xc];
  *param_1 = &PTR_GetPoolName_144230888;
  param_1[1] = param_2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 7) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar10;
  *(undefined4 *)(param_1 + 8) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar12;
  *(undefined4 *)(param_1 + 9) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar14;
  *(undefined4 *)(param_1 + 10) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar16;
  *(undefined4 *)(param_1 + 0xb) = uVar17;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar18;
  param_1[0xc] = uVar19;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  param_1[0xe] = uVar6;
  uVar19 = FDelegateHandle::GenerateNewID();
  param_1[0x10] = uVar19;
  *param_1 = &PTR_GetPoolName_1442308d0;
  return param_1;
}



// FUNCTION 140a79e20 FUN_140a79e20 body=47 status=ok
// SIG undefined FUN_140a79e20(void)

undefined8 * FUN_140a79e20(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14422ce08;
  param_1[0x8b] = &PTR_LAB_14422d4f0;
  return param_1;
}



// FUNCTION 140a79e50 FUN_140a79e50 body=119 status=ok
// SIG undefined FUN_140a79e50(void)

undefined8 * FUN_140a79e50(undefined8 *param_1)

{
  FUN_140b159d0();
  *param_1 = &PTR_FUN_14422ad98;
  param_1[0xcc] = &PTR_LAB_14422b620;
  param_1[0xcd] = &PTR_LAB_14422b648;
  param_1[0xce] = &PTR_LAB_14422b668;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(byte *)((longlong)param_1 + 0x4a4) = *(byte *)((longlong)param_1 + 0x4a4) | 2;
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0xdf;
  return param_1;
}



// FUNCTION 140a79ed0 FUN_140a79ed0 body=330 status=ok
// SIG undefined FUN_140a79ed0(void)

undefined8 * FUN_140a79ed0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14422fc40;
  FUN_142d2e580(param_1 + 0x8b);
  param_1[0xa2] = 0;
  FUN_142c8c260(param_1 + 0xa3,0x3f800000);
  FUN_142c8c260(param_1 + 0xaa,0x3e800000);
  FUN_142c8c260(param_1 + 0xb2,0);
  FUN_142c8c260(param_1 + 0xb9,0);
  FUN_142c8c260(param_1 + 0xc0,0x43fa0000);
  FUN_142c8c260(param_1 + 200,0x42c80000);
  FUN_142c8c260(param_1 + 0xcf,0x43480000);
  FUN_142c8c260(param_1 + 0xd6,0x43fa0000);
  *(undefined4 *)(param_1 + 0xdd) = 0x42a00000;
  *(undefined2 *)((longlong)param_1 + 0x6ec) = 0x100;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xe6) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  return param_1;
}



// FUNCTION 140a7a020 FUN_140a7a020 body=80 status=ok
// SIG undefined FUN_140a7a020(void)

undefined8 * FUN_140a7a020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 140a7a070 FUN_140a7a070 body=57 status=ok
// SIG undefined FUN_140a7a070(void)

undefined1 * FUN_140a7a070(undefined1 *param_1,undefined1 *param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FString::operator=(param_1 + 8,param_2 + 8);
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140a7a0b0 FUN_140a7a0b0 body=218 status=ok
// SIG undefined FUN_140a7a0b0(void)

undefined1 * FUN_140a7a0b0(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  
  plVar1 = (longlong *)(param_1 + 8);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_2 == 0) {
    *param_1 = param_3;
  }
  else {
    plVar2 = (longlong *)FSoftObjectPath::FSoftObjectPath(local_28);
    if (*plVar2 == 0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      FName::ToString(plVar2,&local_38);
    }
    if (plVar1 == &local_38) {
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free(*plVar1);
      }
      *plVar1 = local_38;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_30;
      *(undefined4 *)(param_1 + 0x14) = local_30._4_4_;
      local_30 = 0;
      local_38 = 0;
    }
    if (local_20 != 0) {
      FMemory::Free();
    }
    *param_1 = param_3;
  }
  return param_1;
}



// FUNCTION 140a7a190 FUN_140a7a190 body=977 status=ok
// SIG undefined FUN_140a7a190(void)

undefined8 * FUN_140a7a190(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  byte bVar4;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 2) =
       *(byte *)(param_1 + 2) ^ (*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1;
  bVar4 = (*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 2 ^ *(byte *)(param_1 + 2);
  *(byte *)(param_1 + 2) = bVar4;
  bVar4 = (*(byte *)(param_2 + 2) ^ bVar4) & 4 ^ bVar4;
  *(byte *)(param_1 + 2) = bVar4;
  bVar4 = (*(byte *)(param_2 + 2) ^ bVar4) & 8 ^ bVar4;
  *(byte *)(param_1 + 2) = bVar4;
  bVar4 = (*(byte *)(param_2 + 2) ^ bVar4) & 0x10 ^ bVar4;
  *(byte *)(param_1 + 2) = bVar4;
  bVar4 = (*(byte *)(param_2 + 2) ^ bVar4) & 0x20 ^ bVar4;
  *(byte *)(param_1 + 2) = bVar4;
  bVar4 = (*(byte *)(param_2 + 2) ^ bVar4) & 0x40 ^ bVar4;
  *(byte *)(param_1 + 2) = bVar4;
  *(byte *)(param_1 + 2) = (*(byte *)(param_2 + 2) ^ bVar4) & 0x7f ^ *(byte *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar3 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 9,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[9],pvVar3,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  FUN_140729f20(param_1 + 0xc,param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  if (*(char *)((longlong)param_2 + 0xfc) != '\0') {
    param_1[0x1e] = param_2[0x1e];
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
  }
  param_1[0x20] = param_2[0x20];
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  if (*(char *)((longlong)param_2 + 0x10c) != '\0') {
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
    *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  if (*(char *)((longlong)param_2 + 0x11c) != '\0') {
    param_1[0x22] = param_2[0x22];
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
    *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  if (*(char *)((longlong)param_2 + 300) != '\0') {
    param_1[0x24] = param_2[0x24];
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    *(undefined1 *)((longlong)param_1 + 300) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  if (*(char *)((longlong)param_2 + 0x13c) != '\0') {
    param_1[0x26] = param_2[0x26];
    *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
    *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  if (*(char *)((longlong)param_2 + 0x14c) != '\0') {
    param_1[0x28] = param_2[0x28];
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
    *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  if (*(char *)((longlong)param_2 + 0x15c) != '\0') {
    param_1[0x2a] = param_2[0x2a];
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
    *(undefined1 *)((longlong)param_1 + 0x15c) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  if (*(char *)((longlong)param_2 + 0x164) != '\0') {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  if (*(char *)((longlong)param_2 + 0x174) != '\0') {
    param_1[0x2d] = param_2[0x2d];
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
    *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  if (*(char *)((longlong)param_2 + 0x17c) != '\0') {
    *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
    *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
  }
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x194);
  param_1[0x33] = 0;
  iVar1 = *(int *)(param_2 + 0x34);
  pvVar3 = (void *)param_2[0x33];
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x33,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x33],pvVar3,(longlong)iVar1 << 3);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 0x36,param_2 + 0x36);
  return param_1;
}



// FUNCTION 140a7a570 FUN_140a7a570 body=649 status=ok
// SIG undefined FUN_140a7a570(void)

undefined8 * FUN_140a7a570(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *_Dst;
  
  *param_1 = *param_2;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0xb,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xb],_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_2 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_2 + 0xa2);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (((param_2 + 0x1b != param_1 + 0x1b) && (*(int *)(param_2 + 0x1c) != 0)) &&
     (plVar2 = (longlong *)param_2[0x1b], plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  param_1[0x3d] = 0;
  puVar7 = (undefined8 *)param_2[0x3d];
  if ((undefined8 *)param_2[0x3d] == (undefined8 *)0x0) {
    puVar7 = param_2 + 0x1d;
  }
  FUN_140a79090(param_1 + 0x1d,puVar7,*(undefined4 *)(param_2 + 0x3e),0,0);
  param_1[0x43] = 0;
  iVar1 = *(int *)(param_2 + 0x44);
  puVar7 = (undefined8 *)param_2[0x43];
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  }
  else {
    FUN_140a95e40(param_1 + 0x3f,iVar1,0);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = param_2 + 0x3f;
    }
    _Dst = (undefined8 *)param_1[0x43];
    if ((undefined8 *)param_1[0x43] == (undefined8 *)0x0) {
      _Dst = param_1 + 0x3f;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,puVar7,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140a7a800 FUN_140a7a800 body=198 status=ok
// SIG undefined FUN_140a7a800(void)

undefined8 * FUN_140a7a800(undefined8 *param_1)

{
  FUN_142d0a5f0();
  *param_1 = &PTR__scalar_deleting_destructor__14422e358;
  FUN_142d0ab00(param_1 + 0x6a);
  *(undefined1 *)((longlong)param_1 + 0x504) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined2 *)(param_1 + 0xa5) = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0x3f800000;
  param_1[0xaa] = 0;
  *(undefined2 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xab] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xaf] = 0;
  return param_1;
}



// FUNCTION 140a7a8d0 FUN_140a7a8d0 body=368 status=ok
// SIG undefined FUN_140a7a8d0(void)

longlong FUN_140a7a8d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_140a7ab30();
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  if (*(char *)(param_2 + 0x1b4) != '\0') {
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    *(undefined1 *)(param_1 + 0x1b4) = 1;
  }
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  if (*(char *)(param_2 + 0x1bc) != '\0') {
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined1 *)(param_1 + 0x1bc) = 1;
  }
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  if (*(char *)(param_2 + 0x1c8) != '\0') {
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
    *(undefined1 *)(param_1 + 0x1c8) = 1;
  }
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1d9) = *(undefined1 *)(param_2 + 0x1d9);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  iVar4 = *(int *)(param_2 + 0x1e8);
  lVar1 = *(longlong *)(param_2 + 0x1e0);
  *(int *)(param_1 + 0x1e8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1e0,iVar4,0);
    puVar2 = *(undefined4 **)(param_1 + 0x1e0);
    puVar3 = (undefined4 *)(lVar1 + 4);
    do {
      *puVar2 = puVar3[-1];
      puVar2[1] = *puVar3;
      puVar2[2] = puVar3[1];
      puVar2[3] = puVar3[2];
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 140a7aa40 FUN_140a7aa40 body=120 status=ok
// SIG undefined FUN_140a7aa40(void)

longlong FUN_140a7aa40(longlong param_1)

{
  undefined1 in_stack_00000028;
  
  FUN_142d0aa70();
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = in_stack_00000028;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  return param_1;
}



// FUNCTION 140a7aac0 FUN_140a7aac0 body=110 status=ok
// SIG undefined FUN_140a7aac0(void)

longlong FUN_140a7aac0(longlong param_1)

{
  FUN_142d0ab00();
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a7ab30 FUN_140a7ab30 body=662 status=ok
// SIG undefined FUN_140a7ab30(void)

undefined8 * FUN_140a7ab30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = param_2[1];
  if (param_2[1] != 0) {
    uVar2 = param_2[2];
  }
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_140729f20(param_1 + 10,param_2 + 10);
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  *(uint *)(param_1 + 0x1e) =
       *(uint *)(param_1 + 0x1e) ^ (*(uint *)(param_1 + 0x1e) ^ *(uint *)(param_2 + 0x1e)) & 1;
  uVar3 = (*(uint *)(param_2 + 0x1e) ^ *(uint *)(param_1 + 0x1e)) & 2 ^ *(uint *)(param_1 + 0x1e);
  *(uint *)(param_1 + 0x1e) = uVar3;
  uVar3 = (uVar3 ^ *(uint *)(param_2 + 0x1e)) & 4 ^ uVar3;
  *(uint *)(param_1 + 0x1e) = uVar3;
  uVar3 = (uVar3 ^ *(uint *)(param_2 + 0x1e)) & 8 ^ uVar3;
  *(uint *)(param_1 + 0x1e) = uVar3;
  uVar3 = (uVar3 ^ *(uint *)(param_2 + 0x1e)) & 0x10 ^ uVar3;
  *(uint *)(param_1 + 0x1e) = uVar3;
  *(uint *)(param_1 + 0x1e) = (uVar3 ^ *(uint *)(param_2 + 0x1e)) & 0x20 ^ uVar3;
  *(undefined8 *)((longlong)param_1 + 0xf4) = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x124) = *(undefined1 *)((longlong)param_2 + 0x124);
  *(undefined1 *)((longlong)param_1 + 0x125) = *(undefined1 *)((longlong)param_2 + 0x125);
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  if (*(char *)((longlong)param_2 + 300) != '\0') {
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    *(undefined1 *)((longlong)param_1 + 300) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x131) = 0;
  if (*(char *)((longlong)param_2 + 0x131) != '\0') {
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
    *(undefined1 *)((longlong)param_1 + 0x131) = 1;
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 0x28,param_2 + 0x28);
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = 0;
  iVar1 = *(int *)(param_2 + 0x35);
  _Src = (void *)param_2[0x34];
  *(int *)(param_1 + 0x35) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x34,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x34],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140a7add0 FUN_140a7add0 body=203 status=ok
// SIG undefined FUN_140a7add0(void)

undefined1 * FUN_140a7add0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  _Src = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x30,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x30),_Src,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x50] = param_2[0x50];
  return param_1;
}



// FUNCTION 140a7aea0 FUN_140a7aea0 body=187 status=ok
// SIG undefined FUN_140a7aea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140a7aea0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18;
  undefined4 local_10;
  
  *param_1 = (longlong)param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = UScrollBox::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  param_1[3] = lVar2;
  lVar2 = *(longlong *)(*param_1 + 0x168);
  if (lVar2 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(longlong *)(lVar2 + 0x220);
    local_10 = *(undefined4 *)(lVar2 + 0x228);
  }
  param_1[4] = local_18;
  *(longlong *)((longlong)param_1 + 0x2c) = local_18;
  *(undefined4 *)(param_1 + 5) = local_10;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_10;
  return param_1;
}



// FUNCTION 140a7af60 FUN_140a7af60 body=33 status=ok
// SIG undefined FUN_140a7af60(void)

undefined8 * FUN_140a7af60(undefined8 *param_1)

{
  FUN_1430f2d30();
  *param_1 = &PTR__scalar_deleting_destructor__14422a570;
  return param_1;
}



// FUNCTION 140a7af90 UGameplayAbilitySet body=43 status=ok
// SIG undefined UGameplayAbilitySet(void)

undefined8 * UGameplayAbilitySet::UGameplayAbilitySet(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *param_1 = &PTR_FUN_143fcfb10;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140a7afc0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_14422a818;
  return param_1;
}



// FUNCTION 140a7aff0 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_14422aad8;
  return param_1;
}



// FUNCTION 140a7b020 FUN_140a7b020 body=139 status=ok
// SIG undefined FUN_140a7b020(void)

undefined8 * FUN_140a7b020(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14422d518;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x42340000;
  return param_1;
}



// FUNCTION 140a7b0b0 FUN_140a7b0b0 body=54 status=ok
// SIG undefined FUN_140a7b0b0(void)

undefined8 * FUN_140a7b0b0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 6) = 2;
  *param_1 = &PTR_FUN_14422d798;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a7b0f0 FUN_140a7b0f0 body=252 status=ok
// SIG undefined FUN_140a7b0f0(void)

undefined8 * FUN_140a7b0f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14422bfb8;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3dcccccd;
  *(undefined2 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43) = 1;
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_142d979c0(param_1 + 0x21);
  *(undefined8 *)((longlong)param_1 + 100) = 0x4200000041800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42000000;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return param_1;
}



// FUNCTION 140a7b1f0 UNF_AN_PlayCameraAnimation body=41 status=ok
// SIG undefined UNF_AN_PlayCameraAnimation(void)

undefined8 * UNF_AN_PlayCameraAnimation::UNF_AN_PlayCameraAnimation(undefined8 *param_1)

{
  FUN_140e6aa50();
  *param_1 = &PTR_FUN_14422bab8;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 140a7b220 FUN_140a7b220 body=66 status=ok
// SIG undefined FUN_140a7b220(void)

undefined8 * FUN_140a7b220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_14422da18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3fc00000;
  return param_1;
}



// FUNCTION 140a7b270 FUN_140a7b270 body=237 status=ok
// SIG undefined FUN_140a7b270(void)

undefined8 * FUN_140a7b270(undefined8 *param_1)

{
  FUN_142d0b1e0();
  *param_1 = &PTR_FUN_14422df10;
  param_1[5] = &PTR_LAB_14422e310;
  param_1[0x39] = &PTR_LAB_14422e340;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 2;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 99);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x324);
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x40a00000;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_14246fd50(param_1 + 99,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x324,0x3f800000);
  return param_1;
}



// FUNCTION 140a7b360 FUN_140a7b360 body=322 status=ok
// SIG undefined FUN_140a7b360(void)

undefined8 * FUN_140a7b360(undefined8 *param_1)

{
  FUN_142d0b430();
  *param_1 = &PTR_FUN_14422c238;
  param_1[5] = &PTR_LAB_14422c6e8;
  param_1[0x39] = &PTR_LAB_14422c718;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x11d);
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[299] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x135] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x123) = 1;
  *(undefined4 *)(param_1 + 0x12f) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a7b4b0 FUN_140a7b4b0 body=279 status=ok
// SIG undefined FUN_140a7b4b0(void)

undefined8 * FUN_140a7b4b0(undefined8 *param_1)

{
  FUN_142d0b8d0();
  *param_1 = &PTR_FUN_14422ed40;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined4 *)(param_1 + 0x3f) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x46) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x4d) = 0xbf800000;
  return param_1;
}



// FUNCTION 140a7b5d0 FUN_140a7b5d0 body=1886 status=ok
// SIG undefined FUN_140a7b5d0(void)

undefined8 * FUN_140a7b5d0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  FUN_142d0baa0();
  *param_1 = &PTR_FUN_14422eab0;
  plVar1 = param_1 + 0x61;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *plVar1 = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f800000;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FName::FName(param_1 + 0x7d,L"DamageNumber",1);
  FName::FName(param_1 + 0x7e,L"HitCrit",1);
  FName::FName(param_1 + 0x7f,L"Resist",1);
  FName::FName(param_1 + 0x80,L"Immune",1);
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x43480000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x8a);
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xa1);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xb0);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xd0) = 2;
  *(undefined4 *)(param_1 + 0xd1) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x3f19999a;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = 0x40000000;
  *(undefined4 *)(param_1 + 0xe2) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x3f266666;
  *(undefined4 *)(param_1 + 0xe7) = 0x3fc00000;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0x3f800000;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  FName::FName(param_1 + 0xfb,L"FireDamageEvent",1);
  FName::FName(param_1 + 0xfc,L"Single",1);
  *(undefined4 *)(param_1 + 0xfd) = 3;
  FName::FName(param_1 + 0xfe,L"LOSDamageEvent",1);
  FName::FName(param_1 + 0xff,L"Full",1);
  FName::FName(param_1 + 0x100,L"DamageSeverity",1);
  FName::FName(param_1 + 0x101,L"DamageDirection",1);
  *(undefined4 *)(param_1 + 0x102) = 0x3e000000;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0x40000000;
  *(undefined4 *)(param_1 + 0x103) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x81c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x104) = 0x453b8000;
  *(undefined4 *)(param_1 + 0x105) = 0x14;
  param_1[0x109] = 0;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  param_1[0x108] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  if ((*(int *)((longlong)param_1 + 0x854) < 0) && (*(int *)((longlong)param_1 + 0x854) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x109,0);
  }
  if ((undefined2 *)param_1[0x109] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x109] = 0;
  }
  *(undefined4 *)(param_1 + 0x107) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined4 *)(param_1 + 0x10b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0;
  param_1[0x10d] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  if ((*(int *)((longlong)param_1 + 0x87c) < 0) && (*(int *)((longlong)param_1 + 0x87c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10e,0);
  }
  if ((undefined2 *)param_1[0x10e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x10e] = 0;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x884) = 0;
  param_1[0x112] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if ((*(int *)((longlong)param_1 + 0x8a4) < 0) && (*(int *)((longlong)param_1 + 0x8a4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x113,0);
  }
  if ((undefined2 *)param_1[0x113] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x113] = 0;
  }
  *(undefined4 *)(param_1 + 0x111) = 0;
  iVar2 = *(int *)(param_1 + 0x62);
  *(int *)(param_1 + 0x62) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x314) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = 1;
  *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x62);
  *(int *)(param_1 + 0x62) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x314) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = 2;
  *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x62);
  *(int *)(param_1 + 0x62) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x314) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = 3;
  *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x62);
  *(int *)(param_1 + 0x62) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x314) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = 4;
  *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd2) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0x3f800000;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"DamageFlash",1);
  param_1[0xd9] = *puVar5;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"DamageFlashColor",1);
  uVar4 = *puVar5;
  param_1[0x86] = 0xc1c00000;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0xda] = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0x4100000040400000;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0xc00ccccd;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x40800000;
  *(undefined4 *)(param_1 + 0x88) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x89) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x99) = 3;
  *(undefined4 *)(param_1 + 0x9b) = 0x41a00000;
  FName::FName(&local_res8,L"LifetimeFade",1);
  param_1[0x9d] = local_res8;
  FName::FName(&local_res8,L"PercentOfLife",1);
  param_1[0x9e] = local_res8;
  FUN_142c4aa90(param_1 + 0x9f,0x3e99999a,0x3f000000);
  FName::FName(&local_res8,L"CenterFade",1);
  param_1[0xa0] = local_res8;
  *(undefined4 *)(param_1 + 0xbf) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xf2) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a7bd30 FUN_140a7bd30 body=319 status=ok
// SIG undefined FUN_140a7bd30(void)

undefined8 * FUN_140a7bd30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *param_1 = &PTR_FUN_14422e400;
  param_1[5] = &PTR_LAB_14422e7f8;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x37);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1c4);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1d4);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x3c);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1ec);
  FUN_14246fd50(param_1 + 0x37,0xbf800000);
  FUN_14246fd50((longlong)param_1 + 0x1c4,0xbf800000);
  FUN_14246fd50((longlong)param_1 + 0x1d4,0xbf800000);
  *(undefined1 *)(param_1 + 0x3a) = 1;
  FUN_14246fd50(param_1 + 0x3c,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x1ec,0x3f800000);
  return param_1;
}



// FUNCTION 140a7be70 FUN_140a7be70 body=54 status=ok
// SIG undefined FUN_140a7be70(void)

undefined8 * FUN_140a7be70(undefined8 *param_1)

{
  FUN_142d0bc00();
  *param_1 = &PTR__scalar_deleting_destructor__14422f500;
  param_1[5] = &PTR_FUN_14422f790;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 140a7beb0 FUN_140a7beb0 body=33 status=ok
// SIG undefined FUN_140a7beb0(void)

undefined8 * FUN_140a7beb0(undefined8 *param_1)

{
  FUN_142d2eda0();
  *param_1 = &PTR_FUN_14422dc98;
  return param_1;
}



// FUNCTION 140a7bee0 FUN_140a7bee0 body=58 status=ok
// SIG undefined FUN_140a7bee0(void)

undefined8 * FUN_140a7bee0(undefined8 *param_1)

{
  FUN_142d2fa10();
  *param_1 = &PTR__scalar_deleting_destructor__14422f7e8;
  param_1[5] = &PTR_LAB_14422fbf8;
  param_1[0x2f] = &PTR_LAB_14422fc28;
  return param_1;
}



// FUNCTION 140a7bf20 FUN_140a7bf20 body=104 status=ok
// SIG undefined FUN_140a7bf20(void)

undefined8 * FUN_140a7bf20(undefined8 *param_1)

{
  FUN_142d2fa70();
  *param_1 = &PTR_FUN_14422e828;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  return param_1;
}



// FUNCTION 140a7bf90 FUN_140a7bf90 body=51 status=ok
// SIG undefined FUN_140a7bf90(void)

undefined8 * FUN_140a7bf90(undefined8 *param_1)

{
  FUN_14235ee30();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *param_1 = &PTR_FUN_144230330;
  param_1[5] = &PTR_LAB_144230848;
  return param_1;
}



// FUNCTION 140a7bfd0 FUN_140a7bfd0 body=201 status=ok
// SIG undefined FUN_140a7bfd0(void)

undefined8 * FUN_140a7bfd0(undefined8 *param_1)

{
  FUN_142d2fc70();
  *param_1 = &PTR_FUN_14422efd0;
  param_1[5] = &PTR_LAB_14422f3f0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 2;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x76,0,0x100);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 7) = 5;
  return param_1;
}



// FUNCTION 140a7c0a0 FUN_140a7c0a0 body=251 status=ok
// SIG undefined FUN_140a7c0a0(void)

undefined8 * FUN_140a7c0a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_14422c740;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 1;
  *(undefined4 *)(param_1 + 0xb) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xd) = 0x43960000;
  *(undefined4 *)(param_1 + 0x14) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x42480000;
  *(undefined1 *)(param_1 + 0x27) = 2;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  return param_1;
}



// FUNCTION 140a7c1a0 FUN_140a7c1a0 body=236 status=ok
// SIG undefined FUN_140a7c1a0(void)

undefined8 * FUN_140a7c1a0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14422c9c0;
  param_1[5] = &PTR_LAB_14422cdd8;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3dcccccd;
  param_1[0x5b] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  return param_1;
}



// FUNCTION 140a7c290 FUN_140a7c290 body=154 status=ok
// SIG undefined FUN_140a7c290(void)

void FUN_140a7c290(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x50);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x14;
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



// FUNCTION 140a7c330 FUN_140a7c330 body=108 status=ok
// SIG undefined FUN_140a7c330(void)

void FUN_140a7c330(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x14;
    do {
      thunk_FUN_142478640(lVar1 + 0xc);
      thunk_FUN_142478640(lVar1);
      thunk_FUN_142478640(lVar1 + -0xc);
      lVar1 = lVar1 + 0x30;
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



// FUNCTION 140a7c3a0 ~TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=400 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_140a7c461;
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
LAB_140a7c461:
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
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 140a7c530 FUN_140a7c530 body=385 status=ok
// SIG undefined FUN_140a7c530(void)

void FUN_140a7c530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  *(undefined ***)(param_1 + 0x670) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x668) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_1441b4c68;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x628);
  iVar5 = *(int *)(param_1 + 0x598);
  plVar4 = *(longlong **)(param_1 + 0x590);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x590);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x548);
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
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140a7c6c0 FUN_140a7c6c0 body=75 status=ok
// SIG undefined FUN_140a7c6c0(void)

void FUN_140a7c6c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  FUN_1409f5970(param_1 + 0xe8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140a7c710 FUN_140a7c710 body=137 status=ok
// SIG undefined FUN_140a7c710(void)

void FUN_140a7c710(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__14422e358;
  if (*(char *)(param_1 + 0xae) != '\0') {
    *(undefined1 *)(param_1 + 0xae) = 0;
  }
  if (param_1[0xa6] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0xa3) != '\0') {
    *(undefined1 *)(param_1 + 0xa3) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x50c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x50c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x504) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x504) = 0;
  }
  FUN_140a7c7a0(param_1 + 0x6a);
  FUN_142d0c310(param_1);
  return;
}



// FUNCTION 140a7c7a0 FUN_140a7c7a0 body=120 status=ok
// SIG undefined FUN_140a7c7a0(void)

void FUN_140a7c7a0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x180) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x170);
    if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x150);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x131) != '\0') {
    *(undefined1 *)(param_1 + 0x131) = 0;
  }
  if (*(char *)(param_1 + 300) != '\0') {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  return;
}



// FUNCTION 140a7c820 FUN_140a7c820 body=321 status=ok
// SIG undefined FUN_140a7c820(void)

void FUN_140a7c820(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2b4);
  thunk_FUN_142478640(param_1 + 0x2a4);
  thunk_FUN_142478640(param_1 + 0x298);
  thunk_FUN_142478640(param_1 + 0x28c);
  thunk_FUN_142478640(param_1 + 0x280);
  FUN_140a7c330(param_1 + 0x270);
  thunk_FUN_142478640(param_1 + 0x264);
  thunk_FUN_142478640(param_1 + 600);
  thunk_FUN_142478640(param_1 + 0x24c);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x208);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d0);
  *(undefined ***)(param_1 + 0x1c8) = &PTR_FUN_1440732c8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140a7c970 FUN_140a7c970 body=770 status=ok
// SIG undefined FUN_140a7c970(void)

void FUN_140a7c970(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x7d4);
  thunk_FUN_142478640(param_1 + 0x7c8);
  thunk_FUN_142478640(param_1 + 0x7bc);
  thunk_FUN_142478640(param_1 + 0x7b0);
  FUN_140a7c330(param_1 + 0x720);
  thunk_FUN_142478640(param_1 + 0x710);
  thunk_FUN_142478640(param_1 + 0x704);
  thunk_FUN_142478640(param_1 + 0x6f8);
  thunk_FUN_142478640(param_1 + 0x6ec);
  thunk_FUN_142478640(param_1 + 0x6e0);
  thunk_FUN_142478640(param_1 + 0x6c8);
  iVar3 = *(int *)(param_1 + 0x680);
  lVar2 = *(longlong *)(param_1 + 0x678);
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xf;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x678);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x638);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *(undefined4 *)(param_1 + 0x620) = 0;
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x588);
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x268);
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1e8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d0);
  *(undefined ***)(param_1 + 0x1c8) = &PTR_FUN_1440732c8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140a7cc80 FUN_140a7cc80 body=145 status=ok
// SIG undefined FUN_140a7cc80(void)

void FUN_140a7cc80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1f8);
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x158);
  FRichCurve::~FRichCurve(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a7cd20 FUN_140a7cd20 body=129 status=ok
// SIG undefined FUN_140a7cd20(void)

void FUN_140a7cd20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x238);
    do {
      FUN_140591060(plVar2 + 4);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_1409c53c0(plVar2 + -0x43);
      plVar2 = plVar2 + 0x4e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a7cdb0 FUN_140a7cdb0 body=163 status=ok
// SIG undefined FUN_140a7cdb0(void)

void FUN_140a7cdb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a7ce60 FUN_140a7ce60 body=166 status=ok
// SIG undefined FUN_140a7ce60(void)

void FUN_140a7ce60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  iVar3 = *(int *)(param_1 + 400);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-3] != 0) {
        FMemory::Free();
      }
      if (plVar2[-5] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x188);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140a7cf10 FUN_140a7cf10 body=160 status=ok
// SIG undefined FUN_140a7cf10(void)

void FUN_140a7cf10(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x1f0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x1e0);
    if (*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x1c0);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a7cfb0 FUN_140a7cfb0 body=149 status=ok
// SIG undefined FUN_140a7cfb0(void)

void FUN_140a7cfb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140a7d050 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FHitResult,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
  }
  return param_1;
}



// FUNCTION 140a7d0d0 FUN_140a7d0d0 body=48 status=ok
// SIG undefined FUN_140a7d0d0(void)

undefined1 * FUN_140a7d0d0(undefined1 *param_1,undefined1 *param_2)

{
  FString::operator=(param_1 + 8,param_2 + 8);
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140a7d100 FUN_140a7d100 body=1184 status=ok
// SIG undefined FUN_140a7d100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140a7d100(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  void *_Src;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [80];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = *param_2;
  uStack_a0 = (longlong *)param_2[1];
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_a0 + 1) = (int)uStack_a0[1] + 1;
    UNLOCK();
  }
  if (&local_a8 != param_1) {
    local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uVar5 = *param_1;
    plVar8 = (longlong *)param_1[1];
    local_48 = (undefined4)local_a8;
    uStack_44 = local_a8._4_4_;
    uStack_40 = (undefined4)uStack_a0;
    uStack_3c = uStack_a0._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a0._4_4_;
    local_a8 = uVar5;
    uStack_a0 = plVar8;
  }
  plVar8 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_a0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_a0 + 8))(uStack_a0,1);
      }
    }
  }
  puVar3 = param_1 + 9;
  *(byte *)(param_1 + 2) =
       *(byte *)(param_1 + 2) ^ (*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1;
  bVar7 = (*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 2 ^ *(byte *)(param_1 + 2);
  *(byte *)(param_1 + 2) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 2)) & 4 ^ bVar7;
  *(byte *)(param_1 + 2) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 2)) & 8 ^ bVar7;
  *(byte *)(param_1 + 2) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 2)) & 0x10 ^ bVar7;
  *(byte *)(param_1 + 2) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 2)) & 0x20 ^ bVar7;
  *(byte *)(param_1 + 2) = bVar7;
  bVar7 = (bVar7 ^ *(byte *)(param_2 + 2)) & 0x40 ^ bVar7;
  *(byte *)(param_1 + 2) = bVar7;
  *(byte *)(param_1 + 2) = (bVar7 ^ *(byte *)(param_2 + 2)) & 0x7f ^ *(byte *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (puVar3 != param_2 + 9) {
    iVar4 = *(int *)(param_2 + 10);
    _Src = (void *)param_2[9];
    *(int *)(param_1 + 10) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x54) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar4 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  FUN_140729f20(param_1 + 0xc,param_2 + 0xc);
  if (param_2 + 0x1e != param_1 + 0x1e) {
    if (*(char *)((longlong)param_1 + 0xfc) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
    }
    if (*(char *)((longlong)param_2 + 0xfc) != '\0') {
      param_1[0x1e] = param_2[0x1e];
      *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
      *(undefined1 *)((longlong)param_1 + 0xfc) = 1;
    }
  }
  param_1[0x20] = param_2[0x20];
  if (param_2 + 0x21 != param_1 + 0x21) {
    if (*(char *)((longlong)param_1 + 0x10c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x10c) != '\0') {
      *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
      *(undefined1 *)((longlong)param_1 + 0x10c) = 1;
    }
  }
  if (param_2 + 0x22 != param_1 + 0x22) {
    if (*(char *)((longlong)param_1 + 0x11c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x11c) != '\0') {
      param_1[0x22] = param_2[0x22];
      *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
      *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
    }
  }
  if (param_2 + 0x24 != param_1 + 0x24) {
    if (*(char *)((longlong)param_1 + 300) != '\0') {
      *(undefined1 *)((longlong)param_1 + 300) = 0;
    }
    if (*(char *)((longlong)param_2 + 300) != '\0') {
      param_1[0x24] = param_2[0x24];
      *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
      *(undefined1 *)((longlong)param_1 + 300) = 1;
    }
  }
  if (param_2 + 0x26 != param_1 + 0x26) {
    if (*(char *)((longlong)param_1 + 0x13c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x13c) != '\0') {
      param_1[0x26] = param_2[0x26];
      *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
      *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
    }
  }
  if (param_2 + 0x28 != param_1 + 0x28) {
    if (*(char *)((longlong)param_1 + 0x14c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x14c) != '\0') {
      param_1[0x28] = param_2[0x28];
      *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
      *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
    }
  }
  if (param_2 + 0x2a != param_1 + 0x2a) {
    if (*(char *)((longlong)param_1 + 0x15c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x15c) != '\0') {
      param_1[0x2a] = param_2[0x2a];
      *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
      *(undefined1 *)((longlong)param_1 + 0x15c) = 1;
    }
  }
  if (param_2 + 0x2c != param_1 + 0x2c) {
    if (*(char *)((longlong)param_1 + 0x164) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x164) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x164) != '\0') {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined1 *)((longlong)param_1 + 0x164) = 1;
    }
  }
  if (param_2 + 0x2d != param_1 + 0x2d) {
    if (*(char *)((longlong)param_1 + 0x174) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x174) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x174) != '\0') {
      param_1[0x2d] = param_2[0x2d];
      *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
      *(undefined1 *)((longlong)param_1 + 0x174) = 1;
    }
  }
  if (param_2 + 0x2f != param_1 + 0x2f) {
    if (*(char *)((longlong)param_1 + 0x17c) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x17c) != '\0') {
      *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
      *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
    }
  }
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x194);
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x33,param_2 + 0x33);
  lVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_2 + 0x36);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar6,param_1 + 0x36,0x50);
  if (*(int *)(lVar6 + 0x40) != 0) {
    plVar8 = *(longlong **)(lVar6 + 0x30);
    if (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0) {
      plVar8 = (longlong *)(lVar6 + 0x10);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (*(longlong *)(lVar6 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140a7d5a0 FUN_140a7d5a0 body=134 status=ok
// SIG undefined FUN_140a7d5a0(void)

undefined8 * FUN_140a7d5a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 2,param_2 + 2);
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1;
  *(byte *)(param_1 + 4) =
       *(byte *)(param_1 + 4) ^ (*(byte *)(param_2 + 4) ^ *(byte *)(param_1 + 4)) & 2;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  param_1[0xb] = param_2[0xb];
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 140a7d630 FUN_140a7d630 body=759 status=ok
// SIG undefined FUN_140a7d630(void)

longlong FUN_140a7d630(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_140a7db00(param_1 + 0x10,param_2 + 0x10);
  FUN_140a7dd90(param_1 + 0x1c0,param_2 + 0x1c0);
  puVar1 = (undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  uVar3 = *(undefined4 *)(param_2 + 0x2d4);
  uVar4 = *(undefined4 *)(param_2 + 0x2d8);
  uVar5 = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = uVar3;
  *(undefined4 *)(param_1 + 0x2d8) = uVar4;
  *(undefined4 *)(param_1 + 0x2dc) = uVar5;
  if (puVar1 != (undefined8 *)(param_2 + 0x2e0)) {
    iVar2 = *(int *)(param_2 + 0x2e8);
    _Src = *(void **)(param_2 + 0x2e0);
    *(int *)(param_1 + 0x2e8) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x2ec) == 0)) {
      *(undefined4 *)(param_1 + 0x2ec) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 4);
    }
  }
  *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
  *(undefined1 *)(param_1 + 0x309) = *(undefined1 *)(param_2 + 0x309);
  TArray<FHitResult,FDefaultAllocator>::operator=(param_1 + 0x310,param_2 + 0x310);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
  *(undefined1 *)(param_1 + 0x331) = *(undefined1 *)(param_2 + 0x331);
  *(undefined1 *)(param_1 + 0x332) = *(undefined1 *)(param_2 + 0x332);
  *(undefined1 *)(param_1 + 0x333) = *(undefined1 *)(param_2 + 0x333);
  *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_2 + 0x334);
  *(undefined1 *)(param_1 + 0x335) = *(undefined1 *)(param_2 + 0x335);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined1 *)(param_1 + 0x344) = *(undefined1 *)(param_2 + 0x344);
  *(undefined1 *)(param_1 + 0x345) = *(undefined1 *)(param_2 + 0x345);
  FUN_140a7d9f0(param_1 + 0x350,param_2 + 0x350);
  uVar6 = *(undefined8 *)(param_2 + 0x558);
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_2 + 0x550);
  *(undefined8 *)(param_1 + 0x558) = uVar6;
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_2 + 0x560);
  *(undefined1 *)(param_1 + 0x568) = *(undefined1 *)(param_2 + 0x568);
  if ((undefined4 *)(param_2 + 0x56c) != (undefined4 *)(param_1 + 0x56c)) {
    if (*(char *)(param_1 + 0x570) != '\0') {
      *(undefined1 *)(param_1 + 0x570) = 0;
    }
    if (*(char *)(param_2 + 0x570) != '\0') {
      *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
      *(undefined1 *)(param_1 + 0x570) = 1;
    }
  }
  *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_2 + 0x578);
  return param_1;
}



// FUNCTION 140a7d930 FUN_140a7d930 body=187 status=ok
// SIG undefined FUN_140a7d930(void)

longlong FUN_140a7d930(longlong param_1,longlong param_2)

{
  if ((undefined4 *)(param_2 + 8) != (undefined4 *)(param_1 + 8)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (*(char *)(param_2 + 0xc) != '\0') {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  if ((undefined4 *)(param_2 + 0x10) != (undefined4 *)(param_1 + 0x10)) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    if (*(char *)(param_2 + 0x14) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  if ((undefined4 *)(param_2 + 0x18) != (undefined4 *)(param_1 + 0x18)) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
    if (*(char *)(param_2 + 0x1c) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  FUN_140a29610(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 140a7d9f0 FUN_140a7d9f0 body=272 status=ok
// SIG undefined FUN_140a7d9f0(void)

longlong FUN_140a7d9f0(longlong param_1,longlong param_2)

{
  FUN_140a7db00();
  if ((undefined4 *)(param_2 + 0x1b0) != (undefined4 *)(param_1 + 0x1b0)) {
    if (*(char *)(param_1 + 0x1b4) != '\0') {
      *(undefined1 *)(param_1 + 0x1b4) = 0;
    }
    if (*(char *)(param_2 + 0x1b4) != '\0') {
      *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
      *(undefined1 *)(param_1 + 0x1b4) = 1;
    }
  }
  if ((undefined4 *)(param_2 + 0x1b8) != (undefined4 *)(param_1 + 0x1b8)) {
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      *(undefined1 *)(param_1 + 0x1bc) = 0;
    }
    if (*(char *)(param_2 + 0x1bc) != '\0') {
      *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  if ((undefined4 *)(param_2 + 0x1c4) != (undefined4 *)(param_1 + 0x1c4)) {
    if (*(char *)(param_1 + 0x1c8) != '\0') {
      *(undefined1 *)(param_1 + 0x1c8) = 0;
    }
    if (*(char *)(param_2 + 0x1c8) != '\0') {
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
      *(undefined1 *)(param_1 + 0x1c8) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1d9) = *(undefined1 *)(param_2 + 0x1d9);
  FUN_140a29610(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 140a7db00 FUN_140a7db00 body=648 status=ok
// SIG undefined FUN_140a7db00(void)

undefined8 * FUN_140a7db00(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_58 [80];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_140729f20(param_1 + 10,param_2 + 10);
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  *(uint *)(param_1 + 0x1e) =
       *(uint *)(param_1 + 0x1e) ^ (*(uint *)(param_1 + 0x1e) ^ *(uint *)(param_2 + 0x1e)) & 1;
  uVar2 = (*(uint *)(param_1 + 0x1e) ^ *(uint *)(param_2 + 0x1e)) & 2 ^ *(uint *)(param_1 + 0x1e);
  *(uint *)(param_1 + 0x1e) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0x1e)) & 4 ^ uVar2;
  *(uint *)(param_1 + 0x1e) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0x1e)) & 8 ^ uVar2;
  *(uint *)(param_1 + 0x1e) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0x1e)) & 0x10 ^ uVar2;
  *(uint *)(param_1 + 0x1e) = uVar2;
  *(uint *)(param_1 + 0x1e) = (uVar2 ^ *(uint *)(param_2 + 0x1e)) & 0x20 ^ uVar2;
  *(undefined8 *)((longlong)param_1 + 0xf4) = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x124) = *(undefined1 *)((longlong)param_2 + 0x124);
  *(undefined1 *)((longlong)param_1 + 0x125) = *(undefined1 *)((longlong)param_2 + 0x125);
  if (param_2 + 0x25 != param_1 + 0x25) {
    if (*(char *)((longlong)param_1 + 300) != '\0') {
      *(undefined1 *)((longlong)param_1 + 300) = 0;
    }
    if (*(char *)((longlong)param_2 + 300) != '\0') {
      *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
      *(undefined1 *)((longlong)param_1 + 300) = 1;
    }
  }
  if (param_2 + 0x26 != param_1 + 0x26) {
    if (*(char *)((longlong)param_1 + 0x131) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x131) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x131) != '\0') {
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
      *(undefined1 *)((longlong)param_1 + 0x131) = 1;
    }
  }
  lVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_2 + 0x28);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar1,param_1 + 0x28,0x50);
  if (*(int *)(lVar1 + 0x40) != 0) {
    plVar3 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar1 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FMemory::Free();
  }
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x34,param_2 + 0x34);
  return param_1;
}



// FUNCTION 140a7dd90 FUN_140a7dd90 body=417 status=ok
// SIG undefined FUN_140a7dd90(void)

undefined4 * FUN_140a7dd90(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 2,param_2 + 2);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 8,param_2 + 8);
  puVar1 = (undefined8 *)(param_1 + 0x1e);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(byte *)(param_1 + 0x15) =
       *(byte *)(param_1 + 0x15) ^ (*(byte *)(param_1 + 0x15) ^ *(byte *)(param_2 + 0x15)) & 1;
  bVar7 = (*(byte *)(param_2 + 0x15) ^ *(byte *)(param_1 + 0x15)) & 2 ^ *(byte *)(param_1 + 0x15);
  *(byte *)(param_1 + 0x15) = bVar7;
  bVar7 = (*(byte *)(param_2 + 0x15) ^ bVar7) & 4 ^ bVar7;
  *(byte *)(param_1 + 0x15) = bVar7;
  *(byte *)(param_1 + 0x15) = (*(byte *)(param_2 + 0x15) ^ bVar7) & 8 ^ bVar7;
  uVar4 = param_2[0x17];
  uVar5 = param_2[0x18];
  uVar6 = param_2[0x19];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar4;
  param_1[0x18] = uVar5;
  param_1[0x19] = uVar6;
  uVar4 = param_2[0x1b];
  uVar5 = param_2[0x1c];
  uVar6 = param_2[0x1d];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar4;
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar6;
  if (puVar1 != (undefined8 *)(param_2 + 0x1e)) {
    iVar2 = param_2[0x20];
    pvVar3 = *(void **)(param_2 + 0x1e);
    param_1[0x20] = iVar2;
    if ((iVar2 == 0) && (param_1[0x21] == 0)) {
      param_1[0x21] = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x18);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x22);
  if (puVar1 != (undefined8 *)(param_2 + 0x22)) {
    iVar2 = param_2[0x24];
    pvVar3 = *(void **)(param_2 + 0x22);
    param_1[0x24] = iVar2;
    if ((iVar2 == 0) && (param_1[0x25] == 0)) {
      param_1[0x25] = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x18);
    }
  }
  FUN_1408e22e0(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 140a7df40 FUN_140a7df40 body=370 status=ok
// SIG undefined FUN_140a7df40(void)

void FUN_140a7df40(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  iVar7 = (int)param_2[1];
  iVar9 = iVar7 + -1;
  if (-1 < iVar9) {
    lVar8 = (longlong)iVar9 * 8;
    lVar10 = lVar8;
    do {
      lVar1 = *param_2;
      lVar2 = *(longlong *)(lVar8 + lVar1);
      if (lVar2 == 0) {
LAB_140a7dff7:
        iVar7 = (int)param_2[1];
        iVar4 = (iVar7 - iVar9) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar10 + lVar1),(void *)(lVar1 + (longlong)(iVar7 - iVar4) * 8),
                     (longlong)iVar4 << 3);
          iVar7 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
      }
      else {
        uVar3 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar6 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if (((byte)((uint)*(undefined4 *)(lVar5 + 8) >> 0x1d) & 1) != 0) goto LAB_140a7dff7;
        FUN_142397540(lVar2,1,1);
      }
      lVar10 = lVar10 + -8;
      lVar8 = lVar8 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    iVar7 = (int)param_2[1];
  }
  if (iVar7 < *(int *)(*param_1 + 8)) {
    do {
      lVar8 = FUN_140a88550(param_1[1],param_3);
      if (lVar8 == 0) {
        return;
      }
      iVar9 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      *(longlong *)(*param_2 + (longlong)iVar9 * 8) = lVar8;
    } while ((int)param_2[1] < *(int *)(*param_1 + 8));
  }
  return;
}



// FUNCTION 140a7e0c0 FUN_140a7e0c0 body=153 status=ok
// SIG undefined FUN_140a7e0c0(void)

void FUN_140a7e0c0(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_142616380(*param_1,0,1);
  iVar1 = *(int *)(*param_1 + 0x928);
  if (0 < iVar1) {
    plVar3 = *(longlong **)(*param_1 + 0x920);
    lVar4 = 0;
    while (((plVar2 = (longlong *)*plVar3, plVar2 == (longlong *)0x0 || (plVar2[2] == 0)) ||
           (*(longlong *)(plVar2[2] + 0x28) != *param_2))) {
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 1;
      if (iVar1 <= lVar4) {
        return;
      }
    }
    if (param_3 <= (int)plVar2[0x25]) {
      (**(code **)(*plVar2 + 0xe8))(plVar2,0);
    }
  }
  return;
}



// FUNCTION 140a7e160 FUN_140a7e160 body=122 status=ok
// SIG undefined FUN_140a7e160(void)

longlong * FUN_140a7e160(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar4 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
      iVar4 = (int)param_1[1];
    }
    puVar2 = (undefined4 *)((longlong)iVar4 * 0x10 + *param_1);
    puVar3 = (undefined4 *)*param_2;
    iVar4 = iVar1;
    do {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[2] = puVar3[2];
      puVar2[3] = puVar3[3];
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return param_1;
}



// FUNCTION 140a7e2b0 FUN_140a7e2b0 body=43 status=ok
// SIG undefined FUN_140a7e2b0(void)

undefined8 * FUN_140a7e2b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140a7e2e0 FUN_140a7e2e0 body=66 status=ok
// SIG undefined FUN_140a7e2e0(void)

longlong FUN_140a7e2e0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39d0;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 140a7e330 FUN_140a7e330 body=90 status=ok
// SIG undefined FUN_140a7e330(void)

longlong FUN_140a7e330(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  FUN_140a7c530(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x778);
  }
  return param_1;
}



// FUNCTION 140a7e390 FUN_140a7e390 body=102 status=ok
// SIG undefined FUN_140a7e390(void)

longlong FUN_140a7e390(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x458);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 140a7e400 FUN_140a7e400 body=113 status=ok
// SIG undefined FUN_140a7e400(void)

undefined8 * FUN_140a7e400(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_14422f7d8;
  FWeakObjectPtr::operator=(param_1 + 0x23,0);
  param_1[0x24] = 0;
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140a7e480 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCheckBoxStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a7c710();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x580);
  }
  return param_1;
}



// FUNCTION 140a7e4c0 FUN_140a7e4c0 body=102 status=ok
// SIG undefined FUN_140a7e4c0(void)

undefined8 * FUN_140a7e4c0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xc) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140a7e530 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FArrayReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_140a7cdb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140a7e580 FUN_140a7e580 body=90 status=ok
// SIG undefined FUN_140a7e580(void)

longlong FUN_140a7e580(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 140a7e5e0 FUN_140a7e5e0 body=124 status=ok
// SIG undefined FUN_140a7e5e0(void)

longlong FUN_140a7e5e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 140a7e660 FUN_140a7e660 body=153 status=ok
// SIG undefined FUN_140a7e660(void)

longlong FUN_140a7e660(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  FUN_140a7c290(param_1 + 0x80);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140a7e700 FUN_140a7e700 body=52 status=ok
// SIG undefined FUN_140a7e700(void)

undefined8 FUN_140a7e700(undefined8 param_1,ulonglong param_2)

{
  FUN_140a7cfb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140a7e740 FUN_140a7e740 body=143 status=ok
// SIG undefined FUN_140a7e740(void)

longlong FUN_140a7e740(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x324);
  thunk_FUN_142478640(param_1 + 0x318);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f0);
  FUN_140a7c820(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,1000);
  }
  return param_1;
}



// FUNCTION 140a7e7d0 FUN_140a7e7d0 body=284 status=ok
// SIG undefined FUN_140a7e7d0(void)

longlong FUN_140a7e7d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x958);
  if (*(longlong *)(param_1 + 0x938) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x8e8);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x878) != 0) {
    FMemory::Free();
  }
  FUN_140a7c970(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9c0);
  }
  return param_1;
}



// FUNCTION 140a7e8f0 FUN_140a7e8f0 body=90 status=ok
// SIG undefined FUN_140a7e8f0(void)

longlong FUN_140a7e8f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 140a7e950 FUN_140a7e950 body=274 status=ok
// SIG undefined FUN_140a7e950(void)

longlong FUN_140a7e950(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x870) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x7a0);
  plVar2 = *(longlong **)(param_1 + 0x798);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x72;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x798);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  FRichCurve::~FRichCurve(param_1 + 0x600);
  FRichCurve::~FRichCurve(param_1 + 0x580);
  FRichCurve::~FRichCurve(param_1 + 0x508);
  FRichCurve::~FRichCurve(param_1 + 0x450);
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_140a7cc80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8a8);
  }
  return param_1;
}



// FUNCTION 140a7ea70 FUN_140a7ea70 body=184 status=ok
// SIG undefined FUN_140a7ea70(void)

longlong FUN_140a7ea70(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x1ec);
  thunk_FUN_142478640(param_1 + 0x1e0);
  thunk_FUN_142478640(param_1 + 0x1d4);
  thunk_FUN_142478640(param_1 + 0x1c4);
  thunk_FUN_142478640(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 140a7eb30 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNetworkSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140590de0(param_1 + 0x48);
  FUN_140a7cd20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140a7eb70 FUN_140a7eb70 body=70 status=ok
// SIG undefined FUN_140a7eb70(void)

longlong FUN_140a7eb70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140a7ebc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a7ce60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 140a7ec00 FUN_140a7ec00 body=73 status=ok
// SIG undefined FUN_140a7ec00(void)

longlong FUN_140a7ec00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  FUN_140a7cf10(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b0);
  }
  return param_1;
}



// FUNCTION 140a7ec50 FUN_140a7ec50 body=52 status=ok
// SIG undefined FUN_140a7ec50(void)

undefined8 FUN_140a7ec50(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 140a7ec90 FUN_140a7ec90 body=288 status=ok
// SIG undefined FUN_140a7ec90(void)

longlong FUN_140a7ec90(longlong param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x540) != '\0') {
    *(undefined1 *)(param_1 + 0x540) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x510);
  plVar2 = *(longlong **)(param_1 + 0x508);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x508);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x358);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x548);
  }
  return param_1;
}



// FUNCTION 140a7edb0 FUN_140a7edb0 body=73 status=ok
// SIG undefined FUN_140a7edb0(void)

longlong FUN_140a7edb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140a7ee00 FUN_140a7ee00 body=218 status=ok
// SIG undefined FUN_140a7ee00(void)

longlong FUN_140a7ee00(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x300);
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
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c8);
  }
  return param_1;
}



// FUNCTION 140a7eee0 FUN_140a7eee0 body=232 status=ok
// SIG undefined FUN_140a7eee0(void)

longlong * FUN_140a7eee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [16];
  
  puVar3 = (undefined8 *)FName::FName(local_res18,L"DecorationSkeletalMesh",1);
  plVar4 = (longlong *)FUN_142227070(param_2,*(undefined8 *)(param_1 + 0x30),*puVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_142a07000();
    lVar1 = plVar4[2];
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)((longlong)plVar4 + 0xca) = 0;
      (**(code **)(*plVar4 + 0x290))(plVar4,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),0);
      FUN_142382f60(plVar4,*(undefined8 *)(param_2 + 0x168),&DAT_146af29ec,0);
      if ((*(byte *)(plVar4 + 0x17) & 1) == 0) {
        FUN_14234b150(plVar4);
      }
      FUN_1423424e0(plVar4);
      return plVar4;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140a7efd0 FUN_140a7efd0 body=232 status=ok
// SIG undefined FUN_140a7efd0(void)

longlong * FUN_140a7efd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [16];
  
  puVar3 = (undefined8 *)FName::FName(local_res18,L"DecorationStaticMesh",1);
  plVar4 = (longlong *)FUN_142227070(param_2,*(undefined8 *)(param_1 + 0x30),*puVar3);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_142a232e0();
    lVar1 = plVar4[2];
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)((longlong)plVar4 + 0xca) = 0;
      (**(code **)(*plVar4 + 0x290))(plVar4,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),0);
      FUN_142382f60(plVar4,*(undefined8 *)(param_2 + 0x168),&DAT_146af29ec,0);
      if ((*(byte *)(plVar4 + 0x17) & 1) == 0) {
        FUN_14234b150(plVar4);
      }
      FUN_1423424e0(plVar4);
      return plVar4;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140a7f0c0 FUN_140a7f0c0 body=598 status=ok
// SIG undefined FUN_140a7f0c0(void)

/* WARNING: Removing unreachable block (ram,0x000140a7f1e9) */
/* WARNING: Removing unreachable block (ram,0x000140a7f2e7) */

ulonglong FUN_140a7f0c0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong in_RAX;
  longlong lVar9;
  ulonglong uVar10;
  byte local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (((int)param_1[0xce] == 0) && (in_RAX = FUN_14233f450(), (int)in_RAX == 3)) {
    uVar10 = 0;
    if ((int)param_1[0xd0] < param_4) {
      param_4 = (int)param_1[0xd0];
    }
    if (-1 < param_4) {
      FUN_142c8c260(&local_80,0x3f800000);
      plVar1 = param_1 + 0xcf;
      uStack_40 = 0;
      local_38 = 0;
      iVar7 = (int)param_1[0xd0];
      local_48 = CONCAT31(local_48._1_3_,0xff);
      *(int *)(param_1 + 0xd0) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0x684) < iVar7 + 1) {
        TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                  (plVar1,iVar7);
      }
      lVar9 = (longlong)param_4 * 0x78;
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar9 + 0x78),(void *)(*plVar1 + lVar9),
                 (longlong)(iVar7 - param_4) * 0x78);
      lVar8 = *plVar1;
      *(undefined8 *)(lVar9 + lVar8) = param_2;
      lVar2 = lVar9 + lVar8;
      *(undefined8 *)(lVar9 + 8 + lVar8) = param_3;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      pbVar3 = (byte *)(lVar9 + 0x20 + lVar8);
      *pbVar3 = *pbVar3 ^ ((local_88 & 0xfd | 1) ^ *(byte *)(lVar9 + 0x20 + lVar8)) & 1;
      bVar6 = *(byte *)(lVar9 + 0x20 + lVar8);
      *(byte *)(lVar9 + 0x20 + lVar8) = bVar6 & 2 ^ bVar6;
      puVar4 = (undefined8 *)(lVar9 + 0x28 + lVar8);
      *puVar4 = local_80;
      puVar4[1] = uStack_78;
      puVar4 = (undefined8 *)(lVar9 + 0x38 + lVar8);
      *puVar4 = local_70;
      puVar4[1] = uStack_68;
      puVar4 = (undefined8 *)(lVar9 + 0x48 + lVar8);
      *puVar4 = local_60;
      puVar4[1] = uStack_58;
      *(undefined8 *)(lVar9 + 0x58 + lVar8) = local_50;
      puVar5 = (undefined4 *)(lVar9 + 0x60 + lVar8);
      *puVar5 = local_48;
      puVar5[1] = uStack_44;
      puVar5[2] = (undefined4)uStack_40;
      puVar5[3] = uStack_40._4_4_;
      *(ulonglong *)(lVar9 + 0x70 + lVar8) = CONCAT44(uStack_34,local_38);
      if (param_4 < (int)param_1[0xd0]) {
        FUN_142d3da80(lVar9 + *plVar1,param_1[0x23]);
        TBaseDelegate<void>::ExecuteIfBound(param_1 + 299);
        if (param_4 < (int)param_1[0xd0]) {
          FUN_140a86300(param_1 + 0x119,lVar9 + *plVar1,param_4);
        }
        uVar10 = 1;
        (**(code **)(*param_1 + 0x260))(param_1);
      }
      FUN_140a88e40(param_1);
    }
    return uVar10;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a7f320 FUN_140a7f320 body=111 status=ok
// SIG undefined FUN_140a7f320(void)

void FUN_140a7f320(longlong *param_1,int param_2,longlong *param_3)

{
  if (((param_2 <= (int)param_1[0xd0]) && (-1 < param_2)) && (param_2 < (int)param_1[0xd0])) {
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
              (param_1[0xcf] + (longlong)param_2 * 0x78 + 0x10,param_3);
    TBaseDelegate<void>::ExecuteIfBound(param_1 + 299);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a7f390 FUN_140a7f390 body=585 status=ok
// SIG undefined FUN_140a7f390(void)

void FUN_140a7f390(longlong param_1)

{
  float fVar1;
  short *psVar2;
  undefined4 uVar3;
  longlong lVar4;
  short *psVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  short *psVar10;
  bool bVar11;
  float fVar12;
  undefined1 local_res8 [8];
  short *local_38;
  ulonglong uStack_30;
  
  lVar4 = *(longlong *)(param_1 + 0x2a8);
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(lVar4 + 0x2b0) == '\0') {
    return;
  }
  lVar4 = FUN_140a63ba0(*(undefined8 *)(lVar4 + 0x118));
  if (lVar4 == 0) {
    return;
  }
  psVar5 = (short *)FUN_140a63ba0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 0x118));
  lVar4 = *(longlong *)(param_1 + 800);
  if (lVar4 != 0) {
    lVar6 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      if (*(longlong *)(lVar4 + 600) == 0) {
        local_38 = (short *)0x0;
        uStack_30 = 0x82;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        psVar2 = local_38;
        FGenericPlatformString::Memcpy
                  (local_38,
                   L"/Game/GameData/Attributes/DamageMultipliers/Att_DamageSourceInstigatorMultiplier_Skill.Att_DamageSourceInstigatorMultiplier_Skill"
                   ,0x104);
        bVar11 = (int)uStack_30 != 0;
        uStack_30 = 0;
        psVar10 = &DAT_143f3eda8;
        if (bVar11) {
          psVar10 = psVar2;
        }
        local_38 = (short *)0x0;
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (psVar10[lVar6] != 0);
          uVar9 = (int)lVar6 + 1;
          uStack_30 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          }
          FGenericPlatformString::Memcpy(local_38,psVar10,(longlong)(int)uVar9 * 2);
        }
        uVar7 = UBlackboardKeyType_Object::GetPrivateStaticClass();
        puVar8 = (undefined8 *)
                 FName::FName(local_res8,L"Att_DamageSourceInstigatorMultiplier_Skill",1);
        uVar7 = StaticFindObjectFastExplicit(uVar7,*puVar8,&local_38,0,0);
        *(undefined8 *)(lVar4 + 600) = uVar7;
        if (local_38 != (short *)0x0) {
          FMemory::Free();
        }
        if (psVar2 != (short *)0x0) {
          FMemory::Free(psVar2);
        }
      }
      lVar4 = *(longlong *)(lVar4 + 600);
      goto LAB_140a7f567;
    }
  }
  lVar4 = 0;
LAB_140a7f567:
  if (lVar4 != 0) {
    local_38._0_4_ = SUB84(psVar5,0);
    uStack_30 = 0;
    uVar3 = local_38._0_4_;
    local_38 = psVar5;
    fVar12 = (float)FUN_142ca2f00(uVar3,&local_38,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x1d8);
    *(float *)(param_1 + 0x558) = fVar12;
    fVar12 = fVar1 * fVar12;
    *(float *)(param_1 + 0x1d8) = fVar12;
    *(float *)(param_1 + 0x554) = fVar12 - fVar1;
  }
  return;
}



// FUNCTION 140a7f5e0 FUN_140a7f5e0 body=580 status=ok
// SIG undefined FUN_140a7f5e0(void)

void FUN_140a7f5e0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x134) == '\x02') goto LAB_140a7f817;
  FUN_140a7f390();
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((bVar4) && (*(longlong *)(lVar2 + 0x920) != 0)) && (*(char *)(lVar2 + 0x918) != '\0')) &&
       (cVar5 = FUN_140a96e90(*(longlong *)(lVar2 + 0x920),param_1), cVar5 != '\0')) {
      fVar1 = *(float *)(param_1 + 0x1d8);
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
      }
      fVar10 = (float)FUN_142c98860(*(longlong *)(lVar2 + 0x920) + 0x30,uVar9);
      *(undefined1 *)(param_1 + 0x565) = 1;
      *(float *)(param_1 + 0x1d8) = fVar10 * fVar1;
    }
  }
  FUN_140a800e0(param_1);
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (0.0 < *(float *)(lVar2 + 0x8ec))) &&
       (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 != (longlong *)0x0)) {
      lVar7 = plVar3[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar7 = plVar3[0x1f];
        if (lVar7 == 0) goto LAB_140a7f800;
      }
      lVar8 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((*(byte *)(lVar7 + 0x88) & 1) != 0)) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar7 = 0;
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30);
        }
        if (((lVar7 != 0) && (cVar5 = FUN_142d1f4a0(lVar2), cVar5 == '\0')) &&
           (fVar1 = *(float *)(lVar2 + 0x8ec), iVar6 = rand(), (float)iVar6 * 3.051851e-05 <= fVar1)
           ) {
          *(undefined4 *)(param_1 + 0x1d8) = 0;
          *(undefined1 *)(param_1 + 0x564) = 1;
        }
      }
    }
  }
LAB_140a7f800:
  FUN_140a7fef0(param_1);
LAB_140a7f817:
  FUN_142d0f190(param_1);
  return;
}



// FUNCTION 140a7f830 FUN_140a7f830 body=1296 status=ok
// SIG undefined FUN_140a7f830(void)

void FUN_140a7f830(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    return;
  }
  lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  local_res10[0] = *(undefined4 *)(param_1 + 0x1d8);
  fVar17 = 0.0;
  if (*(int *)(lVar1 + 0x670) == 0) {
    if (*(int *)(lVar1 + 0x680) == 0) {
      return;
    }
    cVar4 = *(char *)(param_1 + 0x528);
    bVar2 = false;
    if ((cVar4 != '\0') && (lVar6 = *(longlong *)(param_1 + 0x2b0), lVar6 != 0)) {
      lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
      lVar6 = *(longlong *)(lVar6 + 0x10);
      if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (((*(longlong *)(DAT_146b33f38 + 0x58) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) &&
           (*(longlong *)(param_1 + 0x2d0) ==
            *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x230))) {
          cVar4 = '\0';
          bVar2 = true;
        }
      }
    }
    *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) | 8;
    lVar6 = *(longlong *)(lVar1 + 0x678);
    lVar7 = (longlong)*(int *)(lVar1 + 0x680) * 0x78 + lVar6;
    if (lVar6 != lVar7) {
      lVar6 = lVar6 + 0x60;
      do {
        cVar5 = FUN_142d52a00(lVar6);
        if (cVar5 != '\0') {
          uVar8 = FUN_142d52a20(lVar6);
          uVar8 = FArchive::operator<<(uVar8);
          fVar15 = (float)FUN_142d5fea0(uVar8);
          if (fVar15 < 1.0) {
            *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) & 0xf7;
            break;
          }
        }
        lVar9 = lVar6 + 0x18;
        lVar6 = lVar6 + 0x78;
      } while (lVar9 != lVar7);
    }
    plVar14 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
    plVar11 = plVar14;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar9 = FUN_142e49950();
      lVar6 = *(longlong *)(param_1 + 0x58);
      lVar7 = lVar6;
      plVar11 = plVar10;
      if (lVar6 != 0) {
LAB_140a7fa70:
        if (lVar7 != lVar9) goto code_r0x000140a7fa75;
        if (lVar6 != 0) {
          plVar10 = (longlong *)FUN_142e49950();
          for (plVar11 = *(longlong **)(param_1 + 0x58);
              (plVar13 = plVar14, plVar11 != (longlong *)0x0 &&
              (plVar13 = *(longlong **)(param_1 + 0x58), plVar11 != plVar10));
              plVar11 = (longlong *)plVar11[6]) {
          }
          plVar11 = (longlong *)plVar13[0x1f];
          if (plVar11 == (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x368))(plVar13);
            plVar11 = (longlong *)plVar13[0x1f];
            if (plVar11 != (longlong *)0x0) goto LAB_140a7fad5;
LAB_140a7fb3b:
            plVar11 = (longlong *)0x0;
          }
          else {
LAB_140a7fad5:
            lVar6 = FUN_1414193b0();
            if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140a7fb3b;
            if ((plVar11[0x1e] == 0) && (local_res18 = 0, plVar11[0x1f] == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((bVar3) || ((char)plVar11[0x29] == '\0')) goto LAB_140a7fb3b;
          }
        }
      }
    }
LAB_140a7fb3e:
    iVar12 = *(int *)(lVar1 + 0x680) + -1;
    if (0 < iVar12) {
      lVar6 = (longlong)iVar12 * 0x78;
      do {
        cVar5 = FUN_142d52a00(*(longlong *)(lVar1 + 0x678) + 0x60 + (longlong)iVar12 * 0x78);
        if (cVar5 != '\0') {
          if (cVar4 == '\0') {
            if (((plVar11 == (longlong *)0x0) ||
                (lVar7 = *(longlong *)(lVar6 + *(longlong *)(lVar1 + 0x678)), lVar7 == 0)) ||
               (cVar5 = UKismetSystemLibrary::NotEqual_PrimaryAssetId(plVar11 + 0x1e,lVar7 + 0x50),
               cVar5 == '\0')) {
              if (*(char *)(lVar1 + 0x9b0) != '\0') {
                if (DAT_146b33f38 == 0) {
                  FUN_142d7ebe0();
                }
                plVar10 = plVar14;
                if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
                  plVar10 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30);
                }
                if (*(longlong **)(lVar6 + *(longlong *)(lVar1 + 0x678)) == plVar10) {
                  return;
                }
              }
              uVar8 = FUN_142d52a20(*(longlong *)(lVar1 + 0x678) + 0x60 + (longlong)iVar12 * 0x78);
              uVar8 = FArchive::operator<<(uVar8);
              uVar16 = FUN_142d5fed0(uVar8);
              fVar15 = (float)FUN_142d0e5e0(param_1,local_res10,
                                            *(undefined8 *)(lVar6 + *(longlong *)(lVar1 + 0x678)),
                                            uVar16,iVar12);
              fVar17 = fVar17 + fVar15;
            }
          }
          else {
            cVar4 = '\0';
          }
        }
        iVar12 = iVar12 + -1;
        lVar6 = lVar6 + -0x78;
      } while (0 < iVar12);
    }
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      goto LAB_140a7fd0b;
    }
    if ((0 < *(int *)(lVar1 + 0x680)) &&
       (cVar4 = FUN_142d52a00(*(longlong *)(lVar1 + 0x678) + 0x60), cVar4 != '\0')) {
      if ((plVar11 != (longlong *)0x0) &&
         ((**(longlong **)(lVar1 + 0x678) != 0 &&
          (cVar4 = UKismetSystemLibrary::NotEqual_PrimaryAssetId
                             (plVar11 + 0x1e,**(longlong **)(lVar1 + 0x678) + 0x50), cVar4 != '\0'))
         )) goto LAB_140a7fd0b;
      uVar8 = FUN_142d52a20(*(longlong *)(lVar1 + 0x678) + 0x60);
      uVar8 = FArchive::operator<<(uVar8);
      uVar16 = FUN_142d5fed0(uVar8);
      local_res10[0] = FUN_142d0e5e0(param_1,local_res10,**(undefined8 **)(lVar1 + 0x678),uVar16,0);
    }
  }
  else {
    if (*(int *)(lVar1 + 0x670) != 1) goto LAB_140a7fd0b;
    lVar1 = *(longlong *)(param_1 + 0x2b0);
    cVar4 = FUN_14247c3b0(lVar1 + 0x6c8,*(undefined4 *)(lVar1 + 0x6d4));
    if (cVar4 != '\0') {
      *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) | 8;
    }
    local_res10[0] =
         FUN_142d0e5e0(param_1,local_res10,*(undefined8 *)(lVar1 + 0x6c0),
                       *(undefined4 *)(lVar1 + 0x6d4),0);
  }
  *(undefined4 *)(param_1 + 0x1d8) = local_res10[0];
LAB_140a7fd0b:
  *(float *)(param_1 + 0x1dc) = fVar17;
  return;
code_r0x000140a7fa75:
  lVar7 = *(longlong *)(lVar7 + 0x30);
  if (lVar7 == 0) goto LAB_140a7fb3e;
  goto LAB_140a7fa70;
}



// FUNCTION 140a7fd40 FUN_140a7fd40 body=431 status=ok
// SIG undefined FUN_140a7fd40(void)

void FUN_140a7fd40(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = FUN_140a8ce20();
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x6c1) != '\0') {
    return;
  }
  if (*(char *)(lVar6 + 0x6c2) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x570) == '\0') {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 800);
  fVar1 = *(float *)(param_1 + 0x1d8);
  if (lVar6 != 0) {
    lVar7 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(char *)(param_1 + 0x570) != '\0')) {
      cVar2 = *(char *)(param_1 + 0x568);
      if (cVar2 == '\x01') {
        lVar7 = 0x2d0;
LAB_140a7fe2a:
        plVar8 = *(longlong **)(param_1 + 0x2c0);
      }
      else {
        if (cVar2 != '\x02') {
          if (cVar2 != '\x03') goto LAB_140a7feb4;
          lVar7 = 0x260;
          goto LAB_140a7fe2a;
        }
        plVar8 = *(longlong **)(param_1 + 0x578);
        lVar7 = 0x298;
      }
      lVar7 = lVar7 + lVar6;
      if ((plVar8 != (longlong *)0x0) && (lVar7 != 0)) {
        uVar3 = *(undefined4 *)(param_1 + 0x56c);
        uVar5 = (**(code **)(*plVar8 + 0x408))(plVar8);
        fVar9 = (float)FUN_140a89b60(param_1,uVar5,lVar7,plVar8);
        fVar10 = (float)FUN_140a89b60(param_1,uVar3,lVar7,plVar8);
        if ((0.0 < fVar9) && (0.0 < fVar10)) {
          cVar2 = *(char *)(param_1 + 0x568);
          fVar11 = 1.0;
          if (cVar2 != '\x01') {
            if (cVar2 == '\x02') {
              fVar11 = fVar10 / fVar9;
              goto LAB_140a7febc;
            }
            if (cVar2 != '\x03') goto LAB_140a7febc;
          }
          fVar11 = fVar9 / fVar10;
          goto LAB_140a7febc;
        }
      }
    }
  }
LAB_140a7feb4:
  fVar11 = 1.0;
LAB_140a7febc:
  *(float *)(param_1 + 0x560) = fVar11;
  *(float *)(param_1 + 0x1d8) = fVar11 * fVar1;
  return;
}



// FUNCTION 140a7fef0 FUN_140a7fef0 body=492 status=ok
// SIG undefined FUN_140a7fef0(void)

void FUN_140a7fef0(longlong param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  
  plVar12 = (longlong *)0x0;
  iVar6 = 0;
  plVar13 = plVar12;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x118);
  }
  plVar8 = plVar12;
  if (plVar13 != (longlong *)0x0) {
    uVar7 = FUN_141477fa0();
    plVar8 = (longlong *)(**(code **)(*plVar13 + 0x628))(plVar13,uVar7);
  }
  plVar11 = *(longlong **)(param_1 + 800);
  if (plVar11 == (longlong *)0x0) {
LAB_140a7ff83:
    plVar11 = plVar12;
  }
  else {
    lVar9 = FUN_1414150f0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a7ff83;
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  cVar4 = FUN_140eb2650(plVar8,5,0);
  if (cVar4 == '\0') {
    return;
  }
  plVar12 = *(longlong **)(param_1 + 0x58);
  if (plVar12 != (longlong *)0x0) {
    lVar9 = plVar12[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x368))(plVar12);
      lVar9 = plVar12[0x1f];
      if (lVar9 == 0) goto LAB_140a80022;
    }
    lVar10 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar9 + 0x130) == '\0')) {
      return;
    }
  }
LAB_140a80022:
  fVar1 = *(float *)(plVar11 + 0x6c);
  if ((plVar13 == (longlong *)0x0) || (lVar9 = FUN_140b825a0(plVar13), lVar9 == 0)) {
    iVar5 = 1;
  }
  else {
    iVar5 = FHTTPChunkInstall::GetInstallSpeed(lVar9);
  }
  iVar2 = (int)plVar11[0x62];
  if (iVar5 + -1 < 0) {
LAB_140a80072:
    if (iVar6 < iVar2) {
      bVar3 = true;
      goto LAB_140a8007c;
    }
  }
  else {
    iVar6 = iVar2;
    if (iVar5 <= iVar2 + -1) {
      iVar6 = iVar5;
    }
    iVar6 = iVar6 + -1;
    if (-1 < iVar6) goto LAB_140a80072;
  }
  bVar3 = false;
LAB_140a8007c:
  if ((bVar3) && (lVar9 = plVar11[0x61] + (longlong)iVar6 * 8, lVar9 != 0)) {
    fVar14 = *(float *)(lVar9 + 4);
  }
  else {
    fVar14 = 1.0;
  }
  *(float *)(param_1 + 0x1d8) = (fVar14 * fVar1 + 1.0) * *(float *)(param_1 + 0x1d8);
  return;
}



// FUNCTION 140a800e0 FUN_140a800e0 body=1897 status=ok
// SIG undefined FUN_140a800e0(void)

void FUN_140a800e0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  
  lVar5 = *(longlong *)(param_1 + 0x2b0);
  if (lVar5 == 0) {
    return;
  }
  lVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(lVar5 + 0x96c);
  if (lVar5 == 0) {
    return;
  }
  cVar2 = FUN_142d52a00(lVar5 + 0x228);
  if (cVar2 == '\0') {
    return;
  }
  uVar6 = FUN_142d52a20(lVar5 + 0x228);
  uVar6 = FArchive::operator<<(uVar6);
  fVar9 = (float)FUN_142d5fed0(uVar6);
  if ((((float)*(undefined8 *)(param_1 + 0x11c) == 0.0) &&
      (local_98._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x11c) >> 0x20),
      local_98._4_4_ == 0.0)) && (*(float *)(param_1 + 0x124) == 0.0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (fVar9 <= 0.0)) goto LAB_140a80814;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (((*(longlong *)(DAT_146b33f38 + 0x58) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) &&
     (*(longlong *)(param_1 + 0x2d0) == *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x230)))
  goto LAB_140a80814;
  if (((0.0 < *(float *)(lVar5 + 0x188)) && (*(float *)(lVar5 + 0x188) < 360.0)) &&
     (*(longlong *)(param_1 + 0x2b0) != 0)) {
    FUN_142d1a360(*(longlong *)(param_1 + 0x2b0),&local_88);
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x11c) >> 0x20);
    local_98._0_4_ = (float)*(undefined8 *)(param_1 + 0x11c);
    fVar12 = fVar10 * fVar10 + (float)local_98 * (float)local_98;
    if (fVar12 == 1.0) {
      fVar16 = *(float *)(param_1 + 0x124);
      fVar14 = fVar10;
      fVar11 = (float)local_98;
      if (*(float *)(param_1 + 0x124) != 0.0) {
LAB_140a80369:
        fVar16 = 0.0;
        fVar14 = fVar10;
        fVar11 = (float)local_98;
      }
    }
    else {
      fVar16 = DAT_1468b5d98;
      fVar14 = DAT_1468b5d94;
      fVar11 = DAT_1468b5d90;
      if (1e-08 <= fVar12) {
        auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar16 = auVar15._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar12 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar12 * 0.5 * fVar16 * fVar16);
        fVar10 = fVar10 * fVar16;
        local_98._0_4_ = (float)local_98 * fVar16;
        goto LAB_140a80369;
      }
    }
    fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar5 + 0x188) * 0.008726646);
    if (local_88._4_4_ * -fVar14 + (float)local_88 * -fVar11 + fStack_80 * -fVar16 < fVar10)
    goto LAB_140a80814;
  }
  fVar10 = *(float *)(param_1 + 0x1d8);
  fVar12 = fVar10;
  if (((*(byte *)(param_1 + 0x100) & 2) != 0) && (lVar4 = *(longlong *)(lVar5 + 0x1e8), lVar4 != 0))
  {
    if (*(char *)(lVar4 + 0xa9) == '\0') {
      if (*(char *)(lVar4 + 0xb0) != '\0') {
        iVar3 = rand();
        pfVar8 = (float *)(*(longlong *)(lVar5 + 0x1e8) + 0xb4);
        cVar2 = (float)iVar3 * 3.051851e-05 < *pfVar8 || (float)iVar3 * 3.051851e-05 == *pfVar8;
        goto LAB_140a80458;
      }
    }
    else {
      iVar3 = rand();
      pfVar8 = (float *)(*(longlong *)(lVar5 + 0x1e8) + 0xac);
      if (*pfVar8 <= (float)iVar3 * 3.051851e-05 && (float)iVar3 * 3.051851e-05 != *pfVar8) {
        cVar2 = *(char *)(*(longlong *)(lVar5 + 0x1e8) + 0xb8);
LAB_140a80458:
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x218) = 3;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x218) = 2;
      }
    }
    if (*(char *)(param_1 + 0x218) != '\0') {
      fVar12 = fVar10 * *(float *)(*(longlong *)(lVar5 + 0x1e8) + 0xc0);
      *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(*(longlong *)(lVar5 + 0x1e8) + 0xc4);
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x200) = fVar10 - fVar12;
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(*(longlong *)(lVar5 + 0x1e8) + 0xbc);
      *(undefined1 *)(param_1 + 0x224) = *(undefined1 *)(*(longlong *)(lVar5 + 0x1e8) + 0xb9);
    }
  }
  if (fVar9 <= fVar12) {
    fVar12 = fVar12 - fVar9;
    fVar9 = 0.0;
  }
  else {
    fVar9 = fVar9 - fVar12;
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x1d8) = fVar12;
  local_88 = *(longlong *)(lVar5 + 0x1e8);
  if ((local_88 == 0) || (0.0001 < fVar12)) goto LAB_140a80814;
  fStack_80 = -NAN;
  *(longlong *)(param_1 + 0x2d0) = local_88;
  *(ulonglong *)(param_1 + 0x2d8) = CONCAT44(uStack_7c,0xffffffff);
  FWeakObjectPtr::operator=(param_1 + 0xc4,*(undefined8 *)(*(longlong *)(lVar5 + 0x1e8) + 0x250));
  plVar7 = *(longlong **)(lVar5 + 0x118);
  if (plVar7 == (longlong *)0x0) goto LAB_140a80814;
  lVar4 = FUN_1430b3b80();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((!bVar1) || (*(int *)(lVar5 + 0x1f8) < 1)) ||
     (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x900))(plVar7,0,0), plVar7 == (longlong *)0x0))
  goto LAB_140a80814;
  pfVar8 = (float *)(**(code **)(*plVar7 + 0x428))(plVar7,&local_88,*(undefined8 *)(lVar5 + 0x308));
  fVar10 = *(float *)(param_1 + 0x124);
  fVar11 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x11c) >> 0x20);
  local_88._0_4_ = (float)*(undefined8 *)(param_1 + 0x11c);
  fVar17 = SQRT(*pfVar8 * *pfVar8 + pfVar8[1] * pfVar8[1]);
  fVar13 = fVar11 * fVar11 + (float)local_88 * (float)local_88 + fVar10 * fVar10;
  fVar12 = fVar11;
  fVar16 = (float)local_88;
  fVar14 = fVar10;
  if ((fVar13 != 1.0) &&
     (fVar12 = DAT_1468b5d94, fVar16 = DAT_1468b5d90, fVar14 = DAT_1468b5d98, 1e-08 <= fVar13)) {
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
    fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
    fVar16 = (float)local_88 * fVar14;
    fVar12 = fVar11 * fVar14;
    fVar14 = fVar10 * fVar14;
  }
  fVar16 = -(fVar16 * fVar17);
  fVar12 = -(fVar12 * fVar17);
  local_90 = -(fVar14 * fVar17);
  *(float *)(param_1 + 0x74) = fVar16 + *(float *)(param_1 + 0x74);
  *(float *)(param_1 + 0x78) = fVar12 + *(float *)(param_1 + 0x78);
  *(float *)(param_1 + 0x7c) = local_90 + *(float *)(param_1 + 0x7c);
  fVar10 = fVar16 * fVar16 + fVar12 * fVar12;
  if (fVar10 == 1.0) {
    local_98 = CONCAT44(fVar12,fVar16);
    if (local_90 != 0.0) {
LAB_140a807db:
      local_90 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar10) {
      auVar15 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar14 = auVar15._0_4_;
      fVar14 = fVar14 + fVar14 * (0.5 - fVar10 * 0.5 * fVar14 * fVar14);
      fVar14 = fVar14 + fVar14 * (0.5 - fVar10 * 0.5 * fVar14 * fVar14);
      local_98 = CONCAT44(fVar14 * fVar12,fVar14 * fVar16);
      goto LAB_140a807db;
    }
    local_90 = DAT_1468b5d98;
    local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  *(undefined8 *)(param_1 + 0x8c) = local_98;
  *(float *)(param_1 + 0x94) = local_90;
LAB_140a80814:
  *(float *)(param_1 + 0x55c) = fVar9;
  return;
}



// FUNCTION 140a80850 FUN_140a80850 body=519 status=ok
// SIG undefined FUN_140a80850(void)

void FUN_140a80850(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *local_60;
  int local_58;
  int local_54;
  
  FUN_142d0f6b0();
  lVar7 = *(longlong *)(param_1 + 0x530);
  puVar12 = (undefined8 *)0x0;
  iVar11 = 0;
  iVar9 = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x538) * 0x10 + lVar7;
  local_60 = (undefined8 *)0x0;
  local_54 = 0;
  if (lVar7 != lVar3) {
    do {
      lVar4 = FWeakObjectPtr::Get(lVar7);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x178), lVar4 != 0)) {
        lVar5 = FUN_142e06650();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar6 = FWeakObjectPtr::Get(lVar7 + 8);
          local_58 = iVar9 + 1;
          if (iVar11 < local_58) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_60,iVar9);
            puVar12 = local_60;
            iVar11 = local_54;
          }
          puVar12[(longlong)iVar9 * 2] = lVar4;
          puVar12[(longlong)iVar9 * 2 + 1] = uVar6;
          iVar9 = local_58;
        }
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar3);
    if (0 < iVar9) {
      puVar10 = puVar12 + (longlong)iVar9 * 2;
      puVar8 = puVar12;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 2) {
        lVar7 = puVar8[1];
        if (lVar7 == 0) {
          lVar7 = FUN_142d19790(param_1);
        }
        cVar2 = FUN_142d23bc0(param_1,*puVar8,0,lVar7,0,param_2,param_3,param_4,param_5);
        if (cVar2 != '\0') {
          *param_6 = 1;
        }
        puVar12 = local_60;
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      FMemory::Free(puVar12);
    }
  }
  return;
}



// FUNCTION 140a80a60 FUN_140a80a60 body=8957 status=ok
// SIG undefined FUN_140a80a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a80a60(longlong *param_1,longlong *param_2,float *param_3,float param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  longlong *plVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
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
  undefined1 auStack_db8 [32];
  undefined8 *local_d98;
  undefined8 local_d90;
  longlong *local_d88;
  ulonglong local_d80;
  ulonglong local_d78;
  undefined1 local_d70;
  undefined1 local_d68;
  undefined1 local_d60;
  undefined1 local_d58;
  undefined1 local_d50;
  undefined1 local_d48;
  undefined1 *local_d40;
  undefined1 *local_d38;
  undefined1 local_d30;
  undefined8 *local_d28;
  undefined1 local_d20;
  undefined1 local_d1f;
  undefined1 local_d1e;
  undefined1 local_d1d [5];
  longlong *local_d18;
  float local_d10;
  undefined8 *local_d08;
  longlong *local_d00;
  longlong local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  float local_ce0;
  undefined4 local_cd8;
  float local_cd0;
  longlong *local_cc8;
  int local_cc0;
  float local_cb8;
  float fStack_cb4;
  float local_cb0;
  float local_ca8;
  float fStack_ca4;
  float fStack_ca0;
  float fStack_c9c;
  float local_c98;
  float fStack_c94;
  float fStack_c90;
  float fStack_c8c;
  float local_c88;
  float fStack_c84;
  float fStack_c80;
  float fStack_c7c;
  float local_c78;
  float fStack_c74;
  float fStack_c70;
  float fStack_c6c;
  float local_c68;
  float fStack_c64;
  float fStack_c60;
  float fStack_c5c;
  float local_c58;
  float fStack_c54;
  float fStack_c50;
  float fStack_c4c;
  float local_c48;
  float fStack_c44;
  float fStack_c40;
  float fStack_c3c;
  float local_c38;
  float fStack_c34;
  float fStack_c30;
  float fStack_c2c;
  undefined8 local_c28;
  float local_c20;
  float local_c1c;
  float local_c18;
  float local_c08;
  float fStack_c04;
  float fStack_c00;
  undefined4 uStack_bfc;
  float local_bf8;
  float fStack_bf4;
  float fStack_bf0;
  undefined4 uStack_bec;
  float local_be8;
  float fStack_be4;
  float fStack_be0;
  undefined4 uStack_bdc;
  float local_bd8;
  undefined4 uStack_bd4;
  undefined4 uStack_bd0;
  undefined4 uStack_bcc;
  undefined1 local_bc8 [8];
  undefined8 local_bc0;
  float *local_bb8;
  undefined2 *local_bb0;
  int local_ba8;
  undefined2 *local_ba0;
  int local_b98;
  float local_b88;
  float fStack_b84;
  float fStack_b80;
  float fStack_b7c;
  undefined8 local_b78;
  float local_b70;
  undefined8 local_b68;
  undefined4 local_b60;
  undefined8 local_b58;
  undefined4 local_b50;
  undefined8 local_b48;
  undefined4 local_b40;
  undefined8 local_b38;
  undefined4 local_b30;
  undefined8 local_b28;
  undefined4 local_b20;
  undefined4 local_b18;
  undefined4 uStack_b14;
  undefined4 local_b10;
  longlong local_b0c;
  undefined4 local_b04;
  undefined8 local_b00;
  float local_af8;
  undefined4 local_af4;
  undefined4 uStack_af0;
  undefined4 local_aec;
  undefined8 local_ae8;
  undefined4 local_ae0;
  undefined8 local_adc;
  float local_ad4;
  undefined4 local_ad0;
  undefined4 uStack_acc;
  undefined4 local_ac8;
  undefined2 *local_ac0;
  int local_ab8;
  float local_aa8;
  float fStack_aa4;
  float fStack_aa0;
  float fStack_a9c;
  float local_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  longlong local_a88 [2];
  float local_a78;
  float fStack_a74;
  float fStack_a70;
  undefined4 uStack_a6c;
  float local_a68;
  float fStack_a64;
  float fStack_a60;
  undefined4 uStack_a5c;
  float local_a58;
  float fStack_a54;
  float fStack_a50;
  undefined4 uStack_a4c;
  float local_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  float local_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  undefined1 local_a18 [16];
  undefined1 local_a08 [8];
  undefined1 local_a00 [8];
  undefined8 local_9f8;
  longlong local_9f0 [2];
  longlong local_9e0 [2];
  longlong local_9d0 [3];
  longlong local_9b8;
  longlong lStack_9b0;
  longlong local_9a8;
  longlong lStack_9a0;
  undefined1 local_998 [8];
  undefined1 local_990 [8];
  longlong local_988;
  longlong *local_980;
  longlong local_978;
  float local_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  float local_958;
  float fStack_954;
  float fStack_950;
  float fStack_94c;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  float local_930;
  undefined4 local_92c;
  longlong *local_928;
  undefined1 local_918 [16];
  undefined1 local_908 [32];
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  undefined4 uStack_8cc;
  float local_8c8;
  float fStack_8c4;
  float fStack_8c0;
  uint uStack_8bc;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  uint uStack_89c;
  undefined4 local_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined8 local_868;
  undefined8 uStack_860;
  float local_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float local_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float local_838;
  float fStack_834;
  float fStack_830;
  float fStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float local_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float local_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float local_798;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  undefined1 local_748 [112];
  undefined1 local_6d8 [112];
  undefined1 local_668 [560];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  undefined8 local_408 [4];
  undefined8 *local_3e8;
  undefined8 local_3e0;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  longlong local_3a8 [2];
  undefined8 local_398;
  longlong lStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  uint local_378;
  uint uStack_374;
  uint uStack_370;
  uint uStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined4 local_30c;
  undefined2 local_308;
  undefined1 local_306;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined1 local_2f0 [8];
  undefined8 local_2e8;
  undefined1 local_2e0 [8];
  undefined8 local_2d8;
  longlong *local_2d0;
  int local_2c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [32];
  undefined1 *local_190;
  undefined8 local_188;
  undefined1 local_178 [32];
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined1 local_148 [48];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_db8;
  bVar25 = false;
  local_d28 = (undefined8 *)((ulonglong)local_d28 & 0xffffffff00000000);
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_d18 = param_1;
  local_d00 = param_2;
  local_cd0 = param_4;
  local_bb8 = param_3;
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if (lVar9 == 0) {
    return 0;
  }
  uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  iVar7 = FUN_1428cf800(uVar10);
  if (iVar7 == 1) {
    return 0;
  }
  local_9f8 = UScrollBox::GetPrivateStaticClass();
  lVar9 = (**(code **)(*param_1 + 0x628))(param_1,local_9f8);
  if ((lVar9 != 0) && (cVar5 = FUN_142d5a800(lVar9 + 0x3d0), cVar5 != '\0')) {
    return 0;
  }
  plVar11 = (longlong *)FUN_14222b250(param_1,*param_2,0);
  if (plVar11 == (longlong *)0x0) {
    return 0;
  }
  lVar9 = FUN_142a07000();
  if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0;
  }
  if ((*(byte *)((longlong)plVar11 + 0xb1c) & 4) != 0) {
    return 0;
  }
  local_d08 = (undefined8 *)*param_2;
  local_d28 = (undefined8 *)0x0;
  iVar7 = FUN_1423ac950(plVar11);
  puVar13 = local_d08;
  puVar20 = local_d28;
  if (iVar7 == -1) {
    plVar12 = (longlong *)FUN_1423b0980(plVar11,local_a08,local_d08);
    local_d28 = (undefined8 *)0x0;
    local_d08 = (undefined8 *)*plVar12;
    if (local_d08 == (undefined8 *)0x0) {
      return 0;
    }
    iVar7 = FUN_1423ac950(plVar11);
    puVar20 = puVar13;
  }
  puVar13 = (undefined8 *)FName::ToString(&local_d08,local_9f0);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar13;
  }
  FString::PrintfImpl(&local_ac0,L"Amputated_%s",puVar21);
  puVar21 = &DAT_143f3eda8;
  if (local_ab8 != 0) {
    puVar21 = local_ac0;
  }
  FName::FName(local_bc8,puVar21,1);
  if (local_ac0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_9f0[0] != 0) {
    FMemory::Free();
  }
  lVar9 = FUN_142c6fb80(plVar11,local_bc8,0);
  if (lVar9 != 0) {
    return 0;
  }
  cVar5 = FUN_1423b47e0(plVar11,iVar7);
  if (cVar5 != '\0') {
    return 0;
  }
  FUN_1423af540(plVar11,&local_cf8,local_d08);
  FUN_1423acfd0(plVar11,&local_3d8,iVar7);
  local_438 = param_2[10];
  uStack_430 = param_2[0xb];
  local_428 = param_2[0xc];
  uStack_420 = param_2[0xd];
  local_418 = (float)param_2[0xe];
  fStack_414 = (float)((ulonglong)param_2[0xe] >> 0x20);
  fStack_410 = (float)param_2[0xf];
  fStack_40c = (float)((ulonglong)param_2[0xf] >> 0x20);
  local_d28 = (undefined8 *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    plVar12 = plVar11;
    pfVar14 = (float *)(**(code **)(*plVar11 + 0x420))(plVar11,local_148,puVar20,3);
    fVar53 = fStack_40c;
    fVar45 = fStack_410;
    fVar39 = fStack_414;
    fVar38 = local_418;
    fVar43 = fRam000000014686700c;
    fVar42 = fRam0000000146867008;
    fVar41 = fRam0000000146867004;
    fVar40 = _DAT_146867000;
    auVar35._4_4_ = fStack_414;
    auVar35._0_4_ = local_418;
    auVar35._8_4_ = fStack_410;
    auVar35._12_4_ = fStack_40c;
    auVar28 = *(undefined1 (*) [16])(pfVar14 + 8);
    fVar54 = auVar28._0_4_;
    fVar55 = auVar28._4_4_;
    fVar56 = auVar28._8_4_;
    fVar44 = auVar28._12_4_;
    auVar28 = minps(auVar35,auVar28);
    auVar29._4_4_ = -(uint)(auVar28._4_4_ < fRam0000000146867064);
    auVar29._0_4_ = -(uint)(auVar28._0_4_ < _DAT_146867060);
    auVar29._8_4_ = -(uint)(auVar28._8_4_ < fRam0000000146867068);
    auVar29._12_4_ = -(uint)(auVar28._12_4_ < fRam000000014686706c);
    iVar18 = movmskps((int)plVar12,auVar29);
    if (iVar18 == 0) {
      fVar40 = *pfVar14;
      fVar41 = pfVar14[1];
      fVar42 = pfVar14[2];
      fVar43 = pfVar14[3];
      local_428._0_4_ = fVar54 * (float)local_428;
      local_428._4_4_ = fVar55 * local_428._4_4_;
      uStack_420._0_4_ = fVar56 * (float)uStack_420;
      uStack_420._4_4_ = fVar44 * uStack_420._4_4_;
      fVar47 = fVar43 * (float)local_438 + fVar40 * uStack_430._4_4_ * _DAT_146867040 +
               fVar41 * (float)uStack_430 * _DAT_146867030 +
               fVar42 * local_438._4_4_ * _DAT_146867020;
      fVar48 = fVar43 * local_438._4_4_ + fVar40 * (float)uStack_430 * fRam0000000146867044 +
               fVar41 * uStack_430._4_4_ * fRam0000000146867034 +
               fVar42 * (float)local_438 * fRam0000000146867024;
      fVar51 = fVar43 * (float)uStack_430 + fVar40 * local_438._4_4_ * fRam0000000146867048 +
               fVar41 * (float)local_438 * fRam0000000146867038 +
               fVar42 * uStack_430._4_4_ * fRam0000000146867028;
      fVar57 = fVar43 * uStack_430._4_4_ + fVar40 * (float)local_438 * fRam000000014686704c +
               fVar41 * local_438._4_4_ * fRam000000014686703c +
               fVar42 * (float)uStack_430 * fRam000000014686702c;
      fVar50 = (float)uStack_420 * fVar41 - local_428._4_4_ * fVar42;
      fVar49 = (float)local_428 * fVar42 - (float)uStack_420 * fVar40;
      fVar52 = local_428._4_4_ * fVar40 - (float)local_428 * fVar41;
      fVar32 = uStack_420._4_4_ * fVar43 - uStack_420._4_4_ * fVar43;
      fVar50 = fVar50 + fVar50;
      fVar49 = fVar49 + fVar49;
      fVar52 = fVar52 + fVar52;
      fVar32 = fVar32 + fVar32;
      fVar33 = (fVar52 * fVar41 - fVar49 * fVar42) + (float)local_428 + fVar50 * fVar43 + pfVar14[4]
      ;
      fVar42 = (fVar50 * fVar42 - fVar52 * fVar40) + local_428._4_4_ + fVar49 * fVar43 + pfVar14[5];
      fVar40 = (fVar49 * fVar40 - fVar50 * fVar41) + (float)uStack_420 + fVar52 * fVar43 +
               pfVar14[6];
      fVar41 = (fVar32 * fVar43 - fVar32 * fVar43) + uStack_420._4_4_ + fVar32 * fVar43 + pfVar14[7]
      ;
    }
    else {
      fVar33 = *pfVar14;
      fVar50 = pfVar14[1];
      fVar49 = pfVar14[2];
      fVar52 = pfVar14[3];
      local_828 = pfVar14[4];
      fStack_824 = pfVar14[5];
      fStack_820 = pfVar14[6];
      fVar47 = fVar50 + fVar50;
      fVar51 = fVar49 + fVar49;
      fVar57 = fVar54 * local_418;
      fVar58 = fVar55 * fStack_414;
      fVar59 = fVar56 * fStack_410;
      fVar60 = fVar44 * fStack_40c;
      fVar32 = (fVar33 + fVar33) * fVar33;
      fVar48 = (fVar33 + fVar33) * fVar52;
      local_858 = (float)((uint)((_DAT_146867000 - (fVar51 * fVar49 + fVar47 * fVar50)) * fVar54) &
                         _DAT_146867010);
      fStack_844 = (float)((uint)((fRam0000000146867004 - (fVar51 * fVar49 + fVar32)) * fVar55) &
                          uRam0000000146867014);
      fStack_830 = (float)((uint)((fRam0000000146867008 - (fVar47 * fVar50 + fVar32)) * fVar56) &
                          uRam0000000146867018);
      fStack_84c = (float)((uint)((fRam000000014686700c - (fVar32 + fVar32)) * fVar44) &
                          uRam000000014686701c);
      fVar49 = local_438._4_4_ + local_438._4_4_;
      fVar32 = (float)uStack_430 + (float)uStack_430;
      fStack_854 = (fVar51 * fVar52 + fVar47 * fVar33) * fVar54;
      fStack_840 = (fVar48 + fVar51 * fVar50) * fVar55;
      local_838 = (fVar47 * fVar52 + fVar51 * fVar33) * fVar56;
      local_848 = (fVar47 * fVar33 - fVar51 * fVar52) * fVar55;
      fStack_834 = (fVar51 * fVar50 - fVar48) * fVar56;
      fStack_850 = (fVar51 * fVar33 - fVar47 * fVar52) * fVar54;
      fVar33 = ((float)local_438 + (float)local_438) * (float)local_438;
      fStack_81c = fRam000000014686700c;
      fVar50 = ((float)local_438 + (float)local_438) * uStack_430._4_4_;
      local_818 = (float)((uint)((_DAT_146867000 -
                                 (fVar32 * (float)uStack_430 + fVar49 * local_438._4_4_)) *
                                local_418) & _DAT_146867010);
      fStack_804 = (float)((uint)((fRam0000000146867004 - (fVar32 * (float)uStack_430 + fVar33)) *
                                 fStack_414) & uRam0000000146867014);
      fStack_7f0 = (float)((uint)((fRam0000000146867008 - (fVar49 * local_438._4_4_ + fVar33)) *
                                 fStack_410) & uRam0000000146867018);
      fStack_80c = (float)((uint)((fRam000000014686700c - (fVar33 + fVar33)) * fStack_40c) &
                          uRam000000014686701c);
      fStack_814 = (fVar32 * uStack_430._4_4_ + fVar49 * (float)local_438) * local_418;
      fStack_800 = (fVar50 + fVar32 * local_438._4_4_) * fStack_414;
      local_7f8 = (fVar49 * uStack_430._4_4_ + fVar32 * (float)local_438) * fStack_410;
      local_808 = (fVar49 * (float)local_438 - fVar32 * uStack_430._4_4_) * fStack_414;
      fStack_7f4 = (fVar32 * local_438._4_4_ - fVar50) * fStack_410;
      fStack_810 = (fVar32 * (float)local_438 - fVar49 * uStack_430._4_4_) * local_418;
      local_7e8 = (float)local_428;
      fStack_7e4 = local_428._4_4_;
      fStack_7e0 = (float)uStack_420;
      fStack_7dc = fRam000000014686700c;
      local_c68 = local_858 * local_818 + local_848 * fStack_814 + local_838 * fStack_810 +
                  local_828 * fStack_80c;
      fStack_c64 = fStack_854 * local_818 + fStack_844 * fStack_814 + fStack_834 * fStack_810 +
                   fStack_824 * fStack_80c;
      fStack_c60 = fStack_850 * local_818 + fStack_840 * fStack_814 + fStack_830 * fStack_810 +
                   fStack_820 * fStack_80c;
      fStack_c5c = fStack_84c * local_818 + fStack_84c * fStack_814 + fStack_84c * fStack_810 +
                   fRam000000014686700c * fStack_80c;
      local_c58 = local_858 * local_808 + local_848 * fStack_804 + local_838 * fStack_800 +
                  local_828 * fStack_80c;
      fStack_c54 = fStack_854 * local_808 + fStack_844 * fStack_804 + fStack_834 * fStack_800 +
                   fStack_824 * fStack_80c;
      fStack_c50 = fStack_850 * local_808 + fStack_840 * fStack_804 + fStack_830 * fStack_800 +
                   fStack_820 * fStack_80c;
      fStack_c4c = fStack_84c * local_808 + fStack_84c * fStack_804 + fStack_84c * fStack_800 +
                   fRam000000014686700c * fStack_80c;
      local_c48 = local_858 * local_7f8 + local_848 * fStack_7f4 + local_838 * fStack_7f0 +
                  local_828 * fStack_80c;
      fStack_c44 = fStack_854 * local_7f8 + fStack_844 * fStack_7f4 + fStack_834 * fStack_7f0 +
                   fStack_824 * fStack_80c;
      fStack_c40 = fStack_850 * local_7f8 + fStack_840 * fStack_7f4 + fStack_830 * fStack_7f0 +
                   fStack_820 * fStack_80c;
      fStack_c3c = fStack_84c * local_7f8 + fStack_84c * fStack_7f4 + fStack_84c * fStack_7f0 +
                   fRam000000014686700c * fStack_80c;
      local_c38 = local_828 * fRam000000014686700c +
                  local_858 * (float)local_428 + local_848 * local_428._4_4_ +
                  local_838 * (float)uStack_420;
      fStack_c34 = fStack_824 * fRam000000014686700c +
                   fStack_854 * (float)local_428 + fStack_844 * local_428._4_4_ +
                   fStack_834 * (float)uStack_420;
      fStack_c30 = fStack_820 * fRam000000014686700c +
                   fStack_850 * (float)local_428 + fStack_840 * local_428._4_4_ +
                   fStack_830 * (float)uStack_420;
      fStack_c2c = fRam000000014686700c * fRam000000014686700c +
                   fStack_84c * (float)local_428 + fStack_84c * local_428._4_4_ +
                   fStack_84c * (float)uStack_420;
      fStack_83c = fStack_84c;
      fStack_82c = fStack_84c;
      fStack_7fc = fStack_80c;
      fStack_7ec = fStack_80c;
      FMatrix::RemoveScaling(&local_c68);
      local_8a8 = (float)((_DAT_146867050 ^ (uint)fVar40) & -(uint)(_DAT_146867060 <= fVar57) ^
                         _DAT_146867050);
      fStack_8a4 = (float)((uRam0000000146867054 ^ (uint)fVar41) &
                           -(uint)(fRam0000000146867064 <= fVar58) ^ uRam0000000146867054);
      fStack_8a0 = (float)((uRam0000000146867058 ^ (uint)fVar42) &
                           -(uint)(fRam0000000146867068 <= fVar59) ^ uRam0000000146867058);
      uStack_89c = (uRam000000014686705c ^ (uint)fVar43) & -(uint)(fRam000000014686706c <= fVar60) ^
                   uRam000000014686705c;
      fStack_c60 = fStack_c60 * local_8a8;
      fStack_c64 = fStack_c64 * local_8a8;
      local_c68 = local_c68 * local_8a8;
      local_c58 = local_c58 * fStack_8a4;
      fStack_c54 = fStack_c54 * fStack_8a4;
      fStack_c50 = fStack_c50 * fStack_8a4;
      fStack_c44 = fStack_c44 * fStack_8a0;
      local_c48 = local_c48 * fStack_8a0;
      fStack_c40 = fStack_c40 * fStack_8a0;
      FQuat::FQuat(&local_a98,&local_c68);
      local_cd8 = 0x322bcc77;
      auVar34._0_4_ = local_a98 * local_a98 + fStack_a90 * fStack_a90;
      auVar34._4_4_ = fStack_a94 * fStack_a94 + fStack_a8c * fStack_a8c;
      auVar34._8_4_ = fStack_a90 * fStack_a90 + local_a98 * local_a98;
      auVar34._12_4_ = fStack_a8c * fStack_a8c + fStack_a94 * fStack_a94;
      auVar28._0_4_ = auVar34._4_4_ + auVar34._0_4_;
      auVar28._4_4_ = auVar34._8_4_ + auVar34._4_4_;
      auVar28._8_4_ = auVar34._12_4_ + auVar34._8_4_;
      auVar28._12_4_ = auVar34._0_4_ + auVar34._12_4_;
      auVar35 = rsqrtps(auVar34,auVar28);
      fVar40 = auVar35._0_4_;
      fVar41 = auVar35._4_4_;
      fVar42 = auVar35._8_4_;
      fVar43 = auVar35._12_4_;
      fVar40 = (_DAT_146866ff0 - fVar40 * fVar40 * auVar28._0_4_ * _DAT_146866ff0) * fVar40 + fVar40
      ;
      fVar41 = (fRam0000000146866ff4 - fVar41 * fVar41 * auVar28._4_4_ * fRam0000000146866ff4) *
               fVar41 + fVar41;
      fVar42 = (fRam0000000146866ff8 - fVar42 * fVar42 * auVar28._8_4_ * fRam0000000146866ff8) *
               fVar42 + fVar42;
      fVar43 = (fRam0000000146866ffc - fVar43 * fVar43 * auVar28._12_4_ * fRam0000000146866ffc) *
               fVar43 + fVar43;
      fVar47 = (float)(((uint)(((_DAT_146866ff0 - fVar40 * fVar40 * auVar28._0_4_ * _DAT_146866ff0)
                                * fVar40 + fVar40) * local_a98) ^ _DAT_146866fe0) &
                       -(uint)(1e-08 <= auVar28._0_4_) ^ _DAT_146866fe0);
      fVar48 = (float)(((uint)(((fRam0000000146866ff4 -
                                fVar41 * fVar41 * auVar28._4_4_ * fRam0000000146866ff4) * fVar41 +
                               fVar41) * fStack_a94) ^ uRam0000000146866fe4) &
                       -(uint)(1e-08 <= auVar28._4_4_) ^ uRam0000000146866fe4);
      fVar51 = (float)(((uint)(((fRam0000000146866ff8 -
                                fVar42 * fVar42 * auVar28._8_4_ * fRam0000000146866ff8) * fVar42 +
                               fVar42) * fStack_a90) ^ uRam0000000146866fe8) &
                       -(uint)(1e-08 <= auVar28._8_4_) ^ uRam0000000146866fe8);
      fVar57 = (float)(((uint)(((fRam0000000146866ffc -
                                fVar43 * fVar43 * auVar28._12_4_ * fRam0000000146866ffc) * fVar43 +
                               fVar43) * fStack_a8c) ^ uRam0000000146866fec) &
                       -(uint)(1e-08 <= auVar28._12_4_) ^ uRam0000000146866fec);
      fVar41 = 0.0;
      fVar33 = local_c38;
      fVar42 = fStack_c34;
      fVar40 = fStack_c30;
      local_a98 = fVar47;
      fStack_a94 = fVar48;
      fStack_a90 = fVar51;
      fStack_a8c = fVar57;
    }
    fStack_40c = fVar44 * fVar53;
    fStack_410 = fVar56 * fVar45;
    fStack_414 = fVar55 * fVar39;
    local_418 = fVar54 * fVar38;
    local_438 = CONCAT44(fVar48,fVar47);
    uStack_430 = CONCAT44(fVar57,fVar51);
    local_428 = CONCAT44(fVar42,fVar33);
    uStack_420 = CONCAT44(fVar41,fVar40);
  }
  FUN_1423afad0(plVar11,&local_c20,iVar7);
  local_428 = CONCAT44(local_428._4_4_ + local_c1c,(float)local_428 + local_c20);
  uStack_420 = CONCAT44(uStack_420._4_4_ + 0.0,(float)uStack_420 + local_c18);
  puVar13 = (undefined8 *)FName::ToString(&local_d08,local_9e0);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar13;
  }
  FString::PrintfImpl(&local_bb0,L"Amputated_%s",puVar21);
  puVar21 = &DAT_143f3eda8;
  if (local_ba8 != 0) {
    puVar21 = local_bb0;
  }
  FName::FName(&local_cf0,puVar21,1);
  if (local_bb0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_9e0[0] != 0) {
    FMemory::Free();
  }
  fVar54 = *(float *)(param_2 + 1);
  local_ce0 = *(float *)(param_2 + 2);
  if (fVar54 <= 1e-05) {
    fVar54 = 1e-05;
  }
  fVar55 = *(float *)((longlong)param_2 + 0xc);
  if (local_ce0 <= 1e-05) {
    local_ce0 = 1e-05;
  }
  if (fVar55 <= 1e-05) {
    fVar55 = 1e-05;
  }
  local_d30 = 1;
  local_d20 = 3;
  local_b60 = DAT_1468b5da8;
  local_b50 = DAT_1468b5d98;
  local_d38 = &local_d20;
  local_d40 = &local_d1f;
  local_d98 = &local_b78;
  local_d48 = 0;
  local_d50 = 0;
  local_d58 = 0;
  local_d60 = 1;
  local_d68 = 0;
  local_d70 = 0;
  local_b78 = CONCAT44(fVar55,fVar54);
  local_d78 = 0;
  local_d80 = local_d80 & 0xffffffffffffff00;
  local_b68 = DAT_1468b5da0;
  local_b58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_d90 = (ulonglong)local_d90._4_4_ << 0x20;
  local_d1f = 3;
  local_d88 = plVar11;
  local_b70 = local_ce0;
  FUN_142c6b420(local_cf0,local_d08,&local_b58,&local_b68);
  if (((1e-05 < ABS(*(float *)(param_2 + 1))) || (1e-05 < ABS(*(float *)((longlong)param_2 + 0xc))))
     || (1e-05 < ABS(*(float *)(param_2 + 2)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((!bVar4) && (lVar9 = plVar11[0xe3], lVar9 != 0)) &&
     (iVar18 = iVar7 + 1, iVar18 < *(int *)(lVar9 + 0x160))) {
    lVar22 = (longlong)iVar18 << 4;
    do {
      if (*(int *)(*(longlong *)(lVar9 + 0x158) + 8 + lVar22) == iVar7) {
        FUN_1423acf90(plVar11,&local_c28,iVar18);
        local_ce0 = 1e-05;
        local_b48 = 0x3727c5ac3727c5ac;
        local_b40 = 0x3727c5ac;
        local_b38 = DAT_1468b5da0;
        local_b28 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_b30 = DAT_1468b5da8;
        local_b20 = DAT_1468b5d98;
        local_d1e = 3;
        local_d1d[0] = 3;
        puVar13 = (undefined8 *)FName::ToString(&local_c28,local_9d0);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar21 = &DAT_143f3eda8;
        }
        else {
          puVar21 = (undefined2 *)*puVar13;
        }
        FString::PrintfImpl(&local_ba0,L"Amputated_%s",puVar21);
        puVar21 = &DAT_143f3eda8;
        if (local_b98 != 0) {
          puVar21 = local_ba0;
        }
        puVar13 = (undefined8 *)FName::FName(local_a00,puVar21,1);
        local_d38 = &local_d1e;
        local_d30 = 1;
        local_d40 = local_d1d;
        local_d98 = &local_b48;
        local_d48 = 0;
        local_d50 = 0;
        local_d58 = 0;
        local_d60 = 1;
        local_d68 = 0;
        local_d70 = 0;
        local_d78 = 0;
        local_d80 = local_d80 & 0xffffffffffffff00;
        local_d90 = local_d90 & 0xffffffff00000000;
        local_d88 = plVar11;
        FUN_142c6b420(*puVar13,local_c28,&local_b28,&local_b38);
        if (local_ba0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_9d0[0] != 0) {
          FMemory::Free();
        }
      }
      lVar9 = plVar11[0xe3];
      iVar18 = iVar18 + 1;
      lVar22 = lVar22 + 0x10;
      param_1 = local_d18;
    } while (iVar18 < *(int *)(lVar9 + 0x160));
  }
  iVar18 = 0;
  local_3e8 = (undefined8 *)0x0;
  local_3e0 = 0;
  iVar7 = UWorld::GetNumPlayerControllers(plVar11);
  if (0 < iVar7) {
    do {
      lVar9 = UKWMeshArray::GetMeshByIndex(plVar11,iVar18);
      if ((lVar9 != 0) &&
         ((*(undefined8 **)(lVar9 + 0x198) == local_d08 ||
          (cVar5 = FUN_1423a5360(plVar11), cVar5 != '\0')))) {
        lVar22 = UAkAudioInputComponent::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar22 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar22 + 0x90) * 8) != lVar22 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
LAB_140a81712:
          bVar4 = true;
        }
        else {
          local_bc0 = *(undefined8 *)(lVar9 + 0x18);
          bVar25 = true;
          FName::ToString(&local_bc0,local_a88);
          cVar5 = FString::StartsWith(local_a88,L"Amputated_",0);
          if (cVar5 != '\0') goto LAB_140a81712;
          bVar4 = false;
        }
        if ((bVar25) && (bVar25 = false, local_a88[0] != 0)) {
          FMemory::Free();
        }
        uVar24 = local_3e0;
        if (bVar4) {
          lVar22 = (longlong)(int)local_3e0;
          iVar8 = (int)local_3e0 + 1;
          local_3e0 = CONCAT44(local_3e0._4_4_,iVar8);
          if (local_3e0._4_4_ < iVar8) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_408,uVar24 & 0xffffffff);
          }
          puVar13 = local_408;
          if (local_3e8 != (undefined8 *)0x0) {
            puVar13 = local_3e8;
          }
          puVar13[lVar22] = lVar9;
        }
      }
      iVar18 = iVar18 + 1;
      param_2 = local_d00;
      param_1 = local_d18;
    } while (iVar18 < iVar7);
  }
  plVar12 = (longlong *)0x0;
  puVar13 = local_408;
  if (local_3e8 != (undefined8 *)0x0) {
    puVar13 = local_3e8;
  }
  plVar15 = (longlong *)((longlong)(int)local_3e0 & 0x1fffffffffffffff);
  if (puVar13 + (int)local_3e0 < puVar13) {
    plVar15 = plVar12;
  }
  plVar26 = plVar12;
  if (plVar15 != (longlong *)0x0) {
    do {
      (**(code **)(*(longlong *)*puVar13 + 0x3b0))((longlong *)*puVar13,0);
      plVar26 = (longlong *)((longlong)plVar26 + 1);
      puVar13 = puVar13 + 1;
    } while (plVar26 != plVar15);
  }
  FUN_1427e86c0(plVar11,local_d08);
  local_d18 = (longlong *)0x0;
  if (local_cf8 != 0) {
    if (param_2[3] != 0) {
      uVar10 = FUN_142a232e0();
      plVar15 = (longlong *)FUN_141791c20(local_990,param_1,uVar10,local_cf0);
      local_d18 = (longlong *)0x0;
      lVar9 = *plVar15;
      if (lVar9 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar10 = FUN_142a232e0();
      local_d78 = local_d78 & 0xffffffffffffff00;
      local_d80 = 0;
      local_d88 = (longlong *)((ulonglong)local_d88 & 0xffffffffffffff00);
      local_d90 = 0;
      local_d98 = (undefined8 *)((ulonglong)local_d98 & 0xffffffff00000000);
      plVar15 = (longlong *)FUN_1417985e0(uVar10,param_1,lVar9,0);
      (**(code **)(*plVar15 + 0x638))(plVar15,0);
      (**(code **)(*plVar15 + 0x928))(plVar15,param_2[3]);
      FUN_1423974f0(plVar15,0);
      *(byte *)(plVar15 + 0x5e) = *(byte *)(plVar15 + 0x5e) & 0xf7;
      *(byte *)((longlong)plVar15 + 0x2f1) = *(byte *)((longlong)plVar15 + 0x2f1) & 0xfe;
      *(byte *)((longlong)plVar15 + 0x2f2) = *(byte *)((longlong)plVar15 + 0x2f2) & 0xfe;
      local_898 = (float)local_428;
      uStack_894 = local_428._4_4_;
      uStack_890 = (float)uStack_420;
      uStack_88c = uStack_420._4_4_;
      local_b10 = (float)uStack_420;
      *(float *)((longlong)plVar15 + 0x1ec) = (float)local_428;
      *(float *)(plVar15 + 0x3e) = local_428._4_4_;
      *(float *)((longlong)plVar15 + 500) = (float)uStack_420;
      local_b18 = (float)local_428;
      uStack_b14 = local_428._4_4_;
      local_9b8 = local_438;
      lStack_9b0 = uStack_430;
      FQuat::Rotator(&local_9b8,&local_b0c);
      plVar15[0x3f] = local_b0c;
      *(undefined4 *)(plVar15 + 0x40) = local_b04;
      local_b00 = CONCAT44(fStack_414,local_418);
      uStack_880 = CONCAT44(fStack_40c,fStack_410);
      local_af8 = fStack_410;
      *(undefined8 *)((longlong)plVar15 + 0x204) = local_b00;
      *(float *)((longlong)plVar15 + 0x20c) = fStack_410;
      if ((*(char *)((longlong)param_2 + 0x44) == '\0') || (param_2[6] == 0)) {
        bVar6 = 0;
      }
      else {
        bVar6 = 0x10;
      }
      *(byte *)(plVar15 + 0x5e) = *(byte *)(plVar15 + 0x5e) & 0xef;
      *(byte *)(plVar15 + 0x5e) = *(byte *)(plVar15 + 0x5e) | bVar6;
      local_888 = local_b00;
      if (param_2[5] != 0) {
        (**(code **)(*plVar15 + 0x568))(plVar15,0);
      }
      if (((char)param_2[0x14] != '\0') &&
         (lVar9 = (**(code **)(*plVar11 + 0x560))(plVar11,(int)param_2[0x17]), lVar9 != 0)) {
        local_d18 = (longlong *)0x0;
        lVar22 = (**(code **)(*plVar15 + 0x5a8))(plVar15,0,0,0);
        if (lVar22 != 0) {
          FUN_142589350(lVar22,lVar9,*(undefined1 *)((longlong)param_2 + 0xa1));
        }
      }
      FUN_142382f60(plVar15,plVar11,&DAT_146af29ec,local_cf8);
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_14234b270(plVar15,uVar10);
    }
    if (param_2[4] != 0) {
      uVar10 = FUN_142a232e0();
      plVar15 = (longlong *)FUN_141791c20(local_998,param_1,uVar10,local_cf0);
      local_d28 = (undefined8 *)0x0;
      lVar9 = *plVar15;
      if (lVar9 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar10 = AGFreezeCharacterCue::GetPrivateStaticClass();
      local_d78 = local_d78 & 0xffffffffffffff00;
      local_d80 = 0;
      local_d88 = (longlong *)((ulonglong)local_d88 & 0xffffffffffffff00);
      local_d90 = 0;
      local_d98 = (undefined8 *)((ulonglong)local_d98 & 0xffffffff00000000);
      lVar9 = FUN_1417985e0(uVar10,param_1,lVar9,0);
      *(byte *)(lVar9 + 0x71a) = *(byte *)(lVar9 + 0x71a) | 0x40;
      *(byte *)(lVar9 + 0xba) = *(byte *)(lVar9 + 0xba) | 3;
      FUN_14260f940(lVar9,param_2[4]);
      *(byte *)(lVar9 + 0x24c) = *(byte *)(lVar9 + 0x24c) | 0x10;
      local_878 = (float)local_428;
      uStack_874 = local_428._4_4_;
      uStack_870 = (float)uStack_420;
      uStack_86c = uStack_420._4_4_;
      local_aec = (float)uStack_420;
      *(float *)(lVar9 + 0x1ec) = (float)local_428;
      *(float *)(lVar9 + 0x1f0) = local_428._4_4_;
      *(float *)(lVar9 + 500) = (float)uStack_420;
      local_af4 = (float)local_428;
      uStack_af0 = local_428._4_4_;
      local_9a8 = local_438;
      lStack_9a0 = uStack_430;
      FQuat::Rotator(&local_9a8,&local_ae8);
      *(undefined8 *)(lVar9 + 0x1f8) = local_ae8;
      *(undefined4 *)(lVar9 + 0x200) = local_ae0;
      local_adc = CONCAT44(fStack_414,local_418);
      uStack_860 = CONCAT44(fStack_40c,fStack_410);
      local_ad4 = fStack_410;
      *(undefined8 *)(lVar9 + 0x204) = local_adc;
      *(float *)(lVar9 + 0x20c) = fStack_410;
      local_868 = local_adc;
      FUN_142382f60(lVar9,plVar11,&DAT_146af29ec,local_cf8);
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_14234b270(lVar9,uVar10);
    }
    if (param_2[6] != 0) {
      FUN_142397bb0(plVar11,1);
      uVar10 = FUN_142923000();
      plVar15 = (longlong *)FUN_141791c20(&local_cb8,param_1,uVar10,local_cf0);
      local_d28 = (undefined8 *)0x0;
      lVar9 = *plVar15;
      if (lVar9 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar10 = FUN_142923000();
      local_d78 = local_d78 & 0xffffffffffffff00;
      local_d80 = 0;
      local_d88 = (longlong *)((ulonglong)local_d88 & 0xffffffffffffff00);
      local_d90 = 0;
      local_d98 = (undefined8 *)((ulonglong)local_d98 & 0xffffffff00000000);
      lVar9 = FUN_1417985e0(uVar10,param_1,lVar9,0);
      *(byte *)(lVar9 + 0xba) = *(byte *)(lVar9 + 0xba) | 3;
      *(byte *)(lVar9 + 0x708) = *(byte *)(lVar9 + 0x708) | 2;
      *(longlong *)(lVar9 + 0x70c) = param_2[7];
      *(int *)(lVar9 + 0x714) = (int)param_2[8];
      FUN_1423516b0(lVar9,param_2[6]);
      local_ac8 = (float)uStack_420;
      *(float *)(lVar9 + 0x1ec) = (float)local_428;
      *(float *)(lVar9 + 0x1f0) = local_428._4_4_;
      local_8b8 = (float)local_428;
      uStack_8b4 = local_428._4_4_;
      uStack_8b0 = (float)uStack_420;
      uStack_8ac = uStack_420._4_4_;
      local_ad0 = (float)local_428;
      uStack_acc = local_428._4_4_;
      *(float *)(lVar9 + 500) = (float)uStack_420;
      local_758 = *(float *)(param_2 + 10);
      fStack_754 = *(float *)((longlong)param_2 + 0x54);
      fStack_750 = *(float *)(param_2 + 0xb);
      fStack_74c = *(float *)((longlong)param_2 + 0x5c);
      fVar56 = fStack_750 * 2.0;
      fVar55 = fStack_754 * 2.0;
      fVar54 = local_758 * 2.0 * local_758;
      local_a78 = fVar56 * fStack_750 + fVar55 * fStack_754;
      local_d10 = local_758 * 2.0 * fStack_74c;
      local_d28 = (undefined8 *)CONCAT44(local_d28._4_4_,local_a78);
      fStack_be4 = fVar56 * fStack_754 - local_d10;
      local_c08 = 1.0 - local_a78;
      local_bf8 = fVar55 * local_758 - fVar56 * fStack_74c;
      fStack_bf4 = 1.0 - (fVar56 * fStack_750 + fVar54);
      local_be8 = fVar55 * fStack_74c + fVar56 * local_758;
      fStack_c04 = fVar56 * fStack_74c + fVar55 * local_758;
      fStack_c00 = fVar56 * local_758 - fVar55 * fStack_74c;
      fStack_bf0 = local_d10 + fVar56 * fStack_754;
      local_a78 = local_a78 - 1.0;
      fStack_be0 = 1.0 - (fVar55 * fStack_754 + fVar54);
      uStack_a6c = 0;
      uStack_bfc = 0;
      uStack_a5c = 0;
      uStack_a44 = DAT_1468b5d94;
      uStack_a40 = DAT_1468b5d98;
      uStack_a3c = 0x3f800000;
      local_bd8 = DAT_1468b5d90;
      uStack_bd4 = DAT_1468b5d94;
      uStack_bd0 = DAT_1468b5d98;
      uStack_bcc = 0x3f800000;
      local_a48 = DAT_1468b5d90 * -1.0;
      uStack_bec = 0;
      uStack_a4c = 0;
      uStack_bdc = 0;
      fStack_a60 = fStack_bf0 * -1.0;
      local_a58 = local_be8 * -1.0;
      fStack_a64 = fStack_bf4 * -1.0;
      fStack_a74 = fStack_c04;
      fStack_a70 = fStack_c00;
      local_a68 = local_bf8;
      fStack_a54 = fStack_be4;
      fStack_a50 = fStack_be0;
      puVar13 = (undefined8 *)FMatrix::Rotator(&local_a78,local_918);
      *(undefined8 *)(lVar9 + 0x1f8) = *puVar13;
      *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(puVar13 + 1);
      local_ce8 = CONCAT44(fStack_414,local_418);
      uStack_8e0 = CONCAT44(fStack_40c,fStack_410);
      local_ce0 = fStack_410;
      *(undefined8 *)(lVar9 + 0x204) = local_ce8;
      *(float *)(lVar9 + 0x20c) = fStack_410;
      local_8e8 = local_ce8;
      FUN_142382f60(lVar9,plVar11,&DAT_146af29ec,local_cf8);
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_14234b270(lVar9,uVar10);
    }
    if (param_2[9] != 0) {
      lVar9 = FUN_1405ab470(param_1,local_cf8,1,plVar11);
      lVar22 = FUN_140a08d00();
      if ((lVar9 != 0) && (lVar22 != 0)) {
        local_d98 = (undefined8 *)((ulonglong)local_d98 & 0xffffffffffffff00);
        FUN_142398770(lVar9,&local_438,0,0);
        local_8d8 = *(float *)(lVar9 + 0x230);
        fStack_8d4 = *(float *)(lVar9 + 0x234);
        fStack_8d0 = *(float *)(lVar9 + 0x238);
        uStack_8cc = *(undefined4 *)(lVar9 + 0x23c);
        fVar54 = ABS(fStack_8d4);
        if (ABS(fStack_8d4) <= ABS(local_8d8)) {
          fVar54 = ABS(local_8d8);
        }
        local_d98 = (undefined8 *)CONCAT71(local_d98._1_7_,4);
        if (fVar54 <= ABS(fStack_8d0)) {
          fVar54 = ABS(fStack_8d0);
        }
        FUN_1405aaad0(lVar9,*(undefined8 *)(lVar22 + 0x2d8),fVar54);
        FUN_1405a9420(lVar9);
        FUN_1405a3150(lVar9,local_908,param_2[9],0);
        FUN_140591060(local_908);
      }
    }
  }
  plVar15 = (longlong *)param_2[0x10];
  if (plVar15 == (longlong *)0x0) goto LAB_140a82cbb;
  cVar5 = FUN_140a798e0(plVar15);
  local_d00 = (longlong *)param_2[0x10];
  local_cc8 = plVar12;
  if (cVar5 != '\0') {
    local_cc8 = plVar15;
  }
  if ((local_d00 == (longlong *)0x0) || (cVar5 = FUN_140a79930(local_d00), cVar5 == '\0')) {
    local_d00 = (longlong *)0x0;
  }
  lVar9 = param_2[0x12];
  if (lVar9 != 0) {
    lVar16 = FUN_1428dfc70();
    lVar22 = lVar9;
    do {
      if (lVar22 == lVar16) goto LAB_140a820e6;
      lVar22 = *(longlong *)(lVar22 + 0x30);
    } while (lVar22 != 0);
  }
  lVar9 = FUN_1428dfc70();
LAB_140a820e6:
  local_d28 = (undefined8 *)0x0;
  pfVar14 = (float *)0x0;
  if (param_2[0x15] != 0) {
    pfVar14 = (float *)(**(code **)(*plVar11 + 0x420))(plVar11,local_118,param_2[0x15],0);
    local_3d8 = *pfVar14;
    fStack_3d4 = pfVar14[1];
    fStack_3d0 = pfVar14[2];
    fStack_3cc = pfVar14[3];
    local_3c8 = pfVar14[4];
    fStack_3c4 = pfVar14[5];
    fStack_3c0 = pfVar14[6];
    fStack_3bc = pfVar14[7];
    local_3b8 = pfVar14[8];
    fStack_3b4 = pfVar14[9];
    fStack_3b0 = pfVar14[10];
    fStack_3ac = pfVar14[0xb];
  }
  fVar43 = fRam000000014686706c;
  fVar42 = fRam0000000146867068;
  fVar41 = fRam0000000146867064;
  fVar40 = _DAT_146867060;
  fVar44 = fRam000000014686700c;
  fVar56 = fRam0000000146867008;
  fVar55 = fRam0000000146867004;
  fVar54 = _DAT_146867000;
  auVar3._4_4_ = fStack_3b4;
  auVar3._0_4_ = local_3b8;
  auVar3._8_4_ = fStack_3b0;
  auVar3._12_4_ = fStack_3ac;
  auVar28 = minps(*(undefined1 (*) [16])(param_2 + 0xe),auVar3);
  auVar30._4_4_ = -(uint)(auVar28._4_4_ < fRam0000000146867064);
  auVar30._0_4_ = -(uint)(auVar28._0_4_ < _DAT_146867060);
  auVar30._8_4_ = -(uint)(auVar28._8_4_ < fRam0000000146867068);
  auVar30._12_4_ = -(uint)(auVar28._12_4_ < fRam000000014686706c);
  iVar7 = movmskps((int)pfVar14,auVar30);
  local_b88 = local_3b8;
  fStack_b84 = fStack_3b4;
  fStack_b80 = fStack_3b0;
  fStack_b7c = fStack_3ac;
  local_a38 = local_3d8;
  fStack_a34 = fStack_3d4;
  fStack_a30 = fStack_3d0;
  fStack_a2c = fStack_3cc;
  local_a28 = local_3c8;
  fStack_a24 = fStack_3c4;
  fStack_a20 = fStack_3c0;
  fStack_a1c = fStack_3bc;
  if (iVar7 == 0) {
    fVar54 = *(float *)(param_2 + 10);
    fVar55 = *(float *)((longlong)param_2 + 0x54);
    fVar56 = *(float *)(param_2 + 0xb);
    fVar44 = *(float *)((longlong)param_2 + 0x5c);
    local_3b8 = *(float *)(param_2 + 0xc) * local_3b8;
    fStack_3b4 = *(float *)((longlong)param_2 + 100) * fStack_3b4;
    fStack_3b0 = *(float *)(param_2 + 0xd) * fStack_3b0;
    fStack_3ac = *(float *)((longlong)param_2 + 0x6c) * fStack_3ac;
    fVar42 = local_3d8 * fVar44 * _DAT_146867040 + fStack_3cc * fVar54 +
             fStack_3d4 * fVar56 * _DAT_146867030 + fStack_3d0 * fVar55 * _DAT_146867020;
    fVar43 = local_3d8 * fVar56 * fRam0000000146867044 + fStack_3cc * fVar55 +
             fStack_3d4 * fVar44 * fRam0000000146867034 + fStack_3d0 * fVar54 * fRam0000000146867024
    ;
    fVar38 = local_3d8 * fVar55 * fRam0000000146867048 + fStack_3cc * fVar56 +
             fStack_3d4 * fVar54 * fRam0000000146867038 + fStack_3d0 * fVar44 * fRam0000000146867028
    ;
    fVar39 = local_3d8 * fVar54 * fRam000000014686704c + fStack_3cc * fVar44 +
             fStack_3d4 * fVar55 * fRam000000014686703c + fStack_3d0 * fVar56 * fRam000000014686702c
    ;
    fVar56 = fStack_3b0 * fStack_3d4 - fStack_3b4 * fStack_3d0;
    fVar44 = local_3b8 * fStack_3d0 - fStack_3b0 * local_3d8;
    fVar40 = fStack_3b4 * local_3d8 - local_3b8 * fStack_3d4;
    fVar41 = fStack_3ac * fStack_3cc - fStack_3ac * fStack_3cc;
    fVar56 = fVar56 + fVar56;
    fVar44 = fVar44 + fVar44;
    fVar40 = fVar40 + fVar40;
    fVar41 = fVar41 + fVar41;
    fVar54 = (fVar40 * fStack_3d4 - fVar44 * fStack_3d0) + fVar56 * fStack_3cc + local_3b8 +
             local_3c8;
    fVar55 = (fVar56 * fStack_3d0 - fVar40 * local_3d8) + fVar44 * fStack_3cc + fStack_3b4 +
             fStack_3c4;
    fVar56 = (fVar44 * local_3d8 - fVar56 * fStack_3d4) + fVar40 * fStack_3cc + fStack_3b0 +
             fStack_3c0;
    fVar44 = (fVar41 * fStack_3cc - fVar41 * fStack_3cc) + fVar41 * fStack_3cc + fStack_3ac +
             fStack_3bc;
  }
  else {
    fVar38 = fStack_3d4 + fStack_3d4;
    fVar39 = fStack_3d0 + fStack_3d0;
    fVar45 = local_3d8 * (local_3d8 + local_3d8);
    fVar53 = fStack_3cc * (local_3d8 + local_3d8);
    fStack_7d4 = (fStack_3cc * fVar39 + local_3d8 * fVar38) * local_3b8;
    fStack_7c0 = (fVar53 + fStack_3d4 * fVar39) * fStack_3b4;
    local_7b8 = (fStack_3cc * fVar38 + local_3d8 * fVar39) * fStack_3b0;
    local_7c8 = fStack_3b4 * (local_3d8 * fVar38 - fStack_3cc * fVar39);
    fStack_7b4 = fStack_3b0 * (fStack_3d4 * fVar39 - fVar53);
    fStack_7d0 = local_3b8 * (local_3d8 * fVar39 - fStack_3cc * fVar38);
    local_7d8 = (float)((uint)((_DAT_146867000 - (fStack_3d0 * fVar39 + fStack_3d4 * fVar38)) *
                              local_3b8) & _DAT_146867010);
    fStack_7c4 = (float)((uint)((fRam0000000146867004 - (fStack_3d0 * fVar39 + fVar45)) * fStack_3b4
                               ) & uRam0000000146867014);
    fStack_7b0 = (float)((uint)((fRam0000000146867008 - (fStack_3d4 * fVar38 + fVar45)) * fStack_3b0
                               ) & uRam0000000146867018);
    fStack_7cc = (float)((uint)((fRam000000014686700c - (fVar45 + fVar45)) * fStack_3ac) &
                        uRam000000014686701c);
    fVar38 = *(float *)(param_2 + 10);
    fVar39 = *(float *)((longlong)param_2 + 0x54);
    fVar45 = *(float *)(param_2 + 0xb);
    fVar53 = *(float *)((longlong)param_2 + 0x5c);
    fVar33 = fVar39 + fVar39;
    fVar49 = fVar45 + fVar45;
    fVar52 = fVar38 * (fVar38 + fVar38);
    fVar50 = (fVar38 + fVar38) * fVar53;
    fStack_79c = fRam000000014686700c;
    fStack_794 = (fVar49 * fVar53 + fVar33 * fVar38) * *(float *)(param_2 + 0xe);
    fStack_780 = (fVar50 + fVar49 * fVar39) * *(float *)((longlong)param_2 + 0x74);
    local_778 = (fVar33 * fVar53 + fVar49 * fVar38) * *(float *)(param_2 + 0xf);
    local_788 = *(float *)((longlong)param_2 + 0x74) * (fVar33 * fVar38 - fVar49 * fVar53);
    fStack_774 = *(float *)(param_2 + 0xf) * (fVar49 * fVar39 - fVar50);
    fStack_790 = *(float *)(param_2 + 0xe) * (fVar49 * fVar38 - fVar33 * fVar53);
    local_798 = (float)((uint)((_DAT_146867000 - (fVar45 * fVar49 + fVar39 * fVar33)) *
                              *(float *)(param_2 + 0xe)) & _DAT_146867010);
    fStack_784 = (float)((uint)((fRam0000000146867004 - (fVar45 * fVar49 + fVar52)) *
                               *(float *)((longlong)param_2 + 0x74)) & uRam0000000146867014);
    fStack_770 = (float)((uint)((fRam0000000146867008 - (fVar39 * fVar33 + fVar52)) *
                               *(float *)(param_2 + 0xf)) & uRam0000000146867018);
    fStack_78c = (float)((uint)((fRam000000014686700c - (fVar52 + fVar52)) *
                               *(float *)((longlong)param_2 + 0x7c)) & uRam000000014686701c);
    local_768 = *(float *)(param_2 + 0xc);
    fStack_764 = *(float *)((longlong)param_2 + 100);
    fStack_760 = *(float *)(param_2 + 0xd);
    fStack_75c = fRam000000014686700c;
    local_ca8 = fStack_794 * local_7c8 + local_798 * local_7d8 + fStack_790 * local_7b8 +
                fStack_78c * local_3c8;
    fStack_ca4 = fStack_794 * fStack_7c4 + local_798 * fStack_7d4 + fStack_790 * fStack_7b4 +
                 fStack_78c * fStack_3c4;
    fStack_ca0 = fStack_794 * fStack_7c0 + local_798 * fStack_7d0 + fStack_790 * fStack_7b0 +
                 fStack_78c * fStack_3c0;
    fStack_c9c = fStack_794 * fStack_7cc + local_798 * fStack_7cc + fStack_790 * fStack_7cc +
                 fStack_78c * fRam000000014686700c;
    local_c98 = fStack_784 * local_7c8 + local_788 * local_7d8 + fStack_780 * local_7b8 +
                fStack_78c * local_3c8;
    fStack_c94 = fStack_784 * fStack_7c4 + local_788 * fStack_7d4 + fStack_780 * fStack_7b4 +
                 fStack_78c * fStack_3c4;
    fStack_c90 = fStack_784 * fStack_7c0 + local_788 * fStack_7d0 + fStack_780 * fStack_7b0 +
                 fStack_78c * fStack_3c0;
    fStack_c8c = fStack_784 * fStack_7cc + local_788 * fStack_7cc + fStack_780 * fStack_7cc +
                 fStack_78c * fRam000000014686700c;
    local_c88 = fStack_774 * local_7c8 + local_778 * local_7d8 + fStack_770 * local_7b8 +
                fStack_78c * local_3c8;
    fStack_c84 = fStack_774 * fStack_7c4 + local_778 * fStack_7d4 + fStack_770 * fStack_7b4 +
                 fStack_78c * fStack_3c4;
    fStack_c80 = fStack_774 * fStack_7c0 + local_778 * fStack_7d0 + fStack_770 * fStack_7b0 +
                 fStack_78c * fStack_3c0;
    fStack_c7c = fStack_774 * fStack_7cc + local_778 * fStack_7cc + fStack_770 * fStack_7cc +
                 fStack_78c * fRam000000014686700c;
    local_c78 = fStack_764 * local_7c8 + local_768 * local_7d8 + fStack_760 * local_7b8 +
                fRam000000014686700c * local_3c8;
    fStack_c74 = fStack_764 * fStack_7c4 + local_768 * fStack_7d4 + fStack_760 * fStack_7b4 +
                 fRam000000014686700c * fStack_3c4;
    fStack_c70 = fStack_764 * fStack_7c0 + local_768 * fStack_7d0 + fStack_760 * fStack_7b0 +
                 fRam000000014686700c * fStack_3c0;
    fStack_c6c = fStack_764 * fStack_7cc + local_768 * fStack_7cc + fStack_760 * fStack_7cc +
                 fRam000000014686700c * fRam000000014686700c;
    fStack_7bc = fStack_7cc;
    fStack_7ac = fStack_7cc;
    local_7a8 = local_3c8;
    fStack_7a4 = fStack_3c4;
    fStack_7a0 = fStack_3c0;
    fStack_77c = fStack_78c;
    fStack_76c = fStack_78c;
    FMatrix::RemoveScaling(&local_ca8);
    local_8c8 = (float)(-(uint)(fVar40 <= *(float *)(param_2 + 0xe) * local_3b8) &
                        (_DAT_146867050 ^ (uint)fVar54) ^ _DAT_146867050);
    fStack_8c4 = (float)(-(uint)(fVar41 <= *(float *)((longlong)param_2 + 0x74) * fStack_3b4) &
                         (uRam0000000146867054 ^ (uint)fVar55) ^ uRam0000000146867054);
    fStack_8c0 = (float)(-(uint)(fVar42 <= *(float *)(param_2 + 0xf) * fStack_3b0) &
                         (uRam0000000146867058 ^ (uint)fVar56) ^ uRam0000000146867058);
    uStack_8bc = -(uint)(fVar43 <= *(float *)((longlong)param_2 + 0x7c) * fStack_3ac) &
                 (uRam000000014686705c ^ (uint)fVar44) ^ uRam000000014686705c;
    local_ca8 = local_ca8 * local_8c8;
    fStack_ca4 = fStack_ca4 * local_8c8;
    fStack_ca0 = fStack_ca0 * local_8c8;
    fStack_c94 = fStack_c94 * fStack_8c4;
    fStack_c90 = fStack_c90 * fStack_8c4;
    local_c98 = local_c98 * fStack_8c4;
    fStack_c84 = fStack_c84 * fStack_8c0;
    fStack_c80 = fStack_c80 * fStack_8c0;
    local_c88 = local_c88 * fStack_8c0;
    FQuat::FQuat(&local_aa8,&local_ca8);
    local_d28 = (undefined8 *)CONCAT44(local_d28._4_4_,0x322bcc77);
    auVar36._0_4_ = local_aa8 * local_aa8 + fStack_aa0 * fStack_aa0;
    auVar36._4_4_ = fStack_aa4 * fStack_aa4 + fStack_a9c * fStack_a9c;
    auVar36._8_4_ = fStack_aa0 * fStack_aa0 + local_aa8 * local_aa8;
    auVar36._12_4_ = fStack_a9c * fStack_a9c + fStack_aa4 * fStack_aa4;
    fVar40 = auVar36._4_4_ + auVar36._0_4_;
    fVar41 = auVar36._8_4_ + auVar36._4_4_;
    fVar38 = auVar36._12_4_ + auVar36._8_4_;
    fVar39 = auVar36._0_4_ + auVar36._12_4_;
    auVar2._4_4_ = fVar41;
    auVar2._0_4_ = fVar40;
    auVar2._8_4_ = fVar38;
    auVar2._12_4_ = fVar39;
    auVar28 = rsqrtps(auVar36,auVar2);
    fVar54 = auVar28._0_4_;
    fVar55 = auVar28._4_4_;
    fVar56 = auVar28._8_4_;
    fVar44 = auVar28._12_4_;
    fVar54 = (_DAT_146866ff0 - fVar54 * fVar54 * fVar40 * _DAT_146866ff0) * fVar54 + fVar54;
    fVar55 = (fRam0000000146866ff4 - fVar55 * fVar55 * fVar41 * fRam0000000146866ff4) * fVar55 +
             fVar55;
    fVar56 = (fRam0000000146866ff8 - fVar56 * fVar56 * fVar38 * fRam0000000146866ff8) * fVar56 +
             fVar56;
    fVar44 = (fRam0000000146866ffc - fVar44 * fVar44 * fVar39 * fRam0000000146866ffc) * fVar44 +
             fVar44;
    fVar42 = (float)(((uint)(((_DAT_146866ff0 - fVar54 * fVar54 * fVar40 * _DAT_146866ff0) * fVar54
                             + fVar54) * local_aa8) ^ _DAT_146866fe0) & -(uint)(1e-08 <= fVar40) ^
                    _DAT_146866fe0);
    fVar43 = (float)(((uint)(((fRam0000000146866ff4 -
                              fVar55 * fVar55 * fVar41 * fRam0000000146866ff4) * fVar55 + fVar55) *
                            fStack_aa4) ^ uRam0000000146866fe4) & -(uint)(1e-08 <= fVar41) ^
                    uRam0000000146866fe4);
    fVar38 = (float)(((uint)(((fRam0000000146866ff8 -
                              fVar56 * fVar56 * fVar38 * fRam0000000146866ff8) * fVar56 + fVar56) *
                            fStack_aa0) ^ uRam0000000146866fe8) & -(uint)(1e-08 <= fVar38) ^
                    uRam0000000146866fe8);
    fVar39 = (float)(((uint)(((fRam0000000146866ffc -
                              fVar44 * fVar44 * fVar39 * fRam0000000146866ffc) * fVar44 + fVar44) *
                            fStack_a9c) ^ uRam0000000146866fec) & -(uint)(1e-08 <= fVar39) ^
                    uRam0000000146866fec);
    fVar44 = 0.0;
    fVar54 = local_c78;
    fVar55 = fStack_c74;
    fVar56 = fStack_c70;
    local_aa8 = fVar42;
    fStack_aa4 = fVar43;
    fStack_aa0 = fVar38;
    fStack_a9c = fVar39;
  }
  if (*(char *)((longlong)param_2 + 0xa4) == '\0') {
    fVar41 = *(float *)(param_2 + 0x16);
    fVar45 = fStack_b84 * fVar41;
    fVar40 = local_b88 * fVar41;
    fVar41 = fStack_b80 * fVar41;
  }
  else {
    (**(code **)(*plVar11 + 0x420))(plVar11,local_178,*param_2,0);
    local_158 = local_158 & _DAT_146867090;
    uStack_154 = uStack_154 & uRam0000000146867094;
    auVar46._4_4_ = uStack_154;
    auVar46._0_4_ = local_158;
    uStack_150 = uStack_150 & uRam0000000146867098;
    auVar37._12_4_ = uStack_14c & uRam000000014686709c;
    auVar46._8_4_ = uStack_150;
    auVar46._12_4_ = auVar37._12_4_;
    auVar31._4_4_ = uStack_150;
    auVar31._0_4_ = uStack_154;
    auVar31._8_4_ = local_158;
    auVar31._12_4_ = auVar37._12_4_;
    auVar28 = maxps(auVar46,auVar31);
    auVar37._4_4_ = local_158;
    auVar37._0_4_ = uStack_150;
    auVar37._8_4_ = uStack_154;
    auVar28 = maxps(auVar28,auVar37);
    local_d10 = auVar28._0_4_;
    fVar45 = local_d10 * *(float *)(param_2 + 0x16);
    fVar40 = fVar45;
    fVar41 = fVar45;
  }
  local_a18._4_4_ = fVar45;
  local_a18._0_4_ = fVar40;
  local_a18._8_4_ = fVar41;
  local_a18._12_4_ = 0;
  if (*(char *)((longlong)param_2 + 0xa2) == '\0') {
    plVar12 = (longlong *)param_2[0x13];
    goto LAB_140a828b0;
  }
  plVar15 = (longlong *)(**(code **)(*plVar11 + 0x560))(plVar11,(int)param_2[0x17]);
  plVar11 = (longlong *)param_2[0x13];
  if (plVar11 == (longlong *)0x0) {
    if ((local_cc8 == (longlong *)0x0) || ((int)local_cc8[0x15] < 1)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)local_cc8[0x14];
    }
    if (local_d00 != (longlong *)0x0) {
      plVar11 = (longlong *)UStaticMesh::GetMaterial(local_d00,0);
    }
    if (*(char *)((longlong)param_2 + 0xa3) == '\x02') {
      if (plVar11 != (longlong *)0x0) {
        if (plVar15 != (longlong *)0x0) {
          lVar22 = (**(code **)(*plVar15 + 0x290))(plVar15);
          lVar16 = (**(code **)(*plVar11 + 0x290))(plVar11);
          plVar26 = plVar15;
          if (lVar16 == lVar22) {
            while (plVar26 != (longlong *)0x0) {
              cVar5 = FUN_140a79890(plVar26);
              plVar11 = plVar26;
              if (cVar5 == '\0') goto LAB_140a82775;
              cVar5 = FUN_140a79890();
              plVar11 = (longlong *)0x0;
              if (cVar5 != '\0') {
                plVar11 = plVar26;
              }
              plVar26 = (longlong *)plVar11[0x12];
            }
            goto LAB_140a828b0;
          }
        }
        goto LAB_140a82775;
      }
    }
    else {
LAB_140a82775:
      plVar12 = (longlong *)0x0;
      if (plVar11 != (longlong *)0x0) goto LAB_140a8277e;
    }
  }
  else {
LAB_140a8277e:
    plVar12 = (longlong *)0x0;
    if ((plVar15 != (longlong *)0x0) &&
       (plVar12 = (longlong *)UMaterialInstanceDynamic::Create(plVar11,0),
       plVar12 != (longlong *)0x0)) {
      FUN_142589350(plVar12,plVar15,*(undefined1 *)((longlong)param_2 + 0xa3));
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar22 = DAT_146b33f38;
      lVar23 = DAT_146b33f38 + 0x30;
      lVar16 = FWeakObjectPtr::Get(lVar23);
      if (lVar16 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar22 + 0x38)) &&
           (local_d00 = (longlong *)0x0, *(longlong *)(lVar22 + 0x40) != 0)) {
          lVar16 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar23,lVar16);
          if ((lVar16 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar22 + 0x38) = DAT_1464b56f4;
          }
          lVar16 = FWeakObjectPtr::Get(lVar23);
          if (lVar16 != 0) goto LAB_140a82846;
        }
      }
      else {
LAB_140a82846:
        cVar5 = FUN_140a79840();
        if ((cVar5 != '\0') && (lVar16 != 0)) {
          uVar27 = 0;
          puVar13 = *(undefined8 **)(lVar16 + 0x1e8);
          uVar24 = (longlong)*(int *)(lVar16 + 0x1f0) & 0x1fffffffffffffff;
          if (puVar13 + *(int *)(lVar16 + 0x1f0) < puVar13) {
            uVar24 = uVar27;
          }
          if (uVar24 != 0) {
            do {
              FUN_142588f70(plVar12,*puVar13);
              uVar27 = uVar27 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar27 != uVar24);
          }
        }
      }
    }
  }
LAB_140a828b0:
  lVar22 = param_2[0x10];
  lVar16 = param_2[0x11];
  local_cb8 = local_cd0 * *local_bb8;
  fStack_cb4 = local_cd0 * local_bb8[1];
  local_cb0 = local_cd0 * local_bb8[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xb4);
  lVar23 = FUN_140a79270(param_1);
  plVar11 = (longlong *)0x0;
  if (lVar23 != 0) {
    uVar10 = FUN_1413d5810();
    cVar5 = FUN_142c736c0(lVar23,uVar10);
    if (cVar5 != '\0') {
      plVar11 = param_1;
    }
  }
  local_318 = 1;
  local_3a8[0] = 0;
  local_398 = 0;
  lStack_390 = (ulonglong)(uint)fRam000000014686700c << 0x20;
  local_368 = 0;
  uStack_360 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_388 = 0;
  uStack_380 = 0;
  _local_378 = CONCAT44((uint)fRam0000000146867004 & uRam0000000146867014,
                        (uint)_DAT_146867000 & _DAT_146867010);
  _uStack_370 = CONCAT44((uint)fRam000000014686700c & uRam000000014686701c,
                         (uint)fRam0000000146867008 & uRam0000000146867018);
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_328 = 0;
  local_320 = 0;
  local_310 = 0;
  local_30c = 0;
  local_308 = 0;
  local_306 = 1;
  local_300 = 0;
  local_2f8 = 0;
  FWeakObjectPtr::operator=(local_2f0,0);
  local_2e8 = 0;
  FWeakObjectPtr::operator=(local_2e0,0);
  local_320 = CONCAT44(0x3f000000,(undefined4)local_320);
  local_2d8 = 0;
  local_2d0 = (longlong *)0x0;
  local_2c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_190 = (undefined1 *)0x0;
  local_188 = 1;
  local_2f8 = 1;
  local_3a8[0] = lVar9;
  TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
            (local_1b0,0);
  uVar24 = local_188;
  *(longlong *)
   ((longlong)(int)-(uint)(local_190 == (undefined1 *)0x0) & (ulonglong)local_1b0 |
   (ulonglong)local_190) = lVar22;
  if (lVar16 != 0) {
    lVar9 = (longlong)(int)local_188;
    iVar7 = (int)local_188 + 1;
    local_188 = CONCAT44(local_188._4_4_,iVar7);
    if (local_188._4_4_ < iVar7) {
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_1b0,uVar24 & 0xffffffff);
    }
    puVar19 = local_1b0;
    if (local_190 != (undefined1 *)0x0) {
      puVar19 = local_190;
    }
    *(longlong *)(puVar19 + lVar9 * 8) = lVar16;
  }
  uVar24 = local_188;
  if (plVar12 != (longlong *)0x0) {
    lVar9 = (longlong)(int)local_188;
    iVar7 = (int)local_188 + 1;
    local_188 = CONCAT44(local_188._4_4_,iVar7);
    if (local_188._4_4_ < iVar7) {
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_1b0,uVar24 & 0xffffffff);
    }
    puVar19 = local_1b0;
    if (local_190 != (undefined1 *)0x0) {
      puVar19 = local_190;
    }
    *(longlong **)(puVar19 + lVar9 * 8) = plVar12;
  }
  uVar24 = local_188;
  if (plVar11 != (longlong *)0x0) {
    lVar9 = (longlong)(int)local_188;
    iVar7 = (int)local_188 + 1;
    local_188 = CONCAT44(local_188._4_4_,iVar7);
    if (local_188._4_4_ < iVar7) {
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_1b0,uVar24 & 0xffffffff);
    }
    puVar19 = local_1b0;
    if (local_190 != (undefined1 *)0x0) {
      puVar19 = local_190;
    }
    *(longlong **)(puVar19 + lVar9 * 8) = plVar11;
  }
  local_938 = CONCAT44(fStack_cb4,local_cb8);
  local_948 = local_a18._0_8_;
  uStack_940 = local_a18._8_8_;
  local_930 = local_cb0;
  local_cc8 = (longlong *)0x0;
  local_cc0 = 0;
  local_988 = lVar22;
  local_980 = plVar12;
  local_978 = lVar16;
  local_968 = fVar42;
  fStack_964 = fVar43;
  fStack_960 = fVar38;
  fStack_95c = fVar39;
  local_958 = fVar54;
  fStack_954 = fVar55;
  fStack_950 = fVar56;
  fStack_94c = fVar44;
  local_92c = uVar1;
  local_928 = plVar11;
  uVar10 = FUN_140a7a020(local_748,&local_988);
  lVar9 = operator_new(0x90,&local_cc8);
  if (lVar9 != 0) {
    uVar10 = FUN_140a7a020(local_6d8,uVar10);
    FUN_140a79d90(lVar9,FUN_140a84630,uVar10);
  }
  if ((local_cc0 == 0) || (local_cc8 == (longlong *)0x0)) {
    if ((local_2c8 != 0) && (local_2d0 != (longlong *)0x0)) {
      (**(code **)(*local_2d0 + 0x28))(local_2d0,0);
      if (local_2d0 != (longlong *)0x0) {
        local_2d0 = (longlong *)FMemory::Realloc(local_2d0,0,0);
      }
      local_2c8 = 0;
    }
  }
  else {
    (**(code **)(*local_cc8 + 0x30))(local_cc8,&local_2d0);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_cc8);
  uVar10 = FUN_140a7a570(local_668,local_3a8);
  uVar17 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1424ad6e0(uVar17,uVar10);
  FUN_140a7c6c0(local_3a8);
LAB_140a82cbb:
  if (local_3e8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 140a82d60 FUN_140a82d60 body=414 status=ok
// SIG undefined FUN_140a82d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a82d60(undefined8 param_1,undefined4 param_2,undefined1 param_3,longlong param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_268 [32];
  undefined1 local_248 [64];
  longlong local_208;
  undefined8 local_200;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  longlong local_a8;
  undefined1 local_94;
  undefined1 local_8c;
  undefined1 local_80;
  longlong local_68;
  ulonglong local_48;
  
  if (param_4 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
    FUN_140a7a8d0(local_248,param_4 + 0x350);
    local_200 = *param_5;
    if (*param_6 != 0) {
      lVar3 = FUN_142e0d0b0();
      lVar1 = *param_6;
      for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          if (lVar1 != 0) {
            local_208 = lVar1;
          }
          break;
        }
      }
    }
    plVar4 = (longlong *)thunk_FUN_142d54de0();
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 0x67) = *(undefined4 *)(param_4 + 0x338);
      *(undefined1 *)((longlong)plVar4 + 0x335) = param_3;
      FUN_140a7d9f0(plVar4 + 0x6a,local_248);
      (**(code **)(*plVar4 + 0x10))(plVar4,local_248);
      FUN_142d29b80(param_1,param_2,plVar4);
      FUN_142d266f0(plVar4);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    local_80 = 0;
    local_8c = 0;
    local_94 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (local_c8 != 0) {
      plVar4 = local_f8;
      if (local_d8 != (longlong *)0x0) {
        plVar4 = local_d8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a82f00 FUN_140a82f00 body=450 status=ok
// SIG undefined FUN_140a82f00(void)

void FUN_140a82f00(longlong *param_1,undefined4 param_2,char param_3,longlong *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  
  cVar3 = FUN_142d1f200();
  bVar2 = false;
  if (param_4 == (longlong *)0x0) {
    param_4 = (longlong *)thunk_FUN_142d54de0();
    bVar2 = true;
    if (param_4 == (longlong *)0x0) goto LAB_140a8308f;
  }
  FUN_140a7d9f0(param_4 + 0x6a,param_1);
  (**(code **)(*param_4 + 0x10))(param_4,param_1);
  if ((param_1[1] != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    plVar5 = (longlong *)0x0;
    if (cVar3 != '\0') {
      plVar7 = (longlong *)param_1[2];
      if (param_1[1] == 0) {
        plVar7 = plVar5;
      }
      cVar4 = (**(code **)(*plVar7 + 0x10))();
      if (cVar4 == '\0') goto LAB_140a82fb4;
    }
    if (param_1[1] != 0) {
      plVar5 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,param_4);
  }
LAB_140a82fb4:
  if (*param_1 != 0) {
    FUN_142d29b80(*param_1,param_2,param_4);
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get((longlong)param_4 + 0xd4);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x400))(plVar5,param_4[0x1c]);
    if (cVar4 == '\0') {
      lVar6 = FUN_142e71b90();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140a8307a;
    }
    local_40 = (undefined4)param_4[0x23];
    local_48 = param_4[0x22];
    local_30 = (undefined4)param_4[0x26];
    local_38 = param_4[0x25];
    (**(code **)(*plVar5 + 0x5f0))(plVar5,&local_38,&local_48,param_4[0x1c]);
  }
LAB_140a8307a:
  if (bVar2) {
    FUN_142d266f0(param_4);
  }
LAB_140a8308f:
  if (param_3 != '\0') {
    FUN_140a9bde0(param_1,cVar3,param_2,0);
  }
  return;
}



// FUNCTION 140a830d0 FUN_140a830d0 body=98 status=ok
// SIG undefined FUN_140a830d0(void)

void FUN_140a830d0(longlong param_1,undefined8 param_2)

{
  FUN_140a82f00(param_1,param_2,1,0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  if (*(char *)(param_1 + 0x1bc) != '\0') {
    *(undefined1 *)(param_1 + 0x1bc) = 0;
  }
  if (*(char *)(param_1 + 0x1b4) != '\0') {
    *(undefined1 *)(param_1 + 0x1b4) = 0;
  }
  FUN_140a7c7a0(param_1);
  return;
}



// FUNCTION 140a83140 FUN_140a83140 body=2017 status=ok
// SIG undefined FUN_140a83140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a83140(ulonglong param_1,undefined4 param_2,float *param_3,float param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,float param_12,
                  float param_13,float param_14,byte param_15,undefined8 param_16,
                  undefined8 param_17,char param_18,undefined4 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  void **ppvVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  ulonglong local_480;
  undefined4 local_478;
  float local_468;
  float fStack_464;
  float local_460;
  undefined8 local_458;
  float local_450;
  uint local_448;
  uint uStack_444;
  uint *puStack_440;
  int local_438;
  int iStack_434;
  uint uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined8 local_420;
  float local_418;
  float local_414;
  byte local_410;
  undefined1 local_40f;
  void *local_408;
  undefined8 local_400;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  float local_3b8;
  float local_3ac;
  longlong *local_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  uint *local_398;
  uint uStack_390;
  int iStack_38c;
  undefined8 local_388;
  float local_378;
  longlong *local_370;
  undefined8 uStack_368;
  uint *puStack_360;
  uint uStack_358;
  int iStack_354;
  undefined8 uStack_350;
  undefined1 local_348 [24];
  undefined8 local_330;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [152];
  undefined8 local_260;
  undefined8 local_23c;
  float local_234;
  undefined8 local_230;
  float local_228;
  longlong local_1f8 [4];
  longlong *local_1d8;
  int local_1c8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  float local_198;
  undefined1 local_194;
  float local_190;
  undefined1 local_18c;
  undefined1 local_188;
  float local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_148 [2];
  uint local_138 [4];
  uint *local_128;
  int local_120;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  local_3e0 = param_9;
  local_3d8 = param_10;
  local_3f0 = param_16;
  local_3d0 = param_17;
  local_3c8 = param_21;
  if (param_1 != 0) {
    uVar8 = 0;
    local_428 = param_2;
    if (param_8 == 0) {
      lVar5 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      param_8 = uVar8;
      if (bVar3) {
        param_8 = param_1;
      }
    }
    local_3e8 = FUN_142d46fe0(param_8);
    if (param_18 != '\0') {
      fVar11 = (float)FUN_142d3bb80(local_3e8);
      param_4 = param_4 * fVar11;
    }
    local_450 = param_3[2];
    local_458 = *(undefined8 *)param_3;
    local_478 = param_11;
    local_488 = param_7;
    local_480 = param_8;
    FUN_142d395a0(local_148,param_1,&local_458,param_4);
    local_418 = param_3[2];
    local_398 = local_138;
    puStack_440 = local_398;
    local_414 = param_4;
    local_408 = (void *)0x0;
    local_400 = 0;
    local_420 = *(undefined8 *)param_3;
    local_410 = param_15 ^ 1;
    local_40f = 3;
    local_448 = 0;
    uStack_444 = 1;
    local_438 = 0xffffffff;
    iStack_434 = 0;
    uStack_430 = 0;
    if (local_120 != 0) {
      puVar10 = local_138;
      if (local_128 != (uint *)0x0) {
        puVar10 = local_128;
      }
      uVar2 = *puVar10;
      uVar9 = uVar8;
      while (uVar2 == 0) {
        iVar4 = (int)uVar8;
        uStack_430 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_430;
        uVar8 = (ulonglong)(iVar4 + 1U);
        local_448 = iVar4 + 1U;
        if ((int)(local_120 + -1 + (local_120 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
          iStack_434 = local_120;
          goto LAB_140a833aa;
        }
        uVar2 = puVar10[(longlong)iVar4 + 1];
        local_438 = 0xffffffff;
      }
      uStack_444 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_444 != 0) {
        for (; uStack_444 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_444 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_434 = (uStack_430 - iVar4) + 0x1f;
      if (local_120 < iStack_434) {
        iStack_434 = local_120;
      }
    }
LAB_140a833aa:
    uStack_390 = 0xffffffff;
    iStack_38c = iStack_434;
    local_388 = CONCAT44(uStack_42c,uStack_430);
    local_370 = local_148;
    uStack_368 = CONCAT44(uStack_444,local_448);
    iStack_434 = local_120;
    local_438 = -1 << ((byte)local_120 & 0x1f);
    uStack_3a0 = local_448;
    uStack_39c = uStack_444;
    puStack_360 = local_398;
    uStack_350 = local_388;
    local_3a8 = local_370;
    uStack_358 = uStack_390;
    iStack_354 = iStack_38c;
    while( true ) {
      if ((iStack_38c == local_120) && (local_398 == local_138)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (local_3a8 == local_148)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      plVar6 = (longlong *)((longlong)iStack_38c * 0x20 + *local_3a8);
      lVar5 = *plVar6;
      ppvVar1 = (void **)(plVar6 + 1);
      if (lVar5 != 0) {
        FUN_142d0aa70(local_348,lVar5,param_8,local_3f0);
        local_194 = 0;
        local_168 = 0;
        local_160 = 0;
        local_188 = 0;
        local_170 = 0;
        local_158 = 0;
        local_330 = local_3e8;
        local_310 = local_3e0;
        local_18c = 0;
        local_180 = 0;
        local_17c = 0x3f800000;
        local_178 = 0x3f800000;
        local_174 = 0x3f800000;
        local_300 = param_5;
        local_308 = param_6;
        lVar5 = *(longlong *)(lVar5 + 0x168);
        if (lVar5 == 0) {
          local_3b8 = DAT_1468b5d98;
          puVar7 = &local_3c0;
          local_3c0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar7 = &local_458;
          local_450 = *(float *)(lVar5 + 0x228);
          local_458 = *(undefined8 *)(lVar5 + 0x220);
        }
        local_3ac = *(float *)(puVar7 + 1);
        fStack_464 = (float)((ulonglong)*puVar7 >> 0x20) - param_3[1];
        local_468 = (float)*puVar7 - *param_3;
        local_460 = local_3ac - param_3[2];
        fVar11 = fStack_464 * fStack_464 + local_468 * local_468 + local_460 * local_460;
        if (fVar11 != 1.0) {
          if (1e-08 <= fVar11) {
            auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
            fVar12 = auVar13._0_4_;
            fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
            fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
            local_468 = local_468 * fVar12;
            fStack_464 = fStack_464 * fVar12;
            local_460 = local_460 * fVar12;
          }
          else {
            local_468 = DAT_1468b5d90;
            local_460 = DAT_1468b5d98;
            fStack_464 = DAT_1468b5d94;
          }
        }
        local_23c = CONCAT44(fStack_464,local_468);
        local_234 = local_460;
        fVar11 = (float)FUN_142d9cad0(local_3d8,0);
        local_378 = local_234 * fVar11;
        local_260 = local_3d0;
        local_158 = local_3c8;
        local_1b0 = param_19;
        local_1ac = param_20;
        local_230 = CONCAT44(local_23c._4_4_ * fVar11,(float)local_23c * fVar11);
        if (0.0 <= param_12) {
          local_198 = param_12;
          local_194 = 1;
        }
        if (0.0 <= param_13) {
          local_190 = param_13;
          local_18c = 1;
        }
        if (0.0 <= param_14) {
          local_184 = param_14;
          local_180 = 1;
        }
        local_228 = local_378;
        if (0 < (int)plVar6[2]) {
          FUN_140729f20(local_2f8,*ppvVar1);
        }
        if (&local_408 != ppvVar1) {
          iVar4 = (int)plVar6[2];
          _Src = *ppvVar1;
          local_400 = CONCAT44(local_400._4_4_,iVar4);
          if ((iVar4 == 0) && (local_400._4_4_ == 0)) {
            local_400 = 0;
          }
          else {
            TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(&local_408,iVar4);
            _guard_xfg_dispatch_icall_nop(local_408,_Src,(longlong)iVar4 * 0x90);
          }
        }
        local_480 = 0;
        local_488 = CONCAT71(local_488._1_7_,1);
        FUN_140a843d0(local_348,local_428,&local_420,1);
        if (local_168 != 0) {
          FMemory::Free();
        }
        local_180 = 0;
        local_18c = 0;
        local_194 = 0;
        if (local_1a8 != 0) {
          FMemory::Free();
        }
        if (local_1c8 != 0) {
          plVar6 = local_1f8;
          if (local_1d8 != (longlong *)0x0) {
            plVar6 = local_1d8;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_1d8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      uStack_390 = uStack_390 & ~uStack_39c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3a0);
    }
    if (local_408 != (void *)0x0) {
      FMemory::Free();
    }
    local_100 = 0;
    if (local_108 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_148);
  }
  return;
}



// FUNCTION 140a83930 FUN_140a83930 body=1499 status=ok
// SIG undefined FUN_140a83930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a83930(longlong param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_148 [32];
  byte local_128;
  int *local_120;
  uint local_118;
  ulonglong local_108;
  undefined4 local_100;
  int local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c0 [8];
  int *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong uVar14;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0x998) == 0) {
    return;
  }
  plVar11 = *(longlong **)(param_2 + 0x58);
  if (plVar11 != (longlong *)0x0) {
    lVar9 = plVar11[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar9 = plVar11[0x1f];
      if (lVar9 == 0) goto LAB_140a839a4;
    }
    if (*(char *)(lVar9 + 0xb1) != '\0') {
      return;
    }
  }
LAB_140a839a4:
  lVar9 = *(longlong *)(param_2 + 0x40);
  fVar20 = *(float *)(param_2 + 0x1a8);
  if (lVar9 != 0) {
    lVar7 = UEnvQueryTest_Cover::StaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      fVar20 = fVar20 * *(float *)(lVar9 + 0x1e4);
    }
  }
  fVar20 = fVar20 * *(float *)(param_2 + 0x1d8);
  if (fVar20 <= 0.0) {
    return;
  }
  iVar6 = FUN_142340f30(param_1);
  if (((iVar6 == 0) || (iVar6 == 3)) && (cVar5 = FUN_142d5a800(param_1 + 0x3d0), cVar5 != '\0')) {
    return;
  }
  uVar15 = 0;
  local_a0 = (int *)0x0;
  local_98 = 0;
  if (((*(byte *)(param_2 + 0x100) & 4) != 0) ||
     (bVar4 = false, (byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2)) {
    bVar4 = true;
  }
  if (bVar4) {
    if (*(longlong *)(param_1 + 0x988) == 0) {
      return;
    }
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x988) + 0x48);
    if ((plVar11 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar11 + 0x278))(plVar11,param_2,0), cVar5 == '\0'))
    goto LAB_140a83ea6;
    local_100 = *(undefined4 *)(param_2 + 0x300);
    local_120 = local_c0;
    local_108 = *(ulonglong *)(param_2 + 0x2f8);
    local_128 = (byte)(*(uint *)(param_1 + 0x840) >> 3) & 1;
    FUN_140a964d0(param_1,*(undefined8 *)(param_1 + 0x988),&local_108,
                  *(undefined4 *)(param_2 + 0x304));
  }
  else {
    lVar9 = *(longlong *)(param_2 + 0xe0);
    local_108 = 0;
    if (lVar9 == 0) {
      return;
    }
    uVar8 = FWeakObjectPtr::Get(param_2 + 0xd4);
    if (uVar8 == 0) {
LAB_140a83b96:
      local_108 = 0;
      local_f8 = -1;
      uVar8 = uVar15;
    }
    else {
      local_108 = uVar8;
      lVar7 = FUN_142a0cc80();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140a83b96;
      local_f8 = FUN_1423ac950(uVar8,lVar9);
    }
    local_118 = 0;
    uVar12 = uVar15;
    uVar14 = uVar15;
    if (0 < *(int *)(param_1 + 0x998)) {
      do {
        uVar13 = (uint)uVar14;
        lVar7 = *(longlong *)(param_1 + 0x990);
        uVar2 = *(uint *)(uVar12 + 8 + lVar7);
        if (((uVar2 & 0x10) == 0) && (lVar3 = *(longlong *)(uVar12 + lVar7), lVar3 != 0)) {
          plVar11 = (longlong *)(lVar3 + 0x30);
          if ((uVar2 & 2) != 0) {
            plVar11 = (longlong *)(lVar7 + 0x28 + uVar12);
          }
          if (lVar9 == *plVar11) {
LAB_140a83c67:
            uVar8 = local_98;
            lVar9 = (longlong)(int)local_98;
            iVar6 = (int)local_98 + 1;
            local_98 = CONCAT44(local_98._4_4_,iVar6);
            if (local_98._4_4_ < iVar6) {
              FUN_140a95f50(local_c0,uVar8 & 0xffffffff);
            }
            piVar10 = local_c0;
            if (local_a0 != (int *)0x0) {
              piVar10 = local_a0;
            }
            piVar10[lVar9] = local_118;
            break;
          }
          if ((*(char *)(lVar3 + 0x38) != '\0') && (uVar8 != 0)) {
            iVar6 = *(int *)(uVar12 + 0x58 + lVar7);
            if (iVar6 == -1) {
              FUN_1423aca10(uVar8,*plVar11,uVar12 + lVar7 + 0x58,lVar7 + 0x5c + uVar12);
              iVar6 = *(int *)(uVar12 + lVar7 + 0x58);
              uVar8 = local_108;
              uVar13 = local_118;
            }
            if ((iVar6 <= local_f8) && (local_f8 <= *(int *)(uVar12 + 0x5c + lVar7)))
            goto LAB_140a83c67;
          }
        }
        local_118 = uVar13 + 1;
        uVar12 = uVar12 + 0x60;
        uVar14 = (ulonglong)local_118;
      } while ((int)local_118 < *(int *)(param_1 + 0x998));
    }
  }
  if (((int)local_98 == 0) || (fVar16 = (float)FUN_142d1b990(param_1), fVar16 <= 0.0001))
  goto LAB_140a83ea6;
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_1);
  }
  lVar7 = *(longlong *)(param_2 + 800);
  fVar1 = *(float *)(lVar9 + 0x790);
  if (lVar7 == 0) {
LAB_140a83d35:
    fVar17 = 1.0;
  }
  else {
    lVar9 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140a83d35;
    fVar17 = *(float *)(lVar7 + 0x790);
  }
  local_e8 = *(undefined4 *)(param_2 + 0x118);
  local_dc = *(undefined4 *)(param_2 + 0x124);
  local_f0 = *(undefined8 *)(param_2 + 0x110);
  local_e4 = *(undefined8 *)(param_2 + 0x11c);
  local_c8 = -1;
  if ((byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2) {
    local_d8 = *(undefined8 *)(param_2 + 0x2f8);
    local_cc = *(undefined4 *)(param_2 + 0x304);
    local_d0 = *(undefined4 *)(param_2 + 0x300);
  }
  else {
    local_d8 = _DAT_1468b5d90;
    local_cc = 0;
    local_d0 = DAT_1468b5d98;
  }
  piVar10 = local_c0;
  if (local_a0 != (int *)0x0) {
    piVar10 = local_a0;
  }
  uVar8 = (longlong)(int)local_98 & 0x3fffffffffffffff;
  if (piVar10 + (int)local_98 < piVar10) {
    uVar8 = uVar15;
  }
  if (uVar8 != 0) {
    do {
      iVar6 = *piVar10;
      plVar11 = (longlong *)((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 0x990));
      fVar18 = *(float *)(plVar11 + 9);
      if ((0.0 < fVar18) && (*(float *)((longlong)plVar11 + 0x4c) <= fVar1 - fVar17)) {
        fVar18 = 0.0;
      }
      lVar9 = *plVar11;
      fVar18 = fVar18 + fVar20;
      *(float *)((longlong)plVar11 + 0x4c) = fVar1;
      *(float *)(plVar11 + 9) = fVar18;
      if ((*(char *)(lVar9 + 0x39) == '\0') || ((*(uint *)(param_1 + 0x840) >> 3 & 1) != 0)) {
        if (*(char *)(lVar9 + 0x3b) == '\0') {
          fVar19 = *(float *)(param_1 + 0x978);
        }
        else {
          fVar19 = *(float *)(lVar9 + 0x3c);
        }
        if (fVar19 <= fVar18 / fVar16) {
          local_c8 = iVar6;
          FUN_140a9a5c0(param_1,&local_f0,0,0);
        }
      }
      piVar10 = piVar10 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar8);
  }
LAB_140a83ea6:
  if (local_a0 != (int *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a83f10 FUN_140a83f10 body=1212 status=ok
// SIG undefined FUN_140a83f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140a83f10(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                      longlong *param_5,longlong param_6,undefined4 param_7)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_2d8 [32];
  char local_2b8;
  longlong local_2b0;
  undefined **local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  char local_294;
  undefined1 local_290 [8];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined1 local_27c;
  longlong local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined1 local_258 [336];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined8 local_c8;
  longlong local_b8;
  float local_a8;
  undefined1 local_a4;
  float local_a0;
  undefined1 local_9c;
  undefined1 local_98;
  float local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  lVar5 = *param_3;
  FUN_140a7ab30();
  lVar7 = *param_3;
  local_a4 = 0;
  local_9c = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  local_80 = 0;
  local_8c = 0x3f800000;
  local_88 = 0x3f800000;
  local_84 = 0x3f800000;
  local_68 = 0;
  if (lVar7 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar1 = *(int *)(lVar7 + 0x4e0);
      if (iVar1 != 0) {
        if (local_70._4_4_ < (int)local_70 + iVar1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_78);
        }
        puVar6 = (undefined4 *)((longlong)(int)local_70 * 0x10 + local_78);
        puVar8 = *(undefined4 **)(lVar7 + 0x4d8);
        iVar9 = iVar1;
        do {
          *puVar6 = *puVar8;
          puVar6[1] = puVar8[1];
          puVar6[2] = puVar8[2];
          puVar6[3] = puVar8[3];
          iVar9 = iVar9 + -1;
          puVar6 = puVar6 + 4;
          puVar8 = puVar8 + 4;
        } while (iVar9 != 0);
        local_70 = CONCAT44(local_70._4_4_,(int)local_70 + iVar1);
      }
      if (((*(byte *)(param_4 + 8) & 5) != 0) || (*(char *)(lVar7 + 0x4b8) != '\0')) {
        local_c8 = *(undefined8 *)(lVar7 + 0x4bc);
      }
    }
  }
  lVar7 = 0;
  local_2a8 = &PTR_FUN_14422ed38;
  local_29c = (float)((uint)local_29c & 0xffffff00);
  local_294 = '\0';
  local_290[4] = 0;
  local_288 = 0x3f800000;
  uVar3 = local_288;
  local_288 = 0x3f800000;
  uStack_284 = 0x3f800000;
  local_280 = 0x3f800000;
  local_27c = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  if (*param_5 != 0) {
    FUN_140a7d930(&local_2a8);
    uVar11 = local_270;
    lVar7 = local_278;
    iVar1 = (int)local_270;
    local_8c = local_288;
    local_84 = uStack_284;
    local_88 = local_280;
    local_68 = local_268;
    if ((int)local_270 != 0) {
      if (local_70._4_4_ < (int)local_270 + (int)local_70) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_78);
      }
      uVar11 = uVar11 & 0xffffffff;
      puVar6 = (undefined4 *)((longlong)(int)local_70 * 0x10 + local_78);
      puVar8 = (undefined4 *)(lVar7 + 4);
      do {
        *puVar6 = puVar8[-1];
        puVar6[1] = *puVar8;
        puVar6[2] = puVar8[1];
        puVar6[3] = puVar8[2];
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
        puVar6 = puVar6 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      local_70 = CONCAT44(local_70._4_4_,(int)local_70 + iVar1);
    }
    uVar3 = local_288;
    fVar13 = local_2a0;
    if (local_29c._0_1_ != '\0') goto LAB_140a841c9;
  }
  local_288 = uVar3;
  fVar13 = (float)FUN_142c98860(param_1 + 0x1f8,lVar5);
LAB_140a841c9:
  if (0.0 <= fVar13) {
    local_a4 = 1;
    local_a8 = fVar13;
  }
  if (local_290[4] == '\0') {
    fVar13 = (float)FUN_142c98860(param_1 + 0x230,lVar5);
  }
  else {
    fVar13 = local_290._0_4_;
  }
  if (0.0 <= fVar13) {
    local_98 = local_27c;
    local_9c = 1;
    local_a0 = fVar13;
  }
  fVar13 = local_298;
  if (local_294 == '\0') {
    fVar13 = (float)FUN_142c98860(param_1 + 0x268,lVar5);
  }
  if (0.0 <= fVar13) {
    local_90 = 1;
    local_94 = fVar13;
  }
  local_80 = CONCAT11(*(undefined1 *)(param_1 + 0x30a),*(undefined1 *)(param_1 + 0x2f0));
  lVar5 = thunk_FUN_142d54de0();
  if (lVar5 != 0) {
    if (((param_6 == 0) || (*(int *)(param_6 + 4) != 2)) || (*(float *)(param_6 + 8) <= 0.0)) {
      FUN_140a82f00(local_258,param_7,1,lVar5);
    }
    else {
      local_2a0 = *(float *)(param_6 + 0x1c);
      local_2a8 = *(undefined ***)(param_6 + 0x14);
      local_2b8 = ((*(byte *)(param_4 + 8) & 5) != 0) + '\x01';
      local_290 = (undefined1  [8])0x0;
      local_288 = 0;
      uStack_284 = 0;
      local_298 = (float)CONCAT22(local_298._2_2_,0x201);
      local_2b0 = lVar5;
      local_29c = *(float *)(param_6 + 8);
      FUN_140a843d0(local_258,param_7,&local_2a8,1);
      if (local_290 != (undefined1  [8])0x0) {
        FMemory::Free();
      }
    }
  }
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_90 = 0;
  local_9c = 0;
  local_a4 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    plVar12 = local_108;
    if (local_e8 != (longlong *)0x0) {
      plVar12 = local_e8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return lVar5;
}



// FUNCTION 140a843d0 FUN_140a843d0 body=559 status=ok
// SIG undefined FUN_140a843d0(void)

void FUN_140a843d0(longlong *param_1,undefined4 param_2,undefined8 *param_3,char param_4,
                  undefined1 param_5,longlong *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float local_58;
  undefined8 local_48;
  undefined4 local_40;
  
  cVar3 = FUN_142d1f200();
  bVar2 = false;
  if (param_6 == (longlong *)0x0) {
    param_6 = (longlong *)thunk_FUN_142d54de0();
    bVar2 = true;
    if (param_6 == (longlong *)0x0) goto LAB_140a845c5;
  }
  FUN_140a7d9f0(param_6 + 0x6a,param_1);
  (**(code **)(*param_6 + 0x10))(param_6,param_1);
  FUN_142d29240(param_6,param_5,param_3);
  plVar5 = (longlong *)0x0;
  if ((param_1[1] != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    if (cVar3 != '\0') {
      plVar7 = (longlong *)param_1[2];
      if (param_1[1] == 0) {
        plVar7 = plVar5;
      }
      cVar4 = (**(code **)(*plVar7 + 0x10))();
      if (cVar4 == '\0') goto LAB_140a844a7;
    }
    if (param_1[1] != 0) {
      plVar5 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,param_6);
  }
LAB_140a844a7:
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x400))(plVar5,param_2,param_6,param_3);
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get((longlong)param_6 + 0xd4);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x400))(plVar5,param_6[0x1c]);
    if (cVar4 == '\0') {
      lVar6 = FUN_142e71b90();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140a845ab;
    }
    local_40 = *(undefined4 *)(param_3 + 1);
    local_48 = *param_3;
    fVar8 = (float)((ulonglong)param_6[0x25] >> 0x20);
    local_58 = (float)param_6[0x25];
    (**(code **)(*plVar5 + 0x5f8))
              (plVar5,&local_48,*(undefined4 *)((longlong)param_3 + 0xc),
               SQRT(fVar8 * fVar8 + local_58 * local_58 +
                    *(float *)(param_6 + 0x26) * *(float *)(param_6 + 0x26)),
               *(char *)(param_3 + 2) == '\0',0);
  }
LAB_140a845ab:
  if (bVar2) {
    FUN_142d266f0(param_6);
  }
LAB_140a845c5:
  if (param_4 != '\0') {
    FUN_140a9bde0(param_1,cVar3,param_2,param_3);
  }
  return;
}



// FUNCTION 140a84600 FUN_140a84600 body=34 status=ok
// SIG undefined FUN_140a84600(void)

void FUN_140a84600(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x768) = param_2;
  FUN_142fe7840();
  FUN_140a9b9f0(param_1);
  return;
}



// FUNCTION 140a84630 FUN_140a84630 body=1388 status=ok
// SIG undefined FUN_140a84630(void)

void FUN_140a84630(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar11 = *param_4;
  if (lVar11 == 0) {
LAB_140a846ac:
    lVar11 = 0;
  }
  else {
    lVar7 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140a846ac;
  }
  lVar7 = *param_4;
  if (lVar7 == 0) {
LAB_140a846ed:
    lVar7 = 0;
  }
  else {
    lVar8 = UNodeMappingContainer::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140a846ed;
  }
  if (lVar11 == 0) {
    plVar10 = (longlong *)FUN_140a79980(param_1);
    (**(code **)(*plVar10 + 0x928))(plVar10,lVar7);
  }
  else {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_b0 = 0;
    uVar9 = FUN_142a07000();
    plVar10 = (longlong *)FUN_1417985e0(uVar9,param_1,0,0,0,0,0,0,0);
    (**(code **)(*plVar10 + 0x930))(plVar10,lVar11,1);
  }
  if (param_4[1] != 0) {
    (**(code **)(*plVar10 + 0x568))(plVar10,0);
  }
  uVar16 = 0x40a00000;
  FName::FName(&local_a0,L"PhysicsActor",1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar11 = DAT_146b33f38;
  lVar8 = DAT_146b33f38 + 0x30;
  lVar7 = FWeakObjectPtr::Get(lVar8);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar11 + 0x38)) || (*(longlong *)(lVar11 + 0x40) == 0))
    goto LAB_140a84874;
    lVar7 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar8,lVar7);
    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar11 + 0x38) = DAT_1464b56f4;
    }
    lVar7 = FWeakObjectPtr::Get(lVar8);
    if (lVar7 == 0) goto LAB_140a84874;
  }
  lVar11 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    local_a0 = *(undefined8 *)(lVar7 + 0x1d8);
    uVar16 = *(undefined4 *)(lVar7 + 0x1d4);
  }
LAB_140a84874:
  *(byte *)(plVar10 + 0x5e) = *(byte *)(plVar10 + 0x5e) & 0xf7;
  *(byte *)(plVar10 + 0x5e) = *(byte *)(plVar10 + 0x5e) | 0x10;
  local_a8 = 0;
  (**(code **)(*plVar10 + 2000))(plVar10,0,*(undefined4 *)((longlong)param_4 + 0x5c));
  FUN_142399d60(plVar10,param_4 + 4,0,0,1);
  (**(code **)(*plVar10 + 0x640))(plVar10,local_a0);
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_14234b270(plVar10,uVar9);
  FUN_14223f010(param_1,plVar10);
  (**(code **)(*plVar10 + 0x5b8))(plVar10,1);
  if (param_4[2] != 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_98 = 0;
    uVar9 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar11 = FUN_1417985e0(uVar9,param_1,0,0,0,0,0,0,0);
    *(byte *)(lVar11 + 0x71a) = *(byte *)(lVar11 + 0x71a) | 0x40;
    *(byte *)(lVar11 + 0xba) = *(byte *)(lVar11 + 0xba) | 3;
    *(byte *)(lVar11 + 0x24c) = *(byte *)(lVar11 + 0x24c) | 0x10;
    FUN_14260f940(lVar11,param_4[2]);
    local_90 = 0;
    FUN_142382f60(lVar11,plVar10,&DAT_146af29ec,0);
  }
  FUN_14222b9f0(param_1,param_2,1,0);
  local_70 = (undefined4)param_4[0xb];
  local_78 = param_4[10];
  local_88 = 0;
  (**(code **)(*plVar10 + 0x5d8))(plVar10,&local_78,0,0);
  if (*(float *)((longlong)param_1 + 0xcc) == 0.0) {
    (**(code **)(*param_1 + 0x3a0))(param_1,uVar16);
  }
  plVar10 = (longlong *)param_4[0xc];
  if ((plVar10 != (longlong *)0x0) && (cVar6 = FUN_1407cd900(plVar10), cVar6 == '\0')) {
    local_68 = FUN_142e27720();
    lVar11 = (**(code **)(*plVar10 + 0x628))(plVar10,local_68);
    if (lVar11 != 0) {
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
      local_60 = FUN_1413d5810();
      FUN_142c6f0c0(lVar11,local_60,&local_c0);
      plVar12 = local_c0 + (longlong)(int)local_b8 * 2;
      for (plVar10 = local_c0; plVar10 != plVar12; plVar10 = plVar10 + 2) {
        plVar3 = (longlong *)plVar10[1];
        plVar4 = (longlong *)*plVar10;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (((plVar4 != (longlong *)0x0) && (lVar11 = plVar4[2], lVar11 != 0)) &&
           (*(char *)(lVar11 + 0x134) != '\0')) {
          lVar7 = plVar4[1];
          lVar8 = FHierarchicalSimplification::StaticStruct();
          for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar8) {
              bVar5 = true;
              goto LAB_140a84ab4;
            }
          }
          bVar5 = false;
LAB_140a84ab4:
          plVar13 = (longlong *)0x0;
          if (bVar5) {
            plVar13 = plVar4;
          }
          FUN_142ce1050(plVar13,param_1);
          if (((*(byte *)(lVar11 + 0x60) & 8) != 0) &&
             (fVar15 = *(float *)((longlong)param_1 + 0xcc),
             fVar14 = (float)(**(code **)(*plVar13 + 0x58))(plVar13), fVar15 < fVar14)) {
            lVar11 = *param_1;
            fVar15 = (float)(**(code **)(*plVar13 + 0x58))(plVar13);
            (**(code **)(lVar11 + 0x3a0))(param_1,fVar15 + 1.0);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_c0);
    }
  }
  return;
}



// FUNCTION 140a84ba0 FUN_140a84ba0 body=2738 status=ok
// SIG undefined FUN_140a84ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a84ba0(longlong param_1,undefined4 param_2,longlong param_3)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined1 *local_300;
  undefined *local_2f8;
  undefined1 local_2e8 [8];
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  undefined8 local_2c0;
  float local_2b8;
  undefined8 local_2b0;
  float local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  float local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined1 local_270 [8];
  undefined8 local_268;
  float local_260;
  undefined4 local_25c;
  longlong *local_250;
  int local_248;
  undefined1 local_238 [12];
  undefined4 local_22c;
  float local_224;
  float fStack_220;
  float local_21c;
  undefined1 local_1cc [36];
  undefined8 local_1a8;
  undefined8 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined1 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [72];
  longlong local_110;
  longlong local_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2c8) + 0x3e) == '\0') {
    return;
  }
  plVar12 = *(longlong **)(param_1 + 0x118);
  plVar14 = (longlong *)0x0;
  local_2d0 = param_3;
  if (plVar12 == (longlong *)0x0) {
LAB_140a84c47:
    plVar12 = plVar14;
  }
  else {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a84c47;
  }
  lVar6 = FUN_140a8bb80(param_1);
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x10b8) != '\0') {
    return;
  }
  FUN_14233f450(param_1);
  if (param_3 == 0) {
    return;
  }
  (**(code **)(*plVar12 + 0x8e0))(plVar12,0);
  FUN_142dafbc0(lVar6 + 0xd70,&DAT_146867408);
  FUN_142cdd100(local_270);
  plVar12 = (longlong *)plVar12[0x92];
  local_198 = DAT_1468b5d90;
  local_190 = DAT_1468b5d98;
  local_174 = 0x41200000;
  local_194 = DAT_1468b5d94;
  local_160 = 0x40000000;
  local_170 = 0xbf800000;
  local_1a8 = 0;
  local_1a0 = 0;
  local_180 = 0;
  local_17c = 0x3f800000;
  local_178 = 0;
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  local_15c = 2;
  if (plVar12 == (longlong *)0x0) {
LAB_140a84db8:
    plVar12 = plVar14;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a84db8;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar7 == 0) {
    local_2b8 = DAT_1468b5d98;
    puVar9 = &local_2c0;
    local_2c0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    puVar9 = &local_2a0;
    local_298 = *(undefined4 *)(lVar7 + 0x228);
    local_2a0 = *(undefined8 *)(lVar7 + 0x220);
  }
  local_2b0 = *puVar9;
  local_2a8 = *(float *)(puVar9 + 1);
  plVar8 = (longlong *)FUN_140a8db60(param_1,param_3);
  if ((plVar8 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(*plVar8 + 0x440))(plVar8,*(undefined8 *)(param_1 + 0x310)), cVar4 != '\0'
     )) {
    puVar9 = (undefined8 *)
             (**(code **)(*plVar8 + 0x428))(plVar8,&local_2c0,*(undefined8 *)(param_1 + 0x310));
    plVar14 = (longlong *)0x1;
    local_290 = *puVar9;
    local_288 = *(float *)(puVar9 + 1);
  }
  cVar4 = (char)plVar14;
  uVar10 = USoundSourceBus::GetPrivateStaticClass();
  AActor::GetComponentsByClass(param_3,&local_250,uVar10);
  plVar8 = local_250 + local_248;
  for (plVar13 = local_250; plVar13 != plVar8; plVar13 = plVar13 + 1) {
    plVar2 = (longlong *)*plVar13;
    if (plVar2 != (longlong *)0x0) {
      lVar7 = USoundSourceBus::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (cVar4 = (**(code **)(*plVar2 + 0x440))(plVar2), cVar4 != '\0')) {
        puVar9 = (undefined8 *)
                 (**(code **)(*plVar2 + 0x428))(plVar2,&local_2c0,*(undefined8 *)(param_1 + 0x310));
        plVar14 = (longlong *)0x1;
        local_290 = *puVar9;
        local_288 = *(float *)(puVar9 + 1);
      }
    }
    cVar4 = (char)plVar14;
  }
  if (cVar4 == '\0') {
    local_268 = local_2b0;
    local_260 = local_2a8;
    if (plVar12 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_238,0,0x90);
      local_22c = 0x3f800000;
      local_280 = 0;
      local_278 = 0;
      local_2a0 = 0;
      local_298 = 0;
      (**(code **)(*plVar12 + 0x830))(plVar12,&local_280,&local_2a0);
      local_2e0 = 0;
      local_308 = *(undefined8 *)(param_1 + 0x118);
      FUN_1422ffb20(local_158,0,local_2e8,0);
      fVar19 = *(float *)(*(longlong *)(param_1 + 0x2c8) + 0x40);
      pfVar11 = (float *)FRotator::Vector(&local_2a0,&local_2e0);
      lVar7 = *(longlong *)(param_1 + 0x120);
      local_2b8 = local_2a8 + fVar19 * pfVar11[2];
      local_2c0 = CONCAT44(local_2b0._4_4_ + fVar19 * pfVar11[1],
                           (float)local_2b0 + fVar19 * *pfVar11);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1);
      }
      local_2f8 = &DAT_146aefe68;
      local_300 = local_158;
      local_308 = CONCAT44(local_308._4_4_,2);
      cVar5 = UWorld::LineTraceSingleByChannel(lVar7,local_238,&local_2b0,&local_2c0);
      if ((cVar5 != '\0') && (cVar5 = FUN_14058c1e0(local_1cc,local_2d0), cVar5 != '\0')) {
        local_268 = CONCAT44(fStack_220,local_224);
        local_260 = local_21c;
      }
      goto LAB_140a85220;
    }
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_238,0,0x90);
    local_22c = 0x3f800000;
    local_2e0 = 0;
    local_308 = *(undefined8 *)(param_1 + 0x118);
    FUN_1422ffb20(local_158,0,local_2e8,0);
    lVar7 = *(longlong *)(param_1 + 0x120);
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    local_2f8 = &DAT_146aefe68;
    local_300 = local_158;
    local_308 = CONCAT44(local_308._4_4_,2);
    cVar5 = UWorld::LineTraceSingleByChannel(lVar7,local_238,&local_2b0,&local_290);
    if (cVar5 == '\0') {
      local_224 = (float)local_290;
      fStack_220 = local_290._4_4_;
      local_21c = local_288;
    }
    local_224 = local_224 - (float)local_2b0;
    fStack_220 = fStack_220 - local_2b0._4_4_;
    local_21c = local_21c - local_2a8;
    fVar17 = SQRT(local_224 * local_224 + fStack_220 * fStack_220 + local_21c * local_21c);
    fVar19 = *(float *)(*(longlong *)(param_1 + 0x2c8) + 0x44);
    local_268 = local_2b0;
    local_260 = local_2a8;
    if (fVar19 < fVar17) {
      fVar15 = 1.0 / fVar17;
      fVar17 = fVar17 - fVar19;
      local_2b8 = local_2a8 + local_21c * fVar15 * fVar17;
      local_268 = CONCAT44(local_2b0._4_4_ + fStack_220 * fVar15 * fVar17,
                           (float)local_2b0 + local_224 * fVar15 * fVar17);
      local_260 = local_2b8;
    }
LAB_140a85220:
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
  }
  local_25c = param_2;
  FUN_142d008a0(lVar6,local_270);
  if (cVar4 == '\0') {
    local_178 = 1;
  }
  else {
    local_198 = (float)local_290;
    local_190 = local_288;
    local_194 = local_290._4_4_;
    local_2d0 = 0;
    local_2c8 = 0.0;
    local_2a0 = 0;
    local_298 = 0;
    if (plVar12 == (longlong *)0x0) goto LAB_140a855df;
    (**(code **)(*plVar12 + 0x830))(plVar12,&local_2d0,&local_2a0);
    local_2d8 = local_190 - local_2c8;
    local_2e0 = CONCAT44(local_194 - local_2d0._4_4_,local_198 - (float)local_2d0);
    pfVar11 = (float *)FRotator::Vector(&local_2a0,&local_280);
    fVar19 = *pfVar11;
    fVar17 = pfVar11[1];
    fVar15 = pfVar11[2];
    fVar18 = local_2e0._4_4_ * fVar17 * 50.0 + (float)local_2e0 * fVar19 * 50.0 +
             local_2d8 * fVar15 * 50.0;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x2c8) + 100);
    fVar16 = 0.0004 / (fVar17 * fVar17 + fVar19 * fVar19 + fVar15 * fVar15);
    fVar19 = (float)local_2d0 + fVar19 * 50.0 * fVar18 * fVar16;
    fVar17 = local_2d0._4_4_ + fVar17 * 50.0 * fVar18 * fVar16;
    fVar15 = local_2c8 + fVar15 * 50.0 * fVar18 * fVar16;
    fVar18 = fVar19 - local_198;
    fVar20 = fVar17 - local_194;
    fVar21 = fVar15 - local_190;
    fVar16 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar21 * fVar21);
    if (fVar1 <= fVar16) {
      fVar16 = 1.0 / fVar16;
      fVar19 = local_198 + fVar16 * fVar18 * fVar1;
      fVar17 = local_194 + fVar16 * fVar20 * fVar1;
      fVar15 = local_190 + fVar16 * fVar21 * fVar1;
    }
    local_190 = fVar15;
    local_194 = fVar17;
    local_198 = fVar19;
    FVector::Rotation(&local_2e0,&local_2c0);
    fVar19 = *(float *)(*(longlong *)(param_1 + 0x2c8) + 0x54);
    if (fVar19 < (float)local_2c0) {
      local_2c0 = CONCAT44(local_2c0._4_4_,fVar19);
      fVar19 = SQRT(local_2e0._4_4_ * local_2e0._4_4_ + (float)local_2e0 * (float)local_2e0 +
                    local_2d8 * local_2d8);
      pfVar11 = (float *)FRotator::Vector(&local_2c0,&local_280);
      local_198 = (float)local_2d0 + fVar19 * *pfVar11;
      local_190 = local_2c8 + fVar19 * pfVar11[2];
      local_194 = local_2d0._4_4_ + fVar19 * pfVar11[1];
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x2c8);
  local_174 = *(undefined4 *)(lVar7 + 0x58);
  local_16c = *(undefined4 *)(lVar7 + 0x60);
  local_170 = *(undefined4 *)(lVar7 + 0x5c);
  local_17c = param_2;
  FUN_142d00b40(lVar6,&local_1a8);
LAB_140a855df:
  if (local_250 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a85660 FUN_140a85660 body=49 status=ok
// SIG undefined FUN_140a85660(void)

void FUN_140a85660(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x750) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x748,0);
  }
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 140a856a0 FUN_140a856a0 body=1693 status=ok
// SIG undefined FUN_140a856a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a856a0(longlong *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [24];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_142223710();
  FUN_14223c460(param_1,1);
  plVar9 = (longlong *)param_1[0x23];
  if ((longlong *)param_1[0x23] == (longlong *)0x0) {
    plVar9 = param_1;
  }
  fVar11 = (float)FUN_142c98860(param_1 + 0xa3,plVar9);
  if (fVar11 < 0.0001) {
    fVar11 = 1.0;
  }
  (**(code **)(*param_1 + 0x3a0))(param_1,fVar11);
  uVar12 = FUN_142c98860(param_1 + 0xaa,plVar9);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_140a7e1dc;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
  }
  uVar6 = AActor::GetWorldTimerManager(param_1);
  local_e8 = 0;
  local_e0 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_e8);
  }
  FWeakObjectPtr::operator=(local_d8,0);
  local_160 = 0xbf800000;
  local_168 = 1;
  local_d0 = 0;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,param_1 + 0xeb,&local_e8,uVar12);
  if (local_88 != 0) {
    plVar10 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar10 = local_98;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar12 = TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    uVar12 = 0;
    if (lVar5 != 0) {
      uVar12 = FMemory::Free(lVar5);
    }
  }
  uVar13 = (undefined4)DAT_1468b5da0;
  uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
  local_150 = DAT_1468b5da8;
  if (((char)param_1[0xe0] == '\0') || (plVar9 == (longlong *)0x0)) {
    lVar5 = param_1[0x2d];
    if (lVar5 != 0) {
      local_128 = *(float *)(lVar5 + 0x210);
      fStack_124 = *(float *)(lVar5 + 0x214);
      fStack_120 = *(float *)(lVar5 + 0x218);
      fStack_11c = *(float *)(lVar5 + 0x21c);
      auVar19._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_124);
      auVar19._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_128);
      auVar19._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_120);
      auVar19._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_11c);
      iVar3 = movmskps(uVar12,auVar19);
      if (iVar3 != 0) {
        *(float *)(lVar5 + 0x250) = local_128;
        *(float *)(lVar5 + 0x254) = fStack_124;
        *(float *)(lVar5 + 600) = fStack_120;
        *(float *)(lVar5 + 0x25c) = fStack_11c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_128,local_118);
        *(undefined8 *)(lVar5 + 0x260) = *puVar7;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar13 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      local_150 = *(float *)(lVar5 + 0x268);
    }
    puVar8 = local_100;
    local_158 = CONCAT44(uVar16,uVar13);
    puVar7 = &local_13c;
    local_13c = local_158;
    local_134 = local_150;
  }
  else {
    lVar5 = plVar9[0x2d];
    if (lVar5 != 0) {
      local_128 = *(float *)(lVar5 + 0x210);
      fStack_124 = *(float *)(lVar5 + 0x214);
      fStack_120 = *(float *)(lVar5 + 0x218);
      fStack_11c = *(float *)(lVar5 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_124);
      auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_128);
      auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_120);
      auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_11c);
      iVar3 = movmskps(uVar12,auVar1);
      if (iVar3 != 0) {
        *(float *)(lVar5 + 0x250) = local_128;
        *(float *)(lVar5 + 0x254) = fStack_124;
        *(float *)(lVar5 + 600) = fStack_120;
        *(float *)(lVar5 + 0x25c) = fStack_11c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_128,local_118);
        *(undefined8 *)(lVar5 + 0x260) = *puVar7;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar13 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      local_150 = *(float *)(lVar5 + 0x268);
    }
    puVar8 = local_10c;
    local_158 = CONCAT44(uVar16,uVar13);
    puVar7 = &local_148;
    local_148 = local_158;
    local_140 = local_150;
  }
  puVar7 = (undefined8 *)FRotator::Vector(puVar7,puVar8);
  uVar6 = *puVar7;
  local_150 = *(float *)(puVar7 + 1);
  local_158 = uVar6;
  if ((char)param_1[199] != '\0') {
    local_158._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    local_158._0_4_ = (float)uVar6;
    fVar17 = local_158._4_4_ * local_158._4_4_ + (float)local_158 * (float)local_158;
    if (fVar17 == 1.0) {
      local_148 = uVar6;
      local_140 = local_150;
      if (local_150 != 0.0) {
        local_140 = 0.0;
      }
    }
    else if (1e-08 <= fVar17) {
      auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar18 = auVar19._0_4_;
      fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
      fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
      local_140 = 0.0;
      local_148 = CONCAT44(local_158._4_4_ * fVar18,(float)local_158 * fVar18);
    }
    else {
      local_148 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_140 = DAT_1468b5d98;
    }
    local_158 = local_148;
    local_150 = local_140;
  }
  fVar2 = local_150;
  fVar18 = local_158._4_4_;
  fVar17 = (float)local_158;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if ((char)param_1[0xb1] == '\0') {
    uVar12 = FUN_142c98860(param_1 + 0xb2,plVar9);
    *(undefined4 *)(param_1 + 0xe5) = uVar12;
  }
  else if ((char)param_1[0xb1] == '\x01') {
    fVar14 = (float)FUN_142c98860(param_1 + 0xb9,plVar9);
    fVar15 = (float)FUN_142c98860(param_1 + 0xc0,plVar9);
    lVar5 = param_1[0x2d];
    *(float *)(param_1 + 0xe5) = (fVar15 - fVar14) / fVar11;
    if (lVar5 == 0) {
      local_134 = DAT_1468b5d98;
      puVar7 = &local_13c;
      local_13c = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar7 = &local_158;
      local_150 = (float)*(undefined4 *)(lVar5 + 0x228);
      local_158 = *(undefined8 *)(lVar5 + 0x220);
    }
    local_134 = *(float *)(puVar7 + 1);
    local_168 = 0;
    local_150 = local_134 + fVar2 * fVar14;
    local_158 = CONCAT44((float)((ulonglong)*puVar7 >> 0x20) + fVar18 * fVar14,
                         (float)*puVar7 + fVar17 * fVar14);
    FUN_14223c850(param_1,&local_158,0,0);
  }
  lVar5 = param_1[0xe8];
  if (lVar5 != 0) {
    fVar11 = *(float *)(param_1 + 0xe5);
    local_134 = fVar2 * fVar11;
    *(ulonglong *)(lVar5 + 0x18c) = CONCAT44(fVar18 * fVar11,fVar17 * fVar11);
    *(float *)(lVar5 + 0x194) = local_134;
    (**(code **)(*(longlong *)param_1[0xe8] + 0x470))();
  }
  plVar9 = (longlong *)param_1[0xa2];
  if ((plVar9 != (longlong *)0x0) &&
     ((plVar9[0x1f] != 0 || ((**(code **)(*plVar9 + 0x368))(plVar9), plVar9[0x1f] != 0)))) {
    plVar9 = (longlong *)param_1[0xa2];
    if (plVar9 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = plVar9[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
        lVar5 = plVar9[0x1f];
      }
    }
    *(byte *)(param_1 + 0xe7) = (byte)(*(uint *)(lVar5 + 0x134) >> 2) & 1;
  }
  (**(code **)(*param_1 + 0x6e8))(param_1);
  return;
}



// FUNCTION 140a85d40 FUN_140a85d40 body=535 status=ok
// SIG undefined FUN_140a85d40(void)

void FUN_140a85d40(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  undefined4 uStack_c;
  
  FUN_140a8e5d0();
  FUN_142d12bd0(param_1);
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    plVar6 = (longlong *)(param_1 + 0x268);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x40a8dd40;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
      iVar2 = *(int *)(param_1 + 0x270);
      lVar4 = (longlong)iVar2;
      *(int *)(param_1 + 0x270) = iVar2 + 1;
      if (*(int *)(param_1 + 0x274) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      lVar5 = *plVar6;
      *(undefined8 *)(lVar5 + lVar4 * 0x10) = 0;
      *(longlong **)(lVar5 + lVar4 * 0x10) = plVar3;
      *(undefined4 *)(lVar5 + 8 + lVar4 * 0x10) = 3;
    }
    FUN_140a88e40(param_1);
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (((lVar4 != 0) || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x140), lVar4 != 0)) {
      lVar5 = FUN_141425c60();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar3 = (longlong *)(lVar4 + 0x550);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = 0x40a90d70;
          *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
          *(undefined4 *)(plVar6 + 3) = 0;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar5;
          *plVar6 = (longlong)&PTR_FUN_143f77bd0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
          iVar2 = *(int *)(lVar4 + 0x558);
          *(int *)(lVar4 + 0x558) = iVar2 + 1;
          if (*(int *)(lVar4 + 0x55c) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
          }
          puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar3);
          *puVar7 = plVar6;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 140a85f60 FUN_140a85f60 body=44 status=ok
// SIG undefined FUN_140a85f60(void)

void FUN_140a85f60(longlong param_1)

{
  FUN_142330a70();
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    FUN_140a97480(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140a85f90 FUN_140a85f90 body=872 status=ok
// SIG undefined FUN_140a85f90(void)

void FUN_140a85f90(longlong param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_142330a70();
  plVar12 = *(longlong **)(param_1 + 0x118);
  if (plVar12 != (longlong *)0x0) {
    uVar6 = FUN_142e1b450();
    lVar7 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar6);
    if (lVar7 != 0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UPlayerMeleeStateComponent::HandleFirstPersonCreated",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar9 = local_res10;
      plVar12 = (longlong *)(lVar7 + 0x380);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = lVar9;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_30);
      }
      piVar10 = (int *)*plVar12;
      iVar1 = *(int *)(lVar7 + 0x388);
      for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
        if (((*piVar11 == local_38) && (piVar11[1] == local_34)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar11 + 2) == local_30)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140a86137;
          break;
        }
      }
      iVar1 = *(int *)(lVar7 + 0x388);
      lVar9 = (longlong)iVar1;
      *(int *)(lVar7 + 0x388) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x38c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      lVar7 = *plVar12;
      *(int *)(lVar7 + lVar9 * 0x10) = local_38;
      *(int *)(lVar7 + 4 + lVar9 * 0x10) = local_34;
      *(longlong *)(lVar7 + 8 + lVar9 * 0x10) = local_30;
LAB_140a86137:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    }
    lVar7 = *(longlong *)(param_1 + 0x118);
    if (lVar7 != 0) {
      lVar9 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&UPlayerMeleeStateComponent::CharacterTransported",L"::");
        pwVar4 = (wchar_t *)0x0;
        while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_res10,pwVar4 + 2,1);
        plVar12 = (longlong *)(lVar7 + 0x10b0);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = local_res10;
        if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_30);
        }
        piVar10 = (int *)*plVar12;
        iVar1 = *(int *)(lVar7 + 0x10b8);
        for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
          if (((*piVar11 == local_38) && (piVar11[1] == local_34)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar11 + 2) == local_30)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_140a862d3;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x10b8);
        *(int *)(lVar7 + 0x10b8) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x10bc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
        }
        piVar10 = (int *)((longlong)iVar1 * 0x10 + *plVar12);
        *piVar10 = local_38;
        piVar10[1] = local_34;
        *(longlong *)(piVar10 + 2) = local_30;
LAB_140a862d3:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      }
    }
  }
  return;
}



// FUNCTION 140a86300 FUN_140a86300 body=257 status=ok
// SIG undefined FUN_140a86300(void)

void FUN_140a86300(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  byte local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_68 = local_68 & 0xfd | 1;
  local_88 = 0;
  uStack_80 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_142c8c260(&local_60,0x3f800000);
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_28 = CONCAT31(local_28._1_3_,0xff);
  uStack_20 = 0;
  local_18 = (ulonglong)local_18._4_4_ << 0x20;
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(local_78,param_2 + 2);
  local_60 = param_2[5];
  uStack_58 = param_2[6];
  local_50 = param_2[7];
  uStack_48 = param_2[8];
  local_40 = param_2[9];
  uStack_38 = param_2[10];
  local_68 = local_68 ^ (*(byte *)(param_2 + 4) ^ local_68) & 3;
  local_30 = param_2[0xb];
  local_28 = *(undefined4 *)(param_2 + 0xc);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 100);
  uStack_20 = param_2[0xd];
  local_18 = param_2[0xe];
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_88);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a86410 FUN_140a86410 body=108 status=ok
// SIG undefined FUN_140a86410(void)

ulonglong FUN_140a86410(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_141437870();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
     (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  if (((char)uVar3 != '\0') && (uVar3 = *param_1, *(ulonglong *)(param_2 + 0x4e8) == uVar3)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140a86480 FUN_140a86480 body=2854 status=ok
// SIG undefined FUN_140a86480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a86480(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulonglong uVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined1 *local_260;
  undefined *local_258;
  undefined1 local_248 [4];
  float local_244;
  float local_240;
  float fStack_23c;
  float local_238;
  float local_230;
  float fStack_22c;
  float local_228;
  float local_220;
  float fStack_21c;
  float local_218;
  float local_210;
  float local_20c;
  float local_208;
  ulonglong local_200;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  undefined1 local_18c [36];
  undefined1 local_168 [72];
  longlong local_120;
  longlong local_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  plVar16 = *(longlong **)(param_1 + 0x118);
  plVar15 = (longlong *)0x0;
  if (plVar16 == (longlong *)0x0) {
LAB_140a864fd:
    plVar16 = plVar15;
  }
  else {
    lVar11 = FUN_1413f82e0();
    if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_140a864fd;
  }
  uVar13 = plVar16[0x9a];
  local_200 = uVar13;
  if (param_3 != (longlong *)0x0) {
    lVar11 = FUN_1413f82e0();
    iVar1 = *(int *)(lVar11 + 0x90);
    uVar13 = (longlong)iVar1;
    if ((*(int *)(param_3[2] + 0x90) < iVar1) ||
       (uVar13 = *(ulonglong *)(param_3[2] + 0x88),
       *(longlong *)(uVar13 + (longlong)iVar1 * 8) != lVar11 + 0x88)) {
      uVar13 = uVar13 & 0xffffffffffffff00;
    }
    else {
      uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
    }
    if ((char)uVar13 != '\0') {
      plVar15 = param_3;
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x118);
  lVar2 = plVar16[0x21c];
  if (lVar11 == 0) {
LAB_140a8659b:
    plVar17 = (longlong *)0x0;
  }
  else {
    lVar12 = AHeoCon::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar12 + 0x90);
    uVar13 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < iVar1) ||
       (uVar13 = *(ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0x88),
       *(longlong *)(uVar13 + (longlong)iVar1 * 8) != lVar12 + 0x88)) {
      uVar13 = uVar13 & 0xffffffffffffff00;
    }
    else {
      uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
    }
    if ((char)uVar13 == '\0') goto LAB_140a8659b;
    plVar17 = *(longlong **)(lVar11 + 0x900);
  }
  cVar10 = '\0';
  if (lVar2 != 0) {
    uVar13 = FUN_140adac80(lVar2);
    cVar10 = (char)uVar13;
  }
  if (((((local_200 == 0) || (param_3 == (longlong *)0x0)) || (param_2 == 0)) ||
      ((plVar15 != (longlong *)0x0 &&
       (uVar13 = (**(code **)(*plVar15 + 0x950))(plVar15), (char)uVar13 != '\0')))) ||
     ((cVar10 != '\0' ||
      ((plVar17 != (longlong *)0x0 &&
       (uVar13 = (**(code **)(*plVar17 + 0x558))(plVar17), (char)uVar13 != '\0')))))) {
LAB_140a86f60:
    return uVar13 & 0xffffffffffffff00;
  }
  uVar14 = FUN_142e79d90();
  lVar11 = (**(code **)(*param_3 + 0x628))(param_3,uVar14);
  uVar13 = 0;
  if ((lVar11 == 0) ||
     (((uVar13 = FUN_140a36de0(lVar11), uVar9 = local_200, (char)uVar13 == '\0' &&
       (*(char *)(param_2 + 0x3d) == '\0')) || (*(char *)(lVar11 + 0x478) == '\0'))))
  goto LAB_140a86f60;
  lVar11 = plVar16[0x2d];
  local_240 = DAT_1468b5d90;
  fStack_23c = DAT_1468b5d94;
  uVar18 = *(uint *)(local_200 + 0x230) & _DAT_146867090;
  uVar19 = *(uint *)(local_200 + 0x234) & uRam0000000146867094;
  uVar20 = *(uint *)(local_200 + 0x238) & uRam0000000146867098;
  uVar21 = *(uint *)(local_200 + 0x23c) & uRam000000014686709c;
  auVar31._4_4_ = uVar19;
  auVar31._0_4_ = uVar18;
  auVar31._8_4_ = uVar20;
  auVar31._12_4_ = uVar21;
  auVar32._4_4_ = uVar20;
  auVar32._0_4_ = uVar19;
  auVar32._8_4_ = uVar18;
  auVar32._12_4_ = uVar21;
  auVar32 = minps(auVar31,auVar32);
  auVar5._4_4_ = uVar18;
  auVar5._0_4_ = uVar20;
  auVar5._8_4_ = uVar19;
  auVar5._12_4_ = uVar21;
  auVar32 = minps(auVar32,auVar5);
  local_244 = auVar32._0_4_;
  fVar29 = local_244 * *(float *)(local_200 + 0x710);
  if (lVar11 == 0) {
    local_218 = DAT_1468b5d98;
    local_220 = local_240;
    fStack_21c = fStack_23c;
  }
  else {
    local_220 = *(float *)(lVar11 + 0x220);
    fStack_21c = *(float *)(lVar11 + 0x224);
    local_218 = *(float *)(lVar11 + 0x228);
  }
  fVar33 = local_218;
  fVar34 = fStack_21c;
  fVar36 = local_220;
  local_228 = local_218;
  lVar11 = param_3[0x2d];
  local_230 = local_220;
  fStack_22c = fStack_21c;
  if (lVar11 == 0) {
    local_238 = DAT_1468b5d98;
  }
  else {
    local_240 = *(float *)(lVar11 + 0x220);
    fStack_23c = *(float *)(lVar11 + 0x224);
    local_238 = *(float *)(lVar11 + 0x228);
  }
  fVar26 = local_238;
  fVar23 = local_240;
  local_218 = local_238;
  local_220 = local_240;
  fStack_21c = fStack_23c;
  if ((plVar15 != (longlong *)0x0) && (uVar13 = plVar15[0x9a], uVar13 != 0)) {
    uVar18 = *(uint *)(uVar13 + 0x230) & _DAT_146867090;
    uVar19 = *(uint *)(uVar13 + 0x234) & uRam0000000146867094;
    uVar20 = *(uint *)(uVar13 + 0x238) & uRam0000000146867098;
    uVar21 = *(uint *)(uVar13 + 0x23c) & uRam000000014686709c;
    auVar24._4_4_ = uVar19;
    auVar24._0_4_ = uVar18;
    auVar24._8_4_ = uVar20;
    auVar24._12_4_ = uVar21;
    auVar3._4_4_ = uVar20;
    auVar3._0_4_ = uVar19;
    auVar3._8_4_ = uVar18;
    auVar3._12_4_ = uVar21;
    auVar32 = minps(auVar24,auVar3);
    auVar6._4_4_ = uVar18;
    auVar6._0_4_ = uVar20;
    auVar6._8_4_ = uVar19;
    auVar6._12_4_ = uVar21;
    auVar32 = minps(auVar32,auVar6);
    local_244 = auVar32._0_4_;
    fVar22 = local_244 * *(float *)(uVar13 + 0x710);
    if (((0.0 < *(float *)(param_2 + 0xa4)) &&
        (*(float *)(param_2 + 0xa4) < (local_238 - fVar22) - (fVar33 + fVar29))) ||
       ((0.0 < *(float *)(param_2 + 0xa0) &&
        (*(float *)(param_2 + 0xa0) < (fVar33 - fVar29) - (local_238 + fVar22)))))
    goto LAB_140a86f60;
  }
  fVar34 = fStack_23c - fVar34;
  fVar33 = local_238 - fVar33;
  fVar25 = local_240 - fVar36;
  local_244 = (float)FUN_142c98860(param_2 + 0xe8);
  fVar22 = fVar34 * fVar34 + fVar25 * fVar25;
  fVar33 = fVar33 * fVar33 + fVar22;
  if (fVar33 <= local_244 * local_244) {
    return 1;
  }
  _guard_xfg_dispatch_icall_nop(local_1f8,0,0x90);
  local_1ec = 0x3f800000;
  local_200 = 0;
  local_268 = plVar16;
  FUN_1422ffb20(local_168,0,local_248,0);
  fVar27 = fStack_22c;
  fVar35 = SQRT(fVar33) - local_244;
  if (plVar17 != (longlong *)0x0) {
    _local_240 = CONCAT44(fStack_22c,fVar36);
    local_238 = (local_228 - fVar29) + *(float *)((longlong)plVar17 + 0x234);
    fVar26 = fVar26 - local_238;
    fVar22 = fVar26 * fVar26 + fVar22;
    fVar29 = fVar25;
    fVar36 = fVar34;
    fVar30 = fVar26;
    if ((fVar22 != 1.0) &&
       (fVar29 = DAT_1468b5d90, fVar36 = DAT_1468b5d94, fVar30 = DAT_1468b5d98, 1e-08 <= fVar22)) {
      auVar32 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
      local_244 = auVar32._0_4_;
      local_244 = local_244 + local_244 * (0.5 - fVar22 * 0.5 * local_244 * local_244);
      local_244 = local_244 + local_244 * (0.5 - fVar22 * 0.5 * local_244 * local_244);
      fVar29 = local_244 * fVar25;
      fVar36 = local_244 * fVar34;
      fVar30 = local_244 * fVar26;
    }
    lVar11 = *(longlong *)(param_1 + 0x120);
    local_20c = fVar36 * fVar35 + fStack_22c;
    local_210 = fVar29 * fVar35 + local_230;
    local_208 = fVar30 * fVar35 + local_238;
    if (lVar11 == 0) {
      lVar11 = FUN_1423407b0(param_1);
    }
    local_260 = local_168;
    local_258 = &DAT_146aefe68;
    local_268 = (longlong *)CONCAT44(local_268._4_4_,2);
    UWorld::LineTraceSingleByChannel(lVar11,local_1f8,&local_240,&local_210);
    cVar10 = FUN_14044af00(local_18c,0);
    fVar36 = local_230;
    if ((cVar10 != '\0') &&
       (cVar10 = FUN_1405dc8f0(local_18c,param_3), fVar36 = local_230, cVar10 != '\0')) {
      uVar13 = 0;
      goto LAB_140a86efd;
    }
  }
  uVar18 = *(uint *)(uVar9 + 0x230) & _DAT_146867090;
  uVar19 = *(uint *)(uVar9 + 0x234) & uRam0000000146867094;
  uVar20 = *(uint *)(uVar9 + 0x238) & uRam0000000146867098;
  uVar21 = *(uint *)(uVar9 + 0x23c) & uRam000000014686709c;
  auVar28._4_4_ = uVar19;
  auVar28._0_4_ = uVar18;
  auVar28._8_4_ = uVar20;
  auVar28._12_4_ = uVar21;
  auVar4._4_4_ = uVar20;
  auVar4._0_4_ = uVar19;
  auVar4._8_4_ = uVar18;
  auVar4._12_4_ = uVar21;
  auVar32 = minps(auVar28,auVar4);
  auVar7._4_4_ = uVar18;
  auVar7._0_4_ = uVar20;
  auVar7._8_4_ = uVar19;
  auVar7._12_4_ = uVar21;
  auVar32 = minps(auVar32,auVar7);
  fVar22 = auVar32._0_4_ * *(float *)(uVar9 + 0x714);
  fVar29 = fVar25;
  fVar26 = fVar34;
  if ((fVar33 != 1.0) && (fVar29 = DAT_1468b5d90, fVar26 = DAT_1468b5d94, 1e-08 <= fVar33)) {
    auVar32 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
    fVar26 = auVar32._0_4_;
    fVar26 = fVar26 + fVar26 * (0.5 - fVar33 * 0.5 * fVar26 * fVar26);
    fVar26 = fVar26 + fVar26 * (0.5 - fVar33 * 0.5 * fVar26 * fVar26);
    fVar29 = fVar26 * fVar25;
    fVar26 = fVar26 * fVar34;
  }
  fVar29 = fVar29 * fVar22;
  fVar26 = fVar26 * fVar22;
  local_244 = fVar27 - fVar29;
  local_238 = local_228;
  local_210 = fVar26 + fVar36;
  fVar30 = (fStack_21c - fVar29) - local_244;
  _local_240 = CONCAT44(local_244,local_210);
  fVar27 = (fVar26 + fVar23) - local_210;
  fVar25 = fVar30 * fVar30 + fVar27 * fVar27 + 0.0;
  fVar34 = 0.0;
  fVar33 = fVar27;
  fVar22 = fVar30;
  if ((fVar25 != 1.0) &&
     (fVar34 = DAT_1468b5d98, fVar33 = DAT_1468b5d90, fVar22 = DAT_1468b5d94, 1e-08 <= fVar25)) {
    auVar32 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
    fVar22 = auVar32._0_4_;
    fVar22 = fVar22 + fVar22 * (0.5 - fVar25 * 0.5 * fVar22 * fVar22);
    fVar22 = fVar22 + fVar22 * (0.5 - fVar25 * 0.5 * fVar22 * fVar22);
    fVar34 = fVar22 * 0.0;
    fVar33 = fVar22 * fVar27;
    fVar22 = fVar22 * fVar30;
  }
  lVar11 = *(longlong *)(param_1 + 0x120);
  local_208 = fVar34 * fVar35 + local_228;
  local_210 = fVar33 * fVar35 + local_210;
  local_20c = fVar22 * fVar35 + local_244;
  if (lVar11 == 0) {
    lVar11 = FUN_1423407b0(param_1);
  }
  local_260 = local_168;
  local_258 = &DAT_146aefe68;
  local_268 = (longlong *)CONCAT44(local_268._4_4_,2);
  UWorld::LineTraceSingleByChannel(lVar11,local_1f8,&local_240,&local_210);
  cVar10 = FUN_14044af00(local_18c,0);
  if ((cVar10 == '\0') || (cVar10 = FUN_1405dc8f0(local_18c,param_3), cVar10 == '\0')) {
    fVar36 = fVar36 - fVar26;
    local_208 = local_208 - local_238;
    local_20c = fVar29 + fStack_22c;
    fVar22 = (fVar23 - fVar26) - fVar36;
    fVar26 = (fVar29 + fStack_21c) - local_20c;
    _local_240 = CONCAT44(local_20c,fVar36);
    fVar23 = fVar22 * fVar22 + fVar26 * fVar26 + local_208 * local_208;
    fVar29 = fVar26;
    fVar34 = fVar22;
    fVar33 = local_208;
    if ((fVar23 != 1.0) &&
       (fVar29 = DAT_1468b5d94, fVar34 = DAT_1468b5d90, fVar33 = DAT_1468b5d98, 1e-08 <= fVar23)) {
      auVar32 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar33 = auVar32._0_4_;
      fVar33 = fVar33 + fVar33 * (0.5 - fVar23 * 0.5 * fVar33 * fVar33);
      fVar33 = fVar33 + fVar33 * (0.5 - fVar23 * 0.5 * fVar33 * fVar33);
      fVar29 = fVar33 * fVar26;
      fVar34 = fVar33 * fVar22;
      fVar33 = fVar33 * local_208;
    }
    lVar11 = *(longlong *)(param_1 + 0x120);
    local_208 = fVar33 * fVar35 + local_238;
    local_210 = fVar34 * fVar35 + fVar36;
    local_20c = fVar29 * fVar35 + local_20c;
    if (lVar11 == 0) {
      lVar11 = FUN_1423407b0(param_1);
    }
    local_260 = local_168;
    local_258 = &DAT_146aefe68;
    local_268 = (longlong *)CONCAT44(local_268._4_4_,2);
    UWorld::LineTraceSingleByChannel(lVar11,local_1f8,&local_240,&local_210);
    cVar10 = FUN_14044af00(local_18c,0);
    uVar13 = 1;
    if (cVar10 != '\0') {
      cVar10 = FUN_1405dc8f0(local_18c,param_3);
      uVar13 = 1;
      if (cVar10 != '\0') {
        uVar13 = 0;
      }
    }
  }
  else {
    uVar13 = 0;
  }
LAB_140a86efd:
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_120 == 0) {
    return uVar13;
  }
  FMemory::Free();
  return uVar13;
}



// FUNCTION 140a86fb0 FUN_140a86fb0 body=1542 status=ok
// SIG undefined FUN_140a86fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a86fb0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong **param_4,
                  float *param_5,longlong param_6,longlong *param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined1 auStack_5a8 [32];
  longlong **local_588;
  undefined8 local_580;
  undefined8 local_578;
  char local_568;
  undefined8 local_560;
  longlong local_558;
  longlong *plStack_550;
  longlong **local_548;
  longlong *local_538;
  longlong *plStack_530;
  undefined **local_528;
  float local_520;
  char local_51c;
  undefined4 local_518;
  char local_514;
  float local_510;
  char local_50c;
  float local_508;
  float local_504;
  float local_500;
  undefined1 local_4fc;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  longlong local_4d8;
  longlong *local_4d0;
  undefined8 local_4c0;
  undefined1 local_4b8 [528];
  undefined8 local_2a8;
  float local_2a0;
  undefined1 local_29c;
  float local_298;
  undefined1 local_294;
  float local_290;
  undefined1 local_28c;
  float local_288;
  undefined1 local_284;
  undefined8 local_280;
  longlong *local_278;
  undefined1 local_270 [504];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  local_2a8 = param_5;
  local_538 = param_7;
  local_558 = param_6;
  local_560 = param_3;
  local_548 = param_4;
  if (param_1 == (longlong *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar10 != 0) && (cVar9 = UWorld::IsGameWorld(lVar10), cVar9 == '\0')) {
      return;
    }
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar15 = param_2[0x1f];
  if (lVar15 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar15 = param_2[0x1f];
    if (lVar15 == 0) {
      return;
    }
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (((*(byte *)((longlong)param_1 + 0x94) & 0x18) != 0x10) &&
     (cVar9 = FUN_1407cd900(param_1), cVar9 == '\0')) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  local_568 = '\0';
  lVar11 = FBufferReaderBase::Tell(lVar15);
  pfVar8 = local_2a8;
  if ((lVar11 != 0) && (((ulonglong)param_4[2] & 0x10) == 0)) {
    if ((char)param_1[0x25] != '\x03') {
      return;
    }
    local_568 = '\x01';
  }
  cVar9 = '\0';
  local_528 = &PTR_FUN_14422ed38;
  local_51c = '\0';
  local_4f8 = 0;
  local_4f0 = 0;
  pfVar12 = &local_2a0;
  if (*local_2a8 < 0.0) {
    local_28c = 0;
    pfVar12 = &local_290;
  }
  else {
    local_2a0 = *local_2a8;
    local_29c = 1;
  }
  if ((pfVar12 != &local_520) && (*(char *)(pfVar12 + 1) != '\0')) {
    local_520 = *pfVar12;
    cVar9 = '\x01';
    local_51c = '\x01';
  }
  if (local_2a8[2] < 0.0) {
    local_284 = 0;
    pfVar12 = &local_288;
  }
  else {
    local_298 = local_2a8[2];
    pfVar12 = &local_298;
    local_294 = 1;
  }
  local_50c = *(char *)(pfVar12 + 1) != '\0';
  if ((bool)local_50c) {
    local_510 = *pfVar12;
  }
  pfVar12 = local_2a8 + 1;
  if (*pfVar12 < 0.0) {
    local_280._4_1_ = 0;
    puVar13 = &local_280;
  }
  else {
    puVar13 = &local_2a8;
    local_2a8._0_5_ = CONCAT14(1,*pfVar12);
  }
  local_514 = *(char *)((longlong)puVar13 + 4) != '\0';
  if ((bool)local_514) {
    local_518 = *(undefined4 *)puVar13;
  }
  local_4fc = *(undefined1 *)(pfVar8 + 3);
  local_508 = pfVar8[4];
  local_500 = pfVar8[6];
  local_504 = pfVar8[5];
  local_4e8 = local_538;
  if ((local_558 != 0) && (0 < *(int *)(local_558 + 8))) {
    FUN_140a7e160(&local_4f8,local_558);
    cVar9 = local_51c;
  }
  fVar7 = local_500;
  fVar6 = local_504;
  fVar5 = local_508;
  cVar4 = local_50c;
  cVar3 = local_514;
  FUN_140a7a190(&local_278,local_548);
  if (((((cVar9 != '\0') || (cVar4 != '\0')) || (cVar3 != '\0')) ||
      ((fVar5 != 1.0 || (fVar7 != 1.0)))) || ((fVar6 != 1.0 || ((int)local_4f0 != 0)))) {
    plVar14 = (longlong *)operator_new(0x48);
    plStack_530 = (longlong *)0x0;
    plVar16 = plStack_530;
    if (plVar14 != (longlong *)0x0) {
      *plVar14 = (longlong)&PTR_FUN_14422ed38;
      *(undefined1 *)((longlong)plVar14 + 0xc) = 0;
      *(undefined1 *)((longlong)plVar14 + 0x14) = 0;
      *(undefined1 *)((longlong)plVar14 + 0x1c) = 0;
      *(undefined4 *)(plVar14 + 4) = 0x3f800000;
      *(undefined4 *)((longlong)plVar14 + 0x24) = 0x3f800000;
      *(undefined4 *)(plVar14 + 5) = 0x3f800000;
      *(undefined1 *)((longlong)plVar14 + 0x2c) = 0;
      plVar14[6] = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      plVar16 = plVar14;
    }
    plVar14 = (longlong *)operator_new(0x18);
    if (plVar14 != (longlong *)0x0) {
      *(undefined4 *)(plVar14 + 1) = 1;
      *plVar14 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      plVar14[2] = (longlong)plVar16;
      plStack_530 = plVar14;
    }
    local_538 = plVar16;
    SharedPointerInternals::EnableSharedFromThis(&local_538,plVar16,plVar16);
    FUN_140a7d930(local_538,&local_528);
    plStack_550 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_530 + 1) = (int)plStack_530[1] + 1;
      UNLOCK();
    }
    local_278 = local_538;
    local_558 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_270,&plStack_550);
    plVar16 = plStack_550;
    if (plStack_550 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_550 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_550)(plStack_550);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_550 + 8))(plStack_550,1);
        }
      }
    }
    plVar16 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_530 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
  if ((*(byte *)(lVar15 + 0x134) & 1) == 0) {
    cVar9 = FUN_142d29260(&local_278,lVar15,param_1);
    uVar17 = local_560;
    if (cVar9 != '\0') {
      lVar11 = FUN_142d18cf0(lVar10);
      if (lVar11 != 0) {
        FUN_142d0a0e0(&local_4d8);
        local_4c0 = local_560;
        local_4d8 = lVar15;
        local_4d0 = param_1;
        FUN_140a7d100(local_4b8,&local_278);
        FUN_142d0e6e0(lVar11,&local_4d8);
        if ((local_568 != '\0') && (lVar10 = FUN_142d392d0(lVar10), lVar10 != 0)) {
          FUN_142d31230(lVar10,&local_4d8);
        }
        FUN_1409c53c0(local_4b8);
      }
      goto LAB_140a8756f;
    }
    local_588 = &local_278;
    local_578 = 0;
    local_580 = 0;
    FUN_142d21420(lVar15,param_1,lVar10,local_560);
  }
  else {
    lVar15 = FUN_142d18d20(lVar10);
    uVar17 = local_560;
    if (lVar15 != 0) {
      local_588 = &local_278;
      FUN_142d29370(lVar15,param_2,param_1,local_560);
    }
  }
  if ((local_568 != '\0') && (lVar10 = FUN_142d392d0(lVar10), lVar10 != 0)) {
    local_588 = local_548;
    FUN_142d31790(lVar10,param_2,param_1,uVar17);
  }
LAB_140a8756f:
  FUN_1409c53c0(&local_278);
  if (local_4f8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140a875c0 FUN_140a875c0 body=2253 status=ok
// SIG undefined FUN_140a875c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a875c0(undefined8 param_1,longlong *param_2,undefined8 param_3,float param_4,
                  byte *param_5,float *param_6,longlong *param_7,longlong *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,float *param_12,
                  float *param_13,float *param_14,float *param_15,float param_16,float *param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 param_22,undefined8 param_23,undefined8 param_24,char param_25)

{
  uint5 uVar1;
  undefined1 auVar2 [8];
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint5 *puVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_288 [8];
  undefined8 uStack_280;
  uint5 local_278 [2];
  undefined1 local_268 [16];
  byte local_258;
  undefined1 local_254 [8];
  undefined1 local_24c [8];
  undefined1 local_244 [8];
  undefined1 local_23c [8];
  undefined1 local_234 [8];
  undefined1 local_22c [28];
  undefined1 local_210 [8];
  byte local_208;
  undefined4 local_204;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_138;
  uint local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  uint local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_278[0]._0_8_ = param_18;
  local_2b0 = param_19;
  local_2a8 = param_20;
  local_2a0 = param_21;
  local_2b8 = param_24;
  local_298 = param_1;
  if ((param_2 != (longlong *)0x0) &&
     ((param_2[0x1f] != 0 || ((**(code **)(*param_2 + 0x368))(param_2), param_2[0x1f] != 0)))) {
    plVar4 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar9 = param_2;
    do {
      plVar5 = param_2;
      if (plVar9 == plVar4) goto LAB_140a876ac;
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
    plVar5 = (longlong *)0x0;
LAB_140a876ac:
    if (plVar5[3] == DAT_1468673e8) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146867440) &&
         (_Init_thread_header(&DAT_146867440), DAT_146867440 == -1)) {
        FWeakObjectPtr::operator=(&DAT_146867438,0);
        _Init_thread_footer(&DAT_146867440);
      }
      cVar3 = FWeakObjectPtr::IsValid(&DAT_146867438);
      if (cVar3 == '\0') {
        uVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
        uVar6 = FUN_141799410(uVar6,0xffffffffffffffff,
                              L"/Game/Gear/Artifacts/_Design/PartSets/Attributes/Globals/Att_Artifact_BonusMeleeHealing.Att_Artifact_BonusMeleeHealing"
                             );
        FWeakObjectPtr::operator=(&DAT_146867438,uVar6);
      }
      lVar7 = FWeakObjectPtr::Get(&DAT_146867438);
      if (lVar7 != 0) {
        uStack_280 = 0;
        local_288 = (undefined1  [8])param_3;
        fVar10 = (float)FUN_142ca2f00(lVar7,local_288,0x3f800000);
        param_4 = param_4 * fVar10;
      }
    }
  }
  FUN_142d0a300(local_268);
  local_258 = local_258 | 1;
  if (param_4 <= 0.0) {
    local_288[4] = 0;
    uVar1 = local_288._0_5_;
  }
  else {
    local_288[4] = 1;
    local_288._0_4_ = param_4;
    uVar1 = local_288._0_5_;
  }
  local_288._0_5_ = uVar1;
  auVar2 = local_288;
  local_288[4] = (char)(uVar1 >> 0x20);
  local_15c = local_288[4] != '\0';
  if ((bool)local_15c) {
    local_288._0_4_ = (undefined4)uVar1;
    local_160 = local_288._0_4_;
  }
  local_1fc = *(undefined4 *)(param_5 + 0xc);
  local_1f8 = *(undefined4 *)(param_5 + 0x10);
  local_208 = local_208 ^ (*param_5 ^ local_208) & 3;
  local_1f4 = *(undefined8 *)(param_5 + 0x14);
  local_204 = *(undefined4 *)(param_5 + 4);
  local_1e8 = *(undefined8 *)(param_5 + 0x20);
  local_200 = local_200 ^ (*(uint *)(param_5 + 8) ^ local_200) & 1;
  local_1ec = *(undefined4 *)(param_5 + 0x1c);
  local_1e0 = *(undefined4 *)(param_5 + 0x28);
  local_1d4 = *(undefined4 *)(param_5 + 0x34);
  local_1c8 = *(undefined4 *)(param_5 + 0x40);
  local_1bc = *(undefined4 *)(param_5 + 0x4c);
  local_1b0 = *(undefined4 *)(param_5 + 0x58);
  local_1a8 = *(undefined4 *)(param_5 + 0x60);
  local_1a4 = *(undefined4 *)(param_5 + 100);
  local_1a0 = *(undefined4 *)(param_5 + 0x68);
  local_19c = *(undefined4 *)(param_5 + 0x6c);
  local_198 = *(undefined4 *)(param_5 + 0x70);
  local_194 = *(undefined4 *)(param_5 + 0x74);
  local_1dc = *(undefined8 *)(param_5 + 0x2c);
  local_190 = *(undefined4 *)(param_5 + 0x78);
  local_1d0 = *(undefined8 *)(param_5 + 0x38);
  local_188 = *(undefined8 *)(param_5 + 0x80);
  local_1c4 = *(undefined8 *)(param_5 + 0x44);
  local_180 = *(undefined8 *)(param_5 + 0x88);
  local_1b8 = *(undefined8 *)(param_5 + 0x50);
  local_1ac = *(undefined4 *)(param_5 + 0x5c);
  if (((*param_6 == 0.0) && (param_6[1] == 0.0)) && (param_6[2] == 0.0)) {
    uStack_280._0_5_ = (uint5)(uint)uStack_280;
    local_288 = auVar2;
    uVar1 = (uint5)uStack_280;
  }
  else {
    local_288 = *(undefined1 (*) [8])param_6;
    uStack_280._0_5_ = CONCAT14(1,param_6[2]);
    uVar1 = (uint5)uStack_280;
  }
  uStack_280 = CONCAT35(uStack_280._5_3_,uVar1);
  uVar6 = uStack_280;
  uStack_280._4_1_ = (char)(uVar1 >> 0x20);
  local_16c = uStack_280._4_1_ != '\0';
  if ((bool)local_16c) {
    uStack_280._0_4_ = (uint)uVar1;
    local_178 = local_288;
    local_170 = (uint)uStack_280;
  }
  uStack_280 = uVar6;
  if (param_7 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_7[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*param_7 + 0x368))(param_7);
      lVar7 = param_7[0x1f];
    }
  }
  FWeakObjectPtr::operator=(local_24c,lVar7);
  if (param_8 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_8[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*param_8 + 0x368))(param_8);
      lVar7 = param_8[0x1f];
    }
  }
  FWeakObjectPtr::operator=(local_254,lVar7);
  FWeakObjectPtr::operator=(local_244,param_9);
  FWeakObjectPtr::operator=(local_23c,param_10);
  if (((*param_12 == 0.0) && (param_12[1] == 0.0)) && (param_12[2] == 0.0)) {
    uStack_280._0_5_ = (uint5)(uint)uStack_280;
    uVar1 = (uint5)uStack_280;
  }
  else {
    local_288 = *(undefined1 (*) [8])param_12;
    uStack_280._0_5_ = CONCAT14(1,param_12[2]);
    uVar1 = (uint5)uStack_280;
  }
  uStack_280._4_1_ = (char)(uVar1 >> 0x20);
  local_14c = uStack_280._4_1_ != '\0';
  uStack_280._0_4_ = (uint)uVar1;
  if ((bool)local_14c) {
    local_158 = local_288;
    local_150 = (uint)uStack_280;
  }
  local_168 = param_11;
  if (((*param_13 == 0.0) && (param_13[1] == 0.0)) && (param_13[2] == 0.0)) {
    uStack_280 = CONCAT35(uStack_280._5_3_,uVar1) & 0xffffff00ffffffff;
    local_12c = false;
  }
  else {
    local_288 = *(undefined1 (*) [8])param_13;
    uStack_280._0_5_ = CONCAT14(1,param_13[2]);
    local_12c = true;
  }
  if ((bool)local_12c) {
    local_138 = local_288;
    local_130 = (uint)uStack_280;
  }
  fVar10 = *param_14;
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar10 = fVar10 - fVar11;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  if (fVar10 == 0.0) {
    fVar10 = param_14[1];
    fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
    if (ABS(fVar10) < ABS(fVar11)) {
      fVar11 = fVar10;
    }
    fVar10 = fVar10 - fVar11;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + 360.0;
    }
    if (fVar10 != 0.0) goto LAB_140a87b3d;
    fVar10 = param_14[2];
    fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
    if (ABS(fVar10) < ABS(fVar11)) {
      fVar11 = fVar10;
    }
    fVar10 = fVar10 - fVar11;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + 360.0;
    }
    if (fVar10 != 0.0) goto LAB_140a87b3d;
    uStack_280._0_5_ = (uint5)(uint)uStack_280;
    uVar1 = (uint5)uStack_280;
  }
  else {
LAB_140a87b3d:
    local_288 = *(undefined1 (*) [8])param_14;
    uStack_280._0_5_ = CONCAT14(1,param_14[2]);
    uVar1 = (uint5)uStack_280;
  }
  uStack_280._4_1_ = (char)(uVar1 >> 0x20);
  local_11c = uStack_280._4_1_ != '\0';
  uStack_280._0_4_ = (uint)uVar1;
  if ((bool)local_11c) {
    local_128 = local_288;
    local_120 = (uint)uStack_280;
  }
  fVar10 = *param_15;
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar10 = fVar10 - fVar11;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  if (fVar10 == 0.0) {
    fVar10 = param_15[1];
    fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
    if (ABS(fVar10) < ABS(fVar11)) {
      fVar11 = fVar10;
    }
    fVar10 = fVar10 - fVar11;
    if (fVar10 < 0.0) {
      fVar10 = fVar10 + 360.0;
    }
    if (fVar10 == 0.0) {
      fVar10 = param_15[2];
      fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
      if (ABS(fVar10) < ABS(fVar11)) {
        fVar11 = fVar10;
      }
      fVar10 = fVar10 - fVar11;
      if (fVar10 < 0.0) {
        fVar10 = fVar10 + 360.0;
      }
      if (fVar10 == 0.0) {
        uStack_280 = CONCAT35(uStack_280._5_3_,uVar1) & 0xffffff00ffffffff;
        local_10c = false;
        goto LAB_140a87c69;
      }
    }
  }
  local_288 = *(undefined1 (*) [8])param_15;
  uStack_280._0_5_ = CONCAT14(1,param_15[2]);
  local_10c = true;
LAB_140a87c69:
  if ((bool)local_10c) {
    local_118 = local_288;
    local_110 = (uint)uStack_280;
  }
  if (param_16 <= 0.0) {
    local_288[4] = 0;
    uVar1 = local_288._0_5_;
  }
  else {
    local_288[4] = 1;
    local_288._0_4_ = param_16;
    uVar1 = local_288._0_5_;
  }
  local_288._0_5_ = uVar1;
  auVar2 = local_288;
  local_288[4] = (char)(uVar1 >> 0x20);
  local_104 = local_288[4] != '\0';
  if ((bool)local_104) {
    local_288._0_4_ = (undefined4)uVar1;
    local_108 = local_288._0_4_;
  }
  fVar10 = param_17[1];
  if (param_17[1] <= *param_17) {
    fVar10 = *param_17;
  }
  if (fVar10 <= param_17[2]) {
    fVar10 = param_17[2];
  }
  if (fVar10 <= 0.0) {
    uStack_280._0_5_ = (uint5)(uint)uStack_280;
    local_288 = auVar2;
    uVar1 = (uint5)uStack_280;
  }
  else {
    uStack_280._0_5_ = CONCAT14(1,param_17[2]);
    local_288 = (undefined1  [8])*(undefined8 *)param_17;
    uVar1 = (uint5)uStack_280;
  }
  uStack_280 = CONCAT35(uStack_280._5_3_,uVar1);
  uVar6 = uStack_280;
  uStack_280._4_1_ = (char)(uVar1 >> 0x20);
  local_f4 = uStack_280._4_1_ != '\0';
  if ((bool)local_f4) {
    uStack_280._0_4_ = (uint)uVar1;
    local_100 = local_288;
    local_f8 = (uint)uStack_280;
  }
  local_e8 = param_22;
  local_e0 = param_23;
  uStack_280 = uVar6;
  fVar10 = (float)FUN_142d9cad0((undefined8)local_278[0],0);
  if (fVar10 == 0.0) {
    local_278[0] = (uint5)(uint)local_278[0];
    puVar8 = local_278;
  }
  else {
    puVar8 = (uint5 *)local_288;
    local_288[4] = 1;
    local_288._0_4_ = fVar10;
  }
  local_ec = *(char *)((longlong)puVar8 + 4) != '\0';
  if ((bool)local_ec) {
    local_f0 = (undefined4)*puVar8;
  }
  FWeakObjectPtr::operator=(local_210,local_2b8);
  FWeakObjectPtr::operator=(local_234,local_2b0);
  FWeakObjectPtr::operator=(local_22c,local_2a8);
  local_258 = local_258 & 0xef | param_25 << 4;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = local_2a0;
  FUN_140a86fb0(local_298,param_2,param_3,local_268);
  FUN_1409c53c0(local_268);
  return;
}



// FUNCTION 140a87ea0 FUN_140a87ea0 body=208 status=ok
// SIG undefined FUN_140a87ea0(void)

void FUN_140a87ea0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res10;
  undefined4 local_res14;
  
  cVar2 = FWeakObjectPtr::IsValid(param_2 + 8);
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = FUN_14304c8c0(uVar3);
    if (lVar4 != 0) {
      local_res10 = *(undefined4 *)(param_2 + 8);
      local_res14 = *(undefined4 *)(param_2 + 0xc);
      FUN_1430597b0(lVar4,&local_res10);
    }
  }
  if ((param_4 != 0) && (*(char *)(param_4 + 0x309) != '\0')) {
    lVar4 = FWeakObjectPtr::Get(param_2);
    if (lVar4 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c57580(lVar4,0,*(undefined8 *)(param_3 + 8));
      }
    }
  }
  return;
}



// FUNCTION 140a87f80 FUN_140a87f80 body=170 status=ok
// SIG undefined FUN_140a87f80(void)

void FUN_140a87f80(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x358);
    lVar2 = *(longlong *)(param_1 + 0x370);
    lVar4 = 0;
    bVar1 = param_2[1];
    lVar3 = lVar4;
    if (((int)(uint)*param_2 < *(int *)(lVar2 + 0x7a0)) && (bVar1 < 4)) {
      lVar3 = (ulonglong)*param_2 * 0x390 + (ulonglong)bVar1 * 0xe0 +
              *(longlong *)(lVar2 + 0x798) + 0x10;
    }
    if (bVar1 < 4) {
      lVar4 = lVar2 + 0x824 + (ulonglong)bVar1;
    }
    if ((lVar3 != 0) && (lVar4 != 0)) {
      FUN_140a93950(param_1,lVar3,lVar4,param_2);
    }
  }
  return;
}



// FUNCTION 140a88030 FUN_140a88030 body=354 status=ok
// SIG undefined FUN_140a88030(void)

void FUN_140a88030(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
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
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar5 = *(longlong **)(param_1 + 0x990);
  plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0x998) * 0xc;
  if (plVar5 != plVar8) {
    do {
      uVar3 = *(uint *)(plVar5 + 1);
      if (((uVar3 & 0x10) == 0) && (*plVar5 != 0)) {
        uStack_30 = *(undefined4 *)(param_1 + 0x980);
        local_b8 = 0;
        local_68 = 0;
        uStack_50 = 0;
        lVar6 = 0;
        if ((uVar3 & 8) != 0) {
          lVar6 = plVar5[6];
        }
        lVar7 = 0;
        if ((uVar3 & 1) != 0) {
          lVar7 = plVar5[2];
        }
        FUN_140a8b6b0(*plVar5,*(undefined8 *)(param_1 + 0x118),&local_b8,lVar7,lVar6);
        if (lStack_60 != 0) {
          iVar4 = (int)param_2[1];
          lVar6 = (longlong)iVar4;
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                      (param_2,iVar4);
          }
          lVar7 = *param_2;
          puVar1 = (undefined8 *)(lVar7 + lVar6 * 0x90);
          *puVar1 = local_b8;
          puVar1[1] = uStack_b0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar6 * 0x90);
          *puVar1 = local_a8;
          puVar1[1] = uStack_a0;
          puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar6 * 0x90);
          *puVar1 = local_98;
          puVar1[1] = uStack_90;
          puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar6 * 0x90);
          *puVar1 = local_88;
          puVar1[1] = uStack_80;
          puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar6 * 0x90);
          *puVar1 = local_78;
          puVar1[1] = uStack_70;
          puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar6 * 0x90);
          *puVar1 = local_68;
          puVar1[1] = lStack_60;
          puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar6 * 0x90);
          *puVar1 = local_58;
          puVar1[1] = uStack_50;
          puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar6 * 0x90);
          *puVar1 = local_48;
          puVar1[1] = uStack_40;
          puVar2 = (undefined4 *)(lVar7 + 0x80 + lVar6 * 0x90);
          *puVar2 = local_38;
          puVar2[1] = uStack_34;
          puVar2[2] = uStack_30;
          puVar2[3] = uStack_2c;
        }
      }
      plVar5 = plVar5 + 0xc;
    } while (plVar5 != plVar8);
  }
  return;
}



// FUNCTION 140a881a0 FUN_140a881a0 body=492 status=ok
// SIG undefined FUN_140a881a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a881a0(undefined8 *param_1,float *param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_98;
  undefined8 local_94;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar14 = *(float *)(param_3 + 0xb4) * param_2[8];
  fVar15 = *(float *)(param_3 + 0xb8) * param_2[9];
  fVar16 = *(float *)(param_3 + 0xbc) * param_2[10];
  fVar17 = param_2[0xb] * 0.0;
  fVar10 = fVar16 * fVar6 - fVar15 * fVar7;
  fVar11 = fVar14 * fVar7 - fVar16 * fVar5;
  fVar12 = fVar15 * fVar5 - fVar14 * fVar6;
  fVar13 = fVar17 * fVar8 - fVar17 * fVar8;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar13;
  local_68 = (fVar12 * fVar6 - fVar11 * fVar7) + fVar8 * fVar10 + fVar14 + param_2[4];
  fStack_64 = (fVar10 * fVar7 - fVar12 * fVar5) + fVar8 * fVar11 + fVar15 + param_2[5];
  fStack_60 = (fVar11 * fVar5 - fVar10 * fVar6) + fVar8 * fVar12 + fVar16 + param_2[6];
  fStack_5c = (fVar13 * fVar8 - fVar13 * fVar8) + fVar8 * fVar13 + fVar17 + param_2[7];
  if (param_4 == '\0') {
    local_98 = 0;
  }
  else {
    local_98 = *(undefined4 *)(param_3 + 0xc0);
  }
  local_94 = 0;
  pfVar9 = (float *)FRotator::Quaternion(&local_98,local_38);
  local_58 = *param_2;
  fStack_54 = param_2[1];
  fStack_50 = param_2[2];
  fStack_4c = param_2[3];
  fVar5 = *pfVar9;
  fVar6 = pfVar9[1];
  fVar7 = pfVar9[2];
  fVar8 = pfVar9[3];
  FQuat::Rotator(&local_58,local_88);
  pfVar9 = (float *)FRotator::Quaternion(local_88,local_28);
  fVar10 = *pfVar9;
  fVar11 = pfVar9[1];
  fVar12 = pfVar9[2];
  fVar13 = pfVar9[3];
  local_48 = fVar8 * fVar10 * _DAT_146867040 + fVar13 * fVar5 + fVar7 * fVar11 * _DAT_146867030 +
             fVar6 * fVar12 * _DAT_146867020;
  fStack_44 = fVar7 * fVar10 * fRam0000000146867044 + fVar13 * fVar6 +
              fVar8 * fVar11 * fRam0000000146867034 + fVar5 * fVar12 * fRam0000000146867024;
  fStack_40 = fVar6 * fVar10 * fRam0000000146867048 + fVar13 * fVar7 +
              fVar5 * fVar11 * fRam0000000146867038 + fVar8 * fVar12 * fRam0000000146867028;
  fStack_3c = fVar5 * fVar10 * fRam000000014686704c + fVar13 * fVar8 +
              fVar6 * fVar11 * fRam000000014686703c + fVar7 * fVar12 * fRam000000014686702c;
  FRotator::FRotator(local_78,&local_48);
  FRotator::Quaternion(local_78,&local_48);
  *param_1 = CONCAT44(fStack_44,local_48);
  param_1[1] = CONCAT44(fStack_3c,fStack_40);
  uVar1 = *(undefined4 *)(param_3 + 200);
  uVar2 = *(undefined4 *)(param_3 + 0xcc);
  auVar3._4_4_ = fStack_64;
  auVar3._0_4_ = local_68;
  auVar3._8_4_ = fStack_60;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar3;
  auVar4._4_4_ = uVar1;
  auVar4._0_4_ = *(undefined4 *)(param_3 + 0xc4);
  auVar4._8_4_ = uVar2;
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 4) = auVar4;
  return param_1;
}



// FUNCTION 140a88390 FUN_140a88390 body=163 status=ok
// SIG undefined FUN_140a88390(void)

void FUN_140a88390(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FUN_140a8e180(*(longlong *)(param_1 + 0x370),param_2,param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    lVar5 = FUN_14145f370();
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_142d33cc0(param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),0x80));
      if (cVar4 != '\0') {
        cVar4 = FUN_142d33cc0(param_2,0x10);
        if (cVar4 == '\0') {
          local_res8[0] = 1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (lVar1 + 0x1418,local_res8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a88440 FUN_140a88440 body=159 status=ok
// SIG undefined FUN_140a88440(void)

void FUN_140a88440(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x90);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144230888;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    puVar2[10] = *(undefined8 *)(param_1 + 0x50);
    puVar2[0xb] = uVar1;
    puVar2[0xc] = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)((longlong)puVar2 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    puVar2[0xe] = *(undefined8 *)(param_1 + 0x70);
    puVar2[0x10] = *(undefined8 *)(param_1 + 0x80);
    *puVar2 = &PTR_GetPoolName_1442308d0;
  }
  return;
}



// FUNCTION 140a884e0 FUN_140a884e0 body=98 status=ok
// SIG undefined FUN_140a884e0(void)

void FUN_140a884e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144230918;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144230960;
  }
  return;
}



// FUNCTION 140a88550 FUN_140a88550 body=477 status=ok
// SIG undefined FUN_140a88550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140a88550(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((*(longlong *)(param_1 + 0x370) != 0) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar3 = FUN_1423407b0(), lVar3 != 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = UWorld::GetWorldSettings(lVar3,0,1);
    if ((lVar3 != 0) && (param_2 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      uVar4 = UWorld::GetWorldSettings(lVar3,0,1);
      plVar5 = (longlong *)FUN_140a79980(uVar4);
      if (plVar5 != (longlong *)0x0) {
        *(byte *)((longlong)plVar5 + 0x24c) = *(byte *)((longlong)plVar5 + 0x24c) | 0x1c;
        *(undefined8 *)((longlong)plVar5 + 0x1ec) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)plVar5 + 500) = DAT_1468b5d98;
        plVar5[0x3f] = DAT_1468b5da0;
        *(undefined4 *)(plVar5 + 0x40) = DAT_1468b5da8;
        *(undefined8 *)((longlong)plVar5 + 0x204) = DAT_1464aa788;
        uVar2 = DAT_1464aa790;
        *(uint *)(plVar5 + 0x73) = *(uint *)(plVar5 + 0x73) | 1;
        *(byte *)((longlong)plVar5 + 0x2ef) = *(byte *)((longlong)plVar5 + 0x2ef) & 0xbf;
        *(undefined4 *)((longlong)plVar5 + 0x20c) = uVar2;
        (**(code **)(*plVar5 + 0x638))(plVar5,0);
        (**(code **)(*plVar5 + 0x928))(plVar5,param_2);
        lVar3 = *(longlong *)(param_1 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0(param_1);
        }
        FUN_14234b270(plVar5,lVar3);
        FUN_142397540(plVar5,1);
        iVar1 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
        if (0 < iVar1) {
          do {
            (**(code **)(*plVar5 + 0x5a8))(plVar5,iVar6,0,0);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        lVar3 = FUN_140a8ceb0(param_1);
        if (lVar3 != 0) {
          uVar2 = FUN_140d000a0(lVar3);
          FUN_142398e60(plVar5,uVar2,0);
        }
      }
      return plVar5;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140a88730 FUN_140a88730 body=450 status=ok
// SIG undefined FUN_140a88730(void)

void FUN_140a88730(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
                  char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar6;
  ulonglong uVar7;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (((param_1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x118), lVar2 != 0)) && (*param_2 != 0)) {
    lVar3 = *param_3;
    if (lVar3 == 0) {
      FUN_1417846f0(lVar2,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar4 = AArchVisCharacter::StaticClass();
    uVar7 = 0;
    plVar5 = (longlong *)FUN_1417985e0(uVar4,lVar2,lVar3,0,(ulonglong)uVar6 << 0x20,0,0,0,0);
    param_2[7] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      if (param_5 != '\0') {
        FUN_142398e60(plVar5,1,1);
        plVar5 = (longlong *)param_2[7];
      }
      (**(code **)(*plVar5 + 0x928))(plVar5,*param_2);
      FUN_1426a8bf0(param_2[7] + 0x3b0,0,1);
      *(undefined1 *)(param_2[7] + 0x714) = param_4;
      lVar2 = param_2[7];
      plVar5 = (longlong *)(lVar2 + 0x7a8);
      if (plVar5 != param_2 + 5) {
        iVar1 = (int)param_2[6];
        _Src = (void *)param_2[5];
        *(int *)(lVar2 + 0x7b0) = iVar1;
        if ((iVar1 == 0) && (*(int *)(lVar2 + 0x7b4) == 0)) {
          *(undefined4 *)(lVar2 + 0x7b4) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar5,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*plVar5,_Src,(longlong)iVar1 << 3);
        }
      }
      FUN_142382f60(param_2[7],param_1,&DAT_146532188,param_2[1]);
      local_38 = *(undefined8 *)((longlong)param_2 + 0x1c);
      local_30 = *(undefined4 *)((longlong)param_2 + 0x24);
      local_28 = param_2[2];
      local_20 = (undefined4)param_2[3];
      FUN_1423982b0(param_2[7],&local_28,&local_38,0,0,uVar7 & 0xffffffffffffff00);
      FUN_14234b150(param_2[7]);
    }
  }
  return;
}



// FUNCTION 140a88900 FUN_140a88900 body=117 status=ok
// SIG undefined FUN_140a88900(void)

void FUN_140a88900(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x388);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x398);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  return;
}



// FUNCTION 140a88980 FUN_140a88980 body=121 status=ok
// SIG undefined FUN_140a88980(void)

void FUN_140a88980(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x998)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x990);
      uVar1 = *(uint *)(lVar2 + 8 + lVar4);
      if (((uVar1 & 0x10) == 0) && (*(int *)(lVar2 + 0x54 + lVar4) == param_2)) {
        *(uint *)(lVar2 + 8 + lVar4) = uVar1 | 0x10;
        FUN_140a88980(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x60;
    } while (iVar3 < *(int *)(param_1 + 0x998));
  }
  return;
}



// FUNCTION 140a88a00 FUN_140a88a00 body=1078 status=ok
// SIG undefined FUN_140a88a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a88a00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 auStack_268 [32];
  longlong *local_248;
  longlong local_238;
  undefined8 local_230;
  undefined1 local_228 [28];
  undefined1 local_20c [32];
  undefined1 local_1ec [452];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar6 = FUN_1423407b0(), lVar6 == 0)) {
    return;
  }
  FUN_142d0a300(local_228);
  FWeakObjectPtr::operator=(local_1ec,*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0xd0));
  FWeakObjectPtr::operator=(local_20c,*(undefined8 *)(param_1 + 0x3b0));
  plVar11 = *(longlong **)(param_1 + 0x308);
  bVar2 = false;
  if (plVar11 == (longlong *)0x0) {
LAB_140a88b72:
    if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03') {
      FUN_142d34f80(*(longlong *)(param_1 + 0x118),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0xb8),0,local_228);
    }
  }
  else {
    uVar7 = UScrollBox::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar7);
    if (lVar6 == 0) goto LAB_140a88b72;
    lVar10 = *(longlong *)(param_1 + 0x2c8);
    if (*(longlong *)(lVar10 + 0xc0) != 0) {
      lVar8 = UCelLightData::GetPrivateStaticClass();
      lVar10 = *(longlong *)(lVar10 + 0xc0);
      for (lVar9 = lVar10; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar8) {
          if (lVar10 != 0) {
            if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03') {
              FUN_142d34f80(*(longlong *)(param_1 + 0x118),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0xc0),
                            *(undefined8 *)(param_1 + 0x308),local_228);
            }
            bVar2 = true;
          }
          break;
        }
      }
    }
    local_238 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))();
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar6 + 0x210,&local_238);
    if (!bVar2) goto LAB_140a88b72;
  }
  plVar11 = *(longlong **)(param_1 + 0x118);
  if (plVar11 == (longlong *)0x0) {
LAB_140a88be2:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a88be2;
  }
  if ((!bVar2) && (iVar5 = FUN_14233f450(param_1), iVar5 == 3)) {
    if (plVar11 == (longlong *)0x0) goto LAB_140a88df3;
    lVar6 = *(longlong *)(param_1 + 0x2c8);
    uVar12 = FUN_142c98860(lVar6 + 0xe8,plVar11);
    FUN_140c4f660(plVar11,uVar12,*(undefined8 *)(lVar6 + 0xd0));
  }
  if ((plVar11 == (longlong *)0x0) ||
     (cVar4 = (**(code **)(*plVar11 + 0x778))(plVar11), cVar4 == '\0')) goto LAB_140a88df3;
  plVar11 = (longlong *)plVar11[0x92];
  if (plVar11 == (longlong *)0x0) {
LAB_140a88c8f:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140a88c8f;
  }
  lVar6 = *(longlong *)(param_1 + 0x2c8);
  if (bVar2) {
    local_248 = (longlong *)0x0;
    FUN_142d408e0(*(undefined8 *)(lVar6 + 0xd8),plVar11,0x3f800000,0);
  }
  else if (*(longlong *)(lVar6 + 0xb8) != 0) {
    lVar9 = UCelLightData::GetPrivateStaticClass();
    for (lVar10 = *(longlong *)(lVar6 + 0xb8); lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar9) {
        if ((*(longlong *)(lVar6 + 0xb8) == 0) ||
           (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0xb8),
           plVar1 == (longlong *)0x0)) break;
        lVar6 = plVar1[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar6 = plVar1[0x1f];
          if (lVar6 == 0) break;
        }
        lVar10 = *(longlong *)(param_1 + 0x120);
        local_238 = 0;
        local_230 = 0;
        if (lVar10 == 0) {
          lVar10 = FUN_1423407b0(param_1);
        }
        local_248 = &local_238;
        FUN_142d21340(lVar6,*(undefined8 *)(param_1 + 0x118),lVar10,local_228);
        if (0 < (int)local_230) {
          local_248 = (longlong *)0x0;
          FUN_142d408e0(*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0xe0),plVar11,0x3f800000,0)
          ;
        }
        if ((int)local_230 != 0) {
          plVar11 = (longlong *)(local_238 + 0xe8);
          iVar5 = (int)local_230;
          do {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 0x32;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_238 != 0) {
          FMemory::Free();
        }
        break;
      }
    }
  }
LAB_140a88df3:
  FUN_1409c53c0(local_228);
  return;
}



// FUNCTION 140a88e40 FUN_140a88e40 body=615 status=ok
// SIG undefined FUN_140a88e40(void)

void FUN_140a88e40(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    uVar2 = FUN_142e1a5a0();
    lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar2);
    if (lVar3 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x678);
      lVar9 = (longlong)*(int *)(param_1 + 0x680) * 0x78 + lVar8;
      for (; lVar8 != lVar9; lVar8 = lVar8 + 0x78) {
        if ((*(longlong *)(lVar8 + 8) != 0) && (*(longlong *)(*(longlong *)(lVar8 + 8) + 0x30) != 0)
           ) {
          plVar4 = (longlong *)FUN_142d62250(lVar3);
          FUN_140483870(plVar4,param_1);
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_144213d80;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            *(undefined4 *)(plVar5 + 2) = 0x40a91330;
            *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
            *(undefined4 *)(plVar5 + 3) = 0;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_4c;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar5[5] = lVar6;
            *plVar5 = (longlong)&PTR_FUN_144213dc8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
            (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
            iVar1 = (int)plVar4[1];
            *(int *)(plVar4 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
            }
            puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
            *puVar7 = plVar5;
            *(undefined4 *)(puVar7 + 1) = 3;
          }
          plVar4 = (longlong *)FUN_142d623c0(lVar3,*(undefined8 *)(*(longlong *)(lVar8 + 8) + 0x30))
          ;
          FUN_140483870(plVar4,param_1);
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_144213e10;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            *(undefined4 *)(plVar5 + 2) = 0x40a91330;
            *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
            *(undefined4 *)(plVar5 + 3) = 0;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_3c;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar5[5] = lVar6;
            *plVar5 = (longlong)&PTR_FUN_144213e58;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
            (**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
            iVar1 = (int)plVar4[1];
            *(int *)(plVar4 + 1) = iVar1 + 1;
            if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
            }
            puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
            *puVar7 = plVar5;
            *(undefined4 *)(puVar7 + 1) = 3;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a890b0 FUN_140a890b0 body=855 status=ok
// SIG undefined FUN_140a890b0(void)

void FUN_140a890b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 local_38;
  undefined1 local_30;
  byte local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 0x388) == 0) {
LAB_140a89114:
    bVar3 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x388) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar8 = iVar1 + uVar11;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18;
    }
    else {
      lVar10 = 0;
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_140a89114;
    bVar3 = true;
  }
  if (*(longlong *)(param_1 + 0x390) == 0) {
LAB_140a89164:
    bVar4 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x390) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar8 = iVar1 + uVar11;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18;
    }
    else {
      lVar10 = 0;
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_140a89164;
    bVar4 = true;
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x398) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar8 = iVar1 + uVar11;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar11) * 0x18;
    }
    else {
      lVar10 = 0;
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
      bVar5 = true;
      goto LAB_140a891b7;
    }
  }
  bVar5 = false;
LAB_140a891b7:
  if ((((!bVar3) || (!bVar4)) || (!bVar5)) &&
     (plVar2 = *(longlong **)(param_1 + 0x178), plVar2 != (longlong *)0x0)) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((((bVar6) && (cVar7 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar7 != '\0')) &&
        ((*(longlong *)(param_1 + 0x380) != 0 && (*(longlong *)(param_1 + 0x370) != 0)))) &&
       (((lVar10 = *(longlong *)(param_1 + 0x120), lVar10 != 0 ||
         (lVar10 = FUN_1423407b0(param_1), lVar10 != 0)) &&
        (local_10 = UWorld::GetWorldSettings(lVar10,0,1), local_10 != 0)))) {
      local_2f = local_2f & 0xfe;
      local_2c = 0x41800000;
      local_24 = 0x42c80000;
      local_28 = 0x41100000;
      local_20 = 4;
      local_18 = 0;
      local_30 = 0x28;
      if (!bVar3) {
        if (*(char *)(param_1 + 0x3a8) == '\0') {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x7a8);
        }
        else {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x7c0);
        }
        lVar10 = FUN_142db7ff0(*(undefined8 *)(param_1 + 0x380),&local_38);
        *(longlong *)(param_1 + 0x388) = lVar10;
        if (lVar10 != 0) {
          uVar9 = FUN_140d000a0(plVar2);
          FUN_142398e60(*(undefined8 *)(param_1 + 0x388),uVar9,0);
        }
      }
      if (!bVar4) {
        if (*(char *)(param_1 + 0x3a8) == '\0') {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x7b0);
        }
        else {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x7c8);
        }
        lVar10 = FUN_142db7ff0(*(undefined8 *)(param_1 + 0x380),&local_38);
        *(longlong *)(param_1 + 0x390) = lVar10;
        if (lVar10 != 0) {
          uVar9 = FUN_140d000a0(plVar2);
          FUN_142398e60(*(undefined8 *)(param_1 + 0x390),uVar9,0);
        }
      }
      if (!bVar5) {
        if (*(char *)(param_1 + 0x3a8) == '\0') {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 0x7b8);
        }
        else {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + 2000);
        }
        lVar10 = FUN_142db7ff0(*(undefined8 *)(param_1 + 0x380),&local_38);
        *(longlong *)(param_1 + 0x398) = lVar10;
        if (lVar10 != 0) {
          uVar9 = FUN_140d000a0(plVar2);
          FUN_142398e60(*(undefined8 *)(param_1 + 0x398),uVar9,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a89410 FUN_140a89410 body=851 status=ok
// SIG undefined FUN_140a89410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a89410(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  longlong *local_48;
  undefined8 local_40;
  
  if (*param_2 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  fVar12 = 0.0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar6 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    lVar8 = *(longlong *)(param_1 + 0x38);
    lVar7 = lVar8;
joined_r0x000140a89461:
    if (lVar7 != 0) {
      if (lVar7 != lVar6) goto code_r0x000140a89468;
      if ((lVar8 != 0) && (param_2[4] != 0)) {
        lVar7 = 0;
        if (lVar8 != 0) {
          lVar6 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
          for (lVar8 = *(longlong *)(param_1 + 0x38);
              (lVar7 = 0, lVar8 != 0 && (lVar7 = *(longlong *)(param_1 + 0x38), lVar8 != lVar6));
              lVar8 = *(longlong *)(lVar8 + 0x30)) {
          }
        }
        if ((*(int *)(*(longlong *)(param_2[4] + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2[4] + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140a89471;
        bVar2 = true;
        bVar3 = true;
        goto LAB_140a89537;
      }
    }
  }
LAB_140a89471:
  iVar5 = rand();
  fVar11 = (float)FUN_142d1b990(*param_2);
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = *(float *)(param_2 + 2) / fVar11;
  }
  bVar2 = (float)iVar5 * 3.051851e-05 < fVar11 * *(float *)(param_1 + 0x34);
  bVar3 = (float)iVar5 * 3.051851e-05 < fVar11 * *(float *)(param_1 + 0x30);
LAB_140a89537:
  lVar8 = *(longlong *)(*param_2 + 0x118);
  if (lVar8 == 0) goto LAB_140a895df;
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    plVar10 = *(longlong **)(lVar8 + 0x4c0);
  }
  else {
    plVar10 = *(longlong **)(lVar8 + 0x168);
    if (plVar10 == (longlong *)0x0) goto LAB_140a895df;
    lVar8 = FUN_1429f11d0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140a895df;
  }
  if (plVar10 != (longlong *)0x0) {
    fVar12 = (float)(**(code **)(*plVar10 + 0x7f0))(plVar10);
  }
LAB_140a895df:
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146867434) && (_Init_thread_header(&DAT_146867434), DAT_146867434 == -1))
  {
    DAT_146295c00 = (undefined2 *)0x0;
    _DAT_146295c08 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146295c00,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (DAT_146295c00,0x17,"GetHitReactionMassData",0x17,0x3f);
    atexit((_func_5014 *)&LAB_143e486d0);
    _Init_thread_footer(&DAT_146867434);
  }
  local_48 = (longlong *)0x0;
  puVar9 = &DAT_143f3eda8;
  if (DAT_146295c08 != 0) {
    puVar9 = DAT_146295c00;
  }
  local_40 = 0;
  FUN_140a792a0(uVar1,puVar9,&local_48);
  plVar10 = local_48;
  while( true ) {
    if (plVar10 == local_48 + (int)local_40) {
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      return 0;
    }
    lVar8 = *plVar10;
    if ((lVar8 != 0) && (fVar12 - *(float *)(lVar8 + 8) < 1.0)) break;
    plVar10 = plVar10 + 1;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  fVar12 = *(float *)((longlong)param_2 + 0x34);
  if ((*(float *)(lVar8 + 0x14) <= fVar12) && (bVar3)) {
    return *(undefined8 *)(param_1 + 0x58);
  }
  if ((*(float *)(lVar8 + 0x10) <= fVar12) && (bVar2)) {
    return *(undefined8 *)(param_1 + 0x50);
  }
  if (fVar12 < *(float *)(lVar8 + 0xc)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x48);
code_r0x000140a89468:
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000140a89461;
}



// FUNCTION 140a89770 FUN_140a89770 body=754 status=ok
// SIG undefined FUN_140a89770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a89770(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  float fVar12;
  float extraout_XMM0_Da;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if (param_2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar6 != 0) {
      lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar6 = *(longlong *)(lVar6 + 0x148);
      if (lVar6 != 0) {
        plVar11 = *(longlong **)(lVar6 + 0x470);
        plVar1 = plVar11 + *(int *)(lVar6 + 0x478);
        if (plVar11 != plVar1) {
          uVar10 = (ulonglong)_tls_index;
          do {
            pvVar3 = ThreadLocalStoragePointer;
            plVar2 = (longlong *)*plVar11;
            if (plVar2 != (longlong *)0x0) {
              lVar6 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                  lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                if (*(char *)(param_1 + 0x8a) != '\0') {
                  lVar6 = (**(code **)(*plVar2 + 0x678))(plVar2);
                  if (lVar6 == 0) {
LAB_140a898b7:
                    lVar6 = 0;
                  }
                  else {
                    lVar7 = FUN_1413f82e0();
                    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (!bVar4) goto LAB_140a898b7;
                  }
                  if (lVar6 != 0) {
                    lVar7 = *(longlong *)((longlong)pvVar3 + uVar10 * 8);
                    if ((*(int *)(lVar7 + 0x38) < DAT_146866ca8) &&
                       (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)) {
                      DAT_146866c90 = 0xff;
                      _DAT_146866c98 = 0;
                      DAT_146866ca0._0_4_ = 0;
                      _Init_thread_footer(&DAT_146866ca8);
                    }
                    lVar6 = *(longlong *)(lVar6 + 0x910);
                    if (lVar6 == 0) {
                      puVar8 = (undefined4 *)&DAT_146866c90;
                    }
                    else {
                      if ((*(int *)(lVar7 + 0x38) < DAT_146866c88) &&
                         (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
                        DAT_146866c70 = 0xff;
                        _DAT_146866c78 = 0;
                        DAT_146866c80._0_4_ = 0;
                        _Init_thread_footer(&DAT_146866c88);
                      }
                      if (*(int *)(lVar6 + 0x680) < 1) {
                        puVar8 = (undefined4 *)&DAT_146866c70;
                      }
                      else {
                        puVar8 = (undefined4 *)(*(longlong *)(lVar6 + 0x678) + 0x60);
                      }
                    }
                    local_78 = *puVar8;
                    uStack_74 = puVar8[1];
                    uStack_70 = puVar8[2];
                    uStack_6c = puVar8[3];
                    local_68 = *(undefined8 *)(puVar8 + 4);
                    cVar5 = FUN_142d52a00(&local_78);
                    if (cVar5 != '\0') {
                      uVar9 = FUN_142d52a20(&local_78);
                      uVar9 = FArchive::operator<<(uVar9);
                      fVar12 = (float)FUN_142d5fed0(uVar9);
                      uVar9 = FUN_142d52a20(&local_78);
                      uVar9 = FArchive::operator<<(uVar9);
                      FUN_142d61c60(uVar9);
                      if (ABS(fVar12 - extraout_XMM0_Da) <= 1e-08) goto LAB_140a899a2;
                    }
                  }
                }
                if (((*(char *)(param_1 + 0x88) != '\0') &&
                    (*(char *)((longlong)plVar2 + 0x59a) == '\x01')) ||
                   ((*(char *)(param_1 + 0x89) != '\0' &&
                    (*(char *)((longlong)plVar2 + 0x59a) == '\x02')))) {
                  return 1;
                }
              }
            }
LAB_140a899a2:
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a89a70 FUN_140a89a70 body=225 status=ok
// SIG undefined FUN_140a89a70(void)

undefined8 FUN_140a89a70(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
      if (plVar4 != (longlong *)0x0) {
        param_2 = plVar4;
      }
      uVar5 = UScrollBox::GetPrivateStaticClass();
      lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
      if (lVar3 != 0) {
        plVar6 = *(longlong **)(param_1 + 0x88);
        plVar4 = plVar6 + *(int *)(param_1 + 0x90);
        for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
          if ((*plVar6 != 0) && (cVar2 = FUN_142d1f4a0(lVar3), cVar2 == '\0')) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a89b60 FUN_140a89b60 body=263 status=ok
// SIG undefined FUN_140a89b60(void)

undefined4 FUN_140a89b60(undefined8 param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  if (param_4 != (longlong *)0x0) {
    lVar4 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_4 + 0x3b);
      if (plVar5 != (longlong *)0x0) {
        param_4 = plVar5;
      }
    }
    iVar2 = (**(code **)(*param_4 + 0x408))(param_4);
    iVar3 = FUN_14233f450(param_4);
    if (iVar3 == 3) {
      if (param_2 < 2) {
        param_2 = 1;
      }
      *(int *)(param_4 + 0x35) = param_2;
    }
    uVar6 = FUN_142c98860(param_3,param_4[0x23]);
    iVar3 = FUN_14233f450(param_4);
    if (iVar3 == 3) {
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_4 + 0x35) = iVar2;
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 140a89c70 FUN_140a89c70 body=154 status=ok
// SIG undefined FUN_140a89c70(void)

void FUN_140a89c70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_78 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(undefined4 *)(param_1 + 0x68);
  local_18 = *(undefined8 *)(param_1 + 0x70);
  local_28 = *(undefined8 *)(param_1 + 0x60);
  local_1c = *(undefined4 *)(param_1 + 0x6c);
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,&local_78);
  return;
}



// FUNCTION 140a89d10 Execute body=73 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,URemnantPingManager,TTypeWrapper<void>___cdecl(void),TWeakObjectPtr<AActor,FWeakObjectPtr>_>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_resc = *(undefined4 *)(param_1 + 0x24);
  local_res8 = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,&local_res8);
  return;
}



// FUNCTION 140a89d60 FUN_140a89d60 body=156 status=ok
// SIG undefined FUN_140a89d60(void)

undefined8 FUN_140a89d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_78 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  local_70 = *(undefined8 *)(param_1 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(undefined4 *)(param_1 + 0x68);
  local_18 = *(undefined8 *)(param_1 + 0x70);
  local_28 = *(undefined8 *)(param_1 + 0x60);
  local_1c = *(undefined4 *)(param_1 + 0x6c);
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,&local_78);
  return 1;
}



// FUNCTION 140a89e00 ExecuteIfSafe body=109 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,URemnantPingManager,void___cdecl(void),TWeakObjectPtr<AActor,FWeakObjectPtr>_>
::ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    local_res8 = *(undefined4 *)(param_1 + 0x20);
    local_resc = *(undefined4 *)(param_1 + 0x24);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,&local_res8);
    return 1;
  }
  return 0;
}



// FUNCTION 140a89e70 FUN_140a89e70 body=812 status=ok
// SIG undefined FUN_140a89e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140a89e70(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  float local_58;
  ulonglong local_50;
  
  uVar2 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((param_3 == 0) || (lVar7 = *param_2, lVar7 == 0)) {
LAB_140a8a17e:
    return uVar2 & 0xffffffffffffff00;
  }
  plVar6 = *(longlong **)(param_1 + 0x720);
  plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x728) * 6;
  for (; (plVar8 = (longlong *)0x0, plVar6 != plVar4 && (plVar8 = plVar6, *plVar6 != lVar7));
      plVar6 = plVar6 + 6) {
  }
  lVar3 = *(longlong *)(param_3 + 0x2a8);
  plVar6 = (longlong *)0x0;
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x270);
    plVar5 = plVar4 + (longlong)*(int *)(lVar3 + 0x278) * 6;
    for (; (plVar6 = (longlong *)0x0, plVar4 != plVar5 && (plVar6 = plVar4, *plVar4 != lVar7));
        plVar4 = plVar4 + 6) {
    }
  }
  lVar7 = *(longlong *)(param_3 + 800);
  local_50 = uVar2;
  if (lVar7 != 0) {
    lVar3 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*param_2 != 0)) {
      plVar5 = *(longlong **)(lVar7 + 800);
      plVar4 = plVar5 + (longlong)*(int *)(lVar7 + 0x328) * 3;
      for (; plVar5 != plVar4; plVar5 = plVar5 + 3) {
        if (*plVar5 == *param_2) goto LAB_140a89f98;
      }
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140a89f98:
  local_68 = plVar6;
  uVar2 = FUN_140a961a0(param_1,param_3,plVar5,plVar8);
  if ((char)uVar2 == '\0') goto LAB_140a8a17e;
  lVar7 = *(longlong *)(param_3 + 0x40);
  if (lVar7 == 0) {
LAB_140a89ffa:
    lVar7 = 0;
  }
  else {
    lVar3 = UEnvQueryTest_Cover::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a89ffa;
  }
  if (*(char *)(param_3 + 0x50c) == '\0') {
    if ((lVar7 == 0) || (fVar9 = *(float *)(lVar7 + 0x1c8), fVar9 < 0.0)) {
      if (plVar5 == (longlong *)0x0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(param_3 + 0x1c0) * *(float *)((longlong)plVar5 + 0xc);
      }
    }
    else if (*(char *)(lVar7 + 0x1d0) == '\0') {
      if (fVar9 < 0.0) {
        fVar9 = local_58;
      }
    }
    else {
      if (fVar9 < 0.0) {
        fVar9 = local_58;
      }
      fVar9 = fVar9 * *(float *)(param_3 + 0x1c0);
    }
  }
  else {
    fVar9 = *(float *)(param_3 + 0x508);
    if (*(char *)(param_3 + 0x510) != '\0') {
      fVar9 = *(float *)(param_3 + 0x1c0) * fVar9;
    }
  }
  fVar9 = fVar9 * *(float *)(param_3 + 0x520) * *(float *)(param_1 + 0x708);
  if (plVar8 != (longlong *)0x0) {
    fVar9 = fVar9 * *(float *)((longlong)plVar8 + 0x24);
  }
  if (*(longlong *)(param_3 + 0x2a8) != 0) {
    fVar9 = fVar9 * *(float *)(*(longlong *)(param_3 + 0x2a8) + 0x25c);
  }
  if (plVar6 != (longlong *)0x0) {
    fVar9 = fVar9 * *(float *)((longlong)plVar6 + 0x24);
  }
  *(float *)(param_2 + 6) = fVar9;
  lVar7 = *(longlong *)(param_3 + 0x40);
  if (lVar7 != 0) {
    lVar3 = UEnvQueryTest_Cover::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a8a101;
  }
  lVar7 = 0;
LAB_140a8a101:
  if (*(char *)(param_3 + 0x518) == '\0') {
    if ((lVar7 == 0) || (fVar9 = *(float *)(lVar7 + 0x1d8), fVar9 < 0.0)) {
      if (plVar5 == (longlong *)0x0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(plVar5 + 1);
      }
    }
  }
  else {
    fVar9 = *(float *)(param_3 + 0x514);
  }
  fVar9 = fVar9 * *(float *)(param_3 + 0x524) * *(float *)(param_1 + 0x714);
  if (plVar8 != (longlong *)0x0) {
    fVar9 = fVar9 * *(float *)(plVar8 + 3);
  }
  lVar7 = *(longlong *)(param_3 + 0x2a8);
  if (lVar7 != 0) {
    fVar9 = fVar9 * *(float *)(lVar7 + 0x268);
  }
  if (plVar6 != (longlong *)0x0) {
    fVar9 = fVar9 * *(float *)(plVar6 + 3);
  }
  *(float *)((longlong)param_2 + 0x1c) = fVar9;
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}



// FUNCTION 140a8a1a0 FUN_140a8a1a0 body=712 status=ok
// SIG undefined FUN_140a8a1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140a8a1a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_558 [32];
  longlong *local_538;
  undefined1 *local_530;
  undefined *local_528;
  undefined1 local_518 [8];
  undefined8 local_510;
  float local_508;
  undefined8 local_500;
  float local_4f8;
  undefined8 local_4f0;
  float local_4e8;
  undefined1 local_4d8 [12];
  undefined4 local_4cc;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  undefined1 local_46c [36];
  undefined1 local_448 [72];
  longlong local_400;
  longlong local_3e0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [880];
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  if ((param_2 != (longlong *)0x0) && (lVar2 = FUN_142ddddc0(param_2), lVar2 != 0)) {
    fVar5 = (float)FUN_142c98860(param_1 + 0x68,param_2);
    FUN_142dc1ad0(local_3c8);
    cVar1 = FUN_142dcd6e0(lVar2,local_3c8,0);
    if (((cVar1 != '\0') &&
        (((plVar3 = (longlong *)FUN_142dd0030(local_3c8), plVar3 != (longlong *)0x0 &&
          (local_48 != '\0')) && (plVar3 != param_2)))) &&
       ((lVar2 = FWeakObjectPtr::Get(local_3b8), lVar2 != 0 && (*(char *)(lVar2 + 0x478) != '\0'))))
    {
      lVar2 = plVar3[0x2d];
      if (lVar2 == 0) {
        local_510 = _DAT_1468b5d90;
        local_508 = DAT_1468b5d98;
      }
      else {
        local_510 = *(undefined8 *)(lVar2 + 0x220);
        local_508 = *(float *)(lVar2 + 0x228);
      }
      local_4e8 = local_508;
      lVar2 = param_2[0x2d];
      local_4f0 = local_510;
      if (lVar2 == 0) {
        local_500 = _DAT_1468b5d90;
        local_4f8 = DAT_1468b5d98;
      }
      else {
        local_500 = *(undefined8 *)(lVar2 + 0x220);
        local_4f8 = *(float *)(lVar2 + 0x228);
      }
      local_510 = local_500;
      local_508 = local_4f8;
      _guard_xfg_dispatch_icall_nop(local_4d8,0,0x90);
      local_4cc = 0x3f800000;
      local_500 = 0;
      local_538 = param_2;
      FUN_1422ffb20(local_448,0,local_518,0);
      uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
      local_528 = &DAT_146aefe68;
      local_530 = local_448;
      local_538 = (longlong *)CONCAT44(local_538._4_4_,2);
      UWorld::LineTraceSingleByChannel(uVar4,local_4d8,&local_510,&local_4f0);
      cVar1 = FUN_14044af00(local_46c,0);
      if (cVar1 != '\0') {
        if ((local_4c0 - local_510._4_4_) * (local_4c0 - local_510._4_4_) +
            (local_4c4 - (float)local_510) * (local_4c4 - (float)local_510) +
            (local_4bc - local_508) * (local_4bc - local_508) < fVar5 * fVar5) {
          if (local_3e0 != 0) {
            FMemory::Free();
          }
          if (local_400 == 0) {
            return plVar3;
          }
          FMemory::Free();
          return plVar3;
        }
      }
      if (local_3e0 != 0) {
        FMemory::Free();
      }
      if (local_400 != 0) {
        FMemory::Free();
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140a8a470 FUN_140a8a470 body=1490 status=ok
// SIG undefined FUN_140a8a470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a8a470(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  float local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = *(longlong *)(param_1 + 0x118);
  lVar13 = 0;
  lVar14 = lVar13;
  if (lVar7 != 0) {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar14 = *(longlong *)(lVar7 + 0x900);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (lVar14 == 0) {
    return;
  }
  cVar4 = (**(code **)(*plVar1 + 0x778))(plVar1);
  if (cVar4 == '\0') {
    iVar5 = FUN_14233f450(param_1);
    if (iVar5 != 3) {
      return;
    }
    FUN_142dbb5d0(lVar14 + 0xd70,&DAT_146867408);
    return;
  }
  if (((*(longlong *)(param_1 + 0x2c8) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0x2c8) + 0x120) == '\0')) ||
     (*(longlong *)(param_1 + 0x308) == 0)) {
    plVar2 = (longlong *)plVar1[0x92];
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    if (*(float *)(param_1 + 0x2ec) <= 0.0) {
      return;
    }
    FUN_142cdd100(local_e8);
    lVar7 = plVar1[0x2d];
    local_9c = 0x3f800000;
    local_90 = 0xbf800000;
    local_80 = 0x40000000;
    local_94 = 0x41200000;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = _DAT_1468b5d90;
    local_b0 = (float)DAT_1468b5d98;
    local_a0 = 0;
    local_98 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = 2;
    if (lVar7 == 0) {
      local_118 = _DAT_1468b5d90;
      local_110 = (float)DAT_1468b5d98;
    }
    else {
      local_118 = *(undefined8 *)(lVar7 + 0x220);
      local_110 = *(float *)(lVar7 + 0x228);
    }
    local_e0 = local_118;
    local_d4 = *(undefined4 *)(param_1 + 0x2ec);
    local_d8 = local_110;
    FUN_142d008a0(lVar14,local_e8);
    local_108 = 0;
    local_100 = 0.0;
    local_f8 = 0;
    local_f0 = 0;
    (**(code **)(*plVar2 + 0x830))(plVar2,&local_108,&local_f8);
    pfVar12 = (float *)FRotator::Vector(&local_f8,&local_118);
    local_110 = local_100 + pfVar12[2] * 2000.0;
    local_9c = *(undefined4 *)(param_1 + 0x2ec);
    local_b8 = CONCAT44(local_108._4_4_ + pfVar12[1] * 2000.0,(float)local_108 + *pfVar12 * 2000.0);
    local_b0 = local_110;
    FUN_142d00b40(lVar14,&local_c8);
    return;
  }
  FUN_142dbb5d0(lVar14 + 0xd70,&DAT_146867408);
  lVar7 = *(longlong *)(param_1 + 0x308);
  fVar15 = 0.0;
  fVar16 = *(float *)(*(longlong *)(param_1 + 0x2c8) + 0x124);
  lVar6 = lVar13;
  if (lVar7 != 0) {
    lVar8 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = *(longlong *)(lVar7 + 0x900);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x308);
  lVar8 = lVar13;
  if (lVar7 != 0) {
    lVar9 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = *(longlong *)(lVar7 + 0x698);
    }
  }
  if (lVar6 != 0) {
    fVar15 = *(float *)(lVar6 + 0x318);
  }
  if (lVar8 == 0) {
    if (lVar6 == 0) goto LAB_140a8a6e9;
  }
  else {
    fVar15 = *(float *)(lVar8 + 0x230);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x2c8) + 0x130);
  if (0 < iVar5) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x128);
    do {
      if (fVar15 < *(float *)(lVar7 + lVar13 * 8)) break;
      fVar16 = *(float *)(lVar7 + 4 + lVar13 * 8);
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar5);
  }
LAB_140a8a6e9:
  uVar10 = (**(code **)(*plVar1 + 0x788))(plVar1,&local_118);
  FRotator::Vector(uVar10,&local_f8);
  local_f0 = 0;
  if (1e-08 < *(float *)(lVar14 + 0x318)) {
    fVar15 = 1.0 / *(float *)(lVar14 + 0x318);
    FUN_142cdd100(local_e8);
    lVar7 = plVar1[0x2d];
    if (lVar7 == 0) {
      local_110 = (float)DAT_1468b5d98;
      puVar11 = &local_118;
      local_118 = _DAT_1468b5d90;
    }
    else {
      puVar11 = &local_108;
      local_100 = (float)*(undefined4 *)(lVar7 + 0x228);
      local_108 = *(undefined8 *)(lVar7 + 0x220);
    }
    local_d0 = local_d0 | 4;
    local_110 = *(float *)(puVar11 + 1) + 0.0;
    local_d4 = 0x3dcccccd;
    local_e0 = CONCAT44((float)((ulonglong)*puVar11 >> 0x20) +
                        -local_f8._4_4_ * fVar16 * fVar15 * 0.1,
                        (float)*puVar11 + -(float)local_f8 * fVar16 * fVar15 * 0.1);
    local_d8 = local_110;
    FUN_142d008a0(lVar14,local_e8);
  }
  return;
}



// FUNCTION 140a8aa50 FUN_140a8aa50 body=27 status=ok
// SIG undefined FUN_140a8aa50(void)

void FUN_140a8aa50(undefined8 param_1)

{
  FUN_142d187a0();
  FUN_140a9ba90(param_1);
  return;
}



// FUNCTION 140a8aa70 FUN_140a8aa70 body=105 status=ok
// SIG undefined FUN_140a8aa70(void)

void FUN_140a8aa70(longlong param_1)

{
  undefined8 local_res8 [4];
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(uint *)(param_1 + 0x840) >> 2 & 1) == 0) {
    FUN_142d14ad0();
    FUN_142d23f40(param_1,0);
    local_res8[0] = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_142d6ed70(param_1 + 0x3d0,*(undefined8 *)(param_1 + 0x948),0,&local_18,local_res8,0);
  }
  return;
}



// FUNCTION 140a8aae0 FUN_140a8aae0 body=619 status=ok
// SIG undefined FUN_140a8aae0(void)

void FUN_140a8aae0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return;
  }
  lVar5 = FUN_140a8dc90(param_2);
  if (((lVar5 != 0) && (lVar6 = FUN_140a8ceb0(param_1), lVar6 != 0)) &&
     (*(longlong *)(lVar6 + 0x488) == *(longlong *)(lVar5 + 0x118))) {
    FUN_142d48610(param_3,0x80);
  }
  if ((0.0001 < *(float *)((longlong)param_2 + 0x1dc)) &&
     (*(float *)((longlong)param_2 + 0x1dc) == *(float *)(param_3 + 0x1c))) {
    FUN_142d48610(param_3,4);
  }
  plVar8 = (longlong *)param_2[0xb];
  lVar5 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar6 = plVar8[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar6 = plVar8[0x1f];
      if (lVar6 == 0) goto LAB_140a8abe7;
    }
    lVar7 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140a8abea;
  }
LAB_140a8abe7:
  lVar6 = lVar5;
LAB_140a8abea:
  if (param_2[0x56] != 0) {
    lVar5 = *(longlong *)(param_2[0x56] + 0x118);
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  uVar1 = *(undefined4 *)(lVar7 + 0x790);
  if ((((lVar6 != 0) && (*(longlong *)(param_1 + 0x370) != 0)) && (lVar5 != 0)) &&
     (*(char *)((longlong)param_2 + 0x345) == '\0')) {
    fVar10 = (float)FUN_142d1bed0(lVar6 + 0xe0,lVar5);
    plVar8 = (longlong *)param_2[0x4b];
    fVar11 = 1.0;
    plVar9 = plVar8 + (longlong)(int)param_2[0x4c] * 2;
    for (; plVar8 != plVar9; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        fVar11 = (float)(**(code **)(*param_2 + 0x20))(param_2,param_2[0xb]);
        break;
      }
    }
    if (fVar11 * fVar10 < *(float *)(*(longlong *)(param_1 + 0x370) + 0x688)) {
      cVar2 = *(char *)(lVar6 + 0x131);
      for (bVar4 = *(byte *)(param_1 + 0x3aa); bVar4 != *(byte *)(param_1 + 0x3a9);
          bVar4 = bVar4 + 1 & 0xf) {
        if ((*(longlong *)(param_1 + ((ulonglong)bVar4 + 0x3b) * 0x10) == lVar5) &&
           (*(char *)(param_1 + 8 + ((ulonglong)bVar4 + 0x3b) * 0x10) == cVar2)) {
          return;
        }
      }
      lVar6 = (ulonglong)*(byte *)(param_1 + 0x3a9) + 0x3b;
      *(undefined4 *)(param_1 + 0xc + lVar6 * 0x10) = uVar1;
      *(longlong *)(param_1 + lVar6 * 0x10) = lVar5;
      *(char *)(param_1 + 8 + lVar6 * 0x10) = cVar2;
      *(byte *)(param_1 + 0x3a9) = *(char *)(param_1 + 0x3a9) + 1U & 0xf;
      FUN_142d48610(param_3,0x20);
    }
  }
  return;
}



// FUNCTION 140a8ad50 FUN_140a8ad50 body=2388 status=ok
// SIG undefined FUN_140a8ad50(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140a8ad50(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  
  if ((*(longlong *)(param_1 + 0x2b0) != 0) &&
     (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118), lVar11 != 0)) {
    lVar5 = FUN_14148cad0();
    lVar11 = *(longlong *)(lVar11 + 0x10);
    if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(int *)(param_1 + 0x328) != 2)) {
      return;
    }
  }
  FUN_142d18890(param_1,param_2);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar11 = *(longlong *)(DAT_146b33f38 + 0x58);
  lVar5 = FUN_140a8dc90(param_1);
  lVar12 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = FUN_14126f7e0(lVar5);
      if (lVar6 != 0) {
        lVar7 = FUN_141436fd0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(longlong *)(lVar6 + 0x130) != 0)) {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x530);
      lVar7 = (longlong)*(int *)(param_1 + 0x538) * 0x10 + lVar6;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
        lVar8 = FWeakObjectPtr::Get(lVar6);
        if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0)) {
          lVar9 = FUN_1414ba680();
          lVar8 = *(longlong *)(lVar8 + 0x10);
          if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
              lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (lVar11 == 0) break;
            lVar6 = lVar11 + 0xc90;
            lVar7 = FWeakObjectPtr::Get(lVar6);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 == *(int *)(lVar11 + 0xc98)) ||
                 (*(longlong *)(lVar11 + 0xca0) == 0)) break;
              lVar7 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar6,lVar7);
              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar11 + 0xc98) = DAT_1464b56f4;
              }
              lVar7 = FWeakObjectPtr::Get(lVar6);
              if (lVar7 == 0) break;
            }
            lVar8 = FUN_142e1f230();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar7 = FWeakObjectPtr::Get(lVar6);
              if (lVar7 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar11 + 0xc98)) &&
                   (*(longlong *)(lVar11 + 0xca0) != 0)) {
                  lVar7 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar6,lVar7);
                  if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar11 + 0xc98) = DAT_1464b56f4;
                  }
                  lVar7 = FWeakObjectPtr::Get(lVar6);
                  if (lVar7 != 0) goto LAB_140a8b050;
                }
LAB_140a8b086:
                lVar7 = lVar12;
              }
              else {
LAB_140a8b050:
                lVar6 = FUN_142e1f230();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_140a8b086;
              }
              plVar2 = (longlong *)*param_2;
              iVar1 = (int)param_2[1];
              plVar10 = plVar2;
              goto joined_r0x000140a8b09d;
            }
            break;
          }
        }
      }
      goto LAB_140a8b0dc;
    }
  }
LAB_140a8b2cc:
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar5 = plVar2[0x1f];
      if (lVar5 == 0) goto LAB_140a8b348;
    }
    lVar6 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar5 + 0x140) != 0)) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
    }
  }
LAB_140a8b348:
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar5 = plVar2[0x1f];
      if (lVar5 == 0) goto LAB_140a8b3bf;
    }
    lVar6 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar5 + 0x90) != 0)) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
    }
  }
LAB_140a8b3bf:
  if (*(longlong *)(param_1 + 0x540) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
  }
  if ((((*(char *)(param_1 + 0x330) != '\0') && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x488), plVar2 != (longlong *)0x0))
     && (lVar5 = (**(code **)(*plVar2 + 0x690))(), lVar5 != 0)) {
    lVar6 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar5 + 0x728) != 0)) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
    }
  }
  if (lVar11 == 0) {
    return;
  }
  lVar5 = lVar11 + 0xce8;
  lVar6 = FWeakObjectPtr::Get(lVar5);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar11 + 0xcf0)) {
      return;
    }
    if (*(longlong *)(lVar11 + 0xcf8) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar11 + 0xcf0) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar5);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar7 = FUN_142e1f230();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((!bVar3) || (*(int *)(param_1 + 0x328) != 2)) || (*(longlong *)(lVar11 + 0xce0) == 0)) {
    return;
  }
  lVar8 = FUN_1428dfc70();
  lVar6 = *(longlong *)(lVar11 + 0xce0);
  lVar7 = lVar6;
  while( true ) {
    if (lVar7 == 0) {
      return;
    }
    if (lVar7 == lVar8) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
  if (lVar6 == 0) {
    return;
  }
  lVar7 = lVar12;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  }
  while( true ) {
    if (lVar7 == 0) {
      return;
    }
    if (lVar7 == lVar6) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
  lVar6 = FWeakObjectPtr::Get(lVar5);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar11 + 0xcf0)) && (*(longlong *)(lVar11 + 0xcf8) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar11 + 0xcf0) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar5);
      if (lVar6 != 0) goto LAB_140a8b5fc;
    }
  }
  else {
LAB_140a8b5fc:
    lVar11 = FUN_142e1f230();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140a8b635;
  }
  lVar6 = lVar12;
LAB_140a8b635:
  plVar2 = (longlong *)*param_2;
  iVar1 = (int)param_2[1];
  plVar10 = plVar2;
  do {
    if (plVar10 == plVar2 + iVar1) {
LAB_140a8b66c:
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar6;
      return;
    }
    if (*plVar10 == lVar6) {
      if ((int)((longlong)plVar10 - (longlong)plVar2 >> 3) != -1) {
        return;
      }
      goto LAB_140a8b66c;
    }
    plVar10 = plVar10 + 1;
  } while( true );
joined_r0x000140a8b09d:
  if (plVar10 == plVar2 + iVar1) goto LAB_140a8b0bc;
  if (*plVar10 == lVar7) {
    if ((int)((longlong)plVar10 - (longlong)plVar2 >> 3) != -1) goto LAB_140a8b0dc;
    goto LAB_140a8b0bc;
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x000140a8b09d;
LAB_140a8b0bc:
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
LAB_140a8b0dc:
  if ((*(longlong *)(lVar5 + 0x908) != 0) && (lVar11 != 0)) {
    lVar6 = lVar11 + 0xe60;
    lVar7 = FWeakObjectPtr::Get(lVar6);
    if (lVar7 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar11 + 0xe68)) && (*(longlong *)(lVar11 + 0xe70) != 0)) {
        lVar7 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar6,lVar7);
        if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar11 + 0xe68) = DAT_1464b56f4;
        }
        lVar7 = FWeakObjectPtr::Get(lVar6);
        if (lVar7 != 0) goto LAB_140a8b178;
      }
    }
    else {
LAB_140a8b178:
      lVar8 = FUN_142e1f230();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (cVar4 = FUN_140b31aa0(*(undefined8 *)(lVar5 + 0x908),1,
                                CONCAT71((int7)((ulonglong)(lVar8 + 0x88) >> 8),1)), cVar4 != '\0'))
      {
        lVar5 = FWeakObjectPtr::Get(lVar6);
        if (lVar5 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar11 + 0xe68)) && (*(longlong *)(lVar11 + 0xe70) != 0)) {
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar6,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar11 + 0xe68) = DAT_1464b56f4;
            }
            lVar5 = FWeakObjectPtr::Get(lVar6);
            if (lVar5 != 0) goto LAB_140a8b240;
          }
LAB_140a8b276:
          lVar5 = lVar12;
        }
        else {
LAB_140a8b240:
          lVar6 = FUN_142e1f230();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_140a8b276;
        }
        plVar2 = (longlong *)*param_2;
        iVar1 = (int)param_2[1];
        for (plVar10 = plVar2; plVar10 != plVar2 + iVar1; plVar10 = plVar10 + 1) {
          if (*plVar10 == lVar5) {
            if ((int)((longlong)plVar10 - (longlong)plVar2 >> 3) != -1) goto LAB_140a8b2cc;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
      }
    }
  }
  goto LAB_140a8b2cc;
}



// FUNCTION 140a8b6b0 FUN_140a8b6b0 body=1181 status=ok
// SIG undefined FUN_140a8b6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a8b6b0(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong local_res20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [32];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  float fVar13;
  
  local_res20 = param_4;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar10 = (longlong *)0x0;
  plVar6 = &local_res20;
  if (param_4 == 0) {
    plVar6 = (longlong *)(param_1 + 0x50);
  }
  lVar9 = *plVar6;
  *param_3 = lVar9;
  param_3[1] = *(longlong *)(param_1 + 0x58);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x60);
  *(undefined8 *)((longlong)param_3 + 0x14) = *(undefined8 *)(param_1 + 100);
  *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)(param_3 + 9) = *(undefined1 *)(param_1 + 0x70);
  *(undefined1 *)((longlong)param_3 + 0x49) = *(undefined1 *)(param_1 + 0x43);
  *(undefined1 *)((longlong)param_3 + 0x4a) = *(undefined1 *)(param_1 + 0x44);
  *(undefined1 *)((longlong)param_3 + 0x4b) = *(undefined1 *)(param_1 + 0x45);
  *(undefined1 *)((longlong)param_3 + 0x4c) = *(undefined1 *)(param_1 + 0x46);
  plVar6 = &param_5;
  local_98 = 0;
  if (param_5 == 0) {
    plVar6 = (longlong *)(param_1 + 0x78);
  }
  param_3[10] = *plVar6;
  param_3[0xd] = *(longlong *)(param_1 + 0xd8);
  *(undefined4 *)((longlong)param_3 + 0x84) = *(undefined4 *)(param_1 + 0x130);
  if (*(char *)(param_1 + 0x47) != '\0') {
    *(undefined4 *)(param_3 + 0x11) = *(undefined4 *)(param_1 + 0x48);
  }
  plVar6 = plVar10;
  if (*(int *)(param_1 + 0x88) != 0) {
    plVar7 = (longlong *)FUN_14222b250(param_2,lVar9,0);
    if (plVar7 == (longlong *)0x0) {
      fVar13 = 1.0;
    }
    else {
      (**(code **)(*plVar7 + 0x420))(plVar7,local_88,lVar9,0);
      local_68 = local_68 & _DAT_146867090;
      uStack_64 = uStack_64 & uRam0000000146867094;
      uStack_60 = uStack_60 & uRam0000000146867098;
      uStack_5c = uStack_5c & uRam000000014686709c;
      auVar14._4_4_ = uStack_64;
      auVar14._0_4_ = local_68;
      auVar14._8_4_ = uStack_60;
      auVar14._12_4_ = uStack_5c;
      auVar15._4_4_ = uStack_60;
      auVar15._0_4_ = uStack_64;
      auVar15._8_4_ = local_68;
      auVar15._12_4_ = uStack_5c;
      auVar15 = maxps(auVar14,auVar15);
      auVar16._4_4_ = local_68;
      auVar16._0_4_ = uStack_60;
      auVar16._8_4_ = uStack_64;
      auVar16._12_4_ = uStack_5c;
      auVar16 = maxps(auVar15,auVar16);
      fVar13 = auVar16._0_4_;
    }
    if (0 < *(int *)(param_1 + 0x88)) {
      pfVar8 = (float *)(*(longlong *)(param_1 + 0x80) + 4);
      plVar7 = plVar10;
      plVar11 = plVar10;
      do {
        if (((uint)pfVar8[-1] & 1) == 0) {
          if (((longlong)plVar7 < 1) || (pfVar8[-0x27] <= fVar13 && fVar13 != pfVar8[-0x27]))
          goto LAB_140a8b83d;
        }
        else if (*pfVar8 <= fVar13) {
LAB_140a8b83d:
          if ((((uint)pfVar8[-1] & 2) == 0) || (fVar13 < pfVar8[1] || fVar13 == pfVar8[1])) {
            plVar6 = (longlong *)((longlong)(int)plVar11 * 0xa0 + *(longlong *)(param_1 + 0x80));
            break;
          }
        }
        plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        pfVar8 = pfVar8 + 0x28;
      } while ((longlong)plVar7 < (longlong)*(int *)(param_1 + 0x88));
    }
  }
  plVar7 = plVar6 + 2;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  if ((plVar7 == (longlong *)0x0) || (iVar1 = (int)plVar7[1], iVar1 < 1)) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if (iVar1 < 1) {
      lVar9 = 0;
    }
    else {
      iVar4 = rand();
      iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
      iVar4 = iVar1 + -1;
      if (iVar5 <= iVar1 + -1) {
        iVar4 = iVar5;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8);
    }
  }
  else {
    iVar4 = rand();
    iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
    iVar4 = iVar1 + -1;
    if (iVar5 <= iVar1 + -1) {
      iVar4 = iVar5;
    }
    lVar9 = *(longlong *)(*plVar7 + (longlong)iVar4 * 8);
  }
  param_3[4] = lVar9;
  plVar7 = plVar6 + 4;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  lVar9 = FUN_140a799e0(param_1 + 0xa8,plVar7);
  param_3[5] = lVar9;
  plVar7 = plVar6 + 6;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  if ((plVar7 == (longlong *)0x0) || (iVar1 = (int)plVar7[1], iVar1 < 1)) {
    iVar1 = *(int *)(param_1 + 0xc0);
    if (iVar1 < 1) {
      lVar9 = 0;
    }
    else {
      iVar4 = rand();
      iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
      iVar4 = iVar1 + -1;
      if (iVar5 <= iVar1 + -1) {
        iVar4 = iVar5;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar4 * 8);
    }
  }
  else {
    iVar4 = rand();
    iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
    iVar4 = iVar1 + -1;
    if (iVar5 <= iVar1 + -1) {
      iVar4 = iVar5;
    }
    lVar9 = *(longlong *)(*plVar7 + (longlong)iVar4 * 8);
  }
  param_3[7] = lVar9;
  if ((plVar6 == (longlong *)0x0) || ((int)plVar6[3] < 1)) {
    lVar9 = *(longlong *)(param_1 + 0xd0);
  }
  else {
    lVar9 = plVar6[9];
  }
  param_3[6] = lVar9;
  plVar7 = plVar6 + 10;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  if ((plVar7 == (longlong *)0x0) || (iVar1 = (int)plVar7[1], iVar1 < 1)) {
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 < 1) {
      lVar9 = 0;
    }
    else {
      iVar4 = rand();
      iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
      iVar4 = iVar1 + -1;
      if (iVar5 <= iVar1 + -1) {
        iVar4 = iVar5;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 8);
    }
  }
  else {
    iVar4 = rand();
    iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
    iVar4 = iVar1 + -1;
    if (iVar5 <= iVar1 + -1) {
      iVar4 = iVar5;
    }
    lVar9 = *(longlong *)(*plVar7 + (longlong)iVar4 * 8);
  }
  param_3[0xb] = lVar9;
  plVar7 = plVar6 + 0xc;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar10;
  }
  lVar9 = FUN_140a799e0(param_1 + 0xf0,plVar7);
  param_3[0xc] = lVar9;
  if ((plVar6 == (longlong *)0x0) || (lVar9 = plVar6[8], lVar9 == 0)) {
    lVar9 = *(longlong *)(param_1 + 200);
  }
  param_3[8] = lVar9;
  if ((plVar6 == (longlong *)0x0) || ((int)plVar6[0xb] < 1)) {
    lVar9 = *(longlong *)(param_1 + 0x100);
  }
  else {
    lVar9 = plVar6[0xe];
  }
  param_3[0xe] = lVar9;
  if (plVar6 != (longlong *)0x0) {
    plVar10 = plVar6 + 0xf;
    cVar2 = FUN_142dafa80(plVar10);
    if (cVar2 == '\0') goto LAB_140a8bad6;
  }
  plVar10 = (longlong *)(param_1 + 0x108);
LAB_140a8bad6:
  uVar12 = FUN_142d9cad0(plVar10,param_2);
  *(undefined4 *)(param_3 + 0xf) = uVar12;
  if ((plVar6 == (longlong *)0x0) || ((int)plVar6[0xb] < 1)) {
    uVar3 = *(undefined1 *)(param_1 + 0x128);
  }
  else {
    uVar3 = (undefined1)plVar6[0x13];
  }
  *(undefined1 *)((longlong)param_3 + 0x7c) = uVar3;
  if ((plVar6 == (longlong *)0x0) || ((int)plVar6[0xb] < 1)) {
    uVar12 = *(undefined4 *)(param_1 + 300);
  }
  else {
    uVar12 = *(undefined4 *)((longlong)plVar6 + 0x9c);
  }
  *(undefined4 *)(param_3 + 0x10) = uVar12;
  return;
}



// FUNCTION 140a8bb50 FUN_140a8bb50 body=33 status=ok
// SIG undefined FUN_140a8bb50(void)

float * FUN_140a8bb50(longlong param_1,float *param_2)

{
  if (0.0 <= *(float *)(param_1 + 0x1c8)) {
    *param_2 = *(float *)(param_1 + 0x1c8);
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 140a8bb80 FUN_140a8bb80 body=93 status=ok
// SIG undefined FUN_140a8bb80(void)

undefined8 FUN_140a8bb80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
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
    if (bVar2) {
      return *(undefined8 *)(lVar1 + 0x900);
    }
  }
  return 0;
}



// FUNCTION 140a8bbe0 FUN_140a8bbe0 body=136 status=ok
// SIG undefined FUN_140a8bbe0(void)

ulonglong FUN_140a8bbe0(longlong *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar4 = param_1[0x1f];
    if (lVar4 == 0) {
      in_RAX = (**(code **)(*param_1 + 0x368))();
      lVar4 = param_1[0x1f];
      if (lVar4 == 0) goto LAB_140a8bc5b;
    }
    lVar2 = FUN_1414193b0();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return (ulonglong)*(byte *)(lVar4 + 0x131);
    }
  }
LAB_140a8bc5b:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a8bc70 FUN_140a8bc70 body=382 status=ok
// SIG undefined FUN_140a8bc70(void)

longlong FUN_140a8bc70(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  short *local_28;
  ulonglong local_20;
  
  if (*(char *)(param_1 + 0x250) == '\0') {
    *(undefined1 *)(param_1 + 0x250) = 1;
    local_28 = (short *)0x0;
    local_20 = 0x39;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    psVar2 = local_28;
    FGenericPlatformString::Memcpy
              (local_28,L"/Game/Patch/Damage/DamageSource_Crush.DamageSource_Crush",0x72);
    bVar10 = (int)local_20 != 0;
    local_20 = 0;
    psVar9 = &DAT_143f3eda8;
    if (bVar10) {
      psVar9 = psVar2;
    }
    local_28 = (short *)0x0;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar9[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,psVar9,(longlong)(int)uVar7 * 2);
    }
    uVar3 = UBlueprint::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res8,L"DamageSource_Crush",1);
    lVar8 = StaticFindObjectFastExplicit(uVar3,*puVar4,&local_28,0,0);
    if (local_28 != (short *)0x0) {
      FMemory::Free();
    }
    if (lVar8 != 0) {
      lVar6 = 0;
      if (*(longlong *)(lVar8 + 0x30) != 0) {
        lVar5 = UObject::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(lVar8 + 0x30);
            (lVar6 = 0, lVar1 != 0 && (lVar6 = *(longlong *)(lVar8 + 0x30), lVar1 != lVar5));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      *(longlong *)(param_1 + 0x248) = lVar6;
    }
    if (psVar2 != (short *)0x0) {
      FMemory::Free(psVar2);
    }
    return param_1 + 0x248;
  }
  return param_1 + 0x248;
}



// FUNCTION 140a8bdf0 FUN_140a8bdf0 body=595 status=ok
// SIG undefined FUN_140a8bdf0(void)

undefined8 FUN_140a8bdf0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x378) + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar11;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) goto LAB_140a8c035;
  }
  lVar7 = *(longlong *)(param_1 + 0x370);
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
      lVar7 = *(longlong *)(param_1 + 0x370);
    }
    lVar7 = FUN_14245f910(lVar6,*(undefined8 *)(lVar7 + 0x3e0),&DAT_1468b5b70,0,0,0);
    *(longlong *)(param_1 + 0x378) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
    *(byte *)(lVar7 + 0x24c) = *(byte *)(lVar7 + 0x24c) & 0xfb;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x378) + 0x24c);
    *pbVar1 = *pbVar1 & 0xf7;
    *(undefined4 *)(*(longlong *)(param_1 + 0x378) + 0x794) = 0;
    if ((*(longlong *)(param_1 + 0x370) != 0) &&
       (puVar8 = (undefined8 *)FUN_142d1b060(), puVar8 != (undefined8 *)0x0)) {
      uVar3 = *puVar8;
      puVar9 = (undefined8 *)FName::FName(local_res8,L"Critical",1);
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x9a0))
                         (*(longlong **)(param_1 + 0x378),*puVar9,0);
      puVar9 = (undefined8 *)FName::FName(local_res10,L"Texture",1);
      FUN_1425a28b0(uVar10,*puVar9,uVar3);
      uVar3 = puVar8[1];
      puVar9 = (undefined8 *)FName::FName(local_res8,L"Resist",1);
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x9a0))
                         (*(longlong **)(param_1 + 0x378),*puVar9,0);
      puVar9 = (undefined8 *)FName::FName(local_res10,L"Texture",1);
      FUN_1425a28b0(uVar10,*puVar9,uVar3);
      uVar3 = puVar8[2];
      puVar8 = (undefined8 *)FName::FName(local_res8,L"Immune",1);
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x9a0))
                         (*(longlong **)(param_1 + 0x378),*puVar8,0);
      puVar8 = (undefined8 *)FName::FName(local_res10,L"Texture",1);
      FUN_1425a28b0(uVar10,*puVar8,uVar3);
    }
    lVar7 = FUN_140a8ceb0(param_1);
    if (lVar7 != 0) {
      uVar5 = FUN_140d000a0(lVar7);
      FUN_142398e60(*(undefined8 *)(param_1 + 0x378),uVar5,0);
    }
  }
LAB_140a8c035:
  return *(undefined8 *)(param_1 + 0x378);
}



// FUNCTION 140a8c050 FUN_140a8c050 body=316 status=ok
// SIG undefined FUN_140a8c050(void)

float FUN_140a8c050(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = (float)FUN_142d39c00();
  if (*(longlong *)(param_2 + 0x2b0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
  }
  lVar9 = *(longlong *)(param_1 + 0x2a0);
  lVar2 = *(longlong *)(param_2 + 0x58);
  lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x2a8) * 0x48;
  do {
    if (lVar9 == lVar1) {
      return fVar10;
    }
    cVar3 = FUN_142c48f90(*(undefined8 *)(lVar9 + 0x38),uVar7,0);
    if (cVar3 != '\0') {
      if (*(longlong *)(lVar9 + 0x40) == 0) {
LAB_140a8c0fe:
        fVar11 = (float)FUN_142c98860(lVar9,uVar7);
        return fVar10 * fVar11;
      }
      lVar4 = FUN_142e49950();
      lVar8 = *(longlong *)(lVar9 + 0x40);
      while( true ) {
        if (lVar8 == 0) goto LAB_140a8c0fe;
        if (lVar8 == lVar4) break;
        lVar8 = *(longlong *)(lVar8 + 0x30);
      }
      if (*(longlong *)(lVar9 + 0x40) != 0) {
        lVar5 = FUN_142e49950();
        lVar8 = *(longlong *)(lVar9 + 0x40);
        for (lVar4 = lVar8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar5) goto LAB_140a8c156;
        }
      }
      lVar8 = 0;
LAB_140a8c156:
      if (lVar2 != 0) {
        lVar5 = FUN_142e49950();
        lVar4 = lVar2;
        do {
          lVar6 = lVar2;
          if (lVar4 == lVar5) goto LAB_140a8c173;
          lVar4 = *(longlong *)(lVar4 + 0x30);
        } while (lVar4 != 0);
      }
      lVar6 = 0;
LAB_140a8c173:
      if (lVar8 == lVar6) goto LAB_140a8c0fe;
    }
    lVar9 = lVar9 + 0x48;
  } while( true );
}



// FUNCTION 140a8c190 FUN_140a8c190 body=335 status=ok
// SIG undefined FUN_140a8c190(void)

longlong * FUN_140a8c190(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong local_38 [4];
  
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Normal",0xe);
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 != '\0') {
    uVar2 = UEnum::GetPrivateStaticClass();
    lVar3 = FUN_141799410(uVar2,0xffffffffffffffff,L"EOakElementalType",1);
    bVar5 = lVar3 == 0;
    if (bVar5) {
      local_38[0] = 0;
      local_38[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      lVar3 = local_38[0];
      FGenericPlatformString::Memcpy(local_38[0],L"Error",0xc);
      plVar4 = local_38;
    }
    else {
      plVar4 = (longlong *)
               FUN_1417392b0(lVar3,local_38 + 2,*(undefined1 *)((longlong)param_1 + 0x131));
      lVar3 = local_38[0];
    }
    if (param_2 != plVar4) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_2 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
      lVar3 = local_38[0];
    }
    if ((bVar5) && (lVar3 != 0)) {
      FMemory::Free(lVar3);
    }
    if ((!bVar5) && (local_38[2] != 0)) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140a8c2f0 FUN_140a8c2f0 body=995 status=ok
// SIG undefined FUN_140a8c2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a8c2f0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined8 *local_1b0;
  undefined1 *local_1a8;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  undefined4 local_180;
  float local_178;
  float local_174;
  float local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined8 local_134;
  float local_12c;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if ((char)param_1[199] == '\0') {
    lVar6 = param_1[0x2d];
    if (lVar6 == 0) {
      local_190 = (float)DAT_1468b5d98;
      puVar7 = &local_198;
      local_198 = _DAT_1468b5d90;
    }
    else {
      puVar7 = &local_188;
      local_180 = *(undefined4 *)(lVar6 + 0x228);
      local_188 = *(undefined8 *)(lVar6 + 0x220);
    }
    auVar2._8_4_ = *(float *)(puVar7 + 1) + *(float *)(param_1 + 0xe2);
    auVar2._0_8_ = *puVar7;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar2;
    lVar6 = param_1[0x2d];
    if (lVar6 == 0) {
      uVar13 = 0x3f800000;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(lVar6 + 0x210);
      uVar11 = *(undefined4 *)(lVar6 + 0x214);
      uVar12 = *(undefined4 *)(lVar6 + 0x218);
      uVar13 = *(undefined4 *)(lVar6 + 0x21c);
    }
    uVar5 = 1;
    *param_2 = uVar10;
    param_2[1] = uVar11;
    param_2[2] = uVar12;
    param_2[3] = uVar13;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if (lVar6 != 0) {
      lVar1 = param_1[0x2d];
      if (lVar1 == 0) {
        local_190 = (float)DAT_1468b5d98;
        puVar7 = &local_198;
        local_198 = _DAT_1468b5d90;
      }
      else {
        puVar7 = &local_188;
        local_180 = *(undefined4 *)(lVar1 + 0x228);
        local_188 = *(undefined8 *)(lVar1 + 0x220);
      }
      local_198 = *puVar7;
      local_190 = *(float *)(puVar7 + 1);
      local_178 = (float)local_198 + *(float *)((longlong)param_1 + 0x704);
      local_174 = (float)((ulonglong)local_198 >> 0x20) + *(float *)(param_1 + 0xe1);
      local_170 = local_190 + *(float *)((longlong)param_1 + 0x70c);
      local_b0 = 0;
      local_70 = 0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_a8 = 0x10000;
      local_a0 = 0;
      local_188 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_94 = 0x101;
      local_9c = 0;
      local_a2 = 0;
      local_98 = 0;
      FUN_1426d3dd0(local_168);
      FUN_1426ea8d0(local_168);
      puVar8 = (undefined1 *)param_1[0xde];
      if (*(char *)((longlong)param_1 + 0x6ed) != '\0') {
        local_a0 = 1;
      }
      puVar9 = puVar8 + (int)param_1[0xdf];
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        FCollisionResponseContainer::SetResponse(local_168,*puVar8,0);
      }
      _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
      local_1a8 = local_168;
      local_1b0 = &local_b8;
      local_13c = 0x3f800000;
      local_1b8 = (uint)*(byte *)((longlong)param_1 + 0x6ec);
      cVar4 = UWorld::LineTraceSingleByChannel(lVar6,local_148,&local_198,&local_178);
      if (cVar4 != '\0') {
        uVar10 = 0;
        auVar3._8_4_ = local_12c + *(float *)(param_1 + 0xe2);
        auVar3._0_8_ = local_134;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 4) = auVar3;
        lVar6 = param_1[0x2d];
        if (lVar6 == 0) {
          uVar13 = 0x3f800000;
          uVar11 = 0;
          uVar12 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar6 + 0x210);
          uVar10 = *(undefined4 *)(lVar6 + 0x214);
          uVar12 = *(undefined4 *)(lVar6 + 0x218);
          uVar13 = *(undefined4 *)(lVar6 + 0x21c);
        }
        *param_2 = uVar11;
        param_2[1] = uVar10;
        param_2[2] = uVar12;
        param_2[3] = uVar13;
        if (local_50 != 0) {
          FMemory::Free();
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        return 1;
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 140a8c6e0 FUN_140a8c6e0 body=89 status=ok
// SIG undefined FUN_140a8c6e0(void)

ulonglong FUN_140a8c6e0(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_1414193b0();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return (ulonglong)*(byte *)(param_1 + 0x131);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a8c770 FUN_140a8c770 body=441 status=ok
// SIG undefined FUN_140a8c770(void)

void FUN_140a8c770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146867420) && (_Init_thread_header(&DAT_146867420), DAT_146867420 == -1)) {
    uVar1 = FUN_1413b9340();
    FUN_1413b9340();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachedToSlot",1);
    DAT_146867418 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867420);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867418 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867418 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867418 + 0x30));
  }
  if ((*piVar5 < DAT_146867430) && (_Init_thread_header(&DAT_146867430), DAT_146867430 == -1)) {
    uVar1 = FUN_1413b9340();
    FUN_1413b9340();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachedToData",1);
    DAT_146867428 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867430);
  }
  if (0 < *(int *)(DAT_146867428 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867428 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146867428 + 0x30));
  }
  FUN_140b2b5b0(param_1,param_2);
  return;
}



// FUNCTION 140a8c930 FUN_140a8c930 body=236 status=ok
// SIG undefined FUN_140a8c930(void)

void FUN_140a8c930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142d3bf90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146867450) && (_Init_thread_header(&DAT_146867450), DAT_146867450 == -1))
  {
    uVar1 = AGTutorialStepVideo::GetPrivateStaticClass();
    AGTutorialStepVideo::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ServerRecentIncomingDamageData",1);
    DAT_146867448 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867450);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146867448 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867448 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867448 + 0x30));
  }
  return;
}



// FUNCTION 140a8ca20 FUN_140a8ca20 body=236 status=ok
// SIG undefined FUN_140a8ca20(void)

void FUN_140a8ca20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146867470) && (_Init_thread_header(&DAT_146867470), DAT_146867470 == -1))
  {
    uVar1 = FUN_1414b0910();
    FUN_1414b0910();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedMeleeData",1);
    DAT_146867468 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867470);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146867468 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867468 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867468 + 0x30));
  }
  return;
}



// FUNCTION 140a8cb10 FUN_140a8cb10 body=756 status=ok
// SIG undefined FUN_140a8cb10(void)

float FUN_140a8cb10(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  
  fVar13 = 1.0;
  if (param_3 == 0) {
    return 1.0;
  }
  plVar12 = (longlong *)0x0;
  plVar11 = plVar12;
  if (param_2 != (longlong *)0x0) {
    plVar11 = (longlong *)param_2[0x1f];
    if (plVar11 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      plVar11 = (longlong *)param_2[0x1f];
      if (plVar11 == (longlong *)0x0) goto LAB_140a8cb9f;
    }
    if (((plVar11[0x1e] != 0) || (plVar11[0x1f] != 0)) &&
       (cVar1 = UKismetSystemLibrary::NotEqual_PrimaryAssetId(plVar11 + 0x1e,param_3 + 0x50),
       cVar1 != '\0')) {
      return 0.0;
    }
  }
LAB_140a8cb9f:
  lVar10 = *(longlong *)(param_3 + 0x50);
  if (lVar10 == 0) {
    return 1.0;
  }
  lVar6 = *(longlong *)(param_3 + 0x58);
  if (*(longlong *)(lVar10 + 0x28) == 0) {
    return 1.0;
  }
  lVar4 = FMovieSceneEventRepeaterTemplate::StaticStruct();
  lVar5 = *(longlong *)(lVar10 + 0x28);
  while( true ) {
    if (lVar5 == 0) {
      return 1.0;
    }
    if (lVar5 == lVar4) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if (lVar6 == 0) {
    return 1.0;
  }
  if (*(int *)(lVar10 + 0x38) != *(int *)(lVar10 + 100)) {
    lVar5 = *(longlong *)(lVar10 + 0x70);
    if (*(longlong *)(lVar10 + 0x70) == 0) {
      lVar5 = lVar10 + 0x68;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                             (longlong)*(int *)(lVar10 + 0x78) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar9 = (longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 0x18) == lVar6) {
          if (iVar3 != -1) goto LAB_140a8cc63;
          break;
        }
        iVar3 = (int)plVar9[2];
      } while (iVar3 != -1);
    }
  }
  plVar9 = plVar12;
LAB_140a8cc63:
  plVar8 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  if (plVar8 == (longlong *)0x0) {
    return 1.0;
  }
  lVar10 = *plVar8;
  if (lVar10 == 0) {
    return 1.0;
  }
  lVar6 = FUN_140a8ce20(param_1);
  if (((lVar6 != 0) && (iVar3 = FUN_140cb6910(lVar6), 1 < iVar3)) &&
     ((lVar6 = *(longlong *)(lVar10 + 0x20), lVar6 != 0 &&
      (lVar5 = *(longlong *)(lVar10 + 0x28), *(longlong *)(lVar6 + 0x28) != 0)))) {
    lVar7 = FMovieSceneEventRepeaterTemplate::StaticStruct();
    for (lVar4 = *(longlong *)(lVar6 + 0x28); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar7) {
        if (lVar5 != 0) {
          if (*(int *)(lVar6 + 0x38) == *(int *)(lVar6 + 100)) goto LAB_140a8cd71;
          lVar4 = *(longlong *)(lVar6 + 0x70);
          if (*(longlong *)(lVar6 + 0x70) == 0) {
            lVar4 = lVar6 + 0x68;
          }
          iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                                   (longlong)*(int *)(lVar6 + 0x78) - 1U) * 4);
          if (iVar3 == -1) goto LAB_140a8cd71;
          goto LAB_140a8cd51;
        }
        break;
      }
    }
  }
LAB_140a8cd8e:
  uVar2 = FUN_140a8c6e0(plVar11);
  switch(uVar2) {
  case 0:
    fVar13 = *(float *)(lVar10 + 8);
    break;
  case 1:
    fVar13 = *(float *)(lVar10 + 0xc);
    break;
  case 2:
    fVar13 = *(float *)(lVar10 + 0x10);
    break;
  case 3:
    fVar13 = *(float *)(lVar10 + 0x14);
    break;
  case 4:
    fVar13 = *(float *)(lVar10 + 0x18);
    break;
  case 5:
    fVar13 = *(float *)(lVar10 + 0x1c);
  }
  if ((*(char *)(param_1 + 0x345) != '\0') && (fVar13 <= 1.0)) {
    fVar13 = 1.0;
  }
  return fVar13;
  while (iVar3 = (int)plVar9[2], iVar3 != -1) {
LAB_140a8cd51:
    plVar9 = (longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 0x18);
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 0x18) == lVar5) {
      if (iVar3 != -1) goto LAB_140a8cd74;
      break;
    }
  }
LAB_140a8cd71:
  plVar9 = plVar12;
LAB_140a8cd74:
  plVar8 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar8 = plVar12;
  }
  if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
    lVar10 = *plVar8;
  }
  goto LAB_140a8cd8e;
}



// FUNCTION 140a8ce20 FUN_140a8ce20 body=141 status=ok
// SIG undefined FUN_140a8ce20(void)

longlong FUN_140a8ce20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x120);
  if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x148);
  if (lVar2 != 0) {
    lVar3 = FUN_141424d10();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140a8ceb0 FUN_140a8ceb0 body=89 status=ok
// SIG undefined FUN_140a8ceb0(void)

longlong FUN_140a8ceb0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140a8cf10 FUN_140a8cf10 body=1157 status=ok
// SIG undefined FUN_140a8cf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140a8cf10(longlong param_1,undefined1 *param_2,longlong *param_3,char param_4)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_5e8 [32];
  undefined4 *local_5c8;
  undefined1 *local_5c0;
  undefined4 *local_5b8;
  undefined1 *local_5b0;
  undefined *local_5a8;
  undefined1 local_598;
  char local_597;
  longlong *local_590;
  undefined8 local_588;
  float local_580;
  longlong local_578;
  undefined1 *local_570;
  longlong *local_568;
  undefined8 local_560;
  undefined4 local_558;
  float local_550;
  float local_54c;
  float local_548;
  undefined8 local_540;
  longlong local_538;
  undefined4 local_530;
  float local_52c;
  undefined1 local_520 [24];
  undefined1 local_508 [12];
  undefined4 local_4fc;
  undefined1 local_49c [36];
  undefined1 local_478 [72];
  longlong local_430;
  longlong local_410;
  undefined1 local_3f8 [912];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  lVar14 = 0;
  lVar11 = *(longlong *)(param_1 + 0x118);
  lVar10 = 0;
  local_597 = param_4;
  local_570 = param_2;
  local_568 = param_3;
  if (lVar11 != 0) {
    local_578 = lVar11;
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar8 = (longlong *)FUN_140c46a10(lVar11,0);
      if (plVar8 != (longlong *)0x0) {
        uVar9 = APlayArea::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar9);
        if ((lVar7 != 0) &&
           (lVar7 = UAttackComponent::GetCancelReorientationCurve(lVar7), lVar7 != 0)) {
          lVar14 = lVar7;
        }
      }
      lVar7 = FUN_142ddddc0(lVar11);
      if (lVar7 != 0) {
        FUN_142dc1ad0(local_3f8);
        FUN_142dcd6e0(lVar7,local_3f8,0);
        lVar10 = FUN_142dd0030(local_3f8);
      }
      goto LAB_140a8d02e;
    }
  }
  lVar11 = 0;
  local_578 = 0;
LAB_140a8d02e:
  plVar8 = *(longlong **)(param_1 + 0x228);
  plVar13 = plVar8 + *(int *)(param_1 + 0x230);
  local_590 = plVar13;
  if (plVar8 != plVar13) {
    do {
      lVar7 = *plVar8;
      if ((lVar7 != 0) &&
         ((*(longlong *)(lVar7 + 0x18) != DAT_146867410 || (plVar13 = local_590, local_597 != '\0'))
         )) {
        if ((lVar10 == 0) && (*(char *)(lVar7 + 0x3d) != '\0')) {
          if ((lVar11 == 0) ||
             (plVar13 = *(longlong **)(lVar11 + 0x490), plVar13 == (longlong *)0x0)) {
LAB_140a8d0f1:
            plVar13 = (longlong *)0x0;
          }
          else {
            lVar11 = FUN_14145f370();
            if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                lVar11 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140a8d0f1;
          }
          if (plVar13 != (longlong *)0x0) {
            local_588 = 0;
            local_580 = 0.0;
            local_560 = 0;
            local_558 = 0;
            (**(code **)(*plVar13 + 0x830))(plVar13,&local_588,&local_560);
            _guard_xfg_dispatch_icall_nop(local_508,0,0x90);
            local_4fc = 0x3f800000;
            local_540 = 0;
            local_5c8 = (undefined4 *)local_578;
            FUN_1422ffb20(local_478,0,&local_598,0);
            fVar1 = *(float *)(lVar7 + 0x40);
            pfVar12 = (float *)FRotator::Vector(&local_560,local_520);
            bVar2 = *(byte *)(lVar7 + 0x138);
            lVar11 = *(longlong *)(param_1 + 0x120);
            local_550 = fVar1 * *pfVar12 + (float)local_588;
            local_54c = fVar1 * pfVar12[1] + local_588._4_4_;
            local_548 = fVar1 * pfVar12[2] + local_580;
            fVar1 = *(float *)(lVar7 + 0x13c);
            if (fVar1 <= 0.0) {
              if (lVar11 == 0) {
                lVar11 = FUN_1423407b0(param_1);
              }
              local_5b8 = (undefined4 *)&DAT_146aefe68;
              local_5c0 = local_478;
              local_5c8 = (undefined4 *)CONCAT44(local_5c8._4_4_,(uint)bVar2);
              UWorld::LineTraceSingleByChannel(lVar11,local_508,&local_588);
            }
            else {
              local_530 = 2;
              local_52c = fVar1;
              if (lVar11 == 0) {
                lVar11 = FUN_1423407b0(param_1);
              }
              local_5a8 = &DAT_146aefe68;
              local_5b0 = local_478;
              local_5b8 = &local_530;
              local_5c0 = (undefined1 *)CONCAT44(local_5c0._4_4_,(uint)bVar2);
              local_5c8 = &DAT_1464aa810;
              UWorld::SweepSingleByChannel(lVar11,local_508,&local_588);
            }
            lVar10 = FWeakObjectPtr::Get(local_49c);
            if (local_410 != 0) {
              FMemory::Free();
            }
            if (local_430 != 0) {
              FMemory::Free();
            }
          }
        }
        cVar4 = FUN_142c48f90(*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(param_1 + 0x118),lVar10)
        ;
        plVar13 = local_590;
        if (cVar4 != '\0') {
          if (lVar14 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(lVar14 + 0x38);
          }
          if (iVar6 < *(int *)(lVar7 + 0x38)) {
            local_538 = lVar10;
            if (*(char *)(lVar7 + 0x3c) == '\0') {
              *local_570 = 0;
              *local_568 = 0;
              lVar14 = lVar7;
            }
            else {
              cVar4 = FUN_140a988c0(param_1,lVar7,&local_538);
              plVar13 = local_590;
              if (cVar4 != '\0') {
                *local_570 = 1;
                *local_568 = local_538;
                lVar14 = lVar7;
              }
            }
          }
        }
      }
      plVar8 = plVar8 + 1;
      lVar11 = local_578;
      param_2 = local_570;
    } while (plVar8 != plVar13);
  }
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x3c) == '\0')) {
    uVar5 = FUN_140a988c0(param_1,lVar14,local_568);
    *param_2 = uVar5;
  }
  return lVar14;
}



// FUNCTION 140a8d3a0 FUN_140a8d3a0 body=205 status=ok
// SIG undefined FUN_140a8d3a0(void)

longlong FUN_140a8d3a0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 8);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40 = (undefined4)plVar2[1];
  local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar3 != 0) {
    lVar4 = UAESHelper::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a8d450;
  }
  lVar3 = 0;
LAB_140a8d450:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140a8d4b0 FUN_140a8d4b0 body=1711 status=ok
// SIG undefined FUN_140a8d4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a8d4b0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float *pfVar13;
  int iVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  longlong *local_168;
  int local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined4 local_140;
  float local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  float local_110;
  float local_108 [2];
  float local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [132];
  
  lVar9 = *(longlong *)(param_1 + 0x118);
  plVar15 = (longlong *)0x0;
  if (lVar9 == 0) {
LAB_140a8db50:
    *param_2 = 0;
    return param_2;
  }
  local_158 = lVar9;
  lVar6 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (param_3 == (longlong *)0x0)) goto LAB_140a8db50;
  plVar7 = (longlong *)FUN_140a8db60(param_1,param_3);
  local_150 = plVar7;
  uVar8 = FUN_142e79d90();
  lVar6 = (**(code **)(*param_3 + 0x628))(param_3,uVar8);
  if (lVar6 == 0) goto LAB_140a8db50;
  plVar10 = *(longlong **)(lVar9 + 0x490);
  fVar22 = 0.0;
  if (plVar10 != (longlong *)0x0) {
    local_1b8 = plVar10;
    lVar9 = FUN_14145f370();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a8d5d9;
  }
  local_1b8 = (longlong *)0x0;
  plVar10 = plVar15;
LAB_140a8d5d9:
  local_1d8 = 0;
  local_1d0 = 0.0;
  local_1c8 = 0;
  local_1c0 = 0;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x830))(plVar10,&local_1d8,&local_1c8);
  }
  FRotator::Vector(&local_1c8,&local_178);
  plVar10 = (longlong *)FUN_142dcf4f0(lVar6);
  uVar8 = 0;
  if (0 < (int)plVar10[1]) {
    local_1b0 = 0;
    do {
      lVar9 = local_1b0;
      bVar2 = false;
      iVar14 = (int)plVar15;
      if (plVar7 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar7 + 0x440))
                          (plVar7,*(undefined8 *)(*plVar10 + (longlong)iVar14 * 8));
        if (cVar4 != '\0') {
          puVar11 = (undefined8 *)
                    (**(code **)(*plVar7 + 0x428))
                              (plVar7,local_e8,*(undefined8 *)(*plVar10 + (longlong)iVar14 * 8));
          bVar2 = true;
          local_1e8 = *puVar11;
          local_1e0 = *(float *)(puVar11 + 1);
        }
      }
      uVar12 = USoundSourceBus::GetPrivateStaticClass();
      AActor::GetComponentsByClass(param_3,&local_168,uVar12);
      plVar15 = local_168 + local_160;
      uVar12 = local_1e8;
      for (plVar7 = local_168; local_1e8 = uVar12, plVar7 != plVar15; plVar7 = plVar7 + 1) {
        plVar1 = (longlong *)*plVar7;
        if (plVar1 != (longlong *)0x0) {
          lVar9 = USoundSourceBus::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            cVar4 = (**(code **)(*plVar1 + 0x440))
                              (plVar1,*(undefined8 *)(*plVar10 + (longlong)iVar14 * 8));
            if (cVar4 != '\0') {
              puVar11 = (undefined8 *)
                        (**(code **)(*plVar1 + 0x428))
                                  (plVar1,local_dc,*(undefined8 *)(*plVar10 + (longlong)iVar14 * 8))
              ;
              bVar2 = true;
              local_1e8 = *puVar11;
              local_1e0 = *(float *)(puVar11 + 1);
            }
          }
        }
        uVar12 = local_1e8;
        lVar9 = local_1b0;
      }
      if (bVar2) {
        lVar6 = *(longlong *)(local_158 + 0x168);
        if (lVar6 == 0) {
          local_140 = DAT_1468b5d98;
          puVar11 = &local_148;
          local_148 = _DAT_1468b5d90;
        }
        else {
          puVar11 = (undefined8 *)&local_1a8;
          local_1a8 = *(undefined4 *)(lVar6 + 0x220);
          local_1a0 = *(undefined4 *)(lVar6 + 0x228);
          uStack_1a4 = *(undefined4 *)(lVar6 + 0x224);
        }
        local_134 = *(float *)(puVar11 + 1);
        local_1e8._0_4_ = (float)uVar12;
        local_1e8._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
        local_198 = (float)local_1e8 - (float)*puVar11;
        local_194 = local_1e8._4_4_ - (float)((ulonglong)*puVar11 >> 0x20);
        local_190 = local_1e0 - local_134;
        if (SQRT(local_194 * local_194 + local_198 * local_198 + local_190 * local_190) <
            *(float *)(*(longlong *)(param_1 + 0x2c8) + 0x40)) {
          if (lVar6 == 0) {
            local_11c = DAT_1468b5da8;
            puVar11 = &local_124;
            local_124 = DAT_1468b5da0;
          }
          else {
            local_f8 = *(float *)(lVar6 + 0x210);
            fStack_f4 = *(float *)(lVar6 + 0x214);
            fStack_f0 = *(float *)(lVar6 + 0x218);
            fStack_ec = *(float *)(lVar6 + 0x21c);
            auVar18._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_f4);
            auVar18._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_f8);
            auVar18._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_f0);
            auVar18._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_ec);
            iVar5 = movmskps((int)*(longlong *)(param_1 + 0x2c8),auVar18);
            if (iVar5 != 0) {
              *(float *)(lVar6 + 0x250) = local_f8;
              *(float *)(lVar6 + 0x254) = fStack_f4;
              *(float *)(lVar6 + 600) = fStack_f0;
              *(float *)(lVar6 + 0x25c) = fStack_ec;
              puVar11 = (undefined8 *)FQuat::Rotator(&local_f8,local_d0);
              *(undefined8 *)(lVar6 + 0x260) = *puVar11;
              *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar11 + 1);
            }
            local_128 = *(undefined4 *)(lVar6 + 0x268);
            puVar11 = &local_130;
            local_130 = *(undefined8 *)(lVar6 + 0x260);
          }
          uVar12 = *puVar11;
          local_110 = *(float *)(puVar11 + 1);
          pfVar13 = (float *)FVector::Rotation(&local_198,local_c4);
          local_184 = pfVar13[1] - (float)((ulonglong)uVar12 >> 0x20);
          local_180 = pfVar13[2] - local_110;
          local_188 = *pfVar13 - (float)uVar12;
          FRotator::Euler(&local_188,local_108);
          lVar6 = *(longlong *)(param_1 + 0x2c8);
          if (((ABS(local_108[0]) < *(float *)(lVar6 + 0x48)) &&
              (-*(float *)(lVar6 + 0x50) < local_100)) && (local_100 < *(float *)(lVar6 + 0x4c))) {
            if (local_1b8 == (longlong *)0x0) {
              *param_2 = *(undefined8 *)(*plVar10 + (longlong)iVar14 * 8);
              if (local_168 == (longlong *)0x0) {
                return param_2;
              }
              FMemory::Free();
              return param_2;
            }
            fVar19 = (float)local_1e8 - (float)local_1d8;
            fVar20 = local_1e8._4_4_ - local_1d8._4_4_;
            fVar21 = local_1e0 - local_1d0;
            fVar16 = fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21;
            auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar17 = auVar18._0_4_;
            fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
            fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
            fVar16 = local_174 * fVar17 * fVar20 + local_178 * fVar17 * fVar19 +
                     local_170 * fVar17 * fVar21;
            if (fVar22 < fVar16) {
              uVar8 = *(undefined8 *)(lVar9 + *plVar10);
              fVar22 = fVar16;
            }
          }
        }
      }
      if (local_168 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_1b0 = lVar9 + 8;
      plVar15 = (longlong *)(ulonglong)(iVar14 + 1U);
      plVar7 = local_150;
    } while ((int)(iVar14 + 1U) < (int)plVar10[1]);
  }
  *param_2 = uVar8;
  return param_2;
}



// FUNCTION 140a8db60 FUN_140a8db60 body=254 status=ok
// SIG undefined FUN_140a8db60(void)

longlong FUN_140a8db60(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = FUN_1413f82e0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return param_2[0x98];
  }
  lVar2 = FUN_14148cad0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return param_2[0x9a];
  }
  lVar2 = UMovieScene2DTransformSection::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (param_2[0xa3] != 0)) {
    return param_2[0xa3];
  }
  uVar3 = FUN_142a07000();
                    /* WARNING: Could not recover jumptable at 0x000140a8dc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
  return lVar2;
}



// FUNCTION 140a8dc60 FUN_140a8dc60 body=44 status=ok
// SIG undefined FUN_140a8dc60(void)

float FUN_140a8dc60(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x550);
  fVar2 = *(float *)(param_1 + 0x55c);
  fVar3 = (float)FUN_142d1c6e0();
  return fVar3 + (fVar1 - fVar2);
}



// FUNCTION 140a8dc90 FUN_140a8dc90 body=157 status=ok
// SIG undefined FUN_140a8dc90(void)

longlong FUN_140a8dc90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      return *(longlong *)(lVar1 + 0x670);
    }
    lVar3 = FUN_1430b3b80();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140a8dd40 FUN_140a8dd40 body=73 status=ok
// SIG undefined FUN_140a8dd40(void)

void FUN_140a8dd40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    FUN_140a83930();
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a8dd7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140a8dd90 FUN_140a8dd90 body=553 status=ok
// SIG undefined FUN_140a8dd90(void)

void FUN_140a8dd90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((param_2 != 0) && (lVar6 = *(longlong *)(param_2 + 0x40), lVar6 != 0)) {
    lVar4 = UEnvQueryTest_Cover::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(float *)((longlong)param_1 + 0x794) =
           *(float *)(lVar6 + 0x1e4) * *(float *)((longlong)param_1 + 0x794);
      *(float *)(param_1 + 0xf3) = *(float *)(lVar6 + 0x1f0) * *(float *)(param_1 + 0xf3);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x974) = 0;
  if (*(char *)((longlong)param_1 + 0x975) != '\0') {
    return;
  }
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x58), plVar1 != (longlong *)0x0)) {
    lVar6 = plVar1[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar6 = plVar1[0x1f];
      if (lVar6 == 0) goto LAB_140a8de9f;
    }
    lVar4 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140a8dea1;
  }
LAB_140a8de9f:
  lVar6 = 0;
LAB_140a8dea1:
  plVar1 = (longlong *)param_1[0x23];
  uVar5 = FUN_141477fa0();
  lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
  if (lVar4 == 0) {
    if (lVar6 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x974) = *(undefined1 *)(lVar6 + 0x131);
    }
  }
  else {
    if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x100) != 0)) &&
       (*(longlong *)(param_2 + 0x38) != 0)) {
      local_40 = 0xffffffff;
      uStack_38 = 0xffffffff;
      local_48 = 0;
      local_30 = 1;
      local_2c = 0;
      local_28 = 0;
      local_18 = 0;
      local_20 = *(longlong *)(param_2 + 0x38);
      FWeakObjectPtr::operator=(&local_40);
      local_48 = *(undefined8 *)(lVar6 + 0x100);
      local_28 = *(undefined8 *)(param_2 + 0x48);
      local_30 = 0;
      cVar3 = (**(code **)(*param_1 + 0x440))(param_1,&local_48,param_2);
      if (cVar3 != '\0') {
        FUN_140e9f7a0(lVar4,&local_48);
      }
    }
    cVar3 = FUN_140eabb10(lVar4,lVar6);
    *(char *)((longlong)param_1 + 0x974) = cVar3;
    if (cVar3 == '\x02') {
      FUN_140ea7890(lVar4);
    }
  }
  return;
}



// FUNCTION 140a8dfc0 FUN_140a8dfc0 body=440 status=ok
// SIG undefined FUN_140a8dfc0(void)

void FUN_140a8dfc0(longlong param_1)

{
  uint *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar5 = (**(code **)(*plVar3 + 0x778))(plVar3);
      if (((cVar5 != '\0') && (*(longlong *)(param_1 + 0x270) == 0)) &&
         (plVar3 = *(longlong **)(param_1 + 0x118), plVar3 != (longlong *)0x0)) {
        lVar6 = FUN_1413f82e0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          cVar5 = (**(code **)(*plVar3 + 0x778))(plVar3);
          if (cVar5 != '\0') {
            lVar6 = FUN_142cc1670(plVar3);
            if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x180) != 0)) &&
               (*(longlong *)(param_1 + 0x270) == 0)) {
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
                          ) < DAT_1468674b0) {
                _Init_thread_header(&DAT_1468674b0);
                if (DAT_1468674b0 == -1) {
                  FName::FName(&DAT_1468674a8,L"FirstPersonMeleeWeaponMesh",1);
                  _Init_thread_footer(&DAT_1468674b0);
                }
              }
              FUN_140a88730(*(undefined8 *)(lVar6 + 0x180),param_1 + 0x238,&DAT_1468674a8,1,1);
              if (*(longlong *)(param_1 + 0x270) != 0) {
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x270) + 0x398);
                *puVar1 = *puVar1 | 1;
                pbVar2 = (byte *)(*(longlong *)(param_1 + 0x270) + 0x2f1);
                *pbVar2 = *pbVar2 & 0xef;
              }
              FUN_140a95820(param_1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a8e180 FUN_140a8e180 body=881 status=ok
// SIG undefined FUN_140a8e180(void)

void FUN_140a8e180(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  
  lVar8 = *(longlong *)(param_3 + 0x178);
  if (lVar8 == 0) {
LAB_140a8e20a:
    lVar8 = 0;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140a8e20a;
    lVar4 = FUN_140cff230(lVar8);
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x3c) != '\0')) && (*(longlong *)(param_2 + 0x38) != 0))
    {
      FUN_140a977b0(param_1,param_2,param_3);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar5 = FUN_142e0d0b0();
    lVar4 = *(longlong *)(param_2 + 8);
    for (lVar7 = lVar4; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if (lVar4 != 0) {
          if (lVar4 == 0) goto LAB_140a8e273;
          plVar6 = (longlong *)FUN_142e0d0b0();
          plVar10 = *(longlong **)(param_2 + 8);
          plVar1 = plVar10;
          goto joined_r0x000140a8e263;
        }
        break;
      }
    }
  }
  goto LAB_140a8e2cf;
joined_r0x000140a8e263:
  if (plVar1 == (longlong *)0x0) goto LAB_140a8e273;
  if (plVar1 == plVar6) goto LAB_140a8e275;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000140a8e263;
LAB_140a8e273:
  plVar10 = (longlong *)0x0;
LAB_140a8e275:
  lVar4 = plVar10[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar4 = plVar10[0x1f];
    if (lVar4 == 0) goto LAB_140a8e2cf;
  }
  lVar7 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) goto LAB_140a8e2d1;
LAB_140a8e2cf:
  lVar4 = 0;
LAB_140a8e2d1:
  if (((lVar8 != 0) && (lVar7 = FUN_140cff230(lVar8), lVar7 != 0)) &&
     ((*(longlong *)(param_2 + 0x38) != 0 &&
      ((0.0001 < *(float *)(param_2 + 0x1c) && (cVar3 = FUN_142d33cc0(param_2,2), cVar3 == '\0')))))
     ) {
    if ((*(char *)(lVar7 + 0x3c) != '\0') &&
       (((lVar4 != 0 && ((*(byte *)(lVar4 + 0x88) & 2) != 0)) &&
        (lVar8 = FUN_14059b7e0(*(undefined8 *)(lVar8 + 0x488),1), lVar8 != 0)))) {
      cVar3 = FUN_142d33cc0(param_2,4);
      if (cVar3 == '\0') {
        lVar4 = *(longlong *)(param_1 + 0x380);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x398);
      }
      if (lVar4 != 0) {
        FUN_1405a3150(lVar8,&local_28,lVar4,0);
        FUN_140591060(&local_28);
      }
      cVar3 = FUN_142d33cc0(param_2,1);
      if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x388) != 0)) {
        FUN_1405a3150(lVar8,&local_28,*(longlong *)(param_1 + 0x388),0);
        FUN_140591060(&local_28);
      }
    }
    if ((0.0 < *(float *)(param_1 + 0x690)) && (cVar3 = FUN_142d33cc0(param_2,0x10), cVar3 == '\0'))
    {
      plVar10 = *(longlong **)(param_2 + 0x38);
      uVar9 = FUN_141477fa0();
      lVar8 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar9);
      if (lVar8 != 0) {
        cVar3 = FUN_142d33cc0(param_2,4);
        if (cVar3 == '\0') {
          uVar11 = *(undefined4 *)(param_1 + 0x694);
          uVar12 = *(undefined4 *)(param_1 + 0x698);
          uVar13 = *(undefined4 *)(param_1 + 0x69c);
          uVar14 = *(undefined4 *)(param_1 + 0x6a0);
        }
        else {
          uVar11 = *(undefined4 *)(param_1 + 0x6b4);
          uVar12 = *(undefined4 *)(param_1 + 0x6b8);
          uVar13 = *(undefined4 *)(param_1 + 0x6bc);
          uVar14 = *(undefined4 *)(param_1 + 0x6c0);
        }
        local_38 = CONCAT44(uVar12,uVar11);
        uStack_30 = CONCAT44(uVar14,uVar13);
        cVar3 = FUN_142d33cc0(param_2,1);
        if (cVar3 != '\0') {
          local_38 = *(undefined8 *)(param_1 + 0x6a4);
          uStack_30 = *(undefined8 *)(param_1 + 0x6ac);
        }
        if (((1e-05 <= (float)local_38 * (float)local_38) ||
            (1e-05 <= local_38._4_4_ * local_38._4_4_)) ||
           (1e-05 <= (float)uStack_30 * (float)uStack_30)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          local_1c = uStack_30._4_4_;
          local_28 = (float)local_38;
          local_24 = local_38._4_4_;
          local_20 = (float)uStack_30;
          FUN_140ebb9e0(lVar8,*(undefined4 *)(param_1 + 0x690),&local_28,
                        *(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(param_1 + 0x6d0));
        }
      }
    }
  }
  return;
}



// FUNCTION 140a8e500 FUN_140a8e500 body=164 status=ok
// SIG undefined FUN_140a8e500(void)

ulonglong FUN_140a8e500(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  
  puVar5 = *(ulonglong **)(param_1 + 0x338);
  puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x340) * 4;
  do {
    if (puVar5 == puVar6) {
      return in_RAX & 0xffffffffffffff00;
    }
    in_RAX = *puVar5;
    if ((in_RAX != 0) && (lVar2 = *(longlong *)(in_RAX + 0x20), lVar2 != 0)) {
      lVar3 = FUN_1414ba680();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(lVar3 + 0x90);
      uVar4 = (longlong)iVar1;
      if ((*(int *)(lVar2 + 0x90) < iVar1) ||
         (uVar4 = *(ulonglong *)(lVar2 + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
        in_RAX = uVar4 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((char)in_RAX != '\0') {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
    puVar5 = puVar5 + 4;
  } while( true );
}



// FUNCTION 140a8e5b0 FUN_140a8e5b0 body=10 status=ok
// SIG undefined FUN_140a8e5b0(void)

bool FUN_140a8e5b0(longlong param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x9b8) & param_2) != 0;
}



// FUNCTION 140a8e5c0 FUN_140a8e5c0 body=16 status=ok
// SIG undefined FUN_140a8e5c0(void)

undefined4 FUN_140a8e5c0(longlong param_1,byte param_2)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x9b8) >> 8),
                  (*(uint *)(param_1 + 0x9b8) >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 140a8e5d0 FUN_140a8e5d0 body=520 status=ok
// SIG undefined FUN_140a8e5d0(void)

void FUN_140a8e5d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int local_res10;
  longlong local_58;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x998);
  if (*(int *)(param_1 + 0x998) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    lVar15 = 0;
    local_res10 = 0;
    if (0 < lVar8) {
      local_58 = 0;
      do {
        plVar17 = (longlong *)(*(longlong *)(param_1 + 0x990) + local_58);
        *(int *)(plVar17 + 10) = local_res10;
        if (((*(byte *)(plVar17 + 1) & 2) != 0) ||
           (plVar13 = (longlong *)(*plVar17 + 0x30), *plVar17 == 0)) {
          plVar13 = plVar17 + 5;
        }
        lVar2 = *plVar13;
        lVar9 = FUN_14222b250(uVar1,lVar2,0);
        if (lVar9 != 0) {
          lVar10 = FUN_142a0cc80();
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
            iVar12 = 0;
            lVar10 = 0;
            lVar16 = 0;
            iVar14 = -1;
            do {
              if (lVar15 != lVar10) {
                lVar3 = *(longlong *)(param_1 + 0x990);
                if (((*(byte *)(lVar16 + 8 + lVar3) & 2) == 0) &&
                   (*(longlong *)(lVar16 + lVar3) != 0)) {
                  puVar11 = (undefined8 *)(*(longlong *)(lVar16 + lVar3) + 0x30);
                }
                else {
                  puVar11 = (undefined8 *)(lVar3 + 0x28 + lVar16);
                }
                uVar4 = *puVar11;
                cVar6 = FUN_1423a5360(lVar9,lVar2);
                if ((cVar6 != '\0') && (iVar7 = FUN_1423ac950(lVar9,uVar4), iVar14 < iVar7)) {
                  *(int *)((longlong)plVar17 + 0x54) = iVar12;
                  iVar14 = iVar7;
                }
              }
              iVar12 = iVar12 + 1;
              lVar10 = lVar10 + 1;
              lVar16 = lVar16 + 0x60;
            } while (lVar10 < lVar8);
          }
        }
        lVar15 = lVar15 + 1;
        local_res10 = local_res10 + 1;
        local_58 = local_58 + 0x60;
      } while (lVar15 < lVar8);
    }
  }
  return;
}



// FUNCTION 140a8e7e0 FUN_140a8e7e0 body=829 status=ok
// SIG undefined FUN_140a8e7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a8e7e0(longlong *param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined1 local_188 [32];
  undefined1 local_168 [12];
  undefined4 local_15c;
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
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (param_1 == (longlong *)0x0) {
    return local_58 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x148))();
  plVar4 = plVar3;
  if ((plVar3 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    plVar4 = (longlong *)FUN_141470140();
    plVar5 = param_2;
    do {
      if (plVar5 == plVar4) {
        plVar5 = (longlong *)FUN_141470140();
        plVar4 = param_2;
        goto LAB_140a8e870;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
  while (plVar4 = (longlong *)plVar4[6], plVar8 = (longlong *)0x0, plVar4 != (longlong *)0x0) {
LAB_140a8e870:
    plVar8 = param_2;
    if (plVar4 == plVar5) break;
  }
  lVar10 = plVar8[0x1f];
  if (lVar10 == 0) {
    uVar6 = (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar10 = plVar8[0x1f];
    if (lVar10 == 0) goto LAB_140a8eb15;
  }
  lVar7 = FUN_141470140();
  iVar1 = *(int *)(lVar7 + 0x90);
  uVar6 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar1) ||
     (uVar6 = *(ulonglong *)(*(longlong *)(lVar10 + 0x10) + 0x88),
     *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  if ((char)uVar6 != '\0') {
    fVar12 = (float)FUN_142c98860(lVar10 + 0x640,param_1);
    fVar13 = (float)FUN_142c98860(lVar10 + 0x6b0,param_1);
    lVar7 = *(longlong *)(param_3 + 0x168);
    if (lVar7 == 0) {
      local_1b8 = _DAT_1468b5d90;
      local_1b0 = DAT_1468b5d98;
    }
    else {
      local_1b8 = *(undefined8 *)(lVar7 + 0x220);
      local_1b0 = *(float *)(lVar7 + 0x228);
    }
    local_d0 = 0;
    local_198 = (undefined4)local_1b8;
    local_194 = (undefined4)((ulonglong)local_1b8 >> 0x20);
    local_1a8 = local_1b8;
    local_1a0 = local_1b0 + fVar12;
    local_90 = 0;
    local_190 = local_1b0 - (fVar13 + *(float *)(lVar10 + 0x6e8));
    local_88 = 0;
    local_70 = 0;
    local_68 = 0;
    local_c8 = 0x10000;
    local_b8 = 0;
    local_c0 = 0;
    local_1b8 = 0;
    local_d8 = 0;
    local_c4 = 0;
    local_b4 = 0x101;
    local_bc = 0;
    local_c2 = 0;
    FUN_1426d3dd0(local_188);
    FUN_1426ea8d0(local_188);
    puVar9 = *(undefined1 **)(lVar10 + 0x6f0);
    if (*(char *)(lVar10 + 0x6ed) != '\0') {
      local_c0 = 1;
    }
    puVar11 = puVar9 + *(int *)(lVar10 + 0x6f8);
    for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      FCollisionResponseContainer::SetResponse(local_188,*puVar9,0);
    }
    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
    local_1c8 = local_188;
    local_1d0 = &local_d8;
    local_15c = 0x3f800000;
    local_1d8 = (uint)*param_4;
    cVar2 = UWorld::LineTraceSingleByChannel(plVar3,local_168,&local_1a8,&local_198);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
    return (ulonglong)(cVar2 == '\0');
  }
LAB_140a8eb15:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 140a8eb20 FUN_140a8eb20 body=214 status=ok
// SIG undefined FUN_140a8eb20(void)

void FUN_140a8eb20(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  FUN_142d1e850();
  *(undefined1 *)(param_1 + 0x568) = 0;
  if (*(char *)(param_1 + 0x330) == '\0') {
    if (*(char *)(param_1 + 0x331) != '\0') {
      *(undefined1 *)(param_1 + 0x568) = 3;
    }
  }
  else {
    *(char *)(param_1 + 0x568) = (*(char *)(param_1 + 0x331) == '\0') + '\x01';
  }
  if (*(char *)(param_1 + 0x528) == '\0') {
    if ((*(longlong *)(param_1 + 0x2b0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118), lVar1 != 0)) {
      uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
      if (plVar5 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        *(undefined1 *)(param_1 + 0x528) = uVar2;
      }
    }
    if (*(char *)(param_1 + 0x528) == '\0') goto LAB_140a8ebe4;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
      *(bool *)(param_1 + 0x528) = cVar3 == '\0';
    }
  }
LAB_140a8ebe4:
  FUN_140a8ee00(param_1);
  return;
}



// FUNCTION 140a8ec00 FUN_140a8ec00 body=303 status=ok
// SIG undefined FUN_140a8ec00(void)

void FUN_140a8ec00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (*(longlong *)(lVar1 + 0x4c0) != 0)) && (*(char *)(lVar1 + 0x13c2) == '\0')) &&
       (*(longlong *)(param_1 + 0x2b0) == 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_1468674a0) {
        _Init_thread_header(&DAT_1468674a0);
        if (DAT_1468674a0 == -1) {
          FName::FName(&DAT_146867498,L"ThirdPersonMeleeWeaponMesh",1);
          _Init_thread_footer(&DAT_1468674a0);
        }
      }
      FUN_140a88730(*(undefined8 *)(lVar1 + 0x4c0),param_1 + 0x278,&DAT_146867498,1,0);
      lVar1 = *(longlong *)(param_1 + 0x2b0);
      if (lVar1 != 0) {
        FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) | 2,0);
      }
      FUN_140a95820(param_1);
    }
  }
  return;
}



// FUNCTION 140a8ed30 FUN_140a8ed30 body=202 status=ok
// SIG undefined FUN_140a8ed30(void)

void FUN_140a8ed30(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x558) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined2 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0x3f800000;
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  if (lVar3 != 0) {
    lVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FWeakObjectPtr::Get(lVar3 + 0x96c);
      if (lVar2 != 0) {
        lVar3 = FWeakObjectPtr::Get(lVar3 + 0x96c);
        uVar4 = FUN_142d5fee0(lVar3 + 0x228,0);
        *(undefined4 *)(param_1 + 0x550) = uVar4;
      }
    }
  }
  FUN_142d1ef60(param_1,param_2);
  return;
}



// FUNCTION 140a8ee00 FUN_140a8ee00 body=606 status=ok
// SIG undefined FUN_140a8ee00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a8ee00(longlong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  piVar1 = (int *)(param_1 + 0x56c);
  if ((local_18 != piVar1) && (*(char *)(param_1 + 0x570) != '\0')) {
    *(undefined1 *)(param_1 + 0x570) = 0;
  }
  lVar6 = FUN_140a8ce20();
  if (((lVar6 != 0) && (*(char *)(lVar6 + 0x6c1) == '\0')) && (*(char *)(lVar6 + 0x6c2) != '\0')) {
    *(undefined8 *)(param_1 + 0x578) = *(undefined8 *)(param_1 + 0x2c8);
    if (((byte)(*(char *)(param_1 + 0x568) - 1U) < 2) &&
       (lVar9 = *(longlong *)(param_1 + 0x290), lVar9 != 0)) {
      lVar7 = AUGWallBladeTrap::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (*(char *)(lVar9 + 0x330) != '\0')) &&
         (plVar11 = *(longlong **)(param_1 + 0x268), plVar11 != (longlong *)0x0)) {
        uVar8 = FUN_142dfdf30();
        lVar9 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar8);
        if (lVar9 != 0) {
          *(longlong *)(param_1 + 0x578) = lVar9;
        }
      }
    }
    plVar11 = *(longlong **)(param_1 + 0x2c0);
    if ((plVar11 != (longlong *)0x0) && (cVar2 = *(char *)(param_1 + 0x568), cVar2 != '\0')) {
      if (cVar2 == '\x01') {
        if (((*(char *)(lVar6 + 0x6c1) == '\0') && (*(char *)(lVar6 + 0x6c2) != '\0')) &&
           (*(longlong *)(param_1 + 0x578) != 0)) {
          iVar5 = (**(code **)(*plVar11 + 0x408))(plVar11);
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x578) + 0x408))();
          if (iVar5 != iVar4) {
            if (local_18 != piVar1) {
              *piVar1 = iVar4;
              *(undefined1 *)(param_1 + 0x570) = 1;
            }
            *(undefined4 *)(param_1 + 0x32c) = 0;
          }
        }
      }
      else if ((byte)(cVar2 - 2U) < 2) {
        if (*(char *)(param_1 + 0x330) == '\0') {
          plVar12 = (longlong *)0x0;
          if (*(char *)(param_1 + 0x331) != '\0') {
            plVar12 = plVar11;
          }
        }
        else {
          plVar12 = *(longlong **)(param_1 + 0x578);
        }
        if (*(char *)(param_1 + 0x330) == '\0') {
          if (*(char *)(param_1 + 0x331) == '\0') {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x578);
          }
        }
        if (plVar12 != (longlong *)0x0) {
          piVar10 = (int *)FUN_140cd8df0(lVar6,local_18);
          if (piVar10 != piVar1) {
            if (*(char *)(param_1 + 0x570) != '\0') {
              *(undefined1 *)(param_1 + 0x570) = 0;
            }
            if ((char)piVar10[1] != '\0') {
              *piVar1 = *piVar10;
              *(undefined1 *)(param_1 + 0x570) = 1;
            }
          }
          if ((*(char *)(param_1 + 0x570) != '\0') && (iVar5 = *piVar1, plVar11 != (longlong *)0x0))
          {
            if (*(char *)(param_1 + 0x330) == '\0') {
              iVar4 = (**(code **)(*plVar11 + 0x408))(plVar11);
              *(int *)(param_1 + 0x32c) = iVar4 - iVar5;
            }
            else {
              iVar4 = (**(code **)(*plVar11 + 0x408))();
              *(int *)(param_1 + 0x32c) = iVar5 - iVar4;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a8f060 FUN_140a8f060 body=51 status=ok
// SIG undefined FUN_140a8f060(void)

void FUN_140a8f060(longlong *param_1,undefined8 param_2)

{
  FUN_140a7d9f0(param_1 + 0x6a);
                    /* WARNING: Could not recover jumptable at 0x000140a8f08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return;
}



// FUNCTION 140a8f0a0 FUN_140a8f0a0 body=97 status=ok
// SIG undefined FUN_140a8f0a0(void)

ulonglong FUN_140a8f0a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 0x48);
  if ((uVar4 != 0) && (lVar2 = *(longlong *)(uVar4 + 0x488), lVar2 != 0)) {
    lVar3 = FUN_1430e5840();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140a8f110 FUN_140a8f110 body=103 status=ok
// SIG undefined FUN_140a8f110(void)

undefined1 FUN_140a8f110(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_141477fa0();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar3 != 0) {
      uVar2 = FUN_140eb2650(lVar3,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140a8f180 FUN_140a8f180 body=146 status=ok
// SIG undefined FUN_140a8f180(void)

undefined8 FUN_140a8f180(longlong *param_1,char param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar4 = param_1[0x1f];
    if (lVar4 == 0) {
      in_RAX = (**(code **)(*param_1 + 0x368))();
      lVar4 = param_1[0x1f];
      if (lVar4 == 0) goto LAB_140a8f1fa;
    }
    lVar2 = FUN_1414193b0();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar3 = (ulonglong)*(byte *)(lVar4 + 0x131);
      goto LAB_140a8f1fc;
    }
  }
LAB_140a8f1fa:
  uVar3 = in_RAX & 0xffffffffffffff00;
LAB_140a8f1fc:
  return CONCAT71((int7)(uVar3 >> 8),(char)uVar3 == param_2);
}



// FUNCTION 140a8f220 FUN_140a8f220 body=11 status=ok
// SIG undefined FUN_140a8f220(void)

bool FUN_140a8f220(longlong param_1)

{
  return *(char *)(param_1 + 0x974) != '\0';
}



// FUNCTION 140a8f230 FUN_140a8f230 body=119 status=ok
// SIG undefined FUN_140a8f230(void)

bool FUN_140a8f230(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1414193b0();
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
      return *(char *)(param_1 + 0x131) == param_2;
    }
  }
  return param_2 == '\0';
}



// FUNCTION 140a8f2b0 FUN_140a8f2b0 body=106 status=ok
// SIG undefined FUN_140a8f2b0(void)

undefined8 FUN_140a8f2b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x750);
  if (lVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x568) + 0x10);
    if (*(longlong *)(lVar4 + 0x78) != 0) {
      lVar3 = FUN_1428dfc70();
      lVar4 = *(longlong *)(lVar4 + 0x78);
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_140a8f300;
      }
    }
    lVar4 = 0;
LAB_140a8f300:
    if (lVar1 != lVar4) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140a8f320 FUN_140a8f320 body=254 status=ok
// SIG undefined FUN_140a8f320(void)

ulonglong FUN_140a8f320(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint7 uVar6;
  undefined1 local_88 [128];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar3 = (**(code **)(*(longlong *)(param_2 + 0xd80) + 0x18))();
    if (lVar3 == 0) {
      lVar3 = FUN_142fde510();
    }
    else {
      lVar3 = FUN_142ffbee0(lVar3,local_88,param_3);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    lVar4 = FUN_14149b100();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      in_RAX = uVar5 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX == '\0') {
      param_3 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x750);
    if (lVar4 != 0) {
      if (((param_3 == 0) || (*(longlong *)(lVar4 + 0x80) != *(longlong *)(param_3 + 0x480))) &&
         (*(longlong *)(lVar4 + 0x80) != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar4 = *(longlong *)(lVar4 + 0x70);
      uVar6 = (uint7)((ulonglong)lVar4 >> 8);
      if ((lVar3 == lVar4) || (lVar4 == 0)) {
        in_RAX = CONCAT71(uVar6,1);
      }
      else {
        in_RAX = (ulonglong)uVar6 << 8;
      }
      if ((bVar2) && ((char)in_RAX != '\0')) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a8f420 FUN_140a8f420 body=138 status=ok
// SIG undefined FUN_140a8f420(void)

bool FUN_140a8f420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = AGBattleRoyaleGameState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(lVar1 + 0x460) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x460) + 0x508), lVar1 != 0)) {
      return *(longlong *)(lVar1 + 0x2c70) == param_2;
    }
  }
  return true;
}



// FUNCTION 140a8f4c0 FUN_140a8f4c0 body=238 status=ok
// SIG undefined FUN_140a8f4c0(void)

ulonglong FUN_140a8f4c0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(longlong *)(param_1 + 0x2f8) != 0) && (*(longlong *)(param_1 + 0x300) != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x300) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if ((0 < (int)in_RAX) && (plVar3 = *(longlong **)(param_1 + 0x118), plVar3 != (longlong *)0x0))
    {
      uVar5 = FUN_142e27720();
      lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
      in_RAX = 0;
      if (lVar6 != 0) {
        local_10 = *(longlong *)(param_1 + 0x300);
        local_18 = 0;
        if (local_10 != 0) {
          LOCK();
          iVar4 = *(int *)(local_10 + 8);
          bVar8 = iVar4 == 0;
          if (bVar8) {
            *(int *)(local_10 + 8) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar8) {
            LOCK();
            bVar8 = iVar4 == *(int *)(local_10 + 8);
            if (bVar8) {
              *(int *)(local_10 + 8) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar8) {
              if (local_10 != 0) {
                local_18 = *(undefined8 *)(param_1 + 0x2f8);
              }
              goto LAB_140a8f56a;
            }
            LOCK();
            iVar4 = *(int *)(local_10 + 8);
            bVar8 = iVar4 == 0;
            if (bVar8) {
              *(int *)(local_10 + 8) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
          local_10 = 0;
        }
LAB_140a8f56a:
        uVar7 = FUN_142c73730(lVar6,&local_18);
        return uVar7;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140a8f5b0 FUN_140a8f5b0 body=46 status=ok
// SIG undefined FUN_140a8f5b0(void)

void FUN_140a8f5b0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140a8f2b0();
  if (cVar1 != '\0') {
    FUN_142227350(param_1,0,1);
    return;
  }
  FUN_143003700(param_1);
  return;
}



// FUNCTION 140a8f5e0 FUN_140a8f5e0 body=719 status=ok
// SIG undefined FUN_140a8f5e0(void)

longlong FUN_140a8f5e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                      float *param_9,undefined8 param_10,float param_11,float param_12,
                      float param_13,undefined4 param_14,undefined4 param_15)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_48;
  
  FUN_142d0aa70(param_1,param_3,param_2,0);
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  FUN_140729f20(param_1 + 0x50,param_6);
  uVar3 = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)(param_1 + 0x100) = *param_7;
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  uVar3 = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(param_1 + 0x10c) = *param_8;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  fVar4 = param_9[1];
  fVar1 = *param_9;
  fVar2 = param_9[2];
  fVar5 = fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (fVar5 == 1.0) {
    local_48 = (float)*(undefined8 *)param_9;
    fVar8 = (float)((ulonglong)*(undefined8 *)param_9 >> 0x20);
    fVar6 = param_9[2];
  }
  else {
    fVar8 = DAT_1468b5d94;
    fVar6 = DAT_1468b5d98;
    local_48 = DAT_1468b5d90;
    if (1e-08 <= fVar5) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      local_48 = fVar1 * fVar6;
      fVar8 = fVar4 * fVar6;
      fVar6 = fVar2 * fVar6;
    }
  }
  fVar4 = (float)FUN_142d9cad0(param_10,0);
  *(ulonglong *)(param_1 + 0x118) = CONCAT44(fVar8 * fVar4,local_48 * fVar4);
  *(undefined4 *)(param_1 + 0x198) = param_14;
  *(float *)(param_1 + 0x120) = fVar6 * fVar4;
  *(undefined4 *)(param_1 + 0x19c) = param_15;
  if ((0.0 <= param_11) && (&param_11 != (float *)(param_1 + 0x1b0))) {
    *(float *)(param_1 + 0x1b0) = param_11;
    *(undefined1 *)(param_1 + 0x1b4) = 1;
  }
  if ((0.0 <= param_12) && (&param_12 != (float *)(param_1 + 0x1b8))) {
    *(float *)(param_1 + 0x1b8) = param_12;
    *(undefined1 *)(param_1 + 0x1bc) = 1;
  }
  if ((0.0 <= param_13) && (&param_13 != (float *)(param_1 + 0x1c4))) {
    *(float *)(param_1 + 0x1c4) = param_13;
    *(undefined1 *)(param_1 + 0x1c8) = 1;
  }
  return param_1;
}



// FUNCTION 140a8f8b0 FUN_140a8f8b0 body=1150 status=ok
// SIG undefined FUN_140a8f8b0(void)

byte FUN_140a8f8b0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  byte bVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  
  bVar17 = 0;
  bVar3 = false;
  bVar4 = false;
  if ((param_2 == 0) ||
     (plVar11 = (longlong *)FUN_14307cf20(param_2,*(undefined1 *)(param_2 + 0x690)),
     plVar11 == (longlong *)0x0)) {
LAB_140a8f947:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar12 = FUN_1430bdfe0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140a8f947;
  }
  plVar13 = *(longlong **)(param_1 + 0x338);
  plVar16 = plVar13 + (longlong)*(int *)(param_1 + 0x340) * 4;
  for (; plVar13 != plVar16; plVar13 = plVar13 + 4) {
    plVar15 = (longlong *)*plVar13;
    if ((plVar15 != (longlong *)0x0) &&
       (((char)plVar15[6] == '\0' ||
        (*(int *)(plVar13 + 3) = (int)plVar13[3] + -1, (int)plVar13[3] < 1)))) {
      if (((char)plVar15[6] != '\0') && ((int)plVar13[3] < 1)) {
        lVar12 = plVar13[2];
        if (lVar12 == 0) {
          lVar12 = *(longlong *)(param_1 + 0x118);
        }
        auVar18._0_8_ = FUN_142c98860(plVar15 + 7,lVar12);
        auVar18._8_8_ = extraout_XMM0_Qb;
        plVar15 = (longlong *)*plVar13;
        if ((float)auVar18._0_8_ <= 0.0) {
          auVar1._12_4_ = 0;
          auVar1._0_12_ = auVar18._4_12_;
          auVar18 = auVar1 << 0x20;
        }
        *(int *)(plVar13 + 3) = (int)auVar18._0_4_;
      }
      cVar5 = (**(code **)(*plVar15 + 0x280))(plVar15,param_2,param_3,plVar13[2]);
      if (cVar5 != '\0') {
        bVar17 = 1;
        FWeakObjectPtr::operator=(&local_b8,*plVar13);
        FWeakObjectPtr::operator=(&local_b0,plVar13[2]);
        iVar7 = *(int *)(param_3 + 0x40);
        *(int *)(param_3 + 0x40) = iVar7 + 1;
        if (*(int *)(param_3 + 0x44) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3 + 0x38,iVar7);
        }
        puVar14 = (undefined4 *)((longlong)iVar7 * 0x10 + *(longlong *)(param_3 + 0x38));
        *puVar14 = local_b8;
        puVar14[1] = local_b4;
        puVar14[2] = local_b0;
        puVar14[3] = local_ac;
        if (*(char *)(*plVar13 + 0x181) != '\0') {
          bVar3 = true;
        }
        if (*(char *)(*plVar13 + 0x182) != '\0') {
          bVar4 = true;
        }
      }
    }
  }
  if ((*(float *)(param_1 + 0x31c) == 1.0) && (*(float *)(param_1 + 0x328) == 1.0))
  goto LAB_140a8fb63;
  if ((plVar11 == (longlong *)0x0) ||
     (plVar13 = (longlong *)(**(code **)(*plVar11 + 0x460))(plVar11), plVar13 == (longlong *)0x0)) {
LAB_140a8fb5e:
    bVar6 = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar13 + 0x420))(plVar13);
    iVar8 = (**(code **)(*plVar13 + 0x418))(plVar13);
    iVar9 = FUN_143076f10(plVar11);
    if (iVar7 == iVar8 - iVar9) {
      fVar19 = *(float *)(param_1 + 0x31c);
    }
    else {
      if (iVar7 != 0) goto LAB_140a8fb5e;
      fVar19 = *(float *)(param_1 + 0x328);
    }
    if (fVar19 == 1.0) goto LAB_140a8fb5e;
    fVar20 = *(float *)(param_3 + 4);
    fVar19 = fVar20 * fVar19 - fVar20;
    if (1 < *(int *)(param_3 + 0x18)) {
      fVar19 = fVar19 / (float)*(int *)(param_3 + 0x18);
    }
    bVar6 = 1;
    *(float *)(param_3 + 4) = fVar20 + fVar19;
  }
  bVar17 = bVar17 | bVar6;
LAB_140a8fb63:
  cVar5 = FUN_1407c3030();
  if ((cVar5 == '\0') || (fVar19 = *(float *)(param_1 + 0x3e0), fVar19 <= 0.0)) {
    bVar6 = 0;
  }
  else {
    fVar20 = (*(float *)(param_1 + 0x334) - 1.0) * *(float *)(param_3 + 4);
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    if (fVar19 <= fVar20) {
      fVar20 = fVar19;
    }
    if (1 < *(int *)(param_3 + 0x18)) {
      fVar20 = fVar20 / (float)*(int *)(param_3 + 0x18);
    }
    bVar6 = 1;
    *(float *)(param_3 + 4) = fVar20 + *(float *)(param_3 + 4);
  }
  bVar17 = bVar17 | bVar6;
  if ((bVar17 != 0) && (0 < *(int *)(param_1 + 0x310))) {
    local_9c = *(undefined4 *)(param_3 + 4);
    local_74 = *(undefined4 *)(param_3 + 0x2c);
    local_a0 = *param_3;
    local_98 = *(undefined8 *)(param_3 + 8);
    local_90 = *(undefined8 *)(param_3 + 0x10);
    local_88 = *(undefined4 *)(param_3 + 0x18);
    local_84 = param_3[0x1c];
    local_78 = *(undefined4 *)(param_3 + 0x28);
    local_80 = *(undefined8 *)(param_3 + 0x20);
    local_70 = *(undefined4 *)(param_3 + 0x30);
    local_68 = 0;
    local_60 = 0;
    local_a8 = param_2;
    FUN_140a29610(&local_68,param_3 + 0x38);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x308,&local_a8);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  if (((bVar3) && (plVar11 != (longlong *)0x0)) &&
     (plVar13 = (longlong *)(**(code **)(*plVar11 + 0x460))(plVar11), plVar13 != (longlong *)0x0)) {
    if (bVar4) {
      iVar7 = (**(code **)(*plVar13 + 0x420))(plVar13);
      iVar8 = FUN_143076f10(plVar11);
      iVar9 = (**(code **)(*plVar13 + 0x418))(plVar13);
      if (iVar9 <= iVar7 + iVar8) {
        return bVar17;
      }
    }
    lVar12 = *plVar13;
    uVar10 = FUN_143076f10(plVar11);
    (**(code **)(lVar12 + 0x4b8))(plVar13,uVar10,1,0);
  }
  return bVar17;
}



// FUNCTION 140a8fd30 FUN_140a8fd30 body=366 status=ok
// SIG undefined FUN_140a8fd30(void)

void FUN_140a8fd30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_88 [128];
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = AGBattleRoyaleGameState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (param_2 != 0)) && (param_3 != 0)) {
      lVar3 = (**(code **)(*(longlong *)(param_2 + 0xd80) + 0x18))();
      if (lVar3 == 0) {
        lVar3 = FUN_142fde510();
      }
      else {
        lVar3 = FUN_142ffbee0(lVar3,local_88,param_3);
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      lVar4 = FUN_14149b100();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      lVar6 = 0;
      lVar4 = *(longlong *)(param_1 + 0x750);
      lVar5 = param_3;
      if (!bVar2) {
        lVar5 = lVar6;
      }
      if (lVar4 != 0) {
        if (((lVar5 != 0) && (*(longlong *)(lVar4 + 0x80) == *(longlong *)(lVar5 + 0x480))) ||
           (*(longlong *)(lVar4 + 0x80) == 0)) {
          lVar6 = 1;
        }
        if ((lVar3 == *(longlong *)(lVar4 + 0x70)) || (*(longlong *)(lVar4 + 0x70) == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (((char)lVar6 != '\0') && (bVar2)) {
          FUN_140a6d300(lVar1,param_1,param_2,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a8fea0 FUN_140a8fea0 body=133 status=ok
// SIG undefined FUN_140a8fea0(void)

void FUN_140a8fea0(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x848), lVar3 != 0)) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a8ff07;
  }
  lVar3 = 0;
LAB_140a8ff07:
  FUN_140a8fd30(param_1,lVar3,param_3);
  return;
}



// FUNCTION 140a8ff30 FUN_140a8ff30 body=775 status=ok
// SIG undefined FUN_140a8ff30(void)

void FUN_140a8ff30(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined4 param_5,longlong *param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [80];
  
  local_98 = *param_6;
  local_90 = CONCAT44(local_90._4_4_,(int)param_6[1]);
  FUN_142d3f090((int)local_98,param_2,param_3,param_4,param_5,&local_98,param_7,param_8,param_9,
                param_10,param_11,param_12,param_13);
  uVar10 = (undefined4)((ulonglong)param_11 >> 0x20);
  uVar11 = (undefined4)((ulonglong)param_12 >> 0x20);
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x148))(param_1);
  }
  if (param_4 == 0) {
    return;
  }
  lVar3 = FUN_142e49950();
  lVar5 = param_4;
  while (lVar5 != lVar3) {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) {
      return;
    }
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  plVar4 = (longlong *)UCelLightData::GetPrivateStaticClass();
  plVar8 = param_3;
  while (plVar8 != plVar4) {
    plVar8 = (longlong *)plVar8[6];
    if (plVar8 == (longlong *)0x0) {
      return;
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 == 0) {
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  iVar2 = FUN_1428cf800(uVar6);
  if (iVar2 != 3) {
    return;
  }
  plVar4 = (longlong *)UCelLightData::GetPrivateStaticClass();
  plVar8 = param_3;
  do {
    plVar9 = param_3;
    if (plVar8 == plVar4) break;
    plVar8 = (longlong *)plVar8[6];
    plVar9 = (longlong *)0x0;
  } while (plVar8 != (longlong *)0x0);
  lVar5 = plVar9[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar5 = plVar9[0x1f];
    if (lVar5 == 0) {
      return;
    }
  }
  lVar3 = UCelLightData::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    puVar7 = (undefined4 *)FUN_142d979a0(local_68,param_13);
    local_88 = *puVar7;
    uStack_84 = puVar7[1];
    uStack_80 = puVar7[2];
    uStack_7c = puVar7[3];
    local_78 = puVar7[4];
    uStack_74 = puVar7[5];
    uStack_70 = puVar7[6];
    uStack_6c = puVar7[7];
    local_98 = 0;
    local_90 = 0;
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140a83140(uVar6,param_7,param_6,param_5,param_4,0,&local_98,0,0,&local_88,CONCAT44(uVar10,3)
                  ,CONCAT44(uVar11,0xbf800000),0xbf800000,0xbf800000,1,0,0,1,0x3f800000,0x3f800000,0
                 );
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140a90240 FUN_140a90240 body=94 status=ok
// SIG undefined FUN_140a90240(void)

undefined1 FUN_140a90240(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x2f8) != 0) {
      lVar2 = UMapBuildDataRegistry::GetPrivateStaticClass();
      for (lVar1 = *(longlong *)(param_2 + 0x2f8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30))
      {
        if (lVar1 == lVar2) {
          if (*(longlong *)(param_2 + 0x2f8) != 0) {
            return 1;
          }
          break;
        }
      }
    }
    if (*(char *)(param_2 + 0x309) != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140a902a0 FUN_140a902a0 body=765 status=ok
// SIG undefined FUN_140a902a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a902a0(undefined1 *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  int local_48 [4];
  undefined8 local_38;
  undefined4 local_30;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xc);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 4);
  *param_4 = 1;
  uVar2 = DAT_1468b5d98;
  cVar6 = param_1[0xc];
  if (cVar6 == '\0') {
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x10000);
      *(float *)(param_1 + 0x1c) = (float)(local_res8[0] + -0x8000) * 3.051851e-05;
      (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x10000);
      *(float *)(param_1 + 0x20) = (float)(local_res10[0] + -0x8000) * 3.051851e-05;
      (**(code **)(*param_2 + 0x60))(param_2,local_res20,0x10000);
      *(float *)(param_1 + 0x24) = (float)(local_res20[0] + -0x8000) * 3.051851e-05;
      *param_4 = *param_4 & 1;
      cVar6 = param_1[0xc];
    }
    else {
      bVar3 = FUN_140a79ab0(0,param_2);
      bVar4 = FUN_140a79ab0();
      bVar5 = FUN_140a79ab0();
      *param_4 = *param_4 & bVar5 & bVar3 & 1 & bVar4;
      cVar6 = param_1[0xc];
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1c) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  uVar2 = DAT_1468b5d98;
  if (cVar6 == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined8 *)(param_1 + 0x10) = _DAT_1468b5d90;
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 2) == 0) {
    local_res8[0] = 0;
    (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x14);
    local_res10[0] = 0;
    local_res20[0] = 0;
    local_48[0] = 0;
    iVar7 = 1 << ((char)local_res8[0] + 1U & 0x1f);
    iVar8 = 1 << ((char)local_res8[0] + 2U & 0x1f);
    (**(code **)(*param_2 + 0x60))(param_2,local_res10,iVar8);
    (**(code **)(*param_2 + 0x60))(param_2,local_res20,iVar8);
    (**(code **)(*param_2 + 0x60))(param_2,local_48,iVar8);
    *(float *)(param_1 + 0x10) = (float)(local_res10[0] - iVar7);
    *(float *)(param_1 + 0x14) = (float)(local_res20[0] - iVar7);
    *(float *)(param_1 + 0x18) = (float)(local_48[0] - iVar7);
    *param_4 = *param_4 & 1;
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x10);
    local_30 = *(undefined4 *)(param_1 + 0x18);
    bVar3 = FUN_140a79b20(&local_38,param_2);
    *param_4 = *param_4 & bVar3;
  }
  return 1;
}



// FUNCTION 140a905a0 FUN_140a905a0 body=153 status=ok
// SIG undefined FUN_140a905a0(void)

void FUN_140a905a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x118), plVar1 != (longlong *)0x0)) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2 == plVar1[0x98])) {
      uVar4 = FUN_1414b0910();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar3 != 0) {
        FUN_140a88a00(lVar3);
        FUN_140a8a470(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140a90640 FUN_140a90640 body=274 status=ok
// SIG undefined FUN_140a90640(void)

void FUN_140a90640(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x118), plVar1 != (longlong *)0x0)) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_1414b0910();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar3 != 0) {
        lVar6 = *(longlong *)(lVar3 + 0x2c8);
        if (lVar6 != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x120);
          if (*(longlong *)(lVar3 + 0x308) == 0) {
            if (lVar5 == 0) {
              lVar5 = FUN_1423407b0(lVar3);
              lVar6 = *(longlong *)(lVar3 + 0x2c8);
            }
            fVar7 = *(float *)(lVar5 + 0x790) + *(float *)(lVar6 + 0xcc);
          }
          else {
            if (lVar5 == 0) {
              lVar5 = FUN_1423407b0(lVar3);
              lVar6 = *(longlong *)(lVar3 + 0x2c8);
            }
            fVar7 = *(float *)(lVar5 + 0x790) + *(float *)(lVar6 + 200);
          }
          *(float *)(lVar3 + 0x2f0) = fVar7;
        }
        *(undefined8 *)(lVar3 + 0x2c8) = 0;
        *(undefined8 *)(lVar3 + 0x308) = 0;
        *(undefined8 *)(lVar3 + 0x310) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140a90760 FUN_140a90760 body=105 status=ok
// SIG undefined FUN_140a90760(void)

void FUN_140a90760(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
    lVar3 = FUN_1413f82e0();
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
      *(undefined1 *)(lVar1 + 0x1138) = *(undefined1 *)(param_1 + 0x38);
    }
  }
  return;
}



// FUNCTION 140a907d0 FUN_140a907d0 body=152 status=ok
// SIG undefined FUN_140a907d0(void)

void FUN_140a907d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x118), plVar1 != (longlong *)0x0)) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = FUN_1414b0910();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar3 != 0) {
        FUN_140a84ba0(lVar3,*(undefined4 *)(lVar3 + 0x2e8),*(undefined8 *)(lVar3 + 0x308));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a90870 FUN_140a90870 body=875 status=ok
// SIG undefined FUN_140a90870(void)

void FUN_140a90870(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x370) == 0) {
    return;
  }
  bVar10 = *(byte *)(param_2 + 0x214) & 1;
  plVar11 = *(longlong **)(param_2 + 0x58);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (plVar11 != (longlong *)0x0) {
    lVar7 = plVar11[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar7 = plVar11[0x1f];
      if (lVar7 == 0) goto LAB_140a908f2;
    }
    bVar10 = -(*(char *)(lVar7 + 0xb1) != '\0') & 0x10;
  }
LAB_140a908f2:
  if (bVar10 == 0x10) {
    return;
  }
  if ((lVar3 == 0) || (cVar5 = FUN_142d1f7c0(param_2), cVar5 != '\0')) goto LAB_140a90bb9;
  plVar11 = *(longlong **)(param_1 + 0x118);
  if (plVar11 != (longlong *)0x0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (cVar5 = (**(code **)(*plVar11 + 0x820))(plVar11), cVar5 == '\0'))
    goto LAB_140a90bb9;
  }
  uVar15 = FUN_142d13ae0(param_2);
  fVar1 = *(float *)(param_2 + 0x55c);
  fVar2 = *(float *)(param_2 + 0x550);
  iVar6 = FUN_142d1b850(param_2);
  if ((fVar1 == fVar2) || (iVar6 != -1)) {
    lVar7 = *(longlong *)(param_2 + 0x2b0);
    plVar13 = (longlong *)0x0;
    plVar11 = plVar13;
    if (lVar7 != 0) {
      if ((iVar6 < 0) || (*(int *)(lVar7 + 0x680) <= iVar6)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar11 = (longlong *)((longlong)iVar6 * 0x78 + *(longlong *)(lVar7 + 0x678));
      }
    }
    uVar14 = 0;
    if (plVar11 != (longlong *)0x0) {
      lVar7 = *(longlong *)(param_1 + 0x370);
      lVar12 = lVar7 + 0x830;
      plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12);
      if (plVar8 == (longlong *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x838)) && (*(longlong *)(lVar7 + 0x840) != 0)) {
          lVar9 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar12,lVar9);
          if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar7 + 0x838) = DAT_1464b56f4;
          }
          plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12);
          if (plVar8 != (longlong *)0x0) goto LAB_140a90a82;
        }
LAB_140a90ab8:
        plVar8 = plVar13;
      }
      else {
LAB_140a90a82:
        lVar7 = FUN_142e5f7c0();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_140a90ab8;
      }
      if (plVar8 == (longlong *)*plVar11) {
        uVar14 = 8;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x370);
        lVar12 = lVar7 + 0x858;
        plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12);
        if (plVar8 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x860)) && (*(longlong *)(lVar7 + 0x868) != 0)) {
            lVar9 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar12,lVar9);
            if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar7 + 0x860) = DAT_1464b56f4;
            }
            plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12);
            if (plVar8 != (longlong *)0x0) goto LAB_140a90b49;
          }
LAB_140a90b7f:
          plVar8 = plVar13;
        }
        else {
LAB_140a90b49:
          lVar7 = FUN_142e5f7c0();
          if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_140a90b7f;
        }
        uVar14 = 0;
        if (plVar8 == (longlong *)*plVar11) {
          uVar14 = 4;
        }
      }
    }
  }
  else {
    uVar14 = 4;
  }
  FUN_140a9a150(param_1,lVar3,uVar15,uVar14);
LAB_140a90bb9:
  FUN_140a9b3f0(param_1,param_2);
  return;
}



// FUNCTION 140a90be0 FUN_140a90be0 body=74 status=ok
// SIG undefined FUN_140a90be0(void)

void FUN_140a90be0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_141477fa0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      ARawbotsBuildModePawn::AddToBuildPartList(lVar3,*(undefined8 *)(param_3 + 0x18));
    }
  }
  return;
}



// FUNCTION 140a90c30 FUN_140a90c30 body=110 status=ok
// SIG undefined FUN_140a90c30(void)

void FUN_140a90c30(longlong param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0x348);
  if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x28) == *(longlong *)(param_1 + 0x118))) {
    fVar2 = *(float *)(param_2 + 0x1d8) - *(float *)(param_2 + 0x1c4);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = fVar2 / *(float *)(param_2 + 0x560);
    if (0.0 < fVar2) {
      *(float *)(param_1 + 0x3e0) = fVar2;
    }
  }
  FUN_142d20280(param_1,param_2);
  return;
}



// FUNCTION 140a90ca0 FUN_140a90ca0 body=74 status=ok
// SIG undefined FUN_140a90ca0(void)

void FUN_140a90ca0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_141477fa0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      ARawbotsBuildModePawn::AddToBuildPartList(lVar3,*(undefined8 *)(param_3 + 0x18));
    }
  }
  return;
}



// FUNCTION 140a90cf0 FUN_140a90cf0 body=116 status=ok
// SIG undefined FUN_140a90cf0(void)

void FUN_140a90cf0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_3 != 0) {
    local_3c = *(undefined4 *)(param_3 + 0x118);
    local_44 = *(undefined8 *)(param_3 + 0x110);
    local_30 = *(undefined4 *)(param_3 + 0x124);
    local_28 = *(undefined8 *)(param_3 + 0x28);
    local_18 = *(undefined8 *)(param_3 + 0x50);
    local_20 = *(undefined8 *)(param_3 + 0x58);
    local_38 = *(undefined8 *)(param_3 + 0x11c);
    local_48 = param_2;
    FUN_1412f8ef0(param_1 + -0x458,&local_48);
  }
  return;
}



// FUNCTION 140a90d70 FUN_140a90d70 body=265 status=ok
// SIG undefined FUN_140a90d70(void)

void FUN_140a90d70(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(char *)(param_1 + 0x968) != '\0') && (cVar2 = FUN_142d1f310(), cVar2 == '\0')) &&
     ((*(uint *)(param_1 + 0x840) >> 3 & 1) == 0)) {
    if (*(int *)(param_1 + 0x670) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x678);
      lVar6 = (longlong)*(int *)(param_1 + 0x680) * 0x78 + lVar5;
      if (lVar5 != lVar6) {
        lVar7 = lVar5 + 0x60;
        do {
          cVar2 = FUN_142d52a00(lVar7);
          if (cVar2 != '\0') {
            uVar3 = FUN_142d52a20(lVar7);
            lVar4 = FArchive::operator<<(uVar3);
            uVar1 = *(undefined4 *)(lVar4 + 0x20);
            uVar3 = FUN_142d52a20(lVar7);
            uVar3 = FArchive::operator<<(uVar3);
            FUN_142d6f560(uVar3,uVar1,1);
          }
          lVar5 = lVar5 + 0x78;
          lVar7 = lVar7 + 0x78;
        } while (lVar5 != lVar6);
      }
    }
    else {
      FUN_142d28940(param_1 + 0x688,*(undefined4 *)(param_1 + 0x6cc));
    }
    lVar5 = FUN_142d1ab50(param_1);
    if (lVar5 != 0) {
      FUN_142d46660(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140a90e80 FUN_140a90e80 body=136 status=ok
// SIG undefined FUN_140a90e80(void)

void FUN_140a90e80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  if (*(int *)(param_1 + 0x4e4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4d8,0);
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4e8,0);
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if (*(int *)(param_1 + 0x504) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4f8,0);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if (*(int *)(param_1 + 0x4c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x4b8,0);
  }
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x4c8,0);
  }
  return;
}



// FUNCTION 140a90f10 FUN_140a90f10 body=149 status=ok
// SIG undefined FUN_140a90f10(void)

void FUN_140a90f10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar5 = (longlong)*(int *)(param_1 + 0x50) * 0x20 + lVar3;
  do {
    if (lVar3 == lVar5) {
      return;
    }
    lVar2 = *(longlong *)(lVar3 + 0x10);
    lVar4 = (longlong)*(int *)(lVar3 + 0x18) * 0x10 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x10) {
      cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar2 + 8,param_2);
      if (cVar1 != '\0') {
        FWeakObjectPtr::operator=(&local_res8,0);
        *(undefined4 *)(lVar2 + 8) = local_res8;
        *(undefined4 *)(lVar2 + 0xc) = local_resc;
        break;
      }
    }
    lVar3 = lVar3 + 0x20;
  } while( true );
}



// FUNCTION 140a90fb0 FUN_140a90fb0 body=135 status=ok
// SIG undefined FUN_140a90fb0(void)

void FUN_140a90fb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0x378) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x178), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_38,&local_48);
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    local_10 = local_30;
    FUN_142399680(*(undefined8 *)(param_1 + 0x378),&local_18,&local_28,0,0,0);
  }
  return;
}



// FUNCTION 140a91040 FUN_140a91040 body=512 status=ok
// SIG undefined FUN_140a91040(void)

void FUN_140a91040(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1423437a0();
  plVar2 = *(longlong **)(param_1 + 0x378);
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
    *(undefined8 *)(param_1 + 0x378) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x4d8);
  uVar5 = (longlong)*(int *)(param_1 + 0x4e0) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x4e0) < plVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  plVar2 = *(longlong **)(param_1 + 0x4e8);
  uVar5 = (longlong)*(int *)(param_1 + 0x4f0) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x4f0) < plVar2) {
    uVar5 = uVar4;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  plVar2 = *(longlong **)(param_1 + 0x4f8);
  uVar5 = (longlong)*(int *)(param_1 + 0x500) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x500) < plVar2) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5);
  }
  plVar2 = *(longlong **)(param_1 + 0x388);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x390);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  if (*(int *)(param_1 + 0x4e4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4d8,0);
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4e8,0);
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if (*(int *)(param_1 + 0x504) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4f8,0);
  }
  return;
}



// FUNCTION 140a91240 FUN_140a91240 body=230 status=ok
// SIG undefined FUN_140a91240(void)

void FUN_140a91240(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = param_1;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
  }
  if (*(char *)(param_1 + 0x638) == '\x01') {
    uVar3 = FUN_142c98860(param_1 + 0x640,lVar2);
    *(undefined4 *)(param_1 + 0x72c) = uVar3;
    uVar3 = FUN_142c98860(param_1 + 0x678,lVar2);
    *(undefined4 *)(param_1 + 0x730) = uVar3;
    uVar3 = FUN_142c98860(param_1 + 0x6b0,lVar2);
    *(undefined4 *)(param_1 + 0x734) = uVar3;
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_14146f2e0();
  lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x1c8) = param_1;
    if (*(char *)(param_1 + 0x638) == '\x01') {
      *(undefined1 *)(lVar2 + 0x1c0) = 1;
    }
    *(longlong *)(param_1 + 0x740) = lVar2;
    FUN_14234b150(lVar2);
  }
  return;
}



// FUNCTION 140a91340 FUN_140a91340 body=1978 status=ok
// SIG undefined FUN_140a91340(void)

void FUN_140a91340(longlong *param_1,int *param_2,longlong *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  int *piVar18;
  longlong *plVar19;
  undefined8 local_res20;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined2 *local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined **local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  uint local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar7 != 0) && (iVar4 = FUN_1428cf800(lVar7), iVar4 != 3)) &&
     (lVar7 = *(longlong *)(param_2 + 0x88), lVar7 != 0)) {
    lVar8 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar3 = FUN_140a90240(param_1,lVar7), cVar3 != '\0')) {
      iVar5 = 0;
      iVar4 = *param_2;
      if (0 < (int)param_1[10]) {
        piVar18 = (int *)param_1[9];
        do {
          if (*piVar18 == iVar4) {
            piVar18 = (int *)param_1[9] + (longlong)iVar5 * 8;
            goto LAB_140a91484;
          }
          iVar5 = iVar5 + 1;
          piVar18 = piVar18 + 8;
        } while (iVar5 < (int)param_1[10]);
      }
      iVar5 = (int)param_1[10];
      *(int *)(param_1 + 10) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0x54) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 9,iVar5);
      }
      lVar8 = param_1[9];
      lVar15 = (longlong)iVar5 * 0x20;
      *(int *)(lVar15 + lVar8) = iVar4;
      *(undefined8 *)(lVar15 + 8 + lVar8) = 0;
      *(undefined8 *)(lVar15 + 0x10 + lVar8) = 0;
      *(undefined8 *)(lVar15 + 0x18 + lVar8) = 0;
      piVar18 = (int *)(param_1[9] + lVar15);
LAB_140a91484:
      local_res20 = 0;
      if ((*(longlong *)(piVar18 + 2) == 0) && (*(char *)(lVar7 + 0x309) != '\0')) {
        FString::PrintfImpl(&local_1d0,L"DOT_%d",*param_2);
        puVar16 = &DAT_143f3eda8;
        if (local_1c8 != 0) {
          puVar16 = local_1d0;
        }
        FName::FName(&local_res20,puVar16,1);
        if (local_1d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *(undefined8 *)(piVar18 + 2) = local_res20;
      }
      iVar4 = piVar18[6] + -1;
      if (-1 < iVar4) {
        plVar19 = (longlong *)(piVar18 + 4);
        lVar8 = (longlong)iVar4 << 4;
        do {
          lVar15 = *plVar19;
          lVar9 = FWeakObjectPtr::Get(lVar15 + lVar8);
          if (lVar9 != 0) {
            plVar12 = (longlong *)*param_3;
            plVar17 = plVar12 + (int)param_3[1];
            for (; plVar12 != plVar17; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar9) goto LAB_140a915ae;
            }
          }
          FUN_140a87ea0(param_1,lVar15 + lVar8,piVar18,lVar7);
          iVar5 = piVar18[6];
          iVar14 = (iVar5 - iVar4) + -1;
          if (0 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar8 + *plVar19),
                       (void *)((longlong)(iVar5 - iVar14) * 0x10 + *plVar19),(longlong)iVar14 << 4)
            ;
            iVar5 = piVar18[6];
          }
          piVar18[6] = iVar5 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar19);
LAB_140a915ae:
          lVar8 = lVar8 + -0x10;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      local_200 = 0;
      FUN_142d28010(param_1,param_2,&local_1e0,&local_200);
      uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      local_1b0 = FUN_14304c8c0(uVar10);
      FUN_142d27cb0(lVar7,&local_1c0,param_2 + 8);
      FUN_142d27c60(lVar7,&local_1b8,param_2 + 8);
      uVar10 = FWeakObjectPtr::Get(param_2 + 4);
      local_1f8 = FUN_142df3580(uVar10);
      if (local_1f8 == 0) {
        uVar10 = FWeakObjectPtr::Get(param_2 + 0x8a);
        local_1f8 = FUN_142df3580(uVar10);
      }
      plVar17 = (longlong *)*param_3;
      plVar19 = plVar17 + (int)param_3[1];
      local_1a8 = plVar19;
      if (plVar17 != plVar19) {
        do {
          lVar8 = *plVar17;
          if (lVar8 != 0) {
            lVar15 = *(longlong *)(piVar18 + 4);
            lVar9 = (longlong)piVar18[6] * 0x10 + lVar15;
            for (; lVar15 != lVar9; lVar15 = lVar15 + 0x10) {
              lVar11 = FWeakObjectPtr::Get(lVar15);
              if (lVar11 == lVar8) {
                if (lVar15 != 0) goto LAB_140a91726;
                break;
              }
            }
            lVar15 = FUN_142d29780(lVar8);
            if (lVar15 != 0) {
              iVar4 = piVar18[6];
              piVar18[6] = iVar4 + 1;
              if (piVar18[7] < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(piVar18 + 4,iVar4);
              }
              lVar15 = (longlong)iVar4 * 0x10 + *(longlong *)(piVar18 + 4);
              FWeakObjectPtr::operator=(lVar15,lVar8);
              FWeakObjectPtr::operator=(lVar15 + 8,0);
              lVar15 = *(longlong *)(piVar18 + 4) + (longlong)iVar4 * 0x10;
LAB_140a91726:
              uVar10 = FUN_142df3580(lVar8);
              uVar6 = FUN_142df3570(local_1f8,uVar10);
              cVar3 = FUN_142d1f280(lVar7 + 300,uVar6);
              if (cVar3 != '\0') {
                if (*(char *)(lVar7 + 0x309) != '\0') {
                  lVar11 = FUN_1413f82e0();
                  lVar9 = *(longlong *)(lVar8 + 0x10);
                  if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar11 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                      lVar11 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    FUN_140c57580(lVar8,CONCAT71((int7)((ulonglong)lVar9 >> 8),1),
                                  *(undefined8 *)(piVar18 + 2));
                  }
                }
                if (*(longlong *)(lVar7 + 0x2f8) != 0) {
                  lVar11 = UMapBuildDataRegistry::GetPrivateStaticClass();
                  for (lVar9 = *(longlong *)(lVar7 + 0x2f8); lVar9 != 0;
                      lVar9 = *(longlong *)(lVar9 + 0x30)) {
                    if (lVar9 == lVar11) {
                      if (*(longlong *)(lVar7 + 0x2f8) != 0) {
                        cVar3 = FWeakObjectPtr::IsValid((undefined4 *)(lVar15 + 8));
                        if ((cVar3 == '\0') && (local_1e0 != 0)) {
                          local_198 = &PTR_FUN_14422f7d8;
                          local_190 = 0;
                          local_188 = 0;
                          lStack_180 = 0;
                          local_178 = 0;
                          local_170 = 0;
                          local_168 = 0;
                          local_160 = 0;
                          local_158 = 0;
                          local_150 = 0;
                          local_148 = 0;
                          local_140 = 0;
                          local_108 = 0;
                          uStack_100 = 0;
                          FUN_142d979c0(&local_f0);
                          local_c8 = 0;
                          local_b0 = 0;
                          local_a8 = 0;
                          local_9c = 0;
                          local_98 = 0;
                          local_94 = 0x3f800000;
                          local_90 = 0x3f800000;
                          FWeakObjectPtr::operator=(local_80,0);
                          local_78 = 0;
                          local_108 = 0;
                          uStack_100 = 0;
                          local_138 = 0;
                          local_130 = 0;
                          local_128 = 0;
                          local_120 = 0;
                          local_118 = 0;
                          local_110 = 0x3f800000;
                          local_f8 = 0;
                          FUN_142d979a0(&local_58,0);
                          local_d0 = 0;
                          local_f0 = local_58;
                          uStack_ec = uStack_54;
                          uStack_e8 = uStack_50;
                          uStack_e4 = uStack_4c;
                          local_1f0 = 0;
                          local_e0 = local_48;
                          uStack_dc = uStack_44;
                          uStack_d8 = uStack_40;
                          uStack_d4 = uStack_3c;
                          local_c8 = 0;
                          local_c0 = 0;
                          local_bc = 0xbf800000;
                          local_b8 = 0;
                          local_a0 = 0x3f800000;
                          local_88 = 0;
                          FWeakObjectPtr::operator=(local_80,0);
                          local_1e8 = 0;
                          local_78 = 0;
                          local_188 = *(undefined8 *)(local_1e0 + 0x118);
                          local_138 = local_138 | 2;
                          local_178 = local_200;
                          local_150 = *(undefined8 *)(lVar7 + 0x300);
                          local_190 = *(undefined8 *)(lVar7 + 0x2f8);
                          local_108 = local_1c0;
                          lStack_180 = local_1e0;
                          uStack_100 = local_1b8;
                          local_120 = local_120 & 0xffffffff00000000;
                          local_160 = lVar8;
                          FUN_14303ae50(local_1b0,&local_res20,&local_198);
                          lVar8 = FWeakObjectPtr::Get(&local_res20);
                          if (lVar8 != 0) {
                            uVar6 = (undefined4)local_res20;
                            uVar2 = local_res20._4_4_;
                            local_68 = FUN_140a90f10;
                            uStack_60 = 0;
                            plVar19 = (longlong *)(lVar8 + 0x28);
                            plVar12 = (longlong *)FMemory::Realloc(0,0x30);
                            if (plVar12 != (longlong *)0x0) {
                              *plVar12 = (longlong)&PTR_FUN_144230918;
                              FWeakObjectPtr::operator=(plVar12 + 1,param_1);
                              *(undefined4 *)(plVar12 + 2) = (undefined4)local_68;
                              *(undefined4 *)((longlong)plVar12 + 0x14) = local_68._4_4_;
                              *(undefined4 *)(plVar12 + 3) = uStack_60;
                              *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_5c;
                              *(undefined4 *)(plVar12 + 4) = uVar6;
                              *(undefined4 *)((longlong)plVar12 + 0x24) = uVar2;
                              lVar9 = FDelegateHandle::GenerateNewID();
                              plVar12[5] = lVar9;
                              *plVar12 = (longlong)&PTR_FUN_144230960;
                              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                                        (plVar19,1);
                              (**(code **)(*plVar12 + 0x20))(plVar12,&local_1d0);
                              iVar4 = *(int *)(lVar8 + 0x30);
                              *(int *)(lVar8 + 0x30) = iVar4 + 1;
                              if (*(int *)(lVar8 + 0x34) < iVar4 + 1) {
                                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar4);
                              }
                              puVar13 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar19);
                              *puVar13 = plVar12;
                              *(undefined4 *)(puVar13 + 1) = 3;
                            }
                            *(undefined4 *)(lVar15 + 8) = (undefined4)local_res20;
                            *(undefined4 *)(lVar15 + 0xc) = local_res20._4_4_;
                            plVar19 = local_1a8;
                          }
                          local_198 = &PTR_FUN_14422f7d8;
                          FWeakObjectPtr::operator=(local_80,0);
                          local_1d8 = 0;
                          local_78 = 0;
                          if (local_b0 != 0) {
                            FMemory::Free();
                          }
                        }
                      }
                      break;
                    }
                  }
                }
              }
            }
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar19);
      }
    }
  }
  return;
}



// FUNCTION 140a91b00 FUN_140a91b00 body=325 status=ok
// SIG undefined FUN_140a91b00(void)

void FUN_140a91b00(longlong *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  FUN_142d20880();
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 == 0) {
    return;
  }
  iVar3 = FUN_1428cf800(lVar4);
  if (iVar3 == 3) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0x88);
  if (lVar4 != 0) {
    lVar5 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140a91b85;
  }
  lVar4 = 0;
LAB_140a91b85:
  cVar2 = FUN_140a90240();
  if (cVar2 != '\0') {
    iVar3 = 0;
    if (0 < (int)param_1[10]) {
      lVar5 = 0;
      piVar6 = (int *)param_1[9];
      while (*piVar6 != *param_2) {
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + 1;
        piVar6 = piVar6 + 8;
        if ((int)param_1[10] <= lVar5) {
          return;
        }
      }
      piVar6 = (int *)param_1[9] + (longlong)iVar3 * 8;
      if (piVar6 != (int *)0x0) {
        iVar3 = 0;
        if (0 < piVar6[6]) {
          do {
            FUN_140a87ea0(param_1,(longlong)iVar3 * 0x10 + *(longlong *)(piVar6 + 4),piVar6,lVar4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < piVar6[6]);
        }
        *piVar6 = -1;
        piVar6[6] = 0;
        if (piVar6[7] != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(piVar6 + 4,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140a91c50 FUN_140a91c50 body=100 status=ok
// SIG undefined FUN_140a91c50(void)

void FUN_140a91c50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_18 [2];
  
  iVar3 = FUN_14233f450();
  if (iVar3 == 3) {
    FUN_140a8bb80(param_1);
  }
  if ((undefined8 *)(param_1 + 0x2f8) != local_18) {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    plVar2 = *(longlong **)(param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140a91caa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a91cc0 FUN_140a91cc0 body=430 status=ok
// SIG undefined FUN_140a91cc0(void)

void FUN_140a91cc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_142d404c0();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0x30;
  lVar5 = FWeakObjectPtr::Get(lVar7);
  lVar8 = 0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar6 + 0x38)) && (*(longlong *)(lVar6 + 0x40) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar6 + 0x38) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (lVar5 != 0) goto LAB_140a91d6d;
    }
  }
  else {
LAB_140a91d6d:
    lVar6 = FUN_142e0ceb0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = FUN_1414150f0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140a91ddc;
    }
  }
  lVar5 = lVar8;
LAB_140a91ddc:
  *(longlong *)(param_1 + 0x370) = lVar5;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x978);
  }
  *(longlong *)(param_1 + 0x380) = lVar8;
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0x7a0);
    plVar1 = (longlong *)(param_1 + 0x508);
    iVar3 = *(int *)(param_1 + 0x510);
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 0x510) = iVar2;
      if (*(int *)(param_1 + 0x514) < iVar2) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar3 * 0x10 + *plVar1),0,(longlong)(iVar2 - iVar3) << 4);
    }
    else if (iVar2 < iVar3) {
      TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl(plVar1,iVar2,iVar3 - iVar2,1)
      ;
    }
  }
  return;
}



// FUNCTION 140a91e70 FUN_140a91e70 body=40 status=ok
// SIG undefined FUN_140a91e70(void)

void FUN_140a91e70(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x974) = *(undefined1 *)(param_1 + 0x78c);
  FUN_142d20c10();
  FUN_140a9a480(param_1);
  return;
}



// FUNCTION 140a91ea0 FUN_140a91ea0 body=101 status=ok
// SIG undefined FUN_140a91ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a91ea0(longlong param_1)

{
  char cVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140a88e40(param_1);
  if ((*(int *)(param_1 + 0x960) != 0) && (*(longlong **)(param_1 + 0x958) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x958) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x960) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a91eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x958) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a91efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140a91f10 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UChatter::BeginDestroy(undefined8 param_1)

{
  UFlowChart::BeginDestroy();
  FUN_140a9b9f0(param_1);
  return;
}



// FUNCTION 140a91f30 FUN_140a91f30 body=533 status=ok
// SIG undefined FUN_140a91f30(void)

void FUN_140a91f30(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  
  iVar17 = 0;
  if (0 < *(int *)(param_1 + 0x4c0)) {
    plVar1 = (longlong *)(param_1 + 0x4c8);
    lVar16 = 0;
    do {
      lVar12 = *plVar1;
      lVar13 = (longlong)*(int *)(param_1 + 0x4d0);
      lVar7 = *(longlong *)(param_1 + 0x4b8);
      lVar15 = lVar12 + lVar13 * 0x48;
      if (lVar12 != lVar15) {
        do {
          if (*(char *)(lVar12 + 0x46) == *(char *)(lVar7 + 0x46 + lVar16)) goto LAB_140a9203d;
          lVar12 = lVar12 + 0x48;
        } while (lVar12 != lVar15);
      }
      iVar10 = *(int *)(param_1 + 0x4d0) + 1;
      *(int *)(param_1 + 0x4d0) = iVar10;
      if (*(int *)(param_1 + 0x4d4) < iVar10) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      uVar5 = ((undefined8 *)(lVar7 + lVar16))[1];
      lVar15 = *plVar1;
      puVar2 = (undefined8 *)(lVar15 + lVar13 * 0x48);
      *puVar2 = *(undefined8 *)(lVar7 + lVar16);
      puVar2[1] = uVar5;
      puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar16);
      uVar5 = puVar2[1];
      puVar14 = (undefined8 *)(lVar15 + 0x10 + lVar13 * 0x48);
      *puVar14 = *puVar2;
      puVar14[1] = uVar5;
      puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar16);
      uVar5 = puVar2[1];
      puVar14 = (undefined8 *)(lVar15 + 0x20 + lVar13 * 0x48);
      *puVar14 = *puVar2;
      puVar14[1] = uVar5;
      puVar3 = (undefined4 *)(lVar7 + 0x30 + lVar16);
      uVar6 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(lVar15 + 0x30 + lVar13 * 0x48);
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      *(undefined8 *)(lVar15 + 0x40 + lVar13 * 0x48) = *(undefined8 *)(lVar7 + 0x40 + lVar16);
      lVar12 = *plVar1;
      uVar5 = *(undefined8 *)(lVar12 + 0x20 + lVar13 * 0x48);
      lVar15 = lVar12 + lVar13 * 0x48;
      *(undefined4 *)(lVar15 + 0x40) = *(undefined4 *)(lVar12 + 0x38 + lVar13 * 0x48);
      *(undefined8 *)(lVar15 + 0x2c) = uVar5;
      *(undefined4 *)(lVar15 + 0x34) = *(undefined4 *)(lVar15 + 0x28);
      if (*(longlong *)(param_1 + 0x370) != 0) {
        FUN_140a9bd60(param_1,lVar15);
        uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x370) + 0x684);
        *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)(lVar15 + 0x34);
        *(undefined4 *)(lVar15 + 0xc) = uVar6;
      }
LAB_140a9203d:
      iVar17 = iVar17 + 1;
      lVar16 = lVar16 + 0x48;
    } while (iVar17 < *(int *)(param_1 + 0x4c0));
  }
  iVar17 = *(int *)(param_1 + 0x4d0) + -1;
  if (-1 < iVar17) {
    plVar1 = (longlong *)(param_1 + 0x4c8);
    lVar15 = (longlong)iVar17 * 0x48;
    lVar12 = (longlong)*(int *)(param_1 + 0x4d0) * 0x48;
    lVar16 = lVar15;
    do {
      puVar14 = *(undefined8 **)(param_1 + 0x4b8);
      puVar2 = puVar14 + (longlong)*(int *)(param_1 + 0x4c0) * 9;
      if (puVar14 != puVar2) {
        do {
          if (*(char *)((longlong)puVar14 + 0x46) == *(char *)(*plVar1 + 0x46 + lVar15)) {
            if (puVar14 != (undefined8 *)0x0) {
              *(undefined8 *)(*plVar1 + lVar15) = *puVar14;
              lVar7 = *plVar1;
              *(undefined8 *)(lVar7 + 0x20 + lVar15) = puVar14[4];
              *(undefined4 *)(lVar7 + 0x28 + lVar15) = *(undefined4 *)(puVar14 + 5);
              goto LAB_140a920f8;
            }
            break;
          }
          puVar14 = puVar14 + 9;
        } while (puVar14 != puVar2);
      }
      iVar10 = *(int *)(param_1 + 0x4d0);
      iVar11 = (iVar10 - iVar17) + -1;
      if (iVar11 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar16),(void *)(lVar12 + *plVar1),(longlong)iVar11 * 0x48);
        iVar10 = *(int *)(param_1 + 0x4d0);
      }
      *(int *)(param_1 + 0x4d0) = iVar10 + -1;
      TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(plVar1);
LAB_140a920f8:
      lVar12 = lVar12 + -0x48;
      lVar16 = lVar16 + -0x48;
      lVar15 = lVar15 + -0x48;
      iVar17 = iVar17 + -1;
    } while (-1 < iVar17);
  }
  return;
}



// FUNCTION 140a92150 FUN_140a92150 body=314 status=ok
// SIG undefined FUN_140a92150(void)

void FUN_140a92150(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (cVar5 = (**(code **)(*plVar3 + 0x778))(plVar3), cVar5 != '\0')) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2e0);
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    lVar7 = FUN_142e20fc0();
    lVar6 = *(longlong *)(param_1 + 0x2d8);
    lVar9 = lVar6;
    if (lVar6 != 0) {
      while (lVar9 != lVar7) {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        if (lVar9 == 0) {
          return;
        }
      }
      if ((lVar6 != 0) && (plVar3 = *(longlong **)(param_1 + 0x118), plVar3 != (longlong *)0x0)) {
        uVar8 = FUN_142e27720();
        lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar8);
        if ((lVar6 != 0) &&
           (FUN_140a947f0(param_1,local_18,lVar6,*(undefined8 *)(param_1 + 0x2d8)),
           local_10 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_10 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
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
      }
    }
  }
  return;
}



// FUNCTION 140a92290 FUN_140a92290 body=523 status=ok
// SIG undefined FUN_140a92290(void)

void FUN_140a92290(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar8;
  longlong lVar7;
  
  lVar8 = *param_2;
  lVar7 = 0;
  lVar6 = 0;
  if (lVar8 == 0) {
LAB_140a922eb:
    lVar8 = lVar7;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a922eb;
  }
  cVar2 = FUN_140a8f2b0(param_1);
  if (cVar2 == '\0') {
    if ((char)param_2[2] == '\0') {
      cVar2 = FUN_140a8f420(param_1,lVar8);
      if (cVar2 != '\0') {
        FUN_140b3aa20(param_1,param_2);
        return;
      }
    }
    else {
      if ((char)param_2[2] != '\x01') {
        return;
      }
      cVar2 = FUN_140a8f420(param_1,lVar8);
      if (cVar2 == '\0') {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x560) == 0) {
      return;
    }
    if (lVar8 == 0) {
      return;
    }
    FUN_14145df70(lVar8,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x560) + 0x208));
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) {
LAB_140a92345:
    lVar3 = lVar7;
  }
  else {
    lVar4 = AGBattleRoyaleGameState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140a92345;
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    if (lVar8 == 0) {
      return;
    }
    if (lVar3 != 0) {
      FUN_14145e690(lVar8,*(longlong *)(param_1 + 0x760),*(undefined8 *)(lVar3 + 0x460),param_1);
      return;
    }
  }
  if (lVar8 == 0) {
    return;
  }
  lVar8 = *(longlong *)(lVar8 + 0x990);
  if (lVar8 == 0) {
    return;
  }
  uVar5 = FUN_140c46b40(lVar8);
  cVar2 = FUN_140e85c60(*(undefined8 *)(param_1 + 0x750),uVar5);
  if (cVar2 == '\0') {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x750) + 0x70);
    if (lVar7 == 0) goto LAB_140a92412;
    uVar5 = FUN_140c428a0(lVar8);
    lVar3 = FUN_140e7f8d0(uVar5,lVar7);
  }
  else {
    lVar3 = (**(code **)(*(longlong *)(lVar8 + 0xd88) + 0xf0))((longlong *)(lVar8 + 0xd88),0);
    lVar6 = lVar7;
    if ((lVar3 == 0) ||
       ((lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x750) + 0x80), lVar7 != 0 &&
        (*(longlong *)(lVar3 + 0x480) != lVar7)))) goto LAB_140a92412;
  }
  lVar6 = lVar3;
LAB_140a92412:
  FUN_140a8fd30(param_1,lVar8,lVar6);
  return;
}



// FUNCTION 140a924a0 FUN_140a924a0 body=329 status=ok
// SIG undefined FUN_140a924a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a924a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_248 [32];
  longlong local_228 [42];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  longlong local_88;
  undefined1 local_74;
  undefined1 local_6c;
  undefined1 local_60;
  longlong local_48;
  ulonglong local_28;
  
  if (param_3 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_248;
    lVar1 = FUN_142d19dd0();
    if (lVar1 != 0) {
      FUN_140a7a8d0(local_228,param_3 + 0x350);
      local_228[0] = lVar1;
      plVar2 = (longlong *)thunk_FUN_142d54de0();
      if (plVar2 != (longlong *)0x0) {
        FUN_140a7d9f0(plVar2 + 0x6a,local_228);
        (**(code **)(*plVar2 + 0x10))(plVar2,local_228);
        FUN_142d29b80(lVar1,param_2,plVar2);
        FUN_142d266f0(plVar2);
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      local_60 = 0;
      local_6c = 0;
      local_74 = 0;
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        plVar2 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar2 = local_b8;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140a925f0 FUN_140a925f0 body=196 status=ok
// SIG undefined FUN_140a925f0(void)

undefined8 FUN_140a925f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = FUN_142d20fd0();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    return 1;
  }
  plVar1 = *(longlong **)(param_2 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = plVar1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar5 = plVar1[0x1f];
      if (lVar5 == 0) goto LAB_140a9268b;
    }
    lVar4 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar2 = *(char *)(lVar5 + 0x131);
      goto LAB_140a9268d;
    }
  }
LAB_140a9268b:
  cVar2 = '\0';
LAB_140a9268d:
  if (*(char *)(param_1 + 0x99) != cVar2) {
    return 0;
  }
  return 1;
}



// FUNCTION 140a926c0 FUN_140a926c0 body=10 status=ok
// SIG undefined FUN_140a926c0(void)

void FUN_140a926c0(undefined8 param_1)

{
  FUN_140a926d0(param_1,1,0);
  return;
}


